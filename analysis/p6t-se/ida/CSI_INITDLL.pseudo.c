// Generated static IDA pseudocode; not original source or a compilable implementation.
// Function boundaries and types are inferred. No hardware execution was observed.

/* 0xfffe7000 DllEntryPoint */
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  char *v3; // ebp

  v3 = (char *)hinstDLL + 618; /*0xfffe700f*/
  sub_FFFEC504((char *)hinstDLL + 618, 0, 473, 1); /*0xfffe7018*/
  sub_FFFE9DB0(); /*0xfffe7021*/
  sub_FFFEC753((char *)hinstDLL + 618, 160); /*0xfffe702c*/
  sub_FFFEADE7(); /*0xfffe7031*/
  sub_FFFEC753((char *)hinstDLL + 618, 161); /*0xfffe703c*/
  sub_FFFEC79E((char *)hinstDLL + 618); /*0xfffe7042*/
  sub_FFFEC753((char *)hinstDLL + 618, 162); /*0xfffe704d*/
  sub_FFFE9125(); /*0xfffe7054*/
  sub_FFFEC753((char *)hinstDLL + 618, 163); /*0xfffe705f*/
  sub_FFFE8D50(); /*0xfffe7066*/
  sub_FFFEC753((char *)hinstDLL + 618, 164); /*0xfffe7071*/
  sub_FFFE8F91(); /*0xfffe7076*/
  sub_FFFEE284((char *)hinstDLL + 618); /*0xfffe707c*/
  if ( *((_BYTE *)hinstDLL + 935) ) /*0xfffe708a*/
    sub_FFFEACB6((char *)hinstDLL + 618, (char *)hinstDLL + 926); /*0xfffe7092*/
  sub_FFFEB04B(); /*0xfffe709b*/
  if ( *((_BYTE *)hinstDLL + 1095) && ((_BYTE)hinstDLL[273] & 1) != 0 ) /*0xfffe70b0*/
  {
    if ( (*((_BYTE *)hinstDLL + 11) & 2) == 0 ) /*0xfffe7197*/
      return sub_FFFEC6A7(v3, 232); /*0xfffe71a6*/
    return sub_FFFEC6A7(v3, 235); /*0xfffe719e*/
  }
  if ( (*((_BYTE *)hinstDLL + 11) & 2) != 0 ) /*0xfffe70ba*/
    return sub_FFFEC6A7(v3, 235); /*0xfffe70ba*/
  sub_FFFEC753(v3, 170); /*0xfffe70c6*/
  sub_FFFEA405(); /*0xfffe70cf*/
  if ( sub_FFFE737B() ) /*0xfffe70d6*/
  {
    if ( (*((_BYTE *)hinstDLL + 11) & 1) == 0 ) /*0xfffe717d*/
      return sub_FFFEC753(v3, 233); /*0xfffe7191*/
    return sub_FFFEC753(v3, 236); /*0xfffe7184*/
  }
  if ( (*((_BYTE *)hinstDLL + 11) & 1) != 0 ) /*0xfffe70e7*/
    return sub_FFFEC753(v3, 236); /*0xfffe70e7*/
  sub_FFFEA2DE(); /*0xfffe70ef*/
  sub_FFFEC753(v3, 171); /*0xfffe70fa*/
  if ( *((_BYTE *)hinstDLL + 935) ) /*0xfffe70ff*/
  {
    sub_FFFED79F((char *)hinstDLL + 926); /*0xfffe710b*/
    sub_FFFE7F84(v3); /*0xfffe7111*/
    sub_FFFEE1DB(v3); /*0xfffe7117*/
  }
  sub_FFFEC753(v3, 172); /*0xfffe7125*/
  sub_FFFE97CE(); /*0xfffe712c*/
  sub_FFFEC753(v3, 173); /*0xfffe7137*/
  sub_FFFEA883(); /*0xfffe713e*/
  sub_FFFEC753(v3, 174); /*0xfffe7149*/
  sub_FFFEAC0E(); /*0xfffe714e*/
  sub_FFFEC753(v3, 175); /*0xfffe7159*/
  sub_FFFE72FE(v3); /*0xfffe7164*/
  return sub_FFFEC753(v3, 234); /*0xfffe71ad*/
}

/* 0xfffe71b2 sub_FFFE71B2 */
bool __cdecl sub_FFFE71B2(int a1)
{
  return *(_BYTE *)(a1 + 462) == 1; /*0xfffe71c0*/
}

/* 0xfffe71c1 sub_FFFE71C1 */
bool __thiscall sub_FFFE71C1(_BYTE *this)
{
  return *(this + 317) != 0; /*0xfffe71cd*/
}

/* 0xfffe71ce sub_FFFE71CE */
bool __cdecl sub_FFFE71CE(_BYTE *a1)
{
  return sub_FFFE71C1(a1) == 2; /*0xfffe71dc*/
}

/* 0xfffe71dd sub_FFFE71DD */
char __usercall sub_FFFE71DD@<al>(int a1@<esi>)
{
  unsigned __int8 v1; // bl
  int v2; // eax
  unsigned __int8 v3; // dl
  unsigned __int8 v4; // cl

  v1 = 0; /*0xfffe71df*/
  while ( 1 ) /*0xfffe71e4*/
  {
    v2 = 154 * v1; /*0xfffe71e4*/
    if ( *(_BYTE *)(v2 + a1 + 9) ) /*0xfffe71ea*/
    {
      v3 = *(_BYTE *)(v2 + a1 + 11); /*0xfffe71f1*/
      v4 = 0; /*0xfffe71f5*/
      if ( v3 ) /*0xfffe71f9*/
        break; /*0xfffe71f9*/
    }
LABEL_6:
    if ( ++v1 >= 2u ) /*0xfffe7215*/
      return -1; /*0xfffe7215*/
  }
  while ( !*(_BYTE *)(v2 + 68 * v4 + a1 + 33) ) /*0xfffe7208*/
  {
    if ( ++v4 >= v3 ) /*0xfffe720e*/
      goto LABEL_6; /*0xfffe720e*/
  }
  if ( *(_BYTE *)(68 * v4 + a1 + 154 * v1 + 77) == 18 ) /*0xfffe7235*/
    return 1; /*0xfffe7248*/
  if ( *(_BYTE *)(68 * v4 + a1 + 154 * v1 + 77) == 22 ) /*0xfffe723a*/
    return 2; /*0xfffe7244*/
  if ( *(_BYTE *)(68 * v4 + a1 + 154 * v1 + 77) != 24 ) /*0xfffe723e*/
    return -1; /*0xfffe721b*/
  return 3; /*0xfffe7219*/
}

/* 0xfffe724c sub_FFFE724C */
int __cdecl sub_FFFE724C(_BYTE *a1)
{
  char v2; // bl
  _BYTE *v3; // eax
  _BYTE *v4; // esi
  int v5; // edi
  unsigned __int8 v6; // dl
  _BYTE *v7; // eax
  int v8; // esi
  char v9; // al
  int v10; // edx
  _BYTE *v11; // ecx
  char v12; // al
  bool v13; // zf
  char v14; // al
  int v16; // [esp+Ch] [ebp+8h]

  v2 = 0; /*0xfffe7254*/
  v3 = a1 + 11; /*0xfffe7256*/
  v16 = 2; /*0xfffe7259*/
  do /*0xfffe7289*/
  {
    if ( *(v3 - 2) && *v3 ) /*0xfffe7267*/
    {
      v4 = v3 + 23; /*0xfffe726d*/
      v5 = (unsigned __int8)*v3; /*0xfffe7270*/
      do /*0xfffe727f*/
      {
        if ( *(v4 - 1) ) /*0xfffe7273*/
          v2 += *v4; /*0xfffe7279*/
        v4 += 68; /*0xfffe727b*/
        --v5; /*0xfffe727e*/
      }
      while ( v5 ); /*0xfffe727f*/
    }
    v3 += 154; /*0xfffe7281*/
    --v16; /*0xfffe7286*/
  }
  while ( v16 ); /*0xfffe7289*/
  if ( a1[317] ) /*0xfffe728b*/
  {
    v6 = a1[319]; /*0xfffe7294*/
    if ( v6 ) /*0xfffe729c*/
    {
      v7 = a1 + 342; /*0xfffe729e*/
      v8 = v6; /*0xfffe72a4*/
      do /*0xfffe72b3*/
      {
        if ( *(v7 - 1) ) /*0xfffe72a7*/
          v2 += *v7; /*0xfffe72ad*/
        v7 += 68; /*0xfffe72af*/
        --v8; /*0xfffe72b2*/
      }
      while ( v8 ); /*0xfffe72b3*/
    }
  }
  v9 = sub_FFFE71C1(a1); /*0xfffe72ba*/
  if ( v11[462] != (_BYTE)v10 ) /*0xfffe72c5*/
  {
    if ( v9 == 2 && v2 == 8 ) /*0xfffe72e5*/
      return v10; /*0xfffe72e5*/
    v14 = sub_FFFE71C1(v11); /*0xfffe72e7*/
    if ( v14 != (_BYTE)v10 ) /*0xfffe72ee*/
      return 0; /*0xfffe72ee*/
    v13 = v2 == 6; /*0xfffe72f0*/
    goto LABEL_24; /*0xfffe72f0*/
  }
  if ( v9 == 2 && v2 == 4 ) /*0xfffe72ce*/
    return v10; /*0xfffe72ce*/
  v12 = sub_FFFE71C1(v11); /*0xfffe72d0*/
  if ( v12 == (_BYTE)v10 ) /*0xfffe72d7*/
  {
    v13 = v2 == 2; /*0xfffe72d9*/
LABEL_24:
    if ( v13 ) /*0xfffe72f3*/
      return v10; /*0xfffe72f7*/
  }
  return 0; /*0xfffe72fb*/
}

/* 0xfffe72fe sub_FFFE72FE */
int __usercall sub_FFFE72FE@<eax>(unsigned __int8 a1@<al>, _BYTE *a2@<ecx>, _BYTE *a3@<edi>)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int result; // eax

  v3 = a1 - 1; /*0xfffe7301*/
  if ( v3 ) /*0xfffe7305*/
  {
    v5 = v3 - 1; /*0xfffe7307*/
    if ( !v5 ) /*0xfffe7308*/
    {
      a3[1091] |= 0x86u; /*0xfffe734e*/
LABEL_8:
      a3[1095] = 1; /*0xfffe731f*/
      goto LABEL_14; /*0xfffe7326*/
    }
    v6 = v5 - 1; /*0xfffe730a*/
    if ( v6 ) /*0xfffe730b*/
    {
      v7 = v6 - 1; /*0xfffe730d*/
      if ( v7 ) /*0xfffe730e*/
      {
        v8 = v7 - 1; /*0xfffe7310*/
        if ( v8 ) /*0xfffe7311*/
        {
          if ( v8 != 1 ) /*0xfffe7314*/
            goto LABEL_14; /*0xfffe7314*/
          *(_WORD *)(a3 + 1091) |= 0x206u; /*0xfffe7316*/
        }
        else
        {
          *(_DWORD *)(a3 + 1091) |= 0x46u; /*0xfffe7328*/
        }
      }
      else
      {
        *(_DWORD *)(a3 + 1091) |= 0x26u; /*0xfffe7331*/
      }
      goto LABEL_8; /*0xfffe7316*/
    }
    *(_DWORD *)(a3 + 1091) |= 1u; /*0xfffe733a*/
    a3[1101] = sub_FFFE71DD((int)a2); /*0xfffe7346*/
  }
  else
  {
    *(_WORD *)(a3 + 1091) |= 0x106u; /*0xfffe7357*/
    a3[1095] = 2; /*0xfffe7360*/
  }
LABEL_14:
  result = sub_FFFE724C(a2); /*0xfffe7367*/
  if ( result ) /*0xfffe7371*/
    *(_DWORD *)(a3 + 1091) |= 0x10u; /*0xfffe7373*/
  return result; /*0xfffe7370*/
}

/* 0xfffe737b sub_FFFE737B */
BOOL __usercall sub_FFFE737B@<eax>(int a1@<eax>)
{
  int v1; // ecx
  BOOL result; // eax

  result = false; /*0xfffe73a5*/
  if ( *(_BYTE *)(a1 + 1095) ) /*0xfffe737b*/
  {
    v1 = *(_DWORD *)(a1 + 1091); /*0xfffe7384*/
    if ( (v1 & 0x20) != 0 || (v1 & 0x40) != 0 || (v1 & 0x80u) != 0 && *(_BYTE *)(a1 + 6) ) /*0xfffe7398*/
      return true; /*0xfffe7398*/
    if ( (v1 & 0x100) != 0 ) /*0xfffe73a1*/
      return true; /*0xfffe7382*/
  }
  return result; /*0xfffe73a6*/
}

/* 0xfffe73ee sub_FFFE73EE */
unsigned int __usercall sub_FFFE73EE@<eax>(int a1@<esi>)
{
  int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int result; // eax

  *(_DWORD *)(a1 + 27) = sub_FFFEC1F2( /*0xfffe7410*/
                           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
                           *(unsigned __int8 *)(a1 + 4),
                           *(_BYTE *)(a1 + 6),
                           *(_BYTE *)(a1 + 11),
                           204);
  *(_DWORD *)(a1 + 31) = sub_FFFEC1F2( /*0xfffe7435*/
                           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
                           *(unsigned __int8 *)(a1 + 4),
                           *(_BYTE *)(a1 + 6),
                           *(_BYTE *)(a1 + 11),
                           208);
  v1 = sub_FFFEC1F2( /*0xfffe7455*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 6),
         *(_BYTE *)(a1 + 11),
         212);
  *(_BYTE *)(a1 + 38) = v1; /*0xfffe745c*/
  *(_BYTE *)(a1 + 37) = BYTE1(v1); /*0xfffe7462*/
  *(_BYTE *)(a1 + 35) = HIBYTE(v1); /*0xfffe746a*/
  LOBYTE(v1) = *(_BYTE *)(a1 + 11); /*0xfffe746f*/
  *(_BYTE *)(a1 + 36) = BYTE2(v1); /*0xfffe747a*/
  v2 = sub_FFFEC1F2(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14), *(unsigned __int8 *)(a1 + 4), *(_BYTE *)(a1 + 6), v1, 216); /*0xfffe7490*/
  *(_BYTE *)(a1 + 41) = BYTE1(v2); /*0xfffe749a*/
  *(_BYTE *)(a1 + 42) = v2; /*0xfffe749f*/
  v3 = HIWORD(v2); /*0xfffe74a2*/
  result = HIBYTE(v2); /*0xfffe74a5*/
  *(_BYTE *)(a1 + 40) = v3; /*0xfffe74ab*/
  *(_BYTE *)(a1 + 39) = result; /*0xfffe74ae*/
  return result; /*0xfffe74b1*/
}

/* 0xfffe74b2 sub_FFFE74B2 */
signed int __usercall sub_FFFE74B2@<eax>(int a1@<eax>)
{
  signed int result; // eax

  if ( !sub_FFFEC541(a1) ) /*0xfffe74b6*/
    return sub_FFFE73EE(a1); /*0xfffe74ec*/
  result = sub_FFFEC1F2( /*0xfffe74da*/
             *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
             *(unsigned __int8 *)(a1 + 4),
             *(_BYTE *)(a1 + 6),
             *(_BYTE *)(a1 + 11),
             80);
  if ( result < 0 ) /*0xfffe74e4*/
    *(_BYTE *)(a1 + 67) = 1; /*0xfffe74e6*/
  return result; /*0xfffe74ea*/
}

/* 0xfffe74f3 sub_FFFE74F3 */
int __usercall sub_FFFE74F3@<eax>(int a1@<esi>)
{
  int v1; // edi
  int result; // eax
  char v3; // cl
  char v4; // al
  int v5; // eax

  v1 = 512; /*0xfffe74f5*/
  result = sub_FFFEC541(); /*0xfffe74fa*/
  if ( !result ) /*0xfffe7502*/
  {
    if ( *(_BYTE *)(a1 + 18) ) /*0xfffe7508*/
      v1 = 640; /*0xfffe750d*/
    v3 = sub_FFFEC1F2(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14), *(unsigned __int8 *)(a1 + 4), 20, 2, v1); /*0xfffe7528*/
    *(_BYTE *)(a1 + 64) = (v3 & 0x10) != 0; /*0xfffe752f*/
    v4 = *(_BYTE *)(a1 + 10); /*0xfffe7534*/
    *(_BYTE *)(a1 + 63) = (v3 & 0x20) != 0; /*0xfffe7543*/
    v5 = sub_FFFEC1F2( /*0xfffe7559*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(unsigned __int8 *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           v4,
           2080);
    *(_WORD *)(a1 + 65) = v5; /*0xfffe755e*/
    return sub_FFFEC306( /*0xfffe7581*/
             *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
             *(_BYTE *)(a1 + 4),
             *(_BYTE *)(a1 + 5),
             *(_BYTE *)(a1 + 10),
             2080,
             v5 & 0xFFFF0000);
  }
  return result; /*0xfffe7589*/
}

/* 0xfffe758b sub_FFFE758B */
int __usercall sub_FFFE758B@<eax>(int a1@<eax>)
{
  int v2; // edi
  char v4; // [esp+8h] [ebp-Ch]
  char v5; // [esp+Ch] [ebp-8h]
  char v6; // [esp+10h] [ebp-4h]

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffe7598*/
  v4 = *(_BYTE *)(a1 + 4); /*0xfffe759e*/
  v5 = *(_BYTE *)(a1 + 5); /*0xfffe75a4*/
  v6 = *(_BYTE *)(a1 + 10); /*0xfffe75ad*/
  sub_FFFEC6E2(v2, 18); /*0xfffe75b0*/
  if ( (unsigned __int8)sub_FFFEB18E(v2, v4, v5, v6) ) /*0xfffe75bf*/
  {
    sub_FFFEC6E2(v2, 19); /*0xfffe75e4*/
    *(_BYTE *)(a1 + 17) = sub_FFFEB12A(v2, v4, v5, v6); /*0xfffe75fb*/
    sub_FFFEC6E2(v2, 20); /*0xfffe75fe*/
    *(_BYTE *)(a1 + 16) = sub_FFFEB1E6(v2, v4, v5, v6); /*0xfffe7613*/
    sub_FFFED042(a1); /*0xfffe7616*/
    sub_FFFEC6E2(v2, 21); /*0xfffe761e*/
    sub_FFFE74B2(a1); /*0xfffe7625*/
    if ( sub_FFFEC541() ) /*0xfffe762b*/
      sub_FFFEB340(a1); /*0xfffe7638*/
    sub_FFFE74F3(a1); /*0xfffe763e*/
    *(_BYTE *)(a1 + 15) = 1; /*0xfffe7646*/
    sub_FFFEC6E2(v2, 22); /*0xfffe764a*/
    return 0; /*0xfffe764f*/
  }
  else
  {
    sub_FFFEC71B(v2, 16); /*0xfffe75ce*/
    return -(*(_BYTE *)(v2 + 462) != 1); /*0xfffe75dd*/
  }
}

/* 0xfffe7663 sub_FFFE7663 */
int __usercall sub_FFFE7663@<eax>(int a1@<esi>)
{
  unsigned __int8 i; // bl
  char v3; // [esp+7h] [ebp-1h]

  v3 = 0; /*0xfffe766d*/
  sub_FFFEC6E2(*(_DWORD *)(a1 + 14), 16); /*0xfffe7671*/
  for ( i = 0; i < *(_BYTE *)(a1 + 11); ++i ) /*0xfffe7678*/
  {
    sub_FFFEC6E2(*(_DWORD *)(a1 + 14), 17); /*0xfffe7684*/
    if ( sub_FFFE758B(68 * i + a1 + 18) < 0 ) /*0xfffe769c*/
      ++v3; /*0xfffe769e*/
    sub_FFFEC6E2(*(_DWORD *)(a1 + 14), 23); /*0xfffe76a6*/
  }
  sub_FFFEC6E2(*(_DWORD *)(a1 + 14), 24); /*0xfffe76b9*/
  if ( v3 && (*(_BYTE *)(*(_DWORD *)(a1 + 14) + 462) != 1 || !(*(_BYTE *)(a1 + 33) | *(_BYTE *)(a1 + 101))) ) /*0xfffe76d6*/
    return -1; /*0xfffe76db*/
  sub_FFFEC6E2(*(_DWORD *)(a1 + 14), 25); /*0xfffe76e5*/
  return 0; /*0xfffe76c4*/
}

/* 0xfffe77ef sub_FFFE77EF */
int __usercall sub_FFFE77EF@<eax>(int a1@<esi>, unsigned __int8 a2, int a3)
{
  int v3; // eax

  if ( sub_FFFEC541() ) /*0xfffe77f0*/
    v3 = 84 * a2 + a3 + 177 * (unsigned __int8)sub_FFFEC5EC(*(_BYTE *)(*(_DWORD *)(a1 + 19) + 8)) + 20; /*0xfffe781d*/
  else
    v3 = 84 * a2 + a3 + 177 * (sub_FFFEC592(a1) == 0) + 374; /*0xfffe7841*/
  switch ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14) + 464) ) /*0xfffe7856*/
  {
    case 1: /*0xfffe7856*/
      return v3 + 15; /*0xfffe7869*/
    case 2: /*0xfffe7856*/
      return v3 + 38; /*0xfffe7865*/
    case 3: /*0xfffe7856*/
      return v3 + 61; /*0xfffe7861*/
  }
  return 0; /*0xfffe7860*/
}

/* 0xfffe786d sub_FFFE786D */
int __usercall sub_FFFE786D@<eax>(int a1@<ebx>, int a2@<esi>)
{
  int v2; // eax
  int v3; // eax

  v2 = sub_FFFEC1F2( /*0xfffe788c*/
         *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
         *(unsigned __int8 *)(a2 + 4),
         *(_BYTE *)(a2 + 5),
         *(_BYTE *)(a2 + 10),
         224);
  if ( *(_BYTE *)a1 ) /*0xfffe7894*/
  {
    sub_FFFEC306( /*0xfffe78bd*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)(a2 + 10),
      224,
      v2 & 0xFF00FFFF | 0x60000);
    v3 = sub_FFFEC1F2( /*0xfffe78de*/
           *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
           *(unsigned __int8 *)(a2 + 4),
           *(_BYTE *)(a2 + 5),
           *(_BYTE *)(a2 + 10),
           244);
    sub_FFFEC306( /*0xfffe7910*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)(a2 + 10),
      244,
      v3 & 0xFFFFFF07 | (8 * (*(_DWORD *)(a1 + 1) & 0x1F)) | 4);
  }
  sub_FFFED074(a2); /*0xfffe7919*/
  return sub_FFFED161(a2); /*0xfffe7926*/
}

/* 0xfffe7928 sub_FFFE7928 */
int __usercall sub_FFFE7928@<eax>(int a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // eax

  v2 = sub_FFFEC1F2( /*0xfffe794d*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2208);
  if ( *(_BYTE *)a2 ) /*0xfffe7955*/
  {
    sub_FFFEC306( /*0xfffe7984*/
      *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
      *(_BYTE *)(a1 + 4),
      *(_BYTE *)(a1 + 5),
      *(_BYTE *)(a1 + 10),
      2208,
      v2 & 0xFF00FFFF | 0x50000);
    v3 = sub_FFFEC1F2( /*0xfffe79a2*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(unsigned __int8 *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2228);
    sub_FFFEC306( /*0xfffe79d2*/
      *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
      *(_BYTE *)(a1 + 4),
      *(_BYTE *)(a1 + 5),
      *(_BYTE *)(a1 + 10),
      2228,
      v3 & 0xFFEFFFE0 | *(_DWORD *)(a2 + 1) & 0x1F);
  }
  sub_FFFEE5F1(a1); /*0xfffe79db*/
  sub_FFFED704(a1); /*0xfffe79e1*/
  result = sub_FFFEC5F1(*(_DWORD *)(a1 + 19), 11376, 0); /*0xfffe79f0*/
  if ( (_BYTE)result ) /*0xfffe79fa*/
  {
    result = sub_FFFEC541(); /*0xfffe7a03*/
    if ( result ) /*0xfffe7a0b*/
    {
      result = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffe7a14*/
      if ( (*(_BYTE *)(*(_DWORD *)(result + 469) + 16) & 1) != 0 ) /*0xfffe7a21*/
      {
        v5 = sub_FFFEC1F2(result, *(unsigned __int8 *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), 2208); /*0xfffe7a3b*/
        sub_FFFEC306( /*0xfffe7a64*/
          *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
          *(_BYTE *)(a1 + 4),
          *(_BYTE *)(a1 + 5),
          *(_BYTE *)(a1 + 10),
          2208,
          v5 & 0xFF00FFFF | 0x30000);
        v6 = sub_FFFEC1F2( /*0xfffe7a82*/
               *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
               *(unsigned __int8 *)(a1 + 4),
               *(_BYTE *)(a1 + 5),
               *(_BYTE *)(a1 + 10),
               2228);
        return sub_FFFEC306( /*0xfffe7aaa*/
                 *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
                 *(_BYTE *)(a1 + 4),
                 *(_BYTE *)(a1 + 5),
                 *(_BYTE *)(a1 + 10),
                 2228,
                 v6 & 0xFFFFFFF0 | 8);
      }
    }
  }
  return result; /*0xfffe7ab2*/
}

/* 0xfffe7b18 sub_FFFE7B18 */
char __usercall sub_FFFE7B18@<al>(int a1@<eax>)
{
  unsigned __int8 v1; // dl
  _BYTE *v2; // eax
  int v3; // ebx
  unsigned __int8 *v4; // esi
  int v5; // edi

  v1 = -1; /*0xfffe7b1d*/
  v2 = (_BYTE *)(a1 + 11); /*0xfffe7b20*/
  v3 = 2; /*0xfffe7b23*/
  do /*0xfffe7b50*/
  {
    if ( *(v2 - 2) && *v2 ) /*0xfffe7b2a*/
    {
      v4 = v2 + 69; /*0xfffe7b30*/
      v5 = (unsigned __int8)*v2; /*0xfffe7b33*/
      do /*0xfffe7b48*/
      {
        if ( *(v4 - 47) && *v4 < v1 ) /*0xfffe7b40*/
          v1 = *v4; /*0xfffe7b42*/
        v4 += 68; /*0xfffe7b44*/
        --v5; /*0xfffe7b47*/
      }
      while ( v5 ); /*0xfffe7b48*/
    }
    v2 += 154; /*0xfffe7b4a*/
    --v3; /*0xfffe7b4f*/
  }
  while ( v3 ); /*0xfffe7b50*/
  switch ( v1 ) /*0xfffe7b5b*/
  {
    case 0x12u: /*0xfffe7b5b*/
      return 1; /*0xfffe7b7b*/
    case 0x16u: /*0xfffe7b5b*/
      return 2; /*0xfffe7b78*/
    case 0x18u: /*0xfffe7b5b*/
    case 0x7Eu: /*0xfffe7b5b*/
    case 0xFFu: /*0xfffe7b5b*/
      return 3; /*0xfffe7b75*/
  }
  return -1; /*0xfffe7b58*/
}

/* 0xfffe7b7e sub_FFFE7B7E */
char __usercall sub_FFFE7B7E@<al>(unsigned __int8 a1@<cl>, int a2@<esi>)
{
  int v2; // ecx
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // ecx
  unsigned __int8 j; // bl
  _BYTE *v7; // edx
  char v9; // [esp+2h] [ebp-2h]
  unsigned __int8 i; // [esp+3h] [ebp-1h]

  v2 = a1 - 1; /*0xfffe7b85*/
  v9 = 0; /*0xfffe7b86*/
  if ( v2 ) /*0xfffe7b8a*/
  {
    v3 = v2 - 1; /*0xfffe7b8c*/
    if ( v3 ) /*0xfffe7b8d*/
    {
      if ( v3 == 1 ) /*0xfffe7b90*/
        v4 = 24; /*0xfffe7b96*/
      else
        v4 = 0; /*0xfffe7b92*/
    }
    else
    {
      v4 = 22; /*0xfffe7b9a*/
    }
  }
  else
  {
    v4 = 18; /*0xfffe7b9e*/
  }
  for ( i = 0; i < 2u; ++i ) /*0xfffe7ba0*/
  {
    v5 = 154 * i; /*0xfffe7ba9*/
    if ( *(_BYTE *)(v5 + a2 + 9) ) /*0xfffe7baf*/
    {
      for ( j = 0; j < *(_BYTE *)(v5 + a2 + 11); ++j ) /*0xfffe7bb8*/
      {
        v7 = (_BYTE *)(a2 + v5 + 68 * j); /*0xfffe7bc6*/
        if ( v7[33] ) /*0xfffe7bc8*/
        {
          if ( v4 < v7[79] || v4 > v7[80] ) /*0xfffe7bd6*/
            return 0; /*0xfffe7bf3*/
          v9 = 1; /*0xfffe7bd8*/
        }
      }
    }
  }
  return v9; /*0xfffe7bf1*/
}

/* 0xfffe7c11 sub_FFFE7C11 */
char __usercall sub_FFFE7C11@<al>(int a1@<eax>, _BYTE *a2@<esi>)
{
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe7c11*/
    *a2 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(a1 + 315), 20, 2, 208) & 3; /*0xfffe7c3c*/
  else
    *a2 = 0; /*0xfffe7c1a*/
  switch ( *a2 ) /*0xfffe7c3e*/
  {
    case 0: /*0xfffe7c3e*/
      return 1; /*0xfffe7c55*/
    case 1: /*0xfffe7c3e*/
      return 2; /*0xfffe7c52*/
    case 2: /*0xfffe7c3e*/
      return 3; /*0xfffe7c4f*/
  }
  return 0; /*0xfffe7c4e*/
}

/* 0xfffe7c58 sub_FFFE7C58 */
int __usercall sub_FFFE7C58@<eax>(unsigned __int8 a1@<al>, int a2@<edi>)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  unsigned __int8 *v5; // esi
  unsigned __int8 i; // bl
  int v7; // [esp+0h] [ebp-Ch]
  char v8; // [esp+8h] [ebp-4h]

  v2 = a1 - 1; /*0xfffe7c61*/
  if ( v2 ) /*0xfffe7c62*/
  {
    v3 = v2 - 1; /*0xfffe7c64*/
    if ( v3 ) /*0xfffe7c65*/
    {
      if ( v3 == 1 ) /*0xfffe7c68*/
        v8 = 24; /*0xfffe7c70*/
      else
        v8 = 0; /*0xfffe7c6a*/
    }
    else
    {
      v8 = 22; /*0xfffe7c76*/
    }
  }
  else
  {
    v8 = 18; /*0xfffe7c7c*/
  }
  result = sub_FFFEC71B(a2, 1); /*0xfffe7c85*/
  v5 = (unsigned __int8 *)(a2 + 11); /*0xfffe7c96*/
  v7 = 2; /*0xfffe7c99*/
  do /*0xfffe7cdf*/
  {
    if ( *(v5 - 2) ) /*0xfffe7ca0*/
    {
      for ( i = 0; i < *v5; ++i ) /*0xfffe7ca8*/
      {
        result = (int)&v5[68 * i - 11]; /*0xfffe7cb9*/
        if ( *(_BYTE *)(result + 33) ) /*0xfffe7cbc*/
          result = sub_FFFEB38E(result + 18, v8); /*0xfffe7cc9*/
      }
    }
    v5 += 154; /*0xfffe7cd6*/
    --v7; /*0xfffe7cdc*/
  }
  while ( v7 ); /*0xfffe7cdf*/
  return result; /*0xfffe7ce3*/
}

/* 0xfffe7ce5 sub_FFFE7CE5 */
int __cdecl sub_FFFE7CE5(int a1)
{
  int v1; // esi
  _BYTE *v2; // edi
  int result; // eax
  unsigned __int8 v4; // bl
  unsigned __int8 v5; // al
  char v6; // al
  char v7; // [esp+Eh] [ebp-2h]
  char v8; // [esp+Fh] [ebp-1h] BYREF

  v1 = a1; /*0xfffe7ceb*/
  v2 = *(_BYTE **)(a1 + 469); /*0xfffe7cef*/
  switch ( v2[7] ) /*0xfffe7cfa*/
  {
    case 1: /*0xfffe7cfa*/
      v4 = 1; /*0xfffe7d20*/
      break;
    case 2: /*0xfffe7cfa*/
      v4 = 2; /*0xfffe7d1c*/
      break;
    case 3: /*0xfffe7cfa*/
      v4 = 3; /*0xfffe7d18*/
      break;
    default:
      result = (unsigned __int8)v2[7] - 6; /*0xfffe7d02*/
      if ( v2[7] == 6 ) /*0xfffe7d05*/
        return result; /*0xfffe7d05*/
      if ( v2[7] == 32 ) /*0xfffe7d0e*/
        v4 = 32; /*0xfffe7d14*/
      else
        v4 = 0; /*0xfffe7d10*/
      break;
  }
  v7 = sub_FFFE7B18(a1); /*0xfffe7d2d*/
  if ( v2[8] && *(_BYTE *)(a1 + 314) < 0x10u ) /*0xfffe7d39*/
  {
    v8 = v4; /*0xfffe7d3b*/
  }
  else
  {
    v1 = a1; /*0xfffe7d4b*/
    v8 = sub_FFFE7C11(a1, &v8); /*0xfffe7d4e*/
  }
  sub_FFFEC6A7(v1, 1); /*0xfffe7d54*/
  if ( v7 != -1 ) /*0xfffe7d5f*/
  {
    if ( v4 == 32 ) /*0xfffe7d96*/
      v4 = v8; /*0xfffe7d98*/
    if ( !v4 || (v6 = sub_FFFE7B7E(v4, v1), v1 = a1, !v6) ) /*0xfffe7dab*/
      v4 = v7; /*0xfffe7dad*/
    sub_FFFEC6A7(v1, 7); /*0xfffe7db3*/
    if ( v4 != v8 ) /*0xfffe7dbd*/
    {
      sub_FFFEC6A7(v1, 9); /*0xfffe7ddd*/
      goto LABEL_30; /*0xfffe7ddd*/
    }
    sub_FFFEC6A7(v1, 8); /*0xfffe7dc2*/
    *(_BYTE *)(v1 + 464) = v4; /*0xfffe7dc7*/
    v5 = v4; /*0xfffe7dcd*/
    return sub_FFFE7C58(v5, v1); /*0xfffe7dd8*/
  }
  sub_FFFEC6A7(v1, 4); /*0xfffe7d64*/
  if ( !v4 || v4 == v8 || v4 == 32 ) /*0xfffe7d77*/
  {
    *(_BYTE *)(v1 + 464) = v8; /*0xfffe7d83*/
    sub_FFFEC6A7(v1, 5); /*0xfffe7d89*/
    v5 = v8; /*0xfffe7d8e*/
    return sub_FFFE7C58(v5, v1); /*0xfffe7d91*/
  }
  sub_FFFEC6A7(v1, 6); /*0xfffe7d7b*/
LABEL_30:
  v2[1100] = v4; /*0xfffe7de2*/
  return sub_FFFE72FE(1u, (_BYTE *)a1, v2); /*0xfffe7df4*/
}

/* 0xfffe7df9 sub_FFFE7DF9 */
int __usercall sub_FFFE7DF9@<eax>(int a1@<esi>)
{
  int result; // eax
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  char v5; // dl
  unsigned int v6; // eax

  result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14) + 469); /*0xfffe7dff*/
  v2 = 108; /*0xfffe7e0c*/
  if ( *(_BYTE *)(result + 6) ) /*0xfffe7e05*/
  {
    if ( !sub_FFFEC541() ) /*0xfffe7e10*/
      v2 = 2092; /*0xfffe7e1a*/
    v3 = sub_FFFEC1F2( /*0xfffe7e38*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(unsigned __int8 *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           v2);
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffe7e40*/
    v5 = *(_BYTE *)(v4 + 464); /*0xfffe7e43*/
    v6 = v3 & 0xFF7FFFFF; /*0xfffe7e4c*/
    if ( v5 == 3 || v5 == 2 ) /*0xfffe7e59*/
      v6 |= 0x800000u; /*0xfffe7e5b*/
    return sub_FFFEC306(v4, *(_BYTE *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v2, v6); /*0xfffe7e75*/
  }
  return result; /*0xfffe7e7d*/
}

/* 0xfffe7e7f sub_FFFE7E7F */
void __usercall sub_FFFE7E7F(int a1@<edi>, int a2)
{
  int v2; // esi
  int v3; // esi
  int v4; // ebx
  unsigned __int8 i; // [esp+0h] [ebp-4h]

  for ( i = 0; i < *(_BYTE *)(a1 + 11); ++i ) /*0xfffe7e83*/
  {
    v2 = 68 * i + a1; /*0xfffe7e9a*/
    if ( *(_BYTE *)(v2 + 33) ) /*0xfffe7e9d*/
    {
      sub_FFFEC6E2(*(_DWORD *)(a1 + 14), i); /*0xfffe7ead*/
      sub_FFFEC71B(*(_DWORD *)(a1 + 14), 1); /*0xfffe7eb7*/
      v3 = v2 + 18; /*0xfffe7ebf*/
      v4 = sub_FFFE77EF(v3, i, a2); /*0xfffe7ecf*/
      sub_FFFEC71B(*(_DWORD *)(a1 + 14), 2); /*0xfffe7ed1*/
      if ( sub_FFFEC541() ) /*0xfffe7ed7*/
        sub_FFFE786D(v4, v3); /*0xfffe7ee3*/
      else
        sub_FFFE7928(v3, v4); /*0xfffe7eeb*/
      sub_FFFEC71B(*(_DWORD *)(a1 + 14), 3); /*0xfffe7ef6*/
      sub_FFFEB3BF(v3, v4 + 5); /*0xfffe7f00*/
      if ( sub_FFFEC541() ) /*0xfffe7f06*/
        sub_FFFED1E0(v4 + 11); /*0xfffe7f16*/
      sub_FFFEB45C(v3, v4 + 11); /*0xfffe7f21*/
      sub_FFFEB504(v3, v4 + 17); /*0xfffe7f2b*/
      sub_FFFEC71B(*(_DWORD *)(a1 + 14), 4); /*0xfffe7f35*/
      sub_FFFE7DF9(v3); /*0xfffe7f3a*/
      sub_FFFEB5E0(v3); /*0xfffe7f40*/
      if ( *(_BYTE *)(a2 + 6) ) /*0xfffe7f4b*/
        sub_FFFEB21A( /*0xfffe7f69*/
          *(_DWORD *)(*(_DWORD *)(v3 + 19) + 14),
          *(unsigned __int8 *)(v3 + 4),
          *(unsigned __int8 *)(v3 + 5),
          *(unsigned __int8 *)(v3 + 10));
    }
  }
}

/* 0xfffe7f84 sub_FFFE7F84 */
int __usercall sub_FFFE7F84@<eax>(int a1@<esi>, int a2)
{
  int v2; // edi
  int v3; // ebx
  unsigned __int64 v5; // [esp+4h] [ebp-Ch]
  unsigned __int8 i; // [esp+Fh] [ebp-1h]

  v5 = 0; /*0xfffe7f8a*/
  sub_FFFEC6A7(a2, 1); /*0xfffe7f98*/
  if ( *(_BYTE *)(a1 + 101) ) /*0xfffe7f9d*/
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 109) + 19); /*0xfffe7fa8*/
    if ( sub_FFFEC57B(v2) ) /*0xfffe7fac*/
    {
      for ( i = 0; i < *(_BYTE *)(v2 + 11); ++i ) /*0xfffe7fb6*/
      {
        v3 = 68 * i + v2; /*0xfffe7fc8*/
        if ( *(_BYTE *)(v3 + 33) && sub_FFFEC541() ) /*0xfffe7fd4*/
          v5 |= 1 << *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v3 + 41) + 19) + 12); /*0xfffe7fed*/
      }
      LODWORD(v5) = v5 | 1; /*0xfffe8002*/
    }
    else
    {
      v5 = 1 << *(_BYTE *)(v2 + 12); /*0xfffe8014*/
    }
  }
  sub_FFFEC6A7(a2, 2); /*0xfffe8020*/
  sub_FFFEC349(a2, *(_BYTE *)(a1 + 7), *(_BYTE *)(a1 + 25), *(_BYTE *)(a1 + 30), 68, v5, HIDWORD(v5)); /*0xfffe8040*/
  sub_FFFEC6A7(a2, 3); /*0xfffe8048*/
  sub_FFFEC306(a2, *(_BYTE *)(a1 + 7), *(_BYTE *)(a1 + 25), *(_BYTE *)(a1 + 30), 64, 1); /*0xfffe8064*/
  return sub_FFFEC6A7(a2, 4); /*0xfffe8076*/
}

