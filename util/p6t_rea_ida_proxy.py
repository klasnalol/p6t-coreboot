#!/usr/bin/env python3
# SPDX-License-Identifier: GPL-2.0-only
"""Bridge REA 6.7 decompile pagination to the installed whole-function IDA API.

Only decompile result formatting is adapted. Function text is obtained from IDA
unchanged, split into lines, and paged locally. No database content is modified.
The child command is explicit; no global MCP configuration is changed.
"""

import json
import subprocess
import sys
import threading


def page_decompile(payload, offset, limit):
    result = dict(payload)
    if result.get("error") is None:
        result.pop("error", None)
    code = result.get("code")
    if isinstance(code, str):
        lines = code.split("\n")
        selected = lines[offset:offset + limit]
        end = offset + len(selected)
        result.update(code="\n".join(selected), line_count=len(selected),
                      total_lines=len(lines),
                      cursor={"next": end} if end < len(lines) else {"done": True})
    else:
        result["cursor"] = {"done": True}
    return result


def main():
    command = sys.argv[1:]
    if command[:1] == ["--"]:
        command = command[1:]
    if not command:
        raise SystemExit("usage: p6t_rea_ida_proxy.py -- CHILD [ARGS...]")
    child = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                             text=True, bufsize=1)
    pending = {}
    lock = threading.Lock()

    def forward_output():
        for line in child.stdout:
            message = json.loads(line)
            with lock:
                page = pending.pop(message.get("id"), None)
            result = message.get("result")
            if isinstance(result, dict) and isinstance(result.get("tools"), list):
                for tool in result["tools"]:
                    if tool.get("name") != "decompile":
                        continue
                    inputs = tool["inputSchema"].setdefault("properties", {})
                    inputs.update(offset={"type": "integer", "minimum": 0},
                                  max_lines={"type": "integer", "minimum": 1})
                    outputs = tool.get("outputSchema", {}).setdefault("properties", {})
                    outputs.update(cursor={"type": "object"},
                                   line_count={"type": "integer"},
                                   total_lines={"type": "integer"})
            if page and isinstance(result, dict) and not result.get("isError"):
                payload = result.get("structuredContent")
                if payload is None:
                    texts = [item["text"] for item in result.get("content", [])
                             if item.get("type") == "text"]
                    if len(texts) == 1:
                        payload = json.loads(texts[0])
                if isinstance(payload, dict) and "code" in payload:
                    payload = page_decompile(payload, *page)
                    result["structuredContent"] = payload
                    result["content"] = [{"type": "text", "text": json.dumps(payload)}]
            print(json.dumps(message), flush=True)

    output = threading.Thread(target=forward_output)
    output.start()
    try:
        for line in sys.stdin:
            message = json.loads(line)
            params = message.get("params", {})
            if message.get("method") == "tools/call" and params.get("name") == "decompile":
                arguments = params.setdefault("arguments", {})
                offset = arguments.pop("offset", 0)
                limit = arguments.pop("max_lines", 100)
                if not isinstance(offset, int) or offset < 0 or not isinstance(limit, int) or limit < 1:
                    raise ValueError("invalid decompile page")
                with lock:
                    pending[message["id"]] = (offset, limit)
            child.stdin.write(json.dumps(message) + "\n")
            child.stdin.flush()
    finally:
        child.stdin.close()
        child.wait()
        output.join()


if __name__ == "__main__":
    main()