/* 0xfffe8079 sub_FFFE8079 */
char __usercall sub_FFFE8079@<al>(_BYTE *a1@<edi>, int a2@<esi>)
{
  char v2; // bl
  unsigned int v3; // eax
  char v4; // cl
  int v5; // eax
  int v7; // [esp+4h] [ebp-Ch]
  int v8; // [esp+8h] [ebp-8h]
  char v9; // [esp+Eh] [ebp-2h]
  char v10; // [esp+Fh] [ebp-1h]

  v8 = 2192; /*0xfffe8080*/
  v7 = 196; /*0xfffe8087*/
  v10 = 0; /*0xfffe808e*/
  if ( sub_FFFEC541() ) /*0xfffe8092*/
  {
    v8 = 208; /*0xfffe809c*/
    v7 = 72; /*0xfffe80a3*/
  }
  if ( a1[5] ) /*0xfffe80aa*/
  {
    v9 = a1[7]; /*0xfffe80b7*/
    v2 = a1[6]; /*0xfffe80c3*/
    v3 = sub_FFFEC1F2( /*0xfffe80d9*/
           *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
           *(unsigned __int8 *)(a2 + 4),
           *(_BYTE *)(a2 + 5),
           *(_BYTE *)(a2 + 10),
           v8);
    if ( ((v3 >> 10) & 3) == v2 ) /*0xfffe80eb*/
    {
      v4 = v9; /*0xfffe80ed*/
      if ( (v3 & 0x3F) == v9 ) /*0xfffe80f7*/
        goto LABEL_9; /*0xfffe80f7*/
    }
    else
    {
      v4 = v9; /*0xfffe80fd*/
    }
    sub_FFFEC306( /*0xfffe812e*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 5),
      *(_BYTE *)(a2 + 10),
      v8,
      v3 & 0xFFFFF3C0 | v4 & 0x3F | ((v2 & 3) << 10));
    v10 = 1; /*0xfffe8136*/
  }
LABEL_9:
  v5 = sub_FFFEC1F2( /*0xfffe813b*/
         *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
         *(unsigned __int8 *)(a2 + 4),
         *(_BYTE *)(a2 + 6),
         *(_BYTE *)(a2 + 11),
         v7);
  if ( (v5 & 0x40000) == 0 ) /*0xfffe8166*/
  {
    sub_FFFEC306( /*0xfffe8189*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      v7,
      v5 | 0x40000);
    return 1; /*0xfffe8191*/
  }
  return v10; /*0xfffe8160*/
}

/* 0xfffe819a sub_FFFE819A */
char __usercall sub_FFFE819A@<al>(int a1@<esi>)
{
  int v1; // edi
  int v2; // eax

  v1 = 196; /*0xfffe819c*/
  if ( sub_FFFEC541() ) /*0xfffe81a1*/
    v1 = 72; /*0xfffe81ad*/
  v2 = sub_FFFEC1F2( /*0xfffe81c7*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 6),
         *(_BYTE *)(a1 + 11),
         v1);
  if ( (v2 & 0x40000) == 0 ) /*0xfffe81d7*/
    return 0; /*0xfffe8204*/
  sub_FFFEC306( /*0xfffe81f8*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 6),
    *(_BYTE *)(a1 + 11),
    v1,
    v2 & 0xFFFBFFFF);
  return 1; /*0xfffe8202*/
}

/* 0xfffe8208 sub_FFFE8208 */
char __usercall sub_FFFE8208@<al>(int a1@<esi>)
{
  int v1; // edi
  int v2; // eax

  v1 = 196; /*0xfffe820a*/
  if ( sub_FFFEC541() ) /*0xfffe820f*/
    v1 = 72; /*0xfffe821b*/
  v2 = sub_FFFEC1F2( /*0xfffe8235*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 6),
         *(_BYTE *)(a1 + 11),
         v1);
  if ( (v2 & 0x100000) == 0 ) /*0xfffe8245*/
    return 0; /*0xfffe8272*/
  sub_FFFEC306( /*0xfffe8266*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 6),
    *(_BYTE *)(a1 + 11),
    v1,
    v2 & 0xFFCFFFFF);
  return 1; /*0xfffe8270*/
}

/* 0xfffe8276 sub_FFFE8276 */
int __usercall sub_FFFE8276@<eax>(int a1@<edi>, int a2@<esi>)
{
  char v2; // al
  char v3; // al
  char v4; // al
  int v6; // [esp-14h] [ebp-1Ch]
  int v7; // [esp-10h] [ebp-18h]
  char v8; // [esp-Ch] [ebp-14h]
  char v9; // [esp-8h] [ebp-10h]
  char v10; // [esp+4h] [ebp-4h]
  char v11; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 2) ) /*0xfffe827a*/
  {
    sub_FFFEC165( /*0xfffe829f*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(unsigned __int8 *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      128);
    sub_FFFEC27E( /*0xfffe82c3*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      128,
      *(_BYTE *)(a1 + 3));
  }
  if ( *(_BYTE *)(a1 + 4) ) /*0xfffe82cb*/
  {
    v2 = sub_FFFEC165( /*0xfffe82ef*/
           *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
           *(unsigned __int8 *)(a2 + 4),
           *(_BYTE *)(a2 + 6),
           *(_BYTE *)(a2 + 11),
           129);
    sub_FFFEC27E( /*0xfffe831a*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      129,
      v2 & 0xF0 | *(_BYTE *)(a1 + 5) & 0xF);
  }
  if ( *(_BYTE *)(a1 + 8) ) /*0xfffe8322*/
  {
    sub_FFFEC1AB( /*0xfffe8346*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(unsigned __int8 *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      130);
    sub_FFFEC2C2( /*0xfffe836b*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      130,
      *(_WORD *)(a1 + 9));
  }
  if ( *(_BYTE *)(a1 + 11) ) /*0xfffe8373*/
  {
    sub_FFFEC1AB( /*0xfffe8397*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(unsigned __int8 *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      142);
    sub_FFFEC2C2( /*0xfffe83bc*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      142,
      *(_WORD *)(a1 + 12));
  }
  if ( *(_BYTE *)(a1 + 6) ) /*0xfffe83c4*/
  {
    sub_FFFEC165( /*0xfffe83e8*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(unsigned __int8 *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      133);
    sub_FFFEC27E( /*0xfffe840c*/
      *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
      *(_BYTE *)(a2 + 4),
      *(_BYTE *)(a2 + 6),
      *(_BYTE *)(a2 + 11),
      133,
      *(_BYTE *)(a1 + 7));
  }
  v9 = *(_BYTE *)(a2 + 11); /*0xfffe841f*/
  v8 = *(_BYTE *)(a2 + 6); /*0xfffe8425*/
  v7 = *(unsigned __int8 *)(a2 + 4); /*0xfffe842e*/
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14); /*0xfffe8432*/
  if ( *(_BYTE *)a1 ) /*0xfffe8428*/
  {
    v3 = sub_FFFEC165(v6, v7, v8, v9, 132) & 0xE0; /*0xfffe8440*/
    v10 = v3; /*0xfffe8446*/
    if ( *(_BYTE *)(a1 + 1) == 1 ) /*0xfffe8449*/
    {
      v4 = v3 | 4; /*0xfffe8452*/
    }
    else
    {
      if ( *(_BYTE *)(a1 + 1) != 2 ) /*0xfffe844c*/
        return sub_FFFEC27E( /*0xfffe847b*/
                 *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
                 *(_BYTE *)(a2 + 4),
                 *(_BYTE *)(a2 + 6),
                 *(_BYTE *)(a2 + 11),
                 132,
                 v10);
      v4 = v3 | 3; /*0xfffe844e*/
    }
    v10 = v4; /*0xfffe8454*/
    return sub_FFFEC27E( /*0xfffe8454*/
             *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
             *(_BYTE *)(a2 + 4),
             *(_BYTE *)(a2 + 6),
             *(_BYTE *)(a2 + 11),
             132,
             v10);
  }
  v11 = sub_FFFEC165(v6, v7, v8, v9, 132) | 8; /*0xfffe8484*/
  return sub_FFFEC27E( /*0xfffe84ab*/
           *(_DWORD *)(*(_DWORD *)(a2 + 19) + 14),
           *(_BYTE *)(a2 + 4),
           *(_BYTE *)(a2 + 6),
           *(_BYTE *)(a2 + 11),
           132,
           v11);
}

/* 0xfffe84ae sub_FFFE84AE */
int __usercall sub_FFFE84AE@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int result; // eax
  char v5; // [esp+8h] [ebp-10h] BYREF
  char v6; // [esp+9h] [ebp-Fh]
  char v7; // [esp+Ah] [ebp-Eh]
  char v8; // [esp+Bh] [ebp-Dh]
  char v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+Dh] [ebp-Bh]
  char v11; // [esp+Eh] [ebp-Ah]
  char v12; // [esp+Fh] [ebp-9h]
  char v13; // [esp+10h] [ebp-8h]
  __int16 v14; // [esp+11h] [ebp-7h]
  char v15; // [esp+13h] [ebp-5h]
  __int16 v16; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(a2 + 19); /*0xfffe84ba*/
  if ( *(_BYTE *)(result + 6) >= 0x10u ) /*0xfffe84c1*/
  {
    sub_FFFEC504(&v5, 0, 14, 1); /*0xfffe84cd*/
    if ( !*(_BYTE *)(a1 + 10) ) /*0xfffe84d5*/
    {
      v6 = *(_BYTE *)(a1 + 11); /*0xfffe84de*/
      v5 = 1; /*0xfffe84e5*/
      v7 = 1; /*0xfffe84e9*/
      v8 = 7; /*0xfffe84ed*/
      v9 = 1; /*0xfffe84f1*/
      v11 = 1; /*0xfffe84f5*/
      v12 = 32; /*0xfffe84f9*/
      v13 = 1; /*0xfffe84fd*/
      if ( v6 == 1 ) /*0xfffe8501*/
      {
        v14 = 128; /*0xfffe851a*/
        v15 = 1; /*0xfffe8520*/
        v16 = 4096; /*0xfffe8524*/
      }
      else
      {
        if ( v6 != 2 ) /*0xfffe8504*/
        {
          v10 = 2; /*0xfffe8506*/
          v14 = 512; /*0xfffe850a*/
          return sub_FFFE8276((int)&v5, a2); /*0xfffe8510*/
        }
        v14 = -24576; /*0xfffe8512*/
      }
      v10 = 15; /*0xfffe852a*/
    }
    return sub_FFFE8276((int)&v5, a2); /*0xfffe852e*/
  }
  return result; /*0xfffe8536*/
}

/* 0xfffe853a sub_FFFE853A */
char __usercall sub_FFFE853A@<al>(int a1@<ebx>)
{
  unsigned __int8 *v1; // edi
  unsigned __int8 *v2; // ecx
  int v3; // esi
  int v4; // edi
  bool v5; // zf
  char v6; // al
  int v7; // eax
  int v8; // eax
  unsigned __int8 *v9; // eax
  unsigned __int8 *v10; // ecx
  int v11; // esi
  char v12; // al
  int v13; // edi
  bool v14; // zf
  char v15; // al
  _BYTE *v16; // edi
  int v17; // eax
  char *v18; // esi
  _BYTE *v19; // edi
  char v20; // cl
  char v21; // al
  int v23; // [esp+8h] [ebp-24h]
  int v24; // [esp+Ch] [ebp-20h]
  unsigned __int8 *v25; // [esp+Ch] [ebp-20h]
  unsigned __int8 *v26; // [esp+10h] [ebp-1Ch]
  unsigned __int8 *v27; // [esp+10h] [ebp-1Ch]
  unsigned int v28; // [esp+10h] [ebp-1Ch]
  int v29; // [esp+14h] [ebp-18h]
  int v30; // [esp+14h] [ebp-18h]
  int v31; // [esp+18h] [ebp-14h]
  int v32; // [esp+18h] [ebp-14h]
  int v33; // [esp+1Ch] [ebp-10h]
  unsigned __int8 *v34; // [esp+20h] [ebp-Ch]
  int v35; // [esp+24h] [ebp-8h]
  char v36; // [esp+29h] [ebp-3h]
  char v37; // [esp+29h] [ebp-3h]
  char v38; // [esp+2Ah] [ebp-2h]
  unsigned __int8 v39; // [esp+2Bh] [ebp-1h]
  unsigned __int8 v40; // [esp+2Bh] [ebp-1h]
  unsigned __int8 i; // [esp+2Bh] [ebp-1h]
  unsigned __int8 j; // [esp+2Bh] [ebp-1h]

  v35 = *(_DWORD *)(a1 + 469); /*0xfffe854b*/
  v38 = 0; /*0xfffe854e*/
  sub_FFFEC6E2(a1, 1); /*0xfffe8552*/
  sub_FFFED89E(a1); /*0xfffe8558*/
  v29 = 0; /*0xfffe855d*/
  v1 = (unsigned __int8 *)(a1 + 11); /*0xfffe8569*/
  v33 = -11 - a1; /*0xfffe8572*/
  v34 = (unsigned __int8 *)(a1 + 11); /*0xfffe8576*/
  v24 = 2; /*0xfffe8579*/
  do /*0xfffe8767*/
  {
    if ( *(v1 - 2) ) /*0xfffe857c*/
    {
      v39 = 0; /*0xfffe8589*/
      if ( *v1 ) /*0xfffe8586*/
      {
        v26 = &v1[v33]; /*0xfffe8598*/
        do /*0xfffe874b*/
        {
          v2 = &v26[68 * v39]; /*0xfffe85a4*/
          v3 = (int)&v2[a1 + 18]; /*0xfffe85a7*/
          if ( v2[a1 + 33] ) /*0xfffe85ab*/
          {
            if ( *(_BYTE *)(v29 + 84 * v39 + v35 + 29) ) /*0xfffe85be*/
            {
              v4 = *(_DWORD *)&v2[a1 + 41]; /*0xfffe85da*/
              if ( sub_FFFEC541() ) /*0xfffe85de*/
                v5 = *(_BYTE *)(84 * *(unsigned __int8 *)(v4 + 18) /*0xfffe8609*/
                              + v35
                              + 177 * (unsigned __int8)sub_FFFEC5EC(*(_BYTE *)(*(_DWORD *)(v4 + 19) + 8))
                              + 29) == 0;
              else
                v5 = *(_BYTE *)(177 * *(unsigned __int8 *)(*(_DWORD *)(v4 + 19) + 8) /*0xfffe8627*/
                              + v35
                              + 84 * *(unsigned __int8 *)(v4 + 18)
                              + 383) == 0;
              if ( !v5 && (*(v34 - 1) || *(_BYTE *)(v3 + 67)) ) /*0xfffe863e*/
              {
                v36 = sub_FFFEB15C( /*0xfffe8660*/
                        a1,
                        *(unsigned __int8 *)(v3 + 4),
                        *(unsigned __int8 *)(v3 + 5),
                        *(unsigned __int8 *)(v3 + 10));
                v6 = sub_FFFEB15C( /*0xfffe8676*/
                       a1,
                       *(unsigned __int8 *)(v4 + 4),
                       *(unsigned __int8 *)(v4 + 5),
                       *(unsigned __int8 *)(v4 + 10));
                if ( (v36 & 4) != 0 && (v6 & 4) != 0 ) /*0xfffe868a*/
                {
                  v31 = 72; /*0xfffe8694*/
                  v7 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 6), *(_BYTE *)(v3 + 11), 72); /*0xfffe86aa*/
                  if ( (v7 & 0x100000) == 0 ) /*0xfffe86b7*/
                  {
                    sub_FFFEC306(a1, *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 6), *(_BYTE *)(v3 + 11), 72, v7 | 0x300000); /*0xfffe86d4*/
                    v38 = 1; /*0xfffe86dc*/
                  }
                  if ( sub_FFFEC57B(*(_DWORD *)(v4 + 19)) ) /*0xfffe86e3*/
                    v31 = 196; /*0xfffe86ed*/
                  v8 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v4 + 4), *(_BYTE *)(v4 + 6), *(_BYTE *)(v4 + 11), v31); /*0xfffe870a*/
                  if ( (v8 & 0x100000) == 0 ) /*0xfffe8719*/
                  {
                    sub_FFFEC306(a1, *(_BYTE *)(v4 + 4), *(_BYTE *)(v4 + 6), *(_BYTE *)(v4 + 11), v31, v8 | 0x100000); /*0xfffe8734*/
                    v38 = 1; /*0xfffe873c*/
                  }
                }
              }
              v1 = v34; /*0xfffe8740*/
            }
            else
            {
              sub_FFFE8208(v3); /*0xfffe85c5*/
              v38 = sub_FFFE8208(*(_DWORD *)(v3 + 23)); /*0xfffe85d2*/
            }
          }
          ++v39; /*0xfffe8743*/
        }
        while ( v39 < *v1 ); /*0xfffe874b*/
      }
    }
    v29 += 177; /*0xfffe8754*/
    v1 += 154; /*0xfffe875b*/
    v5 = v24-- == 1; /*0xfffe8761*/
    v34 = v1; /*0xfffe8764*/
  }
  while ( !v5 ); /*0xfffe8767*/
  sub_FFFEC6E2(a1, 2); /*0xfffe876f*/
  v30 = 0; /*0xfffe8774*/
  v9 = (unsigned __int8 *)(a1 + 11); /*0xfffe8779*/
  v25 = (unsigned __int8 *)(a1 + 11); /*0xfffe877d*/
  v32 = 2; /*0xfffe8780*/
  do /*0xfffe890b*/
  {
    if ( *(v9 - 2) ) /*0xfffe8783*/
    {
      v40 = 0; /*0xfffe8790*/
      if ( *v9 ) /*0xfffe878d*/
      {
        v27 = &v9[v33]; /*0xfffe879f*/
        do /*0xfffe87ab*/
        {
          v10 = &v27[68 * v40]; /*0xfffe87ab*/
          v11 = (int)&v10[a1 + 18]; /*0xfffe87ae*/
          if ( v10[a1 + 33] ) /*0xfffe87b2*/
          {
            if ( *(_BYTE *)(v35 + v30 + 84 * v40 + 28) ) /*0xfffe87c7*/
            {
              v13 = *(_DWORD *)&v10[a1 + 41]; /*0xfffe87e2*/
              v23 = v13; /*0xfffe87e6*/
              if ( sub_FFFEC541() ) /*0xfffe87e9*/
                v14 = *(_BYTE *)(84 * *(unsigned __int8 *)(v13 + 18) /*0xfffe8814*/
                               + v35
                               + 177 * (unsigned __int8)sub_FFFEC5EC(*(_BYTE *)(*(_DWORD *)(v13 + 19) + 8))
                               + 28) == 0;
              else
                v14 = *(_BYTE *)(84 * *(unsigned __int8 *)(v13 + 18) /*0xfffe882b*/
                               + v35
                               + 177 * *(unsigned __int8 *)(*(_DWORD *)(v13 + 19) + 8)
                               + 382) == 0;
              if ( v14 ) /*0xfffe8833*/
                goto LABEL_43; /*0xfffe8833*/
              v37 = sub_FFFEB15C( /*0xfffe8851*/
                      a1,
                      *(unsigned __int8 *)(v11 + 4),
                      *(unsigned __int8 *)(v11 + 5),
                      *(unsigned __int8 *)(v11 + 10));
              v15 = sub_FFFEB15C( /*0xfffe8867*/
                      a1,
                      *(unsigned __int8 *)(v13 + 4),
                      *(unsigned __int8 *)(v13 + 5),
                      *(unsigned __int8 *)(v13 + 10));
              if ( (v37 & 1) == 0 || (v15 & 1) == 0 ) /*0xfffe8877*/
                goto LABEL_43; /*0xfffe8877*/
              sub_FFFE8079((_BYTE *)(v35 + v30 + 84 * v40 + 20), v11); /*0xfffe887f*/
              if ( sub_FFFEC57B(*(_DWORD *)(v13 + 19)) ) /*0xfffe888a*/
              {
                sub_FFFEE414(v13); /*0xfffe8895*/
                v16 = (_BYTE *)(84 * *(unsigned __int8 *)(v13 + 18) /*0xfffe88b2*/
                              + v35
                              + 177 * *(unsigned __int8 *)(*(_DWORD *)(v13 + 19) + 8)
                              + 374);
              }
              else
              {
                v16 = (_BYTE *)(84 * *(unsigned __int8 *)(v13 + 18) /*0xfffe88dc*/
                              + v35
                              + 177 * (unsigned __int8)sub_FFFEC5EC(*(_BYTE *)(*(_DWORD *)(v13 + 19) + 8))
                              + 20);
              }
              v12 = sub_FFFE8079(v16, v23); /*0xfffe88e0*/
            }
            else
            {
              sub_FFFE819A(v11); /*0xfffe87d0*/
              v12 = sub_FFFE819A(*(_DWORD *)(v11 + 23)); /*0xfffe87d8*/
            }
            v38 = v12; /*0xfffe88e5*/
          }
LABEL_43:
          ++v40; /*0xfffe88e8*/
          v9 = v25; /*0xfffe88eb*/
        }
        while ( v40 < *v25 ); /*0xfffe87ab*/
      }
    }
    v30 += 177; /*0xfffe88f9*/
    v9 += 154; /*0xfffe8900*/
    v5 = v32-- == 1; /*0xfffe8905*/
    v25 = v9; /*0xfffe8908*/
  }
  while ( !v5 ); /*0xfffe890b*/
  sub_FFFEC6E2(a1, 5); /*0xfffe8914*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe8919*/
  {
    for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffe8928*/
    {
      v17 = 68 * i; /*0xfffe893f*/
      v18 = (char *)(v17 + a1 + 326); /*0xfffe8942*/
      if ( *(_BYTE *)(v17 + a1 + 341) ) /*0xfffe8949*/
      {
        v28 = sub_FFFEC1F2( /*0xfffe897b*/
                a1,
                *(unsigned __int8 *)(v17 + a1 + 330),
                *(_BYTE *)(v17 + a1 + 331),
                *(_BYTE *)(v17 + a1 + 336),
                3412);
        v19 = (_BYTE *)(v35 + 84 * i); /*0xfffe8981*/
        if ( v19[386] ) /*0xfffe8986*/
        {
          v20 = v19[387]; /*0xfffe898f*/
          v21 = v19[388]; /*0xfffe8995*/
        }
        else
        {
          v21 = 7; /*0xfffe899d*/
          v20 = 7; /*0xfffe89a0*/
        }
        if ( ((v28 >> 6) & 7) != v20 || ((v28 >> 3) & 7) != v21 || (v28 & 2) != 0 ) /*0xfffe89c5*/
          sub_FFFEC306(a1, v18[4], v18[6], v18[11], 3412, (8 * (v21 & 7 | (8 * (v20 & 7)))) | 2); /*0xfffe89f1*/
      }
    }
  }
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe8a0b*/
  {
    for ( j = 0; j < *(_BYTE *)(a1 + 319); ++j ) /*0xfffe8a16*/
    {
      if ( *(_BYTE *)(68 * j + a1 + 341) ) /*0xfffe8a33*/
        sub_FFFE84AE(84 * j + v35 + 374, 68 * j + a1 + 326); /*0xfffe8a46*/
    }
  }
  return v38; /*0xfffe8a12*/
}

/* 0xfffe8a5e sub_FFFE8A5E */
char __usercall sub_FFFE8A5E@<al>(int a1@<esi>)
{
  _BYTE *v1; // eax
  unsigned __int8 *v2; // edi
  char v3; // al
  int v4; // eax
  int v5; // edx
  char v6; // al
  int v8; // [esp-8h] [ebp-20h]
  int v9; // [esp+4h] [ebp-14h]
  _BYTE *v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch]
  char v12; // [esp+16h] [ebp-2h]
  unsigned __int8 i; // [esp+17h] [ebp-1h]
  unsigned __int8 j; // [esp+17h] [ebp-1h]

  v1 = *(_BYTE **)(a1 + 469); /*0xfffe8a64*/
  v10 = v1; /*0xfffe8a70*/
  v12 = 0; /*0xfffe8a73*/
  if ( v1[6] ) /*0xfffe8a6d*/
  {
    v11 = 0; /*0xfffe8a87*/
    v2 = (unsigned __int8 *)(a1 + 11); /*0xfffe8a8a*/
    v9 = 2; /*0xfffe8a8d*/
    do /*0xfffe8af3*/
    {
      if ( *(v2 - 2) ) /*0xfffe8a94*/
      {
        for ( i = 0; i < *v2; LOBYTE(v1) = i ) /*0xfffe8a99*/
        {
          if ( v2[68 * i + 22] ) /*0xfffe8ab4*/
          {
            v8 = (int)&v2[68 * i + 7]; /*0xfffe8ac2*/
            if ( v10[84 * i + 20 + v11] ) /*0xfffe8ac3*/
              v3 = sub_FFFEB260(v8); /*0xfffe8ac9*/
            else
              v3 = sub_FFFEB2D0(v8); /*0xfffe8ad0*/
            v12 = v3; /*0xfffe8ad6*/
          }
          ++i; /*0xfffe8ad9*/
        }
      }
      v11 += 177; /*0xfffe8ae3*/
      v2 += 154; /*0xfffe8aea*/
      --v9; /*0xfffe8af0*/
    }
    while ( v9 ); /*0xfffe8af3*/
    if ( *(_BYTE *)(a1 + 317) ) /*0xfffe8af5*/
    {
      for ( j = 0; j < *(_BYTE *)(a1 + 319); LOBYTE(v1) = j ) /*0xfffe8afd*/
      {
        v4 = 68 * j; /*0xfffe8b0e*/
        v5 = v4 + a1 + 326; /*0xfffe8b11*/
        if ( *(_BYTE *)(v4 + a1 + 341) ) /*0xfffe8b18*/
        {
          if ( v10[84 * j + 374] ) /*0xfffe8b23*/
            v6 = sub_FFFEB260(v5); /*0xfffe8b2d*/
          else
            v6 = sub_FFFEB2D0(v5); /*0xfffe8b34*/
          v12 = v6; /*0xfffe8b3a*/
        }
        ++j; /*0xfffe8b3d*/
      }
    }
    if ( v12 ) /*0xfffe8b4e*/
      LOBYTE(v1) = sub_FFFE72FE(6u, (_BYTE *)a1, v10); /*0xfffe8b57*/
  }
  return (char)v1; /*0xfffe8b5d*/
}

/* 0xfffe8bdb sub_FFFE8BDB */
char __cdecl sub_FFFE8BDB(int a1)
{
  _BYTE *v1; // edi
  _BYTE *v2; // esi
  int v3; // edx
  char v4; // bl
  int v5; // edx
  char result; // al
  char v7; // [esp-4h] [ebp-14h]
  unsigned __int8 v8; // [esp+Fh] [ebp-1h]

  v1 = *(_BYTE **)(a1 + 14); /*0xfffe8be5*/
  v2 = v1 + 308; /*0xfffe8be9*/
  if ( sub_FFFE71CE(v1) ) /*0xfffe8bef*/
    v2 = &v1[154 * *(unsigned __int8 *)(v3 + 8) + 308]; /*0xfffe8c05*/
  v4 = 0; /*0xfffe8c07*/
  v8 = 0; /*0xfffe8c09*/
  while ( !v2[68 * v8 + 33] || !sub_FFFE71CE(v1) && v8 != *(_BYTE *)(a1 + 8) || sub_FFFE71CE(v1) && *(_BYTE *)(v5 + 67) ) /*0xfffe8c40*/
  {
    result = ++v8; /*0xfffe8c45*/
    if ( v8 > v2[11] ) /*0xfffe8c4b*/
      return result; /*0xfffe8c4b*/
  }
  if ( !*(_BYTE *)(v5 + 35) ) /*0xfffe8c57*/
  {
    if ( *(_BYTE *)(v5 + 36) ) /*0xfffe8c5f*/
    {
      v4 = 1; /*0xfffe8c66*/
    }
    else
    {
      if ( *(_BYTE *)(v5 + 37) ) /*0xfffe8c69*/
      {
        v7 = 2; /*0xfffe8c6e*/
      }
      else if ( *(_BYTE *)(v5 + 38) ) /*0xfffe8c72*/
      {
        v7 = 3; /*0xfffe8c77*/
      }
      else if ( *(_BYTE *)(v5 + 39) ) /*0xfffe8c7b*/
      {
        v7 = 4; /*0xfffe8c80*/
      }
      else if ( *(_BYTE *)(v5 + 40) ) /*0xfffe8c84*/
      {
        v7 = 5; /*0xfffe8c89*/
      }
      else if ( *(_BYTE *)(v5 + 41) ) /*0xfffe8c8d*/
      {
        v7 = 6; /*0xfffe8c92*/
      }
      else
      {
        if ( !*(_BYTE *)(v5 + 42) ) /*0xfffe8c99*/
          sub_FFFEC043(v1, 225, 5); /*0xfffe8cab*/
        v7 = 7; /*0xfffe8c9b*/
      }
      v4 = v7; /*0xfffe8c9d*/
    }
  }
  *(_BYTE *)(a1 + 12) = (8 * (BYTE1(*(_DWORD *)(v5 + 27)) & 0x7F)) | v4 & 7; /*0xfffe8cc1*/
  return a1; /*0xfffe8cc4*/
}

/* 0xfffe8d50 sub_FFFE8D50 */
_BYTE *__usercall sub_FFFE8D50@<eax>(_BYTE *result@<eax>)
{
  _BYTE *v1; // ecx
  int v2; // esi
  char v3; // dl
  char v4; // cl

  v1 = result + 22; /*0xfffe8d54*/
  v2 = 2; /*0xfffe8d57*/
  do /*0xfffe8dc4*/
  {
    if ( *(v1 - 13) ) /*0xfffe8d5a*/
    {
      v3 = *(v1 - 15); /*0xfffe8d5f*/
      *v1 = v3; /*0xfffe8d62*/
      v1[1] = 2; /*0xfffe8d64*/
      v1[2] = 2; /*0xfffe8d68*/
      v1[3] = -1; /*0xfffe8d6c*/
      v1[4] = 0; /*0xfffe8d70*/
      v1[5] = -1; /*0xfffe8d73*/
      v1[6] = 1; /*0xfffe8d77*/
      v1[7] = 0; /*0xfffe8d7b*/
      v1[8] = -1; /*0xfffe8d7e*/
      v1[9] = 0; /*0xfffe8d82*/
      v1[10] = -1; /*0xfffe8d85*/
      v1[14] = 0; /*0xfffe8d89*/
      v1[68] = v3; /*0xfffe8d8c*/
      v1[69] = 2; /*0xfffe8d8f*/
      v1[70] = 2; /*0xfffe8d93*/
      v1[71] = -1; /*0xfffe8d97*/
      v1[72] = 0; /*0xfffe8d9b*/
      v1[73] = -1; /*0xfffe8d9e*/
      v1[74] = 5; /*0xfffe8da2*/
      v1[75] = 4; /*0xfffe8da6*/
      v1[76] = -1; /*0xfffe8daa*/
      v1[77] = 0; /*0xfffe8dae*/
      v1[78] = -1; /*0xfffe8db1*/
      v1[82] = 1; /*0xfffe8db5*/
      *(v1 - 11) = 2; /*0xfffe8db9*/
    }
    v1 += 154; /*0xfffe8dbd*/
    --v2; /*0xfffe8dc3*/
  }
  while ( v2 ); /*0xfffe8dc4*/
  if ( result[317] ) /*0xfffe8dc6*/
  {
    v4 = result[315]; /*0xfffe8dd2*/
    result[330] = v4; /*0xfffe8dd8*/
    result[331] = 13; /*0xfffe8dde*/
    result[332] = 16; /*0xfffe8de5*/
    result[333] = 16; /*0xfffe8dec*/
    result[334] = 16; /*0xfffe8df3*/
    result[335] = 17; /*0xfffe8dfa*/
    result[336] = 0; /*0xfffe8e01*/
    result[337] = 0; /*0xfffe8e07*/
    result[338] = 1; /*0xfffe8e0d*/
    result[339] = 1; /*0xfffe8e14*/
    result[340] = 1; /*0xfffe8e1b*/
    result[344] = 0; /*0xfffe8e22*/
    result[398] = v4; /*0xfffe8e28*/
    result[399] = 13; /*0xfffe8e2e*/
    result[400] = 17; /*0xfffe8e35*/
    result[401] = 16; /*0xfffe8e3c*/
    result[402] = 16; /*0xfffe8e43*/
    result[403] = 17; /*0xfffe8e4a*/
    result[404] = 1; /*0xfffe8e51*/
    result[405] = 0; /*0xfffe8e58*/
    result[406] = 1; /*0xfffe8e5e*/
    result[407] = 1; /*0xfffe8e65*/
    result[408] = 1; /*0xfffe8e6c*/
    result[412] = 1; /*0xfffe8e73*/
    result[319] = 2; /*0xfffe8e7a*/
  }
  return result; /*0xfffe8e81*/
}

/* 0xfffe8e84 sub_FFFE8E84 */
int __usercall sub_FFFE8E84@<eax>(int result@<eax>)
{
  int v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  unsigned __int8 j; // [esp+12h] [ebp-2h]
  unsigned __int8 i; // [esp+13h] [ebp-1h]

  for ( i = 0; i < 2u; ++i ) /*0xfffe8e8e*/
  {
    v1 = 154 * i; /*0xfffe8e98*/
    if ( *(_BYTE *)(v1 + result + 9) ) /*0xfffe8e9e*/
    {
      for ( j = 0; j < *(_BYTE *)(v1 + result + 11); ++j ) /*0xfffe8eac*/
      {
        v2 = 68 * j; /*0xfffe8eb9*/
        v3 = result + v2 + v1; /*0xfffe8ebf*/
        if ( *(_BYTE *)(v3 + 33) ) /*0xfffe8ec1*/
        {
          if ( *(_BYTE *)(v3 + 85) ) /*0xfffe8eca*/
          {
            v4 = result + 68 * i; /*0xfffe8ed5*/
            *(_DWORD *)(v3 + 41) = v4 + 326; /*0xfffe8edd*/
            *(_DWORD *)(v4 + 349) = v3 + 18; /*0xfffe8ee3*/
          }
          else if ( *(_BYTE *)(result + 462) != 1 ) /*0xfffe8ef2*/
          {
            if ( i ) /*0xfffe8ef7*/
              goto LABEL_12; /*0xfffe8ef7*/
            if ( !*(_BYTE *)(result + 239) ) /*0xfffe8eff*/
            {
              *(_DWORD *)(v2 + result + 41) = result + 172; /*0xfffe8f1d*/
              *(_DWORD *)(result + 195) = v2 + result + 18; /*0xfffe8f25*/
LABEL_12:
              if ( i == 1 ) /*0xfffe8f2f*/
              {
                v6 = v2 + result + 154; /*0xfffe8f34*/
                if ( *(_BYTE *)(result + 85) ) /*0xfffe8f31*/
                {
                  *(_DWORD *)(v6 + 41) = result + 86; /*0xfffe8f40*/
                  *(_DWORD *)(result + 109) = v6 + 18; /*0xfffe8f46*/
                }
                else
                {
                  *(_DWORD *)(v6 + 41) = result + 18; /*0xfffe8f4e*/
                  *(_DWORD *)(result + 41) = v6 + 18; /*0xfffe8f54*/
                }
              }
              continue; /*0xfffe8f49*/
            }
            v5 = result + v2; /*0xfffe8f01*/
            *(_DWORD *)(v5 + 41) = result + 240; /*0xfffe8f09*/
            *(_DWORD *)(result + 263) = v5 + 18; /*0xfffe8f0f*/
          }
        }
      }
    }
  }
  return result; /*0xfffe8f74*/
}

/* 0xfffe8f91 sub_FFFE8F91 */
int __usercall sub_FFFE8F91@<eax>(int a1@<edi>)
{
  int v1; // esi
  int v2; // ebx
  int v3; // esi
  int v4; // ebp

  sub_FFFEC6A7(a1, 1); /*0xfffe8f97*/
  v1 = a1; /*0xfffe8fa0*/
  v2 = 2; /*0xfffe8fa2*/
  do /*0xfffe8fca*/
  {
    if ( *(_BYTE *)(v1 + 9) && sub_FFFE7663(v1) < 0 ) /*0xfffe8fb5*/
      sub_FFFEC043(a1, 225, 2); /*0xfffe8fbb*/
    v1 += 154; /*0xfffe8fc3*/
    --v2; /*0xfffe8fc9*/
  }
  while ( v2 ); /*0xfffe8fca*/
  sub_FFFEC6A7(a1, 2); /*0xfffe8fcf*/
  sub_FFFEC6A7(a1, 3); /*0xfffe8fd7*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe8fdf*/
  {
    if ( sub_FFFE7663(a1 + 308) < 0 ) /*0xfffe8ff5*/
      sub_FFFEC043(a1, 225, 3); /*0xfffe8ffb*/
    if ( sub_FFFE71C1((_BYTE *)a1) ) /*0xfffe9005*/
      *(_BYTE *)(68 * ((sub_FFFEC1F2(a1, *(unsigned __int8 *)(a1 + 315), 20, 0, 156) >> 28) & 1) + a1 + 393) = 1; /*0xfffe9032*/
  }
  sub_FFFEC6A7(a1, 4); /*0xfffe903d*/
  sub_FFFEC6A7(a1, 5); /*0xfffe9045*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe904d*/
    *(_BYTE *)(a1 + 320) = (sub_FFFEC1F2( /*0xfffe9086*/
                              *(_DWORD *)(a1 + 322),
                              *(unsigned __int8 *)(a1 + 315),
                              *(_BYTE *)(a1 + 334),
                              *(_BYTE *)(a1 + 339),
                              76) >> 16)
                         & 0x3F;
  v3 = a1; /*0xfffe908e*/
  v4 = 2; /*0xfffe9090*/
  do /*0xfffe90a5*/
  {
    if ( *(_BYTE *)(v3 + 9) ) /*0xfffe9091*/
      sub_FFFE8BDB(v3); /*0xfffe9098*/
    v3 += 154; /*0xfffe909e*/
    --v4; /*0xfffe90a4*/
  }
  while ( v4 ); /*0xfffe90a5*/
  if ( !sub_FFFE71CE((_BYTE *)a1) ) /*0xfffe90a8*/
    sub_FFFE8E84(a1); /*0xfffe90b7*/
  return sub_FFFEC6A7(a1, 6); /*0xfffe90c6*/
}

/* 0xfffe90c7 sub_FFFE90C7 */
char __usercall sub_FFFE90C7@<al>(int a1@<esi>)
{
  __int16 v1; // ax
  int v2; // eax

  v1 = sub_FFFEC1AB(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 0, 0, 0); /*0xfffe90d6*/
  if ( v1 == -1 || !v1 ) /*0xfffe90e7*/
  {
    *(_BYTE *)(a1 + 9) = 0; /*0xfffe911d*/
  }
  else
  {
    v2 = *(unsigned __int8 *)(a1 + 7); /*0xfffe90eb*/
    *(_BYTE *)(a1 + 9) = 1; /*0xfffe90f2*/
    *(_WORD *)(a1 + 4) = sub_FFFEC1AB(*(_DWORD *)(a1 + 14), v2, 0, 0, 2); /*0xfffe90ff*/
    *(_BYTE *)(a1 + 6) = sub_FFFEC165(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 0, 0, 8); /*0xfffe9118*/
  }
  return *(_BYTE *)(a1 + 9); /*0xfffe9123*/
}

/* 0xfffe9125 sub_FFFE9125 */
int __usercall sub_FFFE9125@<eax>(int a1@<edi>)
{
  int v1; // ebp
  char v2; // bl
  int v3; // esi
  int v4; // eax
  __int16 v5; // si

  v1 = 2; /*0xfffe912a*/
  v2 = 0; /*0xfffe9133*/
  *(_BYTE *)(a1 + 317) = 1; /*0xfffe9135*/
  *(_WORD *)(a1 + 312) = sub_FFFEC1AB(a1, 0, 20, 0, 2); /*0xfffe9141*/
  *(_BYTE *)(a1 + 314) = sub_FFFEC96A(a1 + 308); /*0xfffe9157*/
  sub_FFFEC6A7(a1, 1); /*0xfffe915d*/
  v3 = a1; /*0xfffe9165*/
  do /*0xfffe9175*/
  {
    v2 += sub_FFFE90C7(v3); /*0xfffe916c*/
    v3 += 154; /*0xfffe916e*/
    --v1; /*0xfffe9174*/
  }
  while ( v1 ); /*0xfffe9175*/
  if ( v2 == 1 ) /*0xfffe917a*/
  {
    *(_BYTE *)(a1 + 462) = 1; /*0xfffe917c*/
    sub_FFFEC6A7(a1, 2); /*0xfffe9184*/
    return sub_FFFEC6A7(a1, 7); /*0xfffe923d*/
  }
  v4 = sub_FFFEC1F2(a1, 0, 20, 2, 212); /*0xfffe9196*/
  v5 = v4; /*0xfffe919b*/
  if ( (v4 & 0x1000000) == 0 ) /*0xfffe91a6*/
  {
    if ( *(_BYTE *)(a1 + 462) == 1 ) /*0xfffe9225*/
    {
      sub_FFFEC6A7(a1, 4); /*0xfffe9229*/
    }
    else
    {
      *(_BYTE *)(a1 + 462) = 0; /*0xfffe922b*/
      sub_FFFEC6A7(a1, 6); /*0xfffe9235*/
    }
    return sub_FFFEC6A7(a1, 7); /*0xfffe9229*/
  }
  sub_FFFEC753(a1, 3); /*0xfffe91ab*/
  if ( (v5 & 0x800) != 0 ) /*0xfffe91bd*/
  {
    if ( !*(_BYTE *)(a1 + 9) ) /*0xfffe91bf*/
      sub_FFFEC043(a1, 224, 0); /*0xfffe91c8*/
    *(_BYTE *)(a1 + 341) = 1; /*0xfffe91d0*/
  }
  if ( (v5 & 0x400) != 0 ) /*0xfffe91dd*/
  {
    if ( !*(_BYTE *)(a1 + 163) ) /*0xfffe91df*/
      sub_FFFEC043(a1, 224, 0); /*0xfffe91eb*/
    *(_BYTE *)(a1 + 409) = 1; /*0xfffe91f3*/
  }
  if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffe9203*/
  {
    *(_BYTE *)(a1 + 462) = 1; /*0xfffe9208*/
    sub_FFFEC6A7(a1, 5); /*0xfffe920b*/
  }
  return sub_FFFEC6A7(a1, 7); /*0xfffe9245*/
}

/* 0xfffe9249 sub_FFFE9249 */
void __usercall sub_FFFE9249(int a1@<edi>)
{
  unsigned __int8 i; // bl
  int v2; // eax
  char *v3; // esi
  int v4; // eax
  int v5; // eax

  for ( i = 0; i < *(_BYTE *)(a1 + 11); ++i ) /*0xfffe924c*/
  {
    v2 = 68 * i; /*0xfffe925b*/
    v3 = (char *)(v2 + a1 + 18); /*0xfffe925e*/
    if ( *(_BYTE *)(v2 + a1 + 33) ) /*0xfffe9262*/
    {
      v4 = sub_FFFEC1F2( /*0xfffe927e*/
             *(_DWORD *)(a1 + 14),
             *(unsigned __int8 *)(v2 + a1 + 22),
             *(_BYTE *)(v2 + a1 + 23),
             *(_BYTE *)(v2 + a1 + 28),
             2888);
      if ( *(_BYTE *)(a1 + 6) < 0x13u ) /*0xfffe928a*/
        v5 = v4 | 0x10; /*0xfffe9291*/
      else
        v5 = v4 | 0x12; /*0xfffe928c*/
      sub_FFFEC306(*(_DWORD *)(a1 + 14), v3[4], v3[5], v3[10], 2888, v5); /*0xfffe92ab*/
    }
  }
}

/* 0xfffe92be sub_FFFE92BE */
int __usercall sub_FFFE92BE@<eax>(int a1@<eax>)
{
  int v2; // edi
  int v3; // ebx

  sub_FFFEC6A7(a1, 1); /*0xfffe92c6*/
  v2 = a1; /*0xfffe92cf*/
  v3 = 2; /*0xfffe92d1*/
  do /*0xfffe92eb*/
  {
    if ( *(_BYTE *)(v2 + 9) ) /*0xfffe92d2*/
      sub_FFFE7E7F(v2, *(_DWORD *)(a1 + 469)); /*0xfffe92de*/
    v2 += 154; /*0xfffe92e4*/
    --v3; /*0xfffe92ea*/
  }
  while ( v3 ); /*0xfffe92eb*/
  sub_FFFEC6A7(a1, 2); /*0xfffe92f0*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe92f5*/
  {
    sub_FFFE7E7F(a1 + 308, *(_DWORD *)(a1 + 469)); /*0xfffe930c*/
    sub_FFFE9249(a1 + 308); /*0xfffe9312*/
  }
  sub_FFFE8A5E(a1); /*0xfffe9317*/
  sub_FFFEC753(a1, 169); /*0xfffe9322*/
  return sub_FFFE72FE(2u, (_BYTE *)a1, *(_BYTE **)(a1 + 469)); /*0xfffe9338*/
}

/* 0xfffe933c sub_FFFE933C */
int __usercall sub_FFFE933C@<eax>(int a1@<edi>, char a2)
{
  int v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int8 v6; // al
  char v7; // bl
  bool v8; // cc
  int v9; // esi
  int v10; // eax
  unsigned int v11; // ebx
  char v13; // [esp+8h] [ebp-14h]
  int v14; // [esp+Ch] [ebp-10h]
  int v15; // [esp+10h] [ebp-Ch]
  int v16; // [esp+14h] [ebp-8h]
  unsigned __int8 v17; // [esp+1Bh] [ebp-1h]
  unsigned __int8 v18; // [esp+1Bh] [ebp-1h]

  v14 = *(_DWORD *)(a1 + 19); /*0xfffe9352*/
  v16 = *(_DWORD *)(v14 + 14); /*0xfffe9355*/
  v13 = 2; /*0xfffe9358*/
  if ( (unsigned __int8)sub_FFFEC5F1(v14, 11376, 0) ) /*0xfffe935c*/
  {
    v15 = 164; /*0xfffe9371*/
    if ( a2 ) /*0xfffe9374*/
      v13 = 3; /*0xfffe9376*/
  }
  else
  {
    v15 = 228; /*0xfffe9380*/
    if ( a2 ) /*0xfffe9387*/
      v15 = 244; /*0xfffe9389*/
  }
  v2 = *(_DWORD *)(a1 + 23); /*0xfffe9395*/
  v17 = (sub_FFFEC1F2(v16, *(unsigned __int8 *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), 164) >> 16) & 0x3F; /*0xfffe93b6*/
  if ( sub_FFFEC57B(*(_DWORD *)(v2 + 19)) ) /*0xfffe93b9*/
  {
    v3 = sub_FFFEC1F2(v16, *(unsigned __int8 *)(v2 + 4), *(_BYTE *)(v2 + 5), *(_BYTE *)(v2 + 10), 2148); /*0xfffe93df*/
    v4 = v3 >> 14; /*0xfffe93e6*/
  }
  else
  {
    v3 = sub_FFFEC1F2(v16, *(unsigned __int8 *)(v2 + 4), *(_BYTE *)(v2 + 5), *(_BYTE *)(v2 + 10), 164); /*0xfffe9401*/
    LOBYTE(v4) = BYTE2(v3) & 0x3F; /*0xfffe940b*/
  }
  v5 = v3; /*0xfffe940e*/
  v6 = v17; /*0xfffe9410*/
  v7 = (v5 >> 10) & 0xF; /*0xfffe9419*/
  v8 = (unsigned __int8)v4 <= v17; /*0xfffe941c*/
  v18 = v4; /*0xfffe941e*/
  if ( v8 ) /*0xfffe9421*/
    v18 = v6; /*0xfffe9423*/
  if ( (unsigned __int8)sub_FFFEC5F1(*(_DWORD *)(a1 + 19), 11376, 0) ) /*0xfffe9431*/
  {
    v9 = v14; /*0xfffe9443*/
    v10 = sub_FFFEC1F2(v16, *(unsigned __int8 *)(v14 + 7), *(_BYTE *)(a1 + 5), v13, v15); /*0xfffe9455*/
  }
  else
  {
    v10 = sub_FFFEC1F2(v16, *(unsigned __int8 *)(v14 + 7), 0, 0, v15); /*0xfffe9469*/
    v9 = v14; /*0xfffe946e*/
  }
  v11 = v10 & 0xFFC0C300 | ((v7 & 0xF | ((v18 & 0x3F) << 6)) << 10); /*0xfffe9498*/
  if ( (unsigned __int8)sub_FFFEC5F1(*(_DWORD *)(a1 + 19), 11376, 0) ) /*0xfffe949a*/
    return sub_FFFEC306(v16, *(_BYTE *)(v9 + 7), *(_BYTE *)(a1 + 5), v13, v15, v11); /*0xfffe94b3*/
  else
    return sub_FFFEC306(v16, *(_BYTE *)(v9 + 7), 0, 0, v15, v11); /*0xfffe94c2*/
}

/* 0xfffe94ce sub_FFFE94CE */
int __cdecl sub_FFFE94CE(int a1)
{
  int v1; // edi
  char *v2; // esi
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  char v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+18h] [ebp-10h]
  _BYTE *v14; // [esp+1Ch] [ebp-Ch]
  int v15; // [esp+20h] [ebp-8h]
  int v16; // [esp+20h] [ebp-8h]
  unsigned __int8 v17; // [esp+27h] [ebp-1h]
  unsigned __int8 v18; // [esp+27h] [ebp-1h]

  v1 = a1; /*0xfffe94d7*/
  v13 = *(_DWORD *)(a1 + 469); /*0xfffe94e3*/
  sub_FFFEC6A7(a1, 1); /*0xfffe94e6*/
  v12 = 0; /*0xfffe9502*/
  v2 = (char *)(a1 + 7); /*0xfffe9505*/
  v14 = (_BYTE *)(v13 + 190); /*0xfffe9508*/
  do /*0xfffe97b9*/
  {
    if ( v2[2] ) /*0xfffe950b*/
    {
      sub_FFFEC6E2(v1, v12); /*0xfffe9518*/
      v17 = v14[1]; /*0xfffe9527*/
      if ( *v14 ) /*0xfffe9520*/
      {
        sub_FFFEC71B(v1, 1); /*0xfffe952f*/
        v3 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, 0, 0, 208); /*0xfffe9544*/
        if ( v17 ) /*0xfffe954f*/
          v4 = v3 | 8; /*0xfffe9551*/
        else
          v4 = v3 & 0xFFFFFFF7; /*0xfffe9556*/
        sub_FFFEC306(a1, *v2, 0, 0, 208, v4); /*0xfffe9565*/
      }
      else
      {
        sub_FFFEC71B(v1, 2); /*0xfffe9572*/
        v5 = sub_FFFEC1F2(v1, (unsigned __int8)*v2, 0, 0, 208); /*0xfffe9584*/
        sub_FFFEC306(v1, *v2, 0, 0, 208, v5 & 0xFFFFFFFD); /*0xfffe959a*/
      }
      if ( *(_BYTE *)(v13 + 6) == 1 ) /*0xfffe95ae*/
      {
        sub_FFFE933C((int)&v2[68 * v17 + 11], 1); /*0xfffe95c4*/
        if ( (unsigned __int8)sub_FFFEC5F1(v2 - 7, 11376, 0) ) /*0xfffe95d3*/
          v6 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, v2[68 * v17 + 16], 3, 108); /*0xfffe95e9*/
        else
          v6 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, 0, 0, 240); /*0xfffe95fa*/
        v15 = v6; /*0xfffe9608*/
        if ( *(_BYTE *)(v13 + 6) ) /*0xfffe9605*/
          LOBYTE(v15) = v6 | 0x80; /*0xfffe960d*/
        if ( v14[84 * v17 - 170] ) /*0xfffe961d*/
          BYTE2(v15) = BYTE2(v6) | 0x40; /*0xfffe9623*/
        if ( (unsigned __int8)sub_FFFEC5F1(v2 - 7, 11376, 0) ) /*0xfffe9631*/
          sub_FFFEC306(a1, *v2, v2[68 * v17 + 16], 3, 108, v15); /*0xfffe964a*/
        else
          sub_FFFEC306(a1, *v2, 0, 0, 240, v15); /*0xfffe965b*/
      }
      v18 = *(v14 - 1); /*0xfffe9671*/
      if ( *(v14 - 2) ) /*0xfffe966b*/
      {
        sub_FFFEC71B(a1, 3); /*0xfffe967b*/
        v7 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, 0, 0, 208); /*0xfffe968b*/
        if ( v18 ) /*0xfffe9696*/
          v8 = v7 | 4; /*0xfffe9698*/
        else
          v8 = v7 & 0xFFFFFFFB; /*0xfffe969d*/
        sub_FFFEC306(a1, *v2, 0, 0, 208, v8); /*0xfffe96ac*/
      }
      else
      {
        sub_FFFEC71B(a1, 4); /*0xfffe96bb*/
        v9 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, 0, 0, 208); /*0xfffe96cb*/
        sub_FFFEC306(a1, *v2, 0, 0, 208, v9 & 0xFFFFFFFE); /*0xfffe96df*/
      }
      if ( *(_BYTE *)(v13 + 6) == 1 ) /*0xfffe96ee*/
      {
        sub_FFFE933C((int)&v2[68 * v18 + 11], 0); /*0xfffe9703*/
        if ( (unsigned __int8)sub_FFFEC5F1(v2 - 7, 11376, 0) ) /*0xfffe9712*/
          v10 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, v2[68 * v18 + 16], 2, 108); /*0xfffe9728*/
        else
          v10 = sub_FFFEC1F2(a1, (unsigned __int8)*v2, 0, 0, 224); /*0xfffe9739*/
        v16 = v10; /*0xfffe9747*/
        if ( *(_BYTE *)(v13 + 6) ) /*0xfffe9744*/
          LOBYTE(v16) = v10 | 0x80; /*0xfffe974c*/
        if ( v14[84 * v18 - 170] ) /*0xfffe975c*/
          BYTE2(v16) = BYTE2(v10) | 0x40; /*0xfffe9762*/
        if ( (unsigned __int8)sub_FFFEC5F1(v2 - 7, 11376, 0) ) /*0xfffe9770*/
          sub_FFFEC306(a1, *v2, v2[68 * v18 + 16], 2, 108, v16); /*0xfffe9789*/
        else
          sub_FFFEC306(a1, *v2, 0, 0, 224, v16); /*0xfffe979a*/
      }
      v1 = a1; /*0xfffe97a2*/
    }
    ++v12; /*0xfffe97a5*/
    v14 += 177; /*0xfffe97a8*/
    v2 += 154; /*0xfffe97af*/
  }
  while ( (unsigned __int8)v12 < 2u ); /*0xfffe97b9*/
  return sub_FFFEC6A7(v1, 2); /*0xfffe97c9*/
}

/* 0xfffe97ce sub_FFFE97CE */
int __usercall sub_FFFE97CE@<eax>(int a1@<esi>)
{
  int v1; // ebx
  unsigned __int8 v2; // al
  __int64 v3; // kr00_8
  unsigned __int8 v4; // al
  unsigned __int8 v5; // cl
  __int64 v6; // rax
  int v7; // edi
  int v8; // ebx
  __int64 v9; // rax
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  int v13; // edi
  int v14; // ebx
  __int64 v15; // rax
  int v16; // edi
  int v17; // ebx
  __int64 v18; // rax
  int v19; // edi
  int v20; // ebx
  __int64 v21; // rax
  int v22; // edi
  int v23; // ebx
  __int64 v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rax
  int v27; // edi
  int v28; // ebx
  __int64 v29; // rax
  int v30; // edi
  int v31; // ebx
  __int64 v32; // rax
  int v33; // edi
  int v34; // ebx
  __int64 v35; // rax
  int v36; // edi
  int v37; // ebx
  __int64 v38; // rax
  int v39; // edi
  int v40; // ebx
  __int64 v41; // rax
  int v42; // edi
  int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // edi
  int v47; // ebx
  __int64 v48; // rax
  int v49; // edi
  int v50; // ebx
  __int64 v51; // rax
  int v52; // edi
  int v53; // ebx
  int v54; // eax
  __int64 v55; // rax
  int v56; // edi
  int v57; // ebx
  __int64 v58; // rax
  int v59; // edi
  int v60; // ebx
  __int64 v61; // rax
  int v62; // edi
  int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // edi
  int v67; // ebx
  __int64 v68; // rax
  int v69; // edi
  int v70; // ebx
  __int64 v71; // rax
  int v72; // edi
  int v73; // ebx
  __int64 v74; // rax
  int v75; // edi
  int v76; // ebx
  __int64 v77; // rax
  int v78; // edi
  int v79; // ebx
  __int64 v80; // rax
  int v81; // edi
  int v82; // ebx
  __int64 v83; // rax
  int v84; // edi
  int v85; // ebx
  __int64 v86; // rax
  int v87; // edi
  int v88; // ebx
  __int64 v89; // rax
  int v90; // edi
  int v91; // ebx
  __int64 v92; // rax
  int v93; // edi
  int v94; // ebx
  __int64 v95; // rax
  int v96; // edi
  int v97; // ebx
  __int64 v98; // rax
  int v99; // edi
  int v100; // ebx
  __int64 v101; // rax
  int v102; // edi
  int v103; // ebx
  __int64 v104; // rax
  int v105; // edi
  int v106; // ebx
  __int64 v107; // rax
  int result; // eax
  __int64 v109; // [esp-18h] [ebp-30h]
  int v110; // [esp+8h] [ebp-10h]
  __int64 v111; // [esp+Ch] [ebp-Ch]
  __int64 v112; // [esp+Ch] [ebp-Ch]
  char v113; // [esp+10h] [ebp-8h]
  char v114; // [esp+16h] [ebp-2h]
  unsigned __int8 v115; // [esp+17h] [ebp-1h]

  v1 = *(_DWORD *)(a1 + 469); /*0xfffe97dc*/
  v110 = v1; /*0xfffe97e3*/
  if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffe97e6*/
  {
    if ( sub_FFFE71CE((_BYTE *)a1) ) /*0xfffe97e9*/
      *(_BYTE *)(v1 + 9) = 0; /*0xfffe97f3*/
    if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffe97fe*/
      goto LABEL_14; /*0xfffe97fe*/
  }
  if ( !sub_FFFE71CE((_BYTE *)a1) ) /*0xfffe9805*/
  {
    v113 = 0; /*0xfffe9816*/
    sub_FFFEC6A7(a1, 1); /*0xfffe9819*/
    v2 = 0; /*0xfffe9820*/
    while ( !*(_BYTE *)(154 * v2 + a1 + 9) ) /*0xfffe9830*/
    {
      if ( ++v2 >= 2u ) /*0xfffe9836*/
        goto LABEL_11; /*0xfffe9836*/
    }
    v113 = *(_BYTE *)(154 * v2 + a1 + 12); /*0xfffe9847*/
LABEL_11:
    if ( *(_BYTE *)(a1 + 317) && !(unsigned __int8)sub_FFFEC9CB(a1, a1 + 308) ) /*0xfffe9858*/
    {
      sub_FFFEB864( /*0xfffe9879*/
        a1,
        *(unsigned __int8 *)(a1 + 315),
        *(unsigned __int8 *)(a1 + 333),
        *(unsigned __int8 *)(a1 + 338),
        v113);
      sub_FFFEBC01( /*0xfffe9893*/
        a1,
        *(unsigned __int8 *)(a1 + 315),
        *(unsigned __int8 *)(a1 + 333),
        *(unsigned __int8 *)(a1 + 338),
        0);
    }
  }
  else
  {
LABEL_14:
    sub_FFFEC6A7(a1, 2); /*0xfffe98a0*/
    if ( *(_BYTE *)(a1 + 317) ) /*0xfffe98a5*/
      sub_FFFEBC01( /*0xfffe98ca*/
        a1,
        *(unsigned __int8 *)(a1 + 315),
        *(unsigned __int8 *)(a1 + 333),
        *(unsigned __int8 *)(a1 + 338),
        1);
  }
  sub_FFFEC6A7(a1, 3); /*0xfffe98d5*/
  sub_FFFEC6A7(a1, 4); /*0xfffe98dd*/
  sub_FFFEC6A7(a1, 5); /*0xfffe98e5*/
  sub_FFFEC6A7(a1, 6); /*0xfffe98ed*/
  sub_FFFEC6A7(a1, 7); /*0xfffe98f5*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffe98fd*/
  {
    v3 = sub_FFFEC238(a1, *(_BYTE *)(a1 + 315), 16, 1, 128); /*0xfffe992e*/
    if ( *(_BYTE *)(a1 + 462) == 1 ) /*0xfffe9930*/
    {
      v4 = 0; /*0xfffe9936*/
      v5 = 0; /*0xfffe9938*/
      while ( !*(_BYTE *)(154 * v5 + a1 + 9) ) /*0xfffe9948*/
      {
        if ( ++v5 >= 2u ) /*0xfffe994f*/
          goto LABEL_23; /*0xfffe994f*/
      }
      v4 = *(_BYTE *)(154 * v5 + a1 + 12); /*0xfffe995c*/
LABEL_23:
      v111 = v4; /*0xfffe9960*/
      v6 = sub_FFFEC077(v4, 0, 58); /*0xfffe996e*/
      v7 = v6 | v3; /*0xfffe9978*/
      v8 = HIDWORD(v6) | HIDWORD(v3); /*0xfffe997d*/
      v9 = sub_FFFEC077(v111, HIDWORD(v111), 52); /*0xfffe997f*/
      v10 = v9 | v7; /*0xfffe9989*/
      v11 = HIDWORD(v9) | v8; /*0xfffe998e*/
      v12 = sub_FFFEC077(v111, HIDWORD(v111), 46); /*0xfffe9990*/
      v13 = v12 | v10; /*0xfffe999a*/
      v14 = HIDWORD(v12) | v11; /*0xfffe999f*/
      v15 = sub_FFFEC077(v111, HIDWORD(v111), 40); /*0xfffe99a1*/
      v16 = v15 | v13; /*0xfffe99ab*/
      v17 = HIDWORD(v15) | v14; /*0xfffe99b0*/
      v18 = sub_FFFEC077(v111, HIDWORD(v111), 34); /*0xfffe99b2*/
      v19 = v18 | v16; /*0xfffe99bc*/
      v20 = HIDWORD(v18) | v17; /*0xfffe99c1*/
      v21 = sub_FFFEC077(v111, HIDWORD(v111), 28); /*0xfffe99c3*/
      v22 = v21 | v19; /*0xfffe99d0*/
      v23 = HIDWORD(v21) | v20; /*0xfffe99d5*/
      v24 = sub_FFFEC077(v111, HIDWORD(v111), 22); /*0xfffe99d7*/
      v109 = v111; /*0xfffe99e1*/
    }
    else
    {
      if ( !*(_BYTE *)(v1 + 9) || *(_BYTE *)(a1 + 314) >= 0x10u ) /*0xfffe99fd*/
      {
        v115 = 0; /*0xfffe9ab7*/
        v114 = 0; /*0xfffe9abb*/
        if ( *(_BYTE *)(a1 + 10) ) /*0xfffe9ab3*/
          v115 = *(_BYTE *)(a1 + 12); /*0xfffe9ac4*/
        if ( *(_BYTE *)(a1 + 164) ) /*0xfffe9ac7*/
        {
          v115 = *(_BYTE *)(a1 + 166); /*0xfffe9ad6*/
          v114 = 1; /*0xfffe9ad9*/
        }
        if ( *(_BYTE *)(v1 + 13) ) /*0xfffe9add*/
        {
          v45 = sub_FFFEC077(v115, 0, 58); /*0xfffe9af6*/
          v46 = v45 | v3; /*0xfffe9b00*/
          v47 = HIDWORD(v45) | HIDWORD(v3); /*0xfffe9b05*/
          v48 = sub_FFFEC077(v115, 0, 52); /*0xfffe9b07*/
          v49 = v48 | v46; /*0xfffe9b11*/
          v50 = HIDWORD(v48) | v47; /*0xfffe9b16*/
          v51 = sub_FFFEC077(v115, 0, 46); /*0xfffe9b18*/
          v52 = v51 | v49; /*0xfffe9b20*/
          v53 = HIDWORD(v51) | v50; /*0xfffe9b22*/
          if ( v114 ) /*0xfffe9b2a*/
            v54 = *(unsigned __int8 *)(a1 + 12); /*0xfffe9b2c*/
          else
            v54 = *(unsigned __int8 *)(a1 + 166); /*0xfffe9b32*/
          v55 = sub_FFFEC077(v54, v54 >> 31, 40); /*0xfffe9b3c*/
          v56 = v55 | v52; /*0xfffe9b49*/
          v57 = HIDWORD(v55) | v53; /*0xfffe9b4e*/
          v58 = sub_FFFEC077(v115, 0, 34); /*0xfffe9b50*/
          v59 = v58 | v56; /*0xfffe9b5a*/
          v60 = HIDWORD(v58) | v57; /*0xfffe9b5f*/
          v61 = sub_FFFEC077(v115, 0, 28); /*0xfffe9b61*/
          v62 = v61 | v59; /*0xfffe9b6b*/
          v63 = HIDWORD(v61) | v60; /*0xfffe9b70*/
          v64 = sub_FFFEC077(v115, 0, 22); /*0xfffe9b72*/
          v42 = v64 | v62; /*0xfffe9b7c*/
          v43 = HIDWORD(v64) | v63; /*0xfffe9b81*/
          v44 = sub_FFFEC077(v115, 0, 16); /*0xfffe9b83*/
          LODWORD(v44) = v44 | 0x24; /*0xfffe9b8b*/
        }
        else
        {
          if ( !(unsigned __int8)sub_FFFEC5F1(a1, 11376, 0) && !(unsigned __int8)sub_FFFEC5F1(a1 + 154, 11376, 0) ) /*0xfffe9bb9*/
          {
            v65 = sub_FFFEC077(v115, 0, 58); /*0xfffe9bd8*/
            v66 = v65 | v3; /*0xfffe9be2*/
            v67 = HIDWORD(v65) | HIDWORD(v3); /*0xfffe9be7*/
            v68 = sub_FFFEC077(v115, 0, 52); /*0xfffe9be9*/
            v69 = v68 | v66; /*0xfffe9bf3*/
            v70 = HIDWORD(v68) | v67; /*0xfffe9bf8*/
            v71 = sub_FFFEC077(v115, 0, 46); /*0xfffe9bfa*/
            v72 = v71 | v69; /*0xfffe9c04*/
            v73 = HIDWORD(v71) | v70; /*0xfffe9c09*/
            v74 = sub_FFFEC077(v115, 0, 40); /*0xfffe9c0b*/
            v75 = v74 | v72; /*0xfffe9c15*/
            v76 = HIDWORD(v74) | v73; /*0xfffe9c1a*/
            v77 = sub_FFFEC077(v115, 0, 34); /*0xfffe9c1c*/
            v78 = v77 | v75; /*0xfffe9c21*/
            v79 = HIDWORD(v77) | v76; /*0xfffe9c2a*/
            v80 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 166), 0, 28); /*0xfffe9c31*/
            v81 = v80 | v78; /*0xfffe9c3e*/
            v82 = HIDWORD(v80) | v79; /*0xfffe9c43*/
            v83 = sub_FFFEC077(v115, 0, 22); /*0xfffe9c45*/
            v84 = v83 | v81; /*0xfffe9c4a*/
            v85 = HIDWORD(v83) | v82; /*0xfffe9c50*/
            v86 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 12), 0, 16); /*0xfffe9c57*/
            v87 = (v84 | v86) & 0xFFFFFF8F; /*0xfffe9c66*/
            v88 = v85 | HIDWORD(v86); /*0xfffe9c68*/
LABEL_46:
            sub_FFFEC349(a1, *(_BYTE *)(a1 + 315), 16, 1, 128, v87 | 1, v88); /*0xfffe9d0c*/
            v1 = v110; /*0xfffe9d29*/
            goto LABEL_47; /*0xfffe9d29*/
          }
          v89 = sub_FFFEC077(v115, 0, 58); /*0xfffe9c7e*/
          v90 = v89 | v3; /*0xfffe9c88*/
          v91 = HIDWORD(v89) | HIDWORD(v3); /*0xfffe9c8d*/
          v92 = sub_FFFEC077(v115, 0, 52); /*0xfffe9c8f*/
          v93 = v92 | v90; /*0xfffe9c99*/
          v94 = HIDWORD(v92) | v91; /*0xfffe9c9e*/
          v95 = sub_FFFEC077(v115, 0, 46); /*0xfffe9ca0*/
          v96 = v95 | v93; /*0xfffe9caa*/
          v97 = HIDWORD(v95) | v94; /*0xfffe9caf*/
          v98 = sub_FFFEC077(v115, 0, 40); /*0xfffe9cb1*/
          v99 = v98 | v96; /*0xfffe9cbb*/
          v100 = HIDWORD(v98) | v97; /*0xfffe9cc0*/
          v101 = sub_FFFEC077(v115, 0, 34); /*0xfffe9cc2*/
          v102 = v101 | v99; /*0xfffe9ccc*/
          v103 = HIDWORD(v101) | v100; /*0xfffe9cd1*/
          v104 = sub_FFFEC077(v115, 0, 28); /*0xfffe9cd3*/
          v105 = v104 | v102; /*0xfffe9cd8*/
          v106 = HIDWORD(v104) | v103; /*0xfffe9ce4*/
          v107 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 166), 0, 22); /*0xfffe9ceb*/
          v42 = v107 | v105; /*0xfffe9cf0*/
          v43 = HIDWORD(v107) | v106; /*0xfffe9cf6*/
          v44 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 12), 0, 16); /*0xfffe9cfd*/
          LODWORD(v44) = v44 | 0x10; /*0xfffe9d02*/
        }
LABEL_45:
        v87 = v44 | v42; /*0xfffe9d08*/
        v88 = HIDWORD(v44) | v43; /*0xfffe9d0a*/
        goto LABEL_46; /*0xfffe9d0a*/
      }
      v25 = 0; /*0xfffe9a03*/
      if ( *(_BYTE *)(a1 + 10) ) /*0xfffe9a05*/
        v25 = *(_BYTE *)(a1 + 12); /*0xfffe9a0a*/
      if ( *(_BYTE *)(a1 + 164) ) /*0xfffe9a0d*/
        v25 = *(_BYTE *)(a1 + 166); /*0xfffe9a16*/
      v112 = v25; /*0xfffe9a24*/
      v26 = sub_FFFEC077(v25, 0, 58); /*0xfffe9a2a*/
      v27 = v26 | v3; /*0xfffe9a34*/
      v28 = HIDWORD(v26) | HIDWORD(v3); /*0xfffe9a39*/
      v29 = sub_FFFEC077(v112, HIDWORD(v112), 52); /*0xfffe9a3b*/
      v30 = v29 | v27; /*0xfffe9a45*/
      v31 = HIDWORD(v29) | v28; /*0xfffe9a4a*/
      v32 = sub_FFFEC077(v112, HIDWORD(v112), 46); /*0xfffe9a4c*/
      v33 = v32 | v30; /*0xfffe9a51*/
      v34 = HIDWORD(v32) | v31; /*0xfffe9a57*/
      v35 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 12), 0, 40); /*0xfffe9a5e*/
      v36 = v35 | v33; /*0xfffe9a68*/
      v37 = HIDWORD(v35) | v34; /*0xfffe9a6d*/
      v38 = sub_FFFEC077(v112, HIDWORD(v112), 34); /*0xfffe9a6f*/
      v39 = v38 | v36; /*0xfffe9a74*/
      v40 = HIDWORD(v38) | v37; /*0xfffe9a7d*/
      v41 = sub_FFFEC077(*(unsigned __int8 *)(a1 + 166), 0, 28); /*0xfffe9a84*/
      v22 = v41 | v39; /*0xfffe9a91*/
      v23 = HIDWORD(v41) | v40; /*0xfffe9a96*/
      v24 = sub_FFFEC077(v112, HIDWORD(v112), 22); /*0xfffe9a98*/
      v109 = v112; /*0xfffe9aa2*/
    }
    v42 = v24 | v22; /*0xfffe9aa5*/
    v43 = HIDWORD(v24) | v23; /*0xfffe9aa7*/
    v44 = sub_FFFEC077(v109, HIDWORD(v109), 16); /*0xfffe9aa9*/
    goto LABEL_45; /*0xfffe9aae*/
  }
LABEL_47:
  result = sub_FFFEC6A7(a1, 8); /*0xfffe9d2f*/
  if ( *(_BYTE *)(v1 + 9) ) /*0xfffe9d37*/
  {
    result = a1 + 308; /*0xfffe9d41*/
    if ( *(_BYTE *)(a1 + 317) ) /*0xfffe9d47*/
      return sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), *(_BYTE *)(a1 + 333), *(_BYTE *)(a1 + 338), 140, 139); /*0xfffe9d69*/
  }
  return result; /*0xfffe9d3d*/
}

/* 0xfffe9d73 sub_FFFE9D73 */
// attributes: thunk
int __usercall sub_FFFE9D73@<eax>(int a1@<esi>)
{
  return sub_FFFE97CE(a1);
}

/* 0xfffe9db0 sub_FFFE9DB0 */
_DWORD *__usercall sub_FFFE9DB0@<eax>(int a1@<eax>, int a2@<esi>)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // edi
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *result; // eax
  int v10; // ebx
  int v11; // [esp+8h] [ebp-4h]

  v3 = (_DWORD *)(a2 + 37); /*0xfffe9db8*/
  v11 = 2; /*0xfffe9dbb*/
  do /*0xfffe9ddd*/
  {
    *(_DWORD *)((char *)v3 - 23) = a2; /*0xfffe9dc4*/
    v4 = v3; /*0xfffe9dca*/
    v5 = 2; /*0xfffe9dcc*/
    do /*0xfffe9dd3*/
    {
      *v4 = (char *)v3 - 37; /*0xfffe9dcd*/
      v4 += 17; /*0xfffe9dcf*/
      --v5; /*0xfffe9dd2*/
    }
    while ( v5 ); /*0xfffe9dd3*/
    v3 = (_DWORD *)((char *)v3 + 154); /*0xfffe9dd5*/
    --v11; /*0xfffe9dda*/
  }
  while ( v11 ); /*0xfffe9ddd*/
  *(_DWORD *)(a2 + 322) = a2; /*0xfffe9de1*/
  v6 = (_DWORD *)(a2 + 308); /*0xfffe9de7*/
  v7 = (_DWORD *)(a2 + 345); /*0xfffe9ded*/
  v8 = 2; /*0xfffe9df3*/
  do /*0xfffe9dfa*/
  {
    *v7 = v6; /*0xfffe9df4*/
    v7 += 17; /*0xfffe9df6*/
    --v8; /*0xfffe9df9*/
  }
  while ( v8 ); /*0xfffe9dfa*/
  *(_DWORD *)(a2 + 469) = a1; /*0xfffe9dfc*/
  *(_DWORD *)(a2 + 465) = *(_DWORD *)a1; /*0xfffe9e04*/
  *(_BYTE *)(a2 + 463) = *(_BYTE *)(a1 + 15); /*0xfffe9e0e*/
  sub_FFFEC7E4(a2); /*0xfffe9e14*/
  result = (_DWORD *)(a2 + 86); /*0xfffe9e1c*/
  v10 = 2; /*0xfffe9e1f*/
  do /*0xfffe9e38*/
  {
    *(_DWORD *)((char *)result - 86) = -858993460; /*0xfffe9e2a*/
    *(result - 17) = -572662307; /*0xfffe9e2d*/
    *result = -572662307; /*0xfffe9e30*/
    result = (_DWORD *)((char *)result + 154); /*0xfffe9e32*/
    --v10; /*0xfffe9e37*/
  }
  while ( v10 ); /*0xfffe9e38*/
  *v6 = -858993460; /*0xfffe9e3a*/
  *(_DWORD *)(a2 + 326) = -572662307; /*0xfffe9e3d*/
  *(_DWORD *)(a2 + 394) = -572662307; /*0xfffe9e43*/
  return result; /*0xfffe9e3c*/
}

/* 0xfffe9e4c sub_FFFE9E4C */
int __cdecl sub_FFFE9E4C(int a1, int a2, _BYTE *a3, unsigned __int8 a4)
{
  char *v4; // esi

  v4 = (char *)(68 * a4 + a2); /*0xfffe9e59*/
  return sub_FFFEC306( /*0xfffe9ed7*/
           a1,
           v4[22],
           v4[24],
           v4[29],
           248,
           a3[7] & 0x7F
         | ((a3[6] & 7
           | (16 * (a3[4] & 7 | (16 * (a3[3] & 7 | (16 * (a3[2] & 7 | (16 * (a3[1] & 7 | (16 * (a3[5] & 7))))))))))) << 8));
}

/* 0xfffe9eda sub_FFFE9EDA */
bool __cdecl sub_FFFE9EDA(int a1, int a2, _BYTE *a3, unsigned __int8 a4)
{
  unsigned int v4; // eax

  v4 = sub_FFFEC1F2( /*0xfffe9f03*/
         a1,
         *(unsigned __int8 *)(a2 + 68 * a4 + 22),
         *(_BYTE *)(a2 + 68 * a4 + 24),
         *(_BYTE *)(a2 + 68 * a4 + 29),
         248);
  return ((v4 >> 28) & 7) != a3[5] /*0xfffe9f20*/
      || (HIBYTE(v4) & 7) != a3[1]
      || ((v4 >> 20) & 7) != a3[2]
      || (BYTE2(v4) & 7) != a3[3]
      || ((v4 >> 12) & 7) != a3[4]
      || (BYTE1(v4) & 7) != a3[6]
      || (v4 & 0x7F) != a3[7];
}

/* 0xfffe9f68 sub_FFFE9F68 */
bool __usercall sub_FFFE9F68@<al>(int a1@<edi>)
{
  int v1; // ebx
  bool v2; // zf
  char v3; // dl
  char v4; // al
  char v5; // al
  _BYTE v7[3]; // [esp+8h] [ebp-10h] BYREF
  char v8; // [esp+Bh] [ebp-Dh]
  char v9; // [esp+Ch] [ebp-Ch]
  char v10; // [esp+Dh] [ebp-Bh]
  char v11; // [esp+Eh] [ebp-Ah]
  char v12; // [esp+Fh] [ebp-9h]
  int v13; // [esp+13h] [ebp-5h]
  char v14; // [esp+17h] [ebp-1h]

  v1 = *(_DWORD *)(a1 + 469); /*0xfffe9f6f*/
  v2 = *(_BYTE *)(a1 + 317) == 0; /*0xfffe9f7c*/
  v14 = 0; /*0xfffe9f80*/
  if ( !v2 ) /*0xfffe9f84*/
  {
    v2 = *(_BYTE *)(a1 + 319) == 0; /*0xfffe9f8a*/
    LOBYTE(v13) = 0; /*0xfffe9f8e*/
    if ( !v2 ) /*0xfffe9f92*/
    {
      do /*0xfffea019*/
      {
        if ( *(_BYTE *)(68 * (unsigned __int8)v13 + a1 + 308 + 33) ) /*0xfffe9f9f*/
        {
          v3 = *(_BYTE *)(v1 + 5); /*0xfffe9fa6*/
          v7[1] = 1; /*0xfffe9fac*/
          v7[2] = 1; /*0xfffe9fb0*/
          v8 = 1; /*0xfffe9fb4*/
          v9 = 1; /*0xfffe9fb8*/
          v11 = 1; /*0xfffe9fbc*/
          v10 = 1; /*0xfffe9fc0*/
          if ( v3 == 1 && (v4 = sub_FFFE71C1((_BYTE *)a1), v4 == v3) || v3 == 2 ) /*0xfffe9fd4*/
          {
            if ( sub_FFFE71C1((_BYTE *)a1) ) /*0xfffe9fd8*/
            {
              v8 = 3; /*0xfffe9fe1*/
              v9 = 4; /*0xfffe9fe5*/
            }
          }
          v12 = -11 * v9 + 113 - v8 - 1; /*0xfffea002*/
          v5 = sub_FFFE9EDA(a1, a1 + 308, v7, v13); /*0xfffea005*/
          v14 += v5; /*0xfffea00d*/
        }
        LOBYTE(v13) = v13 + 1; /*0xfffea010*/
      }
      while ( (unsigned __int8)v13 < *(_BYTE *)(a1 + 319) ); /*0xfffea019*/
    }
  }
  return v14 == 0; /*0xfffea023*/
}

/* 0xfffea02a sub_FFFEA02A */
int __usercall sub_FFFEA02A@<eax>(int a1@<esi>, int a2)
{
  bool v2; // zf
  _BYTE v4[8]; // [esp+0h] [ebp-Ch] BYREF
  int v5; // [esp+8h] [ebp-4h]

  sub_FFFEC504(v4, 0, 8, 1); /*0xfffea03a*/
  v4[1] = 1; /*0xfffea044*/
  v4[2] = 1; /*0xfffea048*/
  v4[3] = 1; /*0xfffea04c*/
  v4[4] = 1; /*0xfffea050*/
  v4[6] = 1; /*0xfffea054*/
  v4[5] = 1; /*0xfffea058*/
  v4[7] = 100; /*0xfffea05c*/
  sub_FFFEC71B(a2, 1); /*0xfffea060*/
  v2 = *(_BYTE *)(a1 + 11) == 0; /*0xfffea068*/
  LOBYTE(v5) = 0; /*0xfffea06c*/
  if ( !v2 ) /*0xfffea070*/
  {
    do /*0xfffea09c*/
    {
      if ( *(_BYTE *)(68 * (unsigned __int8)v5 + a1 + 33) ) /*0xfffea079*/
        sub_FFFE9E4C(a2, a1, v4, v5); /*0xfffea08b*/
      LOBYTE(v5) = v5 + 1; /*0xfffea093*/
    }
    while ( (unsigned __int8)v5 < *(_BYTE *)(a1 + 11) ); /*0xfffea09c*/
  }
  return sub_FFFEC71B(a2, 2); /*0xfffea0aa*/
}

/* 0xfffea0ac sub_FFFEA0AC */
char __usercall sub_FFFEA0AC@<al>(int a1@<edi>)
{
  char v1; // dl
  int v2; // esi
  char v3; // al
  char result; // al
  bool v5; // zf
  _BYTE v6[7]; // [esp+4h] [ebp-Ch] BYREF
  char v7[2]; // [esp+Bh] [ebp-5h] BYREF

  v1 = *(_BYTE *)(*(_DWORD *)(a1 + 469) + 5); /*0xfffea0b8*/
  v2 = a1 + 308; /*0xfffea0bf*/
  if ( (v1 == 1 && (v3 = sub_FFFE71C1((_BYTE *)a1), v3 == v1) || v1 == 2) && sub_FFFE71C1((_BYTE *)a1) ) /*0xfffea0d9*/
  {
    result = sub_FFFEC504(v6, 0, 8, 1); /*0xfffea0ec*/
    v5 = *(_BYTE *)(a1 + 319) == 0; /*0xfffea0f4*/
    v6[1] = 1; /*0xfffea0f8*/
    v6[2] = 1; /*0xfffea0fc*/
    v6[3] = 3; /*0xfffea100*/
    v6[4] = 4; /*0xfffea104*/
    v6[6] = 1; /*0xfffea108*/
    v6[5] = 1; /*0xfffea10c*/
    strcpy(v7, "A"); /*0xfffea110*/
    if ( !v5 ) /*0xfffea118*/
    {
      do /*0xfffea152*/
      {
        if ( *(_BYTE *)(68 * (unsigned __int8)v7[1] + v2 + 33) ) /*0xfffea121*/
        {
          sub_FFFEC71B(a1, 2); /*0xfffea12b*/
          sub_FFFE9E4C(a1, a1 + 308, v6, v7[1]); /*0xfffea139*/
          sub_FFFEC6E2(a1, 1); /*0xfffea141*/
        }
        result = ++v7[1]; /*0xfffea14c*/
      }
      while ( v7[1] < *(_BYTE *)(a1 + 319) ); /*0xfffea152*/
    }
  }
  else
  {
    sub_FFFEA02A(v2, a1); /*0xfffea157*/
    return sub_FFFEC6E2(a1, 2); /*0xfffea15f*/
  }
  return result; /*0xfffea167*/
}

/* 0xfffea16a sub_FFFEA16A */
int __usercall sub_FFFEA16A@<eax>(int a1@<eax>, int a2@<esi>)
{
  char *v2; // edi
  int v3; // eax
  int v4; // eax
  int v6; // [esp+Ch] [ebp-8h]
  char v7; // [esp+10h] [ebp-4h]

  v7 = *(_BYTE *)(a1 + 7); /*0xfffea172*/
  v2 = (char *)(a2 + 7); /*0xfffea176*/
  v6 = 2; /*0xfffea179*/
  do /*0xfffea1ed*/
  {
    if ( v2[2] ) /*0xfffea183*/
    {
      v3 = sub_FFFEC1F2(a2, (unsigned __int8)*v2, 3, 0, 112); /*0xfffea195*/
      sub_FFFEC306(a2, *v2, 3, 0, 112, v3 & 0xFFE0E0E0 | 0x2010D); /*0xfffea1af*/
      v4 = sub_FFFEC1F2(a2, (unsigned __int8)*v2, 3, 0, 116); /*0xfffea1be*/
      sub_FFFEC306(a2, *v2, 3, 0, 116, v4 & 0xFFFFE0E0 | 0x302); /*0xfffea1db*/
    }
    v2 += 154; /*0xfffea1e3*/
    --v6; /*0xfffea1e9*/
  }
  while ( v6 ); /*0xfffea1ed*/
  sub_FFFEBC82(a2, v7, 16, 1, 2); /*0xfffea1ff*/
  sub_FFFEBCC8(a2, v7, 16, 1, 4); /*0xfffea20a*/
  sub_FFFEBD0E(a2, v7, 16, 1, 1); /*0xfffea214*/
  sub_FFFEBD54(a2, v7, 16, 1, 3); /*0xfffea21f*/
  sub_FFFEC71B(a2, 1); /*0xfffea229*/
  sub_FFFEB723(a2, v7, 16, 1, 1); /*0xfffea233*/
  sub_FFFEB764(a2, v7, 16, 1, 3); /*0xfffea23e*/
  sub_FFFEB7A1(a2, v7, 16, 1, 2); /*0xfffea249*/
  return sub_FFFEBD95(a2, v7, 16, 1); /*0xfffea25d*/
}

/* 0xfffea263 sub_FFFEA263 */
void __usercall sub_FFFEA263(int a1@<edi>)
{
  char *v1; // esi
  int v2; // eax
  int v3; // eax
  int v4; // [esp+8h] [ebp-4h]

  v1 = (char *)(a1 + 7); /*0xfffea269*/
  v4 = 2; /*0xfffea26c*/
  do /*0xfffea2d8*/
  {
    if ( v1[2] ) /*0xfffea275*/
    {
      v2 = sub_FFFEC1F2(a1, (unsigned __int8)*v1, 3, 0, 112); /*0xfffea285*/
      sub_FFFEC306(a1, *v1, 3, 0, 112, v2 & 0xFFE0E0E0 | 0xE); /*0xfffea29e*/
      v3 = sub_FFFEC1F2(a1, (unsigned __int8)*v1, 3, 0, 116); /*0xfffea2ae*/
      sub_FFFEC306(a1, *v1, 3, 0, 116, v3 & 0xFFFFE0E0); /*0xfffea2c7*/
    }
    v1 += 154; /*0xfffea2cf*/
    --v4; /*0xfffea2d5*/
  }
  while ( v4 ); /*0xfffea2d8*/
}

/* 0xfffea2de sub_FFFEA2DE */
int __usercall sub_FFFEA2DE@<eax>(int a1@<eax>)
{
  int v2; // ebp
  unsigned __int8 v3; // bl
  int result; // eax
  char v5; // al

  v2 = *(_DWORD *)(a1 + 469); /*0xfffea2e3*/
  v3 = 0; /*0xfffea2ea*/
  do /*0xfffea33b*/
  {
    result = 154 * v3; /*0xfffea2ef*/
    if ( *(_BYTE *)(result + a1 + 317) ) /*0xfffea2f5*/
    {
      v5 = *(_BYTE *)(v2 + 5); /*0xfffea2ff*/
      if ( v5 == 1 || v5 == 2 ) /*0xfffea308*/
      {
        sub_FFFEA16A(a1 + 308, a1); /*0xfffea314*/
        sub_FFFEC6E2(a1, 1); /*0xfffea31c*/
      }
      else
      {
        sub_FFFEA263(a1); /*0xfffea327*/
      }
      result = sub_FFFEC6E2(a1, 2); /*0xfffea32f*/
    }
    ++v3; /*0xfffea336*/
  }
  while ( !v3 ); /*0xfffea33b*/
  return result; /*0xfffea33d*/
}

/* 0xfffea342 sub_FFFEA342 */
char __usercall sub_FFFEA342@<al>(_BYTE *a1@<edi>)
{
  char *v1; // esi
  int v2; // eax
  unsigned __int8 i; // [esp+0h] [ebp-2h]
  char v5; // [esp+1h] [ebp-1h]

  v5 = 0; /*0xfffea34a*/
  if ( a1[317] ) /*0xfffea343*/
  {
    if ( a1[314] >= 0x13u ) /*0xfffea35c*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffea362*/
      {
        v1 = &a1[68 * i]; /*0xfffea389*/
        if ( v1[341] ) /*0xfffea38c*/
        {
          v2 = sub_FFFEC1F2(a1, (unsigned __int8)v1[330], v1[331], v1[336], 4068); /*0xfffea3b2*/
          if ( (v2 & 0x800000) == 0 ) /*0xfffea3bc*/
          {
            sub_FFFEC306(a1, v1[330], v1[331], v1[336], 4068, v2 | 0x800000); /*0xfffea3de*/
            v5 = 1; /*0xfffea3e6*/
          }
        }
      }
    }
  }
  return v5; /*0xfffea403*/
}

/* 0xfffea404 nullsub_1 */
void nullsub_1()
{
  ; /*0xfffea404*/
}

/* 0xfffea405 sub_FFFEA405 */
int __usercall sub_FFFEA405@<eax>(int a1@<eax>)
{
  sub_FFFEC6A7(a1, 1); /*0xfffea40c*/
  if ( !sub_FFFE9F68(a1) ) /*0xfffea415*/
  {
    sub_FFFEA0AC(a1); /*0xfffea41e*/
    sub_FFFE72FE(4u, (_BYTE *)a1, *(_BYTE **)(a1 + 469)); /*0xfffea42d*/
  }
  if ( sub_FFFEA342((_BYTE *)a1) ) /*0xfffea434*/
    sub_FFFE72FE(6u, (_BYTE *)a1, *(_BYTE **)(a1 + 469)); /*0xfffea447*/
  sub_FFFEC6A7(a1, 2); /*0xfffea44f*/
  if ( sub_FFFE853A(a1) ) /*0xfffea456*/
    sub_FFFE72FE(5u, (_BYTE *)a1, *(_BYTE **)(a1 + 469)); /*0xfffea469*/
  sub_FFFECCA9(a1); /*0xfffea46f*/
  sub_FFFED984(a1); /*0xfffea475*/
  sub_FFFEE140(a1); /*0xfffea47b*/
  return sub_FFFEC6A7(a1, 3); /*0xfffea48b*/
}

/* 0xfffea48e nullsub_2 */
void nullsub_2()
{
  ; /*0xfffea48e*/
}

/* 0xfffea48f sub_FFFEA48F */
char __usercall sub_FFFEA48F@<al>(int a1@<esi>, int a2, int a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  char v7; // cl
  char v8; // dl
  int v9; // eax
  _BYTE *v10; // edi
  unsigned __int8 i; // bl
  int v12; // edx
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+8h] [ebp-8h]
  char v16; // [esp+Fh] [ebp-1h]
  char v17; // [esp+Fh] [ebp-1h]

  v3 = *(_DWORD *)(a1 + 469); /*0xfffea496*/
  v16 = 0; /*0xfffea49c*/
  v4 = a1; /*0xfffea4a0*/
  v14 = 2; /*0xfffea4a2*/
  do /*0xfffea4ca*/
  {
    if ( (unsigned __int8)sub_FFFEC5F1(v4, 11376, 0) ) /*0xfffea4b1*/
      v16 = 1; /*0xfffea4bd*/
    v4 += 154; /*0xfffea4c1*/
    --v14; /*0xfffea4c7*/
  }
  while ( v14 ); /*0xfffea4ca*/
  v5 = *(unsigned __int8 *)(v3 + 12); /*0xfffea4d0*/
  if ( !v16 ) /*0xfffea4d4*/
  {
    if ( v5 == 1 ) /*0xfffea505*/
    {
      v8 = 8; /*0xfffea521*/
      v17 = 24; /*0xfffea523*/
      goto LABEL_19; /*0xfffea523*/
    }
    if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffea50e*/
    {
      v7 = 24; /*0xfffea518*/
      v8 = 16; /*0xfffea51a*/
      v17 = 24; /*0xfffea51c*/
      goto LABEL_20; /*0xfffea51f*/
    }
    v8 = 0; /*0xfffea510*/
    goto LABEL_16; /*0xfffea510*/
  }
  v6 = v5 - 1; /*0xfffea4d6*/
  if ( !v6 ) /*0xfffea4d7*/
  {
    v7 = 40; /*0xfffea4fa*/
    v8 = 16; /*0xfffea4fc*/
    v17 = 32; /*0xfffea4fe*/
    goto LABEL_20; /*0xfffea502*/
  }
  if ( v6 == 1 ) /*0xfffea4da*/
  {
    v8 = 16; /*0xfffea4f2*/
    v17 = 40; /*0xfffea4f4*/
LABEL_19:
    v7 = 32; /*0xfffea527*/
    goto LABEL_20; /*0xfffea527*/
  }
  if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffea4e3*/
  {
    v8 = 24; /*0xfffea4ee*/
LABEL_16:
    v17 = 32; /*0xfffea512*/
    goto LABEL_19; /*0xfffea516*/
  }
  v7 = 40; /*0xfffea4e5*/
  v8 = 0; /*0xfffea4e7*/
  v17 = 40; /*0xfffea4e9*/
LABEL_20:
  v9 = a2 + 1; /*0xfffea529*/
  v10 = (_BYTE *)(a1 + 9); /*0xfffea52d*/
  v15 = 2; /*0xfffea530*/
  do /*0xfffea553*/
  {
    if ( *v10 ) /*0xfffea537*/
    {
      *(_BYTE *)(v9 + 1) = v17; /*0xfffea53f*/
      *(_BYTE *)v9 = v8; /*0xfffea542*/
      *(_BYTE *)(v9 - 1) = v7; /*0xfffea544*/
    }
    v10 += 154; /*0xfffea547*/
    v9 += 3; /*0xfffea54d*/
    --v15; /*0xfffea550*/
  }
  while ( v15 ); /*0xfffea553*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffea555*/
  {
    for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffea560*/
    {
      v9 = 68 * i; /*0xfffea56d*/
      if ( *(_BYTE *)(v9 + a1 + 341) ) /*0xfffea577*/
      {
        if ( sub_FFFE71CE((_BYTE *)a1) && sub_FFFEC57B(*(_DWORD *)(*(_DWORD *)(v12 + 23) + 19)) ) /*0xfffea58e*/
        {
          LOBYTE(v9) = a3; /*0xfffea598*/
          *(_BYTE *)(i + a3) = 56; /*0xfffea59b*/
        }
        else
        {
          LOBYTE(v9) = v17; /*0xfffea5a1*/
          *(_BYTE *)(i + a3) = v17; /*0xfffea5a7*/
        }
      }
    }
  }
  return v9; /*0xfffea5b4*/
}

/* 0xfffea5b8 sub_FFFEA5B8 */
_BYTE *__usercall sub_FFFEA5B8@<eax>(_BYTE *result@<eax>, int a2)
{
  char *v2; // esi
  _BYTE *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v2 = (char *)(a2 + 7); /*0xfffea5c2*/
  v3 = result; /*0xfffea5c5*/
  v7 = 2; /*0xfffea5c7*/
  do /*0xfffea6a7*/
  {
    if ( v2[2] ) /*0xfffea5d0*/
    {
      if ( !(unsigned __int8)sub_FFFEC613(v2 - 7, 11328, 0) ) /*0xfffea5e3*/
      {
        v4 = sub_FFFEC1F2(a2, (unsigned __int8)*v2, 0, 0, 64); /*0xfffea5ff*/
        sub_FFFEC306(a2, *v2, 0, 0, 64, v4 & 0xFFFFFFC0 | v3[2] & 0x3F); /*0xfffea61e*/
        v5 = sub_FFFEC1F2(a2, (unsigned __int8)*v2, 0, 0, 68); /*0xfffea62f*/
        sub_FFFEC306(a2, *v2, 0, 0, 68, v5 & 0xFFFFFFC0 | v3[1] & 0x3F); /*0xfffea651*/
        v6 = sub_FFFEC1F2(a2, (unsigned __int8)*v2, 0, 0, 72); /*0xfffea662*/
        sub_FFFEC306(a2, *v2, 0, 0, 72, v6 & 0xFFFFFFC0 | *v3 & 0x3F); /*0xfffea680*/
      }
      result = (_BYTE *)sub_FFFEB641(a2, (unsigned __int8)*v2, 0, 0, v3); /*0xfffea693*/
    }
    v2 += 154; /*0xfffea69b*/
    v3 += 3; /*0xfffea6a1*/
    --v7; /*0xfffea6a4*/
  }
  while ( v7 ); /*0xfffea6a7*/
  return result; /*0xfffea6ad*/
}

/* 0xfffea6da sub_FFFEA6DA */
char __cdecl sub_FFFEA6DA(char a1)
{
  switch ( a1 ) /*0xfffea6e0*/
  {
    case 4: /*0xfffea6e0*/
      return 6; /*0xfffea6fb*/
    case 8: /*0xfffea6e0*/
      return 7; /*0xfffea6f8*/
    case 24: /*0xfffea6e0*/
      return 1; /*0xfffea6f5*/
  }
  return a1 != 32 ? 0 : 2;
}

/* 0xfffea6fe sub_FFFEA6FE */
void __usercall sub_FFFEA6FE(int a1@<ebx>, int a2)
{
  int v2; // eax
  char *v3; // esi
  char *v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // eax
  char v7; // al
  int v8; // [esp+0h] [ebp-8h]
  unsigned __int8 i; // [esp+4h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 317) ) /*0xfffea703*/
  {
    for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffea710*/
    {
      v2 = 68 * i; /*0xfffea729*/
      v3 = (char *)(v2 + a1 + 326); /*0xfffea72c*/
      if ( *(_BYTE *)(v2 + a1 + 341) ) /*0xfffea733*/
      {
        v4 = (char *)(a2 + i); /*0xfffea740*/
        if ( (unsigned __int8)*v4 <= 0x20u ) /*0xfffea745*/
        {
          sub_FFFEBDCE( /*0xfffea7e6*/
            a1,
            *(unsigned __int8 *)(v2 + a1 + 330),
            *(unsigned __int8 *)(v2 + a1 + 334),
            *(unsigned __int8 *)(v2 + a1 + 339),
            0,
            i);
          v7 = sub_FFFEA6DA(*v4); /*0xfffea7f8*/
          sub_FFFEBE24(a1, (unsigned __int8)v3[4], (unsigned __int8)v3[8], (unsigned __int8)v3[13], v7, i, 0); /*0xfffea814*/
        }
        else
        {
          v8 = 176; /*0xfffea74f*/
          if ( i ) /*0xfffea756*/
            v8 = 180; /*0xfffea758*/
          v5 = sub_FFFEC1F2( /*0xfffea787*/
                 a1,
                 *(unsigned __int8 *)(v2 + a1 + 330),
                 *(_BYTE *)(v2 + a1 + 334),
                 *(_BYTE *)(v2 + a1 + 339),
                 v8)
             & 0xFFFE0FFD
             | 0x10002;
          switch ( *v4 ) /*0xfffea78f*/
          {
            case '(': /*0xfffea78f*/
              v6 = v5 | 0x38; /*0xfffea7aa*/
              break;
            case '8': /*0xfffea78f*/
              v6 = v5 | 8; /*0xfffea7a5*/
              break;
            case '@': /*0xfffea78f*/
              v6 = v5 | 0x10; /*0xfffea7a0*/
              break;
            default:
              v6 = v5 & 0xFFFFFFC7; /*0xfffea79b*/
              break;
          }
          sub_FFFEC306(a1, v3[4], v3[8], v3[13], v8, v6); /*0xfffea7c4*/
        }
      }
    }
  }
}

/* 0xfffea883 sub_FFFEA883 */
int __usercall sub_FFFEA883@<eax>(int a1@<eax>)
{
  int v2; // ebx
  char *v3; // edi
  bool v4; // zf
  int v5; // ecx
  char *v6; // edi
  int v7; // ecx
  int v8; // eax
  _BYTE *v9; // ecx
  char *v10; // eax
  _DWORD v12[2]; // [esp+8h] [ebp-10h] BYREF
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+14h] [ebp-4h] BYREF

  sub_FFFEC6A7(a1, 1); /*0xfffea890*/
  sub_FFFEC504(v12, 0, 6, 1); /*0xfffea89f*/
  sub_FFFEA48F(a1, (int)v12, (int)&v14 + 2); /*0xfffea8ac*/
  sub_FFFEA5B8(v12, a1); /*0xfffea8b5*/
  sub_FFFEA6FE(a1, (int)&v14 + 2); /*0xfffea8c0*/
  sub_FFFECA46(a1, (char *)&v14 + 2); /*0xfffea8ca*/
  sub_FFFECC56(a1); /*0xfffea8d0*/
  sub_FFFED1F9(a1); /*0xfffea8d6*/
  v2 = 2; /*0xfffea8dd*/
  sub_FFFEC6A7(a1, 2); /*0xfffea8e0*/
  if ( *(_BYTE *)(a1 + 317) ) /*0xfffea8ee*/
  {
    LOBYTE(v13) = *(_BYTE *)(a1 + 315); /*0xfffea8fd*/
    sub_FFFEE744(a1 + 308); /*0xfffea900*/
    sub_FFFEC6A7(a1, 3); /*0xfffea908*/
    v3 = (char *)(a1 + 12); /*0xfffea910*/
    do /*0xfffea947*/
    {
      if ( *(v3 - 3) ) /*0xfffea913*/
      {
        sub_FFFEBC3D(a1, v13, 16, 1, *v3); /*0xfffea926*/
        sub_FFFEBF39(a1, v13, 16, 1, *v3); /*0xfffea938*/
      }
      v3 += 154; /*0xfffea940*/
      --v2; /*0xfffea946*/
    }
    while ( v2 ); /*0xfffea947*/
    sub_FFFEC6A7(a1, 4); /*0xfffea94c*/
    sub_FFFEBA80(a1, v13, 16, 1); /*0xfffea95d*/
    sub_FFFEC6A7(a1, 5); /*0xfffea965*/
    sub_FFFEB8C6(a1, v13, 16, 1, 1); /*0xfffea971*/
    sub_FFFEC6A7(a1, 6); /*0xfffea979*/
    sub_FFFEB9B0(a1, v13, 16, 1); /*0xfffea984*/
    sub_FFFEC6A7(a1, 7); /*0xfffea98f*/
    if ( *(_BYTE *)(a1 + 462) != 1 ) /*0xfffea99c*/
      sub_FFFEB93B(a1, v13, 16, 1); /*0xfffea9a4*/
    sub_FFFEC6A7(a1, 8); /*0xfffea9af*/
    sub_FFFEB96F(a1, v13, 16, 1, 0); /*0xfffea9bc*/
    sub_FFFEC6A7(a1, 9); /*0xfffea9c4*/
    sub_FFFEBA4C(a1, v13, 16, 1); /*0xfffea9cf*/
    sub_FFFEC6A7(a1, 10); /*0xfffea9d7*/
    sub_FFFEBABB(a1, v13, 16, 1); /*0xfffea9e2*/
    sub_FFFEC6A7(a1, 11); /*0xfffea9ed*/
    if ( sub_FFFE71CE((_BYTE *)a1) ) /*0xfffea9f3*/
      sub_FFFEBB51(a1, v13, 16, 1); /*0xfffeaa05*/
    else
      sub_FFFEBB1F(a1, v13, 16, 1); /*0xfffeaa0c*/
    sub_FFFEC6A7(a1, 12); /*0xfffeaa17*/
    sub_FFFEBB83(a1, v13, 16, 1, 1); /*0xfffeaa23*/
    sub_FFFEC6A7(a1, 13); /*0xfffeaa2b*/
    sub_FFFEBBC3(a1, v13, 16, 1, 1); /*0xfffeaa37*/
    sub_FFFEC6A7(a1, 14); /*0xfffeaa3f*/
    if ( (unsigned __int8)sub_FFFE71C1((_BYTE *)a1) > 1u ) /*0xfffeaa50*/
      sub_FFFEB823(a1, v13, 16, 1, 1); /*0xfffeaa59*/
    sub_FFFEB6A1(a1, v13, 16, 1, 2); /*0xfffeaa69*/
    sub_FFFEC6A7(a1, 16); /*0xfffeaa70*/
    v4 = *(_BYTE *)(a1 + 319) == 0; /*0xfffeaa78*/
    HIBYTE(v14) = 0; /*0xfffeaa7f*/
    if ( !v4 ) /*0xfffeaa83*/
    {
      do /*0xfffeab48*/
      {
        v5 = 68 * HIBYTE(v14); /*0xfffeaa8f*/
        v6 = (char *)(v5 + a1 + 326); /*0xfffeaa92*/
        if ( *(_BYTE *)(v5 + a1 + 341) ) /*0xfffeaa99*/
        {
          v7 = *(_DWORD *)(a1 + 469); /*0xfffeaaa3*/
          v12[0] = 84 * HIBYTE(v14); /*0xfffeaaac*/
          if ( *(_BYTE *)(v7 + v12[0] + 375) || *(_BYTE *)(v7 + v12[0] + 377) ) /*0xfffeaaba*/
          {
            v8 = sub_FFFEC1F2(a1, (unsigned __int8)v6[4], v6[6], v6[11], 92); /*0xfffeaad8*/
            v9 = (_BYTE *)(v12[0] + *(_DWORD *)(a1 + 469)); /*0xfffeaae6*/
            if ( v9[375] ) /*0xfffeaaeb*/
            {
              if ( v9[376] ) /*0xfffeaaf4*/
                v8 |= 1u; /*0xfffeaafd*/
              else
                v8 &= ~1u; /*0xfffeab01*/
            }
            if ( v9[377] ) /*0xfffeab04*/
            {
              if ( v9[378] ) /*0xfffeab0d*/
                v8 |= 2u; /*0xfffeab16*/
              else
                v8 &= ~2u; /*0xfffeab1b*/
            }
            sub_FFFEC306(a1, v6[4], v6[6], v6[11], 92, v8); /*0xfffeab34*/
          }
        }
        ++HIBYTE(v14); /*0xfffeab3c*/
      }
      while ( HIBYTE(v14) < *(_BYTE *)(a1 + 319) ); /*0xfffeab48*/
    }
    sub_FFFEC6A7(a1, 17); /*0xfffeab54*/
    sub_FFFEBE81(a1, v13, 16, 1, 0); /*0xfffeab61*/
    sub_FFFEBF02(a1, v13, 16, 1); /*0xfffeab6c*/
    sub_FFFEC6A7(a1, 18); /*0xfffeab74*/
    v10 = (char *)(a1 + 12); /*0xfffeab79*/
    v14 = a1 + 12; /*0xfffeab7f*/
    v12[0] = 2; /*0xfffeab82*/
    do /*0xfffeabaf*/
    {
      if ( *(v10 - 3) ) /*0xfffeab89*/
        sub_FFFEBF89(a1, v13, 16, 1, *v10); /*0xfffeab99*/
      v10 = (char *)(v14 + 154); /*0xfffeaba4*/
      v4 = v12[0]-- == 1; /*0xfffeaba9*/
      v14 += 154; /*0xfffeabac*/
    }
    while ( !v4 ); /*0xfffeabaf*/
    sub_FFFEC6A7(a1, 19); /*0xfffeabb4*/
    sub_FFFEBFE6(a1, v13, 16, 1, *(_BYTE *)(a1 + 320)); /*0xfffeabc8*/
    if ( sub_FFFE71CE((_BYTE *)a1) ) /*0xfffeabce*/
      sub_FFFEB6E2(a1, v13, 16, 1, 1); /*0xfffeabe1*/
    sub_FFFEC986(a1, a1 + 308); /*0xfffeabf1*/
    sub_FFFED732(a1 + 308); /*0xfffeabf7*/
  }
  return sub_FFFEC6A7(a1, 20); /*0xfffeac0a*/
}

/* 0xfffeac0e sub_FFFEAC0E */
void __usercall sub_FFFEAC0E(int a1@<esi>)
{
  __int64 v1; // rax

  if ( *(_BYTE *)(a1 + 317) ) /*0xfffeac0e*/
  {
    sub_FFFEC6A7(a1, 1); /*0xfffeac1f*/
    sub_FFFEC6A7(a1, 2); /*0xfffeac27*/
    sub_FFFEC6A7(a1, 3); /*0xfffeac2f*/
    sub_FFFEC6A7(a1, 4); /*0xfffeac37*/
    sub_FFFEC6A7(a1, 5); /*0xfffeac3f*/
    v1 = sub_FFFEC238(a1, *(_BYTE *)(a1 + 315), *(_BYTE *)(a1 + 335), *(_BYTE *)(a1 + 340), 224); /*0xfffeac66*/
    LODWORD(v1) = v1 & 0xFFFFC07E | 1; /*0xfffeac79*/
    if ( *(_BYTE *)(*(_DWORD *)(a1 + 469) + 13) ) /*0xfffeac7c*/
      LODWORD(v1) = v1 | 0x22; /*0xfffeac82*/
    sub_FFFEC349(a1, *(_BYTE *)(a1 + 315), *(_BYTE *)(a1 + 335), *(_BYTE *)(a1 + 340), 224, v1, HIDWORD(v1)); /*0xfffeaca4*/
    sub_FFFEC6A7(a1, 6); /*0xfffeacac*/
  }
}

/* 0xfffeacb6 sub_FFFEACB6 */
unsigned __int8 __cdecl sub_FFFEACB6(int a1, int a2)
{
  int v2; // esi
  unsigned __int8 result; // al
  int v5; // eax
  int v6; // ebx
  int v7; // [esp+8h] [ebp-8h]
  unsigned __int8 i; // [esp+Ch] [ebp-4h]
  unsigned __int8 v9; // [esp+1Bh] [ebp+Bh]

  v2 = a2; /*0xfffeacbc*/
  result = *(_BYTE *)(*(_DWORD *)(a1 + 469) + 10); /*0xfffeaccd*/
  v9 = result; /*0xfffeacd0*/
  for ( i = 0; i < *(_BYTE *)(v2 + 11); result = i ) /*0xfffeacbf*/
  {
    v5 = v2 + 68 * i; /*0xfffeace5*/
    v6 = 516; /*0xfffeaceb*/
    v7 = 564; /*0xfffeacf0*/
    if ( *(_BYTE *)(v5 + 33) ) /*0xfffeace7*/
    {
      if ( i ) /*0xfffead01*/
      {
        v6 = 644; /*0xfffead03*/
        v7 = 692; /*0xfffead08*/
      }
      sub_FFFED924(v5 + 18); /*0xfffead13*/
      a2 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v2 + 7), 20, 2, v6); /*0xfffead30*/
      if ( v9 ) /*0xfffead33*/
        LOWORD(a2) = a2 | 0x1FFF; /*0xfffead35*/
      else
        LOWORD(a2) = a2 & 0xE000; /*0xfffead3d*/
      sub_FFFED81E(v2, &a2); /*0xfffead48*/
      sub_FFFEC306(a1, *(_BYTE *)(v2 + 7), 20, 2, v6, a2); /*0xfffead5c*/
      a2 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v2 + 7), 20, 2, v7); /*0xfffead7b*/
      if ( v9 ) /*0xfffead7e*/
        a2 |= 0xEFF1Fu; /*0xfffead80*/
      else
        a2 &= 0xFFF100E0; /*0xfffead89*/
      sub_FFFED843(v2, &a2, i); /*0xfffead98*/
      sub_FFFEC306(a1, *(_BYTE *)(v2 + 7), 20, 2, v7, a2); /*0xfffeadae*/
      sub_FFFED7E1(v2); /*0xfffeadb4*/
    }
    ++i; /*0xfffeadbc*/
  }
  return result; /*0xfffeadcc*/
}

/* 0xfffeade6 nullsub_3 */
void nullsub_3()
{
  ; /*0xfffeade6*/
}

/* 0xfffeade7 sub_FFFEADE7 */
int __usercall sub_FFFEADE7@<eax>(int a1@<esi>)
{
  int v1; // ebx
  _BYTE *v2; // edi
  char v3; // al
  char v4; // al
  int result; // eax
  char v6; // [esp+8h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 469); /*0xfffeadec*/
  v6 = 0; /*0xfffeadf3*/
  v2 = (_BYTE *)(a1 + 7); /*0xfffeadf7*/
  do /*0xfffeae1f*/
  {
    v2[1] = v6; /*0xfffeadfd*/
    v3 = sub_FFFEC4CC(v6++, *(_BYTE *)(v1 + 4)); /*0xfffeae09*/
    *v2 = v3; /*0xfffeae11*/
    v2 += 154; /*0xfffeae14*/
  }
  while ( (unsigned __int8)v6 < 2u ); /*0xfffeae1f*/
  v4 = sub_FFFEC4A0(); /*0xfffeae21*/
  result = a1 + 154 * (unsigned __int8)sub_FFFEC5EC(v4); /*0xfffeae36*/
  *(_BYTE *)(result + 9) = 1; /*0xfffeae38*/
  *(_BYTE *)(result + 10) = 1; /*0xfffeae3c*/
  *(_BYTE *)(a1 + 315) = 0; /*0xfffeae41*/
  *(_BYTE *)(a1 + 316) = 0; /*0xfffeae48*/
  return result; /*0xfffeae40*/
}

/* 0xfffeae52 sub_FFFEAE52 */
int __usercall sub_FFFEAE52@<eax>(int a1@<esi>)
{
  sub_FFFEC306( /*0xfffeae75*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2828,
    268369920);
  sub_FFFEC306( /*0xfffeae9c*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2824,
    1092);
  sub_FFFEC306( /*0xfffeaec0*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2304,
    3);
  sub_FFFEC306( /*0xfffeaeea*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2816,
    0x7FFFFFF);
  sub_FFFEC306( /*0xfffeaf11*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2956,
    130023424);
  sub_FFFEC306( /*0xfffeaf38*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2456,
    16777217);
  sub_FFFEC306( /*0xfffeaf62*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2864,
    89473932);
  sub_FFFEC306( /*0xfffeaf89*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2868,
    -1543502240);
  sub_FFFEC306( /*0xfffeafb1*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2876,
    37748736);
  sub_FFFEC306( /*0xfffeafd7*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2876,
    47251456);
  return sub_FFFEC306( /*0xfffeb003*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2880,
           8);
}

/* 0xfffeb005 sub_FFFEB005 */
int __usercall sub_FFFEB005@<eax>(int a1@<edi>)
{
  int result; // eax
  unsigned __int8 i; // bl

  result = *(_DWORD *)(a1 + 469); /*0xfffeb005*/
  if ( *(_BYTE *)(result + 14) ) /*0xfffeb00b*/
  {
    if ( *(_BYTE *)(a1 + 317) ) /*0xfffeb011*/
    {
      for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffeb01d*/
      {
        result = 68 * i; /*0xfffeb029*/
        if ( !*(_BYTE *)(result + a1 + 341) ) /*0xfffeb033*/
          result = sub_FFFEAE52(result + a1 + 326); /*0xfffeb039*/
      }
    }
  }
  return result; /*0xfffeb04a*/
}

/* 0xfffeb04b sub_FFFEB04B */
int __usercall sub_FFFEB04B@<eax>(int a1@<eax>)
{
  int result; // eax
  int v3; // edx

  sub_FFFED388(a1); /*0xfffeb04f*/
  sub_FFFEC753(a1, 166); /*0xfffeb05a*/
  sub_FFFEC753(a1, 165); /*0xfffeb065*/
  result = *(_DWORD *)(a1 + 469); /*0xfffeb06a*/
  if ( *(_BYTE *)(result + 6) ) /*0xfffeb073*/
  {
    if ( sub_FFFE724C((_BYTE *)a1) ) /*0xfffeb07a*/
    {
      sub_FFFE8A5E(a1); /*0xfffeb084*/
      return sub_FFFEE0BC(a1); /*0xfffeb08a*/
    }
    else
    {
      sub_FFFE7CE5(a1); /*0xfffeb093*/
      result = sub_FFFE737B(*(_DWORD *)(a1 + 469)); /*0xfffeb0a1*/
      if ( !result && (*(_BYTE *)(v3 + 11) & 2) == 0 ) /*0xfffeb0ae*/
      {
        sub_FFFEC753(a1, 167); /*0xfffeb0b7*/
        sub_FFFE92BE(a1); /*0xfffeb0be*/
        sub_FFFEE47E(a1); /*0xfffeb0c4*/
        sub_FFFEB005(a1); /*0xfffeb0cb*/
        sub_FFFEC753(a1, 168); /*0xfffeb0d6*/
        return sub_FFFE94CE(a1); /*0xfffeb0dc*/
      }
    }
  }
  return result; /*0xfffeb090*/
}

/* 0xfffeb12a sub_FFFEB12A */
int __cdecl sub_FFFEB12A(int a1, int a2, char a3, char a4)
{
  int v4; // edx

  v4 = 104; /*0xfffeb13a*/
  if ( (_BYTE)a2 == *(_BYTE *)(a1 + 315) ) /*0xfffeb13b*/
    v4 = 2088; /*0xfffeb13d*/
  return (sub_FFFEC1F2(a1, a2, a3, a4, v4) >> 8) & 7; /*0xfffeb15b*/
}

/* 0xfffeb15c sub_FFFEB15C */
int __cdecl sub_FFFEB15C(int a1, int a2, char a3, char a4)
{
  int v4; // edx

  v4 = 104; /*0xfffeb16c*/
  if ( (_BYTE)a2 == *(_BYTE *)(a1 + 315) ) /*0xfffeb16d*/
    v4 = 2088; /*0xfffeb16f*/
  return (sub_FFFEC1F2(a1, a2, a3, a4, v4) >> 12) & 7; /*0xfffeb18d*/
}

/* 0xfffeb18e sub_FFFEB18E */
char __cdecl sub_FFFEB18E(int a1, int a2, char a3, char a4)
{
  int v4; // edi
  __int16 v5; // ax
  int v6; // eax

  v4 = 128; /*0xfffeb1a0*/
  if ( (_BYTE)a2 == *(_BYTE *)(a1 + 315) ) /*0xfffeb1a5*/
    v4 = 2112; /*0xfffeb1a7*/
  v5 = sub_FFFEC1AB(a1, a2, a3, a4, 0); /*0xfffeb1b6*/
  if ( v5 == -1 || !v5 ) /*0xfffeb1c7*/
    LOBYTE(v6) = 0; /*0xfffeb1df*/
  else
    return sub_FFFEC1F2(a1, a2, a3, a4, v4) & 1; /*0xfffeb1da*/
  return v6; /*0xfffeb1e1*/
}

/* 0xfffeb1e6 sub_FFFEB1E6 */
int __cdecl sub_FFFEB1E6(int a1, int a2, char a3, char a4)
{
  int v4; // edx

  v4 = 128; /*0xfffeb1f4*/
  if ( (_BYTE)a2 == *(_BYTE *)(a1 + 315) ) /*0xfffeb1f9*/
    v4 = 2112; /*0xfffeb1fb*/
  return (sub_FFFEC1F2(a1, a2, a3, a4, v4) >> 26) & 1; /*0xfffeb219*/
}

/* 0xfffeb21a sub_FFFEB21A */
int __cdecl sub_FFFEB21A(int a1, int a2, char a3, char a4)
{
  int v4; // edi
  int v5; // eax

  v4 = 108; /*0xfffeb22e*/
  if ( (_BYTE)a2 == *(_BYTE *)(a1 + 315) ) /*0xfffeb22f*/
    v4 = 2092; /*0xfffeb231*/
  v5 = sub_FFFEC1F2(a1, a2, a3, a4, v4); /*0xfffeb23f*/
  return sub_FFFEC306(a1, a2, a3, a4, v4, v5 | 0x80); /*0xfffeb25b*/
}

/* 0xfffeb260 sub_FFFEB260 */
char __cdecl sub_FFFEB260(int a1)
{
  int v1; // eax
  char v2; // cl
  int v3; // edi
  int v4; // eax

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeb268*/
  v2 = *(_BYTE *)(a1 + 4); /*0xfffeb26b*/
  v3 = 108; /*0xfffeb277*/
  if ( v2 == *(_BYTE *)(v1 + 315) ) /*0xfffeb278*/
    v3 = 2092; /*0xfffeb27a*/
  v4 = sub_FFFEC1F2(v1, v2, *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v3); /*0xfffeb28e*/
  if ( (v4 & 0x400000) != 0 ) /*0xfffeb29e*/
    return 0; /*0xfffeb2a0*/
  sub_FFFEC306( /*0xfffeb2c3*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    v3,
    v4 | 0x400000);
  return 1; /*0xfffeb2cd*/
}

/* 0xfffeb2d0 sub_FFFEB2D0 */
char __cdecl sub_FFFEB2D0(int a1)
{
  int v1; // eax
  char v2; // cl
  int v3; // edi
  int v4; // eax

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeb2d8*/
  v2 = *(_BYTE *)(a1 + 4); /*0xfffeb2db*/
  v3 = 108; /*0xfffeb2e7*/
  if ( v2 == *(_BYTE *)(v1 + 315) ) /*0xfffeb2e8*/
    v3 = 2092; /*0xfffeb2ea*/
  v4 = sub_FFFEC1F2(v1, v2, *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v3); /*0xfffeb2fe*/
  if ( (v4 & 0x400000) == 0 ) /*0xfffeb30e*/
    return 0; /*0xfffeb33b*/
  sub_FFFEC306( /*0xfffeb32f*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    v3,
    v4 & 0xFFBFFFFF);
  return 1; /*0xfffeb33d*/
}

/* 0xfffeb340 sub_FFFEB340 */
char __cdecl sub_FFFEB340(int a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx

  v1 = sub_FFFEC1F2( /*0xfffeb35f*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         80);
  *(_BYTE *)(a1 + 59) = v1 & 0x7F; /*0xfffeb36a*/
  *(_BYTE *)(a1 + 60) = BYTE1(v1) & 0x7F; /*0xfffeb374*/
  v2 = HIWORD(v1); /*0xfffeb379*/
  *(_BYTE *)(a1 + 61) = v2 & 0x7F; /*0xfffeb386*/
  *(_BYTE *)(a1 + 62) = HIBYTE(v1) & 0x7F; /*0xfffeb389*/
  return HIBYTE(v1) & 0x7F; /*0xfffeb38c*/
}

/* 0xfffeb38e sub_FFFEB38E */
int __cdecl sub_FFFEB38E(int a1, char a2)
{
  return sub_FFFEC306( /*0xfffeb3be*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           84,
           a2 & 0x7F);
}

/* 0xfffeb3bf sub_FFFEB3BF */
int __cdecl sub_FFFEB3BF(int a1, _BYTE *a2)
{
  int v2; // eax
  char v3; // cl
  int v4; // edi
  unsigned int v5; // eax

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeb3c7*/
  v3 = *(_BYTE *)(a1 + 4); /*0xfffeb3ca*/
  v4 = 164; /*0xfffeb3d4*/
  if ( v3 == *(_BYTE *)(v2 + 315) ) /*0xfffeb3d9*/
    v4 = 2148; /*0xfffeb3db*/
  v5 = sub_FFFEC1F2(v2, v3, *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v4); /*0xfffeb3f0*/
  if ( *a2 ) /*0xfffeb3fe*/
    v5 = ((unsigned __int8)a2[1] << 14) | v5 & 0xFFC03FFF; /*0xfffeb40e*/
  if ( a2[2] ) /*0xfffeb410*/
    v5 ^= ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int8)a2[3] << 10)) & 0x3C00; /*0xfffeb424*/
  if ( a2[4] ) /*0xfffeb426*/
    v5 = (unsigned __int8)a2[5] | v5 & 0xFFFFFF00; /*0xfffeb435*/
  return sub_FFFEC306( /*0xfffeb459*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           v4,
           v5);
}

/* 0xfffeb45c sub_FFFEB45C */
int __cdecl sub_FFFEB45C(int a1, _BYTE *a2)
{
  int v2; // eax
  char v3; // cl
  int v4; // edi
  unsigned int v5; // eax
  unsigned __int16 v6; // bx

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeb464*/
  v3 = *(_BYTE *)(a1 + 4); /*0xfffeb467*/
  v4 = 148; /*0xfffeb471*/
  if ( v3 == *(_BYTE *)(v2 + 315) ) /*0xfffeb476*/
    v4 = 2132; /*0xfffeb478*/
  v5 = sub_FFFEC1F2(v2, v3, *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v4) & 0xFFF0FFFF | 0x10000; /*0xfffeb4a0*/
  if ( *a2 ) /*0xfffeb4a5*/
    v5 ^= (v5 ^ ((unsigned __int8)a2[1] << 16)) & 0xF0000; /*0xfffeb4b8*/
  if ( a2[2] ) /*0xfffeb4ba*/
  {
    LOBYTE(v6) = 0; /*0xfffeb4bf*/
    HIBYTE(v6) = a2[3]; /*0xfffeb4c1*/
    v5 ^= ((unsigned __int16)v5 ^ v6) & 0xF00; /*0xfffeb4cc*/
  }
  if ( a2[4] ) /*0xfffeb4ce*/
    v5 ^= ((unsigned __int8)v5 ^ a2[5]) & 0xF; /*0xfffeb4dd*/
  return sub_FFFEC306( /*0xfffeb501*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           v4,
           v5);
}

/* 0xfffeb504 sub_FFFEB504 */
int __cdecl sub_FFFEB504(int a1, _BYTE *a2)
{
  int v2; // eax
  char v3; // cl
  unsigned int v4; // eax
  unsigned __int16 v5; // bx
  int v6; // ebx
  char v7; // cl
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-4h]

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeb510*/
  v3 = *(_BYTE *)(a1 + 4); /*0xfffeb513*/
  v10 = 156; /*0xfffeb51d*/
  if ( v3 == *(_BYTE *)(v2 + 315) ) /*0xfffeb524*/
    v10 = 2140; /*0xfffeb526*/
  v4 = sub_FFFEC1F2(v2, v3, *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), v10); /*0xfffeb53e*/
  if ( *a2 ) /*0xfffeb54b*/
    v4 = ((unsigned __int8)a2[1] << 16) | v4 & 0xFF00FFFF; /*0xfffeb55b*/
  if ( a2[2] ) /*0xfffeb55d*/
  {
    LOBYTE(v5) = 0; /*0xfffeb573*/
    HIBYTE(v5) = a2[3]; /*0xfffeb575*/
    if ( *(_BYTE *)(a1 + 4) == *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14) + 315) ) /*0xfffeb571*/
      v6 = ((unsigned __int16)v4 ^ v5) & 0x3F00; /*0xfffeb57a*/
    else
      v6 = ((unsigned __int16)v4 ^ v5) & 0xF00; /*0xfffeb589*/
    v4 ^= v6; /*0xfffeb58f*/
  }
  if ( a2[4] ) /*0xfffeb591*/
  {
    v7 = v4 ^ a2[5]; /*0xfffeb5a3*/
    if ( *(_BYTE *)(a1 + 4) == *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14) + 315) ) /*0xfffeb5ab*/
      v8 = v7 & 0x3F; /*0xfffeb5ad*/
    else
      v8 = v7 & 0xF; /*0xfffeb5b2*/
    v4 ^= v8; /*0xfffeb5b5*/
  }
  return sub_FFFEC306( /*0xfffeb5db*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           v10,
           v4);
}

/* 0xfffeb5e0 sub_FFFEB5E0 */
int __cdecl sub_FFFEB5E0(int a1)
{
  int v1; // edi
  int v2; // eax

  v1 = 2092; /*0xfffeb5e7*/
  if ( sub_FFFEC541() ) /*0xfffeb5ec*/
    v1 = 108; /*0xfffeb5f8*/
  v2 = sub_FFFEC1F2( /*0xfffeb612*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         v1);
  return sub_FFFEC306( /*0xfffeb63e*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           v1,
           v2 | 0x2000);
}

/* 0xfffeb641 sub_FFFEB641 */
int __cdecl sub_FFFEB641(int a1, int a2, char a3, char a4, _BYTE *a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 96); /*0xfffeb652*/
  return sub_FFFEC306(a1, a2, a3, a4, 96, a5[2] & 0x3F | ((a5[1] & 0x3F) << 8) | v5 & 0xFFC0C0C0 | ((*a5 & 0x3F) << 16)); /*0xfffeb69f*/
}

/* 0xfffeb6a1 sub_FFFEB6A1 */
int __cdecl sub_FFFEB6A1(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 80); /*0xfffeb6b2*/
  return sub_FFFEC306(a1, a2, a3, a4, 80, ((a5 & 0xF) << 16) | v5 & 0xFFF0FFFF); /*0xfffeb6e0*/
}

/* 0xfffeb6e2 sub_FFFEB6E2 */
int __cdecl sub_FFFEB6E2(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 80); /*0xfffeb6f3*/
  return sub_FFFEC306(a1, a2, a3, a4, 80, ((a5 & 1) << 14) | v5 & 0xFFFFBFFF); /*0xfffeb721*/
}

/* 0xfffeb723 sub_FFFEB723 */
int __cdecl sub_FFFEB723(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 80); /*0xfffeb734*/
  return sub_FFFEC306(a1, a2, a3, a4, 80, ((a5 & 0xF) << 8) | v5 & 0xFFFFF0FF); /*0xfffeb762*/
}

/* 0xfffeb764 sub_FFFEB764 */
int __cdecl sub_FFFEB764(int a1, int a2, char a3, char a4, unsigned __int8 a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb775*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, (a5 << 30) | v5 & 0x3FFFFFFF); /*0xfffeb79f*/
}

/* 0xfffeb7a1 sub_FFFEB7A1 */
int __cdecl sub_FFFEB7A1(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb7b2*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, ((a5 & 3) << 28) | v5 & 0xCFFFFFFF); /*0xfffeb7e0*/
}

/* 0xfffeb823 sub_FFFEB823 */
int __cdecl sub_FFFEB823(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb834*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, ((a5 & 1) << 25) | v5 & 0xFDFFFFFF); /*0xfffeb862*/
}

/* 0xfffeb864 sub_FFFEB864 */
int __cdecl sub_FFFEB864(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb875*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, ((a5 & 7) << 22) | v5 & 0xFE3FFFFF); /*0xfffeb8a3*/
}

/* 0xfffeb8c6 sub_FFFEB8C6 */
int __cdecl sub_FFFEB8C6(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb8d7*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, ((a5 & 3) << 13) | v5 & 0xFFFF9FFF); /*0xfffeb905*/
}

/* 0xfffeb93b sub_FFFEB93B */
int __cdecl sub_FFFEB93B(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb94c*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 & 0xFFFFEFFF); /*0xfffeb96d*/
}

/* 0xfffeb96f sub_FFFEB96F */
int __cdecl sub_FFFEB96F(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb980*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, ((a5 & 3) << 10) | v5 & 0xFFFFF3FF); /*0xfffeb9ae*/
}

/* 0xfffeb9b0 sub_FFFEB9B0 */
int __cdecl sub_FFFEB9B0(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeb9c1*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 | 0x200); /*0xfffeb9e2*/
}

/* 0xfffeba4c sub_FFFEBA4C */
int __cdecl sub_FFFEBA4C(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeba5d*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 & 0xFFFFFEFF); /*0xfffeba7e*/
}

/* 0xfffeba80 sub_FFFEBA80 */
int __cdecl sub_FFFEBA80(int a1, int a2, char a3, char a4)
{
  int result; // eax

  result = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffeba91*/
  if ( (result & 0xC0) == 0 ) /*0xfffeba9b*/
    return sub_FFFEC306(a1, a2, a3, a4, 76, result | 0xC0); /*0xfffebab1*/
  return result; /*0xfffebab9*/
}

/* 0xfffebabb sub_FFFEBABB */
int __cdecl sub_FFFEBABB(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebacc*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 & 0xFFFFFFEF); /*0xfffebaeb*/
}

/* 0xfffebb1f sub_FFFEBB1F */
int __cdecl sub_FFFEBB1F(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebb30*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 & 0xFFFFFFF7); /*0xfffebb4f*/
}

/* 0xfffebb51 sub_FFFEBB51 */
int __cdecl sub_FFFEBB51(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebb62*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v4 | 8); /*0xfffebb81*/
}

/* 0xfffebb83 sub_FFFEBB83 */
int __cdecl sub_FFFEBB83(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax
  unsigned int v6; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebb94*/
  if ( a5 ) /*0xfffebba0*/
    v6 = v5 | 4; /*0xfffebba2*/
  else
    v6 = v5 & 0xFFFFFFFB; /*0xfffebba7*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, v6); /*0xfffebbc1*/
}

/* 0xfffebbc3 sub_FFFEBBC3 */
int __cdecl sub_FFFEBBC3(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebbd4*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, (2 * (a5 & 1)) | v5 & 0xFFFFFFFD); /*0xfffebbff*/
}

/* 0xfffebc01 sub_FFFEBC01 */
int __cdecl sub_FFFEBC01(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 76); /*0xfffebc12*/
  return sub_FFFEC306(a1, a2, a3, a4, 76, a5 & 1 | v5 & 0xFFFFFFFE); /*0xfffebc3b*/
}

/* 0xfffebc3d sub_FFFEBC3D */
int __cdecl sub_FFFEBC3D(int a1, char a2, char a3, char a4, char a5)
{
  __int64 v5; // rax

  v5 = sub_FFFEC238(a1, a2, a3, a4, 88); /*0xfffebc50*/
  return sub_FFFEC349(a1, a2, a3, a4, 88, (1 << a5) | v5, ((1 << a5) | (unsigned __int64)v5) >> 32); /*0xfffebc7e*/
}

/* 0xfffebc82 sub_FFFEBC82 */
int __cdecl sub_FFFEBC82(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 184); /*0xfffebc98*/
  return sub_FFFEC306(a1, a2, a3, a4, 184, ((a5 & 0xF) << 12) | v5 & 0xFFFF0FFF); /*0xfffebcc5*/
}

/* 0xfffebcc8 sub_FFFEBCC8 */
int __cdecl sub_FFFEBCC8(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 184); /*0xfffebcde*/
  return sub_FFFEC306(a1, a2, a3, a4, 184, ((a5 & 0xF) << 8) | v5 & 0xFFFFF0FF); /*0xfffebd0b*/
}

/* 0xfffebd0e sub_FFFEBD0E */
int __cdecl sub_FFFEBD0E(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 184); /*0xfffebd24*/
  return sub_FFFEC306(a1, a2, a3, a4, 184, (16 * (a5 & 0xF)) | v5 & 0xFFFFFF0F); /*0xfffebd51*/
}

/* 0xfffebd54 sub_FFFEBD54 */
int __cdecl sub_FFFEBD54(int a1, int a2, char a3, char a4, char a5)
{
  int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 184); /*0xfffebd6a*/
  return sub_FFFEC306(a1, a2, a3, a4, 184, a5 & 0xF | v5 & 0xFFFFFFF0); /*0xfffebd92*/
}

/* 0xfffebd95 sub_FFFEBD95 */
int __cdecl sub_FFFEBD95(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 184); /*0xfffebdab*/
  return sub_FFFEC306(a1, a2, a3, a4, 184, v4 | 0x10000); /*0xfffebdcb*/
}

/* 0xfffebdce sub_FFFEBDCE */
int __cdecl sub_FFFEBDCE(int a1, int a2, char a3, char a4, char a5, char a6)
{
  int v6; // esi
  unsigned int v7; // eax

  v6 = 176; /*0xfffebdd6*/
  if ( a6 ) /*0xfffebddb*/
    v6 = 180; /*0xfffebddd*/
  v7 = sub_FFFEC1F2(a1, a2, a3, a4, v6) & 0xFFFF0FFF; /*0xfffebdfa*/
  if ( a5 ) /*0xfffebe01*/
    v7 |= (a5 & 0xF) << 12; /*0xfffebe09*/
  return sub_FFFEC306(a1, a2, a3, a4, v6, v7); /*0xfffebe21*/
}

/* 0xfffebe24 sub_FFFEBE24 */
int __cdecl sub_FFFEBE24(int a1, int a2, char a3, char a4, char a5, char a6, char a7)
{
  int v7; // edi
  int v8; // eax

  v7 = 176; /*0xfffebe2d*/
  if ( a6 ) /*0xfffebe32*/
    v7 = 180; /*0xfffebe34*/
  v8 = sub_FFFEC1F2(a1, a2, a3, a4, v7); /*0xfffebe4b*/
  return sub_FFFEC306(a1, a2, a3, a4, v7, ((a5 & 7) << (3 * a7)) | ~(7 << (3 * a7)) & v8); /*0xfffebe7d*/
}

/* 0xfffebe81 sub_FFFEBE81 */
int __cdecl sub_FFFEBE81(int a1, int a2, char a3, char a4, char a5)
{
  unsigned int v5; // eax

  v5 = sub_FFFEC1F2(a1, a2, a3, a4, 192) & 0xFFFFFFF1; /*0xfffebea4*/
  if ( a5 ) /*0xfffebea9*/
    v5 |= 2 * (a5 & 7); /*0xfffebeb0*/
  return sub_FFFEC306(a1, a2, a3, a4, 192, v5); /*0xfffebec8*/
}

/* 0xfffebf02 sub_FFFEBF02 */
int __cdecl sub_FFFEBF02(int a1, int a2, char a3, char a4)
{
  int v4; // eax

  v4 = sub_FFFEC1F2(a1, a2, a3, a4, 192); /*0xfffebf18*/
  return sub_FFFEC306(a1, a2, a3, a4, 192, v4 & 0xFFFFFFFE); /*0xfffebf36*/
}

/* 0xfffebf39 sub_FFFEBF39 */
void __cdecl sub_FFFEBF39(int a1, char a2, char a3, char a4, char a5)
{
  __int64 v5; // rax

  if ( a5 ) /*0xfffebf40*/
  {
    v5 = sub_FFFEC238(a1, a2, a3, a4, 196); /*0xfffebf57*/
    sub_FFFEC349(a1, a2, a3, a4, 196, (1 << a5) | v5, ((1 << a5) | (unsigned __int64)v5) >> 32); /*0xfffebf7c*/
  }
}

/* 0xfffebf89 sub_FFFEBF89 */
char __cdecl sub_FFFEBF89(_BYTE *a1, char a2, char a3, char a4, char a5)
{
  char result; // al
  __int64 v6; // rax

  if ( a5 || (result = sub_FFFE71CE(a1)) != 0 ) /*0xfffebf9d*/
  {
    v6 = sub_FFFEC238(a1, a2, a3, a4, 208); /*0xfffebfb4*/
    return sub_FFFEC349(a1, a2, a3, a4, 208, (1 << a5) | v6, ((1 << a5) | (unsigned __int64)v6) >> 32); /*0xfffebfd9*/
  }
  return result; /*0xfffebfe4*/
}

/* 0xfffebfe6 sub_FFFEBFE6 */
char __cdecl sub_FFFEBFE6(_BYTE *a1, char a2, char a3, char a4, char a5)
{
  char result; // al
  __int64 v6; // rax

  if ( a5 || (result = sub_FFFE71CE(a1)) != 0 ) /*0xfffebffa*/
  {
    v6 = sub_FFFEC238(a1, a2, a3, a4, 216); /*0xfffec011*/
    return sub_FFFEC349(a1, a2, a3, a4, 216, (1 << a5) | v6, ((1 << a5) | (unsigned __int64)v6) >> 32); /*0xfffec036*/
  }
  return result; /*0xfffec041*/
}

/* 0xfffec043 sub_FFFEC043 */
void __cdecl __noreturn sub_FFFEC043(int a1, int a2, char a3)
{
  sub_FFFEC635(a1, a2, a3); /*0xfffec04f*/
  while ( 1 ) /*0xfffec057*/
    ; /*0xfffec057*/
}

/* 0xfffec05d sub_FFFEC05D */
int __cdecl sub_FFFEC05D(int a1)
{
  return a1; /*0xfffec069*/
}

/* 0xfffec06a sub_FFFEC06A */
int __cdecl sub_FFFEC06A(int a1, int a2)
{
  return a2; /*0xfffec076*/
}

/* 0xfffec077 sub_FFFEC077 */
__int64 __cdecl sub_FFFEC077(__int64 a1, char a2)
{
  __int64 v2; // rax

  LODWORD(v2) = 0; /*0xfffec098*/
  HIDWORD(v2) = a1; /*0xfffec09a*/
  if ( (a2 & 0x20) == 0 ) /*0xfffec0a0*/
    v2 = a1; /*0xfffec0a0*/
  return v2 << (a2 & 0x1F); /*0xfffec0b8*/
}

/* 0xfffec0ba sub_FFFEC0BA */
int __usercall sub_FFFEC0BA@<eax>(__int16 a1@<ax>, char a2@<dl>, char a3@<cl>, char a4, char a5)
{
  unsigned __int16 v5; // bx

  HIBYTE(v5) = a5; /*0xfffec0bd*/
  LOBYTE(v5) = a4; /*0xfffec0cc*/
  return ((a3 & 7 | (8 * (a2 & 0x1F | (32 * v5)))) << 12) | a1 & 0xFFF; /*0xfffec0df*/
}

/* 0xfffec0e1 sub_FFFEC0E1 */
int __usercall sub_FFFEC0E1@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  _DWORD *v3; // eax
  int result; // eax

  v3 = (_DWORD *)(*(_DWORD *)(a2 + 465) + (a1 & 0xFFFFFFF)); /*0xfffec0e6*/
  *a3 = *v3; /*0xfffec0ee*/
  result = v3[1]; /*0xfffec0f0*/
  a3[1] = result; /*0xfffec0f3*/
  return result; /*0xfffec0f6*/
}

/* 0xfffec0f7 sub_FFFEC0F7 */
char __usercall sub_FFFEC0F7@<al>(_DWORD *a1@<edx>, unsigned int a2@<ecx>, int a3@<esi>)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int v5; // ecx

  v3 = (_DWORD *)(*(_DWORD *)(a3 + 465) + (a2 & 0xFFFFFFF)); /*0xfffec101*/
  v4 = (a2 >> 28) - 1; /*0xfffec10a*/
  if ( v4 ) /*0xfffec10b*/
  {
    v5 = v4 - 1; /*0xfffec10d*/
    if ( v5 ) /*0xfffec10e*/
    {
      if ( v5 == 2 ) /*0xfffec112*/
      {
        v3 = (_DWORD *)*v3; /*0xfffec114*/
        *a1 = v3; /*0xfffec116*/
      }
    }
    else
    {
      LOWORD(v3) = *(_WORD *)v3; /*0xfffec119*/
      *(_WORD *)a1 = (_WORD)v3; /*0xfffec11c*/
    }
  }
  else
  {
    LOBYTE(v3) = *(_BYTE *)v3; /*0xfffec120*/
    *(_BYTE *)a1 = (_BYTE)v3; /*0xfffec122*/
  }
  return (char)v3; /*0xfffec118*/
}

/* 0xfffec125 sub_FFFEC125 */
_DWORD *__usercall sub_FFFEC125@<eax>(int a1@<eax>, int a2@<ecx>, int a3, int a4)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(_DWORD *)(a2 + 465) + (a1 & 0xFFFFFFF)); /*0xfffec12a*/
  *result = a3; /*0xfffec134*/
  result[1] = a4; /*0xfffec13a*/
  return result; /*0xfffec13d*/
}

/* 0xfffec13e sub_FFFEC13E */
_DWORD *__usercall sub_FFFEC13E@<eax>(int a1@<edx>, unsigned int a2@<ecx>, int a3@<esi>)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // ecx

  result = (_DWORD *)(*(_DWORD *)(a3 + 465) + (a2 & 0xFFFFFFF)); /*0xfffec148*/
  v4 = (a2 >> 28) - 1; /*0xfffec151*/
  if ( v4 ) /*0xfffec152*/
  {
    v5 = v4 - 1; /*0xfffec154*/
    if ( v5 ) /*0xfffec155*/
    {
      if ( v5 == 2 ) /*0xfffec159*/
        *result = a1; /*0xfffec15b*/
    }
    else
    {
      *(_WORD *)result = a1; /*0xfffec15e*/
    }
  }
  else
  {
    *(_BYTE *)result = a1; /*0xfffec162*/
  }
  return result; /*0xfffec15d*/
}

/* 0xfffec165 sub_FFFEC165 */
char __cdecl sub_FFFEC165(int a1, int a2, char a3, char a4, __int16 a5)
{
  sub_FFFEC0F7( /*0xfffec1a0*/
    (int *)((char *)&a2 + 3),
    a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * ((unsigned __int8)a2 | 0x100))))) << 12),
    a1);
  return HIBYTE(a2); /*0xfffec1a8*/
}

/* 0xfffec1ab sub_FFFEC1AB */
__int16 __cdecl sub_FFFEC1AB(int a1, int a2, char a3, char a4, __int16 a5)
{
  sub_FFFEC0F7( /*0xfffec1e6*/
    (int *)((char *)&a2 + 2),
    a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * ((unsigned __int8)a2 | 0x200))))) << 12),
    a1);
  return HIWORD(a2); /*0xfffec1ef*/
}

/* 0xfffec1f2 sub_FFFEC1F2 */
int __cdecl sub_FFFEC1F2(int a1, int a2, char a3, char a4, __int16 a5)
{
  sub_FFFEC0F7(&a2, a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * ((unsigned __int8)a2 | 0x400))))) << 12), a1); /*0xfffec22d*/
  return a2; /*0xfffec235*/
}

/* 0xfffec238 sub_FFFEC238 */
__int64 __cdecl sub_FFFEC238(int a1, unsigned __int8 a2, char a3, char a4, __int16 a5)
{
  return *(_QWORD *)(*(_DWORD *)(a1 + 465) + (a5 & 0xFFF | ((a4 & 7 | (8 * ((32 * a2) & 0x1FFF | a3 & 0x1F))) << 12))); /*0xfffec27c*/
}

/* 0xfffec27e sub_FFFEC27E */
_DWORD *__cdecl sub_FFFEC27E(int a1, unsigned __int8 a2, char a3, char a4, __int16 a5, unsigned __int8 a6)
{
  return sub_FFFEC13E(a6, a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * (a2 | 0x100))))) << 12), a1); /*0xfffec2bf*/
}

/* 0xfffec2c2 sub_FFFEC2C2 */
_DWORD *__cdecl sub_FFFEC2C2(int a1, unsigned __int8 a2, char a3, char a4, __int16 a5, unsigned __int16 a6)
{
  return sub_FFFEC13E(a6, a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * (a2 | 0x200))))) << 12), a1); /*0xfffec303*/
}

/* 0xfffec306 sub_FFFEC306 */
_DWORD *__cdecl sub_FFFEC306(int a1, unsigned __int8 a2, char a3, char a4, __int16 a5, int a6)
{
  return sub_FFFEC13E(a6, a5 & 0xFFF | ((a4 & 7 | (8 * (a3 & 0x1F | (32 * (a2 | 0x400))))) << 12), a1); /*0xfffec346*/
}

/* 0xfffec349 sub_FFFEC349 */
_DWORD *__cdecl sub_FFFEC349(int a1, unsigned __int8 a2, char a3, char a4, __int16 a5, int a6, int a7)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(_DWORD *)(a1 + 465) + (a5 & 0xFFF | ((a4 & 7 | (8 * ((32 * a2) & 0x1FFF | a3 & 0x1F))) << 12))); /*0xfffec380*/
  *result = a6; /*0xfffec389*/
  result[1] = a7; /*0xfffec38e*/
  return result; /*0xfffec391*/
}

/* 0xfffec3ee sub_FFFEC3EE */
int sub_FFFEC3EE()
{
  unsigned __int64 v0; // rax
  int v1; // esi
  unsigned __int64 v3; // [esp+18h] [ebp-8h]

  v3 = __readmsr(0x1Bu); /*0xfffec40b*/
  v0 = sub_FFFEC077(HIDWORD(v3), 32); /*0xfffec417*/
  LODWORD(v0) = v3 | v0; /*0xfffec41f*/
  v1 = v0 & 0xFFFFF000; /*0xfffec43e*/
  if ( (v0 & 0x800) == 0 ) /*0xfffec446*/
  {
    LODWORD(v0) = v0 | 0x800; /*0xfffec448*/
    __writemsr(0x1Bu, v0); /*0xfffec478*/
  }
  return *(_DWORD *)(v1 + 32); /*0xfffec47d*/
}

/* 0xfffec4a0 sub_FFFEC4A0 */
int sub_FFFEC4A0()
{
  unsigned int v0; // esi

  v0 = sub_FFFEC3EE(); /*0xfffec4a8*/
  _EAX = 11; /*0xfffec4aa*/
  __asm { cpuid } /*0xfffec4b4*/
  return (HIBYTE(v0) >> _EAX) & 1; /*0xfffec4c5*/
}

/* 0xfffec4cc sub_FFFEC4CC */
char __cdecl sub_FFFEC4CC(char a1, char a2)
{
  return a2 - a1; /*0xfffec4dc*/
}

/* 0xfffec4dd sub_FFFEC4DD */
unsigned __int8 __cdecl sub_FFFEC4DD(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  result = a2; /*0xfffec4e2*/
  __outbyte(a1, a2); /*0xfffec4e6*/
  return result; /*0xfffec4e7*/
}

/* 0xfffec504 sub_FFFEC504 */
int __cdecl sub_FFFEC504(_WORD *a1, int a2, unsigned int a3, char a4)
{
  _WORD *v8; // edi
  int result; // eax
  unsigned int i; // ecx

  __asm { pushfw } /*0xfffec508*/
  v8 = a1; /*0xfffec50c*/
  result = a2; /*0xfffec50f*/
  if ( a4 == 4 ) /*0xfffec519*/
  {
    memset32(a1, a2, a3 >> 2); /*0xfffec51e*/
  }
  else if ( a4 == 2 ) /*0xfffec526*/
  {
    for ( i = a3 >> 1; i; --i ) /*0xfffec528*/
      *v8++ = a2; /*0xfffec52a*/
  }
  else
  {
    while ( a4 != 1 ) /*0xfffec533*/
      ; /*0xfffec533*/
    memset(a1, a2, a3); /*0xfffec539*/
  }
  __asm { popfw } /*0xfffec53c*/
  return result; /*0xfffec53e*/
}

/* 0xfffec541 sub_FFFEC541 */
BOOL __cdecl sub_FFFEC541(int a1)
{
  int v1; // eax
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 19); /*0xfffec545*/
  v2 = *(_DWORD *)(v1 + 14); /*0xfffec548*/
  return v1 == v2 || v1 == v2 + 154; /*0xfffec55b*/
}

/* 0xfffec560 sub_FFFEC560 */
BOOL __cdecl sub_FFFEC560(int a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 14); /*0xfffec564*/
  return a1 == v1 || a1 == v1 + 154; /*0xfffec576*/
}

/* 0xfffec57b sub_FFFEC57B */
BOOL __cdecl sub_FFFEC57B(int a1)
{
  return a1 == *(_DWORD *)(a1 + 14) + 308; /*0xfffec591*/
}

/* 0xfffec592 sub_FFFEC592 */
BOOL __cdecl sub_FFFEC592(int a1)
{
  return *(_BYTE *)(a1 + 4) == 0; /*0xfffec59e*/
}

/* 0xfffec5ec sub_FFFEC5EC */
char __cdecl sub_FFFEC5EC(char a1)
{
  return a1; /*0xfffec5f0*/
}

/* 0xfffec5f1 sub_FFFEC5F1 */
bool __cdecl sub_FFFEC5F1(int a1, __int16 a2, unsigned __int8 a3)
{
  return (*(_WORD *)(a1 + 4) & 0xFFF0) == a2 && *(_BYTE *)(a1 + 6) >= a3; /*0xfffec60f*/
}

/* 0xfffec613 sub_FFFEC613 */
bool __cdecl sub_FFFEC613(int a1, __int16 a2, char a3)
{
  return (*(_WORD *)(a1 + 4) & 0xFFF0) == a2 && *(_BYTE *)(a1 + 6) == a3; /*0xfffec631*/
}

/* 0xfffec635 sub_FFFEC635 */
unsigned __int8 __cdecl sub_FFFEC635(int a1, unsigned __int8 a2, char a3)
{
  int v3; // eax
  unsigned __int16 v4; // bx
  unsigned int v5; // eax
  unsigned __int16 v6; // cx

  v3 = *(_DWORD *)(a1 + 469); /*0xfffec63c*/
  v4 = 128; /*0xfffec649*/
  if ( *(_BYTE *)(v3 + 551) ) /*0xfffec642*/
    v4 = *(_WORD *)(v3 + 552); /*0xfffec650*/
  v5 = sub_FFFEC1F2(a1, 0, 20, 1, 160); /*0xfffec664*/
  HIBYTE(v6) = a2; /*0xfffec66b*/
  LOBYTE(v6) = a3; /*0xfffec67a*/
  sub_FFFEC306(a1, 0, 20, 1, 160, BYTE2(v5) | ((HIBYTE(v5) | (v6 << 8)) << 8)); /*0xfffec691*/
  return sub_FFFEC4DD(v4, a2); /*0xfffec6a3*/
}

/* 0xfffec6a7 sub_FFFEC6A7 */
_DWORD *__cdecl sub_FFFEC6A7(int a1, unsigned __int8 a2)
{
  int v2; // eax

  v2 = sub_FFFEC1F2(a1, 0, 20, 1, 156); /*0xfffec6b8*/
  return sub_FFFEC306(a1, 0, 20, 1, 156, (a2 << 16) | v2 & 0xFF000000); /*0xfffec6e0*/
}

/* 0xfffec6e2 sub_FFFEC6E2 */
_DWORD *__cdecl sub_FFFEC6E2(int a1, char a2)
{
  int v2; // eax
  unsigned __int16 v3; // cx

  v2 = sub_FFFEC1F2(a1, 0, 20, 1, 156); /*0xfffec6f3*/
  LOBYTE(v3) = 0; /*0xfffec6f8*/
  HIBYTE(v3) = a2; /*0xfffec6fa*/
  return sub_FFFEC306(a1, 0, 20, 1, 156, v3 | v2 & 0xFFFF00FF); /*0xfffec719*/
}

/* 0xfffec71b sub_FFFEC71B */
_DWORD *__cdecl sub_FFFEC71B(int a1, unsigned __int8 a2)
{
  int v2; // eax

  v2 = sub_FFFEC1F2(a1, 0, 20, 1, 156); /*0xfffec72c*/
  return sub_FFFEC306(a1, 0, 20, 1, 156, a2 | v2 & 0xFFFFFF00); /*0xfffec751*/
}

/* 0xfffec753 sub_FFFEC753 */
_DWORD *__cdecl sub_FFFEC753(int a1, unsigned __int8 a2)
{
  int v2; // eax
  unsigned __int16 v3; // cx

  v2 = *(_DWORD *)(a1 + 469); /*0xfffec758*/
  v3 = 128; /*0xfffec765*/
  if ( *(_BYTE *)(v2 + 551) ) /*0xfffec75e*/
    v3 = *(_WORD *)(v2 + 552); /*0xfffec76e*/
  sub_FFFEC4DD(v3, a2); /*0xfffec77a*/
  return sub_FFFEC306(a1, 0, 20, 1, 156, a2 << 24); /*0xfffec79c*/
}

/* 0xfffec79e sub_FFFEC79E */
_DWORD *__cdecl sub_FFFEC79E(int a1)
{
  unsigned __int8 *v1; // esi
  int v2; // ebp
  _DWORD *result; // eax

  v1 = (unsigned __int8 *)(a1 + 7); /*0xfffec7a8*/
  v2 = 2; /*0xfffec7ab*/
  do /*0xfffec7dd*/
  {
    sub_FFFEC306(a1, *v1, 2, 0, 128, a1); /*0xfffec7bd*/
    result = sub_FFFEC306(a1, *v1, 2, 4, 128, a1); /*0xfffec7ce*/
    v1 += 154; /*0xfffec7d6*/
    --v2; /*0xfffec7dc*/
  }
  while ( v2 ); /*0xfffec7dd*/
  return result; /*0xfffec7df*/
}

/* 0xfffec7e4 sub_FFFEC7E4 */
_DWORD *__cdecl sub_FFFEC7E4(int a1)
{
  sub_FFFEC1F2(a1, 0, 20, 1, 168); /*0xfffec7f5*/
  return sub_FFFEC306(a1, 0, 20, 1, 168, 25493504); /*0xfffec812*/
}

/* 0xfffec81c sub_FFFEC81C */
void sub_FFFEC81C()
{
  ; /*0xfffec81c*/
}

/* 0xfffec834 sub_FFFEC834 */
char sub_FFFEC834()
{
  return 0; /*0xfffec836*/
}

/* 0xfffec967 sub_FFFEC967 */
char sub_FFFEC967()
{
  return 0; /*0xfffec969*/
}

/* 0xfffec96a sub_FFFEC96A */
char __cdecl sub_FFFEC96A(int a1)
{
  return sub_FFFEC165(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 20, 0, 8); /*0xfffec985*/
}

/* 0xfffec986 sub_FFFEC986 */
void __cdecl sub_FFFEC986(int a1, int a2)
{
  int v2; // eax

  if ( *(_BYTE *)(a2 + 6) < 0x10u ) /*0xfffec98f*/
  {
    v2 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(a2 + 7), 16, 1, 100); /*0xfffec9a1*/
    sub_FFFEC306(a1, *(_BYTE *)(a2 + 7), 16, 1, 100, v2 & 0xFFF00000 | 0x40800); /*0xfffec9c1*/
  }
}

/* 0xfffec9cb sub_FFFEC9CB */
char __cdecl sub_FFFEC9CB(int a1, _BYTE *a2)
{
  if ( a2[6] >= 0x10u || *(_BYTE *)(a1 + 9) && *(_BYTE *)(a1 + 8) == 1 ) /*0xfffec9e6*/
    return 0; /*0xfffec9d5*/
  sub_FFFEBC01(a1, (unsigned __int8)a2[7], a2[25], a2[30], 1); /*0xfffec9fc*/
  return 1; /*0xfffec9d7*/
}

/* 0xfffeca46 sub_FFFECA46 */
void __cdecl sub_FFFECA46(_BYTE *a1, int a2)
{
  int v2; // ebx
  _BYTE *v3; // esi
  unsigned __int8 v4; // dl
  int v5; // eax
  _BYTE *v6; // ecx
  unsigned __int8 v7; // cl
  unsigned __int8 *v8; // eax
  int v9; // edx
  bool v10; // zf
  int v11; // edi
  BOOL v12; // ebx
  _BYTE *v13; // edi
  int v14; // ebx
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-Ch]
  _WORD v17[2]; // [esp+10h] [ebp-8h] BYREF
  char v18; // [esp+14h] [ebp-4h]
  unsigned __int8 v19; // [esp+15h] [ebp-3h]
  unsigned __int8 i; // [esp+16h] [ebp-2h]
  unsigned __int8 v21; // [esp+17h] [ebp-1h]

  v19 = 0; /*0xfffeca4e*/
  do /*0xfffecc4b*/
  {
    v2 = v19; /*0xfffeca53*/
    v3 = &a1[154 * v19 + 308]; /*0xfffeca60*/
    v21 = -1; /*0xfffeca63*/
    if ( !v3[9] ) /*0xfffeca6b*/
      goto LABEL_39; /*0xfffeca6b*/
    if ( sub_FFFE71CE(a1) ) /*0xfffeca74*/
    {
      sub_FFFEC504(v17, 0, (unsigned __int8)v3[11], 1); /*0xfffeca8f*/
      v4 = v3[11]; /*0xfffeca94*/
      if ( v4 ) /*0xfffeca9c*/
      {
        v5 = 0; /*0xfffecaa1*/
        v6 = v3 + 33; /*0xfffecaa3*/
        v15 = v4; /*0xfffecaa6*/
        do /*0xfffecac2*/
        {
          if ( *v6 ) /*0xfffecaa9*/
            *((_BYTE *)v17 + v5) = *(_BYTE *)(v5 + 2 * v2 + a2); /*0xfffecab7*/
          ++v5; /*0xfffecabb*/
          v6 += 68; /*0xfffecabc*/
          --v15; /*0xfffecabf*/
        }
        while ( v15 ); /*0xfffecac2*/
      }
      v7 = v3[11]; /*0xfffecac4*/
      if ( v7 ) /*0xfffecac9*/
      {
        v8 = (unsigned __int8 *)v17; /*0xfffecacb*/
        v9 = v7; /*0xfffecace*/
        do /*0xfffecae1*/
        {
          if ( *v8 && *v8 < v21 ) /*0xfffecada*/
            v21 = *v8; /*0xfffecadc*/
          ++v8; /*0xfffecadf*/
          --v9; /*0xfffecae0*/
        }
        while ( v9 ); /*0xfffecae1*/
      }
      if ( sub_FFFE71B2((int)a1) ) /*0xfffecae6*/
      {
        v10 = v3[11] == 0; /*0xfffecaf4*/
        v18 = 0; /*0xfffecaf8*/
        v21 = -1; /*0xfffecafc*/
        i = 0; /*0xfffecb00*/
        if ( v10 ) /*0xfffecb04*/
          goto LABEL_22; /*0xfffecb04*/
        do /*0xfffecb42*/
        {
          v11 = i; /*0xfffecb06*/
          if ( v3[68 * i + 33] && sub_FFFEC560(*(_DWORD *)(*(_DWORD *)&v3[68 * i + 41] + 19)) ) /*0xfffecb1f*/
          {
            v21 = *(_BYTE *)(v11 + 2 * v2 + a2); /*0xfffecb32*/
            v18 = 1; /*0xfffecb35*/
          }
          ++i; /*0xfffecb39*/
        }
        while ( i < v3[11] ); /*0xfffecb42*/
        if ( !v18 ) /*0xfffecb48*/
        {
LABEL_22:
          v12 = v19 == 0; /*0xfffecb53*/
          v13 = &a1[154 * v12 + 308]; /*0xfffecb5f*/
          for ( i = 0; i < v13[11]; ++i ) /*0xfffecb66*/
          {
            v16 = i; /*0xfffecb70*/
            if ( v13[68 * i + 33] && sub_FFFEC560(*(_DWORD *)(*(_DWORD *)&v13[68 * i + 41] + 19)) ) /*0xfffecb86*/
              v21 = *(_BYTE *)(v16 + 2 * v12 + a2); /*0xfffecb9c*/
          }
        }
      }
    }
    if ( sub_FFFE71CE(a1) ) /*0xfffecbad*/
    {
      if ( v3[6] >= 0x20u ) /*0xfffecbbb*/
      {
        if ( v21 >= 4u ) /*0xfffecbdd*/
        {
          v21 -= 4; /*0xfffecbdf*/
          goto LABEL_34; /*0xfffecbdf*/
        }
      }
      else if ( v21 > 2u ) /*0xfffecbc1*/
      {
        v21 = (v21 - 2) / 2; /*0xfffecbd4*/
        goto LABEL_34; /*0xfffecbd7*/
      }
      v21 = 0; /*0xfffecbc3*/
    }
LABEL_34:
    v14 = sub_FFFEC1F2((int)a1, (unsigned __int8)v3[7], 13, 7, 1032); /*0xfffecbe3*/
    if ( sub_FFFE71CE(a1) ) /*0xfffecc00*/
      v14 = (v21 << 24) | v14 & 0xFFFFFF; /*0xfffecc19*/
    if ( v3[6] >= 0x10u ) /*0xfffecc1f*/
      v14 = v14 & 0xFF00FFFF | 0x500000; /*0xfffecc27*/
    sub_FFFEC306((int)a1, v3[7], 13, 7, 1032, v14); /*0xfffecc3c*/
LABEL_39:
    ++v19; /*0xfffecc44*/
  }
  while ( !v19 ); /*0xfffecc4b*/
}

/* 0xfffecc56 sub_FFFECC56 */
unsigned __int8 __cdecl sub_FFFECC56(_BYTE *a1)
{
  unsigned __int8 result; // al
  int v2; // eax

  result = sub_FFFE71CE(a1); /*0xfffecc5c*/
  if ( result ) /*0xfffecc64*/
  {
    if ( a1[317] ) /*0xfffecc66*/
    {
      v2 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 13, 7, 1096); /*0xfffecc84*/
      return (unsigned __int8)sub_FFFEC306((int)a1, a1[315], 13, 7, 1096, v2 | 0x40000000); /*0xfffecc9e*/
    }
  }
  return result; /*0xfffecca7*/
}

/* 0xfffecca9 sub_FFFECCA9 */
int __cdecl sub_FFFECCA9(int a1)
{
  int result; // eax
  unsigned __int8 i; // bl
  int v3; // eax
  int v4; // edi
  unsigned __int8 j; // bl
  int v6; // edi
  unsigned int v7; // eax

  result = *(_DWORD *)(a1 + 469); /*0xfffeccb5*/
  if ( *(_BYTE *)(a1 + 317) && *(_BYTE *)(result + 550) && *(_BYTE *)(a1 + 314) == 16 ) /*0xfffeccd5*/
  {
    for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffeccde*/
    {
      v3 = 68 * i; /*0xfffeccf4*/
      v4 = v3 + a1 + 326; /*0xfffeccf7*/
      if ( *(_BYTE *)(v3 + a1 + 341) ) /*0xfffeccfe*/
      {
        sub_FFFEC306(a1, *(_BYTE *)(v3 + a1 + 330), *(_BYTE *)(v3 + a1 + 331), *(_BYTE *)(v3 + a1 + 336), 3044, 12); /*0xfffecd22*/
        if ( !i ) /*0xfffecd2c*/
          sub_FFFEC306(a1, *(_BYTE *)(v4 + 4), *(_BYTE *)(v4 + 5), *(_BYTE *)(v4 + 10), 3040, 24); /*0xfffecd44*/
        if ( i == 1 ) /*0xfffecd4f*/
          sub_FFFEC306(a1, *(_BYTE *)(v4 + 4), *(_BYTE *)(v4 + 5), *(_BYTE *)(v4 + 10), 3040, 1835008); /*0xfffecd6a*/
        sub_FFFEC306(a1, *(_BYTE *)(v4 + 4), *(_BYTE *)(v4 + 5), *(_BYTE *)(v4 + 10), 3840, 0); /*0xfffecd8c*/
      }
    }
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 3, 640, 0); /*0xfffecdbb*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 0, 640, 0); /*0xfffecdce*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 14, 0, 640, 0); /*0xfffecde2*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 468, 3); /*0xfffece00*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 272, 0x8000); /*0xfffece1c*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 280, 0x8000); /*0xfffece33*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 404, 0x800000); /*0xfffece52*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 412, 0x800000); /*0xfffece69*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 308, 47); /*0xfffece81*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 304, 47); /*0xfffece9c*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 296, 12851); /*0xfffeceb7*/
    sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 320, 127); /*0xfffececf*/
    result = (int)sub_FFFEC306(a1, *(_BYTE *)(a1 + 315), 13, 7, 324, 119); /*0xfffeceea*/
    for ( j = 0; j < *(_BYTE *)(a1 + 319); ++j ) /*0xfffecef4*/
    {
      result = 68 * j; /*0xfffecf08*/
      v6 = result + a1 + 326; /*0xfffecf0b*/
      if ( *(_BYTE *)(result + a1 + 341) ) /*0xfffecf12*/
      {
        v7 = sub_FFFEC1F2( /*0xfffecf3d*/
               a1,
               *(unsigned __int8 *)(result + a1 + 330),
               *(_BYTE *)(result + a1 + 331),
               *(_BYTE *)(result + a1 + 336),
               3416)
           & 0xFFFF00FF
           | 0xC000;
        if ( j == 1 ) /*0xfffecf45*/
          v7 |= 0x100u; /*0xfffecf47*/
        sub_FFFEC306(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 5), *(_BYTE *)(v6 + 10), 3416, v7); /*0xfffecf61*/
        sub_FFFEC27E(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 132, 0xCu); /*0xfffecf80*/
        sub_FFFEC2C2(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 130, 0x80u); /*0xfffecfa2*/
        sub_FFFEC27E(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 129, 0xFu); /*0xfffecfc4*/
        sub_FFFEC2C2(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 142, 0x802Fu); /*0xfffecfe6*/
        sub_FFFEC27E(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 133, 0x20u); /*0xfffed005*/
        result = (int)sub_FFFEC27E(a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 132, 4u); /*0xfffed027*/
      }
    }
  }
  return result; /*0xfffed040*/
}

/* 0xfffed042 sub_FFFED042 */
bool __cdecl sub_FFFED042(int a1)
{
  BOOL v1; // eax

  v1 = sub_FFFEC541(a1); /*0xfffed048*/
  if ( v1 ) /*0xfffed050*/
  {
    LOBYTE(v1) = sub_FFFEC613(*(_DWORD *)(a1 + 19), 11328, 0); /*0xfffed05c*/
    if ( v1 ) /*0xfffed066*/
    {
      LOBYTE(v1) = *(_BYTE *)(a1 + 16) == 0; /*0xfffed06c*/
      *(_BYTE *)(a1 + 16) = v1; /*0xfffed06f*/
    }
  }
  return v1; /*0xfffed072*/
}

/* 0xfffed074 sub_FFFED074 */
_DWORD *__cdecl sub_FFFED074(int a1)
{
  int v1; // eax
  int v2; // eax
  unsigned int v3; // ebx

  v1 = sub_FFFEC1F2( /*0xfffed099*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         224);
  sub_FFFEC306( /*0xfffed0bd*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    224,
    v1 & 0xFF00FFFF);
  v2 = *(_DWORD *)(a1 + 19); /*0xfffed0c2*/
  v3 = 608330; /*0xfffed0d3*/
  if ( *(_BYTE *)(*(_DWORD *)(v2 + 14) + 464) == 1 ) /*0xfffed0d8*/
    v3 = 607306; /*0xfffed0da*/
  if ( sub_FFFEC613(v2, 11328, 4) && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 19) + 14) + 463) == 2 ) /*0xfffed101*/
    v3 = v3 & 0xFFFFFFF0 | 0xD; /*0xfffed106*/
  if ( sub_FFFEC5F1(*(_DWORD *)(a1 + 19), 11328, 5u) || sub_FFFEC5F1(*(_DWORD *)(a1 + 19), 11376, 0) ) /*0xfffed125*/
    v3 = v3 & 0xFFFFFFF0 | 8; /*0xfffed134*/
  return sub_FFFEC306( /*0xfffed15d*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           244,
           v3);
}

/* 0xfffed161 sub_FFFED161 */
_DWORD *__cdecl sub_FFFED161(int a1)
{
  int v2; // eax

  v2 = sub_FFFEC1F2( /*0xfffed185*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         224);
  sub_FFFEC306( /*0xfffed1ae*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    224,
    v2 & 0xFF00FFFF | 0x20000);
  return sub_FFFEC306( /*0xfffed1dd*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           244,
           322);
}

/* 0xfffed1e0 sub_FFFED1E0 */
_BYTE *__cdecl sub_FFFED1E0(_BYTE *a1)
{
  _BYTE *result; // eax

  result = a1; /*0xfffed1e0*/
  if ( !*a1 ) /*0xfffed1e4*/
  {
    *a1 = 1; /*0xfffed1e9*/
    a1[1] = 1; /*0xfffed1ec*/
  }
  a1[2] = 1; /*0xfffed1f0*/
  a1[3] = 2; /*0xfffed1f4*/
  return result; /*0xfffed1f8*/
}

/* 0xfffed1f9 sub_FFFED1F9 */
void __cdecl sub_FFFED1F9(_BYTE *a1)
{
  bool v1; // zf
  unsigned int v2; // eax
  char v3; // bl
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int8 *v8; // eax
  unsigned __int8 v9; // al
  char v10; // bl
  unsigned __int8 v11; // bl
  int v12; // eax
  int v13; // [esp+4h] [ebp-10h]
  __int16 v14; // [esp+8h] [ebp-Ch]
  _BYTE v15[4]; // [esp+Ch] [ebp-8h] BYREF
  char v16; // [esp+10h] [ebp-4h]
  char v17; // [esp+11h] [ebp-3h]
  unsigned __int8 v18; // [esp+12h] [ebp-2h]
  unsigned __int8 v19; // [esp+13h] [ebp-1h]

  v1 = a1[317] == 0; /*0xfffed203*/
  v18 = -1; /*0xfffed20a*/
  if ( !v1 ) /*0xfffed20e*/
  {
    v2 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 16, 1, 184); /*0xfffed228*/
    v3 = BYTE2(v2) & 1; /*0xfffed242*/
    v1 = a1[319] == 0; /*0xfffed245*/
    v16 = (v2 >> 12) & 0xF; /*0xfffed24c*/
    v17 = (v2 >> 4) & 0xF; /*0xfffed24f*/
    v19 = 0; /*0xfffed252*/
    if ( !v1 ) /*0xfffed256*/
    {
      do /*0xfffed313*/
      {
        v4 = v19; /*0xfffed25d*/
        v13 = (int)&a1[68 * v19 + 326]; /*0xfffed271*/
        v14 = 176; /*0xfffed274*/
        if ( a1[68 * v19 + 341] && (!sub_FFFE71CE(a1) || !sub_FFFEC57B(*(_DWORD *)(*(_DWORD *)(v13 + 23) + 19))) ) /*0xfffed295*/
        {
          if ( v19 == 1 ) /*0xfffed2a3*/
            v14 = 180; /*0xfffed2a5*/
          v5 = (sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 16, 1, v14) & 7) - 1; /*0xfffed2c8*/
          if ( v5 ) /*0xfffed2c9*/
          {
            v6 = v5 - 1; /*0xfffed2cb*/
            if ( v6 ) /*0xfffed2cc*/
            {
              v7 = v6 - 4; /*0xfffed2ce*/
              if ( v7 ) /*0xfffed2d1*/
              {
                v1 = v7 == 1; /*0xfffed2d3*/
                v8 = &v15[v4]; /*0xfffed2d4*/
                if ( v1 ) /*0xfffed2d8*/
                  *v8 = 8; /*0xfffed2df*/
                else
                  *v8 = 16; /*0xfffed2da*/
              }
              else
              {
                v8 = &v15[v4]; /*0xfffed2e4*/
                v15[v4] = 4; /*0xfffed2e8*/
              }
            }
            else
            {
              v8 = &v15[v4]; /*0xfffed2ed*/
              v15[v4] = 32; /*0xfffed2f1*/
            }
          }
          else
          {
            v8 = &v15[v4]; /*0xfffed2f6*/
            v15[v4] = 24; /*0xfffed2fa*/
          }
          v9 = *v8; /*0xfffed2fd*/
          if ( v9 < v18 ) /*0xfffed302*/
            v18 = v9; /*0xfffed304*/
        }
        ++v19; /*0xfffed307*/
      }
      while ( v19 < a1[319] ); /*0xfffed313*/
    }
    if ( sub_FFFE71CE(a1) ) /*0xfffed31b*/
    {
      v10 = (v18 - 2) / 2 - 2; /*0xfffed332*/
    }
    else
    {
      v1 = v3 == 0; /*0xfffed337*/
      v11 = v18; /*0xfffed339*/
      if ( !v1 ) /*0xfffed33c*/
        v11 = v18 - v17 - v16; /*0xfffed341*/
      v10 = v11 - 3; /*0xfffed344*/
    }
    if ( (unsigned __int8)v10 > 0xFu ) /*0xfffed34a*/
      v10 = 15; /*0xfffed34c*/
    v12 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 22, 0, 96); /*0xfffed35e*/
    sub_FFFEC306((int)a1, a1[315], 22, 0, 96, v10 & 0xF | v12 & 0xFFFFFFF0); /*0xfffed37c*/
  }
}

/* 0xfffed388 sub_FFFED388 */
void __cdecl sub_FFFED388(unsigned __int8 *a1)
{
  int v1; // eax
  int v2; // edi
  __int16 v3; // bp
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned __int8 i; // [esp+7h] [ebp-1h]

  if ( a1[317] ) /*0xfffed38e*/
  {
    for ( i = 0; i < a1[319]; ++i ) /*0xfffed39b*/
    {
      v1 = 68 * i; /*0xfffed3b4*/
      v2 = (int)&a1[v1 + 326]; /*0xfffed3b7*/
      v3 = 512; /*0xfffed3c2*/
      if ( a1[v1 + 341] ) /*0xfffed3be*/
      {
        if ( i ) /*0xfffed3ce*/
          v3 = 640; /*0xfffed3d0*/
        v4 = sub_FFFEC1F2((int)a1, a1[v1 + 330], 20, 2, v3); /*0xfffed3e0*/
        sub_FFFEC306((int)a1, *(_BYTE *)(v2 + 4), 20, 2, v3, v4 | 1); /*0xfffed3f4*/
      }
    }
    v5 = sub_FFFEC1F2((int)a1, a1[315], 20, 2, 448); /*0xfffed421*/
    sub_FFFEC306((int)a1, a1[315], 20, 2, 448, v5 | 3); /*0xfffed437*/
    v6 = sub_FFFEC1F2((int)a1, a1[315], 20, 2, 492); /*0xfffed44c*/
    sub_FFFEC306((int)a1, a1[315], 20, 2, 492, v6 | 3); /*0xfffed465*/
  }
}

/* 0xfffed473 sub_FFFED473 */
_DWORD *__usercall sub_FFFED473@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  unsigned int v2; // edi

  v1 = sub_FFFEC1F2( /*0xfffed4a2*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2568)
     & 0xFFFFFF0F
     | 0x80;
  sub_FFFEC306( /*0xfffed4bd*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2568,
    v1);
  v2 = v1 & 0xFFFFFF3F | 0x40; /*0xfffed4cd*/
  sub_FFFEC306( /*0xfffed4e5*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2568,
    v2);
  return sub_FFFEC306( /*0xfffed515*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2568,
           v2 & 0xFFFFFF3F);
}

/* 0xfffed518 sub_FFFED518 */
_DWORD *__usercall sub_FFFED518@<eax>(int a1@<esi>)
{
  int v1; // eax

  v1 = sub_FFFEC1F2( /*0xfffed537*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2560);
  return sub_FFFEC306( /*0xfffed568*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2560,
           v1 & 0xF71F00FF | 0x8A07400);
}

/* 0xfffed56a sub_FFFED56A */
_DWORD *__usercall sub_FFFED56A@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  unsigned int v2; // edi

  v1 = sub_FFFEC1F2( /*0xfffed59c*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2304)
     & 0xFCFFFFFF
     | 0x1000000;
  sub_FFFEC306( /*0xfffed5b7*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2304,
    v1);
  v2 = v1 & 0xFCFFFFFF | 0x2000000; /*0xfffed5c7*/
  sub_FFFEC306( /*0xfffed5e2*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2304,
    v2);
  return sub_FFFEC306( /*0xfffed612*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2304,
           v2 | 0x3000000);
}

/* 0xfffed615 sub_FFFED615 */
_DWORD *__usercall sub_FFFED615@<eax>(int a1@<esi>)
{
  int v1; // eax

  v1 = sub_FFFEC1F2( /*0xfffed634*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2436);
  return sub_FFFEC306( /*0xfffed665*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2436,
           v1 & 0xFFF0FFFF | 0xC0000);
}

/* 0xfffed667 sub_FFFED667 */
_DWORD *__usercall sub_FFFED667@<eax>(int a1@<esi>)
{
  int v1; // eax

  v1 = sub_FFFEC1F2( /*0xfffed686*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2624);
  return sub_FFFEC306( /*0xfffed6b0*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2624,
           v1 | 0x1C);
}

/* 0xfffed6b2 sub_FFFED6B2 */
_DWORD *__usercall sub_FFFED6B2@<eax>(int a1@<esi>)
{
  int v1; // eax

  v1 = sub_FFFEC1F2( /*0xfffed6d1*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2628);
  return sub_FFFEC306( /*0xfffed702*/
           *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
           *(_BYTE *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2628,
           v1 & 0xC007FFFF | 0x8600000);
}

/* 0xfffed704 sub_FFFED704 */
_DWORD *__cdecl sub_FFFED704(int a1)
{
  _DWORD *result; // eax

  result = *(_DWORD **)(a1 + 19); /*0xfffed709*/
  if ( *((_BYTE *)result + 6) >= 0x10u ) /*0xfffed710*/
  {
    sub_FFFED518(a1); /*0xfffed712*/
    sub_FFFED473(a1); /*0xfffed717*/
    sub_FFFED615(a1); /*0xfffed71c*/
    sub_FFFED56A(a1); /*0xfffed721*/
    sub_FFFED667(a1); /*0xfffed726*/
    return sub_FFFED6B2(a1); /*0xfffed72b*/
  }
  return result; /*0xfffed730*/
}

/* 0xfffed732 sub_FFFED732 */
void __cdecl sub_FFFED732(int a1)
{
  unsigned __int8 i; // bl
  int v2; // eax
  int v3; // esi
  int v4; // eax

  for ( i = 0; i < *(_BYTE *)(a1 + 11); ++i ) /*0xfffed73a*/
  {
    v2 = 68 * i; /*0xfffed749*/
    v3 = v2 + a1 + 18; /*0xfffed74c*/
    if ( *(_BYTE *)(v2 + a1 + 33) ) /*0xfffed750*/
    {
      v4 = sub_FFFEC1F2( /*0xfffed76c*/
             *(_DWORD *)(a1 + 14),
             *(unsigned __int8 *)(v2 + a1 + 22),
             *(_BYTE *)(v2 + a1 + 23),
             *(_BYTE *)(v2 + a1 + 28),
             4084);
      sub_FFFEC306(*(_DWORD *)(a1 + 14), *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 4084, v4 | 8); /*0xfffed78b*/
    }
  }
}

/* 0xfffed79f sub_FFFED79F */
_DWORD *__cdecl sub_FFFED79F(int a1)
{
  char v1; // al

  v1 = sub_FFFEC165(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 13, 7, 782); /*0xfffed7ba*/
  return sub_FFFEC27E(*(_DWORD *)(a1 + 14), *(_BYTE *)(a1 + 7), 13, 7, 782, v1 & 0xEF); /*0xfffed7dd*/
}

/* 0xfffed7e1 sub_FFFED7E1 */
_DWORD *__cdecl sub_FFFED7E1(int a1)
{
  int v1; // eax

  v1 = sub_FFFEC1F2(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 20, 2, 128); /*0xfffed7fa*/
  return sub_FFFEC306(*(_DWORD *)(a1 + 14), *(_BYTE *)(a1 + 7), 20, 2, 128, v1 & 0xFFFFFCFF); /*0xfffed81b*/
}

/* 0xfffed81e sub_FFFED81E */
_DWORD *__cdecl sub_FFFED81E(int a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2; /*0xfffed81e*/
  *a2 &= ~1u; /*0xfffed822*/
  if ( *(_BYTE *)(a1 + 6) <= 0x12u ) /*0xfffed82f*/
    *a2 &= 0xFFFFF75B; /*0xfffed837*/
  if ( *(_BYTE *)(a1 + 6) >= 0x13u ) /*0xfffed83d*/
    *a2 &= 0xFFFFFFF3; /*0xfffed83f*/
  return result; /*0xfffed842*/
}

/* 0xfffed843 sub_FFFED843 */
bool __cdecl sub_FFFED843(int a1, int a2, unsigned __int8 a3)
{
  BOOL v3; // eax

  if ( sub_FFFE71CE(*(_BYTE **)(a1 + 14)) && !sub_FFFEC541(*(_DWORD *)(68 * a3 + a1 + 41)) ) /*0xfffed866*/
    *(_BYTE *)(a2 + 1) &= ~1u; /*0xfffed870*/
  v3 = sub_FFFEC541(*(_DWORD *)(68 * a3 + a1 + 41)); /*0xfffed880*/
  if ( v3 ) /*0xfffed888*/
  {
    LOBYTE(v3) = sub_FFFE71CE(*(_BYTE **)(a1 + 14)); /*0xfffed88d*/
    if ( v3 ) /*0xfffed895*/
      *(_BYTE *)(a2 + 1) &= ~4u; /*0xfffed897*/
  }
  return v3; /*0xfffed89b*/
}

/* 0xfffed89e sub_FFFED89E */
void __cdecl sub_FFFED89E(_BYTE *a1)
{
  unsigned __int8 i; // bl
  int v2; // eax
  int v3; // esi
  int v4; // eax

  if ( a1[317] ) /*0xfffed8a3*/
  {
    if ( a1[314] == 19 ) /*0xfffed8b3*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffed8b8*/
      {
        v2 = 68 * i; /*0xfffed8ca*/
        v3 = (int)&a1[v2 + 326]; /*0xfffed8cd*/
        if ( a1[v2 + 341] ) /*0xfffed8d4*/
        {
          v4 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[v2 + 330], a1[v2 + 331], a1[v2 + 336], 3980); /*0xfffed8ee*/
          sub_FFFEC306((int)a1, *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 3980, v4 | 0x280000); /*0xfffed90d*/
        }
      }
    }
  }
}

/* 0xfffed924 sub_FFFED924 */
_DWORD *__cdecl sub_FFFED924(int a1)
{
  _DWORD *result; // eax
  unsigned __int8 v2; // cl
  int v3; // eax

  result = *(_DWORD **)(a1 + 19); /*0xfffed929*/
  v2 = *((_BYTE *)result + 6); /*0xfffed92c*/
  if ( v2 >= 0x12u && v2 <= 0x13u ) /*0xfffed937*/
  {
    v3 = sub_FFFEC1F2( /*0xfffed955*/
           *(_DWORD *)((char *)result + 14),
           *(unsigned __int8 *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           4068);
    return sub_FFFEC306( /*0xfffed979*/
             *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
             *(_BYTE *)(a1 + 4),
             *(_BYTE *)(a1 + 5),
             *(_BYTE *)(a1 + 10),
             4068,
             v3 | 0x400000);
  }
  return result; /*0xfffed982*/
}

/* 0xfffed984 sub_FFFED984 */
void __cdecl sub_FFFED984(int a1)
{
  unsigned __int8 i; // bl
  int v2; // eax
  int v3; // esi

  if ( *(_BYTE *)(a1 + 317) ) /*0xfffed989*/
  {
    for ( i = 0; i < *(_BYTE *)(a1 + 319); ++i ) /*0xfffed999*/
    {
      v2 = 68 * i; /*0xfffed9a9*/
      v3 = v2 + a1 + 326; /*0xfffed9ac*/
      if ( *(_BYTE *)(v2 + a1 + 341) ) /*0xfffed9b3*/
      {
        sub_FFFEC306( /*0xfffed9db*/
          *(_DWORD *)(*(_DWORD *)(v2 + a1 + 345) + 14),
          *(_BYTE *)(v2 + a1 + 330),
          *(_BYTE *)(v2 + a1 + 331),
          *(_BYTE *)(v2 + a1 + 336),
          2868,
          -1543502240);
        sub_FFFEC306( /*0xfffed9ff*/
          *(_DWORD *)(*(_DWORD *)(v3 + 19) + 14),
          *(_BYTE *)(v3 + 4),
          *(_BYTE *)(v3 + 5),
          *(_BYTE *)(v3 + 10),
          2880,
          8);
        sub_FFFEC306( /*0xfffeda26*/
          *(_DWORD *)(*(_DWORD *)(v3 + 19) + 14),
          *(_BYTE *)(v3 + 4),
          *(_BYTE *)(v3 + 5),
          *(_BYTE *)(v3 + 10),
          2864,
          89473932);
      }
    }
  }
}

/* 0xfffeda65 sub_FFFEDA65 */
char __usercall sub_FFFEDA65@<al>(int a1@<eax>)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  unsigned __int8 v5; // cl
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  unsigned __int8 i; // [esp+Fh] [ebp-1h]

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14); /*0xfffeda6d*/
  v3 = sub_FFFEC1F2(v2, *(unsigned __int8 *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), 2092); /*0xfffeda8a*/
  sub_FFFEC306( /*0xfffedaac*/
    *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
    *(_BYTE *)(a1 + 4),
    *(_BYTE *)(a1 + 5),
    *(_BYTE *)(a1 + 10),
    2092,
    v3 | 1);
  LOBYTE(v4) = sub_FFFE71B2(v2); /*0xfffedab2*/
  if ( !(_BYTE)v4 ) /*0xfffedabc*/
  {
    v5 = 0; /*0xfffedac2*/
    while ( 1 ) /*0xfffedace*/
    {
      v4 = v2 + 154 * v5; /*0xfffedace*/
      if ( *(_BYTE *)(v4 + 9) ) /*0xfffedad0*/
      {
        if ( *(_BYTE *)(v4 + 10) ) /*0xfffedad6*/
          break; /*0xfffedad6*/
      }
      if ( ++v5 >= 2u ) /*0xfffedae5*/
      {
        v6 = 0; /*0xfffedae7*/
        goto LABEL_7; /*0xfffedae7*/
      }
    }
    v6 = v2 + 154 * v5; /*0xfffedb67*/
LABEL_7:
    for ( i = 0; i < *(_BYTE *)(v6 + 11); LOBYTE(v4) = i ) /*0xfffedae9*/
    {
      v7 = 68 * i; /*0xfffedaf9*/
      v8 = v7 + v6 + 18; /*0xfffedafc*/
      if ( *(_BYTE *)(v7 + v6 + 33) && sub_FFFEC57B(*(_DWORD *)(*(_DWORD *)(v7 + v6 + 41) + 19)) ) /*0xfffedb0c*/
      {
        v9 = sub_FFFEC1F2( /*0xfffedb2c*/
               v2,
               *(unsigned __int8 *)(*(_DWORD *)(v8 + 23) + 4),
               *(_BYTE *)(*(_DWORD *)(v8 + 23) + 5),
               *(_BYTE *)(*(_DWORD *)(v8 + 23) + 10),
               2092);
        sub_FFFEC306( /*0xfffedb4c*/
          v2,
          *(_BYTE *)(*(_DWORD *)(v8 + 23) + 4),
          *(_BYTE *)(*(_DWORD *)(v8 + 23) + 5),
          *(_BYTE *)(*(_DWORD *)(v8 + 23) + 10),
          2092,
          v9 | 1);
      }
      ++i; /*0xfffedb54*/
    }
  }
  return v4; /*0xfffedb62*/
}

/* 0xfffedb6e sub_FFFEDB6E */
unsigned __int8 *__usercall sub_FFFEDB6E@<eax>(int a1@<ebx>)
{
  unsigned __int8 *result; // eax
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  char v8; // cl
  bool v9; // zf
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // [esp-18h] [ebp-30h]
  unsigned __int8 i; // [esp+Ch] [ebp-Ch]
  unsigned __int8 v14; // [esp+Ch] [ebp-Ch]
  unsigned __int8 v15; // [esp+Dh] [ebp-Bh]
  unsigned __int8 v16; // [esp+Eh] [ebp-Ah]
  char v17; // [esp+Fh] [ebp-9h]
  unsigned __int8 *v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  result = (unsigned __int8 *)(a1 + 11); /*0xfffedb73*/
  v18 = (unsigned __int8 *)(a1 + 11); /*0xfffedb77*/
  v19 = 2; /*0xfffedb7b*/
  do /*0xfffede24*/
  {
    if ( *(result - 2) ) /*0xfffedb88*/
    {
      v16 = 0; /*0xfffedb95*/
      if ( *result ) /*0xfffedb92*/
      {
        do /*0xfffede11*/
        {
          v2 = 68 * v16; /*0xfffedba5*/
          v3 = (int)&result[v2 + 7]; /*0xfffedba8*/
          if ( result[v2 + 22] /*0xfffedbd1*/
            && !sub_FFFEC541(*(_DWORD *)&result[v2 + 30])
            && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v3 + 23) + 19) + 6) == 19 )
          {
            sub_FFFEC504(byte_FFFEE7E0, 0, 0xA0u, 1); /*0xfffedbe5*/
            v4 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 108); /*0xfffedbff*/
            sub_FFFEC306(a1, *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 108, v4 | 8); /*0xfffedc1d*/
            v15 = -16; /*0xfffedc25*/
            for ( i = 0; ; ++i ) /*0xfffedc2a*/
            {
              v5 = 10 * i; /*0xfffedc3b*/
              byte_FFFEE7E0[v5] = v15; /*0xfffedc3d*/
              v6 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156); /*0xfffedc57*/
              sub_FFFEC306( /*0xfffedc80*/
                a1,
                *(_BYTE *)(v3 + 4),
                *(_BYTE *)(v3 + 5),
                *(_BYTE *)(v3 + 10),
                156,
                (v15 << 16) | v6 & 0xFF00FFFF);
              sub_FFFEDA65(*(_DWORD *)(v3 + 23)); /*0xfffedc88*/
              v7 = (unsigned int)sub_FFFEC1F2( /*0xfffedcac*/
                                   a1,
                                   *(unsigned __int8 *)(*(_DWORD *)(v3 + 23) + 4),
                                   *(_BYTE *)(*(_DWORD *)(v3 + 23) + 5),
                                   *(_BYTE *)(*(_DWORD *)(v3 + 23) + 10),
                                   2144) >> 24;
              byte_FFFEE7E1[v5] = v7; /*0xfffedcaf*/
              v17 = v7; /*0xfffedcb5*/
              *(int *)((char *)&dword_FFFEE7E2 + v5) = sub_FFFEC1F2( /*0xfffedcdb*/
                                                         a1,
                                                         *(unsigned __int8 *)(*(_DWORD *)(v3 + 23) + 4),
                                                         *(_BYTE *)(*(_DWORD *)(v3 + 23) + 5),
                                                         *(_BYTE *)(*(_DWORD *)(v3 + 23) + 10),
                                                         2576);
              *(int *)((char *)&dword_FFFEE7E6 + v5) = sub_FFFEC1F2( /*0xfffedd08*/
                                                         a1,
                                                         *(unsigned __int8 *)(*(_DWORD *)(v3 + 23) + 4),
                                                         *(_BYTE *)(*(_DWORD *)(v3 + 23) + 5),
                                                         *(_BYTE *)(*(_DWORD *)(v3 + 23) + 10),
                                                         2580);
              if ( v17 == 64 ) /*0xfffedd0e*/
                break; /*0xfffedd0e*/
              if ( !v15 ) /*0xfffedd19*/
              {
                v14 = 0; /*0xfffedd29*/
                while ( 1 ) /*0xfffedd38*/
                {
                  v8 = byte_FFFEE7E1[10 * v14]; /*0xfffedd38*/
                  if ( v8 == 80 /*0xfffedd53*/
                    && !*(int *)((char *)&dword_FFFEE7E2 + 10 * v14)
                    && !*(int *)((char *)&dword_FFFEE7E6 + 10 * v14) )
                  {
                    v10 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156) /*0xfffede5a*/
                        & 0xFF00FFFF;
                    v11 = (unsigned __int8)byte_FFFEE7E0[10 * v14] + 2; /*0xfffede60*/
                    goto LABEL_34; /*0xfffede61*/
                  }
                  if ( v8 == 48 /*0xfffedd6a*/
                    && (*(int *)((char *)&dword_FFFEE7E2 + 10 * v14) || *(int *)((char *)&dword_FFFEE7E6 + 10 * v14)) )
                  {
                    v10 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156) /*0xfffede8f*/
                        & 0xFF00FFFF;
                    v11 = (unsigned __int8)byte_FFFEE7E0[10 * v14] + 3; /*0xfffede94*/
                    goto LABEL_34; /*0xfffede97*/
                  }
                  if ( v8 == 80 /*0xfffedd87*/
                    && (*(int *)((char *)&dword_FFFEE7E2 + 10 * v14) || *(int *)((char *)&dword_FFFEE7E6 + 10 * v14)) )
                  {
                    v10 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156) /*0xfffedec2*/
                        & 0xFF00FFFF;
                    v11 = (unsigned __int8)byte_FFFEE7E0[10 * v14] + 4; /*0xfffedec7*/
                    goto LABEL_34; /*0xfffedeca*/
                  }
                  if ( v8 == 48 /*0xfffedda0*/
                    && !*(int *)((char *)&dword_FFFEE7E2 + 10 * v14)
                    && !*(int *)((char *)&dword_FFFEE7E6 + 10 * v14) )
                  {
                    break; /*0xfffedda0*/
                  }
                  if ( ++v14 >= 0x10u ) /*0xfffeddb5*/
                  {
                    v12 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156) /*0xfffeddde*/
                        & 0xFF00FFFF
                        | 0x410000;
                    sub_FFFEC306(a1, *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156, v12); /*0xfffeddf3*/
                    goto LABEL_26; /*0xfffeddf3*/
                  }
                }
                v10 = sub_FFFEC1F2(a1, *(unsigned __int8 *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156) /*0xfffedef5*/
                    & 0xFF00FFFF;
                v11 = (unsigned __int8)byte_FFFEE7E0[10 * v14] + 5; /*0xfffedefa*/
LABEL_34:
                sub_FFFEC306(a1, *(_BYTE *)(v3 + 4), *(_BYTE *)(v3 + 5), *(_BYTE *)(v3 + 10), 156, v10 | (v11 << 16)); /*0xfffedefd*/
LABEL_26:
                sub_FFFEDA65(*(_DWORD *)(v3 + 23)); /*0xfffeddf8*/
                break; /*0xfffeddfe*/
              }
              v15 -= 16; /*0xfffedd1b*/
            }
          }
          ++v16; /*0xfffede03*/
          result = v18; /*0xfffede07*/
        }
        while ( v16 < *v18 ); /*0xfffede11*/
      }
    }
    result += 154; /*0xfffede17*/
    v9 = v19-- == 1; /*0xfffede1c*/
    v18 = result; /*0xfffede20*/
  }
  while ( !v9 ); /*0xfffede24*/
  return result; /*0xfffede2a*/
}

/* 0xfffedf08 nullsub_4 */
void nullsub_4()
{
  ; /*0xfffedf08*/
}

/* 0xfffedf09 sub_FFFEDF09 */
void __usercall sub_FFFEDF09(_BYTE *a1@<edi>)
{
  __int16 v1; // ax
  __int16 v2; // bx
  int v3; // eax
  unsigned __int8 *v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // [esp+8h] [ebp-8h]
  unsigned __int8 i; // [esp+Fh] [ebp-1h]
  unsigned __int8 j; // [esp+Fh] [ebp-1h]

  if ( a1[317] ) /*0xfffedf0e*/
  {
    if ( a1[314] == 19 ) /*0xfffedf24*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffedf2a*/
      {
        v1 = 512; /*0xfffedf49*/
        v2 = 516; /*0xfffedf4e*/
        if ( a1[68 * i + 341] ) /*0xfffedf45*/
        {
          if ( i ) /*0xfffedf59*/
          {
            v1 = 640; /*0xfffedf5b*/
            v2 = 644; /*0xfffedf60*/
          }
          sub_FFFEC306((int)a1, a1[68 * i + 330], 20, 2, v1, 264); /*0xfffedf76*/
          v3 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[68 * i + 330], 20, 2, v2); /*0xfffedf87*/
          sub_FFFEC306((int)a1, a1[68 * i + 330], 20, 2, v2, v3 | 0x20); /*0xfffedf9c*/
        }
      }
    }
  }
  v4 = a1 + 11; /*0xfffedfb2*/
  v8 = 2; /*0xfffedfb5*/
  do /*0xfffee032*/
  {
    if ( *(v4 - 2) ) /*0xfffedfbc*/
    {
      for ( j = 0; j < *v4; ++j ) /*0xfffedfc2*/
      {
        v5 = 68 * j; /*0xfffedfcf*/
        v6 = (int)&v4[v5 + 7]; /*0xfffedfd2*/
        if ( v4[v5 + 22] ) /*0xfffedfd6*/
        {
          if ( v4[v5 + 74] ) /*0xfffedfdc*/
          {
            v7 = sub_FFFEC1F2((int)a1, v4[v5 + 11], v4[v5 + 13], v4[v5 + 18], 80); /*0xfffedff7*/
            sub_FFFEC306((int)a1, *(_BYTE *)(v6 + 4), *(_BYTE *)(v6 + 6), *(_BYTE *)(v6 + 11), 80, v7 | 0x180000); /*0xfffee017*/
          }
        }
      }
    }
    v4 += 154; /*0xfffee029*/
    --v8; /*0xfffee02f*/
  }
  while ( v8 ); /*0xfffee032*/
}

/* 0xfffee038 sub_FFFEE038 */
void __usercall sub_FFFEE038(_BYTE *a1@<edi>)
{
  int v1; // eax
  int v2; // esi
  __int16 v3; // bx
  int v4; // eax
  unsigned __int8 i; // [esp+1h] [ebp-1h]

  if ( a1[317] ) /*0xfffee03c*/
  {
    if ( a1[314] == 19 ) /*0xfffee04c*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffee04e*/
      {
        v1 = 68 * i; /*0xfffee061*/
        v2 = (int)&a1[v1 + 326]; /*0xfffee064*/
        v3 = 516; /*0xfffee06f*/
        if ( a1[v1 + 341] ) /*0xfffee06b*/
        {
          if ( i ) /*0xfffee07a*/
            v3 = 644; /*0xfffee07c*/
          v4 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[v1 + 330], 20, 2, v3); /*0xfffee08d*/
          sub_FFFEC306((int)a1, *(_BYTE *)(v2 + 4), 20, 2, v3, v4 & 0xFFFFFFDF); /*0xfffee0a2*/
        }
      }
    }
  }
}

/* 0xfffee0bc sub_FFFEE0BC */
void __cdecl sub_FFFEE0BC(_BYTE *a1)
{
  bool v1; // bl
  bool v2; // bl

  v1 = 0; /*0xfffee0c5*/
  if ( a1[317] ) /*0xfffee0c7*/
    v1 = a1[314] >= 0x20u; /*0xfffee0dc*/
  sub_FFFE71CE(a1); /*0xfffee0df*/
  if ( sub_FFFE71CE(a1) || !v1 ) /*0xfffee0fb*/
  {
    v2 = a1[314] == 19; /*0xfffee108*/
    if ( !sub_FFFE71CE(a1) && (sub_FFFE71CE(a1) || v2) ) /*0xfffee129*/
    {
      sub_FFFEE038(a1); /*0xfffee12b*/
      sub_FFFEDB6E((int)a1); /*0xfffee132*/
      sub_FFFEDF09(a1); /*0xfffee137*/
    }
  }
}

/* 0xfffee140 sub_FFFEE140 */
void __cdecl sub_FFFEE140(_BYTE *a1)
{
  unsigned __int8 i; // bl
  _BYTE *v2; // esi
  int v3; // eax

  if ( a1[317] ) /*0xfffee145*/
  {
    if ( a1[314] >= 0x13u ) /*0xfffee159*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffee15e*/
      {
        v2 = &a1[68 * i]; /*0xfffee173*/
        if ( v2[341] ) /*0xfffee176*/
        {
          v3 = sub_FFFEC1F2((int)a1, (unsigned __int8)v2[330], v2[331], v2[336], 3980); /*0xfffee19c*/
          sub_FFFEC306((int)a1, v2[330], v2[331], v2[336], 3980, v3 | 0x4000); /*0xfffee1c4*/
        }
      }
    }
  }
}

/* 0xfffee1db sub_FFFEE1DB */
void __cdecl sub_FFFEE1DB(_BYTE *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1[317] && a1[314] == 19 && sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 20, 2, 212) >= 0 ) /*0xfffee217*/
  {
    v1 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 13, 7, 780); /*0xfffee22e*/
    sub_FFFEC306((int)a1, a1[315], 13, 7, 780, v1 & 0xFFEFFFFF); /*0xfffee248*/
    v2 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[315], 16, 1, 64); /*0xfffee25d*/
    sub_FFFEC306((int)a1, a1[315], 16, 1, 64, v2 & 0xFFFFFFFE); /*0xfffee279*/
  }
}

/* 0xfffee284 sub_FFFEE284 */
int __cdecl sub_FFFEE284(_BYTE *a1)
{
  int result; // eax
  int v2; // eax
  int v3; // eax
  _BYTE *v4; // [esp+0h] [ebp-14h]
  int v5; // [esp+8h] [ebp-Ch]
  unsigned __int8 i; // [esp+Eh] [ebp-6h]
  unsigned __int8 j; // [esp+Eh] [ebp-6h]
  unsigned __int8 v8; // [esp+Fh] [ebp-5h]
  unsigned int v9; // [esp+10h] [ebp-4h]

  v8 = 0; /*0xfffee296*/
  result = sub_FFFE724C(a1); /*0xfffee29d*/
  if ( !result ) /*0xfffee2a5*/
  {
    for ( i = 0; i < 2u; ++i ) /*0xfffee2ac*/
    {
      if ( a1[154 * i + 9] ) /*0xfffee2d6*/
      {
        v2 = (int)&a1[154 * i]; /*0xfffee2e9*/
        LOBYTE(v2) = *(_BYTE *)(v2 + 7); /*0xfffee2ec*/
        if ( (sub_FFFEC1F2((int)a1, v2, 0, 0, 192) & 0x7F00) == 0 ) /*0xfffee310*/
          v8 = 1; /*0xfffee312*/
      }
    }
    result = v8; /*0xfffee318*/
    if ( v8 ) /*0xfffee31e*/
    {
      for ( j = 0; j < 2u; ++j ) /*0xfffee325*/
      {
        v4 = &a1[154 * j]; /*0xfffee349*/
        if ( v4[9] ) /*0xfffee34f*/
        {
          v3 = (int)&a1[154 * j]; /*0xfffee362*/
          LOBYTE(v3) = v4[7]; /*0xfffee365*/
          v5 = (sub_FFFEC1F2((int)a1, v3, 0, 0, 192) << 8) | 0x8000; /*0xfffee388*/
          sub_FFFEC306((int)a1, v4[7], 0, 0, 192, v5); /*0xfffee3a1*/
        }
      }
      v9 = sub_FFFEC1F2((int)a1, 0, 20, 2, 204) & 0xFFFFFBFF; /*0xfffee3cc*/
      sub_FFFEC306((int)a1, 0, 20, 2, 204, v9); /*0xfffee3e0*/
      sub_FFFEC306((int)a1, 0, 20, 2, 204, v9 | 0x400); /*0xfffee404*/
      __halt(); /*0xfffee40c*/
    }
  }
  return result; /*0xfffee412*/
}

/* 0xfffee414 sub_FFFEE414 */
_DWORD *__cdecl sub_FFFEE414(int a1)
{
  _DWORD *result; // eax
  int v2; // ebx
  int v3; // eax

  result = *(_DWORD **)(a1 + 19); /*0xfffee41a*/
  v2 = *(_DWORD *)((char *)result + 14); /*0xfffee421*/
  if ( *((_BYTE *)result + 6) >= 0x20u ) /*0xfffee424*/
  {
    v3 = sub_FFFEC1F2(v2, *(unsigned __int8 *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), 3980); /*0xfffee440*/
    return sub_FFFEC306(v2, *(_BYTE *)(a1 + 4), *(_BYTE *)(a1 + 5), *(_BYTE *)(a1 + 10), 3980, v3 | 0x400000); /*0xfffee45f*/
  }
  return result; /*0xfffee468*/
}

/* 0xfffee46b sub_FFFEE46B */
int __cdecl sub_FFFEE46B(int a1, int a2)
{
  int result; // eax

  result = a1; /*0xfffee46b*/
  if ( *(_BYTE *)(a1 + 6) >= 0x20u ) /*0xfffee473*/
  {
    *(_BYTE *)(a2 + 3) |= 1u; /*0xfffee479*/
    return a2; /*0xfffee475*/
  }
  return result; /*0xfffee47d*/
}

/* 0xfffee47e sub_FFFEE47E */
void __cdecl sub_FFFEE47E(_BYTE *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // eax
  unsigned __int8 i; // [esp+7h] [ebp-1h]

  if ( a1[317] ) /*0xfffee484*/
  {
    if ( a1[314] >= 0x20u ) /*0xfffee498*/
    {
      for ( i = 0; i < a1[319]; ++i ) /*0xfffee49e*/
      {
        v1 = 68 * i; /*0xfffee4c2*/
        v2 = (int)&a1[v1 + 326]; /*0xfffee4c5*/
        if ( a1[v1 + 341] ) /*0xfffee4cc*/
        {
          v3 = sub_FFFEC1F2((int)a1, (unsigned __int8)a1[v1 + 330], a1[v1 + 331], a1[v1 + 336], 2888); /*0xfffee4e6*/
          sub_FFFEC306((int)a1, *(_BYTE *)(v2 + 4), *(_BYTE *)(v2 + 5), *(_BYTE *)(v2 + 10), 2888, v3 | 0x300); /*0xfffee505*/
          v4 = sub_FFFEC1F2((int)a1, *(unsigned __int8 *)(v2 + 4), *(_BYTE *)(v2 + 5), *(_BYTE *)(v2 + 10), 2872); /*0xfffee51e*/
          sub_FFFEC306((int)a1, *(_BYTE *)(v2 + 4), *(_BYTE *)(v2 + 5), *(_BYTE *)(v2 + 10), 2872, v4 | 0xC00000); /*0xfffee540*/
        }
      }
    }
  }
}

/* 0xfffee562 sub_FFFEE562 */
_BYTE *__cdecl sub_FFFEE562(int a1, _BYTE *a2)
{
  _BYTE *result; // eax

  result = *(_BYTE **)(a1 + 19); /*0xfffee566*/
  if ( result[6] >= 0x20u ) /*0xfffee56d*/
  {
    *a2 = -1; /*0xfffee573*/
    return a2; /*0xfffee56f*/
  }
  return result; /*0xfffee576*/
}

/* 0xfffee577 sub_FFFEE577 */
unsigned int *__cdecl sub_FFFEE577(int a1, unsigned int *a2)
{
  unsigned int *result; // eax

  result = *(unsigned int **)(a1 + 19); /*0xfffee57b*/
  if ( *((_BYTE *)result + 6) >= 0x20u ) /*0xfffee582*/
  {
    *a2 = *a2 & 0xFFFFFFF8 | 4; /*0xfffee590*/
    return a2; /*0xfffee584*/
  }
  return result; /*0xfffee592*/
}

/* 0xfffee593 sub_FFFEE593 */
_DWORD *__cdecl sub_FFFEE593(int a1)
{
  _DWORD *result; // eax
  int v2; // eax

  result = *(_DWORD **)(a1 + 19); /*0xfffee598*/
  if ( *((_BYTE *)result + 6) >= 0x20u ) /*0xfffee59f*/
  {
    v2 = sub_FFFEC1F2( /*0xfffee5bd*/
           *(_DWORD *)((char *)result + 14),
           *(unsigned __int8 *)(a1 + 4),
           *(_BYTE *)(a1 + 5),
           *(_BYTE *)(a1 + 10),
           2220);
    return sub_FFFEC306( /*0xfffee5e6*/
             *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
             *(_BYTE *)(a1 + 4),
             *(_BYTE *)(a1 + 5),
             *(_BYTE *)(a1 + 10),
             2220,
             v2 & 0xFF00FFFE | 0x200001);
  }
  return result; /*0xfffee5ef*/
}

/* 0xfffee5f1 sub_FFFEE5F1 */
_DWORD *__cdecl sub_FFFEE5F1(unsigned int a1)
{
  int v1; // esi
  int v2; // eax

  v1 = a1; /*0xfffee5f5*/
  a1 = sub_FFFEC1F2( /*0xfffee626*/
         *(_DWORD *)(*(_DWORD *)(a1 + 19) + 14),
         *(unsigned __int8 *)(a1 + 4),
         *(_BYTE *)(a1 + 5),
         *(_BYTE *)(a1 + 10),
         2208)
     & 0xFF00FFFF
     | 0x20000;
  sub_FFFEE562(v1, &a1); /*0xfffee62e*/
  sub_FFFEC306( /*0xfffee64f*/
    *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
    *(_BYTE *)(v1 + 4),
    *(_BYTE *)(v1 + 5),
    *(_BYTE *)(v1 + 10),
    2208,
    a1);
  a1 = sub_FFFEC1F2( /*0xfffee67a*/
         *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
         *(unsigned __int8 *)(v1 + 4),
         *(_BYTE *)(v1 + 5),
         *(_BYTE *)(v1 + 10),
         2228)
     & 0xFFFEFFFF;
  sub_FFFEE577(v1, &a1); /*0xfffee685*/
  sub_FFFEC306( /*0xfffee6a6*/
    *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
    *(_BYTE *)(v1 + 4),
    *(_BYTE *)(v1 + 5),
    *(_BYTE *)(v1 + 10),
    2228,
    a1);
  sub_FFFEE593(v1); /*0xfffee6ac*/
  v2 = sub_FFFEC1F2( /*0xfffee6ca*/
         *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
         *(unsigned __int8 *)(v1 + 4),
         *(_BYTE *)(v1 + 5),
         *(_BYTE *)(v1 + 10),
         2228);
  sub_FFFEC306( /*0xfffee6ec*/
    *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
    *(_BYTE *)(v1 + 4),
    *(_BYTE *)(v1 + 5),
    *(_BYTE *)(v1 + 10),
    2228,
    v2 | 0x40);
  LOBYTE(a1) = sub_FFFEC165( /*0xfffee719*/
                 *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
                 *(unsigned __int8 *)(v1 + 4),
                 *(_BYTE *)(v1 + 5),
                 *(_BYTE *)(v1 + 10),
                 2112)
             | 2;
  return sub_FFFEC27E( /*0xfffee740*/
           *(_DWORD *)(*(_DWORD *)(v1 + 19) + 14),
           *(_BYTE *)(v1 + 4),
           *(_BYTE *)(v1 + 5),
           *(_BYTE *)(v1 + 10),
           2112,
           a1);
}

/* 0xfffee744 sub_FFFEE744 */
void __cdecl sub_FFFEE744(int a1)
{
  int v1; // esi
  int v2; // eax
  bool v3; // zf

  v1 = a1; /*0xfffee748*/
  if ( *(_BYTE *)(a1 + 6) >= 0x13u ) /*0xfffee74f*/
  {
    v2 = sub_FFFEC1F2(*(_DWORD *)(a1 + 14), *(unsigned __int8 *)(a1 + 7), 13, 7, 1108); /*0xfffee765*/
    v3 = *(_BYTE *)(v1 + 6) == 19; /*0xfffee76d*/
    a1 = v2; /*0xfffee771*/
    if ( v3 ) /*0xfffee774*/
      HIWORD(a1) |= 0x4020u; /*0xfffee776*/
    sub_FFFEE46B(v1, (int)&a1); /*0xfffee781*/
    sub_FFFEC306(*(_DWORD *)(v1 + 14), *(_BYTE *)(v1 + 7), 13, 7, 1108, a1); /*0xfffee797*/
  }
}
