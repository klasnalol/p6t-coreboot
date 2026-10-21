/* Generated IDA pseudocode, not original source or a compilable implementation. */
/* Types, names and boundaries are inferred; no motherboard execution was observed. */

/* 0xfffc1fe0 DllEntryPoint */
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  int v3; // edi
  int v4; // esi
  unsigned int v5; // kr00_4
  BOOL result; // eax
  _DWORD v7[2]; // [esp-14h] [ebp-E8h] BYREF
  int v8; // [esp-Ch] [ebp-E0h]
  int v9; // [esp-8h] [ebp-DCh]
  unsigned int v10; // [esp-4h] [ebp-D8h]
  int v11; // [esp+8h] [ebp-CCh]
  _BYTE v12[200]; // [esp+Ch] [ebp-C8h] BYREF
  int savedregs; // [esp+D4h] [ebp+0h] BYREF

  v5 = __readeflags(); /*0xfffc1feb*/
  v10 = v5; /*0xfffc1feb*/
  v9 = v4; /*0xfffc1fec*/
  v8 = v3; /*0xfffc1fed*/
  v7[1] = &savedregs; /*0xfffc1fee*/
  v7[0] = v3; /*0xfffc1fef*/
  *(_DWORD *)(fdwReason + 106) = v7; /*0xfffc1ff3*/
  *(_DWORD *)(fdwReason + 106) += 4; /*0xfffc1ff6*/
  *(_DWORD *)(fdwReason + 110) = &loc_FFFC20AF; /*0xfffc1ffa*/
  qmemcpy(v12, hinstDLL, 0xC1u); /*0xfffc2014*/
  nullsub_1(fdwReason, &unk_FFFDC758, hinstDLL); /*0xfffc2022*/
  sub_FFFC20C5(fdwReason, &unk_FFFDC758, hinstDLL); /*0xfffc2035*/
  v11 = sub_FFFD8C6F(fdwReason); /*0xfffc2046*/
  *((_BYTE *)hinstDLL + 10) = *(_BYTE *)(fdwReason + 2); /*0xfffc2055*/
  if ( *(_BYTE *)(fdwReason + 1) != 1 && *(_BYTE *)(fdwReason + 1) != 2 ) /*0xfffc206e*/
  {
    qmemcpy((void *)(fdwReason + 6804), v12, 0xC0u); /*0xfffc2082*/
    *(_BYTE *)(fdwReason + 6996) = v12[192]; /*0xfffc2084*/
  }
  if ( *(_BYTE *)(fdwReason + 1) != 1 ) /*0xfffc208f*/
    sub_FFFD934A(fdwReason); /*0xfffc2094*/
  sub_FFFD8E77(fdwReason, 191); /*0xfffc20a2*/
  result = v11; /*0xfffc20a9*/
  __writeeflags(v10); /*0xfffc20b2*/
  _m_empty(); /*0xfffc20b9*/
  return result; /*0xfffc20c1*/
}

/* 0xfffc20c5 sub_FFFC20C5 */
int __cdecl sub_FFFC20C5(int a1, _DWORD *a2, int a3)
{
  int v3; // eax
  char *v5; // esi
  char *v6; // esi
  _BYTE *v7; // edi
  _BYTE *v8; // esi
  _BYTE *v9; // ecx
  _DWORD *v10; // edx
  char *v11; // ecx
  int v12; // edi
  int v13; // edi
  _BYTE *v14; // esi
  bool v15; // zf
  _DWORD *v16; // esi
  _DWORD *v17; // esi
  _BYTE *v18; // edi
  char *v19; // esi
  char v20; // cl
  _DWORD *v21; // ecx
  int v22; // edi
  _BYTE *v23; // esi
  unsigned __int8 v24; // cl
  unsigned __int8 v25; // cl
  __int16 v26; // cx
  __int16 v27; // cx
  unsigned __int8 v28; // cl
  int v29; // ecx
  int v30; // edi
  int v31; // edi
  int v32; // ecx
  __int16 v33; // dx
  char *v34; // edi
  int v35; // esi
  int v36; // eax
  unsigned int v37; // esi
  char v38; // al
  char v39; // al
  int v40; // edx
  int v41; // ecx
  int j; // edx
  int v43; // ecx
  unsigned __int8 v44; // al
  unsigned int v46; // [esp+Ch] [ebp-20h]
  int v47; // [esp+10h] [ebp-1Ch]
  int v48; // [esp+14h] [ebp-18h]
  int v49; // [esp+14h] [ebp-18h]
  int v50; // [esp+14h] [ebp-18h]
  _BYTE *v51; // [esp+14h] [ebp-18h]
  int v52; // [esp+18h] [ebp-14h]
  int v53; // [esp+18h] [ebp-14h]
  int v54; // [esp+1Ch] [ebp-10h]
  int v55; // [esp+20h] [ebp-Ch]
  int v56; // [esp+24h] [ebp-8h]
  char v57; // [esp+2Bh] [ebp-1h]
  _BYTE *v58; // [esp+34h] [ebp+8h]
  int v59; // [esp+34h] [ebp+8h]
  int v60; // [esp+34h] [ebp+8h]
  int v61; // [esp+34h] [ebp+8h]
  unsigned __int8 i; // [esp+37h] [ebp+Bh]
  unsigned int v63; // [esp+38h] [ebp+Ch]

  v3 = a3; /*0xfffc20cb*/
  v46 = 0; /*0xfffc20ce*/
  v57 = 0; /*0xfffc20dc*/
  if ( (*(_BYTE *)(a3 + 38) & 1) != 0 ) /*0xfffc20e0*/
  {
    v5 = *(char **)(a3 + 74); /*0xfffc20e6*/
    if ( !v5 || (char *)(a1 + 3730) == v5 ) /*0xfffc20f5*/
    {
      sub_FFFD9347(a1); /*0xfffc2104*/
      v3 = a3; /*0xfffc2109*/
    }
    else
    {
      qmemcpy((void *)(a1 + 3730), v5, 0xCC0u); /*0xfffc20fc*/
      v6 = v5 + 3264; /*0xfffc20fc*/
      *(_WORD *)(a1 + 6994) = *(_WORD *)v6; /*0xfffc20fe*/
      *(_BYTE *)(a1 + 6996) = v6[2]; /*0xfffc2100*/
    }
    if ( *(_DWORD *)(a1 + 3743) != 34668544 ) /*0xfffc2117*/
      v57 = 1; /*0xfffc2119*/
    if ( *(_BYTE *)(a1 + 6804) != *(_BYTE *)v3 /*0xfffc2433*/
      || *(_BYTE *)(a1 + 6805) != *(_BYTE *)(v3 + 1)
      || *(_BYTE *)(a1 + 6806) != *(_BYTE *)(v3 + 2)
      || *(_BYTE *)(a1 + 6807) != *(_BYTE *)(v3 + 3)
      || *(_BYTE *)(a1 + 6808) != *(_BYTE *)(v3 + 4)
      || *(_BYTE *)(a1 + 6809) != *(_BYTE *)(v3 + 5)
      || *(_BYTE *)(a1 + 6810) != *(_BYTE *)(v3 + 6)
      || *(_BYTE *)(a1 + 6811) != *(_BYTE *)(v3 + 7)
      || *(_BYTE *)(a1 + 6812) != *(_BYTE *)(v3 + 8)
      || *(_BYTE *)(a1 + 6813) != *(_BYTE *)(v3 + 9)
      || *(_BYTE *)(a1 + 6814) != *(_BYTE *)(v3 + 10)
      || *(_BYTE *)(a1 + 6815) != *(_BYTE *)(v3 + 11)
      || *(_BYTE *)(a1 + 6816) != *(_BYTE *)(v3 + 12)
      || *(_BYTE *)(a1 + 6817) != *(_BYTE *)(v3 + 13)
      || *(_BYTE *)(a1 + 6818) != *(_BYTE *)(v3 + 14)
      || *(_WORD *)(a1 + 6820) != *(_WORD *)(v3 + 16)
      || *(_WORD *)(a1 + 6824) != *(_WORD *)(v3 + 20)
      || *(_WORD *)(a1 + 6826) != *(_WORD *)(v3 + 22)
      || *(_WORD *)(a1 + 6828) != *(_WORD *)(v3 + 24)
      || *(_WORD *)(a1 + 6830) != *(_WORD *)(v3 + 26)
      || *(_WORD *)(a1 + 6832) != *(_WORD *)(v3 + 28)
      || *(_DWORD *)(a1 + 6836) != *(_DWORD *)(v3 + 32)
      || (*(_DWORD *)(a1 + 6840) | 0x10000) != *(_DWORD *)(v3 + 36)
      || *(_DWORD *)(a1 + 6844) != *(_DWORD *)(v3 + 40)
      || *(_BYTE *)(a1 + 6848) != *(_BYTE *)(v3 + 44)
      || *(_BYTE *)(a1 + 6849) != *(_BYTE *)(v3 + 45)
      || *(_BYTE *)(a1 + 6850) != *(_BYTE *)(v3 + 46)
      || *(_BYTE *)(a1 + 6851) != *(_BYTE *)(v3 + 47)
      || *(_WORD *)(a1 + 6852) != *(_WORD *)(v3 + 48)
      || *(_WORD *)(a1 + 6854) != *(_WORD *)(v3 + 50)
      || *(_WORD *)(a1 + 6856) != *(_WORD *)(v3 + 52)
      || *(_BYTE *)(a1 + 6858) != *(_BYTE *)(v3 + 54)
      || *(_BYTE *)(a1 + 6859) != *(_BYTE *)(v3 + 55)
      || *(_WORD *)(a1 + 6860) != *(_WORD *)(v3 + 56)
      || *(_WORD *)(a1 + 6862) != *(_WORD *)(v3 + 58)
      || *(_WORD *)(a1 + 6864) != *(_WORD *)(v3 + 60)
      || *(_DWORD *)(a1 + 6866) != *(_DWORD *)(v3 + 62)
      || *(_DWORD *)(a1 + 6870) != *(_DWORD *)(v3 + 66)
      || *(_DWORD *)(a1 + 6874) != *(_DWORD *)(v3 + 70)
      || *(_BYTE *)(a1 + 6882) != *(_BYTE *)(v3 + 78)
      || *(_BYTE *)(a1 + 6883) != *(_BYTE *)(v3 + 79)
      || *(_BYTE *)(a1 + 6884) != *(_BYTE *)(v3 + 80)
      || *(_BYTE *)(a1 + 6885) != *(_BYTE *)(v3 + 81)
      || *(_BYTE *)(a1 + 6983) != *(_BYTE *)(v3 + 179)
      || *(_BYTE *)(a1 + 6984) != *(_BYTE *)(v3 + 180)
      || *(_BYTE *)(a1 + 6985) != *(_BYTE *)(v3 + 181)
      || *(_WORD *)(a1 + 6986) != *(_WORD *)(v3 + 182)
      || *(_WORD *)(a1 + 6988) != *(_WORD *)(v3 + 184)
      || *(_WORD *)(a1 + 6990) != *(_WORD *)(v3 + 186)
      || *(_WORD *)(a1 + 6992) != *(_WORD *)(v3 + 188)
      || *(_WORD *)(a1 + 6994) != *(_WORD *)(v3 + 190) )
    {
      v57 = 1; /*0xfffc2435*/
    }
    if ( *(_BYTE *)(a1 + 6886) != *(_BYTE *)(v3 + 82) /*0xfffc2458*/
      || *(_BYTE *)(a1 + 6887) != *(_BYTE *)(v3 + 83)
      || *(_BYTE *)(a1 + 6888) != *(_BYTE *)(v3 + 84) )
    {
      v57 = 1; /*0xfffc245a*/
    }
    v7 = (_BYTE *)(a1 + 6896); /*0xfffc245e*/
    v8 = (_BYTE *)(v3 + 92); /*0xfffc2464*/
    v52 = 3; /*0xfffc2467*/
    do /*0xfffc24a8*/
    {
      if ( *(v7 - 3) != *(v8 - 3) ) /*0xfffc2474*/
        v57 = 1; /*0xfffc2476*/
      v9 = v8; /*0xfffc247a*/
      v58 = v7; /*0xfffc247c*/
      v48 = 2; /*0xfffc247f*/
      do /*0xfffc249d*/
      {
        if ( *v58 != *v9 ) /*0xfffc248d*/
          v57 = 1; /*0xfffc248f*/
        v58 += 14; /*0xfffc2493*/
        v9 += 14; /*0xfffc2497*/
        --v48; /*0xfffc249a*/
      }
      while ( v48 ); /*0xfffc249d*/
      v8 += 30; /*0xfffc249f*/
      v7 += 30; /*0xfffc24a2*/
      --v52; /*0xfffc24a5*/
    }
    while ( v52 ); /*0xfffc24a8*/
    if ( v57 ) /*0xfffc24ae*/
    {
      sub_FFFC29D3(a1 + 3730, 0, 3267, 1, 0); /*0xfffc24cc*/
      v3 = a3; /*0xfffc24d1*/
    }
    else
    {
      *(_BYTE *)(a1 + 1) = 2; /*0xfffc24b0*/
      *(_BYTE *)(a1 + 23) = 1; /*0xfffc24b4*/
    }
  }
  v10 = a2; /*0xfffc24d7*/
  v59 = a1 + 1037; /*0xfffc24e0*/
  v11 = (char *)a2 + 959; /*0xfffc24e3*/
  v49 = 7; /*0xfffc24e9*/
  do /*0xfffc2510*/
  {
    *(_DWORD *)(v59 - 49) = *(_DWORD *)(v11 - 49); /*0xfffc24f9*/
    v12 = v59 - 49 + 4; /*0xfffc24f9*/
    *(_WORD *)v12 = *(_WORD *)(v11 - 45); /*0xfffc24fa*/
    *(_BYTE *)(v12 + 2) = *(v11 - 43); /*0xfffc24fc*/
    v13 = v59; /*0xfffc24fd*/
    v59 += 7; /*0xfffc2500*/
    *(_DWORD *)v13 = *(_DWORD *)v11; /*0xfffc2506*/
    v13 += 4; /*0xfffc2506*/
    *(_WORD *)v13 = *((_WORD *)v11 + 2); /*0xfffc2507*/
    v14 = v11 + 6; /*0xfffc2507*/
    v11 += 7; /*0xfffc2509*/
    v15 = v49-- == 1; /*0xfffc250c*/
    *(_BYTE *)(v13 + 2) = *v14; /*0xfffc250f*/
  }
  while ( !v15 ); /*0xfffc2510*/
  *(_DWORD *)(a1 + 1146) = a2[267]; /*0xfffc251e*/
  *(_DWORD *)(a1 + 1150) = a2[268]; /*0xfffc251f*/
  *(_DWORD *)(a1 + 1154) = a2[269]; /*0xfffc2520*/
  *(_DWORD *)(a1 + 1158) = a2[270]; /*0xfffc252d*/
  *(_DWORD *)(a1 + 1162) = a2[271]; /*0xfffc252e*/
  *(_DWORD *)(a1 + 1166) = a2[272]; /*0xfffc252f*/
  v16 = (_DWORD *)(v3 + 180); /*0xfffc253d*/
  if ( !*(_BYTE *)(v3 + 179) ) /*0xfffc2530*/
    v16 = a2; /*0xfffc2545*/
  *(_DWORD *)(a1 + 10294) = *v16; /*0xfffc2547*/
  v17 = v16 + 1; /*0xfffc2547*/
  *(_DWORD *)(a1 + 10298) = *v17; /*0xfffc2548*/
  *(_DWORD *)(a1 + 10302) = v17[1]; /*0xfffc2549*/
  v18 = (_BYTE *)(a1 + 9); /*0xfffc254a*/
  v19 = (char *)(a2 + 273); /*0xfffc254d*/
  v60 = 7; /*0xfffc2553*/
  do /*0xfffc2563*/
  {
    v20 = *v19++; /*0xfffc255a*/
    *v18++ = v20; /*0xfffc255d*/
    --v60; /*0xfffc2560*/
  }
  while ( v60 ); /*0xfffc2563*/
  v61 = a1 + 1086; /*0xfffc256b*/
  v21 = a2 + 252; /*0xfffc256e*/
  v50 = 12; /*0xfffc2574*/
  do /*0xfffc258c*/
  {
    v22 = v61; /*0xfffc257b*/
    v61 += 5; /*0xfffc257e*/
    *(_DWORD *)v22 = *v21; /*0xfffc2584*/
    v23 = v21 + 1; /*0xfffc2584*/
    v21 = (_DWORD *)((char *)v21 + 5); /*0xfffc2585*/
    v15 = v50-- == 1; /*0xfffc2588*/
    *(_BYTE *)(v22 + 4) = *v23; /*0xfffc258b*/
  }
  while ( !v15 ); /*0xfffc258c*/
  *(_DWORD *)(a1 + 78) = *(_DWORD *)(v3 + 36); /*0xfffc2591*/
  *(_DWORD *)(a1 + 82) = *(_DWORD *)(v3 + 40); /*0xfffc2597*/
  *(_BYTE *)(a1 + 7) = *(_BYTE *)(v3 + 2); /*0xfffc259d*/
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(v3 + 3); /*0xfffc25a3*/
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(v3 + 4); /*0xfffc25a9*/
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(v3 + 7); /*0xfffc25af*/
  *(_BYTE *)(a1 + 17) = *(_BYTE *)(v3 + 8); /*0xfffc25b5*/
  *(_BYTE *)(a1 + 18) = *(_BYTE *)(v3 + 9); /*0xfffc25bb*/
  v24 = *(_BYTE *)(a1 + 16); /*0xfffc25be*/
  if ( v24 > 2u || !v24 ) /*0xfffc25c8*/
    *(_BYTE *)(a1 + 16) = 2; /*0xfffc25ca*/
  v15 = (*(_BYTE *)(a1 + 81) & 2) == 0; /*0xfffc25ce*/
  *(_DWORD *)(a1 + 1704) = *(_DWORD *)(v3 + 62); /*0xfffc25db*/
  *(_DWORD *)(a1 + 1708) = *(_DWORD *)(v3 + 66); /*0xfffc25dc*/
  *(_DWORD *)(a1 + 1712) = *(_DWORD *)(v3 + 70); /*0xfffc25dd*/
  *(_DWORD *)(a1 + 1716) = *(_DWORD *)(v3 + 74); /*0xfffc25de*/
  *(_BYTE *)(a1 + 3731) = *(_BYTE *)(v3 + 1); /*0xfffc25e2*/
  *(_BYTE *)(a1 + 4) = *(_BYTE *)(v3 + 5); /*0xfffc25eb*/
  *(_DWORD *)(a1 + 86) = *(_DWORD *)(v3 + 32); /*0xfffc25f1*/
  *(_WORD *)(a1 + 38) = *(_WORD *)(v3 + 22); /*0xfffc25f8*/
  *(_WORD *)(a1 + 40) = *(_WORD *)(v3 + 24); /*0xfffc2600*/
  *(_WORD *)(a1 + 42) = *(_WORD *)(v3 + 26); /*0xfffc2608*/
  *(_WORD *)(a1 + 44) = *(_WORD *)(v3 + 28); /*0xfffc2610*/
  *(_WORD *)(a1 + 46) = *(_WORD *)(v3 + 30); /*0xfffc2618*/
  *(_BYTE *)(a1 + 10990) = *(_BYTE *)(v3 + 192); /*0xfffc2622*/
  if ( !v15 ) /*0xfffc2628*/
  {
    v25 = *(_BYTE *)(v3 + 15); /*0xfffc262a*/
    if ( v25 && v25 <= 0x1Fu ) /*0xfffc2634*/
      *(_BYTE *)(a1 + 31) = v25; /*0xfffc2636*/
    else
      *(_BYTE *)(a1 + 31) = 10; /*0xfffc263b*/
  }
  v26 = *(_WORD *)(v3 + 18); /*0xfffc263f*/
  if ( v26 ) /*0xfffc2646*/
    *(_WORD *)(a1 + 64) = v26; /*0xfffc2648*/
  else
    *(_WORD *)(a1 + 64) = 128; /*0xfffc264e*/
  v27 = *(_WORD *)(v3 + 20); /*0xfffc2654*/
  if ( v27 ) /*0xfffc265b*/
    *(_WORD *)(a1 + 66) = v27; /*0xfffc2665*/
  else
    *(_WORD *)(a1 + 66) = 1024; /*0xfffc265d*/
  v28 = *(_BYTE *)(v3 + 6); /*0xfffc2669*/
  if ( v28 && (v28 <= 2u || v28 == 4) ) /*0xfffc2678*/
  {
    *(_BYTE *)(a1 + 5) = v28; /*0xfffc267a*/
  }
  else
  {
    *(_BYTE *)(a1 + 5) = 4; /*0xfffc2686*/
    sub_FFFD9412(a1, 1, 0, -1); /*0xfffc268a*/
    v10 = a2; /*0xfffc268f*/
    v3 = a3; /*0xfffc2692*/
  }
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(v3 + 11); /*0xfffc269b*/
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(v3 + 12); /*0xfffc26a1*/
  *(_BYTE *)(a1 + 30) = *(_BYTE *)(v3 + 13); /*0xfffc26a7*/
  *(_WORD *)(a1 + 36) = *(_WORD *)(v3 + 16); /*0xfffc26ae*/
  *(_BYTE *)(a1 + 6997) = *(_BYTE *)v3; /*0xfffc26b4*/
  if ( (*(_BYTE *)(a1 + 1) & 2) == 0 && (*(_BYTE *)(v3 + 37) & 8) == 0 ) /*0xfffc26c4*/
    *(_BYTE *)(a1 + 3755) = *(_BYTE *)(v3 + 82); /*0xfffc26c9*/
  if ( *(_BYTE *)(v3 + 14) ) /*0xfffc26cf*/
    v29 = *(_DWORD *)(v3 + 85); /*0xfffc26d5*/
  else
    v29 = v10[3]; /*0xfffc26da*/
  *(_DWORD *)(a1 + 10290) = v29; /*0xfffc26dd*/
  *(_BYTE *)(a1 + 6999) = *(_BYTE *)(v3 + 84); /*0xfffc26e6*/
  v54 = 0; /*0xfffc26ee*/
  v56 = 0; /*0xfffc26f1*/
  v55 = 0; /*0xfffc26f4*/
  v53 = 0; /*0xfffc26f7*/
  v51 = (_BYTE *)(v3 + 89); /*0xfffc26fd*/
  v47 = 3; /*0xfffc2700*/
  do /*0xfffc2829*/
  {
    if ( (*(_BYTE *)(a1 + 1) & 2) == 0 && (*(_BYTE *)(v3 + 37) & 8) == 0 ) /*0xfffc2711*/
      *(_BYTE *)(v54 + a1 + 5512) = *v51; /*0xfffc271b*/
    for ( i = 0; i < *(_BYTE *)(a1 + 16); *(_DWORD *)(v32 + 7746) = v35 ) /*0xfffc2722*/
    {
      if ( (*(_BYTE *)(a1 + 1) & 2) == 0 && (*(_BYTE *)(v3 + 37) & 8) == 0 ) /*0xfffc273a*/
      {
        v30 = v54 + 184 * i + a1; /*0xfffc2759*/
        *(_BYTE *)(v30 + 5576) = *(_BYTE *)(v56 + 14 * i + v3 + 92); /*0xfffc2762*/
        if ( i && *(_BYTE *)(v30 + 5392) ) /*0xfffc2766*/
          *(_BYTE *)(v30 + 5576) = 1; /*0xfffc276f*/
        v10 = a2; /*0xfffc2772*/
      }
      if ( *(_BYTE *)(v3 + 79) ) /*0xfffc2775*/
      {
        v31 = v56 + 14 * i + v3; /*0xfffc2787*/
        v32 = a1 + v53 + 212 * i; /*0xfffc2799*/
        *(_WORD *)(v32 + 7734) = *(_WORD *)(v31 + 93); /*0xfffc279b*/
        v33 = *(_WORD *)(v31 + 95); /*0xfffc27a2*/
      }
      else
      {
        v34 = (char *)v10 + 14 * i + 14 * v55; /*0xfffc27b0*/
        v32 = a1 + v53 + 212 * i; /*0xfffc27c2*/
        *(_WORD *)(v32 + 7734) = *((_WORD *)v34 + 9); /*0xfffc27c4*/
        v33 = *((_WORD *)v34 + 10); /*0xfffc27cb*/
      }
      *(_WORD *)(v32 + 7736) = v33; /*0xfffc27cf*/
      v10 = a2; /*0xfffc27da*/
      if ( *(_BYTE *)(v3 + 80) ) /*0xfffc27d6*/
        v35 = *(_DWORD *)(v56 + 14 * i + v3 + 97); /*0xfffc27e5*/
      else
        v35 = *(_DWORD *)((char *)a2 + 14 * i + 14 * v55 + 22); /*0xfffc27f3*/
      ++i; /*0xfffc27f7*/
    }
    v55 += 2; /*0xfffc280c*/
    v56 += 30; /*0xfffc2810*/
    v51 += 30; /*0xfffc2814*/
    v54 += 430; /*0xfffc2818*/
    v53 += 1068; /*0xfffc281f*/
    --v47; /*0xfffc2826*/
  }
  while ( v47 ); /*0xfffc2829*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc282f*/
  {
    v36 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 0, 0, 0); /*0xfffc2847*/
    v37 = v36 & 0xFFF8FFFF; /*0xfffc284e*/
    if ( (_WORD)v36 == 0x8086 ) /*0xfffc285c*/
    {
      v38 = *(_BYTE *)(a1 + 6997); /*0xfffc2869*/
      *(_DWORD *)(a1 + 3773) = v37; /*0xfffc2873*/
      v46 = v37; /*0xfffc2879*/
      v39 = sub_FFFC4E96(a1, v38, 0, 0, 8); /*0xfffc287e*/
      if ( v37 == 742424710 && v39 == 3 ) /*0xfffc2890*/
        v39 = 2; /*0xfffc2892*/
      *(_BYTE *)(a1 + 3768) = v39; /*0xfffc2894*/
    }
    else
    {
      *(_BYTE *)(a1 + 3755) = 0; /*0xfffc285e*/
    }
    v10 = a2; /*0xfffc289a*/
    v3 = a3; /*0xfffc289d*/
  }
  qmemcpy((void *)(a1 + 178), v10 + 25, 0x32Au); /*0xfffc28b5*/
  *(_BYTE *)(a1 + 21) = 39; /*0xfffc28b9*/
  *(_WORD *)(a1 + 48) = 570; /*0xfffc28bd*/
  if ( v46 == 745570438 ) /*0xfffc28c3*/
  {
    *(_BYTE *)(a1 + 22) = 99; /*0xfffc28c5*/
    *(_WORD *)(a1 + 52) = 724; /*0xfffc28c9*/
  }
  else
  {
    *(_BYTE *)(a1 + 22) = 77; /*0xfffc28d1*/
    *(_WORD *)(a1 + 52) = 582; /*0xfffc28d5*/
  }
  v40 = 0; /*0xfffc28db*/
  v15 = *(_BYTE *)(a1 + 22) == 0; /*0xfffc28dd*/
  *(_WORD *)(a1 + 50) = 5635; /*0xfffc28e0*/
  if ( !v15 ) /*0xfffc28e6*/
  {
    do /*0xfffc2907*/
    {
      v41 = 3 * (unsigned __int16)v40; /*0xfffc28eb*/
      *(_WORD *)(v41 + a1 + 1720) = *(_WORD *)&byte_FFFDCBA8[v41]; /*0xfffc28fb*/
      *(_BYTE *)(v41 + a1 + 1722) = byte_FFFDCBA8[v41 + 2]; /*0xfffc28fd*/
      ++v40; /*0xfffc2903*/
    }
    while ( (unsigned __int16)v40 < *(unsigned __int8 *)(a1 + 22) ); /*0xfffc2907*/
  }
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(a1 + 48); *(_BYTE *)(v43 + a1 + 2019) = byte_FFFDCCD1[v43 + 2] ) /*0xfffc290b*/
  {
    v43 = 3 * (unsigned __int16)j; /*0xfffc2914*/
    *(_WORD *)(v43 + a1 + 2017) = *(_WORD *)&byte_FFFDCCD1[v43]; /*0xfffc2924*/
    ++j; /*0xfffc2926*/
  }
  v44 = *(_BYTE *)(v3 + 5); /*0xfffc292e*/
  if ( v44 && (v44 <= 2u || v44 == 4 || v44 == 6) ) /*0xfffc293f*/
  {
    *(_BYTE *)(a1 + 4) = v44; /*0xfffc2941*/
  }
  else
  {
    *(_BYTE *)(a1 + 4) = 6; /*0xfffc294d*/
    sub_FFFD9412(a1, 1, 0, -1); /*0xfffc2951*/
  }
  *(_DWORD *)(a1 + 1686) = *(_DWORD *)(a3 + 44); /*0xfffc2965*/
  *(_DWORD *)(a1 + 1690) = *(_DWORD *)(a3 + 48); /*0xfffc2966*/
  *(_WORD *)(a1 + 1694) = *(_WORD *)(a3 + 52); /*0xfffc296c*/
  *(_DWORD *)(a1 + 1696) = *(_DWORD *)(a3 + 54); /*0xfffc2975*/
  *(_DWORD *)(a1 + 1700) = *(_DWORD *)(a3 + 58); /*0xfffc2981*/
  if ( (sub_FFFC4EEF(a1, 0, 20, 0, 156) & 0x2000000) != 0 ) /*0xfffc2994*/
  {
    v63 = (unsigned __int8)sub_FFFC4E96(a1, 0, 20, 0, 352); /*0xfffc29b4*/
    if ( (unsigned __int8)sub_FFFC4E96(a1, 0, 20, 0, 353) >= v63 ) /*0xfffc29c7*/
      *(_BYTE *)(a1 + 6) = v63; /*0xfffc29c9*/
  }
  return 0; /*0xfffc29cc*/
}

/* 0xfffc29d3 sub_FFFC29D3 */
unsigned int __usercall sub_FFFC29D3@<eax>(
        int a1@<esi>,
        __m128i *a2,
        int a3,
        unsigned int a4,
        unsigned __int8 a5,
        char a6)
{
  unsigned int v10; // ecx
  __m128i *v11; // edi
  unsigned int result; // eax
  __m128i v13; // xmm0
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __m128i v20; // xmm3
  __m128i *v21; // edi
  unsigned int i; // ecx
  __m128i v24; // [esp+8h] [ebp-10h]

  _CF = a5 < 4u; /*0xfffc29df*/
  _OF = __OFSUB__(a5, 4); /*0xfffc29df*/
  _ZF = a5 == 4; /*0xfffc29df*/
  _SF = a5 - 4 < 0; /*0xfffc29df*/
  if ( a5 <= 4u ) /*0xfffc29e2*/
  {
    __asm { pushfw } /*0xfffc2b74*/
    v21 = a2; /*0xfffc2b78*/
    result = a3; /*0xfffc2b7b*/
    if ( a5 == 4 ) /*0xfffc2b85*/
    {
      memset32(a2, a3, a4 >> 2); /*0xfffc2b8a*/
    }
    else if ( a5 == 2 ) /*0xfffc2b92*/
    {
      for ( i = a4 >> 1; i; --i ) /*0xfffc2b94*/
      {
        v21->m128i_i16[0] = a3; /*0xfffc2b96*/
        v21 = (__m128i *)((char *)v21 + 2); /*0xfffc2b96*/
      }
    }
    else
    {
      while ( a5 != 1 ) /*0xfffc2b9f*/
        ; /*0xfffc2b9f*/
      memset(a2, a3, a4); /*0xfffc2ba5*/
    }
    __asm { popfw } /*0xfffc2ba8*/
  }
  else
  {
    if ( a6 ) /*0xfffc29ee*/
    {
      v24.m128i_i64[1] = 2; /*0xfffc2a0e*/
      v24.m128i_i64[0] = 1; /*0xfffc2a19*/
    }
    else
    {
      v24.m128i_i32[3] = a3; /*0xfffc29f3*/
      v24.m128i_i32[2] = a3; /*0xfffc29f9*/
      v24.m128i_i32[1] = a3; /*0xfffc29ff*/
      v24.m128i_i32[0] = a3; /*0xfffc2a05*/
    }
    v10 = a4; /*0xfffc2a22*/
    v11 = a2; /*0xfffc2a25*/
    result = a3; /*0xfffc2a28*/
    while ( v10 ) /*0xfffc2a2e*/
    {
      if ( ((unsigned __int8)v11 & 3) == 0 ) /*0xfffc2a3b*/
      {
        result = v10 >> 6; /*0xfffc2a45*/
        if ( v10 >> 6 ) /*0xfffc2a45*/
        {
          v13 = v24; /*0xfffc2a51*/
          if ( a6 ) /*0xfffc2a5a*/
          {
            do /*0xfffc2b41*/
            {
              _mm_stream_si128(v11, v13); /*0xfffc2a7a*/
              v14 = _mm_xor_si128(_mm_slli_epi64(v13, 1u), v13); /*0xfffc2a8f*/
              v15 = _mm_or_si128( /*0xfffc2aa6*/
                      _mm_slli_epi64(v13, 2u),
                      _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v14, 3u), v14), 0x3Eu));
              _mm_stream_si128(v11 + 1, v15); /*0xfffc2aaa*/
              v16 = _mm_xor_si128(_mm_slli_epi64(v15, 1u), v15); /*0xfffc2ac0*/
              v17 = _mm_or_si128( /*0xfffc2ad7*/
                      _mm_slli_epi64(v15, 2u),
                      _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v16, 3u), v16), 0x3Eu));
              _mm_stream_si128(v11 + 2, v17); /*0xfffc2adb*/
              v18 = _mm_xor_si128(_mm_slli_epi64(v17, 1u), v17); /*0xfffc2af1*/
              v19 = _mm_or_si128( /*0xfffc2b08*/
                      _mm_slli_epi64(v17, 2u),
                      _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v18, 3u), v18), 0x3Eu));
              _mm_stream_si128(v11 + 3, v19); /*0xfffc2b0c*/
              v20 = _mm_xor_si128(_mm_slli_epi64(v19, 1u), v19); /*0xfffc2b22*/
              v13 = _mm_or_si128( /*0xfffc2b39*/
                      _mm_slli_epi64(v19, 2u),
                      _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v20, 3u), v20), 0x3Eu));
              v11 += 4; /*0xfffc2b3d*/
              --result; /*0xfffc2b40*/
            }
            while ( result ); /*0xfffc2b41*/
          }
          else
          {
            do /*0xfffc2a73*/
            {
              _mm_stream_si128(v11, v24); /*0xfffc2a5c*/
              _mm_stream_si128(v11 + 1, v24); /*0xfffc2a60*/
              _mm_stream_si128(v11 + 2, v24); /*0xfffc2a65*/
              _mm_stream_si128(v11 + 3, v24); /*0xfffc2a6a*/
              v11 += 4; /*0xfffc2a6f*/
              --result; /*0xfffc2a72*/
            }
            while ( result ); /*0xfffc2a73*/
          }
          _m_empty(); /*0xfffc2b47*/
        }
        while ( 1 ) /*0xfffc2b49*/
        {
          v10 &= 0x3Fu; /*0xfffc2b49*/
          if ( v10 < 4 ) /*0xfffc2b4f*/
            break; /*0xfffc2b4f*/
          result = a3; /*0xfffc2b51*/
          v11->m128i_i32[0] = a3; /*0xfffc2b54*/
          LOBYTE(v10) = v10 - 4; /*0xfffc2b56*/
          a1 += 4; /*0xfffc2b59*/
          v11 = (__m128i *)((char *)v11 + 4); /*0xfffc2b5c*/
        }
        while ( v10 ) /*0xfffc2b64*/
        {
          result = a3; /*0xfffc2b66*/
          v11->m128i_i8[0] = a3; /*0xfffc2b69*/
          --v10; /*0xfffc2b6b*/
          ++a1; /*0xfffc2b6c*/
          v11 = (__m128i *)((char *)v11 + 1); /*0xfffc2b6d*/
        }
        return result; /*0xfffc2b64*/
      }
      v11->m128i_i8[0] = a3; /*0xfffc2a3d*/
      --v10; /*0xfffc2a3f*/
      v11 = (__m128i *)((char *)v11 + 1); /*0xfffc2a40*/
    }
  }
  return result; /*0xfffc2baa*/
}

/* 0xfffc2bae sub_FFFC2BAE */
int __cdecl sub_FFFC2BAE(const __m128i *a1, int a2, unsigned int a3, char a4, char a5)
{
  unsigned int v8; // eax
  const __m128i *v9; // edi
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __m128i v15; // xmm3
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __m128i v18; // xmm3
  __m128i v19; // xmm0
  __m128i v20; // xmm2
  __m128i v21; // xmm3
  __int32 *v22; // edi
  unsigned int v23; // ecx
  unsigned int v25; // ecx
  bool v26; // zf
  unsigned int v27; // ecx
  bool v28; // zf
  int v31; // [esp+8h] [ebp-14h]
  __m128i v32; // [esp+Ch] [ebp-10h]

  v31 = 1; /*0xfffc2bb6*/
  v32.m128i_i64[1] = 2; /*0xfffc2bc1*/
  _CF = 0; /*0xfffc2bc8*/
  _OF = 0; /*0xfffc2bc8*/
  _ZF = 1; /*0xfffc2bc8*/
  _SF = 0; /*0xfffc2bc8*/
  v32.m128i_i64[0] = 1; /*0xfffc2bcc*/
  __asm { pushfw } /*0xfffc2bd3*/
  if ( !a5 ) /*0xfffc2bdc*/
  {
    v22 = (__int32 *)a1; /*0xfffc2cfc*/
    v23 = a3; /*0xfffc2d02*/
    if ( a4 == 4 ) /*0xfffc2d09*/
    {
      v25 = a3 >> 2; /*0xfffc2d0b*/
      _ZF = a3 >> 2 == 0; /*0xfffc2d0b*/
      do /*0xfffc2d0e*/
      {
        if ( !v25 ) /*0xfffc2d0e*/
          break; /*0xfffc2d0e*/
        _ZF = *v22++ == a2; /*0xfffc2d0e*/
        --v25; /*0xfffc2d0e*/
      }
      while ( _ZF ); /*0xfffc2d0e*/
      if ( !_ZF ) /*0xfffc2d10*/
        goto LABEL_24; /*0xfffc2d10*/
    }
    else if ( a4 == 2 ) /*0xfffc2d18*/
    {
      v27 = a3 >> 1; /*0xfffc2d1a*/
      v26 = a3 >> 1 == 0; /*0xfffc2d1a*/
      do /*0xfffc2d1c*/
      {
        if ( !v27 ) /*0xfffc2d1c*/
          break; /*0xfffc2d1c*/
        v26 = *v22++ == a2; /*0xfffc2d1c*/
        --v27; /*0xfffc2d1c*/
      }
      while ( v26 ); /*0xfffc2d1c*/
      if ( !v26 ) /*0xfffc2d1e*/
        goto LABEL_24; /*0xfffc2d1e*/
    }
    else
    {
      v28 = a4 == 1; /*0xfffc2d22*/
      while ( a4 != 1 ) /*0xfffc2d26*/
        ; /*0xfffc2d26*/
      do /*0xfffc2d2c*/
      {
        if ( !v23 ) /*0xfffc2d2c*/
          break; /*0xfffc2d2c*/
        v28 = *v22++ == a2; /*0xfffc2d2c*/
        --v23; /*0xfffc2d2c*/
      }
      while ( v28 ); /*0xfffc2d2c*/
      if ( !v28 ) /*0xfffc2d2e*/
        goto LABEL_24; /*0xfffc2d2e*/
    }
LABEL_23:
    v31 = 0; /*0xfffc2d32*/
    goto LABEL_24; /*0xfffc2d32*/
  }
  v8 = a3 >> 6; /*0xfffc2be5*/
  v9 = a1; /*0xfffc2be8*/
  v10 = v32; /*0xfffc2beb*/
  while ( 1 ) /*0xfffc2bf8*/
  {
    v11 = _mm_sad_epu8(v10, _mm_load_si128(v9)); /*0xfffc2bf8*/
    v12 = _mm_xor_si128(_mm_slli_epi64(v10, 1u), v10); /*0xfffc2c0d*/
    v13 = _mm_or_si128(_mm_slli_epi64(v10, 2u), _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v12, 3u), v12), 0x3Eu)); /*0xfffc2c24*/
    v14 = _mm_or_si128(v11, _mm_sad_epu8(v13, _mm_load_si128(v9 + 1))); /*0xfffc2c35*/
    v15 = _mm_xor_si128(_mm_slli_epi64(v13, 1u), v13); /*0xfffc2c4a*/
    v16 = _mm_or_si128(_mm_slli_epi64(v13, 2u), _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v15, 3u), v15), 0x3Eu)); /*0xfffc2c61*/
    v17 = _mm_or_si128(v14, _mm_sad_epu8(v16, _mm_load_si128(v9 + 2))); /*0xfffc2c72*/
    v18 = _mm_xor_si128(_mm_slli_epi64(v16, 1u), v16); /*0xfffc2c87*/
    v19 = _mm_or_si128(_mm_slli_epi64(v16, 2u), _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v18, 3u), v18), 0x3Eu)); /*0xfffc2c9e*/
    v20 = _mm_or_si128(v17, _mm_sad_epu8(v19, _mm_load_si128(v9 + 3))); /*0xfffc2caf*/
    v21 = _mm_xor_si128(_mm_slli_epi64(v19, 1u), v19); /*0xfffc2cc4*/
    v10 = _mm_or_si128(_mm_slli_epi64(v19, 2u), _mm_srli_epi64(_mm_xor_si128(_mm_slli_epi64(v21, 3u), v21), 0x3Eu)); /*0xfffc2cdb*/
    if ( _mm_cvtsi128_si32(_mm_or_si128(v20, _mm_shuffle_epi32(v20, 78))) ) /*0xfffc2ce8*/
      break; /*0xfffc2ce8*/
    v9 += 4; /*0xfffc2cf0*/
    if ( !--v8 ) /*0xfffc2cf4*/
      goto LABEL_23; /*0xfffc2cf4*/
  }
LABEL_24:
  _m_empty(); /*0xfffc2d39*/
  __asm { popfw } /*0xfffc2d41*/
  return v31; /*0xfffc2d46*/
}

/* 0xfffc2d4a sub_FFFC2D4A */
unsigned int __cdecl sub_FFFC2D4A(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  unsigned __int8 *v7; // edx
  int v8; // eax
  _BYTE *v9; // ecx
  int v10; // edi
  int v11; // edi
  char v12; // al
  unsigned __int8 v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned __int8 v18; // cl
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int result; // eax
  unsigned int v29; // [esp+Ch] [ebp-28h]
  int v30; // [esp+10h] [ebp-24h]
  int v31; // [esp+14h] [ebp-20h]
  int v32; // [esp+18h] [ebp-1Ch]
  int v33; // [esp+1Ch] [ebp-18h]
  int v34; // [esp+20h] [ebp-14h]
  unsigned int v35; // [esp+20h] [ebp-14h]
  unsigned __int8 v36; // [esp+30h] [ebp-4h]
  unsigned __int8 v37; // [esp+31h] [ebp-3h]
  unsigned __int8 v38; // [esp+32h] [ebp-2h]
  unsigned __int8 v39; // [esp+33h] [ebp-1h]
  int v40; // [esp+40h] [ebp+Ch]
  unsigned int v41; // [esp+40h] [ebp+Ch]
  unsigned int v42; // [esp+40h] [ebp+Ch]
  unsigned __int8 v43; // [esp+43h] [ebp+Fh]
  char v44; // [esp+43h] [ebp+Fh]
  unsigned __int8 v45; // [esp+47h] [ebp+13h]
  int v46; // [esp+48h] [ebp+14h]

  v4 = (_DWORD *)(212 * a4 + 3297 * a2 + a1 + 1068 * a3 + 7730); /*0xfffc2d88*/
  v5 = 3049 * a2; /*0xfffc2d93*/
  v6 = v5 + 430 * a3; /*0xfffc2d99*/
  v7 = (unsigned __int8 *)(v6 + 184 * a4 + a1 + 5574); /*0xfffc2d9d*/
  v8 = *(unsigned __int8 *)(v6 + 184 * a4 + a1 + 5577); /*0xfffc2da4*/
  v40 = v6; /*0xfffc2da8*/
  v9 = (_BYTE *)(v8 + a1 + 4 * v8); /*0xfffc2dae*/
  v45 = v9[1086]; /*0xfffc2db6*/
  v36 = v9[1087] + v9[1088] - 23; /*0xfffc2dcb*/
  if ( v45 == 4 ) /*0xfffc2dce*/
    v36 = v9[1087] + v9[1088] - 24; /*0xfffc2dd2*/
  v10 = a1 + v5; /*0xfffc2dd5*/
  v37 = *(_BYTE *)(v10 + 3757); /*0xfffc2ddd*/
  v34 = v10; /*0xfffc2de3*/
  v11 = v40 + a1; /*0xfffc2de6*/
  v38 = *(_BYTE *)(v40 + a1 + 5514); /*0xfffc2def*/
  v12 = *v7; /*0xfffc2df2*/
  v39 = *v7; /*0xfffc2df4*/
  v43 = 0; /*0xfffc2df7*/
  while ( (v12 & 1) == 0 ) /*0xfffc2e0a*/
    v12 = v39 >> ++v43; /*0xfffc2e06*/
  v13 = 64; /*0xfffc2e10*/
  if ( (v7[16] & 8) != 0 ) /*0xfffc2e12*/
    v13 = 72; /*0xfffc2e14*/
  v14 = v43; /*0xfffc2e27*/
  v4[36] = v39 * (v13 / (int)v45); /*0xfffc2e32*/
  v4[28] = dword_FFFDB48C[2 * v45 + v45 + v43]; /*0xfffc2e44*/
  if ( !*(_BYTE *)(a1 + 3734) ) /*0xfffc2e47*/
  {
    v44 = 1; /*0xfffc2e58*/
    if ( v45 == 4 && v39 == 4 ) /*0xfffc2e62*/
      v44 = 2; /*0xfffc2e64*/
    v15 = v45 >> 3; /*0xfffc2e6c*/
    v16 = v37 + v15 + 2 * v37; /*0xfffc2e72*/
    v17 = dword_FFFDB320[v37] /*0xfffc2ea2*/
        + dword_FFFDB33C[2 * v37]
        + dword_FFFDB374[2 * v15 + v15 + v14]
        + dword_FFFDB38C[2 * v16 + v16 + v39];
    v18 = a4 + v38; /*0xfffc2eac*/
    if ( v38 < 3u ) /*0xfffc2eb3*/
      --v18; /*0xfffc2eb5*/
    v19 = v17 + dword_FFFDB2BC[2 * v18 + v18 + v39]; /*0xfffc2ec9*/
    v4[29] = v19; /*0xfffc2ecf*/
    if ( (unsigned __int8)v44 > 1u ) /*0xfffc2ed2*/
      v4[29] = v17 + v19 + dword_FFFDB308[v18]; /*0xfffc2edf*/
  }
  v20 = v37 + v38 + 2 * v37; /*0xfffc2ef6*/
  v21 = (67 * (unsigned int)v45) >> 3; /*0xfffc2f0a*/
  v22 = v14 + 2 * v20 + v20; /*0xfffc2f1d*/
  v4[30] = v21 * dword_FFFDB4A4[v22] / 0x64; /*0xfffc2f26*/
  v4[31] = v21 * (v38 - 1) * dword_FFFDB69C[v22] / 0x64; /*0xfffc2f3d*/
  v41 = (33 * (unsigned int)v45) >> 3; /*0xfffc2f4f*/
  v4[32] = v41 * dword_FFFDB5A0[v22] / 0x64; /*0xfffc2f5b*/
  v4[33] = (v38 - 1) * v41 * dword_FFFDB798[v22] / 0x64; /*0xfffc2f72*/
  v4[34] = dword_FFFDB8A0[4 * v36]; /*0xfffc2f87*/
  v23 = v36 + 4 * v37; /*0xfffc2f93*/
  v24 = dword_FFFDBA30[v23]; /*0xfffc2fab*/
  v46 = dword_FFFDB950[v23]; /*0xfffc2fb1*/
  v33 = dword_FFFDBB10[v23]; /*0xfffc2fba*/
  v32 = dword_FFFDBAA0[v23]; /*0xfffc2fc9*/
  v42 = *(unsigned __int16 *)(v11 + 5556); /*0xfffc2fd3*/
  v30 = *(unsigned __int16 *)(v11 + 5558); /*0xfffc2fdd*/
  v31 = dword_FFFDBB80[v23]; /*0xfffc2feb*/
  v29 = (*(_BYTE *)(v11 + 5513) & 2) != 0 ? 31200 : 62400;
  v35 = *(unsigned __int8 *)(v34 + 3756); /*0xfffc3020*/
  v25 = dword_FFFDB8E0[v23] /*0xfffc303c*/
      + dword_FFFDB9C0[v23] * (unsigned int)*(unsigned __int16 *)(v11 + 5562) / v42
      - v24 * (unsigned int)*(unsigned __int16 *)(v11 + 5562) / v42
      - dword_FFFDB9C0[v23];
  v26 = 10 * v42 * (unsigned __int8)((*(_BYTE *)(a1 + 78) & 8) != 0 ? 100 : 80);
  v4[20] = v46; /*0xfffc3055*/
  v4[21] = v24; /*0xfffc305f*/
  v27 = ((v26 / v35) >> 2) / v39; /*0xfffc3065*/
  v4[23] = v27; /*0xfffc306a*/
  v4[24] = 15375 * (v25 * v27 / 0x3E8) / 0x2710; /*0xfffc308f*/
  v4[25] = 15375 * (670 * (v33 - v24) / (unsigned int)v39 / 0x3E8) / 0x2710; /*0xfffc30b7*/
  v4[26] = 15375 * (330 * (v32 - v24) / (unsigned int)v39 / 0x3E8) / 0x2710; /*0xfffc30d8*/
  if ( (*(_BYTE *)(a1 + 78) & 8) != 0 ) /*0xfffc30e2*/
    v24 = v46; /*0xfffc30e4*/
  result = 15375 * (v30 * (v31 - v24) / v29) / 0x2710; /*0xfffc30fe*/
  v4[35] = result; /*0xfffc3100*/
  return result; /*0xfffc30f7*/
}

/* 0xfffc310a sub_FFFC310A */
unsigned int __cdecl sub_FFFC310A(
        unsigned int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        _DWORD *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  unsigned int v6; // ebx
  int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int result; // eax
  unsigned int v12; // [esp+18h] [ebp+Ch]
  unsigned int v13; // [esp+1Ch] [ebp+10h]
  unsigned int v14; // [esp+28h] [ebp+1Ch]

  v6 = a6; /*0xfffc3121*/
  v7 = 3049 * a2; /*0xfffc3125*/
  v8 = a1 + v7 + 430 * a3; /*0xfffc3131*/
  v12 = *(unsigned __int16 *)(v8 + 5562); /*0xfffc3141*/
  v13 = *(unsigned __int16 *)(v8 + 5556); /*0xfffc3147*/
  v14 = (unsigned int)a5 * a4[23] / a6; /*0xfffc3158*/
  if ( (*(_BYTE *)(a1 + 78) & 8) != 0 && v14 <= 1000 * v13 / v12 ) /*0xfffc316e*/
    v9 = a4[20] + v14 * (v12 * (a4[21] - a4[20]) / v13) / 0x3E8; /*0xfffc318c*/
  else
    v9 = a4[21]; /*0xfffc3191*/
  v10 = a4[28] /*0xfffc31f7*/
      + a4[36]
      * ((unsigned int)a5 * (a4[30] + a4[31] + a4[32] + a4[33]) / v6
       + a4[34] * (15375 * v9 / 0x2710 + a4[35] + (unsigned int)a5 * (a4[24] + a4[25] + a4[26]) / v6) / 0x64);
  result = a1; /*0xfffc31fa*/
  a4[2] = v10; /*0xfffc31fd*/
  if ( !*(_BYTE *)(a1 + 3734) ) /*0xfffc3200*/
  {
    result = a4[29] + (unsigned int)a5 * dword_FFFDB340[2 * *(unsigned __int8 *)(v7 + a1 + 3757)] / v6; /*0xfffc3223*/
    a4[3] = result; /*0xfffc3226*/
  }
  return result; /*0xfffc3229*/
}

/* 0xfffc322e sub_FFFC322E */
int __cdecl sub_FFFC322E(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v5; // ebx
  _BYTE *v6; // eax
  unsigned __int16 v7; // di
  unsigned __int8 v8; // cl
  __int16 v9; // dx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  unsigned __int8 *v13; // eax
  int v14; // eax
  bool v15; // cc
  __int16 *v16; // esi
  int v17; // ecx
  int result; // eax
  int *v19; // ecx
  bool v20; // zf
  int v21; // [esp+Ch] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-18h]
  int v23; // [esp+14h] [ebp-14h]
  int v24; // [esp+18h] [ebp-10h]
  unsigned __int16 v25; // [esp+1Ch] [ebp-Ch]
  int v26; // [esp+1Ch] [ebp-Ch]
  unsigned __int16 v27; // [esp+20h] [ebp-8h]
  unsigned __int8 v28; // [esp+26h] [ebp-2h]
  unsigned __int8 v29; // [esp+27h] [ebp-1h]
  unsigned __int8 i; // [esp+33h] [ebp+Bh]
  int v31; // [esp+34h] [ebp+Ch]
  int v32; // [esp+38h] [ebp+10h]
  int v33; // [esp+38h] [ebp+10h]
  int v34; // [esp+3Ch] [ebp+14h]
  int *v35; // [esp+3Ch] [ebp+14h]

  v23 = 0; /*0xfffc323f*/
  v22 = 0; /*0xfffc3242*/
  v21 = 0; /*0xfffc3245*/
  v24 = 0; /*0xfffc3248*/
  v5 = 212 * a4 + 3297 * a2 + a1 + 1068 * a3 + 7730; /*0xfffc3291*/
  v6 = (_BYTE *)(184 * a4 + 3049 * a2 + a1 + 430 * a3 + 5574); /*0xfffc3298*/
  if ( *(_BYTE *)(a1 + 3735) ) /*0xfffc328a*/
  {
    v7 = *(_WORD *)(a1 + 1690); /*0xfffc32a8*/
    v27 = *(_WORD *)(a1 + 1694); /*0xfffc32af*/
    v25 = *(_WORD *)(a1 + 1692); /*0xfffc32ba*/
    v29 = *(_BYTE *)(a1 + 1688); /*0xfffc32c4*/
    v8 = *(_BYTE *)(a1 + 1689); /*0xfffc32c7*/
  }
  else
  {
    v7 = *(_WORD *)(a1 + 1698); /*0xfffc32d6*/
    v27 = *(_WORD *)(a1 + 1702); /*0xfffc32dd*/
    v25 = *(_WORD *)(a1 + 1700); /*0xfffc32e8*/
    v29 = *(_BYTE *)(a1 + 1696); /*0xfffc32f2*/
    v8 = *(_BYTE *)(a1 + 1697); /*0xfffc32f5*/
  }
  v9 = *(unsigned __int8 *)(a1 + 3734); /*0xfffc32fb*/
  v28 = v8; /*0xfffc3303*/
  for ( i = 0; i < 0x23u; ++i ) /*0xfffc3313*/
  {
    if ( word_FFFDBC48[i] == (((unsigned __int8)((v6[18] >> 1) | v6[19] & 0xBF) >> 6) /*0xfffc333e*/
                            | (unsigned __int16)(4 * ((32 * v9) | v6[4] & 0x1F))) )
      break; /*0xfffc333e*/
  }
  if ( i == 35 )
  {
    sub_FFFD9481(a1, 26, 0, a2, a3, a4, 35); /*0xfffc335f*/
    for ( i = 0; i < 0x23u; ++i )
    {
      if ( word_FFFDBC48[i] == (*(_BYTE *)(a1 + 3734) != 0 ? 148 : 21) )
        break; /*0xfffc3387*/
    }
  }
  v10 = 500; /*0xfffc3392*/
  if ( v7 >= 0x1F4u ) /*0xfffc339a*/
  {
    if ( v7 <= 0x1388u ) /*0xfffc33a6*/
      v34 = v7; /*0xfffc33b4*/
    else
      v34 = 5000; /*0xfffc33a8*/
  }
  else
  {
    v34 = 500; /*0xfffc339c*/
  }
  if ( v27 >= 0x15Eu ) /*0xfffc33bd*/
  {
    if ( v27 <= 0x1F4u ) /*0xfffc33cc*/
      v10 = v27; /*0xfffc33ce*/
    v32 = v10; /*0xfffc33d2*/
  }
  else
  {
    v32 = 350; /*0xfffc33bf*/
  }
  v11 = 0; /*0xfffc33d8*/
  if ( (unsigned int)word_FFFDBBF0[0] < v25 ) /*0xfffc33e1*/
  {
    do /*0xfffc33ec*/
      ++v11; /*0xfffc33e3*/
    while ( (unsigned __int16)word_FFFDBBF0[4 * v11] < v25 ); /*0xfffc33ec*/
  }
  v12 = 4 * v11; /*0xfffc33f5*/
  v13 = (unsigned __int8 *)&unk_FFFDBBF6 + 8 * v11; /*0xfffc33f8*/
  if ( v29 > (unsigned int)*(_WORD *)v13 ) /*0xfffc3401*/
  {
    v29 = *v13; /*0xfffc340c*/
    sub_FFFD9412(a1, 1, 0, -1); /*0xfffc340f*/
  }
  v14 = 1000 * v34 / (unsigned __int16)word_FFFDBBF2[v12]; /*0xfffc3428*/
  if ( v14 < 1000 ) /*0xfffc3431*/
    v23 = 1000 - v14; /*0xfffc3437*/
  v15 = v14 <= 1500; /*0xfffc343f*/
  if ( v14 < 1500 ) /*0xfffc3441*/
  {
    v22 = 1500 - v14; /*0xfffc3447*/
    v15 = v14 <= 1500; /*0xfffc344a*/
  }
  if ( !v15 ) /*0xfffc344c*/
    v21 = v14 - 1500; /*0xfffc3454*/
  if ( v14 > 3000 ) /*0xfffc345c*/
    v24 = v14 - 3000; /*0xfffc3463*/
  v16 = (__int16 *)((char *)&unk_FFFDC17C + 2 * i); /*0xfffc347f*/
  *(_DWORD *)(v5 + 24) = v29 + v28 * (unsigned __int16)word_FFFDBBF4[v12] / 1000; /*0xfffc3488*/
  v26 = v32 - 350; /*0xfffc3496*/
  v35 = (int *)(v5 + 28); /*0xfffc3499*/
  v33 = 9; /*0xfffc349c*/
  do /*0xfffc3543*/
  {
    v17 = *v16; /*0xfffc34aa*/
    v31 = v17 * v16[315] / 10; /*0xfffc34b8*/
    result = 10 * v26 * *(v16 - 630) / 150 /*0xfffc352b*/
           + (v24 * (1000 * v17 / v16[315] - 10 * v17)
            - v23 * (v17 * v16[315] * v16[315] / 1000 - v31)
            - v22 * v31
            + 10 * v21 * v17)
           / 1000
           + 10 * *(v16 - 315);
    if ( result < 0 ) /*0xfffc3530*/
      result = 0; /*0xfffc3532*/
    v19 = v35++; /*0xfffc3534*/
    v16 += 35; /*0xfffc353b*/
    v20 = v33-- == 1; /*0xfffc353e*/
    *v19 = result; /*0xfffc3541*/
  }
  while ( !v20 ); /*0xfffc3543*/
  return result; /*0xfffc3549*/
}

/* 0xfffc354e sub_FFFC354E */
_WORD *__cdecl sub_FFFC354E(int a1, int a2, _WORD *a3, _WORD *a4, _WORD *a5)
{
  unsigned __int8 v5; // bl
  int v6; // edx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  _WORD *result; // eax

  v5 = 0; /*0xfffc3557*/
  if ( *(_WORD *)(a2 + 4) != 0xFFFF ) /*0xfffc3562*/
    v5 = *(_BYTE *)(184 * (*(_WORD *)(a2 + 4) & 0xF) /*0xfffc3596*/
                  + 430 * ((*(unsigned __int16 *)(a2 + 4) >> 4) & 0xF)
                  + a1
                  + 3049 * HIBYTE(*(unsigned __int16 *)(a2 + 4))
                  + 5575) != 0;
  if ( *(_WORD *)(a2 + 6) != 0xFFFF /*0xfffc35c9*/
    && *(_BYTE *)(184 * (*(_WORD *)(a2 + 6) & 0xF)
                + 430 * ((*(unsigned __int16 *)(a2 + 6) >> 4) & 0xF)
                + a1
                + 3049 * HIBYTE(*(unsigned __int16 *)(a2 + 6))
                + 5575) )
  {
    ++v5; /*0xfffc35d3*/
  }
  v6 = *(_DWORD *)(a2 + 12); /*0xfffc35d5*/
  v7 = *(_DWORD *)(a2 + 8); /*0xfffc35d8*/
  v8 = v5 * (v7 + v6); /*0xfffc35e4*/
  v9 = (unsigned __int16)(8 * *(_WORD *)(a2 + 24)) /*0xfffc3611*/
     + (v6 * *(_DWORD *)(a2 + 28) + v7 * *(_DWORD *)(a2 + 36) + ((unsigned int)(v8 * *(_DWORD *)(a2 + 52)) >> 1))
     / 0xF424;
  if ( (unsigned __int16)v9 <= 0x7FFu ) /*0xfffc3617*/
    *a3 = v9; /*0xfffc3626*/
  else
    *a3 = 2047; /*0xfffc361c*/
  v10 = (unsigned __int16)(8 * *(_WORD *)(a2 + 24)) /*0xfffc3658*/
      + (*(_DWORD *)(a2 + 8) * *(_DWORD *)(a2 + 32)
       + *(_DWORD *)(a2 + 12) * *(_DWORD *)(a2 + 40)
       + ((unsigned int)(v8 * *(_DWORD *)(a2 + 56)) >> 1))
      / 0xF424;
  if ( (unsigned __int16)v10 <= 0x7FFu ) /*0xfffc365d*/
    *a4 = v10; /*0xfffc366a*/
  else
    *a4 = 2047; /*0xfffc3662*/
  v11 = *(unsigned __int16 *)(a2 + 24); /*0xfffc3689*/
  LOWORD(v11) = 8 * v11; /*0xfffc368f*/
  result = (_WORD *)(v11 /*0xfffc3693*/
                   + (*(_DWORD *)(a2 + 8) * *(_DWORD *)(a2 + 48)
                    + *(_DWORD *)(a2 + 12) * *(_DWORD *)(a2 + 44)
                    + ((unsigned int)(v8 * *(_DWORD *)(a2 + 60)) >> 1))
                   / 0xF424);
  if ( (unsigned __int16)result <= 0x7FFu ) /*0xfffc3698*/
  {
    *a5 = (_WORD)result; /*0xfffc36a5*/
  }
  else
  {
    *a5 = 2047; /*0xfffc369d*/
    return a5; /*0xfffc369a*/
  }
  return result; /*0xfffc36a8*/
}

/* 0xfffc36ad sub_FFFC36AD */
char __cdecl sub_FFFC36AD(_BYTE *a1, unsigned __int8 a2)
{
  char result; // al

  result = (a2 >> 1) - 3; /*0xfffc36b7*/
  a1[3732] = result; /*0xfffc36b9*/
  if ( a1[3755] ) /*0xfffc36bf*/
    a1[3757] = result; /*0xfffc36c8*/
  return result; /*0xfffc36ce*/
}

/* 0xfffc36cf sub_FFFC36CF */
int __cdecl sub_FFFC36CF(int a1)
{
  int result; // eax
  char v2; // dl
  unsigned __int8 v3; // cl

  result = a1; /*0xfffc36cf*/
  v2 = 0; /*0xfffc36d3*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffc36dd*/
  {
    v3 = 0; /*0xfffc36e5*/
    while ( !*(_BYTE *)(430 * v3 + a1 + 5512) ) /*0xfffc36f9*/
    {
      if ( ++v3 >= 3u ) /*0xfffc3700*/
        goto LABEL_8; /*0xfffc3700*/
    }
    v2 = 1; /*0xfffc3704*/
LABEL_8:
    if ( (v2 & 1) == 0 ) /*0xfffc370a*/
      *(_BYTE *)(a1 + 3758) = 0; /*0xfffc370c*/
  }
  if ( !v2 ) /*0xfffc3715*/
    return sub_FFFD934D(a1, 232, 2); /*0xfffc371f*/
  return result; /*0xfffc3727*/
}

/* 0xfffc3728 sub_FFFC3728 */
int __usercall sub_FFFC3728@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v6; // ecx

  LOWORD(a3) = (unsigned __int8)(((a4 >> 4) & 3) + 1) | 4; /*0xfffc3742*/
  LOWORD(a2) = (a5 >> 3) & 7; /*0xfffc3749*/
  LOWORD(a1) = (unsigned __int8)((a5 & 7) - 1); /*0xfffc3759*/
  v6 = a1 | (4 * (a2 | (32 * a3))); /*0xfffc375d*/
  LOBYTE(a1) = (a6 >> 3) & 7; /*0xfffc3766*/
  if ( (_BYTE)a1 == 3 ) /*0xfffc376a*/
    LOBYTE(a1) = 2; /*0xfffc376c*/
  LOWORD(a1) = (unsigned __int8)a1; /*0xfffc376e*/
  return v6 | (32 * a1); /*0xfffc3777*/
}

/* 0xfffc3778 sub_FFFC3778 */
unsigned int __cdecl sub_FFFC3778(int a1, unsigned int a2)
{
  return a2 & 0xFFFFFE07 | (2 * (a2 & 0xA8)) | (a2 >> 1) & 0xFFFF00A8; /*0xfffc379b*/
}

/* 0xfffc379c sub_FFFC379C */
char __cdecl sub_FFFC379C(int a1, char a2)
{
  return (2 * (a2 & 1)) | ((a2 & 2) != 0); /*0xfffc37ad*/
}

/* 0xfffc37ae sub_FFFC37AE */
char __cdecl sub_FFFC37AE(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5)
{
  int v6; // eax
  int v7; // esi
  char v9; // [esp+Ch] [ebp+8h]

  v6 = 430 * a3 + a1 + 3049 * a2 + 5574; /*0xfffc37cb*/
  v9 = a4; /*0xfffc37d8*/
  if ( a4 < 2u ) /*0xfffc37db*/
  {
    v7 = 184 * a4 + v6 + 25; /*0xfffc37e8*/
    do /*0xfffc3855*/
    {
      if ( *(_BYTE *)(v7 - 24) ) /*0xfffc37f1*/
      {
        if ( (*(_BYTE *)(v7 + 1) &= ~2u, *(_BYTE *)(v7 - 23) = 1, LOBYTE(v6) = *(_BYTE *)(a1 + 3731), (_BYTE)v6 != 1) /*0xfffc3811*/
          && (_BYTE)v6 != 2
          || a5 != 2 )
        {
          if ( v9 == a4 && a5 == a3 ) /*0xfffc3821*/
            LOBYTE(v6) = sub_FFFD9481(a1, 11, 0, a2, a3, v9, 255); /*0xfffc382f*/
          else
            LOBYTE(v6) = sub_FFFD9481(a1, 10, 2, a2, a3, v9, 255); /*0xfffc3840*/
        }
      }
      ++v9; /*0xfffc3848*/
      v7 += 184; /*0xfffc384b*/
    }
    while ( (unsigned __int8)v9 < 2u ); /*0xfffc3855*/
  }
  return v6; /*0xfffc3859*/
}

/* 0xfffc385c sub_FFFC385C */
void __cdecl sub_FFFC385C(_BYTE *a1)
{
  unsigned __int8 *v1; // ecx
  unsigned __int8 v2; // al
  unsigned __int8 v3; // dl
  char v4; // bl
  int v5; // ecx
  unsigned __int8 v6; // al
  _BYTE *v7; // ebx
  int v8; // edx
  bool v9; // zf
  int v10; // eax
  unsigned __int16 *v11; // ecx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // esi
  _BYTE *v16; // ebx
  int v17; // eax
  unsigned __int16 *v18; // ecx
  __int64 v19; // rax
  int v20; // esi
  unsigned __int16 v21; // bx
  _WORD v22[36]; // [esp+4h] [ebp-70h]
  int v23; // [esp+4Ch] [ebp-28h]
  int v24; // [esp+50h] [ebp-24h]
  int v25; // [esp+54h] [ebp-20h]
  int v26; // [esp+58h] [ebp-1Ch]
  _BYTE *v27; // [esp+5Ch] [ebp-18h]
  _BYTE *v28; // [esp+60h] [ebp-14h]
  unsigned __int8 *v29; // [esp+64h] [ebp-10h]
  int v30; // [esp+68h] [ebp-Ch]
  _BYTE *v31; // [esp+6Ch] [ebp-8h]
  unsigned __int8 v32; // [esp+70h] [ebp-4h]
  unsigned __int8 v33; // [esp+71h] [ebp-3h]
  unsigned __int8 v34; // [esp+72h] [ebp-2h]
  unsigned __int8 v35; // [esp+73h] [ebp-1h]

  if ( a1[3755] && a1[3758] )
  {
    v30 = 0; /*0xfffc3880*/
    v1 = a1 + 5514; /*0xfffc3885*/
    v26 = -5632 - (_DWORD)a1; /*0xfffc3898*/
    v29 = a1 + 5514; /*0xfffc389c*/
    v31 = a1 + 5632; /*0xfffc389f*/
    v24 = 3; /*0xfffc38a2*/
    do
    {
      if ( *(v1 - 2) )
      {
        v2 = (*(v1 - 1) & 8) != 0 ? 18 : 9;
        v3 = 0; /*0xfffc38c0*/
        if ( ((*(v1 - 1) & 8) != 0 ? 9 : 0) != 0xF7 )
        {
          v4 = a1[3733]; /*0xfffc38c6*/
          v5 = 0; /*0xfffc38cc*/
          do /*0xfffc38ef*/
          {
            if ( v4 || v3 != 8 && v3 != 17 ) /*0xfffc38da*/
            {
              v22[v5 + 18] = 0; /*0xfffc38dc*/
              v22[v5] = 511; /*0xfffc38e2*/
            }
            ++v3; /*0xfffc38e9*/
            ++v5; /*0xfffc38ec*/
          }
          while ( v3 < v2 ); /*0xfffc38ef*/
        }
        v1 = v29; /*0xfffc38f1*/
        v6 = *v29; /*0xfffc38f4*/
        v32 = *v29; /*0xfffc38f8*/
        if ( v32 ) /*0xfffc38fb*/
        {
          v28 = nullptr; /*0xfffc3904*/
          v27 = v31; /*0xfffc390b*/
          v25 = v6; /*0xfffc390e*/
          do /*0xfffc39cf*/
          {
            v7 = v27; /*0xfffc3911*/
            v34 = 0; /*0xfffc3914*/
            do /*0xfffc39bb*/
            {
              if ( *(v7 - 2) ) /*0xfffc3918*/
              {
                v8 = (int)&v31[(_DWORD)v28 - 58]; /*0xfffc3928*/
                v9 = *(_BYTE *)(v8 + 2) == 0; /*0xfffc392c*/
                v23 = v8; /*0xfffc3930*/
                if ( v9 && (!v34 || *v7 != *(v7 - 32)) ) /*0xfffc3940*/
                {
                  v10 = v30 + 144 * (unsigned __int8)*v7; /*0xfffc394b*/
                  v35 = 0; /*0xfffc394e*/
                  v11 = (unsigned __int16 *)&a1[v10 + 3786]; /*0xfffc3959*/
                  v12 = 0; /*0xfffc395c*/
                  while ( 1 ) /*0xfffc3963*/
                  {
                    if ( a1[3733] || v35 != 8 ) /*0xfffc3970*/
                    {
                      if ( *(_BYTE *)(v8 + 12) ) /*0xfffc3972*/
                        v13 = (*v11 + v11[36]) / 2; /*0xfffc3984*/
                      else
                        LOWORD(v13) = *v11; /*0xfffc3988*/
                      if ( (unsigned __int16)v13 < v22[v12] ) /*0xfffc3992*/
                        v22[v12] = v13; /*0xfffc3994*/
                      if ( (unsigned __int16)v13 > v22[v12 + 18] ) /*0xfffc399e*/
                        v22[v12 + 18] = v13; /*0xfffc39a0*/
                    }
                    ++v35; /*0xfffc39a3*/
                    v11 += 4; /*0xfffc39a6*/
                    ++v12; /*0xfffc39aa*/
                    if ( v35 >= 9u ) /*0xfffc39af*/
                      break; /*0xfffc39af*/
                    v8 = v23; /*0xfffc3960*/
                  }
                }
              }
              ++v34; /*0xfffc39b1*/
              v7 += 32; /*0xfffc39b4*/
            }
            while ( v34 < 4u ); /*0xfffc39bb*/
            v28 += 184; /*0xfffc39c6*/
            v27 += 184; /*0xfffc39c9*/
            --v25; /*0xfffc39cc*/
          }
          while ( v25 ); /*0xfffc39cf*/
          v1 = v29; /*0xfffc39d5*/
        }
        v33 = 0; /*0xfffc39dc*/
        if ( v32 ) /*0xfffc39e0*/
        {
          v23 = (int)&v31[v26]; /*0xfffc39ee*/
          do /*0xfffc3b08*/
          {
            v14 = 184 * v33; /*0xfffc39f8*/
            v15 = (int)&v31[v14 - 58]; /*0xfffc39fe*/
            v9 = *(_BYTE *)(v15 + 2) == 0; /*0xfffc3a02*/
            v25 = v15; /*0xfffc3a06*/
            if ( v9 ) /*0xfffc3a09*/
            {
              v16 = &a1[v23 + 5632 + v14]; /*0xfffc3a1b*/
              v34 = 0; /*0xfffc3a1e*/
              v28 = v16; /*0xfffc3a22*/
              do /*0xfffc3afa*/
              {
                if ( *(v16 - 2) && !*(_BYTE *)(v15 + 2) && (!v34 || *v16 != *(v16 - 32)) ) /*0xfffc3a44*/
                {
                  v17 = v30 + 144 * (unsigned __int8)*v16; /*0xfffc3a53*/
                  v27 = nullptr; /*0xfffc3a56*/
                  v35 = 0; /*0xfffc3a61*/
                  v18 = (unsigned __int16 *)&a1[v17 + 3786]; /*0xfffc3a65*/
                  do /*0xfffc3ae5*/
                  {
                    if ( a1[3733] || v35 != 8 ) /*0xfffc3a75*/
                    {
                      v19 = *(unsigned __int16 *)((char *)v22 + (_DWORD)v27) /*0xfffc3a86*/
                          + *(unsigned __int16 *)((char *)&v22[18] + (_DWORD)v27);
                      v20 = ((int)v19 - HIDWORD(v19)) >> 1; /*0xfffc3a8e*/
                      if ( *(_BYTE *)(v25 + 12) ) /*0xfffc3a90*/
                      {
                        v21 = (*(v18 - 1) + v18[35]) / 2 + v20 - (v18[36] + *v18) / 2; /*0xfffc3ab7*/
                        *(v18 - 1) = v21; /*0xfffc3ab9*/
                        v18[35] = v21; /*0xfffc3abd*/
                        v16 = v28; /*0xfffc3ac1*/
                        v18[36] = v20; /*0xfffc3ac4*/
                      }
                      else
                      {
                        *(v18 - 1) += v20 - *v18; /*0xfffc3ad0*/
                      }
                      *v18 = v20; /*0xfffc3ad4*/
                    }
                    ++v35; /*0xfffc3ad7*/
                    v27 += 2; /*0xfffc3ada*/
                    v18 += 4; /*0xfffc3ade*/
                  }
                  while ( v35 < 9u ); /*0xfffc3ae5*/
                  v15 = v25; /*0xfffc3ae7*/
                  v1 = v29; /*0xfffc3aea*/
                }
                ++v34; /*0xfffc3aed*/
                v16 += 32; /*0xfffc3af0*/
                v28 = v16; /*0xfffc3af7*/
              }
              while ( v34 < 4u ); /*0xfffc3afa*/
            }
            ++v33; /*0xfffc3b00*/
          }
          while ( v33 < *v1 ); /*0xfffc3b08*/
        }
      }
      v30 += 578; /*0xfffc3b0e*/
      v31 += 430; /*0xfffc3b1a*/
      v1 += 430; /*0xfffc3b1d*/
      v9 = v24-- == 1; /*0xfffc3b1f*/
      v29 = v1; /*0xfffc3b22*/
    }
    while ( !v9 );
  }
}

/* 0xfffc3b30 sub_FFFC3B30 */
char __cdecl sub_FFFC3B30(unsigned __int8 *a1, _BYTE *a2)
{
  int v3; // edi
  _BYTE *v4; // esi
  _WORD *v5; // ebx
  int v6; // edx
  __int16 *v7; // esi
  int v8; // edx
  __int16 v9; // bx
  __int16 *v10; // eax
  int v11; // edi
  _BYTE *v12; // edi
  int *v13; // esi
  int v14; // eax
  char v15; // dl
  __int16 v16; // ax
  unsigned __int8 *v17; // ecx
  int v18; // esi
  char result; // al
  int v20; // [esp+8h] [ebp-38h] BYREF
  int v21; // [esp+Ch] [ebp-34h]
  int v22; // [esp+10h] [ebp-30h] BYREF
  int v23; // [esp+14h] [ebp-2Ch]
  unsigned __int8 *v24; // [esp+18h] [ebp-28h]
  int v25; // [esp+1Ch] [ebp-24h]
  int v26; // [esp+20h] [ebp-20h]
  int v27; // [esp+24h] [ebp-1Ch]
  int v28; // [esp+28h] [ebp-18h]
  int v29; // [esp+2Ch] [ebp-14h]
  int v30; // [esp+30h] [ebp-10h]
  _WORD *v31; // [esp+34h] [ebp-Ch]
  _WORD *v32; // [esp+38h] [ebp-8h]
  _WORD *v33; // [esp+3Ch] [ebp-4h]
  int v34; // [esp+48h] [ebp+8h]

  v20 = 0; /*0xfffc3b40*/
  v21 = 0; /*0xfffc3b43*/
  v3 = 4; /*0xfffc3b44*/
  v29 = 64; /*0xfffc3b45*/
  v4 = a1; /*0xfffc3b4c*/
  do /*0xfffc3b5c*/
  {
    *v4 = (unsigned __int8)*v4 % 64; /*0xfffc3b58*/
    ++v4; /*0xfffc3b5a*/
    --v3; /*0xfffc3b5b*/
  }
  while ( v3 ); /*0xfffc3b5c*/
  v24 = a1 + 1; /*0xfffc3b61*/
  v31 = &unk_FFFDC680; /*0xfffc3b69*/
  v25 = 3; /*0xfffc3b6c*/
  do /*0xfffc3c3a*/
  {
    LOWORD(v22) = *a1 + *v31; /*0xfffc3b80*/
    v32 = &unk_FFFDC680; /*0xfffc3b84*/
    v26 = 3; /*0xfffc3b87*/
    do /*0xfffc3c2e*/
    {
      HIWORD(v22) = *v24 + *v32; /*0xfffc3b9e*/
      v33 = &unk_FFFDC680; /*0xfffc3ba2*/
      v27 = 3; /*0xfffc3ba5*/
      do /*0xfffc3c26*/
      {
        LOWORD(v23) = a1[2] + *v33; /*0xfffc3bba*/
        v5 = &unk_FFFDC680; /*0xfffc3bbe*/
        v28 = 3; /*0xfffc3bc0*/
        do /*0xfffc3c1e*/
        {
          v6 = v22; /*0xfffc3bd2*/
          HIWORD(v23) = a1[3] + *v5; /*0xfffc3bd5*/
          v34 = v22; /*0xfffc3bd9*/
          v7 = (__int16 *)&v22 + 1; /*0xfffc3bdc*/
          v30 = 3; /*0xfffc3bdf*/
          do /*0xfffc3c00*/
          {
            if ( (__int16)v6 < *v7 ) /*0xfffc3bee*/
              v6 = (unsigned __int16)*v7; /*0xfffc3bf0*/
            if ( (__int16)v34 > *v7 ) /*0xfffc3bf6*/
              v34 = (unsigned __int16)*v7; /*0xfffc3bf8*/
            ++v7; /*0xfffc3bfc*/
            --v30; /*0xfffc3bfd*/
          }
          while ( v30 ); /*0xfffc3c00*/
          v8 = v6 - v34; /*0xfffc3c02*/
          if ( (__int16)v8 < (__int16)v29 ) /*0xfffc3c09*/
          {
            v20 = v22; /*0xfffc3c11*/
            v29 = v8; /*0xfffc3c12*/
            v21 = v23; /*0xfffc3c15*/
          }
          ++v5; /*0xfffc3c19*/
          --v28; /*0xfffc3c1b*/
        }
        while ( v28 ); /*0xfffc3c1e*/
        ++v33; /*0xfffc3c20*/
        --v27; /*0xfffc3c23*/
      }
      while ( v27 ); /*0xfffc3c26*/
      ++v32; /*0xfffc3c28*/
      --v26; /*0xfffc3c2b*/
    }
    while ( v26 ); /*0xfffc3c2e*/
    ++v31; /*0xfffc3c34*/
    --v25; /*0xfffc3c37*/
  }
  while ( v25 ); /*0xfffc3c3a*/
  v9 = v20; /*0xfffc3c40*/
  v10 = (__int16 *)&v20 + 1; /*0xfffc3c45*/
  v11 = 3; /*0xfffc3c48*/
  do /*0xfffc3c58*/
  {
    if ( v9 > *v10 ) /*0xfffc3c51*/
      v9 = *v10; /*0xfffc3c53*/
    ++v10; /*0xfffc3c55*/
    --v11; /*0xfffc3c57*/
  }
  while ( v11 ); /*0xfffc3c58*/
  v12 = a1; /*0xfffc3c5c*/
  v13 = &v20; /*0xfffc3c5e*/
  v14 = 4; /*0xfffc3c61*/
  do /*0xfffc3c6c*/
  {
    v15 = *(_BYTE *)v13 - v9; /*0xfffc3c64*/
    v13 = (int *)((char *)v13 + 2); /*0xfffc3c67*/
    *v12++ = v15; /*0xfffc3c68*/
    --v14; /*0xfffc3c6b*/
  }
  while ( v14 ); /*0xfffc3c6c*/
  v16 = *a1; /*0xfffc3c6e*/
  v17 = v24; /*0xfffc3c72*/
  v18 = 3; /*0xfffc3c77*/
  do /*0xfffc3c89*/
  {
    if ( v16 < *v17 ) /*0xfffc3c81*/
      v16 = *v17; /*0xfffc3c83*/
    ++v17; /*0xfffc3c87*/
    --v18; /*0xfffc3c88*/
  }
  while ( v18 ); /*0xfffc3c89*/
  result = (unsigned __int8)v16 >> 1; /*0xfffc3c8e*/
  *a2 = result; /*0xfffc3c91*/
  return result; /*0xfffc3c90*/
}

/* 0xfffc3c96 sub_FFFC3C96 */
void __cdecl sub_FFFC3C96(_BYTE *a1)
{
  _BYTE *v1; // ecx
  _BYTE *v2; // ebx
  int v3; // esi
  int v4; // eax
  unsigned __int8 *v5; // edx
  char v6; // al
  __int16 v7; // cx
  int v8; // eax
  int v9; // esi
  unsigned __int16 v10; // di
  unsigned __int16 v11; // ax
  int v12; // eax
  unsigned __int8 *v13; // eax
  int v14; // ecx
  int v15; // esi
  unsigned __int8 v16; // al
  bool v17; // zf
  int v18; // eax
  int v19; // edi
  int v20; // eax
  unsigned __int8 *v21; // ecx
  unsigned __int8 v22; // dl
  int v23; // esi
  unsigned __int8 v24; // al
  unsigned __int8 v25; // al
  unsigned __int8 v26; // dl
  _WORD *v27; // esi
  _DWORD v28[2]; // [esp+0h] [ebp-38h]
  _DWORD v29[2]; // [esp+8h] [ebp-30h]
  int v30; // [esp+10h] [ebp-28h]
  int v31; // [esp+14h] [ebp-24h]
  int v32; // [esp+18h] [ebp-20h]
  unsigned __int8 *v33; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 *v34; // [esp+20h] [ebp-18h]
  int v35; // [esp+24h] [ebp-14h]
  int v36; // [esp+28h] [ebp-10h]
  unsigned __int8 v37[4]; // [esp+2Ch] [ebp-Ch] BYREF
  _BYTE *v38; // [esp+30h] [ebp-8h]
  unsigned __int8 v39; // [esp+35h] [ebp-3h]
  unsigned __int8 v40; // [esp+36h] [ebp-2h] BYREF
  unsigned __int8 i; // [esp+37h] [ebp-1h]

  v1 = a1; /*0xfffc3c9c*/
  if ( a1[3755] && a1[3758] )
  {
    v35 = 0; /*0xfffc3cb9*/
    v2 = a1 + 5522; /*0xfffc3cc5*/
    v32 = -10 - (_DWORD)(a1 + 5512); /*0xfffc3cd5*/
    v39 = 0; /*0xfffc3cd9*/
    v38 = a1 + 5522; /*0xfffc3cdd*/
    v34 = a1 + 5639; /*0xfffc3ce0*/
    do
    {
      if ( *(v2 - 10) )
      {
        v29[0] = 0; /*0xfffc3cf2*/
        v29[1] = 0; /*0xfffc3cf3*/
        v28[0] = 0; /*0xfffc3cf9*/
        v28[1] = 0; /*0xfffc3cfa*/
        v40 = 0; /*0xfffc3cfb*/
        v3 = 0; /*0xfffc3cff*/
        v30 = 14; /*0xfffc3d01*/
        do /*0xfffc3df0*/
        {
          if ( byte_FFFDC688[v3] == v39 && *(v2 - 8) ) /*0xfffc3d17*/
          {
            v36 = (int)(v34 - 65); /*0xfffc3d27*/
            v4 = (unsigned __int8)*(v2 - 8); /*0xfffc3d2a*/
            v33 = v34; /*0xfffc3d2e*/
            v31 = v4; /*0xfffc3d31*/
            do /*0xfffc3de4*/
            {
              if ( !*(_BYTE *)(v36 + 2) ) /*0xfffc3d37*/
              {
                v5 = v33; /*0xfffc3d41*/
                i = 0; /*0xfffc3d44*/
                do /*0xfffc3dd0*/
                {
                  if ( *(v5 - 9) /*0xfffc3d6c*/
                    && (!i || *(v5 - 7) != *(v5 - 39))
                    && (*(_BYTE *)(v36 + 12) || (unsigned __int8)byte_FFFDC689[v3] <= 8u) )
                  {
                    if ( v1[3733] || (v6 = byte_FFFDC689[v3], v6 != 8) && v6 != 17 ) /*0xfffc3d83*/
                    {
                      v7 = *(_WORD *)&v1[578 * v35 + 3782 + 144 * *(v5 - 7) + 8 * (unsigned __int8)byte_FFFDC689[v3]]; /*0xfffc3da1*/
                      if ( v7 ) /*0xfffc3dac*/
                      {
                        v8 = 2 * *v5; /*0xfffc3db1*/
                        *(_WORD *)((char *)v29 + v8) += v7; /*0xfffc3db3*/
                        ++*(_WORD *)((char *)v28 + v8); /*0xfffc3dbc*/
                        v40 = 1; /*0xfffc3dbf*/
                      }
                      v1 = a1; /*0xfffc3dc3*/
                    }
                  }
                  ++i; /*0xfffc3dc6*/
                  v5 += 32; /*0xfffc3dc9*/
                }
                while ( i < 4u ); /*0xfffc3dd0*/
              }
              v33 += 184; /*0xfffc3ddb*/
              v36 += 184; /*0xfffc3dde*/
              --v31; /*0xfffc3de1*/
            }
            while ( v31 ); /*0xfffc3de4*/
          }
          v3 += 4; /*0xfffc3dea*/
          --v30; /*0xfffc3ded*/
        }
        while ( v30 ); /*0xfffc3df0*/
        if ( v40 )
        {
          v9 = 0; /*0xfffc3e00*/
          v10 = 512; /*0xfffc3e02*/
          v36 = 0; /*0xfffc3e07*/
          v30 = 4; /*0xfffc3e0a*/
          do /*0xfffc3e43*/
          {
            v11 = *(_WORD *)((char *)v28 + v9); /*0xfffc3e11*/
            if ( v11 ) /*0xfffc3e19*/
            {
              v12 = *(unsigned __int16 *)((char *)v29 + v9) / (int)v11; /*0xfffc3e26*/
              *(_WORD *)((char *)v29 + v9) = v12; /*0xfffc3e2b*/
              if ( (unsigned __int16)v12 < v10 ) /*0xfffc3e2e*/
                v10 = v12; /*0xfffc3e30*/
              v2 = v38; /*0xfffc3e36*/
              if ( (unsigned __int16)v12 > (unsigned __int16)v36 ) /*0xfffc3e39*/
                v36 = v12; /*0xfffc3e3b*/
            }
            v9 += 2; /*0xfffc3e3f*/
            --v30; /*0xfffc3e40*/
          }
          while ( v30 ); /*0xfffc3e43*/
          v40 = ((unsigned __int16)v36 - v10) / 2; /*0xfffc3e55*/
          v13 = v37; /*0xfffc3e58*/
          v14 = 0; /*0xfffc3e5b*/
          v15 = 4; /*0xfffc3e5d*/
          do /*0xfffc3e78*/
          {
            if ( *(_WORD *)((char *)v28 + v14) ) /*0xfffc3e5e*/
              *v13 = v36 - *((_BYTE *)v29 + v14); /*0xfffc3e6d*/
            else
              *v13 = 0; /*0xfffc3e71*/
            v14 += 2; /*0xfffc3e75*/
            ++v13; /*0xfffc3e76*/
            --v15; /*0xfffc3e77*/
          }
          while ( v15 ); /*0xfffc3e78*/
          sub_FFFC3B30(v37, &v40); /*0xfffc3e82*/
          v16 = v40; /*0xfffc3e87*/
          *(v2 - 1) += v40; /*0xfffc3e8a*/
          *v2 += v16; /*0xfffc3e8d*/
          v2[1] += v16; /*0xfffc3e8f*/
          v2[2] += v16; /*0xfffc3e92*/
          v17 = *(v2 - 8) == 0; /*0xfffc3e95*/
          v40 = 0; /*0xfffc3e9b*/
          if ( !v17 )
          {
            v30 = (int)&v2[v32]; /*0xfffc3eaa*/
            do
            {
              v18 = 184 * v40; /*0xfffc3eb4*/
              v19 = (int)&v34[v18 - 65]; /*0xfffc3ebd*/
              if ( !*(_BYTE *)(v19 + 2) )
              {
                v31 = (int)&a1[v18 + 5630 + v30]; /*0xfffc3edb*/
                for ( i = 0; i < 4u; ++i )
                {
                  v20 = 32 * i; /*0xfffc3ee9*/
                  v21 = (unsigned __int8 *)(v20 + v31); /*0xfffc3eec*/
                  if ( *(_BYTE *)(v20 + v31) )
                  {
                    v22 = v37[v21[9]]; /*0xfffc3efb*/
                    v21[11] += v22; /*0xfffc3eff*/
                    v2 = v38; /*0xfffc3f06*/
                    if ( v40 == 2 && (!i || i == 1 && v38[140]) ) /*0xfffc3f17*/
                    {
                      v23 = (int)&a1[v20 + 5512 + v30]; /*0xfffc3f2d*/
                      v21[12] += (v22 + v37[*(unsigned __int8 *)(v23 + 127)]) / 2; /*0xfffc3f42*/
                      *(_BYTE *)(v23 + 130) = v21[12]; /*0xfffc3f48*/
                    }
                    else
                    {
                      v21[12] += v22; /*0xfffc3f50*/
                    }
                    v17 = (i & 1) == 0; /*0xfffc3f53*/
                    v24 = v37[v21[9]]; /*0xfffc3f5b*/
                    v21[13] = v24; /*0xfffc3f5f*/
                    if ( v17 && !v21[32] ) /*0xfffc3f64*/
                      v21[45] = v24; /*0xfffc3f6a*/
                    if ( !i || v21[2] != *(v21 - 30) )
                    {
                      v25 = *(_BYTE *)(v19 + 12) == 0 ? 9 : 18;
                      v26 = 0; /*0xfffc3fa5*/
                      if ( (*(_BYTE *)(v19 + 12) == 0 ? 0 : 9) != 0xF7 )
                      {
                        v27 = &a1[578 * v35 + 3784 + 144 * v21[2]]; /*0xfffc3fab*/
                        do /*0xfffc3ff4*/
                        {
                          if ( a1[3733] || v26 != 8 && v26 != 17 ) /*0xfffc3fc2*/
                          {
                            *(v27 - 1) += v37[v21[9]]; /*0xfffc3fce*/
                            *v27 += v37[v21[9]]; /*0xfffc3fdc*/
                            v27[1] += v37[v21[9]]; /*0xfffc3fe9*/
                          }
                          ++v26; /*0xfffc3fed*/
                          v27 += 4; /*0xfffc3fef*/
                        }
                        while ( v26 < v25 ); /*0xfffc3ff4*/
                        v2 = v38; /*0xfffc3ff6*/
                      }
                    }
                  }
                }
              }
              ++v40; /*0xfffc4006*/
            }
            while ( v40 < *(v2 - 8) );
          }
          v1 = a1; /*0xfffc4015*/
        }
      }
      ++v39; /*0xfffc4018*/
      ++v35; /*0xfffc401b*/
      v34 += 430; /*0xfffc4023*/
      v2 += 430; /*0xfffc4026*/
      v38 = v2; /*0xfffc402c*/
    }
    while ( v39 < 3u );
  }
}

/* 0xfffc403a sub_FFFC403A */
int __cdecl sub_FFFC403A(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int result; // eax
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  _BYTE *v7; // esi
  _BYTE *v8; // ecx
  char v9; // dl
  char v10; // dl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  unsigned __int8 v14; // cl
  _BYTE *v15; // edi
  _BYTE *v16; // ebx
  _BYTE *v17; // ecx
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // dl
  int v20; // [esp+10h] [ebp+8h]
  int v21; // [esp+14h] [ebp+Ch]

  result = a2; /*0xfffc403d*/
  v4 = 3049 * a2; /*0xfffc4043*/
  v5 = v4 + a1; /*0xfffc404e*/
  if ( *(_BYTE *)(v4 + a1 + 3755) ) /*0xfffc4051*/
  {
    if ( *(_BYTE *)(v5 + 3758) ) /*0xfffc405e*/
    {
      result = a3; /*0xfffc4079*/
      v6 = 430 * a3; /*0xfffc407f*/
      v7 = (_BYTE *)(v6 + v4 + a1); /*0xfffc4087*/
      if ( v7[5512] ) /*0xfffc4089*/
      {
        result = 3297 * a2 + a1 + 7086 + 1068 * a3; /*0xfffc409c*/
        v8 = (_BYTE *)(v6 + v5 + 5512); /*0xfffc409e*/
        *(_BYTE *)(result + 3) = -1; /*0xfffc40a5*/
        *(_BYTE *)(result + 4) = 0; /*0xfffc40a9*/
        v9 = v8[9]; /*0xfffc40ad*/
        if ( v9 != -1 ) /*0xfffc40b3*/
          *(_BYTE *)(result + 3) = v9; /*0xfffc40b5*/
        v10 = v8[9]; /*0xfffc40b8*/
        if ( v10 ) /*0xfffc40bd*/
          *(_BYTE *)(result + 4) = v10; /*0xfffc40bf*/
        v11 = v8[10]; /*0xfffc40c2*/
        if ( v11 < *(_BYTE *)(result + 3) ) /*0xfffc40c8*/
          *(_BYTE *)(result + 3) = v11; /*0xfffc40ca*/
        v12 = v8[11]; /*0xfffc40cd*/
        if ( v12 > *(_BYTE *)(result + 4) ) /*0xfffc40d3*/
          *(_BYTE *)(result + 4) = v12; /*0xfffc40d5*/
        v13 = v8[12]; /*0xfffc40d8*/
        if ( v13 < *(_BYTE *)(result + 3) ) /*0xfffc40de*/
          *(_BYTE *)(result + 3) = v13; /*0xfffc40e0*/
        v14 = v8[12]; /*0xfffc40e3*/
        if ( v14 > *(_BYTE *)(result + 4) ) /*0xfffc40e9*/
          *(_BYTE *)(result + 4) = v14; /*0xfffc40eb*/
        v15 = v7 + 5576; /*0xfffc40ee*/
        v16 = v7 + 5643; /*0xfffc40f4*/
        v20 = 2; /*0xfffc40fa*/
        do /*0xfffc4153*/
        {
          if ( !*v15 ) /*0xfffc4106*/
          {
            v17 = v16; /*0xfffc410b*/
            v21 = 4; /*0xfffc410d*/
            do /*0xfffc414a*/
            {
              if ( *(v17 - 13) ) /*0xfffc4114*/
              {
                v18 = *(v17 - 1); /*0xfffc411a*/
                if ( v18 < *(_BYTE *)(result + 3) ) /*0xfffc4120*/
                  *(_BYTE *)(result + 3) = v18; /*0xfffc4122*/
                v19 = *(v17 - 1); /*0xfffc4125*/
                if ( v19 > *(_BYTE *)(result + 4) ) /*0xfffc412b*/
                  *(_BYTE *)(result + 4) = v19; /*0xfffc412d*/
                if ( *v17 < *(_BYTE *)(result + 3) ) /*0xfffc4135*/
                  *(_BYTE *)(result + 3) = *v17; /*0xfffc4137*/
                if ( *v17 > *(_BYTE *)(result + 4) ) /*0xfffc413f*/
                  *(_BYTE *)(result + 4) = *v17; /*0xfffc4141*/
              }
              v17 += 32; /*0xfffc4144*/
              --v21; /*0xfffc4147*/
            }
            while ( v21 ); /*0xfffc414a*/
          }
          v15 += 184; /*0xfffc414c*/
          v16 += 184; /*0xfffc414e*/
          --v20; /*0xfffc4150*/
        }
        while ( v20 ); /*0xfffc4153*/
      }
    }
  }
  return result; /*0xfffc4156*/
}

/* 0xfffc415a sub_FFFC415A */
void __cdecl sub_FFFC415A(_BYTE *a1, unsigned __int16 *a2, _WORD *a3)
{
  _BYTE *v3; // edx
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  unsigned __int8 v6; // al
  int v7; // ecx
  unsigned __int16 v8; // cx
  bool v9; // zf
  int v10; // [esp+8h] [ebp-28h]
  _BYTE *v11; // [esp+Ch] [ebp-24h]
  int v12; // [esp+10h] [ebp-20h]
  int v13; // [esp+14h] [ebp-1Ch]
  int v14; // [esp+18h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-14h]
  _BYTE *v16; // [esp+20h] [ebp-10h]
  _BYTE *v17; // [esp+24h] [ebp-Ch]
  _WORD *v18; // [esp+28h] [ebp-8h]
  unsigned __int8 v19; // [esp+2Fh] [ebp-1h]

  if ( a1[3755] && a1[3758] )
  {
    *a3 = 255; /*0xfffc4182*/
    v3 = a1 + 5512; /*0xfffc418a*/
    *a2 = 0; /*0xfffc4190*/
    v4 = a1 + 5512; /*0xfffc4193*/
    v14 = 0; /*0xfffc4196*/
    v15 = 0; /*0xfffc4199*/
    v11 = a1 + 5512; /*0xfffc419c*/
    v10 = 3; /*0xfffc419f*/
    do
    {
      if ( *v4 )
      {
        v17 = v4 + 64; /*0xfffc41b1*/
        v16 = v4 + 118; /*0xfffc41b7*/
        v12 = 2; /*0xfffc41ba*/
        do
        {
          if ( !*v17 )
          {
            v5 = v16; /*0xfffc41cc*/
            v13 = 4; /*0xfffc41cf*/
            do
            {
              if ( *v5 )
              {
                v19 = 0; /*0xfffc41e7*/
                v6 = (v3[v14 + 1] & 8) != 0 ? 18 : 9;
                if ( ((v3[v14 + 1] & 8) != 0 ? 9 : 0) != 0xF7 )
                {
                  v7 = (int)&a1[144 * (unsigned __int8)v5[2] + 3784 + v15]; /*0xfffc4209*/
                  v18 = (_WORD *)v7; /*0xfffc420c*/
                  do /*0xfffc4254*/
                  {
                    if ( a1[3733] || v19 != 8 && v19 != 17 ) /*0xfffc4221*/
                    {
                      v8 = *(_WORD *)(v7 + 2); /*0xfffc4223*/
                      if ( v8 > *a2 ) /*0xfffc422d*/
                        *a2 = v8; /*0xfffc422f*/
                      if ( *v18 > *a3 ) /*0xfffc423e*/
                        *a3 = *v18; /*0xfffc4240*/
                    }
                    ++v19; /*0xfffc4246*/
                    v7 = (int)(v18 + 4); /*0xfffc4249*/
                    v18 += 4; /*0xfffc4251*/
                  }
                  while ( v19 < v6 ); /*0xfffc4254*/
                }
              }
              v5 += 32; /*0xfffc4256*/
              --v13; /*0xfffc4259*/
            }
            while ( v13 );
            v4 = v11; /*0xfffc4262*/
          }
          v17 += 184; /*0xfffc426a*/
          v16 += 184; /*0xfffc426d*/
          --v12; /*0xfffc4270*/
        }
        while ( v12 );
      }
      v15 += 578; /*0xfffc4279*/
      v14 += 430; /*0xfffc4285*/
      v4 += 430; /*0xfffc4288*/
      v9 = v10-- == 1; /*0xfffc428a*/
      v11 = v4; /*0xfffc428d*/
    }
    while ( !v9 );
  }
}

/* 0xfffc429b sub_FFFC429B */
int __cdecl sub_FFFC429B(int a1)
{
  int v1; // edx
  _DWORD *v2; // ecx
  int result; // eax
  _BYTE *v4; // edi

  v1 = 3; /*0xfffc42a1*/
  v2 = (_DWORD *)(a1 + 7179); /*0xfffc42a2*/
  do /*0xfffc42b7*/
  {
    result = 0; /*0xfffc42a9*/
    *v2 = 0; /*0xfffc42ad*/
    v2[1] = 0; /*0xfffc42ae*/
    v4 = v2 + 2; /*0xfffc42ae*/
    v2 += 267; /*0xfffc42af*/
    --v1; /*0xfffc42b5*/
    *v4 = 0; /*0xfffc42b6*/
  }
  while ( v1 ); /*0xfffc42b7*/
  return result; /*0xfffc42ba*/
}

/* 0xfffc42bb nullsub_2 */
void nullsub_2()
{
  ; /*0xfffc42bb*/
}

/* 0xfffc42bc sub_FFFC42BC */
int __cdecl sub_FFFC42BC(int a1, unsigned __int16 a2)
{
  int v2; // ecx
  int v3; // edx
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // edi
  char v9; // cl
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  __int16 v15; // di
  int v16; // eax
  int v17; // ecx
  unsigned __int8 *v18; // eax
  int v19; // ebx
  unsigned __int8 v20; // cl
  int v21; // edi
  int v22; // edx
  unsigned __int8 v23; // dl
  unsigned __int16 v24; // ax
  _DWORD *v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // ecx
  __int16 v30; // ax
  unsigned __int16 v31; // ax
  unsigned __int8 v32; // dl
  unsigned __int16 v33; // cx
  _DWORD *v34; // ecx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int *v38; // eax
  int *v39; // ecx
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned __int8 m; // al
  _BYTE *v45; // ecx
  char v46; // cl
  _WORD *v47; // eax
  _BYTE *v48; // edi
  char v49; // cl
  int v50; // edx
  unsigned __int8 *v51; // ecx
  _WORD *v52; // eax
  unsigned __int16 v53; // dx
  unsigned __int16 *v54; // ecx
  unsigned __int8 v55; // cl
  int v56; // edx
  _BYTE v59[2]; // [esp+Ch] [ebp-4Ch] BYREF
  _WORD v60[2]; // [esp+Eh] [ebp-4Ah] BYREF
  int v61; // [esp+12h] [ebp-46h]
  unsigned __int16 v62; // [esp+16h] [ebp-42h]
  _WORD *v63; // [esp+18h] [ebp-40h]
  int v64; // [esp+1Ch] [ebp-3Ch]
  int v65; // [esp+20h] [ebp-38h]
  int v66; // [esp+24h] [ebp-34h]
  int v67; // [esp+28h] [ebp-30h]
  int k; // [esp+2Ch] [ebp-2Ch]
  int v69; // [esp+30h] [ebp-28h]
  unsigned int v70; // [esp+34h] [ebp-24h]
  unsigned __int16 *v71; // [esp+38h] [ebp-20h]
  _WORD v72[2]; // [esp+3Ch] [ebp-1Ch]
  int v73; // [esp+40h] [ebp-18h]
  int v74; // [esp+44h] [ebp-14h]
  int v75; // [esp+48h] [ebp-10h]
  _BYTE v76[6]; // [esp+4Ch] [ebp-Ch] BYREF
  unsigned __int8 i; // [esp+52h] [ebp-6h]
  unsigned __int8 v78; // [esp+53h] [ebp-5h]
  unsigned __int8 v79; // [esp+54h] [ebp-4h]
  unsigned __int8 j; // [esp+55h] [ebp-3h]
  unsigned __int8 v81; // [esp+56h] [ebp-2h]
  unsigned __int8 v82; // [esp+57h] [ebp-1h]
  int v83; // [esp+60h] [ebp+8h]
  int v84; // [esp+60h] [ebp+8h]
  unsigned __int16 *v85; // [esp+60h] [ebp+8h]
  unsigned __int8 v86; // [esp+63h] [ebp+Bh]

  v3 = 0; /*0xfffc42c3*/
  v72[0] = 0; /*0xfffc42c5*/
  v72[1] = 0; /*0xfffc42c9*/
  v5 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffc42d1*/
  v76[0] = 0; /*0xfffc42d8*/
  v76[1] = 0; /*0xfffc42dc*/
  v82 = 0; /*0xfffc42e0*/
  if ( !v5 ) /*0xfffc42e3*/
  {
    while ( 1 ) /*0xfffc4318*/
    {
      while ( 1 ) /*0xfffc42f8*/
      {
        do /*0xfffc42f8*/
        {
          if ( !*(_WORD *)(a1 + 7016) ) /*0xfffc43e4*/
            goto LABEL_15; /*0xfffc43ec*/
          LOWORD(v2) = *(_WORD *)(a1 + 7016); /*0xfffc42ee*/
        }
        while ( !(_WORD)v2 ); /*0xfffc42f8*/
        if ( (unsigned __int16)v3 < 0x40u && (unsigned __int16)v3 + (unsigned __int16)v2 >= a2 ) /*0xfffc4318*/
          break; /*0xfffc4318*/
        v11 = v82; /*0xfffc4394*/
        v12 = v3 + v2; /*0xfffc4398*/
        *(_WORD *)(a1 + 4 * v82 + 148) = v12; /*0xfffc439a*/
        v13 = a1 + 4 * v11; /*0xfffc43a2*/
        *(_BYTE *)(v13 + 146) = 1; /*0xfffc43a5*/
        *(_BYTE *)(v13 + 147) = 1; /*0xfffc43ac*/
        *(_WORD *)(a1 + 7016) = 0; /*0xfffc43b3*/
        v14 = *(_DWORD *)(v13 + 114); /*0xfffc43bb*/
        v84 = 0; /*0xfffc43be*/
        v3 = v12; /*0xfffc43c2*/
        k = 8; /*0xfffc43c4*/
        do /*0xfffc43dc*/
        {
          v2 = v84; /*0xfffc43cb*/
          v84 += 4; /*0xfffc43ce*/
          v14 |= 1 << v2; /*0xfffc43d7*/
          --k; /*0xfffc43d9*/
        }
        while ( k ); /*0xfffc43dc*/
        *(_DWORD *)(v13 + 114) = v14; /*0xfffc43de*/
LABEL_13:
        ++v82; /*0xfffc43e1*/
      }
      v6 = v82; /*0xfffc431a*/
      *(_WORD *)(a1 + 4 * v82 + 148) = a2; /*0xfffc431e*/
      v7 = a1 + 4 * v6; /*0xfffc4326*/
      *(_BYTE *)(v7 + 146) = 1; /*0xfffc432d*/
      *(_BYTE *)(v7 + 147) = 1; /*0xfffc4334*/
      *(_WORD *)(a1 + 7016) += v3 - a2; /*0xfffc433b*/
      v8 = *(_DWORD *)(v7 + 114); /*0xfffc4342*/
      v83 = 0; /*0xfffc4345*/
      k = 8; /*0xfffc4349*/
      do /*0xfffc4361*/
      {
        v9 = v83; /*0xfffc4350*/
        v83 += 4; /*0xfffc4353*/
        v8 |= 1 << v9; /*0xfffc435c*/
        --k; /*0xfffc435e*/
      }
      while ( k ); /*0xfffc4361*/
      ++v82; /*0xfffc4363*/
      *(_DWORD *)(v7 + 114) = v8; /*0xfffc4366*/
      v2 = *(unsigned __int16 *)(a1 + 7016); /*0xfffc4370*/
      if ( v2 + *(unsigned __int16 *)(a1 + 10313) ) /*0xfffc4377*/
      {
        v10 = v82; /*0xfffc437b*/
        v3 = 64; /*0xfffc4381*/
        *(_WORD *)(a1 + 4 * v82 + 148) = 64; /*0xfffc4382*/
        *(_BYTE *)(a1 + 4 * v10 + 146) = 0; /*0xfffc438a*/
        goto LABEL_13; /*0xfffc4392*/
      }
    }
  }
LABEL_15:
  v15 = *(_WORD *)(a1 + 4 * v82 + 144); /*0xfffc43f2*/
  if ( v82 < 8u ) /*0xfffc4402*/
  {
    v16 = a1 + 4 * v82 + 146; /*0xfffc4409*/
    v17 = (unsigned __int8)(8 - v82); /*0xfffc4410*/
    do /*0xfffc441e*/
    {
      *(_WORD *)(v16 + 2) = v15; /*0xfffc4413*/
      *(_BYTE *)v16 = 0; /*0xfffc4417*/
      v16 += 4; /*0xfffc441a*/
      --v17; /*0xfffc441d*/
    }
    while ( v17 ); /*0xfffc441e*/
  }
  v79 = 0; /*0xfffc4420*/
  while ( 2 ) /*0xfffc4424*/
  {
    v5 = *(_BYTE *)(a1 + 3049 * v79 + 3755) == 0; /*0xfffc4424*/
    v73 = v79; /*0xfffc4439*/
    v67 = a1 + 3049 * v79; /*0xfffc443c*/
    if ( v5 ) /*0xfffc443f*/
      goto LABEL_117; /*0xfffc443f*/
    v18 = &v76[v79]; /*0xfffc4445*/
    v19 = 3297 * v79; /*0xfffc4449*/
    for ( i = 0; i < 8u; ++i ) /*0xfffc444f*/
    {
      v20 = *v18; /*0xfffc4453*/
      v21 = *v18; /*0xfffc4455*/
      *(_BYTE *)(a1 + v19 + 4 * v21 + 7054) = 0; /*0xfffc445d*/
      v74 = a1 + v19 + 4 * v21; /*0xfffc4464*/
      v22 = a1 + 4 * i; /*0xfffc446e*/
      v5 = *(_BYTE *)(v22 + 146) == 1; /*0xfffc4471*/
      v78 = v20; /*0xfffc4478*/
      if ( v5 ) /*0xfffc447b*/
      {
        if ( (*(_BYTE *)(v22 + 114) & 0xF) == v73 + 1 ) /*0xfffc448f*/
        {
          v71 = (unsigned __int16 *)(a1 + 4 * i + 148); /*0xfffc449f*/
          while ( 1 ) /*0xfffc44a2*/
          {
            if ( v78 ) /*0xfffc44a6*/
            {
              v85 = (unsigned __int16 *)(a1 + v19 + 4 * v21 + 7052); /*0xfffc44b7*/
              if ( *v85 <= a2 && *v71 > a2 ) /*0xfffc44c2*/
              {
                if ( *(_BYTE *)(v19 + 4 * v21 + a1 + 7050) ) /*0xfffc44c7*/
                {
                  *(_WORD *)(v19 + 4 * v21 + 7056 + a1) = 64; /*0xfffc44e2*/
                  *v18 = v78 + 1; /*0xfffc44ed*/
                }
                else
                {
                  *v85 = 64; /*0xfffc44d4*/
                }
                v72[v73] = 64; /*0xfffc44f2*/
                goto LABEL_102; /*0xfffc44f9*/
              }
            }
            v74 = a1 + v19 + 4 * v21; /*0xfffc4503*/
            *(_BYTE *)(v74 + 7054) = 1; /*0xfffc4506*/
            v86 = *(_BYTE *)(a1 + 4); /*0xfffc4510*/
            v23 = 0; /*0xfffc4516*/
            v70 = v67 + 5512; /*0xfffc451d*/
            v82 = 0; /*0xfffc4527*/
            j = 0; /*0xfffc452a*/
            v64 = v19 + a1 + 7093; /*0xfffc452d*/
            v75 = v64; /*0xfffc4530*/
            do /*0xfffc45bf*/
            {
              if ( *(_BYTE *)v70 ) /*0xfffc4536*/
              {
                v24 = *(_WORD *)v75; /*0xfffc453e*/
                if ( *(_WORD *)v75 ) /*0xfffc453e*/
                {
                  v81 = 0; /*0xfffc4548*/
                  if ( v23 ) /*0xfffc454c*/
                  {
                    do /*0xfffc455f*/
                    {
                      if ( v60[2 * v81] < v24 ) /*0xfffc4557*/
                        break; /*0xfffc4557*/
                      ++v81; /*0xfffc4559*/
                    }
                    while ( v81 < v23 ); /*0xfffc455f*/
                    if ( v23 > v81 ) /*0xfffc4564*/
                    {
                      v25 = &v59[4 * v23]; /*0xfffc456c*/
                      v26 = (unsigned __int8)(v23 - v81); /*0xfffc4570*/
                      do /*0xfffc457c*/
                      {
                        *v25 = *(v25 - 1); /*0xfffc4576*/
                        --v25; /*0xfffc4578*/
                        --v26; /*0xfffc457b*/
                      }
                      while ( v26 ); /*0xfffc457c*/
                      v23 = v82; /*0xfffc457e*/
                    }
                  }
                  v27 = 4 * v81; /*0xfffc4588*/
                  v59[v27] = j + 1; /*0xfffc458d*/
                  v59[v27 + 1] = v79 + 1; /*0xfffc4596*/
                  ++v23; /*0xfffc45a0*/
                  v60[v27 / 2] = *(_WORD *)v75; /*0xfffc45a2*/
                  v82 = v23; /*0xfffc45a7*/
                }
              }
              ++j; /*0xfffc45aa*/
              v70 += 430; /*0xfffc45ad*/
              v75 += 1068; /*0xfffc45b4*/
            }
            while ( j < 3u ); /*0xfffc45bf*/
            if ( v23 ) /*0xfffc45c7*/
              break; /*0xfffc45c7*/
LABEL_102:
            v53 = *v71; /*0xfffc4932*/
            v18 = &v76[v73]; /*0xfffc493b*/
            v78 = v76[v73]; /*0xfffc4944*/
            v21 = v78; /*0xfffc4941*/
            if ( v53 == *(_WORD *)(v19 + 4 * v78 + 7052 + a1) ) /*0xfffc4952*/
              goto LABEL_112; /*0xfffc4952*/
          }
          if ( v86 > v23 ) /*0xfffc45d0*/
          {
            v28 = (unsigned __int8)(v86 - v23); /*0xfffc45d7*/
            do /*0xfffc45de*/
            {
              --v86; /*0xfffc45da*/
              --v28; /*0xfffc45dd*/
            }
            while ( v28 ); /*0xfffc45de*/
          }
          v29 = v86; /*0xfffc45e0*/
          v30 = *(_WORD *)&v59[4 * v86 - 2]; /*0xfffc45e4*/
          v66 = v86; /*0xfffc45e9*/
          LOWORD(v75) = v30; /*0xfffc45ec*/
          v82 = 0; /*0xfffc45f0*/
          for ( j = 2; j != 0xFF; --j ) /*0xfffc45f4*/
          {
            v31 = *(_WORD *)(1068 * j + v19 + a1 + 7093); /*0xfffc4605*/
            v65 = v31; /*0xfffc4610*/
            if ( v31 ) /*0xfffc4613*/
            {
              v32 = 0; /*0xfffc4615*/
              if ( v82 ) /*0xfffc461a*/
              {
                do /*0xfffc463a*/
                {
                  v33 = v60[2 * v32]; /*0xfffc461f*/
                  if ( v33 != (_WORD)v75 && (v31 == (_WORD)v75 || v31 > v33) ) /*0xfffc4633*/
                    break; /*0xfffc4633*/
                  ++v32; /*0xfffc4635*/
                }
                while ( v32 < v82 ); /*0xfffc463a*/
                if ( v82 > v32 ) /*0xfffc463f*/
                {
                  v34 = &v59[4 * v82]; /*0xfffc464d*/
                  k = (unsigned __int8)(v82 - v32); /*0xfffc4651*/
                  do /*0xfffc465f*/
                  {
                    *v34 = *(v34 - 1); /*0xfffc4657*/
                    --v34; /*0xfffc4659*/
                    --k; /*0xfffc465c*/
                  }
                  while ( k ); /*0xfffc465f*/
                  v31 = v65; /*0xfffc4661*/
                }
              }
              v35 = 4 * v32; /*0xfffc466a*/
              v59[v35] = j + 1; /*0xfffc466f*/
              ++v82; /*0xfffc4678*/
              v59[v35 + 1] = v79 + 1; /*0xfffc467b*/
              v60[v35 / 2] = v31; /*0xfffc467f*/
              v29 = v66; /*0xfffc4684*/
            }
          }
          if ( (unsigned __int16)v75 > *(unsigned __int16 *)&v59[4 * v29 - 2] ) /*0xfffc469f*/
            v75 = *(unsigned __int16 *)&v59[4 * v29 - 2]; /*0xfffc46a1*/
          v82 = 0; /*0xfffc46a7*/
          for ( k = v29 - 1; v82 < k; ++v82 ) /*0xfffc46ae*/
          {
            v81 = 0; /*0xfffc46b0*/
            v36 = 0; /*0xfffc46b4*/
            do /*0xfffc46e7*/
            {
              v37 = 2 * v36; /*0xfffc46b8*/
              if ( v60[2 * v36] < *((_WORD *)&v61 + 2 * v36) ) /*0xfffc46c5*/
              {
                v38 = (int *)&v59[v37 * 2]; /*0xfffc46c7*/
                v39 = (int *)&v60[v37 + 1]; /*0xfffc46cd*/
                v65 = *v38; /*0xfffc46d1*/
                *v38 = *v39; /*0xfffc46d6*/
                *v39 = v65; /*0xfffc46db*/
              }
              v36 = ++v81; /*0xfffc46e0*/
            }
            while ( v81 < k ); /*0xfffc46e7*/
          }
          if ( v86 > 2u && v60[0] >= (unsigned __int16)v61 + v62 ) /*0xfffc470d*/
          {
            v86 = 2; /*0xfffc470f*/
            v75 = v61; /*0xfffc4713*/
          }
          v40 = v86; /*0xfffc471c*/
          v41 = (unsigned __int16)v72[v73]; /*0xfffc4723*/
          v65 = *v71; /*0xfffc4728*/
          v66 = v41; /*0xfffc4734*/
          if ( v41 + v86 * (unsigned __int16)v75 > v65 ) /*0xfffc473c*/
          {
            v42 = v65 - v66; /*0xfffc473e*/
            for ( v65 -= v66; ; v42 = v65 ) /*0xfffc4741*/
            {
              v75 = v42 / v40; /*0xfffc475e*/
              if ( (unsigned __int16)(v42 / v40) ) /*0xfffc475e*/
                break; /*0xfffc475e*/
              if ( !v86 ) /*0xfffc474a*/
                break; /*0xfffc474a*/
              if ( !--v86 ) /*0xfffc474f*/
                break; /*0xfffc474f*/
              v40 = v86; /*0xfffc4751*/
            }
          }
          v43 = v74; /*0xfffc4780*/
          *(_WORD *)(v19 + 4 * v21 + 7056 + a1) = v72[v73] + v75 * v86; /*0xfffc4783*/
          *(_DWORD *)(v43 + 7022) = 0; /*0xfffc4786*/
          v63 = (_WORD *)(v19 + 4 * v21 + 7056 + a1); /*0xfffc4791*/
          if ( v86 == 3 ) /*0xfffc4794*/
          {
            *(_DWORD *)(v43 + 7022) = 52495137; /*0xfffc4796*/
            m = 8; /*0xfffc47a0*/
          }
          else
          {
            for ( m = 0; m < 4u; ++m ) /*0xfffc47a4*/
            {
              if ( m >= v86 ) /*0xfffc47a9*/
                break; /*0xfffc47a9*/
              *(_DWORD *)(v74 + 7022) |= (unsigned __int8)v59[4 * m] << (4 * m); /*0xfffc47bb*/
            }
          }
          if ( m < 8u ) /*0xfffc47c9*/
          {
            v45 = *(_BYTE **)(v74 + 7022); /*0xfffc47ce*/
            v69 = 0; /*0xfffc47d4*/
            v70 = (unsigned int)v45; /*0xfffc47db*/
            k = (unsigned __int8)(8 - m); /*0xfffc47e8*/
            do /*0xfffc4806*/
            {
              v46 = v69; /*0xfffc47eb*/
              v69 += 4; /*0xfffc47ee*/
              v70 |= (v70 & (255 << v46)) << (4 * m); /*0xfffc4800*/
              --k; /*0xfffc4803*/
            }
            while ( k ); /*0xfffc4806*/
            *(_DWORD *)(v74 + 7022) = v70; /*0xfffc480e*/
          }
          v69 = 0; /*0xfffc481e*/
          *(_BYTE *)(v74 + 7055) = (v86 == 3) + 1; /*0xfffc4824*/
          v70 = v67 + 5512; /*0xfffc4832*/
          k = v64; /*0xfffc483e*/
          v47 = (_WORD *)(v19 + a1 + 7091); /*0xfffc4841*/
          v48 = (_BYTE *)(v19 + 6 * v21 + a1 + 7687); /*0xfffc4848*/
          v65 = 3; /*0xfffc484f*/
          while ( !*(_BYTE *)v70 ) /*0xfffc485c*/
          {
LABEL_97:
            ++v69; /*0xfffc48c1*/
            v70 += 430; /*0xfffc48c4*/
            k += 1068; /*0xfffc48d0*/
            v47 += 534; /*0xfffc48d3*/
            v48 += 1068; /*0xfffc48d5*/
            if ( !--v65 ) /*0xfffc48da*/
            {
              v72[v73] = *v63; /*0xfffc48ed*/
              if ( v86 ) /*0xfffc48f2*/
              {
                v50 = v86; /*0xfffc48f4*/
                v51 = v59; /*0xfffc48f8*/
                do /*0xfffc4922*/
                {
                  v52 = (_WORD *)(1068 * *v51 + a1 + 3297 * v51[1] + 2728); /*0xfffc4910*/
                  *v52 -= v75; /*0xfffc491b*/
                  v51 += 4; /*0xfffc491e*/
                  --v50; /*0xfffc4921*/
                }
                while ( v50 ); /*0xfffc4922*/
              }
              v76[v73] = v78 + 1; /*0xfffc4930*/
              goto LABEL_102; /*0xfffc4930*/
            }
          }
          v82 = 0; /*0xfffc485e*/
          while ( 1 ) /*0xfffc4862*/
          {
            if ( v82 >= v86 ) /*0xfffc4868*/
              goto LABEL_97; /*0xfffc4868*/
            if ( ((*(_DWORD *)(v74 + 7022) >> (4 * v82)) & 0xF) == v69 + 1 ) /*0xfffc4886*/
              break; /*0xfffc4886*/
            if ( ++v82 >= 4u ) /*0xfffc488f*/
              goto LABEL_97; /*0xfffc488f*/
          }
          *(_DWORD *)(v48 - 5) = (v86 * (unsigned __int16)(*v47 - *(_WORD *)k) - v66) << 10; /*0xfffc48b0*/
          if ( v86 == 3 ) /*0xfffc48b3*/
          {
            *v48 = 1; /*0xfffc48b9*/
          }
          else
          {
            *v48 = 0; /*0xfffc495e*/
            if ( v86 == 2 ) /*0xfffc4961*/
            {
              v49 = 1; /*0xfffc4967*/
              goto LABEL_96; /*0xfffc4969*/
            }
          }
          v49 = 0; /*0xfffc48bc*/
LABEL_96:
          *(v48 - 1) = v49; /*0xfffc48be*/
          goto LABEL_97; /*0xfffc48be*/
        }
        v20 = v78; /*0xfffc496e*/
      }
      if ( !v20 || *(_BYTE *)(v74 + 7050) ) /*0xfffc4978*/
      {
        v71 = (unsigned __int16 *)(a1 + 4 * i + 148); /*0xfffc49a5*/
        *(_WORD *)(v19 + 4 * v21 + 7056 + a1) = *v71; /*0xfffc49b2*/
        *(_DWORD *)(v74 + 7022) = 0; /*0xfffc49b9*/
        *v18 = v20 + 1; /*0xfffc49c2*/
        v54 = v71; /*0xfffc49c4*/
      }
      else
      {
        v54 = (unsigned __int16 *)(a1 + 4 * i + 148); /*0xfffc4984*/
        *(_WORD *)(v19 + 4 * v21 + 7052 + a1) = *v54; /*0xfffc4995*/
      }
      v72[v73] = *v54; /*0xfffc49cd*/
LABEL_112:
      ; /*0xfffc49d2*/
    }
    while ( *v18 < 8u ) /*0xfffc4a0e*/
    {
      v55 = *v18; /*0xfffc49e1*/
      v56 = *v18; /*0xfffc49e3*/
      *(_BYTE *)(v19 + 4 * v56 + a1 + 7054) = 0; /*0xfffc49e9*/
      *(_WORD *)(v19 + 4 * v56 + 7056 + a1) = *(_WORD *)(v19 + 4 * v56 + 7052 + a1); /*0xfffc4a05*/
      *v18 = v55 + 1; /*0xfffc4a09*/
    }
    if ( !*(_WORD *)(v19 + a1 + 7016) ) /*0xfffc4a10*/
    {
LABEL_117:
      if ( ++v79 ) /*0xfffc4a22*/
        return 0; /*0xfffc4a2e*/
      continue; /*0xfffc4a22*/
    }
    return 1; /*0xfffc4a2a*/
  }
}

/* 0xfffc4a34 sub_FFFC4A34 */
int __cdecl sub_FFFC4A34(int a1)
{
  int v1; // ecx
  bool v2; // zf
  int v3; // eax
  unsigned __int8 v4; // al
  int v5; // edi
  int v6; // ecx
  int v7; // ebx
  unsigned __int16 v8; // si
  int v9; // eax
  _BYTE *v10; // edi
  _BYTE *v11; // esi
  int v12; // eax
  int v13; // esi
  char v14; // bl
  int v15; // eax
  __int16 v16; // cx
  int v17; // esi
  int v18; // esi
  unsigned __int8 v19; // cl
  _BYTE *v20; // ecx
  int v21; // esi
  int v22; // edi
  int v23; // eax
  unsigned __int8 v24; // bl
  int v25; // esi
  __int16 v26; // cx
  int v27; // ebx
  _WORD *v28; // edi
  _WORD *v29; // esi
  int v30; // eax
  int v31; // esi
  unsigned __int8 *v32; // ecx
  int v33; // edi
  int v34; // esi
  char *v35; // edi
  unsigned int v36; // ecx
  int v37; // ebx
  char v38; // cf
  char *v39; // edi
  int i; // ecx
  int v42; // [esp+Ch] [ebp-7Ch]
  __int16 v43; // [esp+10h] [ebp-78h]
  _BYTE v44[5]; // [esp+12h] [ebp-76h] BYREF
  _BYTE v45[53]; // [esp+17h] [ebp-71h] BYREF
  _BYTE *v46; // [esp+4Ch] [ebp-3Ch]
  int v47; // [esp+50h] [ebp-38h]
  int v48; // [esp+54h] [ebp-34h]
  int v49; // [esp+58h] [ebp-30h]
  int v50; // [esp+5Ch] [ebp-2Ch]
  int v51; // [esp+60h] [ebp-28h]
  int v52; // [esp+64h] [ebp-24h]
  int v53; // [esp+68h] [ebp-20h]
  int v54; // [esp+6Ch] [ebp-1Ch]
  int v55; // [esp+70h] [ebp-18h]
  _BYTE *v56; // [esp+74h] [ebp-14h]
  int v57; // [esp+78h] [ebp-10h]
  int v58; // [esp+7Ch] [ebp-Ch]
  unsigned __int8 v59; // [esp+80h] [ebp-8h]
  unsigned __int8 v60; // [esp+81h] [ebp-7h]
  unsigned __int8 v61; // [esp+82h] [ebp-6h]
  unsigned __int8 v62; // [esp+83h] [ebp-5h]
  unsigned __int8 v63; // [esp+84h] [ebp-4h]
  unsigned __int8 v64; // [esp+85h] [ebp-3h]
  unsigned __int8 v65; // [esp+86h] [ebp-2h]
  unsigned __int8 v66; // [esp+87h] [ebp-1h]

  v60 = 0; /*0xfffc4a42*/
LABEL_2:
  v1 = 3049 * v60; /*0xfffc4a45*/
  v2 = *(_BYTE *)(v1 + a1 + 3755) == 0; /*0xfffc4a51*/
  v53 = v60; /*0xfffc4a58*/
  v52 = v1; /*0xfffc4a5b*/
  if ( v2 ) /*0xfffc4a5e*/
    goto LABEL_52; /*0xfffc4a5e*/
  v61 = 0; /*0xfffc4a64*/
  while ( 2 ) /*0xfffc4a67*/
  {
    v54 = v61; /*0xfffc4a67*/
    v50 = 430 * v61; /*0xfffc4a74*/
    v3 = a1 + v1 + v50; /*0xfffc4a79*/
    if ( !*(_BYTE *)(v3 + 5512) ) /*0xfffc4a81*/
      goto LABEL_51; /*0xfffc4a81*/
    v65 = *(_BYTE *)(a1 + 5); /*0xfffc4a8a*/
    v57 = 0; /*0xfffc4a98*/
    v51 = 0; /*0xfffc4a9b*/
    v62 = 0; /*0xfffc4a9e*/
    v46 = (_BYTE *)(v3 + 5576); /*0xfffc4aa1*/
    v47 = v3 + 5630; /*0xfffc4aa4*/
    do /*0xfffc4d9a*/
    {
      v4 = 0; /*0xfffc4aa9*/
      v5 = 20; /*0xfffc4aab*/
      v59 = 0; /*0xfffc4aac*/
      v64 = 0; /*0xfffc4aaf*/
      v58 = 20; /*0xfffc4ab2*/
      do /*0xfffc4b96*/
      {
        v56 = v46; /*0xfffc4ab8*/
        v6 = v47; /*0xfffc4abb*/
        v63 = 0; /*0xfffc4abe*/
        do /*0xfffc4b83*/
        {
          HIWORD(v7) = 0; /*0xfffc4ac5*/
          if ( !*v56 && *(_BYTE *)(v5 + v6 - 20) && *(_WORD *)(v5 + v6) ) /*0xfffc4adb*/
          {
            v66 = 0; /*0xfffc4ae7*/
            if ( v4 ) /*0xfffc4aea*/
            {
              v8 = *(_WORD *)(v5 + v6); /*0xfffc4aec*/
              do /*0xfffc4b04*/
              {
                if ( *(_WORD *)&v45[7 * v66 + 2] < v8 ) /*0xfffc4afc*/
                  break; /*0xfffc4afc*/
                ++v66; /*0xfffc4afe*/
              }
              while ( v66 < v4 ); /*0xfffc4b04*/
              if ( v4 > v66 ) /*0xfffc4b09*/
              {
                v7 = (unsigned __int8)(v4 - v66); /*0xfffc4b18*/
                v55 = (int)&v44[7 * v4 + 2]; /*0xfffc4b1b*/
                v9 = v55; /*0xfffc4b1e*/
                do /*0xfffc4b2d*/
                {
                  *(_DWORD *)v9 = *(_DWORD *)(v9 - 7); /*0xfffc4b25*/
                  *(_WORD *)(v9 + 4) = *(_WORD *)(v9 - 7 + 4); /*0xfffc4b26*/
                  v11 = (_BYTE *)(v9 - 7 + 6); /*0xfffc4b26*/
                  v10 = (_BYTE *)(v9 + 6); /*0xfffc4b26*/
                  v9 -= 7; /*0xfffc4b28*/
                  --v7; /*0xfffc4b2b*/
                  *v10 = *v11; /*0xfffc4b2c*/
                }
                while ( v7 ); /*0xfffc4b2d*/
              }
            }
            v12 = 7 * v66; /*0xfffc4b36*/
            v13 = v58; /*0xfffc4b39*/
            v44[v12 + 2] = v60 + 1; /*0xfffc4b3e*/
            v44[v12 + 3] = v61; /*0xfffc4b45*/
            v44[v12 + 4] = v63; /*0xfffc4b4c*/
            v45[v12] = v64; /*0xfffc4b53*/
            v14 = *(_BYTE *)(v13 + v6 - 19); /*0xfffc4b57*/
            v5 = v13; /*0xfffc4b5b*/
            LOWORD(v13) = *(_WORD *)(v13 + v6); /*0xfffc4b5d*/
            v45[v12 + 1] = v14; /*0xfffc4b61*/
            *(_WORD *)&v45[v12 + 2] = v13; /*0xfffc4b65*/
            v4 = ++v59; /*0xfffc4b6d*/
          }
          ++v63; /*0xfffc4b72*/
          v56 += 184; /*0xfffc4b7a*/
          v6 += 184; /*0xfffc4b7d*/
        }
        while ( v63 < 2u ); /*0xfffc4b83*/
        ++v64; /*0xfffc4b89*/
        v5 += 32; /*0xfffc4b8c*/
        v58 = v5; /*0xfffc4b93*/
      }
      while ( v64 < 4u ); /*0xfffc4b96*/
      if ( !v4 ) /*0xfffc4b9e*/
        break; /*0xfffc4b9e*/
      while ( v65 > v4 ) /*0xfffc4bac*/
        v65 >>= 1; /*0xfffc4ba6*/
      v15 = v65; /*0xfffc4bae*/
      v16 = *(_WORD *)&v44[7 * v65]; /*0xfffc4bbb*/
      v48 = v65; /*0xfffc4bc0*/
      LOWORD(v56) = v16; /*0xfffc4bc3*/
      if ( v65 <= 2u ) /*0xfffc4bc7*/
        goto LABEL_35; /*0xfffc4bc7*/
      v15 = v65 - 1; /*0xfffc4bcd*/
      v63 = 0; /*0xfffc4bd0*/
      v55 = v15; /*0xfffc4bd4*/
      if ( v15 <= 0 ) /*0xfffc4bd7*/
        goto LABEL_35; /*0xfffc4bd7*/
      v17 = 0; /*0xfffc4bd9*/
      v64 = 2; /*0xfffc4bdb*/
      while ( 1 ) /*0xfffc4bdf*/
      {
        v18 = 7 * v17; /*0xfffc4bdf*/
        if ( v44[v18 + 4] == v45[v18 + 6] ) /*0xfffc4bec*/
          break; /*0xfffc4bec*/
LABEL_34:
        v17 = ++v63; /*0xfffc4c42*/
        ++v64; /*0xfffc4c46*/
        if ( v63 >= v55 ) /*0xfffc4c4c*/
          goto LABEL_35; /*0xfffc4c4c*/
      }
      v19 = v64; /*0xfffc4bee*/
      if ( v44[v18 + 4] != v44[7 * v64 + 4] ) /*0xfffc4bfb*/
      {
LABEL_32:
        if ( v19 >= v65 ) /*0xfffc4c15*/
          goto LABEL_35; /*0xfffc4c15*/
        v15 = (int)&v44[v18 + 2]; /*0xfffc4c17*/
        v42 = *(_DWORD *)&v44[v18 + 2]; /*0xfffc4c26*/
        v43 = *(_WORD *)&v45[v18 + 1]; /*0xfffc4c27*/
        v44[0] = v45[v18 + 3]; /*0xfffc4c29*/
        v20 = &v44[7 * v19 + 2]; /*0xfffc4c2a*/
        *(_DWORD *)v15 = *(_DWORD *)v20; /*0xfffc4c32*/
        *(_WORD *)(v15 + 4) = *((_WORD *)v20 + 2); /*0xfffc4c33*/
        *(_BYTE *)(v15 + 6) = v20[6]; /*0xfffc4c35*/
        *(_DWORD *)v20 = v42; /*0xfffc4c3b*/
        *((_WORD *)v20 + 2) = v43; /*0xfffc4c3c*/
        v20[6] = v44[0]; /*0xfffc4c3e*/
        goto LABEL_34; /*0xfffc4c3e*/
      }
      while ( ++v19 < v65 ) /*0xfffc4bfd*/
      {
        v15 = 7 * v19; /*0xfffc4c09*/
        if ( v44[v18 + 4] != v44[v15 + 4] ) /*0xfffc4c10*/
          goto LABEL_32; /*0xfffc4c10*/
      }
LABEL_35:
      LOWORD(v15) = v65; /*0xfffc4c4e*/
      v21 = v62; /*0xfffc4c56*/
      v22 = 534 * v54; /*0xfffc4c5a*/
      LOWORD(v49) = v65; /*0xfffc4c60*/
      v57 += (_DWORD)v56 * v15; /*0xfffc4c68*/
      v23 = 3297 * v53; /*0xfffc4c72*/
      v2 = v65 == 0; /*0xfffc4c78*/
      v58 = v62; /*0xfffc4c82*/
      *(_WORD *)(3297 * v53 + 2 * (v62 + 534 * v54) + a1 + 7095) = v57; /*0xfffc4c85*/
      v66 = 0; /*0xfffc4c8d*/
      if ( v2 ) /*0xfffc4c91*/
      {
LABEL_39:
        v28 = (_WORD *)(v23 + 2 * (v22 + v66 + 4 * v21) + a1 + 7111); /*0xfffc4d17*/
        v29 = (_WORD *)(v23 + 1068 * v54 + 8 * v21 + a1 + 7111); /*0xfffc4d38*/
        v30 = (unsigned __int8)(4 - v66); /*0xfffc4d44*/
        do /*0xfffc4d52*/
        {
          *v28++ = *v29++; /*0xfffc4d4b*/
          --v30; /*0xfffc4d51*/
        }
        while ( v30 ); /*0xfffc4d52*/
      }
      else
      {
        do /*0xfffc4d0d*/
        {
          v55 = v66; /*0xfffc4c9b*/
          v24 = v45[7 * v66]; /*0xfffc4ca1*/
          v59 = v44[7 * v66 + 4]; /*0xfffc4ca9*/
          v25 = 32 * v24 + v52 + v50 + 184 * v59 + a1 + 5630; /*0xfffc4cc8*/
          v26 = v59 + v49 * (*(_WORD *)(v25 + 18) - *(_WORD *)(v25 + 20)) - v51; /*0xfffc4cdf*/
          LOWORD(v25) = v24; /*0xfffc4ce2*/
          v27 = v22 + 4 * v58 + v66++; /*0xfffc4cf2*/
          *(_WORD *)(v23 + 2 * v27 + a1 + 7111) = (v25 + 4 * v26) & 0x3FFF; /*0xfffc4cff*/
        }
        while ( v66 < v65 ); /*0xfffc4d0d*/
        if ( v66 < 4u ) /*0xfffc4d12*/
        {
          v21 = v58; /*0xfffc4d14*/
          goto LABEL_39; /*0xfffc4d14*/
        }
      }
      HIWORD(v7) = 0; /*0xfffc4d54*/
      if ( v65 ) /*0xfffc4d59*/
      {
        v31 = v48; /*0xfffc4d5b*/
        v32 = v45; /*0xfffc4d5e*/
        do /*0xfffc4d8b*/
        {
          v33 = v52 + v50 + 184 * *(v32 - 1) + 32 * *v32; /*0xfffc4d76*/
          v32 += 7; /*0xfffc4d79*/
          *(_WORD *)(v33 + a1 + 5650) -= (_WORD)v56; /*0xfffc4d87*/
          --v31; /*0xfffc4d8a*/
        }
        while ( v31 ); /*0xfffc4d8b*/
      }
      ++v62; /*0xfffc4d8d*/
      v51 = v57; /*0xfffc4d97*/
    }
    while ( v62 < 8u ); /*0xfffc4d9a*/
    v34 = v54; /*0xfffc4da0*/
    if ( v62 < 8u ) /*0xfffc4da7*/
    {
      v35 = (char *)(a1 + 3297 * v53 + 2 * (v62 + 534 * v54) + 7095); /*0xfffc4dc2*/
      v36 = (unsigned __int8)(8 - v62); /*0xfffc4dce*/
      LOWORD(v7) = v57; /*0xfffc4dd4*/
      v37 = v7 << 16; /*0xfffc4dd7*/
      LOWORD(v37) = v57; /*0xfffc4dda*/
      v38 = v36 & 1; /*0xfffc4ddd*/
      v36 >>= 1; /*0xfffc4ddd*/
      memset32(v35, v37, v36); /*0xfffc4de1*/
      v39 = &v35[4 * v36]; /*0xfffc4de1*/
      for ( i = v38; i; --i ) /*0xfffc4de3*/
      {
        *(_WORD *)v39 = v37; /*0xfffc4de5*/
        v39 += 2; /*0xfffc4de5*/
      }
    }
    if ( (_WORD)v57 == *(_WORD *)(1068 * v34 + a1 + 3297 * v53 + 7091) ) /*0xfffc4e05*/
    {
      v1 = v52; /*0xfffc4e07*/
LABEL_51:
      if ( ++v61 < 3u ) /*0xfffc4e13*/
        continue; /*0xfffc4e13*/
LABEL_52:
      if ( ++v60 ) /*0xfffc4e20*/
        return 0; /*0xfffc4e2c*/
      goto LABEL_2; /*0xfffc4e20*/
    }
    return 1; /*0xfffc4e28*/
  }
}

/* 0xfffc4e44 sub_FFFC4E44 */
int __cdecl sub_FFFC4E44(int a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // ecx

  v3 = *(unsigned __int8 *)(*(unsigned __int8 *)(3049 * a3 + a1 + 3757) + a1 + 9); /*0xfffc4e61*/
  return (a2 + v3 - 1) / v3; /*0xfffc4e70*/
}

/* 0xfffc4e96 sub_FFFC4E96 */
char __cdecl sub_FFFC4E96(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int16 a5)
{
  return *(_BYTE *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)); /*0xfffc4ec0*/
}

/* 0xfffc4ec2 sub_FFFC4EC2 */
int __cdecl sub_FFFC4EC2(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int16 a5)
{
  return *(unsigned __int16 *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)); /*0xfffc4eed*/
}

/* 0xfffc4eef sub_FFFC4EEF */
int __cdecl sub_FFFC4EEF(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int16 a5)
{
  return *(_DWORD *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)); /*0xfffc4f19*/
}

/* 0xfffc4f4e sub_FFFC4F4E */
int __cdecl sub_FFFC4F4E(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int16 a5,
        char a6)
{
  *(_BYTE *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)) = a6; /*0xfffc4f79*/
  return 0; /*0xfffc4f7d*/
}

/* 0xfffc4f7f sub_FFFC4F7F */
int __cdecl sub_FFFC4F7F(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int16 a5,
        __int16 a6)
{
  *(_WORD *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)) = a6; /*0xfffc4fab*/
  return 0; /*0xfffc4fb0*/
}

/* 0xfffc4fb2 sub_FFFC4FB2 */
int __cdecl sub_FFFC4FB2(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int16 a5,
        int a6)
{
  *(_DWORD *)(a5 | *(_DWORD *)(a1 + 86) | ((a4 | (8 * (a3 | (32 * a2)))) << 12)) = a6; /*0xfffc4fdd*/
  return 0; /*0xfffc4fe1*/
}

/* 0xfffc4fe3 sub_FFFC4FE3 */
int __cdecl sub_FFFC4FE3(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  int v4; // eax
  unsigned __int16 v5; // dx
  int v6; // eax
  int v7; // edx
  unsigned __int8 v8; // dl
  char v9; // cl
  int v11; // [esp+Ch] [ebp-4h]

  v11 = 0; /*0xfffc4fe7*/
  v4 = sub_FFFC4EEF(a1, a2, 3u, 4u, 0x5Cu); /*0xfffc4ffb*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0x5Cu, (a3 << 25) | v4 & 0xF9FFFFFF); /*0xfffc5019*/
  while ( (sub_FFFC4EEF(a1, a2, 3u, 4u, 0xF8u) & 0xC0000000) != 0 ) /*0xfffc505f*/
    ; /*0xfffc5049*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0xF8u, v5 + 0x80000000); /*0xfffc5075*/
  do /*0xfffc5090*/
    v6 = sub_FFFC4EEF(a1, a2, 3u, 4u, 0xF8u); /*0xfffc5086*/
  while ( (v6 & v7) != 0 ); /*0xfffc5090*/
  v8 = 0; /*0xfffc5099*/
  if ( *(unsigned __int8 *)(a4 + 2) - 2 > 0 ) /*0xfffc509d*/
  {
    v9 = 0; /*0xfffc509f*/
    do /*0xfffc50b0*/
    {
      v11 |= 1 << v9; /*0xfffc50a6*/
      v9 = ++v8; /*0xfffc50ab*/
    }
    while ( v8 < *(unsigned __int8 *)(a4 + 2) - 2 ); /*0xfffc50b0*/
  }
  return v11 & sub_FFFC4EEF(a1, a2, 3u, 4u, 0xFCu); /*0xfffc50ca*/
}

/* 0xfffc50cf sub_FFFC50CF */
int __cdecl sub_FFFC50CF(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // eax
  unsigned __int16 v4; // dx

  v3 = sub_FFFC4EEF(a1, a2, 3u, 4u, 0x5Cu); /*0xfffc50e4*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0x5Cu, (a3 << 25) | v3 & 0xF9FFFFFF); /*0xfffc5101*/
  while ( (sub_FFFC4EEF(a1, a2, 3u, 4u, 0xF8u) & 0xC0000000) != 0 ) /*0xfffc5145*/
    ; /*0xfffc5130*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0xF8u, v4 + 0x80000000); /*0xfffc5158*/
  return sub_FFFC4EEF(a1, a2, 3u, 4u, 0xF8u); /*0xfffc516d*/
}

/* 0xfffc5172 sub_FFFC5172 */
int __cdecl sub_FFFC5172(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int16 *a4,
        int a5,
        unsigned __int8 a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // edi
  unsigned __int16 v9; // dx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // dx
  int v13; // [esp+24h] [ebp+18h]

  v6 = sub_FFFC4EEF(a1, a2, 3u, 4u, 0x5Cu); /*0xfffc5186*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0x5Cu, (a3 << 25) | v6 & 0xF9FFFFFF); /*0xfffc51a2*/
  v7 = *((unsigned __int8 *)a4 + 2); /*0xfffc51aa*/
  v8 = *a4 + v7 - 1; /*0xfffc51ba*/
  v13 = ((a6 + 2) << (v7 - 2)) | a5; /*0xfffc51c3*/
  v9 = 248; /*0xfffc51c6*/
  while ( (sub_FFFC4EEF(a1, a2, 3u, 4u, v9) & 0xC0000000) != 0 ) /*0xfffc51df*/
    ; /*0xfffc51cb*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, 0xFCu, v13); /*0xfffc51ef*/
  sub_FFFC4FB2(a1, a2, 3u, 4u, v10, v8 + 0x40000000); /*0xfffc5202*/
  if ( !*(_BYTE *)(a1 + 33) ) /*0xfffc520a*/
  {
    while ( (sub_FFFC4EEF(a1, a2, 3u, 4u, v11) & 0x40000000) != 0 ) /*0xfffc5224*/
      ; /*0xfffc5210*/
  }
  return 0; /*0xfffc5226*/
}

/* 0xfffc5238 sub_FFFC5238 */
unsigned __int64 __cdecl sub_FFFC5238(unsigned int a1)
{
  unsigned __int64 v1; // kr00_8

  v1 = __readmsr(a1); /*0xfffc524d*/
  return __PAIR64__(v1, HIDWORD(v1)); /*0xfffc5256*/
}

/* 0xfffc527a sub_FFFC527A */
unsigned __int8 __cdecl sub_FFFC527A(unsigned __int16 a1)
{
  return __inbyte(a1); /*0xfffc528a*/
}

/* 0xfffc52ac sub_FFFC52AC */
unsigned __int8 __cdecl sub_FFFC52AC(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  result = a2; /*0xfffc52b1*/
  __outbyte(a1, a2); /*0xfffc52b5*/
  return result; /*0xfffc52b6*/
}

/* 0xfffc52c4 sub_FFFC52C4 */
unsigned int __cdecl sub_FFFC52C4(unsigned __int16 a1, unsigned int a2)
{
  unsigned int result; // eax

  result = a2; /*0xfffc52c9*/
  __outdword(a1, a2); /*0xfffc52cd*/
  return result; /*0xfffc52ce*/
}

/* 0xfffc52cf sub_FFFC52CF */
BOOL __cdecl sub_FFFC52CF(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  return (a3 == -1 || (*(_DWORD *)(3049 * a2 + a1 + 3773) & 0xFFF8FFFF) == a3) /*0xfffc5319*/
      && (*(_BYTE *)(3049 * a2 + a1 + 3768) & 0x7F) >= a4;
}

/* 0xfffc531f sub_FFFC531F */
BOOL __cdecl sub_FFFC531F(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  return (a3 == -1 || (*(_DWORD *)(3049 * a2 + a1 + 3773) & 0xFFF8FFFF) == a3) /*0xfffc5369*/
      && (*(_BYTE *)(3049 * a2 + a1 + 3768) & 0x7F) < a4;
}

/* 0xfffc536f sub_FFFC536F */
BOOL __cdecl sub_FFFC536F(int a1, unsigned __int8 a2, int a3, char a4)
{
  return (a3 == -1 || (*(_DWORD *)(3049 * a2 + a1 + 3773) & 0xFFF8FFFF) == a3) /*0xfffc53b2*/
      && (*(_BYTE *)(3049 * a2 + a1 + 3768) & 0x7F) == a4;
}

/* 0xfffc53de sub_FFFC53DE */
_BYTE *__cdecl sub_FFFC53DE(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // esi
  int v6; // eax
  _BYTE *result; // eax
  char v8; // dl
  char v9; // bl
  char v10; // dl
  char v11; // bl
  char v12; // cl
  int v13; // [esp+Ch] [ebp-4h]
  char v14; // [esp+1Fh] [ebp+Fh]

  v5 = 184 * a4; /*0xfffc53ff*/
  v6 = 430 * a3 + 3049 * a2; /*0xfffc5405*/
  v13 = a1 + v6; /*0xfffc541a*/
  result = (_BYTE *)(v5 + v6 + a1 + 5630 + 32 * a5); /*0xfffc5423*/
  v14 = a5 & 1; /*0xfffc5428*/
  result[8] = a4 & 1 | (2 * (a5 & 1)); /*0xfffc5436*/
  result[3] = 0; /*0xfffc543c*/
  if ( *(_BYTE *)(v13 + 5516) ) /*0xfffc5440*/
  {
    result[9] = a4; /*0xfffc544f*/
    v8 = (a5 >> 1) | (2 * a4); /*0xfffc545d*/
    v9 = a5 | (4 * a4); /*0xfffc5463*/
    result[5] = v8; /*0xfffc546c*/
    result[1] = v9; /*0xfffc546f*/
    result[6] = v9; /*0xfffc5472*/
    if ( a4 ) /*0xfffc5475*/
      result[7] = (a5 >> 1) | (4 * a4); /*0xfffc5482*/
    else
      result[7] = a5; /*0xfffc5477*/
    if ( !v14 && !result[32] ) /*0xfffc548e*/
      result[39] = result[7] + 1; /*0xfffc5499*/
    if ( *(_BYTE *)(v13 + 5514) == 1 ) /*0xfffc54a6*/
    {
      result[2] = a5; /*0xfffc54a8*/
    }
    else
    {
      result[2] = v8; /*0xfffc54ad*/
      if ( *(_BYTE *)(v5 + v13 + 5574) > 1u ) /*0xfffc54b8*/
        result[3] = 1; /*0xfffc54ba*/
    }
    result[4] = result[2]; /*0xfffc54c1*/
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 3734) ) /*0xfffc54c6*/
      result[9] = a4; /*0xfffc54d2*/
    v10 = a5 | (2 * a4); /*0xfffc54da*/
    result[5] = v10; /*0xfffc54e0*/
    if ( a4 == 1 ) /*0xfffc54e3*/
      v11 = a5 | 4; /*0xfffc54e7*/
    else
      v11 = a5 | a4; /*0xfffc54ef*/
    result[6] = v11; /*0xfffc54f5*/
    result[7] = v11; /*0xfffc54f8*/
    if ( !v14 && !result[32] ) /*0xfffc54fd*/
      result[39] = v11 + 1; /*0xfffc5505*/
    result[2] = v10; /*0xfffc5508*/
    v12 = a4 | (2 * a5); /*0xfffc5515*/
    result[1] = a5 | (4 * a4); /*0xfffc5518*/
    result[4] = v12; /*0xfffc551b*/
    if ( *(_BYTE *)(a1 + 3734) ) /*0xfffc551e*/
      result[9] = v12; /*0xfffc5527*/
  }
  return result; /*0xfffc552a*/
}

/* 0xfffc552f sub_FFFC552F */
int __cdecl sub_FFFC552F(int a1)
{
  int result; // eax
  int v2; // edi
  unsigned __int8 *v3; // esi
  int v4; // ecx
  unsigned __int8 *v5; // esi
  __int16 v6; // cx
  __int16 v7; // dx
  bool v8; // zf
  __int16 v9; // cx
  int v10; // [esp+0h] [ebp-14h]
  unsigned __int8 *v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+8h] [ebp-Ch]
  int v13; // [esp+Ch] [ebp-8h]
  unsigned __int8 v14; // [esp+13h] [ebp-1h]

  result = a1; /*0xfffc5535*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc5538*/
  {
    v2 = 0; /*0xfffc5548*/
    v3 = (unsigned __int8 *)(a1 + 5514); /*0xfffc554a*/
    v13 = 0; /*0xfffc5556*/
    v11 = (unsigned __int8 *)(a1 + 5514); /*0xfffc5559*/
    v12 = a1 + 5574; /*0xfffc555c*/
    v10 = 3; /*0xfffc555f*/
    do /*0xfffc5604*/
    {
      if ( *(v3 - 2) ) /*0xfffc556b*/
      {
        v14 = 0; /*0xfffc5574*/
        if ( *v3 ) /*0xfffc5571*/
        {
          do /*0xfffc55d6*/
          {
            v4 = 184 * v14; /*0xfffc5583*/
            v5 = (unsigned __int8 *)(v4 + v12); /*0xfffc5589*/
            if ( *(_BYTE *)(v4 + v12 + 1) ) /*0xfffc558b*/
            {
              if ( !v5[2] ) /*0xfffc5591*/
              {
                v6 = *v5 * *(_WORD *)(v4 + v13 + a1 + 5648); /*0xfffc55ae*/
                *(_WORD *)(212 * v14 + v2 + a1 + 7730 + 2) = v6; /*0xfffc55b9*/
                *(_WORD *)(v2 + a1 + 7091) += v6; /*0xfffc55be*/
              }
            }
            ++v14; /*0xfffc55cb*/
          }
          while ( v14 < *v11 ); /*0xfffc55d6*/
          v3 = v11; /*0xfffc55d8*/
        }
        v7 = *(_WORD *)(v2 + a1 + 7091); /*0xfffc55e1*/
        *(_WORD *)(v2 + a1 + 7093) = v7; /*0xfffc55e5*/
        *(_WORD *)(a1 + 7014) += v7; /*0xfffc55e9*/
      }
      v13 += 430; /*0xfffc55f0*/
      v12 += 430; /*0xfffc55f3*/
      v3 += 430; /*0xfffc55f6*/
      v2 += 1068; /*0xfffc55f8*/
      v8 = v10-- == 1; /*0xfffc55fe*/
      v11 = v3; /*0xfffc5601*/
    }
    while ( !v8 ); /*0xfffc5604*/
    v9 = *(_WORD *)(a1 + 7014); /*0xfffc560a*/
    *(_WORD *)(a1 + 7016) = v9; /*0xfffc5613*/
    *(_WORD *)(a1 + 62) += v9; /*0xfffc561a*/
  }
  return result; /*0xfffc561f*/
}

/* 0xfffc5621 sub_FFFC5621 */
int __cdecl sub_FFFC5621(int a1, unsigned __int8 a2, char a3)
{
  unsigned __int8 *v3; // edx
  unsigned __int8 v4; // dl
  int result; // eax

  sub_FFFC4FB2(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3 + 4, 0, 0x54u, 197120); /*0xfffc5652*/
  v4 = *v3; /*0xfffc5657*/
  do /*0xfffc566f*/
    result = sub_FFFC4EEF(a1, v4, a3 + 4, 0, 0x5Cu); /*0xfffc5664*/
  while ( (result & 0x200) == 0 ); /*0xfffc566f*/
  return result; /*0xfffc5671*/
}

/* 0xfffc5674 sub_FFFC5674 */
int __cdecl sub_FFFC5674(int a1, unsigned __int8 a2)
{
  int result; // eax
  _BYTE *v3; // ecx
  int v4; // esi
  unsigned __int8 v5; // bl
  int v6; // edx
  int v7; // [esp+18h] [ebp+Ch]

  result = a1 + 3049 * a2; /*0xfffc5687*/
  *(_BYTE *)(result + 3758) = 0; /*0xfffc5689*/
  v3 = (_BYTE *)(result + 5514); /*0xfffc5690*/
  v4 = result + 5574; /*0xfffc5696*/
  v7 = 3; /*0xfffc569c*/
  do /*0xfffc56ef*/
  {
    if ( *(v3 - 2) ) /*0xfffc56a3*/
    {
      v5 = 0; /*0xfffc56a9*/
      for ( *v3 = 0; v5 < *(_BYTE *)(a1 + 16); ++v5 ) /*0xfffc56ae*/
      {
        v6 = v4 + 184 * v5; /*0xfffc56bc*/
        if ( *(_BYTE *)(v6 + 1) && !*(_BYTE *)(v6 + 2) ) /*0xfffc56c4*/
          ++*v3; /*0xfffc56ca*/
      }
      if ( *v3 > *(_BYTE *)(result + 3758) ) /*0xfffc56db*/
        *(_BYTE *)(result + 3758) = *v3; /*0xfffc56dd*/
    }
    v4 += 430; /*0xfffc56e8*/
    v3 += 430; /*0xfffc56ea*/
    --v7; /*0xfffc56ec*/
  }
  while ( v7 ); /*0xfffc56ef*/
  return result; /*0xfffc56f1*/
}

/* 0xfffc56f6 sub_FFFC56F6 */
int __cdecl sub_FFFC56F6(unsigned int a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v4; // eax

  if ( a1 <= a2 ) /*0xfffc56ff*/
    v4 = 0; /*0xfffc5706*/
  else
    v4 = a1 - a2; /*0xfffc5701*/
  if ( v4 > a3 ) /*0xfffc570b*/
    v4 = a3; /*0xfffc570d*/
  return v4 << a4; /*0xfffc5715*/
}

/* 0xfffc574f sub_FFFC574F */
int __cdecl sub_FFFC574F(int a1)
{
  unsigned __int16 v1; // dx
  _WORD *v2; // ebp
  __m128i *v3; // edi
  int v5; // [esp+8h] [ebp-4h]

  v1 = 0; /*0xfffc5758*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc575a*/
  {
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x40u, 858993456); /*0xfffc5776*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x44u, 3355443); /*0xfffc578f*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x4Cu, 18944); /*0xfffc57a8*/
  }
  v2 = (_WORD *)(a1 + 148); /*0xfffc57b2*/
  v5 = 8; /*0xfffc57b8*/
  do /*0xfffc5830*/
  {
    if ( *((_BYTE *)v2 - 2) && *v2 < 0x40u ) /*0xfffc57ca*/
    {
      v3 = (__m128i *)(v1 << 26); /*0xfffc57cf*/
      do /*0xfffc5823*/
      {
        sub_FFFC29D3(a1, v3, -16776961, 0x400u, 4u, 0); /*0xfffc57e0*/
        if ( sub_FFFC2BAE(v3, -16776961, 0x400u, 4, 0) ) /*0xfffc57f3*/
          sub_FFFD934D(a1, 235, 1); /*0xfffc5807*/
        v3 += 64; /*0xfffc5813*/
      }
      while ( ((unsigned __int16)*v2 << 26) - (int)v3 < 0x1000000u ); /*0xfffc5823*/
    }
    v1 = *v2; /*0xfffc5825*/
    v2 += 2; /*0xfffc5829*/
    --v5; /*0xfffc582c*/
  }
  while ( v5 ); /*0xfffc5830*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc5832*/
  {
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x40u, 0); /*0xfffc584c*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x44u, 0); /*0xfffc5861*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x4Cu, 512); /*0xfffc587a*/
  }
  return 0; /*0xfffc5882*/
}

/* 0xfffc5888 sub_FFFC5888 */
int __cdecl sub_FFFC5888(int a1)
{
  char v1; // al
  unsigned __int8 v2; // al
  char *v3; // esi
  char *v4; // esi

  v1 = __inbyte(*(_WORD *)(a1 + 54) + 1); /*0xfffc589f*/
  if ( v1 < 0 && (v2 = __inbyte(*(_WORD *)(a1 + 54) + 5), (v2 & 0x1C) == 0x14) || (*(_BYTE *)(a1 + 79) & 8) != 0 ) /*0xfffc58cb*/
  {
    v3 = *(char **)(a1 + 1716); /*0xfffc58ce*/
    *(_BYTE *)(a1 + 1) = 1; /*0xfffc58d7*/
    if ( !v3 || (char *)(a1 + 3730) == v3 ) /*0xfffc58e5*/
    {
      sub_FFFD9347(a1); /*0xfffc58f4*/
    }
    else
    {
      qmemcpy((void *)(a1 + 3730), v3, 0xCC0u); /*0xfffc58ec*/
      v4 = v3 + 3264; /*0xfffc58ec*/
      *(_WORD *)(a1 + 6994) = *(_WORD *)v4; /*0xfffc58ee*/
      *(_BYTE *)(a1 + 6996) = v4[2]; /*0xfffc58f0*/
    }
  }
  sub_FFFD8F02(a1); /*0xfffc58fd*/
  return 0; /*0xfffc5905*/
}

/* 0xfffc5908 sub_FFFC5908 */
void __cdecl sub_FFFC5908(_BYTE *a1)
{
  unsigned __int8 *v1; // esi
  _BYTE *v2; // edi
  unsigned int v3; // edx
  unsigned __int8 v4; // dl
  unsigned __int16 v5; // ax
  int v6; // [esp+0h] [ebp-14h]
  _BYTE *v7; // [esp+4h] [ebp-10h]
  int v8; // [esp+8h] [ebp-Ch]
  unsigned __int8 v9; // [esp+Eh] [ebp-6h]
  unsigned __int8 v10; // [esp+Fh] [ebp-5h]
  unsigned __int8 v11; // [esp+10h] [ebp-4h]
  unsigned __int8 v12; // [esp+11h] [ebp-3h]
  unsigned __int8 v13; // [esp+12h] [ebp-2h]
  unsigned __int8 v14; // [esp+13h] [ebp-1h]

  if ( a1[3755] && a1[3758] ) /*0xfffc591f*/
  {
    v12 = 0; /*0xfffc5933*/
    v13 = 0; /*0xfffc5936*/
    v9 = 0; /*0xfffc5939*/
    v10 = 0; /*0xfffc593c*/
    v11 = 0; /*0xfffc593f*/
    v1 = a1 + 5514; /*0xfffc5942*/
    v7 = a1 + 5576; /*0xfffc5948*/
    v6 = 3; /*0xfffc594b*/
    do /*0xfffc59e2*/
    {
      if ( *(v1 - 2) ) /*0xfffc5952*/
      {
        v14 = 0; /*0xfffc5959*/
        if ( *v1 ) /*0xfffc5957*/
        {
          v2 = v7; /*0xfffc595e*/
          v8 = 1; /*0xfffc5961*/
          do /*0xfffc59d3*/
          {
            if ( *(v2 - 1) && !*v2 ) /*0xfffc596d*/
            {
              if ( v8 > v12 ) /*0xfffc5978*/
                v12 = v14 + 1; /*0xfffc597f*/
              v3 = *(unsigned __int16 *)(v2 + 23); /*0xfffc5984*/
              if ( v13 < (unsigned __int8)(((unsigned __int8)v3 >> 5) & 3) ) /*0xfffc5992*/
                v13 = ((unsigned __int8)*(_WORD *)(v2 + 23) >> 5) & 3; /*0xfffc5994*/
              if ( v9 < (unsigned __int8)((v3 >> 7) & 3) ) /*0xfffc59a1*/
                v9 = (v3 >> 7) & 3; /*0xfffc59a3*/
              if ( v10 < (unsigned __int8)(((unsigned __int8)v3 >> 2) & 7) ) /*0xfffc59b0*/
                v10 = ((unsigned __int8)v3 >> 2) & 7; /*0xfffc59b2*/
              v4 = v3 & 3; /*0xfffc59b5*/
              if ( v11 < v4 ) /*0xfffc59bb*/
                v11 = v4; /*0xfffc59bd*/
            }
            ++v14; /*0xfffc59c2*/
            ++v8; /*0xfffc59c8*/
            v2 += 184; /*0xfffc59cb*/
          }
          while ( v14 < *v1 ); /*0xfffc59d3*/
        }
      }
      v7 += 430; /*0xfffc59da*/
      v1 += 430; /*0xfffc59dd*/
      --v6; /*0xfffc59df*/
    }
    while ( v6 ); /*0xfffc59e2*/
    v5 = (v12 - 1) | (4 * v13); /*0xfffc59f6*/
    if ( a1[23] ) /*0xfffc59f8*/
      v5 |= 16 * (v9 | (unsigned __int16)(4 * (v10 | (unsigned __int16)(8 * v11)))); /*0xfffc5a19*/
    sub_FFFC4FB2((int)a1, a1[6997], 3u, 0, 0x64u, v5); /*0xfffc5a2e*/
  }
}

/* 0xfffc5a3a sub_FFFC5A3A */
int __cdecl sub_FFFC5A3A(int a1)
{
  unsigned __int8 *v1; // edx
  int v2; // eax
  unsigned __int8 *v3; // edi
  int v4; // esi
  unsigned __int8 v5; // al
  unsigned __int8 v6; // cl
  __int16 v7; // dx
  _WORD *v8; // esi
  char v9; // cl
  char v11; // [esp+4h] [ebp-2Ch]
  unsigned __int8 *v12; // [esp+Ch] [ebp-24h]
  int v13; // [esp+10h] [ebp-20h]
  int v14; // [esp+14h] [ebp-1Ch]
  char v15; // [esp+18h] [ebp-18h]
  _BYTE *v16; // [esp+1Ch] [ebp-14h]
  unsigned __int8 v17; // [esp+20h] [ebp-10h]
  int v18; // [esp+24h] [ebp-Ch]
  unsigned __int8 i; // [esp+28h] [ebp-8h]
  __int16 v20; // [esp+2Ch] [ebp-4h]
  unsigned __int8 v21; // [esp+2Fh] [ebp-1h]

  if ( *(_BYTE *)(a1 + 3755) )
  {
    v14 = 0; /*0xfffc5a51*/
    v16 = (_BYTE *)(a1 + 7677); /*0xfffc5a5b*/
    v1 = (unsigned __int8 *)(a1 + 5514); /*0xfffc5a5f*/
    v17 = 0; /*0xfffc5a6c*/
    v12 = (unsigned __int8 *)(a1 + 5514); /*0xfffc5a70*/
    v13 = a1 + 5574; /*0xfffc5a73*/
    do
    {
      if ( *(v1 - 2) )
      {
        v18 = 0; /*0xfffc5a83*/
        *v16 = 0; /*0xfffc5a87*/
        for ( i = 0; i < *v1; ++i )
        {
          v2 = 184 * i; /*0xfffc5aa1*/
          v3 = (unsigned __int8 *)(v13 + v2); /*0xfffc5aa7*/
          if ( *(_BYTE *)(v13 + v2 + 1) )
          {
            v4 = v2 + v14 + a1 + 5630; /*0xfffc5abd*/
            v5 = v3[2] ? 0 : *(_BYTE *)(v3[3] + 218 + a1 + 4 * (v3[3] + 218));
            v6 = *v3; /*0xfffc5ad9*/
            v21 = *v3; /*0xfffc5add*/
            if ( *v3 )
            {
              v7 = v5; /*0xfffc5ae6*/
              v20 = v5; /*0xfffc5af3*/
              v15 = v6 - 1; /*0xfffc5af7*/
              v8 = (_WORD *)(32 * v6 + v4 - 14); /*0xfffc5afa*/
              while ( 1 )
              {
                v9 = *v12 <= 2u ? 4 * i : 2 * i;
                *((_BYTE *)v8 - 18) = 1; /*0xfffc5b22*/
                *v8 = v7; /*0xfffc5b26*/
                v8[1] = v7; /*0xfffc5b29*/
                v18 |= (unsigned __int8)(1 << v15) << v9; /*0xfffc5b2d*/
                v11 = v21 - 1; /*0xfffc5b37*/
                sub_FFFC53DE(a1, 0, v17, i, v21 - 1); /*0xfffc5b44*/
                if ( !v3[2] ) /*0xfffc5b4c*/
                  *v16 |= 1 << *((_BYTE *)v8 - 16); /*0xfffc5b5c*/
                --v15; /*0xfffc5b61*/
                v8 -= 16; /*0xfffc5b64*/
                --v21; /*0xfffc5b69*/
                if ( !v11 ) /*0xfffc5b6c*/
                  break; /*0xfffc5b6c*/
                v7 = v20; /*0xfffc5b00*/
              }
              v1 = v12; /*0xfffc5b6e*/
            }
          }
        }
        sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v17 + 4, 0, 0x7Cu, v18); /*0xfffc5b98*/
      }
      ++v17; /*0xfffc5ba0*/
      v16 += 1068; /*0xfffc5ba3*/
      v14 += 430; /*0xfffc5baf*/
      v13 += 430; /*0xfffc5bb2*/
      v1 += 430; /*0xfffc5bb5*/
      v12 = v1; /*0xfffc5bbb*/
    }
    while ( v17 < 3u );
  }
  return 0; /*0xfffc5bc8*/
}

/* 0xfffc5bcb sub_FFFC5BCB */
char __cdecl sub_FFFC5BCB(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // edx
  unsigned __int8 v14; // cl
  int v15; // eax
  int v16; // edx
  unsigned __int8 v17; // cl
  int v18; // eax
  unsigned int v19; // eax
  int v20; // edx
  unsigned __int8 v21; // cl
  int v22; // eax
  unsigned int v23; // eax
  int v24; // edx
  unsigned __int8 v25; // cl
  int v26; // eax
  unsigned int v27; // eax
  int v28; // edx
  unsigned __int8 v29; // cl
  unsigned int v30; // eax
  BOOL v31; // eax
  int v32; // edx
  unsigned __int8 v33; // al
  int v34; // ecx
  int v35; // edx
  unsigned __int8 v36; // cl
  int v37; // eax
  int v38; // edx
  int v39; // eax
  unsigned __int8 v40; // cl
  int v41; // eax
  int v42; // eax
  int v43; // edx
  unsigned __int8 v44; // cl
  int v45; // eax
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // edx
  int v52; // edx
  int v53; // eax
  int v54; // edx
  unsigned int v55; // eax
  int v56; // edx
  int v57; // eax
  int v58; // edx
  bool v59; // zf
  int v60; // eax
  unsigned __int16 v61; // cx
  int v62; // edx
  int v63; // eax
  unsigned __int16 v64; // cx
  int v65; // edx
  int v66; // edx
  int v67; // edx
  BOOL v68; // eax
  unsigned __int16 v69; // dx
  unsigned __int16 v70; // dx
  char result; // al
  char v72; // al
  unsigned __int16 v73; // dx
  unsigned int v74; // [esp-10h] [ebp-3Ch]
  unsigned int v75; // [esp-10h] [ebp-3Ch]
  unsigned int v76; // [esp-10h] [ebp-3Ch]
  unsigned int v77; // [esp-10h] [ebp-3Ch]
  unsigned int v78; // [esp-10h] [ebp-3Ch]
  unsigned int v79; // [esp-10h] [ebp-3Ch]
  unsigned __int16 v80; // [esp+Ch] [ebp-20h]
  unsigned __int16 v81; // [esp+14h] [ebp-18h]
  int v82; // [esp+18h] [ebp-14h]
  int v83; // [esp+20h] [ebp-Ch]
  unsigned int v84; // [esp+24h] [ebp-8h]
  unsigned int v85; // [esp+24h] [ebp-8h]
  int v86; // [esp+28h] [ebp-4h] BYREF
  int v87; // [esp+34h] [ebp+8h]
  unsigned __int8 v88; // [esp+34h] [ebp+8h]
  unsigned __int8 v89; // [esp+37h] [ebp+Bh]
  int v90; // [esp+3Ch] [ebp+10h]
  unsigned __int8 v91; // [esp+3Ch] [ebp+10h]
  unsigned __int8 v92; // [esp+3Fh] [ebp+13h]
  unsigned __int8 v93; // [esp+43h] [ebp+17h]

  v83 = a1 + 3297 * a2; /*0xfffc5bea*/
  v93 = a4 >> 1; /*0xfffc5bf2*/
  v5 = a1 + 3049 * a2; /*0xfffc5bf5*/
  v6 = *(unsigned __int8 *)(v5 + 3757); /*0xfffc5bf7*/
  v86 = 0; /*0xfffc5c01*/
  v82 = v5; /*0xfffc5c15*/
  v81 = 7644 / *(unsigned __int8 *)(v6 + a1 + 9); /*0xfffc5c18*/
  v7 = 430 * a3; /*0xfffc5c1d*/
  v8 = v7 + v5 + 5512; /*0xfffc5c23*/
  if ( (*(_BYTE *)(v7 + v5 + 5513) & 2) != 0 ) /*0xfffc5c2e*/
    v81 >>= 1; /*0xfffc5c30*/
  LOBYTE(v9) = *(_BYTE *)(a1 + 1159); /*0xfffc5c38*/
  v80 = *(_WORD *)(v8 + 32); /*0xfffc5c3e*/
  v10 = 7 * *(unsigned __int8 *)(a1 + 3732); /*0xfffc5c49*/
  v86 = 0; /*0xfffc5c4c*/
  v89 = v93 + *(_BYTE *)(v10 + a1 + 990) - *(_BYTE *)(v8 + 17); /*0xfffc5c5c*/
  v11 = *(_BYTE *)(a1 + 1147); /*0xfffc5c5f*/
  if ( v11 <= (unsigned __int8)v9 ) /*0xfffc5c67*/
    v9 = (unsigned __int8)v9; /*0xfffc5c6e*/
  else
    v9 = v11; /*0xfffc5c69*/
  v74 = v9 + v93 + 1; /*0xfffc5c92*/
  *(_DWORD *)(1068 * a3 + v83 + 7657) = v74; /*0xfffc5c96*/
  v12 = sub_FFFC56F6(v74, 2u, 7u, 1); /*0xfffc5c9c*/
  v14 = *(_BYTE *)(a1 + 1160); /*0xfffc5ca1*/
  v86 = v12; /*0xfffc5ca7*/
  v15 = *(unsigned __int8 *)(a1 + 1148); /*0xfffc5cb5*/
  if ( (unsigned __int8)v15 <= v14 ) /*0xfffc5cb8*/
    v15 = v14; /*0xfffc5cba*/
  v75 = v15 + v93 + 1; /*0xfffc5cca*/
  *(_DWORD *)(v13 + 567) = v75; /*0xfffc5ccb*/
  v86 |= sub_FFFC56F6(v75, 2u, 7u, 4); /*0xfffc5cd6*/
  v17 = *(_BYTE *)(a1 + 1164); /*0xfffc5cdf*/
  v18 = *(unsigned __int8 *)(a1 + 1152); /*0xfffc5cea*/
  if ( (unsigned __int8)v18 <= v17 ) /*0xfffc5ced*/
    v18 = v17; /*0xfffc5cef*/
  v19 = v18 + *(unsigned __int8 *)(v8 + 17) - *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990) + 7; /*0xfffc5d10*/
  if ( *(_BYTE *)(v82 + 3757) >= 2u ) /*0xfffc5d1e*/
    ++v19; /*0xfffc5d20*/
  *(_DWORD *)(v16 + 563) = v19; /*0xfffc5d28*/
  v86 |= sub_FFFC56F6(v19, 2u, 0xCu, 7); /*0xfffc5d33*/
  v21 = *(_BYTE *)(a1 + 1165); /*0xfffc5d3c*/
  v22 = *(unsigned __int8 *)(a1 + 1153); /*0xfffc5d47*/
  if ( (unsigned __int8)v22 <= v21 ) /*0xfffc5d4a*/
    v22 = v21; /*0xfffc5d4c*/
  v23 = v22 /*0xfffc5d70*/
      + v93
      + *(unsigned __int8 *)(v8 + 17)
      - *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990)
      + 3;
  if ( *(_BYTE *)(v82 + 3757) >= 3u ) /*0xfffc5d7e*/
    ++v23; /*0xfffc5d80*/
  *(_DWORD *)(v20 + 559) = v23; /*0xfffc5d88*/
  v86 |= sub_FFFC56F6(v23, 2u, 0xCu, 11); /*0xfffc5d93*/
  v25 = *(_BYTE *)(a1 + 1166); /*0xfffc5d9c*/
  v26 = *(unsigned __int8 *)(a1 + 1154); /*0xfffc5da7*/
  if ( (unsigned __int8)v26 <= v25 ) /*0xfffc5daa*/
    v26 = v25; /*0xfffc5dac*/
  v27 = v26 /*0xfffc5dd0*/
      + v93
      + *(unsigned __int8 *)(v8 + 17)
      - *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990)
      + 2;
  if ( *(_BYTE *)(v82 + 3757) >= 3u ) /*0xfffc5dde*/
    ++v27; /*0xfffc5de0*/
  *(_DWORD *)(v24 + 555) = v27; /*0xfffc5de8*/
  v86 |= sub_FFFC56F6(v27, 2u, 0xCu, 15); /*0xfffc5df3*/
  v29 = *(_BYTE *)(a1 + 1167); /*0xfffc5dfc*/
  v30 = *(unsigned __int8 *)(a1 + 1155); /*0xfffc5e07*/
  if ( (unsigned __int8)v30 <= v29 ) /*0xfffc5e0a*/
    v30 = v29; /*0xfffc5e0c*/
  v84 = v30; /*0xfffc5e0f*/
  if ( *(unsigned __int8 *)(v8 + 25) > v30 ) /*0xfffc5e19*/
    v84 = *(unsigned __int8 *)(v8 + 25); /*0xfffc5e1b*/
  v85 = v93 + *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990) + v84; /*0xfffc5e35*/
  *(_DWORD *)(v28 + 551) = v85; /*0xfffc5e44*/
  v31 = sub_FFFC52CF(a1, a2, 745570438, 0); /*0xfffc5e4b*/
  v86 |= sub_FFFC56F6(v85, 0xAu, (unsigned __int8)(v31 ? 15 : 12), 19);
  v33 = *(_BYTE *)(a1 + 1156); /*0xfffc5e6c*/
  LOBYTE(v34) = *(_BYTE *)(a1 + 1168); /*0xfffc5e72*/
  if ( v33 <= (unsigned __int8)v34 ) /*0xfffc5e7d*/
    v34 = (unsigned __int8)v34; /*0xfffc5e84*/
  else
    v34 = v33; /*0xfffc5e7f*/
  v87 = v89; /*0xfffc5e8f*/
  v76 = v34 + v87 + 1; /*0xfffc5e98*/
  *(_DWORD *)(v32 + 547) = v76; /*0xfffc5e99*/
  v86 |= sub_FFFC56F6(v76, 1u, 7u, 23); /*0xfffc5ea4*/
  v36 = *(_BYTE *)(a1 + 1169); /*0xfffc5ead*/
  v37 = *(unsigned __int8 *)(a1 + 1157); /*0xfffc5eb8*/
  if ( (unsigned __int8)v37 <= v36 ) /*0xfffc5ebb*/
    v37 = v36; /*0xfffc5ebd*/
  v77 = v37 + v87 + 1; /*0xfffc5ecd*/
  *(_DWORD *)(v35 + 543) = v77; /*0xfffc5ece*/
  v86 |= sub_FFFC56F6(v77, 1u, 7u, 26); /*0xfffc5ed9*/
  sub_FFFDAAB7(a1, v38, &v86); /*0xfffc5ee2*/
  v88 = a3 + 4; /*0xfffc5ef7*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), a3 + 4, 0, 0x80u, v86); /*0xfffc5f07*/
  v39 = *(unsigned __int8 *)(v8 + 24); /*0xfffc5f0c*/
  if ( *(_BYTE *)(v8 + 21) > 7u ) /*0xfffc5f17*/
    *(_BYTE *)(v8 + 21) = 7; /*0xfffc5f19*/
  v40 = *(_BYTE *)(a1 + 1162); /*0xfffc5f26*/
  v86 = (*(unsigned __int8 *)(v8 + 21) << 6) | v39; /*0xfffc5f2c*/
  v41 = *(unsigned __int8 *)(a1 + 1150); /*0xfffc5f37*/
  if ( (unsigned __int8)v41 <= v40 ) /*0xfffc5f3a*/
    v41 = v40; /*0xfffc5f3c*/
  v78 = v41 + v93 + 1; /*0xfffc5f4f*/
  *(_DWORD *)(1068 * a3 + v83 + 7669) = v78; /*0xfffc5f50*/
  v42 = sub_FFFC56F6(v78, 2u, 7u, 10); /*0xfffc5f56*/
  v86 |= v42; /*0xfffc5f5b*/
  v44 = *(_BYTE *)(a1 + 1163); /*0xfffc5f64*/
  v45 = *(unsigned __int8 *)(a1 + 1151); /*0xfffc5f6f*/
  if ( (unsigned __int8)v45 <= v44 ) /*0xfffc5f72*/
    v45 = v44; /*0xfffc5f74*/
  v79 = v45 + v93 + 1; /*0xfffc5f84*/
  *(_DWORD *)(v43 + 579) = v79; /*0xfffc5f85*/
  v46 = sub_FFFC56F6(v79, 2u, 7u, 13); /*0xfffc5f8b*/
  v86 |= v46; /*0xfffc5f90*/
  sub_FFFDABC0(a1, v47, &v86); /*0xfffc5f99*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0x84u, v86); /*0xfffc5fb6*/
  v92 = *(_BYTE *)(v8 + 22) + *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990) + 4; /*0xfffc5fda*/
  if ( !*(_BYTE *)(a1 + 3734) ) /*0xfffc5fd4*/
    v92 = *(_BYTE *)(v8 + 22) + *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990) + 5; /*0xfffc5fe1*/
  sub_FFFC56F6((unsigned __int8)(*(_BYTE *)(v8 + 23) + 2), 0, 0xFu, 13); /*0xfffc5ff2*/
  sub_FFFC56F6(*(unsigned __int8 *)(v8 + 20), 0, 0x1Fu, 4); /*0xfffc6003*/
  sub_FFFC56F6(*(unsigned __int8 *)(v8 + 19), 0, 0xFu, 0); /*0xfffc6013*/
  sub_FFFC56F6(*(unsigned __int8 *)(v8 + 18), 0, 0xFu, 9); /*0xfffc6024*/
  v48 = sub_FFFC56F6(v92, 0, 0x1Fu, 17); /*0xfffc6038*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0x88u, v48 | v49); /*0xfffc6055*/
  sub_FFFC56F6(*(unsigned __int16 *)(v8 + 32), 0, 0x1FFu, 0); /*0xfffc6066*/
  sub_FFFC56F6(v80, 0, 0x7FFu, 19); /*0xfffc607a*/
  v50 = sub_FFFC56F6(v81, 0, 0x3FFu, 9); /*0xfffc6091*/
  v52 = v50 | v51; /*0xfffc6096*/
  LOBYTE(v50) = *(_BYTE *)(v83 + 6997); /*0xfffc609b*/
  v86 = v52; /*0xfffc60ac*/
  sub_FFFC4FB2(a1, v50, v88, 0, 0x8Cu, v52); /*0xfffc60b1*/
  v90 = a1 + 7 * *(unsigned __int8 *)(a1 + 3732); /*0xfffc60c3*/
  v86 = sub_FFFC56F6(*(unsigned __int8 *)(v90 + 991), 0, 7u, 0); /*0xfffc60d6*/
  sub_FFFC56F6( /*0xfffc60ff*/
    80 / *(unsigned __int8 *)(*(unsigned __int8 *)(v82 + 3757) + a1 + 9) + *(unsigned __int16 *)(v8 + 32) + 3,
    0,
    0xFFu,
    3);
  v53 = sub_FFFC56F6(0x200u, 0, 0x3FFu, 11); /*0xfffc6116*/
  v86 |= v53 | v54; /*0xfffc6126*/
  if ( sub_FFFC52CF(a1, a2, 745570438, 0) ) /*0xfffc612a*/
  {
    sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0x90u, v86); /*0xfffc6152*/
    if ( *(_BYTE *)(v8 + 2) == 1 && (*(_BYTE *)(a1 + 81) & 8) != 0 && !*(_BYTE *)(v8 + 4) ) /*0xfffc6166*/
    {
      v55 = 0x61A8u / *(_DWORD *)(a1 + 74) - *(unsigned __int8 *)(v8 + 18); /*0xfffc6179*/
      v56 = 7 * *(unsigned __int8 *)(a1 + 3732) + a1; /*0xfffc6185*/
      if ( v55 < *(unsigned __int8 *)(v56 + 992) ) /*0xfffc6191*/
        v55 = *(unsigned __int8 *)(v56 + 992); /*0xfffc6193*/
    }
    else
    {
      v55 = *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 992); /*0xfffc61a4*/
    }
    v57 = sub_FFFC56F6(v55, 0, 0x1Fu, 0); /*0xfffc61b0*/
    v59 = *(_BYTE *)(a1 + 10990) == 0; /*0xfffc61b8*/
    v86 = v57; /*0xfffc61be*/
    if ( v59 ) /*0xfffc61c1*/
      goto LABEL_50; /*0xfffc61c1*/
    v60 = *(unsigned __int8 *)(a1 + 3732); /*0xfffc61c3*/
    v61 = *(unsigned __int8 *)(7 * (v60 + 142) + a1); /*0xfffc61de*/
    if ( *(_BYTE *)(7 * v60 + a1 + 988) == 2 && *(_WORD *)(v8 + 38) == 9 ) /*0xfffc61ea*/
      ++v61; /*0xfffc61ec*/
    if ( *(_BYTE *)(v58 + 988) == 2 && *(_WORD *)(v8 + 38) > 9u ) /*0xfffc61fb*/
LABEL_50:
      v61 = 50; /*0xfffc61ff*/
    if ( v61 < (unsigned __int8)(v93 + *(_BYTE *)(v8 + 22) + *(_BYTE *)(v58 + 990)) ) /*0xfffc6213*/
      v61 = (unsigned __int8)(v93 + *(_BYTE *)(v8 + 22) + *(_BYTE *)(v58 + 990)); /*0xfffc6215*/
    v86 |= sub_FFFC56F6(v61, 0, 0x3FFu, 5); /*0xfffc6228*/
    sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0x78u, v86); /*0xfffc6230*/
  }
  else
  {
    v86 |= sub_FFFC56F6(*(unsigned __int8 *)(v90 + 992), 0, 7u, 21); /*0xfffc624a*/
    if ( !*(_BYTE *)(a1 + 10990) ) /*0xfffc6250*/
      goto LABEL_60; /*0xfffc6250*/
    v63 = *(unsigned __int8 *)(a1 + 3732); /*0xfffc6258*/
    v64 = *(unsigned __int8 *)(7 * (v63 + 142) + a1); /*0xfffc6273*/
    if ( *(_BYTE *)(7 * v63 + a1 + 988) == 2 && *(_WORD *)(v8 + 38) == 9 ) /*0xfffc627f*/
      ++v64; /*0xfffc6281*/
    if ( *(_BYTE *)(v62 + 988) == 2 && *(_WORD *)(v8 + 38) > 9u ) /*0xfffc6290*/
LABEL_60:
      v64 = 50; /*0xfffc6294*/
    if ( v64 < (unsigned __int8)(v93 + *(_BYTE *)(v8 + 22) + *(_BYTE *)(v62 + 990)) ) /*0xfffc62a8*/
      v64 = (unsigned __int8)(v93 + *(_BYTE *)(v8 + 22) + *(_BYTE *)(v62 + 990)); /*0xfffc62aa*/
    v86 |= sub_FFFC56F6(v64, 0, 0xFFu, 24); /*0xfffc62bd*/
    sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0x90u, v86); /*0xfffc62d8*/
  }
  sub_FFFC4EEF(a1, *(_BYTE *)(v83 + 6997), 3u, 0, 0x74u); /*0xfffc62f1*/
  if ( sub_FFFC531F(a1, a2, 742424710, 5u) || (*(_BYTE *)(a1 + 78) & 6) != 0 ) /*0xfffc6321*/
    v65 |= 0xFFFFFu; /*0xfffc6323*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0xB4u, v65); /*0xfffc6340*/
  v86 = 81392; /*0xfffc634b*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v66 + 6997), v88, 0, 0x98u, 81392); /*0xfffc6361*/
  sub_FFFC4FB2( /*0xfffc6397*/
    a1,
    *(_BYTE *)(v83 + 6997),
    v88,
    0,
    0xBCu,
    8 * (7800 / *(unsigned __int8 *)(*(unsigned __int8 *)(v82 + 3757) + a1 + 9)));
  v86 = 1614813840; /*0xfffc63a5*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v67 + 6997), v88, 0, 0x94u, 1614813840); /*0xfffc63bb*/
  v68 = sub_FFFC52CF(a1, a2, 745570438, 0); /*0xfffc63ca*/
  v69 = 184; /*0xfffc63d4*/
  if ( v68 ) /*0xfffc63d9*/
  {
    v86 = sub_FFFC4EEF(a1, *(_BYTE *)(v83 + 6997), v88, 0, 0xB8u) | 0x2000; /*0xfffc63f8*/
    sub_FFFC4FB2(a1, *(_BYTE *)(v83 + 6997), v88, 0, v70, v86); /*0xfffc640b*/
  }
  result = *(_BYTE *)(v8 + 5); /*0xfffc6413*/
  if ( result == 1 ) /*0xfffc6418*/
  {
    v91 = *(_BYTE *)(v83 + 6997); /*0xfffc6429*/
    v72 = sub_FFFC4E96(a1, v91, v88, 0, v69) | 8; /*0xfffc6436*/
  }
  else
  {
    if ( result != 2 ) /*0xfffc643d*/
      return result; /*0xfffc643d*/
    v91 = *(_BYTE *)(v83 + 6997); /*0xfffc644e*/
    v72 = sub_FFFC4E96(a1, v91, v88, 0, v69) | 0x10; /*0xfffc645b*/
  }
  return sub_FFFC4F4E(a1, v91, v88, 0, v73, v72); /*0xfffc6470*/
}

/* 0xfffc6475 sub_FFFC6475 */
void __cdecl sub_FFFC6475(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // edi
  int v5; // edx
  int v6; // edx
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // edx
  unsigned __int8 v13; // [esp+0h] [ebp-4h]
  unsigned __int8 v14; // [esp+Ch] [ebp+8h]

  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffc6480*/
  {
    v4 = 3297 * a2; /*0xfffc648f*/
    v14 = *(_BYTE *)(v4 + a1 + 6997); /*0xfffc649c*/
    v13 = a3 + 4; /*0xfffc64af*/
    sub_FFFC4FB2(a1, v14, a3 + 4, 0, 0x54u, 512); /*0xfffc64b7*/
    sub_FFFC4F4E(v5, v14, 3u, 0, 0x5Cu, 1); /*0xfffc64c8*/
    v7 = 7 * *(unsigned __int8 *)(3049 * a2 + v6 + 3757) + v6; /*0xfffc64e5*/
    v9 = *(unsigned __int8 *)(v7 + 1037) | sub_FFFC4EEF(v6, v14, a3 + 4, 0, 0x58u) & 0xFFFFFC00; /*0xfffc6503*/
    if ( *(_BYTE *)(v4 + v8 + 7006) <= 0x1Au ) /*0xfffc650d*/
      v10 = sub_FFFC56F6(*(unsigned __int8 *)(v7 + 1039), 0, 0x1Fu, 5) | v9; /*0xfffc652d*/
    else
      v10 = v9 | 0x2A0; /*0xfffc650f*/
    if ( *(_BYTE *)(v8 + 19) ) /*0xfffc652f*/
      v11 = v10 | 0x7400; /*0xfffc653d*/
    else
      v11 = v10 | 0x4000; /*0xfffc6535*/
    sub_FFFC4FB2(v8, v14, v13, 0, 0x58u, v11); /*0xfffc654f*/
    *(_DWORD *)(v4 + 1068 * a3 + v12 + 7678) = v11; /*0xfffc656c*/
    sub_FFFC4FB2(v12, v14, v13, 0, 0x50u, 1); /*0xfffc6574*/
  }
}

/* 0xfffc6581 sub_FFFC6581 */
int __cdecl sub_FFFC6581(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v5; // esi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // al
  unsigned int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  unsigned __int8 v18; // [esp+17h] [ebp+Bh]
  unsigned __int8 v19; // [esp+1Bh] [ebp+Fh]
  unsigned __int8 v20; // [esp+23h] [ebp+17h]

  v5 = 3049 * a2; /*0xfffc65a0*/
  v6 = *(_BYTE *)(430 * a3 + v5 + a1 + 5512 + 17); /*0xfffc65ad*/
  v7 = *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990); /*0xfffc65bb*/
  v8 = a4 >> 1; /*0xfffc65c2*/
  if ( v6 <= v7 ) /*0xfffc65c9*/
    v19 = 0; /*0xfffc65d2*/
  else
    v19 = v6 - v7; /*0xfffc65cd*/
  v20 = v8 + 2; /*0xfffc65de*/
  if ( !v19 ) /*0xfffc65e1*/
    v20 = v8 + 1; /*0xfffc65e5*/
  v18 = *(_BYTE *)(v5 + 578 * a3 + a1 + 3778) >> 1; /*0xfffc65fc*/
  v9 = 11; /*0xfffc65ff*/
  if ( !(*(_BYTE *)(v5 + 578 * a3 + a1 + 3778) >> 1) ) /*0xfffc65fa*/
    v9 = 10; /*0xfffc6603*/
  if ( v8 != 2 || *(_BYTE *)(a1 + 1) == 1 ) /*0xfffc660e*/
  {
    v11 = sub_FFFC56F6(v9, 0, 0xFu, 20); /*0xfffc6654*/
    v12 = sub_FFFC56F6(v18, 0, 0xFu, 16) | v11; /*0xfffc6666*/
    v13 = sub_FFFC56F6(v19, 0, 0xFu, 8) | v12; /*0xfffc667e*/
    v10 = sub_FFFC56F6(3u, 0, 7u, 24) | v13; /*0xfffc6688*/
  }
  else
  {
    v10 = sub_FFFC4EEF(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3 + 4, 0, 0x9Cu) & 0xFFFF0F0F; /*0xfffc663b*/
  }
  v14 = sub_FFFC56F6(v8 + 1, 0, 0xFu, 4); /*0xfffc669c*/
  v15 = sub_FFFC56F6(v20, 0, 0xFu, 12); /*0xfffc66a7*/
  return sub_FFFC4FB2(v16, *(_BYTE *)(3297 * a2 + v16 + 6997), a3 + 4, 0, 0x9Cu, v10 | v15 | v14); /*0xfffc66d9*/
}

/* 0xfffc66de sub_FFFC66DE */
__int16 __cdecl sub_FFFC66DE(int a1, unsigned __int8 a2)
{
  unsigned __int16 *v3; // edi
  unsigned __int16 *v4; // edi
  _BYTE v6[14]; // [esp+Ch] [ebp-18h]
  int v7; // [esp+1Ch] [ebp-8h]
  int v8; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+20h] [ebp-4h]
  char v10; // [esp+2Ch] [ebp+8h]
  char v11; // [esp+2Ch] [ebp+8h]

  v9 = 0; /*0xfffc66e4*/
  v10 = 0; /*0xfffc66ed*/
  v3 = (unsigned __int16 *)(a1 + 328); /*0xfffc66f4*/
  v7 = 8; /*0xfffc66fa*/
  do /*0xfffc67e6*/
  {
    *(_WORD *)v6 = sub_FFFC4FE3(a1, a2, 0, *v3 + a1 + 2 * *v3 + 2017) & 1; /*0xfffc671d*/
    *(_WORD *)&v6[2] = sub_FFFC4FE3(a1, a2, 1u, *v3 + a1 + 2 * *v3 + 2017) & 1; /*0xfffc673b*/
    *(_WORD *)&v6[4] = sub_FFFC4FE3(a1, a2, 2u, *v3 + a1 + 2 * *v3 + 2017) & 1; /*0xfffc675a*/
    *(_WORD *)&v6[6] = sub_FFFC4FE3(a1, a2, 0, v3[1] + a1 + 2 * v3[1] + 2017) & 1; /*0xfffc677a*/
    *(_WORD *)&v6[8] = sub_FFFC4FE3(a1, a2, 1u, v3[1] + a1 + 2 * v3[1] + 2017) & 1; /*0xfffc679c*/
    *(_WORD *)&v6[10] = sub_FFFC4FE3(a1, a2, 2u, v3[1] + a1 + 2 * v3[1] + 2017) & 1; /*0xfffc67bf*/
    v3 += 4; /*0xfffc67cf*/
    v9 |= (*(_DWORD *)v6 /*0xfffc67dd*/
         ^ *(_DWORD *)&v6[2]
         ^ *(_DWORD *)&v6[4]
         ^ *(_DWORD *)&v6[6]
         ^ *(_DWORD *)&v6[8]
         ^ *(_DWORD *)&v6[10]) << v10++;
    --v7; /*0xfffc67e3*/
  }
  while ( v7 ); /*0xfffc67e6*/
  v11 = 8; /*0xfffc67ef*/
  v4 = (unsigned __int16 *)(a1 + 334); /*0xfffc67f2*/
  v8 = 8; /*0xfffc67f8*/
  do /*0xfffc68df*/
  {
    *(_WORD *)v6 = sub_FFFC4FE3(a1, a2, 0, *(v4 - 1) + a1 + 2 * *(v4 - 1) + 2017) & 1; /*0xfffc6817*/
    *(_WORD *)&v6[2] = sub_FFFC4FE3(a1, a2, 1u, *(v4 - 1) + a1 + 2 * *(v4 - 1) + 2017) & 1; /*0xfffc6836*/
    *(_WORD *)&v6[4] = sub_FFFC4FE3(a1, a2, 2u, *(v4 - 1) + a1 + 2 * *(v4 - 1) + 2017) & 1; /*0xfffc6856*/
    *(_WORD *)&v6[6] = sub_FFFC4FE3(a1, a2, 0, *v4 + a1 + 2 * *v4 + 2017) & 1; /*0xfffc6875*/
    *(_WORD *)&v6[8] = sub_FFFC4FE3(a1, a2, 1u, *v4 + a1 + 2 * *v4 + 2017) & 1; /*0xfffc6896*/
    *(_WORD *)&v6[10] = sub_FFFC4FE3(a1, a2, 2u, *v4 + a1 + 2 * *v4 + 2017) & 1; /*0xfffc68b8*/
    v4 += 4; /*0xfffc68c8*/
    v9 |= (*(_DWORD *)v6 /*0xfffc68d6*/
         ^ *(_DWORD *)&v6[2]
         ^ *(_DWORD *)&v6[4]
         ^ *(_DWORD *)&v6[6]
         ^ *(_DWORD *)&v6[8]
         ^ *(_DWORD *)&v6[10]) << v11++;
    --v8; /*0xfffc68dc*/
  }
  while ( v8 ); /*0xfffc68df*/
  return v9; /*0xfffc68e9*/
}

/* 0xfffc68ee sub_FFFC68EE */
int __cdecl sub_FFFC68EE(_BYTE *a1, __int16 a2, unsigned __int16 a3)
{
  int v3; // edx
  int v4; // edx
  unsigned __int16 v5; // ax
  int v6; // ecx
  int v7; // edx
  unsigned int v8; // ecx
  char v9; // al
  unsigned __int16 v10; // dx
  int v11; // edx
  int v13; // [esp+4h] [ebp-Ch]
  unsigned __int8 v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+Ch] [ebp-4h]

  v3 = 0; /*0xfffc68f8*/
  if ( a1[3755] && a1[3758] )
  {
    v14 = a1[6997]; /*0xfffc691f*/
    if ( a2 == 1536 )
    {
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xA8u, 1024); /*0xfffc693c*/
      v5 = a3 >> 1; /*0xfffc6948*/
      v6 = 7592549; /*0xfffc6951*/
      if ( a3 >> 1 ) /*0xfffc6948*/
      {
        v16 = v4 & v15; /*0xfffc695b*/
        v7 = v5 % 23; /*0xfffc6965*/
        v8 = 7592549; /*0xfffc6967*/
        v13 = v5 / 23; /*0xfffc696c*/
        if ( v7 > 0 ) /*0xfffc696f*/
        {
          do /*0xfffc698a*/
          {
            v9 = v8 & 1; /*0xfffc6973*/
            v8 >>= 1; /*0xfffc6975*/
            if ( v9 ) /*0xfffc6979*/
              v8 |= 0x400000u; /*0xfffc697b*/
            ++v16; /*0xfffc6981*/
          }
          while ( (unsigned __int16)v16 < v7 ); /*0xfffc698a*/
        }
        v6 = v13 + v8; /*0xfffc698c*/
      }
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xB0u, v6 & 0x7FFFFF); /*0xfffc69a1*/
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xBCu, (unsigned __int8)((a3 & 1) != 0 ? -2 : 1));
    }
    else
    {
      sub_FFFC4F7F((int)a1, v14, 3u, 4u, 0xA8u, 0); /*0xfffc69db*/
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xB0u, 0); /*0xfffc69ee*/
      sub_FFFC4F7F((int)a1, v14, 3u, 4u, v10, 4096); /*0xfffc69ff*/
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xB0u, 0); /*0xfffc6a11*/
      sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xBCu, v11); /*0xfffc6a22*/
    }
    sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xB4u, 0); /*0xfffc6a39*/
    sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xACu, 0); /*0xfffc6a4a*/
    sub_FFFC4F7F((int)a1, v14, 3u, 4u, 0x6Cu, 0); /*0xfffc6a58*/
    sub_FFFC4F7F((int)a1, v14, 3u, 4u, 0x6Cu, a2); /*0xfffc6a6a*/
  }
  return v3; /*0xfffc6a76*/
}

/* 0xfffc6a79 sub_FFFC6A79 */
int __cdecl sub_FFFC6A79(int a1)
{
  int v1; // edx
  int result; // eax
  unsigned __int8 v3; // bl
  int v4; // eax
  int v5; // edx
  unsigned __int8 v6; // bl
  int v7; // eax
  int v8; // edx
  int v9; // [esp+8h] [ebp-8h]
  _BYTE *v10; // [esp+Ch] [ebp-4h]
  unsigned __int8 v11; // [esp+18h] [ebp+8h]

  sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 3u, 0, 0x60u, 148617); /*0xfffc6a9b*/
  result = v1 + 5512; /*0xfffc6aa7*/
  if ( (*(_BYTE *)(v1 + 78) & 0x10) == 0 ) /*0xfffc6aad*/
  {
    v9 = 3; /*0xfffc6aaf*/
    v11 = 4; /*0xfffc6ab2*/
    v10 = (_BYTE *)(v1 + 5512); /*0xfffc6ab6*/
    do /*0xfffc6afb*/
    {
      if ( *v10 ) /*0xfffc6ac2*/
      {
        v3 = *(_BYTE *)(v1 + 6997); /*0xfffc6ac9*/
        v4 = sub_FFFC4EEF(v1, v3, v11, 0, 0xB8u); /*0xfffc6ad6*/
        sub_FFFC4FB2(v5, v3, v11, 0, 0xB8u, v4 | 0x20); /*0xfffc6ae6*/
      }
      v10 += 430; /*0xfffc6aee*/
      ++v11; /*0xfffc6af5*/
      --v9; /*0xfffc6af8*/
    }
    while ( v9 ); /*0xfffc6afb*/
    v6 = *(_BYTE *)(v1 + 6997); /*0xfffc6aff*/
    v7 = sub_FFFC4EEF(v1, v6, 3u, 0, 0x70u); /*0xfffc6b0c*/
    return sub_FFFC4FB2(v8, v6, 3u, 0, 0x70u, v7); /*0xfffc6b19*/
  }
  return result; /*0xfffc6b22*/
}

/* 0xfffc6b26 sub_FFFC6B26 */
int __cdecl sub_FFFC6B26(int a1)
{
  unsigned __int16 v2; // di
  unsigned __int8 v4; // al
  _WORD *v5; // ebx
  int v6; // eax
  _WORD *v7; // edx
  int v8; // eax
  int v9; // edx
  unsigned int v10; // edi
  _BYTE *v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // dl
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // dl
  int v24; // edi
  unsigned __int16 v25; // ax
  int v26; // eax
  unsigned __int8 v27; // dl
  int v28; // eax
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // dl
  int v31; // eax
  char v32; // cl
  int v33; // eax
  char v34; // cl
  char v35; // cl
  int v36; // ebx
  char v37; // cl
  unsigned __int8 v38; // dl
  unsigned __int16 v39; // ax
  unsigned __int8 v40; // dl
  unsigned __int8 v41; // cl
  int v42; // eax
  int v43; // eax
  bool v44; // zf
  _WORD *v45; // eax
  unsigned __int16 *v46; // edi
  unsigned int v47; // eax
  unsigned __int8 v48; // bl
  __int16 v49; // dx
  __int16 v50; // dx
  int v51; // [esp+8h] [ebp-28h]
  int v52; // [esp+Ch] [ebp-24h]
  unsigned __int16 v53; // [esp+10h] [ebp-20h]
  unsigned __int16 v54; // [esp+14h] [ebp-1Ch]
  int v55; // [esp+14h] [ebp-1Ch]
  int v56; // [esp+14h] [ebp-1Ch]
  unsigned __int8 v57; // [esp+14h] [ebp-1Ch]
  unsigned __int16 v58; // [esp+18h] [ebp-18h]
  unsigned __int8 v59; // [esp+18h] [ebp-18h]
  int v60; // [esp+18h] [ebp-18h]
  int v61; // [esp+1Ch] [ebp-14h]
  int v62; // [esp+1Ch] [ebp-14h]
  _BYTE *v63; // [esp+20h] [ebp-10h]
  int v64; // [esp+20h] [ebp-10h]
  int v65; // [esp+20h] [ebp-10h]
  _WORD *v66; // [esp+20h] [ebp-10h]
  _WORD *v67; // [esp+24h] [ebp-Ch]
  int v68; // [esp+24h] [ebp-Ch]
  int v69; // [esp+24h] [ebp-Ch]
  _BYTE *v70; // [esp+24h] [ebp-Ch]
  char v71; // [esp+28h] [ebp-8h]
  _BYTE *v72; // [esp+28h] [ebp-8h]
  int v73; // [esp+28h] [ebp-8h]
  char v74; // [esp+2Eh] [ebp-2h]
  unsigned __int8 v75; // [esp+2Fh] [ebp-1h]
  unsigned __int8 v76; // [esp+2Fh] [ebp-1h]
  unsigned __int8 v77; // [esp+2Fh] [ebp-1h]
  unsigned __int8 v78; // [esp+3Bh] [ebp+Bh]
  unsigned __int8 i; // [esp+3Bh] [ebp+Bh]
  unsigned __int8 v80; // [esp+3Bh] [ebp+Bh]

  v2 = 64 - *(unsigned __int8 *)(a1 + 7); /*0xfffc6b3a*/
  sub_FFFC552F(a1); /*0xfffc6b3c*/
  if ( sub_FFFC42BC(a1, v2) ) /*0xfffc6b43*/
    return 1; /*0xfffc6b51*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc6b57*/
  {
    v4 = 7; /*0xfffc6b6d*/
    if ( *(_WORD *)(a1 + 176) >= 0x40u ) /*0xfffc6b6f*/
    {
      do /*0xfffc6b7f*/
        --v4; /*0xfffc6b71*/
      while ( *(_WORD *)(a1 + 4 * v4 + 148) >= 0x40u ); /*0xfffc6b7f*/
    }
    v54 = *(_WORD *)(a1 + 4 * v4 + 148); /*0xfffc6b8c*/
    v5 = (_WORD *)(a1 + 148); /*0xfffc6b96*/
    v74 = 0; /*0xfffc6b9c*/
    v78 = 0; /*0xfffc6ba0*/
    v63 = (_BYTE *)(a1 + 7687); /*0xfffc6ba4*/
    v67 = (_WORD *)(a1 + 148); /*0xfffc6ba7*/
    do /*0xfffc6d2a*/
    {
      v6 = *((unsigned __int8 *)v5 - 2) | (2 * *((unsigned __int8 *)v5 - 1)); /*0xfffc6bba*/
      if ( *v5 ) /*0xfffc6bbc*/
        v6 |= ((unsigned __int16)*v5 - 1) << 6; /*0xfffc6bcb*/
      v58 = 4 * v78 + 128; /*0xfffc6be9*/
      sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, v58, v6); /*0xfffc6bec*/
      v53 = 4 * v78 + 192; /*0xfffc6c08*/
      sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, v53, *(_DWORD *)(v5 - 17)); /*0xfffc6c0d*/
      v8 = *((unsigned __int8 *)v7 - 2) | (2 * *((unsigned __int8 *)v7 - 1)); /*0xfffc6c1c*/
      if ( *v7 ) /*0xfffc6c1e*/
        v8 |= ((unsigned __int16)*v7 - 1) << 6; /*0xfffc6c30*/
      sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 3u, 1u, v58, v8); /*0xfffc6c44*/
      v10 = *(_DWORD *)(v9 - 34); /*0xfffc6c49*/
      v71 = 0; /*0xfffc6c4f*/
      v61 = 8; /*0xfffc6c53*/
      do /*0xfffc6c73*/
      {
        if ( ((v10 >> v71) & 0xF) != 0 ) /*0xfffc6c63*/
          v10 += -1 << v71; /*0xfffc6c6a*/
        v71 += 4; /*0xfffc6c6c*/
        --v61; /*0xfffc6c70*/
      }
      while ( v61 ); /*0xfffc6c73*/
      sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 3u, 1u, v53, v10); /*0xfffc6c87*/
      v11 = v63; /*0xfffc6c8c*/
      v75 = 0; /*0xfffc6c98*/
      v72 = (_BYTE *)(a1 + 5512); /*0xfffc6c9c*/
      do /*0xfffc6d14*/
      {
        if ( *v72 ) /*0xfffc6ca2*/
        {
          v12 = sub_FFFC56F6((unsigned __int8)*(v11 - 1), 0, 7u, 24); /*0xfffc6cb9*/
          v13 = sub_FFFC56F6((unsigned __int8)*v11, 0, 1u, 27); /*0xfffc6cc3*/
          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v75 + 4, 1u, v58, *(_DWORD *)(v11 - 5) & 0xFFFFFF | v13 | v12); /*0xfffc6cec*/
          v5 = v67; /*0xfffc6cf1*/
          if ( *v11 ) /*0xfffc6cf7*/
            v74 = 1; /*0xfffc6cfc*/
        }
        ++v75; /*0xfffc6d00*/
        v72 += 430; /*0xfffc6d03*/
        v11 += 1068; /*0xfffc6d0a*/
      }
      while ( v75 < 3u ); /*0xfffc6d14*/
      ++v78; /*0xfffc6d16*/
      v63 += 6; /*0xfffc6d19*/
      v5 += 2; /*0xfffc6d1d*/
      v67 = v5; /*0xfffc6d27*/
    }
    while ( v78 < 8u ); /*0xfffc6d2a*/
    if ( v74 ) /*0xfffc6d34*/
    {
      v14 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 3u, 0, 0x48u); /*0xfffc6d46*/
      sub_FFFC4FB2(a1, v15, 3u, 0, 0x48u, v14 | 0x40); /*0xfffc6d57*/
    }
    v2 = v54; /*0xfffc6d5f*/
  }
  v16 = *(_BYTE *)(a1 + 6); /*0xfffc6d62*/
  v59 = 0; /*0xfffc6d6c*/
  if ( (v16 != 0) != -1 ) /*0xfffc6d70*/
  {
    v51 = v2; /*0xfffc6d79*/
    v52 = (v2 - 1) << 26; /*0xfffc6d85*/
    v62 = (unsigned __int8)((v16 != 0) + 1); /*0xfffc6d88*/
    do /*0xfffc7043*/
    {
      v17 = v59; /*0xfffc6d8e*/
      v76 = 0; /*0xfffc6d91*/
      if ( v16 ) /*0xfffc6d95*/
      {
        if ( *(_WORD *)(a1 + 38) < *(_WORD *)(a1 + 40) ) /*0xfffc6da3*/
        {
          sub_FFFC4FB2(a1, v59, 0x10u, 1u, 0x6Cu, 0); /*0xfffc6db0*/
          sub_FFFC4FB2(a1, v18, 0x10u, 1u, 0x78u, *(unsigned __int16 *)(a1 + 38)); /*0xfffc6dc0*/
          sub_FFFC4FB2(a1, v19, 0x10u, 1u, 0x7Cu, *(unsigned __int16 *)(a1 + 40)); /*0xfffc6dd0*/
          sub_FFFC4FB2(a1, v20, 0x10u, 1u, 0x70u, 1); /*0xfffc6ddf*/
          v76 = 1; /*0xfffc6de7*/
        }
        if ( *(_WORD *)(a1 + 42) < *(_WORD *)(a1 + 44) ) /*0xfffc6df3*/
        {
          sub_FFFC4FB2(a1, v17, 0x10u, 1u, 0x6Cu, v76); /*0xfffc6e03*/
          sub_FFFC4FB2(a1, v21, 0x10u, 1u, 0x78u, *(unsigned __int16 *)(a1 + 42)); /*0xfffc6e13*/
          sub_FFFC4FB2(a1, v22, 0x10u, 1u, 0x7Cu, *(unsigned __int16 *)(a1 + 44)); /*0xfffc6e23*/
          sub_FFFC4FB2(a1, v23, 0x10u, 1u, 0x70u, 1); /*0xfffc6e32*/
          ++v76; /*0xfffc6e3a*/
        }
      }
      for ( i = 0; i < 8u; ++i ) /*0xfffc6e3d*/
      {
        sub_FFFC4FB2(a1, v17, 0x10u, 1u, 0x6Cu, v76); /*0xfffc6e4d*/
        v24 = a1 + 4 * i; /*0xfffc6e56*/
        if ( *(_BYTE *)(v24 + 146) == 1 ) /*0xfffc6e66*/
        {
          v25 = *(_WORD *)(a1 + 4 * i + 148); /*0xfffc6e6c*/
          if ( v25 ) /*0xfffc6e77*/
            v26 = v25 - 1; /*0xfffc6e80*/
          else
            v26 = 0; /*0xfffc6e79*/
          sub_FFFC4FB2(a1, v17, 0x10u, 1u, 0x7Cu, v26); /*0xfffc6e89*/
          if ( i ) /*0xfffc6e95*/
            v28 = *(unsigned __int16 *)(a1 + 4 * i + 144); /*0xfffc6e9e*/
          else
            v28 = 0; /*0xfffc6e97*/
          sub_FFFC4FB2(a1, v27, 0x10u, 1u, 0x78u, v28); /*0xfffc6eae*/
          if ( *(_DWORD *)(v24 + 114) == 35782929 ) /*0xfffc6ebd*/
          {
            sub_FFFC4FB2(a1, v29, 0x10u, 1u, 0x74u, 135299336); /*0xfffc6ecb*/
            v31 = 276889600; /*0xfffc6ed3*/
          }
          else
          {
            v73 = 0; /*0xfffc6edd*/
            v68 = 12; /*0xfffc6ee1*/
            v64 = 2; /*0xfffc6ee8*/
            v55 = 5; /*0xfffc6eef*/
            do /*0xfffc6f14*/
            {
              v32 = v68; /*0xfffc6ef6*/
              v68 += 4; /*0xfffc6efc*/
              v33 = *(_DWORD *)(v24 + 114) >> v32; /*0xfffc6f00*/
              v34 = v64; /*0xfffc6f02*/
              v64 += 6; /*0xfffc6f05*/
              v73 |= (v33 & 0xF) << v34; /*0xfffc6f0e*/
              --v55; /*0xfffc6f11*/
            }
            while ( v55 ); /*0xfffc6f14*/
            sub_FFFC4FB2(a1, v29, 0x10u, 1u, 0x74u, v73); /*0xfffc6f20*/
            v31 = 0; /*0xfffc6f25*/
            v65 = 0; /*0xfffc6f2a*/
            v69 = 16; /*0xfffc6f2d*/
            v56 = 3; /*0xfffc6f30*/
            do /*0xfffc6f54*/
            {
              v35 = v65; /*0xfffc6f37*/
              v65 += 4; /*0xfffc6f3d*/
              v36 = *(_DWORD *)(v24 + 114) >> v35; /*0xfffc6f41*/
              v37 = v69; /*0xfffc6f43*/
              v69 += 6; /*0xfffc6f46*/
              v31 |= (v36 & 0xF) << v37; /*0xfffc6f4f*/
              --v56; /*0xfffc6f51*/
            }
            while ( v56 ); /*0xfffc6f54*/
            if ( *(_BYTE *)(v24 + 147) ) /*0xfffc6f56*/
              v31 |= 6u; /*0xfffc6f62*/
          }
          sub_FFFC4FB2(a1, v30, 0x10u, 1u, 0x70u, v31 | 1); /*0xfffc6f70*/
          ++v76; /*0xfffc6f78*/
        }
      }
      sub_FFFC4FB2(a1, v17, 0x14u, 0, 0xD0u, v52); /*0xfffc6f97*/
      *(_DWORD *)(a1 + 94) = v51; /*0xfffc6f9f*/
      v39 = *(_WORD *)(a1 + 176); /*0xfffc6fa2*/
      *(_DWORD *)(a1 + 90) = 0; /*0xfffc6fb0*/
      *(_DWORD *)(a1 + 98) = 0; /*0xfffc6fb3*/
      *(_DWORD *)(a1 + 102) = 0; /*0xfffc6fb6*/
      if ( v39 > 0x40u ) /*0xfffc6fb9*/
      {
        sub_FFFC4FB2(a1, v38, 0x14u, 0, 0xD8u, (v39 - 1) >> 6); /*0xfffc6fcd*/
        sub_FFFC4FB2(a1, v40, 0x14u, 0, 0xD4u, (*(unsigned __int16 *)(a1 + 176) - 1) << 26); /*0xfffc6fe8*/
        v41 = 7; /*0xfffc6ff7*/
        if ( !*(_BYTE *)(a1 + 174) ) /*0xfffc6ff0*/
        {
          do /*0xfffc7008*/
            --v41; /*0xfffc6ffb*/
          while ( !*(_BYTE *)(a1 + 4 * v41 + 146) ); /*0xfffc7008*/
        }
        v42 = v41; /*0xfffc700a*/
        *(_DWORD *)(a1 + 102) = *(unsigned __int16 *)(a1 + 4 * v41 + 148); /*0xfffc7015*/
        while ( *(_BYTE *)(a1 + 4 * v42 + 146) == 1 ) /*0xfffc7027*/
          v42 = --v41; /*0xfffc701c*/
        v43 = *(unsigned __int16 *)(a1 + 4 * v41 + 148); /*0xfffc702c*/
        *(_DWORD *)(a1 + 102) -= v43; /*0xfffc7034*/
        *(_DWORD *)(a1 + 98) = v43; /*0xfffc7037*/
      }
      v44 = v62-- == 1; /*0xfffc703a*/
      v16 = *(_BYTE *)(a1 + 6); /*0xfffc703d*/
      v59 = v16; /*0xfffc7040*/
    }
    while ( !v44 ); /*0xfffc7043*/
  }
  if ( sub_FFFC4A34(a1) ) /*0xfffc704a*/
    return 1; /*0xfffc7056*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc705c*/
  {
    v70 = (_BYTE *)(a1 + 5512); /*0xfffc706f*/
    v45 = (_WORD *)(a1 + 7095); /*0xfffc7072*/
    v77 = 0; /*0xfffc7078*/
    v60 = a1 + 7095; /*0xfffc707c*/
    do /*0xfffc7132*/
    {
      if ( *v70 ) /*0xfffc7082*/
      {
        v80 = 0; /*0xfffc7091*/
        v57 = v77 + 4; /*0xfffc7095*/
        v46 = v45 + 8; /*0xfffc7098*/
        v66 = v45; /*0xfffc709b*/
        do /*0xfffc7117*/
        {
          v47 = (unsigned __int16)*v66; /*0xfffc70a7*/
          if ( *v66 ) /*0xfffc70a1*/
            v47 = (v47 >> 2) - 1; /*0xfffc70af*/
          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v57, 2u, 4 * v80 + 64, v47); /*0xfffc70cd*/
          v48 = 0; /*0xfffc70d5*/
          v50 = 4 * v49 + 32; /*0xfffc70d7*/
          do /*0xfffc710a*/
            sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v57, 2u, 4 * (v50 + v48++), *v46++); /*0xfffc70fb*/
          while ( v48 < 4u ); /*0xfffc710a*/
          ++v80; /*0xfffc710c*/
          ++v66; /*0xfffc710f*/
        }
        while ( v80 < 8u ); /*0xfffc7117*/
      }
      ++v77; /*0xfffc711c*/
      v70 += 430; /*0xfffc711f*/
      v45 = (_WORD *)(v60 + 1068); /*0xfffc7126*/
      v60 += 1068; /*0xfffc712f*/
    }
    while ( v77 < 3u ); /*0xfffc7132*/
  }
  return 0; /*0xfffc713b*/
}

/* 0xfffc713f sub_FFFC713F */
int __cdecl sub_FFFC713F(int a1, unsigned __int8 a2, char a3)
{
  int v3; // esi
  int v4; // ebx
  unsigned __int8 v5; // dl
  int v6; // edx

  v3 = 3297 * a2 + a1; /*0xfffc7152*/
  v4 = ((unsigned __int8)sub_FFFC4E96(a1, *(_BYTE *)(v3 + 6997), 3u, 4u, 0x50u) >> 1) & 0xF; /*0xfffc7175*/
  sub_FFFC4FB2(a1, v5, a3 + 4, 0, 0xE0u, *(unsigned __int8 *)(v3 + 7006) | (v4 << 8)); /*0xfffc7194*/
  sub_FFFC4FB2( /*0xfffc71d3*/
    a1,
    *(_BYTE *)(v3 + 6997),
    a3 + 4,
    0,
    0xE4u,
    (v4 * (2 - ((unsigned int)(*(unsigned __int8 *)(v3 + 7006) % v4 == 0) + 1)) % *(unsigned __int8 *)(v3 + 7006))
  | 0x100);
  return v6; /*0xfffc71db*/
}

/* 0xfffc71e2 sub_FFFC71E2 */
int __cdecl sub_FFFC71E2(int a1, unsigned __int8 a2)
{
  int v2; // edx
  int v3; // eax
  unsigned __int8 v4; // cl
  unsigned __int8 v5; // di
  int result; // eax
  int v7; // eax
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // [esp+Ch] [ebp-4h]
  _BYTE *v13; // [esp+18h] [ebp+8h]
  int v14; // [esp+1Ch] [ebp+Ch]

  v2 = a1; /*0xfffc71eb*/
  v3 = 3049 * a2; /*0xfffc71f0*/
  v4 = *(_BYTE *)(3297 * a2 + a1 + 6997); /*0xfffc71fc*/
  v14 = 0; /*0xfffc7203*/
  v5 = v4; /*0xfffc720e*/
  v13 = (_BYTE *)(v3 + a1 + 5512); /*0xfffc7219*/
  v12 = 3; /*0xfffc721c*/
  do /*0xfffc7296*/
  {
    result = (int)v13; /*0xfffc721f*/
    if ( *v13 ) /*0xfffc7222*/
    {
      v7 = sub_FFFC4EEF(v2, v5, 3u, 4u, 0x5Cu); /*0xfffc722e*/
      sub_FFFC4FB2(v8, v5, 3u, 4u, 0x5Cu, (v14 << 25) | v7 & 0xF9FFFFFF); /*0xfffc7248*/
      sub_FFFC4FB2(v9, v5, 3u, 4u, 0xC4u, -1); /*0xfffc7259*/
      sub_FFFC4F4E(v10, v5, 3u, 4u, 0xCCu, 255); /*0xfffc7270*/
      result = sub_FFFC4FB2(v11, v5, 3u, 4u, 0xC8u, -1); /*0xfffc7281*/
    }
    ++v14; /*0xfffc7289*/
    v13 += 430; /*0xfffc728c*/
    --v12; /*0xfffc7293*/
  }
  while ( v12 ); /*0xfffc7296*/
  return result; /*0xfffc7298*/
}

/* 0xfffc729c sub_FFFC729C */
int __cdecl sub_FFFC729C(int a1, unsigned __int8 a2, char a3, char a4)
{
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // dl
  char v8; // al
  char v9; // dl
  char v10; // dl
  unsigned __int8 v12; // [esp+14h] [ebp+8h]

  v12 = *(_BYTE *)(3297 * a2 + a1 + 6997); /*0xfffc72c0*/
  if ( sub_FFFC531F(a1, a2, 742424710, 4u) ) /*0xfffc72c4*/
    sub_FFFC4F4E(a1, v12, 3u, 2u, 0x48u, 0); /*0xfffc72dd*/
  sub_FFFC4F7F(a1, v12, 3u, 0, 0x7Cu, 1024); /*0xfffc72f5*/
  sub_FFFC4FB2(a1, v12, v5, 0, 0x78u, 0); /*0xfffc7301*/
  sub_FFFC4FB2(a1, v12, v6, 4u, 0xC8u, -1); /*0xfffc7312*/
  v8 = sub_FFFC4E96(a1, v12, v7, 4u, 0xA8u); /*0xfffc7325*/
  v9 = v8; /*0xfffc7331*/
  if ( a3 ) /*0xfffc7333*/
    v9 = v8 | 2; /*0xfffc7335*/
  sub_FFFC4F4E(a1, v12, 3u, 4u, 0xA8u, a4 | v9); /*0xfffc7348*/
  return sub_FFFC4F4E(a1, v12, 3u, 4u, 0xA8u, v10 | 1); /*0xfffc7360*/
}

/* 0xfffc7365 sub_FFFC7365 */
void __cdecl sub_FFFC7365(_BYTE *a1, char a2, unsigned __int8 a3)
{
  int v3; // edx
  unsigned __int8 v4; // si
  int v5; // eax
  int v6; // edx
  int v7; // edx
  BOOL v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // [esp+0h] [ebp-14h]
  _BYTE *v39; // [esp+4h] [ebp-10h]
  char v40; // [esp+8h] [ebp-Ch]
  int v41; // [esp+Ch] [ebp-8h]

  v3 = (int)a1; /*0xfffc7365*/
  if ( a1[3755] && a1[3758] ) /*0xfffc7379*/
  {
    v38 = 0; /*0xfffc738c*/
    v40 = 0; /*0xfffc7390*/
    v4 = a1[6997]; /*0xfffc73a0*/
    v39 = a1 + 5512; /*0xfffc73ac*/
    v41 = 3; /*0xfffc73b0*/
    do /*0xfffc7661*/
    {
      if ( *v39 ) /*0xfffc73be*/
      {
        v5 = sub_FFFC4EEF(v3, v4, 3u, 4u, 0x5Cu); /*0xfffc73cd*/
        sub_FFFC4FB2(v6, v4, 3u, 4u, 0x5Cu, (v38 << 25) | ((1 << v40) | v5) & 0xF9FFFFFF); /*0xfffc73f5*/
        v8 = sub_FFFC536F(v7, 0, 742424710, 2); /*0xfffc7407*/
        if ( a2 ) /*0xfffc7414*/
        {
          if ( v8 ) /*0xfffc741c*/
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7429*/
            sub_FFFC4FB2(v10, v4, 3u, 4u, 0xD4u, 40); /*0xfffc7435*/
          }
          else
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD4u, 40); /*0xfffc7442*/
            sub_FFFC4FB2(v12, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7452*/
          }
          sub_FFFC4FB2(v11, v4, 3u, 4u, 0xA8u, a3 << 24); /*0xfffc7468*/
          sub_FFFC4FB2(v13, v4, 3u, 4u, 0xB0u, -1985229329); /*0xfffc747b*/
          sub_FFFC4F7F(v14, v4, 3u, 4u, 0xA8u, 4096); /*0xfffc748a*/
          sub_FFFC4FB2(v15, v4, 3u, 4u, 0xB0u, 19088743); /*0xfffc74a0*/
          sub_FFFC4F7F(v16, v4, 3u, 4u, 0xA8u, 512); /*0xfffc74af*/
          sub_FFFC4FB2(v17, v4, 3u, 4u, 0xB0u, 1556924819); /*0xfffc74c2*/
          sub_FFFC4F7F(v18, v4, 3u, 4u, 0xA8u, 4608); /*0xfffc74d4*/
          sub_FFFC4FB2(v19, v4, 3u, 4u, 0xB0u, -1431688884); /*0xfffc74e7*/
          sub_FFFC4F7F(v20, v4, 3u, 4u, 0xA8u, 1024); /*0xfffc74f6*/
          sub_FFFC4FB2(v21, v4, 3u, 4u, 0xB0u, 370085); /*0xfffc750c*/
          sub_FFFC4F7F(v22, v4, 3u, 4u, 0xA8u, 5120); /*0xfffc751b*/
          sub_FFFC4FB2(v23, v4, 3u, 4u, 0xB0u, 814188); /*0xfffc752e*/
          sub_FFFC4F7F(v24, v4, 3u, 4u, 0xA8u, 24); /*0xfffc753d*/
        }
        else
        {
          if ( v8 ) /*0xfffc754b*/
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7556*/
            sub_FFFC4FB2(v26, v4, 3u, 4u, 0xD4u, 0); /*0xfffc7562*/
          }
          else
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD4u, 0); /*0xfffc756d*/
            sub_FFFC4FB2(v28, v4, 3u, 4u, 0xD8u, 0); /*0xfffc757d*/
          }
          sub_FFFC4FB2(v27, v4, 3u, 4u, 0xA8u, a3 << 24); /*0xfffc7593*/
          sub_FFFC4FB2(v29, v4, 3u, 4u, 0xB0u, -1019412736); /*0xfffc75a6*/
          sub_FFFC4F7F(v30, v4, 3u, 4u, 0xA8u, 4096); /*0xfffc75b5*/
          sub_FFFC4FB2(v31, v4, 3u, 4u, 0xB0u, -16711936); /*0xfffc75cb*/
        }
        sub_FFFC4FB2(v25, v4, 3u, 4u, 0xB4u, 0); /*0xfffc75db*/
        sub_FFFC4F4E(v32, v4, 3u, 4u, 0xACu, 0); /*0xfffc75ee*/
        sub_FFFC4FB2(v33, v4, 3u, 4u, 0xB8u, 0); /*0xfffc75fe*/
        sub_FFFC4FB2(v34, v4, 3u, 4u, 0xBCu, 0); /*0xfffc760e*/
        sub_FFFC4F4E(v35, v4, 3u, 4u, 0xCCu, 255); /*0xfffc7624*/
        sub_FFFC4FB2(v36, v4, 3u, 4u, 0xC8u, -1); /*0xfffc7634*/
        sub_FFFC4FB2(v37, v4, 3u, 4u, 0xC4u, -1); /*0xfffc7644*/
      }
      ++v38; /*0xfffc764c*/
      v39 += 430; /*0xfffc7650*/
      v40 += 2; /*0xfffc7658*/
      --v41; /*0xfffc765d*/
    }
    while ( v41 ); /*0xfffc7661*/
  }
}

/* 0xfffc766f sub_FFFC766F */
void __cdecl sub_FFFC766F(_BYTE *a1, char a2, unsigned __int8 a3)
{
  int v3; // edx
  unsigned __int8 v4; // si
  int v5; // eax
  int v6; // edx
  int v7; // edx
  BOOL v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // [esp+0h] [ebp-14h]
  _BYTE *v39; // [esp+4h] [ebp-10h]
  char v40; // [esp+8h] [ebp-Ch]
  int v41; // [esp+Ch] [ebp-8h]

  v3 = (int)a1; /*0xfffc766f*/
  if ( a1[3755] && a1[3758] ) /*0xfffc7683*/
  {
    v38 = 0; /*0xfffc7696*/
    v40 = 0; /*0xfffc769a*/
    v4 = a1[6997]; /*0xfffc76aa*/
    v39 = a1 + 5512; /*0xfffc76b6*/
    v41 = 3; /*0xfffc76ba*/
    do /*0xfffc796e*/
    {
      if ( *v39 ) /*0xfffc76c8*/
      {
        v5 = sub_FFFC4EEF(v3, v4, 3u, 4u, 0x5Cu); /*0xfffc76d7*/
        sub_FFFC4FB2(v6, v4, 3u, 4u, 0x5Cu, (v38 << 25) | ((1 << v40) | v5) & 0xF9FFFFFF); /*0xfffc76ff*/
        v8 = sub_FFFC536F(v7, 0, 742424710, 2); /*0xfffc7711*/
        if ( a2 ) /*0xfffc771e*/
        {
          if ( v8 ) /*0xfffc7726*/
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7733*/
            sub_FFFC4FB2(v10, v4, 3u, 4u, 0xD4u, 40); /*0xfffc773f*/
          }
          else
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD4u, 40); /*0xfffc774c*/
            sub_FFFC4FB2(v12, v4, 3u, 4u, 0xD8u, 0); /*0xfffc775c*/
          }
          sub_FFFC4FB2(v11, v4, 3u, 4u, 0xA8u, a3 << 24); /*0xfffc7772*/
          sub_FFFC4FB2(v13, v4, 3u, 4u, 0xB0u, -1985229329); /*0xfffc7785*/
          sub_FFFC4F7F(v14, v4, 3u, 4u, 0xA8u, 4096); /*0xfffc7794*/
          sub_FFFC4FB2(v15, v4, 3u, 4u, 0xB0u, 19088743); /*0xfffc77aa*/
          sub_FFFC4F7F(v16, v4, 3u, 4u, 0xA8u, 512); /*0xfffc77b9*/
          sub_FFFC4FB2(v17, v4, 3u, 4u, 0xB0u, 1556924819); /*0xfffc77cc*/
          sub_FFFC4F7F(v18, v4, 3u, 4u, 0xA8u, 4608); /*0xfffc77de*/
          sub_FFFC4FB2(v19, v4, 3u, 4u, 0xB0u, -1431688884); /*0xfffc77f1*/
          sub_FFFC4F7F(v20, v4, 3u, 4u, 0xA8u, 1024); /*0xfffc7800*/
          sub_FFFC4FB2(v21, v4, 3u, 4u, 0xB0u, 370085); /*0xfffc7816*/
          sub_FFFC4F7F(v22, v4, 3u, 4u, 0xA8u, 5120); /*0xfffc7825*/
          sub_FFFC4FB2(v23, v4, 3u, 4u, 0xB0u, 814188); /*0xfffc7838*/
          sub_FFFC4F7F(v24, v4, 3u, 4u, 0xA8u, 24); /*0xfffc7847*/
        }
        else
        {
          if ( v8 ) /*0xfffc7855*/
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7860*/
            sub_FFFC4FB2(v26, v4, 3u, 4u, 0xD4u, 0); /*0xfffc786c*/
          }
          else
          {
            sub_FFFC4FB2(v9, v4, 3u, 4u, 0xD4u, 0); /*0xfffc7877*/
            sub_FFFC4FB2(v28, v4, 3u, 4u, 0xD8u, 0); /*0xfffc7887*/
          }
          sub_FFFC4FB2(v27, v4, 3u, 4u, 0xA8u, a3 << 24); /*0xfffc789d*/
          sub_FFFC4FB2(v29, v4, 3u, 4u, 0xB0u, -1019412736); /*0xfffc78b0*/
          sub_FFFC4F7F(v30, v4, 3u, 4u, 0xA8u, 4096); /*0xfffc78bf*/
          sub_FFFC4FB2(v31, v4, 3u, 4u, 0xB0u, -16711936); /*0xfffc78d5*/
        }
        sub_FFFC4FB2(v25, v4, 3u, 4u, 0xB4u, 0); /*0xfffc78e5*/
        sub_FFFC4F4E(v32, v4, 3u, 4u, 0xACu, 0); /*0xfffc78f8*/
        sub_FFFC4FB2(v33, v4, 3u, 4u, 0xB8u, 0); /*0xfffc7908*/
        sub_FFFC4FB2(v34, v4, 3u, 4u, 0xBCu, 170); /*0xfffc791b*/
        sub_FFFC4F4E(v35, v4, 3u, 4u, 0xCCu, 255); /*0xfffc7931*/
        sub_FFFC4FB2(v36, v4, 3u, 4u, 0xC8u, -1); /*0xfffc7941*/
        sub_FFFC4FB2(v37, v4, 3u, 4u, 0xC4u, -1); /*0xfffc7951*/
      }
      ++v38; /*0xfffc7959*/
      v39 += 430; /*0xfffc795d*/
      v40 += 2; /*0xfffc7965*/
      --v41; /*0xfffc796a*/
    }
    while ( v41 ); /*0xfffc796e*/
  }
}

/* 0xfffc797c sub_FFFC797C */
char __cdecl sub_FFFC797C(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  int v9; // esi
  int v10; // ebx
  int v11; // edx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  unsigned __int8 v21; // bl
  int v22; // edx
  BOOL v23; // eax
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // [esp-1Ch] [ebp-48h]
  _BYTE *i; // [esp+10h] [ebp-1Ch]
  int v34; // [esp+14h] [ebp-18h]
  int v35; // [esp+18h] [ebp-14h]
  int v36; // [esp+1Ch] [ebp-10h]
  char v37; // [esp+20h] [ebp-Ch]
  unsigned __int8 v38; // [esp+26h] [ebp-6h]
  char v39; // [esp+2Ah] [ebp-2h]
  unsigned __int8 v40; // [esp+2Bh] [ebp-1h]
  unsigned __int8 v41; // [esp+37h] [ebp+Bh]

  v9 = 3049 * a2; /*0xfffc798d*/
  v38 = *(_BYTE *)(3297 * a2 + a1 + 6997); /*0xfffc79a7*/
  v39 = 0; /*0xfffc79af*/
  v10 = v9 + a1 + 5512; /*0xfffc79b4*/
  sub_FFFC4F7F(a1, v38, 3u, 4u, 0x6Cu, 0); /*0xfffc79bb*/
  if ( *(_BYTE *)(v11 + 34) ) /*0xfffc79c3*/
    sub_FFFC4F7F(v11, v38, 3u, 4u, 0x6Cu, 1280); /*0xfffc79ce*/
  else
    sub_FFFC4F7F(v11, v38, 3u, 4u, 0x6Cu, 256); /*0xfffc79df*/
  if ( a9 != 0xFF ) /*0xfffc79eb*/
  {
    v13 = 430 * a9; /*0xfffc79f5*/
    v14 = v13 + v9 + 184 * a3; /*0xfffc7a08*/
    if ( !*(_BYTE *)(v14 + 32 * a4 + v12 + 5630) ) /*0xfffc7a0f*/
      return 0; /*0xfffc7a0f*/
    v10 = v9 + v12 + 5512; /*0xfffc7a19*/
    if ( !*(_BYTE *)(v13 + v10) ) /*0xfffc7a20*/
      return 0; /*0xfffc7a20*/
    if ( *(_BYTE *)(v14 + v12 + 5576) ) /*0xfffc7a26*/
      return 0; /*0xfffc7a26*/
    if ( a6 != 0xFF ) /*0xfffc7a34*/
    {
      v15 = 184 * a6 + v13 + v9; /*0xfffc7a40*/
      if ( !*(_BYTE *)(v15 + 32 * a7 + v12 + 5630) || *(_BYTE *)(v15 + v12 + 5576) ) /*0xfffc7a55*/
        return 0; /*0xfffc7a61*/
    }
  }
  v35 = 0; /*0xfffc7a66*/
  v37 = 0; /*0xfffc7a6a*/
  v17 = 3049 * a2; /*0xfffc7a6e*/
  v36 = v10 - v9; /*0xfffc7a7a*/
  v41 = 0; /*0xfffc7a7d*/
  v34 = v17; /*0xfffc7a81*/
  for ( i = (_BYTE *)(v9 + v12 + 5630); ; i += 430 ) /*0xfffc7a84*/
  {
    if ( !*(_BYTE *)(v36 + v17) /*0xfffc7ae7*/
      || (v18 = 184 * a3 + v17, *(_BYTE *)(v18 + v12 + 5576))
      || !*(_BYTE *)(v18 + 32 * a4 + v12 + 5630) && (a9 == 0xFF || v41 == a9 || !*i) )
    {
      v30 = sub_FFFC4EEF(v12, v38, 3u, 4u, 0x5Cu); /*0xfffc7c5d*/
      sub_FFFC4FB2(v31, v38, 3u, 4u, 0x5Cu, ~(1 << v37) & v30); /*0xfffc7c79*/
      goto LABEL_33; /*0xfffc7c79*/
    }
    v39 = 1; /*0xfffc7af9*/
    v19 = sub_FFFC4EEF(v12, v38, 3u, 4u, 0x5Cu); /*0xfffc7afe*/
    sub_FFFC4FB2(v20, v38, 3u, 4u, 0x5Cu, (v35 << 25) | ((1 << v37) | v19) & 0xF9FFFFFF); /*0xfffc7b25*/
    v21 = a4 | (4 * a3); /*0xfffc7b46*/
    v40 = a7 | (4 * a6); /*0xfffc7b4a*/
    v23 = sub_FFFC536F(v22, a2, 742424710, 2); /*0xfffc7b4d*/
    if ( a5 ) /*0xfffc7b59*/
    {
      if ( v23 ) /*0xfffc7b61*/
      {
        sub_FFFC4FB2(v24, v38, 3u, 4u, 0xD8u, v21); /*0xfffc7b70*/
        sub_FFFC4FB2(v25, v38, 3u, 4u, 0xD4u, 8 * a8); /*0xfffc7b88*/
        if ( a6 == 0xFF ) /*0xfffc7b94*/
          goto LABEL_33; /*0xfffc7b94*/
        sub_FFFC4FB2(v12, v38, 3u, 4u, 0xD8u, v40); /*0xfffc7ba8*/
        v32 = 8 * (a8 | 0x202000); /*0xfffc7bb6*/
        goto LABEL_28; /*0xfffc7bb7*/
      }
      sub_FFFC4FB2(v24, v38, 3u, 4u, 0xD4u, 8 * a8); /*0xfffc7bcd*/
      sub_FFFC4FB2(v27, v38, 3u, 4u, 0xD8u, v21); /*0xfffc7bdf*/
      if ( a6 == 0xFF ) /*0xfffc7beb*/
        goto LABEL_33; /*0xfffc7beb*/
      sub_FFFC4FB2(v12, v38, 3u, 4u, 0xD4u, 8 * (a8 | 0x202000)); /*0xfffc7c06*/
      v29 = v40; /*0xfffc7c0b*/
LABEL_31:
      sub_FFFC4FB2(v28, v38, 3u, 4u, 0xD8u, v29); /*0xfffc7c4f*/
      goto LABEL_33; /*0xfffc7c51*/
    }
    if ( !v23 ) /*0xfffc7c13*/
    {
      sub_FFFC4FB2(v24, v38, 3u, 4u, 0xD4u, 0); /*0xfffc7c47*/
      v29 = v21; /*0xfffc7c4c*/
      goto LABEL_31; /*0xfffc7c4c*/
    }
    sub_FFFC4FB2(v24, v38, 3u, 4u, 0xD8u, v21); /*0xfffc7c22*/
    v32 = 0; /*0xfffc7c27*/
LABEL_28:
    sub_FFFC4FB2(v26, v38, 3u, 4u, 0xD4u, v32); /*0xfffc7c32*/
LABEL_33:
    ++v41; /*0xfffc7c81*/
    ++v35; /*0xfffc7c84*/
    v37 += 2; /*0xfffc7c87*/
    v34 += 430; /*0xfffc7c90*/
    if ( v41 >= 3u ) /*0xfffc7c9a*/
      return v39; /*0xfffc7ca3*/
    v17 = v34; /*0xfffc7a93*/
  }
}

/* 0xfffc7ca8 sub_FFFC7CA8 */
int __cdecl sub_FFFC7CA8(_BYTE *a1)
{
  int result; // eax

  result = (int)a1; /*0xfffc7ca8*/
  if ( a1[3755] ) /*0xfffc7cae*/
  {
    if ( a1[3758] ) /*0xfffc7cb6*/
      return sub_FFFC4F7F((int)a1, a1[6997], 3u, 4u, 0x6Cu, 0); /*0xfffc7ccd*/
  }
  return result; /*0xfffc7cd5*/
}

/* 0xfffc7cd6 sub_FFFC7CD6 */
int __cdecl sub_FFFC7CD6(int a1, unsigned __int8 a2)
{
  int v2; // eax
  int v3; // edx

  v2 = sub_FFFC4EEF(a1, a2, 3u, 4u, 0x5Cu); /*0xfffc7cea*/
  return sub_FFFC4FB2(a1, a2, 3u, 4u, 0x5Cu, (v3 << 25) | (1 << (2 * v3)) | v2 & 0xF9FFFFEA); /*0xfffc7d18*/
}

/* 0xfffc7d1b sub_FFFC7D1B */
void __cdecl sub_FFFC7D1B(int a1)
{
  unsigned __int8 *v1; // ebx
  char v2; // al
  int v3; // edi
  _BYTE *v4; // edx
  char v5; // al
  bool v6; // zf
  unsigned __int8 v7; // al
  unsigned __int16 *v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  int v11; // [esp+4h] [ebp-28h]
  int v12; // [esp+8h] [ebp-24h]
  unsigned __int16 *v13; // [esp+Ch] [ebp-20h]
  unsigned __int8 *v14; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+14h] [ebp-18h]
  unsigned __int8 *v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  unsigned int v18; // [esp+20h] [ebp-Ch]
  _BYTE *v19; // [esp+24h] [ebp-8h]
  unsigned __int8 v20; // [esp+2Ah] [ebp-2h]
  unsigned __int8 v21; // [esp+2Bh] [ebp-1h]

  if ( *(_BYTE *)(a1 + 3755) )
  {
    v17 = 0; /*0xfffc7d32*/
    v16 = (unsigned __int8 *)(a1 + 3778); /*0xfffc7d3d*/
    v1 = (unsigned __int8 *)(a1 + 5514); /*0xfffc7d40*/
    v20 = 0; /*0xfffc7d4d*/
    v14 = (unsigned __int8 *)(a1 + 5514); /*0xfffc7d51*/
    v15 = a1 + 5630; /*0xfffc7d54*/
    do
    {
      if ( *(v1 - 2) )
      {
        v2 = *(_BYTE *)(a1 + 1); /*0xfffc7d61*/
        if ( v2 == 1 || v2 == 2 )
        {
          v10 = *(unsigned __int16 *)(v1 + 11); /*0xfffc7e56*/
        }
        else
        {
          v18 = 0; /*0xfffc7d76*/
          if ( *v1 )
          {
            v3 = v15 - 56; /*0xfffc7d88*/
            v19 = (_BYTE *)v15; /*0xfffc7d8b*/
            v11 = *v1; /*0xfffc7d8e*/
            do
            {
              if ( *(_BYTE *)(v3 + 1) )
              {
                v4 = v19; /*0xfffc7d97*/
                v12 = 4; /*0xfffc7d9a*/
                do
                {
                  if ( *v4 )
                  {
                    v5 = *(_BYTE *)(v3 + 12) == 0 ? 0 : 9;
                    v6 = v5 == -9; /*0xfffc7dc5*/
                    v7 = v5 + 9; /*0xfffc7dc5*/
                    v21 = 0; /*0xfffc7dc7*/
                    if ( !v6 ) /*0xfffc7dcb*/
                    {
                      v8 = (unsigned __int16 *)(v17 + 144 * (unsigned __int8)v4[2] + a1 + 3782); /*0xfffc7dd3*/
                      v13 = v8; /*0xfffc7dd9*/
                      do /*0xfffc7e08*/
                      {
                        if ( *(_BYTE *)(a1 + 3733) || v21 != 8 && v21 != 17 ) /*0xfffc7dec*/
                        {
                          v9 = *v8; /*0xfffc7dee*/
                          if ( v18 < v9 ) /*0xfffc7df4*/
                            v18 = v9; /*0xfffc7df6*/
                        }
                        ++v21; /*0xfffc7dfc*/
                        v8 = v13 + 4; /*0xfffc7dff*/
                        v13 += 4; /*0xfffc7e05*/
                      }
                      while ( v21 < v7 ); /*0xfffc7e08*/
                    }
                    v1 = v14; /*0xfffc7e0a*/
                  }
                  v4 += 32; /*0xfffc7e0d*/
                  --v12; /*0xfffc7e10*/
                }
                while ( v12 );
              }
              v19 += 184; /*0xfffc7e1a*/
              v3 += 184; /*0xfffc7e1d*/
              --v11; /*0xfffc7e1f*/
            }
            while ( v11 );
          }
          v10 = (*(_DWORD *)(a1 + 74) /*0xfffc7e52*/
               + ((v18 * *(_DWORD *)(a1 + 70)) >> 6)
               + *(_DWORD *)(a1 + 70) * (*v16 + 9)
               + 2 * *(_DWORD *)(a1 + 7018)
               + 1000)
              / *(_DWORD *)(a1 + 7018);
        }
        sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v20 + 4, 0, 0xD4u, v10); /*0xfffc7e74*/
      }
      ++v20; /*0xfffc7e7c*/
      v17 += 578; /*0xfffc7e84*/
      v16 += 578; /*0xfffc7e87*/
      v15 += 430; /*0xfffc7e8f*/
      v1 += 430; /*0xfffc7e92*/
      v14 = v1; /*0xfffc7e98*/
    }
    while ( v20 < 3u );
  }
}

/* 0xfffc7ea6 sub_FFFC7EA6 */
int __cdecl sub_FFFC7EA6(unsigned __int8 *a1)
{
  int v1; // edi
  _BYTE *v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned __int8 v10; // cl
  int v11; // eax
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  unsigned __int16 *v14; // ecx
  unsigned __int8 v15; // al
  _WORD *v16; // ecx
  __int64 v17; // rax
  int v18; // edi
  int v19; // edi
  int v20; // eax
  int v21; // edx
  unsigned __int8 v23; // [esp-10h] [ebp-48h]
  unsigned __int8 v24; // [esp-Ch] [ebp-44h]
  _WORD v25[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v26; // [esp+14h] [ebp-24h]
  int v27; // [esp+18h] [ebp-20h]
  _BYTE *v28; // [esp+1Ch] [ebp-1Ch]
  int v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h]
  _BYTE *v31; // [esp+28h] [ebp-10h]
  int v32; // [esp+2Ch] [ebp-Ch]
  unsigned __int8 *v33; // [esp+30h] [ebp-8h]
  unsigned __int8 v34; // [esp+36h] [ebp-2h]
  unsigned __int8 v35; // [esp+37h] [ebp-1h]

  v25[0] = -1; /*0xfffc7eac*/
  v25[1] = -1; /*0xfffc7eb2*/
  v25[2] = -1; /*0xfffc7eb8*/
  v29 = 0; /*0xfffc7ebe*/
  v1 = 2; /*0xfffc7eca*/
  v26 = 2; /*0xfffc7ecb*/
  do
  {
    v30 = 0; /*0xfffc7ece*/
    v27 = 4; /*0xfffc7ed2*/
    do
    {
      v31 = nullptr; /*0xfffc7ed9*/
      v35 = 0; /*0xfffc7edd*/
      do
      {
        if ( a1[3755] )
        {
          v2 = a1 + 5574; /*0xfffc7ef4*/
          LOBYTE(v32) = a1[6997]; /*0xfffc7efa*/
          LOBYTE(v33) = 0; /*0xfffc7efd*/
          v3 = 0; /*0xfffc7f01*/
          v28 = a1 + 5574; /*0xfffc7f03*/
          do /*0xfffc7f76*/
          {
            if ( a1[v3 + 5512] && v2[v1 - 1] && !v2[v1] && a1[v3 + 5628 + v1 + v30] ) /*0xfffc7f2a*/
            {
              sub_FFFC50CF((int)a1, v32, (unsigned __int8)v33); /*0xfffc7f58*/
              v2 = v28; /*0xfffc7f5d*/
            }
            LOBYTE(v33) = (_BYTE)v33 + 1; /*0xfffc7f63*/
            v2 += 430; /*0xfffc7f6b*/
            v3 += 430; /*0xfffc7f6d*/
            v28 = v2; /*0xfffc7f73*/
          }
          while ( (unsigned __int8)v33 < 3u ); /*0xfffc7f76*/
          if ( a1[3755] )
          {
            LOBYTE(v32) = a1[6997]; /*0xfffc7f8b*/
            LOBYTE(v33) = 0; /*0xfffc7f8e*/
            do
            {
              v28 = (_BYTE *)(unsigned __int8)v33; /*0xfffc7f96*/
              v4 = 430 * (unsigned __int8)v33; /*0xfffc7f99*/
              if ( a1[v4 + 5512] )
              {
                v5 = (int)&a1[v4 + 5574]; /*0xfffc7fad*/
                if ( *(_BYTE *)(v1 + v5 - 1) )
                {
                  if ( !*(_BYTE *)(v1 + v5) && a1[v1 + 5628 + v4 + v30] )
                  {
                    if ( v35 >= (unsigned __int8)(*(_BYTE *)(v1 + v5 + 10) == 0 ? 9 : 18) )
                      break; /*0xfffc8002*/
                    if ( a1[3733] || v35 != 8 && v35 != 17 ) /*0xfffc801f*/
                    {
                      while ( sub_FFFC4EEF((int)a1, v32, 3u, 4u, 0xF8u) < 0 ) /*0xfffc803c*/
                        ; /*0xfffc8025*/
                      v7 = *(unsigned __int16 *)&v31[v6 + 2] + 673; /*0xfffc804b*/
                      v8 = a1[2 * v7 + v7] - 2; /*0xfffc8055*/
                      v34 = 0; /*0xfffc8058*/
                      if ( v8 > 0 ) /*0xfffc805c*/
                      {
                        v9 = *(unsigned __int16 *)&v31[v6 + 2] + 673; /*0xfffc8066*/
                        v10 = 0; /*0xfffc806f*/
                        v11 = a1[2 * v9 + v9] - 2; /*0xfffc8071*/
                        do /*0xfffc8085*/
                        {
                          v29 |= 1 << v10; /*0xfffc8079*/
                          v10 = ++v34; /*0xfffc807f*/
                        }
                        while ( v34 < v11 ); /*0xfffc8085*/
                      }
                      v12 = sub_FFFC4EEF((int)a1, v32, 3u, 4u, 0xFCu); /*0xfffc8094*/
                      v13 = v29 & v12; /*0xfffc809c*/
                      v14 = &v25[(_DWORD)v28]; /*0xfffc809f*/
                      if ( v13 < *v14 ) /*0xfffc80a9*/
                        *v14 = v13; /*0xfffc80ab*/
                    }
                  }
                }
              }
              LOBYTE(v33) = (_BYTE)v33 + 1; /*0xfffc80ae*/
            }
            while ( (unsigned __int8)v33 < 3u );
          }
        }
        ++v35; /*0xfffc80bb*/
        v31 += 8; /*0xfffc80be*/
      }
      while ( v35 < 0x12u );
      v30 += 32; /*0xfffc80cc*/
      --v27; /*0xfffc80d0*/
    }
    while ( v27 );
    v1 += 184; /*0xfffc80d9*/
    --v26; /*0xfffc80df*/
  }
  while ( v26 );
  if ( a1[3755] ) /*0xfffc80e8*/
  {
    v15 = a1[6997]; /*0xfffc80f5*/
    v29 = 0; /*0xfffc80fb*/
    LOBYTE(v32) = v15; /*0xfffc80ff*/
    LOBYTE(v30) = 4; /*0xfffc810e*/
    v33 = a1 + 3778; /*0xfffc8112*/
    v31 = a1 + 5512; /*0xfffc8115*/
    v26 = 3; /*0xfffc8118*/
    do /*0xfffc81c8*/
    {
      if ( *v31 ) /*0xfffc8127*/
      {
        v16 = &v25[v29]; /*0xfffc8139*/
        v24 = v30; /*0xfffc814a*/
        v17 = ((unsigned __int16)*v16 >> 6) + *v33 - 1; /*0xfffc814d*/
        v23 = v32; /*0xfffc814e*/
        v18 = ((int)v17 - HIDWORD(v17)) >> 1; /*0xfffc8155*/
        *v16 = v18; /*0xfffc8158*/
        sub_FFFC4EEF((int)a1, v23, v24, 0, 0x9Cu); /*0xfffc815b*/
        v34 = 14; /*0xfffc816f*/
        if ( (unsigned __int16)v18 <= 3u ) /*0xfffc8173*/
          v34 = 13; /*0xfffc8175*/
        v19 = sub_FFFC56F6((unsigned __int16)v18, 3u, 0xFu, 16); /*0xfffc818a*/
        v20 = sub_FFFC56F6(v34, 0, 0xFu, 20); /*0xfffc8195*/
        sub_FFFC4FB2((int)a1, v32, v30, 0, 0x9Cu, v21 | v20 | v19); /*0xfffc81a9*/
      }
      ++v29; /*0xfffc81b1*/
      v31 += 430; /*0xfffc81b4*/
      v33 += 578; /*0xfffc81bb*/
      LOBYTE(v30) = v30 + 1; /*0xfffc81c2*/
      --v26; /*0xfffc81c5*/
    }
    while ( v26 ); /*0xfffc81c8*/
  }
  return 0; /*0xfffc81ce*/
}

/* 0xfffc81d5 sub_FFFC81D5 */
__int64 __cdecl sub_FFFC81D5(int a1)
{
  int v1; // edx
  int v2; // edx
  unsigned __int8 i; // [esp+13h] [ebp-1h]

  v1 = a1; /*0xfffc81db*/
  for ( i = 0; i < 6u; ++i ) /*0xfffc81e7*/
    sub_FFFC4FB2(v1, *(_BYTE *)(v1 + 6997), 3u, 2u, 4 * i + 128, 0); /*0xfffc8206*/
  sub_FFFC4FB2(v1, *(_BYTE *)(v1 + 6997), 3u, 4u, 0x60u, 0); /*0xfffc8228*/
  sub_FFFC4FB2(v2, *(_BYTE *)(v2 + 6997), 3u, 4u, 0x64u, 0); /*0xfffc823e*/
  __writemsr(0x421u, 0); /*0xfffc8256*/
  return 0; /*0xfffc8258*/
}

/* 0xfffc825b sub_FFFC825B */
char __cdecl sub_FFFC825B(int a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  char result; // al

  sub_FFFC4FB2(a1, 0, 0x14u, 1u, 0xC4u, 0); /*0xfffc826f*/
  if ( a2 == 1 ) /*0xfffc827b*/
    sub_FFFC4FB2(a1, v2, 0x14u, 2u, 0xCCu, 1024); /*0xfffc828f*/
  if ( a2 == 3 ) /*0xfffc82a2*/
  {
    __outbyte(0xCF9u, 6u); /*0xfffc82af*/
    return 6; /*0xfffc82ac*/
  }
  else
  {
    result = a2; /*0xfffc82b6*/
    __outbyte(0xCF9u, a2); /*0xfffc82b9*/
  }
  return result; /*0xfffc82b0*/
}

/* 0xfffc82bc sub_FFFC82BC */
unsigned __int32 __cdecl sub_FFFC82BC(int a1)
{
  unsigned __int32 v1; // eax

  v1 = __indword(*(_WORD *)(a1 + 54) + 8); /*0xfffc82d2*/
  return v1 & 0xFFFFFF; /*0xfffc82de*/
}

/* 0xfffc82e0 sub_FFFC82E0 */
unsigned int __cdecl sub_FFFC82E0(int a1, unsigned __int32 a2)
{
  unsigned __int32 v2; // eax

  v2 = sub_FFFC82BC(a1); /*0xfffc82e4*/
  if ( a2 > v2 ) /*0xfffc82f0*/
    HIBYTE(a2) = -1; /*0xfffc82f2*/
  return 1000 * (v2 - a2) / 0xDFB; /*0xfffc830a*/
}

/* 0xfffc8367 sub_FFFC8367 */
int __cdecl sub_FFFC8367(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5, unsigned __int8 a6)
{
  int v6; // edx
  unsigned __int8 v7; // bl
  char v8; // cl

  v6 = 0; /*0xfffc8376*/
  v7 = 0; /*0xfffc8378*/
  if ( *(unsigned __int8 *)(a4 + 2) - 2 > 0 ) /*0xfffc837c*/
  {
    v8 = 0; /*0xfffc837e*/
    do /*0xfffc838f*/
    {
      v6 |= 1 << v8; /*0xfffc8386*/
      v8 = ++v7; /*0xfffc838a*/
    }
    while ( v7 < *(unsigned __int8 *)(a4 + 2) - 2 ); /*0xfffc838f*/
  }
  return sub_FFFC5172(a1, a2, a3, (unsigned __int16 *)a4, a5 & v6, a6); /*0xfffc83ab*/
}

/* 0xfffc83af sub_FFFC83AF */
unsigned __int8 __cdecl sub_FFFC83AF(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 *a5)
{
  unsigned __int32 v6; // edi
  unsigned __int8 v7; // al
  unsigned __int8 v8; // bl
  __int16 v9; // ax
  unsigned __int16 v10; // ax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int32 v14; // [esp+Ch] [ebp-Ch]
  unsigned __int8 v15; // [esp+17h] [ebp-1h]
  unsigned __int8 v16; // [esp+23h] [ebp+Bh]

  v6 = sub_FFFC82BC(a1); /*0xfffc83c4*/
  while ( 1 ) /*0xfffc83d3*/
  {
    v7 = __inbyte(*(_WORD *)(a1 + 58)); /*0xfffc83d3*/
    v8 = v7; /*0xfffc83d7*/
    v15 = v7; /*0xfffc83dd*/
    if ( (v7 & 1) == 0 ) /*0xfffc83e0*/
      break; /*0xfffc83e0*/
    if ( sub_FFFC82E0(a1, v6) >= 0x186A0 ) /*0xfffc83f0*/
    {
      if ( (v8 & 1) != 0 ) /*0xfffc83f5*/
        return v15; /*0xfffc83f5*/
      break; /*0xfffc83f5*/
    }
  }
  __outbyte(*(_WORD *)(a1 + 58), 0x1Eu); /*0xfffc83fb*/
  __outbyte(*(_WORD *)(a1 + 58) + 3, a2); /*0xfffc8424*/
  __outbyte(*(_WORD *)(a1 + 58) + 4, a3); /*0xfffc8439*/
  if ( (a3 & 1) == 0 ) /*0xfffc8443*/
  {
    if ( a4 == 76 ) /*0xfffc8449*/
    {
      __outbyte(*(_WORD *)(a1 + 58) + 5, a5[1]); /*0xfffc8465*/
      __outbyte(*(_WORD *)(a1 + 58) + 6, *a5); /*0xfffc847f*/
    }
    else
    {
      v9 = *(_WORD *)(a1 + 58); /*0xfffc848d*/
      if ( a4 == 68 ) /*0xfffc8491*/
        v10 = v9 + 3; /*0xfffc8493*/
      else
        v10 = v9 + 5; /*0xfffc84a4*/
      __outbyte(v10, *a5); /*0xfffc84a1*/
    }
  }
  __outbyte(*(_WORD *)(a1 + 58) + 2, a4); /*0xfffc84c7*/
  v14 = sub_FFFC82BC(a1); /*0xfffc84d1*/
  do /*0xfffc84ff*/
  {
    v11 = __inbyte(*(_WORD *)(a1 + 58)); /*0xfffc84e1*/
    v16 = v11; /*0xfffc84e2*/
    v15 = v11; /*0xfffc84ea*/
  }
  while ( (v11 & 0x1E) == 0 && sub_FFFC82E0(a1, v14) < 0x186A0 ); /*0xfffc84ff*/
  if ( (v16 & 2) != 0 && (a3 & 1) != 0 ) /*0xfffc8509*/
  {
    v12 = __inbyte(*(_WORD *)(a1 + 58) + 5); /*0xfffc8522*/
    if ( a4 == 76 ) /*0xfffc851c*/
    {
      a5[1] = v12; /*0xfffc8529*/
      v12 = __inbyte(*(_WORD *)(a1 + 58) + 6); /*0xfffc853d*/
    }
    *a5 = v12; /*0xfffc854e*/
  }
  __outbyte(*(_WORD *)(a1 + 58), 0x5Eu); /*0xfffc8564*/
  return v15; /*0xfffc8568*/
}

/* 0xfffc856d sub_FFFC856D */
int __cdecl sub_FFFC856D(int a1, __int16 a2, _DWORD *a3)
{
  unsigned __int16 v3; // ax

  v3 = __inword(a2 + *(_WORD *)(a1 + 56)); /*0xfffc8582*/
  *a3 = v3; /*0xfffc858f*/
  return 0; /*0xfffc8593*/
}

/* 0xfffc8595 sub_FFFC8595 */
int __cdecl sub_FFFC8595(int a1, __int16 a2, unsigned __int16 a3)
{
  __outword(a2 + *(_WORD *)(a1 + 56), a3); /*0xfffc85ae*/
  return 0; /*0xfffc85b2*/
}

/* 0xfffc85b4 sub_FFFC85B4 */
int __cdecl sub_FFFC85B4(int a1, unsigned __int8 a2, char a3)
{
  int result; // eax
  int v4; // edx
  int v5; // edx

  result = 0; /*0xfffc85ba*/
  if ( !*(_BYTE *)(a1 + 35) ) /*0xfffc85bc*/
  {
    if ( *(_BYTE *)(a1 + 1) == 1 ) /*0xfffc85c9*/
    {
      return sub_FFFC4FB2(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3 + 4, 0, 0x54u, 1536); /*0xfffc863e*/
    }
    else
    {
      sub_FFFC4FB2(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3 + 4, 0, 0x54u, 132608); /*0xfffc85ed*/
      result = sub_FFFC531F(v4, a2, 742424710, 4u); /*0xfffc85fd*/
      if ( result ) /*0xfffc8607*/
        return sub_FFFC5621(v5, a2, a3); /*0xfffc8610*/
    }
  }
  return result; /*0xfffc8618*/
}

/* 0xfffc8648 sub_FFFC8648 */
char __cdecl sub_FFFC8648(int a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // cl
  int v4; // ebx
  int v5; // edx
  char v6; // cl
  int v7; // edi
  char v8; // cl

  v3 = *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990); /*0xfffc865e*/
  v4 = 3049 * (unsigned __int8)a2; /*0xfffc8667*/
  v5 = v4 + a1; /*0xfffc8676*/
  if ( 2 * v3 > 9 ) /*0xfffc8679*/
    v6 = 2 * v3 - 9; /*0xfffc8681*/
  else
    v6 = 1; /*0xfffc867b*/
  v7 = *(unsigned __int8 *)(v5 + 3757); /*0xfffc868e*/
  if ( *(_BYTE *)(a1 + 3734) ) /*0xfffc8687*/
    v8 = byte_FFFDC73C[v7] + v6; /*0xfffc869f*/
  else
    v8 = byte_FFFDC734[v7] + v6; /*0xfffc8697*/
  HIBYTE(a2) = v8; /*0xfffc86a9*/
  if ( (*(_BYTE *)(430 * a3 + v5 + 5513) & 0x20) != 0 ) /*0xfffc86bc*/
    HIBYTE(a2) = v8 + 2; /*0xfffc86be*/
  sub_FFFC8367( /*0xfffc86ee*/
    a1,
    *(_BYTE *)(3297 * (unsigned __int8)a2 + a1 + 6997),
    a3,
    *(unsigned __int16 *)(a1 + 260) + a1 + 2 * *(unsigned __int16 *)(a1 + 260) + 2017,
    HIBYTE(a2),
    1u);
  *(_BYTE *)(v4 + 578 * a3 + a1 + 3779) = HIBYTE(a2); /*0xfffc8701*/
  return HIBYTE(a2); /*0xfffc8708*/
}

/* 0xfffc870d sub_FFFC870D */
int __cdecl sub_FFFC870D(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v3; // cl
  int v4; // ecx
  unsigned __int8 v5; // dl
  char v6; // dl
  int v7; // edi
  char v8; // dl

  v3 = *(_BYTE *)(a1 + 1); /*0xfffc8713*/
  if ( v3 != 1 && v3 != 2 ) /*0xfffc871f*/
  {
    v4 = 3049 * a2; /*0xfffc872b*/
    v5 = *(_BYTE *)(v4 + 430 * a3 + a1 + 5529); /*0xfffc8739*/
    if ( 2 * v5 > 8 ) /*0xfffc8749*/
      v6 = 2 * (v5 + 124); /*0xfffc8752*/
    else
      v6 = 1; /*0xfffc874b*/
    v7 = *(unsigned __int8 *)(v4 + a1 + 3757); /*0xfffc875b*/
    if ( *(_BYTE *)(a1 + 3734) ) /*0xfffc8754*/
      v8 = byte_FFFDC74C[v7] + v6; /*0xfffc876d*/
    else
      v8 = byte_FFFDC744[v7] + v6; /*0xfffc8765*/
    *(_BYTE *)(v4 + 578 * a3 + a1 + 3778) = v8; /*0xfffc877b*/
  }
  return sub_FFFC8367( /*0xfffc87d3*/
           a1,
           *(_BYTE *)(3297 * a2 + a1 + 6997),
           a3,
           *(unsigned __int16 *)(a1 + 258) + a1 + 2 * *(unsigned __int16 *)(a1 + 258) + 2017,
           *(unsigned __int8 *)(3049 * a2 + a1 + 578 * a3 + 3778),
           1u);
}

/* 0xfffc87d6 sub_FFFC87D6 */
int __cdecl sub_FFFC87D6(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v6; // eax

  *(_WORD *)(3049 * a2 + a1 + 578 * a3 + 8 * (a6 + 18 * a5) + 3784) = 250; /*0xfffc8816*/
  v6 = *(unsigned __int16 *)(a1 + 148 * a5 + 8 * a6 + 332); /*0xfffc8821*/
  return sub_FFFC8367(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3, v6 + a1 + 2 * v6 + 2017, 250, 0); /*0xfffc8851*/
}

/* 0xfffc8856 sub_FFFC8856 */
int __cdecl sub_FFFC8856(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  int v6; // eax

  *(_WORD *)(3049 * a2 + a1 + 578 * a3 + 8 * (a6 + 18 * a5) + 3782) = 350; /*0xfffc8892*/
  v6 = *(unsigned __int16 *)(a1 + 148 * a5 + 8 * a6 + 330); /*0xfffc88a1*/
  return sub_FFFC8367(a1, *(_BYTE *)(3297 * a2 + a1 + 6997), a3, v6 + a1 + 2 * v6 + 2017, 350, 0); /*0xfffc88d1*/
}

/* 0xfffc88d6 sub_FFFC88D6 */
int __cdecl sub_FFFC88D6(int a1)
{
  unsigned __int16 v1; // dx
  _WORD *v2; // edi
  int v4; // [esp+Ch] [ebp-4h]

  v1 = 0; /*0xfffc88e2*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc88e5*/
  {
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x40u, 858993456); /*0xfffc8900*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x44u, 3355443); /*0xfffc8918*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x4Cu, 18944); /*0xfffc8930*/
  }
  v2 = (_WORD *)(a1 + 148); /*0xfffc8939*/
  v4 = 8; /*0xfffc893f*/
  do /*0xfffc897d*/
  {
    if ( *((_BYTE *)v2 - 2) ) /*0xfffc8947*/
    {
      if ( *v2 >= 0x40u ) /*0xfffc8953*/
        goto LABEL_8; /*0xfffc8953*/
      sub_FFFC29D3(a1, (__m128i *)(v1 << 26), 0, ((unsigned __int16)*v2 - v1) << 26, 0x10u, 0); /*0xfffc8969*/
    }
    v1 = *v2; /*0xfffc8973*/
LABEL_8:
    v2 += 2; /*0xfffc8976*/
    --v4; /*0xfffc8979*/
  }
  while ( v4 ); /*0xfffc897d*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc897f*/
  {
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x40u, 0); /*0xfffc8997*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x44u, 0); /*0xfffc89ab*/
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 0, 1u, 0x4Cu, 512); /*0xfffc89c3*/
  }
  sub_FFFC81D5(a1); /*0xfffc89cc*/
  return 0; /*0xfffc89d2*/
}

/* 0xfffc89d9 sub_FFFC89D9 */
int __cdecl sub_FFFC89D9(int a1)
{
  int v1; // edx
  int v2; // edx
  unsigned __int8 v4; // al
  unsigned int v5; // eax
  bool v6; // cc
  int v7; // eax
  unsigned __int8 v8; // dl
  unsigned int v9; // edi
  char v10; // al
  __int16 v11; // bp
  char v12; // dl
  __int16 v13; // bp
  __int16 v14; // bp
  char v15; // dl
  __int16 v16; // bp
  char v17; // dl
  unsigned int v19; // [esp-4h] [ebp-14h]
  __int16 v20; // [esp+14h] [ebp+4h]

  v1 = (sub_FFFC5238(0x300u) >> 32) & 0xE; /*0xfffc89e7*/
  if ( !v1 ) /*0xfffc89f3*/
    goto LABEL_6; /*0xfffc89f3*/
  v2 = v1 - 12; /*0xfffc89f5*/
  if ( !v2 ) /*0xfffc89f8*/
  {
    v19 = 2; /*0xfffc8a02*/
    goto LABEL_7; /*0xfffc8a04*/
  }
  if ( v2 != 2 ) /*0xfffc89fc*/
  {
LABEL_6:
    v19 = 8; /*0xfffc8a06*/
    goto LABEL_7; /*0xfffc8a06*/
  }
  v19 = 4; /*0xfffc89fe*/
LABEL_7:
  v4 = *(_BYTE *)(a1 + 7); /*0xfffc8a08*/
  if ( v4 < v19 || v4 > 0x30u ) /*0xfffc8a19*/
  {
    *(_BYTE *)(a1 + 7) = 16; /*0xfffc8a21*/
    sub_FFFD9412(a1, 1, 0, -1); /*0xfffc8a25*/
  }
  if ( *(_BYTE *)(a1 + 8) > 0xF0u ) /*0xfffc8a31*/
  {
    *(_BYTE *)(a1 + 8) = 4; /*0xfffc8a39*/
    sub_FFFD9412(a1, 1, 0, -1); /*0xfffc8a3d*/
  }
  v5 = (unsigned __int8)(64 - *(_BYTE *)(a1 + 7)) << 26; /*0xfffc8a5f*/
  v6 = v5 <= *(_DWORD *)(a1 + 86); /*0xfffc8a62*/
  *(_WORD *)(a1 + 68) = 4 * (*(_WORD *)(a1 + 66) - *(unsigned __int8 *)(a1 + 8)); /*0xfffc8a66*/
  if ( !v6 ) /*0xfffc8a6a*/
  {
    *(_DWORD *)(a1 + 86) = v5; /*0xfffc8a71*/
    __outdword(0xCF8u, 0x80FF0150); /*0xfffc8a89*/
    __outdword(0xCFCu, *(_DWORD *)(a1 + 86) | 1); /*0xfffc8aa6*/
    __outdword(0xCF8u, 0x80FE0150); /*0xfffc8abc*/
    __outdword(0xCFCu, *(_DWORD *)(a1 + 86) | 1); /*0xfffc8ad4*/
  }
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc8ad5*/
  {
    v7 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 0, 0, 0); /*0xfffc8aea*/
    v9 = v7 & 0xFFF8FFFF; /*0xfffc8af1*/
    if ( (_WORD)v7 == 0x8086 ) /*0xfffc8aff*/
    {
      *(_DWORD *)(a1 + 3773) = v9; /*0xfffc8b0f*/
      v10 = sub_FFFC4E96(a1, v8, 0, 0, 8u); /*0xfffc8b15*/
      if ( v9 == 742424710 && v10 == 3 ) /*0xfffc8b27*/
        v10 = 2; /*0xfffc8b29*/
      *(_BYTE *)(a1 + 3768) = v10; /*0xfffc8b2b*/
    }
    else
    {
      *(_BYTE *)(a1 + 3755) = 0; /*0xfffc8b01*/
    }
  }
  sub_FFFC4FB2(a1, 0, 0x14u, 1u, 0xA4u, 34668544); /*0xfffc8b41*/
  sub_FFFC81D5(a1); /*0xfffc8b47*/
  v11 = sub_FFFC4EC2(a1, 0, 0x1Fu, 0, 0x40u); /*0xfffc8b60*/
  if ( sub_FFFC4E96(a1, 0, 0x1Fu, 0, 0x44u) >= 0 ) /*0xfffc8b70*/
  {
    *(_WORD *)(a1 + 54) = 2048; /*0xfffc8b88*/
    sub_FFFC4F7F(a1, 0, 0x1Fu, 0, 0x40u, 2049); /*0xfffc8b8e*/
    sub_FFFC4F4E(a1, 0, 0x1Fu, 0, 0x44u, v12 | 0x80); /*0xfffc8ba0*/
  }
  else
  {
    *(_WORD *)(a1 + 54) = v11 & 0xFF80; /*0xfffc8b77*/
  }
  v20 = sub_FFFC4EC2(a1, 0, 0x1Fu, 0, 2u); /*0xfffc8bb9*/
  v13 = sub_FFFC4EC2(a1, 0, 0x1Fu, 0, 0x48u); /*0xfffc8bc8*/
  if ( (sub_FFFC4E96(a1, 0, 0x1Fu, 0, 0x4Cu) & 0x10) != 0 ) /*0xfffc8bd9*/
  {
    if ( v20 == 14864 || v20 == 14868 || v20 == 14874 || v20 == 14870 || v20 == 14872 || v20 == 14878 ) /*0xfffc8c01*/
      v14 = v13 & 0xFF80; /*0xfffc8c0e*/
    else
      v14 = v13 & 0xFFC0; /*0xfffc8c03*/
    *(_WORD *)(a1 + 56) = v14; /*0xfffc8c08*/
  }
  else
  {
    *(_WORD *)(a1 + 56) = 1280; /*0xfffc8c20*/
    sub_FFFC4F7F(a1, 0, 0x1Fu, 0, 0x48u, 1281); /*0xfffc8c26*/
    sub_FFFC4F4E(a1, 0, 0x1Fu, 0, 0x4Cu, v15 | 0x10); /*0xfffc8c35*/
  }
  v16 = sub_FFFC4EC2(a1, 0, 0x1Fu, 3u, 0x20u); /*0xfffc8c50*/
  if ( (sub_FFFC4E96(a1, 0, 0x1Fu, 3u, 4u) & 1) != 0 ) /*0xfffc8c61*/
  {
    *(_WORD *)(a1 + 58) = v16 & 0xFFE0; /*0xfffc8c68*/
  }
  else
  {
    *(_WORD *)(a1 + 58) = 1024; /*0xfffc8c7a*/
    sub_FFFC4F7F(a1, 0, 0x1Fu, 3u, 0x20u, 1025); /*0xfffc8c80*/
    sub_FFFC4F4E(a1, 0, 0x1Fu, 3u, 4u, v17 | 1); /*0xfffc8c90*/
    sub_FFFC4F4E(a1, 0, 0x1Fu, 3u, 0x40u, 1); /*0xfffc8c9e*/
  }
  if ( *(_BYTE *)(a1 + 3755) && !sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffc8cb8*/
    *(_BYTE *)(a1 + 81) &= ~0x20u; /*0xfffc8cc4*/
  return 0; /*0xfffc8cc8*/
}

/* 0xfffc8ccf sub_FFFC8CCF */
BOOL __cdecl sub_FFFC8CCF(int a1)
{
  char v2; // bl
  int v3; // edi
  unsigned int v4; // eax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // bl
  unsigned __int8 *v7; // eax
  char v8; // al
  char v9; // cl
  char v10; // al
  unsigned __int8 i; // al
  _BYTE *v12; // eax
  int v13; // ecx
  unsigned __int8 v14; // al
  unsigned __int8 v15; // bl
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // edx
  __int16 v20; // ax
  unsigned __int8 v21; // al
  char v23; // [esp+Ch] [ebp-10h]
  int v24; // [esp+10h] [ebp-Ch]
  char v25; // [esp+17h] [ebp-5h]
  char v26; // [esp+1Bh] [ebp-1h]
  unsigned __int8 v27; // [esp+24h] [ebp+8h]
  int v28; // [esp+24h] [ebp+8h]
  unsigned __int8 v29; // [esp+27h] [ebp+Bh]

  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffc8ce0*/
  {
    *(_BYTE *)(a1 + 2) = 0; /*0xfffc8ce6*/
    v26 = -1; /*0xfffc8cf1*/
    if ( !*(_BYTE *)(a1 + 3755) || (v2 = *(_BYTE *)(a1 + 3758)) == 0 ) /*0xfffc8d03*/
    {
LABEL_29:
      v9 = v26; /*0xfffc8de6*/
      goto LABEL_31; /*0xfffc8de9*/
    }
    v3 = 3; /*0xfffc8d5c*/
    v4 = ((unsigned int)sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x50u) >> 25) - 3; /*0xfffc8d6b*/
    if ( v5 > v4 ) /*0xfffc8d72*/
      v5 = v4; /*0xfffc8d74*/
    if ( v2 == 2 && v5 > 2u ) /*0xfffc8d7d*/
      v5 = 2; /*0xfffc8d7f*/
    v6 = 0; /*0xfffc8d81*/
    v29 = 0; /*0xfffc8d83*/
    v7 = (unsigned __int8 *)(a1 + 5516); /*0xfffc8d86*/
    do /*0xfffc8dad*/
    {
      if ( *(v7 - 4) ) /*0xfffc8d8c*/
      {
        if ( *v7 == 1 && *(v7 - 2) > 1u ) /*0xfffc8d9c*/
          v29 = *v7; /*0xfffc8d9e*/
        if ( v6 < *v7 ) /*0xfffc8da3*/
          v6 = *v7; /*0xfffc8da5*/
      }
      v7 += 430; /*0xfffc8da7*/
      --v3; /*0xfffc8dac*/
    }
    while ( v3 ); /*0xfffc8dad*/
    if ( v5 ) /*0xfffc8db1*/
    {
      if ( v6 == 2 ) /*0xfffc8db6*/
        goto LABEL_21; /*0xfffc8db6*/
      if ( v6 != 1 ) /*0xfffc8dbb*/
      {
LABEL_25:
        v8 = *(_BYTE *)(a1 + 3); /*0xfffc8dd3*/
        if ( v8 ) /*0xfffc8dd8*/
          v5 = v8 - 1; /*0xfffc8ddc*/
        if ( v5 != 0xFF ) /*0xfffc8de1*/
          v26 = v5; /*0xfffc8de3*/
        goto LABEL_29; /*0xfffc8de3*/
      }
      if ( v29 ) /*0xfffc8dc1*/
      {
LABEL_21:
        v5 = 0; /*0xfffc8dc3*/
        goto LABEL_25; /*0xfffc8dc5*/
      }
    }
    else if ( v6 != 1 ) /*0xfffc8dca*/
    {
      goto LABEL_25; /*0xfffc8dca*/
    }
    if ( v5 > 1u ) /*0xfffc8dcf*/
      v5 = 1; /*0xfffc8dd1*/
    goto LABEL_25; /*0xfffc8dd1*/
  }
  v9 = HIBYTE(a1); /*0xfffc8deb*/
LABEL_31:
  v10 = *(_BYTE *)(a1 + 1); /*0xfffc8dee*/
  if ( v10 == 2 ) /*0xfffc8df3*/
  {
    if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) && *(_BYTE *)(a1 + 3757) != v9 ) /*0xfffc8e0f*/
    {
      *(_BYTE *)(a1 + 3757) = v9; /*0xfffc8e11*/
      *(_BYTE *)(a1 + 1) = 0; /*0xfffc8e15*/
      sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x5Cu, 0); /*0xfffc8e2a*/
    }
  }
  else if ( v10 != 1 && *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffc8e41*/
  {
    *(_BYTE *)(a1 + 3757) = v9; /*0xfffc8e4a*/
  }
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffc8e5f*/
  {
    for ( i = 0; i < 7u; ++i ) /*0xfffc8e72*/
    {
      if ( *(_BYTE *)(7 * i + a1 + 988) == *(_BYTE *)(a1 + 3757) ) /*0xfffc8e81*/
        break; /*0xfffc8e81*/
    }
    *(_BYTE *)(a1 + 3732) = i; /*0xfffc8e8b*/
    v12 = (_BYTE *)(a1 + 5517); /*0xfffc8e91*/
    v13 = 3; /*0xfffc8e97*/
    do /*0xfffc8eb0*/
    {
      if ( *(_BYTE *)(a1 + 3734) && *(v12 - 3) > 1u ) /*0xfffc8ea5*/
        *v12 = 1; /*0xfffc8ea7*/
      v12 += 430; /*0xfffc8eaa*/
      --v13; /*0xfffc8eaf*/
    }
    while ( v13 ); /*0xfffc8eb0*/
    v14 = sub_FFFC4E96(a1, *(_BYTE *)(a1 + 6997), 0, 0, 0xC0u); /*0xfffc8ec3*/
    *(_BYTE *)(a1 + 7006) = v14; /*0xfffc8ec8*/
    *(_DWORD *)(a1 + 7018) = 1000000 / (v14 / 3 + 133 * v14); /*0xfffc8eef*/
    v15 = *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 989); /*0xfffc8eff*/
    v25 = v15; /*0xfffc8f0e*/
    v23 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x50u); /*0xfffc8f1b*/
    if ( v15 != (v23 & 0x1F) ) /*0xfffc8f26*/
      sub_FFFC36AD((_BYTE *)a1, v15); /*0xfffc8f2c*/
    if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffc8f3b*/
    {
      v17 = 2 * *(unsigned __int8 *)(a1 + 7006); /*0xfffc8f52*/
      if ( 3 * v16 > v17 ) /*0xfffc8f59*/
      {
        sub_FFFC36AD((_BYTE *)a1, v17 / 3); /*0xfffc8f63*/
        v15 = *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 989); /*0xfffc8f72*/
        v25 = v15; /*0xfffc8f7b*/
      }
      v27 = 4; /*0xfffc8f83*/
      v24 = 3; /*0xfffc8f87*/
      do /*0xfffc8fe1*/
      {
        v18 = sub_FFFC4EC2(a1, *(_BYTE *)(a1 + 6997), v27, 0, 0xB8u); /*0xfffc8fa3*/
        if ( v19 > *(unsigned __int8 *)(a1 + 7006) ) /*0xfffc8fb4*/
          v20 = v18 | 0x4000; /*0xfffc8fbd*/
        else
          v20 = v18 & 0xBFFF; /*0xfffc8fb6*/
        sub_FFFC4F7F(a1, *(_BYTE *)(a1 + 6997), v27++, 0, 0xB8u, v20); /*0xfffc8fd3*/
        --v24; /*0xfffc8fde*/
      }
      while ( v24 ); /*0xfffc8fe1*/
    }
    else
    {
      v21 = *(_BYTE *)(a1 + 7006); /*0xfffc8fe7*/
      if ( 2 * v16 > v21 ) /*0xfffc8ff5*/
      {
        sub_FFFC36AD((_BYTE *)a1, v21 >> 1); /*0xfffc8ffb*/
        v15 = *(_BYTE *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 989); /*0xfffc900a*/
        v25 = v15; /*0xfffc9013*/
      }
    }
    *(_DWORD *)(a1 + 70) = 1000000 / (v15 / 3 + 133 * v15); /*0xfffc9038*/
    v28 = v15 >> 1; /*0xfffc9041*/
    *(_DWORD *)(a1 + 74) = 1000000 / (v28 / 3 + 133 * v28); /*0xfffc9057*/
    if ( v15 != (v23 & 0x1F) ) /*0xfffc9061*/
    {
      *(_BYTE *)(a1 + 2) = 1; /*0xfffc9068*/
      sub_FFFC4F4E(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x54u, v25); /*0xfffc9079*/
    }
    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 4u, 0, 0xE0u, *(unsigned __int8 *)(a1 + 7006) | (v28 << 8)); /*0xfffc90a4*/
  }
  if ( *(_BYTE *)(a1 + 1) == 2 /*0xfffc90ed*/
    && *(_BYTE *)(a1 + 3755)
    && sub_FFFC52CF(a1, 0, 745570438, 0)
    && (sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 0, 0, 0x88u) & 0x100) != 0 )
  {
    *(_BYTE *)(a1 + 2) = 1; /*0xfffc90ef*/
  }
  if ( *(char *)(a1 + 79) < 0 && *(_BYTE *)(a1 + 2) == 1 ) /*0xfffc90fd*/
    sub_FFFC825B(a1, 1u); /*0xfffc9102*/
  return *(_BYTE *)(a1 + 2) || (*(_BYTE *)(a1 + 80) & 4) != 0; /*0xfffc911c*/
}

/* 0xfffc9121 sub_FFFC9121 */
int __cdecl sub_FFFC9121(_BYTE *a1)
{
  _BYTE *v1; // edx
  unsigned __int8 *v2; // edi
  _BYTE *i; // esi
  unsigned __int8 j; // bl
  unsigned __int8 v5; // al
  unsigned __int16 v6; // cx
  _BYTE *v7; // eax
  unsigned __int8 k; // cl
  _BYTE *v9; // eax
  __int16 v11; // [esp+4h] [ebp-4h]
  unsigned __int8 v12; // [esp+13h] [ebp+Bh]

  a1[3733] = 1; /*0xfffc9129*/
  if ( a1[3755] && a1[3758] ) /*0xfffc913d*/
  {
    if ( (sub_FFFC4E96((int)a1, a1[6997], 3u, 0, 0x4Cu) & 0x10) == 0 ) /*0xfffc9164*/
      v1[3733] = 0; /*0xfffc9166*/
    if ( (v1[80] & 2) == 0 ) /*0xfffc9171*/
      v1[3733] = 0; /*0xfffc9173*/
    v12 = 0; /*0xfffc917d*/
    v2 = v1 + 5514; /*0xfffc9181*/
    for ( i = v1 + 5574; ; i += 430 ) /*0xfffc9187*/
    {
      for ( j = 0; j < 3u; ++j ) /*0xfffc9190*/
      {
        if ( !j ) /*0xfffc9199*/
        {
          v11 = 0; /*0xfffc919b*/
          goto LABEL_19; /*0xfffc919f*/
        }
        v5 = *(i - 60); /*0xfffc91a1*/
        if ( v5 ) /*0xfffc91a6*/
        {
          if ( v5 > 2u ) /*0xfffc91ac*/
          {
            if ( v5 != 3 ) /*0xfffc91b0*/
            {
              v11 = 0; /*0xfffc91b2*/
              goto LABEL_18; /*0xfffc91b6*/
            }
LABEL_16:
            v11 = j << 11; /*0xfffc91c1*/
            goto LABEL_18; /*0xfffc91cb*/
          }
        }
        else if ( v1[3758] == 3 ) /*0xfffc91bf*/
        {
          goto LABEL_16; /*0xfffc91bf*/
        }
        v11 = 4096; /*0xfffc91cd*/
LABEL_18:
        if ( j >= 2u ) /*0xfffc91d7*/
        {
          v6 = v11; /*0xfffc91f8*/
          goto LABEL_23; /*0xfffc91f8*/
        }
LABEL_19:
        v6 = v11; /*0xfffc91d9*/
        v7 = &i[184 * j]; /*0xfffc91e6*/
        if ( v7[1] ) /*0xfffc91e8*/
          v6 = *(_WORD *)(v7 + 25) | v11; /*0xfffc91ee*/
        *(_WORD *)(v7 + 25) = v6; /*0xfffc91f2*/
LABEL_23:
        sub_FFFC4FB2((int)v1, v1[6997], v12 + 4, 1u, 4 * j + 72, v6); /*0xfffc91fc*/
      }
      if ( *(v2 - 2) ) /*0xfffc922e*/
      {
        for ( k = 0; k < *v2; ++k ) /*0xfffc9236*/
        {
          v9 = &i[184 * k]; /*0xfffc9243*/
          if ( v9[1] && (v9[16] & 8) == 0 ) /*0xfffc924f*/
            v1[3733] = 0; /*0xfffc9251*/
        }
      }
      ++v12; /*0xfffc925e*/
      v2 += 430; /*0xfffc9268*/
      if ( v12 >= 3u ) /*0xfffc926e*/
      {
        sub_FFFC5908(v1); /*0xfffc9277*/
        return 0; /*0xfffc9277*/
      }
    }
  }
  return 0; /*0xfffc9283*/
}

/* 0xfffc9285 sub_FFFC9285 */
int __cdecl sub_FFFC9285(int a1)
{
  int result; // eax

  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffc928a*/
  {
    if ( (*(_BYTE *)(a1 + 79) & 4) != 0 ) /*0xfffc9297*/
    {
      sub_FFFC8367( /*0xfffc92bb*/
        a1,
        *(_BYTE *)(a1 + 6997),
        3u,
        *(unsigned __int16 *)(a1 + 178) + a1 + 2 * *(unsigned __int16 *)(a1 + 178) + 1720,
        1,
        1u);
      return sub_FFFC8367( /*0xfffc92e2*/
               a1,
               *(_BYTE *)(a1 + 6997),
               3u,
               *(unsigned __int16 *)(a1 + 180) + a1 + 2 * *(unsigned __int16 *)(a1 + 180) + 1720,
               1,
               1u);
    }
  }
  return result; /*0xfffc92ea*/
}

/* 0xfffc92ec sub_FFFC92EC */
int __cdecl sub_FFFC92EC(int a1, unsigned __int8 a2, char a3)
{
  int v3; // esi
  unsigned __int8 v4; // bl
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  int v9; // edx
  unsigned __int8 v10; // dl
  bool v11; // zf
  unsigned __int8 v12; // dl
  int v13; // eax
  int v14; // eax
  unsigned __int8 v16; // [esp+20h] [ebp+10h]

  v3 = 3297 * a2 + a1; /*0xfffc9300*/
  v4 = sub_FFFC4E96(a1, *(_BYTE *)(v3 + 6997), 3u, 4u, 0x50u) & 0x1F; /*0xfffc9320*/
  v6 = sub_FFFC713F(v5, a2, a3); /*0xfffc932b*/
  v16 = a3 + 4; /*0xfffc9341*/
  sub_FFFC4FB2( /*0xfffc9370*/
    a1,
    *(_BYTE *)(v3 + 6997),
    v16,
    0,
    0xC0u,
    (*(unsigned __int8 *)(v3 + 7006) + (v4 >> 1 << 8))
  | (((v6 + 6 * (unsigned int)(v4 >> 1)) % *(unsigned __int8 *)(v3 + 7006)) << 16));
  v7 = v4; /*0xfffc937c*/
  v8 = v4 - 1; /*0xfffc937f*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v3 + 6997), v16, 0, 0xC8u, *(unsigned __int8 *)(v3 + 7006) | ((v7 | (v8 << 8)) << 8)); /*0xfffc93a3*/
  sub_FFFC4FB2(a1, *(_BYTE *)(v3 + 6997), v16, 0, 0xCCu, v9 << 8); /*0xfffc93c4*/
  v11 = !sub_FFFC52CF(a1, a2, 745570438, v10); /*0xfffc93db*/
  v13 = *(unsigned __int8 *)(v3 + 7006); /*0xfffc93dd*/
  if ( v11 ) /*0xfffc93e4*/
    v14 = (v13 - 1) | ((v13 - 1) << 8); /*0xfffc93f6*/
  else
    v14 = v8 | ((v13 - 1) << 8); /*0xfffc93ea*/
  return sub_FFFC4FB2(a1, *(_BYTE *)(v3 + 6997), v16, v12, 0xD0u, v14); /*0xfffc9414*/
}

/* 0xfffc9419 sub_FFFC9419 */
char __cdecl sub_FFFC9419(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3)
{
  a1[3049 * a2 + 5512 + 430 * a3] = 0; /*0xfffc9441*/
  sub_FFFC4FB2((int)a1, a1[3297 * a2 + 6997], a3 + 4, 0, 0x7Cu, 0); /*0xfffc9461*/
  sub_FFFC5674((int)a1, a2); /*0xfffc946a*/
  sub_FFFC37AE((int)a1, a2, a3, 0, a3); /*0xfffc9477*/
  sub_FFFC9121(a1); /*0xfffc947d*/
  sub_FFFC5A3A((int)a1); /*0xfffc9483*/
  return 0; /*0xfffc948b*/
}

/* 0xfffc9491 sub_FFFC9491 */
char __cdecl sub_FFFC9491(_BYTE *a1, unsigned __int8 a2, char a3, unsigned __int8 a4, _BYTE *a5)
{
  if ( a4 ) /*0xfffc9498*/
  {
    sub_FFFC37AE((int)a1, a2, a3, a4, a3); /*0xfffc94d0*/
    sub_FFFC9121(a1); /*0xfffc94d8*/
    sub_FFFC5A3A((int)a1); /*0xfffc94e0*/
  }
  else
  {
    sub_FFFC9419(a1, a2, a3); /*0xfffc94a5*/
    *a5 &= ~(1 << (a3 + 3 * a2)); /*0xfffc94bd*/
  }
  return 0; /*0xfffc94ea*/
}

/* 0xfffc94ec sub_FFFC94EC */
void __cdecl sub_FFFC94EC(_BYTE *a1)
{
  unsigned __int16 *v1; // edi
  unsigned __int16 *v2; // ebx
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  int v7; // [esp+4h] [ebp-24h]
  int v8; // [esp+8h] [ebp-20h]
  _BYTE *v9; // [esp+Ch] [ebp-1Ch]
  _BYTE *v10; // [esp+10h] [ebp-18h]
  unsigned __int16 *v11; // [esp+14h] [ebp-14h]
  int v12; // [esp+18h] [ebp-10h]
  char v13; // [esp+1Ch] [ebp-Ch]
  unsigned __int8 v14; // [esp+20h] [ebp-8h]
  unsigned __int8 v15; // [esp+24h] [ebp-4h]

  if ( a1[3755] && a1[3758] ) /*0xfffc9503*/
  {
    v14 = a1[6997]; /*0xfffc9516*/
    v10 = a1 + 5512; /*0xfffc951f*/
    v15 = 0; /*0xfffc9529*/
    v9 = a1 + 7677; /*0xfffc952d*/
    do /*0xfffc96b8*/
    {
      if ( *v10 ) /*0xfffc9534*/
      {
        v13 = 0; /*0xfffc953d*/
        v11 = (unsigned __int16 *)(a1 + 332); /*0xfffc9554*/
        v12 = 0; /*0xfffc9557*/
        v7 = 4; /*0xfffc955a*/
        do /*0xfffc969d*/
        {
          if ( ((unsigned __int8)(1 << v13) & *v9) == 0 ) /*0xfffc9570*/
          {
            v1 = v11; /*0xfffc9576*/
            v2 = (unsigned __int16 *)(a1 + 330); /*0xfffc9579*/
            v8 = 18; /*0xfffc957f*/
            do /*0xfffc9686*/
            {
              v3 = sub_FFFC4FE3((int)a1, v14, v15, (int)&a1[2 * v1[v12] + 2017 + v1[v12]]); /*0xfffc959f*/
              sub_FFFC8367((int)a1, v14, v15, (int)&a1[2 * *v1 + 2017 + *v1], v3, 0); /*0xfffc95bf*/
              v4 = sub_FFFC4FE3((int)a1, v14, v15, (int)&a1[2 * v2[2] + 2017 + v2[2]]); /*0xfffc95da*/
              sub_FFFC8367((int)a1, v14, v15, (int)&a1[2 * v1[1] + 2017 + v1[1]], v4, 0); /*0xfffc95fb*/
              v5 = sub_FFFC4FE3((int)a1, v14, v15, (int)&a1[2 * *v2 + 2017 + *v2]); /*0xfffc9618*/
              sub_FFFC8367((int)a1, v14, v15, (int)&a1[2 * *(v1 - 1) + 2017 + *(v1 - 1)], v5, 0); /*0xfffc9639*/
              v6 = sub_FFFC4FE3((int)a1, v14, v15, (int)&a1[2 * *(v2 - 1) + 2017 + *(v2 - 1)]); /*0xfffc9654*/
              sub_FFFC8367((int)a1, v14, v15, (int)&a1[2 * *(v1 - 2) + 2017 + *(v1 - 2)], v6, 0); /*0xfffc9675*/
              v2 += 4; /*0xfffc967d*/
              v1 += 4; /*0xfffc9680*/
              --v8; /*0xfffc9683*/
            }
            while ( v8 ); /*0xfffc9686*/
          }
          ++v13; /*0xfffc968c*/
          v12 -= 74; /*0xfffc9694*/
          v11 += 74; /*0xfffc9697*/
          --v7; /*0xfffc969a*/
        }
        while ( v7 ); /*0xfffc969d*/
      }
      ++v15; /*0xfffc96a3*/
      v10 += 430; /*0xfffc96a6*/
      v9 += 1068; /*0xfffc96ad*/
    }
    while ( v15 < 3u ); /*0xfffc96b8*/
  }
}

/* 0xfffc96c3 sub_FFFC96C3 */
char __cdecl sub_FFFC96C3(int a1, unsigned __int8 a2, unsigned __int8 a3, _DWORD *a4, char a5, char a6)
{
  int v6; // edx
  int v8; // eax
  int v9; // ecx
  unsigned __int8 *v10; // ebx
  int v11; // edx
  _BYTE *v12; // edi
  _DWORD *v13; // edi
  int v14; // edi
  bool v15; // zf
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  unsigned __int8 v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // edi
  int v22; // eax
  char v23; // bl
  int v24; // eax
  unsigned __int8 v25; // bl
  int v26; // eax
  unsigned __int8 v27; // bl
  int v28; // eax
  unsigned __int8 v29; // bl
  int v30; // eax
  int v31; // eax
  unsigned __int8 v32; // cl
  int v33; // ebx
  unsigned __int16 *v34; // ebx
  int v35; // [esp+14h] [ebp-28h]
  int v36; // [esp+14h] [ebp-28h]
  unsigned __int8 *v37; // [esp+14h] [ebp-28h]
  int v38; // [esp+18h] [ebp-24h]
  _BYTE *v39; // [esp+18h] [ebp-24h]
  int v40; // [esp+1Ch] [ebp-20h]
  _BYTE *v41; // [esp+20h] [ebp-1Ch]
  unsigned __int8 *v42; // [esp+24h] [ebp-18h]
  _BYTE *v43; // [esp+28h] [ebp-14h]
  char v44; // [esp+28h] [ebp-14h]
  unsigned __int16 *v45; // [esp+28h] [ebp-14h]
  _DWORD *v46; // [esp+2Ch] [ebp-10h]
  _BYTE *v47; // [esp+2Ch] [ebp-10h]
  unsigned __int8 v48; // [esp+30h] [ebp-Ch]
  int v49; // [esp+34h] [ebp-8h]
  int v50; // [esp+34h] [ebp-8h]
  unsigned __int16 v51; // [esp+34h] [ebp-8h]
  unsigned __int16 v52; // [esp+34h] [ebp-8h]
  unsigned __int16 v53; // [esp+34h] [ebp-8h]
  unsigned __int8 v54; // [esp+39h] [ebp-3h]
  unsigned __int8 v55; // [esp+3Ah] [ebp-2h]
  unsigned __int8 v56; // [esp+3Ah] [ebp-2h]
  unsigned __int8 v57; // [esp+3Bh] [ebp-1h]
  unsigned __int8 v58; // [esp+47h] [ebp+Bh]
  unsigned __int8 v59; // [esp+47h] [ebp+Bh]
  unsigned __int8 v60; // [esp+47h] [ebp+Bh]
  unsigned __int8 v61; // [esp+47h] [ebp+Bh]
  unsigned __int8 v62; // [esp+47h] [ebp+Bh]
  unsigned __int8 v63; // [esp+47h] [ebp+Bh]

  v6 = 3049 * a2; /*0xfffc96cf*/
  v49 = 0; /*0xfffc96db*/
  v8 = a1 + 3297 * a2; /*0xfffc96e4*/
  v48 = *(_BYTE *)(v8 + 6997); /*0xfffc96ec*/
  v9 = 430 * a3; /*0xfffc96f6*/
  v10 = (unsigned __int8 *)(v9 + v6 + a1 + 5512); /*0xfffc9709*/
  v11 = a1 + v9 + v6; /*0xfffc970c*/
  v55 = 0; /*0xfffc9712*/
  v41 = (_BYTE *)v11; /*0xfffc9716*/
  v58 = 0; /*0xfffc9719*/
  v42 = v10; /*0xfffc971d*/
  if ( v10[2] ) /*0xfffc970e*/
  {
    v43 = (_BYTE *)(v11 + 5630); /*0xfffc972c*/
    v38 = v10[2]; /*0xfffc972f*/
    do /*0xfffc975d*/
    {
      v12 = v43; /*0xfffc9732*/
      v35 = 4; /*0xfffc9735*/
      do /*0xfffc9751*/
      {
        if ( *v12 ) /*0xfffc973c*/
          v55 |= 1 << v12[9]; /*0xfffc9748*/
        v12 += 32; /*0xfffc974b*/
        --v35; /*0xfffc974e*/
      }
      while ( v35 ); /*0xfffc9751*/
      v43 += 184; /*0xfffc9753*/
      --v38; /*0xfffc975a*/
    }
    while ( v38 ); /*0xfffc975d*/
  }
  v13 = a4; /*0xfffc975f*/
  v44 = 0; /*0xfffc9762*/
  v46 = a4; /*0xfffc9766*/
  v36 = 4; /*0xfffc9769*/
  do /*0xfffc97c4*/
  {
    if ( ((1 << v44) & v55) != 0 ) /*0xfffc977e*/
    {
      v14 = *v13; /*0xfffc9783*/
      if ( v14 + *(unsigned __int8 *)(1068 * a3 + v8 + 7089) >= 0 /*0xfffc97a3*/
        && v14 + *(unsigned __int8 *)(1068 * a3 + v8 + 7090) <= 127 )
      {
        v13 = v46; /*0xfffc97ad*/
      }
      else
      {
        v13 = v46; /*0xfffc97a5*/
        *v46 = 0; /*0xfffc97a8*/
      }
      v49 += *v13; /*0xfffc97b2*/
      ++v58; /*0xfffc97b5*/
    }
    ++v44; /*0xfffc97b8*/
    ++v13; /*0xfffc97bb*/
    v15 = v36-- == 1; /*0xfffc97be*/
    v46 = v13; /*0xfffc97c1*/
  }
  while ( !v15 ); /*0xfffc97c4*/
  if ( !v58 ) /*0xfffc97ca*/
    return 1; /*0xfffc97cc*/
  v50 = v49 / v58; /*0xfffc97dd*/
  v17 = v10[9]; /*0xfffc97e0*/
  if ( v50 + v17 >= 0 ) /*0xfffc97e9*/
    v59 = (v50 + v17) & 0x7F; /*0xfffc97f6*/
  else
    v59 = 0; /*0xfffc97eb*/
  sub_FFFC8367(a1, v48, a3, *(unsigned __int16 *)(a1 + 278) + a1 + 2 * *(unsigned __int16 *)(a1 + 278) + 2017, v59, 1u); /*0xfffc981a*/
  if ( a5 ) /*0xfffc9826*/
    v10[9] = v59; /*0xfffc982b*/
  v18 = v10[10]; /*0xfffc982e*/
  if ( v50 + v18 >= 0 ) /*0xfffc9837*/
    v60 = (v50 + v18) & 0x7F; /*0xfffc9844*/
  else
    v60 = 0; /*0xfffc9839*/
  sub_FFFC8367(a1, v48, a3, *(unsigned __int16 *)(a1 + 280) + a1 + 2 * *(unsigned __int16 *)(a1 + 280) + 2017, v60, 1u); /*0xfffc9865*/
  if ( a5 ) /*0xfffc9871*/
    v10[10] = v60; /*0xfffc9876*/
  v19 = v10[11]; /*0xfffc9879*/
  if ( v50 + v19 >= 0 ) /*0xfffc9882*/
    v61 = (v50 + v19) & 0x7F; /*0xfffc988f*/
  else
    v61 = 0; /*0xfffc9884*/
  sub_FFFC8367(a1, v48, a3, *(unsigned __int16 *)(a1 + 282) + a1 + 2 * *(unsigned __int16 *)(a1 + 282) + 2017, v61, 1u); /*0xfffc98b0*/
  if ( a5 ) /*0xfffc98bc*/
    v10[11] = v61; /*0xfffc98c1*/
  v20 = v10[12]; /*0xfffc98c4*/
  if ( v50 + v20 >= 0 ) /*0xfffc98cd*/
    v62 = (v50 + v20) & 0x7F; /*0xfffc98da*/
  else
    v62 = 0; /*0xfffc98cf*/
  sub_FFFC8367(a1, v48, a3, *(unsigned __int16 *)(a1 + 284) + a1 + 2 * *(unsigned __int16 *)(a1 + 284) + 2017, v62, 1u); /*0xfffc98fb*/
  if ( a5 ) /*0xfffc9907*/
    v10[12] = v62; /*0xfffc990c*/
  v47 = v41 + 5574; /*0xfffc9917*/
  v56 = 0; /*0xfffc9922*/
  v37 = v41 + 5641; /*0xfffc9926*/
  do
  {
    if ( !v47[2] )
    {
      v21 = v37; /*0xfffc9936*/
      v63 = 0; /*0xfffc993f*/
      v39 = v10 + 486; /*0xfffc9943*/
      do
      {
        if ( *(v21 - 11) )
        {
          if ( *(_BYTE *)(a1 + 3734) || (v63 & 1) == 0 ) /*0xfffc995d*/
          {
            v22 = *(v21 - 2); /*0xfffc995f*/
            v23 = a4[v22]; /*0xfffc9966*/
            v24 = *(unsigned __int16 *)(148 * v22 + a1 + 324); /*0xfffc9971*/
            v25 = (*v21 + v23) & 0x7F; /*0xfffc9979*/
            sub_FFFC8367(a1, v48, a3, v24 + a1 + 2 * v24 + 2017, v25, 1u); /*0xfffc9994*/
            if ( a5 ) /*0xfffc99a0*/
              *v21 = v25; /*0xfffc99a2*/
            v10 = v42; /*0xfffc99a4*/
          }
          if ( v10[2] == 3 && v56 != 1 && *(v39 - 368) && *v39 ) /*0xfffc99bf*/
            v26 = (*a4 + a4[2]) / 2; /*0xfffc99cf*/
          else
            v26 = a4[*(v21 - 2)]; /*0xfffc99da*/
          v27 = (v26 + v21[1]) & 0x7F; /*0xfffc99e2*/
          v28 = *(unsigned __int16 *)(148 * *(v21 - 3) + a1 + 326); /*0xfffc99f5*/
          sub_FFFC8367(a1, v48, a3, v28 + a1 + 2 * v28 + 2017, v27, 1u); /*0xfffc9a0f*/
          if ( a5 ) /*0xfffc9a1b*/
            v21[1] = v27; /*0xfffc9a1d*/
          v29 = (v21[2] + LOBYTE(a4[*(v21 - 2)])) & 0x7F; /*0xfffc9a2f*/
          v30 = *(unsigned __int16 *)(a1 + 2 * *(v21 - 4) + 304); /*0xfffc9a3a*/
          sub_FFFC8367(a1, v48, a3, v30 + a1 + 2 * v30 + 2017, v29, 1u); /*0xfffc9a54*/
          if ( a5 ) /*0xfffc9a60*/
            v21[2] = v29; /*0xfffc9a62*/
          if ( *(v21 - 4) == 4 && v41[5516] == 1 && *v47 == 2 ) /*0xfffc9a7d*/
            sub_FFFC8367( /*0xfffc9a9e*/
              a1,
              v48,
              a3,
              *(unsigned __int16 *)(a1 + 314) + a1 + 2 * *(unsigned __int16 *)(a1 + 314) + 2017,
              v29,
              1u);
          if ( (v63 & 1) == 0 && !v21[21] ) /*0xfffc9aac*/
          {
            v31 = *(unsigned __int16 *)(a1 + 2 * v21[28] + 304); /*0xfffc9abc*/
            sub_FFFC8367(a1, v48, a3, v31 + a1 + 2 * v31 + 2017, v29, 1u); /*0xfffc9ad6*/
            if ( a5 ) /*0xfffc9ae2*/
              v21[34] = v29; /*0xfffc9ae4*/
          }
          if ( !v63 || *(v21 - 9) != *(v21 - 41) )
          {
            v32 = v47[12] == 0 ? 9 : 18;
            v33 = 3049 * a2 + 144 * *(v21 - 9) + 578 * a3; /*0xfffc9b29*/
            v54 = v32; /*0xfffc9b2d*/
            v57 = 0; /*0xfffc9b3e*/
            if ( (v47[12] == 0 ? 0 : 9) != 0xF7 )
            {
              v40 = 148 * *(v21 - 9) + 328 - (v33 + 3780); /*0xfffc9b4e*/
              v45 = (unsigned __int16 *)(148 * *(v21 - 9) + a1 + 334); /*0xfffc9b51*/
              v34 = (unsigned __int16 *)(v33 + a1 + 3782); /*0xfffc9b54*/
              do /*0xfffc9c60*/
              {
                if ( *(_BYTE *)(a1 + 3733) || v57 != 8 && v57 != 17 ) /*0xfffc9b6e*/
                {
                  v51 = *v34 + LOWORD(a4[*(v21 - 2)]); /*0xfffc9b84*/
                  sub_FFFC8367( /*0xfffc9ba4*/
                    a1,
                    v48,
                    a3,
                    *(unsigned __int16 *)((char *)v34 + v40) + a1 + 2 * *(unsigned __int16 *)((char *)v34 + v40) + 2017,
                    v51,
                    1u);
                  if ( a5 ) /*0xfffc9bb0*/
                    *v34 = v51; /*0xfffc9bb6*/
                  if ( !a6 ) /*0xfffc9bbd*/
                  {
                    v52 = v34[1] + LOWORD(a4[*(v21 - 2)]); /*0xfffc9bd4*/
                    sub_FFFC8367(a1, v48, a3, *(v45 - 1) + a1 + 2 * *(v45 - 1) + 2017, v52, 1u); /*0xfffc9bf4*/
                    if ( a5 ) /*0xfffc9c00*/
                      v34[1] = v52; /*0xfffc9c06*/
                    v53 = v34[2] + LOWORD(a4[*(v21 - 2)]); /*0xfffc9c1b*/
                    sub_FFFC8367(a1, v48, a3, *v45 + a1 + 2 * *v45 + 2017, v53, 1u); /*0xfffc9c3a*/
                    if ( a5 ) /*0xfffc9c46*/
                      v34[2] = v53; /*0xfffc9c4c*/
                  }
                  v32 = v54; /*0xfffc9c50*/
                }
                ++v57; /*0xfffc9c53*/
                v45 += 4; /*0xfffc9c56*/
                v34 += 4; /*0xfffc9c5a*/
              }
              while ( v57 < v32 ); /*0xfffc9c60*/
            }
          }
          v10 = v42; /*0xfffc9c66*/
        }
        ++v63; /*0xfffc9c69*/
        v39 += 32; /*0xfffc9c6c*/
        v21 += 32; /*0xfffc9c70*/
      }
      while ( v63 < 4u );
    }
    ++v56; /*0xfffc9c7d*/
    v37 += 184; /*0xfffc9c85*/
    v47 += 184; /*0xfffc9c88*/
  }
  while ( v56 < 2u );
  if ( a5 ) /*0xfffc9c99*/
    sub_FFFC403A(a1, a2, a3); /*0xfffc9ca2*/
  return 0; /*0xfffc9cac*/
}

/* 0xfffc9cb1 sub_FFFC9CB1 */
char __cdecl sub_FFFC9CB1(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, char a5, char a6)
{
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  _BYTE *v11; // edi
  unsigned __int8 v12; // al
  int v13; // ecx
  unsigned __int8 v14; // al
  int v15; // ecx
  unsigned __int8 v16; // al
  int v17; // ecx
  unsigned __int8 v18; // al
  int v19; // ecx
  unsigned __int8 *v20; // edi
  unsigned __int8 v21; // bl
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned __int8 v25; // al
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  unsigned __int8 v29; // cl
  _WORD *v30; // ebx
  int v32; // [esp+Ch] [ebp-2Ch]
  int v33; // [esp+14h] [ebp-24h]
  int v34; // [esp+18h] [ebp-20h]
  unsigned __int8 *v35; // [esp+1Ch] [ebp-1Ch]
  int v36; // [esp+20h] [ebp-18h]
  unsigned __int16 *v37; // [esp+24h] [ebp-14h]
  _BYTE *v38; // [esp+28h] [ebp-10h]
  int v39; // [esp+2Ch] [ebp-Ch]
  int v40; // [esp+2Ch] [ebp-Ch]
  int v41; // [esp+2Ch] [ebp-Ch]
  unsigned __int8 v42; // [esp+32h] [ebp-6h]
  unsigned __int8 v43; // [esp+36h] [ebp-2h]
  unsigned __int8 i; // [esp+37h] [ebp-1h]
  unsigned __int8 v45; // [esp+43h] [ebp+Bh]
  unsigned __int8 v46; // [esp+43h] [ebp+Bh]
  unsigned __int8 v47; // [esp+43h] [ebp+Bh]
  unsigned __int8 v48; // [esp+43h] [ebp+Bh]
  unsigned __int8 v49; // [esp+43h] [ebp+Bh]
  unsigned __int8 v50; // [esp+43h] [ebp+Bh]
  unsigned __int8 v51; // [esp+43h] [ebp+Bh]

  v7 = a1 + 3297 * a2; /*0xfffc9ccc*/
  v42 = *(_BYTE *)(v7 + 6997); /*0xfffc9cd4*/
  v8 = 430 * a3; /*0xfffc9ce1*/
  v32 = 3049 * a2; /*0xfffc9cf0*/
  v34 = a1 + v8 + v32; /*0xfffc9cff*/
  v9 = 1068 * a3 + v7 + 7086; /*0xfffc9d0b*/
  if ( a4 + *(unsigned __int8 *)(v9 + 3) < 0 ) /*0xfffc9d19*/
    return 1; /*0xfffc9d19*/
  v10 = a4; /*0xfffc9d23*/
  if ( a4 + *(unsigned __int8 *)(v9 + 4) > 127 ) /*0xfffc9d2b*/
    return 1; /*0xfffca206*/
  v11 = (_BYTE *)(v8 + v32 + a1 + 5512); /*0xfffc9d31*/
  v12 = v11[9]; /*0xfffc9d33*/
  v13 = a4 + v12; /*0xfffc9d39*/
  if ( v13 >= 0 ) /*0xfffc9d3b*/
  {
    if ( v13 <= 127 ) /*0xfffc9d46*/
      v45 = (a4 + v12) & 0x7F; /*0xfffc9d52*/
    else
      v45 = 127; /*0xfffc9d48*/
  }
  else
  {
    v45 = 0; /*0xfffc9d3d*/
  }
  sub_FFFC8367(a1, v42, a3, *(unsigned __int16 *)(a1 + 278) + a1 + 2 * *(unsigned __int16 *)(a1 + 278) + 2017, v45, 1u); /*0xfffc9d75*/
  if ( a5 ) /*0xfffc9d81*/
    v11[9] = v45; /*0xfffc9d86*/
  v14 = v11[10]; /*0xfffc9d89*/
  v15 = a4 + v14; /*0xfffc9d8f*/
  if ( v15 >= 0 ) /*0xfffc9d91*/
  {
    if ( v15 <= 127 ) /*0xfffc9d9c*/
      v46 = (a4 + v14) & 0x7F; /*0xfffc9da8*/
    else
      v46 = 127; /*0xfffc9d9e*/
  }
  else
  {
    v46 = 0; /*0xfffc9d93*/
  }
  sub_FFFC8367(a1, v42, a3, *(unsigned __int16 *)(a1 + 280) + a1 + 2 * *(unsigned __int16 *)(a1 + 280) + 2017, v46, 1u); /*0xfffc9dcb*/
  if ( a5 ) /*0xfffc9dd7*/
    v11[10] = v46; /*0xfffc9ddc*/
  v16 = v11[11]; /*0xfffc9ddf*/
  v17 = a4 + v16; /*0xfffc9de5*/
  if ( v17 >= 0 ) /*0xfffc9de7*/
  {
    if ( v17 <= 127 ) /*0xfffc9df2*/
      v47 = (a4 + v16) & 0x7F; /*0xfffc9dfe*/
    else
      v47 = 127; /*0xfffc9df4*/
  }
  else
  {
    v47 = 0; /*0xfffc9de9*/
  }
  sub_FFFC8367(a1, v42, a3, *(unsigned __int16 *)(a1 + 282) + a1 + 2 * *(unsigned __int16 *)(a1 + 282) + 2017, v47, 1u); /*0xfffc9e21*/
  if ( a5 ) /*0xfffc9e2d*/
    v11[11] = v47; /*0xfffc9e32*/
  v18 = v11[12]; /*0xfffc9e35*/
  v19 = a4 + v18; /*0xfffc9e3b*/
  if ( v19 >= 0 ) /*0xfffc9e3d*/
  {
    if ( v19 <= 127 ) /*0xfffc9e48*/
      v48 = (a4 + v18) & 0x7F; /*0xfffc9e54*/
    else
      v48 = 127; /*0xfffc9e4a*/
  }
  else
  {
    v48 = 0; /*0xfffc9e3f*/
  }
  sub_FFFC8367(a1, v42, a3, *(unsigned __int16 *)(a1 + 284) + a1 + 2 * *(unsigned __int16 *)(a1 + 284) + 2017, v48, 1u); /*0xfffc9e77*/
  if ( a5 ) /*0xfffc9e83*/
    v11[12] = v48; /*0xfffc9e88*/
  v38 = (_BYTE *)(v34 + 5574); /*0xfffc9e8e*/
  v35 = (unsigned __int8 *)(v34 + 5642); /*0xfffc9e99*/
  v33 = 2; /*0xfffc9e9c*/
  do
  {
    if ( !v38[2] )
    {
      v20 = v35; /*0xfffc9eb0*/
      for ( i = 0; i < 4u; ++i )
      {
        if ( *(v20 - 12) )
        {
          if ( *(_BYTE *)(a1 + 3734) || (i & 1) == 0 ) /*0xfffc9ece*/
          {
            v21 = (a4 + *(v20 - 1)) & 0x7F; /*0xfffc9ed8*/
            v22 = *(unsigned __int16 *)(148 * *(v20 - 3) + a1 + 324); /*0xfffc9ee9*/
            sub_FFFC8367(a1, v42, a3, v22 + a1 + 2 * v22 + 2017, v21, 1u); /*0xfffc9f03*/
            if ( a5 ) /*0xfffc9f0f*/
              *(v20 - 1) = v21; /*0xfffc9f11*/
            v10 = a4; /*0xfffc9f14*/
          }
          v23 = v10 + *v20; /*0xfffc9f1c*/
          if ( v23 >= 0 ) /*0xfffc9f1e*/
          {
            if ( v23 <= 127 ) /*0xfffc9f29*/
              v49 = (v10 + *v20) & 0x7F; /*0xfffc9f35*/
            else
              v49 = 127; /*0xfffc9f2b*/
          }
          else
          {
            v49 = 0; /*0xfffc9f20*/
          }
          v24 = *(unsigned __int16 *)(148 * *(v20 - 4) + a1 + 326); /*0xfffc9f49*/
          sub_FFFC8367(a1, v42, a3, v24 + a1 + 2 * v24 + 2017, v49, 1u); /*0xfffc9f63*/
          if ( a5 ) /*0xfffc9f6f*/
            *v20 = v49; /*0xfffc9f74*/
          v25 = v20[1]; /*0xfffc9f76*/
          v26 = v10 + v25; /*0xfffc9f7c*/
          if ( v26 >= 0 ) /*0xfffc9f7e*/
          {
            if ( v26 <= 127 ) /*0xfffc9f89*/
              v50 = (v10 + v25) & 0x7F; /*0xfffc9f95*/
            else
              v50 = 127; /*0xfffc9f8b*/
          }
          else
          {
            v50 = 0; /*0xfffc9f80*/
          }
          v27 = *(unsigned __int16 *)(a1 + 2 * *(v20 - 5) + 304); /*0xfffc9f9c*/
          sub_FFFC8367(a1, v42, a3, v27 + a1 + 2 * v27 + 2017, v50, 1u); /*0xfffc9fbd*/
          if ( a5 ) /*0xfffc9fc9*/
            v20[1] = v50; /*0xfffc9fce*/
          if ( *(v20 - 5) == 4 && *(_BYTE *)(v34 + 5516) == 1 && *v38 == 2 ) /*0xfffc9fe9*/
            sub_FFFC8367( /*0xfffca007*/
              a1,
              v42,
              a3,
              *(unsigned __int16 *)(a1 + 314) + a1 + 2 * *(unsigned __int16 *)(a1 + 314) + 2017,
              v50,
              1u);
          if ( (i & 1) == 0 && !v20[20] ) /*0xfffca015*/
          {
            v28 = *(unsigned __int16 *)(a1 + 2 * v20[27] + 304); /*0xfffca01f*/
            sub_FFFC8367(a1, v42, a3, v28 + a1 + 2 * v28 + 2017, v50, 1u); /*0xfffca03c*/
            if ( a5 ) /*0xfffca048*/
              v20[33] = v50; /*0xfffca04d*/
          }
          if ( !i || *(v20 - 10) != *(v20 - 42) )
          {
            v29 = v38[12] == 0 ? 9 : 18;
            v43 = v29; /*0xfffca0a0*/
            v51 = 0; /*0xfffca0aa*/
            if ( (v38[12] == 0 ? 0 : 9) != 0xF7 )
            {
              v36 = 148 * *(v20 - 10) + 328 - (v32 + 578 * a3 + 144 * *(v20 - 10) + 3780); /*0xfffca0bd*/
              v37 = (unsigned __int16 *)(148 * *(v20 - 10) + a1 + 334); /*0xfffca0c0*/
              v30 = (_WORD *)(v32 + 578 * a3 + 144 * *(v20 - 10) + a1 + 3782); /*0xfffca0c3*/
              do /*0xfffca1c0*/
              {
                if ( *(_BYTE *)(a1 + 3733) || v51 != 8 && v51 != 17 ) /*0xfffca0dd*/
                {
                  v39 = (unsigned __int16)(a4 + *v30); /*0xfffca0ee*/
                  sub_FFFC8367( /*0xfffca10e*/
                    a1,
                    v42,
                    a3,
                    *(unsigned __int16 *)((char *)v30 + v36) + a1 + 2 * *(unsigned __int16 *)((char *)v30 + v36) + 2017,
                    v39,
                    1u);
                  if ( a5 ) /*0xfffca11a*/
                    *v30 = v39; /*0xfffca120*/
                  if ( !a6 ) /*0xfffca127*/
                  {
                    v40 = (unsigned __int16)(a4 + v30[1]); /*0xfffca139*/
                    sub_FFFC8367(a1, v42, a3, *(v37 - 1) + a1 + 2 * *(v37 - 1) + 2017, v40, 1u); /*0xfffca159*/
                    if ( a5 ) /*0xfffca165*/
                      v30[1] = v40; /*0xfffca16b*/
                    v41 = (unsigned __int16)(a4 + v30[2]); /*0xfffca17b*/
                    sub_FFFC8367(a1, v42, a3, *v37 + a1 + 2 * *v37 + 2017, v41, 1u); /*0xfffca19a*/
                    if ( a5 ) /*0xfffca1a6*/
                      v30[2] = v41; /*0xfffca1ac*/
                  }
                  v29 = v43; /*0xfffca1b0*/
                }
                ++v51; /*0xfffca1b3*/
                v37 += 4; /*0xfffca1b6*/
                v30 += 4; /*0xfffca1ba*/
              }
              while ( v51 < v29 ); /*0xfffca1c0*/
            }
          }
          v10 = a4; /*0xfffca1c6*/
        }
        v20 += 32; /*0xfffca1cc*/
      }
    }
    v35 += 184; /*0xfffca1de*/
    v38 += 184; /*0xfffca1e1*/
    --v33; /*0xfffca1e4*/
  }
  while ( v33 );
  if ( a5 ) /*0xfffca1f1*/
    sub_FFFC403A(a1, a2, a3); /*0xfffca1fa*/
  return 0; /*0xfffca208*/
}

/* 0xfffca20d sub_FFFCA20D */
int __cdecl sub_FFFCA20D(int a1, unsigned __int8 a2)
{
  int result; // eax
  _BYTE *v4; // edi
  unsigned __int8 v5; // [esp+8h] [ebp-4h]
  char v6; // [esp+14h] [ebp+8h]

  result = 3049 * a2 + a1 + 5512; /*0xfffca22e*/
  v5 = *(_BYTE *)(3297 * a2 + a1 + 6997); /*0xfffca236*/
  v6 = 0; /*0xfffca239*/
  v4 = (_BYTE *)result; /*0xfffca23d*/
  do /*0xfffca297*/
  {
    if ( *v4 ) /*0xfffca23f*/
    {
      sub_FFFC7CD6(a1, v5); /*0xfffca24b*/
      sub_FFFC4F4E(a1, v5, 3u, 4u, 0xCCu, 255); /*0xfffca262*/
      sub_FFFC4FB2(a1, v5, 3u, 4u, 0xC4u, -1); /*0xfffca276*/
      result = sub_FFFC85B4(a1, a2, v6); /*0xfffca282*/
    }
    ++v6; /*0xfffca28a*/
    v4 += 430; /*0xfffca28d*/
  }
  while ( (unsigned __int8)v6 < 3u ); /*0xfffca297*/
  return result; /*0xfffca299*/
}

/* 0xfffca29d sub_FFFCA29D */
void __cdecl sub_FFFCA29D(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3, _BYTE *a4, unsigned __int8 a5, _DWORD *a6)
{
  int v6; // edi
  int v7; // eax
  char v8; // al
  _BYTE *v9; // edx
  int v10; // [esp+4h] [ebp-18h]
  char v11; // [esp+8h] [ebp-14h]
  int v12; // [esp+Ch] [ebp-10h]
  char v13; // [esp+13h] [ebp-9h]
  unsigned __int8 v14; // [esp+17h] [ebp-5h]
  unsigned __int8 i; // [esp+1Bh] [ebp-1h]

  if ( a1[3755] && a1[3758] && *a4 ) /*0xfffca2c4*/
  {
    v6 = 0; /*0xfffca2d5*/
    v14 = a1[6997]; /*0xfffca2d7*/
    v13 = 0; /*0xfffca2da*/
    v11 = 0; /*0xfffca2de*/
    v10 = 0; /*0xfffca2e1*/
    v12 = 0; /*0xfffca2e4*/
    do /*0xfffca2ec*/
    {
      if ( a1[v12 + 5512] ) /*0xfffca2ef*/
      {
        sub_FFFC7CD6((int)a1, v14); /*0xfffca304*/
        if ( ((unsigned __int8)(1 << v11) & a5) != 0 ) /*0xfffca317*/
        {
          v7 = v12 + 184 * a2; /*0xfffca32a*/
          if ( !a1[32 * a3 + 5630 + v7] || a1[v7 + 5576] ) /*0xfffca343*/
            goto LABEL_16; /*0xfffca34b*/
          for ( i = 0; i < 9u; ++i ) /*0xfffca351*/
          {
            if ( a1[3733] || i != 8 ) /*0xfffca362*/
            {
              if ( *a6 ) /*0xfffca367*/
              {
                sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xACu, v6 << 19); /*0xfffca37f*/
                v8 = sub_FFFC4E96((int)a1, v14, 3u, 4u, 0xCCu); /*0xfffca399*/
                *v9 |= v8; /*0xfffca3a1*/
              }
            }
            ++v6; /*0xfffca3a6*/
          }
        }
        sub_FFFC4F4E((int)a1, v14, 3u, 4u, 0xCCu, 255); /*0xfffca3bb*/
        sub_FFFC4FB2((int)a1, v14, 3u, 4u, 0xC4u, -1); /*0xfffca3cf*/
        v6 = 0; /*0xfffca3d7*/
        sub_FFFC85B4((int)a1, 0, v13); /*0xfffca3db*/
      }
LABEL_16:
      ++v13; /*0xfffca3e3*/
      ++v11; /*0xfffca3e6*/
      v10 += 1068; /*0xfffca3e9*/
      v12 += 430; /*0xfffca3f0*/
    }
    while ( (unsigned __int8)v13 < 3u ); /*0xfffca2ec*/
  }
}

/* 0xfffca406 sub_FFFCA406 */
void __cdecl sub_FFFCA406(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3, char a4, _BYTE *a5, int a6, _DWORD *a7)
{
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // eax
  char v11; // cl
  int *v12; // edx
  int v13; // ecx
  int v14; // ebx
  bool v15; // zf
  int v16; // ebx
  _DWORD *v17; // ebx
  int v18; // ebx
  int v19; // ecx
  bool v20; // zf
  int v21; // ecx
  int v22; // [esp+8h] [ebp-24h]
  unsigned __int8 v23; // [esp+Ch] [ebp-20h]
  _BYTE *v24; // [esp+10h] [ebp-1Ch]
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  char v27; // [esp+1Ch] [ebp-10h]
  int v28; // [esp+20h] [ebp-Ch]
  int v29; // [esp+24h] [ebp-8h]
  unsigned __int8 v30; // [esp+2Ah] [ebp-2h]
  char v31; // [esp+2Bh] [ebp-1h]

  if ( a1[3755] && a1[3758] && *a5 ) /*0xfffca42d*/
  {
    v7 = 0; /*0xfffca43d*/
    v23 = a1[6997]; /*0xfffca43f*/
    v8 = a6; /*0xfffca449*/
    v27 = 0; /*0xfffca44c*/
    v29 = 0; /*0xfffca450*/
    v26 = 0; /*0xfffca453*/
    v25 = 0; /*0xfffca456*/
    v24 = a1 + 5574; /*0xfffca459*/
    while ( 1 ) /*0xfffca45f*/
    {
      if ( a1[v25 + 5512] ) /*0xfffca45f*/
      {
        v9 = 184 * a2; /*0xfffca475*/
        v22 = v9; /*0xfffca481*/
        if ( a1[32 * a3 + 5630 + v9 + v25] ) /*0xfffca486*/
        {
          if ( !v24[v9 + 2] ) /*0xfffca497*/
            break; /*0xfffca497*/
        }
      }
LABEL_67:
      ++v27; /*0xfffca7a1*/
      v29 += 267; /*0xfffca7a4*/
      v25 += 430; /*0xfffca7b0*/
      v24 += 430; /*0xfffca7b3*/
      v7 += 1068; /*0xfffca7b6*/
      v26 = v7; /*0xfffca7c0*/
      if ( (unsigned __int8)v27 >= 3u ) /*0xfffca7c3*/
        return; /*0xfffca7c3*/
    }
    sub_FFFC7CD6((int)a1, v23); /*0xfffca4a9*/
    v30 = 0; /*0xfffca4b1*/
    v10 = 0; /*0xfffca4b5*/
    while ( 1 ) /*0xfffca4bc*/
    {
      if ( !a1[3733] && v30 == 8 ) /*0xfffca4c9*/
        goto LABEL_65; /*0xfffca4c9*/
      if ( *a7 ) /*0xfffca4d2*/
        v31 = a1[v7 + 7179 + v10]; /*0xfffca4e1*/
      else
        v31 = 0; /*0xfffca4e6*/
      if ( v24[v22 + 12] ) /*0xfffca4f0*/
      {
        v11 = v10 + 9; /*0xfffca4ff*/
        if ( a4 ) /*0xfffca502*/
        {
          v28 = 1 << v11; /*0xfffca50f*/
          v12 = (int *)&a1[v7 + 7175]; /*0xfffca512*/
          if ( (*v12 & (1 << v11)) != 0 && (v31 & 0xF0) == 0 ) /*0xfffca526*/
          {
            *v12 &= ~v28; /*0xfffca530*/
            if ( a4 == 1 || a4 == 2 ) /*0xfffca538*/
              *(_DWORD *)&a1[4 * v10 + 7305 + 4 * v29] = v8; /*0xfffca53f*/
          }
          if ( (*v12 & v28) == 0 && (v31 & 0xF0) != 0 ) /*0xfffca553*/
          {
            *v12 |= v28; /*0xfffca55b*/
            if ( a4 == 3 ) /*0xfffca55d*/
              *(_DWORD *)&a1[4 * v10 + 7305 + 4 * v29] = v8; /*0xfffca564*/
          }
          if ( (*v12 & (1 << v10)) != 0 && (v31 & 0xF) == 0 ) /*0xfffca57f*/
          {
            *v12 &= ~(1 << v10); /*0xfffca589*/
            if ( a4 == 1 || a4 == 2 ) /*0xfffca591*/
              *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] = v8; /*0xfffca598*/
          }
          v13 = *v12; /*0xfffca59f*/
          v14 = 1 << v10; /*0xfffca5a1*/
          if ( (*v12 & (1 << v10)) == 0 ) /*0xfffca5a6*/
          {
            v15 = (v31 & 0xF) == 0; /*0xfffca5ac*/
            goto LABEL_33; /*0xfffca5ac*/
          }
        }
        else
        {
          v16 = 1 << v11; /*0xfffca5d8*/
          v12 = (int *)&a1[v26 + 7175]; /*0xfffca5dd*/
          if ( (*v12 & (1 << v11)) != 0 && (v31 & 0xF0) == 0 ) /*0xfffca5f1*/
          {
            *v12 &= ~v16; /*0xfffca5fa*/
            *(_DWORD *)&a1[4 * v10 + 7305 + 4 * v29] = v8; /*0xfffca601*/
          }
          if ( (*v12 & v16) == 0 && (v31 & 0xF0) != 0 ) /*0xfffca612*/
          {
            *v12 |= v16; /*0xfffca616*/
            v17 = &a1[4 * v10 + 7233 + 4 * v29]; /*0xfffca635*/
            if ( v8 - *(_DWORD *)&a1[4 * v10 + 7305 + 4 * v29] - 1 <= *(_DWORD *)&a1[4 * v10 + 7377 + 4 * v29] - *v17 ) /*0xfffca646*/
            {
              v8 = a6; /*0xfffca661*/
            }
            else
            {
              *v17 = *(_DWORD *)&a1[4 * v10 + 7305 + 4 * v29]; /*0xfffca651*/
              v8 = a6; /*0xfffca653*/
              *(_DWORD *)&a1[4 * v10 + 7377 + 4 * v29] = a6 - 1; /*0xfffca659*/
            }
          }
          v18 = 1 << v10; /*0xfffca669*/
          if ( (*v12 & (1 << v10)) != 0 && (v31 & 0xF) == 0 ) /*0xfffca678*/
          {
            *v12 &= ~v18; /*0xfffca681*/
            v18 = 1 << v10; /*0xfffca683*/
            *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] = v8; /*0xfffca688*/
          }
          v19 = *v12; /*0xfffca68f*/
          if ( (*v12 & v18) == 0 ) /*0xfffca693*/
          {
            v20 = (v31 & 0xF) == 0; /*0xfffca699*/
LABEL_62:
            if ( !v20 ) /*0xfffca71b*/
            {
              *v12 = v18 | v19; /*0xfffca71f*/
              if ( v8 - *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] - 1 > *(_DWORD *)&a1[4 * v10 + 7341 + 4 * v29] /*0xfffca743*/
                                                                     - *(_DWORD *)&a1[4 * v10 + 7197 + 4 * v29] )
              {
                *(_DWORD *)&a1[4 * v10 + 7197 + 4 * v29] = *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29]; /*0xfffca74b*/
                *(_DWORD *)&a1[4 * v10 + 7341 + 4 * v29] = v8 - 1; /*0xfffca751*/
              }
            }
          }
        }
      }
      else
      {
        v12 = (int *)&a1[v7 + 7175]; /*0xfffca69f*/
        v18 = 1 << v10; /*0xfffca6ab*/
        v21 = *v12; /*0xfffca6b1*/
        if ( a4 ) /*0xfffca6b6*/
        {
          if ( (v21 & v18) != 0 && !v31 ) /*0xfffca6c0*/
          {
            *v12 = v21 & ~v18; /*0xfffca6ca*/
            if ( a4 == 1 || a4 == 2 ) /*0xfffca6d2*/
              *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] = v8; /*0xfffca6d9*/
          }
          v13 = *v12; /*0xfffca6e0*/
          v14 = 1 << v10; /*0xfffca6e2*/
          if ( (*v12 & (1 << v10)) == 0 ) /*0xfffca6e7*/
          {
            v15 = v31 == 0; /*0xfffca6e9*/
LABEL_33:
            if ( !v15 ) /*0xfffca5b0*/
            {
              *v12 = v14 | v13; /*0xfffca5bc*/
              if ( a4 == 3 ) /*0xfffca5be*/
                *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] = v8; /*0xfffca5c9*/
            }
          }
        }
        else
        {
          if ( (v21 & v18) != 0 && !v31 ) /*0xfffca6fa*/
          {
            *v12 = v21 & ~v18; /*0xfffca703*/
            v18 = 1 << v10; /*0xfffca705*/
            *(_DWORD *)&a1[4 * v10 + 7269 + 4 * v29] = v8; /*0xfffca70a*/
          }
          v19 = *v12; /*0xfffca711*/
          if ( (*v12 & v18) == 0 ) /*0xfffca715*/
          {
            v20 = v31 == 0; /*0xfffca717*/
            goto LABEL_62; /*0xfffca717*/
          }
        }
      }
LABEL_65:
      ++v30; /*0xfffca757*/
      ++v10; /*0xfffca75a*/
      if ( v30 >= 9u ) /*0xfffca75f*/
      {
        sub_FFFC4F4E((int)a1, v23, 3u, 4u, 0xCCu, 255); /*0xfffca777*/
        sub_FFFC4FB2((int)a1, v23, 3u, 4u, 0xC4u, -1); /*0xfffca78b*/
        sub_FFFC85B4((int)a1, 0, v27); /*0xfffca796*/
        v7 = v26; /*0xfffca79b*/
        goto LABEL_67; /*0xfffca79b*/
      }
      v7 = v26; /*0xfffca4b9*/
    }
  }
}

/* 0xfffca7ce sub_FFFCA7CE */
char __cdecl sub_FFFCA7CE(int a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffca7d4*/
  {
    if ( *(_BYTE *)(a1 + 3758) ) /*0xfffca7dc*/
      return sub_FFFC797C(a1, 0, a2, a3, a4, 0xFFu, 0, 5u, 0xFFu); /*0xfffca7fc*/
  }
  return result; /*0xfffca804*/
}

/* 0xfffca805 sub_FFFCA805 */
char __cdecl sub_FFFCA805(int a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffca80b*/
  {
    if ( *(_BYTE *)(a1 + 3758) ) /*0xfffca813*/
      return sub_FFFC797C(a1, 0, a2, a3, a4, 0xFFu, 0, 2u, 0xFFu); /*0xfffca833*/
  }
  return result; /*0xfffca83b*/
}

/* 0xfffca83c sub_FFFCA83C */
unsigned int __cdecl sub_FFFCA83C(int a1, unsigned int a2)
{
  unsigned __int32 v2; // esi
  unsigned int result; // eax

  v2 = sub_FFFC82BC(a1); /*0xfffca849*/
  do /*0xfffca85b*/
    result = sub_FFFC82E0(a1, v2); /*0xfffca850*/
  while ( result < a2 ); /*0xfffca85b*/
  return result; /*0xfffca85d*/
}

/* 0xfffca85f sub_FFFCA85F */
int __usercall sub_FFFCA85F@<eax>(int a1@<edi>, __int16 *a2, int a3)
{
  char v4; // cl
  char v5; // bl
  int v6; // edi
  int v7; // eax
  char v8; // cl
  int v9; // edi
  int result; // eax
  unsigned __int16 v11; // [esp-Ch] [ebp-10h]
  unsigned __int16 i; // [esp+Ch] [ebp+8h]
  unsigned __int16 j; // [esp+Ch] [ebp+8h]

  v4 = 0; /*0xfffca866*/
  for ( i = a2[5151]; (i & 1) == 0; i >>= 1 ) /*0xfffca871*/
    ++v4; /*0xfffca87a*/
  v5 = a3; /*0xfffca883*/
  LOWORD(a1) = a3 & 1; /*0xfffca88b*/
  v6 = a1 << v4; /*0xfffca89c*/
  sub_FFFC856D((int)a2, a2[5149], &a3); /*0xfffca8a0*/
  v7 = (unsigned __int16)a2[5151]; /*0xfffca8a5*/
  if ( (unsigned __int16)v6 != (unsigned __int16)(a3 & v7) ) /*0xfffca8b9*/
  {
    v11 = v6 | a3 & ~(_WORD)v7; /*0xfffca8c2*/
    a3 = (unsigned __int16)v6 | a3 & ~v7; /*0xfffca8c3*/
    sub_FFFC8595((int)a2, a2[5149], v11); /*0xfffca8d1*/
  }
  v8 = 0; /*0xfffca8d9*/
  for ( j = a2[5152]; (j & 1) == 0; j >>= 1 ) /*0xfffca8e4*/
    ++v8; /*0xfffca8ed*/
  LOWORD(v6) = (v5 & 2) != 0; /*0xfffca907*/
  v9 = v6 << v8; /*0xfffca90d*/
  sub_FFFC856D((int)a2, a2[5150], &a3); /*0xfffca90f*/
  result = (unsigned __int16)a2[5152]; /*0xfffca914*/
  if ( (unsigned __int16)v9 != (unsigned __int16)(a3 & result) ) /*0xfffca92a*/
    return sub_FFFC8595((int)a2, a2[5150], v9 | a3 & ~(_WORD)result); /*0xfffca93f*/
  return result; /*0xfffca947*/
}

/* 0xfffca98e sub_FFFCA98E */
int __cdecl sub_FFFCA98E(int a1)
{
  int result; // eax
  unsigned __int8 *v3; // edi
  char v4; // al
  unsigned __int8 v5; // di
  unsigned __int8 v6; // al
  int v7; // edx
  char v8; // dl
  _BYTE *v9; // eax
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // eax
  int v16; // eax
  char v17; // al
  unsigned __int8 *v18; // edi
  char v19; // al
  _BYTE *v20; // eax
  char v21; // cl
  char v22; // al
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  unsigned __int8 v30; // cl
  int v31; // eax
  char v32; // cl
  int v33; // eax
  int v34; // eax
  char v35; // cl
  int v36; // eax
  char v37; // dl
  int v38; // eax
  int v39; // eax
  char v40; // cl
  int v41; // ecx
  char v42; // al
  unsigned __int8 v43; // al
  char v44; // al
  int v45; // eax
  int v46; // [esp+Ch] [ebp-44h]
  int v47; // [esp+Ch] [ebp-44h]
  int v48; // [esp+Ch] [ebp-44h]
  int v49; // [esp+Ch] [ebp-44h]
  unsigned __int8 *v50; // [esp+14h] [ebp-3Ch]
  int v51; // [esp+18h] [ebp-38h]
  _BYTE *v52; // [esp+1Ch] [ebp-34h]
  unsigned __int8 *v53; // [esp+20h] [ebp-30h]
  _BYTE *v54; // [esp+24h] [ebp-2Ch]
  unsigned __int16 *v55; // [esp+28h] [ebp-28h]
  int v56; // [esp+2Ch] [ebp-24h]
  unsigned __int8 v57; // [esp+30h] [ebp-20h]
  int v58; // [esp+34h] [ebp-1Ch]
  _BYTE *v59; // [esp+38h] [ebp-18h]
  int v60; // [esp+3Ch] [ebp-14h]
  int v61; // [esp+3Ch] [ebp-14h]
  unsigned __int16 *v62; // [esp+3Ch] [ebp-14h]
  int v63; // [esp+43h] [ebp-Dh]
  unsigned __int8 v64; // [esp+47h] [ebp-9h]
  unsigned __int8 i; // [esp+4Bh] [ebp-5h]
  unsigned __int8 v66; // [esp+4Fh] [ebp-1h]
  _BYTE *v67; // [esp+58h] [ebp+8h]
  unsigned __int8 v68; // [esp+5Bh] [ebp+Bh]

  LOBYTE(v63) = 0; /*0xfffca99c*/
  do
  {
    result = (unsigned __int8)v63; /*0xfffca9a1*/
    v51 = 3049 * (unsigned __int8)v63; /*0xfffca9ad*/
    v67 = (_BYTE *)(a1 + v51); /*0xfffca9b9*/
    if ( !*(_BYTE *)(a1 + v51 + 3755) ) /*0xfffca9bc*/
      goto LABEL_130; /*0xfffca9bc*/
    v3 = (unsigned __int8 *)(3297 * (unsigned __int8)v63 + a1 + 6997); /*0xfffca9c8*/
    v4 = *(_BYTE *)(a1 + 1); /*0xfffca9cf*/
    v53 = v3; /*0xfffca9d6*/
    v64 = *v3; /*0xfffca9d9*/
    if ( v4 == 1 || v4 == 2 ) /*0xfffca9e4*/
    {
      sub_FFFC8367( /*0xfffcaa89*/
        a1,
        *v3,
        3u,
        *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffcaaba*/
        a1,
        *v3,
        3u,
        *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
        (unsigned __int8)(2 * (v67[3764] & 0x1F)),
        1u);
      sub_FFFC8367( /*0xfffcaadc*/
        a1,
        *v3,
        3u,
        *(unsigned __int16 *)(a1 + 214) + a1 + 2 * *(unsigned __int16 *)(a1 + 214) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffcab10*/
        a1,
        *v3,
        3u,
        *(unsigned __int16 *)(a1 + 214) + a1 + 2 * *(unsigned __int16 *)(a1 + 214) + 1720,
        (unsigned __int8)(2 * (v67[3765] & 0x1F)),
        1u);
      if ( sub_FFFC52CF(a1, v63, 745570438, 0) ) /*0xfffcab20*/
      {
        sub_FFFC8367( /*0xfffcab4d*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 228) + a1 + 2 * *(unsigned __int16 *)(a1 + 228) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffcab7b*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 228) + a1 + 2 * *(unsigned __int16 *)(a1 + 228) + 1720,
          v67[3766] & 0x1F,
          1u);
        sub_FFFC8367( /*0xfffcab9d*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 230) + a1 + 2 * *(unsigned __int16 *)(a1 + 230) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffcabce*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 230) + a1 + 2 * *(unsigned __int16 *)(a1 + 230) + 1720,
          v67[3766] & 0x1F,
          1u);
      }
      if ( sub_FFFC52CF(a1, v63, 745570438, 1u) ) /*0xfffcabe0*/
      {
        sub_FFFC8367( /*0xfffcac1b*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 236) + a1 + 2 * *(unsigned __int16 *)(a1 + 236) + 1720,
          2 * (v67[3767] & 0xF),
          1u);
        sub_FFFC8367( /*0xfffcac4b*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 256) + a1 + 2 * *(unsigned __int16 *)(a1 + 256) + 1720,
          ((unsigned __int8)v67[3767] >> 4) & 1,
          1u);
        v6 = sub_FFFC4FE3( /*0xfffcac6a*/
               a1,
               *v3,
               3u,
               *(unsigned __int16 *)(a1 + 238) + a1 + 2 * *(unsigned __int16 *)(a1 + 238) + 1720);
        sub_FFFC8367( /*0xfffcac94*/
          a1,
          *v3,
          3u,
          *(unsigned __int16 *)(a1 + 238) + a1 + 2 * *(unsigned __int16 *)(a1 + 238) + 1720,
          v6 | 0x40,
          1u);
      }
      v5 = v64; /*0xfffcaca6*/
      sub_FFFC8367( /*0xfffcacc6*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 210) + a1 + 2 * *(unsigned __int16 *)(a1 + 210) + 1720,
        2 * (v67[3763] & 0xF),
        1u);
      if ( sub_FFFC52CF(a1, v63, 745570438, 0) ) /*0xfffcacd6*/
        sub_FFFC8367( /*0xfffcad09*/
          a1,
          v64,
          3u,
          *(unsigned __int16 *)(a1 + 246) + a1 + 2 * *(unsigned __int16 *)(a1 + 246) + 1720,
          ((unsigned __int8)v67[3763] >> 4) & 1,
          1u);
      sub_FFFC8367( /*0xfffcad2a*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffcad53*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
        2 * (unsigned __int8)v67[3761],
        1u);
      if ( *(_BYTE *)(a1 + 3737) ) /*0xfffcad5b*/
        sub_FFFD9273(a1, v63, v67[3762]); /*0xfffcad73*/
    }
    else
    {
      v5 = *v3; /*0xfffca9f1*/
      sub_FFFC8367( /*0xfffcaa06*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 190) + a1 + 2 * *(unsigned __int16 *)(a1 + 190) + 1720,
        7,
        1u);
      sub_FFFC8367( /*0xfffcaa24*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 192) + a1 + 2 * *(unsigned __int16 *)(a1 + 192) + 1720,
        7,
        1u);
      sub_FFFC8367( /*0xfffcaa42*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 194) + a1 + 2 * *(unsigned __int16 *)(a1 + 194) + 1720,
        10,
        1u);
      sub_FFFC8367( /*0xfffcaa63*/
        a1,
        v64,
        3u,
        *(unsigned __int16 *)(a1 + 196) + a1 + 2 * *(unsigned __int16 *)(a1 + 196) + 1720,
        4,
        1u);
    }
    if ( sub_FFFC52CF(a1, v63, 745570438, 0) && sub_FFFC536F(a1, v63, v7, 0) ) /*0xfffcad9a*/
      sub_FFFC8367( /*0xfffcadbf*/
        a1,
        v5,
        3u,
        *(unsigned __int16 *)(a1 + 244) + a1 + 2 * *(unsigned __int16 *)(a1 + 244) + 1720,
        127,
        1u);
    sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 198) + a1 + 2 * *(unsigned __int16 *)(a1 + 198) + 1720, 2, 1u); /*0xfffcade0*/
    sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 200) + a1 + 2 * *(unsigned __int16 *)(a1 + 200) + 1720, 33, 1u); /*0xfffcadfe*/
    sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 204) + a1 + 2 * *(unsigned __int16 *)(a1 + 204) + 1720, 2, 1u); /*0xfffcae1c*/
    sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 218) + a1 + 2 * *(unsigned __int16 *)(a1 + 218) + 1720, 1, 0); /*0xfffcae3d*/
    sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 220) + a1 + 2 * *(unsigned __int16 *)(a1 + 220) + 1720, 1, 0); /*0xfffcae5b*/
    if ( sub_FFFC52CF(a1, v63, 745570438, 0) ) /*0xfffcae6b*/
    {
      v8 = 0; /*0xfffcae80*/
      v9 = v67 + 5512; /*0xfffcae82*/
      v10 = 3; /*0xfffcae87*/
      do /*0xfffcaea3*/
      {
        if ( *v9 && *(_BYTE *)(a1 + 3734) == 1 && v9[2] < 2u ) /*0xfffcae99*/
          v8 = 1; /*0xfffcae9b*/
        v9 += 430; /*0xfffcae9d*/
        --v10; /*0xfffcaea2*/
      }
      while ( v10 ); /*0xfffcaea3*/
      if ( !*(_BYTE *)(a1 + 3734) || v8 == 1 ) /*0xfffcaeb0*/
        sub_FFFC8367( /*0xfffcaece*/
          a1,
          v5,
          3u,
          *(unsigned __int16 *)(a1 + 222) + a1 + 2 * *(unsigned __int16 *)(a1 + 222) + 1720,
          128,
          1u);
      if ( *(_BYTE *)(a1 + 3734) <= 1u ) /*0xfffcaede*/
        sub_FFFC8367( /*0xfffcaefd*/
          a1,
          v5,
          3u,
          *(unsigned __int16 *)(a1 + 220) + a1 + 2 * *(unsigned __int16 *)(a1 + 220) + 1720,
          32,
          1u);
    }
    else if ( *(_BYTE *)(a1 + 3734) <= 1u ) /*0xfffcaf0f*/
    {
      sub_FFFC8367( /*0xfffcaf31*/
        a1,
        v5,
        3u,
        *(unsigned __int16 *)(a1 + 222) + a1 + 2 * *(unsigned __int16 *)(a1 + 222) + 1720,
        128,
        1u);
      sub_FFFC8367( /*0xfffcaf4f*/
        a1,
        v5,
        3u,
        *(unsigned __int16 *)(a1 + 220) + a1 + 2 * *(unsigned __int16 *)(a1 + 220) + 1720,
        32,
        1u);
    }
    if ( sub_FFFC52CF(a1, v63, 745570438, 1u) ) /*0xfffcaf61*/
    {
      sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 224) + a1 + 2 * *(unsigned __int16 *)(a1 + 224) + 1720, 0, 1u); /*0xfffcaf86*/
      sub_FFFC8367(a1, v5, 3u, *(unsigned __int16 *)(a1 + 226) + a1 + 2 * *(unsigned __int16 *)(a1 + 226) + 1720, 0, 1u); /*0xfffcaf8e*/
    }
    else
    {
      v11 = !sub_FFFC531F(a1, v63, 742424710, 5u); /*0xfffcafa3*/
      v12 = *(unsigned __int16 *)(a1 + 224) + a1 + 2 * *(unsigned __int16 *)(a1 + 224) + 1720; /*0xfffcafb0*/
      if ( v11 ) /*0xfffcafb7*/
      {
        sub_FFFC8367(a1, v5, 3u, v12, 18, 1u); /*0xfffcafc0*/
        sub_FFFC8367( /*0xfffcafc8*/
          a1,
          v5,
          3u,
          *(unsigned __int16 *)(a1 + 226) + a1 + 2 * *(unsigned __int16 *)(a1 + 226) + 1720,
          6,
          1u);
      }
      else
      {
        sub_FFFC8367(a1, v5, 3u, v12, 63, 1u); /*0xfffcafd1*/
        sub_FFFC8367( /*0xfffcafef*/
          a1,
          v5,
          3u,
          *(unsigned __int16 *)(a1 + 226) + a1 + 2 * *(unsigned __int16 *)(a1 + 226) + 1720,
          8,
          1u);
      }
    }
    for ( i = 0; i < 3u; ++i )
    {
      v13 = 430 * i; /*0xfffcb005*/
      v14 = (_BYTE *)(v13 + v51 + a1 + 5512); /*0xfffcb00e*/
      v52 = v14; /*0xfffcb018*/
      if ( !*v14 ) /*0xfffcb01b*/
      {
        v45 = sub_FFFC4FE3( /*0xfffcb9a7*/
                a1,
                v64,
                3u,
                *(unsigned __int16 *)(a1 + 206) + a1 + 2 * *(unsigned __int16 *)(a1 + 206) + 1720);
        sub_FFFC8367( /*0xfffcb9d3*/
          a1,
          *v53,
          3u,
          *(unsigned __int16 *)(a1 + 206) + a1 + 2 * *(unsigned __int16 *)(a1 + 206) + 1720,
          (1 << i) | v45,
          1u);
        continue; /*0xfffcb9d3*/
      }
      v54 = (_BYTE *)(a1 + v51 + v13); /*0xfffcb028*/
      if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffcb02b*/
      {
        sub_FFFC8367( /*0xfffcb049*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 316) + a1 + 2 * *(unsigned __int16 *)(a1 + 316) + 2017,
          3,
          1u);
        sub_FFFC8367( /*0xfffcb06a*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 318) + a1 + 2 * *(unsigned __int16 *)(a1 + 318) + 2017,
          3,
          1u);
        sub_FFFC8367( /*0xfffcb08b*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 268) + a1 + 2 * *(unsigned __int16 *)(a1 + 268) + 2017,
          15,
          1u);
      }
      sub_FFFC8367( /*0xfffcb0af*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 270) + a1 + 2 * *(unsigned __int16 *)(a1 + 270) + 2017,
        63,
        1u);
      sub_FFFC8367( /*0xfffcb0d3*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 272) + a1 + 2 * *(unsigned __int16 *)(a1 + 272) + 2017,
        4095,
        1u);
      sub_FFFC8648(a1, v63, i); /*0xfffcb0df*/
      if ( !*(_BYTE *)(a1 + 3734) ) /*0xfffcb0e7*/
        sub_FFFC8367( /*0xfffcb10b*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 262) + a1 + 2 * *(unsigned __int16 *)(a1 + 262) + 2017,
          1,
          1u);
      v15 = *(_BYTE *)(a1 + 3733) != 0 ? 0 : 2;
      if ( (v14[1] & 8) == 0 ) /*0xfffcb126*/
        v15 |= 1u; /*0xfffcb128*/
      sub_FFFC8367( /*0xfffcb145*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 264) + a1 + 2 * *(unsigned __int16 *)(a1 + 264) + 2017,
        v15,
        1u);
      if ( sub_FFFC52CF(a1, v63, 745570438, 0) && (char)v14[1] < 0 ) /*0xfffcb165*/
      {
        v16 = sub_FFFC4FE3( /*0xfffcb17f*/
                a1,
                v64,
                3u,
                *(unsigned __int16 *)(a1 + 242) + a1 + 2 * *(unsigned __int16 *)(a1 + 242) + 1720);
        sub_FFFC8367( /*0xfffcb1a7*/
          a1,
          v64,
          3u,
          *(unsigned __int16 *)(a1 + 242) + a1 + 2 * *(unsigned __int16 *)(a1 + 242) + 1720,
          (1 << i) | v16,
          1u);
      }
      if ( v14[4] && v14[2] > 1u ) /*0xfffcb1b8*/
        sub_FFFC8367( /*0xfffcb1d6*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 266) + a1 + 2 * *(unsigned __int16 *)(a1 + 266) + 2017,
          12,
          1u);
      if ( !sub_FFFC52CF(a1, v63, 745570438, 0) ) /*0xfffcb1e9*/
        sub_FFFC8367( /*0xfffcb210*/
          a1,
          v64,
          i,
          *(unsigned __int16 *)(a1 + 276) + a1 + 2 * *(unsigned __int16 *)(a1 + 276) + 2017,
          1,
          1u);
      v17 = *(_BYTE *)(a1 + 1); /*0xfffcb218*/
      if ( v17 != 1 && v17 != 2 ) /*0xfffcb221*/
      {
        v14[9] = 0; /*0xfffcb223*/
        v14[10] = 0; /*0xfffcb227*/
        v14[11] = 0; /*0xfffcb22b*/
        v14[12] = 0; /*0xfffcb22f*/
      }
      sub_FFFC8367( /*0xfffcb252*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 278) + a1 + 2 * *(unsigned __int16 *)(a1 + 278) + 2017,
        (unsigned __int8)v14[9],
        1u);
      sub_FFFC8367( /*0xfffcb276*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 280) + a1 + 2 * *(unsigned __int16 *)(a1 + 280) + 2017,
        (unsigned __int8)v14[10],
        1u);
      sub_FFFC8367( /*0xfffcb29a*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 282) + a1 + 2 * *(unsigned __int16 *)(a1 + 282) + 2017,
        (unsigned __int8)v14[11],
        1u);
      sub_FFFC8367( /*0xfffcb2c1*/
        a1,
        v64,
        i,
        *(unsigned __int16 *)(a1 + 284) + a1 + 2 * *(unsigned __int16 *)(a1 + 284) + 2017,
        (unsigned __int8)v14[12],
        1u);
      v58 = 0; /*0xfffcb2c9*/
      v59 = v54 + 5574; /*0xfffcb2d2*/
      LOBYTE(v56) = 0; /*0xfffcb2e0*/
      v50 = v54 + 5642; /*0xfffcb2e4*/
      do
      {
        if ( v59[1] )
        {
          v18 = v50; /*0xfffcb2f4*/
          v68 = 0; /*0xfffcb2f7*/
          while ( !*(v18 - 12) ) /*0xfffcb2ff*/
          {
LABEL_123:
            ++v68; /*0xfffcb8e6*/
            v18 += 32; /*0xfffcb8e9*/
            if ( v68 >= 4u ) /*0xfffcb8f0*/
              goto LABEL_124; /*0xfffcb8f0*/
          }
          v19 = *(_BYTE *)(a1 + 1); /*0xfffcb30c*/
          if ( *(_BYTE *)(a1 + 3734) ) /*0xfffcb305*/
          {
            if ( v19 == 1 || v19 == 2 ) /*0xfffcb378*/
              goto LABEL_81; /*0xfffcb378*/
            *(v18 - 1) = 67; /*0xfffcb37f*/
            if ( !*(_BYTE *)(a1 + v51 + 3757) ) /*0xfffcb383*/
            {
              v22 = v59[13]; /*0xfffcb396*/
              if ( v52[5] ) /*0xfffcb38f*/
              {
                if ( (v22 & 7) == 1 ) /*0xfffcb3c1*/
                  v23 = (unsigned __int16)word_FFFDC72C[v58]; /*0xfffcb3c3*/
                else
                  v23 = (unsigned __int16)word_FFFDC730[v58]; /*0xfffcb3cc*/
              }
              else if ( (v22 & 7) == 1 ) /*0xfffcb3a4*/
              {
                v23 = (unsigned __int16)word_FFFDC724[v58]; /*0xfffcb3a6*/
              }
              else
              {
                v23 = (unsigned __int16)word_FFFDC728[v58]; /*0xfffcb3af*/
              }
              *v18 = (unsigned int)(v23 << 6) / *(_DWORD *)(a1 + 70); /*0xfffcb3d9*/
              goto LABEL_81; /*0xfffcb3d9*/
            }
          }
          else
          {
            if ( v19 == 1 || v19 == 2 ) /*0xfffcb31b*/
              goto LABEL_81; /*0xfffcb31b*/
            v20 = v59; /*0xfffcb321*/
            v21 = 67; /*0xfffcb32a*/
            if ( *(_WORD *)(v59 + 23) == 0xB300 && v59[11] <= 1u ) /*0xfffcb333*/
            {
              v20 = v59; /*0xfffcb345*/
              v21 = 0x1900u / *(_DWORD *)(a1 + 70) + 67; /*0xfffcb348*/
            }
            if ( *(_WORD *)(v20 + 23) == 0xB304 && v20[11] <= 1u ) /*0xfffcb358*/
              v21 += 0x1900u / *(_DWORD *)(a1 + 70); /*0xfffcb368*/
            *(v18 - 1) = v21; /*0xfffcb36a*/
          }
          *v18 = 0; /*0xfffcb36d*/
LABEL_81:
          if ( *(_BYTE *)(a1 + 3734) || (v68 & 1) == 0 ) /*0xfffcb3e7*/
          {
            v24 = *(unsigned __int16 *)(148 * *(v18 - 3) + a1 + 324); /*0xfffcb3f9*/
            sub_FFFC8367(a1, v64, i, v24 + a1 + 2 * v24 + 2017, *(v18 - 1), 1u); /*0xfffcb413*/
          }
          v25 = *(unsigned __int16 *)(148 * *(v18 - 4) + a1 + 326); /*0xfffcb42a*/
          sub_FFFC8367(a1, v64, i, v25 + a1 + 2 * v25 + 2017, *v18, 1u); /*0xfffcb444*/
          v26 = *(unsigned __int16 *)(a1 + 2 * *(v18 - 5) + 304); /*0xfffcb453*/
          sub_FFFC8367(a1, v64, i, v26 + a1 + 2 * v26 + 2017, v18[1], 1u); /*0xfffcb46d*/
          if ( *(v18 - 5) == 4 && v54[5516] == 1 && *v59 == 2 ) /*0xfffcb48c*/
            sub_FFFC8367( /*0xfffcb4ad*/
              a1,
              v64,
              i,
              *(unsigned __int16 *)(a1 + 314) + a1 + 2 * *(unsigned __int16 *)(a1 + 314) + 2017,
              v18[1],
              1u);
          if ( (v68 & 1) == 0 && !v18[20] ) /*0xfffcb4ba*/
          {
            v27 = *(unsigned __int16 *)(a1 + 2 * v18[27] + 304); /*0xfffcb4ca*/
            sub_FFFC8367(a1, v64, i, v27 + a1 + 2 * v27 + 2017, v18[33], 1u); /*0xfffcb4e4*/
          }
          if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffcb4ef*/
          {
            v28 = *(unsigned __int16 *)(a1 + 2 * (*(v18 - 3) >> 1) + 316); /*0xfffcb4fb*/
            v46 = v28 + a1 + 2 * v28 + 2017; /*0xfffcb511*/
            v29 = sub_FFFC4FE3(a1, v64, i, v46); /*0xfffcb518*/
            v30 = *(v18 - 3); /*0xfffcb51f*/
            if ( v30 > 1u ) /*0xfffcb529*/
              v30 -= 2; /*0xfffcb52c*/
            sub_FFFC8367(a1, *v53, i, v46, ~(1 << v30) & v29, 1u); /*0xfffcb543*/
            v31 = sub_FFFC4FE3( /*0xfffcb561*/
                    a1,
                    v64,
                    i,
                    *(unsigned __int16 *)(a1 + 268) + a1 + 2 * *(unsigned __int16 *)(a1 + 268) + 2017);
            v32 = *(v18 - 4); /*0xfffcb566*/
            v33 = ~(1 << v32) & v31; /*0xfffcb576*/
            if ( !i ) /*0xfffcb57c*/
            {
              v33 &= ~8u; /*0xfffcb57e*/
              if ( v68 ) /*0xfffcb585*/
                v33 &= ~(1 << (v32 - 1)); /*0xfffcb58e*/
            }
            sub_FFFC8367( /*0xfffcb5af*/
              a1,
              *v53,
              i,
              *(unsigned __int16 *)(a1 + 268) + a1 + 2 * *(unsigned __int16 *)(a1 + 268) + 2017,
              v33,
              1u);
          }
          v34 = sub_FFFC4FE3( /*0xfffcb5d0*/
                  a1,
                  v64,
                  i,
                  *(unsigned __int16 *)(a1 + 270) + a1 + 2 * *(unsigned __int16 *)(a1 + 270) + 2017);
          v35 = *(v18 - 5); /*0xfffcb5d5*/
          v60 = ~(1 << v35) & v34; /*0xfffcb5e5*/
          if ( *v59 == 1 ) /*0xfffcb5ed*/
            v60 &= ~(1 << (v35 + 1)); /*0xfffcb5f6*/
          sub_FFFC8367( /*0xfffcb61a*/
            a1,
            *v53,
            i,
            *(unsigned __int16 *)(a1 + 270) + a1 + 2 * *(unsigned __int16 *)(a1 + 270) + 2017,
            v60,
            1u);
          v36 = sub_FFFC4FE3( /*0xfffcb638*/
                  a1,
                  v64,
                  i,
                  *(unsigned __int16 *)(a1 + 272) + a1 + 2 * *(unsigned __int16 *)(a1 + 272) + 2017);
          v37 = *(v18 - 6); /*0xfffcb63d*/
          v61 = ~(1 << v37) & v36; /*0xfffcb652*/
          if ( (v37 & 1) == 0 ) /*0xfffcb657*/
            v61 &= ~(1 << (v37 + 1)); /*0xfffcb660*/
          sub_FFFC8367( /*0xfffcb680*/
            a1,
            v64,
            i,
            *(unsigned __int16 *)(a1 + 272) + a1 + 2 * *(unsigned __int16 *)(a1 + 272) + 2017,
            v61,
            1u);
          v38 = ~(256 << (v58 * 2)) /*0xfffcb6b8*/
              & sub_FFFC4FE3(
                  a1,
                  v64,
                  i,
                  *(unsigned __int16 *)(a1 + 272) + a1 + 2 * *(unsigned __int16 *)(a1 + 272) + 2017);
          if ( v68 ) /*0xfffcb6be*/
            v38 &= ~(512 << (v58 * 2)); /*0xfffcb6c9*/
          sub_FFFC8367( /*0xfffcb6e6*/
            a1,
            v64,
            i,
            *(unsigned __int16 *)(a1 + 272) + a1 + 2 * *(unsigned __int16 *)(a1 + 272) + 2017,
            v38,
            1u);
          if ( v59[12] ) /*0xfffcb6f1*/
          {
            v39 = sub_FFFC4FE3( /*0xfffcb710*/
                    a1,
                    v64,
                    i,
                    *(unsigned __int16 *)(a1 + 274) + a1 + 2 * *(unsigned __int16 *)(a1 + 274) + 2017);
            if ( v52[4] == 1 && v52[2] == 1 ) /*0xfffcb723*/
              v40 = *(v18 - 11); /*0xfffcb725*/
            else
              v40 = *(v18 - 10); /*0xfffcb72a*/
            sub_FFFC8367( /*0xfffcb74e*/
              a1,
              v64,
              i,
              *(unsigned __int16 *)(a1 + 274) + a1 + 2 * *(unsigned __int16 *)(a1 + 274) + 2017,
              (1 << v40) | v39,
              1u);
          }
          if ( !v68 || *(v18 - 10) != *(v18 - 42) )
          {
            v47 = *(v18 - 10); /*0xfffcb778*/
            v41 = v51 + 578 * i + 144 * v47 + a1 + 3780; /*0xfffcb783*/
            v48 = 148 * v47 + a1 + 328; /*0xfffcb79a*/
            v57 = 0; /*0xfffcb7a4*/
            v42 = v59[12] == 0 ? 0 : 9;
            v11 = v42 == -9; /*0xfffcb7af*/
            v43 = v42 + 9; /*0xfffcb7af*/
            v66 = v43; /*0xfffcb7b1*/
            if ( !v11 ) /*0xfffcb7b4*/
            {
              v55 = (unsigned __int16 *)(v41 + 6); /*0xfffcb7bd*/
              v62 = (unsigned __int16 *)(v48 + 2); /*0xfffcb7c9*/
              v49 = v41 - v48; /*0xfffcb7cc*/
              do /*0xfffcb8e0*/
              {
                if ( *(_BYTE *)(a1 + 3733) || v57 != 8 && v57 != 17 ) /*0xfffcb7e6*/
                {
                  v44 = *(_BYTE *)(a1 + 1); /*0xfffcb7ec*/
                  if ( v44 == 1 || v44 == 2 ) /*0xfffcb7f5*/
                  {
                    sub_FFFC8367(a1, v64, i, *(v62 - 1) + a1 + 2 * *(v62 - 1) + 2017, *(v55 - 3), 1u); /*0xfffcb851*/
                    sub_FFFC8367(a1, v64, i, *v62 + a1 + 2 * *v62 + 2017, *(unsigned __int16 *)((char *)v62 + v49), 1u); /*0xfffcb877*/
                    sub_FFFC8367(a1, v64, i, v62[1] + a1 + 2 * v62[1] + 2017, *(v55 - 1), 1u); /*0xfffcb89e*/
                    sub_FFFC8367(a1, v64, i, v62[2] + a1 + 2 * v62[2] + 2017, *v55, 1u); /*0xfffcb8c7*/
                  }
                  else
                  {
                    sub_FFFC87D6(a1, v63, i, v56, *(v18 - 10), v57); /*0xfffcb80a*/
                    sub_FFFC8856(a1, v63, i, v56, *(v18 - 10), v57); /*0xfffcb822*/
                  }
                  v43 = v66; /*0xfffcb8cf*/
                }
                ++v57; /*0xfffcb8d2*/
                v55 += 4; /*0xfffcb8d5*/
                v62 += 4; /*0xfffcb8d9*/
              }
              while ( v57 < v43 ); /*0xfffcb8e0*/
            }
          }
          goto LABEL_123; /*0xfffcb8e0*/
        }
LABEL_124:
        LOBYTE(v56) = v56 + 1; /*0xfffcb8f6*/
        ++v58; /*0xfffcb8f9*/
        v50 += 184; /*0xfffcb902*/
        v59 += 184; /*0xfffcb905*/
      }
      while ( (unsigned __int8)v56 < 2u );
      if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffcb915*/
      {
        v54[5519] = sub_FFFC4FE3( /*0xfffcb93c*/
                      a1,
                      v64,
                      i,
                      *(unsigned __int16 *)(a1 + 316) + a1 + 2 * *(unsigned __int16 *)(a1 + 316) + 2017);
        v54[5520] = sub_FFFC4FE3( /*0xfffcb960*/
                      a1,
                      v64,
                      i,
                      *(unsigned __int16 *)(a1 + 318) + a1 + 2 * *(unsigned __int16 *)(a1 + 318) + 2017);
        v54[5518] = sub_FFFC4FE3( /*0xfffcb987*/
                      a1,
                      v64,
                      i,
                      *(unsigned __int16 *)(a1 + 268) + a1 + 2 * *(unsigned __int16 *)(a1 + 268) + 2017);
      }
    }
    result = sub_FFFC8367( /*0xfffcba03*/
               a1,
               v64,
               3u,
               *(unsigned __int16 *)(a1 + 202) + a1 + 2 * *(unsigned __int16 *)(a1 + 202) + 1720,
               6,
               1u);
LABEL_130:
    LOBYTE(v63) = v63 + 1; /*0xfffcba0b*/
  }
  while ( !(_BYTE)v63 );
  return result; /*0xfffcba17*/
}

/* 0xfffcba1c sub_FFFCBA1C */
int __cdecl sub_FFFCBA1C(_BYTE *a1)
{
  char v1; // al
  _BYTE *v2; // esi
  unsigned __int8 v3; // al
  unsigned __int16 *v4; // esi
  int v5; // eax
  char *v6; // ecx
  _WORD *v7; // edx
  char v8; // al
  char v9; // cl
  char v10; // al
  char v11; // al
  char v12; // cl
  int v13; // edx
  int v14; // eax
  unsigned __int8 v15; // dl
  int v16; // eax
  char v17; // al
  unsigned __int8 v18; // dl
  char *v20; // [esp+8h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-20h]
  _BYTE *v22; // [esp+Ch] [ebp-20h]
  int v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+18h] [ebp-14h]
  char v25; // [esp+1Ch] [ebp-10h]
  char v26; // [esp+20h] [ebp-Ch]
  unsigned __int8 v27; // [esp+24h] [ebp-8h]
  unsigned __int8 v28; // [esp+2Ah] [ebp-2h]
  unsigned __int8 v29; // [esp+2Bh] [ebp-1h]

  v25 = 0; /*0xfffcba2a*/
  v26 = 0; /*0xfffcba2d*/
  sub_FFFCA98E((int)a1); /*0xfffcba30*/
  if ( a1[3755] && a1[3758] )
  {
    sub_FFFC713F((int)a1, 0, 0); /*0xfffcba52*/
    v1 = a1[1]; /*0xfffcba57*/
    if ( v1 != 1 && v1 != 2 ) /*0xfffcba67*/
    {
      v2 = a1 + 5530; /*0xfffcba6d*/
      v21 = 3; /*0xfffcba73*/
      do /*0xfffcbb5f*/
      {
        if ( *(v2 - 18) ) /*0xfffcba7a*/
        {
          *v2 = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 11), 0); /*0xfffcba91*/
          v2[1] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 12), 0); /*0xfffcbaa1*/
          v2[11] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 13), 0); /*0xfffcbab2*/
          *((_WORD *)v2 + 7) = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 14), 0); /*0xfffcbac3*/
          v3 = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 21), 0); /*0xfffcbad0*/
          v2[7] = v3; /*0xfffcbada*/
          if ( v3 < 4u ) /*0xfffcbadd*/
            v2[7] = 4; /*0xfffcbadf*/
          v2[2] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 16), 0); /*0xfffcbaf1*/
          v2[5] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 17), 0); /*0xfffcbb02*/
          v2[6] = byte_FFFDC668[7 * ((unsigned __int8)*(v2 - 17) >> 7) + (unsigned __int8)a1[3757]]; /*0xfffcbb1d*/
          v2[3] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 15), 0); /*0xfffcbb2e*/
          v2[4] = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 19), 0); /*0xfffcbb3f*/
          *(v2 - 1) = sub_FFFC4E44((int)a1, *((_WORD *)v2 + 10), 0); /*0xfffcbb53*/
        }
        v2 += 430; /*0xfffcbb56*/
        --v21; /*0xfffcbb5c*/
      }
      while ( v21 ); /*0xfffcbb5f*/
    }
    v27 = 4; /*0xfffcbb6b*/
    v23 = 0; /*0xfffcbb6f*/
    v4 = (unsigned __int16 *)(a1 + 5546); /*0xfffcbb72*/
    v22 = a1 + 5574; /*0xfffcbb78*/
    do
    {
      if ( *((_BYTE *)v4 - 34) )
      {
        do /*0xfffcbb8d*/
        {
          if ( ((1 << (*((_BYTE *)v4 - 17) - 4)) & *v4) != 0 ) /*0xfffcbba1*/
            break; /*0xfffcbba1*/
          ++*((_BYTE *)v4 - 17); /*0xfffcbb86*/
        }
        while ( *((_BYTE *)v4 - 17) != 16 ); /*0xfffcbb8d*/
        sub_FFFDA7A3(a1, v4 - 17); /*0xfffcbba8*/
        sub_FFFC870D((int)a1, 0, v27 - 4); /*0xfffcbbba*/
        sub_FFFC5BCB((int)a1, 0, v27 - 4, 8u); /*0xfffcbbc6*/
        sub_FFFC6581((int)a1, 0, v27 - 4, 8u); /*0xfffcbbd2*/
        sub_FFFC4FB2((int)a1, a1[6997], v27, 0, 0xD8u, 8194); /*0xfffcbbef*/
        v28 = 0; /*0xfffcbbfa*/
        if ( *((_BYTE *)v4 - 32) )
        {
          while ( 1 ) /*0xfffcbc0a*/
          {
            v5 = 184 * v28; /*0xfffcbc0a*/
            v6 = &v22[v5]; /*0xfffcbc10*/
            v20 = &v22[v5]; /*0xfffcbc15*/
            if ( v22[v5 + 1] ) /*0xfffcbc12*/
              break; /*0xfffcbc12*/
LABEL_46:
            if ( ++v28 >= *((_BYTE *)v4 - 32) ) /*0xfffcbd75*/
              goto LABEL_47; /*0xfffcbd75*/
          }
          v29 = 0; /*0xfffcbc2a*/
          v24 = 0; /*0xfffcbc2d*/
          v7 = &a1[v5 + 5646 + v23]; /*0xfffcbc30*/
          while ( 2 )
          {
            if ( *((_BYTE *)v7 - 16) )
            {
              if ( !*((_BYTE *)v4 - 30) )
              {
                v8 = *((_BYTE *)v4 - 32); /*0xfffcbc41*/
                if ( v8 == 1 ) /*0xfffcbc46*/
                {
                  v9 = *((_BYTE *)v7 - 11); /*0xfffcbc48*/
                  *(v7 - 1) = 0; /*0xfffcbc4b*/
                  *v7 = 4; /*0xfffcbc4f*/
                  v25 = 0; /*0xfffcbc54*/
                  v10 = 1 << v9; /*0xfffcbc57*/
                  goto LABEL_42; /*0xfffcbc59*/
                }
                if ( v8 == 2 )
                {
                  *(v7 - 1) = 1024; /*0xfffcbc66*/
                  *v7 = *v6 != 1 ? 68 : 512;
                  goto LABEL_25; /*0xfffcbc7e*/
                }
                goto LABEL_43; /*0xfffcbc60*/
              }
              *(v7 - 1) = 1024; /*0xfffcbc8a*/
              v12 = *v6; /*0xfffcbc90*/
              if ( v12 == 1 )
              {
                *v7 = 512; /*0xfffcbc97*/
              }
              else if ( v12 == 2 )
              {
                *v7 = 68; /*0xfffcbca3*/
              }
              else if ( (v29 & 1) != 0 )
              {
                *v7 = 0; /*0xfffcbcb0*/
              }
              else
              {
                *v7 = *((_BYTE *)v4 - 32) != 1 ? 68 : 4;
              }
              if ( *((_BYTE *)v4 - 32) == 1 ) /*0xfffcbccb*/
              {
                v26 = 1 << (1 - (v24 >> 1)); /*0xfffcbcdf*/
                if ( (v29 & 1) == 0 ) /*0xfffcbce2*/
                  v26 |= 1 << *((_BYTE *)v7 - 11); /*0xfffcbceb*/
                v25 = 0; /*0xfffcbcee*/
                sub_FFFC4F4E((int)a1, a1[6997], v27, 0, *((unsigned __int8 *)v7 - 15) + 164, 0); /*0xfffcbcf1*/
              }
              else
              {
                if ( (v29 & 1) != 0 ) /*0xfffcbcf7*/
                  v11 = 0; /*0xfffcbcf9*/
                else
LABEL_25:
                  v11 = 1 << *((_BYTE *)v7 - 11); /*0xfffcbc81*/
                if ( v28 ) /*0xfffcbcfe*/
                {
                  v10 = v11 | 3; /*0xfffcbd08*/
                  v25 = 3; /*0xfffcbd0a*/
                }
                else
                {
                  v10 = v11 | 0xC; /*0xfffcbd00*/
                  v25 = 12; /*0xfffcbd02*/
                }
LABEL_42:
                v26 = v10; /*0xfffcbd0e*/
LABEL_43:
                sub_FFFC4F4E((int)a1, a1[6997], v27, 0, *((unsigned __int8 *)v7 - 15) + 164, v25); /*0xfffcbd11*/
              }
              sub_FFFC4F4E((int)a1, a1[6997], v27, 0, *(unsigned __int8 *)(v13 - 15) + 172, v26); /*0xfffcbd4e*/
              v6 = v20; /*0xfffcbd53*/
            }
            ++v29; /*0xfffcbd59*/
            ++v24; /*0xfffcbd5c*/
            v7 += 16; /*0xfffcbd5f*/
            if ( v29 >= 4u ) /*0xfffcbd66*/
              goto LABEL_46; /*0xfffcbd66*/
            continue; /*0xfffcbd66*/
          }
        }
LABEL_47:
        v14 = sub_FFFC4EEF((int)a1, a1[6997], v27, 0, 0x58u); /*0xfffcbd7b*/
        if ( *((_BYTE *)v4 - 30) ) /*0xfffcbd93*/
        {
          v14 |= 0x400000u; /*0xfffcbd98*/
          if ( *((_BYTE *)v4 - 32) == 1 ) /*0xfffcbda1*/
            v14 |= 0x800000u; /*0xfffcbda3*/
        }
        v16 = v14 | 0x63F0000; /*0xfffcbda8*/
        if ( !a1[3734] ) /*0xfffcbdad*/
          v16 |= 0x8000u; /*0xfffcbdb5*/
        sub_FFFC4FB2((int)a1, v15, v27, 0, 0x58u, v16); /*0xfffcbdc3*/
        if ( (*((_BYTE *)v4 - 33) & 0x40) != 0 ) /*0xfffcbdcf*/
        {
          v17 = sub_FFFC4E96((int)a1, a1[6997], v27, 0, 0x68u); /*0xfffcbde1*/
          sub_FFFC4F4E((int)a1, v18, v27, 0, 0x68u, v17 | 1); /*0xfffcbdf2*/
          if ( (a1[81] & 0x20) != 0 ) /*0xfffcbdfe*/
            sub_FFFC4FB2((int)a1, a1[6997], v27, 3u, 0xA0u, 4); /*0xfffcbe16*/
        }
        sub_FFFC92EC((int)a1, 0, v27 - 4); /*0xfffcbe23*/
      }
      v23 += 430; /*0xfffcbe30*/
      v22 += 430; /*0xfffcbe33*/
      v4 += 215; /*0xfffcbe36*/
      ++v27; /*0xfffcbe38*/
    }
    while ( (unsigned __int8)(v27 - 4) < 3u );
  }
  return 0; /*0xfffcbe49*/
}

/* 0xfffcbe4f sub_FFFCBE4F */
char __cdecl sub_FFFCBE4F(int a1)
{
  int v1; // esi
  char result; // al
  char *v3; // edi

  v1 = a1; /*0xfffcbe53*/
  result = *(_BYTE *)(a1 + 1); /*0xfffcbe56*/
  if ( result != 1 ) /*0xfffcbe5b*/
  {
    *(_BYTE *)(a1 + 24) = 1; /*0xfffcbe62*/
    if ( *(_BYTE *)(v1 + 3757) > 1u || *(_BYTE *)(v1 + 3758) == 3 || *(_BYTE *)(v1 + 3769) ) /*0xfffcbe7a*/
      *(_BYTE *)(v1 + 24) = 2; /*0xfffcbe82*/
    if ( result != 2 ) /*0xfffcbe88*/
    {
      if ( *(_BYTE *)(v1 + 3755) ) /*0xfffcbe8a*/
      {
        if ( sub_FFFD91CC(v1, 0, (char *)&a1 + 3) ) /*0xfffcbe98*/
        {
          result = sub_FFFD9481(v1, 30, 0, 0, 255, 255, 255); /*0xfffcbee3*/
        }
        else
        {
          v3 = (char *)(v1 + 6999); /*0xfffcbea5*/
          *(_BYTE *)(v1 + 3737) = 1; /*0xfffcbeab*/
          *(_BYTE *)(v1 + 3738) = 1; /*0xfffcbeb2*/
          if ( HIBYTE(a1) != *(_BYTE *)(v1 + 6999) ) /*0xfffcbebe*/
            sub_FFFD9273(v1, 0, *(_BYTE *)(v1 + 6999)); /*0xfffcbec3*/
          result = *v3; /*0xfffcbecb*/
          *(_BYTE *)(v1 + 3762) = *v3; /*0xfffcbecd*/
        }
      }
      if ( *(_BYTE *)(v1 + 3737) ) /*0xfffcbeeb*/
        return sub_FFFCA83C(v1, *(unsigned __int16 *)(v1 + 36)); /*0xfffcbef9*/
    }
  }
  return result; /*0xfffcbf01*/
}

/* 0xfffcbf04 sub_FFFCBF04 */
unsigned int __cdecl sub_FFFCBF04(_BYTE *a1)
{
  unsigned int result; // eax
  _BYTE *v3; // edi
  unsigned __int8 v4; // [esp+Ch] [ebp+8h]

  result = 0; /*0xfffcbf0b*/
  if ( a1[1] != 1 ) /*0xfffcbf11*/
  {
    if ( a1[3755] ) /*0xfffcbf13*/
    {
      v4 = 0; /*0xfffcbf1c*/
      v3 = a1 + 5512; /*0xfffcbf1f*/
      do /*0xfffcbf45*/
      {
        if ( *v3 ) /*0xfffcbf25*/
          sub_FFFC6475((int)a1, 0, v4); /*0xfffcbf30*/
        ++v4; /*0xfffcbf38*/
        v3 += 430; /*0xfffcbf3b*/
      }
      while ( v4 < 3u ); /*0xfffcbf45*/
      LOWORD(result) = *(_WORD *)&a1[7 * (unsigned __int8)a1[3757] + 1040]; /*0xfffcbf51*/
    }
    return sub_FFFCA83C((int)a1, (unsigned __int16)result); /*0xfffcbf5f*/
  }
  return result; /*0xfffcbf66*/
}

/* 0xfffcbf69 sub_FFFCBF69 */
char __cdecl sub_FFFCBF69(_BYTE *a1, unsigned __int8 a2, int a3, unsigned __int16 *a4, int a5, unsigned __int8 a6)
{
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  unsigned __int8 *v11; // ecx
  bool v12; // zf
  unsigned __int8 v13; // al
  int v14; // edx
  char v15; // al
  unsigned __int8 v16; // dl
  int v17; // eax
  int v18; // eax
  unsigned __int8 *v19; // edi
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // dl
  int v23; // [esp-8h] [ebp-18h]
  int v24; // [esp+Ch] [ebp-4h]
  int v25; // [esp+18h] [ebp+8h]
  unsigned __int16 *v26; // [esp+1Ch] [ebp+Ch]

  v7 = 3297 * a2; /*0xfffcbf91*/
  v8 = (int)&a1[3049 * a2 + 5574 + 430 * (unsigned __int8)a3]; /*0xfffcbf9b*/
  v25 = (int)&a1[1068 * (unsigned __int8)a3 + 7730 + v7]; /*0xfffcbfa9*/
  v9 = (unsigned __int8)a4; /*0xfffcbfac*/
  v10 = 184 * (unsigned __int8)a4 + v8; /*0xfffcbfb8*/
  v11 = (unsigned __int8 *)(32 * (unsigned __int8)a5 + v10 + 56); /*0xfffcbfc2*/
  v12 = a1[19] == 0; /*0xfffcbfd0*/
  v24 = (int)&a1[148 * *(unsigned __int8 *)(32 * (unsigned __int8)a5 + v10 + 58) + 328]; /*0xfffcbfdb*/
  a1[33] = 1; /*0xfffcbfde*/
  if ( v12 ) /*0xfffcbfe2*/
  {
    v13 = a6; /*0xfffcbfe4*/
    v11[10] = a6; /*0xfffcbfe7*/
  }
  else
  {
    v14 = v25 + 212 * v9 + 10 * (unsigned __int8)a5; /*0xfffcbffc*/
    v15 = *(_BYTE *)(v14 + 155); /*0xfffcbfff*/
    v16 = *(_BYTE *)(v14 + 157); /*0xfffcc005*/
    if ( v16 < 0xCu ) /*0xfffcc011*/
    {
      sub_FFFD9481(a1, 10, 2, a2, a3, (char)a4, a5); /*0xfffcc024*/
      LOBYTE(v17) = sub_FFFC9491(a1, a2, a3, 0, (_BYTE *)&a3 + 3); /*0xfffcc036*/
      return v17; /*0xfffcc03e*/
    }
    v13 = 2 * v16 / 2 + v15; /*0xfffcc052*/
    if ( v13 >= 0x80u ) /*0xfffcc056*/
      v13 += 0x80; /*0xfffcc058*/
    v11[11] = v13; /*0xfffcc05a*/
  }
  v23 = v13; /*0xfffcc062*/
  v18 = *(unsigned __int16 *)&a1[148 * v11[9] + 324]; /*0xfffcc06d*/
  v19 = &a1[v7 + 6997]; /*0xfffcc085*/
  sub_FFFC8367((int)a1, *v19, a3, (int)&a1[2 * v18 + 2017 + v18], v23, 1u); /*0xfffcc090*/
  v12 = *(_BYTE *)(v10 + 12) == 0; /*0xfffcc098*/
  HIBYTE(a5) = 0; /*0xfffcc09c*/
  v20 = v12 ? 9 : 18;
  if ( (v12 ? 0 : 9) != 0xF7 )
  {
    a4 = (unsigned __int16 *)v24; /*0xfffcc0b0*/
    v26 = (unsigned __int16 *)(a1 + 916); /*0xfffcc0b9*/
    do /*0xfffcc128*/
    {
      if ( a1[3733] || HIBYTE(a5) != 8 && HIBYTE(a5) != 17 ) /*0xfffcc0cf*/
      {
        sub_FFFC8367((int)a1, *v19, a3, (int)&a1[2 * *v26 + 2017 + *v26], 0, 0); /*0xfffcc0ef*/
        sub_FFFC8367((int)a1, *v19, a3, (int)&a1[2 * *a4 + 2017 + *a4], 0, 0); /*0xfffcc112*/
      }
      ++HIBYTE(a5); /*0xfffcc11a*/
      v26 += 2; /*0xfffcc11d*/
      a4 += 4; /*0xfffcc121*/
    }
    while ( HIBYTE(a5) < v20 ); /*0xfffcc128*/
  }
  a1[33] = 0; /*0xfffcc12a*/
  v21 = *v19; /*0xfffcc130*/
  do /*0xfffcc14a*/
    v17 = sub_FFFC4EEF((int)a1, v21, 3u, 4u, 0xF8u); /*0xfffcc13d*/
  while ( (v17 & 0x40000000) != 0 ); /*0xfffcc14a*/
  return v17; /*0xfffcc14c*/
}

/* 0xfffcc151 sub_FFFCC151 */
void __cdecl sub_FFFCC151(int a1)
{
  int v2; // edx
  _BYTE *v3; // edx
  int v4; // eax
  int v5; // ebx
  _BYTE *v6; // edi
  char v7; // al
  char v8; // bl
  bool v9; // zf
  unsigned __int8 v10; // bl
  __int16 i; // ax
  unsigned __int16 *v12; // edi
  unsigned __int16 v13; // ax
  int v14; // ebx
  _BYTE *v15; // edi
  int v16; // [esp+Ch] [ebp-40h]
  int v17; // [esp+10h] [ebp-3Ch]
  unsigned __int16 v18; // [esp+14h] [ebp-38h]
  unsigned __int16 v19; // [esp+18h] [ebp-34h]
  _BYTE *v20; // [esp+1Ch] [ebp-30h]
  int v21; // [esp+20h] [ebp-2Ch]
  int v22; // [esp+24h] [ebp-28h]
  unsigned __int16 v23; // [esp+28h] [ebp-24h]
  unsigned __int16 v24; // [esp+2Ch] [ebp-20h]
  _BYTE *v25; // [esp+30h] [ebp-1Ch]
  int v26; // [esp+34h] [ebp-18h]
  unsigned __int8 v27; // [esp+38h] [ebp-14h]
  int v28; // [esp+3Ch] [ebp-10h]
  int v29; // [esp+40h] [ebp-Ch]
  unsigned __int8 v30; // [esp+44h] [ebp-8h]
  unsigned __int8 v31; // [esp+44h] [ebp-8h]
  unsigned __int8 v32; // [esp+48h] [ebp-4h]
  unsigned __int8 v33; // [esp+48h] [ebp-4h]
  unsigned __int16 *v34; // [esp+54h] [ebp+8h]
  _BYTE *v35; // [esp+54h] [ebp+8h]
  char v36; // [esp+57h] [ebp+Bh]

  v25 = &unk_FFFDC678; /*0xfffcc15d*/
  v17 = 7; /*0xfffcc164*/
  do
  {
    if ( *(_BYTE *)(a1 + 3755) )
    {
      v2 = a1 + 5514; /*0xfffcc17a*/
      v32 = 0; /*0xfffcc186*/
      v28 = 0; /*0xfffcc18a*/
      v26 = 0; /*0xfffcc18d*/
      v22 = 0; /*0xfffcc190*/
      v20 = (_BYTE *)(a1 + 5514); /*0xfffcc193*/
      v21 = a1 + 5574; /*0xfffcc196*/
      do
      {
        if ( *(_BYTE *)(v2 - 2) && !*(_BYTE *)(v28 + a1 + 7087) )
        {
          v27 = v32 + 4; /*0xfffcc1c6*/
          sub_FFFC4F7F(a1, *(_BYTE *)(a1 + 6997), v32 + 4, 0, 0xA0u, 256); /*0xfffcc1d4*/
          if ( (*(v3 - 1) & 0x20) != 0 ) /*0xfffcc1e0*/
          {
            v19 = 40; /*0xfffcc1e2*/
            v18 = 220; /*0xfffcc1e9*/
          }
          else
          {
            v19 = 100; /*0xfffcc1f2*/
            v18 = 400; /*0xfffcc1f9*/
          }
          LOBYTE(v29) = 0; /*0xfffcc203*/
          if ( *v3 )
          {
            do
            {
              v4 = 184 * (unsigned __int8)v29; /*0xfffcc214*/
              v5 = v4 + v21; /*0xfffcc21a*/
              if ( *(_BYTE *)(v4 + v21 + 1) )
              {
                if ( !*(_BYTE *)(v5 + 2) )
                {
                  v6 = (_BYTE *)(v22 + v4 + a1 + 5630); /*0xfffcc236*/
                  if ( *v6 )
                  {
                    v7 = *(_BYTE *)(v26 + a1 + 3778) + *v25; /*0xfffcc24e*/
                    if ( v7 < 1 ) /*0xfffcc257*/
                      v7 = 1; /*0xfffcc259*/
                    sub_FFFC8367( /*0xfffcc280*/
                      a1,
                      *(_BYTE *)(a1 + 6997),
                      v32,
                      *(unsigned __int16 *)(a1 + 258) + a1 + 2 * *(unsigned __int16 *)(a1 + 258) + 2017,
                      (unsigned __int8)v7,
                      1u);
                    v8 = *(_BYTE *)(v5 + 12) == 0 ? 0 : 9;
                    v9 = v8 == -9; /*0xfffcc2a5*/
                    v10 = v8 + 9; /*0xfffcc2a5*/
                    v16 = 148 * (unsigned __int8)v6[2] + a1 + 328; /*0xfffcc2a8*/
                    v30 = 0; /*0xfffcc2ab*/
                    if ( !v9 ) /*0xfffcc2af*/
                    {
                      v34 = (unsigned __int16 *)(a1 + 918); /*0xfffcc2b7*/
                      do /*0xfffcc31a*/
                      {
                        if ( *(_BYTE *)(a1 + 3733) || v30 != 8 && v30 != 17 ) /*0xfffcc2cd*/
                        {
                          sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v32, *v34 + a1 + 2 * *v34 + 2017, 0, 0); /*0xfffcc2f1*/
                          sub_FFFC8856(a1, 0, v32, v29, v6[2], v30); /*0xfffcc308*/
                        }
                        ++v30; /*0xfffcc310*/
                        v34 += 2; /*0xfffcc313*/
                      }
                      while ( v30 < v10 ); /*0xfffcc31a*/
                    }
                    sub_FFFC85B4(a1, 0, v32); /*0xfffcc322*/
                    sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v27, 0, 0x54u, (32 * (unsigned __int8)v6[1]) | 0x27301); /*0xfffcc345*/
                    for ( i = sub_FFFC4EC2(a1, *(_BYTE *)(a1 + 6997), v27, 0, 0x5Cu); /*0xfffcc35b*/
                          (i & 0x100) == 0;
                          i = sub_FFFC4EC2(a1, *(_BYTE *)(a1 + 6997), v27, 0, 0x5Cu) )
                    {
                      sub_FFFCA83C(a1, 0x64u); /*0xfffcc36d*/
                    }
                    v36 = *(_BYTE *)(v26 + a1 + 3778); /*0xfffcc39e*/
                    if ( (i & 0x10) == 0 ) /*0xfffcc3a1*/
                      goto LABEL_41; /*0xfffcc3a1*/
                    v23 = 0; /*0xfffcc3a7*/
                    v24 = 511; /*0xfffcc3ad*/
                    v31 = 0; /*0xfffcc3b4*/
                    if ( v10 ) /*0xfffcc3b8*/
                    {
                      v12 = (unsigned __int16 *)(v16 + 2); /*0xfffcc3bd*/
                      do /*0xfffcc413*/
                      {
                        if ( *(_BYTE *)(a1 + 3733) || v31 != 8 && v31 != 17 ) /*0xfffcc3d3*/
                        {
                          v13 = sub_FFFC4FE3(a1, *(_BYTE *)(a1 + 6997), v32, *v12 + a1 + 2 * *v12 + 2017); /*0xfffcc3f0*/
                          if ( v13 > v23 ) /*0xfffcc3fc*/
                            v23 = v13; /*0xfffcc3fe*/
                          if ( v13 < v24 ) /*0xfffcc405*/
                            v24 = v13; /*0xfffcc407*/
                        }
                        ++v31; /*0xfffcc40a*/
                        v12 += 4; /*0xfffcc40d*/
                      }
                      while ( v31 < v10 ); /*0xfffcc413*/
                    }
                    if ( v24 <= v19 || v23 >= v18 ) /*0xfffcc427*/
                    {
LABEL_41:
                      v3 = v20; /*0xfffcc44e*/
                      break; /*0xfffcc44e*/
                    }
                    v3 = v20; /*0xfffcc434*/
                    *(_BYTE *)(v28 + a1 + 7086) = v36 + *v25; /*0xfffcc437*/
                  }
                }
              }
              LOBYTE(v29) = v29 + 1; /*0xfffcc43e*/
            }
            while ( (unsigned __int8)v29 < *v3 );
          }
          if ( (_BYTE)v29 == *v3 ) /*0xfffcc456*/
            *(_BYTE *)(v28 + a1 + 7087) = 1; /*0xfffcc45b*/
          sub_FFFC4F7F(a1, *(_BYTE *)(a1 + 6997), v27, 0, 0xA0u, 0); /*0xfffcc479*/
        }
        ++v32; /*0xfffcc481*/
        v26 += 578; /*0xfffcc484*/
        v28 += 1068; /*0xfffcc48b*/
        v22 += 430; /*0xfffcc497*/
        v21 += 430; /*0xfffcc49a*/
        v2 += 430; /*0xfffcc49d*/
        v20 = (_BYTE *)v2; /*0xfffcc4a3*/
      }
      while ( v32 < 3u );
    }
    ++v25; /*0xfffcc4ac*/
    --v17; /*0xfffcc4af*/
  }
  while ( v17 );
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffcc4b8*/
  {
    v33 = 0; /*0xfffcc4cb*/
    v14 = 0; /*0xfffcc4cf*/
    v35 = (_BYTE *)(a1 + 5512); /*0xfffcc4d1*/
    v15 = (_BYTE *)(a1 + 3778); /*0xfffcc4d4*/
    do /*0xfffcc54b*/
    {
      if ( *v35 ) /*0xfffcc4dd*/
      {
        if ( *(_BYTE *)(v14 + a1 + 7087) ) /*0xfffcc4e2*/
        {
          *v15 = *(_BYTE *)(v14 + a1 + 7086); /*0xfffcc4f8*/
          sub_FFFC6581(a1, 0, v33, 8u); /*0xfffcc4fd*/
        }
        else
        {
          sub_FFFD9481(a1, 20, 0, 0, v33, 255, 255); /*0xfffcc518*/
          sub_FFFC9419((_BYTE *)a1, 0, v33); /*0xfffcc523*/
          sub_FFFC36CF(a1); /*0xfffcc529*/
        }
      }
      ++v33; /*0xfffcc531*/
      v35 += 430; /*0xfffcc534*/
      v14 += 1068; /*0xfffcc53b*/
      v15 += 578; /*0xfffcc541*/
    }
    while ( v33 < 3u ); /*0xfffcc54b*/
  }
}

/* 0xfffcc552 sub_FFFCC552 */
unsigned int __cdecl sub_FFFCC552(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  int v7; // esi
  int v8; // ecx
  unsigned __int8 v9; // al
  int v11; // [esp+18h] [ebp+Ch]

  v7 = a2; /*0xfffcc564*/
  v8 = 3049 * a2 + 430 * a3 + a1 + 184 * a4; /*0xfffcc581*/
  v11 = v8; /*0xfffcc587*/
  if ( (a5 & 1) != 0 && *(_BYTE *)(v8 + 5584) ) /*0xfffcc58c*/
  {
    LOWORD(a6) = sub_FFFC3778(a1, a6); /*0xfffcc5a3*/
    v9 = (2 * (a7 & 1)) | ((a7 & 2) != 0); /*0xfffcc5b1*/
    v8 = v11; /*0xfffcc5b3*/
  }
  else
  {
    v9 = a7; /*0xfffcc5b8*/
  }
  sub_FFFC4FB2( /*0xfffcc5f8*/
    a1,
    *(_BYTE *)(3297 * v7 + a1 + 6997),
    a3 + 4,
    0,
    0x60u,
    (unsigned __int16)a6 | ((v9 | (16 * (*(unsigned __int8 *)(32 * a5 + v8 + 5631) | 8))) << 16));
  return sub_FFFCA83C(a1, 1u); /*0xfffcc608*/
}

/* 0xfffcc60d sub_FFFCC60D */
unsigned int __cdecl sub_FFFCC60D(int a1, unsigned __int8 a2, char a3, int a4, char a5, char a6)
{
  sub_FFFC4FB2( /*0xfffcc65b*/
    a1,
    a2,
    a3 + 4,
    0,
    0x60u,
    a4 | a6 & 7 | (unsigned __int16)(8 * (a5 & 3)) | ((a5 & 0xC | (2 * (a6 & 8 | 0x800))) << 14));
  return sub_FFFCA83C(a1, 0x32u); /*0xfffcc66d*/
}

/* 0xfffcc670 sub_FFFCC670 */
int __cdecl sub_FFFCC670(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v4; // eax
  _BYTE *v5; // ebx
  unsigned __int16 *v6; // esi
  int result; // eax
  int v8; // [esp+14h] [ebp-10h]
  _BYTE *v9; // [esp+18h] [ebp-Ch]
  _BYTE *v10; // [esp+1Ch] [ebp-8h]
  unsigned __int8 v11; // [esp+20h] [ebp-4h]
  unsigned __int8 v12; // [esp+2Ch] [ebp+8h]

  v4 = 430 * a3 + a1 + 3049 * a2; /*0xfffcc698*/
  v8 = 0; /*0xfffcc69a*/
  v11 = 0; /*0xfffcc6a4*/
  v9 = (_BYTE *)(v4 + 5575); /*0xfffcc6a8*/
  v5 = (_BYTE *)(v4 + 5630); /*0xfffcc6ab*/
  do /*0xfffcc768*/
  {
    if ( *v9 ) /*0xfffcc6b4*/
    {
      v12 = 0; /*0xfffcc6db*/
      v10 = v5; /*0xfffcc6df*/
      v6 = (unsigned __int16 *)(v8 + 3297 * a2 + 1068 * a3 + a1 + 7920); /*0xfffcc6e2*/
      do /*0xfffcc74e*/
      {
        if ( *v10 ) /*0xfffcc6e8*/
        {
          sub_FFFCC552(a1, a2, a3, v11, v12, v6[1], 2u); /*0xfffcc703*/
          sub_FFFCC552(a1, a2, a3, v11, v12, *v6, 1u); /*0xfffcc71d*/
          sub_FFFCC552(a1, a2, a3, v11, v12, *(v6 - 1), 0); /*0xfffcc738*/
        }
        ++v12; /*0xfffcc740*/
        v10 += 32; /*0xfffcc743*/
        v6 += 3; /*0xfffcc747*/
      }
      while ( v12 < 4u ); /*0xfffcc74e*/
    }
    ++v11; /*0xfffcc750*/
    v8 += 212; /*0xfffcc753*/
    result = 184; /*0xfffcc75a*/
    v9 += 184; /*0xfffcc75f*/
    v5 += 184; /*0xfffcc762*/
  }
  while ( v11 < 2u ); /*0xfffcc768*/
  return result; /*0xfffcc76e*/
}

/* 0xfffcc773 sub_FFFCC773 */
char __cdecl sub_FFFCC773(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // eax
  int v4; // ecx
  unsigned __int8 *v6; // ebx
  int v7; // edi
  int v8; // ecx
  unsigned __int16 *v10; // [esp+14h] [ebp-Ch]
  _BYTE *v11; // [esp+18h] [ebp-8h]
  unsigned __int8 j; // [esp+1Ch] [ebp-4h]
  unsigned __int8 i; // [esp+28h] [ebp+8h]

  v3 = 3049 * a2; /*0xfffcc784*/
  v4 = 430 * a3; /*0xfffcc78d*/
  v6 = (unsigned __int8 *)(v4 + v3 + a1 + 5512 + 2); /*0xfffcc79f*/
  v7 = v4 + v3; /*0xfffcc7a7*/
  for ( i = 0; i < *v6; LOBYTE(v3) = i ) /*0xfffcc7a3*/
  {
    v8 = 184 * i; /*0xfffcc7ba*/
    if ( *(_BYTE *)(v8 + v7 + a1 + 5574 + 1) ) /*0xfffcc7c7*/
    {
      v11 = (_BYTE *)(v7 + v8 + a1 + 5630); /*0xfffcc7e6*/
      v10 = (unsigned __int16 *)(212 * i + 3297 * a2 + a1 + 1068 * a3 + 7918); /*0xfffcc7fd*/
      for ( j = 0; j < 4u; ++j ) /*0xfffcc803*/
      {
        if ( *v11 ) /*0xfffcc80d*/
          sub_FFFCC552(a1, a2, a3, i, j, *v10, 0); /*0xfffcc828*/
        v11 += 32; /*0xfffcc833*/
        v10 += 3; /*0xfffcc837*/
      }
    }
    ++i; /*0xfffcc841*/
  }
  return v3; /*0xfffcc84f*/
}

/* 0xfffcc854 sub_FFFCC854 */
unsigned int __cdecl sub_FFFCC854(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  return sub_FFFCC552( /*0xfffcc8a6*/
           a1,
           a2,
           a3,
           a4,
           a5,
           *(unsigned __int16 *)(212 * a4 + a1 + 3297 * a2 + 6 * (a5 + 178 * a3) + 7918),
           0);
}

/* 0xfffcc8a8 sub_FFFCC8A8 */
char __cdecl sub_FFFCC8A8(int a1, unsigned __int8 a2, char a3)
{
  char result; // al
  unsigned __int8 v5; // [esp+Ch] [ebp+8h]

  v5 = *(_BYTE *)(3297 * a2 + a1 + 6997); /*0xfffcc8c0*/
  while ( (sub_FFFC4E96(a1, v5, 3u, 4u, 0xA8u) & 1) != 0 ) /*0xfffcc8da*/
    ; /*0xfffcc8c3*/
  if ( sub_FFFC536F(a1, a2, 742424710, 2) ) /*0xfffcc8e7*/
  {
    sub_FFFCA83C(a1, 0x64u); /*0xfffcc8f6*/
  }
  else
  {
    while ( (sub_FFFC4EC2(a1, v5, 3u, 0, 0x7Cu) & 0x800) == 0 ) /*0xfffcc914*/
      ; /*0xfffcc8ff*/
  }
  result = sub_FFFCA83C(a1, 1u); /*0xfffcc919*/
  if ( !a3 ) /*0xfffcc924*/
  {
    result = sub_FFFC4E96(a1, v5, 3u, 4u, 0xC8u); /*0xfffcc933*/
    if ( !result ) /*0xfffcc93d*/
      return sub_FFFD934D(a1, 234, 3); /*0xfffcc947*/
  }
  return result; /*0xfffcc94f*/
}

/* 0xfffcc952 sub_FFFCC952 */
int __cdecl sub_FFFCC952(_BYTE *a1)
{
  char v1; // al
  unsigned __int8 *v2; // edx
  unsigned __int8 *v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned __int8 *v8; // [esp+8h] [ebp-30h]
  unsigned int v9; // [esp+Ch] [ebp-2Ch]
  _BYTE *v10; // [esp+10h] [ebp-28h]
  int v11; // [esp+14h] [ebp-24h]
  unsigned int v12; // [esp+18h] [ebp-20h]
  _BYTE *v13; // [esp+1Ch] [ebp-1Ch]
  unsigned __int8 v14; // [esp+20h] [ebp-18h]
  unsigned __int8 i; // [esp+24h] [ebp-14h]
  unsigned __int8 v16; // [esp+28h] [ebp-10h]
  unsigned __int8 v17; // [esp+2Ch] [ebp-Ch]
  unsigned int v18; // [esp+30h] [ebp-8h]
  unsigned __int8 v19; // [esp+37h] [ebp-1h]

  sub_FFFC7365(a1, 1, 7u); /*0xfffcc962*/
  if ( a1[3755] && a1[3758] ) /*0xfffcc978*/
  {
    v17 = a1[6997]; /*0xfffcc993*/
    v1 = sub_FFFC4E96((int)a1, v17, 3u, 4u, 0x50u); /*0xfffcc998*/
    v2 = a1 + 5514; /*0xfffcc9b1*/
    v16 = 4; /*0xfffcc9b7*/
    v11 = 0; /*0xfffcc9bb*/
    v8 = a1 + 5514; /*0xfffcc9be*/
    v19 = (unsigned __int8)a1[7006] / (v1 & 0x1F) + 1; /*0xfffcc9c8*/
    v10 = a1 + 5574; /*0xfffcc9d1*/
    do /*0xfffccbb4*/
    {
      if ( *(v2 - 2) ) /*0xfffcc9d4*/
      {
        v9 = sub_FFFC4EEF((int)a1, a1[6997], v16, 0, 0xD4u); /*0xfffcc9f6*/
        v12 = 0; /*0xfffcc9f9*/
        for ( i = 0; i < *v3; ++i ) /*0xfffcc9f4*/
        {
          v4 = 184 * i; /*0xfffcca0c*/
          if ( v10[v4 + 1] && !v10[v4 + 2] ) /*0xfffcca1d*/
          {
            v14 = 0; /*0xfffcca32*/
            v13 = &a1[v4 + 5630 + v11]; /*0xfffcca35*/
            do /*0xfffccb67*/
            {
              if ( *v13 ) /*0xfffcca3b*/
              {
                v18 = v9; /*0xfffcca46*/
                do /*0xfffccadd*/
                {
                  sub_FFFCA7CE((int)a1, i, v14, 1); /*0xfffcca52*/
                  sub_FFFC4F7F((int)a1, v17, 3u, 4u, 0x6Cu, 0); /*0xfffcca62*/
                  sub_FFFC4F7F((int)a1, v17, 3u, 4u, 0x6Cu, 256); /*0xfffcca76*/
                  sub_FFFC4FB2((int)a1, a1[6997], v16, 0, 0xD4u, --v18); /*0xfffcca93*/
                  sub_FFFC7CD6((int)a1, v17); /*0xfffccaa4*/
                  sub_FFFC729C((int)a1, 0, 0, 12); /*0xfffccaae*/
                  sub_FFFCC8A8((int)a1, 0, 0); /*0xfffccab6*/
                }
                while ( (sub_FFFC4EEF((int)a1, v17, 3u, 4u, 0x80u) & 0x20000000) == 0 && v18 ); /*0xfffccadd*/
                v5 = v18; /*0xfffccae3*/
                if ( !v18 ) /*0xfffccae8*/
                {
                  sub_FFFD934D(a1, 234, 5); /*0xfffccaf2*/
                  v5 = 0; /*0xfffccaf7*/
                }
                v6 = v19 + v5; /*0xfffccb01*/
                if ( v6 > v9 ) /*0xfffccb08*/
                  v6 = v9; /*0xfffccb0d*/
                if ( v6 > v12 ) /*0xfffccb12*/
                  v12 = v6; /*0xfffccb14*/
                sub_FFFC4F4E((int)a1, v17, 3u, 4u, 0xCCu, 255); /*0xfffccb29*/
                sub_FFFC4FB2((int)a1, v17, 3u, 4u, 0xC8u, -1); /*0xfffccb3d*/
                sub_FFFC4FB2((int)a1, v17, 3u, 4u, 0xC4u, -1); /*0xfffccb51*/
                v3 = v8; /*0xfffccb56*/
              }
              ++v14; /*0xfffccb5c*/
              v13 += 32; /*0xfffccb5f*/
            }
            while ( v14 < 4u ); /*0xfffccb67*/
          }
        }
        *(_WORD *)(v3 + 11) = v12; /*0xfffccb7f*/
        sub_FFFC4FB2((int)a1, a1[6997], v16, 0, 0xD4u, v12); /*0xfffccb92*/
      }
      v11 += 430; /*0xfffccb9f*/
      v10 += 430; /*0xfffccba2*/
      v2 += 430; /*0xfffccba5*/
      ++v16; /*0xfffccba7*/
      v8 = v2; /*0xfffccbb1*/
    }
    while ( (unsigned __int8)(v16 - 4) < 3u ); /*0xfffccbb4*/
  }
  return sub_FFFC7CA8(a1); /*0xfffccbc7*/
}

/* 0xfffccbcb sub_FFFCCBCB */
int __cdecl sub_FFFCCBCB(int a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // edi
  int v4; // eax
  unsigned __int8 v6; // [esp+Eh] [ebp-6h]
  unsigned __int8 v7; // [esp+12h] [ebp-2h]
  unsigned __int8 i; // [esp+13h] [ebp-1h]

  v3 = 0; /*0xfffccbdc*/
  v4 = (unsigned __int8)sub_FFFD905B(a1, a2, HIDWORD(a2), a3) - 1; /*0xfffccbee*/
  if ( !v4 ) /*0xfffccbef*/
    return 0; /*0xfffccc7a*/
  if ( v4 == 1 ) /*0xfffccbf6*/
    return 1; /*0xfffccc77*/
  if ( *(char *)(a1 + 78) < 0 ) /*0xfffccbfc*/
    sub_FFFCA85F(0, (__int16 *)a1, *(int *)((char *)&a2 + 3)); /*0xfffccc02*/
  if ( (_WORD)a2 == 2 || (_WORD)a2 == 5 ) /*0xfffccc13*/
    v6 = 76; /*0xfffccc28*/
  else
    v6 = 4 * ((_WORD)a2 != 4) + 68; /*0xfffccc23*/
  for ( i = 0; i < 0x14u; ++i ) /*0xfffccc31*/
  {
    v7 = sub_FFFC83AF(a1, BYTE4(a2), BYTE2(a2) | 1, v6, a3); /*0xfffccc4d*/
    if ( (v7 & 0x19) == 0 ) /*0xfffccc50*/
      break; /*0xfffccc50*/
    sub_FFFCA83C(a1, 0x186A0u); /*0xfffccc58*/
  }
  if ( (v7 & 0x1D) != 0 ) /*0xfffccc6c*/
    return 1; /*0xfffccc70*/
  return v3; /*0xfffccc7c*/
}

/* 0xfffccc81 sub_FFFCCC81 */
int __cdecl sub_FFFCCC81(int a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // edi
  int v4; // eax
  unsigned __int8 v5; // bl
  unsigned __int8 v7; // [esp+Fh] [ebp-5h]
  unsigned __int8 i; // [esp+13h] [ebp-1h]

  v3 = 0; /*0xfffccc92*/
  v4 = (unsigned __int8)sub_FFFD91C3(a1, a2, HIDWORD(a2), a3) - 1; /*0xfffccca4*/
  if ( !v4 ) /*0xfffccca5*/
    return 0; /*0xfffccd25*/
  if ( v4 == 1 ) /*0xfffccca8*/
    return 1; /*0xfffccd22*/
  if ( *(char *)(a1 + 78) < 0 ) /*0xfffcccae*/
    sub_FFFCA85F(0, (__int16 *)a1, *(int *)((char *)&a2 + 3)); /*0xfffcccb4*/
  if ( (_WORD)a2 == 2 || (_WORD)a2 == 5 ) /*0xfffcccc5*/
    v7 = 76; /*0xfffcccda*/
  else
    v7 = 4 * ((_WORD)a2 != 4) + 68; /*0xfffcccd5*/
  for ( i = 0; i < 0x14u; ++i ) /*0xfffcccde*/
  {
    v5 = sub_FFFC83AF(a1, BYTE4(a2), BYTE2(a2), v7, a3); /*0xfffcccf4*/
    if ( (v5 & 0x19) == 0 ) /*0xfffcccfc*/
      break; /*0xfffcccfc*/
    sub_FFFCA83C(a1, 0x186A0u); /*0xfffccd04*/
  }
  if ( (v5 & 0x1D) != 0 ) /*0xfffccd17*/
    return 1; /*0xfffccd1b*/
  return v3; /*0xfffccd27*/
}

/* 0xfffccd2c sub_FFFCCD2C */
int __cdecl sub_FFFCCD2C(_BYTE *a1)
{
  char v2; // al
  unsigned __int8 *v3; // eax
  _BYTE *v4; // ecx
  int v5; // eax
  unsigned __int8 *v6; // eax
  _BYTE *v7; // ecx
  unsigned __int8 v8; // al
  char v9; // al
  char v10; // al
  unsigned __int8 *v11; // ebx
  unsigned __int8 *v12; // ebx
  bool v13; // zf
  int v14; // ebx
  _DWORD *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // edi
  bool v19; // cf
  unsigned __int8 *v20; // eax
  _BYTE *v21; // ebx
  __int16 v22; // di
  int v23; // eax
  int v24; // edx
  _BYTE *v25; // eax
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // edi
  int v29; // eax
  int v30; // edx
  int v32; // [esp-4h] [ebp-48h]
  char v33; // [esp+Ch] [ebp-38h]
  unsigned __int8 *v34; // [esp+Ch] [ebp-38h]
  int v35; // [esp+Ch] [ebp-38h]
  int v36; // [esp+Ch] [ebp-38h]
  int v37; // [esp+10h] [ebp-34h]
  unsigned __int16 v38; // [esp+14h] [ebp-30h]
  int v39; // [esp+14h] [ebp-30h]
  unsigned __int8 *v40; // [esp+18h] [ebp-2Ch]
  int v41; // [esp+18h] [ebp-2Ch]
  int v42; // [esp+18h] [ebp-2Ch]
  _BYTE *v43; // [esp+18h] [ebp-2Ch]
  unsigned __int8 *v44; // [esp+1Ch] [ebp-28h]
  _BYTE *v45; // [esp+1Ch] [ebp-28h]
  _BYTE *v46; // [esp+1Ch] [ebp-28h]
  _BYTE *v47; // [esp+1Ch] [ebp-28h]
  int v48; // [esp+1Ch] [ebp-28h]
  int v49; // [esp+20h] [ebp-24h]
  int v50; // [esp+20h] [ebp-24h]
  _BYTE *v51; // [esp+20h] [ebp-24h]
  unsigned __int8 *v52; // [esp+20h] [ebp-24h]
  int v53; // [esp+20h] [ebp-24h]
  _BYTE *v54; // [esp+24h] [ebp-20h]
  _BYTE *v55; // [esp+24h] [ebp-20h]
  int v56; // [esp+24h] [ebp-20h]
  int v57; // [esp+28h] [ebp-1Ch] BYREF
  int v58; // [esp+2Ch] [ebp-18h] BYREF
  int v59; // [esp+30h] [ebp-14h] BYREF
  int v60; // [esp+34h] [ebp-10h]
  int v61; // [esp+38h] [ebp-Ch] BYREF
  int v62; // [esp+3Ch] [ebp-8h]
  int v63; // [esp+40h] [ebp-4h]
  unsigned __int8 v64; // [esp+4Ch] [ebp+8h]
  unsigned __int8 v65; // [esp+4Ch] [ebp+8h]
  unsigned __int8 i; // [esp+4Ch] [ebp+8h]
  unsigned __int8 v67; // [esp+4Ch] [ebp+8h]
  unsigned __int8 j; // [esp+4Ch] [ebp+8h]
  unsigned __int8 v69; // [esp+4Ch] [ebp+8h]
  unsigned __int8 v70; // [esp+4Ch] [ebp+8h]

  v58 = 0; /*0xfffccd39*/
  v59 = 0; /*0xfffccd3c*/
  v57 = 0; /*0xfffccd3f*/
  v2 = a1[1]; /*0xfffccd42*/
  if ( v2 == 1 || v2 == 2 ) /*0xfffccd55*/
    goto LABEL_68; /*0xfffccd55*/
  if ( (a1[80] & 0x10) != 0 ) /*0xfffccd5f*/
  {
    a1[3735] = 1; /*0xfffccd65*/
    if ( a1[3755] ) /*0xfffccd6c*/
    {
      v49 = 0; /*0xfffccd79*/
      v3 = a1 + 5514; /*0xfffccd7d*/
      LOBYTE(v62) = 0; /*0xfffccd89*/
      v40 = a1 + 5514; /*0xfffccd8d*/
      v54 = a1 + 5574; /*0xfffccd90*/
      do /*0xfffcce63*/
      {
        if ( *(v3 - 2) ) /*0xfffccd93*/
        {
          v64 = 0; /*0xfffccdaa*/
          if ( *v3 ) /*0xfffccd9d*/
          {
            do /*0xfffcce47*/
            {
              v4 = &v54[184 * v64]; /*0xfffccdc3*/
              if ( v4[1] ) /*0xfffccdc5*/
              {
                if ( (char)v4[17] < 0 ) /*0xfffccdcf*/
                {
                  if ( (a1[81] & 1) != 0 ) /*0xfffccdf8*/
                  {
                    v5 = *(_DWORD *)&a1[212 * v64 + 7746 + v49]; /*0xfffcce00*/
                    v61 = 0; /*0xfffcce04*/
                    HIBYTE(v63) = HIBYTE(v5); /*0xfffcce08*/
                    BYTE2(v63) = BYTE2(v5) & 0xF | 0x30; /*0xfffcce12*/
                    LOWORD(v63) = 2; /*0xfffcce1b*/
                    sub_FFFCCC81((int)a1, (unsigned int)v63 | 0x100000000LL, (unsigned __int8 *)&v61); /*0xfffcce25*/
                    sub_FFFCCC81((int)a1, (unsigned int)v63 | 0x400000000LL, (unsigned __int8 *)&v61); /*0xfffcce34*/
                  }
                }
                else
                {
                  a1[3735] = 0; /*0xfffccdd9*/
                  sub_FFFD9481(a1, 24, 1, 0, v62, v64, 255); /*0xfffccdea*/
                }
              }
              ++v64; /*0xfffcce3c*/
              v3 = v40; /*0xfffcce3f*/
            }
            while ( v64 < *v40 ); /*0xfffcce47*/
          }
        }
        LOBYTE(v62) = v62 + 1; /*0xfffcce4d*/
        v49 += 1068; /*0xfffcce50*/
        v54 += 430; /*0xfffcce57*/
        v3 += 430; /*0xfffcce5a*/
        v40 = v3; /*0xfffcce60*/
      }
      while ( (unsigned __int8)v62 < 3u ); /*0xfffcce63*/
    }
    sub_FFFCA83C((int)a1, 0x1E848u); /*0xfffcce6f*/
    if ( a1[3755] ) /*0xfffcce74*/
    {
      v50 = 0; /*0xfffcce83*/
      v44 = a1 + 5514; /*0xfffcce8d*/
      v55 = a1 + 5574; /*0xfffcce96*/
      v6 = a1 + 5514; /*0xfffcce99*/
      LOBYTE(v60) = 4; /*0xfffcce9c*/
      do /*0xfffccff6*/
      {
        if ( *(v6 - 2) ) /*0xfffccea5*/
        {
          v65 = 0; /*0xfffcceb2*/
          if ( *v6 ) /*0xfffcceaf*/
          {
            do /*0xfffccfd5*/
            {
              v7 = &v55[184 * v65]; /*0xfffccecb*/
              if ( v7[1] ) /*0xfffccecd*/
              {
                if ( (char)v7[17] < 0 && (a1[81] & 1) != 0 ) /*0xfffccee5*/
                {
                  v63 = *(_DWORD *)&a1[212 * v65 + 7746 + v50]; /*0xfffcceff*/
                  BYTE2(v63) = BYTE2(v63) & 0xF | 0x30; /*0xfffccf09*/
                  v8 = a1[6997]; /*0xfffccf0e*/
                  LOWORD(v63) = 2; /*0xfffccf1a*/
                  if ( (sub_FFFC4EEF((int)a1, v8, v60, 3u, 0xA4u) & 1) != 0 ) /*0xfffccf2c*/
                    goto LABEL_25; /*0xfffccf2c*/
                  v61 = 12; /*0xfffccf37*/
                  sub_FFFCCC81((int)a1, (unsigned int)v63 | 0x100000000LL, (unsigned __int8 *)&v61); /*0xfffccf3f*/
                  sub_FFFCA83C((int)a1, 0x14u); /*0xfffccf47*/
                  v9 = sub_FFFC4EEF((int)a1, a1[6997], v60, 3u, 0xA4u); /*0xfffccf5c*/
                  v61 = 0; /*0xfffccf61*/
                  v33 = v9; /*0xfffccf65*/
                  sub_FFFCCC81((int)a1, (unsigned int)v63 | 0x100000000LL, (unsigned __int8 *)&v61); /*0xfffccf72*/
                  sub_FFFCA83C((int)a1, 0x14u); /*0xfffccf7a*/
                  if ( (v33 & 1) == 0 || (sub_FFFC4EEF((int)a1, a1[6997], v60, 3u, 0xA4u) & 1) != 0 ) /*0xfffccfa2*/
                  {
LABEL_25:
                    v10 = v60 - 4; /*0xfffccfb1*/
                    a1[3735] = 0; /*0xfffccfb3*/
                    sub_FFFD9481(a1, 24, 2, 0, v10, v65, 255); /*0xfffccfc2*/
                  }
                }
              }
              ++v65; /*0xfffccfca*/
              v6 = v44; /*0xfffccfcd*/
            }
            while ( v65 < *v44 ); /*0xfffccfd5*/
          }
        }
        v50 += 1068; /*0xfffccfdb*/
        v55 += 430; /*0xfffccfe2*/
        v6 += 430; /*0xfffccfe5*/
        LOBYTE(v60) = v60 + 1; /*0xfffccfe7*/
        v44 = v6; /*0xfffccff3*/
      }
      while ( (unsigned __int8)(v60 - 4) < 3u ); /*0xfffccff6*/
    }
  }
  if ( (a1[80] & 0x40) == 0 || a1[3734] != 1 ) /*0xfffcd009*/
    goto LABEL_32; /*0xfffcd009*/
  if ( !a1[3735] ) /*0xfffcd00b*/
  {
    a1[3736] = 1; /*0xfffcd014*/
LABEL_32:
    if ( !a1[3735] && !a1[3736] ) /*0xfffcd02b*/
      goto LABEL_68; /*0xfffcd02b*/
  }
  if ( a1[3755] )
  {
    LOBYTE(v62) = 0; /*0xfffcd044*/
    v11 = a1 + 5514; /*0xfffcd048*/
    v45 = a1 + 5574; /*0xfffcd04e*/
    do /*0xfffcd0a9*/
    {
      if ( *(v11 - 2) ) /*0xfffcd051*/
      {
        for ( i = 0; i < *v11; ++i ) /*0xfffcd057*/
        {
          if ( v45[184 * i + 1] ) /*0xfffcd06d*/
          {
            sub_FFFC2D4A((int)a1, 0, v62, i); /*0xfffcd07d*/
            sub_FFFC322E((int)a1, 0, v62, i); /*0xfffcd08b*/
          }
        }
      }
      LOBYTE(v62) = v62 + 1; /*0xfffcd09d*/
      v45 += 430; /*0xfffcd0a0*/
      v11 += 430; /*0xfffcd0a3*/
    }
    while ( (unsigned __int8)v62 < 3u ); /*0xfffcd0a9*/
    if ( a1[3755] )
    {
      v41 = 0; /*0xfffcd0b8*/
      v56 = 0; /*0xfffcd0bc*/
      v12 = a1 + 5514; /*0xfffcd0c0*/
      LOBYTE(v62) = 0; /*0xfffcd0cc*/
      v34 = a1 + 5514; /*0xfffcd0d0*/
      v51 = a1 + 5574; /*0xfffcd0d3*/
      do
      {
        if ( *(v12 - 2) )
        {
          v13 = *v12 == 0; /*0xfffcd0e0*/
          v63 = 255; /*0xfffcd0e3*/
          v67 = 0; /*0xfffcd0ea*/
          if ( !v13 )
          {
            do
            {
              v46 = &v51[184 * v67]; /*0xfffcd10a*/
              if ( v46[1] )
              {
                v14 = 141; /*0xfffcd12b*/
                v15 = &a1[212 * v67 + 7730 + v56]; /*0xfffcd131*/
                v60 = 26; /*0xfffcd137*/
                v38 = 256; /*0xfffcd141*/
                sub_FFFC310A((unsigned int)a1, 0, v62, v15, 0x8Du, 0xFFu); /*0xfffcd148*/
                sub_FFFC354E((int)a1, (int)v15, &v59, &v58, &v57); /*0xfffcd15b*/
                do /*0xfffcd1bd*/
                {
                  if ( (unsigned __int16)v59 >= 0x7D0u || (unsigned __int16)v58 >= *(_WORD *)(v46 + 21) ) /*0xfffcd176*/
                    v38 = v14; /*0xfffcd17d*/
                  else
                    v60 = v14; /*0xfffcd178*/
                  v14 = ((unsigned __int16)v60 + v38) / 2; /*0xfffcd194*/
                  sub_FFFC310A((unsigned int)a1, 0, v62, v15, v14, 0xFFu); /*0xfffcd19e*/
                  sub_FFFC354E((int)a1, (int)v15, &v59, &v58, &v57); /*0xfffcd1b1*/
                }
                while ( (_WORD)v60 != (_WORD)v14 ); /*0xfffcd1bd*/
                if ( (unsigned __int16)v59 >= 0x7D0u
                  || (v16 = *(unsigned __int16 *)(v46 + 21), (unsigned __int16)v58 >= (unsigned __int16)v16) )
                {
                  v18 = *(_WORD *)(v46 + 21) > 0x550u ? 1360 : 1200;
                  v57 = v18; /*0xfffcd227*/
                  sub_FFFD9412(a1, 25, 0, ((v67 | (v41 << 8)) << 8) | 0xFF); /*0xfffcd22a*/
                }
                else
                {
                  v17 = v16 - v58; /*0xfffcd1dd*/
                  if ( 2000 - (unsigned __int16)v59 < (unsigned __int16)v17 ) /*0xfffcd1e9*/
                    v17 = 2000 - v59; /*0xfffcd1ed*/
                  LOWORD(v18) = v17 + v57; /*0xfffcd1f3*/
                  v57 += v17; /*0xfffcd1f5*/
                }
                v19 = (unsigned __int16)v60 < (unsigned __int16)v63; /*0xfffcd236*/
                *((_WORD *)v46 + 25) = v18; /*0xfffcd23a*/
                if ( v19 ) /*0xfffcd23e*/
                  v63 = v60; /*0xfffcd243*/
              }
              ++v67; /*0xfffcd246*/
              v12 = v34; /*0xfffcd249*/
            }
            while ( v67 < *v34 );
          }
          for ( j = 0; j < *v12; ++j ) /*0xfffcd257*/
          {
            if ( v51[184 * j + 1] ) /*0xfffcd26f*/
              sub_FFFC310A((unsigned int)a1, 0, v62, &a1[212 * j + 7730 + v56], v63, 0xFFu); /*0xfffcd297*/
          }
          *(_WORD *)(v12 + 13) = v63; /*0xfffcd2ad*/
        }
        LOBYTE(v62) = v62 + 1; /*0xfffcd2b6*/
        ++v41; /*0xfffcd2b9*/
        v56 += 1068; /*0xfffcd2bc*/
        v51 += 430; /*0xfffcd2c3*/
        v12 += 430; /*0xfffcd2c6*/
        v34 = v12; /*0xfffcd2cc*/
      }
      while ( (unsigned __int8)v62 < 3u );
    }
  }
LABEL_68:
  if ( a1[3735] )
  {
    if ( a1[3755] )
    {
      v42 = 0; /*0xfffcd2ef*/
      v20 = a1 + 5514; /*0xfffcd2f3*/
      LOBYTE(v59) = 4; /*0xfffcd2ff*/
      v52 = a1 + 5514; /*0xfffcd303*/
      v47 = a1 + 5574; /*0xfffcd306*/
      v35 = 3; /*0xfffcd309*/
      do
      {
        if ( *(v20 - 2) )
        {
          v69 = 0; /*0xfffcd31d*/
          if ( *v20 )
          {
            do
            {
              v21 = &v47[184 * v69]; /*0xfffcd336*/
              if ( v21[1] )
              {
                v22 = (unsigned __int8)a1[1687]; /*0xfffcd34c*/
                HIWORD(v63) = HIWORD(*(_DWORD *)&a1[212 * v69 + 7746 + v42]); /*0xfffcd35f*/
                BYTE2(v63) = BYTE2(v63) & 0xF | 0x30; /*0xfffcd369*/
                LOWORD(v63) = 2; /*0xfffcd372*/
                sub_FFFCCBCB((int)a1, (unsigned int)v63, (unsigned __int8 *)&v61); /*0xfffcd37f*/
                v61 = (*((_WORD *)v21 + 25) - ((v61 & 2) != 0 ? 16 : 32) - 8 * v22) & 0xFFFC;
                HIWORD(v23) = (unsigned int)sub_FFFCCC81( /*0xfffcd3b1*/
                                              (int)a1,
                                              (unsigned int)v63 | 0x400000000LL,
                                              (unsigned __int8 *)&v61) >> 16;
                LOWORD(v23) = (unsigned __int8)a1[1686]; /*0xfffcd3b6*/
                v61 = (v23 << 9) | 0xC; /*0xfffcd3c4*/
                sub_FFFCCC81((int)a1, (unsigned int)v63 | 0x100000000LL, (unsigned __int8 *)&v61); /*0xfffcd3d1*/
              }
              ++v69; /*0xfffcd3de*/
            }
            while ( v69 < *v52 );
          }
          sub_FFFC4FB2((int)a1, a1[6997], v59, 3u, 0x88u, -1); /*0xfffcd433*/
          sub_FFFC4FB2((int)a1, a1[6997], v59, 3u, 0x84u, v24 << 8); /*0xfffcd44f*/
          sub_FFFC4FB2((int)a1, a1[6997], v59, 3u, 0x48u, 3); /*0xfffcd465*/
          sub_FFFC4FB2((int)a1, a1[6997], v59, 3u, 0x9Cu, 8); /*0xfffcd482*/
          v20 = v52; /*0xfffcd487*/
        }
        v42 += 1068; /*0xfffcd48d*/
        v47 += 430; /*0xfffcd494*/
        v20 += 430; /*0xfffcd497*/
        LOBYTE(v59) = v59 + 1; /*0xfffcd499*/
        v13 = v35-- == 1; /*0xfffcd49c*/
        v52 = v20; /*0xfffcd49f*/
      }
      while ( !v13 );
    }
  }
  else if ( a1[3736] && a1[3755] ) /*0xfffcd4ba*/
  {
    v25 = a1 + 5514; /*0xfffcd4c7*/
    v70 = 4; /*0xfffcd4cd*/
    v43 = a1 + 5514; /*0xfffcd4d1*/
    v53 = 3; /*0xfffcd4d4*/
    do /*0xfffcd678*/
    {
      if ( *(v25 - 2) ) /*0xfffcd4db*/
      {
        v26 = *(unsigned __int16 *)(v25 + 13); /*0xfffcd4e5*/
        if ( v26 < 183 ) /*0xfffcd4f1*/
        {
          v27 = (v26 << 8) / (183 - v26); /*0xfffcd507*/
          if ( v27 > 0x3FF ) /*0xfffcd510*/
            v27 = 1023; /*0xfffcd512*/
        }
        else
        {
          v27 = 1023; /*0xfffcd4f3*/
        }
        if ( *v43 >= 2u ) /*0xfffcd51a*/
        {
          v39 = 224; /*0xfffcd546*/
          v37 = 255; /*0xfffcd54d*/
          v36 = 7; /*0xfffcd554*/
          v32 = 11; /*0xfffcd55b*/
          v48 = 166; /*0xfffcd55d*/
        }
        else
        {
          v39 = 128; /*0xfffcd51c*/
          v37 = 217; /*0xfffcd523*/
          v36 = 10; /*0xfffcd52a*/
          v32 = 17; /*0xfffcd531*/
          v48 = 255; /*0xfffcd533*/
        }
        v28 = v32; /*0xfffcd574*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x88u, -1); /*0xfffcd59c*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x60u, v39 | ((v37 | ((v36 | (v28 << 8)) << 8)) << 8)); /*0xfffcd5c7*/
        v29 = sub_FFFC4EEF((int)a1, a1[6997], v70, 3u, 0x64u); /*0xfffcd5dc*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x64u, v48 | v29 & 0xFFFFFF00); /*0xfffcd5fd*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x80u, v30 | ((v30 | ((v30 | (v30 << 8)) << 8)) << 8)); /*0xfffcd627*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x84u, v27 << 8); /*0xfffcd643*/
        sub_FFFC4FB2((int)a1, a1[6997], v70, 3u, 0x48u, 1); /*0xfffcd65d*/
        v25 = v43; /*0xfffcd662*/
      }
      v25 += 430; /*0xfffcd66d*/
      ++v70; /*0xfffcd66f*/
      v13 = v53-- == 1; /*0xfffcd672*/
      v43 = v25; /*0xfffcd675*/
    }
    while ( !v13 ); /*0xfffcd678*/
  }
  return 0; /*0xfffcd67e*/
}

/* 0xfffcd685 sub_FFFCD685 */
int __cdecl sub_FFFCD685(int a1)
{
  _BYTE *v1; // ebx
  char v2; // al
  char v3; // al
  _BYTE *v4; // eax
  unsigned __int8 v5; // cl
  int v6; // esi
  bool v7; // zf
  int v8; // eax
  int v9; // edx
  int v10; // esi
  unsigned int *v11; // edi
  int v12; // edx
  unsigned __int8 v13; // al
  int v14; // ecx
  _BYTE *v15; // edi
  unsigned __int8 v16; // al
  char v17; // al
  char v18; // al
  unsigned __int8 v19; // al
  __int16 v20; // ax
  unsigned __int8 v21; // al
  _BYTE *v22; // edi
  char v23; // dl
  char v24; // dl
  unsigned __int8 v25; // al
  unsigned __int8 *v26; // eax
  __int64 v28; // [esp-44h] [ebp-80h]
  __int64 v29; // [esp-34h] [ebp-70h]
  __int64 v30; // [esp-24h] [ebp-60h]
  __int64 v31; // [esp-24h] [ebp-60h]
  __int64 v32; // [esp-24h] [ebp-60h]
  __int64 v33; // [esp-24h] [ebp-60h]
  __int64 v34; // [esp-14h] [ebp-50h]
  __int64 v35; // [esp-14h] [ebp-50h]
  __int64 v36; // [esp-14h] [ebp-50h]
  __int64 v37; // [esp-14h] [ebp-50h]
  __int64 v38; // [esp-14h] [ebp-50h]
  __int64 v39; // [esp-14h] [ebp-50h]
  __int64 v40; // [esp-14h] [ebp-50h]
  __int64 v41; // [esp-14h] [ebp-50h]
  __int64 v42; // [esp-14h] [ebp-50h]
  __int64 v43; // [esp-14h] [ebp-50h]
  __int64 v44; // [esp-14h] [ebp-50h]
  __int64 v45; // [esp-14h] [ebp-50h]
  __int64 v46; // [esp-14h] [ebp-50h]
  int v47; // [esp+4h] [ebp-38h]
  int v48; // [esp+8h] [ebp-34h]
  int v49; // [esp+Ch] [ebp-30h]
  _BYTE *v50; // [esp+14h] [ebp-28h]
  unsigned int v51; // [esp+18h] [ebp-24h]
  _BYTE *v52; // [esp+1Ch] [ebp-20h]
  unsigned __int8 i; // [esp+21h] [ebp-1Bh]
  unsigned __int8 v54; // [esp+25h] [ebp-17h]
  unsigned __int8 v55; // [esp+29h] [ebp-13h]
  char v56; // [esp+2Dh] [ebp-Fh]
  unsigned __int8 v57; // [esp+2Eh] [ebp-Eh] BYREF
  char v58; // [esp+2Fh] [ebp-Dh]
  unsigned __int8 v59; // [esp+30h] [ebp-Ch] BYREF
  unsigned __int8 v60; // [esp+31h] [ebp-Bh]
  unsigned __int8 v61; // [esp+32h] [ebp-Ah] BYREF
  char v62; // [esp+33h] [ebp-9h]
  unsigned __int8 v63; // [esp+34h] [ebp-8h]
  char v64; // [esp+35h] [ebp-7h]
  char v65; // [esp+36h] [ebp-6h]
  char v66; // [esp+37h] [ebp-5h]
  unsigned __int8 v67; // [esp+38h] [ebp-4h]
  unsigned __int8 v68; // [esp+39h] [ebp-3h]
  unsigned __int8 v69; // [esp+3Ah] [ebp-2h] BYREF
  unsigned __int8 v70; // [esp+3Bh] [ebp-1h] BYREF

  v1 = (_BYTE *)a1; /*0xfffcd68c*/
  v2 = *(_BYTE *)(a1 + 1); /*0xfffcd68f*/
  v62 = 0; /*0xfffcd694*/
  v65 = 0; /*0xfffcd698*/
  if ( v2 == 1 || v2 == 2 ) /*0xfffcd6a4*/
    return 0; /*0xfffcd6a4*/
  v3 = *(_BYTE *)(a1 + 17); /*0xfffcd6aa*/
  *(_DWORD *)(a1 + 3743) = 34668544; /*0xfffcd6ae*/
  v56 = v3; /*0xfffcd6b8*/
  v55 = 0; /*0xfffcd6bb*/
  do /*0xfffcdd1d*/
  {
    v49 = 3049 * v55; /*0xfffcd6cd*/
    v4 = &v1[v49]; /*0xfffcd6d0*/
    v50 = &v1[v49]; /*0xfffcd6d9*/
    if ( !v1[v49 + 3755] ) /*0xfffcd6dc*/
      goto LABEL_109; /*0xfffcd6dc*/
    v5 = 0; /*0xfffcd6e2*/
    v4[3758] = 0; /*0xfffcd6e4*/
    v63 = 0; /*0xfffcd6eb*/
    for ( i = 0; i < 3u; ++i ) /*0xfffcd6ee*/
    {
      v6 = 430 * i; /*0xfffcd6f7*/
      v7 = v4[v6 + 5512] == 0; /*0xfffcd704*/
      v64 = 0; /*0xfffcd707*/
      v52 = &v4[v6 + 5512]; /*0xfffcd70b*/
      if ( v7 ) /*0xfffcd70e*/
        continue; /*0xfffcd70e*/
      v8 = sub_FFFC4EEF((int)v1, v1[3297 * v55 + 6997], 3u, 0, 0x4Cu); /*0xfffcd731*/
      if ( (v8 & (1 << v9)) != 0 ) /*0xfffcd742*/
      {
        *v52 = 0; /*0xfffcd747*/
        goto LABEL_105; /*0xfffcd74a*/
      }
      v67 = 0; /*0xfffcd758*/
      v47 = (int)&v1[3297 * v55 + 7730 + 1068 * v9]; /*0xfffcd763*/
      v7 = v1[16] == 0; /*0xfffcd76b*/
      v58 = 0; /*0xfffcd776*/
      v66 = 0; /*0xfffcd77a*/
      v48 = (int)&v1[v49 + 5574 + v6]; /*0xfffcd77e*/
      v54 = 0; /*0xfffcd781*/
      if ( v7 ) /*0xfffcd785*/
        goto LABEL_98; /*0xfffcd785*/
      while ( 1 ) /*0xfffcd7a0*/
      {
        v10 = 184 * v54 + v48; /*0xfffcd7a0*/
        v11 = (unsigned int *)(212 * v54 + v47 + 16); /*0xfffcd7a6*/
        HIDWORD(v34) = 2; /*0xfffcd7ae*/
        *(_BYTE *)(v10 + 1) = 0; /*0xfffcd7b0*/
        LODWORD(v34) = *v11; /*0xfffcd7b4*/
        if ( sub_FFFCCBCB((int)v1, v34, &v57) ) /*0xfffcd7b7*/
        {
          v58 = 1; /*0xfffcdc57*/
          goto LABEL_90; /*0xfffcdc57*/
        }
        *(_BYTE *)(v10 + 1) = 1; /*0xfffcd7c7*/
        if ( (v1[82] & 1) != 0 ) /*0xfffcd7cf*/
        {
          HIDWORD(v35) = 59; /*0xfffcd7d9*/
          LODWORD(v35) = *v11; /*0xfffcd7db*/
          sub_FFFCCBCB((int)v1, v35, &v69); /*0xfffcd7de*/
          v70 = ~v69; /*0xfffcd7e8*/
          HIDWORD(v30) = 59; /*0xfffcd7ef*/
          LODWORD(v30) = *v11; /*0xfffcd7f1*/
          sub_FFFCCC81((int)v1, v30, &v70); /*0xfffcd7f4*/
          do /*0xfffcd805*/
          {
            HIDWORD(v36) = 59; /*0xfffcd800*/
            LODWORD(v36) = *v11; /*0xfffcd802*/
          }
          while ( sub_FFFCCBCB((int)v1, v36, &v70) ); /*0xfffcd805*/
          if ( v70 != v69 ) /*0xfffcd817*/
          {
            HIDWORD(v37) = 59; /*0xfffcd821*/
            LODWORD(v37) = *v11; /*0xfffcd823*/
            sub_FFFCCC81((int)v1, v37, &v69); /*0xfffcd826*/
            do /*0xfffcd837*/
            {
              HIDWORD(v38) = 59; /*0xfffcd832*/
              LODWORD(v38) = *v11; /*0xfffcd834*/
            }
            while ( sub_FFFCCBCB((int)v1, v38, &v70) ); /*0xfffcd837*/
            v51 = *v11; /*0xfffcd845*/
            BYTE2(v51) = HIWORD(*v11) & 0xF | 0x60; /*0xfffcd84f*/
            sub_FFFCCC81((int)v1, v51 | 0x3B00000000LL, &v69); /*0xfffcd85c*/
            do /*0xfffcd86d*/
            {
              HIDWORD(v39) = 59; /*0xfffcd868*/
              LODWORD(v39) = *v11; /*0xfffcd86a*/
            }
            while ( sub_FFFCCBCB((int)v1, v39, &v70) ); /*0xfffcd86d*/
            v70 = ~v69; /*0xfffcd87e*/
            HIDWORD(v40) = 59; /*0xfffcd885*/
            LODWORD(v40) = *v11; /*0xfffcd887*/
            sub_FFFCCC81((int)v1, v40, &v70); /*0xfffcd88a*/
            do /*0xfffcd89b*/
            {
              HIDWORD(v41) = 59; /*0xfffcd896*/
              LODWORD(v41) = *v11; /*0xfffcd898*/
            }
            while ( sub_FFFCCBCB((int)v1, v41, &v70) ); /*0xfffcd89b*/
            if ( v70 != v69 ) /*0xfffcd8ad*/
            {
              HIDWORD(v42) = 59; /*0xfffcd8b3*/
              LODWORD(v42) = *v11; /*0xfffcd8b5*/
              sub_FFFCCC81((int)v1, v42, &v69); /*0xfffcd8b8*/
              do /*0xfffcd8c9*/
              {
                HIDWORD(v43) = 59; /*0xfffcd8c4*/
                LODWORD(v43) = *v11; /*0xfffcd8c6*/
              }
              while ( sub_FFFCCBCB((int)v1, v43, &v70) ); /*0xfffcd8c9*/
              sub_FFFD9481(v1, 31, 0, v55, i, v54, 255); /*0xfffcd8e7*/
            }
          }
        }
        if ( !v58 ) /*0xfffcd8f3*/
          break; /*0xfffcd8f3*/
        sub_FFFD9481(v1, 23, 1, v55, i, v54, 255); /*0xfffcd908*/
        *(_BYTE *)(v10 + 2) = 1; /*0xfffcd910*/
LABEL_90:
        if ( ++v54 >= v1[16] ) /*0xfffcdc64*/
          goto LABEL_94; /*0xfffcdc64*/
      }
      HIDWORD(v44) = 3; /*0xfffcd91d*/
      LODWORD(v44) = *v11; /*0xfffcd91f*/
      sub_FFFCCBCB((int)v1, v44, &v61); /*0xfffcd922*/
      HIDWORD(v31) = 11; /*0xfffcd92b*/
      LODWORD(v31) = *v11; /*0xfffcd92d*/
      sub_FFFCCBCB((int)v1, v31, (unsigned __int8 *)&a1 + 3); /*0xfffcd930*/
      *(_BYTE *)(v10 + 20) = HIBYTE(a1); /*0xfffcd938*/
      HIDWORD(v29) = 12; /*0xfffcd93f*/
      LODWORD(v29) = *v11; /*0xfffcd941*/
      sub_FFFCCBCB((int)v1, v29, &v59); /*0xfffcd944*/
      HIDWORD(v28) = 4; /*0xfffcd94d*/
      LODWORD(v28) = *v11; /*0xfffcd94f*/
      sub_FFFCCBCB((int)v1, v28, (unsigned __int8 *)&a1 + 3); /*0xfffcd952*/
      *(_BYTE *)(v10 + 14) = HIBYTE(a1); /*0xfffcd95d*/
      HIDWORD(v45) = 5; /*0xfffcd964*/
      LODWORD(v45) = *v11; /*0xfffcd966*/
      sub_FFFCCBCB((int)v1, v45, (unsigned __int8 *)&a1 + 3); /*0xfffcd969*/
      *(_BYTE *)(v10 + 15) = HIBYTE(a1); /*0xfffcd971*/
      HIDWORD(v32) = 7; /*0xfffcd978*/
      LODWORD(v32) = *v11; /*0xfffcd97a*/
      sub_FFFCCBCB((int)v1, v32, (unsigned __int8 *)&a1 + 3); /*0xfffcd97d*/
      if ( v61 == 3 ) /*0xfffcd989*/
      {
        if ( HIBYTE(a1) == 2 ) /*0xfffcd98f*/
        {
          HIBYTE(a1) = 1; /*0xfffcd991*/
        }
        else if ( HIBYTE(a1) == 10 ) /*0xfffcd99b*/
        {
          HIBYTE(a1) = 9; /*0xfffcd99d*/
        }
      }
      *(_BYTE *)(v10 + 13) = HIBYTE(a1); /*0xfffcd9a4*/
      HIDWORD(v46) = 62; /*0xfffcd9ab*/
      LODWORD(v46) = *v11; /*0xfffcd9ad*/
      sub_FFFCCBCB((int)v1, v46, (unsigned __int8 *)&a1 + 3); /*0xfffcd9b0*/
      *(_BYTE *)(v10 + 4) = HIBYTE(a1); /*0xfffcd9b8*/
      HIDWORD(v33) = 8; /*0xfffcd9bf*/
      LODWORD(v33) = *v11; /*0xfffcd9c1*/
      sub_FFFCCBCB((int)v1, v33, (unsigned __int8 *)&a1 + 3); /*0xfffcd9c4*/
      *(_BYTE *)(v10 + 16) = HIBYTE(a1); /*0xfffcd9cc*/
      v13 = *(_BYTE *)(v10 + 13) & 7; /*0xfffcd9d5*/
      v68 = 0; /*0xfffcd9d7*/
      v60 = v13; /*0xfffcd9db*/
      do /*0xfffcda34*/
      {
        v14 = (int)&v1[4 * v68]; /*0xfffcd9e2*/
        v15 = (_BYTE *)(v68 + v14); /*0xfffcd9e5*/
        if ( v15[1086] >> 3 == v60 ) /*0xfffcd9f4*/
        {
          v14 = (unsigned __int8)v15[1087] - 12; /*0xfffcda03*/
          v12 = *(unsigned __int8 *)(v10 + 15) >> 3; /*0xfffcda06*/
          if ( v14 == v12 ) /*0xfffcda0b*/
          {
            v14 = (unsigned __int8)v15[1088] - 9; /*0xfffcda14*/
            if ( v14 == (*(_BYTE *)(v10 + 15) & 7) && ((v15[1089] ^ *(_BYTE *)(v10 + 14) & 0x70) & 0xF0) == 0 ) /*0xfffcda2b*/
              break; /*0xfffcda2b*/
          }
        }
        ++v68; /*0xfffcda2d*/
      }
      while ( v68 < 0xCu ); /*0xfffcda34*/
      v16 = *(_BYTE *)(v10 + 13) >> 3; /*0xfffcda39*/
      if ( v16 >= 2u && v16 != 3 /*0xfffcdaa6*/
        || v68 >= 0xCu
        || v57 != 11
        || ((v17 = v1[17], LOBYTE(v14) = v61, v17) && v17 != 2 || v61 != 1)
        && (v17 != 1 && v17 != 2 || v61 != 3)
        && (v17 != 1 && v17 != 2 || v61 != 2)
        || (v18 = *(_BYTE *)(v10 + 20), v18 != 8) && v18 != 16
        || v59 > 0x1Eu )
      {
        sub_FFFD9481(v1, 7, 4, v55, i, v54, 255); /*0xfffcdc49*/
        goto LABEL_88; /*0xfffcdc49*/
      }
      if ( v61 != 1 && v54 == 2 ) /*0xfffcdab5*/
      {
        sub_FFFD934D(v1, 238, 2); /*0xfffcdc73*/
LABEL_94:
        v22 = v52; /*0xfffcdc85*/
        goto LABEL_96; /*0xfffcdc88*/
      }
      if ( v65 && v65 != v61 ) /*0xfffcdac4*/
      {
        sub_FFFD934D(v1, 237, 0); /*0xfffcdc7d*/
        goto LABEL_94; /*0xfffcdc7d*/
      }
      if ( v56 == 2 && v60 == 2 ) /*0xfffcdad4*/
      {
        sub_FFFD9481(v1, 7, 1, v55, i, v54, 255); /*0xfffcdae6*/
LABEL_88:
        v66 = 1; /*0xfffcdc4e*/
        goto LABEL_90; /*0xfffcdc55*/
      }
      v1[3734] = v61 - 1; /*0xfffcdaef*/
      v19 = *(_BYTE *)(v10 + 13); /*0xfffcdaf7*/
      v65 = v14; /*0xfffcdafa*/
      v20 = sub_FFFC3728(*(unsigned __int8 *)(v10 + 14), v12, v14, *(_BYTE *)(v10 + 14), *(_BYTE *)(v10 + 15), v19); /*0xfffcdb0a*/
      v7 = *(_BYTE *)(v10 + 2) == 0; /*0xfffcdb12*/
      *(_WORD *)(v10 + 25) = v20; /*0xfffcdb16*/
      if ( v7 || (*(_WORD *)(v10 + 25) = v20 & 0xFDFF, v54) ) /*0xfffcdb28*/
      {
        v21 = ((*(_BYTE *)(v10 + 25) >> 5) & 3) + 1; /*0xfffcdb36*/
        if ( ((*(_BYTE *)(v10 + 25) >> 5) & 3) == 2 ) /*0xfffcdb3a*/
          v21 = ((*(_BYTE *)(v10 + 25) >> 5) & 3) + 2; /*0xfffcdb3c*/
        v22 = v52; /*0xfffcdb3e*/
        *(_BYTE *)v10 = v21; /*0xfffcdb41*/
        v60 = v52[3]; /*0xfffcdb46*/
        if ( v21 + v60 <= 8 ) /*0xfffcdb54*/
        {
          v52[3] = v21 + v60; /*0xfffcdb72*/
          if ( v21 != 4 || (++v52[4], v50[3769] = 1, v54 != 1) || v52[4] != 1 ) /*0xfffcdb8e*/
          {
            if ( (*(_BYTE *)(v10 + 13) & 7) == 0 ) /*0xfffcdba8*/
            {
              if ( (v52[1] & 0x10) != 0 && sub_FFFC531F((int)v1, v55, 742424710, 4u) ) /*0xfffcdbbd*/
                v52[1] = v23 | 0x20; /*0xfffcdbcc*/
              *(_BYTE *)(v10 + 12) = 1; /*0xfffcdbcf*/
              v52[1] |= 8u; /*0xfffcdbd3*/
            }
            if ( (*(_BYTE *)(v10 + 13) & 7) == 1 ) /*0xfffcdbde*/
            {
              if ( (v52[1] & 8) != 0 && sub_FFFC531F((int)v1, v55, 742424710, 4u) ) /*0xfffcdbf3*/
                v52[1] = v24 | 0x20; /*0xfffcdc02*/
              v52[1] |= 0x10u; /*0xfffcdc05*/
            }
            if ( (*(_BYTE *)(v10 + 13) & 7) == 2 ) /*0xfffcdc10*/
              v52[1] |= 0x80u; /*0xfffcdc12*/
            ++v67; /*0xfffcdc19*/
            *(_BYTE *)(v10 + 3) = v68; /*0xfffcdc1c*/
            if ( v63 < v59 ) /*0xfffcdc25*/
              v63 = v59; /*0xfffcdc27*/
            if ( *(_BYTE *)(v10 + 2) ) /*0xfffcdc2a*/
              goto LABEL_96; /*0xfffcdc2e*/
            v64 = 1; /*0xfffcdc30*/
            goto LABEL_90; /*0xfffcdc34*/
          }
          sub_FFFD9481(v1, 7, 3, v55, i, 1, 255); /*0xfffcdb9f*/
        }
        else
        {
          sub_FFFD9481(v1, 7, 2, v55, i, v54, 255); /*0xfffcdb66*/
        }
        goto LABEL_88; /*0xfffcdb66*/
      }
      v22 = v52; /*0xfffcdc8a*/
      *v52 = 0; /*0xfffcdc8d*/
LABEL_96:
      if ( v66 ) /*0xfffcdc94*/
      {
        *v22 = 0; /*0xfffcdc99*/
        v64 = 0; /*0xfffcdca1*/
        sub_FFFC37AE((int)v1, v55, i, 0, i); /*0xfffcdca9*/
        v67 = 0; /*0xfffcdcb1*/
      }
LABEL_98:
      v25 = v67; /*0xfffcdcb5*/
      if ( v52[4] && v67 > 2u ) /*0xfffcdcc3*/
      {
        sub_FFFD934D(v1, 238, 1); /*0xfffcdccd*/
        v25 = v67; /*0xfffcdcd2*/
      }
      v52[2] = v25; /*0xfffcdcda*/
      if ( !v25 ) /*0xfffcdcdd*/
        *v52 = 0; /*0xfffcdcdf*/
      if ( v50[3758] < v25 ) /*0xfffcdcea*/
        v50[3758] = v25; /*0xfffcdcec*/
LABEL_105:
      v62 |= v64; /*0xfffcdcf2*/
      v5 = v63; /*0xfffcdcf8*/
      v4 = &v1[v49]; /*0xfffcdcfb*/
    }
    v26 = v4 + 3756; /*0xfffcdd0b*/
    if ( *v26 < v5 ) /*0xfffcdd12*/
      *v26 = v5; /*0xfffcdd14*/
LABEL_109:
    ++v55; /*0xfffcdd16*/
  }
  while ( !v55 ); /*0xfffcdd1d*/
  if ( !v62 ) /*0xfffcdd29*/
    sub_FFFD934D(v1, 232, 1); /*0xfffcdd33*/
  return 0; /*0xfffcdd3d*/
}

/* 0xfffcdd40 sub_FFFCDD40 */
int __cdecl sub_FFFCDD40(int a1)
{
  int v1; // eax
  int v2; // edi
  _DWORD *v3; // esi
  unsigned __int16 v4; // ax
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  __int16 v7; // cx
  __int16 v8; // ax
  __int16 v9; // ax
  __int16 v10; // ax
  _BYTE *v11; // ecx
  __int16 v12; // ax
  bool v13; // zf
  char v14; // al
  char v15; // al
  int v16; // ecx
  int v17; // ecx
  __int16 v18; // ax
  _BYTE *v19; // ecx
  __int64 v21; // [esp-44h] [ebp-64h]
  __int64 v22; // [esp-44h] [ebp-64h]
  __int64 v23; // [esp-34h] [ebp-54h]
  __int64 v24; // [esp-34h] [ebp-54h]
  __int64 v25; // [esp-34h] [ebp-54h]
  __int64 v26; // [esp-24h] [ebp-44h]
  __int64 v27; // [esp-24h] [ebp-44h]
  __int64 v28; // [esp-24h] [ebp-44h]
  __int64 v29; // [esp-24h] [ebp-44h]
  __int64 v30; // [esp-24h] [ebp-44h]
  __int64 v31; // [esp-24h] [ebp-44h]
  __int64 v32; // [esp-24h] [ebp-44h]
  int v33; // [esp-18h] [ebp-38h]
  __int64 v34; // [esp-14h] [ebp-34h]
  __int64 v35; // [esp-14h] [ebp-34h]
  __int64 v36; // [esp-14h] [ebp-34h]
  __int64 v37; // [esp-14h] [ebp-34h]
  __int64 v38; // [esp-14h] [ebp-34h]
  __int64 v39; // [esp-14h] [ebp-34h]
  __int64 v40; // [esp-14h] [ebp-34h]
  __int64 v41; // [esp-14h] [ebp-34h]
  __int64 v42; // [esp-14h] [ebp-34h]
  __int64 v43; // [esp-14h] [ebp-34h]
  __int64 v44; // [esp-14h] [ebp-34h]
  __int64 v45; // [esp-14h] [ebp-34h]
  __int64 v46; // [esp-14h] [ebp-34h]
  __int64 v47; // [esp-14h] [ebp-34h]
  __int64 v48; // [esp-14h] [ebp-34h]
  __int64 v49; // [esp-14h] [ebp-34h]
  __int64 v50; // [esp-14h] [ebp-34h]
  __int64 v51; // [esp-14h] [ebp-34h]
  __int64 v52; // [esp-14h] [ebp-34h]
  __int64 v53; // [esp-14h] [ebp-34h]
  __int64 v54; // [esp-14h] [ebp-34h]
  __int64 v55; // [esp-14h] [ebp-34h]
  __int64 v56; // [esp-14h] [ebp-34h]
  __int64 v57; // [esp-14h] [ebp-34h]
  __int64 v58; // [esp-14h] [ebp-34h]
  __int16 v59; // [esp+4h] [ebp-1Ch]
  __int16 v60; // [esp+4h] [ebp-1Ch]
  __int16 v61; // [esp+4h] [ebp-1Ch]
  int v62; // [esp+8h] [ebp-18h]
  int v63; // [esp+Ch] [ebp-14h]
  int v64; // [esp+10h] [ebp-10h]
  __int16 v65; // [esp+14h] [ebp-Ch]
  __int16 v66; // [esp+14h] [ebp-Ch]
  _BYTE *v67; // [esp+14h] [ebp-Ch]
  _BYTE *v68; // [esp+14h] [ebp-Ch]
  int v69; // [esp+18h] [ebp-8h]
  unsigned __int8 v70; // [esp+1Dh] [ebp-3h]
  __int16 v71; // [esp+1Eh] [ebp-2h] BYREF

  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) )
  {
    v64 = 0; /*0xfffcdd64*/
    v1 = a1 + 5513; /*0xfffcdd68*/
    v69 = a1 + 5513; /*0xfffcdd75*/
    v63 = a1 + 5574; /*0xfffcdd78*/
    v62 = 3; /*0xfffcdd7b*/
    while ( 1 ) /*0xfffcdd83*/
    {
      if ( *(_BYTE *)(v1 - 1) ) /*0xfffcdd83*/
      {
        *(_WORD *)(v1 + 33) = -1; /*0xfffcdd8d*/
        *(_BYTE *)v1 |= 0x40u; /*0xfffcdd93*/
        v70 = 0; /*0xfffcdd9a*/
        if ( *(_BYTE *)(v1 + 1) ) /*0xfffcdd96*/
          break; /*0xfffcdd96*/
      }
LABEL_69:
      v64 += 1068; /*0xfffce306*/
      v63 += 430; /*0xfffce312*/
      v1 += 430; /*0xfffce315*/
      v13 = v62-- == 1; /*0xfffce317*/
      v69 = v1; /*0xfffce31a*/
      if ( v13 ) /*0xfffce31d*/
        return 0; /*0xfffce31d*/
    }
    while ( 1 ) /*0xfffcddb3*/
    {
      v2 = 184 * v70 + v63; /*0xfffcddb3*/
      if ( *(_BYTE *)(v2 + 1) ) /*0xfffcddb6*/
      {
        if ( *(_BYTE *)(a1 + 3730) != 1 || *(_BYTE *)(a1 + 1) != 1 ) /*0xfffcddcd*/
          break; /*0xfffcddcd*/
      }
LABEL_68:
      if ( ++v70 >= *(_BYTE *)(v1 + 1) ) /*0xfffce300*/
        goto LABEL_69; /*0xfffce300*/
    }
    v3 = (_DWORD *)(212 * v70 + v64 + a1 + 7730 + 16); /*0xfffcdde3*/
    HIDWORD(v34) = 28; /*0xfffcddeb*/
    LODWORD(v34) = *v3; /*0xfffcdded*/
    sub_FFFCCBCB(a1, v34, (unsigned __int8 *)&v71 + 1); /*0xfffcddf0*/
    HIDWORD(v26) = 29; /*0xfffcde02*/
    LODWORD(v26) = *v3; /*0xfffcde04*/
    v65 = v71 & 0xF00; /*0xfffcde07*/
    sub_FFFCCBCB(a1, v26, (unsigned __int8 *)&v71 + 1); /*0xfffcde0a*/
    v4 = HIBYTE(v71) | v65; /*0xfffcde1a*/
    if ( *(_WORD *)(v69 + 53) < v4 ) /*0xfffcde23*/
      *(_WORD *)(v69 + 53) = v4; /*0xfffcde25*/
    HIDWORD(v35) = 19; /*0xfffcde2d*/
    LODWORD(v35) = *v3; /*0xfffcde2f*/
    sub_FFFCCBCB(a1, v35, (unsigned __int8 *)&v71 + 1); /*0xfffcde32*/
    if ( (unsigned int)*(_WORD *)(v69 + 47) < HIBYTE(v71) ) /*0xfffcde46*/
      *(_WORD *)(v69 + 47) = HIBYTE(v71); /*0xfffcde48*/
    HIDWORD(v36) = 26; /*0xfffcde50*/
    LODWORD(v36) = *v3; /*0xfffcde52*/
    sub_FFFCCBCB(a1, v36, (unsigned __int8 *)&v71 + 1); /*0xfffcde55*/
    if ( (unsigned int)*(_WORD *)(v69 + 59) < HIBYTE(v71) ) /*0xfffcde69*/
      *(_WORD *)(v69 + 59) = HIBYTE(v71); /*0xfffcde6b*/
    HIDWORD(v37) = 20; /*0xfffcde73*/
    LODWORD(v37) = *v3; /*0xfffcde75*/
    sub_FFFCCBCB(a1, v37, (unsigned __int8 *)&v71 + 1); /*0xfffcde78*/
    if ( (unsigned int)*(_WORD *)(v69 + 41) < HIBYTE(v71) ) /*0xfffcde8c*/
      *(_WORD *)(v69 + 41) = HIBYTE(v71); /*0xfffcde8e*/
    HIDWORD(v38) = 21; /*0xfffcde96*/
    LODWORD(v38) = *v3; /*0xfffcde98*/
    sub_FFFCCBCB(a1, v38, (unsigned __int8 *)&v71 + 1); /*0xfffcde9b*/
    v59 = 16 * (HIBYTE(v71) & 0xF0); /*0xfffcdeb1*/
    HIDWORD(v27) = 22; /*0xfffcdebc*/
    LODWORD(v27) = *v3; /*0xfffcdebe*/
    v66 = v71 & 0xF00; /*0xfffcdec1*/
    sub_FFFCCBCB(a1, v27, (unsigned __int8 *)&v71 + 1); /*0xfffcdec4*/
    v5 = HIBYTE(v71) | v66; /*0xfffcded4*/
    if ( *(_WORD *)(v69 + 49) < v5 ) /*0xfffcdedd*/
      *(_WORD *)(v69 + 49) = v5; /*0xfffcdedf*/
    HIDWORD(v39) = 23; /*0xfffcdee7*/
    LODWORD(v39) = *v3; /*0xfffcdee9*/
    sub_FFFCCBCB(a1, v39, (unsigned __int8 *)&v71 + 1); /*0xfffcdeec*/
    v6 = HIBYTE(v71) | v59; /*0xfffcdefc*/
    if ( *(_WORD *)(v69 + 43) < v6 ) /*0xfffcdf05*/
      *(_WORD *)(v69 + 43) = v6; /*0xfffcdf07*/
    HIDWORD(v40) = 18; /*0xfffcdf0f*/
    LODWORD(v40) = *v3; /*0xfffcdf11*/
    sub_FFFCCBCB(a1, v40, (unsigned __int8 *)&v71 + 1); /*0xfffcdf14*/
    if ( (unsigned int)*(_WORD *)(v69 + 39) < HIBYTE(v71) ) /*0xfffcdf28*/
      *(_WORD *)(v69 + 39) = HIBYTE(v71); /*0xfffcdf2a*/
    HIDWORD(v41) = 27; /*0xfffcdf32*/
    LODWORD(v41) = *v3; /*0xfffcdf34*/
    sub_FFFCCBCB(a1, v41, (unsigned __int8 *)&v71 + 1); /*0xfffcdf37*/
    if ( (unsigned int)*(_WORD *)(v69 + 51) < HIBYTE(v71) ) /*0xfffcdf4b*/
      *(_WORD *)(v69 + 51) = HIBYTE(v71); /*0xfffcdf4d*/
    HIDWORD(v42) = 24; /*0xfffcdf55*/
    LODWORD(v42) = *v3; /*0xfffcdf57*/
    sub_FFFCCBCB(a1, v42, (unsigned __int8 *)&v71 + 1); /*0xfffcdf5a*/
    v60 = HIBYTE(v71); /*0xfffcdf64*/
    HIDWORD(v28) = 17; /*0xfffcdf6c*/
    LODWORD(v28) = *v3; /*0xfffcdf6e*/
    sub_FFFCCBCB(a1, v28, (unsigned __int8 *)&v71 + 1); /*0xfffcdf71*/
    if ( (unsigned int)*(_WORD *)(v69 + 55) < HIBYTE(v71) ) /*0xfffcdf85*/
      *(_WORD *)(v69 + 55) = HIBYTE(v71); /*0xfffcdf87*/
    HIDWORD(v43) = 25; /*0xfffcdf8f*/
    LODWORD(v43) = *v3; /*0xfffcdf91*/
    sub_FFFCCBCB(a1, v43, (unsigned __int8 *)&v71 + 1); /*0xfffcdf94*/
    LOBYTE(v7) = 0; /*0xfffcdf9c*/
    HIBYTE(v7) = HIBYTE(v71); /*0xfffcdf9e*/
    if ( *(_WORD *)(v69 + 45) < (unsigned __int16)(v7 | v60) ) /*0xfffcdfad*/
      *(_WORD *)(v69 + 45) = v7 | v60; /*0xfffcdfaf*/
    HIDWORD(v44) = 16; /*0xfffcdfb7*/
    LODWORD(v44) = *v3; /*0xfffcdfb9*/
    sub_FFFCCBCB(a1, v44, (unsigned __int8 *)&v71 + 1); /*0xfffcdfbc*/
    if ( (unsigned int)*(_WORD *)(v69 + 37) < HIBYTE(v71) ) /*0xfffcdfd0*/
      *(_WORD *)(v69 + 37) = HIBYTE(v71); /*0xfffcdfd2*/
    HIDWORD(v45) = 15; /*0xfffcdfda*/
    LODWORD(v45) = *v3; /*0xfffcdfdc*/
    sub_FFFCCBCB(a1, v45, (unsigned __int8 *)&v71 + 1); /*0xfffcdfdf*/
    LOBYTE(v8) = 0; /*0xfffcdfe4*/
    HIBYTE(v8) = HIBYTE(v71); /*0xfffcdfe6*/
    v61 = v8; /*0xfffcdfe9*/
    HIDWORD(v29) = 14; /*0xfffcdff0*/
    LODWORD(v29) = *v3; /*0xfffcdff2*/
    sub_FFFCCBCB(a1, v29, (unsigned __int8 *)&v71 + 1); /*0xfffcdff5*/
    *(_WORD *)(v69 + 33) &= v61 | HIBYTE(v71); /*0xfffce005*/
    HIDWORD(v23) = 32; /*0xfffce00d*/
    LODWORD(v23) = *v3; /*0xfffce00f*/
    sub_FFFCCBCB(a1, v23, (unsigned __int8 *)(v2 + 17)); /*0xfffce012*/
    HIDWORD(v21) = 33; /*0xfffce01b*/
    LODWORD(v21) = *v3; /*0xfffce01d*/
    sub_FFFCCBCB(a1, v21, (unsigned __int8 *)(v2 + 18)); /*0xfffce020*/
    HIDWORD(v46) = 64; /*0xfffce02c*/
    LODWORD(v46) = *v3; /*0xfffce02e*/
    sub_FFFCCBCB(a1, v46, (unsigned __int8 *)(v2 + 19)); /*0xfffce031*/
    HIDWORD(v30) = 118; /*0xfffce03a*/
    LODWORD(v30) = *v3; /*0xfffce03c*/
    sub_FFFCCBCB(a1, v30, (unsigned __int8 *)&v71 + 1); /*0xfffce03f*/
    LOBYTE(v9) = 0; /*0xfffce044*/
    HIBYTE(v9) = HIBYTE(v71); /*0xfffce046*/
    *(_WORD *)(v2 + 27) = v9; /*0xfffce049*/
    HIDWORD(v24) = 117; /*0xfffce051*/
    LODWORD(v24) = *v3; /*0xfffce053*/
    sub_FFFCCBCB(a1, v24, (unsigned __int8 *)&v71 + 1); /*0xfffce056*/
    *(_WORD *)(v2 + 27) |= HIBYTE(v71) & 0x7F; /*0xfffce064*/
    HIDWORD(v22) = 120; /*0xfffce06c*/
    LODWORD(v22) = *v3; /*0xfffce06e*/
    sub_FFFCCBCB(a1, v22, (unsigned __int8 *)&v71 + 1); /*0xfffce071*/
    *(_WORD *)(v2 + 29) = HIBYTE(v71); /*0xfffce07e*/
    HIDWORD(v47) = 121; /*0xfffce086*/
    LODWORD(v47) = *v3; /*0xfffce088*/
    sub_FFFCCBCB(a1, v47, (unsigned __int8 *)&v71 + 1); /*0xfffce08b*/
    LOBYTE(v10) = 0; /*0xfffce090*/
    HIBYTE(v10) = HIBYTE(v71); /*0xfffce092*/
    LOBYTE(v71) = 0; /*0xfffce098*/
    *(_WORD *)(v2 + 29) |= v10; /*0xfffce09c*/
    v67 = (_BYTE *)(v2 + 33); /*0xfffce0a3*/
    do /*0xfffce0cf*/
    {
      HIDWORD(v48) = (unsigned __int8)(v71 + 0x80); /*0xfffce0b1*/
      LODWORD(v48) = *v3; /*0xfffce0b2*/
      sub_FFFCCBCB(a1, v48, (unsigned __int8 *)&v71 + 1); /*0xfffce0b5*/
      v11 = v67; /*0xfffce0ba*/
      LOBYTE(v71) = v71 + 1; /*0xfffce0c3*/
      ++v67; /*0xfffce0c6*/
      *v11 = HIBYTE(v71); /*0xfffce0cd*/
    }
    while ( (unsigned __int8)v71 < 0x11u ); /*0xfffce0cf*/
    HIDWORD(v49) = 149; /*0xfffce0d5*/
    LODWORD(v49) = *v3; /*0xfffce0da*/
    sub_FFFCCBCB(a1, v49, (unsigned __int8 *)&v71 + 1); /*0xfffce0dd*/
    LOBYTE(v12) = 0; /*0xfffce0e2*/
    HIBYTE(v12) = HIBYTE(v71); /*0xfffce0e4*/
    *(_WORD *)(v2 + 31) = v12; /*0xfffce0e7*/
    HIDWORD(v31) = 148; /*0xfffce0ef*/
    LODWORD(v31) = *v3; /*0xfffce0f4*/
    sub_FFFCCBCB(a1, v31, (unsigned __int8 *)&v71 + 1); /*0xfffce0f7*/
    *(_WORD *)(v2 + 31) |= HIBYTE(v71) & 0x7F; /*0xfffce105*/
    if ( *(_WORD *)(v2 + 31) == 11264 ) /*0xfffce112*/
      *(_BYTE *)(a1 + 3760) |= 4u; /*0xfffce114*/
    if ( *(_WORD *)(v2 + 31) != 0xAD00 ) /*0xfffce121*/
      goto LABEL_51; /*0xfffce121*/
    HIDWORD(v50) = 131; /*0xfffce12b*/
    LODWORD(v50) = *v3; /*0xfffce130*/
    sub_FFFCCBCB(a1, v50, (unsigned __int8 *)&v71 + 1); /*0xfffce133*/
    switch ( HIBYTE(v71) )
    {
      case '1':
        HIDWORD(v54) = 136; /*0xfffce1b5*/
        LODWORD(v54) = *v3; /*0xfffce1ba*/
        v33 = a1; /*0xfffce1bc*/
        break;
      case '3':
        HIDWORD(v53) = 137; /*0xfffce17b*/
        LODWORD(v53) = *v3; /*0xfffce180*/
        sub_FFFCCBCB(a1, v53, (unsigned __int8 *)&v71 + 1); /*0xfffce183*/
        HIDWORD(v54) = 136; /*0xfffce193*/
        LODWORD(v54) = *v3; /*0xfffce198*/
        v33 = a1; /*0xfffce19a*/
        if ( HIBYTE(v71) != 77 )
        {
          sub_FFFCCBCB(a1, v54, (unsigned __int8 *)&v71 + 1); /*0xfffce19d*/
LABEL_43:
          if ( HIBYTE(v71) == 65 ) /*0xfffce1a9*/
            goto LABEL_50; /*0xfffce1a9*/
          v13 = HIBYTE(v71) == 77; /*0xfffce1ab*/
LABEL_49:
          if ( !v13 )
          {
LABEL_51:
            HIDWORD(v55) = 31; /*0xfffce1de*/
            LODWORD(v55) = *v3; /*0xfffce1e4*/
            sub_FFFCCBCB(a1, v55, (unsigned __int8 *)&v71 + 1); /*0xfffce1e7*/
            v14 = HIBYTE(v71); /*0xfffce1ec*/
            *(_BYTE *)(v2 + 5) = HIBYTE(v71); /*0xfffce1ef*/
            v15 = v14 & 3; /*0xfffce1f2*/
            if ( v15 != 1 ) /*0xfffce1f9*/
              goto LABEL_60; /*0xfffce1f9*/
            v16 = *(_DWORD *)(a1 + 78); /*0xfffce1fb*/
            if ( (v16 & 1) != 0 && (v16 & 0x40) != 0 && (v16 & 0x20000000) == 0 ) /*0xfffce20d*/
            {
              *(_BYTE *)v69 |= 6u; /*0xfffce212*/
              goto LABEL_62; /*0xfffce215*/
            }
            v17 = *(_DWORD *)(a1 + 78); /*0xfffce21b*/
            if ( (v17 & 1) == 0 || (v17 & 0x40) == 0 || (v17 & 0x20000000) == 0 )
            {
LABEL_60:
              if ( v15 != 3 || (*(_BYTE *)(a1 + 78) & 1) == 0 )
              {
LABEL_62:
                if ( *(_BYTE *)(a1 + 3734) ) /*0xfffce23f*/
                {
                  HIDWORD(v58) = 63; /*0xfffce2c8*/
                  LODWORD(v58) = *v3; /*0xfffce2ca*/
                  sub_FFFCCBCB(a1, v58, (unsigned __int8 *)&v71 + 1); /*0xfffce2cd*/
                  *(_BYTE *)(v2 + 10) = HIBYTE(v71); /*0xfffce2d8*/
                }
                else
                {
                  HIDWORD(v56) = 66; /*0xfffce24c*/
                  LODWORD(v56) = *v3; /*0xfffce24e*/
                  sub_FFFCCBCB(a1, v56, (unsigned __int8 *)&v71 + 1); /*0xfffce251*/
                  LOBYTE(v18) = 0; /*0xfffce256*/
                  HIBYTE(v18) = HIBYTE(v71); /*0xfffce258*/
                  *(_WORD *)(v2 + 23) = v18; /*0xfffce25b*/
                  HIDWORD(v32) = 65; /*0xfffce263*/
                  LODWORD(v32) = *v3; /*0xfffce265*/
                  sub_FFFCCBCB(a1, v32, (unsigned __int8 *)&v71 + 1); /*0xfffce268*/
                  *(_WORD *)(v2 + 23) |= HIBYTE(v71) & 0x7F; /*0xfffce276*/
                  HIDWORD(v25) = 67; /*0xfffce27e*/
                  LODWORD(v25) = *v3; /*0xfffce280*/
                  sub_FFFCCBCB(a1, v25, (unsigned __int8 *)&v71 + 1); /*0xfffce283*/
                  *(_BYTE *)(v2 + 11) = HIBYTE(v71); /*0xfffce28b*/
                  LOBYTE(v71) = 0; /*0xfffce294*/
                  v68 = (_BYTE *)(v2 + 8); /*0xfffce298*/
                  do /*0xfffce2c4*/
                  {
                    HIDWORD(v57) = (unsigned __int8)(v71 + 70); /*0xfffce2a6*/
                    LODWORD(v57) = *v3; /*0xfffce2a7*/
                    sub_FFFCCBCB(a1, v57, (unsigned __int8 *)&v71 + 1); /*0xfffce2aa*/
                    v19 = v68; /*0xfffce2af*/
                    LOBYTE(v71) = v71 + 1; /*0xfffce2b8*/
                    ++v68; /*0xfffce2bb*/
                    *v19 = HIBYTE(v71); /*0xfffce2c2*/
                  }
                  while ( (unsigned __int8)v71 < 2u ); /*0xfffce2c4*/
                }
                *(_WORD *)(v2 + 21) = (*(_BYTE *)v69 & 4) != 0 ? 1520 : 1360;
                v1 = v69; /*0xfffce2f4*/
                goto LABEL_68; /*0xfffce2f4*/
              }
            }
            *(_BYTE *)v69 |= 4u; /*0xfffce23c*/
            goto LABEL_62; /*0xfffce23c*/
          }
LABEL_50:
          *(_BYTE *)(a1 + 3760) |= 2u; /*0xfffce1d7*/
          goto LABEL_51; /*0xfffce1d7*/
        }
        break;
      case '4':
        HIDWORD(v51) = 137; /*0xfffce153*/
        LODWORD(v51) = *v3; /*0xfffce158*/
        sub_FFFCCBCB(a1, v51, (unsigned __int8 *)&v71 + 1); /*0xfffce15b*/
        if ( HIBYTE(v71) != 77 ) /*0xfffce167*/
          goto LABEL_51; /*0xfffce167*/
        HIDWORD(v52) = 136; /*0xfffce16d*/
        LODWORD(v52) = *v3; /*0xfffce172*/
        sub_FFFCCBCB(a1, v52, (unsigned __int8 *)&v71 + 1); /*0xfffce175*/
        goto LABEL_43; /*0xfffce175*/
      default:
        goto LABEL_51; /*0xfffce149*/
    }
    sub_FFFCCBCB(v33, v54, (unsigned __int8 *)&v71 + 1); /*0xfffce1bd*/
    if ( HIBYTE(v71) == 65 || HIBYTE(v71) == 66 ) /*0xfffce1cf*/
      goto LABEL_50; /*0xfffce1cf*/
    v13 = HIBYTE(v71) == 84; /*0xfffce1d1*/
    goto LABEL_49; /*0xfffce1d1*/
  }
  return 0; /*0xfffce327*/
}

/* 0xfffce32a sub_FFFCE32A */
char __cdecl sub_FFFCE32A(_BYTE *a1, unsigned __int8 a2, _BYTE *a3)
{
  unsigned __int8 *v4; // ebx
  unsigned __int8 v5; // dl
  int v6; // edi
  unsigned __int8 v7; // dl
  char v8; // al
  char v10; // [esp+Fh] [ebp-9h]
  unsigned __int8 v11; // [esp+13h] [ebp-5h]
  char v12; // [esp+17h] [ebp-1h]
  unsigned __int8 v13; // [esp+20h] [ebp+8h]

  v4 = &a1[3297 * a2 + 6997]; /*0xfffce347*/
  v12 = 0; /*0xfffce351*/
  v11 = *v4; /*0xfffce355*/
  sub_FFFCC8A8((int)a1, a2, 1); /*0xfffce358*/
  if ( (sub_FFFC4EEF((int)a1, v11, 3u, 4u, 0x80u) & 0x20000000) != 0 ) /*0xfffce377*/
  {
    sub_FFFC4EEF((int)a1, *v4, 3u, 0, 0x78u); /*0xfffce389*/
    sub_FFFC4EEF((int)a1, v5, 3u, 0, 0x7Cu); /*0xfffce396*/
    v6 = (int)&a1[3049 * a2 + 5512]; /*0xfffce3a4*/
    v13 = 0; /*0xfffce3ab*/
    while ( 1 ) /*0xfffce3b3*/
    {
      if ( *(_BYTE *)(430 * v13 + v6) ) /*0xfffce3b9*/
      {
        sub_FFFC7CD6((int)a1, v11); /*0xfffce3ca*/
        v10 = (unsigned __int8)sub_FFFC4E96((int)a1, *v4, 3u, 0, 0x7Cu) >> 6; /*0xfffce3e6*/
        v7 = 0; /*0xfffce3e9*/
        while ( 1 ) /*0xfffce3eb*/
        {
          if ( a1[3733] || v7 != 8 ) /*0xfffce3f7*/
          {
            sub_FFFC4FB2((int)a1, v11, 3u, 4u, 0xACu, v7 << 19); /*0xfffce40d*/
            if ( sub_FFFC4E96((int)a1, v11, 3u, 4u, 0xCCu) ) /*0xfffce41f*/
              break; /*0xfffce41f*/
          }
          if ( ++v7 >= 9u ) /*0xfffce430*/
            goto LABEL_11; /*0xfffce430*/
        }
        v12 = 1; /*0xfffce437*/
        sub_FFFC71E2((int)a1, a2); /*0xfffce43c*/
LABEL_11:
        if ( v12 ) /*0xfffce447*/
          break; /*0xfffce447*/
      }
      if ( ++v13 >= 3u ) /*0xfffce450*/
        goto LABEL_15; /*0xfffce450*/
    }
    sub_FFFD9481(a1, 28, 0, a2, v13, v10, 255); /*0xfffce46b*/
    sub_FFFC9491(a1, a2, v13, v10, a3); /*0xfffce47d*/
  }
LABEL_15:
  v8 = sub_FFFC4E96((int)a1, v11, 3u, 4u, 0x68u); /*0xfffce485*/
  sub_FFFC4F4E((int)a1, v11, 3u, 4u, 0x68u, v8 & 0xFD); /*0xfffce4a2*/
  return v12; /*0xfffce4ad*/
}

/* 0xfffce4b2 sub_FFFCE4B2 */
char __cdecl sub_FFFCE4B2(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  __int16 v10; // cx
  int v11; // ebx
  unsigned __int8 *v12; // esi
  char v13; // al
  char v14; // al
  int v15; // eax
  char v16; // cl
  char v17; // cl
  char v18; // cl
  int v20; // [esp+Ch] [ebp-4h]
  char v21; // [esp+1Ch] [ebp+Ch]
  char v22; // [esp+1Ch] [ebp+Ch]
  char v23; // [esp+1Ch] [ebp+Ch]
  char v24; // [esp+1Ch] [ebp+Ch]
  int v25; // [esp+24h] [ebp+14h]
  _BYTE *v26; // [esp+28h] [ebp+18h]

  v5 = a2; /*0xfffce4c6*/
  v6 = 3049 * a2 + 430 * a3; /*0xfffce4d2*/
  v20 = 3049 * a2; /*0xfffce4d4*/
  v7 = 184 * a4; /*0xfffce4db*/
  v8 = *(unsigned __int8 *)(v6 + v7 + 32 * a5 + a1 + 5636); /*0xfffce4ec*/
  v9 = v6 + a1 + 5574 + v7; /*0xfffce4fb*/
  v10 = *(_WORD *)(v9 + 23); /*0xfffce4fd*/
  v11 = v8 << 20; /*0xfffce501*/
  v21 = 2; /*0xfffce509*/
  v25 = v9; /*0xfffce50d*/
  if ( v10 == -19712 && *(_BYTE *)(v9 + 11) <= 0x57u ) /*0xfffce516*/
    v21 = 0; /*0xfffce518*/
  if ( v10 == -19708 && *(_BYTE *)(v9 + 11) <= 3u ) /*0xfffce527*/
    v21 = 0; /*0xfffce529*/
  if ( v10 == 12934 && *(_BYTE *)(v9 + 11) <= 3u ) /*0xfffce538*/
    v21 = 0; /*0xfffce53a*/
  v12 = (unsigned __int8 *)(3297 * v5 + a1 + 6997); /*0xfffce54b*/
  sub_FFFCC60D(a1, *v12, a3, v11, v21, 0); /*0xfffce55a*/
  v13 = *(_BYTE *)(v25 + 4) & 0x1F; /*0xfffce568*/
  if ( !v13 || v13 == 2 || v13 == 9 || v13 == 11 ) /*0xfffce576*/
    sub_FFFCC60D(a1, *v12, a3, v11, 12, 1); /*0xfffce586*/
  sub_FFFCC60D(a1, *v12, a3, v11, *(_BYTE *)(v25 + 8) >> 4, 3); /*0xfffce5a5*/
  sub_FFFCC60D(a1, *v12, a3, v11, *(_BYTE *)(v25 + 9) & 0xF, 4); /*0xfffce5c3*/
  sub_FFFCC60D(a1, *v12, a3, v11, *(_BYTE *)(v25 + 9) >> 4, 5); /*0xfffce5df*/
  v14 = *(_BYTE *)(v25 + 4) & 0x1F; /*0xfffce5ea*/
  if ( v14 == 5 || v14 == 18 || v14 == 21 ) /*0xfffce5f9*/
    sub_FFFCC60D(a1, *v12, a3, v11, 10, 8); /*0xfffce609*/
  sub_FFFCC60D(a1, *v12, a3, v11, 9, 9); /*0xfffce61f*/
  if ( *(_WORD *)(v25 + 23) != 0x9700 || *(_BYTE *)(v25 + 11) != 25 ) /*0xfffce63a*/
  {
    sub_FFFCC60D(a1, *v12, a3, v11, *(_BYTE *)(v20 + a1 + 3757), 10); /*0xfffce76e*/
    goto LABEL_41; /*0xfffce76e*/
  }
  sub_FFFCC60D(a1, *v12, a3, v11, 0, 10); /*0xfffce64e*/
  sub_FFFCC60D(a1, *v12, a3, v11, 1, 2); /*0xfffce661*/
  sub_FFFCC60D(a1, *v12, a3, v11, 1, 7); /*0xfffce674*/
  v26 = (_BYTE *)(v20 + a1 + 3757); /*0xfffce683*/
  if ( !*v26 ) /*0xfffce686*/
    goto LABEL_26; /*0xfffce686*/
  if ( *v26 == 1 ) /*0xfffce692*/
  {
    v22 = 12; /*0xfffce69d*/
    goto LABEL_27; /*0xfffce6a1*/
  }
  if ( *v26 != 2 ) /*0xfffce695*/
  {
LABEL_26:
    v22 = 5; /*0xfffce6a3*/
    goto LABEL_27; /*0xfffce6a3*/
  }
  v22 = 3; /*0xfffce697*/
LABEL_27:
  sub_FFFCC60D(a1, *v12, a3, v11, v22, 11); /*0xfffce6a7*/
  if ( !*v26 ) /*0xfffce6be*/
    goto LABEL_32; /*0xfffce6be*/
  if ( *v26 == 1 ) /*0xfffce6ca*/
  {
    v23 = 1; /*0xfffce6d5*/
    goto LABEL_33; /*0xfffce6d9*/
  }
  if ( *v26 != 2 ) /*0xfffce6cd*/
  {
LABEL_32:
    v23 = 5; /*0xfffce6db*/
    goto LABEL_33; /*0xfffce6db*/
  }
  v23 = 14; /*0xfffce6cf*/
LABEL_33:
  sub_FFFCC60D(a1, *v12, a3, v11, v23, 12); /*0xfffce6df*/
  if ( !*v26 ) /*0xfffce6f6*/
    goto LABEL_38; /*0xfffce6f6*/
  if ( *v26 == 1 ) /*0xfffce702*/
  {
    v24 = 7; /*0xfffce70d*/
    goto LABEL_39; /*0xfffce711*/
  }
  if ( *v26 != 2 ) /*0xfffce705*/
  {
LABEL_38:
    v24 = 5; /*0xfffce713*/
    goto LABEL_39; /*0xfffce713*/
  }
  v24 = 8; /*0xfffce707*/
LABEL_39:
  sub_FFFCC60D(a1, *v12, a3, v11, v24, 13); /*0xfffce717*/
  sub_FFFCC60D(a1, *v12, a3, v11, 4, 15); /*0xfffce739*/
  sub_FFFCC60D(a1, *v12, a3, v11, 0, 7); /*0xfffce74c*/
LABEL_41:
  v15 = v25; /*0xfffce776*/
  if ( *(_WORD *)(v25 + 23) == 0x9700 && *(_BYTE *)(v25 + 11) == 22 ) /*0xfffce789*/
  {
    v16 = *(_BYTE *)(v25 + 13); /*0xfffce78f*/
    if ( v16 == 8 || v16 == 25 ) /*0xfffce79a*/
    {
      sub_FFFCC60D(a1, *v12, a3, v11, 10, 3); /*0xfffce7aa*/
      sub_FFFCC60D(a1, *v12, a3, v11, 10, 4); /*0xfffce7bd*/
      sub_FFFCC60D(a1, *v12, a3, v11, 10, 5); /*0xfffce7d0*/
      v15 = v25; /*0xfffce7d5*/
    }
    if ( *(_BYTE *)(v15 + 13) == 24 ) /*0xfffce7df*/
    {
      sub_FFFCC60D(a1, *v12, a3, v11, 10, 3); /*0xfffce7ef*/
      sub_FFFCC60D(a1, *v12, a3, v11, 5, 4); /*0xfffce802*/
      sub_FFFCC60D(a1, *v12, a3, v11, 10, 5); /*0xfffce815*/
      sub_FFFCC60D(a1, *v12, a3, v11, 12, 8); /*0xfffce82b*/
      v15 = v25; /*0xfffce830*/
    }
  }
  if ( *(_WORD *)(v15 + 23) == 0xB304 ) /*0xfffce83c*/
  {
    v17 = *(_BYTE *)(v15 + 11); /*0xfffce842*/
    if ( v17 == 1 || v17 == 2 && *(_BYTE *)v15 > 1u ) /*0xfffce852*/
    {
      sub_FFFCC60D(a1, *v12, a3, v11, 1, 9); /*0xfffce862*/
      v15 = v25; /*0xfffce867*/
    }
    if ( *(_BYTE *)(v15 + 11) == 1 ) /*0xfffce871*/
    {
      v18 = *(_BYTE *)(v15 + 13); /*0xfffce873*/
      if ( v18 == 8 || v18 == 24 || v18 == 25 ) /*0xfffce883*/
      {
        sub_FFFCC60D(a1, *v12, a3, v11, 5, 5); /*0xfffce893*/
        sub_FFFCC60D(a1, *v12, a3, v11, 8, 7); /*0xfffce8a6*/
        sub_FFFCC60D(a1, *v12, a3, v11, 0, 12); /*0xfffce8b9*/
        sub_FFFCC60D(a1, *v12, a3, v11, 10, 13); /*0xfffce8cf*/
        sub_FFFCC60D(a1, *v12, a3, v11, 2, 14); /*0xfffce8e2*/
        v15 = v25; /*0xfffce8e7*/
      }
    }
  }
  if ( *(_WORD *)(v15 + 23) == 12934 ) /*0xfffce8f3*/
  {
    LOBYTE(v15) = *(_BYTE *)(v15 + 11); /*0xfffce8f5*/
    if ( (_BYTE)v15 == 1 || (_BYTE)v15 == 2 || (_BYTE)v15 == 3 ) /*0xfffce902*/
      LOBYTE(v15) = sub_FFFCC60D(a1, *v12, a3, v11, 8, 9); /*0xfffce912*/
  }
  return v15; /*0xfffce91a*/
}

/* 0xfffce91f sub_FFFCE91F */
char __cdecl sub_FFFCE91F(_BYTE *a1, char a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _BYTE *v4; // ecx
  int v5; // ebx
  int v6; // edi
  __int16 v7; // dx
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // dl
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  unsigned __int16 *v14; // ebx
  unsigned __int16 *v15; // edi
  unsigned __int16 v16; // ax
  int v17; // eax
  unsigned __int16 v18; // ax
  int v19; // ecx
  int v20; // eax
  unsigned __int16 v21; // ax
  int v22; // eax
  int v23; // eax
  int v25; // [esp+4h] [ebp-2Ch]
  int v26; // [esp+8h] [ebp-28h]
  _BYTE *i; // [esp+Ch] [ebp-24h]
  _BYTE *v28; // [esp+10h] [ebp-20h]
  int v29; // [esp+14h] [ebp-1Ch]
  int j; // [esp+14h] [ebp-1Ch]
  int v31; // [esp+1Ch] [ebp-14h]
  unsigned __int8 v32; // [esp+20h] [ebp-10h]
  unsigned __int8 v33; // [esp+24h] [ebp-Ch]
  unsigned int v34; // [esp+28h] [ebp-8h]
  unsigned __int16 v35; // [esp+28h] [ebp-8h]
  unsigned __int16 v36; // [esp+28h] [ebp-8h]
  unsigned __int8 v37; // [esp+2Eh] [ebp-2h]
  unsigned __int8 v38; // [esp+2Fh] [ebp-1h]

  if ( a1[3755] )
  {
    v25 = 0; /*0xfffce936*/
    v26 = 0; /*0xfffce93a*/
    v4 = a1 + 5574; /*0xfffce945*/
    v33 = 0; /*0xfffce956*/
    v28 = a1 + 5512; /*0xfffce95a*/
    for ( i = a1 + 5574; ; i += 430 ) /*0xfffce95d*/
    {
      if ( *v28 ) /*0xfffce963*/
      {
        v5 = 184 * a3; /*0xfffce970*/
        if ( v4[v5 + 1] ) /*0xfffce976*/
        {
          if ( !v4[v5 + 2] ) /*0xfffce981*/
          {
            v6 = 32 * a4; /*0xfffce99e*/
            v29 = (int)&v4[v5 + 56]; /*0xfffce9a1*/
            v31 = v6 + v29; /*0xfffce9a9*/
            if ( *(_BYTE *)(v6 + v29) ) /*0xfffce9a6*/
              break; /*0xfffce9a6*/
          }
        }
      }
LABEL_52:
      ++v33; /*0xfffced1a*/
      v26 += 1068; /*0xfffced20*/
      v25 += 578; /*0xfffced27*/
      v28 += 430; /*0xfffced33*/
      v4 = i + 430; /*0xfffced36*/
      if ( v33 >= 3u ) /*0xfffced3f*/
        return 0; /*0xfffced3f*/
    }
    v34 = 0; /*0xfffce9b5*/
    v32 = v33 + 4; /*0xfffce9bb*/
    do /*0xfffce9f0*/
    {
      if ( (sub_FFFC4EC2((int)a1, a1[6997], v32, 0, 0x5Cu) & 0x100) != 0 ) /*0xfffce9da*/
        break; /*0xfffce9da*/
      sub_FFFCA83C((int)a1, 0x64u); /*0xfffce9df*/
      ++v34; /*0xfffce9e4*/
    }
    while ( v34 < 0x2710 ); /*0xfffce9f0*/
    v7 = 0; /*0xfffce9f2*/
    if ( a2 == 2 ) /*0xfffce9f8*/
      sub_FFFC4F7F((int)a1, a1[6997], v32, 0, 0xA0u, 0); /*0xfffcea0e*/
    if ( a2 == 4 ) /*0xfffcea1a*/
    {
      sub_FFFC4F7F((int)a1, a1[6997], v32, v7, 0xA0u, v7); /*0xfffcea30*/
      sub_FFFC4F4E((int)a1, a1[6997], v32, v8, 0x7Cu, a1[v26 + 7088]); /*0xfffcea51*/
      sub_FFFCC670((int)a1, v9, v33); /*0xfffcea5b*/
    }
    v10 = *(unsigned __int8 *)(v6 + v29 + 2); /*0xfffcea66*/
    v11 = (int)&a1[144 * v10 + 3780 + v25]; /*0xfffcea82*/
    v12 = (int)&a1[148 * v10 + 328]; /*0xfffcea94*/
    v37 = i[v5 + 12] == 0 ? 9 : 18;
    v38 = 0; /*0xfffcea9e*/
    v13 = v12 - v11; /*0xfffceaaa*/
    v14 = (unsigned __int16 *)v12; /*0xfffceaac*/
    v15 = (unsigned __int16 *)(v11 + 4); /*0xfffceaae*/
    for ( j = v12 - v11; ; v13 = j ) /*0xfffceab1*/
    {
      if ( !a1[3733] && (v38 == 8 || v38 == 17) ) /*0xfffcead0*/
        goto LABEL_51; /*0xfffcead0*/
      if ( a2 == 1 ) /*0xfffceadb*/
        break; /*0xfffceadb*/
      switch ( a2 ) /*0xfffceae2*/
      {
        case 2: /*0xfffceae2*/
          v21 = sub_FFFC4FE3((int)a1, a1[6997], v33, (int)&a1[2 * v14[1] + 2017 + v14[1]]); /*0xfffcebf6*/
          if ( a4 && *(_BYTE *)(v31 + 2) == *(_BYTE *)(v31 - 30) ) /*0xfffcec0d*/
          {
            v22 = (*(v15 - 1) + v21) / 2; /*0xfffcec1b*/
            *(v15 - 1) = v22; /*0xfffcec1d*/
            sub_FFFC8367((int)a1, a1[6997], v33, (int)&a1[2 * v14[1] + 2017 + v14[1]], (unsigned __int16)v22, 0); /*0xfffcec43*/
          }
          else
          {
            *(v15 - 1) = v21; /*0xfffcec50*/
          }
          break;
        case 4: /*0xfffceae2*/
          v18 = sub_FFFC4FE3( /*0xfffceb75*/
                  (int)a1,
                  a1[6997],
                  v33,
                  (int)&a1[2 * *(unsigned __int16 *)((char *)v15 + v13)
                         + 2017
                         + *(unsigned __int16 *)((char *)v15 + v13)]);
          v35 = v18; /*0xfffceb81*/
          if ( a4 && *(_BYTE *)(v31 + 2) == *(_BYTE *)(v31 - 30) ) /*0xfffceb8f*/
          {
            v19 = *v15; /*0xfffceb91*/
            if ( v18 <= v19 + 64 ) /*0xfffceb9c*/
            {
              if ( v18 + 64 < v19 ) /*0xfffcebac*/
                v35 = v18 + 128; /*0xfffcebae*/
            }
            else
            {
              v35 = v18 - 128; /*0xfffceb9e*/
            }
            v20 = (v19 + v35) / 2; /*0xfffcebbe*/
            *v15 = v20; /*0xfffcebc0*/
            sub_FFFC8367( /*0xfffcebd0*/
              (int)a1,
              a1[6997],
              v33,
              (int)&a1[2 * *(unsigned __int16 *)((char *)v15 + j) + 2017 + *(unsigned __int16 *)((char *)v15 + j)],
              (unsigned __int16)v20,
              0);
          }
          else
          {
            *v15 = v18; /*0xfffcebd2*/
          }
          break;
        case 8: /*0xfffceae2*/
          v16 = sub_FFFC4FE3( /*0xfffceb12*/
                  (int)a1,
                  a1[6997],
                  v33,
                  (int)&a1[2 * *(unsigned __int16 *)((char *)v15 + v13 + 2)
                         + 2017
                         + *(unsigned __int16 *)((char *)v15 + v13 + 2)]);
          if ( a4 && *(_BYTE *)(v31 + 2) == *(_BYTE *)(v31 - 30) ) /*0xfffceb29*/
          {
            v17 = (v15[1] + v16) / 2; /*0xfffceb37*/
            v15[1] = v17; /*0xfffceb39*/
            sub_FFFC8367( /*0xfffceb4b*/
              (int)a1,
              a1[6997],
              v33,
              (int)&a1[2 * *(unsigned __int16 *)((char *)v15 + j + 2)
                     + 2017
                     + *(unsigned __int16 *)((char *)v15 + j + 2)],
              (unsigned __int16)v17,
              0);
          }
          else
          {
            v15[1] = v16; /*0xfffceb50*/
          }
          break;
      }
LABEL_51:
      ++v38; /*0xfffced05*/
      v14 += 4; /*0xfffced0b*/
      v15 += 4; /*0xfffced0e*/
      if ( v38 >= v37 ) /*0xfffced14*/
        goto LABEL_52; /*0xfffced14*/
    }
    v36 = sub_FFFC4FE3((int)a1, a1[6997], v33, (int)&a1[2 * *v14 + 2017 + *v14]); /*0xfffcec7c*/
    if ( v36 < 0x10u ) /*0xfffcec86*/
    {
      v36 = 16; /*0xfffcec91*/
    }
    else if ( v36 <= 0x2Cu ) /*0xfffcec8d*/
    {
LABEL_47:
      sub_FFFC8367((int)a1, a1[6997], v33, (int)&a1[2 * *v14 + 2017 + *v14], v36, 1u); /*0xfffceca0*/
      if ( a4 && *(_BYTE *)(v31 + 2) == *(_BYTE *)(v31 - 30) ) /*0xfffcecd9*/
      {
        v23 = ((unsigned __int8)v36 + *(v15 - 2)) / 2; /*0xfffcece8*/
        *(v15 - 2) = v23; /*0xfffcecea*/
        sub_FFFC8367((int)a1, a1[6997], v33, (int)&a1[2 * *v14 + 2017 + *v14], (unsigned __int16)v23, 0); /*0xfffcecf7*/
      }
      else
      {
        *(v15 - 2) = (unsigned __int8)v36; /*0xfffced01*/
      }
      goto LABEL_51; /*0xfffcecf7*/
    }
    if ( v36 > 0x2Cu ) /*0xfffcec9b*/
      v36 = 44; /*0xfffcec9d*/
    goto LABEL_47; /*0xfffcec9d*/
  }
  return 0; /*0xfffced49*/
}

/* 0xfffced4c sub_FFFCED4C */
int __cdecl sub_FFFCED4C(_BYTE *a1)
{
  int v1; // edx
  int *v2; // edi
  char v3; // al
  int v4; // ecx
  int v5; // eax
  char v6; // al
  int v7; // eax
  int v8; // eax
  char v9; // cl
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // dl
  unsigned __int16 *v17; // edi
  int v18; // edx
  char v19; // al
  int v20; // ecx
  int v21; // edi
  int v22; // ecx
  _BYTE *v23; // eax
  int v24; // eax
  unsigned __int16 v25; // cx
  _BYTE *v26; // eax
  unsigned __int8 v27; // al
  int v28; // edi
  unsigned __int16 v29; // cx
  unsigned __int8 v30; // al
  int v31; // ecx
  unsigned __int8 v32; // al
  char v33; // al
  unsigned __int16 v34; // cx
  bool v35; // cf
  char v36; // al
  int v37; // edi
  bool v38; // cc
  int v39; // eax
  _DWORD *v40; // edi
  int v41; // ecx
  __int16 v42; // cx
  int v43; // edi
  bool v44; // zf
  _WORD *v45; // edi
  __int16 v46; // ax
  unsigned __int16 v47; // cx
  int v48; // eax
  int v49; // eax
  _WORD v51[864]; // [esp+Ch] [ebp-978h]
  _WORD v52[18]; // [esp+6CCh] [ebp-2B8h] BYREF
  _WORD v53[18]; // [esp+6F0h] [ebp-294h] BYREF
  int v54; // [esp+714h] [ebp-270h]
  _DWORD v55[129]; // [esp+718h] [ebp-26Ch] BYREF
  _WORD v56[18]; // [esp+91Ch] [ebp-68h] BYREF
  int v57; // [esp+940h] [ebp-44h]
  int v58; // [esp+944h] [ebp-40h]
  _WORD v59[18]; // [esp+948h] [ebp-3Ch] BYREF
  _DWORD v60[2]; // [esp+96Ch] [ebp-18h]
  _DWORD v61[2]; // [esp+974h] [ebp-10h]
  __int16 v62; // [esp+97Ch] [ebp-8h]
  int v63; // [esp+980h] [ebp-4h]
  int v64; // [esp+984h] [ebp+0h] BYREF
  _DWORD v65[2]; // [esp+988h] [ebp+4h] BYREF
  _DWORD v66[2]; // [esp+990h] [ebp+Ch] BYREF
  __int16 v67; // [esp+998h] [ebp+14h]
  int v68; // [esp+99Ch] [ebp+18h]
  int v69; // [esp+9A0h] [ebp+1Ch]
  int v70; // [esp+9A4h] [ebp+20h]
  _BYTE *v71; // [esp+9A8h] [ebp+24h]
  int v72; // [esp+9ACh] [ebp+28h]
  _BYTE v73[12]; // [esp+9B0h] [ebp+2Ch]
  int v74; // [esp+9BCh] [ebp+38h]
  int v75; // [esp+9C0h] [ebp+3Ch]
  int v76; // [esp+9C4h] [ebp+40h]
  int v77; // [esp+9C8h] [ebp+44h]
  int v78; // [esp+9CFh] [ebp+4Bh]
  int v79; // [esp+9D3h] [ebp+4Fh]
  int v80; // [esp+9D7h] [ebp+53h]
  unsigned __int8 v81; // [esp+9DBh] [ebp+57h]
  _BYTE *v82; // [esp+9DCh] [ebp+58h]
  int v83; // [esp+9E0h] [ebp+5Ch]
  _DWORD *v84; // [esp+9E4h] [ebp+60h]
  int v85; // [esp+9E8h] [ebp+64h]
  int v86; // [esp+9EEh] [ebp+6Ah]
  unsigned __int8 v87; // [esp+9F2h] [ebp+6Eh]
  bool v88; // [esp+9F3h] [ebp+6Fh]
  unsigned __int8 v89; // [esp+9F4h] [ebp+70h]
  unsigned __int8 v90; // [esp+9F5h] [ebp+71h]
  unsigned __int8 v91; // [esp+9F6h] [ebp+72h]
  unsigned __int8 v92; // [esp+9F7h] [ebp+73h]

  v55[63] = -1; /*0xfffced5c*/
  v54 = 0; /*0xfffced66*/
  v55[0] = -64; /*0xfffced6c*/
  v55[1] = -63; /*0xfffced76*/
  v55[2] = -62; /*0xfffced80*/
  v55[3] = -61; /*0xfffced8a*/
  v55[4] = -60; /*0xfffced94*/
  v55[5] = -59; /*0xfffced9e*/
  v55[6] = -58; /*0xfffceda8*/
  v55[7] = -57; /*0xfffcedb2*/
  v55[8] = -56; /*0xfffcedbc*/
  v55[9] = -55; /*0xfffcedc6*/
  v55[10] = -54; /*0xfffcedd0*/
  v55[11] = -53; /*0xfffcedda*/
  v55[12] = -52; /*0xfffcede4*/
  v55[13] = -51; /*0xfffcedee*/
  v55[14] = -50; /*0xfffcedf8*/
  v55[15] = -49; /*0xfffcee02*/
  v55[16] = -48; /*0xfffcee0c*/
  v55[17] = -47; /*0xfffcee16*/
  v55[18] = -46; /*0xfffcee20*/
  v55[19] = -45; /*0xfffcee2a*/
  v55[20] = -44; /*0xfffcee34*/
  v55[21] = -43; /*0xfffcee3e*/
  v55[22] = -42; /*0xfffcee48*/
  v55[23] = -41; /*0xfffcee52*/
  v55[24] = -40; /*0xfffcee5c*/
  v55[25] = -39; /*0xfffcee66*/
  v55[26] = -38; /*0xfffcee70*/
  v55[27] = -37; /*0xfffcee7a*/
  v55[28] = -36; /*0xfffcee84*/
  v55[29] = -35; /*0xfffcee8e*/
  v55[30] = -34; /*0xfffcee98*/
  v55[31] = -33; /*0xfffceea2*/
  v55[32] = -32; /*0xfffceeac*/
  v55[33] = -31; /*0xfffceeb6*/
  v55[34] = -30; /*0xfffceec0*/
  v55[35] = -29; /*0xfffceeca*/
  v55[36] = -28; /*0xfffceed4*/
  v55[37] = -27; /*0xfffceede*/
  v55[38] = -26; /*0xfffceee8*/
  v55[39] = -25; /*0xfffceef2*/
  v55[40] = -24; /*0xfffceefc*/
  v55[41] = -23; /*0xfffcef06*/
  v55[42] = -22; /*0xfffcef10*/
  v55[43] = -21; /*0xfffcef1a*/
  v55[44] = -20; /*0xfffcef24*/
  v55[45] = -19; /*0xfffcef2e*/
  v55[46] = -18; /*0xfffcef38*/
  v55[47] = -17; /*0xfffcef42*/
  v55[48] = -16; /*0xfffcef4c*/
  v55[49] = -15; /*0xfffcef56*/
  v55[50] = -14; /*0xfffcef60*/
  v55[51] = -13; /*0xfffcef6a*/
  v55[52] = -12; /*0xfffcef74*/
  v55[53] = -11; /*0xfffcef7e*/
  v55[54] = -10; /*0xfffcef88*/
  v55[55] = -9; /*0xfffcef92*/
  v55[56] = -8; /*0xfffcef9c*/
  v55[57] = -7; /*0xfffcefa6*/
  v55[58] = -6; /*0xfffcefb0*/
  v55[59] = -5; /*0xfffcefba*/
  v55[60] = -4; /*0xfffcefc4*/
  v55[61] = -3; /*0xfffcefce*/
  v55[62] = -2; /*0xfffcefd8*/
  v55[64] = 0; /*0xfffcefe2*/
  v55[65] = 1; /*0xfffcefe8*/
  v55[66] = 2; /*0xfffceff2*/
  v55[67] = 3; /*0xfffceffc*/
  v55[68] = 4; /*0xfffcf002*/
  v55[69] = 5; /*0xfffcf00c*/
  v55[70] = 6; /*0xfffcf016*/
  v55[71] = 7; /*0xfffcf020*/
  v55[72] = 8; /*0xfffcf02a*/
  v55[73] = 9; /*0xfffcf034*/
  v55[74] = 10; /*0xfffcf044*/
  v55[75] = 11; /*0xfffcf04e*/
  v55[76] = 12; /*0xfffcf058*/
  v55[77] = 13; /*0xfffcf062*/
  v55[78] = 14; /*0xfffcf06c*/
  v55[79] = 15; /*0xfffcf076*/
  v55[80] = 16; /*0xfffcf080*/
  v55[81] = 17; /*0xfffcf08a*/
  v55[82] = 18; /*0xfffcf094*/
  v55[83] = 19; /*0xfffcf09e*/
  v55[84] = 20; /*0xfffcf0a8*/
  v55[85] = 21; /*0xfffcf0b2*/
  v55[86] = 22; /*0xfffcf0bc*/
  v55[87] = 23; /*0xfffcf0c6*/
  v55[88] = 24; /*0xfffcf0d0*/
  v55[89] = 25; /*0xfffcf0da*/
  v55[90] = 26; /*0xfffcf0e4*/
  v55[91] = 27; /*0xfffcf0ee*/
  v55[92] = 28; /*0xfffcf0f8*/
  v55[93] = 29; /*0xfffcf102*/
  v55[94] = 30; /*0xfffcf10c*/
  v55[95] = 31; /*0xfffcf116*/
  v55[96] = 32; /*0xfffcf120*/
  v55[97] = 33; /*0xfffcf12a*/
  v55[98] = 34; /*0xfffcf134*/
  v55[99] = 35; /*0xfffcf13e*/
  v55[100] = 36; /*0xfffcf148*/
  v55[101] = 37; /*0xfffcf152*/
  v55[102] = 38; /*0xfffcf15c*/
  v55[103] = 39; /*0xfffcf166*/
  v55[104] = 40; /*0xfffcf170*/
  v55[105] = 41; /*0xfffcf17a*/
  v55[106] = 42; /*0xfffcf184*/
  v55[107] = 43; /*0xfffcf18e*/
  v55[108] = 44; /*0xfffcf198*/
  v55[109] = 45; /*0xfffcf1a2*/
  v55[110] = 46; /*0xfffcf1ac*/
  v55[111] = 47; /*0xfffcf1b6*/
  v55[112] = 48; /*0xfffcf1c0*/
  v55[113] = 49; /*0xfffcf1ca*/
  v55[114] = 50; /*0xfffcf1d4*/
  v55[115] = 51; /*0xfffcf1de*/
  v55[116] = 52; /*0xfffcf1e8*/
  v55[117] = 53; /*0xfffcf1f2*/
  v55[118] = 54; /*0xfffcf1fc*/
  v55[119] = 55; /*0xfffcf206*/
  v55[120] = 56; /*0xfffcf210*/
  v55[121] = 57; /*0xfffcf21a*/
  v55[122] = 58; /*0xfffcf224*/
  v55[123] = 59; /*0xfffcf22e*/
  v55[124] = 60; /*0xfffcf235*/
  v55[125] = 61; /*0xfffcf23c*/
  v55[126] = 62; /*0xfffcf243*/
  v55[127] = 63; /*0xfffcf24a*/
  v55[128] = 64; /*0xfffcf251*/
  v73[0] = 32; /*0xfffcf258*/
  v73[1] = 30; /*0xfffcf25c*/
  v73[2] = 34; /*0xfffcf260*/
  v73[3] = 28; /*0xfffcf264*/
  v73[4] = 36; /*0xfffcf268*/
  v73[5] = 26; /*0xfffcf26c*/
  v73[6] = 38; /*0xfffcf270*/
  v73[7] = 24; /*0xfffcf274*/
  v73[8] = 40; /*0xfffcf278*/
  sub_FFFC766F(a1, 0, 3u); /*0xfffcf27c*/
  LOBYTE(v76) = 0; /*0xfffcf284*/
  do
  {
    LOBYTE(v78) = 0; /*0xfffcf287*/
    do
    {
      if ( a1[3755] && a1[3758] )
      {
        LOBYTE(v86) = 0; /*0xfffcf2a8*/
        v1 = 0; /*0xfffcf2ab*/
        v2 = (int *)(a1 + 7175); /*0xfffcf2ad*/
        v85 = (int)(a1 + 5574); /*0xfffcf2b3*/
        do
        {
          if ( a1[v1 + 5512] )
          {
            v3 = sub_FFFC4E96((int)a1, a1[6997], v86 + 4, 0, 0x7Cu); /*0xfffcf2d4*/
            v4 = (unsigned __int8)v78; /*0xfffcf2d9*/
            *((_BYTE *)v2 - 87) = v3; /*0xfffcf2dd*/
            v5 = 184 * (unsigned __int8)v76; /*0xfffcf2e4*/
            if ( a1[32 * v4 + 5630 + v5 + v1] )
            {
              if ( !*(_BYTE *)(v85 + v5 + 2) )
              {
                v44 = *(_BYTE *)(v85 + v5 + 12) == 0; /*0xfffcf306*/
                v6 = a1[3733]; /*0xfffcf30a*/
                if ( v44 )
                  v7 = v6 != 0 ? 511 : 255;
                else
                  v7 = v6 != 0 ? 0x3FFFF : 130815;
                *v2 = v7; /*0xfffcf330*/
              }
            }
          }
          LOBYTE(v86) = v86 + 1; /*0xfffcf332*/
          v85 += 430; /*0xfffcf33a*/
          v1 += 430; /*0xfffcf33d*/
          v2 += 267; /*0xfffcf33f*/
        }
        while ( (unsigned __int8)v86 < 3u );
      }
      LOBYTE(v79) = 0; /*0xfffcf34f*/
      do
      {
        v8 = 3049 * (unsigned __int8)v79; /*0xfffcf358*/
        v44 = a1[v8 + 3755] == 0; /*0xfffcf35e*/
        v69 = (unsigned __int8)v79; /*0xfffcf365*/
        v70 = v8; /*0xfffcf368*/
        if ( !v44 && a1[v8 + 3758] )
        {
          v9 = a1[3297 * (unsigned __int8)v79 + 6997]; /*0xfffcf387*/
          v82 = &a1[3297 * (unsigned __int8)v79]; /*0xfffcf38d*/
          LOBYTE(v80) = v9; /*0xfffcf390*/
          LOBYTE(v86) = 0; /*0xfffcf393*/
          while ( 2 )
          {
            v77 = (unsigned __int8)v86; /*0xfffcf39b*/
            v10 = 430 * (unsigned __int8)v86; /*0xfffcf3a2*/
            if ( !a1[v8 + 5512 + v10] ) /*0xfffcf3ab*/
              goto LABEL_121; /*0xfffcf3ab*/
            v63 = (unsigned __int8)v76; /*0xfffcf3bc*/
            v11 = 184 * (unsigned __int8)v76; /*0xfffcf3bf*/
            v12 = v10 + v8; /*0xfffcf3c5*/
            v74 = (int)&a1[v12 + 5574]; /*0xfffcf3d0*/
            v13 = (int)&a1[v11 + 5630 + v12]; /*0xfffcf3d3*/
            v64 = (unsigned __int8)v78; /*0xfffcf3de*/
            v14 = 32 * (unsigned __int8)v78; /*0xfffcf3e1*/
            v44 = *(_BYTE *)(v13 + v14) == 0; /*0xfffcf3e7*/
            v57 = v13 + v14; /*0xfffcf3e9*/
            if ( v44 || *(_BYTE *)(v74 + v11 + 2) ) /*0xfffcf3f5*/
              goto LABEL_121; /*0xfffcf3f9*/
            v15 = *(unsigned __int8 *)(v13 + v14 + 2); /*0xfffcf3ff*/
            v68 = (int)&a1[148 * v15 + 328]; /*0xfffcf413*/
            v72 = (int)&a1[578 * v77 + 3780 + 144 * v15 + v70]; /*0xfffcf433*/
            memset(v56, 0, sizeof(v56)); /*0xfffcf43e*/
            memset(v59, 0, sizeof(v59)); /*0xfffcf444*/
            v60[0] = 0; /*0xfffcf449*/
            v60[1] = 0; /*0xfffcf44a*/
            v61[0] = 0; /*0xfffcf44b*/
            v61[1] = 0; /*0xfffcf44c*/
            v62 = 0; /*0xfffcf44d*/
            v65[0] = 0; /*0xfffcf454*/
            v65[1] = 0; /*0xfffcf455*/
            v66[0] = 0; /*0xfffcf456*/
            v66[1] = 0; /*0xfffcf457*/
            v67 = 0; /*0xfffcf458*/
            memset(v52, 0, sizeof(v52)); /*0xfffcf465*/
            memset(v53, 0, sizeof(v53)); /*0xfffcf470*/
            v71 = (_BYTE *)(v74 + v11 + 12); /*0xfffcf479*/
            v74 = 9 - (_DWORD)v65; /*0xfffcf486*/
            v89 = 0; /*0xfffcf489*/
LABEL_23:
            v44 = *v71 == 0; /*0xfffcf48c*/
            v92 = 0; /*0xfffcf491*/
            v16 = v44 ? 9 : 18;
            v90 = v16; /*0xfffcf4a1*/
            if ( (v44 ? 0 : 9) != 0xF7 )
            {
              v83 = v68 + 6; /*0xfffcf4b0*/
              v84 = (_DWORD *)(v68 - v72); /*0xfffcf4b9*/
              v85 = 0; /*0xfffcf4bc*/
              v17 = (unsigned __int16 *)(v72 + 4); /*0xfffcf4bf*/
              do /*0xfffcf559*/
              {
                if ( a1[3733] || v92 != 8 && v92 != 17 ) /*0xfffcf4d4*/
                {
                  if ( ((1 << v85) & *(_DWORD *)&v82[1068 * v77 + 7175]) != 0 ) /*0xfffcf4f1*/
                  {
                    sub_FFFC8367( /*0xfffcf511*/
                      (int)a1,
                      v80,
                      v86,
                      (int)&a1[2 * *(unsigned __int16 *)((char *)v17 + (_DWORD)v84)
                             + 2017
                             + *(unsigned __int16 *)((char *)v17 + (_DWORD)v84)],
                      *v17,
                      0);
                    sub_FFFC8367( /*0xfffcf53e*/
                      (int)a1,
                      v80,
                      v86,
                      (int)&a1[2 * *(unsigned __int16 *)v83 + 2017 + *(unsigned __int16 *)v83],
                      *v17 + (unsigned __int8)v73[v89],
                      0);
                  }
                  v16 = v90; /*0xfffcf546*/
                }
                ++v92; /*0xfffcf549*/
                ++v85; /*0xfffcf54c*/
                v83 += 8; /*0xfffcf54f*/
                v17 += 4; /*0xfffcf553*/
              }
              while ( v92 < v16 ); /*0xfffcf559*/
            }
            sub_FFFCA805((int)a1, v76, v78, 1); /*0xfffcf568*/
            sub_FFFC7CD6((int)a1, v80); /*0xfffcf574*/
            sub_FFFC4F7F((int)a1, v80, 3u, 4u, 0x6Cu, 0); /*0xfffcf584*/
            sub_FFFC4F7F((int)a1, v80, 3u, 4u, 0x6Cu, 256); /*0xfffcf598*/
            v91 = 0; /*0xfffcf5a0*/
LABEL_33:
            v88 = 0; /*0xfffcf5a3*/
            sub_FFFC729C((int)a1, v79, 0, 4); /*0xfffcf5ad*/
            sub_FFFCC8A8((int)a1, v79, 0); /*0xfffcf5b7*/
            v18 = 0; /*0xfffcf5c2*/
            v92 = 0; /*0xfffcf5c7*/
            v83 = v72 + 4; /*0xfffcf5ca*/
LABEL_34:
            if ( (a1[3733] || v92 != 8) && v91 < 0x82u ) /*0xfffcf5eb*/
            {
              sub_FFFC4FB2((int)a1, v80, 3u, 4u, 0xACu, v18 << 19); /*0xfffcf604*/
              v19 = sub_FFFC4E96((int)a1, v80, 3u, 4u, 0xCCu); /*0xfffcf616*/
              v20 = (unsigned __int8)v73[v89]; /*0xfffcf61f*/
              v90 = v19; /*0xfffcf624*/
              v21 = *(unsigned __int16 *)v83; /*0xfffcf62a*/
              v85 = v91; /*0xfffcf631*/
              if ( v21 + v20 + 4 * v55[v91] > 511 /*0xfffcf65d*/
                && (*v71 && *((_BYTE *)v66 + v18 + 1) == 1 || *((_BYTE *)v65 + v18) == 1) )
              {
                v90 = -1; /*0xfffcf65f*/
              }
              v22 = v85; /*0xfffcf663*/
              if ( v21 + 4 * v55[v85 - 1] < 0 ) /*0xfffcf672*/
                v90 = -1; /*0xfffcf674*/
              if ( *v71 ) /*0xfffcf67b*/
              {
                if ( (v90 & 0xF0) != 0 ) /*0xfffcf687*/
                {
                  if ( *((_BYTE *)v66 + v18 + 1) == 1 ) /*0xfffcf6da*/
                  {
                    v38 = v59[v18 + 9] <= 0x24u; /*0xfffcf6e3*/
                    v56[v18 + 9] = v59[v18 + 9]; /*0xfffcf6ee*/
                    *((_BYTE *)v61 + v18 + 1) = v91; /*0xfffcf6f6*/
                    if ( !v38 ) /*0xfffcf6fa*/
                    {
                      v56[v18 + 9] = 36; /*0xfffcf6fc*/
                      *((_BYTE *)v61 + v18 + 1) = v91 + LOBYTE(v56[v18 + 9]) - LOBYTE(v59[v18 + 9]) - 1; /*0xfffcf710*/
                    }
                    v84 = &v82[1068 * v77 + 7175]; /*0xfffcf727*/
                    v24 = 1 << ((unsigned __int8)&v64 + 4 + v74 + v18); /*0xfffcf737*/
                    *((_BYTE *)v66 + v18 + 1) = 0; /*0xfffcf739*/
                    v59[v18 + 9] = 0; /*0xfffcf73d*/
                    *v84 &= ~v24; /*0xfffcf749*/
                    v25 = v56[v18 + 9]; /*0xfffcf74b*/
                    if ( v52[v18 + 9] < v25 ) /*0xfffcf75a*/
                    {
                      v52[v18 + 9] = v25; /*0xfffcf75c*/
                      v53[v18 + 9] = *((unsigned __int8 *)v61 + v18 + 1); /*0xfffcf765*/
                    }
                    v22 = v85; /*0xfffcf76d*/
                  }
                }
                else
                {
                  v23 = (char *)v66 + v18 + 1; /*0xfffcf689*/
                  if ( !*((_BYTE *)v66 + v18 + 1) ) /*0xfffcf68d*/
                    *v23 = 1; /*0xfffcf691*/
                  if ( *v23 == 1 ) /*0xfffcf697*/
                  {
                    v87 = *((_BYTE *)v61 + v18 + 1); /*0xfffcf6a1*/
                    if ( v22 - v87 <= 2 ) /*0xfffcf6ae*/
                      v59[v18 + 9] = v91 + v56[v18 + 9] - v87; /*0xfffcf6c6*/
                    ++v59[v18 + 9]; /*0xfffcf6cb*/
                  }
                }
                if ( (v90 & 0xF) == 0 ) /*0xfffcf774*/
                {
LABEL_59:
                  v26 = (char *)v65 + v18; /*0xfffcf776*/
                  if ( !*((_BYTE *)v65 + v18) ) /*0xfffcf77a*/
                    *v26 = 1; /*0xfffcf77e*/
                  if ( *v26 == 1 ) /*0xfffcf784*/
                  {
                    v27 = *((_BYTE *)v60 + v18); /*0xfffcf78a*/
                    if ( v22 - v27 <= 2 ) /*0xfffcf796*/
                      v59[v18] = v91 + v56[v18] - v27; /*0xfffcf7ad*/
                    ++v59[v18]; /*0xfffcf7b2*/
                  }
                  goto LABEL_76; /*0xfffcf7b7*/
                }
                if ( *((_BYTE *)v65 + v18) != 1 ) /*0xfffcf7c1*/
                  goto LABEL_76; /*0xfffcf7c1*/
                v28 = v18; /*0xfffcf7c7*/
                v29 = v59[v18]; /*0xfffcf7cf*/
                v56[v18] = v29; /*0xfffcf7d8*/
                v30 = v91; /*0xfffcf7dd*/
                *((_BYTE *)v60 + v18) = v91; /*0xfffcf7e0*/
                if ( v29 > 0x24u ) /*0xfffcf7e4*/
                {
                  v56[v18] = 36; /*0xfffcf7e8*/
                  *((_BYTE *)v60 + v18) = LOBYTE(v56[v18]) + v30 - v29 - 1; /*0xfffcf7f5*/
                }
                v84 = &v82[1068 * v77 + 7175]; /*0xfffcf80c*/
                v75 = ~(1 << v18); /*0xfffcf818*/
                v31 = v75; /*0xfffcf81b*/
LABEL_74:
                *v84 &= v31; /*0xfffcf888*/
                v34 = v56[v28]; /*0xfffcf88d*/
                v35 = v52[v28] < v34; /*0xfffcf899*/
                *((_BYTE *)v65 + v18) = 0; /*0xfffcf89c*/
                v59[v28] = 0; /*0xfffcf8a0*/
                if ( v35 ) /*0xfffcf8a5*/
                {
                  v52[v28] = v34; /*0xfffcf8a7*/
                  v53[v28] = *((unsigned __int8 *)v60 + v18); /*0xfffcf8b0*/
                }
              }
              else
              {
                if ( !v90 ) /*0xfffcf822*/
                  goto LABEL_59; /*0xfffcf822*/
                if ( *((_BYTE *)v65 + v18) == 1 ) /*0xfffcf82d*/
                {
                  v28 = v18; /*0xfffcf833*/
                  v38 = v59[v18] <= 0x24u; /*0xfffcf836*/
                  v56[v18] = v59[v18]; /*0xfffcf841*/
                  v32 = v91; /*0xfffcf846*/
                  *((_BYTE *)v60 + v18) = v91; /*0xfffcf849*/
                  if ( !v38 ) /*0xfffcf84d*/
                  {
                    v33 = v32 - LOBYTE(v59[v18]); /*0xfffcf84f*/
                    v56[v18] = 36; /*0xfffcf853*/
                    *((_BYTE *)v60 + v18) = LOBYTE(v56[v18]) + v33 - 1; /*0xfffcf860*/
                  }
                  v84 = &v82[1068 * v77 + 7175]; /*0xfffcf877*/
                  v75 = ~(1 << v18); /*0xfffcf883*/
                  v31 = v75; /*0xfffcf886*/
                  goto LABEL_74; /*0xfffcf886*/
                }
              }
            }
LABEL_76:
            ++v92; /*0xfffcf8b8*/
            v83 += 8; /*0xfffcf8bb*/
            ++v18; /*0xfffcf8bf*/
            if ( v92 >= 9u )
            {
              v36 = *v71 == 0 ? 9 : 18;
              v90 = v36; /*0xfffcf8d8*/
              do /*0xfffcfa64*/
              {
                v87 = 0; /*0xfffcf8dd*/
                v92 = 0; /*0xfffcf8e0*/
                if ( !v36 ) /*0xfffcf8e3*/
                  goto LABEL_94; /*0xfffcf8e3*/
                while ( !a1[3733] && (v92 == 8 || v92 == 17) ) /*0xfffcf8ff*/
                {
LABEL_90:
                  if ( ++v92 >= v90 ) /*0xfffcfa42*/
                    goto LABEL_94; /*0xfffcfa42*/
                }
                v37 = v91 + 1; /*0xfffcf909*/
                v38 = v37 < 130; /*0xfffcf90c*/
                v88 = 1; /*0xfffcf912*/
                if ( v91 == 129 ) /*0xfffcf916*/
                {
                  v88 = *(_DWORD *)&v82[1068 * v77 + 7175] != 0; /*0xfffcf92d*/
                  v38 = v37 < 130; /*0xfffcf930*/
                }
                if ( !v38 ) /*0xfffcf936*/
                  goto LABEL_93; /*0xfffcf936*/
                v39 = 8 * v92; /*0xfffcf943*/
                v85 = v39 + v72 + 4; /*0xfffcf94a*/
                v75 = *(unsigned __int16 *)v85; /*0xfffcf950*/
                v40 = &v55[v91]; /*0xfffcf953*/
                v41 = (unsigned __int16)v75 + 4 * *v40; /*0xfffcf95f*/
                if ( v41 >= 0 ) /*0xfffcf964*/
                {
                  v81 = v73[v89]; /*0xfffcf972*/
                  if ( v41 + v81 <= 511 ) /*0xfffcf980*/
                  {
                    v42 = 4 * *(_WORD *)v40; /*0xfffcf98e*/
                    v43 = v39 + v68; /*0xfffcf992*/
                    LOWORD(v58) = v42; /*0xfffcf998*/
                    sub_FFFC8367( /*0xfffcf9c1*/
                      (int)a1,
                      v82[6997],
                      v86,
                      (int)&a1[2 * *(unsigned __int16 *)(v39 + v68 + 4) + 2017 + *(unsigned __int16 *)(v39 + v68 + 4)],
                      (unsigned __int16)(v75 + v42),
                      0);
                    sub_FFFC8367( /*0xfffcf9f7*/
                      (int)a1,
                      v82[6997],
                      v86,
                      (int)&a1[2 * *(unsigned __int16 *)(v43 + 6) + 2017 + *(unsigned __int16 *)(v43 + 6)],
                      (unsigned __int16)(v58 + *(_WORD *)v85 + v81),
                      0);
                    if ( (a1[v70 + 3760] & 4) != 0 ) /*0xfffcfa0b*/
                    {
                      sub_FFFCC854((int)a1, v79, v86, v76, v78); /*0xfffcfa1a*/
                      if ( !a1[v70 + 3757] ) /*0xfffcfa27*/
                        sub_FFFCA83C((int)a1, 1u); /*0xfffcfa32*/
                    }
                    goto LABEL_90; /*0xfffcfa32*/
                  }
                }
                v87 = 1; /*0xfffcfa4a*/
LABEL_93:
                ++v91; /*0xfffcfa4e*/
LABEL_94:
                v36 = v90; /*0xfffcfa51*/
                if ( v88 && v92 == v90 ) /*0xfffcfa5c*/
                  ++v91; /*0xfffcfa5e*/
              }
              while ( v87 ); /*0xfffcfa64*/
              v44 = v91 == 0x82; /*0xfffcfa6a*/
              if ( v91 < 0x82u ) /*0xfffcfa6e*/
              {
                sub_FFFC4F4E((int)a1, v80, 3u, 4u, 0xCCu, 255); /*0xfffcfa82*/
                sub_FFFC4FB2((int)a1, v80, 3u, 4u, 0xC4u, -1); /*0xfffcfa96*/
                v44 = v91 == 0x82; /*0xfffcfa9e*/
              }
              if ( v44 && !*(_DWORD *)&v82[1068 * v77 + 7175] ) /*0xfffcfab4*/
              {
                v92 = 0; /*0xfffcfac4*/
                if ( v90 ) /*0xfffcfac7*/
                {
                  v85 = v68 + 6; /*0xfffcfad3*/
                  v84 = (_DWORD *)(v68 - v72); /*0xfffcfadc*/
                  v83 = 0; /*0xfffcfadf*/
                  v45 = (_WORD *)(v72 + 4); /*0xfffcfae2*/
                  while ( 1 ) /*0xfffcfae5*/
                  {
                    if ( !a1[3733] && (v92 == 8 || v92 == 17) ) /*0xfffcfafb*/
                      goto LABEL_114; /*0xfffcfafb*/
                    v46 = 4 * (v53[2 * (unsigned __int16)v53[v83] + 16] - (v52[v83] >> 1)); /*0xfffcfb29*/
                    if ( *(_BYTE *)(v57 + 3) != 1 ) /*0xfffcfb30*/
                      break; /*0xfffcfb30*/
                    if ( (_BYTE)v78 && *(_BYTE *)(v57 + 2) == *(_BYTE *)(v57 - 30) ) /*0xfffcfb41*/
                    {
                      v47 = v46 + *v45; /*0xfffcfb49*/
                      v48 = v83 + 18 * (v64 + 4 * (v63 + 2 * (v69 + v77 + 2 * v69))); /*0xfffcfb66*/
                      v51[v48] = v47; /*0xfffcfb69*/
                      v49 = (v47 + (unsigned __int16)v51[v48 + 414]) / 2; /*0xfffcfb81*/
                      *v45 = v49; /*0xfffcfb83*/
LABEL_113:
                      sub_FFFC8367( /*0xfffcfbbe*/
                        (int)a1,
                        v82[6997],
                        v86,
                        (int)&a1[2 * *(unsigned __int16 *)((char *)v84 + (_DWORD)v45)
                               + 2017
                               + *(unsigned __int16 *)((char *)v84 + (_DWORD)v45)],
                        (unsigned __int16)v49,
                        0);
                      sub_FFFC8367( /*0xfffcfc1b*/
                        (int)a1,
                        v82[6997],
                        v86,
                        (int)&a1[2 * *(unsigned __int16 *)v85 + 2017 + *(unsigned __int16 *)v85],
                        (unsigned __int16)(*v45 + (unsigned __int8)v73[v89]),
                        0);
                      goto LABEL_114; /*0xfffcfc1b*/
                    }
                    v51[288 * v69 + 432 + 144 * v69 + 144 * v77 + 72 * v63 + 18 * v64 + v83] = v46 + *v45; /*0xfffcfbae*/
LABEL_114:
                    ++v92; /*0xfffcfc23*/
                    ++v83; /*0xfffcfc29*/
                    v85 += 8; /*0xfffcfc2c*/
                    v45 += 4; /*0xfffcfc30*/
                    if ( v92 >= v90 ) /*0xfffcfc36*/
                      goto LABEL_115; /*0xfffcfc36*/
                  }
                  *v45 += v46; /*0xfffcfbb8*/
                  LOWORD(v49) = *v45; /*0xfffcfbbb*/
                  goto LABEL_113; /*0xfffcfbbb*/
                }
              }
LABEL_115:
              sub_FFFC85B4((int)a1, v79, v86); /*0xfffcfc3c*/
              if ( !v88 || v91 >= 0x82u ) /*0xfffcfc55*/
              {
                ++v89; /*0xfffcfc5b*/
                if ( !v88 || v89 >= 9u ) /*0xfffcfc68*/
                {
                  if ( v88 ) /*0xfffcfc71*/
                    sub_FFFD9481(a1, 27, 2, v79, v86, v76, v78); /*0xfffcfc84*/
LABEL_121:
                  LOBYTE(v86) = v86 + 1; /*0xfffcfc8c*/
                  if ( (unsigned __int8)v86 >= 3u ) /*0xfffcfc93*/
                    break; /*0xfffcfc93*/
                  v8 = v70; /*0xfffcf398*/
                  continue; /*0xfffcf398*/
                }
                goto LABEL_23; /*0xfffcfc68*/
              }
              goto LABEL_33; /*0xfffcfc55*/
            }
            goto LABEL_34; /*0xfffcf8c4*/
          }
        }
        LOBYTE(v79) = v79 + 1; /*0xfffcfc99*/
      }
      while ( !(_BYTE)v79 );
      LOBYTE(v78) = v78 + 1; /*0xfffcfca6*/
    }
    while ( (unsigned __int8)v78 < 4u );
    LOBYTE(v76) = v76 + 1; /*0xfffcfcb3*/
  }
  while ( (unsigned __int8)v76 < 2u );
  if ( a1[3755] && a1[3758] ) /*0xfffcfcc8*/
    sub_FFFC4FB2((int)a1, a1[6997], 3u, 4u, 0xBCu, 0); /*0xfffcfce4*/
  sub_FFFC7CA8(a1); /*0xfffcfcf1*/
  return 0; /*0xfffcfcf8*/
}

/* 0xfffcfd02 sub_FFFCFD02 */
int __cdecl sub_FFFCFD02(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  char v5; // al
  int v6; // eax
  char v7; // al
  _BYTE *v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  char v15; // al
  unsigned __int8 v16; // al
  unsigned __int16 *v17; // ebx
  unsigned __int16 *v18; // edi
  int v19; // ebx
  char v20; // al
  _DWORD *v21; // edx
  bool v22; // zf
  char v23; // al
  int v24; // eax
  unsigned __int16 v25; // dx
  _DWORD *v26; // ecx
  int v27; // edi
  __int16 v28; // bx
  int v29; // edi
  _WORD *v30; // edi
  int v31; // ebx
  _DWORD v33[4]; // [esp+10h] [ebp-64h] BYREF
  _BYTE v34[12]; // [esp+20h] [ebp-54h]
  _BYTE *v35; // [esp+2Ch] [ebp-48h]
  int v36; // [esp+30h] [ebp-44h]
  int v37; // [esp+34h] [ebp-40h]
  int v38; // [esp+38h] [ebp-3Ch]
  _BYTE *v39; // [esp+3Ch] [ebp-38h]
  int v40; // [esp+40h] [ebp-34h]
  int v41; // [esp+44h] [ebp-30h]
  _BYTE *v42; // [esp+48h] [ebp-2Ch]
  int v43; // [esp+4Ch] [ebp-28h]
  int v44; // [esp+50h] [ebp-24h]
  int v45; // [esp+54h] [ebp-20h]
  _DWORD *v46; // [esp+58h] [ebp-1Ch]
  int v47; // [esp+5Dh] [ebp-17h]
  int v48; // [esp+61h] [ebp-13h]
  int v49; // [esp+65h] [ebp-Fh]
  int v50; // [esp+69h] [ebp-Bh]
  unsigned __int8 v51; // [esp+6Dh] [ebp-7h]
  char v52; // [esp+6Eh] [ebp-6h]
  char v53; // [esp+6Fh] [ebp-5h]
  unsigned __int8 v54; // [esp+70h] [ebp-4h]
  unsigned __int8 v55; // [esp+71h] [ebp-3h]
  unsigned __int8 v56; // [esp+72h] [ebp-2h]
  unsigned __int8 v57; // [esp+73h] [ebp-1h]

  v33[1] = -1; /*0xfffcfd0c*/
  v33[0] = 1; /*0xfffcfd1d*/
  v33[2] = 2; /*0xfffcfd24*/
  v33[3] = -2; /*0xfffcfd27*/
  v34[0] = 32; /*0xfffcfd2e*/
  v34[1] = 30; /*0xfffcfd32*/
  v34[2] = 34; /*0xfffcfd36*/
  v34[3] = 28; /*0xfffcfd3a*/
  v34[4] = 36; /*0xfffcfd3e*/
  v34[5] = 26; /*0xfffcfd42*/
  v34[6] = 38; /*0xfffcfd46*/
  v34[7] = 24; /*0xfffcfd4a*/
  v34[8] = 40; /*0xfffcfd4e*/
  sub_FFFC7365((_BYTE *)a1, 0, 2u); /*0xfffcfd52*/
  LOBYTE(v47) = 0; /*0xfffcfd5a*/
  do
  {
    LOBYTE(v48) = 0; /*0xfffcfd5e*/
    do
    {
      if ( !*(_BYTE *)(a1 + 3755) ) /*0xfffcfd62*/
        goto LABEL_78; /*0xfffcfd62*/
      if ( *(_BYTE *)(a1 + 3758) )
      {
        v45 = a1 + 7175; /*0xfffcfd82*/
        v1 = 0; /*0xfffcfd8b*/
        v46 = (_DWORD *)(a1 + 5574); /*0xfffcfd8d*/
        v36 = 3; /*0xfffcfd90*/
        do
        {
          if ( *(_BYTE *)(v1 + a1 + 5512) )
          {
            v2 = 46 * (unsigned __int8)v47; /*0xfffcfda5*/
            v3 = v2 * 4 + v1 + a1 + 5630; /*0xfffcfdae*/
            v4 = 32 * (unsigned __int8)v48; /*0xfffcfdb9*/
            if ( *(_BYTE *)(v4 + v3) )
            {
              if ( !BYTE2(v46[v2]) && (!(_BYTE)v48 || *(_BYTE *)(v4 + v3 + 2) != *(_BYTE *)(v4 + v3 - 30)) )
              {
                v22 = LOBYTE(v46[v2 + 3]) == 0; /*0xfffcfddf*/
                v5 = *(_BYTE *)(a1 + 3733); /*0xfffcfde7*/
                if ( v22 )
                  v6 = v5 != 0 ? 511 : 255;
                else
                  v6 = v5 != 0 ? 0x3FFFF : 130815;
                *(_DWORD *)v45 = v6; /*0xfffcfe0d*/
              }
            }
          }
          v45 += 1068; /*0xfffcfe0f*/
          v46 = (_DWORD *)((char *)v46 + 430); /*0xfffcfe1b*/
          v1 += 430; /*0xfffcfe1e*/
          --v36; /*0xfffcfe20*/
        }
        while ( v36 );
      }
      if ( !*(_BYTE *)(a1 + 3755) || !*(_BYTE *)(a1 + 3758) ) /*0xfffcfe36*/
        goto LABEL_78; /*0xfffcfe3d*/
      v7 = *(_BYTE *)(a1 + 6997); /*0xfffcfe43*/
      v37 = 0; /*0xfffcfe49*/
      v38 = 0; /*0xfffcfe4d*/
      LOBYTE(v49) = v7; /*0xfffcfe51*/
      v39 = (_BYTE *)(a1 + 5512); /*0xfffcfe5a*/
      v8 = (_BYTE *)(a1 + 5574); /*0xfffcfe63*/
      v44 = -5574 - a1; /*0xfffcfe70*/
      LOBYTE(v50) = 0; /*0xfffcfe73*/
      v36 = a1 + 7175; /*0xfffcfe77*/
      v35 = (_BYTE *)(a1 + 5574); /*0xfffcfe7a*/
      do
      {
        if ( !*v39 ) /*0xfffcfe80*/
          goto LABEL_77; /*0xfffcfe80*/
        v9 = 184 * (unsigned __int8)v47; /*0xfffcfe90*/
        v10 = (int)&v8[v9 + 5630 + v44 + a1]; /*0xfffcfe9a*/
        v11 = 32 * (unsigned __int8)v48; /*0xfffcfea5*/
        if ( !*(_BYTE *)(v11 + v10) || v8[v9 + 2] ) /*0xfffcfeb2*/
          goto LABEL_77; /*0xfffcfeb7*/
        v12 = *(unsigned __int8 *)(v11 + v10 + 2); /*0xfffcfebd*/
        v42 = &v8[v9 + 12]; /*0xfffcfed7*/
        v13 = 148 * v12 + a1 + 328; /*0xfffcfedd*/
        v14 = v38 + 144 * v12 + a1 + 3780; /*0xfffcfee4*/
        v40 = v13; /*0xfffcfeeb*/
        v41 = v14; /*0xfffcfeee*/
        v54 = 0; /*0xfffcfef1*/
        v46 = (_DWORD *)v36; /*0xfffcfef5*/
        while ( 2 )
        {
          v22 = *v42 == 0; /*0xfffcff00*/
          v57 = 0; /*0xfffcff06*/
          v15 = v22 ? 0 : 9;
          v22 = v15 == -9; /*0xfffcff11*/
          v16 = v15 + 9; /*0xfffcff11*/
          v55 = v16; /*0xfffcff13*/
          if ( !v22 ) /*0xfffcff16*/
          {
            v43 = 0; /*0xfffcff1c*/
            v45 = v13 - v14; /*0xfffcff23*/
            v17 = (unsigned __int16 *)(v13 + 6); /*0xfffcff26*/
            v18 = (unsigned __int16 *)(v14 + 4); /*0xfffcff29*/
            do /*0xfffcffbe*/
            {
              if ( *(_BYTE *)(a1 + 3733) || v57 != 8 && v57 != 17 ) /*0xfffcff3f*/
              {
                v46 = (_DWORD *)(v37 + a1 + 7175); /*0xfffcff53*/
                if ( ((1 << v43) & *v46) != 0 ) /*0xfffcff58*/
                {
                  sub_FFFC8367( /*0xfffcff79*/
                    a1,
                    v49,
                    v50,
                    *(unsigned __int16 *)((char *)v18 + v45) + a1 + 2 * *(unsigned __int16 *)((char *)v18 + v45) + 2017,
                    *v18,
                    0);
                  sub_FFFC8367(a1, v49, v50, *v17 + a1 + 2 * *v17 + 2017, *v18 + (unsigned __int8)v34[v54], 0); /*0xfffcffa4*/
                }
                v16 = v55; /*0xfffcffac*/
              }
              ++v57; /*0xfffcffaf*/
              ++v43; /*0xfffcffb2*/
              v18 += 4; /*0xfffcffb5*/
              v17 += 4; /*0xfffcffb8*/
            }
            while ( v57 < v16 ); /*0xfffcffbe*/
          }
          v19 = 0; /*0xfffcffc4*/
          sub_FFFCA7CE(a1, v47, v48, 0); /*0xfffcffce*/
          sub_FFFC7CD6(a1, v49); /*0xfffcffda*/
          sub_FFFC4F7F(a1, v49, 3u, 4u, 0x6Cu, 0); /*0xfffcffea*/
          sub_FFFC4F7F(a1, v49, 3u, 4u, 0x6Cu, 256); /*0xfffcfffe*/
          v56 = 0; /*0xfffd0006*/
          do
          {
            v53 = 0; /*0xfffd000d*/
            sub_FFFC729C(a1, 0, 0, 0); /*0xfffd0011*/
            sub_FFFCC8A8(a1, 0, 0); /*0xfffd0019*/
            v57 = 0; /*0xfffd0021*/
            do /*0xfffd00a4*/
            {
              if ( *(_BYTE *)(a1 + 3733) || v57 != 8 ) /*0xfffd0032*/
              {
                v45 = 1 << (v19 + 9); /*0xfffd0040*/
                if ( ((v45 | (1 << v19)) & *v46) != 0 ) /*0xfffd004e*/
                {
                  sub_FFFC4FB2(a1, v49, 3u, 4u, 0xACu, v19 << 19); /*0xfffd0063*/
                  v20 = sub_FFFC4E96(a1, v49, 3u, 4u, 0xCCu); /*0xfffd0075*/
                  if ( *v42 ) /*0xfffd0080*/
                  {
                    if ( (v20 & 0xF0) == 0 ) /*0xfffd0087*/
                      *v21 &= ~v45; /*0xfffd008e*/
                    v22 = (v20 & 0xF) == 0; /*0xfffd0090*/
                  }
                  else
                  {
                    v22 = v20 == 0; /*0xfffd0094*/
                  }
                  if ( v22 ) /*0xfffd0096*/
                    *v21 &= ~(1 << v19); /*0xfffd009a*/
                }
              }
              ++v57; /*0xfffd009c*/
              ++v19; /*0xfffd009f*/
            }
            while ( v57 < 9u ); /*0xfffd00a4*/
            v23 = *v42 == 0 ? 9 : 18;
            v55 = v23; /*0xfffd00b9*/
            while ( 2 ) /*0xfffd00bc*/
            {
              v52 = 0; /*0xfffd00bc*/
              v57 = 0; /*0xfffd00c2*/
              if ( !v23 ) /*0xfffd00c6*/
                goto LABEL_57; /*0xfffd00c6*/
              while ( 1 ) /*0xfffd00cc*/
              {
                if ( ((1 << v57) & *v46) == 0 ) /*0xfffd00da*/
                  goto LABEL_53; /*0xfffd00da*/
                v53 = 1; /*0xfffd00ea*/
                if ( v56 + 1 >= 5 ) /*0xfffd00ee*/
                  break; /*0xfffd00ee*/
                v24 = 8 * v57; /*0xfffd00f9*/
                v25 = *(_WORD *)(v41 + v24 + 4); /*0xfffd0100*/
                v43 = v41 + v24 + 4; /*0xfffd0103*/
                v26 = &v33[v56]; /*0xfffd0106*/
                v27 = v25 + (*v26 << 7); /*0xfffd0112*/
                if ( v27 < 0 || (v51 = v34[v54], v27 + v51 > 511) ) /*0xfffd0130*/
                {
                  ++v56; /*0xfffd01b7*/
                  v52 = 1; /*0xfffd01ba*/
                  goto LABEL_58; /*0xfffd01be*/
                }
                v28 = *(_WORD *)v26 << 7; /*0xfffd013e*/
                v29 = v40 + v24; /*0xfffd0142*/
                sub_FFFC8367( /*0xfffd016a*/
                  a1,
                  *(_BYTE *)(a1 + 6997),
                  v50,
                  *(unsigned __int16 *)(v40 + v24 + 4) + a1 + 2 * *(unsigned __int16 *)(v40 + v24 + 4) + 2017,
                  (unsigned __int16)(v28 + v25),
                  0);
                sub_FFFC8367( /*0xfffd019e*/
                  a1,
                  *(_BYTE *)(a1 + 6997),
                  v50,
                  *(unsigned __int16 *)(v29 + 6) + a1 + 2 * *(unsigned __int16 *)(v29 + 6) + 2017,
                  (unsigned __int16)(v28 + *(_WORD *)v43 + v51),
                  0);
LABEL_53:
                ++v57; /*0xfffd01a6*/
                v23 = v55; /*0xfffd01a9*/
                if ( v57 >= v55 ) /*0xfffd01af*/
                  goto LABEL_57; /*0xfffd01af*/
              }
              ++v56; /*0xfffd01c0*/
LABEL_57:
              if ( v53 ) /*0xfffd01c7*/
              {
LABEL_58:
                v23 = v55; /*0xfffd01c9*/
                if ( v57 == v55 ) /*0xfffd01cf*/
                  ++v56; /*0xfffd01d1*/
                if ( !v52 ) /*0xfffd01d8*/
                  break; /*0xfffd01d8*/
                continue; /*0xfffd01d8*/
              }
              break;
            }
            if ( *v46 ) /*0xfffd01e1*/
            {
              sub_FFFC4F4E(a1, v49, 3u, 4u, 0xCCu, 255); /*0xfffd01f8*/
              sub_FFFC4FB2(a1, v49, 3u, 4u, 0xC4u, -1); /*0xfffd020c*/
            }
            else if ( v56 ) /*0xfffd021a*/
            {
              v57 = 0; /*0xfffd021e*/
              if ( v23 ) /*0xfffd0222*/
              {
                v30 = (_WORD *)(v41 + 4); /*0xfffd022a*/
                v31 = v40 - v41; /*0xfffd022d*/
                do /*0xfffd0277*/
                {
                  if ( *(_BYTE *)(a1 + 3733) || v57 != 8 && v57 != 17 ) /*0xfffd0242*/
                    *v30 = sub_FFFC4FE3( /*0xfffd0268*/
                             a1,
                             *(_BYTE *)(a1 + 6997),
                             v50,
                             *(unsigned __int16 *)((char *)v30 + v31)
                           + a1
                           + 2 * *(unsigned __int16 *)((char *)v30 + v31)
                           + 2017);
                  ++v57; /*0xfffd026b*/
                  v30 += 4; /*0xfffd0271*/
                }
                while ( v57 < v55 ); /*0xfffd0277*/
              }
            }
            v19 = 0; /*0xfffd027c*/
            sub_FFFC85B4(a1, 0, v50); /*0xfffd0280*/
          }
          while ( v53 == 1 && v56 < 5u );
          ++v54; /*0xfffd0298*/
          if ( v53 == 1 && v54 < 9u ) /*0xfffd02a5*/
          {
            v14 = v41; /*0xfffcfefa*/
            v13 = v40; /*0xfffcfefd*/
            continue; /*0xfffcfefd*/
          }
          break;
        }
        if ( v53 ) /*0xfffd02af*/
          sub_FFFD9481(a1, 27, 2, 0, v50, v47, v48); /*0xfffd02c1*/
LABEL_77:
        LOBYTE(v50) = v50 + 1; /*0xfffd02c9*/
        v38 += 578; /*0xfffd02cf*/
        v39 += 430; /*0xfffd02db*/
        v8 = v35 + 430; /*0xfffd02de*/
        v37 += 1068; /*0xfffd02e5*/
        v36 += 1068; /*0xfffd02e8*/
        v35 += 430; /*0xfffd02ef*/
      }
      while ( (unsigned __int8)v50 < 3u );
LABEL_78:
      LOBYTE(v48) = v48 + 1; /*0xfffd02f8*/
    }
    while ( (unsigned __int8)v48 < 4u );
    LOBYTE(v47) = v47 + 1; /*0xfffd0305*/
  }
  while ( (unsigned __int8)v47 < 2u );
  sub_FFFC7CA8((_BYTE *)a1); /*0xfffd0317*/
  return 0; /*0xfffd031e*/
}

/* 0xfffd0325 sub_FFFD0325 */
void __cdecl sub_FFFD0325(
        _BYTE *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        int *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        char a9,
        unsigned __int8 a10,
        char a11)
{
  int v11; // eax
  _BYTE *v12; // edi
  _BYTE *v13; // ebx
  unsigned __int8 v14; // [esp+Dh] [ebp-Bh]
  char v15; // [esp+11h] [ebp-7h]
  char v16; // [esp+11h] [ebp-7h]
  char v17; // [esp+15h] [ebp-3h]
  bool v18; // [esp+16h] [ebp-2h]
  char v19; // [esp+17h] [ebp-1h]

  v18 = 0; /*0xfffd033f*/
  v19 = 0; /*0xfffd0343*/
  if ( (a9 == 0 ? 0 : 7) == 0xFF )
  {
LABEL_24:
    if ( a1[3755] && a1[3758] ) /*0xfffd0492*/
    {
      *a5 = sub_FFFC4EEF((int)a1, a1[6997], 3u, 4u, 0x80u) & 0x20000000; /*0xfffd04be*/
      v16 = 0; /*0xfffd04c6*/
      v13 = a1 + 5512; /*0xfffd04ca*/
      do /*0xfffd04ec*/
      {
        if ( *v13 ) /*0xfffd04cc*/
          sub_FFFC85B4((int)a1, 0, v16); /*0xfffd04d7*/
        ++v16; /*0xfffd04df*/
        v13 += 430; /*0xfffd04e2*/
      }
      while ( (unsigned __int8)v16 < 3u ); /*0xfffd04ec*/
    }
  }
  else
  {
    while ( !v18 )
    {
      if ( a1[3755] ) /*0xfffd0357*/
      {
        if ( a1[3758] ) /*0xfffd0364*/
        {
          v14 = a1[6997]; /*0xfffd037e*/
          v17 = sub_FFFC797C((int)a1, 0, a2, a3, 1, a6, a7, a8, a10); /*0xfffd039a*/
          if ( (a11 & 1) == 0 ) /*0xfffd039d*/
            v17 = 0; /*0xfffd039f*/
          if ( v17 ) /*0xfffd03a7*/
          {
            if ( a9 ) /*0xfffd03ad*/
              sub_FFFC4F4E((int)a1, v14, 3u, 4u, 0xB4u, 1 << v19); /*0xfffd03c6*/
            sub_FFFC729C((int)a1, 0, a4, 0); /*0xfffd03d4*/
          }
        }
        if ( a1[3755] && a1[3758] && v17 ) /*0xfffd03f2*/
          sub_FFFCC8A8((int)a1, 0, a4); /*0xfffd03fa*/
      }
      if ( a4 ) /*0xfffd0406*/
      {
        v18 = 1; /*0xfffd040f*/
        if ( a1[3755] ) /*0xfffd0408*/
        {
          if ( a1[3758] ) /*0xfffd0415*/
          {
            v11 = sub_FFFC4EEF((int)a1, a1[6997], 3u, 4u, 0x80u) & 0x20000000; /*0xfffd043c*/
            *a5 = v11; /*0xfffd0441*/
            v18 = v11 != 0; /*0xfffd044b*/
            v15 = 0; /*0xfffd044f*/
            v12 = a1 + 5512; /*0xfffd0453*/
            do /*0xfffd0475*/
            {
              if ( *v12 ) /*0xfffd0455*/
                sub_FFFC85B4((int)a1, 0, v15); /*0xfffd0460*/
              ++v15; /*0xfffd0468*/
              v12 += 430; /*0xfffd046b*/
            }
            while ( (unsigned __int8)v15 < 3u ); /*0xfffd0475*/
          }
        }
      }
      if ( (unsigned __int8)++v19 >= (unsigned __int8)(a9 == 0 ? 1 : 8) )
      {
        if ( v18 ) /*0xfffd0487*/
          return; /*0xfffd0487*/
        goto LABEL_24; /*0xfffd0487*/
      }
    }
  }
}

/* 0xfffd04f3 sub_FFFD04F3 */
void __cdecl sub_FFFD04F3(int a1, unsigned __int8 a2, unsigned __int8 a3, int *a4, int a5)
{
  unsigned __int8 v6; // cl
  int v7; // eax
  bool v8; // zf
  int v9; // edi
  int v10; // edx
  char v11; // al
  int v12; // edi
  unsigned int *v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  int v17; // eax
  unsigned __int8 v18; // dl
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  BOOL v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // edx
  unsigned int v30; // edi
  unsigned int v31; // edi
  unsigned int v32; // edx
  int v33; // eax
  unsigned __int8 v34; // dl
  int v35; // eax
  unsigned __int8 v36; // dl
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // dl
  int v39; // eax
  int v40; // eax
  unsigned __int8 v41; // dl
  unsigned int v42; // eax
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // edx
  char v48; // cl
  int v49; // eax
  char v50; // cl
  int v51; // eax
  int v52; // edi
  unsigned __int8 v53; // dl
  int v54; // eax
  unsigned __int8 v55; // dl
  int v56; // eax
  int v57; // edx
  int v58; // eax
  int v59; // edx
  BOOL v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // eax
  int *v64; // edx
  int v65; // edx
  int v66; // edx
  unsigned __int16 v67; // [esp-20h] [ebp-A0h]
  unsigned __int8 v68; // [esp-14h] [ebp-94h]
  _BYTE v69[48]; // [esp+8h] [ebp-78h] BYREF
  _DWORD v70[3]; // [esp+38h] [ebp-48h]
  int v71; // [esp+44h] [ebp-3Ch]
  int v72; // [esp+48h] [ebp-38h]
  int v73; // [esp+4Ch] [ebp-34h]
  int v74; // [esp+50h] [ebp-30h]
  int v75; // [esp+54h] [ebp-2Ch]
  int v76; // [esp+58h] [ebp-28h]
  int v77; // [esp+5Ch] [ebp-24h]
  int v78; // [esp+60h] [ebp-20h]
  int v79; // [esp+64h] [ebp-1Ch]
  int v80; // [esp+68h] [ebp-18h]
  int v81; // [esp+6Ch] [ebp-14h]
  int v82; // [esp+70h] [ebp-10h]
  int v83; // [esp+74h] [ebp-Ch]
  int v84; // [esp+78h] [ebp-8h]
  int v85; // [esp+7Ch] [ebp-4h]
  unsigned int v86; // [esp+80h] [ebp+0h]
  int v87; // [esp+84h] [ebp+4h]
  unsigned int v88; // [esp+88h] [ebp+8h]
  unsigned int v89; // [esp+8Ch] [ebp+Ch]
  int v90; // [esp+90h] [ebp+10h]
  __int16 v91; // [esp+94h] [ebp+14h]
  char v92; // [esp+96h] [ebp+16h]
  int v93; // [esp+98h] [ebp+18h]
  _BYTE *v94; // [esp+9Ch] [ebp+1Ch]
  int v95; // [esp+A0h] [ebp+20h]
  int v96; // [esp+A4h] [ebp+24h]
  int *v97; // [esp+A8h] [ebp+28h]
  int v98; // [esp+ACh] [ebp+2Ch]
  int v99; // [esp+B0h] [ebp+30h]
  int v100; // [esp+B4h] [ebp+34h]
  int *v101; // [esp+B8h] [ebp+38h]
  int v102; // [esp+BCh] [ebp+3Ch]
  int *v103; // [esp+C0h] [ebp+40h]
  int *v104; // [esp+C4h] [ebp+44h]
  char v105; // [esp+CBh] [ebp+4Bh]
  _BYTE *v106; // [esp+CCh] [ebp+4Ch]
  unsigned int v107; // [esp+D0h] [ebp+50h]
  int v108; // [esp+D4h] [ebp+54h]
  int v109; // [esp+D8h] [ebp+58h]
  int v110; // [esp+DEh] [ebp+5Eh]
  unsigned __int8 v111; // [esp+E2h] [ebp+62h]
  char v112; // [esp+E3h] [ebp+63h] BYREF
  int v113; // [esp+ECh] [ebp+6Ch]
  unsigned __int8 *v114; // [esp+ECh] [ebp+6Ch]
  int v115; // [esp+ECh] [ebp+6Ch]
  int v116; // [esp+ECh] [ebp+6Ch]
  int v117; // [esp+ECh] [ebp+6Ch]
  unsigned int v118; // [esp+ECh] [ebp+6Ch]
  unsigned __int8 v119; // [esp+EFh] [ebp+6Fh]
  unsigned __int8 v120; // [esp+EFh] [ebp+6Fh]
  unsigned __int8 i; // [esp+EFh] [ebp+6Fh]

  LOBYTE(v80) = 0; /*0xfffd0505*/
  v70[0] = 0; /*0xfffd0508*/
  v70[1] = 2; /*0xfffd050b*/
  v70[2] = -2; /*0xfffd0512*/
  v6 = 0; /*0xfffd0519*/
  while ( 1 ) /*0xfffd0524*/
  {
    v7 = a1 + 3049 * v6; /*0xfffd0524*/
    if ( *(_BYTE *)(v7 + 3755) ) /*0xfffd0526*/
    {
      if ( *(_BYTE *)(v7 + 3758) ) /*0xfffd052e*/
        break; /*0xfffd052e*/
    }
    if ( ++v6 ) /*0xfffd053b*/
      goto LABEL_7; /*0xfffd053b*/
  }
  LOBYTE(v80) = ((unsigned int)sub_FFFC4EEF(a1, *(_BYTE *)(3297 * v6 + a1 + 6997), 3u, 4u, 0xA8u) >> 24) & 0x1F; /*0xfffd0568*/
LABEL_7:
  sub_FFFC7365((_BYTE *)a1, 1, v80); /*0xfffd056b*/
  v91 = 0; /*0xfffd057c*/
  v8 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd0581*/
  LOBYTE(v87) = 0; /*0xfffd0587*/
  v92 = 0; /*0xfffd058a*/
  if ( !v8 && *(_BYTE *)(a1 + 3758) ) /*0xfffd058d*/
  {
    v9 = 0; /*0xfffd059a*/
    v79 = *a4; /*0xfffd059c*/
    v112 = 0; /*0xfffd059f*/
    v10 = 0; /*0xfffd05a2*/
    v113 = 3; /*0xfffd05a4*/
    do /*0xfffd05f2*/
    {
      if ( *(_BYTE *)(v10 + a1 + 5512) && ((1 << v9) & a5) != 0 ) /*0xfffd05be*/
      {
        LOBYTE(v87) = v87 | 1; /*0xfffd05ce*/
        v11 = *(_BYTE *)(32 * a3 + v10 + 184 * a2 + a1 + 5630); /*0xfffd05de*/
        v112 |= v11; /*0xfffd05e1*/
        *((_BYTE *)&v91 + v9) |= v11; /*0xfffd05e4*/
      }
      ++v9; /*0xfffd05e8*/
      v10 += 430; /*0xfffd05e9*/
      --v113; /*0xfffd05ef*/
    }
    while ( v113 ); /*0xfffd05f2*/
  }
  LOBYTE(v100) = 0; /*0xfffd05f4*/
  do
  {
    v8 = *((_BYTE *)&v91 + (unsigned __int8)v100) == 0; /*0xfffd05fb*/
    v98 = (unsigned __int8)v100; /*0xfffd05ff*/
    if ( !v8 )
    {
      LOBYTE(v99) = a2; /*0xfffd060b*/
      LOBYTE(v95) = 0; /*0xfffd0616*/
      v81 = a2; /*0xfffd0619*/
      v85 = a2; /*0xfffd061c*/
      if ( a2 < a2 + 1 )
      {
        v93 = a3; /*0xfffd0629*/
        do
        {
          LOBYTE(v96) = a3; /*0xfffd062f*/
          if ( __OFSUB__(v93, v93 + 1) ) /*0xfffd063a*/
            goto LABEL_111; /*0xfffd063a*/
          v84 = v93; /*0xfffd0640*/
          do
          {
            v111 = 0; /*0xfffd0643*/
            do
            {
              if ( *(_BYTE *)(a1 + 3755) )
              {
                if ( *(_BYTE *)(a1 + 3758) )
                {
                  if ( v112 )
                  {
                    v12 = 184 * v85; /*0xfffd066d*/
                    v106 = (_BYTE *)(32 * v84); /*0xfffd067f*/
                    v8 = *(_BYTE *)(430 * v98 + 184 * v85 + 32 * v84 + a1 + 5630) == 0; /*0xfffd0686*/
                    v90 = 430 * v98; /*0xfffd068d*/
                    if ( !v8 )
                    {
                      v8 = *(_BYTE *)(a1 + 5512 + 430 * v98) == 0; /*0xfffd06a4*/
                      LOBYTE(v110) = *(_BYTE *)(a1 + 6997); /*0xfffd06a6*/
                      v77 = a1 + 5512 + 430 * v98; /*0xfffd06a9*/
                      if ( !v8 )
                      {
                        v88 = 0; /*0xfffd06b9*/
                        v89 = 0; /*0xfffd06bc*/
                        v86 = 0; /*0xfffd06bf*/
                        LOBYTE(v95) = (1 << v98) | v95; /*0xfffd06c2*/
                        v103 = nullptr; /*0xfffd06c8*/
                        v104 = nullptr; /*0xfffd06cb*/
                        v107 = 0; /*0xfffd06ce*/
                        v114 = (unsigned __int8 *)(a1 + 5530); /*0xfffd06d1*/
                        v13 = (unsigned int *)(a1 + 7645); /*0xfffd06d4*/
                        v102 = 3; /*0xfffd06da*/
                        do /*0xfffd0734*/
                        {
                          if ( v13[1] > v88 ) /*0xfffd06e7*/
                            v88 = v13[1]; /*0xfffd06e9*/
                          if ( *v13 > v89 ) /*0xfffd06f1*/
                            v89 = *v13; /*0xfffd06f3*/
                          if ( *(v13 - 1) > v86 ) /*0xfffd06fc*/
                            v86 = *(v13 - 1); /*0xfffd06fe*/
                          if ( *(v13 - 3) > (unsigned int)v103 ) /*0xfffd0707*/
                            v103 = (int *)*(v13 - 3); /*0xfffd0709*/
                          if ( *(v13 - 4) > (unsigned int)v104 ) /*0xfffd0712*/
                            v104 = (int *)*(v13 - 4); /*0xfffd0714*/
                          if ( *v114 > v107 ) /*0xfffd0720*/
                            v107 = *v114; /*0xfffd0722*/
                          v114 += 430; /*0xfffd0725*/
                          v13 += 267; /*0xfffd072c*/
                          --v102; /*0xfffd0731*/
                        }
                        while ( v102 ); /*0xfffd0734*/
                        v72 = sub_FFFC56F6(v107, 0, 0xFu, 9); /*0xfffd074b*/
                        v78 = sub_FFFC56F6(7u, 0, 7u, 1); /*0xfffd0758*/
                        v76 = sub_FFFC56F6(v14, 0, v14, 4); /*0xfffd0765*/
                        v73 = sub_FFFC56F6(v15, 0, v15, 10); /*0xfffd0775*/
                        v74 = sub_FFFC56F6(v16, 0, v16, 13); /*0xfffd077d*/
                        v107 = a1 + 7088; /*0xfffd0786*/
                        v94 = (_BYTE *)(a1 + 5517); /*0xfffd0792*/
                        v104 = (int *)v69; /*0xfffd0798*/
                        v103 = (int *)(a1 + 3779); /*0xfffd07a1*/
                        v102 = -5 - (a1 + 5512); /*0xfffd07b7*/
                        LOBYTE(v108) = 4; /*0xfffd07ba*/
                        v106 += v12 + a1 + 5630; /*0xfffd07be*/
                        while ( 1 ) /*0xfffd07d9*/
                        {
                          v17 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v108, 0, 0x88u); /*0xfffd07d9*/
                          sub_FFFC4FB2(a1, v18, v108, 0, 0x88u, v72 | v17 & 0xFFFFE1FF); /*0xfffd07f2*/
                          LOBYTE(v71) = v108 - 4; /*0xfffd080b*/
                          if ( (_BYTE)v108 - 4 != (_BYTE)v100 ) /*0xfffd080e*/
                            break; /*0xfffd080e*/
                          sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v108, 0, 0x80u); /*0xfffd081e*/
                          sub_FFFC56F6(v88, 2u, 0xCu, 7); /*0xfffd0834*/
                          sub_FFFC56F6(v89, 2u, 0xFu, 11); /*0xfffd084a*/
                          v19 = sub_FFFC56F6(v86, 2u, 0xFu, 15); /*0xfffd0860*/
                          sub_FFFC4FB2(a1, v110, v108, 0, 0x80u, v76 | v78 & 0xFFFFFF8F | (v19 | v20) & 0xFFFFFF81); /*0xfffd0884*/
                          v21 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v108, 0, 0x84u); /*0xfffd0898*/
                          sub_FFFC4FB2(a1, v110, v108, 0, 0x84u, v74 | v73 & 0xFFFF1FFF | v21 & 0xFFFF03FF); /*0xfffd08b7*/
LABEL_75:
                          v104 += 4; /*0xfffd0c5b*/
                          v103 = (int *)((char *)v103 + 578); /*0xfffd0c5f*/
                          v107 += 1068; /*0xfffd0c66*/
                          v94 += 430; /*0xfffd0c72*/
                          v106 += 430; /*0xfffd0c75*/
                          LOBYTE(v108) = v108 + 1; /*0xfffd0c78*/
                          if ( (unsigned __int8)(v108 - 4) >= 3u ) /*0xfffd0c82*/
                            goto LABEL_76; /*0xfffd0c82*/
                        }
                        v83 = sub_FFFC4EEF(a1, v110, v108, 0, 0x80u); /*0xfffd08cd*/
                        v97 = (int *)(1068 * v98 + a1 + 7086); /*0xfffd08e6*/
                        v101 = *(int **)(1068 * v98 + a1 + 7637); /*0xfffd08f5*/
                        v115 = (int)v101 + 6; /*0xfffd08f8*/
                        v22 = sub_FFFC52CF(a1, 0, 745570438, 0) ? 25 : 22;
                        if ( v23 > v22 ) /*0xfffd090f*/
                          v115 = v22; /*0xfffd0911*/
                        sub_FFFC56F6((unsigned int)v101 + v88 - v115, 2u, 0xFu, 7); /*0xfffd0924*/
                        if ( v115 <= 17 ) /*0xfffd093e*/
                          v115 = 17; /*0xfffd0940*/
                        if ( (unsigned int)v101 <= *(int *)((char *)v97 + 547) + 9 ) /*0xfffd0955*/
                          v24 = v115 - *(int *)((char *)v97 + 547) - 9; /*0xfffd0965*/
                        else
                          v24 = v115 - (_DWORD)v101; /*0xfffd0957*/
                        v83 = v24; /*0xfffd0968*/
                        v82 = *(int *)((char *)v97 + 543); /*0xfffd0974*/
                        if ( (unsigned int)v101 <= v82 + 9 ) /*0xfffd0980*/
                          v25 = v115 - v82 - 9; /*0xfffd098a*/
                        else
                          v25 = v115 - (_DWORD)v101; /*0xfffd0982*/
                        v116 = v25; /*0xfffd0993*/
                        v26 = sub_FFFC52CF(a1, 0, 745570438, 0); /*0xfffd0996*/
                        v27 = sub_FFFC56F6(*(_DWORD *)(v107 + 549) + 6, 0xAu, v26 ? 15 : 12, 19);
                        v28 = sub_FFFC56F6(v89 - v83, 2u, 0xCu, 11); /*0xfffd09cc*/
                        v30 = sub_FFFC56F6(v86 - v116, 2u, 0xCu, 15) & 0xFC07FFFF /*0xfffd0a08*/
                            | v29 & 0xFC0007FF
                            | v28 & 0xFC007FFF
                            | v27 & 0xFC7FFFFF;
                        v31 = (sub_FFFC56F6(7u, 0, 7u, 23) | v30) & 0xE3FFFFFF; /*0xfffd0a1d*/
                        v33 = sub_FFFC56F6(v32, 0, v32, 26); /*0xfffd0a23*/
                        sub_FFFC4FB2(a1, v110, v108, 0, 0x80u, v76 | v78 & 0xFFFFFF8F | (v33 | v31) & 0xFFFFFF81); /*0xfffd0a45*/
                        v35 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v34, 0, 0x84u); /*0xfffd0a5c*/
                        sub_FFFC4FB2(a1, v110, v36, 0, 0x84u, v74 | v73 & 0xFFFF1FFF | v35 & 0xFFFF03FF); /*0xfffd0a79*/
                        sub_FFFC4F4E(a1, v110, v37, 0, 0xA0u, 5); /*0xfffd0a8e*/
                        HIWORD(v39) = HIWORD(v104); /*0xfffd0a93*/
                        v119 = 0; /*0xfffd0a99*/
                        v101 = v104; /*0xfffd0a9c*/
                        do /*0xfffd0ae8*/
                        {
                          LOWORD(v39) = v119; /*0xfffd0a9f*/
                          v68 = *(_BYTE *)(a1 + 6997); /*0xfffd0ab6*/
                          v82 = 4 * v39 + 164; /*0xfffd0ab8*/
                          v40 = sub_FFFC4EEF(a1, v68, v38, 0, v82); /*0xfffd0abb*/
                          v67 = v82; /*0xfffd0ac4*/
                          *v101 = v40; /*0xfffd0ac7*/
                          HIWORD(v39) = (unsigned int)sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v41, 0, v67, 0) >> 16; /*0xfffd0ad5*/
                          ++v101; /*0xfffd0ada*/
                          ++v119; /*0xfffd0ae1*/
                        }
                        while ( v119 < 4u ); /*0xfffd0ae8*/
                        if ( a3 == (_BYTE)v96 ) /*0xfffd0af3*/
                        {
                          if ( a2 == (_BYTE)v99 ) /*0xfffd0af8*/
                          {
                            v42 = *(int *)((char *)v97 + 551); /*0xfffd0afd*/
LABEL_63:
                            if ( *(_BYTE *)(v77 + 5) == 1 && *v94 != 1 ) /*0xfffd0b47*/
                              ++v42; /*0xfffd0b49*/
                            if ( *(_BYTE *)(v77 + 5) != 1 && *v94 == 1 ) /*0xfffd0b56*/
                              --v42; /*0xfffd0b58*/
                            v45 = *(unsigned __int8 *)v103 /*0xfffd0b84*/
                                + v70[v111]
                                + 2
                                * (v42
                                 + *(unsigned __int8 *)(v77 + 17)
                                 - *(unsigned __int8 *)(7 * *(unsigned __int8 *)(a1 + 3732) + a1 + 990));
                            if ( v45 < 1 ) /*0xfffd0b89*/
                              v45 = 1; /*0xfffd0b8d*/
                            sub_FFFC8367( /*0xfffd0baa*/
                              a1,
                              v110,
                              v71,
                              *(unsigned __int16 *)(a1 + 260) + a1 + 2 * *(unsigned __int16 *)(a1 + 260) + 2017,
                              v45,
                              1u);
                            if ( *(_BYTE *)(v90 + 184 * v81 + 32 * v93 + a1 + 5630) /*0xfffd0bef*/
                              && (!v94[184 * v81 + 5630 + 32 * v93 + v102 + a1] || !*v106) )
                            {
                              sub_FFFC4FB2(a1, v110, v108, 1u, 0x48u, *(unsigned __int16 *)(v77 + 87)); /*0xfffd0c06*/
                              sub_FFFC4FB2(a1, v110, v108, 1u, 0x4Cu, *(unsigned __int16 *)(v46 + 271)); /*0xfffd0c1e*/
                              sub_FFFC4FB2(a1, v110, v108, 0, 0x58u, v97[148]); /*0xfffd0c36*/
                              sub_FFFC4F4E(a1, v110, v108, 0, 0x7Cu, *(_BYTE *)v107 | *(_BYTE *)(v47 + 2)); /*0xfffd0c53*/
                            }
                            goto LABEL_75; /*0xfffd0c53*/
                          }
LABEL_60:
                          v43 = *(int *)((char *)v97 + 551); /*0xfffd0b1b*/
                          v44 = *(int *)((char *)v97 + 543); /*0xfffd0b24*/
                        }
                        else
                        {
                          if ( a2 != (_BYTE)v99 ) /*0xfffd0b08*/
                            goto LABEL_60; /*0xfffd0b08*/
                          v43 = *(int *)((char *)v97 + 551); /*0xfffd0b0d*/
                          v44 = *(int *)((char *)v97 + 547); /*0xfffd0b13*/
                        }
                        v42 = v43 - 9; /*0xfffd0b2a*/
                        if ( v44 > v42 ) /*0xfffd0b2f*/
                          v42 = v44; /*0xfffd0b31*/
                        goto LABEL_63; /*0xfffd0b31*/
                      }
                    }
                  }
                }
              }
LABEL_76:
              if ( a3 == (_BYTE)v96 && a2 == (_BYTE)v99 ) /*0xfffd0c96*/
                sub_FFFD0325((_BYTE *)a1, a2, a3, 0, a4, 0xFFu, 0, 0, *(_BYTE *)(a1 + 32), v100, v87); /*0xfffd0cab*/
              else
                sub_FFFD0325((_BYTE *)a1, a2, a3, 0, a4, v99, v96, 0, *(_BYTE *)(a1 + 32), v100, v87); /*0xfffd0ccb*/
              sub_FFFCA29D((_BYTE *)a1, a2, a3, &v112, v95, a4); /*0xfffd0ce4*/
              if ( *(_BYTE *)(a1 + 3755) /*0xfffd0d1d*/
                && *(_BYTE *)(a1 + 3758)
                && v112
                && *(_BYTE *)(430 * v98 + 184 * v85 + a1 + 32 * v84 + 5630) )
              {
                v48 = *(_BYTE *)(a1 + 3733); /*0xfffd0d26*/
                v120 = 0; /*0xfffd0d2c*/
                v49 = 0; /*0xfffd0d2f*/
                do /*0xfffd0d59*/
                {
                  if ( v48 || v120 != 8 ) /*0xfffd0d39*/
                    v79 |= *(unsigned __int8 *)(v49 + 1068 * v98 + a1 + 7179); /*0xfffd0d4e*/
                  ++v120; /*0xfffd0d51*/
                  ++v49; /*0xfffd0d54*/
                }
                while ( v120 < 9u ); /*0xfffd0d59*/
              }
              v8 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd0d5b*/
              v105 = -1; /*0xfffd0d61*/
              if ( !v8 )
              {
                if ( *(_BYTE *)(a1 + 3758) )
                {
                  if ( v112 )
                  {
                    v106 = (_BYTE *)(32 * v84); /*0xfffd0d98*/
                    v8 = *(_BYTE *)(430 * v98 + 184 * v85 + 32 * v84 + a1 + 5630) == 0; /*0xfffd0d9f*/
                    v90 = 430 * v98; /*0xfffd0da6*/
                    if ( !v8 )
                    {
                      LOBYTE(v110) = *(_BYTE *)(a1 + 6997); /*0xfffd0db5*/
                      if ( *(_BYTE *)(430 * v98 + a1 + 5512) )
                      {
                        v50 = *(_BYTE *)(a1 + 3757); /*0xfffd0dce*/
                        LOBYTE(v95) = (1 << v98) | v95; /*0xfffd0dd4*/
                        if ( v50 != -1 ) /*0xfffd0dda*/
                          v105 = v50; /*0xfffd0ddc*/
                        v107 = a1 + 5599; /*0xfffd0de8*/
                        v103 = (int *)v69; /*0xfffd0dee*/
                        v104 = (int *)(a1 + 3779); /*0xfffd0df7*/
                        v51 = (int)&v106[184 * v85 + 5630 + a1]; /*0xfffd0dff*/
                        v106 = (_BYTE *)(-87 - (a1 + 5512)); /*0xfffd0e0a*/
                        LOBYTE(v109) = 4; /*0xfffd0e0d*/
                        v52 = a1 + 7665; /*0xfffd0e11*/
                        v102 = v51; /*0xfffd0e17*/
                        do
                        {
                          v117 = sub_FFFC56F6(*(unsigned __int8 *)(v107 - 69), 0, 0xFu, 9); /*0xfffd0e3b*/
                          v54 = sub_FFFC4EEF(a1, v53, v109, 0, 0x88u); /*0xfffd0e40*/
                          sub_FFFC4FB2(a1, v55, v109, 0, 0x88u, v54 & 0xFFFFE1FF | v117); /*0xfffd0e5f*/
                          sub_FFFC56F6(*(_DWORD *)(v52 + 4), 2u, 7u, 10); /*0xfffd0e6d*/
                          sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v109, 0, 0x84u); /*0xfffd0e8a*/
                          v56 = sub_FFFC56F6(*(_DWORD *)v52, 2u, 7u, 13); /*0xfffd0ea4*/
                          sub_FFFC4FB2(a1, v110, v109, 0, 0x84u, v56 | v57); /*0xfffd0eb9*/
                          sub_FFFC56F6(*(_DWORD *)(v52 - 16), 2u, 0xCu, 7); /*0xfffd0ec7*/
                          sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v109, 0, 0x80u); /*0xfffd0ee4*/
                          sub_FFFC56F6(*(_DWORD *)(v52 - 20), 2u, 0xCu, 11); /*0xfffd0eff*/
                          sub_FFFC56F6(*(_DWORD *)(v52 - 24), 2u, 0xCu, 15); /*0xfffd0f15*/
                          sub_FFFC56F6(*(_DWORD *)(v52 - 8), 2u, 7u, 1); /*0xfffd0f28*/
                          v58 = sub_FFFC56F6(*(_DWORD *)(v52 - 12), 2u, 7u, 4); /*0xfffd0f3e*/
                          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v109, 0, 0x80u, v58 | v59); /*0xfffd0f59*/
                          LOBYTE(v75) = v109 - 4; /*0xfffd0f69*/
                          if ( (_BYTE)v109 - 4 != (_BYTE)v100 )
                          {
                            v60 = sub_FFFC52CF(a1, 0, 745570438, 0); /*0xfffd0f7c*/
                            v61 = sub_FFFC56F6(*(_DWORD *)(v52 - 28), 0xAu, v60 ? 15 : 12, 19);
                            v118 = sub_FFFC56F6(*(_DWORD *)(v52 - 32), 1u, 7u, 23) & 0xE3FFFFFF /*0xfffd0fcb*/
                                 | v62 & 0xE007FFFF
                                 | v61 & 0xE07FFFFF;
                            v63 = sub_FFFC56F6(*(_DWORD *)(v52 - 36), 1u, 7u, 26); /*0xfffd0fce*/
                            sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v109, 0, 0x80u, v63 | v118); /*0xfffd0fec*/
                            sub_FFFC4F4E(a1, *(_BYTE *)(a1 + 6997), v109, 0, 0xA0u, 0); /*0xfffd1008*/
                            v64 = v103; /*0xfffd100d*/
                            for ( i = 0; i < 4u; ++i ) /*0xfffd1013*/
                            {
                              sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v109, 0, 4 * i + 164, *v64); /*0xfffd1033*/
                              v64 = (int *)(v65 + 4); /*0xfffd103e*/
                            }
                            sub_FFFC8367( /*0xfffd106f*/
                              a1,
                              *(_BYTE *)(a1 + 6997),
                              v75,
                              *(unsigned __int16 *)(a1 + 260) + a1 + 2 * *(unsigned __int16 *)(a1 + 260) + 2017,
                              *(unsigned __int8 *)v104,
                              1u);
                            if ( *(_BYTE *)(v90 + 32 * v93 + 184 * v81 + a1 + 5630) /*0xfffd10b0*/
                              && (!v106[184 * v81 + 5630 + 32 * v93 + v107 + a1] || !*(_BYTE *)v102) )
                            {
                              sub_FFFC4FB2(a1, v110, v109, 1u, 0x48u, *(unsigned __int16 *)v107); /*0xfffd10c3*/
                              sub_FFFC4FB2(a1, v110, v109, 1u, 0x4Cu, *(unsigned __int16 *)(v66 + 184)); /*0xfffd10db*/
                              sub_FFFC4FB2(a1, v110, v109, 0, 0x58u, *(_DWORD *)(v52 + 13)); /*0xfffd10ed*/
                              sub_FFFC4F4E(a1, v110, v109, 0, 0x7Cu, *(_BYTE *)(v52 - 577)); /*0xfffd1108*/
                            }
                            sub_FFFCC773(a1, 0, v75); /*0xfffd1115*/
                          }
                          v103 += 4; /*0xfffd111d*/
                          v104 = (int *)((char *)v104 + 578); /*0xfffd1121*/
                          v102 += 430; /*0xfffd112d*/
                          v107 += 430; /*0xfffd1130*/
                          v52 += 1068; /*0xfffd1133*/
                          LOBYTE(v109) = v109 + 1; /*0xfffd1139*/
                        }
                        while ( (unsigned __int8)(v109 - 4) < 3u );
                      }
                    }
                  }
                }
              }
              if ( v105 ) /*0xfffd114c*/
                sub_FFFCA83C(a1, 1u); /*0xfffd1155*/
              else
                sub_FFFCA83C(a1, 2u); /*0xfffd1150*/
              ++v111; /*0xfffd115a*/
            }
            while ( !v111 );
            LOBYTE(v96) = v96 + 1; /*0xfffd1169*/
            v84 = (unsigned __int8)v96; /*0xfffd1176*/
          }
          while ( (unsigned __int8)v96 < v93 + 1 );
LABEL_111:
          LOBYTE(v99) = v99 + 1; /*0xfffd117f*/
          v85 = (unsigned __int8)v99; /*0xfffd118c*/
        }
        while ( (unsigned __int8)v99 < v81 + 1 );
      }
    }
    LOBYTE(v100) = v100 + 1; /*0xfffd1195*/
  }
  while ( (unsigned __int8)v100 < 3u );
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd11ab*/
    *a4 = v79; /*0xfffd11b9*/
  sub_FFFC7365((_BYTE *)a1, 1, v80); /*0xfffd11c1*/
}

/* 0xfffd11d0 sub_FFFD11D0 */
void __cdecl sub_FFFD11D0(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, char a5)
{
  bool v5; // zf
  int v6; // edi
  unsigned __int8 v7; // al
  int v8; // eax
  int v9; // edi
  int v10; // eax
  unsigned __int8 *v11; // eax
  unsigned __int8 v12; // al
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // [esp+Ch] [ebp-1Ch]
  unsigned __int8 j; // [esp+Ch] [ebp-1Ch]
  char v17; // [esp+Ch] [ebp-1Ch]
  unsigned __int8 v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  _BYTE v22[4]; // [esp+20h] [ebp-8h]
  char v23; // [esp+24h] [ebp-4h]
  char v24; // [esp+25h] [ebp-3h]
  unsigned __int8 i; // [esp+26h] [ebp-2h]
  unsigned __int8 v26; // [esp+27h] [ebp-1h]

  v5 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd11dd*/
  v19 = 0; /*0xfffd11e4*/
  if ( !v5 && *(_BYTE *)(a1 + 3758) ) /*0xfffd11e9*/
  {
    *a3 = 0; /*0xfffd11f4*/
    *a2 = 0; /*0xfffd11f9*/
    v22[0] = 0; /*0xfffd11fb*/
    v22[1] = 0; /*0xfffd11fe*/
  }
  v6 = v15; /*0xfffd1201*/
  for ( i = 0; i < 2u; ++i ) /*0xfffd1204*/
  {
    v5 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd1207*/
    v20 = 0; /*0xfffd120d*/
    if ( !v5 ) /*0xfffd1210*/
    {
      if ( !*(_BYTE *)(a1 + 3758) ) /*0xfffd121c*/
        goto LABEL_13; /*0xfffd121c*/
      v23 = 0; /*0xfffd1221*/
      v24 = 0; /*0xfffd1224*/
      if ( a5 ) /*0xfffd1227*/
      {
        if ( a5 == 4 ) /*0xfffd1235*/
        {
          v26 = 0; /*0xfffd1237*/
          goto LABEL_13; /*0xfffd123a*/
        }
        v7 = *(_BYTE *)(a1 + 7005); /*0xfffd123c*/
      }
      else
      {
        v7 = *(_BYTE *)(a1 + 7004); /*0xfffd1229*/
      }
      v26 = v7; /*0xfffd1242*/
      goto LABEL_13; /*0xfffd1242*/
    }
    while ( 2 ) /*0xfffd132c*/
    {
      for ( j = 0; j < 2u; ++j ) /*0xfffd132c*/
      {
        if ( v20 ) /*0xfffd1332*/
          break; /*0xfffd1332*/
        v18 = 0; /*0xfffd1338*/
        while ( !v20 ) /*0xfffd133e*/
        {
          v20 = 1; /*0xfffd1345*/
          sub_FFFC429B(a1); /*0xfffd134c*/
          sub_FFFD0325((_BYTE *)a1, j, v18, 2, &v19, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd136c*/
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd137c*/
          {
            if ( !v19 ) /*0xfffd1387*/
            {
              if ( v24 && v23 ) /*0xfffd1391*/
                goto LABEL_48; /*0xfffd1391*/
              v20 = 1; /*0xfffd139c*/
              sub_FFFD04F3(a1, j, v18, &v19, -1); /*0xfffd13a7*/
              if ( !*(_BYTE *)(a1 + 3755) || !*(_BYTE *)(a1 + 3758) || v22[i] ) /*0xfffd13c3*/
                goto LABEL_48; /*0xfffd13c7*/
              if ( !v19 ) /*0xfffd13cc*/
              {
                if ( !v24 || !v23 ) /*0xfffd13e8*/
                  v20 = 0; /*0xfffd13ea*/
                goto LABEL_48; /*0xfffd13ea*/
              }
            }
            v6 = 1; /*0xfffd13d2*/
            v24 = 1; /*0xfffd13d3*/
            sub_FFFCA20D(a1, 0); /*0xfffd13d7*/
          }
LABEL_48:
          if ( ++v18 >= 4u ) /*0xfffd13f4*/
            break; /*0xfffd13f4*/
        }
      }
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd1407*/
      {
        if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd1413*/
        {
          if ( v6 || v23 && v24 ) /*0xfffd1427*/
          {
            if ( v23 ) /*0xfffd1458*/
            {
              v22[i] = 1; /*0xfffd1484*/
            }
            else if ( (char)v26 >= 2 ) /*0xfffd145e*/
            {
              --v26; /*0xfffd1478*/
              v20 = 0; /*0xfffd147b*/
            }
            else
            {
              v5 = i == 0; /*0xfffd1460*/
              v22[i] = 1; /*0xfffd1467*/
              v11 = a2; /*0xfffd146c*/
              if ( v5 ) /*0xfffd146f*/
                v11 = a3; /*0xfffd1471*/
              *v11 = 0; /*0xfffd1474*/
            }
          }
          else if ( !v22[i] ) /*0xfffd142d*/
          {
            if ( i ) /*0xfffd1436*/
              *a2 = -v26; /*0xfffd1440*/
            else
              *a3 = v26; /*0xfffd144a*/
            ++v26; /*0xfffd144c*/
            v23 = 1; /*0xfffd144f*/
          }
        }
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) && v26 == 32 ) /*0xfffd149d*/
          v20 = 1; /*0xfffd149f*/
      }
      if ( !v20 ) /*0xfffd14a9*/
      {
LABEL_13:
        if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd1245*/
        {
          if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd1251*/
          {
            LOBYTE(v21) = *(_BYTE *)(a1 + 6997); /*0xfffd1263*/
            if ( !v22[i] ) /*0xfffd126c*/
            {
              if ( a5 ) /*0xfffd127b*/
              {
                if ( a5 == 4 ) /*0xfffd129d*/
                {
                  if ( i ) /*0xfffd12a1*/
                    v9 = (unsigned __int8)-v26; /*0xfffd12a8*/
                  else
                    v9 = v26; /*0xfffd12ee*/
                  sub_FFFC8367( /*0xfffd12c4*/
                    a1,
                    v21,
                    3u,
                    *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
                    v9,
                    1u);
                  sub_FFFC8367( /*0xfffd12e4*/
                    a1,
                    v21,
                    3u,
                    *(unsigned __int16 *)(a1 + 186) + a1 + 2 * *(unsigned __int16 *)(a1 + 186) + 1720,
                    v9,
                    1u);
                }
                else
                {
                  if ( i ) /*0xfffd12f6*/
                    v10 = (unsigned __int8)-v26; /*0xfffd12fd*/
                  else
                    v10 = v26; /*0xfffd1302*/
                  sub_FFFC8367( /*0xfffd131f*/
                    a1,
                    v21,
                    3u,
                    *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
                    v10,
                    1u);
                }
              }
              else
              {
                if ( i ) /*0xfffd127f*/
                  v8 = (unsigned __int8)-v26; /*0xfffd1286*/
                else
                  v8 = v26; /*0xfffd128b*/
                sub_FFFC8367( /*0xfffd1297*/
                  a1,
                  v21,
                  3u,
                  *(unsigned __int16 *)(a1 + 188) + a1 + 2 * *(unsigned __int16 *)(a1 + 188) + 1720,
                  v8,
                  1u);
              }
              v19 = 0; /*0xfffd1327*/
              v6 = 0; /*0xfffd132a*/
            }
          }
        }
        continue; /*0xfffd132a*/
      }
      break;
    }
  }
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd14bc*/
  {
    if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd14c8*/
    {
      LOBYTE(v21) = *(_BYTE *)(a1 + 6997); /*0xfffd14dd*/
      v12 = *a3 - *a2; /*0xfffd14e5*/
      *a4 = v12; /*0xfffd14ef*/
      if ( !a5 ) /*0xfffd14f2*/
      {
        *(_BYTE *)(a1 + 7004) = v12 >> 1; /*0xfffd14f6*/
        v13 = *(unsigned __int16 *)(a1 + 188); /*0xfffd14fc*/
        goto LABEL_77; /*0xfffd14fc*/
      }
      if ( a5 == 1 ) /*0xfffd1522*/
      {
        *(_BYTE *)(a1 + 7005) = v12 >> 1; /*0xfffd1526*/
        v13 = *(unsigned __int16 *)(a1 + 182); /*0xfffd152c*/
LABEL_77:
        sub_FFFC8367(a1, v21, 3u, v13 + a1 + 2 * v13 + 1720, 0, 1u); /*0xfffd1503*/
      }
      else
      {
        sub_FFFC8367( /*0xfffd154d*/
          a1,
          v21,
          3u,
          *(unsigned __int16 *)(a1 + 186) + a1 + 2 * *(unsigned __int16 *)(a1 + 186) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffd156d*/
          a1,
          v21,
          3u,
          *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
          0,
          1u);
      }
    }
    if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd157d*/
    {
      v17 = 0; /*0xfffd158b*/
      v14 = (_BYTE *)(a1 + 5512); /*0xfffd158e*/
      do /*0xfffd15ae*/
      {
        if ( *v14 ) /*0xfffd1590*/
          sub_FFFC85B4(a1, 0, v17); /*0xfffd1599*/
        ++v17; /*0xfffd15a1*/
        v14 += 430; /*0xfffd15a4*/
      }
      while ( (unsigned __int8)v17 < 3u ); /*0xfffd15ae*/
    }
  }
}

/* 0xfffd15b5 sub_FFFD15B5 */
char __cdecl sub_FFFD15B5(
        _BYTE *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        int a5,
        unsigned __int8 a6)
{
  char v6; // al
  int v7; // ecx
  _BYTE *v8; // edx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // esi
  int v13; // [esp+Ch] [ebp-Ch]
  int v14; // [esp+10h] [ebp-8h] BYREF
  char v15; // [esp+16h] [ebp-2h]
  char v16; // [esp+17h] [ebp-1h] BYREF

  if ( a1[3755] && a1[3758] ) /*0xfffd15cb*/
  {
    v6 = 0; /*0xfffd15d3*/
    v14 = 0; /*0xfffd15d5*/
    v16 = 0; /*0xfffd15d8*/
    v7 = 0; /*0xfffd15db*/
    v13 = 3; /*0xfffd15dd*/
    do /*0xfffd1612*/
    {
      if ( a1[v7 + 5512] ) /*0xfffd15e4*/
        v6 |= a1[184 * a2 + 5630 + 32 * a3 + v7]; /*0xfffd1602*/
      v7 += 430; /*0xfffd1609*/
      --v13; /*0xfffd160f*/
    }
    while ( v13 ); /*0xfffd1612*/
    v16 = v6; /*0xfffd1614*/
  }
  v15 = 1; /*0xfffd1618*/
  sub_FFFC429B((int)a1); /*0xfffd161c*/
  sub_FFFD0325(a1, a2, a3, 0, &v14, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd163b*/
  sub_FFFCA29D(a1, a2, a3, &v16, 0x3Fu, &v14); /*0xfffd1651*/
  sub_FFFD04F3((int)a1, a2, a3, &v14, a6); /*0xfffd1669*/
  sub_FFFCA406(a1, a2, a3, 3, &v16, a4, &v14); /*0xfffd1684*/
  if ( a1[3755] && a1[3758] ) /*0xfffd1694*/
  {
    v8 = a1 + 5512; /*0xfffd16a2*/
    v9 = a1 + 7175; /*0xfffd16a6*/
    v10 = 0; /*0xfffd16ac*/
    v11 = 3; /*0xfffd16ae*/
    do /*0xfffd16cd*/
    {
      if ( *v8 && *(_DWORD *)(a5 + 4 * v10) != *v9 ) /*0xfffd16bb*/
        v15 = 0; /*0xfffd16bd*/
      ++v10; /*0xfffd16c0*/
      v8 += 430; /*0xfffd16c1*/
      v9 += 267; /*0xfffd16c7*/
      --v11; /*0xfffd16cc*/
    }
    while ( v11 ); /*0xfffd16cd*/
  }
  return v15; /*0xfffd16d2*/
}

/* 0xfffd16d7 sub_FFFD16D7 */
void __cdecl sub_FFFD16D7(
        int a1,
        char a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        int a6,
        unsigned __int8 a7,
        char a8,
        char a9)
{
  int v9; // esi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bl
  char v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // di
  unsigned __int8 v16; // al
  char v17; // bl
  unsigned __int8 v18; // bl
  unsigned __int8 v19; // al
  char v20; // bl
  unsigned __int8 v21; // cl
  int v22; // edx
  unsigned __int8 v23; // al
  char v24; // al
  char v25; // al
  unsigned __int8 v26; // al
  unsigned __int8 v27; // bl
  int v28; // eax
  unsigned __int8 v29; // di
  unsigned __int8 v30; // al
  char v31; // bl
  unsigned __int8 v32; // bl
  unsigned __int8 v33; // al
  char v34; // bl
  unsigned __int8 v35; // cl
  int v36; // edx
  unsigned __int8 v37; // al
  char v38; // al
  char v39; // al
  unsigned __int8 v40; // al
  char v41; // dl
  char v42; // al
  int v43; // ecx
  int v44; // eax
  int v45; // edx
  int v46; // edi
  char v47; // bl
  bool v48; // zf
  int v49; // edi
  _BYTE *v50; // eax
  _BYTE *v51; // ecx
  _BYTE *v52; // eax
  _BYTE *v53; // eax
  unsigned __int8 v54; // al
  _BYTE *v55; // ebx
  int v56; // [esp+10h] [ebp-38h] BYREF
  int v57; // [esp+14h] [ebp-34h]
  int v58; // [esp+18h] [ebp-30h]
  int v59; // [esp+1Ch] [ebp-2Ch]
  int v60; // [esp+20h] [ebp-28h]
  int v61; // [esp+24h] [ebp-24h] BYREF
  int v62; // [esp+28h] [ebp-20h]
  int v63; // [esp+2Ch] [ebp-1Ch]
  BOOL v64; // [esp+30h] [ebp-18h]
  int v65; // [esp+34h] [ebp-14h]
  _BYTE v66[5]; // [esp+38h] [ebp-10h] BYREF
  char v67; // [esp+3Dh] [ebp-Bh]
  char v68; // [esp+3Eh] [ebp-Ah] BYREF
  char v69; // [esp+3Fh] [ebp-9h]
  char v70; // [esp+40h] [ebp-8h]
  char v71; // [esp+41h] [ebp-7h]
  unsigned __int8 v72; // [esp+42h] [ebp-6h]
  char v73; // [esp+43h] [ebp-5h]
  unsigned __int8 j; // [esp+44h] [ebp-4h]
  unsigned __int8 v75; // [esp+45h] [ebp-3h]
  unsigned __int8 i; // [esp+46h] [ebp-2h]
  unsigned __int8 v77; // [esp+47h] [ebp-1h]

  v9 = a1; /*0xfffd16e2*/
  v10 = *(_BYTE *)(a1 + 28); /*0xfffd16e5*/
  v11 = 0; /*0xfffd16ea*/
  v69 = 0; /*0xfffd16ed*/
  LOBYTE(v65) = 0; /*0xfffd16f1*/
  v77 = v10; /*0xfffd16f4*/
  v72 = 64; /*0xfffd16f7*/
  sub_FFFC7365((_BYTE *)a1, 1, a7); /*0xfffd16fb*/
  if ( !*(_BYTE *)(a1 + 3738) && a2 == 2 ) /*0xfffd170f*/
    a2 = 0; /*0xfffd1711*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd172b*/
  {
    LOBYTE(v62) = *(_BYTE *)(a1 + 6997); /*0xfffd173e*/
    if ( !a2 || a2 == 2 ) /*0xfffd1747*/
    {
      v75 = (unsigned __int8)sub_FFFC4FE3( /*0xfffd176b*/
                               a1,
                               v62,
                               3u,
                               *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720) >> 1;
      v69 = 32; /*0xfffd176e*/
    }
    if ( a2 == 1 || a2 == 2 ) /*0xfffd177c*/
    {
      sub_FFFD91CC(a1, 0, &v61); /*0xfffd1785*/
      v72 = v61; /*0xfffd178d*/
      v69 = *(_BYTE *)(a1 + 29) + 1; /*0xfffd1798*/
    }
    *a4 = 0; /*0xfffd179e*/
    *a5 = 0; /*0xfffd17a4*/
    v66[1] = 0; /*0xfffd17a7*/
    v66[0] = 0; /*0xfffd17ab*/
  }
  for ( i = 0; i < 2u; ++i )
  {
    v64 = 0; /*0xfffd17b4*/
    if ( *(_BYTE *)(v9 + 3755) ) /*0xfffd17b8*/
    {
      if ( !*(_BYTE *)(v9 + 3758) ) /*0xfffd17cc*/
        goto LABEL_31; /*0xfffd17cc*/
      v70 = 0; /*0xfffd17d2*/
      v71 = 0; /*0xfffd17d6*/
      if ( a2 ) /*0xfffd17da*/
      {
        if ( a2 != 1 ) /*0xfffd17f6*/
        {
          if ( a2 == 2 ) /*0xfffd1815*/
          {
            if ( i ) /*0xfffd181b*/
            {
              v13 = *(_BYTE *)(v9 + 7000); /*0xfffd181d*/
              v14 = *(_BYTE *)(v9 + 7002); /*0xfffd1823*/
            }
            else
            {
              v13 = *(_BYTE *)(v9 + 7001); /*0xfffd182b*/
              v14 = *(_BYTE *)(v9 + 7003); /*0xfffd1831*/
            }
            HIBYTE(a1) = v13; /*0xfffd1839*/
            if ( v13 >= v14 ) /*0xfffd183c*/
              HIBYTE(a1) = v14; /*0xfffd183e*/
          }
          goto LABEL_31; /*0xfffd183e*/
        }
        if ( i ) /*0xfffd17fc*/
          v12 = *(_BYTE *)(v9 + 7000); /*0xfffd17fe*/
        else
          v12 = *(_BYTE *)(v9 + 7001); /*0xfffd1806*/
      }
      else if ( i ) /*0xfffd17e0*/
      {
        v12 = *(_BYTE *)(v9 + 7002); /*0xfffd17e2*/
      }
      else
      {
        v12 = *(_BYTE *)(v9 + 7003); /*0xfffd17ea*/
      }
      HIBYTE(a1) = v12; /*0xfffd180c*/
      goto LABEL_31; /*0xfffd180f*/
    }
    while ( 2 )
    {
      if ( (a2 == 1 || a2 == 2) && *(_BYTE *)(v9 + 3738) ) /*0xfffd1a97*/
      {
        if ( v11 <= v72 ) /*0xfffd1aa5*/
          v26 = v72 - v11; /*0xfffd1aaf*/
        else
          v26 = v11 - v72; /*0xfffd1aa9*/
        sub_FFFCA83C(v9, 90 * v26 + 350); /*0xfffd1abe*/
        v72 = v11; /*0xfffd1ac5*/
      }
      v73 = a8 != 0 ? 0 : 2;
LABEL_82:
      if ( !v64 ) /*0xfffd1adb*/
      {
        if ( *(_BYTE *)(v9 + 3755) && *(_BYTE *)(v9 + 3758) ) /*0xfffd1aee*/
        {
          LOBYTE(v62) = *(_BYTE *)(v9 + 6997); /*0xfffd1b05*/
          if ( v73 == 2 ) /*0xfffd1b08*/
          {
            v27 = 0; /*0xfffd1b0a*/
          }
          else
          {
            v28 = HIBYTE(a1); /*0xfffd1b12*/
            if ( v73 == 1 ) /*0xfffd1b19*/
              v28 = -HIBYTE(a1); /*0xfffd1b1b*/
            v27 = 2 * v28 / 3; /*0xfffd1b22*/
          }
          if ( a2 == 1 || a2 == 2 ) /*0xfffd1b2e*/
            sub_FFFC8367( /*0xfffd1b4e*/
              v9,
              v62,
              3u,
              *(unsigned __int16 *)(v9 + 182) + v9 + 2 * *(unsigned __int16 *)(v9 + 182) + 1720,
              v27,
              1u);
          if ( !a2 || a2 == 2 ) /*0xfffd1b60*/
            sub_FFFC8367( /*0xfffd1b80*/
              v9,
              v62,
              3u,
              *(unsigned __int16 *)(v9 + 188) + v9 + 2 * *(unsigned __int16 *)(v9 + 188) + 1720,
              v27,
              1u);
          v11 = v65; /*0xfffd1b88*/
        }
        if ( !a8 || v73 != 2 ) /*0xfffd1b99*/
          goto LABEL_149; /*0xfffd1b99*/
        if ( !*(_BYTE *)(v9 + 3755) ) /*0xfffd1b9f*/
          goto LABEL_142; /*0xfffd1b9f*/
        if ( !*(_BYTE *)(v9 + 3758) ) /*0xfffd1bac*/
          goto LABEL_142; /*0xfffd1bac*/
        if ( v66[i] ) /*0xfffd1bbd*/
          goto LABEL_142; /*0xfffd1bbd*/
        v63 = 5 * HIBYTE(a1) / 4; /*0xfffd1bd7*/
        if ( v63 == HIBYTE(a1) ) /*0xfffd1bda*/
          goto LABEL_142; /*0xfffd1bda*/
        LOBYTE(v62) = *(_BYTE *)(v9 + 6997); /*0xfffd1bea*/
        v29 = v62; /*0xfffd1bed*/
        if ( a2 ) /*0xfffd1bf0*/
        {
LABEL_111:
          if ( a2 != 2 ) /*0xfffd1c6b*/
          {
LABEL_137:
            if ( a2 != 1 ) /*0xfffd1dc8*/
            {
LABEL_143:
              if ( a2 != 2 ) /*0xfffd1e03*/
              {
LABEL_149:
                LOBYTE(v57) = 0; /*0xfffd1e36*/
                while ( 1 ) /*0xfffd1e3a*/
                {
                  if ( v64 ) /*0xfffd1e3e*/
                    goto LABEL_211; /*0xfffd1e3e*/
                  LOBYTE(v58) = 0; /*0xfffd1e44*/
                  do /*0xfffd20e9*/
                  {
                    if ( v64 ) /*0xfffd1e4c*/
                      break; /*0xfffd1e4c*/
                    v41 = 0; /*0xfffd1e52*/
                    if ( *(_BYTE *)(v9 + 3755) ) /*0xfffd1e54*/
                    {
                      if ( *(_BYTE *)(v9 + 3758) ) /*0xfffd1e5c*/
                      {
                        v42 = 0; /*0xfffd1e68*/
                        v48 = v66[i] == 0; /*0xfffd1e6a*/
                        v68 = 0; /*0xfffd1e6e*/
                        if ( v48 ) /*0xfffd1e71*/
                        {
                          v43 = 0; /*0xfffd1e73*/
                          v63 = 3; /*0xfffd1e75*/
                          do /*0xfffd1ead*/
                          {
                            if ( *(_BYTE *)(v43 + v9 + 5512) ) /*0xfffd1e7c*/
                            {
                              v42 |= *(_BYTE *)(v43 + 184 * (unsigned __int8)v57 + 32 * (unsigned __int8)v58 + v9 + 5630); /*0xfffd1e9b*/
                              v41 = 1; /*0xfffd1ea2*/
                            }
                            v43 += 430; /*0xfffd1ea4*/
                            --v63; /*0xfffd1eaa*/
                          }
                          while ( v63 ); /*0xfffd1ead*/
                          v68 = v42; /*0xfffd1eaf*/
                        }
                      }
                    }
                    v64 = 1; /*0xfffd1eb7*/
                    if ( !v41 ) /*0xfffd1eba*/
                      goto LABEL_175; /*0xfffd1eba*/
                    sub_FFFC429B(v9); /*0xfffd1ec1*/
                    sub_FFFD0325((_BYTE *)v9, v57, v58, a6 == 0, &v56, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd1ee2*/
                    if ( a6 ) /*0xfffd1eee*/
                    {
                      sub_FFFCA29D((_BYTE *)v9, v57, v58, &v68, 0x3Fu, &v56); /*0xfffd1f01*/
                    }
                    else if ( *(_BYTE *)(v9 + 3755) && *(_BYTE *)(v9 + 3758) ) /*0xfffd1f14*/
                    {
                      if ( v56 ) /*0xfffd1f21*/
                      {
                        v60 = 1; /*0xfffd1f26*/
                        v71 = 1; /*0xfffd1f29*/
                        sub_FFFCA20D(v9, 0); /*0xfffd1f2d*/
                      }
                      else
                      {
                        v64 = 0; /*0xfffd1f36*/
                      }
                    }
                    if ( a9 ) /*0xfffd1f3e*/
                    {
                      if ( v64 && !a6 ) /*0xfffd1f4a*/
                      {
LABEL_174:
                        if ( !v64 ) /*0xfffd1f6e*/
                          goto LABEL_209; /*0xfffd1f6e*/
                        goto LABEL_175; /*0xfffd1f6e*/
                      }
                      v64 = 1; /*0xfffd1f55*/
                      sub_FFFD04F3(v9, v57, v58, &v56, -1); /*0xfffd1f5c*/
                    }
                    if ( !a6 ) /*0xfffd1f68*/
                      goto LABEL_174; /*0xfffd1f68*/
LABEL_175:
                    if ( !*(_BYTE *)(v9 + 3755) || !*(_BYTE *)(v9 + 3758) || v66[i] ) /*0xfffd1f92*/
                      goto LABEL_209; /*0xfffd1f97*/
                    if ( !v56 ) /*0xfffd1fa2*/
                    {
                      if ( !v71 || !v70 ) /*0xfffd20dd*/
                        v64 = 0; /*0xfffd20df*/
                      goto LABEL_209; /*0xfffd20df*/
                    }
                    if ( !a6 ) /*0xfffd1fab*/
                    {
                      v60 = 1; /*0xfffd20bd*/
                      goto LABEL_204; /*0xfffd20bd*/
                    }
                    LOBYTE(v59) = 0; /*0xfffd1fb1*/
                    while ( 1 ) /*0xfffd1fb8*/
                    {
                      v63 = (unsigned __int8)v59; /*0xfffd1fb8*/
                      v44 = 430 * (unsigned __int8)v59; /*0xfffd1fbb*/
                      if ( *(_BYTE *)(v44 + v9 + 5512) ) /*0xfffd1fc1*/
                      {
                        v45 = 184 * (unsigned __int8)v57; /*0xfffd1fd7*/
                        v46 = v44 + v9 + 5574; /*0xfffd1fec*/
                        if ( *(_BYTE *)(v44 + v45 + 32 * (unsigned __int8)v58 + v9 + 5630) ) /*0xfffd1fe4*/
                        {
                          if ( !*(_BYTE *)(v45 + v46 + 2) ) /*0xfffd1ff9*/
                            break; /*0xfffd1ff9*/
                        }
                      }
LABEL_200:
                      LOBYTE(v59) = v59 + 1; /*0xfffd20a4*/
                      if ( (unsigned __int8)v59 >= 3u ) /*0xfffd20ab*/
                      {
                        if ( v60 ) /*0xfffd20b5*/
                          goto LABEL_204; /*0xfffd20b5*/
                        v64 = 0; /*0xfffd20b7*/
                        goto LABEL_205; /*0xfffd20bb*/
                      }
                    }
                    for ( j = 0; j < 9u; ++j ) /*0xfffd2004*/
                    {
                      if ( !*(_BYTE *)(v9 + 3733) && j == 8 ) /*0xfffd2015*/
                        continue; /*0xfffd2015*/
                      v48 = *(_BYTE *)(v45 + v46 + 12) == 0; /*0xfffd2026*/
                      v47 = *(_BYTE *)(j + 1068 * v63 + v9 + 7179); /*0xfffd202b*/
                      v67 = v47; /*0xfffd2032*/
                      if ( v48 ) /*0xfffd2035*/
                      {
                        if ( ((1 << j) & a6) == 0 ) /*0xfffd207e*/
                          goto LABEL_197; /*0xfffd207e*/
                        v48 = v47 == 0; /*0xfffd2080*/
                        goto LABEL_195; /*0xfffd2080*/
                      }
                      if ( ((1 << (j + 9)) & a6) != 0 && (v67 & 0xF0) != 0 ) /*0xfffd204c*/
                        v60 = 1; /*0xfffd204e*/
                      if ( ((1 << j) & a6) != 0 ) /*0xfffd2064*/
                      {
                        v48 = (v67 & 0xF) == 0; /*0xfffd2066*/
LABEL_195:
                        if ( !v48 ) /*0xfffd2082*/
                          v60 = 1; /*0xfffd2084*/
                      }
LABEL_197:
                      if ( v60 ) /*0xfffd208f*/
                        goto LABEL_204; /*0xfffd208f*/
                    }
                    if ( !v60 ) /*0xfffd20a2*/
                      goto LABEL_200; /*0xfffd20a2*/
LABEL_204:
                    v71 = 1; /*0xfffd20c0*/
LABEL_205:
                    sub_FFFCA20D(v9, 0); /*0xfffd20c4*/
                    v11 = v65; /*0xfffd20cc*/
LABEL_209:
                    LOBYTE(v58) = v58 + 1; /*0xfffd20e2*/
                  }
                  while ( (unsigned __int8)v58 < 4u ); /*0xfffd20e9*/
                  LOBYTE(v57) = v57 + 1; /*0xfffd20ef*/
                  if ( (unsigned __int8)v57 >= 2u ) /*0xfffd20f6*/
                  {
LABEL_211:
                    if ( (unsigned __int8)++v73 >= 3u ) /*0xfffd2103*/
                      goto LABEL_212; /*0xfffd2103*/
                    goto LABEL_82; /*0xfffd2103*/
                  }
                }
              }
LABEL_144:
              if ( *(_BYTE *)(v9 + 3738) ) /*0xfffd1e05*/
              {
                if ( v11 <= v72 ) /*0xfffd1e13*/
                  v40 = v72 - v11; /*0xfffd1e1d*/
                else
                  v40 = v11 - v72; /*0xfffd1e17*/
                sub_FFFCA83C(v9, 90 * v40 + 350); /*0xfffd1e2c*/
                v72 = v11; /*0xfffd1e33*/
              }
              goto LABEL_149; /*0xfffd1e33*/
            }
            v39 = v77 * v63; /*0xfffd1dcd*/
            if ( i ) /*0xfffd1dd4*/
              v11 = *(_BYTE *)(v9 + 6999) - v39; /*0xfffd1de6*/
            else
              v11 = *(_BYTE *)(v9 + 6999) + v39; /*0xfffd1dd8*/
            LOBYTE(v65) = v11; /*0xfffd1de8*/
            sub_FFFD9273(v9, 0, v11); /*0xfffd1df1*/
LABEL_142:
            if ( a2 == 1 ) /*0xfffd1dfd*/
              goto LABEL_144; /*0xfffd1dfd*/
            goto LABEL_143; /*0xfffd1dfd*/
          }
          if ( !i ) /*0xfffd1c75*/
          {
            if ( (v75 & 0x20) != 0 ) /*0xfffd1c7b*/
            {
              if ( v77 * (unsigned __int8)v63 >= 0 ) /*0xfffd1c8d*/
              {
                j = v77 * v63; /*0xfffd1c9e*/
                v32 = 2 * v77 * v63; /*0xfffd1ca1*/
                goto LABEL_117; /*0xfffd1ca1*/
              }
              v30 = v77 * v63; /*0xfffd1c8f*/
              v31 = v75 - v77 * v63; /*0xfffd1c95*/
            }
            else
            {
              v30 = v77 * v63; /*0xfffd1cb2*/
              v31 = v75 + v77 * v63; /*0xfffd1cb7*/
            }
            j = v30; /*0xfffd1cba*/
            v32 = 2 * v31; /*0xfffd1cbd*/
LABEL_117:
            if ( (v32 & 0xFEu) > 0x40 ) /*0xfffd1ca9*/
              v32 = 32; /*0xfffd1cab*/
LABEL_126:
            sub_FFFC8367( /*0xfffd1ceb*/
              v9,
              v29,
              3u,
              *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
              0,
              1u);
            sub_FFFC8367( /*0xfffd1d26*/
              v9,
              v29,
              3u,
              *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
              v32,
              1u);
            v35 = *(_BYTE *)(v9 + 29); /*0xfffd1d33*/
            v36 = v77 * (unsigned __int8)v63; /*0xfffd1d36*/
            v37 = *(_BYTE *)(v9 + 6999); /*0xfffd1d39*/
            if ( i ) /*0xfffd1d4d*/
            {
              if ( (unsigned __int8)v61 - v36 >= v37 - v35 ) /*0xfffd1da4*/
                v38 = v61 - j; /*0xfffd1dad*/
              else
                v38 = v37 - v35; /*0xfffd1da6*/
            }
            else if ( (unsigned __int8)v61 + v36 <= v35 + v37 ) /*0xfffd1d58*/
            {
              v38 = v61 + j; /*0xfffd1d96*/
            }
            else
            {
              v38 = v35 + v37; /*0xfffd1d5a*/
            }
            LOBYTE(v65) = v38; /*0xfffd1db0*/
            sub_FFFD9273(v9, 0, v38); /*0xfffd1db9*/
            v11 = v65; /*0xfffd1dbe*/
            goto LABEL_137; /*0xfffd1dbe*/
          }
          if ( (v75 & 0x20) != 0 ) /*0xfffd1cc5*/
          {
            v33 = v77 * v63; /*0xfffd1cce*/
            v34 = v75 + v77 * v63; /*0xfffd1cd3*/
          }
          else
          {
            if ( v75 >= v77 * (unsigned __int8)v63 ) /*0xfffd1d72*/
            {
              j = v77 * v63; /*0xfffd1d7c*/
              v32 = 2 * (v75 - v77 * v63); /*0xfffd1d7f*/
LABEL_124:
              if ( (v32 & 0xBEu) > 0x3E ) /*0xfffd1ce7*/
                v32 = 0; /*0xfffd1ce9*/
              goto LABEL_126; /*0xfffd1ce9*/
            }
            v33 = v77 * v63; /*0xfffd1d86*/
            v34 = v77 * v63 - v75; /*0xfffd1d8b*/
          }
          j = v33; /*0xfffd1cd8*/
          v32 = (2 * v34) | 0x40; /*0xfffd1cdb*/
          goto LABEL_124; /*0xfffd1cdb*/
        }
        if ( i ) /*0xfffd1bf9*/
        {
          v11 = 2 * (v63 | 0x20); /*0xfffd1c0f*/
          LOBYTE(v65) = v11; /*0xfffd1c1a*/
          if ( (v11 & 0xBEu) > 0x3E ) /*0xfffd1c1d*/
          {
            v11 = 0; /*0xfffd1c1f*/
            goto LABEL_109; /*0xfffd1c1f*/
          }
        }
        else
        {
          v11 = 2 * v63; /*0xfffd1bfb*/
          LOBYTE(v65) = 2 * v63; /*0xfffd1c03*/
          if ( (unsigned __int8)(2 * v63) > 0x40u ) /*0xfffd1c06*/
          {
            v11 = 32; /*0xfffd1c08*/
LABEL_109:
            LOBYTE(v65) = v11; /*0xfffd1c21*/
          }
        }
        sub_FFFC8367( /*0xfffd1c24*/
          v9,
          v62,
          3u,
          *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffd1c5f*/
          v9,
          v29,
          3u,
          *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
          v11,
          1u);
        goto LABEL_111; /*0xfffd1c5f*/
      }
LABEL_212:
      if ( *(_BYTE *)(v9 + 3755) ) /*0xfffd2109*/
      {
        if ( *(_BYTE *)(v9 + 3758) ) /*0xfffd2116*/
        {
          v49 = i; /*0xfffd2123*/
          v50 = &v66[i]; /*0xfffd2127*/
          if ( !*v50 ) /*0xfffd212b*/
          {
            if ( v60 || v70 && v71 ) /*0xfffd2144*/
            {
              if ( v70 || HIBYTE(a1) < 2u ) /*0xfffd2170*/
              {
                *v50 = 1; /*0xfffd217b*/
              }
              else
              {
                --HIBYTE(a1); /*0xfffd2172*/
                v64 = 0; /*0xfffd2175*/
              }
            }
            else
            {
              v51 = a4; /*0xfffd214d*/
              if ( !i ) /*0xfffd2150*/
                v51 = a5; /*0xfffd2152*/
              if ( HIBYTE(a1) > *v51 ) /*0xfffd2157*/
                *v51 = HIBYTE(a1); /*0xfffd2159*/
              v70 = 1; /*0xfffd215d*/
              ++HIBYTE(a1); /*0xfffd2161*/
            }
            if ( !v70 && !v60 ) /*0xfffd2188*/
              v64 = 0; /*0xfffd218a*/
            if ( HIBYTE(a1) == v69 ) /*0xfffd2194*/
            {
              v48 = *(_BYTE *)(v9 + 3755) == 0; /*0xfffd2196*/
              *v50 = 1; /*0xfffd219d*/
              v64 = 1; /*0xfffd21a0*/
              if ( !v48 ) /*0xfffd21a7*/
              {
                if ( *(_BYTE *)(v9 + 3758) ) /*0xfffd21a9*/
                  v64 = v66[v49] != 0; /*0xfffd21b9*/
              }
            }
          }
        }
      }
      if ( !v64 ) /*0xfffd21c1*/
      {
LABEL_31:
        if ( !*(_BYTE *)(v9 + 3755) || !*(_BYTE *)(v9 + 3758) || v66[i] ) /*0xfffd185f*/
          continue; /*0xfffd1864*/
        LOBYTE(v62) = *(_BYTE *)(v9 + 6997); /*0xfffd1874*/
        v15 = v62; /*0xfffd1877*/
        if ( !a2 ) /*0xfffd187a*/
        {
          if ( i ) /*0xfffd1883*/
          {
            v11 = 2 * (HIBYTE(a1) | 0x20); /*0xfffd1899*/
            LOBYTE(v65) = v11; /*0xfffd18a4*/
            if ( (v11 & 0xBEu) > 0x3E ) /*0xfffd18a7*/
            {
              v11 = 0; /*0xfffd18a9*/
LABEL_40:
              LOBYTE(v65) = v11; /*0xfffd18ab*/
            }
          }
          else
          {
            v11 = 2 * HIBYTE(a1); /*0xfffd1885*/
            LOBYTE(v65) = 2 * HIBYTE(a1); /*0xfffd188d*/
            if ( (unsigned __int8)(2 * HIBYTE(a1)) > 0x40u ) /*0xfffd1890*/
            {
              v11 = 32; /*0xfffd1892*/
              goto LABEL_40; /*0xfffd1894*/
            }
          }
          sub_FFFC8367( /*0xfffd18c8*/
            v9,
            v62,
            3u,
            *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
            0,
            1u);
          sub_FFFC8367( /*0xfffd18e9*/
            v9,
            v15,
            3u,
            *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
            v11,
            1u);
        }
        if ( a2 != 2 ) /*0xfffd18f5*/
          goto LABEL_68; /*0xfffd18f5*/
        if ( !i ) /*0xfffd18ff*/
        {
          if ( (v75 & 0x20) != 0 ) /*0xfffd1905*/
          {
            if ( v77 * HIBYTE(a1) < 0 ) /*0xfffd1917*/
            {
              v16 = v77 * HIBYTE(a1); /*0xfffd1919*/
              v17 = v75 - v77 * HIBYTE(a1); /*0xfffd191f*/
              goto LABEL_51; /*0xfffd1921*/
            }
            j = v77 * HIBYTE(a1); /*0xfffd1928*/
            v18 = 2 * v77 * HIBYTE(a1); /*0xfffd192b*/
          }
          else
          {
            v16 = v77 * HIBYTE(a1); /*0xfffd193c*/
            v17 = v75 + v77 * HIBYTE(a1); /*0xfffd1941*/
LABEL_51:
            j = v16; /*0xfffd1944*/
            v18 = 2 * v17; /*0xfffd1947*/
          }
          if ( (v18 & 0xFEu) > 0x40 ) /*0xfffd1933*/
            v18 = 32; /*0xfffd1935*/
LABEL_57:
          sub_FFFC8367( /*0xfffd1975*/
            v9,
            v15,
            3u,
            *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
            0,
            1u);
          sub_FFFC8367( /*0xfffd19b0*/
            v9,
            v15,
            3u,
            *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
            v18,
            1u);
          v21 = *(_BYTE *)(v9 + 29); /*0xfffd19bd*/
          v22 = v77 * HIBYTE(a1); /*0xfffd19c0*/
          v23 = *(_BYTE *)(v9 + 6999); /*0xfffd19c3*/
          if ( i ) /*0xfffd19d7*/
          {
            if ( (unsigned __int8)v61 - v22 >= v23 - v21 ) /*0xfffd1a2e*/
              v24 = v61 - j; /*0xfffd1a37*/
            else
              v24 = v23 - v21; /*0xfffd1a30*/
          }
          else if ( (unsigned __int8)v61 + v22 <= v21 + v23 ) /*0xfffd19e2*/
          {
            v24 = v61 + j; /*0xfffd1a20*/
          }
          else
          {
            v24 = v21 + v23; /*0xfffd19e4*/
          }
          LOBYTE(v65) = v24; /*0xfffd1a3a*/
          sub_FFFD9273(v9, 0, v24); /*0xfffd1a43*/
          v11 = v65; /*0xfffd1a48*/
LABEL_68:
          if ( a2 == 1 ) /*0xfffd1a52*/
          {
            v25 = v77 * HIBYTE(a1); /*0xfffd1a57*/
            if ( i ) /*0xfffd1a5e*/
              v11 = *(_BYTE *)(v9 + 6999) - v25; /*0xfffd1a70*/
            else
              v11 = *(_BYTE *)(v9 + 6999) + v25; /*0xfffd1a62*/
            LOBYTE(v65) = v11; /*0xfffd1a72*/
            sub_FFFD9273(v9, 0, v11); /*0xfffd1a7b*/
          }
          v56 = 0; /*0xfffd1a83*/
          v60 = 0; /*0xfffd1a87*/
          continue; /*0xfffd1a87*/
        }
        if ( (v75 & 0x20) != 0 ) /*0xfffd194f*/
        {
          v19 = v77 * HIBYTE(a1); /*0xfffd1958*/
          v20 = v75 + v77 * HIBYTE(a1); /*0xfffd195d*/
          goto LABEL_54; /*0xfffd195d*/
        }
        if ( v75 < v77 * HIBYTE(a1) ) /*0xfffd19fc*/
        {
          v19 = v77 * HIBYTE(a1); /*0xfffd1a10*/
          v20 = v77 * HIBYTE(a1) - v75; /*0xfffd1a15*/
LABEL_54:
          j = v19; /*0xfffd1960*/
          v18 = (2 * v20) | 0x40; /*0xfffd1965*/
        }
        else
        {
          j = v77 * HIBYTE(a1); /*0xfffd1a06*/
          v18 = 2 * (v75 - v77 * HIBYTE(a1)); /*0xfffd1a09*/
        }
        if ( (v18 & 0xBEu) > 0x3E ) /*0xfffd1971*/
          v18 = 0; /*0xfffd1973*/
        goto LABEL_57; /*0xfffd1973*/
      }
      break;
    }
  }
  if ( *(_BYTE *)(v9 + 3755) && *(_BYTE *)(v9 + 3758) ) /*0xfffd21e2*/
  {
    LOBYTE(v62) = *(_BYTE *)(v9 + 6997); /*0xfffd21fc*/
    if ( !a2 || a2 == 2 ) /*0xfffd2205*/
    {
      sub_FFFC8367( /*0xfffd2227*/
        v9,
        v62,
        3u,
        *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffd224d*/
        v9,
        v62,
        3u,
        *(unsigned __int16 *)(v9 + 208) + v9 + 2 * *(unsigned __int16 *)(v9 + 208) + 1720,
        2 * v75,
        1u);
      *a3 = 2 * v75; /*0xfffd225e*/
      if ( a8 ) /*0xfffd2260*/
        sub_FFFC8367( /*0xfffd2284*/
          v9,
          *(_BYTE *)(v9 + 6997),
          3u,
          *(unsigned __int16 *)(v9 + 188) + v9 + 2 * *(unsigned __int16 *)(v9 + 188) + 1720,
          0,
          1u);
    }
    if ( a2 == 1 || a2 == 2 ) /*0xfffd2296*/
    {
      sub_FFFD9273(v9, 0, v61); /*0xfffd229e*/
      *a3 = v61; /*0xfffd22ad*/
      if ( a8 ) /*0xfffd22af*/
        sub_FFFC8367( /*0xfffd22d3*/
          v9,
          *(_BYTE *)(v9 + 6997),
          3u,
          *(unsigned __int16 *)(v9 + 182) + v9 + 2 * *(unsigned __int16 *)(v9 + 182) + 1720,
          0,
          1u);
    }
    if ( a2 ) /*0xfffd22df*/
    {
      if ( a2 == 1 ) /*0xfffd22fd*/
      {
        *(_BYTE *)(v9 + 7000) = *a4; /*0xfffd2304*/
        *(_BYTE *)(v9 + 7001) = *a5; /*0xfffd230f*/
      }
      else if ( a2 == 2 ) /*0xfffd231b*/
      {
        if ( *(_BYTE *)(v9 + 7002) >= *(_BYTE *)(v9 + 7000) ) /*0xfffd232d*/
          *(_BYTE *)(v9 + 7000) = *a4; /*0xfffd233d*/
        else
          *(_BYTE *)(v9 + 7002) = *a4; /*0xfffd2334*/
        if ( *(_BYTE *)(v9 + 7003) >= *(_BYTE *)(v9 + 7001) ) /*0xfffd234f*/
          *(_BYTE *)(v9 + 7001) = *a5; /*0xfffd235f*/
        else
          *(_BYTE *)(v9 + 7003) = *a5; /*0xfffd2356*/
      }
    }
    else
    {
      *(_BYTE *)(v9 + 7002) = *a4; /*0xfffd22e6*/
      *(_BYTE *)(v9 + 7003) = *a5; /*0xfffd22f1*/
    }
    v52 = (_BYTE *)(v9 + 7000); /*0xfffd2361*/
    if ( *(_BYTE *)(v9 + 7000) < 2u ) /*0xfffd236a*/
      *v52 = 2; /*0xfffd236c*/
    if ( *v52 > 0x11u ) /*0xfffd2372*/
      *v52 = 17; /*0xfffd2374*/
    v53 = (_BYTE *)(v9 + 7001); /*0xfffd2377*/
    if ( *(_BYTE *)(v9 + 7001) < 2u ) /*0xfffd2380*/
      *v53 = 2; /*0xfffd2382*/
    if ( *v53 > 0x11u ) /*0xfffd2388*/
      *v53 = 17; /*0xfffd238a*/
    if ( *(_BYTE *)(v9 + 7002) < 2u ) /*0xfffd2396*/
      *(_BYTE *)(v9 + 7002) = 2; /*0xfffd2398*/
    if ( *(_BYTE *)(v9 + 7003) < 2u ) /*0xfffd23a4*/
      *(_BYTE *)(v9 + 7003) = 2; /*0xfffd23a6*/
  }
  if ( (a2 == 1 || a2 == 2) && *(_BYTE *)(v9 + 3738) ) /*0xfffd23b5*/
  {
    if ( (unsigned __int8)v65 <= v72 ) /*0xfffd23c6*/
      v54 = v72 - v65; /*0xfffd23ce*/
    else
      v54 = v65 - v72; /*0xfffd23ca*/
    sub_FFFCA83C(v9, 90 * v54 + 350); /*0xfffd23dd*/
  }
  if ( *(_BYTE *)(v9 + 3755) && *(_BYTE *)(v9 + 3758) ) /*0xfffd23ed*/
  {
    LOBYTE(v59) = 0; /*0xfffd23fc*/
    v55 = (_BYTE *)(v9 + 5512); /*0xfffd2400*/
    do /*0xfffd2422*/
    {
      if ( *v55 ) /*0xfffd2402*/
        sub_FFFC85B4(v9, 0, v59); /*0xfffd240d*/
      LOBYTE(v59) = v59 + 1; /*0xfffd2415*/
      v55 += 430; /*0xfffd2418*/
    }
    while ( (unsigned __int8)v59 < 3u ); /*0xfffd2422*/
  }
}

/* 0xfffd2428 sub_FFFD2428 */
int __cdecl sub_FFFD2428(int a1, unsigned __int8 a2, char a3)
{
  int v3; // eax
  char v5; // [esp+9h] [ebp-7h]
  unsigned __int8 v6; // [esp+9h] [ebp-7h]
  char v7; // [esp+Dh] [ebp-3h] BYREF
  unsigned __int8 v8; // [esp+Eh] [ebp-2h] BYREF
  unsigned __int8 v9; // [esp+Fh] [ebp-1h] BYREF

  v5 = 1; /*0xfffd243a*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd2434*/
    v5 = *(_BYTE *)(a1 + 3758) != 3; /*0xfffd244e*/
  sub_FFFD16D7(a1, 0, &v7, &v9, &v8, 0, a2, v5, a3); /*0xfffd2469*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd247d*/
  {
    v6 = *(_BYTE *)(a1 + 6997); /*0xfffd248f*/
    v3 = (v8 - v9) / 2; /*0xfffd249b*/
    if ( (v3 & 0x80u) != 0 ) /*0xfffd249f*/
      LOBYTE(v3) = ((v8 - v9) / -2) | 0x20; /*0xfffd24a6*/
    *(_BYTE *)(a1 + 3761) = v3; /*0xfffd24ad*/
    sub_FFFC8367(a1, v6, 3u, *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720, 0, 1u); /*0xfffd24ce*/
    sub_FFFC8367( /*0xfffd24f7*/
      a1,
      v6,
      3u,
      *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
      2 * *(unsigned __int8 *)(a1 + 3761),
      1u);
  }
  return sub_FFFC7CA8((_BYTE *)a1); /*0xfffd250b*/
}

/* 0xfffd250f sub_FFFD250F */
int __cdecl sub_FFFD250F(int a1, unsigned __int8 a2, char a3)
{
  _BYTE *v3; // esi
  unsigned __int8 v4; // cl
  int v5; // eax
  char v6; // cl
  char v8; // [esp+Ah] [ebp-2h] BYREF
  unsigned __int8 v9; // [esp+Bh] [ebp-1h] BYREF

  v3 = (_BYTE *)a1; /*0xfffd2515*/
  if ( *(_BYTE *)(a1 + 3737) ) /*0xfffd251a*/
  {
    sub_FFFD16D7(a1, 1, &v8, (_BYTE *)&a1 + 3, &v9, 0, a2, 1, a3); /*0xfffd253e*/
    if ( !v3[3755] || !v3[3758] || (v3[3760] & 2) != 0 ) /*0xfffd255d*/
      goto LABEL_11; /*0xfffd255d*/
    v4 = v3[30]; /*0xfffd2569*/
    v5 = (v9 - HIBYTE(a1)) / 2; /*0xfffd256f*/
    if ( (v5 & 0x80u) == 0 ) /*0xfffd257a*/
    {
      if ( (char)v5 > (int)v4 ) /*0xfffd2588*/
        goto LABEL_9; /*0xfffd2588*/
    }
    else if ( (char)v5 < -v4 ) /*0xfffd2580*/
    {
      v4 = -v4; /*0xfffd2582*/
LABEL_9:
      LOBYTE(v5) = v4; /*0xfffd258a*/
    }
    v6 = v5 + v3[6999]; /*0xfffd258c*/
    v3[3762] = v6; /*0xfffd2596*/
    sub_FFFD9273(v3, 0, v6); /*0xfffd259f*/
LABEL_11:
    sub_FFFCA83C((int)v3, 0x320u); /*0xfffd25a8*/
  }
  return sub_FFFC7CA8(v3); /*0xfffd25c1*/
}

/* 0xfffd25c5 sub_FFFD25C5 */
int __cdecl sub_FFFD25C5(int a1, __int16 a2)
{
  unsigned __int16 v3; // ax
  _BYTE *v4; // eax
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // dl
  char v7; // al
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // dl
  int v13; // [esp+Ch] [ebp-20h]
  unsigned __int16 v14; // [esp+10h] [ebp-1Ch]
  __int16 v15; // [esp+14h] [ebp-18h]
  unsigned __int8 v16; // [esp+18h] [ebp-14h]
  int v17; // [esp+1Ch] [ebp-10h]
  char v18; // [esp+20h] [ebp-Ch]
  unsigned __int16 v19; // [esp+24h] [ebp-8h]
  char v20; // [esp+2Bh] [ebp-1h] BYREF
  char v21; // [esp+37h] [ebp+Bh]

  v3 = *(_WORD *)(a1 + 46); /*0xfffd25d2*/
  v20 = 0; /*0xfffd25dc*/
  v14 = 1; /*0xfffd25df*/
  if ( v3 && a2 == 1536 ) /*0xfffd25ee*/
    v14 = v3; /*0xfffd25f0*/
  v19 = 0; /*0xfffd25f9*/
  do /*0xfffd277f*/
  {
    v15 = sub_FFFC68EE((_BYTE *)a1, a2, v19); /*0xfffd2618*/
    v21 = 0; /*0xfffd261b*/
    if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd2612*/
    {
      if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd2624*/
      {
        v17 = 0; /*0xfffd2635*/
        v4 = (_BYTE *)(a1 + 5512); /*0xfffd2638*/
        v18 = 0; /*0xfffd263e*/
        v13 = 3; /*0xfffd2641*/
        do /*0xfffd265f*/
        {
          if ( *v4 ) /*0xfffd2644*/
            v17 |= 1 << v18; /*0xfffd2650*/
          v18 += 2; /*0xfffd2653*/
          v4 += 430; /*0xfffd2657*/
          --v13; /*0xfffd265c*/
        }
        while ( v13 ); /*0xfffd265f*/
        sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x5Cu, v17); /*0xfffd266d*/
      }
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd2675*/
      {
        if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd2681*/
        {
          v16 = *(_BYTE *)(a1 + 6997); /*0xfffd2695*/
          sub_FFFC71E2(a1, 0); /*0xfffd2698*/
          sub_FFFC4FB2(a1, v16, 3u, 4u, 0xD8u, 0); /*0xfffd26ab*/
          sub_FFFC4FB2(a1, v5, 3u, 4u, 0xD4u, 0); /*0xfffd26bb*/
          v7 = sub_FFFC4E96(a1, v6, 3u, 4u, 0x68u); /*0xfffd26c7*/
          sub_FFFC4F4E(a1, v8, 3u, 4u, 0x68u, v7 | 2); /*0xfffd26da*/
          if ( sub_FFFC531F(a1, 0, 742424710, 4u) ) /*0xfffd26e8*/
            sub_FFFC4F4E(a1, v9, 3u, 2u, 0x48u, 0); /*0xfffd26fc*/
          sub_FFFC4F7F(a1, v9, 3u, 0, 0x7Cu, 1024); /*0xfffd270f*/
          sub_FFFC4FB2(a1, v10, 3u, 0, 0x78u, 0); /*0xfffd271b*/
          sub_FFFC4F7F(a1, v11, 3u, 4u, 0xA8u, v15 | 1); /*0xfffd2731*/
        }
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd2741*/
          v21 = sub_FFFCE32A((_BYTE *)a1, 0, &v20); /*0xfffd2757*/
      }
    }
    sub_FFFC36CF(a1); /*0xfffd275b*/
    sub_FFFCA83C(a1, 0xAu); /*0xfffd2763*/
  }
  while ( v21 || ++v19 < v14 ); /*0xfffd277f*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd278d*/
    sub_FFFC4F7F(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x6Cu, 0); /*0xfffd27a5*/
  return 0; /*0xfffd27ad*/
}

/* 0xfffd27b4 sub_FFFD27B4 */
int __cdecl sub_FFFD27B4(_BYTE *a1)
{
  char v1; // dl
  bool v2; // zf
  int v3; // eax
  unsigned __int8 v4; // di
  unsigned __int16 v5; // dx
  unsigned __int8 v6; // dl
  int v8; // [esp+8h] [ebp-8h] BYREF
  _BYTE *v9; // [esp+Ch] [ebp-4h]

  v1 = 0; /*0xfffd27c0*/
  if ( a1[3755] && a1[3758] ) /*0xfffd27ca*/
  {
    if ( sub_FFFC52CF((int)a1, 0, 745570438, 0) ) /*0xfffd27da*/
      ++v1; /*0xfffd27e6*/
    v2 = (a1[78] & 8) == 0; /*0xfffd27e8*/
    LOBYTE(v9) = a1[6997]; /*0xfffd27f2*/
    if ( !v2 ) /*0xfffd27f5*/
    {
      v3 = sub_FFFC4EEF((int)a1, (unsigned __int8)v9, 3u, 0, 0x48u); /*0xfffd2800*/
      sub_FFFC4FB2((int)a1, (unsigned __int8)v9, 3u, 0, 0x48u, v3 | 5); /*0xfffd2812*/
    }
  }
  if ( !v1 && a1[1] != 1 && (a1[78] & 8) != 0 ) /*0xfffd2828*/
  {
    a1[34] = 1; /*0xfffd282e*/
    sub_FFFC7365(a1, 0, 1u); /*0xfffd2832*/
    sub_FFFD0325(a1, 0, 0, 0, &v8, 0xFFu, 0, 5u, 0, 0xFFu, 3); /*0xfffd284c*/
    a1[34] = 0; /*0xfffd2854*/
    if ( !a1[3755] ) /*0xfffd285d*/
      return 0; /*0xfffd285d*/
    if ( a1[3758] ) /*0xfffd2863*/
    {
      LOBYTE(v9) = a1[6997]; /*0xfffd2873*/
      sub_FFFC71E2((int)a1, 0); /*0xfffd2876*/
      sub_FFFC4F7F((int)a1, (unsigned __int8)v9, 3u, 4u, 0x6Cu, 0); /*0xfffd2886*/
    }
  }
  if ( a1[3755] ) /*0xfffd288e*/
  {
    LOBYTE(v9) = a1[6997]; /*0xfffd28a7*/
    v4 = (unsigned __int8)v9; /*0xfffd28aa*/
    sub_FFFC4FB2((int)a1, (unsigned __int8)v9, 3u, 4u, 0x5Cu, 1); /*0xfffd28b1*/
    if ( a1[3758] ) /*0xfffd28b9*/
    {
      if ( !sub_FFFC531F((int)a1, 0, 742424710, 4u) ) /*0xfffd28ce*/
      {
        sub_FFFC4F4E((int)a1, v4, 0, 0, 0x94u, 1); /*0xfffd28e6*/
        while ( sub_FFFC4E96((int)a1, v4, 0, 0, v5) ) /*0xfffd28f3*/
          ; /*0xfffd28ee*/
      }
      v6 = 0; /*0xfffd2905*/
      v9 = a1 + 5512; /*0xfffd2907*/
      do /*0xfffd2932*/
      {
        if ( *v9 ) /*0xfffd290d*/
          sub_FFFC4FB2((int)a1, v4, v6 + 4, 0, 0x54u, 0); /*0xfffd291e*/
        v9 += 430; /*0xfffd2926*/
        ++v6; /*0xfffd292d*/
      }
      while ( v6 < 3u ); /*0xfffd2932*/
      sub_FFFC4F4E((int)a1, v4, 0, 0, 0x90u, 1); /*0xfffd293f*/
    }
  }
  return 0; /*0xfffd2948*/
}

/* 0xfffd294e sub_FFFD294E */
unsigned int __cdecl sub_FFFD294E(_BYTE *a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  int v5; // edi
  int v6; // ebx
  int v7; // edi
  unsigned __int8 *v8; // edx
  int v9; // eax
  unsigned __int8 *v10; // edi
  int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  _WORD *v17; // edx
  int v18; // ebx
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // bl
  unsigned __int8 v21; // dl
  unsigned int result; // eax
  _BYTE *v23; // edi
  char v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+18h] [ebp-24h]
  _BYTE *v26; // [esp+1Ch] [ebp-20h]
  int v27; // [esp+20h] [ebp-1Ch]
  unsigned int v28; // [esp+24h] [ebp-18h]
  int j; // [esp+28h] [ebp-14h]
  _WORD *v30; // [esp+2Ch] [ebp-10h]
  _BYTE *v31; // [esp+30h] [ebp-Ch]
  unsigned __int8 v32; // [esp+34h] [ebp-8h]
  unsigned __int8 i; // [esp+38h] [ebp-4h]
  unsigned __int8 v34; // [esp+38h] [ebp-4h]
  unsigned __int8 v35; // [esp+44h] [ebp+8h]
  unsigned __int8 v36; // [esp+44h] [ebp+8h]
  unsigned __int8 k; // [esp+44h] [ebp+8h]
  unsigned __int8 v38; // [esp+4Ch] [ebp+10h]
  _BYTE *v39; // [esp+50h] [ebp+14h]
  int v40; // [esp+50h] [ebp+14h]
  unsigned int v41; // [esp+50h] [ebp+14h]
  char v42; // [esp+50h] [ebp+14h]

  v5 = 3049 * a2; /*0xfffd2961*/
  v24 = 0; /*0xfffd296e*/
  v31 = &a1[v5]; /*0xfffd2972*/
  if ( a4 ) /*0xfffd2975*/
  {
    sub_FFFC6475((int)a1, a2, a3); /*0xfffd297e*/
    sub_FFFCA83C((int)a1, *(unsigned __int16 *)&a1[7 * (unsigned __int8)a1[v5 + 3757] + 1040]); /*0xfffd2997*/
  }
  v6 = 430 * a3; /*0xfffd29a9*/
  v7 = v6 + v5; /*0xfffd29b2*/
  v27 = v7; /*0xfffd29b5*/
  sub_FFFC85B4((int)a1, a2, a3); /*0xfffd29b8*/
  if ( !a1[3734] ) /*0xfffd29c0*/
  {
    v8 = &v31[v6 + 5514]; /*0xfffd29cc*/
    for ( i = 0; i < *v8; ++i ) /*0xfffd29d3*/
    {
      v9 = 184 * i; /*0xfffd29e3*/
      if ( a1[v7 + 5575 + v9] ) /*0xfffd29f0*/
      {
        v35 = 0; /*0xfffd2a00*/
        v39 = &a1[v7 + 5630 + v9]; /*0xfffd2a04*/
        do /*0xfffd2a38*/
        {
          if ( *v39 && (v35 & 1) == 0 ) /*0xfffd2a13*/
          {
            sub_FFFCE4B2((int)a1, a2, a3, i, v35); /*0xfffd2a22*/
            v8 = &v31[v6 + 5514]; /*0xfffd2a27*/
          }
          ++v35; /*0xfffd2a2d*/
          v39 += 32; /*0xfffd2a30*/
        }
        while ( v35 < 4u ); /*0xfffd2a38*/
      }
    }
  }
  v32 = a3 + 4; /*0xfffd2a5b*/
  v10 = &a1[3297 * a2 + 6997]; /*0xfffd2a61*/
  sub_FFFC4FB2((int)a1, *v10, a3 + 4, 0, 0x54u, 131584); /*0xfffd2a6f*/
  sub_FFFCA83C((int)a1, 1u); /*0xfffd2a77*/
  v11 = (int)&v31[v6 + 5512]; /*0xfffd2a7f*/
  v34 = 0; /*0xfffd2a8d*/
  for ( j = v11; v34 < *(_BYTE *)(v11 + 2); ++v34 ) /*0xfffd2a89*/
  {
    v12 = 184 * v34; /*0xfffd2aa3*/
    v26 = &a1[v27 + 5574 + v12]; /*0xfffd2ab6*/
    if ( v26[1] ) /*0xfffd2ab2*/
    {
      v13 = (int)&a1[v27 + 5644 + v12]; /*0xfffd2ae9*/
      v36 = 0; /*0xfffd2aec*/
      v30 = &a1[3297 * a2 + 7920 + 1068 * a3 + 212 * v34]; /*0xfffd2af0*/
      v25 = v13; /*0xfffd2af3*/
      do /*0xfffd2ca4*/
      {
        if ( *(_BYTE *)(v13 - 14) ) /*0xfffd2af6*/
        {
          v40 = 4360; /*0xfffd2b0a*/
          if ( sub_FFFC52CF((int)a1, a2, 745570438, 0) /*0xfffd2b2a*/
            && *(_BYTE *)(v11 + 2) == 1
            && (a1[81] & 8) != 0
            && !*(_BYTE *)(v11 + 4) )
          {
            v40 = 264; /*0xfffd2b30*/
          }
          v15 = (unsigned __int8)v31[3757]; /*0xfffd2b3a*/
          if ( v31[3757] ) /*0xfffd2b3a*/
          {
            if ( --v15 ) /*0xfffd2b47*/
            {
              if ( --v15 ) /*0xfffd2b4a*/
              {
                if ( !--v15 || (--v15, !v15) || (--v15, !v15) || (--v15, !v15) ) /*0xfffd2b56*/
                  BYTE1(v40) |= 0xCu; /*0xfffd2b58*/
              }
              else
              {
                BYTE1(v40) |= 0xAu; /*0xfffd2b5e*/
              }
            }
            else
            {
              BYTE1(v40) |= 8u; /*0xfffd2b64*/
            }
          }
          else
          {
            BYTE1(v40) |= 4u; /*0xfffd2b6a*/
          }
          LOWORD(v15) = *(unsigned __int8 *)(v11 + 17); /*0xfffd2b6e*/
          v41 = (16 * (v15 - 4)) | v40; /*0xfffd2b7c*/
          v16 = *(unsigned __int16 *)(v14 + 2) | 2; /*0xfffd2b85*/
          v28 = (unsigned __int16)v16; /*0xfffd2b8d*/
          if ( (v26[13] & 1) != 0 ) /*0xfffd2b90*/
          {
            LOWORD(v16) = *(_WORD *)(v14 + 2) | 0x802; /*0xfffd2b92*/
            v28 = *(unsigned __int16 *)(v14 + 2) | 0x802; /*0xfffd2b97*/
          }
          sub_FFFC4FB2((int)a1, *v10, v32, 0, 0x70u, (unsigned __int16)v41 + ((unsigned __int16)v16 << 16)); /*0xfffd2bb4*/
          LOWORD(v11) = (unsigned __int8)a1[7 * (unsigned __int8)a1[3732] + 990]; /*0xfffd2bc3*/
          v18 = 8 * v11 - 40; /*0xfffd2bd2*/
          LOWORD(v18) = *v17 | v18; /*0xfffd2bd9*/
          if ( (v26[5] & 4) != 0 ) /*0xfffd2be0*/
          {
            v18 |= 0x40u; /*0xfffd2be2*/
          }
          else if ( (*(_BYTE *)(j + 1) & 4) != 0 ) /*0xfffd2bee*/
          {
            v18 |= 0x80u; /*0xfffd2bf0*/
          }
          sub_FFFC4F7F((int)a1, *v10, v32, 0, 0x74u, v18); /*0xfffd2c04*/
          sub_FFFCC552((int)a1, a2, a3, v34, v36, v18, 2u); /*0xfffd2c19*/
          v30[1] = v18; /*0xfffd2c28*/
          sub_FFFCC552((int)a1, a2, a3, v34, v36, 0, 3u); /*0xfffd2c36*/
          sub_FFFCC552((int)a1, a2, a3, v34, v36, v28, 1u); /*0xfffd2c50*/
          *v30 = v28; /*0xfffd2c61*/
          sub_FFFCC552((int)a1, a2, a3, v34, v36, v41, 0); /*0xfffd2c71*/
          *(v30 - 1) = v41; /*0xfffd2c80*/
          sub_FFFC5621((int)a1, a2, a3); /*0xfffd2c85*/
          v13 = v25; /*0xfffd2c8a*/
          v11 = j; /*0xfffd2c8d*/
        }
        ++v36; /*0xfffd2c93*/
        v30 += 3; /*0xfffd2c96*/
        v13 += 32; /*0xfffd2c9a*/
        v25 = v13; /*0xfffd2ca1*/
      }
      while ( v36 < 4u ); /*0xfffd2ca4*/
    }
  }
  v20 = sub_FFFC4E96((int)a1, *v10, v32, 0, 0x7Cu); /*0xfffd2ccb*/
  v42 = v20; /*0xfffd2cd7*/
  if ( *(_BYTE *)(j + 2) < 3u && v31[3758] == 3 ) /*0xfffd2ce6*/
  {
    v24 = v20; /*0xfffd2ced*/
    v20 = (v20 >> 2) & 0xC | v20 & 3; /*0xfffd2cf5*/
    v42 = v20; /*0xfffd2cf7*/
    sub_FFFC4F4E((int)a1, v19, v32, 0, 0x7Cu, v20); /*0xfffd2d06*/
  }
  for ( k = 0; k < 8u; ++k ) /*0xfffd2d11*/
  {
    if ( ((1 << k) & v20) != 0 ) /*0xfffd2d28*/
    {
      if ( !k ) /*0xfffd2d32*/
      {
        sub_FFFC4F4E((int)a1, *v10, v32, 0, 0x7Cu, 0); /*0xfffd2d43*/
        sub_FFFCA83C((int)a1, 1u); /*0xfffd2d4b*/
        sub_FFFC4F4E((int)a1, *v10, v32, 0, 0x7Cu, v42); /*0xfffd2d60*/
      }
      sub_FFFC4FB2((int)a1, *v10, v32, 0, 0x54u, 32 * (k | 0x1410)); /*0xfffd2d80*/
      v21 = *v10; /*0xfffd2d8a*/
      while ( (sub_FFFC4EEF((int)a1, v21, v32, 0, 0x5Cu) & 0x80u) == 0 ) /*0xfffd2d9e*/
        ; /*0xfffd2d8c*/
      sub_FFFC4FB2((int)a1, v21, v32, 0, 0x54u, 131840); /*0xfffd2dad*/
    }
  }
  result = j; /*0xfffd2dc2*/
  if ( *(_BYTE *)(j + 2) < 3u ) /*0xfffd2dc9*/
  {
    result = (unsigned int)v31; /*0xfffd2dcb*/
    if ( v31[3758] == 3 ) /*0xfffd2dd5*/
      result = sub_FFFC4F4E((int)a1, *v10, v32, 0, 0x7Cu, v24); /*0xfffd2de7*/
  }
  if ( a1[3755] ) /*0xfffd2def*/
  {
    result = (unsigned int)(a1 + 5512); /*0xfffd2df8*/
    v38 = 0; /*0xfffd2dfe*/
    v23 = a1 + 5512; /*0xfffd2e02*/
    do /*0xfffd2e35*/
    {
      if ( *v23 ) /*0xfffd2e04*/
      {
        if ( (a1[3760] & 4) != 0 ) /*0xfffd2e10*/
        {
          sub_FFFCC773((int)a1, 0, v38); /*0xfffd2e18*/
          result = sub_FFFCA83C((int)a1, 1u); /*0xfffd2e20*/
        }
      }
      ++v38; /*0xfffd2e28*/
      v23 += 430; /*0xfffd2e2b*/
    }
    while ( v38 < 3u ); /*0xfffd2e35*/
  }
  return result; /*0xfffd2e37*/
}

/* 0xfffd2e3c sub_FFFD2E3C */
char __cdecl sub_FFFD2E3C(_BYTE *a1, unsigned int a2, char a3)
{
  _BYTE *v3; // ecx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  char v7; // dl
  char v8; // al
  int v9; // edx
  int v10; // eax
  _BYTE *v11; // ebx
  unsigned __int16 *v12; // edi
  int v13; // edi
  int v14; // edx
  unsigned __int8 v15; // al
  unsigned __int16 *v16; // edi
  unsigned __int8 v17; // bl
  char result; // al
  int v19; // [esp+Ch] [ebp-44h]
  int v20; // [esp+10h] [ebp-40h]
  int v21; // [esp+14h] [ebp-3Ch]
  unsigned __int16 v22; // [esp+1Ch] [ebp-34h]
  unsigned __int8 v23; // [esp+20h] [ebp-30h]
  int v24; // [esp+24h] [ebp-2Ch]
  int v25; // [esp+28h] [ebp-28h]
  _BYTE *v26; // [esp+2Ch] [ebp-24h]
  unsigned __int8 *v27; // [esp+30h] [ebp-20h]
  unsigned __int8 v28; // [esp+34h] [ebp-1Ch]
  int v29; // [esp+38h] [ebp-18h]
  unsigned __int8 i; // [esp+3Ch] [ebp-14h]
  unsigned __int8 v31; // [esp+40h] [ebp-10h]
  unsigned __int8 v32; // [esp+44h] [ebp-Ch]
  unsigned __int8 v33; // [esp+4Bh] [ebp-5h]
  unsigned __int8 v34; // [esp+4Fh] [ebp-1h]

  v31 = 0; /*0xfffd2e48*/
LABEL_2:
  v33 = 0; /*0xfffd2e4c*/
  while ( 1 )
  {
    if ( a1[3755] )
    {
      v24 = 0; /*0xfffd2e5d*/
      v25 = 0; /*0xfffd2e61*/
      v3 = a1 + 5574; /*0xfffd2e6b*/
      v32 = 4; /*0xfffd2e71*/
      v27 = a1 + 5514; /*0xfffd2e75*/
      v26 = a1 + 5574; /*0xfffd2e78*/
      do
      {
        if ( *(v27 - 2) )
        {
          v4 = 184 * v31; /*0xfffd2e8e*/
          v29 = (int)&a1[212 * v31 + 7918 + v24]; /*0xfffd2ea9*/
          v21 = v4; /*0xfffd2eac*/
          if ( v3[v4 + 1] )
          {
            if ( !v3[v4 + 2] )
            {
              v5 = (int)&a1[v25 + 5630 + v4]; /*0xfffd2ec9*/
              v6 = 32 * v33; /*0xfffd2ed0*/
              v19 = v5; /*0xfffd2ed7*/
              if ( *(_BYTE *)(v6 + v5) )
              {
                v7 = 1; /*0xfffd2ee6*/
                v8 = 0; /*0xfffd2ee8*/
                if ( (a3 & 1) == 0 ) /*0xfffd2eec*/
                {
                  do /*0xfffd2ef4*/
                  {
                    v7 *= 2; /*0xfffd2eee*/
                    ++v8; /*0xfffd2ef0*/
                  }
                  while ( ((unsigned __int8)v7 & (unsigned __int8)a3) == 0 ); /*0xfffd2ef4*/
                }
                v23 = v32 - 4; /*0xfffd2f01*/
                sub_FFFD8EAB(a1, v8 + 1, v33 + 16 * (v31 + 16 * (unsigned __int8)(v32 - 4))); /*0xfffd2f1c*/
                v9 = 32 * *(unsigned __int8 *)(v6 + v5 + 1); /*0xfffd2f26*/
                v20 = v9; /*0xfffd2f30*/
                if ( a3 == 2 ) /*0xfffd2f33*/
                  sub_FFFC4F7F((int)a1, a1[6997], v32, 0, 0xA0u, 256); /*0xfffd2f4e*/
                if ( a3 == 4 ) /*0xfffd2f5a*/
                {
                  for ( i = 0; i < *v27; ++i ) /*0xfffd2f63*/
                  {
                    v10 = 184 * i; /*0xfffd2f77*/
                    if ( v26[v10 + 1] && !v26[v10 + 2] ) /*0xfffd2f85*/
                    {
                      v28 = 0; /*0xfffd2f9a*/
                      v11 = &a1[v25 + 5630 + v10]; /*0xfffd2f9e*/
                      v12 = (unsigned __int16 *)&a1[212 * v31 + 7920 + v24]; /*0xfffd2fa0*/
                      do /*0xfffd2fe6*/
                      {
                        if ( *v11 && (i != v31 || v28 != v33) ) /*0xfffd2fb6*/
                          sub_FFFCC552((int)a1, 0, v23, i, v28, *v12 | 0x1000, 1u); /*0xfffd2fd1*/
                        ++v28; /*0xfffd2fd9*/
                        v11 += 32; /*0xfffd2fdc*/
                        v12 += 3; /*0xfffd2fdf*/
                      }
                      while ( v28 < 4u ); /*0xfffd2fe6*/
                    }
                  }
                  if ( (v33 & 1) != 0 && v26[v21 + 10] ) /*0xfffd3005*/
                  {
                    v13 = 6 * v33; /*0xfffd3016*/
                    v22 = sub_FFFC3778((int)a1, *(unsigned __int16 *)(v13 + v29 + 4)); /*0xfffd3026*/
                  }
                  else
                  {
                    v13 = 6 * v33; /*0xfffd3035*/
                    v22 = *(_WORD *)(v13 + v29 + 2); /*0xfffd303c*/
                  }
                  v5 = v19; /*0xfffd3048*/
                  sub_FFFCC552((int)a1, 0, v23, v31, v33, *(unsigned __int16 *)(v13 + v29 + 2) | 0x80, 1u); /*0xfffd305f*/
                  a1[v24 + 7088] = sub_FFFC4E96((int)a1, a1[6997], v32, 0, 0x7Cu); /*0xfffd3080*/
                  sub_FFFC4F4E((int)a1, a1[6997], v32, 0, 0x7Cu, 1 << *(_BYTE *)(32 * v33 + v19 + 1)); /*0xfffd30a3*/
                  sub_FFFC4FB2((int)a1, a1[6997], v32, 0, 0x70u, (v22 << 16) + *(unsigned __int16 *)(v13 + v29)); /*0xfffd30cd*/
                  sub_FFFC4F7F((int)a1, a1[6997], v32, 0, 0x74u, *(_WORD *)(v13 + v29 + 4)); /*0xfffd30ec*/
                  sub_FFFC4F7F((int)a1, a1[6997], v32, 0, 0xA0u, 1 << *(_BYTE *)(v14 + v19 + 5)); /*0xfffd310f*/
                  v9 = v20; /*0xfffd3114*/
                  v6 = 32 * v33; /*0xfffd3117*/
                }
                if ( a3 == 1 )
                {
                  if ( v33 )
                  {
                    v15 = *(_BYTE *)(v6 + v5 + 2); /*0xfffd3131*/
                    if ( v15 == *(_BYTE *)(v6 + v5 - 30) )
                    {
                      v16 = (unsigned __int16 *)&a1[148 * v15 + 328]; /*0xfffd3147*/
                      v34 = 0; /*0xfffd3156*/
                      v17 = v26[v21 + 12] == 0 ? 9 : 18;
                      if ( (v26[v21 + 12] == 0 ? 0 : 9) != 0xF7 )
                      {
                        do /*0xfffd31af*/
                        {
                          if ( a1[3733] || v34 != 8 && v34 != 17 ) /*0xfffd317a*/
                          {
                            sub_FFFC8367((int)a1, a1[6997], v23, (int)&a1[2 * *v16 + 2017 + *v16], 0, 0); /*0xfffd319b*/
                            v9 = v20; /*0xfffd31a0*/
                          }
                          ++v34; /*0xfffd31a6*/
                          v16 += 4; /*0xfffd31a9*/
                        }
                        while ( v34 < v17 ); /*0xfffd31af*/
                      }
                    }
                  }
                }
                a2 = v9 | a2 & 0xFFFFFF1F; /*0xfffd31bc*/
                sub_FFFC4FB2((int)a1, a1[6997], v32, 0, 0x54u, a2); /*0xfffd31d0*/
                v3 = v26; /*0xfffd31d5*/
              }
            }
          }
        }
        v24 += 1068; /*0xfffd31db*/
        v27 += 430; /*0xfffd31e7*/
        v25 += 430; /*0xfffd31ea*/
        v3 += 430; /*0xfffd31ed*/
        ++v32; /*0xfffd31ef*/
        v26 = v3; /*0xfffd31f9*/
      }
      while ( (unsigned __int8)(v32 - 4) < 3u );
    }
    result = sub_FFFCE91F(a1, a3, v31, v33); /*0xfffd320c*/
    if ( (unsigned __int8)result > 1u ) /*0xfffd3216*/
      return result; /*0xfffd3232*/
    if ( ++v33 >= 4u ) /*0xfffd321f*/
    {
      if ( ++v31 < 2u ) /*0xfffd322c*/
        goto LABEL_2; /*0xfffd322c*/
      return result; /*0xfffd322c*/
    }
  }
}

/* 0xfffd3237 sub_FFFD3237 */
int __cdecl sub_FFFD3237(int a1, char a2, unsigned __int8 a3, unsigned __int8 a4, char a5, char a6, char a7, char a8)
{
  int v8; // eax
  int v9; // edi
  _BYTE *v10; // eax
  int v11; // edx
  int v12; // ecx
  _BYTE *v13; // edx
  _WORD *v14; // ecx
  int v15; // ebx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int *v19; // ebx
  unsigned __int16 *v20; // edi
  char v21; // cl
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  _BYTE *v25; // ecx
  bool v26; // zf
  int v27; // edx
  unsigned __int16 *v28; // ebx
  _DWORD *v29; // eax
  unsigned __int16 *v30; // edi
  char v31; // cl
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // ax
  unsigned __int8 v34; // dl
  _BYTE *v35; // edi
  int v36; // eax
  int v37; // eax
  int v38; // edi
  unsigned __int8 v39; // bl
  int v40; // edx
  _BYTE *v41; // edi
  char v42; // al
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // edi
  int v47; // edi
  int v48; // edi
  int v49; // ecx
  int *v50; // edx
  int v51; // eax
  int v52; // eax
  int v53; // edi
  int v54; // edx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  char v61; // bl
  unsigned __int8 v62; // bl
  int v63; // edx
  int v64; // ecx
  int v65; // ecx
  __int16 v66; // di
  __int16 v67; // cx
  int v68; // eax
  int v69; // eax
  int v70; // edi
  int v71; // ecx
  int v72; // edx
  int v73; // ebx
  int v74; // edx
  _WORD *v75; // edi
  int v76; // eax
  unsigned __int8 v77; // cl
  int v78; // ebx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  int v82; // ebx
  int v83; // eax
  int v84; // eax
  _BYTE *v85; // eax
  __int16 v86; // ax
  unsigned __int8 v87; // cl
  unsigned __int8 v88; // cl
  unsigned __int8 v89; // dl
  _DWORD v91[6]; // [esp+4h] [ebp-8Ch]
  int v92; // [esp+1Ch] [ebp-74h]
  int v93; // [esp+20h] [ebp-70h]
  int v94; // [esp+24h] [ebp-6Ch]
  int v95; // [esp+28h] [ebp-68h]
  int v96; // [esp+2Ch] [ebp-64h]
  int v97; // [esp+30h] [ebp-60h]
  int v98; // [esp+34h] [ebp-5Ch]
  int v99; // [esp+38h] [ebp-58h] BYREF
  int v100; // [esp+3Ch] [ebp-54h]
  int v101; // [esp+40h] [ebp-50h]
  _BYTE *v102; // [esp+44h] [ebp-4Ch]
  int v103; // [esp+48h] [ebp-48h]
  _BYTE *v104; // [esp+4Ch] [ebp-44h]
  int v105; // [esp+50h] [ebp-40h]
  _BYTE *v106; // [esp+54h] [ebp-3Ch]
  _WORD *v107; // [esp+58h] [ebp-38h]
  int v108; // [esp+5Eh] [ebp-32h]
  int v109; // [esp+62h] [ebp-2Eh]
  char v110; // [esp+66h] [ebp-2Ah]
  unsigned __int8 v111; // [esp+67h] [ebp-29h]
  int v112; // [esp+68h] [ebp-28h]
  unsigned __int16 *v113; // [esp+6Ch] [ebp-24h]
  int *v114; // [esp+70h] [ebp-20h]
  int v115; // [esp+74h] [ebp-1Ch]
  int v116; // [esp+78h] [ebp-18h]
  int v117; // [esp+7Fh] [ebp-11h]
  unsigned __int8 i; // [esp+83h] [ebp-Dh]
  int v119; // [esp+84h] [ebp-Ch]
  int v120; // [esp+88h] [ebp-8h]
  char v121; // [esp+8Ch] [ebp-4h]
  unsigned __int8 v122; // [esp+8Dh] [ebp-3h]
  char v123; // [esp+8Eh] [ebp-2h] BYREF
  unsigned __int8 v124; // [esp+8Fh] [ebp-1h]

  v96 = 0; /*0xfffd3240*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd3248*/
  {
    LOBYTE(v109) = *(_BYTE *)(a1 + 6997); /*0xfffd325b*/
    if ( !a2 ) /*0xfffd325e*/
    {
      if ( a8 ) /*0xfffd3264*/
      {
        v8 = (char)sub_FFFC4FE3( /*0xfffd3286*/
                     a1,
                     v109,
                     3u,
                     *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720) >> 1;
        v101 = v8; /*0xfffd328d*/
        if ( (v8 & 0x20) != 0 ) /*0xfffd3290*/
          v101 = -(v8 & 0x1F); /*0xfffd3297*/
      }
    }
  }
  LOBYTE(v115) = 0; /*0xfffd329b*/
  do
  {
    LOBYTE(v108) = 0; /*0xfffd32a0*/
    do
    {
      LOBYTE(v117) = 0; /*0xfffd32a4*/
      v110 = 0; /*0xfffd32a8*/
      do
      {
        if ( a6 && (_BYTE)v117 ) /*0xfffd32b6*/
          sub_FFFC7365((_BYTE *)a1, 1, a4); /*0xfffd32bb*/
        else
          sub_FFFC7365((_BYTE *)a1, 1, a3); /*0xfffd32c3*/
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd32d4*/
        {
          v123 = 0; /*0xfffd32dd*/
          v9 = 0; /*0xfffd32e1*/
          v10 = (_BYTE *)(a1 + 7575); /*0xfffd32e3*/
          v116 = 3; /*0xfffd32e9*/
          do /*0xfffd334c*/
          {
            if ( *(_BYTE *)(v9 + a1 + 5512) ) /*0xfffd32f0*/
            {
              v11 = (unsigned __int8)v108; /*0xfffd32fe*/
              v12 = 184 * (unsigned __int8)v115; /*0xfffd3302*/
              *((_DWORD *)v10 - 100) = 0; /*0xfffd3308*/
              LOBYTE(v12) = *(_BYTE *)(32 * v11 + v9 + v12 + a1 + 5630); /*0xfffd331b*/
              v123 |= v12; /*0xfffd331e*/
              v110 |= v12; /*0xfffd3321*/
              v13 = v10; /*0xfffd3326*/
              v14 = v10 - 36; /*0xfffd3328*/
              v15 = 18; /*0xfffd332b*/
              do /*0xfffd333c*/
              {
                *v13 = 0; /*0xfffd332c*/
                *(v14 - 18) = 0; /*0xfffd332f*/
                *v14++ = 0; /*0xfffd3334*/
                ++v13; /*0xfffd333a*/
                --v15; /*0xfffd333b*/
              }
              while ( v15 ); /*0xfffd333c*/
            }
            v9 += 430; /*0xfffd333e*/
            v10 += 1068; /*0xfffd3344*/
            --v116; /*0xfffd3349*/
          }
          while ( v116 ); /*0xfffd334c*/
        }
        v111 = 4; /*0xfffd3352*/
        if ( (_BYTE)v117 ) /*0xfffd3356*/
          v111 = 1; /*0xfffd3358*/
        for ( i = 0; i < v111; ++i )
        {
          if ( !v110 ) /*0xfffd336e*/
            continue; /*0xfffd336e*/
          do
          {
            *(_BYTE *)(a1 + 33) = 1; /*0xfffd3374*/
            if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) )
            {
              v104 = (_BYTE *)(a1 + 5512); /*0xfffd3398*/
              v114 = (int *)(a1 + 7175); /*0xfffd33a3*/
              v100 = -5574 - a1; /*0xfffd33b3*/
              LOBYTE(v120) = 0; /*0xfffd33b6*/
              v102 = nullptr; /*0xfffd33ba*/
              v105 = 0; /*0xfffd33bd*/
              v112 = 0; /*0xfffd33c0*/
              v113 = (unsigned __int16 *)(a1 + 5574); /*0xfffd33c3*/
              while ( 1 )
              {
                if ( *v104 )
                {
                  v16 = 92 * (unsigned __int8)v115; /*0xfffd33d9*/
                  v17 = (int)v113 + v100 + v16 * 2 + a1 + 5630; /*0xfffd33e6*/
                  v18 = 32 * (unsigned __int8)v108; /*0xfffd33f1*/
                  if ( *(_BYTE *)(v18 + v17) )
                  {
                    if ( !LOBYTE(v113[v16 + 1]) )
                    {
                      v19 = v114; /*0xfffd340c*/
                      v20 = &v113[v16 + 6]; /*0xfffd340f*/
                      v21 = *(_BYTE *)(a1 + 3733); /*0xfffd3416*/
                      v22 = *(_BYTE *)v20 ? (v21 != 0 ? 0x3FFFF : 130815) : v21 != 0 ? 511 : 255;
                      *v114 = v22; /*0xfffd3440*/
                      v23 = *(unsigned __int8 *)(v18 + v17 + 2); /*0xfffd3442*/
                      v24 = *v19; /*0xfffd344a*/
                      v25 = (_BYTE *)(4 * (_DWORD)v102); /*0xfffd344c*/
                      *(_DWORD *)((char *)&v91[3] + (_DWORD)v25) = 0; /*0xfffd344f*/
                      v26 = *(_BYTE *)v20 == 0; /*0xfffd3454*/
                      *(_DWORD *)((char *)v91 + (_DWORD)v25) = v24; /*0xfffd3457*/
                      v122 = v26 ? 9 : 18;
                      v27 = 148 * v23 + a1 + 328; /*0xfffd347f*/
                      v28 = (unsigned __int16 *)(v105 + 144 * v23 + a1 + 3780); /*0xfffd3486*/
                      v124 = 0; /*0xfffd348d*/
                      if ( (v26 ? 0 : 9) != 0xF7 )
                        break; /*0xfffd3491*/
                    }
                  }
                }
LABEL_58:
                LOBYTE(v120) = v120 + 1; /*0xfffd3616*/
                ++v102; /*0xfffd3619*/
                v112 += 534; /*0xfffd361c*/
                v105 += 578; /*0xfffd3623*/
                v114 += 267; /*0xfffd362a*/
                v104 += 430; /*0xfffd3636*/
                v113 += 215; /*0xfffd3639*/
                if ( (unsigned __int8)v120 >= 3u ) /*0xfffd3640*/
                  goto LABEL_59; /*0xfffd3640*/
              }
              v119 = 0; /*0xfffd349a*/
              v29 = (int *)((char *)v114 + 22); /*0xfffd349e*/
              v106 = (char *)v28 - v27; /*0xfffd34a4*/
              v30 = (unsigned __int16 *)(v27 + 6); /*0xfffd34a7*/
              v107 = (_WORD *)v114 + 11; /*0xfffd34aa*/
              while ( 1 ) /*0xfffd34ad*/
              {
                v31 = v117; /*0xfffd34ad*/
                if ( (_BYTE)v117 ) /*0xfffd34b2*/
                {
                  v29[18] = 0; /*0xfffd34c4*/
                }
                else
                {
                  *v29 = -32; /*0xfffd34b7*/
                  v29[36] = -32; /*0xfffd34b9*/
                  v29[18] = -32; /*0xfffd34bf*/
                }
                if ( !*(_BYTE *)(a1 + 3733) && (v124 == 8 || v124 == 17) || i ) /*0xfffd34e9*/
                  goto LABEL_57; /*0xfffd34e9*/
                if ( a2 ) /*0xfffd34f3*/
                {
                  switch ( v31 ) /*0xfffd3576*/
                  {
                    case 1: /*0xfffd3576*/
                      v33 = *v107 + *(_WORD *)(a1 + 2 * (v119 + v112) + 7467); /*0xfffd358b*/
LABEL_56:
                      sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v120, *v30 + a1 + 2 * *v30 + 2017, v33, 0); /*0xfffd35cc*/
                      break; /*0xfffd35ed*/
                    case 2: /*0xfffd3576*/
                      v33 = v107[72] + *(_WORD *)(a1 + 2 * (v119 + v112) + 7467); /*0xfffd35a8*/
                      goto LABEL_56; /*0xfffd35af*/
                    case 0: /*0xfffd3576*/
                      v33 = *(unsigned __int16 *)((char *)v30 + (_DWORD)v106); /*0xfffd35be*/
                      *(_WORD *)(a1 + 2 * (v119 + v112) + 7467) = v33; /*0xfffd35c4*/
                      goto LABEL_56; /*0xfffd35c4*/
                  }
                }
                else
                {
                  switch ( v31 ) /*0xfffd34f7*/
                  {
                    case 0: /*0xfffd34f7*/
                      *(_WORD *)(a1 + 2 * (v119 + v112) + 7467) = *v28; /*0xfffd3504*/
                      v32 = *v28 & 0xFFC0 | 0x20; /*0xfffd3516*/
                      *v28 = v32; /*0xfffd3519*/
LABEL_49:
                      sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v120, *(v30 - 3) + a1 + 2 * *(v30 - 3) + 2017, v32, 0); /*0xfffd3567*/
                      break; /*0xfffd3571*/
                    case 1: /*0xfffd34f7*/
                      *(_WORD *)(a1 + 2 * (v119 + v112) + 7467) = *v28; /*0xfffd352e*/
                      v32 = *v107 + (*v28 & 0xFFC0 | 0x20); /*0xfffd3544*/
                      goto LABEL_49; /*0xfffd3547*/
                    case 2: /*0xfffd34f7*/
                      v32 = v107[72] + (*v28 & 0xFFC0 | 0x20); /*0xfffd3560*/
                      goto LABEL_49; /*0xfffd3560*/
                  }
                }
LABEL_57:
                ++v124; /*0xfffd35f5*/
                ++v119; /*0xfffd35fe*/
                v29 = v107 + 2; /*0xfffd3601*/
                v28 += 4; /*0xfffd3604*/
                v30 += 4; /*0xfffd3607*/
                v107 += 2; /*0xfffd360d*/
                if ( v124 >= v122 ) /*0xfffd3610*/
                  goto LABEL_58; /*0xfffd3610*/
              }
            }
LABEL_59:
            sub_FFFC94EC((_BYTE *)a1); /*0xfffd3646*/
            *(_BYTE *)(a1 + 33) = 0; /*0xfffd364c*/
            if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd3650*/
            {
              if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd365a*/
              {
                v34 = *(_BYTE *)(a1 + 6997); /*0xfffd3665*/
                v35 = (_BYTE *)(a1 + 5512); /*0xfffd366b*/
                while ( (sub_FFFC4EEF(a1, v34, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd3689*/
                  ; /*0xfffd3671*/
                if ( a2 != 1 ) /*0xfffd368f*/
                {
                  LOBYTE(v120) = 0; /*0xfffd3691*/
                  do /*0xfffd36b5*/
                  {
                    if ( *v35 ) /*0xfffd3695*/
                      sub_FFFC85B4(a1, 0, v120); /*0xfffd36a0*/
                    LOBYTE(v120) = v120 + 1; /*0xfffd36a8*/
                    v35 += 430; /*0xfffd36ab*/
                  }
                  while ( (unsigned __int8)v120 < 3u ); /*0xfffd36b5*/
                }
              }
            }
            v119 = (_BYTE)v117 != 0 ? 0 : -32;
            do /*0xfffd3ae4*/
            {
              v26 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd36c7*/
              v122 = 0; /*0xfffd36ce*/
              if ( !v26 && *(_BYTE *)(a1 + 3758) && v123 ) /*0xfffd36e1*/
              {
                if ( a2 == 1 ) /*0xfffd36ee*/
                  v36 = *(unsigned __int16 *)(a1 + 182); /*0xfffd36f0*/
                else
                  v36 = *(unsigned __int16 *)(a1 + 188); /*0xfffd36f9*/
                sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), 3u, v36 + a1 + 2 * v36 + 1720, (unsigned __int8)v119, 1u); /*0xfffd3717*/
              }
              sub_FFFC429B(a1); /*0xfffd3720*/
              if ( a8 ) /*0xfffd372a*/
              {
                if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd3730*/
                {
                  if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd373d*/
                  {
                    if ( v123 ) /*0xfffd374a*/
                    {
                      LOBYTE(v109) = *(_BYTE *)(a1 + 6997); /*0xfffd3756*/
                      if ( !a2 ) /*0xfffd3759*/
                      {
                        v37 = v101 + (*(unsigned __int8 *)(a1 + 7003) - v101) / 2; /*0xfffd376a*/
                        if ( v37 < 0 ) /*0xfffd376d*/
                          v37 = -v37 | 0x20; /*0xfffd3771*/
                        v38 = v37; /*0xfffd3774*/
                        sub_FFFC8367( /*0xfffd3792*/
                          a1,
                          v109,
                          3u,
                          *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                          0,
                          1u);
                        sub_FFFC8367( /*0xfffd37b5*/
                          a1,
                          v109,
                          3u,
                          *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                          2 * v38,
                          1u);
                      }
                    }
                  }
                }
              }
              v39 = v108; /*0xfffd37bd*/
              sub_FFFD0325((_BYTE *)a1, v115, v108, a5, &v99, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd37db*/
              sub_FFFCA29D((_BYTE *)a1, v115, v39, &v123, 0x3Fu, &v99); /*0xfffd37ef*/
              if ( a7 ) /*0xfffd37fb*/
                sub_FFFD04F3(a1, v115, v39, &v99, -1); /*0xfffd3808*/
              if ( a8 ) /*0xfffd3814*/
              {
                v26 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd381a*/
                v121 = 1; /*0xfffd3821*/
                if ( !v26 && *(_BYTE *)(a1 + 3758) && v123 ) /*0xfffd3834*/
                {
                  v40 = 0; /*0xfffd383c*/
                  v41 = (_BYTE *)(a1 + 5512); /*0xfffd383e*/
                  v116 = 3; /*0xfffd3840*/
                  do /*0xfffd388c*/
                  {
                    if ( *v41 ) /*0xfffd3847*/
                    {
                      v42 = *(_BYTE *)(a1 + 3733); /*0xfffd384c*/
                      v124 = 0; /*0xfffd3852*/
                      v43 = 0; /*0xfffd3856*/
                      do /*0xfffd387b*/
                      {
                        if ( (v42 || v124 != 8) && !*(_BYTE *)(v40 + v43 + a1 + 7179) ) /*0xfffd3865*/
                          v121 = 0; /*0xfffd386f*/
                        ++v124; /*0xfffd3873*/
                        ++v43; /*0xfffd3876*/
                      }
                      while ( v124 < 9u ); /*0xfffd387b*/
                    }
                    v40 += 1068; /*0xfffd387d*/
                    v41 += 430; /*0xfffd3883*/
                    --v116; /*0xfffd3889*/
                  }
                  while ( v116 ); /*0xfffd388c*/
                  v39 = v108; /*0xfffd388e*/
                }
                if ( !v121 ) /*0xfffd3895*/
                {
                  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd389b*/
                  {
                    if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd38a8*/
                    {
                      if ( v123 ) /*0xfffd38b9*/
                      {
                        LOBYTE(v109) = *(_BYTE *)(a1 + 6997); /*0xfffd38c5*/
                        if ( !a2 ) /*0xfffd38c8*/
                        {
                          v44 = (v101 + *(unsigned __int8 *)(a1 + 7002)) / 2; /*0xfffd38d7*/
                          if ( v44 > 4 ) /*0xfffd38dc*/
                            v44 = 4; /*0xfffd38e0*/
                          v45 = v101 - v44; /*0xfffd38e4*/
                          if ( v101 - v44 < 0 ) /*0xfffd38e6*/
                            v45 = (v44 - v101) | 0x20; /*0xfffd38ea*/
                          v46 = v45; /*0xfffd38f6*/
                          sub_FFFC8367( /*0xfffd390b*/
                            a1,
                            v109,
                            3u,
                            *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                            0,
                            1u);
                          sub_FFFC8367( /*0xfffd392e*/
                            a1,
                            v109,
                            3u,
                            *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                            2 * v46,
                            1u);
                        }
                      }
                    }
                  }
                  sub_FFFD0325((_BYTE *)a1, v115, v39, a5, &v99, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd3951*/
                  sub_FFFCA29D((_BYTE *)a1, v115, v39, &v123, 0x3Fu, &v99); /*0xfffd3965*/
                  if ( a7 ) /*0xfffd3971*/
                    sub_FFFD04F3(a1, v115, v39, &v99, -1); /*0xfffd397e*/
                }
                if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd3986*/
                {
                  if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd398f*/
                  {
                    if ( v123 ) /*0xfffd399c*/
                    {
                      LOBYTE(v109) = *(_BYTE *)(a1 + 6997); /*0xfffd39a8*/
                      if ( !a2 ) /*0xfffd39ab*/
                      {
                        v47 = v101; /*0xfffd39ad*/
                        if ( v101 < 0 ) /*0xfffd39b2*/
                          v47 = -v101 | 0x20; /*0xfffd39b6*/
                        sub_FFFC8367( /*0xfffd39d5*/
                          a1,
                          v109,
                          3u,
                          *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                          0,
                          1u);
                        sub_FFFC8367( /*0xfffd39f8*/
                          a1,
                          v109,
                          3u,
                          *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720,
                          2 * v47,
                          1u);
                      }
                    }
                  }
                }
              }
              sub_FFFCA406((_BYTE *)a1, v115, v39, v117, &v123, v119, &v99); /*0xfffd3a13*/
              if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) && v123 ) /*0xfffd3a39*/
              {
                v48 = 0; /*0xfffd3a3f*/
                v49 = 0; /*0xfffd3a41*/
                v50 = (int *)(a1 + 7175); /*0xfffd3a43*/
                v116 = 3; /*0xfffd3a49*/
                while ( 1 ) /*0xfffd3a50*/
                {
                  if ( !*(_BYTE *)(v49 + a1 + 5512) ) /*0xfffd3a50*/
                    goto LABEL_134; /*0xfffd3a50*/
                  v51 = v49 + 184 * (unsigned __int8)v115; /*0xfffd3a68*/
                  if ( !*(_BYTE *)(v51 + 32 * (unsigned __int8)v108 + a1 + 5630) || *(_BYTE *)(v51 + a1 + 5576) ) /*0xfffd3a79*/
                    goto LABEL_134; /*0xfffd3a81*/
                  v52 = *v50; /*0xfffd3a83*/
                  if ( !*v50 ) /*0xfffd3a83*/
                    v91[v48 + 3] = 1; /*0xfffd3a89*/
                  if ( !(_BYTE)v117 ) /*0xfffd3a95*/
                    break; /*0xfffd3a95*/
                  if ( !v91[v48 + 3] ) /*0xfffd3a97*/
                    goto LABEL_133; /*0xfffd3a9c*/
LABEL_134:
                  ++v48; /*0xfffd3ab4*/
                  v49 += 430; /*0xfffd3ab5*/
                  v50 += 267; /*0xfffd3abb*/
                  if ( !--v116 ) /*0xfffd3ac4*/
                    goto LABEL_135; /*0xfffd3ac4*/
                }
                if ( v91[v48 + 3] && v91[v48] == v52 ) /*0xfffd3aae*/
                  goto LABEL_134; /*0xfffd3aae*/
LABEL_133:
                v122 = 1; /*0xfffd3ab0*/
                goto LABEL_134; /*0xfffd3ab0*/
              }
LABEL_135:
              if ( (_BYTE)v117 == 2 ) /*0xfffd3aca*/
                --v119; /*0xfffd3acc*/
              else
                ++v119; /*0xfffd3ad1*/
            }
            while ( v119 != 32 && v122 && v119 != -33 ); /*0xfffd3ae4*/
            if ( (_BYTE)v117 ) /*0xfffd3aee*/
            {
              if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) && v123 ) /*0xfffd3b12*/
              {
                v53 = 0; /*0xfffd3b18*/
                v54 = 0; /*0xfffd3b1a*/
                v116 = 3; /*0xfffd3b1c*/
                do /*0xfffd3bd5*/
                {
                  if ( *(_BYTE *)(v54 + a1 + 5512) ) /*0xfffd3b23*/
                  {
                    v55 = v54 + 184 * (unsigned __int8)v115; /*0xfffd3b3f*/
                    if ( *(_BYTE *)(v55 + 32 * (unsigned __int8)v108 + a1 + 5630) ) /*0xfffd3b46*/
                    {
                      if ( !*(_BYTE *)(v55 + a1 + 5576) ) /*0xfffd3b50*/
                      {
                        v124 = 0; /*0xfffd3b5a*/
                        v56 = 0; /*0xfffd3b5e*/
                        do /*0xfffd3bc4*/
                        {
                          if ( *(_BYTE *)(a1 + 3733) || v124 != 8 ) /*0xfffd3b6d*/
                          {
                            if ( (_BYTE)v117 == 1 ) /*0xfffd3b73*/
                            {
                              v57 = a1 + 4 * (v53 + v56) + 7086; /*0xfffd3b78*/
                              *(_DWORD *)(v57 + 111) += *(_DWORD *)(a1 + 4 * (v53 + v56) + 7269); /*0xfffd3b85*/
                              *(_DWORD *)(v57 + 147) += *(_DWORD *)(a1 + 4 * (v53 + v56) + 7305); /*0xfffd3b8e*/
                            }
                            if ( (_BYTE)v117 == 2 ) /*0xfffd3b98*/
                            {
                              v58 = a1 + 4 * (v53 + v56) + 7086; /*0xfffd3b9d*/
                              *(_DWORD *)(v58 + 255) += *(_DWORD *)(a1 + 4 * (v53 + v56) + 7269); /*0xfffd3baa*/
                              *(_DWORD *)(v58 + 291) += *(_DWORD *)(a1 + 4 * (v53 + v56) + 7305); /*0xfffd3bb6*/
                            }
                          }
                          ++v124; /*0xfffd3bbc*/
                          ++v56; /*0xfffd3bbf*/
                        }
                        while ( v124 < 9u ); /*0xfffd3bc4*/
                      }
                    }
                  }
                  v53 += 267; /*0xfffd3bc6*/
                  v54 += 430; /*0xfffd3bcc*/
                  --v116; /*0xfffd3bd2*/
                }
                while ( v116 ); /*0xfffd3bd5*/
              }
              LOBYTE(v117) = v117 + 1; /*0xfffd3bdb*/
            }
          }
          while ( (_BYTE)v117 == 2 );
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) )
          {
            v105 = 0; /*0xfffd3c04*/
            v104 = nullptr; /*0xfffd3c07*/
            v113 = nullptr; /*0xfffd3c0a*/
            v114 = nullptr; /*0xfffd3c0d*/
            v59 = a1 + 5574; /*0xfffd3c16*/
            v106 = (_BYTE *)(a1 + 5512); /*0xfffd3c1c*/
            v116 = a1 + 5574; /*0xfffd3c1f*/
            v98 = 3; /*0xfffd3c22*/
            do
            {
              if ( *v106 )
              {
                v97 = (unsigned __int8)v115; /*0xfffd3c39*/
                v60 = 184 * (unsigned __int8)v115; /*0xfffd3c3c*/
                if ( !*(_BYTE *)(v59 + v60 + 2) )
                {
                  v26 = *(_BYTE *)(v59 + v60 + 12) == 0; /*0xfffd3c4d*/
                  v124 = 0; /*0xfffd3c52*/
                  v61 = v26 ? 0 : 9;
                  v26 = v61 == -9; /*0xfffd3c5e*/
                  v62 = v61 + 9; /*0xfffd3c5e*/
                  v122 = v62; /*0xfffd3c61*/
                  if ( !v26 ) /*0xfffd3c64*/
                  {
                    v63 = 0; /*0xfffd3c6a*/
                    do /*0xfffd3d44*/
                    {
                      if ( *(_BYTE *)(a1 + 3733) || v124 != 8 && v124 != 17 ) /*0xfffd3c83*/
                      {
                        if ( !(_BYTE)v117 && ((1 << v63) & *(int *)((char *)v114 + a1 + 7175)) == 0 ) /*0xfffd3ca0*/
                        {
                          v64 = *(_DWORD *)(a1 + 4 * ((_DWORD)v113 + v63) + 7269); /*0xfffd3cae*/
                          v103 = a1 + 4 * ((_DWORD)v113 + v63) + 7341; /*0xfffd3cba*/
                          v62 = v122; /*0xfffd3cc9*/
                          if ( 31 - v64 > *(_DWORD *)v103 - *(_DWORD *)(a1 + 4 * ((_DWORD)v113 + v63) + 7197) ) /*0xfffd3ccc*/
                          {
                            *(_DWORD *)(a1 + 4 * ((_DWORD)v113 + v63) + 7197) = v64; /*0xfffd3cce*/
                            *(_DWORD *)v103 = 32; /*0xfffd3cd4*/
                          }
                        }
                        v65 = a1 + 4 * ((_DWORD)v113 + v63) + 7086; /*0xfffd3cdf*/
                        if ( *(_DWORD *)(a1 + 4 * ((_DWORD)v113 + v63) + 7341) == -32 ) /*0xfffd3ced*/
                        {
                          v96 |= 1 << (v97 + 2 * v105); /*0xfffd3cfd*/
                        }
                        else
                        {
                          ++*((_BYTE *)v114 + v63 + a1 + 7575); /*0xfffd3d0e*/
                          v66 = *(_WORD *)(v65 + 255); /*0xfffd3d13*/
                          v67 = *(_WORD *)(v65 + 111); /*0xfffd3d1a*/
                          v68 = a1 + 2 * (_DWORD)&v104[v63] + 7086; /*0xfffd3d20*/
                          *(_WORD *)(v68 + 453) += v66 + 32; /*0xfffd3d2b*/
                          *(_WORD *)(v68 + 417) += v67 + 32; /*0xfffd3d36*/
                        }
                      }
                      ++v124; /*0xfffd3d3d*/
                      ++v63; /*0xfffd3d40*/
                    }
                    while ( v124 < v62 ); /*0xfffd3d44*/
                    v59 = v116; /*0xfffd3d4a*/
                  }
                }
              }
              ++v105; /*0xfffd3d4d*/
              v114 += 267; /*0xfffd3d50*/
              v113 = (unsigned __int16 *)((char *)v113 + 267); /*0xfffd3d57*/
              v104 += 534; /*0xfffd3d5e*/
              v106 += 430; /*0xfffd3d6a*/
              v59 += 430; /*0xfffd3d6d*/
              v26 = v98-- == 1; /*0xfffd3d6f*/
              v116 = v59; /*0xfffd3d72*/
            }
            while ( !v26 );
          }
        }
        LOBYTE(v117) = v117 + 1; /*0xfffd3d8a*/
        *(_BYTE *)(a1 + 33) = 1; /*0xfffd3d8d*/
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) )
        {
          v116 = a1 + 5512; /*0xfffd3db3*/
          v100 = -5574 - a1; /*0xfffd3dc3*/
          LOBYTE(v120) = 0; /*0xfffd3dc6*/
          v98 = 0; /*0xfffd3dca*/
          v107 = nullptr; /*0xfffd3dcd*/
          v97 = 0; /*0xfffd3dd0*/
          v94 = 0; /*0xfffd3dd3*/
          v106 = (_BYTE *)(a1 + 5574); /*0xfffd3dd6*/
          while ( 1 ) /*0xfffd3ddc*/
          {
            if ( *(_BYTE *)v116 ) /*0xfffd3ddc*/
            {
              v69 = 184 * (unsigned __int8)v115; /*0xfffd3dec*/
              v70 = (int)&v106[v69 + 5630 + v100 + a1]; /*0xfffd3df7*/
              v71 = 32 * (unsigned __int8)v108; /*0xfffd3e02*/
              v102 = (_BYTE *)(v71 + v70 + 2); /*0xfffd3e09*/
              v72 = v98 + 144 * (unsigned __int8)*v102; /*0xfffd3e1d*/
              v26 = *(_BYTE *)(v71 + v70) == 0; /*0xfffd3e20*/
              v73 = 148 * (unsigned __int8)*v102 + a1 + 328; /*0xfffd3e24*/
              v95 = v70; /*0xfffd3e2b*/
              v93 = v71; /*0xfffd3e2e*/
              v103 = v73; /*0xfffd3e31*/
              v74 = v72 + a1 + 3780; /*0xfffd3e34*/
              if ( !v26 && !v106[v69 + 2] ) /*0xfffd3e44*/
                break; /*0xfffd3e44*/
            }
LABEL_236:
            LOBYTE(v120) = v120 + 1; /*0xfffd4164*/
            v94 += 267; /*0xfffd4167*/
            v97 += 1068; /*0xfffd416e*/
            v107 += 267; /*0xfffd4175*/
            v98 += 578; /*0xfffd417c*/
            v116 += 430; /*0xfffd4188*/
            v106 += 430; /*0xfffd418b*/
            if ( (unsigned __int8)v120 >= 3u ) /*0xfffd4192*/
              goto LABEL_237; /*0xfffd4192*/
          }
          v26 = v106[v69 + 12] == 0; /*0xfffd3e4f*/
          v124 = 0; /*0xfffd3e54*/
          v122 = v26 ? 9 : 18;
          v112 = 0; /*0xfffd3e6a*/
          v114 = (int *)(v73 - v74); /*0xfffd3e73*/
          v113 = (unsigned __int16 *)v73; /*0xfffd3e76*/
          v75 = (_WORD *)(v74 + 6); /*0xfffd3e79*/
          while ( 2 ) /*0xfffd3e93*/
          {
            if ( !*(_BYTE *)(a1 + 3733) && (v124 == 8 || v124 == 17) ) /*0xfffd3e93*/
              goto LABEL_235; /*0xfffd3e93*/
            v76 = v97 + v112 + a1 + 7086; /*0xfffd3ea1*/
            v77 = *(_BYTE *)(v97 + v112 + a1 + 7575); /*0xfffd3ea8*/
            v104 = (_BYTE *)v76; /*0xfffd3eb0*/
            if ( v77 ) /*0xfffd3eb3*/
            {
              v78 = a1 + 2 * ((_DWORD)v107 + v112) + 7086; /*0xfffd3ec1*/
              v79 = ((v77 >> 1) + *(unsigned __int16 *)(a1 + 2 * ((_DWORD)v107 + v112) + 7503)) / v77; /*0xfffd3ed9*/
              v119 = v78; /*0xfffd3ede*/
              v92 = a1 + 4 * (v94 + v112) + 7086; /*0xfffd3eef*/
              v80 = v79 - 32; /*0xfffd3ef2*/
              *(_DWORD *)(v92 + 111) = v79 - 33; /*0xfffd3ef8*/
              v81 = *(unsigned __int16 *)(v78 + 453); /*0xfffd3f05*/
              v103 = (unsigned __int8)v104[489]; /*0xfffd3f0c*/
              v82 = (int)(((unsigned int)v103 >> 1) + v81) / v103 - 32; /*0xfffd3f1c*/
              *(_DWORD *)(v92 + 255) = v82 + 1; /*0xfffd3f22*/
              v103 = (v82 + v80 - 1) / 2; /*0xfffd3f34*/
              v26 = *(_BYTE *)(v93 + v95 + 3) == 0; /*0xfffd3f3a*/
              v105 = v82; /*0xfffd3f3f*/
              if ( !v26 ) /*0xfffd3f42*/
              {
                if ( (_BYTE)v108 ) /*0xfffd3f4c*/
                {
                  if ( *v102 == *(_BYTE *)(v93 + v95 - 30) ) /*0xfffd3f5d*/
                  {
                    if ( (_BYTE)v117 != 1 ) /*0xfffd3f63*/
                    {
                      if ( v80 >= (unsigned __int8)v104[327] - 32 ) /*0xfffd3f78*/
                        v80 = (unsigned __int8)v104[327] - 32; /*0xfffd3f7a*/
                      v83 = (unsigned __int8)v104[345] - 32; /*0xfffd3f83*/
                      if ( v105 <= v83 ) /*0xfffd3f89*/
                        v83 = v105; /*0xfffd3f8b*/
                      v84 = (v80 + v83) / 2; /*0xfffd3f93*/
                      if ( a2 == 1 ) /*0xfffd3f9b*/
                      {
                        LOWORD(v84) = *(_WORD *)(v119 + 381) + v84; /*0xfffd3fa0*/
                        goto LABEL_203; /*0xfffd3fa0*/
                      }
                      *(v75 - 3) += v84; /*0xfffd3fb2*/
                      LOWORD(v84) = *(v75 - 3); /*0xfffd3fb6*/
LABEL_212:
                      v84 = (unsigned __int16)v84; /*0xfffd4024*/
LABEL_234:
                      sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v120, *v113 + a1 + 2 * *v113 + 2017, v84, 0); /*0xfffd4124*/
                    }
LABEL_235:
                    ++v124; /*0xfffd414b*/
                    ++v112; /*0xfffd4151*/
                    v113 += 4; /*0xfffd4154*/
                    v75 += 4; /*0xfffd4158*/
                    if ( v124 >= v122 ) /*0xfffd415e*/
                      goto LABEL_236; /*0xfffd415e*/
                    continue; /*0xfffd415e*/
                  }
                  LOBYTE(v82) = v105; /*0xfffd3fbc*/
                }
                v85 = v104; /*0xfffd3fbf*/
                v104[345] = v82 + 32; /*0xfffd3fcc*/
                v85[327] = v80 + 32; /*0xfffd3fd2*/
                v86 = *(_WORD *)(v119 + 381); /*0xfffd3fdb*/
                if ( a2 == 1 ) /*0xfffd3fe2*/
                  *v75 = v86; /*0xfffd3fe4*/
                else
                  *(v75 - 3) = v86; /*0xfffd3fec*/
                goto LABEL_235; /*0xfffd3fe7*/
              }
              if ( a2 != 1 ) /*0xfffd3ffb*/
              {
                LOWORD(v84) = v103 + (*(v75 - 3) & 0xFFC0 | 0x20); /*0xfffd401e*/
                *(v75 - 3) = v84; /*0xfffd4020*/
                goto LABEL_212; /*0xfffd4020*/
              }
              LOWORD(v84) = v103 + *(_WORD *)(v119 + 381); /*0xfffd4007*/
LABEL_203:
              *v75 = v84; /*0xfffd3fa7*/
              v84 = (unsigned __int16)v84; /*0xfffd3faa*/
            }
            else
            {
              v121 = *(_BYTE *)(v93 + v95 + 3); /*0xfffd4038*/
              if ( v121 && *v102 == *(_BYTE *)(v93 + v95 + 34) ) /*0xfffd4046*/
              {
                *(_BYTE *)(v97 + v112 + a1 + 7431) = 64; /*0xfffd4048*/
                *(_BYTE *)(v76 + 327) = 0; /*0xfffd404f*/
                goto LABEL_235; /*0xfffd4056*/
              }
              if ( a2 != 1 ) /*0xfffd405f*/
              {
                if ( v121 /*0xfffd40ef*/
                  && (_BYTE)v108
                  && *v102 == *(_BYTE *)(v93 + v95 - 30)
                  && ((v88 = *(_BYTE *)(v97 + v112 + a1 + 7431), v88 != 64) || *(_BYTE *)(v97 + v112 + a1 + 7413) != 1) )
                {
                  *(v75 - 3) += (*(unsigned __int8 *)(v97 + v112 + a1 + 7413) + v88 - 64) / 2; /*0xfffd4104*/
                }
                else
                {
                  *(v75 - 3) = *(_WORD *)(a1 + 2 * ((_DWORD)v107 + v112) + 7467); /*0xfffd411a*/
                }
                v84 = (unsigned __int16)*(v75 - 3); /*0xfffd411e*/
                goto LABEL_234; /*0xfffd411e*/
              }
              if ( v121 /*0xfffd408a*/
                && (_BYTE)v108
                && *v102 == *(_BYTE *)(v93 + v95 - 30)
                && ((v87 = *(_BYTE *)(v97 + v112 + a1 + 7431), v87 != 64) || *(_BYTE *)(v97 + v112 + a1 + 7413) != 1) )
              {
                *v75 += (*(unsigned __int8 *)(v97 + v112 + a1 + 7413) + v87 - 64) / 2; /*0xfffd409f*/
              }
              else
              {
                *v75 = *(_WORD *)(a1 + 2 * ((_DWORD)v107 + v112) + 7467); /*0xfffd40b4*/
              }
              v84 = (unsigned __int16)*v75; /*0xfffd40b7*/
            }
            break;
          }
          sub_FFFC8367( /*0xfffd40c4*/
            a1,
            *(_BYTE *)(a1 + 6997),
            v120,
            *(unsigned __int16 *)((char *)v75 + (_DWORD)v114)
          + a1
          + 2 * *(unsigned __int16 *)((char *)v75 + (_DWORD)v114)
          + 2017,
            v84,
            0);
          goto LABEL_235; /*0xfffd40c4*/
        }
LABEL_237:
        sub_FFFC94EC((_BYTE *)a1); /*0xfffd4198*/
        *(_BYTE *)(a1 + 33) = 0; /*0xfffd419e*/
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd41ac*/
        {
          v89 = *(_BYTE *)(a1 + 6997); /*0xfffd41b7*/
          while ( (sub_FFFC4EEF(a1, v89, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd41d5*/
            ; /*0xfffd41bd*/
        }
      }
      while ( a6 && (_BYTE)v117 == 1 );
      LOBYTE(v108) = v108 + 1; /*0xfffd41e7*/
    }
    while ( (unsigned __int8)v108 < 4u );
    LOBYTE(v115) = v115 + 1; /*0xfffd41f4*/
  }
  while ( (unsigned __int8)v115 < 2u );
  sub_FFFC7CA8((_BYTE *)a1); /*0xfffd4206*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd420b*/
  {
    if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd4218*/
    {
      LOBYTE(v109) = *(_BYTE *)(a1 + 6997); /*0xfffd4227*/
      sub_FFFC8367( /*0xfffd4246*/
        a1,
        v109,
        3u,
        *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
        0,
        1u);
      if ( a2 != 1 ) /*0xfffd4252*/
        sub_FFFC8367( /*0xfffd4270*/
          a1,
          v109,
          3u,
          *(unsigned __int16 *)(a1 + 188) + a1 + 2 * *(unsigned __int16 *)(a1 + 188) + 1720,
          0,
          1u);
    }
  }
  return v96; /*0xfffd427b*/
}

/* 0xfffd427e sub_FFFD427E */
unsigned int __cdecl sub_FFFD427E(_BYTE *a1, char a2)
{
  _BYTE *v2; // edi
  unsigned int result; // eax
  unsigned __int8 v4; // [esp+8h] [ebp-4h]

  if ( a1[3755] && a1[3758] ) /*0xfffd4291*/
  {
    v4 = 0; /*0xfffd429a*/
    v2 = a1 + 5512; /*0xfffd429d*/
    do /*0xfffd42c4*/
    {
      if ( *v2 ) /*0xfffd42a3*/
        result = sub_FFFD294E(a1, 0, v4, a2); /*0xfffd42af*/
      ++v4; /*0xfffd42b7*/
      v2 += 430; /*0xfffd42ba*/
    }
    while ( v4 < 3u ); /*0xfffd42c4*/
  }
  return result; /*0xfffd42c7*/
}

/* 0xfffd42cb sub_FFFD42CB */
void __cdecl sub_FFFD42CB(_BYTE *a1, char a2)
{
  char v3; // cl
  _BYTE *v4; // edi
  unsigned __int8 v5; // dl
  unsigned __int8 i; // [esp+10h] [ebp+8h]

  a1[20] = 1; /*0xfffd42d5*/
  a1[33] = 1; /*0xfffd42d9*/
  if ( a1[3755] && a1[3758] ) /*0xfffd42e9*/
  {
    for ( i = 0; i < 3u; ++i ) /*0xfffd42f5*/
    {
      if ( a1[430 * i + 5512] ) /*0xfffd4305*/
      {
        if ( i ) /*0xfffd4311*/
        {
          if ( i == 2 ) /*0xfffd431f*/
            v3 = a1[7008]; /*0xfffd4321*/
          else
            v3 = 0; /*0xfffd4329*/
        }
        else
        {
          v3 = a1[7007]; /*0xfffd4313*/
        }
        if ( a2 ) /*0xfffd4331*/
        {
          v4 = &a1[i + 7011]; /*0xfffd434c*/
          sub_FFFC9CB1((int)a1, 0, i, -(char)*v4, 1, 0); /*0xfffd435e*/
          *v4 = 0; /*0xfffd4363*/
        }
        else
        {
          a1[i + 7011] += v3; /*0xfffd433a*/
          sub_FFFC9CB1((int)a1, 0, i, v3, 1, 0); /*0xfffd4345*/
        }
      }
    }
    a1[7007] = 0; /*0xfffd4371*/
    a1[7008] = 0; /*0xfffd4377*/
  }
  a1[33] = 0; /*0xfffd437e*/
  if ( a1[3755] && a1[3758] ) /*0xfffd4389*/
  {
    v5 = a1[6997]; /*0xfffd4393*/
    while ( (sub_FFFC4EEF((int)a1, v5, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd43b1*/
      ; /*0xfffd4399*/
  }
  sub_FFFCBF04(a1); /*0xfffd43b4*/
  sub_FFFD427E(a1, 0); /*0xfffd43bb*/
  sub_FFFC94EC(a1); /*0xfffd43c1*/
  a1[20] = 0; /*0xfffd43c9*/
}

/* 0xfffd43d0 sub_FFFD43D0 */
char __cdecl sub_FFFD43D0(
        _BYTE *a1,
        char a2,
        int a3,
        _BYTE *a4,
        char *a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        _BYTE *a9,
        unsigned __int8 a10)
{
  char result; // al
  int v11; // edi
  _BYTE *v12; // esi
  char v13; // al
  unsigned __int8 v14; // dl
  _BYTE *v15; // edx
  char v16; // cl
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // al
  bool v19; // zf
  unsigned __int8 v20; // dl
  char v21; // bl
  int v22; // esi
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // esi
  _BYTE v26[84]; // [esp+Ch] [ebp-120h] BYREF
  _BYTE v27[84]; // [esp+60h] [ebp-CCh] BYREF
  _BYTE v28[84]; // [esp+B4h] [ebp-78h] BYREF
  _BYTE v29[84]; // [esp+108h] [ebp-24h] BYREF
  int i; // [esp+15Ch] [ebp+30h]
  int v31; // [esp+160h] [ebp+34h]
  signed int v32; // [esp+164h] [ebp+38h]
  int v33; // [esp+168h] [ebp+3Ch]
  char v34; // [esp+16Dh] [ebp+41h] BYREF
  char v35; // [esp+16Eh] [ebp+42h] BYREF
  char v36; // [esp+16Fh] [ebp+43h] BYREF
  int v37; // [esp+170h] [ebp+44h]
  unsigned __int8 v38; // [esp+177h] [ebp+4Bh]
  char v39; // [esp+178h] [ebp+4Ch]
  unsigned __int8 v40; // [esp+179h] [ebp+4Dh]
  char v41; // [esp+17Ah] [ebp+4Eh]
  char v42; // [esp+17Bh] [ebp+4Fh]
  unsigned __int8 v43; // [esp+1ABh] [ebp+7Fh]
  unsigned __int8 v44; // [esp+1ABh] [ebp+7Fh]

  result = 2 * a6; /*0xfffd43e2*/
  if ( (unsigned __int8)(2 * a6) > 0x51u ) /*0xfffd43e8*/
    result = sub_FFFD934D(a1, 239, 0); /*0xfffd43f2*/
  if ( a1[3755] && a1[3758] && a1[3770] > 1u ) /*0xfffd4413*/
  {
    memset(v26, 0, 81); /*0xfffd4422*/
    memset(v28, 0, 81); /*0xfffd442c*/
    memset(v27, 0, 81); /*0xfffd4439*/
    result = 0; /*0xfffd443e*/
    memset(v29, 0, 81); /*0xfffd4443*/
    v38 = 0; /*0xfffd4445*/
    v40 = 0; /*0xfffd4449*/
  }
  if ( a10 ) /*0xfffd4452*/
  {
    v11 = a10; /*0xfffd445b*/
    v39 = -a6; /*0xfffd4462*/
    v31 = 0; /*0xfffd4465*/
    v32 = a6; /*0xfffd446c*/
    i = a10; /*0xfffd446f*/
    v33 = a10; /*0xfffd4472*/
    do /*0xfffd4634*/
    {
      result = v39; /*0xfffd4475*/
      v42 = v39; /*0xfffd447e*/
      if ( v39 <= v32 ) /*0xfffd4481*/
      {
        v43 = v39 + 40; /*0xfffd4489*/
        do /*0xfffd4628*/
        {
          a1[33] = 1; /*0xfffd448c*/
          if ( a1[3755] && a1[3758] && a1[3770] > 1u ) /*0xfffd44b1*/
          {
            v41 = 0; /*0xfffd44b3*/
            LOBYTE(v37) = 0; /*0xfffd44b7*/
            v12 = a1 + 5512; /*0xfffd44bb*/
            do /*0xfffd4525*/
            {
              if ( *v12 && (_BYTE)v37 != 1 ) /*0xfffd44ca*/
              {
                if ( (_BYTE)v37 == a2 ) /*0xfffd44d2*/
                  v13 = v42 + *a9 + *a4; /*0xfffd44de*/
                else
                  v13 = *a5; /*0xfffd44e6*/
                if ( sub_FFFC9CB1((int)a1, 0, v37, v13, 0, 0) ) /*0xfffd44f5*/
                  v41 = 1; /*0xfffd4501*/
                if ( !v41 ) /*0xfffd4509*/
                  sub_FFFC85B4((int)a1, 0, v37); /*0xfffd4510*/
              }
              LOBYTE(v37) = v37 + 1; /*0xfffd4518*/
              v12 += 430; /*0xfffd451b*/
            }
            while ( (unsigned __int8)v37 < 3u ); /*0xfffd4525*/
            v11 = i; /*0xfffd4527*/
          }
          sub_FFFCBF04(a1); /*0xfffd452b*/
          sub_FFFD427E(a1, 0); /*0xfffd4534*/
          sub_FFFC94EC(a1); /*0xfffd453a*/
          a1[33] = 0; /*0xfffd4542*/
          if ( a1[3755] && a1[3758] ) /*0xfffd454f*/
          {
            v14 = a1[6997]; /*0xfffd455a*/
            while ( (sub_FFFC4EEF((int)a1, v14, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd4578*/
              ; /*0xfffd4560*/
          }
          if ( a1[3738] ) /*0xfffd457a*/
            sub_FFFD16D7((int)a1, 2, &v34, &v36, &v35, 0, 4u, 1, 1); /*0xfffd4598*/
          else
            sub_FFFD16D7((int)a1, 0, &v34, &v36, &v35, 0, 4u, 1, 1); /*0xfffd459c*/
          if ( a1[3755] && a1[3758] && a1[3770] > 1u ) /*0xfffd45bd*/
          {
            v15 = &v27[v43]; /*0xfffd45c7*/
            if ( v41 ) /*0xfffd45ce*/
            {
              v29[v43] = 0; /*0xfffd45d0*/
              *v15 = 0; /*0xfffd45d5*/
            }
            else
            {
              v16 = v35 + v36; /*0xfffd45dd*/
              v29[v43] = 1; /*0xfffd45e0*/
              *v15 = v16; /*0xfffd45e5*/
            }
            v17 = v29[v43] + v28[v43]; /*0xfffd45ed*/
            v28[v43] = v17; /*0xfffd45f1*/
            v18 = v26[v43] + *v15; /*0xfffd45fc*/
            v19 = v31 == v11 - 1; /*0xfffd4601*/
            v26[v43] = v18; /*0xfffd4604*/
            if ( v19 ) /*0xfffd4606*/
            {
              if ( v38 < v17 ) /*0xfffd460b*/
                v38 = v17; /*0xfffd460d*/
              if ( v40 < v18 ) /*0xfffd4613*/
                v40 = v18; /*0xfffd4615*/
            }
          }
          v42 += a7; /*0xfffd461b*/
          v43 += a7; /*0xfffd461e*/
          result = v42; /*0xfffd4621*/
        }
        while ( v42 <= v32 ); /*0xfffd4628*/
      }
      ++v31; /*0xfffd462e*/
      --v33; /*0xfffd4631*/
    }
    while ( v33 ); /*0xfffd4634*/
  }
  if ( a1[3755] && a1[3758] && a1[3770] > 1u ) /*0xfffd465b*/
  {
    v32 = 0; /*0xfffd466d*/
    v33 = a8; /*0xfffd467c*/
    v20 = a8 * a7 - a6 + 40; /*0xfffd4683*/
    v44 = 0; /*0xfffd4690*/
    for ( i = a6 - a8 * a7 + 40; v20 <= i; v20 += a7 ) /*0xfffd4697*/
    {
      v21 = -a8; /*0xfffd469f*/
      v22 = 0; /*0xfffd46a2*/
      v37 = 0; /*0xfffd46a4*/
      while ( v21 <= v33 ) /*0xfffd46e4*/
      {
        v23 = v40 * (unsigned __int8)v28[(char)(v20 + a7 * v21)]; /*0xfffd46c4*/
        v24 = v38 * (unsigned __int8)v26[(char)(v20 + a7 * v21)]; /*0xfffd46cb*/
        v37 += v24; /*0xfffd46ce*/
        v22 += v23; /*0xfffd46d1*/
        if ( !v21 ) /*0xfffd46d5*/
        {
          v22 += v23; /*0xfffd46d7*/
          v37 += v24; /*0xfffd46d9*/
        }
        ++v21; /*0xfffd46dc*/
      }
      v25 = v22 + 2 * v37; /*0xfffd46e9*/
      if ( v25 > v32 ) /*0xfffd46ef*/
      {
        v32 = v25; /*0xfffd46f1*/
        v44 = v20; /*0xfffd46f4*/
      }
    }
    *a4 += v44 + *a9 - 40; /*0xfffd4710*/
    return (char)a4; /*0xfffd470a*/
  }
  return result; /*0xfffd4712*/
}

/* 0xfffd471a sub_FFFD471A */
char __cdecl sub_FFFD471A(int a1, int a2)
{
  int v2; // edx
  _BYTE *v3; // ecx
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edi
  bool v7; // zf
  _BYTE *v8; // edi
  unsigned __int8 v9; // dl
  char v10; // al
  int v11; // ecx
  _BYTE *v12; // edx
  char v13; // al
  _DWORD *v14; // eax
  char result; // al
  _BYTE *v16; // edi
  int v17; // [esp-Ch] [ebp-5Ch]
  int v18; // [esp-4h] [ebp-54h]
  int v19; // [esp+Ch] [ebp-44h]
  int v20; // [esp+10h] [ebp-40h] BYREF
  int v21; // [esp+14h] [ebp-3Ch]
  int v22; // [esp+18h] [ebp-38h]
  int v23; // [esp+1Ch] [ebp-34h]
  int v24; // [esp+20h] [ebp-30h]
  int v25; // [esp+24h] [ebp-2Ch]
  _BYTE *v26; // [esp+28h] [ebp-28h]
  int v27; // [esp+2Ch] [ebp-24h]
  int v28; // [esp+30h] [ebp-20h]
  int v29; // [esp+34h] [ebp-1Ch]
  int v30; // [esp+38h] [ebp-18h]
  int v31; // [esp+3Ch] [ebp-14h]
  int v32; // [esp+40h] [ebp-10h]
  int v33; // [esp+44h] [ebp-Ch]
  int v34; // [esp+48h] [ebp-8h]
  char v35; // [esp+4Ch] [ebp-4h]
  char v36; // [esp+4Dh] [ebp-3h] BYREF
  char v37; // [esp+4Eh] [ebp-2h]
  unsigned __int8 i; // [esp+4Fh] [ebp-1h]

  sub_FFFC7365((_BYTE *)a1, 1, 0xAu); /*0xfffd472b*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd473d*/
  {
    v2 = 0; /*0xfffd4745*/
    v3 = (_BYTE *)(a1 + 5512); /*0xfffd4747*/
    v23 = 3; /*0xfffd474d*/
    do /*0xfffd4770*/
    {
      if ( *v3 ) /*0xfffd4754*/
      {
        v4 = (_DWORD *)(a2 + 16 * v2); /*0xfffd475d*/
        *v4++ = 0; /*0xfffd4762*/
        *v4++ = 0; /*0xfffd4763*/
        *v4 = 0; /*0xfffd4764*/
        v4[1] = 0; /*0xfffd4765*/
      }
      ++v2; /*0xfffd4766*/
      v3 += 430; /*0xfffd4767*/
      --v23; /*0xfffd476d*/
    }
    while ( v23 ); /*0xfffd4770*/
  }
  for ( i = 0; i < 2u; ++i )
  {
    v5 = 0; /*0xfffd4775*/
    v23 = 0; /*0xfffd4777*/
    v28 = 0; /*0xfffd477a*/
    while ( 1 )
    {
      if ( i ) /*0xfffd4785*/
      {
        v24 = v28; /*0xfffd478a*/
        v18 = 15; /*0xfffd478d*/
      }
      else
      {
        v24 = v5; /*0xfffd4791*/
        v18 = -15; /*0xfffd4794*/
      }
      v6 = v18; /*0xfffd4796*/
      *(_BYTE *)(a1 + 33) = 1; /*0xfffd47a2*/
      v7 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd47a8*/
      v35 = 6 - (v5 + 12) / 4; /*0xfffd47ae*/
      if ( !v7 && *(_BYTE *)(a1 + 3758) ) /*0xfffd47b7*/
      {
        LOBYTE(v31) = *(_BYTE *)(a1 + 6997); /*0xfffd47c9*/
        v17 = *(unsigned __int16 *)(a1 + 186) + a1 + 2 * *(unsigned __int16 *)(a1 + 186) + 1720; /*0xfffd47e0*/
        v37 = 0; /*0xfffd47e6*/
        sub_FFFC8367(a1, v31, 3u, v17, v18, 1u); /*0xfffd47ea*/
        sub_FFFC8367( /*0xfffd480a*/
          a1,
          v31,
          3u,
          *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
          v6,
          1u);
        LOBYTE(v34) = 0; /*0xfffd4812*/
        v8 = (_BYTE *)(a1 + 5512); /*0xfffd4815*/
        do /*0xfffd4847*/
        {
          if ( *v8 && sub_FFFC9CB1(a1, 0, v34, v24, 0, 1) ) /*0xfffd482a*/
            v37 = 1; /*0xfffd4836*/
          LOBYTE(v34) = v34 + 1; /*0xfffd483a*/
          v8 += 430; /*0xfffd483d*/
        }
        while ( (unsigned __int8)v34 < 3u ); /*0xfffd4847*/
      }
      sub_FFFC94EC((_BYTE *)a1); /*0xfffd484a*/
      *(_BYTE *)(a1 + 33) = 0; /*0xfffd484f*/
      if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd485b*/
      {
        v9 = *(_BYTE *)(a1 + 6997); /*0xfffd4865*/
        while ( (sub_FFFC4EEF(a1, v9, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd4883*/
          ; /*0xfffd486b*/
      }
      sub_FFFCBF04((_BYTE *)a1); /*0xfffd4886*/
      sub_FFFD427E((_BYTE *)a1, 0); /*0xfffd488d*/
      sub_FFFC429B(a1); /*0xfffd4893*/
      LOBYTE(v32) = 0; /*0xfffd489b*/
      v29 = 0; /*0xfffd489e*/
      do
      {
        LOBYTE(v33) = 0; /*0xfffd48a1*/
        v30 = 0; /*0xfffd48a4*/
        do
        {
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd48af*/
          {
            v10 = 0; /*0xfffd48b7*/
            v36 = 0; /*0xfffd48b9*/
            v11 = 0; /*0xfffd48bc*/
            v24 = 3; /*0xfffd48be*/
            do /*0xfffd48ed*/
            {
              if ( *(_BYTE *)(v11 + a1 + 5512) && !v37 ) /*0xfffd48d1*/
                v10 |= *(_BYTE *)(v11 + v30 + v29 + a1 + 5630); /*0xfffd48dd*/
              v11 += 430; /*0xfffd48e4*/
              --v24; /*0xfffd48ea*/
            }
            while ( v24 ); /*0xfffd48ed*/
            v36 = v10; /*0xfffd48ef*/
          }
          sub_FFFD0325((_BYTE *)a1, v32, v33, 0, &v20, 0xFFu, 0, 5u, 1, 0xFFu, 3); /*0xfffd490e*/
          sub_FFFCA29D((_BYTE *)a1, v32, v33, &v36, 0x3Fu, &v20); /*0xfffd4924*/
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) )
          {
            v12 = (_BYTE *)(a1 + 5512); /*0xfffd4944*/
            v27 = -(a1 + 5512); /*0xfffd4953*/
            v25 = 0; /*0xfffd4956*/
            v24 = a1 + 7179; /*0xfffd4959*/
            v21 = 3; /*0xfffd495c*/
            do
            {
              if ( *v12 )
              {
                v19 = (int)&v12[v27 + 5630 + v29 + a1]; /*0xfffd4977*/
                v13 = (v12[1] & 8) != 0 ? 9 : 0;
                v26 = (_BYTE *)v24; /*0xfffd498a*/
                v22 = (unsigned __int8)(v13 + 9); /*0xfffd498d*/
                do /*0xfffd49c3*/
                {
                  if ( *v26 || v37 ) /*0xfffd499a*/
                  {
                    v14 = (_DWORD *)(a2 + 4 * (*(unsigned __int8 *)(v30 + v19 + 9) + 4 * v25)); /*0xfffd49b2*/
                    *v14 |= 1 << v35; /*0xfffd49bb*/
                  }
                  ++v26; /*0xfffd49bd*/
                  --v22; /*0xfffd49c0*/
                }
                while ( v22 ); /*0xfffd49c3*/
              }
              ++v25; /*0xfffd49c5*/
              v24 += 1068; /*0xfffd49c8*/
              v12 += 430; /*0xfffd49cf*/
              --v21; /*0xfffd49d5*/
            }
            while ( v21 );
          }
          result = sub_FFFC429B(a1); /*0xfffd49db*/
          LOBYTE(v33) = v33 + 1; /*0xfffd49e0*/
          v30 += 32; /*0xfffd49e3*/
        }
        while ( (unsigned __int8)v33 < 4u );
        LOBYTE(v32) = v32 + 1; /*0xfffd49f2*/
        v29 += 184; /*0xfffd49f5*/
      }
      while ( (unsigned __int8)v32 < 2u );
      v28 -= 4; /*0xfffd4a06*/
      v23 += 4; /*0xfffd4a0a*/
      if ( v28 <= -13 ) /*0xfffd4a12*/
        break; /*0xfffd4a12*/
      v5 = v23; /*0xfffd477f*/
    }
  }
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd4a31*/
  {
    result = *(_BYTE *)(a1 + 6997); /*0xfffd4a3d*/
    LOBYTE(v31) = result; /*0xfffd4a43*/
    LOBYTE(v34) = 0; /*0xfffd4a46*/
    v16 = (_BYTE *)(a1 + 5512); /*0xfffd4a49*/
    do /*0xfffd4abe*/
    {
      if ( *v16 ) /*0xfffd4a4f*/
      {
        sub_FFFC9CB1(a1, 0, v34, 0, 0, 1); /*0xfffd4a5c*/
        sub_FFFC8367( /*0xfffd4a7c*/
          a1,
          v31,
          3u,
          *(unsigned __int16 *)(a1 + 186) + a1 + 2 * *(unsigned __int16 *)(a1 + 186) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffd4a9c*/
          a1,
          v31,
          3u,
          *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
          0,
          1u);
        result = sub_FFFC85B4(a1, 0, v34); /*0xfffd4aa9*/
      }
      LOBYTE(v34) = v34 + 1; /*0xfffd4ab1*/
      v16 += 430; /*0xfffd4ab4*/
    }
    while ( (unsigned __int8)v34 < 3u ); /*0xfffd4abe*/
  }
  return result; /*0xfffd4ac0*/
}

/* 0xfffd4ac5 sub_FFFD4AC5 */
unsigned int __cdecl sub_FFFD4AC5(_BYTE *a1)
{
  unsigned __int8 *v2; // edi
  _BYTE *v3; // ebx
  unsigned __int8 v4; // dl
  unsigned __int8 v6; // [esp+Ch] [ebp+8h]

  a1[33] = 1; /*0xfffd4acc*/
  if ( a1[3755] && a1[3758] && a1[3770] > 1u ) /*0xfffd4ae9*/
  {
    v6 = 0; /*0xfffd4aed*/
    v2 = a1 + 7089; /*0xfffd4af1*/
    v3 = a1 + 5512; /*0xfffd4af7*/
    do /*0xfffd4b3b*/
    {
      if ( *v3 ) /*0xfffd4afd*/
      {
        sub_FFFC403A((int)a1, 0, v6); /*0xfffd4b08*/
        sub_FFFC9CB1((int)a1, 0, v6, 52 - *v2, 1, 0); /*0xfffd4b20*/
      }
      ++v6; /*0xfffd4b28*/
      v3 += 430; /*0xfffd4b2b*/
      v2 += 1068; /*0xfffd4b31*/
    }
    while ( v6 < 3u ); /*0xfffd4b3b*/
  }
  a1[33] = 0; /*0xfffd4b3f*/
  if ( a1[3755] && a1[3758] ) /*0xfffd4b4c*/
  {
    v4 = a1[6997]; /*0xfffd4b57*/
    while ( (sub_FFFC4EEF((int)a1, v4, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd4b75*/
      ; /*0xfffd4b5d*/
  }
  sub_FFFCBF04(a1); /*0xfffd4b78*/
  return sub_FFFD427E(a1, 0); /*0xfffd4b88*/
}

/* 0xfffd4b8b sub_FFFD4B8B */
int __cdecl sub_FFFD4B8B(int a1, char a2)
{
  int v2; // esi
  unsigned __int8 v3; // al
  char v4; // di
  unsigned __int8 v5; // al
  _BYTE *v6; // eax
  int v7; // edx
  char v8; // al
  unsigned __int8 v9; // al
  char v10; // al
  int v11; // edx
  unsigned __int8 v12; // al
  char v13; // al
  int v14; // eax
  int v15; // eax
  unsigned __int8 v16; // bl
  unsigned __int8 v17; // al
  _BYTE *v18; // eax
  char v19; // di
  int v20; // edx
  int v21; // edi
  _DWORD *v22; // ebx
  int v23; // edx
  int v24; // eax
  int v25; // eax
  char v26; // cl
  int v27; // ecx
  bool v28; // zf
  int v29; // edi
  _DWORD *v30; // ebx
  int v31; // ecx
  int v32; // eax
  char v33; // dl
  char v34; // dl
  char v35; // dl
  char v36; // dl
  _BYTE *v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // edi
  int v41; // ecx
  int v42; // eax
  char v43; // al
  _BYTE *v44; // ecx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  unsigned __int8 v48; // al
  _DWORD v50[3]; // [esp+Ch] [ebp-44h] BYREF
  __int16 v51; // [esp+18h] [ebp-38h]
  char v52; // [esp+1Ah] [ebp-36h]
  int v53; // [esp+24h] [ebp-2Ch]
  int v54; // [esp+28h] [ebp-28h] BYREF
  int v55; // [esp+2Ch] [ebp-24h]
  int v56; // [esp+30h] [ebp-20h]
  int v57; // [esp+34h] [ebp-1Ch]
  int v58; // [esp+38h] [ebp-18h]
  int v59; // [esp+3Ch] [ebp-14h]
  __int16 v60; // [esp+40h] [ebp-10h]
  char v61; // [esp+42h] [ebp-Eh]
  unsigned __int8 v62; // [esp+47h] [ebp-9h]
  char v63; // [esp+48h] [ebp-8h]
  char v64; // [esp+49h] [ebp-7h]
  char v65; // [esp+4Ah] [ebp-6h]
  unsigned __int8 v66; // [esp+4Bh] [ebp-5h]
  unsigned __int8 v67; // [esp+4Ch] [ebp-4h]
  char v68; // [esp+4Dh] [ebp-3h]
  unsigned __int8 v69; // [esp+4Eh] [ebp-2h]
  unsigned __int8 i; // [esp+4Fh] [ebp-1h]

  v2 = a1; /*0xfffd4b93*/
  v67 = *(_BYTE *)(a1 + 28); /*0xfffd4b99*/
  v3 = *(_BYTE *)(a1 + 31); /*0xfffd4b9e*/
  v4 = 0; /*0xfffd4ba2*/
  v69 = 0; /*0xfffd4ba4*/
  LOBYTE(v58) = 0; /*0xfffd4ba8*/
  v65 = 0; /*0xfffd4bac*/
  v66 = 64; /*0xfffd4bb0*/
  sub_FFFC7365((_BYTE *)a1, 1, v3); /*0xfffd4bb8*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd4bcd*/
  {
    LOBYTE(v59) = *(_BYTE *)(a1 + 6997); /*0xfffd4be4*/
    if ( a2 == 2 ) /*0xfffd4be7*/
    {
      v5 = (unsigned __int8)sub_FFFC4FE3( /*0xfffd4c06*/
                              a1,
                              v59,
                              3u,
                              *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720) >> 1;
      v62 = v5; /*0xfffd4c0d*/
      if ( (v5 & 0x20) != 0 ) /*0xfffd4c10*/
        v5 = -(v5 & 0xDF); /*0xfffd4c14*/
      *(_BYTE *)(a1 + 3771) = v5; /*0xfffd4c16*/
      v69 = 32; /*0xfffd4c1c*/
    }
    else if ( a2 == 3 ) /*0xfffd4c26*/
    {
      sub_FFFD91CC(a1, 0, &v54); /*0xfffd4c2e*/
      v66 = v54; /*0xfffd4c39*/
      *(_BYTE *)(a1 + 3772) = v54; /*0xfffd4c3c*/
      v69 = 31; /*0xfffd4c42*/
    }
    v6 = (_BYTE *)(a1 + 5512); /*0xfffd4c48*/
    v7 = 3; /*0xfffd4c4e*/
    do /*0xfffd4c64*/
    {
      if ( *v6 ) /*0xfffd4c4f*/
        v65 |= 1 << v4; /*0xfffd4c5a*/
      ++v4; /*0xfffd4c5d*/
      v6 += 430; /*0xfffd4c5e*/
      --v7; /*0xfffd4c63*/
    }
    while ( v7 ); /*0xfffd4c64*/
  }
  LOBYTE(v56) = 0; /*0xfffd4c66*/
  do
  {
    LOBYTE(v57) = 0; /*0xfffd4c6a*/
    do
    {
      for ( i = 0; i < 2u; ++i )
      {
        if ( !*(_BYTE *)(v2 + 3755) || !*(_BYTE *)(v2 + 3758) ) /*0xfffd4c7b*/
          goto LABEL_33; /*0xfffd4c82*/
        v60 = 0; /*0xfffd4c89*/
        v61 = 0; /*0xfffd4c8b*/
        v51 = 0; /*0xfffd4c91*/
        v52 = 0; /*0xfffd4c93*/
        switch ( a2 ) /*0xfffd4c99*/
        {
          case 2: /*0xfffd4c99*/
            if ( i ) /*0xfffd4c9f*/
              v8 = *(_BYTE *)(v2 + 7002); /*0xfffd4ca1*/
            else
              v8 = *(_BYTE *)(v2 + 7003); /*0xfffd4ca9*/
            goto LABEL_31; /*0xfffd4ca7*/
          case 3: /*0xfffd4c99*/
            if ( i ) /*0xfffd4cb9*/
              v8 = *(_BYTE *)(v2 + 7000); /*0xfffd4cbb*/
            else
              v8 = *(_BYTE *)(v2 + 7001); /*0xfffd4cc3*/
            goto LABEL_31; /*0xfffd4cc1*/
          case 0: /*0xfffd4c99*/
            v8 = *(_BYTE *)(v2 + 7004); /*0xfffd4ccf*/
            goto LABEL_30; /*0xfffd4cd5*/
          case 1: /*0xfffd4c99*/
            v8 = *(_BYTE *)(v2 + 7005); /*0xfffd4cdb*/
LABEL_30:
            v69 = 31; /*0xfffd4ce1*/
LABEL_31:
            HIBYTE(a1) = v8; /*0xfffd4ce5*/
            break;
        }
        v64 = 0; /*0xfffd4ce8*/
LABEL_33:
        v68 = 0; /*0xfffd4cec*/
        do
        {
          if ( *(_BYTE *)(v2 + 3755) && *(_BYTE *)(v2 + 3758) ) /*0xfffd4d00*/
          {
            LOBYTE(v59) = *(_BYTE *)(v2 + 6997); /*0xfffd4d13*/
            if ( a2 == 2 ) /*0xfffd4d1b*/
            {
              v9 = v62; /*0xfffd4d21*/
              if ( (v62 & 0x20) != 0 ) /*0xfffd4d26*/
                v9 = -(v62 & 0xDF); /*0xfffd4d2a*/
              if ( i ) /*0xfffd4d30*/
                v10 = v9 - HIBYTE(a1); /*0xfffd4d37*/
              else
                v10 = HIBYTE(a1) + v9; /*0xfffd4d32*/
              if ( v10 < -31 ) /*0xfffd4d3c*/
              {
                v10 = -31; /*0xfffd4d3e*/
                goto LABEL_47; /*0xfffd4d40*/
              }
              if ( v10 > 31 ) /*0xfffd4d44*/
                v10 = 31; /*0xfffd4d46*/
              if ( v10 < 0 ) /*0xfffd4d4a*/
LABEL_47:
                v10 = -v10 | 0x20; /*0xfffd4d4c*/
              LOBYTE(v58) = 2 * v10; /*0xfffd4d52*/
              sub_FFFC8367( /*0xfffd4d71*/
                v2,
                v59,
                3u,
                *(unsigned __int16 *)(v2 + 208) + v2 + 2 * *(unsigned __int16 *)(v2 + 208) + 1720,
                0,
                1u);
              sub_FFFC8367( /*0xfffd4d95*/
                v2,
                v59,
                3u,
                *(unsigned __int16 *)(v2 + 208) + v2 + 2 * *(unsigned __int16 *)(v2 + 208) + 1720,
                (unsigned __int8)v58,
                1u);
LABEL_69:
              v63 = 1; /*0xfffd4e6a*/
              goto LABEL_70; /*0xfffd4e6a*/
            }
            if ( a2 != 3 ) /*0xfffd4da4*/
            {
              if ( a2 ) /*0xfffd4e0e*/
              {
                if ( a2 == 1 ) /*0xfffd4e31*/
                {
                  if ( i ) /*0xfffd4e39*/
                    v15 = (unsigned __int8)-HIBYTE(a1); /*0xfffd4e40*/
                  else
                    v15 = HIBYTE(a1); /*0xfffd4e45*/
                  sub_FFFC8367( /*0xfffd4e62*/
                    v2,
                    v59,
                    3u,
                    *(unsigned __int16 *)(v2 + 182) + v2 + 2 * *(unsigned __int16 *)(v2 + 182) + 1720,
                    v15,
                    1u);
                }
              }
              else
              {
                if ( i ) /*0xfffd4e15*/
                  v14 = (unsigned __int8)-HIBYTE(a1); /*0xfffd4e1c*/
                else
                  v14 = HIBYTE(a1); /*0xfffd4e21*/
                sub_FFFC8367( /*0xfffd4e2d*/
                  v2,
                  v59,
                  3u,
                  *(unsigned __int16 *)(v2 + 188) + v2 + 2 * *(unsigned __int16 *)(v2 + 188) + 1720,
                  v14,
                  1u);
              }
              goto LABEL_69; /*0xfffd4e2d*/
            }
            v11 = v67 * HIBYTE(a1); /*0xfffd4db2*/
            v12 = *(_BYTE *)(v2 + 6999); /*0xfffd4db9*/
            if ( i ) /*0xfffd4dc2*/
            {
              if ( (unsigned __int8)v54 - v11 < v12 - v69 ) /*0xfffd4dea*/
              {
                v13 = v12 - v69; /*0xfffd4dec*/
                goto LABEL_53; /*0xfffd4def*/
              }
              LOBYTE(v58) = v54 - v67 * HIBYTE(a1); /*0xfffd4df9*/
            }
            else
            {
              if ( (unsigned __int8)v54 + v11 <= v69 + v12 ) /*0xfffd4dcd*/
                v13 = v54 + v67 * HIBYTE(a1); /*0xfffd4ddd*/
              else
                v13 = v69 + v12; /*0xfffd4dcf*/
LABEL_53:
              LOBYTE(v58) = v13; /*0xfffd4dd2*/
            }
            sub_FFFD9273(v2, 0, v58); /*0xfffd4e02*/
            goto LABEL_69; /*0xfffd4e0a*/
          }
LABEL_70:
          if ( a2 == 3 ) /*0xfffd4e72*/
          {
            v16 = v58; /*0xfffd4e77*/
            if ( (unsigned __int8)v58 <= v66 ) /*0xfffd4e7c*/
              v17 = v66 - v58; /*0xfffd4e86*/
            else
              v17 = v58 - v66; /*0xfffd4e80*/
            sub_FFFCA83C(v2, 90 * v17 + 350); /*0xfffd4e95*/
            v66 = v16; /*0xfffd4e9c*/
          }
          if ( *(_BYTE *)(v2 + 3755) && *(_BYTE *)(v2 + 3758) )
          {
            v18 = (_BYTE *)(v2 + 5512); /*0xfffd4ebb*/
            v19 = 0; /*0xfffd4ec1*/
            v20 = 3; /*0xfffd4ec3*/
            do /*0xfffd4ed9*/
            {
              if ( *v18 ) /*0xfffd4ec4*/
                v68 |= 1 << v19; /*0xfffd4ecf*/
              ++v19; /*0xfffd4ed2*/
              v18 += 430; /*0xfffd4ed3*/
              --v20; /*0xfffd4ed8*/
            }
            while ( v20 ); /*0xfffd4ed9*/
            v21 = 0; /*0xfffd4edb*/
            v55 = 0; /*0xfffd4edd*/
            v22 = (_DWORD *)(v2 + 7175); /*0xfffd4ee0*/
            v23 = v2 + 5574; /*0xfffd4ee6*/
            v53 = 3; /*0xfffd4eec*/
            do
            {
              if ( *(_BYTE *)(v55 + v2 + 5512) )
              {
                v24 = (unsigned __int8)v56; /*0xfffd4f00*/
                *v22 = 0; /*0xfffd4f04*/
                v25 = 184 * v24; /*0xfffd4f07*/
                v26 = *(_BYTE *)(v2 + 3733); /*0xfffd4f12*/
                v27 = *(_BYTE *)(v25 + v23 + 12) ? (v26 != 0 ? 0x3FFFF : 130815) : v26 != 0 ? 511 : 255;
                v28 = *(_BYTE *)(v25 + v23 + 2) == 0; /*0xfffd4f3c*/
                v50[v21] = v27; /*0xfffd4f41*/
                if ( v28 /*0xfffd4f64*/
                  && *(_BYTE *)(v55 + v25 + 32 * (unsigned __int8)v57 + v2 + 5630)
                  && (!*((_BYTE *)&v51 + v21) || !*((_BYTE *)&v60 + v21)) )
                {
                  v68 &= ~(1 << v21); /*0xfffd4f73*/
                }
              }
              v55 += 430; /*0xfffd4f7b*/
              ++v21; /*0xfffd4f7e*/
              v22 += 267; /*0xfffd4f7f*/
              v23 += 430; /*0xfffd4f85*/
              --v53; /*0xfffd4f87*/
            }
            while ( v53 );
          }
          if ( v68 == v65 ) /*0xfffd4f96*/
            break; /*0xfffd4f96*/
          sub_FFFD15B5((_BYTE *)v2, v56, v57, 0, (int)v50, ~v68); /*0xfffd4fb1*/
          if ( *(_BYTE *)(v2 + 3755) && *(_BYTE *)(v2 + 3758) ) /*0xfffd4fc6*/
          {
            v29 = 0; /*0xfffd4fd3*/
            v55 = 0; /*0xfffd4fd5*/
            v30 = (_DWORD *)(v2 + 7175); /*0xfffd4fd8*/
            v53 = 3; /*0xfffd4fde*/
            do /*0xfffd50f5*/
            {
              if ( *(_BYTE *)(v55 + v2 + 5512) ) /*0xfffd4fe8*/
              {
                if ( !*((_BYTE *)&v51 + v29) ) /*0xfffd4ffa*/
                {
                  v31 = v55 + 184 * (unsigned __int8)v56 + v2; /*0xfffd5010*/
                  v32 = 32 * (unsigned __int8)v57; /*0xfffd5017*/
                  if ( *(_BYTE *)(v32 + v31 + 5630) ) /*0xfffd501a*/
                  {
                    if ( !*(_BYTE *)(v31 + 5576) ) /*0xfffd5028*/
                    {
                      if ( *v30 ) /*0xfffd5035*/
                      {
                        if ( *((_BYTE *)&v60 + v29) && v63 ) /*0xfffd5049*/
                          *((_BYTE *)&v51 + v29) = 1; /*0xfffd504f*/
                      }
                      else
                      {
                        *((_BYTE *)&v60 + v29) = 1; /*0xfffd505d*/
                        if ( a2 == 2 ) /*0xfffd5062*/
                        {
                          v33 = HIBYTE(a1) + 1; /*0xfffd5067*/
                          if ( i ) /*0xfffd506d*/
                            *(_BYTE *)(v32 + v31 + 5658) = v33; /*0xfffd506f*/
                          else
                            *(_BYTE *)(v32 + v31 + 5659) = v33; /*0xfffd5078*/
                        }
                        else if ( a2 == 3 ) /*0xfffd5084*/
                        {
                          v34 = HIBYTE(a1) + 1; /*0xfffd5089*/
                          if ( i ) /*0xfffd508f*/
                            *(_BYTE *)(v32 + v31 + 5660) = v34; /*0xfffd5091*/
                          else
                            *(_BYTE *)(v32 + v31 + 5661) = v34; /*0xfffd509a*/
                        }
                        else if ( a2 ) /*0xfffd50a5*/
                        {
                          if ( a2 == 1 ) /*0xfffd50c7*/
                          {
                            v36 = HIBYTE(a1) + 1; /*0xfffd50cc*/
                            if ( i ) /*0xfffd50d2*/
                              *(_BYTE *)(v32 + v31 + 5654) = v36; /*0xfffd50d4*/
                            else
                              *(_BYTE *)(v32 + v31 + 5655) = v36; /*0xfffd50dd*/
                          }
                        }
                        else
                        {
                          v35 = HIBYTE(a1) + 1; /*0xfffd50aa*/
                          if ( i ) /*0xfffd50b0*/
                            *(_BYTE *)(v32 + v31 + 5652) = v35; /*0xfffd50b2*/
                          else
                            *(_BYTE *)(v32 + v31 + 5653) = v35; /*0xfffd50bb*/
                        }
                      }
                    }
                  }
                }
              }
              v55 += 430; /*0xfffd50e4*/
              ++v29; /*0xfffd50eb*/
              v30 += 267; /*0xfffd50ec*/
              --v53; /*0xfffd50f2*/
            }
            while ( v53 ); /*0xfffd50f5*/
          }
          v28 = *(_BYTE *)(v2 + 3755) == 0; /*0xfffd50fb*/
          v55 = 1; /*0xfffd5102*/
          if ( !v28 ) /*0xfffd5109*/
          {
            if ( *(_BYTE *)(v2 + 3758) && !v64 ) /*0xfffd511c*/
            {
              v64 = 1; /*0xfffd5120*/
              v37 = (_BYTE *)(v2 + 5512); /*0xfffd5124*/
              v38 = 0; /*0xfffd512a*/
              v39 = 3; /*0xfffd512c*/
              do /*0xfffd5144*/
              {
                if ( *v37 && !*((_BYTE *)&v60 + v38) ) /*0xfffd5132*/
                  v64 = 0; /*0xfffd5139*/
                ++v38; /*0xfffd513d*/
                v37 += 430; /*0xfffd513e*/
                --v39; /*0xfffd5143*/
              }
              while ( v39 ); /*0xfffd5144*/
            }
            if ( *(_BYTE *)(v2 + 3755) && *(_BYTE *)(v2 + 3758) ) /*0xfffd5153*/
            {
              v40 = 0; /*0xfffd5160*/
              v41 = 0; /*0xfffd5168*/
              v53 = 3; /*0xfffd516a*/
              do /*0xfffd51ca*/
              {
                if ( *(_BYTE *)(v41 + v2 + 5512) ) /*0xfffd5171*/
                {
                  v42 = v41 + 184 * (unsigned __int8)v56; /*0xfffd5185*/
                  if ( *(_BYTE *)(v42 + 32 * (unsigned __int8)v57 + v2 + 5630) ) /*0xfffd518c*/
                  {
                    if ( !*(_BYTE *)(v42 + v2 + 5576) ) /*0xfffd5196*/
                    {
                      v43 = *((_BYTE *)&v51 + v40); /*0xfffd51a0*/
                      if ( !v43 || !*((_BYTE *)&v60 + v40) ) /*0xfffd51a8*/
                        v55 = 0; /*0xfffd51af*/
                      if ( !v43 && !*((_BYTE *)&v60 + v40) ) /*0xfffd51b7*/
                        v63 = 0; /*0xfffd51bd*/
                    }
                  }
                }
                ++v40; /*0xfffd51c0*/
                v41 += 430; /*0xfffd51c1*/
                --v53; /*0xfffd51c7*/
              }
              while ( v53 ); /*0xfffd51ca*/
              if ( v63 ) /*0xfffd51d0*/
              {
                if ( HIBYTE(a1) < v69 ) /*0xfffd51d8*/
                  ++HIBYTE(a1); /*0xfffd51da*/
              }
              else if ( HIBYTE(a1) ) /*0xfffd51e3*/
              {
                --HIBYTE(a1); /*0xfffd51e5*/
              }
              if ( HIBYTE(a1) >= v69 || !HIBYTE(a1) ) /*0xfffd51f4*/
              {
                v44 = (_BYTE *)(v2 + 5512); /*0xfffd51f8*/
                v45 = 0; /*0xfffd51fa*/
                v46 = 3; /*0xfffd51fc*/
                do /*0xfffd5214*/
                {
                  if ( *v44 ) /*0xfffd51fd*/
                  {
                    *((_BYTE *)&v51 + v45) = 1; /*0xfffd5202*/
                    *((_BYTE *)&v60 + v45) = 1; /*0xfffd5207*/
                  }
                  ++v45; /*0xfffd520c*/
                  v44 += 430; /*0xfffd520d*/
                  --v46; /*0xfffd5213*/
                }
                while ( v46 ); /*0xfffd5214*/
                v55 = 1; /*0xfffd5216*/
              }
            }
          }
        }
        while ( !v55 );
      }
      LOBYTE(v57) = v57 + 1; /*0xfffd5234*/
    }
    while ( (unsigned __int8)v57 < 4u );
    LOBYTE(v56) = v56 + 1; /*0xfffd5241*/
  }
  while ( (unsigned __int8)v56 < 2u );
  if ( *(_BYTE *)(v2 + 3755) && *(_BYTE *)(v2 + 3758) ) /*0xfffd525b*/
  {
    LOBYTE(v59) = *(_BYTE *)(v2 + 6997); /*0xfffd526e*/
    switch ( a2 ) /*0xfffd5276*/
    {
      case 2: /*0xfffd5276*/
        sub_FFFC8367( /*0xfffd5294*/
          v2,
          v59,
          3u,
          *(unsigned __int16 *)(v2 + 208) + v2 + 2 * *(unsigned __int16 *)(v2 + 208) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffd52ba*/
          v2,
          v59,
          3u,
          *(unsigned __int16 *)(v2 + 208) + v2 + 2 * *(unsigned __int16 *)(v2 + 208) + 1720,
          2 * v62,
          1u);
        break; /*0xfffd52c2*/
      case 3: /*0xfffd5276*/
        sub_FFFD9273(v2, 0, v54); /*0xfffd52ce*/
        break; /*0xfffd52d6*/
      case 0: /*0xfffd5276*/
        v47 = *(unsigned __int16 *)(v2 + 188); /*0xfffd52dc*/
        goto LABEL_168; /*0xfffd52e3*/
      case 1: /*0xfffd5276*/
        v47 = *(unsigned __int16 *)(v2 + 182); /*0xfffd52e9*/
LABEL_168:
        sub_FFFC8367(v2, v59, 3u, v47 + v2 + 2 * v47 + 1720, 0, 1u); /*0xfffd52f0*/
        break;
    }
  }
  if ( a2 == 3 ) /*0xfffd5311*/
  {
    if ( (unsigned __int8)v58 <= v66 ) /*0xfffd531b*/
      v48 = v66 - v58; /*0xfffd5323*/
    else
      v48 = v58 - v66; /*0xfffd531f*/
    sub_FFFCA83C(v2, 90 * v48 + 350); /*0xfffd5332*/
  }
  sub_FFFCBF04((_BYTE *)v2); /*0xfffd533a*/
  sub_FFFD427E((_BYTE *)v2, 0); /*0xfffd5342*/
  return sub_FFFC7CA8((_BYTE *)v2); /*0xfffd5354*/
}

/* 0xfffd5359 sub_FFFD5359 */
int __cdecl sub_FFFD5359(int a1)
{
  char v1; // bl
  bool v2; // zf
  char v3; // al
  int v4; // edi
  char v5; // bl
  _BYTE *v6; // ebx
  char v7; // cl
  char v8; // al
  char v9; // dl
  char v10; // al
  char v11; // al
  char v12; // dl
  unsigned __int8 v13; // al
  bool v14; // cc
  char v15; // al
  char v16; // cl
  unsigned __int8 v17; // cl
  int v18; // edx
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  int v26; // edi
  int v27; // ebx
  unsigned int v28; // ecx
  int v29; // edi
  char v30; // bl
  _BYTE *v31; // ebx
  _DWORD v33[219]; // [esp+Ch] [ebp-314h] BYREF
  int v34; // [esp+378h] [ebp+58h]
  int v35; // [esp+37Ch] [ebp+5Ch]
  unsigned __int8 v36; // [esp+382h] [ebp+62h] BYREF
  unsigned __int8 v37; // [esp+383h] [ebp+63h] BYREF
  unsigned __int8 v38; // [esp+384h] [ebp+64h] BYREF
  int v39; // [esp+385h] [ebp+65h]
  unsigned __int8 v40; // [esp+389h] [ebp+69h]
  unsigned __int8 v41; // [esp+38Ah] [ebp+6Ah]
  char v42; // [esp+38Bh] [ebp+6Bh] BYREF
  char v43; // [esp+38Ch] [ebp+6Ch] BYREF
  unsigned __int8 v44; // [esp+38Dh] [ebp+6Dh]
  char v45; // [esp+38Eh] [ebp+6Eh] BYREF
  unsigned __int8 v46; // [esp+38Fh] [ebp+6Fh]
  unsigned __int8 v47; // [esp+390h] [ebp+70h]
  char v48; // [esp+391h] [ebp+71h]
  unsigned __int8 v49; // [esp+392h] [ebp+72h]
  char v50; // [esp+393h] [ebp+73h]

  sub_FFFC7365((_BYTE *)a1, 1, 8u); /*0xfffd536f*/
  v1 = 0; /*0xfffd5374*/
  v2 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd5379*/
  v50 = 0; /*0xfffd537f*/
  v47 = 0; /*0xfffd5383*/
  if ( !v2 && *(_BYTE *)(a1 + 3758) ) /*0xfffd5389*/
  {
    v3 = 2 /*0xfffd53ba*/
       - ((unsigned int)sub_FFFC4FE3(
                          a1,
                          *(_BYTE *)(a1 + 6997),
                          3u,
                          *(unsigned __int16 *)(a1 + 216) + a1 + 2 * *(unsigned __int16 *)(a1 + 216) + 1720) >> 1);
    v2 = (*(_BYTE *)(a1 + 3760) & 2) == 0; /*0xfffd53bf*/
    v48 = v3; /*0xfffd53c6*/
    if ( !v2 ) /*0xfffd53c9*/
      v47 = *(_BYTE *)(a1 + 3757) > 1u; /*0xfffd53d4*/
    if ( v3 < -16 ) /*0xfffd53da*/
      v48 = -16; /*0xfffd53dc*/
    if ( v48 < 0 ) /*0xfffd53e5*/
      v50 = v48; /*0xfffd53e7*/
    if ( *(_BYTE *)(a1 + 3758) == 3 ) /*0xfffd53f1*/
      v1 = 1; /*0xfffd53f3*/
  }
  if ( v1 == 1 ) /*0xfffd53f8*/
    v50 -= 5; /*0xfffd53fa*/
  else
    v50 -= 2; /*0xfffd5400*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd540d*/
  {
    v41 = 0; /*0xfffd5416*/
    v40 = 0; /*0xfffd541a*/
    v44 = 0; /*0xfffd541e*/
    v46 = 0; /*0xfffd5422*/
  }
  v35 = 6 - v50; /*0xfffd5431*/
  v49 = 0; /*0xfffd5439*/
  if ( v35 > 0 ) /*0xfffd543d*/
  {
    v4 = 0; /*0xfffd5443*/
    do /*0xfffd567d*/
    {
      if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd5452*/
      {
        sub_FFFC8367( /*0xfffd5480*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
          0,
          1u);
        sub_FFFCA83C(a1, 0x3E8u); /*0xfffd548b*/
        v5 = v50 + v49; /*0xfffd5493*/
        if ( (char)(v50 + v49) < v48 ) /*0xfffd549c*/
          v5 = v48; /*0xfffd549e*/
        sub_FFFC8367( /*0xfffd54cb*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
          (unsigned __int8)(2 * (v5 & 0x1F)),
          1u);
        sub_FFFCA83C(a1, 0x3E8u); /*0xfffd54d6*/
        v33[v4] = v5; /*0xfffd54de*/
        LOBYTE(v39) = 0; /*0xfffd54ee*/
        v6 = (_BYTE *)(a1 + 5512); /*0xfffd54f2*/
        do /*0xfffd5514*/
        {
          if ( *v6 ) /*0xfffd54f4*/
            sub_FFFC5621(a1, 0, v39); /*0xfffd54ff*/
          LOBYTE(v39) = v39 + 1; /*0xfffd5507*/
          v6 += 430; /*0xfffd550a*/
        }
        while ( (unsigned __int8)v39 < 3u ); /*0xfffd5514*/
        sub_FFFCA83C(a1, 0x3E8u); /*0xfffd551c*/
      }
      sub_FFFD16D7(a1, 0, &v45, &v42, &v43, 0, 8u, 0, 1); /*0xfffd5539*/
      if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd554a*/
      {
        v7 = v42; /*0xfffd5553*/
        v8 = v43; /*0xfffd5556*/
        *((_BYTE *)&v33[156] + v4) = v42; /*0xfffd5559*/
        *((_BYTE *)&v33[148] + v4) = v8; /*0xfffd5562*/
        *((_BYTE *)&v33[203] + v4) = v8 + v7; /*0xfffd5569*/
      }
      if ( v47 == 1 ) /*0xfffd5571*/
      {
        sub_FFFD11D0(a1, &v38, &v37, &v36, 1); /*0xfffd5582*/
        if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd558a*/
        {
          if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd5593*/
          {
            *((_BYTE *)&v33[132] + v4) = v38; /*0xfffd559f*/
            *((_BYTE *)&v33[140] + v4) = v37; /*0xfffd55a9*/
            *((_BYTE *)&v33[195] + v4) = v36; /*0xfffd55b3*/
          }
        }
      }
      if ( *(_BYTE *)(a1 + 3738) ) /*0xfffd55b7*/
        sub_FFFD16D7(a1, 1, &v45, &v42, &v43, 0, 8u, 0, 1); /*0xfffd55d5*/
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd55dd*/
      {
        if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd55eb*/
        {
          v9 = v43; /*0xfffd55f4*/
          v10 = v42; /*0xfffd55f7*/
          *((_BYTE *)&v33[140] + v4) = v43; /*0xfffd55fa*/
          *((_BYTE *)&v33[132] + v4) = v10; /*0xfffd5601*/
          v11 = v9 + v10; /*0xfffd5608*/
          v12 = *((_BYTE *)&v33[148] + v4) + *((_BYTE *)&v33[156] + v4); /*0xfffd5611*/
          *((_BYTE *)&v33[211] + v4) = v11; /*0xfffd5618*/
          *((_BYTE *)&v33[124] + v4) = v11 + v12; /*0xfffd561e*/
        }
        if ( *(_BYTE *)(a1 + 3758) ) /*0xfffd5629*/
        {
          v13 = *((_BYTE *)&v33[195] + v4); /*0xfffd5632*/
          v14 = v13 <= v40; /*0xfffd5636*/
          v33[v4 + 31] = 0; /*0xfffd5639*/
          v33[v4 + 93] = 0; /*0xfffd5640*/
          if ( !v14 ) /*0xfffd5647*/
            v40 = v13; /*0xfffd5649*/
          if ( *((_BYTE *)&v33[124] + v4) > v41 ) /*0xfffd5656*/
            v41 = *((_BYTE *)&v33[124] + v4); /*0xfffd5658*/
          if ( *((_BYTE *)&v33[203] + v4) > v44 ) /*0xfffd5662*/
            v44 = *((_BYTE *)&v33[203] + v4); /*0xfffd5664*/
          if ( *((_BYTE *)&v33[211] + v4) > v46 ) /*0xfffd566e*/
            v46 = *((_BYTE *)&v33[211] + v4); /*0xfffd5670*/
        }
      }
      v4 = ++v49; /*0xfffd5676*/
    }
    while ( v49 < v35 ); /*0xfffd567d*/
  }
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd5683*/
  {
    v15 = *(_BYTE *)(a1 + 3758); /*0xfffd5690*/
    if ( v15 ) /*0xfffd5698*/
    {
      if ( v15 == 3 ) /*0xfffd56a0*/
      {
        v48 = 1; /*0xfffd56a2*/
        v47 = 1; /*0xfffd56a6*/
        v16 = 6; /*0xfffd56aa*/
      }
      else
      {
        v16 = 4; /*0xfffd56b4*/
        v48 = v48 - v50 + 2; /*0xfffd56b8*/
        v47 = v48; /*0xfffd56bb*/
      }
      v17 = v16 - v50; /*0xfffd56be*/
      v50 = v17; /*0xfffd56c4*/
      v49 = 0; /*0xfffd56c7*/
      if ( v35 > 0 ) /*0xfffd56cb*/
      {
        v18 = v44; /*0xfffd56d1*/
        v34 = v46; /*0xfffd56d5*/
        v19 = 0; /*0xfffd56d8*/
        do /*0xfffd56fe*/
        {
          v20 = v18 * *((unsigned __int8 *)&v33[211] + v19) + v34 * *((unsigned __int8 *)&v33[203] + v19); /*0xfffd56eb*/
          ++v49; /*0xfffd56ed*/
          v33[v19 + 164] = v20; /*0xfffd56f0*/
          v19 = v49; /*0xfffd56f7*/
        }
        while ( v49 < v35 ); /*0xfffd56fe*/
      }
      v49 = v47; /*0xfffd5707*/
      if ( v47 < v17 ) /*0xfffd570a*/
      {
        v45 = *(_BYTE *)(a1 + 3760) & 2; /*0xfffd571b*/
        v21 = 4 * v47 - 8; /*0xfffd571e*/
        v22 = v47 - 1; /*0xfffd5725*/
        while ( v45 && *(_BYTE *)(a1 + 3757) > 1u ) /*0xfffd5737*/
        {
          if ( *(_BYTE *)(a1 + 3758) == 3 ) /*0xfffd5744*/
            goto LABEL_78; /*0xfffd5744*/
          v23 = *((unsigned __int8 *)&v33[194] + v22 + 3) /*0xfffd576c*/
              + *((unsigned __int8 *)&v33[195] + v22 + 2)
              + *((unsigned __int8 *)&v33[195] + v22 + 3)
              + 2 * *((unsigned __int8 *)&v33[195] + v22 + 1)
              + *((unsigned __int8 *)&v33[195] + v22);
          v24 = *(_DWORD *)((char *)&v33[164] + v21); /*0xfffd5779*/
          v25 = *(_DWORD *)((char *)&v33[165] + v21) /*0xfffd5780*/
              + *(_DWORD *)((char *)&v33[168] + v21)
              + *(_DWORD *)((char *)&v33[167] + v21)
              + 2 * *(_DWORD *)((char *)&v33[166] + v21);
          *(_DWORD *)((char *)&v33[33] + v21) = v23; /*0xfffd5784*/
          v26 = v24 + v25; /*0xfffd578b*/
          v27 = v26 * v40; /*0xfffd5791*/
          *(_DWORD *)((char *)&v33[95] + v21) = v26; /*0xfffd5794*/
          v28 = v23 * v41 + 2 * v27; /*0xfffd57a2*/
          v29 = (unsigned __int8)v48; /*0xfffd57a5*/
          *(_DWORD *)((char *)&v33[64] + v21) = v28; /*0xfffd57a9*/
          if ( v33[v29 + 62] < v28 ) /*0xfffd57b7*/
            v48 = v49; /*0xfffd57bc*/
          v17 = v50; /*0xfffd57bf*/
LABEL_66:
          ++v49; /*0xfffd57c2*/
          v21 += 4; /*0xfffd57c5*/
          ++v22; /*0xfffd57c8*/
          if ( v49 >= v17 ) /*0xfffd57cc*/
            goto LABEL_67; /*0xfffd57cc*/
        }
        if ( *(_BYTE *)(a1 + 3758) == 3 ) /*0xfffd5994*/
        {
LABEL_78:
          *(_DWORD *)((char *)&v33[95] + v21) = v44 * *((unsigned __int8 *)&v33[211] + v22 + 1) /*0xfffd5996*/
                                              + 2 * v46 * *((unsigned __int8 *)&v33[203] + v22 + 1);
          v17 = v50; /*0xfffd59b8*/
        }
        else
        {
          *(_DWORD *)((char *)&v33[95] + v21) = *(_DWORD *)((char *)&v33[164] + v21) /*0xfffd59d7*/
                                              + *(_DWORD *)((char *)&v33[165] + v21)
                                              + *(_DWORD *)((char *)&v33[168] + v21)
                                              + *(_DWORD *)((char *)&v33[167] + v21)
                                              + 2 * *(_DWORD *)((char *)&v33[166] + v21);
        }
        if ( v33[(unsigned __int8)v48 + 93] < *(_DWORD *)((char *)&v33[95] + v21) ) /*0xfffd59f0*/
          v48 = v49; /*0xfffd59f9*/
        goto LABEL_66; /*0xfffd59fc*/
      }
LABEL_67:
      sub_FFFC8367( /*0xfffd57d4*/
        a1,
        *(_BYTE *)(a1 + 6997),
        3u,
        *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
        0,
        1u);
      if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffd5803*/
      {
        sub_FFFC8367( /*0xfffd5830*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 228) + a1 + 2 * *(unsigned __int16 *)(a1 + 228) + 1720,
          0,
          1u);
        sub_FFFC8367( /*0xfffd5856*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 230) + a1 + 2 * *(unsigned __int16 *)(a1 + 230) + 1720,
          0,
          1u);
      }
      sub_FFFCA83C(a1, 0x3E8u); /*0xfffd5864*/
      v30 = v33[(unsigned __int8)v48]; /*0xfffd586d*/
      *(_BYTE *)(a1 + 3764) = v30; /*0xfffd5880*/
      sub_FFFC8367( /*0xfffd58a4*/
        a1,
        *(_BYTE *)(a1 + 6997),
        3u,
        *(unsigned __int16 *)(a1 + 212) + a1 + 2 * *(unsigned __int16 *)(a1 + 212) + 1720,
        (unsigned __int8)(2 * (v30 & 0x1F)),
        1u);
      if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffd58af*/
      {
        *(_BYTE *)(a1 + 3766) = -v30; /*0xfffd58c1*/
        sub_FFFC8367( /*0xfffd58eb*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 228) + a1 + 2 * *(unsigned __int16 *)(a1 + 228) + 1720,
          -v30 & 0x1F,
          1u);
        sub_FFFC8367( /*0xfffd591c*/
          a1,
          *(_BYTE *)(a1 + 6997),
          3u,
          *(unsigned __int16 *)(a1 + 230) + a1 + 2 * *(unsigned __int16 *)(a1 + 230) + 1720,
          *(_BYTE *)(a1 + 3766) & 0x1F,
          1u);
      }
      sub_FFFCA83C(a1, 0x3E8u); /*0xfffd592b*/
      LOBYTE(v39) = 0; /*0xfffd5938*/
      v31 = (_BYTE *)(a1 + 5512); /*0xfffd593c*/
      do /*0xfffd595e*/
      {
        if ( *v31 ) /*0xfffd593e*/
          sub_FFFC5621(a1, 0, v39); /*0xfffd5949*/
        LOBYTE(v39) = v39 + 1; /*0xfffd5951*/
        v31 += 430; /*0xfffd5954*/
      }
      while ( (unsigned __int8)v39 < 3u ); /*0xfffd595e*/
      sub_FFFCA83C(a1, 0x3E8u); /*0xfffd5962*/
    }
  }
  sub_FFFCBF04((_BYTE *)a1); /*0xfffd596c*/
  sub_FFFD427E((_BYTE *)a1, 0); /*0xfffd5973*/
  return sub_FFFC7CA8((_BYTE *)a1); /*0xfffd5985*/
}

/* 0xfffd5a01 sub_FFFD5A01 */
int __cdecl sub_FFFD5A01(int a1)
{
  unsigned __int8 v1; // bl
  _BYTE *v2; // eax
  unsigned __int8 v3; // dl
  char v4; // dl
  int v5; // edi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  char v9; // al
  unsigned __int8 i; // bl
  char v11; // al
  _BYTE *v12; // ebx
  _BYTE v14[24]; // [esp+Ch] [ebp-30h] BYREF
  unsigned int v15; // [esp+24h] [ebp-18h]
  _BYTE *v16; // [esp+28h] [ebp-14h]
  int v17; // [esp+2Eh] [ebp-Eh]
  int v18; // [esp+32h] [ebp-Ah]
  char v19; // [esp+36h] [ebp-6h] BYREF
  char v20; // [esp+37h] [ebp-5h] BYREF
  char v21; // [esp+38h] [ebp-4h] BYREF
  unsigned __int8 v22; // [esp+39h] [ebp-3h]
  char v23; // [esp+3Ah] [ebp-2h]
  unsigned __int8 v24; // [esp+3Bh] [ebp-1h]

  v22 = 0; /*0xfffd5a12*/
  sub_FFFC7365((_BYTE *)a1, 1, 8u); /*0xfffd5a16*/
  v1 = 8; /*0xfffd5a1b*/
  v23 = 8; /*0xfffd5a20*/
  v24 = 23; /*0xfffd5a23*/
  LOBYTE(v18) = 0; /*0xfffd5a27*/
  while ( 1 ) /*0xfffd5a35*/
  {
    v2 = (_BYTE *)(a1 + 3049 * (unsigned __int8)v18); /*0xfffd5a35*/
    if ( !v2[3755] ) /*0xfffd5a37*/
      goto LABEL_10; /*0xfffd5a37*/
    v3 = v2[3758]; /*0xfffd5a40*/
    if ( !v3 || v3 < 3u && (v3 != 2 || v2[3757] != 2) ) /*0xfffd5a5a*/
      goto LABEL_10; /*0xfffd5a5a*/
    if ( !sub_FFFC52CF(a1, v18, 745570438, 0) ) /*0xfffd5a67*/
      goto LABEL_10; /*0xfffd5a71*/
    if ( v4 == 3 ) /*0xfffd5a76*/
      break; /*0xfffd5a76*/
    v24 = 21; /*0xfffd5a78*/
LABEL_10:
    LOBYTE(v18) = v18 + 1; /*0xfffd5a7c*/
    if ( (_BYTE)v18 ) /*0xfffd5a83*/
      goto LABEL_13; /*0xfffd5a83*/
  }
  v23 = 0; /*0xfffd5a87*/
  v1 = 0; /*0xfffd5a8b*/
  v24 = 23; /*0xfffd5a8e*/
LABEL_13:
  if ( v1 < v24 ) /*0xfffd5a95*/
  {
    v5 = v1; /*0xfffd5aa3*/
    v15 = (unsigned __int8)(v24 - v1); /*0xfffd5aa6*/
    do /*0xfffd5c01*/
    {
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd5aa9*/
      {
        v6 = *(_BYTE *)(a1 + 3758); /*0xfffd5ab6*/
        if ( v6 ) /*0xfffd5abe*/
        {
          if ( v6 >= 3u || v6 == 2 && *(_BYTE *)(a1 + 3757) == 2 ) /*0xfffd5ad6*/
          {
            LOBYTE(v17) = *(_BYTE *)(a1 + 6997); /*0xfffd5ae2*/
            sub_FFFC8367( /*0xfffd5b0d*/
              a1,
              v17,
              3u,
              *(unsigned __int16 *)(a1 + 210) + a1 + 2 * *(unsigned __int16 *)(a1 + 210) + 1720,
              2 * (byte_FFFDC6C0[v5] & 0xF),
              1u);
            if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffd5b1c*/
              sub_FFFC8367( /*0xfffd5b51*/
                a1,
                v17,
                3u,
                *(unsigned __int16 *)(a1 + 246) + a1 + 2 * *(unsigned __int16 *)(a1 + 246) + 1720,
                ((unsigned __int8)byte_FFFDC6C0[v5] >> 4) & 1,
                1u);
            sub_FFFCA83C(a1, 0x15Eu); /*0xfffd5b60*/
            LOBYTE(v18) = 0; /*0xfffd5b6d*/
            v16 = (_BYTE *)(a1 + 5512); /*0xfffd5b71*/
            do /*0xfffd5ba3*/
            {
              if ( *v16 ) /*0xfffd5b77*/
              {
                sub_FFFC5621(a1, 0, v18); /*0xfffd5b82*/
                sub_FFFC85B4(a1, 0, v18); /*0xfffd5b8d*/
              }
              LOBYTE(v18) = v18 + 1; /*0xfffd5b95*/
              v16 += 430; /*0xfffd5b98*/
            }
            while ( (unsigned __int8)v18 < 3u ); /*0xfffd5ba3*/
            sub_FFFCA83C(a1, 0x15Eu); /*0xfffd5ba7*/
            v1 = v23; /*0xfffd5bac*/
          }
        }
      }
      sub_FFFD16D7(a1, 0, &v19, &v21, &v20, 0, 8u, 1, 1); /*0xfffd5bc8*/
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd5bd0*/
      {
        v7 = *(_BYTE *)(a1 + 3758); /*0xfffd5bd9*/
        if ( v7 ) /*0xfffd5be1*/
        {
          if ( v7 >= 3u || v7 == 2 && *(_BYTE *)(a1 + 3757) == 2 ) /*0xfffd5bf1*/
            v14[v5] = v20 + v21; /*0xfffd5bf9*/
        }
      }
      ++v5; /*0xfffd5bfd*/
      --v15; /*0xfffd5bfe*/
    }
    while ( v15 ); /*0xfffd5c01*/
  }
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd5c07*/
  {
    v8 = *(_BYTE *)(a1 + 3758); /*0xfffd5c14*/
    if ( v8 ) /*0xfffd5c1c*/
    {
      if ( v8 >= 3u || v8 == 2 && *(_BYTE *)(a1 + 3757) == 2 ) /*0xfffd5c34*/
      {
        v9 = *(_BYTE *)(a1 + 6997); /*0xfffd5c3a*/
        v15 = 0; /*0xfffd5c40*/
        LOBYTE(v17) = v9; /*0xfffd5c44*/
        for ( i = v1 + 2; i < v24 - 2; ++i ) /*0xfffd5c4b*/
        {
          if ( (unsigned __int8)v14[i - 1] /*0xfffd5c78*/
             + (unsigned __int8)v14[i - 2]
             + (unsigned __int8)v14[i + 2]
             + (unsigned __int8)v14[i + 1]
             + 2 * (unsigned int)(unsigned __int8)v14[i] > v15 )
          {
            v15 = (unsigned __int8)v14[i - 1] /*0xfffd5c7a*/
                + (unsigned __int8)v14[i - 2]
                + (unsigned __int8)v14[i + 2]
                + (unsigned __int8)v14[i + 1]
                + 2 * (unsigned __int8)v14[i];
            v22 = i; /*0xfffd5c7d*/
          }
        }
        v11 = byte_FFFDC6C0[v22]; /*0xfffd5c8d*/
        *(_BYTE *)(a1 + 3763) = v11; /*0xfffd5c94*/
        sub_FFFC8367( /*0xfffd5cba*/
          a1,
          v17,
          3u,
          *(unsigned __int16 *)(a1 + 210) + a1 + 2 * *(unsigned __int16 *)(a1 + 210) + 1720,
          2 * (v11 & 0xF),
          1u);
        if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffd5cc9*/
          sub_FFFC8367( /*0xfffd5cfe*/
            a1,
            v17,
            3u,
            *(unsigned __int16 *)(a1 + 246) + a1 + 2 * *(unsigned __int16 *)(a1 + 246) + 1720,
            (*(unsigned __int8 *)(a1 + 3763) >> 4) & 1,
            1u);
        sub_FFFCA83C(a1, 0x15Eu); /*0xfffd5d0d*/
        LOBYTE(v18) = 0; /*0xfffd5d1a*/
        v12 = (_BYTE *)(a1 + 5512); /*0xfffd5d1e*/
        do /*0xfffd5d4b*/
        {
          if ( *v12 ) /*0xfffd5d20*/
          {
            sub_FFFC5621(a1, 0, v18); /*0xfffd5d2b*/
            sub_FFFC85B4(a1, 0, v18); /*0xfffd5d36*/
          }
          LOBYTE(v18) = v18 + 1; /*0xfffd5d3e*/
          v12 += 430; /*0xfffd5d41*/
        }
        while ( (unsigned __int8)v18 < 3u ); /*0xfffd5d4b*/
        sub_FFFCA83C(a1, 0x15Eu); /*0xfffd5d4f*/
      }
    }
  }
  sub_FFFCBF04((_BYTE *)a1); /*0xfffd5d57*/
  sub_FFFD427E((_BYTE *)a1, 0); /*0xfffd5d5f*/
  return sub_FFFC7CA8((_BYTE *)a1); /*0xfffd5d71*/
}

/* 0xfffd5d76 sub_FFFD5D76 */
char __cdecl sub_FFFD5D76(_BYTE *a1)
{
  char v2; // al
  bool v3; // zf
  unsigned __int8 v4; // dl
  int v5; // edi
  int v6; // eax
  unsigned __int8 v7; // dl
  int v8; // eax
  unsigned __int8 v9; // dl
  int v10; // eax
  unsigned __int8 v11; // dl
  int v12; // eax
  unsigned __int8 v13; // dl
  int v14; // eax
  unsigned __int8 v15; // dl
  int v16; // eax
  unsigned __int8 v17; // dl
  int v18; // eax
  unsigned __int8 v19; // dl
  int v20; // eax
  unsigned __int8 v21; // dl
  char v22; // al
  unsigned __int8 v23; // dl
  int v24; // eax
  unsigned __int8 v25; // dl
  __int16 v26; // ax
  unsigned __int8 v27; // dl
  int v28; // edi
  unsigned __int8 v29; // dl
  unsigned __int8 v30; // dl
  int v31; // edi
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // dl
  unsigned __int8 v36; // dl
  unsigned __int8 v37; // dl
  unsigned __int8 v38; // dl
  unsigned __int8 v39; // dl
  unsigned __int8 v40; // dl
  unsigned __int8 v41; // dl
  unsigned __int8 v42; // dl
  char v43; // dl
  unsigned __int8 v44; // di
  unsigned __int8 v45; // dl
  int v46; // eax
  unsigned __int8 v48; // [esp-4Ch] [ebp-80h]
  unsigned __int8 v49; // [esp-4Ch] [ebp-80h]
  unsigned __int8 v50; // [esp-38h] [ebp-6Ch]
  unsigned __int8 v51; // [esp-38h] [ebp-6Ch]
  unsigned __int8 v52; // [esp-38h] [ebp-6Ch]
  unsigned __int8 v53; // [esp-24h] [ebp-58h]
  unsigned __int8 v54; // [esp-24h] [ebp-58h]
  unsigned __int8 v55; // [esp-24h] [ebp-58h]
  unsigned __int8 v56; // [esp-10h] [ebp-44h]
  unsigned __int8 v57; // [esp-10h] [ebp-44h]
  _DWORD v58[30]; // [esp+Ch] [ebp-28h]
  _BYTE v59[8]; // [esp+84h] [ebp+50h] BYREF
  int v60; // [esp+8Ch] [ebp+58h]
  int v61; // [esp+90h] [ebp+5Ch]
  __int16 *v62; // [esp+94h] [ebp+60h]
  int v63; // [esp+98h] [ebp+64h] BYREF
  char *v64; // [esp+9Ch] [ebp+68h]
  _WORD *v65; // [esp+A0h] [ebp+6Ch]
  int v66; // [esp+A4h] [ebp+70h]
  char v67; // [esp+B3h] [ebp+7Fh]

  v2 = a1[1]; /*0xfffd5d86*/
  a1[1] = 2; /*0xfffd5d8b*/
  v3 = a1[3755] == 0; /*0xfffd5d8f*/
  v67 = v2; /*0xfffd5d96*/
  if ( !v3 && a1[3758] ) /*0xfffd5d9f*/
  {
    LOBYTE(v66) = a1[6997]; /*0xfffd5db1*/
    v64 = (char *)&v63; /*0xfffd5db7*/
    v4 = 4; /*0xfffd5dc3*/
    v65 = v59; /*0xfffd5dc5*/
    v62 = (__int16 *)(a1 + 5512); /*0xfffd5dc8*/
    v5 = 0; /*0xfffd5dcb*/
    v61 = 3; /*0xfffd5dcd*/
    do /*0xfffd5ee8*/
    {
      if ( *(_BYTE *)v62 ) /*0xfffd5dd7*/
      {
        v6 = sub_FFFC4EEF((int)a1, v66, v4, 0, 0x7Cu); /*0xfffd5de7*/
        v53 = v66; /*0xfffd5df3*/
        v58[v5 + 27] = v6; /*0xfffd5df6*/
        v8 = sub_FFFC4EEF((int)a1, v53, v7, 0, 0xD8u); /*0xfffd5dfb*/
        v50 = v66; /*0xfffd5e07*/
        v58[v5 + 21] = v8; /*0xfffd5e0a*/
        v10 = sub_FFFC4EEF((int)a1, v50, v9, 0, 0xDCu); /*0xfffd5e0f*/
        v48 = v66; /*0xfffd5e1b*/
        v58[v5 + 9] = v10; /*0xfffd5e1e*/
        v12 = sub_FFFC4EEF((int)a1, v48, v11, 0, 0xA4u); /*0xfffd5e23*/
        v56 = v66; /*0xfffd5e32*/
        v58[v5 + 15] = v12; /*0xfffd5e35*/
        v14 = sub_FFFC4EEF((int)a1, v56, v13, 0, 0xA8u); /*0xfffd5e3a*/
        v54 = v66; /*0xfffd5e46*/
        v58[v5 + 3] = v14; /*0xfffd5e49*/
        v16 = sub_FFFC4EEF((int)a1, v54, v15, 0, 0xACu); /*0xfffd5e4e*/
        v51 = v66; /*0xfffd5e5a*/
        v58[v5 + 24] = v16; /*0xfffd5e5d*/
        v18 = sub_FFFC4EEF((int)a1, v51, v17, 0, 0xB0u); /*0xfffd5e62*/
        v49 = v66; /*0xfffd5e6b*/
        v58[v5 + 18] = v18; /*0xfffd5e6e*/
        v20 = sub_FFFC4EEF((int)a1, v49, v19, 0, 0x58u); /*0xfffd5e73*/
        v57 = v66; /*0xfffd5e7f*/
        v58[v5 + 12] = v20; /*0xfffd5e82*/
        v22 = sub_FFFC4E96((int)a1, v57, v21, 0, 0x68u); /*0xfffd5e87*/
        v55 = v66; /*0xfffd5e96*/
        *v64 = v22; /*0xfffd5e99*/
        v24 = sub_FFFC4EEF((int)a1, v55, v23, 0, 0xD4u); /*0xfffd5e9c*/
        v52 = v66; /*0xfffd5ea8*/
        v58[v5 + 6] = v24; /*0xfffd5eab*/
        v26 = sub_FFFC4EC2((int)a1, v52, v25, 0, 0xB8u); /*0xfffd5eb0*/
        *v65 = v26; /*0xfffd5eb8*/
        v58[v5] = sub_FFFC4EEF((int)a1, v66, v27, 0, 0x9Cu); /*0xfffd5ece*/
      }
      v62 += 215; /*0xfffd5ed2*/
      ++v65; /*0xfffd5ed9*/
      ++v4; /*0xfffd5edd*/
      ++v64; /*0xfffd5edf*/
      ++v5; /*0xfffd5ee2*/
      --v61; /*0xfffd5ee5*/
    }
    while ( v61 ); /*0xfffd5ee8*/
    sub_FFFCA83C((int)a1, 0x64u); /*0xfffd5ef1*/
    v28 = sub_FFFC4EEF((int)a1, a1[6997], 3u, 0, 0x48u); /*0xfffd5f0a*/
    sub_FFFC4FB2((int)a1, v29, 3u, 0, 0x48u, v28 | 0x38); /*0xfffd5f17*/
    sub_FFFCA83C((int)a1, 1u); /*0xfffd5f1f*/
    sub_FFFC4FB2((int)a1, a1[6997], 3u, 0, 0x48u, v28); /*0xfffd5f34*/
    sub_FFFCA83C((int)a1, 1u); /*0xfffd5f3f*/
    sub_FFFC713F((int)a1, 0, 0); /*0xfffd5f47*/
    v64 = (char *)&v63; /*0xfffd5f4f*/
    v62 = (__int16 *)v59; /*0xfffd5f55*/
    v30 = 4; /*0xfffd5f58*/
    LOBYTE(v61) = 4; /*0xfffd5f63*/
    v65 = a1 + 5512; /*0xfffd5f66*/
    v31 = 0; /*0xfffd5f69*/
    do /*0xfffd60ab*/
    {
      if ( *(_BYTE *)v65 ) /*0xfffd5f6e*/
      {
        sub_FFFC4FB2((int)a1, v66, v30, 0, 0x7Cu, v58[v31 + 27]); /*0xfffd5f82*/
        sub_FFFC4FB2((int)a1, v66, v32, 0, 0xD8u, v58[v31 + 21]); /*0xfffd5f96*/
        sub_FFFC4FB2((int)a1, v66, v33, 0, 0xDCu, v58[v31 + 9]); /*0xfffd5faa*/
        sub_FFFC4FB2((int)a1, v66, v34, 0, 0xA4u, v58[v31 + 15]); /*0xfffd5fc1*/
        sub_FFFC4FB2((int)a1, v66, v35, 0, 0xA8u, v58[v31 + 3]); /*0xfffd5fd5*/
        sub_FFFC4FB2((int)a1, v66, v36, 0, 0xACu, v58[v31 + 24]); /*0xfffd5fe9*/
        sub_FFFC4FB2((int)a1, v66, v37, 0, 0xB0u, v58[v31 + 18]); /*0xfffd6000*/
        sub_FFFC4FB2((int)a1, v66, v38, 0, 0x58u, v58[v31 + 12]); /*0xfffd6011*/
        sub_FFFC4F4E((int)a1, v66, v39, 0, 0x68u, *v64); /*0xfffd6025*/
        sub_FFFC4FB2((int)a1, v66, v40, 0, 0xD4u, v58[v31 + 6]); /*0xfffd603c*/
        sub_FFFC4F7F((int)a1, v66, v41, 0, 0xB8u, *v62); /*0xfffd6053*/
        sub_FFFC4FB2((int)a1, v66, v42, 0, 0x9Cu, v58[v31]); /*0xfffd6067*/
        LOBYTE(v60) = v43 - 4; /*0xfffd6072*/
        sub_FFFC92EC((int)a1, 0, v43 - 4); /*0xfffd6078*/
        sub_FFFC5BCB((int)a1, 0, v60, 8u); /*0xfffd6084*/
        v30 = v61; /*0xfffd6089*/
      }
      v65 += 215; /*0xfffd608f*/
      ++v64; /*0xfffd6096*/
      ++v62; /*0xfffd6099*/
      ++v31; /*0xfffd609d*/
      LOBYTE(v61) = ++v30; /*0xfffd60a8*/
    }
    while ( (unsigned __int8)(v30 - 4) < 3u ); /*0xfffd60ab*/
  }
  a1[35] = 0; /*0xfffd60b2*/
  sub_FFFCBF04(a1); /*0xfffd60b5*/
  sub_FFFD427E(a1, 0); /*0xfffd60bc*/
  if ( a1[3755] && a1[3758] ) /*0xfffd60d0*/
  {
    LOBYTE(v66) = a1[6997]; /*0xfffd60e4*/
    v44 = v66; /*0xfffd60e7*/
    LOBYTE(v63) = 0; /*0xfffd60ea*/
    v65 = a1 + 5512; /*0xfffd60ed*/
    do /*0xfffd6133*/
    {
      if ( *(_BYTE *)v65 ) /*0xfffd60f3*/
      {
        sub_FFFC85B4((int)a1, 0, v63); /*0xfffd60fc*/
        sub_FFFC4FB2((int)a1, v44, v63 + 4, 0, 0x50u, 4); /*0xfffd6111*/
        sub_FFFC4FB2((int)a1, v44, v45, 0, 0x50u, 0); /*0xfffd611d*/
      }
      LOBYTE(v63) = v63 + 1; /*0xfffd6125*/
      v65 += 215; /*0xfffd6128*/
    }
    while ( (unsigned __int8)v63 < 3u ); /*0xfffd6133*/
    v46 = sub_FFFC4EEF((int)a1, v44, 3u, 0, 0x48u); /*0xfffd613c*/
    sub_FFFC4FB2((int)a1, v44, 3u, 0, 0x48u, v46 | 0x80); /*0xfffd614e*/
  }
  a1[35] = 1; /*0xfffd6157*/
  sub_FFFCCD2C(a1); /*0xfffd615b*/
  a1[1] = v67; /*0xfffd6165*/
  return v67; /*0xfffd6164*/
}

/* 0xfffd616f sub_FFFD616F */
void __cdecl sub_FFFD616F(_BYTE *a1)
{
  _BYTE *v1; // ebx
  unsigned __int8 *v2; // eax
  _BYTE *v3; // ebx
  int v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+8h] [ebp-4h]
  unsigned __int8 v6; // [esp+8h] [ebp-4h]

  if ( a1[3755] && a1[3758] ) /*0xfffd6181*/
  {
    v4 = 256; /*0xfffd6192*/
    v1 = a1 + 5512; /*0xfffd6199*/
    v2 = a1 + 7089; /*0xfffd619b*/
    v5 = 3; /*0xfffd61a1*/
    do /*0xfffd61c7*/
    {
      if ( *v1 && *v2 < v4 ) /*0xfffd61b8*/
        v4 = *v2; /*0xfffd61ba*/
      v1 += 430; /*0xfffd61bd*/
      v2 += 1068; /*0xfffd61bf*/
      --v5; /*0xfffd61c4*/
    }
    while ( v5 ); /*0xfffd61c7*/
    v6 = 0; /*0xfffd61c9*/
    v3 = a1 + 5512; /*0xfffd61cd*/
    do /*0xfffd61f5*/
    {
      if ( *v3 ) /*0xfffd61cf*/
        sub_FFFC9CB1((int)a1, 0, v6, -v4, 1, 0); /*0xfffd61e4*/
      ++v6; /*0xfffd61ec*/
      v3 += 430; /*0xfffd61ef*/
    }
    while ( v6 < 3u ); /*0xfffd61f5*/
  }
  sub_FFFCBF04(a1); /*0xfffd61fa*/
  sub_FFFD427E(a1, 0); /*0xfffd6202*/
  sub_FFFC94EC(a1); /*0xfffd6208*/
}

/* 0xfffd6213 sub_FFFD6213 */
unsigned int __cdecl sub_FFFD6213(int a1)
{
  _BYTE *v1; // ebx
  unsigned __int8 *v2; // edx
  unsigned __int8 *v3; // edi
  __int16 j; // ax
  char v5; // cl
  _BYTE *v6; // eax
  unsigned __int8 v7; // dl
  bool v8; // zf
  char v9; // cl
  char v10; // dl
  int v11; // esi
  _BYTE *v12; // edi
  unsigned __int8 v13; // dl
  _BYTE *v14; // edi
  _BYTE *v16; // [esp+10h] [ebp-2Ch]
  unsigned __int8 *v17; // [esp+14h] [ebp-28h]
  _BYTE *v18; // [esp+18h] [ebp-24h]
  _BYTE *v19; // [esp+18h] [ebp-24h]
  int v20; // [esp+1Ch] [ebp-20h]
  _BYTE *v21; // [esp+1Ch] [ebp-20h]
  unsigned __int8 *v22; // [esp+20h] [ebp-1Ch]
  _BYTE *v23; // [esp+20h] [ebp-1Ch]
  unsigned __int8 *v24; // [esp+24h] [ebp-18h]
  _BYTE *v25; // [esp+24h] [ebp-18h]
  int v26; // [esp+28h] [ebp-14h]
  int v27; // [esp+2Ch] [ebp-10h]
  int v28; // [esp+30h] [ebp-Ch]
  unsigned __int8 i; // [esp+30h] [ebp-Ch]
  unsigned __int8 v30; // [esp+34h] [ebp-8h]
  unsigned __int16 *v31; // [esp+38h] [ebp-4h]

  v1 = (_BYTE *)a1; /*0xfffd621a*/
  *(_BYTE *)(a1 + 19) = 0; /*0xfffd621f*/
  for ( i = 0; i <= 0x80u; i += 2 ) /*0xfffd6223*/
  {
    if ( v1[3755] ) /*0xfffd6227*/
    {
      v30 = 4; /*0xfffd6242*/
      v20 = 0; /*0xfffd6246*/
      v18 = v1 + 5512; /*0xfffd6249*/
      v16 = v1 + 5640; /*0xfffd624c*/
      while ( !*v18 ) /*0xfffd6255*/
      {
LABEL_33:
        v20 += 1068; /*0xfffd6420*/
        v18 += 430; /*0xfffd642f*/
        ++v30; /*0xfffd6434*/
        v16 += 430; /*0xfffd643e*/
        if ( (unsigned __int8)(v30 - 4) >= 3u ) /*0xfffd6441*/
          goto LABEL_34; /*0xfffd6441*/
      }
      if ( !sub_FFFC531F((int)v1, 0, 742424710, 4u) ) /*0xfffd6264*/
        sub_FFFC4FB2((int)v1, v1[6997], v30, 0, 0x6Cu, 8); /*0xfffd6280*/
      LOBYTE(v31) = 0; /*0xfffd628b*/
      v26 = 0; /*0xfffd628f*/
      v24 = v2 - 65; /*0xfffd6292*/
      v22 = v2; /*0xfffd6295*/
      while ( !*v24 ) /*0xfffd629e*/
      {
LABEL_32:
        LOBYTE(v31) = (_BYTE)v31 + 1; /*0xfffd6401*/
        v26 += 212; /*0xfffd6404*/
        v24 += 184; /*0xfffd6410*/
        v22 += 184; /*0xfffd6413*/
        if ( (unsigned __int8)v31 >= 2u ) /*0xfffd641a*/
          goto LABEL_33; /*0xfffd641a*/
      }
      v3 = v22; /*0xfffd62a4*/
      LOBYTE(a1) = 0; /*0xfffd62a7*/
      v27 = 0; /*0xfffd62ab*/
      v17 = v22; /*0xfffd62ae*/
      while ( 1 ) /*0xfffd62b1*/
      {
        if ( *(v3 - 10) && (v1[3734] || (a1 & 1) == 0) ) /*0xfffd62c8*/
        {
          sub_FFFCBF69(v1, 0, (unsigned __int8)(v30 - 4), v31, a1, i); /*0xfffd62e4*/
          sub_FFFD294E(v1, 0, v30 - 4, 1); /*0xfffd62f0*/
          sub_FFFC4FB2((int)v1, v1[6997], v30, 0, 0x54u, (32 * *(v3 - 9)) | 0x26B01); /*0xfffd6312*/
          for ( j = sub_FFFC4EC2((int)v1, v1[6997], v30, 0, 0x5Cu); ; j = sub_FFFC4EC2((int)v1, v1[6997], v30, 0, 0x5Cu) ) /*0xfffd632a*/
          {
            v5 = j; /*0xfffd635a*/
            if ( (j & 0x100) != 0 ) /*0xfffd635f*/
              break; /*0xfffd635f*/
            sub_FFFCA83C((int)v1, 0x64u); /*0xfffd633c*/
          }
          v6 = &v1[v20 + 7878 + v26 + v27]; /*0xfffd6376*/
          v7 = *v3; /*0xfffd637d*/
          i = *v3; /*0xfffd637f*/
          if ( (v5 & 8) != 0 ) /*0xfffd6382*/
          {
            v8 = *v6 == 0; /*0xfffd6384*/
            v1[v20 + 7883 + v26 + v27] = v7; /*0xfffd6387*/
            if ( v8 ) /*0xfffd638a*/
            {
              *v6 = 1; /*0xfffd638c*/
              v1[v20 + 7882 + v26 + v27] = v7; /*0xfffd638f*/
              v1[v20 + 7884 + v26 + v27] = 1; /*0xfffd6392*/
            }
            else
            {
              ++v6[6]; /*0xfffd6398*/
            }
            if ( v7 != 0x80 ) /*0xfffd639b*/
              goto LABEL_31; /*0xfffd639b*/
            v9 = v1[v20 + 7881 + v26 + v27]; /*0xfffd63a0*/
            if ( v9 ) /*0xfffd63a5*/
            {
              v10 = v1[v20 + 7880 + v26 + v27]; /*0xfffd63a7*/
              v6[6] += v9; /*0xfffd63aa*/
              v1[v20 + 7883 + v26 + v27] = v10; /*0xfffd63ad*/
            }
            if ( v6[6] <= v6[9] ) /*0xfffd63b6*/
              goto LABEL_31; /*0xfffd63b6*/
            v11 = (int)&v1[v20 + 7882 + v26 + v27]; /*0xfffd63b8*/
          }
          else
          {
            if ( !*v6 ) /*0xfffd63bd*/
              goto LABEL_31; /*0xfffd63bd*/
            v8 = v1[v20 + 7882 + v26 + v27] == 0; /*0xfffd63c5*/
            *v6 = 0; /*0xfffd63c8*/
            if ( v8 ) /*0xfffd63cb*/
            {
              *(_WORD *)&v1[v20 + 7879 + v26 + v27] = *(_WORD *)&v1[v20 + 7882 + v26 + v27]; /*0xfffd63d2*/
              v6[3] = v6[6]; /*0xfffd63d4*/
            }
            if ( v6[6] <= v6[9] ) /*0xfffd63db*/
              goto LABEL_31; /*0xfffd63db*/
            v11 = (int)&v1[v20 + 7882 + v26 + v27]; /*0xfffd63dd*/
          }
          *(_WORD *)&v1[v20 + 7885 + v26 + v27] = *(_WORD *)v11; /*0xfffd63e2*/
          v1[v20 + 7887 + v26 + v27] = *(_BYTE *)(v11 + 2); /*0xfffd63e4*/
        }
LABEL_31:
        LOBYTE(a1) = a1 + 1; /*0xfffd63e7*/
        v27 += 10; /*0xfffd63ed*/
        v3 = v17 + 32; /*0xfffd63f1*/
        v17 += 32; /*0xfffd63f8*/
        if ( (unsigned __int8)a1 >= 4u ) /*0xfffd63fb*/
          goto LABEL_32; /*0xfffd63fb*/
      }
    }
LABEL_34:
    ; /*0xfffd6447*/
  }
  v1[19] = 1; /*0xfffd6455*/
  if ( v1[3755] ) /*0xfffd6459*/
  {
    v12 = v1 + 5630; /*0xfffd646c*/
    LOBYTE(v28) = 0; /*0xfffd6472*/
    v23 = v1 + 5512; /*0xfffd6476*/
    v25 = v1 + 5630; /*0xfffd6479*/
    do /*0xfffd654f*/
    {
      if ( *v23 ) /*0xfffd647f*/
      {
        if ( !sub_FFFC531F((int)v1, 0, 742424710, 4u) ) /*0xfffd6493*/
        {
          sub_FFFC4FB2((int)v1, v1[6997], v28 + 4, 0, 0x6Cu, 12); /*0xfffd64b5*/
          sub_FFFC4FB2((int)v1, v1[6997], v13, 0, 0x6Cu, 0); /*0xfffd64c9*/
        }
        LOBYTE(v31) = 0; /*0xfffd64d4*/
        v14 = v12 - 55; /*0xfffd64d8*/
        v21 = v25; /*0xfffd64db*/
        do /*0xfffd6536*/
        {
          if ( *v14 ) /*0xfffd64de*/
          {
            LOBYTE(a1) = 0; /*0xfffd64e6*/
            v19 = v21; /*0xfffd64ea*/
            do /*0xfffd6523*/
            {
              if ( *v19 && (v1[3734] || (a1 & 1) == 0) ) /*0xfffd6502*/
                sub_FFFCBF69(v1, 0, v28, v31, a1, 0); /*0xfffd6510*/
              LOBYTE(a1) = a1 + 1; /*0xfffd6518*/
              v19 += 32; /*0xfffd651b*/
            }
            while ( (unsigned __int8)a1 < 4u ); /*0xfffd6523*/
          }
          LOBYTE(v31) = (_BYTE)v31 + 1; /*0xfffd6525*/
          v21 += 184; /*0xfffd652d*/
          v14 += 184; /*0xfffd6530*/
        }
        while ( (unsigned __int8)v31 < 2u ); /*0xfffd6536*/
      }
      LOBYTE(v28) = v28 + 1; /*0xfffd653b*/
      v23 += 430; /*0xfffd6543*/
      v12 = v25 + 430; /*0xfffd6546*/
      v25 += 430; /*0xfffd654c*/
    }
    while ( (unsigned __int8)v28 < 3u ); /*0xfffd654f*/
  }
  sub_FFFCBF04(v1); /*0xfffd6556*/
  return sub_FFFD427E(v1, 0); /*0xfffd6566*/
}

/* 0xfffd656b sub_FFFD656B */
int __cdecl sub_FFFD656B(int a1)
{
  int result; // eax

  *(_BYTE *)(a1 + 32) = 1; /*0xfffd6573*/
  sub_FFFD4B8B(a1, 0); /*0xfffd6577*/
  sub_FFFD4B8B(a1, 1); /*0xfffd657f*/
  result = sub_FFFD4B8B(a1, 2); /*0xfffd6587*/
  if ( *(_BYTE *)(a1 + 3738) ) /*0xfffd658f*/
    result = sub_FFFD4B8B(a1, 3); /*0xfffd659b*/
  *(_BYTE *)(a1 + 32) = 0; /*0xfffd65a2*/
  return result; /*0xfffd65a6*/
}

/* 0xfffd65a8 sub_FFFD65A8 */
void __cdecl sub_FFFD65A8(int a1, char a2)
{
  int v2; // esi
  char v3; // al
  char v4; // bl
  char v5; // al
  unsigned __int8 v6; // al
  char v7; // bl
  unsigned __int8 v8; // al
  bool v9; // zf
  char v10; // bl
  unsigned __int8 i; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // [esp+Fh] [ebp-5h] BYREF
  char v16; // [esp+10h] [ebp-4h] BYREF
  char v17; // [esp+11h] [ebp-3h] BYREF
  char v18; // [esp+12h] [ebp-2h]
  char v19; // [esp+13h] [ebp-1h]

  v2 = a1; /*0xfffd65af*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) && sub_FFFC52CF(a1, 0, 745570438, 1u) && !a2 ) /*0xfffd65ed*/
  {
    HIBYTE(a1) = ((unsigned __int8)sub_FFFC4FE3( /*0xfffd661a*/
                                     v2,
                                     *(_BYTE *)(v2 + 6997),
                                     3u,
                                     *(unsigned __int16 *)(v2 + 232) + v2 + 2 * *(unsigned __int16 *)(v2 + 232) + 1720) >> 1)
               & 0xF;
    v3 = sub_FFFC4FE3( /*0xfffd663b*/
           v2,
           *(_BYTE *)(v2 + 6997),
           3u,
           *(unsigned __int16 *)(v2 + 252) + v2 + 2 * *(unsigned __int16 *)(v2 + 252) + 1720);
    v4 = HIBYTE(a1) | (16 * (v3 & 1)); /*0xfffd6664*/
    HIBYTE(a1) = ((unsigned __int8)sub_FFFC4FE3( /*0xfffd6672*/
                                     v2,
                                     *(_BYTE *)(v2 + 6997),
                                     3u,
                                     *(unsigned __int16 *)(v2 + 234) + v2 + 2 * *(unsigned __int16 *)(v2 + 234) + 1720) >> 1)
               & 0xF;
    v5 = sub_FFFC4FE3( /*0xfffd6693*/
           v2,
           *(_BYTE *)(v2 + 6997),
           3u,
           *(unsigned __int16 *)(v2 + 254) + v2 + 2 * *(unsigned __int16 *)(v2 + 254) + 1720);
    v6 = HIBYTE(a1) | (16 * (v5 & 1)); /*0xfffd669d*/
    v7 = v4 - v6; /*0xfffd66a3*/
    *(_BYTE *)(v2 + 3767) = v7; /*0xfffd66ad*/
    if ( v6 + v7 >= 0 ) /*0xfffd66b3*/
    {
      if ( v6 + v7 > 31 ) /*0xfffd66c2*/
        *(_BYTE *)(v2 + 3767) = 31 - v6; /*0xfffd66c8*/
    }
    else
    {
      *(_BYTE *)(v2 + 3767) = -v6; /*0xfffd66b7*/
    }
    sub_FFFC8367( /*0xfffd66fd*/
      v2,
      *(_BYTE *)(v2 + 6997),
      3u,
      *(unsigned __int16 *)(v2 + 236) + v2 + 2 * *(unsigned __int16 *)(v2 + 236) + 1720,
      2 * (*(_BYTE *)(v2 + 3767) & 0xF),
      1u);
    sub_FFFC8367( /*0xfffd672e*/
      v2,
      *(_BYTE *)(v2 + 6997),
      3u,
      *(unsigned __int16 *)(v2 + 256) + v2 + 2 * *(unsigned __int16 *)(v2 + 256) + 1720,
      (*(unsigned __int8 *)(v2 + 3767) >> 4) & 1,
      1u);
    v8 = sub_FFFC4FE3( /*0xfffd6750*/
           v2,
           *(_BYTE *)(v2 + 6997),
           3u,
           *(unsigned __int16 *)(v2 + 238) + v2 + 2 * *(unsigned __int16 *)(v2 + 238) + 1720);
    sub_FFFC8367( /*0xfffd677d*/
      v2,
      *(_BYTE *)(v2 + 6997),
      3u,
      *(unsigned __int16 *)(v2 + 238) + v2 + 2 * *(unsigned __int16 *)(v2 + 238) + 1720,
      v8 | 0x40,
      1u);
  }
  sub_FFFD42CB((_BYTE *)v2, 0); /*0xfffd678d*/
  v9 = *(_BYTE *)(v2 + 3755) == 0; /*0xfffd6792*/
  v18 = 0; /*0xfffd679b*/
  v19 = 0; /*0xfffd679f*/
  if ( v9 || !*(_BYTE *)(v2 + 3758) ) /*0xfffd67a9*/
  {
    v10 = v17; /*0xfffd6847*/
  }
  else
  {
    v10 = 0; /*0xfffd67b6*/
    HIBYTE(a1) = 0; /*0xfffd67bb*/
    v17 = 0; /*0xfffd67bf*/
    v16 = 0; /*0xfffd67c2*/
    v15 = 0; /*0xfffd67c5*/
    if ( a2 ) /*0xfffd67c8*/
    {
      v15 = -*(_BYTE *)(v2 + 7009); /*0xfffd67d2*/
      v16 = -*(_BYTE *)(v2 + 7010); /*0xfffd67dd*/
    }
    *(_BYTE *)(v2 + 3770) = 0; /*0xfffd67e0*/
    for ( i = 0; i < 3u; ++i ) /*0xfffd67e7*/
    {
      if ( *(_BYTE *)(430 * i + v2 + 5512) ) /*0xfffd67f2*/
      {
        ++*(_BYTE *)(v2 + 3770); /*0xfffd67fc*/
        if ( i ) /*0xfffd6804*/
        {
          if ( i == 2 ) /*0xfffd680e*/
          {
            v19 |= 4u; /*0xfffd6810*/
          }
          else
          {
            v18 |= 2u; /*0xfffd6816*/
            v19 |= 2u; /*0xfffd681a*/
          }
        }
        else
        {
          v18 |= 1u; /*0xfffd6806*/
        }
      }
    }
    if ( v18 != 3 ) /*0xfffd6828*/
      v18 = 0; /*0xfffd682a*/
    if ( v19 != 6 ) /*0xfffd6832*/
      v19 = 0; /*0xfffd6834*/
    if ( *(_BYTE *)(v2 + 3770) > 1u ) /*0xfffd683f*/
      *(_BYTE *)(v2 + 27) = 1; /*0xfffd6841*/
  }
  if ( *(_BYTE *)(v2 + 27) ) /*0xfffd684a*/
  {
    if ( !a2 ) /*0xfffd6858*/
      sub_FFFD4AC5((_BYTE *)v2); /*0xfffd685b*/
    *(_BYTE *)(v2 + 20) = 1; /*0xfffd6865*/
    sub_FFFC7365((_BYTE *)v2, 1, 4u); /*0xfffd6869*/
    if ( a2 ) /*0xfffd6875*/
    {
      if ( a2 != 1 ) /*0xfffd6902*/
        goto LABEL_49; /*0xfffd6902*/
      if ( v19 ) /*0xfffd690c*/
      {
        sub_FFFD43D0((_BYTE *)v2, 2, 0, (_BYTE *)&a1 + 3, &v17, 0x28u, 8u, 1u, &v16, 3u); /*0xfffd6926*/
        v14 = HIBYTE(a1); /*0xfffd692b*/
        HIBYTE(a1) = v10; /*0xfffd692e*/
        v10 = v14; /*0xfffd6931*/
        v17 = v14; /*0xfffd6936*/
      }
      if ( v18 ) /*0xfffd693d*/
        sub_FFFD43D0((_BYTE *)v2, 0, 2, (_BYTE *)&a1 + 3, &v17, 0x28u, 8u, 1u, &v15, 3u); /*0xfffd6957*/
      if ( !*(_BYTE *)(v2 + 3755) || !*(_BYTE *)(v2 + 3758) ) /*0xfffd6968*/
        goto LABEL_49; /*0xfffd696f*/
      v13 = HIBYTE(a1); /*0xfffd6971*/
      *(_BYTE *)(v2 + 7009) += HIBYTE(a1); /*0xfffd6974*/
      *(_BYTE *)(v2 + 7010) += v10; /*0xfffd697a*/
    }
    else
    {
      if ( v19 ) /*0xfffd687f*/
      {
        sub_FFFD43D0((_BYTE *)v2, 2, 0, (_BYTE *)&a1 + 3, &v17, 0x28u, 8u, 1u, &v16, 1u); /*0xfffd6898*/
        v12 = HIBYTE(a1); /*0xfffd689d*/
        HIBYTE(a1) = v10; /*0xfffd68a0*/
        v10 = v12; /*0xfffd68a3*/
        v17 = v12; /*0xfffd68a8*/
      }
      if ( v18 ) /*0xfffd68af*/
        sub_FFFD43D0((_BYTE *)v2, 0, 2, (_BYTE *)&a1 + 3, &v17, 0x28u, 8u, 1u, &v15, 1u); /*0xfffd68c8*/
      if ( !*(_BYTE *)(v2 + 3755) || !*(_BYTE *)(v2 + 3758) ) /*0xfffd68dd*/
        goto LABEL_49; /*0xfffd68e4*/
      v13 = HIBYTE(a1); /*0xfffd68ea*/
      *(_BYTE *)(v2 + 7009) = HIBYTE(a1); /*0xfffd68ed*/
      *(_BYTE *)(v2 + 7010) = v10; /*0xfffd68f3*/
    }
    *(_BYTE *)(v2 + 7007) = v13; /*0xfffd6980*/
    *(_BYTE *)(v2 + 7008) = v10; /*0xfffd6986*/
LABEL_49:
    sub_FFFC7CA8((_BYTE *)v2); /*0xfffd698c*/
    *(_BYTE *)(v2 + 20) = 0; /*0xfffd6998*/
  }
}

/* 0xfffd69a1 sub_FFFD69A1 */
int __cdecl sub_FFFD69A1(int a1)
{
  int v1; // ebx
  unsigned __int8 v2; // al
  bool v3; // zf
  unsigned __int8 *v4; // esi
  _BYTE *v5; // edx
  unsigned __int8 v6; // al
  _BYTE *v7; // ecx
  unsigned __int8 *v8; // edi
  unsigned __int8 v9; // dl
  int v10; // esi
  int v11; // eax
  _BYTE *v12; // edi
  unsigned __int8 v13; // dl
  _BYTE *v14; // edi
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  char v18; // al
  unsigned __int8 v19; // al
  unsigned __int8 v20; // cl
  char v21; // al
  _BYTE *v22; // eax
  int v23; // edx
  int v24; // edi
  unsigned __int8 *v25; // ecx
  int v26; // esi
  _BYTE *v27; // esi
  char v28; // di
  int v29; // eax
  int v30; // esi
  unsigned __int8 *v31; // eax
  int v32; // edi
  unsigned __int8 *v33; // eax
  char v34; // cl
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  unsigned __int8 v40; // al
  unsigned __int8 v41; // cl
  char v42; // al
  int v43; // edi
  int v44; // esi
  int v45; // edx
  _BYTE *v46; // eax
  int v47; // eax
  _BYTE *v48; // ecx
  _BYTE *v49; // esi
  unsigned __int8 v50; // al
  int v51; // edx
  _BYTE *v52; // eax
  unsigned __int8 *v53; // ecx
  int v54; // esi
  unsigned __int8 *v55; // ecx
  int v56; // esi
  unsigned __int8 v57; // al
  int v58; // edx
  int v59; // edi
  unsigned __int8 *v60; // esi
  unsigned __int8 v61; // al
  int v62; // edx
  int v63; // edi
  int v64; // eax
  char v65; // cl
  char v66; // al
  char v67; // al
  _BYTE *v68; // esi
  int v69; // eax
  unsigned __int8 *v70; // edi
  int v71; // eax
  unsigned __int8 v72; // dl
  _BYTE *v73; // edi
  unsigned __int8 v74; // di
  int v75; // edi
  int v76; // eax
  int v77; // edx
  _BYTE *v78; // eax
  unsigned __int8 *v79; // ecx
  unsigned __int16 *v80; // esi
  unsigned __int8 v81; // al
  _BYTE *v82; // edi
  int v83; // edi
  int v84; // esi
  unsigned __int8 v85; // al
  int v86; // edi
  int v87; // esi
  int v88; // eax
  _BYTE *v89; // eax
  int v90; // ecx
  _DWORD *v91; // esi
  _DWORD *v92; // eax
  _BYTE *v93; // edx
  _BYTE v95[24]; // [esp+Ch] [ebp-114h] BYREF
  _BYTE v96[168]; // [esp+24h] [ebp-FCh] BYREF
  _DWORD v97[14]; // [esp+CCh] [ebp-54h] BYREF
  _DWORD v98[4]; // [esp+104h] [ebp-1Ch] BYREF
  _DWORD v99[3]; // [esp+114h] [ebp-Ch] BYREF
  unsigned __int16 v100; // [esp+120h] [ebp+0h] BYREF
  int v101; // [esp+124h] [ebp+4h] BYREF
  unsigned __int8 *v102; // [esp+128h] [ebp+8h]
  int v103; // [esp+12Ch] [ebp+Ch]
  unsigned __int8 v104; // [esp+133h] [ebp+13h]
  int v105; // [esp+134h] [ebp+14h]
  int v106; // [esp+138h] [ebp+18h]
  int v107; // [esp+13Fh] [ebp+1Fh]
  unsigned __int8 v108; // [esp+143h] [ebp+23h]
  unsigned __int16 v109; // [esp+144h] [ebp+24h] BYREF
  char v110; // [esp+146h] [ebp+26h]
  unsigned __int8 v111; // [esp+14Ah] [ebp+2Ah]
  char v112; // [esp+14Bh] [ebp+2Bh]
  int v113; // [esp+14Ch] [ebp+2Ch]
  unsigned __int8 v114; // [esp+153h] [ebp+33h]
  int v115; // [esp+154h] [ebp+34h]
  int v116; // [esp+158h] [ebp+38h]
  int v117; // [esp+15Ch] [ebp+3Ch]
  int v118; // [esp+160h] [ebp+40h]
  unsigned __int8 v119; // [esp+164h] [ebp+44h] BYREF
  unsigned __int8 v120; // [esp+165h] [ebp+45h]
  unsigned __int8 v121; // [esp+166h] [ebp+46h]
  unsigned __int8 v122; // [esp+167h] [ebp+47h]
  unsigned __int8 v123; // [esp+168h] [ebp+48h]
  unsigned __int8 v124; // [esp+169h] [ebp+49h]
  unsigned __int8 v125; // [esp+16Ah] [ebp+4Ah]
  unsigned __int8 v126; // [esp+16Bh] [ebp+4Bh]
  unsigned __int8 v127; // [esp+16Ch] [ebp+4Ch]
  unsigned __int8 v128; // [esp+16Dh] [ebp+4Dh]
  unsigned __int8 v129; // [esp+16Eh] [ebp+4Eh]
  unsigned __int8 v130; // [esp+16Fh] [ebp+4Fh]
  int v131; // [esp+170h] [ebp+50h]
  int v132; // [esp+177h] [ebp+57h]
  char v133; // [esp+17Bh] [ebp+5Bh]
  unsigned __int8 *v134; // [esp+17Ch] [ebp+5Ch]
  char v135; // [esp+180h] [ebp+60h]
  char v136; // [esp+181h] [ebp+61h]
  unsigned __int8 v137; // [esp+182h] [ebp+62h]
  unsigned __int8 j; // [esp+183h] [ebp+63h]
  unsigned __int8 v139; // [esp+184h] [ebp+64h]
  unsigned __int8 v140; // [esp+185h] [ebp+65h]
  unsigned __int8 v141; // [esp+18Bh] [ebp+6Bh]
  int v142; // [esp+18Ch] [ebp+6Ch]
  unsigned __int8 i; // [esp+193h] [ebp+73h]
  int v144; // [esp+19Ch] [ebp+7Ch]
  int v145; // [esp+19Ch] [ebp+7Ch]
  int v146; // [esp+19Ch] [ebp+7Ch]
  _BYTE *v147; // [esp+19Ch] [ebp+7Ch]
  char v148; // [esp+19Fh] [ebp+7Fh]

  v1 = a1; /*0xfffd69ad*/
  v141 = *(_BYTE *)(a1 + 28); /*0xfffd69b4*/
  v114 = 0; /*0xfffd69bd*/
  v135 = 0; /*0xfffd69c1*/
  sub_FFFD471A(a1, (int)v97); /*0xfffd69c5*/
  sub_FFFC415A((_BYTE *)a1, &v100, &v109); /*0xfffd69d3*/
  sub_FFFC7365((_BYTE *)a1, 1, 5u); /*0xfffd69dd*/
  *(_BYTE *)(a1 + 33) = 1; /*0xfffd69e5*/
  if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd69f6*/
  {
    LOBYTE(v107) = *(_BYTE *)(a1 + 6997); /*0xfffd6a09*/
    v2 = sub_FFFC4FE3(a1, v107, 3u, *(unsigned __int16 *)(a1 + 208) + a1 + 2 * *(unsigned __int16 *)(a1 + 208) + 1720); /*0xfffd6a24*/
    v3 = *(_BYTE *)(a1 + 3738) == 0; /*0xfffd6a2e*/
    v104 = v2 >> 1; /*0xfffd6a35*/
    if ( v3 ) /*0xfffd6a38*/
    {
      v114 = 32; /*0xfffd6a53*/
    }
    else
    {
      sub_FFFD91CC(a1, 0, &v101); /*0xfffd6a41*/
      v114 = *(_BYTE *)(a1 + 29) + 1; /*0xfffd6a4e*/
    }
    v118 = 0; /*0xfffd6a57*/
    v103 = 0; /*0xfffd6a5b*/
    v4 = (unsigned __int8 *)(a1 + 5514); /*0xfffd6a68*/
    v5 = (_BYTE *)(a1 + 5512); /*0xfffd6a6b*/
    LOBYTE(v132) = 0; /*0xfffd6a83*/
    memset(v96, 33, sizeof(v96)); /*0xfffd6a87*/
    do /*0xfffd6b22*/
    {
      if ( *v5 ) /*0xfffd6a89*/
      {
        v135 |= 1 << v118; /*0xfffd6a95*/
        if ( *v4 ) /*0xfffd6a98*/
        {
          v6 = *v4; /*0xfffd6a9e*/
          v7 = v5 + 64; /*0xfffd6aa1*/
          v142 = (int)(v5 + 64); /*0xfffd6aa7*/
          a1 = (int)(v5 + 127); /*0xfffd6aaa*/
          v131 = v6; /*0xfffd6aad*/
          do /*0xfffd6b09*/
          {
            if ( *(v7 - 1) && !*v7 ) /*0xfffd6ab6*/
            {
              v8 = (unsigned __int8 *)a1; /*0xfffd6abb*/
              LOBYTE(v117) = 0; /*0xfffd6abe*/
              do /*0xfffd6af7*/
              {
                if ( *(v8 - 9) && (_BYTE)v132 != 1 && (*(_BYTE *)(v1 + 3734) || (v117 & 1) == 0) ) /*0xfffd6adb*/
                {
                  *((_BYTE *)v99 + v103 + *v8) = v8[2]; /*0xfffd6ae6*/
                  v7 = (_BYTE *)v142; /*0xfffd6aea*/
                }
                LOBYTE(v117) = v117 + 1; /*0xfffd6aed*/
                v8 += 32; /*0xfffd6af0*/
              }
              while ( (unsigned __int8)v117 < 4u ); /*0xfffd6af7*/
            }
            a1 += 184; /*0xfffd6afe*/
            v7 += 184; /*0xfffd6b01*/
            v3 = v131-- == 1; /*0xfffd6b03*/
            v142 = (int)v7; /*0xfffd6b06*/
          }
          while ( !v3 ); /*0xfffd6b09*/
        }
      }
      LOBYTE(v132) = v132 + 1; /*0xfffd6b0b*/
      v103 += 4; /*0xfffd6b0e*/
      ++v118; /*0xfffd6b12*/
      v4 += 430; /*0xfffd6b1a*/
      v5 += 430; /*0xfffd6b1c*/
    }
    while ( (unsigned __int8)v132 < 3u ); /*0xfffd6b22*/
  }
  *(_BYTE *)(v1 + 33) = 0; /*0xfffd6b28*/
  if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd6b35*/
  {
    v9 = *(_BYTE *)(v1 + 6997); /*0xfffd6b40*/
    while ( (sub_FFFC4EEF(v1, v9, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd6b5e*/
      ; /*0xfffd6b46*/
  }
  v103 = -12; /*0xfffd6b60*/
  do
  {
    v10 = v103; /*0xfffd6b67*/
    v11 = (v103 + 12) / 4; /*0xfffd6b71*/
    *(_BYTE *)(v1 + 33) = 1; /*0xfffd6b73*/
    v3 = *(_BYTE *)(v1 + 3755) == 0; /*0xfffd6b77*/
    v137 = v11; /*0xfffd6b7e*/
    if ( !v3 && *(_BYTE *)(v1 + 3758) ) /*0xfffd6b87*/
    {
      LOBYTE(v107) = *(_BYTE *)(v1 + 6997); /*0xfffd6b9a*/
      v133 = 0; /*0xfffd6ba8*/
      if ( v10 + v100 > 511 || v10 + v109 < 0 ) /*0xfffd6bb4*/
      {
        v133 = 1; /*0xfffd6c18*/
      }
      else
      {
        v12 = (_BYTE *)(v1 + 5512); /*0xfffd6bb6*/
        v142 = 3; /*0xfffd6bbc*/
        do /*0xfffd6c14*/
        {
          if ( *v12 ) /*0xfffd6bc3*/
          {
            sub_FFFC8367( /*0xfffd6be3*/
              v1,
              v107,
              3u,
              *(unsigned __int16 *)(v1 + 186) + v1 + 2 * *(unsigned __int16 *)(v1 + 186) + 1720,
              v10,
              1u);
            sub_FFFC8367( /*0xfffd6c03*/
              v1,
              v107,
              3u,
              *(unsigned __int16 *)(v1 + 182) + v1 + 2 * *(unsigned __int16 *)(v1 + 182) + 1720,
              v10,
              1u);
          }
          v12 += 430; /*0xfffd6c0b*/
          --v142; /*0xfffd6c11*/
        }
        while ( v142 ); /*0xfffd6c14*/
      }
    }
    *(_BYTE *)(v1 + 33) = 0; /*0xfffd6c1c*/
    if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd6c29*/
    {
      v13 = *(_BYTE *)(v1 + 6997); /*0xfffd6c34*/
      while ( (sub_FFFC4EEF(v1, v13, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd6c52*/
        ; /*0xfffd6c3a*/
      LOBYTE(v132) = 0; /*0xfffd6c54*/
      v14 = (_BYTE *)(v1 + 5512); /*0xfffd6c58*/
      do /*0xfffd6c7e*/
      {
        if ( *v14 ) /*0xfffd6c5e*/
          sub_FFFC85B4(v1, 0, v132); /*0xfffd6c69*/
        LOBYTE(v132) = v132 + 1; /*0xfffd6c71*/
        v14 += 430; /*0xfffd6c74*/
      }
      while ( (unsigned __int8)v132 < 3u ); /*0xfffd6c7e*/
    }
    for ( i = 0; i < 2u; ++i )
    {
      v3 = *(_BYTE *)(v1 + 3755) == 0; /*0xfffd6c84*/
      v108 = 0; /*0xfffd6c8b*/
      if ( !v3 && *(_BYTE *)(v1 + 3758) ) /*0xfffd6c95*/
      {
        v144 = 0; /*0xfffd6ca2*/
        v118 = 0; /*0xfffd6ca6*/
        v142 = 3; /*0xfffd6caa*/
        do /*0xfffd6d0b*/
        {
          v15 = *(_BYTE *)(v1 + v118 + 5514); /*0xfffd6cb4*/
          if ( v15 ) /*0xfffd6cbd*/
          {
            v116 = (int)&v97[2 * v144 + 12]; /*0xfffd6cd6*/
            memset(&v95[8 * v144], 0, 4 * ((4 * (unsigned int)v15) >> 2)); /*0xfffd6ce2*/
            memset((void *)v116, 0, 4 * ((4 * (unsigned int)v15) >> 2)); /*0xfffd6cf5*/
          }
          ++v144; /*0xfffd6cfe*/
          v118 += 430; /*0xfffd6d01*/
          --v142; /*0xfffd6d08*/
        }
        while ( v142 ); /*0xfffd6d0b*/
        if ( *(_BYTE *)(v1 + 3738) ) /*0xfffd6d0d*/
        {
          if ( i ) /*0xfffd6d1a*/
          {
            v16 = *(_BYTE *)(v1 + 7000); /*0xfffd6d1c*/
            v17 = *(_BYTE *)(v1 + 7002); /*0xfffd6d22*/
          }
          else
          {
            v16 = *(_BYTE *)(v1 + 7001); /*0xfffd6d31*/
            v17 = *(_BYTE *)(v1 + 7003); /*0xfffd6d37*/
          }
          if ( v16 >= v17 ) /*0xfffd6d2a*/
          {
            HIBYTE(a1) = v17; /*0xfffd6d2c*/
LABEL_61:
            if ( HIBYTE(a1) >= 0x20u ) /*0xfffd6d5a*/
              HIBYTE(a1) = 31; /*0xfffd6d5c*/
            v136 = 0; /*0xfffd6d60*/
            goto LABEL_64; /*0xfffd6d60*/
          }
        }
        else if ( i ) /*0xfffd6d43*/
        {
          v16 = *(_BYTE *)(v1 + 7002); /*0xfffd6d45*/
        }
        else
        {
          v16 = *(_BYTE *)(v1 + 7003); /*0xfffd6d4d*/
        }
        HIBYTE(a1) = v16; /*0xfffd6d53*/
        goto LABEL_61; /*0xfffd6d53*/
      }
LABEL_64:
      v140 = 0; /*0xfffd6d64*/
      do
      {
        if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) && !v133 ) /*0xfffd6d86*/
        {
          LOBYTE(v107) = *(_BYTE *)(v1 + 6997); /*0xfffd6d96*/
          v18 = HIBYTE(a1); /*0xfffd6d99*/
          v118 = HIBYTE(a1); /*0xfffd6d9d*/
          if ( i ) /*0xfffd6da0*/
            v18 = HIBYTE(a1) | 0x20; /*0xfffd6da2*/
          LOBYTE(v115) = 2 * v18; /*0xfffd6da6*/
          sub_FFFC8367( /*0xfffd6dc5*/
            v1,
            v107,
            3u,
            *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
            0,
            1u);
          sub_FFFC8367( /*0xfffd6de9*/
            v1,
            v107,
            3u,
            *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
            (unsigned __int8)v115,
            1u);
          if ( *(_BYTE *)(v1 + 3738) ) /*0xfffd6df1*/
          {
            v19 = *(_BYTE *)(v1 + 6999); /*0xfffd6dfe*/
            if ( i ) /*0xfffd6e04*/
            {
              if ( (unsigned __int8)v101 - v118 * v141 < v19 - *(unsigned __int8 *)(v1 + 29) ) /*0xfffd6e52*/
              {
                v21 = v19 - *(_BYTE *)(v1 + 29); /*0xfffd6e54*/
                goto LABEL_74; /*0xfffd6e57*/
              }
              LOBYTE(v115) = v101 - v141 * HIBYTE(a1); /*0xfffd6e61*/
            }
            else
            {
              v20 = *(_BYTE *)(v1 + 29); /*0xfffd6e12*/
              if ( (unsigned __int8)v101 + v118 * v141 <= v20 + v19 ) /*0xfffd6e21*/
                v21 = v101 + v141 * HIBYTE(a1); /*0xfffd6e30*/
              else
                v21 = v20 + v19; /*0xfffd6e23*/
LABEL_74:
              LOBYTE(v115) = v21; /*0xfffd6e25*/
            }
            sub_FFFD9273(v1, 0, v115); /*0xfffd6e6a*/
          }
          v112 = 1; /*0xfffd6e74*/
          v22 = (_BYTE *)(v1 + 5512); /*0xfffd6e78*/
          v23 = 0; /*0xfffd6e7e*/
          v24 = 3; /*0xfffd6e80*/
          do /*0xfffd6e9d*/
          {
            if ( *v22 ) /*0xfffd6e81*/
            {
              v25 = &v119 + v23; /*0xfffd6e88*/
              v26 = 3; /*0xfffd6e8c*/
              do /*0xfffd6e94*/
              {
                *v25 = 0; /*0xfffd6e8d*/
                v25 += 3; /*0xfffd6e90*/
                --v26; /*0xfffd6e93*/
              }
              while ( v26 ); /*0xfffd6e94*/
            }
            ++v23; /*0xfffd6e96*/
            v22 += 430; /*0xfffd6e97*/
            --v24; /*0xfffd6e9c*/
          }
          while ( v24 ); /*0xfffd6e9d*/
        }
        LOBYTE(v113) = 0; /*0xfffd6e9f*/
        do
        {
          if ( v135 == v140 ) /*0xfffd6ea9*/
            break; /*0xfffd6ea9*/
          LOBYTE(v117) = 0; /*0xfffd6eaf*/
          do
          {
            if ( v135 == v140 ) /*0xfffd6eb9*/
              break; /*0xfffd6eb9*/
            if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) )
            {
              v27 = (_BYTE *)(v1 + 5512); /*0xfffd6ee1*/
              v28 = 0; /*0xfffd6ee3*/
              v29 = 3; /*0xfffd6ee5*/
              do /*0xfffd6efc*/
              {
                if ( *v27 ) /*0xfffd6ee6*/
                  v140 |= 1 << v28; /*0xfffd6ef1*/
                ++v28; /*0xfffd6ef4*/
                v27 += 430; /*0xfffd6ef5*/
                --v29; /*0xfffd6efb*/
              }
              while ( v29 ); /*0xfffd6efc*/
              if ( !v133 )
              {
                v30 = 0; /*0xfffd6f08*/
                v134 = nullptr; /*0xfffd6f10*/
                v118 = v1 + 7175; /*0xfffd6f13*/
                v142 = 3; /*0xfffd6f16*/
                do
                {
                  v31 = v134; /*0xfffd6f1d*/
                  if ( v134[v1 + 5512] )
                  {
                    *(_DWORD *)v118 = 0; /*0xfffd6f31*/
                    v32 = (unsigned __int8)v113; /*0xfffd6f34*/
                    v33 = &v31[184 * (unsigned __int8)v113]; /*0xfffd6f40*/
                    v34 = *(_BYTE *)(v1 + 3733); /*0xfffd6f4a*/
                    v35 = v33[v1 + 5586] ? (v34 != 0 ? 0x3FFFF : 130815) : v34 != 0 ? 511 : 255;
                    v36 = (unsigned __int8)v117; /*0xfffd6f74*/
                    v99[v30] = v35; /*0xfffd6f78*/
                    if ( v33[32 * v36 + 5630 + v1] ) /*0xfffd6f83*/
                    {
                      v37 = v36 + 4 * (v32 + 2 * v30); /*0xfffd6f90*/
                      if ( !v95[v37] || !*((_BYTE *)&v97[12] + v37) ) /*0xfffd6f9d*/
                        v140 &= ~(1 << v30); /*0xfffd6fac*/
                    }
                  }
                  v118 += 1068; /*0xfffd6faf*/
                  v134 += 430; /*0xfffd6fb6*/
                  ++v30; /*0xfffd6fbd*/
                  --v142; /*0xfffd6fbe*/
                }
                while ( v142 );
              }
            }
            if ( v140 == v135 ) /*0xfffd6fcd*/
            {
              v140 = 0; /*0xfffd6fcf*/
              goto LABEL_167; /*0xfffd6fd3*/
            }
            for ( j = 0; j < 3u; ++j ) /*0xfffd6fd8*/
            {
              if ( *(_BYTE *)(v1 + 3755) ) /*0xfffd6fdc*/
              {
                if ( *(_BYTE *)(v1 + 3758) ) /*0xfffd6fe5*/
                {
                  LOBYTE(v107) = *(_BYTE *)(v1 + 6997); /*0xfffd6ff8*/
                  if ( !v133 ) /*0xfffd6ffb*/
                  {
                    if ( j == 2 ) /*0xfffd7001*/
                    {
                      LOBYTE(v38) = 0; /*0xfffd7003*/
                    }
                    else
                    {
                      v39 = HIBYTE(a1); /*0xfffd700b*/
                      if ( j == 1 ) /*0xfffd7012*/
                        v39 = -HIBYTE(a1); /*0xfffd7014*/
                      v38 = 2 * v39 / 3; /*0xfffd7019*/
                    }
                    sub_FFFC8367( /*0xfffd7039*/
                      v1,
                      v107,
                      3u,
                      *(unsigned __int16 *)(v1 + 188) + v1 + 2 * *(unsigned __int16 *)(v1 + 188) + 1720,
                      (unsigned __int8)v38,
                      1u);
                  }
                }
              }
              if ( j == 2 ) /*0xfffd7045*/
              {
                if ( *(_BYTE *)(v1 + 3755) ) /*0xfffd704b*/
                {
                  if ( *(_BYTE *)(v1 + 3758) ) /*0xfffd7058*/
                  {
                    LOBYTE(v107) = *(_BYTE *)(v1 + 6997); /*0xfffd706f*/
                    if ( !v133 ) /*0xfffd7072*/
                    {
                      v111 = 5 * HIBYTE(a1) / 4; /*0xfffd7089*/
                      v134 = (unsigned __int8 *)v111; /*0xfffd708f*/
                      if ( i ) /*0xfffd7092*/
                      {
                        LOBYTE(v115) = 2 * (v111 | 0x20); /*0xfffd70a9*/
                        if ( (v115 & 0xBEu) > 0x3E ) /*0xfffd70b5*/
                          LOBYTE(v115) = 0; /*0xfffd70b7*/
                      }
                      else
                      {
                        LOBYTE(v115) = 2 * v111; /*0xfffd7096*/
                        if ( (unsigned __int8)(2 * v111) > 0x40u ) /*0xfffd709d*/
                          LOBYTE(v115) = 32; /*0xfffd709f*/
                      }
                      sub_FFFC8367( /*0xfffd70d7*/
                        v1,
                        v107,
                        3u,
                        *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
                        0,
                        1u);
                      sub_FFFC8367( /*0xfffd70fb*/
                        v1,
                        v107,
                        3u,
                        *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
                        (unsigned __int8)v115,
                        1u);
                      if ( *(_BYTE *)(v1 + 3738) ) /*0xfffd7103*/
                      {
                        v40 = *(_BYTE *)(v1 + 6999); /*0xfffd7110*/
                        if ( i ) /*0xfffd7116*/
                        {
                          if ( (unsigned __int8)v101 - (int)v134 * v141 < v40 - *(unsigned __int8 *)(v1 + 29) ) /*0xfffd7164*/
                          {
                            v42 = v40 - *(_BYTE *)(v1 + 29); /*0xfffd7166*/
                            goto LABEL_131; /*0xfffd7169*/
                          }
                          LOBYTE(v115) = v101 - v141 * v111; /*0xfffd7173*/
                        }
                        else
                        {
                          v41 = *(_BYTE *)(v1 + 29); /*0xfffd7124*/
                          if ( (unsigned __int8)v101 + (int)v134 * v141 <= v41 + v40 ) /*0xfffd7133*/
                            v42 = v101 + v141 * v111; /*0xfffd7142*/
                          else
                            v42 = v41 + v40; /*0xfffd7135*/
LABEL_131:
                          LOBYTE(v115) = v42; /*0xfffd7137*/
                        }
                        sub_FFFD9273(v1, 0, v115); /*0xfffd717c*/
                      }
                    }
                  }
                }
              }
              v43 = 0; /*0xfffd7184*/
              sub_FFFD15B5((_BYTE *)v1, v113, v117, 0, (int)v99, ~v140); /*0xfffd719a*/
              if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd71af*/
              {
                v118 = 0; /*0xfffd71c2*/
                v134 = (unsigned __int8 *)(v1 + 7175); /*0xfffd71c5*/
                v142 = 3; /*0xfffd71c8*/
                do /*0xfffd7297*/
                {
                  if ( *(_BYTE *)(v118 + v1 + 5512) ) /*0xfffd71d2*/
                  {
                    v44 = (unsigned __int8)v117 + 4 * ((unsigned __int8)v113 + 2 * v43); /*0xfffd71eb*/
                    v3 = v95[v44] == 0; /*0xfffd71f5*/
                    v116 = (int)&v95[v44]; /*0xfffd71f8*/
                    if ( v3 ) /*0xfffd71fb*/
                    {
                      v45 = v118 + 184 * (unsigned __int8)v113 + v1; /*0xfffd720d*/
                      v46 = (_BYTE *)(32 * (unsigned __int8)v117 + v45 + 5630); /*0xfffd7210*/
                      if ( *v46 ) /*0xfffd7217*/
                      {
                        if ( !*(_BYTE *)(v45 + 5576) ) /*0xfffd721c*/
                        {
                          if ( *(_DWORD *)v134 ) /*0xfffd7228*/
                          {
                            v3 = *((_BYTE *)&v97[12] + v44) == 0; /*0xfffd7236*/
                            *(&v119 + 2 * j + j + v43) = 1; /*0xfffd723b*/
                            if ( !v3 ) /*0xfffd7240*/
                            {
                              if ( v112 ) /*0xfffd7246*/
                                *(_BYTE *)v116 = 1; /*0xfffd724b*/
                              v47 = 7 * ((unsigned __int8)v46[9] + 4 * v43); /*0xfffd7259*/
                              if ( i ) /*0xfffd7260*/
                                v48 = &v96[v137]; /*0xfffd7262*/
                              else
                                v48 = &v96[v137 + 84]; /*0xfffd726b*/
                              v49 = &v48[v47]; /*0xfffd7272*/
                              v50 = v48[v47]; /*0xfffd7275*/
                              if ( v50 == 33 || v50 > HIBYTE(a1) ) /*0xfffd727e*/
                                *v49 = HIBYTE(a1); /*0xfffd7283*/
                            }
                          }
                        }
                      }
                    }
                  }
                  v118 += 430; /*0xfffd7285*/
                  v134 += 1068; /*0xfffd728c*/
                  ++v43; /*0xfffd7293*/
                  --v142; /*0xfffd7294*/
                }
                while ( v142 ); /*0xfffd7297*/
              }
            }
            if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) && !v136 ) /*0xfffd72c0*/
            {
              v51 = 0; /*0xfffd72c2*/
              v134 = nullptr; /*0xfffd72c4*/
              v142 = 3; /*0xfffd72c7*/
              do /*0xfffd732c*/
              {
                if ( *(_BYTE *)(v51 + v1 + 5512) /*0xfffd72f1*/
                  && *(_BYTE *)(v51 + 32 * (unsigned __int8)v117 + 184 * (unsigned __int8)v113 + v1 + 5630) )
                {
                  v52 = (char *)&v97[2 * (_DWORD)v134 + 12 + (unsigned __int8)v113] + (unsigned __int8)v117; /*0xfffd7304*/
                  v53 = &v119 + (_DWORD)v134; /*0xfffd730a*/
                  *v52 = 1; /*0xfffd730e*/
                  v54 = 3; /*0xfffd7311*/
                  do /*0xfffd731e*/
                  {
                    if ( *v53 ) /*0xfffd7312*/
                      *v52 = 0; /*0xfffd7317*/
                    v53 += 3; /*0xfffd731a*/
                    --v54; /*0xfffd731d*/
                  }
                  while ( v54 ); /*0xfffd731e*/
                }
                ++v134; /*0xfffd7320*/
                v51 += 430; /*0xfffd7323*/
                --v142; /*0xfffd7329*/
              }
              while ( v142 ); /*0xfffd732c*/
            }
LABEL_167:
            LOBYTE(v117) = v117 + 1; /*0xfffd732e*/
          }
          while ( (unsigned __int8)v117 < 4u );
          LOBYTE(v113) = v113 + 1; /*0xfffd733b*/
        }
        while ( (unsigned __int8)v113 < 2u );
        v3 = *(_BYTE *)(v1 + 3755) == 0; /*0xfffd7348*/
        v118 = 1; /*0xfffd734f*/
        if ( !v3 ) /*0xfffd7356*/
        {
          if ( *(_BYTE *)(v1 + 3758) && !v136 ) /*0xfffd736d*/
          {
            v131 = 0; /*0xfffd7373*/
            v136 = 1; /*0xfffd7377*/
            v55 = (unsigned __int8 *)(v1 + 5514); /*0xfffd737b*/
            v56 = v1 + 5630; /*0xfffd7381*/
            v105 = 3; /*0xfffd7387*/
            do /*0xfffd73f6*/
            {
              if ( *(v55 - 2) && *v55 ) /*0xfffd7394*/
              {
                v57 = *v55; /*0xfffd739a*/
                v58 = 0; /*0xfffd739d*/
                v106 = v56; /*0xfffd739f*/
                v102 = (unsigned __int8 *)v57; /*0xfffd73a2*/
                do /*0xfffd73e5*/
                {
                  v59 = 0; /*0xfffd73a8*/
                  v134 = (unsigned __int8 *)v106; /*0xfffd73aa*/
                  v142 = 4; /*0xfffd73ad*/
                  do /*0xfffd73d8*/
                  {
                    if ( *v134 && !*((_BYTE *)&v97[2 * v131 + 12 + v58] + v59) ) /*0xfffd73c5*/
                      v136 = 0; /*0xfffd73cc*/
                    v134 += 32; /*0xfffd73d0*/
                    ++v59; /*0xfffd73d4*/
                    --v142; /*0xfffd73d5*/
                  }
                  while ( v142 ); /*0xfffd73d8*/
                  v106 += 184; /*0xfffd73da*/
                  ++v58; /*0xfffd73e1*/
                  --v102; /*0xfffd73e2*/
                }
                while ( v102 ); /*0xfffd73e5*/
              }
              ++v131; /*0xfffd73e7*/
              v55 += 430; /*0xfffd73ef*/
              v56 += 430; /*0xfffd73f1*/
              --v105; /*0xfffd73f3*/
            }
            while ( v105 ); /*0xfffd73f6*/
            if ( v136 && (!v108 || v108 > HIBYTE(a1)) ) /*0xfffd7408*/
              v108 = HIBYTE(a1); /*0xfffd740d*/
          }
          if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd741d*/
          {
            v134 = nullptr; /*0xfffd742a*/
            v60 = (unsigned __int8 *)(v1 + 5514); /*0xfffd7434*/
            v142 = v1 + 5630; /*0xfffd743a*/
            v116 = 3; /*0xfffd743d*/
            do /*0xfffd74d1*/
            {
              if ( *(v60 - 2) && *v60 ) /*0xfffd744a*/
              {
                v61 = *v60; /*0xfffd7453*/
                v62 = 0; /*0xfffd7456*/
                v106 = v142; /*0xfffd7458*/
                v102 = (unsigned __int8 *)v61; /*0xfffd745b*/
                do /*0xfffd74bf*/
                {
                  v63 = 0; /*0xfffd7461*/
                  v131 = v106; /*0xfffd7463*/
                  v105 = 4; /*0xfffd7466*/
                  do /*0xfffd74b2*/
                  {
                    if ( *(_BYTE *)v131 ) /*0xfffd7470*/
                    {
                      v64 = v63 + 4 * (v62 + 2 * (_DWORD)v134); /*0xfffd747b*/
                      v65 = v95[v64]; /*0xfffd747e*/
                      if ( !v65 || !*((_BYTE *)&v97[12] + v64) ) /*0xfffd7489*/
                        v118 = 0; /*0xfffd7490*/
                      v66 = *((_BYTE *)&v97[12] + v64); /*0xfffd7494*/
                      if ( !v66 ) /*0xfffd749a*/
                        v136 = 0; /*0xfffd749c*/
                      if ( !v65 && !v66 ) /*0xfffd74a5*/
                        v112 = 0; /*0xfffd74a7*/
                    }
                    v131 += 32; /*0xfffd74aa*/
                    ++v63; /*0xfffd74ae*/
                    --v105; /*0xfffd74af*/
                  }
                  while ( v105 ); /*0xfffd74b2*/
                  v106 += 184; /*0xfffd74b4*/
                  ++v62; /*0xfffd74bb*/
                  --v102; /*0xfffd74bc*/
                }
                while ( v102 ); /*0xfffd74bf*/
              }
              ++v134; /*0xfffd74c1*/
              v142 += 430; /*0xfffd74c9*/
              v60 += 430; /*0xfffd74cc*/
              --v116; /*0xfffd74ce*/
            }
            while ( v116 ); /*0xfffd74d1*/
            if ( v112 ) /*0xfffd74db*/
            {
              ++HIBYTE(a1); /*0xfffd74dd*/
            }
            else
            {
              --HIBYTE(a1); /*0xfffd74e2*/
              v140 = 0; /*0xfffd74e5*/
            }
            if ( HIBYTE(a1) >= v114 ) /*0xfffd74ef*/
              v118 = 1; /*0xfffd74f1*/
            if ( !HIBYTE(a1) ) /*0xfffd74fc*/
              v118 = 1; /*0xfffd74fe*/
          }
        }
      }
      while ( !v118 );
    }
    *(_BYTE *)(v1 + 33) = 1; /*0xfffd751c*/
    if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd752d*/
    {
      v67 = *(_BYTE *)(v1 + 6997); /*0xfffd753a*/
      v142 = 0; /*0xfffd7540*/
      LOBYTE(v107) = v67; /*0xfffd7544*/
      LOBYTE(v132) = 0; /*0xfffd754d*/
      v68 = (_BYTE *)(v1 + 5514); /*0xfffd7551*/
      v131 = v1 + 5574; /*0xfffd7557*/
      do /*0xfffd766d*/
      {
        if ( *(v68 - 2) ) /*0xfffd755a*/
        {
          sub_FFFC8367( /*0xfffd7581*/
            v1,
            v107,
            3u,
            *(unsigned __int16 *)(v1 + 186) + v1 + 2 * *(unsigned __int16 *)(v1 + 186) + 1720,
            0,
            1u);
          sub_FFFC8367( /*0xfffd75a1*/
            v1,
            v107,
            3u,
            *(unsigned __int16 *)(v1 + 182) + v1 + 2 * *(unsigned __int16 *)(v1 + 182) + 1720,
            0,
            1u);
          sub_FFFC85B4(v1, 0, v132); /*0xfffd75ab*/
          if ( (_BYTE)v132 != 1 ) /*0xfffd75b7*/
          {
            v3 = *v68 == 0; /*0xfffd75bd*/
            LOBYTE(v113) = 0; /*0xfffd75c0*/
            if ( !v3 ) /*0xfffd75c4*/
            {
              do /*0xfffd7653*/
              {
                v69 = 184 * (unsigned __int8)v113; /*0xfffd75d1*/
                if ( *(_BYTE *)(v69 + v131 + 1) && !*(_BYTE *)(v69 + v131 + 2) ) /*0xfffd75df*/
                {
                  LOBYTE(v117) = 0; /*0xfffd75f1*/
                  v70 = (unsigned __int8 *)(v69 + v142 + v1 + 5639); /*0xfffd75f5*/
                  do /*0xfffd7649*/
                  {
                    if ( *(v70 - 9) && (*(_BYTE *)(v1 + 3734) || (v117 & 1) == 0) ) /*0xfffd760b*/
                    {
                      v71 = *(unsigned __int16 *)(148 * *v70 + v1 + 324); /*0xfffd761d*/
                      sub_FFFC8367(v1, v107, v132, v71 + v1 + 2 * v71 + 2017, v70[2], 1u); /*0xfffd7637*/
                    }
                    LOBYTE(v117) = v117 + 1; /*0xfffd763f*/
                    v70 += 32; /*0xfffd7642*/
                  }
                  while ( (unsigned __int8)v117 < 4u ); /*0xfffd7649*/
                }
                LOBYTE(v113) = v113 + 1; /*0xfffd764b*/
              }
              while ( (unsigned __int8)v113 < *v68 ); /*0xfffd7653*/
            }
          }
        }
        LOBYTE(v132) = v132 + 1; /*0xfffd7659*/
        v142 += 430; /*0xfffd7661*/
        v131 += 430; /*0xfffd7664*/
        v68 += 430; /*0xfffd7667*/
      }
      while ( (unsigned __int8)v132 < 3u ); /*0xfffd766d*/
    }
    *(_BYTE *)(v1 + 33) = 0; /*0xfffd7673*/
    if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd7680*/
    {
      v72 = *(_BYTE *)(v1 + 6997); /*0xfffd768b*/
      while ( (sub_FFFC4EEF(v1, v72, 3u, 4u, 0xF8u) & 0x40000000) != 0 ) /*0xfffd76a9*/
        ; /*0xfffd7691*/
      LOBYTE(v132) = 0; /*0xfffd76ab*/
      v73 = (_BYTE *)(v1 + 5512); /*0xfffd76af*/
      do /*0xfffd76d5*/
      {
        if ( *v73 ) /*0xfffd76b5*/
          sub_FFFC85B4(v1, 0, v132); /*0xfffd76c0*/
        LOBYTE(v132) = v132 + 1; /*0xfffd76c8*/
        v73 += 430; /*0xfffd76cb*/
      }
      while ( (unsigned __int8)v132 < 3u ); /*0xfffd76d5*/
    }
    v103 += 4; /*0xfffd76d7*/
  }
  while ( v103 < 13 );
  if ( *(_BYTE *)(v1 + 3755) ) /*0xfffd76e5*/
  {
    if ( *(_BYTE *)(v1 + 3758) ) /*0xfffd76f2*/
    {
      LOBYTE(v107) = *(_BYTE *)(v1 + 6997); /*0xfffd7705*/
      v74 = v107; /*0xfffd770f*/
      sub_FFFC8367( /*0xfffd7727*/
        v1,
        v107,
        3u,
        *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffd774a*/
        v1,
        v74,
        3u,
        *(unsigned __int16 *)(v1 + 208) + v1 + 2 * *(unsigned __int16 *)(v1 + 208) + 1720,
        2 * v104,
        1u);
      if ( *(_BYTE *)(v1 + 3738) ) /*0xfffd7752*/
        sub_FFFD9273(v1, 0, v101); /*0xfffd7761*/
      sub_FFFC8367( /*0xfffd7782*/
        v1,
        v74,
        3u,
        *(unsigned __int16 *)(v1 + 188) + v1 + 2 * *(unsigned __int16 *)(v1 + 188) + 1720,
        0,
        1u);
      sub_FFFC8367( /*0xfffd77a0*/
        v1,
        v74,
        3u,
        *(unsigned __int16 *)(v1 + 182) + v1 + 2 * *(unsigned __int16 *)(v1 + 182) + 1720,
        0,
        1u);
    }
    if ( *(_BYTE *)(v1 + 3755) && *(_BYTE *)(v1 + 3758) ) /*0xfffd77b5*/
    {
      v145 = 0; /*0xfffd77c2*/
      v142 = v1 + 5512; /*0xfffd77cc*/
      v105 = 3; /*0xfffd77cf*/
      do /*0xfffd7861*/
      {
        if ( *(_BYTE *)v142 ) /*0xfffd77d9*/
        {
          v75 = 28 * v145; /*0xfffd77e1*/
          v116 = 4; /*0xfffd77e4*/
          do /*0xfffd7852*/
          {
            v137 = 0; /*0xfffd77eb*/
            v76 = v75; /*0xfffd77ef*/
            do /*0xfffd784a*/
            {
              if ( v137 != 4 && v96[v76] <= v96[v75 + 4] && v96[v76 + 84] <= v96[v75 + 88] ) /*0xfffd7819*/
              {
                v96[v76] = 0; /*0xfffd781b*/
                v96[v76 + 84] = 0; /*0xfffd781e*/
              }
              if ( v96[v76] == 33 || v96[v76 + 84] == 33 ) /*0xfffd7835*/
              {
                v96[v76] = 0; /*0xfffd7837*/
                v96[v76 + 84] = 0; /*0xfffd783a*/
              }
              ++v137; /*0xfffd7842*/
              ++v76; /*0xfffd7845*/
            }
            while ( v137 < 7u ); /*0xfffd784a*/
            v75 += 7; /*0xfffd784c*/
            --v116; /*0xfffd784f*/
          }
          while ( v116 ); /*0xfffd7852*/
        }
        ++v145; /*0xfffd7854*/
        v142 += 430; /*0xfffd7857*/
        --v105; /*0xfffd785e*/
      }
      while ( v105 ); /*0xfffd7861*/
    }
  }
  LOBYTE(v115) = 0; /*0xfffd7867*/
  while ( 2 ) /*0xfffd786b*/
  {
    v77 = (unsigned __int8)v115; /*0xfffd786b*/
    v78 = (_BYTE *)(v1 + 3049 * (unsigned __int8)v115); /*0xfffd7877*/
    if ( !v78[3755] || !v78[3758] ) /*0xfffd7886*/
      goto LABEL_395; /*0xfffd788d*/
    v103 = (int)(v78 + 5512); /*0xfffd789b*/
    v79 = v78 + 5514; /*0xfffd789e*/
    v117 = 0; /*0xfffd78a6*/
    v80 = &v109; /*0xfffd78ae*/
    v102 = v78 + 5514; /*0xfffd78b1*/
    v131 = (int)(v78 + 5630); /*0xfffd78b4*/
    v146 = 0; /*0xfffd78b7*/
    v106 = 3; /*0xfffd78ba*/
    do /*0xfffd7937*/
    {
      if ( *(v79 - 2) ) /*0xfffd78c1*/
      {
        *(_DWORD *)(&v119 + v146 * 4) = 0; /*0xfffd78d0*/
        v99[v146] = 117901063; /*0xfffd78dd*/
        v81 = *v79; /*0xfffd78de*/
        v3 = *v79 == 0; /*0xfffd78e0*/
        *(_BYTE *)v80 = 0; /*0xfffd78e2*/
        if ( !v3 ) /*0xfffd78e5*/
        {
          v142 = v131; /*0xfffd78ed*/
          v105 = v81; /*0xfffd78f0*/
          do /*0xfffd7920*/
          {
            v82 = (_BYTE *)v142; /*0xfffd78f3*/
            v116 = 4; /*0xfffd78f6*/
            do /*0xfffd7914*/
            {
              if ( *v82 ) /*0xfffd78fd*/
              {
                v79 = v102; /*0xfffd7909*/
                *(_BYTE *)v80 |= 1 << v82[9]; /*0xfffd790c*/
              }
              v82 += 32; /*0xfffd790e*/
              --v116; /*0xfffd7911*/
            }
            while ( v116 ); /*0xfffd7914*/
            v142 += 184; /*0xfffd7916*/
            --v105; /*0xfffd791d*/
          }
          while ( v105 ); /*0xfffd7920*/
        }
      }
      ++v146; /*0xfffd7922*/
      v131 += 430; /*0xfffd792b*/
      v79 += 430; /*0xfffd792e*/
      v80 = (unsigned __int16 *)((char *)v80 + 1); /*0xfffd7930*/
      v3 = v106-- == 1; /*0xfffd7931*/
      v102 = v79; /*0xfffd7934*/
    }
    while ( !v3 ); /*0xfffd7937*/
    v119 = 0; /*0xfffd793e*/
    v148 = v109 & 1; /*0xfffd7942*/
    while ( 2 ) /*0xfffd7949*/
    {
      if ( !v148 ) /*0xfffd7949*/
      {
        v119 = 7; /*0xfffd794b*/
LABEL_280:
        v120 = 0; /*0xfffd798d*/
        v104 = v109 & 2; /*0xfffd7996*/
        while ( v104 ) /*0xfffd799d*/
        {
          if ( v96[84 * v77 + 7 + v120] && v96[84 * v77 + 91 + v120] && ((1 << v120) & v97[12 * v77 + 1]) == 0 ) /*0xfffd79db*/
            goto LABEL_286; /*0xfffd79db*/
LABEL_384:
          if ( ++v120 >= 7u ) /*0xfffd7f35*/
            goto LABEL_385; /*0xfffd7f35*/
        }
        v120 = 7; /*0xfffd799f*/
LABEL_286:
        v121 = 0; /*0xfffd79e1*/
        v108 = v109 & 4; /*0xfffd79ea*/
        while ( v108 ) /*0xfffd79f1*/
        {
          if ( v96[84 * v77 + 14 + v121] && v96[84 * v77 + 98 + v121] && ((1 << v121) & v97[12 * v77 + 2]) == 0 ) /*0xfffd7a2f*/
            goto LABEL_292; /*0xfffd7a2f*/
LABEL_383:
          if ( ++v121 >= 7u ) /*0xfffd7f28*/
            goto LABEL_384; /*0xfffd7f28*/
        }
        v121 = 7; /*0xfffd79f3*/
LABEL_292:
        v122 = 0; /*0xfffd7a35*/
        v111 = v109 & 8; /*0xfffd7a3e*/
        while ( v111 ) /*0xfffd7a45*/
        {
          if ( v96[84 * v77 + 21 + v122] && v96[84 * v77 + 105 + v122] && ((1 << v122) & v97[12 * v77 + 3]) == 0 ) /*0xfffd7a83*/
            goto LABEL_298; /*0xfffd7a83*/
LABEL_382:
          if ( ++v122 >= 7u ) /*0xfffd7f1b*/
            goto LABEL_383; /*0xfffd7f1b*/
        }
        v122 = 7; /*0xfffd7a47*/
LABEL_298:
        v123 = 0; /*0xfffd7a89*/
        v114 = HIBYTE(v109) & 1; /*0xfffd7a92*/
        while ( v114 ) /*0xfffd7a99*/
        {
          if ( v96[84 * v77 + 28 + v123] && v96[84 * v77 + 112 + v123] && ((1 << v123) & v97[12 * v77 + 4]) == 0 ) /*0xfffd7ad7*/
            goto LABEL_304; /*0xfffd7ad7*/
LABEL_381:
          if ( ++v123 >= 7u ) /*0xfffd7f0e*/
            goto LABEL_382; /*0xfffd7f0e*/
        }
        v123 = 7; /*0xfffd7a9b*/
LABEL_304:
        v124 = 0; /*0xfffd7add*/
        v112 = HIBYTE(v109) & 2; /*0xfffd7ae6*/
        while ( v112 ) /*0xfffd7aed*/
        {
          if ( v96[84 * v77 + 35 + v124] && v96[84 * v77 + 119 + v124] && ((1 << v124) & v97[12 * v77 + 5]) == 0 ) /*0xfffd7b2b*/
            goto LABEL_310; /*0xfffd7b2b*/
LABEL_380:
          if ( ++v124 >= 7u ) /*0xfffd7f01*/
            goto LABEL_381; /*0xfffd7f01*/
        }
        v124 = 7; /*0xfffd7aef*/
LABEL_310:
        v125 = 0; /*0xfffd7b31*/
        v133 = HIBYTE(v109) & 4; /*0xfffd7b3a*/
        while ( v133 ) /*0xfffd7b41*/
        {
          if ( v96[84 * v77 + 42 + v125] && v96[84 * v77 + 126 + v125] && ((1 << v125) & v97[12 * v77 + 6]) == 0 ) /*0xfffd7b7c*/
            goto LABEL_316; /*0xfffd7b7c*/
LABEL_379:
          if ( ++v125 >= 7u ) /*0xfffd7ef4*/
            goto LABEL_380; /*0xfffd7ef4*/
        }
        v125 = 7; /*0xfffd7b43*/
LABEL_316:
        v126 = 0; /*0xfffd7b82*/
        v135 = HIBYTE(v109) & 8; /*0xfffd7b8b*/
        while ( v135 ) /*0xfffd7b92*/
        {
          if ( v96[84 * v77 + 49 + v126] && v96[84 * v77 + 133 + v126] && ((1 << v126) & v97[12 * v77 + 7]) == 0 ) /*0xfffd7bcd*/
            goto LABEL_322; /*0xfffd7bcd*/
LABEL_378:
          if ( ++v126 >= 7u ) /*0xfffd7ee7*/
            goto LABEL_379; /*0xfffd7ee7*/
        }
        v126 = 7; /*0xfffd7b94*/
LABEL_322:
        v127 = 0; /*0xfffd7bd3*/
        v136 = v110 & 1; /*0xfffd7bdc*/
        while ( v136 ) /*0xfffd7be3*/
        {
          if ( v96[84 * v77 + 56 + v127] && v96[84 * v77 + 140 + v127] && ((1 << v127) & v97[12 * v77 + 8]) == 0 ) /*0xfffd7c1e*/
            goto LABEL_328; /*0xfffd7c1e*/
LABEL_377:
          if ( ++v127 >= 7u ) /*0xfffd7eda*/
            goto LABEL_378; /*0xfffd7eda*/
        }
        v127 = 7; /*0xfffd7be5*/
LABEL_328:
        v128 = 0; /*0xfffd7c24*/
        v137 = v110 & 2; /*0xfffd7c2d*/
        while ( v137 ) /*0xfffd7c34*/
        {
          if ( v96[84 * v77 + 63 + v128] && v96[84 * v77 + 147 + v128] && ((1 << v128) & v97[12 * v77 + 9]) == 0 ) /*0xfffd7c6f*/
            goto LABEL_334; /*0xfffd7c6f*/
LABEL_376:
          if ( ++v128 >= 7u ) /*0xfffd7ecd*/
            goto LABEL_377; /*0xfffd7ecd*/
        }
        v128 = 7; /*0xfffd7c36*/
LABEL_334:
        v129 = 0; /*0xfffd7c75*/
        j = v110 & 4; /*0xfffd7c7e*/
        while ( j ) /*0xfffd7c85*/
        {
          if ( v96[84 * v77 + 70 + v129] && v96[84 * v77 + 154 + v129] && ((1 << v129) & v97[12 * v77 + 10]) == 0 ) /*0xfffd7cc0*/
            goto LABEL_340; /*0xfffd7cc0*/
LABEL_375:
          if ( ++v129 >= 7u ) /*0xfffd7ec0*/
            goto LABEL_376; /*0xfffd7ec0*/
        }
        v129 = 7; /*0xfffd7c87*/
LABEL_340:
        v130 = 0; /*0xfffd7cc6*/
        v141 = v110 & 8; /*0xfffd7ccf*/
        while ( 2 ) /*0xfffd7cd6*/
        {
          if ( v141 ) /*0xfffd7cd6*/
          {
            if ( v96[84 * v77 + 77 + v130] && v96[84 * v77 + 161 + v130] && ((1 << v130) & v97[12 * v77 + 11]) == 0 ) /*0xfffd7d11*/
              goto LABEL_346; /*0xfffd7d11*/
          }
          else
          {
            v130 = 7; /*0xfffd7cd8*/
LABEL_346:
            v131 = 0; /*0xfffd7d17*/
            v134 = &v119; /*0xfffd7d1e*/
            v139 = 32; /*0xfffd7d24*/
            v140 = 32; /*0xfffd7d28*/
            v106 = v103; /*0xfffd7d2c*/
            v105 = 3; /*0xfffd7d2f*/
            do /*0xfffd7d99*/
            {
              if ( *(_BYTE *)v106 ) /*0xfffd7d39*/
              {
                v142 = (int)v134; /*0xfffd7d41*/
                v83 = 28 * (v77 + v131 + 2 * v77); /*0xfffd7d4c*/
                v116 = 4; /*0xfffd7d4f*/
                do /*0xfffd7d86*/
                {
                  v84 = *(unsigned __int8 *)v142 + v83; /*0xfffd7d5c*/
                  if ( v139 > v96[v84] ) /*0xfffd7d69*/
                    v139 = v96[v84]; /*0xfffd7d6b*/
                  if ( v140 > v96[v84 + 84] ) /*0xfffd7d78*/
                    v140 = v96[v84 + 84]; /*0xfffd7d7a*/
                  v83 += 7; /*0xfffd7d7d*/
                  ++v142; /*0xfffd7d80*/
                  --v116; /*0xfffd7d83*/
                }
                while ( v116 ); /*0xfffd7d86*/
              }
              ++v131; /*0xfffd7d88*/
              v106 += 430; /*0xfffd7d8b*/
              v134 += 4; /*0xfffd7d92*/
              --v105; /*0xfffd7d96*/
            }
            while ( v105 ); /*0xfffd7d99*/
            v85 = v139 + v140; /*0xfffd7d9e*/
            v113 = 0; /*0xfffd7da1*/
            v131 = 0; /*0xfffd7da5*/
            v134 = &v119; /*0xfffd7dac*/
            i = v139 + v140; /*0xfffd7db2*/
            v106 = v103; /*0xfffd7db5*/
            v105 = 3; /*0xfffd7db8*/
            do /*0xfffd7e5d*/
            {
              if ( *(_BYTE *)v106 ) /*0xfffd7dc2*/
              {
                v142 = (int)v134; /*0xfffd7dce*/
                v86 = 28 * (v77 + v131 + 2 * v77); /*0xfffd7dd9*/
                v116 = 4; /*0xfffd7ddc*/
                do /*0xfffd7e47*/
                {
                  v88 = *(unsigned __int8 *)v142; /*0xfffd7de6*/
                  v87 = v88 + v86; /*0xfffd7de9*/
                  LOWORD(v88) = (unsigned __int8)(v96[v88 + v86] - v139); /*0xfffd7df8*/
                  if ( (unsigned __int8)v88 >= 5u ) /*0xfffd7dfc*/
                  {
                    v88 += v113 + 20; /*0xfffd7e0e*/
                    v113 = v88; /*0xfffd7e12*/
                  }
                  else
                  {
                    v113 += v88 * (10 - v88); /*0xfffd7e06*/
                  }
                  LOWORD(v88) = (unsigned __int8)(v96[v87 + 84] - v140); /*0xfffd7e21*/
                  if ( (unsigned __int8)v88 >= 5u ) /*0xfffd7e25*/
                    v113 += v88 + 20; /*0xfffd7e3b*/
                  else
                    v113 += v88 * (10 - v88); /*0xfffd7e2f*/
                  v86 += 7; /*0xfffd7e3e*/
                  ++v142; /*0xfffd7e41*/
                  --v116; /*0xfffd7e44*/
                }
                while ( v116 ); /*0xfffd7e47*/
                v85 = i; /*0xfffd7e49*/
              }
              ++v131; /*0xfffd7e4c*/
              v106 += 430; /*0xfffd7e4f*/
              v134 += 4; /*0xfffd7e56*/
              --v105; /*0xfffd7e5a*/
            }
            while ( v105 ); /*0xfffd7e5d*/
            if ( (unsigned __int16)v117 < v85 || (_WORD)v117 == v85 && HIWORD(v117) < (unsigned __int16)v113 ) /*0xfffd7e77*/
            {
              LOWORD(v117) = v85; /*0xfffd7e79*/
              HIWORD(v117) = v113; /*0xfffd7e81*/
              v89 = (_BYTE *)v103; /*0xfffd7e85*/
              v90 = 0; /*0xfffd7e88*/
              v116 = 3; /*0xfffd7e8a*/
              do /*0xfffd7eaa*/
              {
                if ( *v89 ) /*0xfffd7e91*/
                  v99[v90] = *(_DWORD *)(&v119 + v90 * 4); /*0xfffd7e9e*/
                v89 += 430; /*0xfffd7e9f*/
                ++v90; /*0xfffd7ea4*/
                --v116; /*0xfffd7ea7*/
              }
              while ( v116 ); /*0xfffd7eaa*/
            }
          }
          if ( ++v130 >= 7u ) /*0xfffd7eb3*/
            goto LABEL_375; /*0xfffd7eb3*/
          continue; /*0xfffd7eb3*/
        }
      }
      if ( v96[84 * v77 + v119] && v96[84 * v77 + 84 + v119] && ((1 << v119) & v97[12 * v77]) == 0 ) /*0xfffd7987*/
        goto LABEL_280; /*0xfffd7987*/
LABEL_385:
      if ( ++v119 < 7u ) /*0xfffd7f42*/
        continue; /*0xfffd7f42*/
      break;
    }
    LOBYTE(v132) = 0; /*0xfffd7f4b*/
    v91 = v99; /*0xfffd7f4f*/
    v147 = (_BYTE *)v103; /*0xfffd7f52*/
    do /*0xfffd7fc2*/
    {
      if ( *v147 ) /*0xfffd7f58*/
      {
        v92 = v98; /*0xfffd7f5d*/
        v93 = v91; /*0xfffd7f60*/
        v116 = 4; /*0xfffd7f62*/
        do /*0xfffd7f8c*/
        {
          if ( *v93 == 7 ) /*0xfffd7f6e*/
            *v92 = 255; /*0xfffd7f70*/
          else
            *v92 = 4 * (3 - (unsigned __int8)*v93); /*0xfffd7f83*/
          ++v93; /*0xfffd7f85*/
          ++v92; /*0xfffd7f86*/
          --v116; /*0xfffd7f89*/
        }
        while ( v116 ); /*0xfffd7f8c*/
        sub_FFFC96C3(v1, v115, v132, v98, 1, 1); /*0xfffd7f9d*/
        sub_FFFC85B4(v1, v115, v132); /*0xfffd7fa9*/
      }
      LOBYTE(v132) = v132 + 1; /*0xfffd7fb1*/
      v147 += 430; /*0xfffd7fb4*/
      ++v91; /*0xfffd7fbb*/
    }
    while ( (unsigned __int8)v132 < 3u ); /*0xfffd7fc2*/
LABEL_395:
    LOBYTE(v115) = v115 + 1; /*0xfffd7fc4*/
    if ( !(_BYTE)v115 ) /*0xfffd7fcb*/
      continue; /*0xfffd7fcb*/
    break;
  }
  sub_FFFC94EC((_BYTE *)v1); /*0xfffd7fd2*/
  sub_FFFCBF04((_BYTE *)v1); /*0xfffd7fd8*/
  sub_FFFD427E((_BYTE *)v1, 0); /*0xfffd7fe0*/
  return sub_FFFC7CA8((_BYTE *)v1); /*0xfffd7ff2*/
}

/* 0xfffd7ffa sub_FFFD7FFA */
bool __cdecl sub_FFFD7FFA(int a1, int a2)
{
  bool v2; // zf
  _BYTE *v3; // edi
  int v4; // eax
  unsigned __int8 v6; // al
  _BYTE *v7; // edi
  int v8; // eax
  _BYTE *v9; // edx
  int v10; // ecx
  _BYTE *v11; // eax
  int v12; // ecx
  _BYTE *v13; // ecx
  int v14; // edi
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  int v17; // ecx
  char v18; // cl
  unsigned __int8 v19; // al
  char v20; // [esp-4h] [ebp-30h]
  int v21; // [esp+Ch] [ebp-20h]
  int v22; // [esp+Ch] [ebp-20h]
  int v23; // [esp+Ch] [ebp-20h]
  char v24; // [esp+10h] [ebp-1Ch]
  _BYTE *v25; // [esp+10h] [ebp-1Ch]
  int v26; // [esp+14h] [ebp-18h]
  int v27; // [esp+18h] [ebp-14h]
  char v28; // [esp+1Ch] [ebp-10h]
  char v29; // [esp+1Ch] [ebp-10h]
  int v30; // [esp+20h] [ebp-Ch]
  unsigned __int8 v31; // [esp+26h] [ebp-6h]
  char v32; // [esp+27h] [ebp-5h]
  char v33; // [esp+28h] [ebp-4h]
  char v34; // [esp+29h] [ebp-3h] BYREF
  char v35; // [esp+2Ah] [ebp-2h]
  unsigned __int8 v36; // [esp+2Bh] [ebp-1h] BYREF

  v2 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd8007*/
  v36 = 0; /*0xfffd800e*/
  if ( !v2 ) /*0xfffd8011*/
  {
    LOBYTE(v30) = 0; /*0xfffd8019*/
    v3 = (_BYTE *)(a1 + 5512); /*0xfffd801c*/
    do /*0xfffd803c*/
    {
      if ( *v3 ) /*0xfffd801e*/
        sub_FFFC5621(a1, 0, v30); /*0xfffd8027*/
      LOBYTE(v30) = v30 + 1; /*0xfffd802f*/
      v3 += 430; /*0xfffd8032*/
    }
    while ( (unsigned __int8)v30 < 3u ); /*0xfffd803c*/
  }
  switch ( (char)a2 ) /*0xfffd804b*/
  {
    case 0: /*0xfffd804b*/
      v4 = sub_FFFCFD02(a1); /*0xfffd8053*/
      return v4 != 0; /*0xfffd8058*/
    case 1: /*0xfffd804b*/
      LOBYTE(v30) = 0; /*0xfffd8070*/
      v24 = 0; /*0xfffd8073*/
      v26 = 0; /*0xfffd8076*/
      do /*0xfffd8208*/
      {
        if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(v26 + a1 + 5512) ) /*0xfffd8088*/
        {
          v6 = 0; /*0xfffd8095*/
          v28 = 0; /*0xfffd8097*/
          v7 = (_BYTE *)(a1 + 5512); /*0xfffd809a*/
          do /*0xfffd80c2*/
          {
            if ( *v7 ) /*0xfffd80a0*/
            {
              v36 |= 1 << v28; /*0xfffd80ab*/
              if ( v6 != (_BYTE)v30 ) /*0xfffd80b1*/
                *v7 = 0; /*0xfffd80b3*/
            }
            ++v6; /*0xfffd80b5*/
            ++v28; /*0xfffd80b7*/
            v7 += 430; /*0xfffd80ba*/
          }
          while ( v6 < 3u ); /*0xfffd80c2*/
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd80cc*/
            sub_FFFC8367( /*0xfffd80f6*/
              a1,
              *(_BYTE *)(a1 + 6997),
              3u,
              *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
              5,
              1u);
          v21 = sub_FFFD3237(a1, 0, 3u, 5u, 0, 1, 0, 0); /*0xfffd8119*/
          if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd811e*/
            sub_FFFC8367( /*0xfffd8146*/
              a1,
              *(_BYTE *)(a1 + 6997),
              3u,
              *(unsigned __int16 *)(a1 + 182) + a1 + 2 * *(unsigned __int16 *)(a1 + 182) + 1720,
              0,
              1u);
          v27 = sub_FFFD3237(a1, 1, 2u, 4u, 0, 1, 0, 0); /*0xfffd8165*/
          if ( v21 ) /*0xfffd8168*/
            v27 |= sub_FFFD3237(a1, 0, 3u, 5u, 0, 1, 0, 0); /*0xfffd817c*/
          if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd817f*/
          {
            v8 = v36; /*0xfffd8187*/
            v29 = 0; /*0xfffd818b*/
            v9 = (_BYTE *)(a1 + 5512); /*0xfffd818e*/
            v22 = 3; /*0xfffd8194*/
            do /*0xfffd81b2*/
            {
              if ( ((1 << v29) & v8) != 0 ) /*0xfffd81a1*/
                *v9 = 1; /*0xfffd81a3*/
              ++v29; /*0xfffd81a6*/
              v9 += 430; /*0xfffd81a9*/
              --v22; /*0xfffd81af*/
            }
            while ( v22 ); /*0xfffd81b2*/
            LOBYTE(a2) = 0; /*0xfffd81b4*/
            while ( ((1 << (v24 + a2)) & v27) == 0 ) /*0xfffd81c7*/
            {
              LOBYTE(a2) = a2 + 1; /*0xfffd81c9*/
              if ( (unsigned __int8)a2 >= 2u ) /*0xfffd81d0*/
                goto LABEL_37; /*0xfffd81d0*/
            }
            sub_FFFD9481(a1, 19, 0, 0, v30, a2, 255); /*0xfffd81e4*/
            sub_FFFC9419((_BYTE *)a1, 0, v30); /*0xfffd81ee*/
          }
        }
LABEL_37:
        LOBYTE(v30) = v30 + 1; /*0xfffd81f6*/
        v26 += 430; /*0xfffd81f9*/
        v24 += 2; /*0xfffd8200*/
      }
      while ( (unsigned __int8)v30 < 3u ); /*0xfffd8208*/
      return 0; /*0xfffd8208*/
    case 2: /*0xfffd804b*/
      sub_FFFCC952((_BYTE *)a1); /*0xfffd8214*/
      return 0; /*0xfffd8219*/
    case 3: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd8485*/
      sub_FFFD16D7(a1, 0, &v34, &v36, (_BYTE *)&a2 + 3, 0, 4u, 1, 1); /*0xfffd8489*/
      if ( sub_FFFD3237(a1, 0, 4u, 8u, 0, 1, 1, 1) ) /*0xfffd8498*/
        sub_FFFD9481(a1, 27, 1, 255, 255, 255, 255); /*0xfffd84b1*/
      goto LABEL_85; /*0xfffd84b9*/
    case 4: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd84c8*/
      sub_FFFD3237(a1, 1, 3u, 7u, 0, 1, 1, 0); /*0xfffd84cc*/
      goto LABEL_85; /*0xfffd84cc*/
    case 5: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd8231*/
      *(_BYTE *)(a1 + 7009) = 0; /*0xfffd8237*/
      *(_BYTE *)(a1 + 7010) = 0; /*0xfffd823d*/
      sub_FFFD65A8(a1, 0); /*0xfffd8243*/
      sub_FFFD42CB((_BYTE *)a1, 0); /*0xfffd824a*/
      goto LABEL_85; /*0xfffd8252*/
    case 6: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd826d*/
      sub_FFFD16D7(a1, 0, &v34, &v36, (_BYTE *)&a2 + 3, 0, 4u, 1, 1); /*0xfffd8271*/
      sub_FFFD3237(a1, 0, 3u, 5u, 0, 1, 1, 1); /*0xfffd8280*/
      sub_FFFD3237(a1, 1, 2u, 4u, 0, 1, 1, 0); /*0xfffd8292*/
      sub_FFFD16D7(a1, 2, &v34, &v36, (_BYTE *)&a2 + 3, 0, 8u, 1, 1); /*0xfffd82ab*/
      if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd82bb*/
      {
        v10 = 0; /*0xfffd82c9*/
        v31 = HIBYTE(a2) + v36; /*0xfffd82cb*/
        v33 = *(_BYTE *)(a1 + 7009); /*0xfffd82d4*/
        v32 = *(_BYTE *)(a1 + 7010); /*0xfffd82dd*/
        v25 = (_BYTE *)(a1 + 5512); /*0xfffd82e6*/
        v11 = (_BYTE *)(a1 + 7011); /*0xfffd82e9*/
        v23 = 3; /*0xfffd82ef*/
        do /*0xfffd830f*/
        {
          if ( *v25 ) /*0xfffd82f9*/
          {
            *v11 = 0; /*0xfffd82fd*/
            *((_BYTE *)&v30 + v10) = 0; /*0xfffd82ff*/
          }
          v25 += 430; /*0xfffd8303*/
          ++v10; /*0xfffd830a*/
          ++v11; /*0xfffd830b*/
          --v23; /*0xfffd830c*/
        }
        while ( v23 ); /*0xfffd830f*/
      }
      v35 = 0; /*0xfffd8311*/
      break; /*0xfffd8311*/
    case 7: /*0xfffd804b*/
      v20 = 1; /*0xfffd8413*/
      goto LABEL_70; /*0xfffd8413*/
    case 8: /*0xfffd804b*/
      v20 = 0; /*0xfffd8410*/
LABEL_70:
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd8415*/
      sub_FFFD2428(a1, 0xAu, v20); /*0xfffd841c*/
      goto LABEL_71; /*0xfffd841c*/
    case 10: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd8223*/
      sub_FFFD250F(a1, 0xAu, 1); /*0xfffd8227*/
LABEL_71:
      *(_BYTE *)(a1 + 32) = 0; /*0xfffd8421*/
      return 0; /*0xfffd8424*/
    case 11: /*0xfffd804b*/
      v18 = 1; /*0xfffd843b*/
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd8435*/
      {
        v19 = *(_BYTE *)(a1 + 3758); /*0xfffd843f*/
        if ( v19 > 2u || v19 == 2 && *(_BYTE *)(a1 + 3757) == 2 ) /*0xfffd8452*/
          v18 = 0; /*0xfffd8454*/
      }
      if ( !v18 ) /*0xfffd8458*/
        sub_FFFD5A01(a1); /*0xfffd845f*/
      return 0; /*0xfffd8464*/
    case 13: /*0xfffd804b*/
      sub_FFFD5359(a1); /*0xfffd8467*/
      return 0; /*0xfffd8467*/
    case 16: /*0xfffd804b*/
      *(_BYTE *)(a1 + 32) = 1; /*0xfffd842a*/
      sub_FFFD69A1(a1); /*0xfffd842e*/
      goto LABEL_85; /*0xfffd8433*/
    case 17: /*0xfffd804b*/
      v4 = sub_FFFCED4C((_BYTE *)a1); /*0xfffd805b*/
      return v4 != 0; /*0xfffd8063*/
    default:
      sub_FFFD934D(a1, 239, 0); /*0xfffd84e0*/
      return 0; /*0xfffd84e0*/
  }
  while ( 1 ) /*0xfffd8316*/
  {
    sub_FFFD65A8(a1, 1); /*0xfffd8316*/
    sub_FFFD42CB((_BYTE *)a1, 0); /*0xfffd831d*/
    sub_FFFD16D7(a1, 2, &v34, &v36, (_BYTE *)&a2 + 3, 0, 8u, 1, 1); /*0xfffd8336*/
    if ( !*(_BYTE *)(a1 + 3755) ) /*0xfffd833e*/
      break; /*0xfffd833e*/
    if ( !*(_BYTE *)(a1 + 3758) ) /*0xfffd8350*/
      goto LABEL_59; /*0xfffd8350*/
    v12 = HIBYTE(a2) + v36; /*0xfffd835a*/
    if ( v31 <= v12 ) /*0xfffd8368*/
    {
      v33 = *(_BYTE *)(a1 + 7009); /*0xfffd8380*/
      v32 = *(_BYTE *)(a1 + 7010); /*0xfffd8389*/
      v13 = (_BYTE *)(a1 + 5512); /*0xfffd838c*/
      v14 = 0; /*0xfffd838e*/
      v15 = (_BYTE *)(a1 + 7011); /*0xfffd8390*/
      a2 = 3; /*0xfffd8396*/
      do /*0xfffd83b2*/
      {
        if ( *v13 ) /*0xfffd839d*/
          *((_BYTE *)&v30 + v14) = *v15; /*0xfffd83a3*/
        ++v14; /*0xfffd83a7*/
        v13 += 430; /*0xfffd83a8*/
        ++v15; /*0xfffd83ae*/
        --a2; /*0xfffd83af*/
      }
      while ( a2 ); /*0xfffd83b2*/
LABEL_59:
      if ( *(_BYTE *)(a1 + 3755) && *(_BYTE *)(a1 + 3758) ) /*0xfffd83bf*/
      {
        v16 = (_BYTE *)(a1 + 5512); /*0xfffd83c7*/
        v17 = 0; /*0xfffd83cd*/
        a2 = 3; /*0xfffd83cf*/
        do /*0xfffd83ee*/
        {
          if ( *v16 ) /*0xfffd83d6*/
            *(_BYTE *)(v17 + a1 + 7011) -= *((_BYTE *)&v30 + v17); /*0xfffd83de*/
          ++v17; /*0xfffd83e5*/
          v16 += 430; /*0xfffd83e6*/
          --a2; /*0xfffd83eb*/
        }
        while ( a2 ); /*0xfffd83ee*/
        *(_BYTE *)(a1 + 7009) = v33; /*0xfffd83f3*/
        *(_BYTE *)(a1 + 7010) = v32; /*0xfffd83fc*/
      }
      break; /*0xfffd83fc*/
    }
    if ( v12 < 24 && (unsigned __int8)++v35 < 3u ) /*0xfffd8376*/
      continue; /*0xfffd8376*/
    goto LABEL_59; /*0xfffd8376*/
  }
  sub_FFFD42CB((_BYTE *)a1, 1); /*0xfffd8402*/
LABEL_85:
  *(_BYTE *)(a1 + 32) = 0; /*0xfffd84d4*/
  return 0; /*0xfffd84ea*/
}

/* 0xfffd8537 sub_FFFD8537 */
int __cdecl sub_FFFD8537(int a1)
{
  char v2; // al
  unsigned __int16 *v3; // edi
  unsigned __int16 *v4; // edi
  char v5; // al
  unsigned __int16 *v6; // edi
  unsigned __int16 *v7; // edi
  char v8; // al
  char v9; // di
  _BYTE *v10; // edx
  char v11; // al
  _BYTE *v12; // edi
  char v13; // al
  char v14; // al
  _BYTE *v15; // eax
  int v16; // edi
  unsigned __int8 v17; // al
  __int16 v18; // ax
  unsigned __int8 v19; // dl
  bool v20; // zf
  int v21; // edi
  int v23; // [esp+8h] [ebp-1Ch]
  int v24; // [esp+8h] [ebp-1Ch]
  int v25; // [esp+8h] [ebp-1Ch]
  int v26; // [esp+8h] [ebp-1Ch]
  _BYTE *v27; // [esp+8h] [ebp-1Ch]
  int v28; // [esp+8h] [ebp-1Ch]
  char v29; // [esp+8h] [ebp-1Ch]
  unsigned __int8 v30; // [esp+Ch] [ebp-18h]
  _BYTE *v31; // [esp+Ch] [ebp-18h]
  unsigned __int8 v32; // [esp+10h] [ebp-14h]
  unsigned int v33; // [esp+14h] [ebp-10h]
  int v34; // [esp+14h] [ebp-10h]
  unsigned __int8 v35; // [esp+1Bh] [ebp-9h]
  unsigned __int8 v36; // [esp+1Bh] [ebp-9h]
  unsigned __int8 v37; // [esp+1Bh] [ebp-9h]
  unsigned __int8 v38; // [esp+1Bh] [ebp-9h]
  unsigned __int8 v39; // [esp+1Bh] [ebp-9h]
  unsigned __int8 v40; // [esp+1Fh] [ebp-5h]
  unsigned __int8 v41; // [esp+1Fh] [ebp-5h]
  unsigned __int8 v42; // [esp+1Fh] [ebp-5h]
  unsigned __int8 v43; // [esp+1Fh] [ebp-5h]
  char v44; // [esp+1Fh] [ebp-5h]
  char v45; // [esp+23h] [ebp-1h]
  _BYTE *v46; // [esp+2Ch] [ebp+8h]
  _BYTE *v47; // [esp+2Ch] [ebp+8h]
  _BYTE *v48; // [esp+2Ch] [ebp+8h]
  _BYTE *v49; // [esp+2Ch] [ebp+8h]
  unsigned __int8 v50; // [esp+2Ch] [ebp+8h]
  char v51; // [esp+2Fh] [ebp+Bh]
  char v52; // [esp+2Fh] [ebp+Bh]

  v45 = 0; /*0xfffd8545*/
  v33 = 0; /*0xfffd8548*/
  sub_FFFCBE4F(a1); /*0xfffd854b*/
  sub_FFFCBF04((_BYTE *)a1); /*0xfffd8551*/
  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffd855c*/
    sub_FFFD427E((_BYTE *)a1, 0); /*0xfffd8560*/
  v2 = *(_BYTE *)(a1 + 1); /*0xfffd8567*/
  if ( v2 != 1 && v2 != 2 ) /*0xfffd8575*/
  {
    if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd857b*/
    {
      v40 = 0; /*0xfffd8589*/
      v46 = (_BYTE *)(a1 + 5512); /*0xfffd858c*/
      do /*0xfffd85df*/
      {
        if ( *v46 ) /*0xfffd8592*/
        {
          v3 = (unsigned __int16 *)(a1 + 286); /*0xfffd8596*/
          v23 = 9; /*0xfffd859c*/
          do /*0xfffd85cf*/
          {
            sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v40, *v3 + a1 + 2 * *v3 + 2017, 2, 1u); /*0xfffd85c2*/
            ++v3; /*0xfffd85cb*/
            --v23; /*0xfffd85cc*/
          }
          while ( v23 ); /*0xfffd85cf*/
        }
        ++v40; /*0xfffd85d1*/
        v46 += 430; /*0xfffd85d4*/
      }
      while ( v40 < 3u ); /*0xfffd85df*/
    }
    sub_FFFD6213(a1); /*0xfffd85e2*/
    if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd85e7*/
    {
      v41 = 0; /*0xfffd85f6*/
      v47 = (_BYTE *)(a1 + 5512); /*0xfffd85f9*/
      do /*0xfffd864b*/
      {
        if ( *v47 ) /*0xfffd85ff*/
        {
          v4 = (unsigned __int16 *)(a1 + 286); /*0xfffd8603*/
          v24 = 9; /*0xfffd8609*/
          do /*0xfffd863b*/
          {
            sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v41, *v4 + a1 + 2 * *v4 + 2017, 0, 1u); /*0xfffd862e*/
            ++v4; /*0xfffd8637*/
            --v24; /*0xfffd8638*/
          }
          while ( v24 ); /*0xfffd863b*/
        }
        ++v41; /*0xfffd863d*/
        v47 += 430; /*0xfffd8640*/
      }
      while ( v41 < 3u ); /*0xfffd864b*/
    }
    sub_FFFD8EAB(a1, 2, 4096); /*0xfffd8655*/
    sub_FFFCC151(a1); /*0xfffd865b*/
  }
  sub_FFFDACF4(a1); /*0xfffd8664*/
  do /*0xfffd8a19*/
  {
    do /*0xfffd87d8*/
    {
      while ( 1 ) /*0xfffd8772*/
      {
        v5 = *(_BYTE *)(a1 + 1); /*0xfffd866a*/
        if ( v5 == 1 || v5 == 2 ) /*0xfffd8677*/
          break; /*0xfffd8677*/
        if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd867d*/
        {
          v42 = 0; /*0xfffd868b*/
          v48 = (_BYTE *)(a1 + 5512); /*0xfffd868e*/
          do /*0xfffd86e1*/
          {
            if ( *v48 ) /*0xfffd8694*/
            {
              v6 = (unsigned __int16 *)(a1 + 286); /*0xfffd8698*/
              v25 = 9; /*0xfffd869e*/
              do /*0xfffd86d1*/
              {
                sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v42, *v6 + a1 + 2 * *v6 + 2017, 2, 1u); /*0xfffd86c4*/
                ++v6; /*0xfffd86cd*/
                --v25; /*0xfffd86ce*/
              }
              while ( v25 ); /*0xfffd86d1*/
            }
            ++v42; /*0xfffd86d3*/
            v48 += 430; /*0xfffd86d6*/
          }
          while ( v42 < 3u ); /*0xfffd86e1*/
        }
        if ( sub_FFFD2E3C((_BYTE *)a1, 0x26B01u, 1) != 2 ) /*0xfffd86f5*/
        {
          if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd86fb*/
          {
            v43 = 0; /*0xfffd8709*/
            v49 = (_BYTE *)(a1 + 5512); /*0xfffd870c*/
            do /*0xfffd875e*/
            {
              if ( *v49 ) /*0xfffd8712*/
              {
                v7 = (unsigned __int16 *)(a1 + 286); /*0xfffd8716*/
                v26 = 9; /*0xfffd871c*/
                do /*0xfffd874e*/
                {
                  sub_FFFC8367(a1, *(_BYTE *)(a1 + 6997), v43, *v7 + a1 + 2 * *v7 + 2017, 0, 1u); /*0xfffd8741*/
                  ++v7; /*0xfffd874a*/
                  --v26; /*0xfffd874b*/
                }
                while ( v26 ); /*0xfffd874e*/
              }
              ++v43; /*0xfffd8750*/
              v49 += 430; /*0xfffd8753*/
            }
            while ( v43 < 3u ); /*0xfffd875e*/
          }
          if ( sub_FFFD2E3C((_BYTE *)a1, 0x27301u, 2) != 2 ) /*0xfffd8772*/
            break; /*0xfffd8772*/
        }
      }
      sub_FFFC7EA6((unsigned __int8 *)a1); /*0xfffd8779*/
      v51 = 0; /*0xfffd877f*/
      v32 = 0; /*0xfffd8782*/
      do /*0xfffd87b9*/
      {
        if ( *(_BYTE *)(3049 * v32 + a1 + 3755) && sub_FFFC52CF(a1, v32, 745570438, 0) ) /*0xfffd87a2*/
        {
          v51 = 1; /*0xfffd891d*/
          goto LABEL_42; /*0xfffd8921*/
        }
        ++v32; /*0xfffd87b2*/
      }
      while ( !v32 ); /*0xfffd87b9*/
      v8 = *(_BYTE *)(a1 + 1); /*0xfffd87bb*/
    }
    while ( v8 != 1 && v8 != 2 && sub_FFFD2E3C((_BYTE *)a1, 0x25B01u, 4) == 2 ); /*0xfffd87d8*/
LABEL_42:
    sub_FFFC7D1B(a1); /*0xfffd87de*/
    if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd87e4*/
    {
      v35 = *(_BYTE *)(a1 + 6997); /*0xfffd8803*/
      sub_FFFC4FB2(a1, v35, 3u, 0, 0x60u, 148617); /*0xfffd880e*/
      v34 = sub_FFFC4EEF(a1, v35, 3u, 0, 0x48u); /*0xfffd8824*/
      v44 = 0; /*0xfffd8827*/
      v9 = 0; /*0xfffd882a*/
      v27 = v10; /*0xfffd882c*/
      do /*0xfffd885e*/
      {
        if ( *v27 ) /*0xfffd8832*/
        {
          sub_FFFC85B4(a1, 0, v44); /*0xfffd883b*/
          v34 |= 256 << v9; /*0xfffd884c*/
        }
        ++v44; /*0xfffd884f*/
        v27 += 430; /*0xfffd8852*/
        ++v9; /*0xfffd8859*/
      }
      while ( (unsigned __int8)v44 < 3u ); /*0xfffd885e*/
      v33 = v34 & 0xFFFFFFBF; /*0xfffd8860*/
      if ( *(_BYTE *)(a1 + 3733) ) /*0xfffd8864*/
        v33 |= 2u; /*0xfffd8872*/
      sub_FFFC4FB2(a1, v35, 3u, 0, 0x48u, v33); /*0xfffd8881*/
    }
    v11 = *(_BYTE *)(a1 + 1); /*0xfffd8889*/
    if ( v11 != 1 && v11 != 2 ) /*0xfffd8896*/
    {
      if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd889c*/
      {
        v36 = *(_BYTE *)(a1 + 6997); /*0xfffd88b0*/
        v30 = 4; /*0xfffd88b3*/
        v12 = (_BYTE *)(a1 + 5512); /*0xfffd88b7*/
        v28 = 3; /*0xfffd88b9*/
        do /*0xfffd8912*/
        {
          if ( *v12 ) /*0xfffd88c0*/
          {
            sub_FFFC4FB2(a1, v36, v30, 0, 0x50u, 4); /*0xfffd88d0*/
            sub_FFFC4FB2(a1, v36, v30, 0, 0x50u, 0); /*0xfffd88e0*/
            sub_FFFC4FB2(a1, v36, v30, 0, 0x54u, 131584); /*0xfffd88f4*/
            sub_FFFCA83C(a1, 1u); /*0xfffd88ff*/
          }
          v12 += 430; /*0xfffd8906*/
          ++v30; /*0xfffd890c*/
          --v28; /*0xfffd890f*/
        }
        while ( v28 ); /*0xfffd8912*/
      }
      if ( v51 ) /*0xfffd8917*/
        sub_FFFD7FFA(a1, 17); /*0xfffd891b*/
      else
        sub_FFFD7FFA(a1, 0); /*0xfffd8928*/
    }
    sub_FFFDAEFB(a1); /*0xfffd8930*/
    v13 = *(_BYTE *)(a1 + 1); /*0xfffd8935*/
    if ( v13 == 1 || v13 == 2 ) /*0xfffd8943*/
      break; /*0xfffd8943*/
    v52 = sub_FFFD2E3C((_BYTE *)a1, 0x23B01u, 8); /*0xfffd8957*/
    sub_FFFC3C96((_BYTE *)a1); /*0xfffd895a*/
    sub_FFFD42CB((_BYTE *)a1, 0); /*0xfffd8961*/
    sub_FFFD7FFA(a1, 1); /*0xfffd8969*/
    sub_FFFC385C((_BYTE *)a1); /*0xfffd896f*/
    sub_FFFD42CB((_BYTE *)a1, 0); /*0xfffd8976*/
    sub_FFFD7FFA(a1, 5); /*0xfffd897e*/
    if ( *(_BYTE *)(a1 + 24) == 2 ) /*0xfffd898a*/
    {
      sub_FFFD7FFA(a1, 11); /*0xfffd898f*/
      if ( *(_BYTE *)(a1 + 24) == 2 ) /*0xfffd899a*/
      {
        sub_FFFD7FFA(a1, 13); /*0xfffd899f*/
        if ( *(_BYTE *)(a1 + 24) == 2 ) /*0xfffd89aa*/
        {
          sub_FFFD7FFA(a1, 16); /*0xfffd89af*/
          if ( *(_BYTE *)(a1 + 24) == 2 ) /*0xfffd89ba*/
            sub_FFFD7FFA(a1, 6); /*0xfffd89bf*/
        }
      }
    }
    sub_FFFD616F((_BYTE *)a1); /*0xfffd89c7*/
    sub_FFFD7FFA(a1, 3); /*0xfffd89cf*/
    sub_FFFD7FFA(a1, 4); /*0xfffd89d7*/
    sub_FFFD7FFA(a1, 7); /*0xfffd89df*/
    if ( *(_BYTE *)(a1 + 24) == 2 ) /*0xfffd89eb*/
      sub_FFFD7FFA(a1, 10); /*0xfffd89f0*/
    sub_FFFD7FFA(a1, 2); /*0xfffd89fa*/
    sub_FFFDB002(a1); /*0xfffd8a00*/
    if ( (*(_BYTE *)(a1 + 81) & 2) != 0 ) /*0xfffd8a0c*/
      sub_FFFD656B(a1); /*0xfffd8a0f*/
  }
  while ( v52 == 2 ); /*0xfffd8a19*/
  v14 = *(_BYTE *)(a1 + 1); /*0xfffd8a1f*/
  *(_BYTE *)(a1 + 23) = 1; /*0xfffd8a24*/
  if ( v14 != 1 && v14 != 2 ) /*0xfffd8a2c*/
  {
    if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd8a2e*/
    {
      v15 = (_BYTE *)(a1 + 5512); /*0xfffd8a38*/
      v16 = 3; /*0xfffd8a3e*/
      do /*0xfffd8a4d*/
      {
        if ( *v15 ) /*0xfffd8a3f*/
          v45 = 1; /*0xfffd8a43*/
        v15 += 430; /*0xfffd8a47*/
        --v16; /*0xfffd8a4c*/
      }
      while ( v16 ); /*0xfffd8a4d*/
    }
    if ( !v45 ) /*0xfffd8a52*/
      sub_FFFD934D(a1, 234, 1); /*0xfffd8a5c*/
  }
  sub_FFFC6A79(a1); /*0xfffd8a65*/
  if ( *(_BYTE *)(a1 + 3755) ) /*0xfffd8a6a*/
  {
    v37 = *(_BYTE *)(a1 + 6997); /*0xfffd8a85*/
    sub_FFFC5908((_BYTE *)a1); /*0xfffd8a88*/
    v31 = (_BYTE *)(a1 + 5512); /*0xfffd8a8e*/
    v29 = 0; /*0xfffd8a92*/
    v50 = 4; /*0xfffd8a95*/
    do /*0xfffd8ba9*/
    {
      if ( *v31 ) /*0xfffd8aa1*/
      {
        if ( (*(_BYTE *)(a1 + 79) & 1) != 0 ) /*0xfffd8aad*/
        {
          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v50, 0, 0xDCu, 198056192); /*0xfffd8ac7*/
          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v50, 0, 0xD8u, 8196); /*0xfffd8ae4*/
        }
        else
        {
          v17 = *(_BYTE *)(a1 + 18); /*0xfffd8aee*/
          if ( !v17 ) /*0xfffd8af3*/
            v17 = 3; /*0xfffd8af5*/
          sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v50, 0, 0xD8u, v17 | 0x2000); /*0xfffd8b13*/
        }
        sub_FFFC85B4(a1, 0, v50 - 4); /*0xfffd8b25*/
        sub_FFFC4FB2(a1, v37, v50, 0, 0x50u, 4); /*0xfffd8b36*/
        sub_FFFC4FB2(a1, v37, v50, 0, 0x50u, 0); /*0xfffd8b46*/
        v18 = sub_FFFC4EC2(a1, *(_BYTE *)(a1 + 6997), v50, 0, 0xB8u); /*0xfffd8b5a*/
        if ( !*(_BYTE *)(a1 + 3734) || v31[3] <= 2u ) /*0xfffd8b71*/
          sub_FFFC4F7F(a1, v19, v50, 0, 0xB8u, v18 | 0x800); /*0xfffd8b80*/
        v33 |= 256 << v29; /*0xfffd8b92*/
      }
      ++v50; /*0xfffd8b95*/
      ++v29; /*0xfffd8b9b*/
      v31 += 430; /*0xfffd8b9e*/
    }
    while ( (unsigned __int8)(v50 - 4) < 3u ); /*0xfffd8ba9*/
  }
  if ( (*(_BYTE *)(a1 + 79) & 4) != 0 ) /*0xfffd8bb3*/
  {
    v20 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd8bb5*/
    if ( !*(_BYTE *)(a1 + 3755) ) /*0xfffd8bbb*/
      goto LABEL_100; /*0xfffd8bbb*/
    if ( sub_FFFC52CF(a1, 0, 745570438, 0) ) /*0xfffd8bc5*/
    {
      v38 = *(_BYTE *)(a1 + 6997); /*0xfffd8bd7*/
      v21 = (unsigned __int16)sub_FFFC66DE(a1, v38); /*0xfffd8be4*/
      sub_FFFC8367( /*0xfffd8c02*/
        a1,
        v38,
        3u,
        *(unsigned __int16 *)(a1 + 248) + a1 + 2 * *(unsigned __int16 *)(a1 + 248) + 1720,
        v21,
        1u);
      sub_FFFC8367( /*0xfffd8c22*/
        a1,
        v38,
        3u,
        *(unsigned __int16 *)(a1 + 250) + a1 + 2 * *(unsigned __int16 *)(a1 + 250) + 1720,
        v21,
        1u);
    }
  }
  v20 = *(_BYTE *)(a1 + 3755) == 0; /*0xfffd8c2a*/
LABEL_100:
  if ( !v20 ) /*0xfffd8c31*/
  {
    v39 = *(_BYTE *)(a1 + 6997); /*0xfffd8c3d*/
    sub_FFFD8EAB(a1, 5, 0); /*0xfffd8c40*/
    sub_FFFDB0DA(a1); /*0xfffd8c46*/
    sub_FFFC4FB2(a1, v39, 3u, 0, 0x48u, v33 | 0x80); /*0xfffd8c5d*/
  }
  *(_BYTE *)(a1 + 35) = 1; /*0xfffd8c65*/
  return 0; /*0xfffd8c69*/
}

/* 0xfffd8c6f sub_FFFD8C6F */
int __cdecl sub_FFFD8C6F(_BYTE *a1)
{
  char v1; // dl
  bool v2; // zf

  sub_FFFD8E77(a1, 176); /*0xfffd8c7a*/
  sub_FFFC89D9((int)a1); /*0xfffd8c80*/
  sub_FFFDA1BB(a1); /*0xfffd8c86*/
  sub_FFFD8E77(a1, 177); /*0xfffd8c91*/
  sub_FFFC5888((int)a1); /*0xfffd8c97*/
  sub_FFFD8E77(a1, 178); /*0xfffd8ca2*/
  sub_FFFCD685((int)a1); /*0xfffd8ca8*/
  sub_FFFD8E77(a1, 179); /*0xfffd8cb3*/
  if ( !sub_FFFC8CCF((int)a1) ) /*0xfffd8cb9*/
  {
    sub_FFFDA270(a1); /*0xfffd8cca*/
    sub_FFFD8E77(a1, 180); /*0xfffd8cd5*/
    sub_FFFCDD40((int)a1); /*0xfffd8cdb*/
    sub_FFFDA3B7(a1); /*0xfffd8ce1*/
    sub_FFFD8E77(a1, 181); /*0xfffd8cec*/
    sub_FFFC9121(a1); /*0xfffd8cf2*/
    sub_FFFD8E77(a1, 182); /*0xfffd8cfd*/
    sub_FFFC5A3A((int)a1); /*0xfffd8d03*/
    sub_FFFD8E77(a1, 183); /*0xfffd8d0e*/
    sub_FFFCBA1C(a1); /*0xfffd8d14*/
    sub_FFFDA417(a1); /*0xfffd8d1a*/
    sub_FFFD8E77(a1, 184); /*0xfffd8d25*/
    sub_FFFDA6CE(a1); /*0xfffd8d2e*/
    if ( sub_FFFD8537((int)a1) ) /*0xfffd8d34*/
    {
      a1[2] = 1; /*0xfffd8d3f*/
    }
    else
    {
      sub_FFFD8E77(a1, 190); /*0xfffd8d4e*/
      sub_FFFCCD2C(a1); /*0xfffd8d54*/
      if ( a1[1] != 1 ) /*0xfffd8d60*/
      {
        sub_FFFD8E77(a1, 185); /*0xfffd8d68*/
        if ( (a1[79] & 2) == 0 ) /*0xfffd8d73*/
          sub_FFFD25C5((int)a1, 1536); /*0xfffd8d7b*/
      }
      v1 = 0; /*0xfffd8d85*/
      if ( a1[3755] && a1[3758] && sub_FFFC52CF((int)a1, 0, 745570438, 0) ) /*0xfffd8da0*/
        ++v1; /*0xfffd8dac*/
      if ( !v1 && a1[1] != 1 && (a1[78] & 8) != 0 ) /*0xfffd8dbc*/
        sub_FFFD5D76(a1); /*0xfffd8dbf*/
      sub_FFFC9285((int)a1); /*0xfffd8dc6*/
      if ( a1[1] != 1 && (*(_DWORD *)(a1 + 78) & 0x1000) == 0 && a1[3733] ) /*0xfffd8ddc*/
        sub_FFFD25C5((int)a1, 1792); /*0xfffd8dea*/
      sub_FFFD8E77(a1, 186); /*0xfffd8df7*/
      sub_FFFC6B26((int)a1); /*0xfffd8dfd*/
      sub_FFFD8E77(a1, 187); /*0xfffd8e08*/
      sub_FFFC81D5((int)a1); /*0xfffd8e0e*/
      sub_FFFD27B4(a1); /*0xfffd8e14*/
      sub_FFFDB252(a1); /*0xfffd8e1a*/
      v2 = a1[1] == 1; /*0xfffd8e22*/
      if ( a1[1] != 1 ) /*0xfffd8e26*/
      {
        if ( (*(_DWORD *)(a1 + 78) & 0x1000) != 0 ) /*0xfffd8e2b*/
        {
          sub_FFFD8E77(a1, 189); /*0xfffd8e33*/
          if ( a1[3733] ) /*0xfffd8e38*/
            sub_FFFC88D6((int)a1); /*0xfffd8e43*/
        }
        v2 = a1[1] == 1; /*0xfffd8e49*/
      }
      if ( !v2 && (a1[78] & 0x20) != 0 ) /*0xfffd8e55*/
      {
        sub_FFFD8E77(a1, 188); /*0xfffd8e5d*/
        sub_FFFC574F((int)a1); /*0xfffd8e63*/
      }
      a1[3730] = 1; /*0xfffd8e6b*/
    }
  }
  return 0; /*0xfffd8e74*/
}

/* 0xfffd8e76 nullsub_1 */
void nullsub_1()
{
  ; /*0xfffd8e76*/
}

/* 0xfffd8e77 sub_FFFD8E77 */
int __cdecl sub_FFFD8E77(int a1, unsigned __int8 a2)
{
  sub_FFFC52AC(*(_WORD *)(a1 + 64), a2); /*0xfffd8e87*/
  return sub_FFFC4FB2(a1, 0, 0x14u, 1u, 0x9Cu, a2 << 24); /*0xfffd8ea9*/
}

/* 0xfffd8eab sub_FFFD8EAB */
unsigned __int8 __cdecl sub_FFFD8EAB(int a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v3; // esi

  v3 = (a3 + (a2 << 16)) | sub_FFFC4EEF(a1, 0, 0x14u, 1u, 0x9Cu) & 0xFF000000; /*0xfffd8edb*/
  sub_FFFC4FB2(a1, 0, 0x14u, 1u, 0x9Cu, v3); /*0xfffd8ee6*/
  return sub_FFFC52AC(*(_WORD *)(a1 + 64), HIBYTE(v3)); /*0xfffd8efe*/
}

/* 0xfffd8f02 sub_FFFD8F02 */
int __cdecl sub_FFFD8F02(int a1)
{
  unsigned __int8 v2; // bl
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  int v5; // ebx
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  int v10; // [esp+Ch] [ebp-8h]
  unsigned __int8 v11; // [esp+11h] [ebp-3h]
  unsigned __int8 v12; // [esp+12h] [ebp-2h]
  unsigned __int8 v13; // [esp+13h] [ebp-1h]
  unsigned __int8 v14; // [esp+1Ch] [ebp+8h]
  unsigned __int8 v15; // [esp+1Fh] [ebp+Bh]

  v2 = *(_BYTE *)(a1 + 10294); /*0xfffd8f0c*/
  if ( v2 <= 0x1Fu ) /*0xfffd8f19*/
  {
    v15 = *(_BYTE *)(a1 + 10294) >> 3; /*0xfffd8f3b*/
    v3 = v15 + 4; /*0xfffd8f3e*/
  }
  else
  {
    v15 = (v2 - 32) / 8 + 48; /*0xfffd8f2b*/
    v3 = (v2 - 32) / 8 + 52; /*0xfffd8f2e*/
  }
  v12 = v3; /*0xfffd8f47*/
  if ( *(_BYTE *)(a1 + 10295) <= 0x1Fu ) /*0xfffd8f4a*/
  {
    v13 = *(_BYTE *)(a1 + 10295) >> 3; /*0xfffd8f70*/
    v4 = v13 + 4; /*0xfffd8f73*/
  }
  else
  {
    v13 = (*(unsigned __int8 *)(a1 + 10295) - 32) / 8 + 48; /*0xfffd8f60*/
    v4 = (*(unsigned __int8 *)(a1 + 10295) - 32) / 8 + 52; /*0xfffd8f63*/
  }
  v11 = v4; /*0xfffd8f75*/
  v5 = 1 << (v2 % 8); /*0xfffd8f97*/
  v10 = 1 << (*(unsigned __int8 *)(a1 + 10295) % 8); /*0xfffd8f9d*/
  v6 = sub_FFFC527A(v15 + *(_WORD *)(a1 + 56)); /*0xfffd8faa*/
  sub_FFFC52AC(v15 + *(_WORD *)(a1 + 56), v5 | v6); /*0xfffd8fc1*/
  v14 = v10 | sub_FFFC527A(v13 + *(_WORD *)(a1 + 56)); /*0xfffd8fdd*/
  sub_FFFC52AC(v13 + *(_WORD *)(a1 + 56), v14); /*0xfffd8fed*/
  v7 = sub_FFFC527A(v12 + *(_WORD *)(a1 + 56)); /*0xfffd9001*/
  sub_FFFC52AC(v12 + *(_WORD *)(a1 + 56), ~(_BYTE)v5 & v7); /*0xfffd901a*/
  v8 = sub_FFFC527A(v11 + *(_WORD *)(a1 + 56)); /*0xfffd902e*/
  sub_FFFC52AC(v11 + *(_WORD *)(a1 + 56), ~(_BYTE)v10 & v8); /*0xfffd904c*/
  return 0; /*0xfffd9054*/
}

/* 0xfffd905b sub_FFFD905B */
unsigned __int8 __cdecl sub_FFFD905B(int a1, int a2, unsigned __int8 a3, unsigned __int8 *a4)
{
  unsigned __int8 result; // al
  unsigned int v5; // eax
  unsigned int v6; // eax
  char v7; // al
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // [esp+0h] [ebp-Ch]
  unsigned int v10; // [esp+4h] [ebp-8h] BYREF
  char v11; // [esp+Ah] [ebp-2h]
  unsigned __int8 v12; // [esp+Bh] [ebp-1h]

  sub_FFFC52C4(0xCF8u, 0x8000A008); /*0xfffd906b*/
  result = sub_FFFC527A(0xCFCu); /*0xfffd9075*/
  if ( !result ) /*0xfffd907f*/
    return result; /*0xfffd907f*/
  sub_FFFC856D(a1, 48, &v10); /*0xfffd908e*/
  v10 |= 0x70u; /*0xfffd9093*/
  sub_FFFC8595(a1, 48, v10); /*0xfffd909d*/
  sub_FFFC856D(a1, 52, &v10); /*0xfffd90a9*/
  v10 = v10 & 0xFFFFFF8F | 0x40; /*0xfffd90bb*/
  sub_FFFC8595(a1, 52, v10); /*0xfffd90be*/
  sub_FFFC856D(a1, 56, &v10); /*0xfffd90ca*/
  if ( (v10 & 0x40) != 0 ) /*0xfffd90d6*/
  {
    sub_FFFC856D(a1, 56, &v10); /*0xfffd90df*/
    sub_FFFC8595(a1, 56, v10 & 0xFFCF); /*0xfffd90ee*/
    return 0; /*0xfffd90f8*/
  }
  if ( (BYTE2(a2) & 0xFC) == 0xA0 ) /*0xfffd910c*/
  {
    v5 = v10; /*0xfffd9129*/
    goto LABEL_10; /*0xfffd9129*/
  }
  if ( (BYTE2(a2) & 0xFC) != 0xA4 ) /*0xfffd9111*/
  {
    v5 = v10; /*0xfffd9116*/
    if ( (BYTE2(a2) & 0xFC) == 0xA8 ) /*0xfffd9119*/
    {
      v6 = v10 & 0xFFFFFFCF | 0x20; /*0xfffd911e*/
LABEL_11:
      v10 = v6; /*0xfffd9132*/
      goto LABEL_12; /*0xfffd9132*/
    }
LABEL_10:
    v6 = v5 & 0xFFFFFFCF | 0x10; /*0xfffd912c*/
    goto LABEL_11; /*0xfffd912f*/
  }
  v10 &= 0xFFFFFFCF; /*0xfffd9123*/
LABEL_12:
  sub_FFFC8595(a1, 56, v10); /*0xfffd9135*/
  if ( (_WORD)a2 == 2 || (_WORD)a2 == 5 ) /*0xfffd914f*/
    v9 = 76; /*0xfffd9165*/
  else
    v9 = 4 * ((_WORD)a2 != 4) + 68; /*0xfffd9160*/
  v12 = 0; /*0xfffd916e*/
  v11 = BYTE2(a2) & 0xF8; /*0xfffd9172*/
  do /*0xfffd91b5*/
  {
    v7 = BYTE2(a2); /*0xfffd917f*/
    if ( v11 == -88 ) /*0xfffd9185*/
      v7 = BYTE2(a2) & 0xF7; /*0xfffd9187*/
    v8 = sub_FFFC83AF(a1, a3, v7 | 1, v9, a4); /*0xfffd9197*/
    if ( (v8 & 0x19) == 0 ) /*0xfffd919f*/
      break; /*0xfffd919f*/
    sub_FFFCA83C(a1, 0x186A0u); /*0xfffd91a7*/
    ++v12; /*0xfffd91ac*/
  }
  while ( v12 < 0x14u ); /*0xfffd91b5*/
  return ((v8 & 0x1D) != 0) + 1; /*0xfffd9081*/
}

/* 0xfffd91c3 sub_FFFD91C3 */
char sub_FFFD91C3()
{
  return 0; /*0xfffd91c5*/
}

/* 0xfffd91c6 sub_FFFD91C6 */
int sub_FFFD91C6()
{
  return 0; /*0xfffd91c8*/
}

/* 0xfffd91c9 sub_FFFD91C9 */
int sub_FFFD91C9()
{
  return 0; /*0xfffd91cb*/
}

/* 0xfffd91cc sub_FFFD91CC */
int __cdecl sub_FFFD91CC(int a1, unsigned __int8 a2, unsigned __int8 *a3)
{
  int v3; // eax
  int v4; // esi
  bool v5; // zf
  __int16 v6; // di
  unsigned int v7; // eax
  __int64 v9; // [esp-10h] [ebp-18h]
  __int64 v10; // [esp-10h] [ebp-18h]
  unsigned int v11; // [esp+4h] [ebp-4h] BYREF

  v3 = a1 + 3297 * a2; /*0xfffd91e2*/
  v4 = 1; /*0xfffd91e4*/
  v5 = *(_WORD *)(v3 + 10292) == 0; /*0xfffd91e5*/
  v11 = 0; /*0xfffd91ec*/
  if ( !v5 ) /*0xfffd91ef*/
  {
    v6 = *(_WORD *)(v3 + 10290); /*0xfffd91f2*/
    if ( v6 == 6 ) /*0xfffd91fd*/
    {
      HIDWORD(v9) = 1; /*0xfffd9203*/
      LODWORD(v9) = *(_DWORD *)(v3 + 10290); /*0xfffd9204*/
      v4 = sub_FFFCCBCB(a1, v9, (unsigned __int8 *)&v11); /*0xfffd9210*/
      LOBYTE(v7) = v11; /*0xfffd9212*/
      if ( v11 < 0x40 ) /*0xfffd921b*/
      {
        *a3 = 64 - v11 / 5; /*0xfffd922b*/
        return v4; /*0xfffd922d*/
      }
    }
    else
    {
      if ( v6 != 5 ) /*0xfffd9233*/
        return sub_FFFCCBCB(a1, *(unsigned int *)(v3 + 10290), a3); /*0xfffd926b*/
      HIDWORD(v10) = 1; /*0xfffd9239*/
      LODWORD(v10) = *(_DWORD *)(v3 + 10290); /*0xfffd923a*/
      v4 = sub_FFFCCBCB(a1, v10, (unsigned __int8 *)&v11); /*0xfffd9246*/
      v7 = v11 >> 4; /*0xfffd924e*/
    }
    *a3 = v7; /*0xfffd9254*/
  }
  return v4; /*0xfffd9270*/
}

/* 0xfffd9273 sub_FFFD9273 */
int __cdecl sub_FFFD9273(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // esi
  int result; // eax
  bool v5; // zf
  __int16 v6; // ax
  int v7; // eax
  __int64 v8; // [esp-2Ch] [ebp-38h]
  __int64 v9; // [esp-1Ch] [ebp-28h]
  __int64 v10; // [esp-Ch] [ebp-18h]
  __int64 v11; // [esp-Ch] [ebp-18h]
  unsigned __int8 *v12; // [esp-4h] [ebp-10h]
  int v13; // [esp+8h] [ebp-4h] BYREF

  v3 = 3297 * a2 + a1; /*0xfffd928a*/
  result = 1; /*0xfffd928d*/
  v5 = *(_WORD *)(v3 + 10292) == 0; /*0xfffd928e*/
  v13 = 0; /*0xfffd9295*/
  if ( !v5 ) /*0xfffd9298*/
  {
    v6 = *(_WORD *)(v3 + 10290); /*0xfffd929e*/
    if ( v6 == 6 ) /*0xfffd92a9*/
    {
      if ( a3 >= 0x40u ) /*0xfffd92b1*/
        v7 = a3; /*0xfffd92be*/
      else
        v7 = 5 * (64 - a3); /*0xfffd92b9*/
      v13 = v7; /*0xfffd92c2*/
      HIDWORD(v10) = 1; /*0xfffd92c9*/
      LODWORD(v10) = *(_DWORD *)(v3 + 10290); /*0xfffd92cb*/
      sub_FFFCCC81(a1, v10, (unsigned __int8 *)&v13); /*0xfffd92d2*/
      LOBYTE(v13) = v13 | 0x80; /*0xfffd92d7*/
      HIDWORD(v9) = 3; /*0xfffd92df*/
      LODWORD(v9) = *(_DWORD *)(v3 + 10290); /*0xfffd92e1*/
      sub_FFFCCC81(a1, v9, (unsigned __int8 *)&v13); /*0xfffd92e8*/
      HIDWORD(v8) = 3; /*0xfffd92f1*/
      *(_BYTE *)(v3 + 10292) = 96; /*0xfffd92f3*/
      LODWORD(v8) = *(_DWORD *)(v3 + 10290); /*0xfffd92fa*/
      result = sub_FFFCCC81(a1, v8, (unsigned __int8 *)&v13); /*0xfffd9301*/
      *(_BYTE *)(v3 + 10292) = 100; /*0xfffd9309*/
    }
    else
    {
      if ( v6 == 5 ) /*0xfffd9316*/
      {
        v13 = 16 * (a3 | 0x200); /*0xfffd9324*/
        v12 = (unsigned __int8 *)&v13; /*0xfffd932a*/
        HIDWORD(v11) = 1; /*0xfffd932b*/
      }
      else
      {
        v12 = &a3; /*0xfffd9332*/
        HIDWORD(v11) = 0; /*0xfffd9333*/
      }
      LODWORD(v11) = *(_DWORD *)(v3 + 10290); /*0xfffd9334*/
      return sub_FFFCCC81(a1, v11, v12); /*0xfffd933b*/
    }
  }
  return result; /*0xfffd9343*/
}

/* 0xfffd9347 sub_FFFD9347 */
int sub_FFFD9347()
{
  return 0; /*0xfffd9349*/
}

/* 0xfffd934a sub_FFFD934A */
int sub_FFFD934A()
{
  return 0; /*0xfffd934c*/
}

/* 0xfffd934d sub_FFFD934D */
unsigned int __cdecl sub_FFFD934D(int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  unsigned __int16 v4; // cx
  unsigned int v5; // eax
  unsigned int v6; // ebp
  unsigned int v7; // ebx
  unsigned int result; // eax

  v3 = sub_FFFC4EEF(a1, 0, 0x14u, 1u, 0x9Cu); /*0xfffd9363*/
  HIBYTE(v4) = a2; /*0xfffd936a*/
  LOBYTE(v4) = a3; /*0xfffd9371*/
  sub_FFFC4FB2(a1, 0, 0x14u, 1u, 0xA0u, (v4 << 16) | HIWORD(v3)); /*0xfffd9386*/
  v5 = sub_FFFC4EEF(a1, 0, 0x14u, 1u, 0x9Cu); /*0xfffd9392*/
  v6 = HIBYTE(v5); /*0xfffd939e*/
  v7 = HIWORD(v5); /*0xfffd93a1*/
  do /*0xfffd940b*/
  {
    sub_FFFC52AC(*(_WORD *)(a1 + 64), v6); /*0xfffd93b1*/
    sub_FFFCA83C(a1, 0xF4240u); /*0xfffd93bc*/
    sub_FFFC52AC(*(_WORD *)(a1 + 64), v7); /*0xfffd93c9*/
    sub_FFFCA83C(a1, 0x7A120u); /*0xfffd93d0*/
    sub_FFFC52AC(*(_WORD *)(a1 + 64), a2); /*0xfffd93e0*/
    sub_FFFCA83C(a1, 0x7A120u); /*0xfffd93e7*/
    sub_FFFC52AC(*(_WORD *)(a1 + 64), a3); /*0xfffd93f7*/
    result = sub_FFFCA83C(a1, 0x7A120u); /*0xfffd93fe*/
  }
  while ( a2 ); /*0xfffd940b*/
  return result; /*0xfffd940d*/
}

/* 0xfffd9412 sub_FFFD9412 */
unsigned int __cdecl sub_FFFD9412(int a1, unsigned __int8 a2, unsigned __int8 a3, int a4)
{
  unsigned int result; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ecx

  result = a1; /*0xfffd9415*/
  v5 = *(_DWORD *)(a1 + 1170); /*0xfffd9418*/
  if ( v5 < 0x40 ) /*0xfffd9424*/
  {
    v6 = a1 + 8 * v5; /*0xfffd9434*/
    *(_DWORD *)(v6 + 1174) = a3 + (a2 << 16); /*0xfffd9437*/
    *(_DWORD *)(v6 + 1178) = a4; /*0xfffd9440*/
    ++*(_DWORD *)(a1 + 1170); /*0xfffd9446*/
  }
  if ( (*(_BYTE *)(a1 + 79) & 0x20) != 0 && a2 != 10 && a2 != 13 && a2 != 24 && a2 != 26 && (a2 <= 0x1Cu || a2 > 0x1Eu) ) /*0xfffd9470*/
    return sub_FFFD934D(a1, a2, a3); /*0xfffd9477*/
  return result; /*0xfffd947f*/
}

/* 0xfffd9481 sub_FFFD9481 */
unsigned int __cdecl sub_FFFD9481(
        int a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  unsigned __int16 v7; // ax

  HIBYTE(v7) = a4; /*0xfffd948a*/
  LOBYTE(v7) = a5; /*0xfffd948d*/
  return sub_FFFD9412(a1, a2, a3, a7 | ((a6 | (v7 << 8)) << 8)); /*0xfffd94b0*/
}

/* 0xfffd94b2 sub_FFFD94B2 */
char __cdecl sub_FFFD94B2(int a1)
{
  return a1 + BYTE1(a1) + BYTE2(a1) + HIBYTE(a1); /*0xfffd94cb*/
}

/* 0xfffd94fa sub_FFFD94FA */
int __cdecl sub_FFFD94FA(int a1)
{
  return sub_FFFD9B0B(128, a1); /*0xfffd950a*/
}

/* 0xfffd950b sub_FFFD950B */
void __noreturn sub_FFFD950B()
{
  while ( 1 ) /*0xfffd950e*/
    ; /*0xfffd950e*/
}

/* 0xfffd9515 sub_FFFD9515 */
void __cdecl __noreturn sub_FFFD9515(int a1)
{
  sub_FFFD94FA(a1); /*0xfffd9519*/
  sub_FFFD950B(); /*0xfffd951f*/
}

/* 0xfffd9539 sub_FFFD9539 */
__int16 __cdecl sub_FFFD9539(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // esi
  char v4; // al
  __int16 v5; // cx
  __int16 v7; // [esp+10h] [ebp-4h]

  v1 = a1 >> 3; /*0xfffd954d*/
  HIBYTE(a1) = (a1 >> 12) & 0xF; /*0xfffd955a*/
  if ( !HIBYTE(a1) ) /*0xfffd955e*/
    HIBYTE(a1) = 16; /*0xfffd9560*/
  v7 = 0; /*0xfffd9566*/
  v2 = 0xFFFF >> (16 - HIBYTE(a1)) << (a1 & 7); /*0xfffd9573*/
  v3 = (unsigned __int8)v1 < 0x80u ? 112 : 114;
  if ( HIBYTE(a1) > 8u ) /*0xfffd9584*/
  {
    sub_FFFD9AE9((unsigned __int16)v3, v1 + 1); /*0xfffd9592*/
    v4 = sub_FFFD9B2F((unsigned __int16)v3 + 1); /*0xfffd959c*/
    LOBYTE(v5) = 0; /*0xfffd95a1*/
    HIBYTE(v5) = v4; /*0xfffd95a3*/
    v7 = v2 & v5; /*0xfffd95aa*/
  }
  sub_FFFD9AE9((unsigned __int16)v3, v1); /*0xfffd95b5*/
  return (unsigned __int16)(v2 & (v7 | (unsigned __int8)sub_FFFD9B2F((unsigned __int16)v3 + 1))) >> (a1 & 7); /*0xfffd95d1*/
}

/* 0xfffd95d9 sub_FFFD95D9 */
int __cdecl sub_FFFD95D9(unsigned int a1, int a2)
{
  unsigned int v2; // eax
  bool v3; // zf
  int v4; // ebx
  unsigned __int16 v5; // cx
  int v6; // edi
  int v7; // ebx
  int result; // eax
  char v9; // [esp+4h] [ebp-Ch]
  int v10; // [esp+8h] [ebp-8h]
  char v11; // [esp+Fh] [ebp-1h]

  v2 = a1 >> 3; /*0xfffd95f2*/
  v3 = ((a1 >> 12) & 0xF) == 0; /*0xfffd95f5*/
  HIBYTE(a1) = (a1 >> 12) & 0xF; /*0xfffd95f8*/
  v11 = v2; /*0xfffd95fb*/
  if ( v3 ) /*0xfffd95ff*/
    HIBYTE(a1) = 16; /*0xfffd9601*/
  v10 = 0; /*0xfffd9607*/
  v4 = (unsigned __int8)v2 < 0x80u ? 112 : 114;
  if ( HIBYTE(a1) > 8u ) /*0xfffd962d*/
  {
    sub_FFFD9AE9((unsigned __int16)v4, v2 + 1); /*0xfffd9639*/
    LOBYTE(v2) = sub_FFFD9B2F((unsigned __int16)v4 + 1); /*0xfffd9640*/
    LOBYTE(v5) = 0; /*0xfffd9648*/
    HIBYTE(v5) = v2; /*0xfffd964a*/
    LOBYTE(v2) = v11; /*0xfffd964c*/
    v10 = v5; /*0xfffd964f*/
  }
  v6 = (unsigned __int16)v4; /*0xfffd9655*/
  v9 = v2; /*0xfffd965a*/
  sub_FFFD9AE9((unsigned __int16)v4, v2); /*0xfffd965d*/
  LOWORD(v4) = (unsigned __int8)sub_FFFD9B2F((unsigned __int16)v4 + 1); /*0xfffd9671*/
  v7 = (a2 << (a1 & 7)) | ~(0xFFFF >> (16 - HIBYTE(a1)) << (a1 & 7)) & (v10 | v4); /*0xfffd9682*/
  sub_FFFD9AE9(v6, v9); /*0xfffd9684*/
  result = sub_FFFD9AE9(v6 + 1, v7); /*0xfffd9691*/
  if ( HIBYTE(a1) > 8u ) /*0xfffd969d*/
  {
    sub_FFFD9AE9(v6, v9 + 1); /*0xfffd96a5*/
    return sub_FFFD9AE9(v6 + 1, SBYTE1(v7)); /*0xfffd96af*/
  }
  return result; /*0xfffd96ba*/
}

/* 0xfffd96bc sub_FFFD96BC */
__int16 sub_FFFD96BC()
{
  return sub_FFFD9539(0x8070u) & 0xC0; /*0xfffd96cb*/
}

/* 0xfffd96cc sub_FFFD96CC */
BOOL sub_FFFD96CC()
{
  return sub_FFFD9539(0x12C1u) == 1; /*0xfffd96df*/
}

/* 0xfffd96e0 nullsub_3 */
void nullsub_3()
{
  ; /*0xfffd96e0*/
}

/* 0xfffd96e1 sub_FFFD96E1 */
__int16 sub_FFFD96E1()
{
  return sub_FFFD9539(0x12C0u); /*0xfffd96ec*/
}

/* 0xfffd9703 nullsub_4 */
void nullsub_4()
{
  ; /*0xfffd9703*/
}

/* 0xfffd97b1 sub_FFFD97B1 */
__int16 __cdecl sub_FFFD97B1(int a1)
{
  int i; // esi
  unsigned int v2; // eax

  for ( i = 0; i < 12; ++i ) /*0xfffd97b7*/
  {
    v2 = *(unsigned __int16 *)(a1 + 8 * i); /*0xfffd97bb*/
    if ( !(_WORD)v2 ) /*0xfffd97c2*/
      break; /*0xfffd97c2*/
    LOWORD(v2) = sub_FFFD9539(v2); /*0xfffd97c5*/
    *(_WORD *)(a1 + 8 * i + 2) = v2; /*0xfffd97ca*/
  }
  return v2; /*0xfffd97d6*/
}

/* 0xfffd97d9 sub_FFFD97D9 */
void __cdecl sub_FFFD97D9(int a1)
{
  int v1; // edi
  void (__cdecl **v2)(_DWORD); // esi

  v1 = 0; /*0xfffd97df*/
  v2 = (void (__cdecl **)(_DWORD))(a1 + 4); /*0xfffd97e1*/
  do /*0xfffd9802*/
  {
    if ( !*((_WORD *)v2 - 2) ) /*0xfffd97e4*/
      break; /*0xfffd97e9*/
    if ( *v2 ) /*0xfffd97eb*/
      (*v2)(*((unsigned __int16 *)v2 - 1)); /*0xfffd97f8*/
    ++v1; /*0xfffd97fb*/
    v2 += 2; /*0xfffd97fc*/
  }
  while ( v1 < 12 ); /*0xfffd9802*/
}

/* 0xfffd9844 sub_FFFD9844 */
char __cdecl sub_FFFD9844(unsigned __int16 *a1, unsigned __int16 a2, __int16 a3, _WORD *a4)
{
  int v4; // edx
  char result; // al
  unsigned __int16 i; // si
  unsigned __int16 v7; // cx

  v4 = 0; /*0xfffd9849*/
  result = 0; /*0xfffd984b*/
  for ( i = *a1; i != 0xFFFF; i = a1[2 * v4] ) /*0xfffd984f*/
  {
    if ( a2 <= i ) /*0xfffd9859*/
    {
      v7 = a1[2 * v4 + 1]; /*0xfffd9869*/
      if ( v7 ) /*0xfffd9871*/
      {
        *a4 = a3 + v7; /*0xfffd987d*/
        return 1; /*0xfffd9880*/
      }
      return result; /*0xfffd9880*/
    }
    ++v4; /*0xfffd985b*/
  }
  return result; /*0xfffd9867*/
}

/* 0xfffd98a9 sub_FFFD98A9 */
_BYTE *__cdecl sub_FFFD98A9(_BYTE *a1)
{
  _BYTE *v1; // ecx
  int v2; // eax

  v1 = a1; /*0xfffd98a9*/
  v2 = 0; /*0xfffd98ad*/
  while ( !*v1 ) /*0xfffd98b2*/
  {
    ++v2; /*0xfffd98b4*/
    v1 += 259; /*0xfffd98b5*/
    if ( v2 >= 6 ) /*0xfffd98be*/
      return nullptr; /*0xfffd98c2*/
  }
  return &a1[259 * v2]; /*0xfffd98c2*/
}

/* 0xfffd98ce sub_FFFD98CE */
unsigned __int8 __cdecl sub_FFFD98CE(int a1)
{
  unsigned __int8 result; // al

  result = 0; /*0xfffd98ce*/
  while ( !*(_BYTE *)(259 * result + a1) ) /*0xfffd98e1*/
  {
    if ( ++result >= 6u ) /*0xfffd98e7*/
      return -1; /*0xfffd98e9*/
  }
  return result; /*0xfffd98eb*/
}

/* 0xfffd98ec sub_FFFD98EC */
__int16 __usercall sub_FFFD98EC@<ax>(int a1@<ebp>, _BYTE *a2)
{
  char v2; // bl
  int i; // edi
  int j; // edi
  char v5; // cl
  __int16 result; // ax
  int n; // ecx
  int ii; // ecx
  int k; // ecx
  int m; // ecx

  v2 = 0; /*0xfffd98f6*/
  for ( i = 3; i <= 11; ++i ) /*0xfffd98f8*/
  {
    LOWORD(a1) = (unsigned __int8)a2[i + 3]; /*0xfffd9901*/
    a1 <<= i % 4; /*0xfffd9909*/
    v2 += a1; /*0xfffd990b*/
  }
  for ( j = 15; j <= 30; ++j ) /*0xfffd9915*/
  {
    LOWORD(a1) = (unsigned __int8)a2[j + 3]; /*0xfffd991e*/
    a1 <<= j % 4; /*0xfffd9926*/
    v2 += a1; /*0xfffd9928*/
  }
  v5 = a2[5]; /*0xfffd9930*/
  LOBYTE(result) = 0; /*0xfffd9933*/
  HIBYTE(result) = v2; /*0xfffd9938*/
  if ( v5 == 8 ) /*0xfffd993a*/
  {
    for ( k = 64; k <= 71; ++k ) /*0xfffd9981*/
      result += (unsigned __int8)a2[k + 3]; /*0xfffd9988*/
    for ( m = 73; m <= 90; ++m ) /*0xfffd9992*/
      result += (unsigned __int8)a2[m + 3]; /*0xfffd9999*/
    result += (unsigned __int8)a2[66]; /*0xfffd99a6*/
  }
  else if ( v5 == 11 ) /*0xfffd993f*/
  {
    for ( n = 117; n <= 119; ++n ) /*0xfffd9943*/
      result += (unsigned __int8)a2[n + 3]; /*0xfffd994a*/
    for ( ii = 128; ii <= 145; ++ii ) /*0xfffd9952*/
      result += (unsigned __int8)a2[ii + 3]; /*0xfffd995d*/
    result += (unsigned __int8)a2[130] + (unsigned __int8)a2[129]; /*0xfffd997a*/
  }
  return result; /*0xfffd99a8*/
}

/* 0xfffd99ad sub_FFFD99AD */
void __cdecl sub_FFFD99AD(_BYTE *a1, int a2)
{
  char v3; // bl
  int i; // [esp+4h] [ebp-4h]

  for ( i = 0; i < a2; a1 += 259 )
  {
    v3 = 2 * (i++ + 80); /*0xfffd99ca*/
    *a1 = (unsigned __int8)sub_FFFD9CE4(v3, 0) != 0xFF ? v3 : 0;
  }
}

/* 0xfffd99f3 sub_FFFD99F3 */
__int16 __usercall sub_FFFD99F3@<ax>(int a1@<ebp>, _BYTE *a2, int a3)
{
  _BYTE *v3; // esi
  int i; // edi
  __int16 result; // ax

  sub_FFFD99AD(a2, a3); /*0xfffd99fd*/
  v3 = sub_FFFD98A9(a2); /*0xfffd9a0e*/
  for ( i = 0; i < 255; ++i ) /*0xfffd9a10*/
    v3[i + 3] = sub_FFFD9CE4(*v3, i); /*0xfffd9a1d*/
  result = sub_FFFD98EC(a1, v3); /*0xfffd9a2d*/
  *(_WORD *)(v3 + 1) = result; /*0xfffd9a34*/
  return result; /*0xfffd9a33*/
}

/* 0xfffd9a58 sub_FFFD9A58 */
__int16 __usercall sub_FFFD9A58@<ax>(int a1@<ebp>, _BYTE *a2, int a3)
{
  __int16 v3; // si
  _BYTE *v4; // eax

  v3 = -1; /*0xfffd9a5d*/
  sub_FFFD99F3(a1, a2, a3); /*0xfffd9a66*/
  v4 = sub_FFFD98A9(a2); /*0xfffd9a6f*/
  if ( v4 ) /*0xfffd9a79*/
    return *(_WORD *)(v4 + 1); /*0xfffd9a7b*/
  return v3; /*0xfffd9a82*/
}

/* 0xfffd9a84 sub_FFFD9A84 */
char sub_FFFD9A84()
{
  int v0; // ebx
  int v1; // ebx

  v0 = (unsigned __int8)sub_FFFD96E1(); /*0xfffd9a8c*/
  v1 = sub_FFFD96CC() | v0; /*0xfffd9a93*/
  return sub_FFFD96BC() | v1; /*0xfffd9a9e*/
}

/* 0xfffd9ae9 sub_FFFD9AE9 */
unsigned __int8 __cdecl sub_FFFD9AE9(unsigned __int16 a1, unsigned __int8 a2)
{
  unsigned __int8 result; // al

  result = a2; /*0xfffd9af3*/
  __outbyte(a1, a2); /*0xfffd9b04*/
  return result; /*0xfffd9b09*/
}

/* 0xfffd9b0b sub_FFFD9B0B */
int __cdecl sub_FFFD9B0B(unsigned __int16 a1, int a2)
{
  __outword(a1, a2); /*0xfffd9b27*/
  return a2; /*0xfffd9b2d*/
}

/* 0xfffd9b2f sub_FFFD9B2F */
unsigned __int8 __cdecl sub_FFFD9B2F(unsigned __int16 a1)
{
  return __inbyte(a1); /*0xfffd9b48*/
}

/* 0xfffd9b68 sub_FFFD9B68 */
__int16 __cdecl sub_FFFD9B68(unsigned int a1, unsigned __int16 a2)
{
  __int16 v2; // dx
  __int16 v4; // [esp+18h] [ebp+Ch]

  v2 = a1 % a2; /*0xfffd9b8c*/
  v4 = a1 / a2; /*0xfffd9b90*/
  if ( v2 ) /*0xfffd9ba1*/
    ++v4; /*0xfffd9ba3*/
  return v4; /*0xfffd9baa*/
}

/* 0xfffd9bac sub_FFFD9BAC */
unsigned __int8 __cdecl sub_FFFD9BAC(char a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // bl
  char v5; // [esp+12h] [ebp-2h]
  unsigned __int8 v6; // [esp+13h] [ebp-1h]

  v5 = 100; /*0xfffd9bbb*/
  v6 = -1; /*0xfffd9bc0*/
  while ( 1 ) /*0xfffd9bcd*/
  {
    --v5; /*0xfffd9bcd*/
    while ( (sub_FFFD9B2F(0x400u) & 1) != 0 ) /*0xfffd9bda*/
      ; /*0xfffd9bd1*/
    sub_FFFD9AE9(0x400u, 0xFEu); /*0xfffd9be2*/
    sub_FFFD9AE9(0x403u, a2); /*0xfffd9bed*/
    sub_FFFD9AE9(0x404u, a1 | 1); /*0xfffd9bf8*/
    sub_FFFD9AE9(0x402u, 0x48u); /*0xfffd9c04*/
    do /*0xfffd9c18*/
    {
      v2 = sub_FFFD9B2F(0x400u); /*0xfffd9c0d*/
      v3 = v2; /*0xfffd9c12*/
    }
    while ( (v2 & 0x1E) == 0 ); /*0xfffd9c18*/
    if ( (v2 & 0x1C) == 0 ) /*0xfffd9c1d*/
      break; /*0xfffd9c1d*/
    if ( !v5 ) /*0xfffd9c24*/
      return v6; /*0xfffd9c24*/
  }
  v6 = sub_FFFD9B2F(0x405u); /*0xfffd9c32*/
  sub_FFFD9AE9(0x400u, v3 | 0x40); /*0xfffd9c3e*/
  return v6; /*0xfffd9c4a*/
}

/* 0xfffd9c50 sub_FFFD9C50 */
unsigned __int8 __cdecl sub_FFFD9C50(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // bl
  unsigned __int8 result; // al
  char v5; // [esp+Fh] [ebp-1h]

  v5 = 100; /*0xfffd9c5b*/
  while ( 1 ) /*0xfffd9c64*/
  {
    --v5; /*0xfffd9c64*/
    do /*0xfffd9c73*/
      v3 = sub_FFFD9B2F(0x400u); /*0xfffd9c6d*/
    while ( (v3 & 1) != 0 ); /*0xfffd9c73*/
    sub_FFFD9AE9(0x400u, 0xFEu); /*0xfffd9c7b*/
    sub_FFFD9AE9(0x403u, a2); /*0xfffd9c86*/
    sub_FFFD9AE9(0x404u, a1); /*0xfffd9c95*/
    sub_FFFD9AE9(0x405u, a3); /*0xfffd9ca4*/
    sub_FFFD9AE9(0x402u, 0x48u); /*0xfffd9cb0*/
    if ( (v3 & 0x1C) == 0 ) /*0xfffd9cbb*/
      break; /*0xfffd9cbb*/
    do /*0xfffd9cc6*/
      result = sub_FFFD9B2F(0x400u); /*0xfffd9cbe*/
    while ( (result & 0x1E) == 0 ); /*0xfffd9cc6*/
    if ( !v5 ) /*0xfffd9ccc*/
      return result; /*0xfffd9ccc*/
  }
  return sub_FFFD9AE9(0x400u, v3 | 0x40); /*0xfffd9cdf*/
}

/* 0xfffd9ce4 sub_FFFD9CE4 */
// attributes: thunk
unsigned __int8 __cdecl sub_FFFD9CE4(char a1, unsigned __int8 a2)
{
  return sub_FFFD9BAC(a1, a2);
}

/* 0xfffd9ce9 sub_FFFD9CE9 */
unsigned __int8 __cdecl sub_FFFD9CE9(unsigned __int8 a1)
{
  sub_FFFD9C50(0x3Cu, 0x10u, a1); /*0xfffd9cf1*/
  sub_FFFD9C50(0x3Cu, 0x11u, 1u); /*0xfffd9cfc*/
  sub_FFFD9C50(0x3Cu, 0x12u, 1u); /*0xfffd9d07*/
  return sub_FFFD9C50(0x3Cu, 0x40u, 2u); /*0xfffd9d1a*/
}

/* 0xfffd9d27 sub_FFFD9D27 */
unsigned int __cdecl sub_FFFD9D27(unsigned __int8 a1)
{
  int v1; // edi
  int v2; // esi
  unsigned int v3; // esi
  unsigned int result; // eax
  _DWORD v5[7]; // [esp+8h] [ebp-1Ch]

  v5[0] = 800; /*0xfffd9d33*/
  v5[1] = 1066; /*0xfffd9d3a*/
  v5[2] = 1333; /*0xfffd9d41*/
  v5[3] = 1600; /*0xfffd9d48*/
  v5[4] = 1866; /*0xfffd9d4f*/
  v5[5] = 2133; /*0xfffd9d56*/
  v5[6] = 2400; /*0xfffd9d5d*/
  v1 = v5[a1]; /*0xfffd9d64*/
  v2 = (unsigned __int16)sub_FFFD9539(0xA7B0u); /*0xfffd9d73*/
  if ( sub_FFFD9A84() ) /*0xfffd9d76*/
    v2 = 133; /*0xfffd9d84*/
  v3 = v1 * v2; /*0xfffd9d86*/
  result = v3 / 0x85; /*0xfffd9d8d*/
  if ( v3 % 0x85 >= 0x42 ) /*0xfffd9d94*/
    ++result; /*0xfffd9d96*/
  return result; /*0xfffd9d8f*/
}

/* 0xfffd9d99 sub_FFFD9D99 */
char __cdecl sub_FFFD9D99(unsigned __int8 a1)
{
  unsigned __int16 v1; // ax

  v1 = sub_FFFD9D27(a1); /*0xfffd9d9d*/
  if ( v1 >= 0x95Eu ) /*0xfffd9da7*/
    return 6; /*0xfffd9da9*/
  if ( v1 >= 0x853u ) /*0xfffd9db0*/
    return 5; /*0xfffd9db2*/
  if ( v1 >= 0x748u ) /*0xfffd9db9*/
    return 4; /*0xfffd9dbb*/
  if ( v1 >= 0x63Eu ) /*0xfffd9dc2*/
    return 3; /*0xfffd9dc4*/
  if ( v1 < 0x533u ) /*0xfffd9dcb*/
    return v1 >= 0x428u; /*0xfffd9dd6*/
  return 2; /*0xfffd9dab*/
}

/* 0xfffd9dd9 sub_FFFD9DD9 */
unsigned int __cdecl sub_FFFD9DD9(unsigned int a1, unsigned __int8 a2, unsigned int *a3)
{
  unsigned int result; // eax

  result = a1; /*0xfffd9ddc*/
  if ( (_WORD)a1 ) /*0xfffd9de2*/
  {
    if ( (unsigned __int16)a1 >= 0x10u ) /*0xfffd9de8*/
    {
      if ( (unsigned __int16)a1 > 0x10u ) /*0xfffd9e0d*/
      {
        *a3 += a2 * (unsigned __int16)(a1 - 16); /*0xfffd9e1f*/
        return (unsigned int)a3; /*0xfffd9e1c*/
      }
    }
    else
    {
      result = a2 * (unsigned __int16)(16 - a1); /*0xfffd9df9*/
      if ( *a3 <= result ) /*0xfffd9e00*/
        *a3 = 0; /*0xfffd9e08*/
      else
        *a3 -= result; /*0xfffd9e04*/
    }
  }
  return result; /*0xfffd9e06*/
}

/* 0xfffd9e23 sub_FFFD9E23 */
char __cdecl sub_FFFD9E23(__int16 a1)
{
  char v1; // bl
  unsigned __int8 v2; // al
  int v3; // esi
  int v4; // ecx
  _BYTE v6[1556]; // [esp+4h] [ebp-61Ch] BYREF
  int v7; // [esp+618h] [ebp-8h]
  int v8; // [esp+61Ch] [ebp-4h]
  int savedregs; // [esp+620h] [ebp+0h] BYREF

  v1 = 0; /*0xfffd9e32*/
  if ( sub_FFFD9539(0x34C5u) == 5 ) /*0xfffd9e3e*/
  {
    sub_FFFD99F3((int)&savedregs, v6, 6); /*0xfffd9e4d*/
    LOBYTE(v7) = 35 * sub_FFFD9539(0x34ADu) - 71; /*0xfffd9e62*/
    LOBYTE(v8) = v6[259 * sub_FFFD98CE((int)v6)]; /*0xfffd9e84*/
    v2 = sub_FFFD9BAC(v8, v7); /*0xfffd9e8a*/
    if ( v2 ) /*0xfffd9e94*/
    {
      v3 = (unsigned __int16)(5 * ((v2 & 0x1F) + 20 * ((v2 >> 5) & 3))) - 150; /*0xfffd9eb7*/
      v4 = v3 / 2 + 1; /*0xfffd9ecc*/
      if ( v3 % 2 ) /*0xfffd9ec8*/
        LOWORD(v4) = v3 / 2 + 2; /*0xfffd9ed2*/
      if ( (_WORD)v4 == a1 ) /*0xfffd9ed7*/
        return 1; /*0xfffd9ed9*/
    }
  }
  return v1; /*0xfffd9edd*/
}

/* 0xfffd9ee0 sub_FFFD9EE0 */
BOOL sub_FFFD9EE0()
{
  unsigned __int8 v0; // bl

  sub_FFFC52AC(0x2Eu, 0x87u); /*0xfffd9eeb*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9efc*/
  sub_FFFC52AC(0x2Eu, 0x87u); /*0xfffd9f04*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f0b*/
  sub_FFFC52AC(0x2Eu, 7u); /*0xfffd9f14*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f1b*/
  sub_FFFC52AC(0x2Fu, 9u); /*0xfffd9f24*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f2b*/
  sub_FFFC52AC(0x2Eu, 0xF1u); /*0xfffd9f3a*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f41*/
  v0 = sub_FFFC527A(0x2Fu); /*0xfffd9f4f*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f51*/
  sub_FFFC52AC(0x2Eu, 0xAAu); /*0xfffd9f5d*/
  sub_FFFC52AC(0xE1u, 0xFFu); /*0xfffd9f64*/
  return (v0 & 8) == 0; /*0xfffd9f70*/
}

/* 0xfffd9f7c sub_FFFD9F7C */
unsigned int __cdecl sub_FFFD9F7C(char a1, unsigned __int8 a2)
{
  int v2; // edx
  unsigned int result; // eax
  unsigned int v4; // eax
  unsigned __int8 v5; // [esp+4h] [ebp+4h]

  v2 = 200 * (a2 + 75); /*0xfffd9f84*/
  if ( !a1 ) /*0xfffd9f8f*/
    return 64; /*0xfffd9f8f*/
  v5 = a1 - 1; /*0xfffd9f91*/
  if ( v5 == 21 ) /*0xfffd9f9f*/
    return 64; /*0xfffd9fa3*/
  if ( v5 <= 0x15u ) /*0xfffd9fa5*/
  {
    result = v2 * (21 - (unsigned int)v5) / 0x1388; /*0xfffd9fce*/
    if ( result > 0x3F ) /*0xfffd9fd3*/
      return 63; /*0xfffd9fd7*/
  }
  else
  {
    v4 = v2 * ((unsigned int)v5 - 21) / 0x61A8; /*0xfffd9fb4*/
    if ( v4 > 0x10 ) /*0xfffd9fb9*/
      v4 = 16; /*0xfffd9fbd*/
    return v4 + 64; /*0xfffd9fbe*/
  }
  return result; /*0xfffd9fa4*/
}

/* 0xfffd9fd9 sub_FFFD9FD9 */
unsigned int __cdecl sub_FFFD9FD9(char a1, char a2)
{
  return ~(0xFFFFFFFF >> a1 << a1 << (32 - a2 - a1) >> (32 - a2 - a1)); /*0xfffd9ff9*/
}

/* 0xfffd9ffa sub_FFFD9FFA */
unsigned int __cdecl sub_FFFD9FFA(int a1)
{
  return (((unsigned int)sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), 3u, 4u, 0x50u) >> 1) & 0xF) - 3; /*0xfffda01e*/
}

/* 0xfffda01f sub_FFFDA01F */
char __cdecl sub_FFFDA01F(_BYTE *a1)
{
  char v1; // dl
  char result; // al

  v1 = a1[5529]; /*0xfffda023*/
  result = 5; /*0xfffda02b*/
  if ( v1 ) /*0xfffda02d*/
    return v1; /*0xfffda02d*/
  v1 = a1[5959]; /*0xfffda032*/
  if ( v1 ) /*0xfffda03a*/
    return v1; /*0xfffda02f*/
  if ( a1[6389] ) /*0xfffda03c*/
    return a1[6389]; /*0xfffda046*/
  return result; /*0xfffda031*/
}

/* 0xfffda049 sub_FFFDA049 */
__int16 __cdecl sub_FFFDA049(int a1)
{
  sub_FFFD95D9(0x338u, *(unsigned __int16 *)(a1 + 6802)); /*0xfffda05f*/
  return *(_WORD *)(a1 + 6802); /*0xfffda069*/
}

/* 0xfffda06b sub_FFFDA06B */
int __cdecl sub_FFFDA06B(unsigned __int8 *a1)
{
  return a1[5514] + a1[5944] + a1[6374]; /*0xfffda08a*/
}

/* 0xfffda08b sub_FFFDA08B */
char *__cdecl sub_FFFDA08B(unsigned __int8 *a1, char a2, unsigned __int8 a3)
{
  unsigned __int16 v3; // di
  char *v4; // esi
  __int16 v5; // ax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  char v8; // al
  char v9; // bl
  __int16 v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-Ch]
  unsigned __int16 v13; // [esp+10h] [ebp-8h]
  char v14; // [esp+17h] [ebp-1h]

  v12 = 0; /*0xfffda098*/
  v11 = sub_FFFDA049((int)a1); /*0xfffda0a3*/
  v14 = sub_FFFDA06B(a1); /*0xfffda0ae*/
  v13 = sub_FFFD9D27(a3); /*0xfffda0b9*/
  switch ( a2 ) /*0xfffda0c5*/
  {
    case 0: /*0xfffda0c5*/
      v3 = 17; /*0xfffda0ce*/
      v4 = (char *)&unk_FFFDD388; /*0xfffda0cf*/
      break; /*0xfffda0d4*/
    case 1: /*0xfffda0c5*/
      v3 = 9; /*0xfffda0d8*/
      v4 = (char *)&unk_FFFDD39C; /*0xfffda0d9*/
      break; /*0xfffda0de*/
    case 2: /*0xfffda0c5*/
      v3 = 19; /*0xfffda0e2*/
      v4 = (char *)&unk_FFFDD3E0; /*0xfffda0e3*/
      break; /*0xfffda0e8*/
    case 3: /*0xfffda0c5*/
      v3 = 17; /*0xfffda0ec*/
      v4 = (char *)&unk_FFFDD7D0; /*0xfffda0ed*/
      break; /*0xfffda0f2*/
    case 4: /*0xfffda0c5*/
      v3 = 11; /*0xfffda0f6*/
      v4 = (char *)&unk_FFFDF460; /*0xfffda0f7*/
      break; /*0xfffda0fc*/
    case 5: /*0xfffda0c5*/
      v3 = 44; /*0xfffda100*/
      v4 = (char *)&unk_FFFDF4B8; /*0xfffda101*/
      break; /*0xfffda106*/
    case 6: /*0xfffda0c5*/
      v3 = 9; /*0xfffda10a*/
      v4 = (char *)&unk_FFFDF4E8; /*0xfffda10b*/
      break; /*0xfffda110*/
    case 7: /*0xfffda0c5*/
      v3 = 14; /*0xfffda114*/
      v4 = (char *)&unk_FFFDF85C; /*0xfffda115*/
      break; /*0xfffda11a*/
    default:
      sub_FFFD9515(47900); /*0xfffda121*/
  }
  v5 = *(_WORD *)v4; /*0xfffda12a*/
  if ( *(_WORD *)v4 != 0xFFFF ) /*0xfffda131*/
  {
    while ( 1 ) /*0xfffda137*/
    {
      if ( !v5 || v5 == v11 ) /*0xfffda13d*/
      {
        v6 = *((_WORD *)v4 + 1); /*0xfffda13f*/
        if ( v6 == 255 || v6 >= v13 ) /*0xfffda14d*/
        {
          v7 = *((_WORD *)v4 + 2); /*0xfffda14f*/
          if ( v7 == 255 || v7 <= v13 ) /*0xfffda15d*/
          {
            v8 = v4[6]; /*0xfffda15f*/
            if ( v8 == -1 || v8 == v14 ) /*0xfffda169*/
            {
              v9 = v4[7]; /*0xfffda16b*/
              if ( v9 == -1 || v9 == sub_FFFDA01F(a1) ) /*0xfffda17e*/
                break; /*0xfffda17e*/
            }
          }
        }
      }
      v4 += v3; /*0xfffda183*/
      v5 = *(_WORD *)v4; /*0xfffda185*/
      if ( *(_WORD *)v4 == 0xFFFF ) /*0xfffda18c*/
        return (char *)v12; /*0xfffda18c*/
    }
    return v4; /*0xfffda190*/
  }
  return (char *)v12; /*0xfffda197*/
}

/* 0xfffda1bb sub_FFFDA1BB */
char __cdecl sub_FFFDA1BB(int a1)
{
  char *v2; // edi
  __int16 v3; // ax
  _BYTE v5[1556]; // [esp+8h] [ebp-614h] BYREF
  int savedregs; // [esp+61Ch] [ebp+0h] BYREF
  unsigned __int8 v7; // [esp+624h] [ebp+8h]

  if ( *(_BYTE *)(a1 + 1) != 1 ) /*0xfffda1cd*/
    *(_WORD *)(a1 + 6802) = sub_FFFD9A58((int)&savedregs, v5, 6); /*0xfffda1df*/
  v7 = sub_FFFD9FFA(a1); /*0xfffda1ec*/
  v2 = sub_FFFDA08B((unsigned __int8 *)a1, 7, v7); /*0xfffda1fd*/
  LOBYTE(v3) = sub_FFFD9A84(); /*0xfffda1ff*/
  if ( (_BYTE)v3 /*0xfffda23a*/
    || !v2
    && (v3 = sub_FFFD9539(0x7348u)) == 0
    && (v3 = sub_FFFD9539(0x7358u)) == 0
    && (v3 = sub_FFFD9539(0x7368u)) == 0 )
  {
    *(_BYTE *)(a1 + 28) = 1; /*0xfffda23c*/
    *(_BYTE *)(a1 + 29) = 12; /*0xfffda240*/
    *(_BYTE *)(a1 + 30) = 6; /*0xfffda244*/
    *(_WORD *)(a1 + 36) = 5000; /*0xfffda248*/
    *(_BYTE *)(a1 + 6999) = 64; /*0xfffda24e*/
    *(_WORD *)(a1 + 10290) = 6; /*0xfffda255*/
    *(_BYTE *)(a1 + 10292) = 100; /*0xfffda25e*/
    *(_BYTE *)(a1 + 10293) = 0; /*0xfffda265*/
  }
  return v3; /*0xfffda26c*/
}

/* 0xfffda270 sub_FFFDA270 */
char __cdecl sub_FFFDA270(int a1)
{
  char *v1; // eax
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al
  int v4; // ebx
  unsigned __int8 v5; // al
  int v6; // ecx
  char *v7; // ebx
  _BYTE *v8; // esi
  int v9; // edi
  int v11; // [esp+10h] [ebp-10h]
  unsigned __int8 v12; // [esp+18h] [ebp-8h]
  unsigned __int16 v13; // [esp+1Ch] [ebp-4h]

  v12 = sub_FFFD9FFA(a1); /*0xfffda288*/
  LOBYTE(v1) = sub_FFFD9A84(); /*0xfffda28b*/
  if ( (_BYTE)v1 ) /*0xfffda292*/
  {
    v13 = 0; /*0xfffda346*/
  }
  else
  {
    v13 = sub_FFFD9539(0x2728u); /*0xfffda2a3*/
    v2 = sub_FFFD9FFA(a1); /*0xfffda2a6*/
    *(_BYTE *)(a1 + 3757) = sub_FFFD9D99(v2); /*0xfffda2b2*/
    v3 = sub_FFFD9FFA(a1); /*0xfffda2b8*/
    *(_BYTE *)(a1 + 3732) = sub_FFFD9D99(v3); /*0xfffda2c8*/
    LOWORD(v1) = sub_FFFD9539(0xA7B0u); /*0xfffda2ce*/
    if ( (unsigned __int16)v1 > 0x85u ) /*0xfffda2da*/
    {
      v4 = (unsigned __int16)v1; /*0xfffda2dc*/
      v11 = (unsigned __int16)v1; /*0xfffda2ee*/
      *(_DWORD *)(a1 + 7018) = 1000000 /*0xfffda309*/
                             / ((unsigned __int16)v1
                              * (unsigned __int8)sub_FFFC4E96(a1, *(_BYTE *)(a1 + 6997), 0, 0, 0xC0u));
      v5 = sub_FFFD9FFA(a1); /*0xfffda30f*/
      v6 = v11 * (*(unsigned __int8 *)(7 * v5 + a1 + 989) >> 1); /*0xfffda330*/
      *(_DWORD *)(a1 + 70) = 1000000 / (v4 * *(unsigned __int8 *)(7 * v5 + a1 + 989)); /*0xfffda337*/
      v1 = (char *)(1000000 / v6); /*0xfffda33d*/
      *(_DWORD *)(a1 + 74) = 1000000 / v6; /*0xfffda341*/
    }
  }
  if ( v13 ) /*0xfffda34d*/
  {
    v7 = nullptr; /*0xfffda361*/
  }
  else
  {
    v1 = sub_FFFDA08B((unsigned __int8 *)a1, 2, v12); /*0xfffda355*/
    v7 = v1; /*0xfffda35d*/
  }
  v8 = (_BYTE *)(a1 + 5517); /*0xfffda366*/
  v9 = 3; /*0xfffda36c*/
  do /*0xfffda3b0*/
  {
    if ( v13 ) /*0xfffda372*/
    {
      v1 = (char *)v13; /*0xfffda374*/
LABEL_11:
      LOBYTE(v1) = byte_FFFDF8B3[(_DWORD)v1]; /*0xfffda378*/
      *v8 = (_BYTE)v1; /*0xfffda37e*/
      goto LABEL_18; /*0xfffda380*/
    }
    if ( v7 ) /*0xfffda384*/
    {
      LOBYTE(v1) = v7[18]; /*0xfffda386*/
      if ( (_BYTE)v1 != 0xFF ) /*0xfffda38b*/
      {
        v1 = (char *)(unsigned __int8)v1; /*0xfffda38d*/
        goto LABEL_11; /*0xfffda390*/
      }
    }
    if ( !*v8 ) /*0xfffda392*/
    {
      LOWORD(v1) = sub_FFFD9D27(v12); /*0xfffda39a*/
      if ( (unsigned __int16)v1 >= 0x708u ) /*0xfffda3a4*/
        *v8 = 1; /*0xfffda3a6*/
    }
LABEL_18:
    v8 += 430; /*0xfffda3a9*/
    --v9; /*0xfffda3af*/
  }
  while ( v9 ); /*0xfffda3b0*/
  return (char)v1; /*0xfffda3b2*/
}

/* 0xfffda3b7 sub_FFFDA3B7 */
char *__cdecl sub_FFFDA3B7(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  char *result; // eax
  unsigned __int8 *v3; // esi
  int v4; // ebx
  _BYTE *v5; // edx
  int v6; // edi
  char v7; // cl

  v1 = sub_FFFD9FFA((int)a1); /*0xfffda3c2*/
  result = sub_FFFDA08B(a1, 1, v1); /*0xfffda3d0*/
  v3 = a1 + 5584; /*0xfffda3da*/
  v4 = 3; /*0xfffda3e0*/
  do /*0xfffda410*/
  {
    if ( *(v3 - 72) ) /*0xfffda3e1*/
    {
      v5 = v3; /*0xfffda3e9*/
      v6 = 2; /*0xfffda3eb*/
      do /*0xfffda407*/
      {
        if ( *(v5 - 9) && result ) /*0xfffda3f4*/
        {
          v7 = result[8]; /*0xfffda3f6*/
          if ( v7 != -1 ) /*0xfffda3fc*/
            *v5 = v7; /*0xfffda3fe*/
        }
        v5 += 184; /*0xfffda400*/
        --v6; /*0xfffda406*/
      }
      while ( v6 ); /*0xfffda407*/
    }
    v3 += 430; /*0xfffda409*/
    --v4; /*0xfffda40f*/
  }
  while ( v4 ); /*0xfffda410*/
  return result; /*0xfffda412*/
}

/* 0xfffda417 sub_FFFDA417 */
void __cdecl sub_FFFDA417(unsigned __int8 *a1)
{
  bool v2; // zf
  __int16 v3; // ax
  unsigned __int16 v4; // ax
  char *v5; // eax
  unsigned __int8 v6; // al
  char *v7; // ecx
  unsigned __int8 *v8; // esi
  char *v9; // edi
  int v10; // ebx
  unsigned int v11; // eax
  char *v12; // eax
  char v13; // al
  unsigned __int8 v14; // cl
  _BYTE *v15; // esi
  int v16; // edi
  char v17; // al
  unsigned int v18; // eax
  unsigned __int8 v19; // cl
  unsigned __int8 *v20; // esi
  char *v21; // edi
  int v22; // ebx
  char v23; // al
  unsigned int v24; // eax
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // [esp-Ch] [ebp-20h]
  unsigned __int8 v27; // [esp-Ch] [ebp-20h]
  unsigned __int8 v28; // [esp-Ch] [ebp-20h]
  unsigned __int8 v29; // [esp+4h] [ebp-10h]
  char *v30; // [esp+8h] [ebp-Ch]
  unsigned int v31; // [esp+Ch] [ebp-8h] BYREF
  int v32; // [esp+10h] [ebp-4h]
  bool v33; // [esp+1Fh] [ebp+Bh]

  v30 = nullptr; /*0xfffda41d*/
  v2 = a1[1] == 1; /*0xfffda425*/
  LOBYTE(v32) = 0; /*0xfffda429*/
  if ( v2 ) /*0xfffda42d*/
    return; /*0xfffda42d*/
  v29 = sub_FFFD9FFA((int)a1); /*0xfffda43b*/
  v33 = sub_FFFD9A84() != 0; /*0xfffda449*/
  if ( sub_FFFD9D99(v29) == 2 && (unsigned __int8)sub_FFFDA06B(a1) >= 4u ) /*0xfffda461*/
    LOBYTE(v32) = 8; /*0xfffda463*/
  if ( v33 ) /*0xfffda46b*/
  {
LABEL_10:
    v5 = sub_FFFDA08B(a1, 6, v29); /*0xfffda4b0*/
    if ( !v5 ) /*0xfffda4be*/
      goto LABEL_13; /*0xfffda4be*/
    v6 = v5[8]; /*0xfffda4c0*/
    if ( v6 == 0xFF ) /*0xfffda4c5*/
      goto LABEL_13; /*0xfffda4c5*/
    goto LABEL_12; /*0xfffda4c5*/
  }
  v3 = sub_FFFD9539(0x7320u); /*0xfffda472*/
  if ( !v3 ) /*0xfffda47b*/
  {
    v4 = sub_FFFD9D27(v29); /*0xfffda488*/
    if ( sub_FFFD9844(word_FFFDF878, v4, 0, &v31) && (unsigned __int16)v31 > (unsigned __int8)v32 ) /*0xfffda4ab*/
      LOBYTE(v32) = v31; /*0xfffda4ad*/
    goto LABEL_10; /*0xfffda4ad*/
  }
  LOBYTE(v32) = v3 - 1; /*0xfffda54e*/
  if ( !sub_FFFD9E23(v3) ) /*0xfffda551*/
    goto LABEL_13; /*0xfffda551*/
  v12 = sub_FFFDA08B(a1, 6, v29); /*0xfffda563*/
  if ( !v12 ) /*0xfffda56d*/
    goto LABEL_13; /*0xfffda56d*/
  v6 = v12[8]; /*0xfffda573*/
  if ( v6 == 0xFF || v6 <= (unsigned __int8)v32 ) /*0xfffda581*/
    goto LABEL_13; /*0xfffda581*/
LABEL_12:
  LOBYTE(v32) = v6; /*0xfffda4c7*/
LABEL_13:
  if ( !sub_FFFD9EE0() && (unsigned __int8)v32 > 0x14u ) /*0xfffda4d7*/
    LOBYTE(v32) = 20; /*0xfffda4d9*/
  sub_FFFD9CE9(v32); /*0xfffda4e0*/
  if ( !v33 ) /*0xfffda4ea*/
  {
    v7 = sub_FFFDA08B(a1, 7, v29); /*0xfffda4f9*/
    v30 = v7; /*0xfffda500*/
    if ( !v7 || v7[8] == -1 && v7[9] == -1 && v7[10] == -1 ) /*0xfffda51b*/
    {
      if ( sub_FFFD9539(0x7348u) || sub_FFFD9539(0x7358u) || sub_FFFD9539(0x7368u) ) /*0xfffda5f8*/
      {
        v15 = &unk_FFFDF898; /*0xfffda605*/
        v16 = 3; /*0xfffda60a*/
        do /*0xfffda647*/
        {
          v27 = v32; /*0xfffda60b*/
          v17 = sub_FFFD9539(*((unsigned __int16 *)v15 - 2)); /*0xfffda615*/
          v18 = sub_FFFD9F7C(v17, v27); /*0xfffda61c*/
          LOWORD(v18) = (unsigned __int8)v18; /*0xfffda621*/
          v19 = v18 | *v15; /*0xfffda629*/
          v31 = v18; /*0xfffda62b*/
          sub_FFFD9C50(*(v15 - 2), *(v15 - 1), v19); /*0xfffda63b*/
          v15 += 5; /*0xfffda643*/
          --v16; /*0xfffda646*/
        }
        while ( v16 ); /*0xfffda647*/
      }
    }
    else
    {
      v8 = (unsigned __int8 *)&unk_FFFDF894; /*0xfffda523*/
      v9 = v7 + 8; /*0xfffda528*/
      v10 = 3; /*0xfffda52a*/
      do /*0xfffda5cb*/
      {
        if ( sub_FFFD9539(*(unsigned __int16 *)v8) || *v9 == -1 ) /*0xfffda542*/
        {
          v26 = v32; /*0xfffda58c*/
          v13 = sub_FFFD9539(*(unsigned __int16 *)v8); /*0xfffda595*/
          v11 = sub_FFFD9F7C(v13, v26); /*0xfffda59c*/
        }
        else
        {
          v11 = sub_FFFD9F7C(*v9, v32); /*0xfffda547*/
        }
        LOWORD(v11) = (unsigned __int8)v11; /*0xfffda5a1*/
        v14 = v11 | v8[4]; /*0xfffda5ac*/
        v31 = v11; /*0xfffda5ae*/
        sub_FFFD9C50(v8[2], v8[3], v14); /*0xfffda5be*/
        ++v9; /*0xfffda5c6*/
        v8 += 5; /*0xfffda5c7*/
        --v10; /*0xfffda5ca*/
      }
      while ( v10 ); /*0xfffda5cb*/
    }
  }
  v20 = (unsigned __int8 *)&unk_FFFDF8A4; /*0xfffda64e*/
  v21 = v30 + 11; /*0xfffda653*/
  v22 = 3; /*0xfffda656*/
  do /*0xfffda6c7*/
  {
    if ( v33 ) /*0xfffda65b*/
    {
      v24 = sub_FFFD9F7C(0, v32); /*0xfffda698*/
    }
    else
    {
      if ( sub_FFFD9539(*(unsigned __int16 *)v20) || !v30 || (v23 = *v21, *v21 == -1) ) /*0xfffda67a*/
      {
        v28 = v32; /*0xfffda681*/
        v23 = sub_FFFD9539(*(unsigned __int16 *)v20); /*0xfffda68a*/
      }
      else
      {
        v28 = v32; /*0xfffda67c*/
      }
      v24 = sub_FFFD9F7C(v23, v28); /*0xfffda691*/
    }
    LOWORD(v24) = (unsigned __int8)v24; /*0xfffda69d*/
    v25 = v24 | v20[4]; /*0xfffda6a8*/
    v31 = v24; /*0xfffda6aa*/
    sub_FFFD9C50(v20[2], v20[3], v25); /*0xfffda6ba*/
    ++v21; /*0xfffda6c2*/
    v20 += 5; /*0xfffda6c3*/
    --v22; /*0xfffda6c6*/
  }
  while ( v22 ); /*0xfffda6c7*/
}

/* 0xfffda6ce sub_FFFDA6CE */
char __cdecl sub_FFFDA6CE(unsigned __int8 *a1)
{
  char result; // al
  int v2; // edi
  _BYTE *v3; // ebx
  unsigned int v4; // eax
  char *v5; // [esp+4h] [ebp-Ch]
  unsigned __int8 v6; // [esp+8h] [ebp-8h]
  int v7; // [esp+8h] [ebp-8h]
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v6 = sub_FFFD9FFA((int)a1); /*0xfffda6df*/
  result = sub_FFFD9A84(); /*0xfffda6e2*/
  if ( !result ) /*0xfffda6e9*/
  {
    v2 = 0; /*0xfffda6f4*/
    v5 = sub_FFFDA08B(a1, 0, v6); /*0xfffda700*/
    v3 = v5 + 8; /*0xfffda703*/
    v7 = 9; /*0xfffda706*/
    do /*0xfffda798*/
    {
      v8 = sub_FFFC4FE3( /*0xfffda730*/
             (int)a1,
             a1[6997],
             3u,
             (int)&a1[2 * (unsigned __int16)word_FFFDF8CC[v2] + 1720 + (unsigned __int16)word_FFFDF8CC[v2]]);
      LOWORD(v4) = sub_FFFD9539((unsigned __int16)word_FFFDF8B8[v2]); /*0xfffda73d*/
      if ( !(_WORD)v4 && v5 && *v3 != 0xFF ) /*0xfffda755*/
        LOWORD(v4) = (unsigned __int8)*v3; /*0xfffda757*/
      sub_FFFD9DD9(v4, 1u, (unsigned int *)&v8); /*0xfffda762*/
      result = sub_FFFC8367( /*0xfffda78a*/
                 (int)a1,
                 a1[6997],
                 3u,
                 (int)&a1[2 * (unsigned __int16)word_FFFDF8CC[v2] + 1720 + (unsigned __int16)word_FFFDF8CC[v2]],
                 v8,
                 1u);
      ++v3; /*0xfffda792*/
      ++v2; /*0xfffda794*/
      --v7; /*0xfffda795*/
    }
    while ( v7 ); /*0xfffda798*/
  }
  return result; /*0xfffda7a0*/
}

/* 0xfffda7a3 sub_FFFDA7A3 */
char __cdecl sub_FFFDA7A3(unsigned __int8 *a1, int a2)
{
  unsigned __int8 v2; // bl
  __int16 v3; // ax
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // bl
  __int16 v8; // ax
  char v9; // al
  bool v10; // cc
  unsigned __int8 v11; // cl
  unsigned __int8 *v12; // eax
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  _WORD v18[17]; // [esp+Ah] [ebp-2Eh]
  char *v19; // [esp+2Ch] [ebp-Ch]
  unsigned int v20; // [esp+30h] [ebp-8h]
  unsigned __int8 i; // [esp+37h] [ebp-1h]

  v18[1] = 30; /*0xfffda7af*/
  v18[2] = 36; /*0xfffda7b5*/
  v18[3] = 48; /*0xfffda7bb*/
  v18[4] = 60; /*0xfffda7c1*/
  v18[5] = 72; /*0xfffda7c7*/
  v18[6] = 82; /*0xfffda7cd*/
  v18[7] = 88; /*0xfffda7d3*/
  v18[8] = 90; /*0xfffda7d9*/
  v18[9] = 100; /*0xfffda7df*/
  v18[10] = 110; /*0xfffda7e5*/
  v18[11] = 124; /*0xfffda7eb*/
  v18[12] = 132; /*0xfffda7f1*/
  v18[13] = 140; /*0xfffda7f7*/
  v18[14] = 150; /*0xfffda7fd*/
  v18[15] = 160; /*0xfffda803*/
  v2 = sub_FFFD9FFA((int)a1); /*0xfffda80e*/
  LOBYTE(v19) = v2; /*0xfffda811*/
  LOBYTE(v3) = sub_FFFD9A84(); /*0xfffda814*/
  if ( (_BYTE)v3 ) /*0xfffda81b*/
  {
    if ( v2 ) /*0xfffdaa34*/
    {
      if ( v2 == 1 ) /*0xfffdaa39*/
      {
        LOBYTE(v3) = a2; /*0xfffdaa68*/
        v15 = *(_BYTE *)(a2 + 17); /*0xfffdaa6b*/
        if ( v15 >= 6u ) /*0xfffdaa71*/
        {
          if ( v15 > 8u ) /*0xfffdaa7c*/
            *(_BYTE *)(a2 + 17) = 8; /*0xfffdaa7e*/
        }
        else
        {
          *(_BYTE *)(a2 + 17) = 6; /*0xfffdaa73*/
        }
        if ( *(_BYTE *)(a2 + 20) < 0x14u ) /*0xfffdaa86*/
          *(_BYTE *)(a2 + 20) = 20; /*0xfffdaa88*/
      }
      else if ( v2 <= 6u ) /*0xfffdaa40*/
      {
        LOBYTE(v3) = a2; /*0xfffdaa42*/
        v14 = *(_BYTE *)(a2 + 17); /*0xfffdaa45*/
        if ( v14 >= 7u ) /*0xfffdaa4b*/
        {
          if ( v14 > 9u ) /*0xfffdaa56*/
            *(_BYTE *)(a2 + 17) = 9; /*0xfffdaa58*/
        }
        else
        {
          *(_BYTE *)(a2 + 17) = 7; /*0xfffdaa4d*/
        }
        if ( *(_BYTE *)(a2 + 20) < 0x18u ) /*0xfffdaa60*/
          *(_BYTE *)(a2 + 20) = 24; /*0xfffdaa62*/
      }
    }
    else
    {
      LOBYTE(v3) = a2; /*0xfffdaa8e*/
      v16 = *(_BYTE *)(a2 + 17); /*0xfffdaa91*/
      if ( v16 >= 5u ) /*0xfffdaa97*/
      {
        if ( v16 > 6u ) /*0xfffdaaa2*/
          *(_BYTE *)(a2 + 17) = 6; /*0xfffdaaa4*/
      }
      else
      {
        *(_BYTE *)(a2 + 17) = 5; /*0xfffdaa99*/
      }
      if ( *(_BYTE *)(a2 + 20) < 0xFu ) /*0xfffdaaac*/
        *(_BYTE *)(a2 + 20) = 15; /*0xfffdaaae*/
    }
    return v3; /*0xfffdaa66*/
  }
  if ( sub_FFFD9539(0x4688u) ) /*0xfffda826*/
    goto LABEL_17; /*0xfffda832*/
  if ( v2 ) /*0xfffda836*/
  {
    if ( v2 != 1 ) /*0xfffda83b*/
    {
      if ( v2 <= 6u ) /*0xfffda842*/
      {
        v4 = *(_BYTE *)(a2 + 17); /*0xfffda844*/
        if ( v4 >= 7u ) /*0xfffda849*/
        {
          if ( v4 > 9u ) /*0xfffda853*/
            *(_BYTE *)(a2 + 17) = 9; /*0xfffda855*/
        }
        else
        {
          *(_BYTE *)(a2 + 17) = 7; /*0xfffda84b*/
        }
      }
      goto LABEL_17; /*0xfffda84f*/
    }
    v5 = *(_BYTE *)(a2 + 17); /*0xfffda85b*/
    if ( v5 >= 6u ) /*0xfffda860*/
    {
      if ( v5 > 8u ) /*0xfffda864*/
        *(_BYTE *)(a2 + 17) = 8; /*0xfffda866*/
      goto LABEL_17; /*0xfffda86a*/
    }
    goto LABEL_16; /*0xfffda860*/
  }
  v6 = *(_BYTE *)(a2 + 17); /*0xfffda86c*/
  if ( v6 >= 5u ) /*0xfffda871*/
  {
    if ( v6 > 6u ) /*0xfffda87b*/
LABEL_16:
      *(_BYTE *)(a2 + 17) = 6; /*0xfffda87d*/
  }
  else
  {
    *(_BYTE *)(a2 + 17) = 5; /*0xfffda873*/
  }
LABEL_17:
  if ( !sub_FFFD9539(0x53D8u) ) /*0xfffda886*/
  {
    if ( v2 ) /*0xfffda893*/
    {
      if ( v2 == 1 ) /*0xfffda898*/
      {
        if ( *(_BYTE *)(a2 + 20) < 0x14u ) /*0xfffda8b1*/
          *(_BYTE *)(a2 + 20) = 20; /*0xfffda8b3*/
      }
      else if ( v2 <= 6u && *(_BYTE *)(a2 + 20) < 0x18u ) /*0xfffda8a5*/
      {
        *(_BYTE *)(a2 + 20) = 24; /*0xfffda8a7*/
      }
    }
    else if ( *(_BYTE *)(a2 + 20) < 0xFu ) /*0xfffda8bd*/
    {
      *(_BYTE *)(a2 + 20) = 15; /*0xfffda8bf*/
    }
  }
  v20 = sub_FFFD9D27((unsigned __int8)v19); /*0xfffda8ce*/
  v7 = sub_FFFD9D99((unsigned __int8)v19); /*0xfffda8d9*/
  v19 = sub_FFFDA08B(a1, 2, (unsigned __int8)v19); /*0xfffda8e8*/
  for ( i = 0; i < 9u; ++i ) /*0xfffda8eb*/
  {
    v8 = sub_FFFD9539((unsigned __int16)word_FFFDF8EC[i]); /*0xfffda8fe*/
    if ( v8 ) /*0xfffda907*/
    {
      *(_BYTE *)(i + a2 + 17) = v8 + byte_FFFDF8E0[i]; /*0xfffda911*/
      continue; /*0xfffda915*/
    }
    if ( v19 ) /*0xfffda91f*/
    {
      v9 = v19[i + 8]; /*0xfffda921*/
      if ( v9 != -1 ) /*0xfffda927*/
        goto LABEL_32; /*0xfffda927*/
    }
    if ( i < 4u ) /*0xfffda936*/
    {
      if ( v7 ) /*0xfffda93e*/
      {
        if ( v7 != 1 ) /*0xfffda943*/
        {
          if ( v7 != 2 ) /*0xfffda948*/
          {
            if ( v7 > 6u || a1[3756] <= 0xAu ) /*0xfffda963*/
              continue; /*0xfffda963*/
            if ( (unsigned __int16)v20 < 0x855u ) /*0xfffda96b*/
            {
              v9 = byte_FFFDF900[4 * v7 + i]; /*0xfffda970*/
LABEL_32:
              *(_BYTE *)(i + a2 + 17) = v9; /*0xfffda929*/
              continue; /*0xfffda92d*/
            }
            goto LABEL_48; /*0xfffda96b*/
          }
          if ( a1[3756] <= 0xCu ) /*0xfffda983*/
          {
            v10 = (unsigned __int16)v20 <= 0x578u; /*0xfffda985*/
            goto LABEL_47; /*0xfffda98b*/
          }
LABEL_48:
          v11 = byte_FFFDF900[4 * v7 + i]; /*0xfffda9b5*/
          v12 = (unsigned __int8 *)(i + a2 + 17); /*0xfffda9bf*/
          if ( *v12 < v11 ) /*0xfffda9c5*/
            *v12 = v11; /*0xfffda9c7*/
          continue; /*0xfffda9c9*/
        }
        if ( a1[3756] != 15 ) /*0xfffda997*/
          goto LABEL_48; /*0xfffda997*/
        v10 = (unsigned __int16)v20 <= 0x460u; /*0xfffda999*/
      }
      else
      {
        if ( a1[3756] != 20 ) /*0xfffda9ab*/
          goto LABEL_48; /*0xfffda9ab*/
        v10 = (unsigned __int16)v20 <= 0x348u; /*0xfffda9ad*/
      }
LABEL_47:
      if ( v10 ) /*0xfffda9b3*/
        continue; /*0xfffda9b3*/
      goto LABEL_48; /*0xfffda9b3*/
    }
    if ( i == 6 && (unsigned __int16)v20 >= 0x640u ) /*0xfffda9d7*/
      *(_BYTE *)(a2 + 23) = 6; /*0xfffda9d9*/
  }
  v13 = sub_FFFD9539((unsigned __int16)word_FFFDF8EC[i]); /*0xfffda9f9*/
  if ( v13 ) /*0xfffdaa02*/
  {
    v3 = v18[v13]; /*0xfffdaa07*/
    goto LABEL_56; /*0xfffdaa07*/
  }
  LOBYTE(v3) = (_BYTE)v19; /*0xfffdaa15*/
  if ( v19 ) /*0xfffdaa1a*/
  {
    LOBYTE(v3) = v19[i + 8]; /*0xfffdaa20*/
    if ( (_BYTE)v3 != 0xFF ) /*0xfffdaa26*/
    {
      v3 = (unsigned __int8)v3; /*0xfffdaa2c*/
LABEL_56:
      *(_WORD *)(a2 + 32) = v3; /*0xfffdaa0c*/
    }
  }
  return v3; /*0xfffdaab2*/
}

/* 0xfffdaab7 sub_FFFDAAB7 */
char __cdecl sub_FFFDAAB7(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  char *v9; // [esp+0h] [ebp-14h]
  unsigned __int16 v10; // [esp+4h] [ebp-10h]
  unsigned __int8 v11; // [esp+8h] [ebp-Ch]
  int i; // [esp+8h] [ebp-Ch]
  unsigned __int16 *v13; // [esp+Ch] [ebp-8h]
  _BYTE *v14; // [esp+10h] [ebp-4h]

  v11 = sub_FFFD9FFA((int)a1); /*0xfffdaac6*/
  LOBYTE(v3) = sub_FFFD9A84(); /*0xfffdaac9*/
  if ( !(_BYTE)v3 ) /*0xfffdaad0*/
  {
    v9 = sub_FFFDA08B(a1, 3, v11); /*0xfffdaaec*/
    v4 = (_DWORD *)(a2 + 543); /*0xfffdaaf5*/
    v14 = v9 + 8; /*0xfffdaafb*/
    v13 = (unsigned __int16 *)&unk_FFFDF94C; /*0xfffdaafe*/
    v5 = 0; /*0xfffdab05*/
    for ( i = 9; i; --i ) /*0xfffdab07*/
    {
      LOWORD(v3) = sub_FFFD9539(*v13); /*0xfffdab15*/
      v10 = v3; /*0xfffdab1e*/
      if ( (_WORD)v3 ) /*0xfffdab21*/
      {
        *a3 &= sub_FFFD9FD9(byte_FFFDF934[v5], byte_FFFDF940[v5]); /*0xfffdab3a*/
        v6 = v10; /*0xfffdab3c*/
        *a3 |= (v10 - 1) << byte_FFFDF934[v5]; /*0xfffdab4f*/
      }
      else
      {
        if ( !v9 ) /*0xfffdab57*/
          goto LABEL_9; /*0xfffdab57*/
        LOBYTE(v3) = (_BYTE)v14; /*0xfffdab59*/
        if ( *v14 == 0xFF ) /*0xfffdab5f*/
          goto LABEL_9; /*0xfffdab5f*/
        *a3 &= sub_FFFD9FD9(byte_FFFDF934[v5], byte_FFFDF940[v5]); /*0xfffdab78*/
        *a3 |= (unsigned __int8)*v14 << byte_FFFDF934[v5]; /*0xfffdab8c*/
        v6 = (unsigned __int8)*v14 + 1; /*0xfffdab91*/
      }
      v7 = v6 * (unsigned __int8)byte_FFFDF91C[v5]; /*0xfffdab99*/
      v3 = (unsigned __int8)byte_FFFDF928[v5]; /*0xfffdab9c*/
      *v4 = v3 + v7; /*0xfffdaba5*/
LABEL_9:
      ++v13; /*0xfffdaba7*/
      ++v5; /*0xfffdabab*/
      ++v14; /*0xfffdabac*/
      ++v4; /*0xfffdabaf*/
    }
  }
  return v3; /*0xfffdabbe*/
}

/* 0xfffdabc0 sub_FFFDABC0 */
char __cdecl sub_FFFDABC0(unsigned __int8 *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // eax
  char *v8; // [esp+0h] [ebp-14h]
  unsigned __int16 v9; // [esp+4h] [ebp-10h]
  unsigned __int8 v10; // [esp+8h] [ebp-Ch]
  int v11; // [esp+8h] [ebp-Ch]
  unsigned __int16 *v12; // [esp+Ch] [ebp-8h]
  _BYTE *v13; // [esp+10h] [ebp-4h]

  v10 = sub_FFFD9FFA((int)a1); /*0xfffdabcf*/
  LOBYTE(v3) = sub_FFFD9A84(); /*0xfffdabd2*/
  if ( (_BYTE)v3 ) /*0xfffdabd9*/
    return v3; /*0xfffdabd9*/
  v8 = sub_FFFDA08B(a1, 4, v10); /*0xfffdabf5*/
  v4 = (_DWORD *)(a2 + 579); /*0xfffdabfe*/
  v13 = v8 + 8; /*0xfffdac04*/
  v12 = (unsigned __int16 *)&unk_FFFDF970; /*0xfffdac07*/
  v5 = 0; /*0xfffdac0e*/
  v11 = 3; /*0xfffdac10*/
  do /*0xfffdacbe*/
  {
    v9 = sub_FFFD9539(*v12); /*0xfffdac27*/
    if ( v9 ) /*0xfffdac2a*/
    {
      *a3 &= sub_FFFD9FD9(byte_FFFDF968[v5], byte_FFFDF96C[v5]); /*0xfffdac43*/
      v6 = v9; /*0xfffdac45*/
      *a3 |= (v9 - 1) << byte_FFFDF968[v5]; /*0xfffdac58*/
LABEL_8:
      *v4 = (unsigned __int8)byte_FFFDF964[v5] + v6 * (unsigned __int8)byte_FFFDF960[v5]; /*0xfffdac9b*/
      goto LABEL_9; /*0xfffdacae*/
    }
    if ( v8 && *v13 != 0xFF ) /*0xfffdac68*/
    {
      *a3 &= sub_FFFD9FD9(byte_FFFDF968[v5], byte_FFFDF96C[v5]); /*0xfffdac81*/
      *a3 |= (unsigned __int8)*v13 << byte_FFFDF968[v5]; /*0xfffdac95*/
      v6 = (unsigned __int8)*v13 + 1; /*0xfffdac9a*/
      goto LABEL_8; /*0xfffdac9a*/
    }
LABEL_9:
    ++v12; /*0xfffdacb0*/
    ++v5; /*0xfffdacb4*/
    ++v13; /*0xfffdacb5*/
    ++v4; /*0xfffdacb8*/
    --v11; /*0xfffdacbb*/
  }
  while ( v11 ); /*0xfffdacbe*/
  LOWORD(v3) = sub_FFFD9539(0x53E0u); /*0xfffdacc9*/
  if ( (_WORD)v3 ) /*0xfffdacd4*/
  {
    v3 = (((unsigned __int16)v3 + 2) << 16) | *a3 & sub_FFFD9FD9(16, 5); /*0xfffdaceb*/
    *a3 = v3; /*0xfffdaced*/
  }
  return v3; /*0xfffdacf2*/
}

/* 0xfffdacf4 sub_FFFDACF4 */
char __cdecl sub_FFFDACF4(unsigned __int8 *a1)
{
  char *v1; // eax
  int v2; // edi
  unsigned int v3; // eax
  unsigned __int8 v4; // cl
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned __int8 v8; // [esp+4h] [ebp-18h]
  int v9; // [esp+4h] [ebp-18h]
  char *v10; // [esp+8h] [ebp-14h]
  unsigned __int8 v11; // [esp+Ch] [ebp-10h]
  char *v12; // [esp+10h] [ebp-Ch]
  int v13; // [esp+14h] [ebp-8h]
  int v14; // [esp+18h] [ebp-4h] BYREF

  v8 = sub_FFFD9FFA((int)a1); /*0xfffdad05*/
  LOBYTE(v1) = sub_FFFD9A84(); /*0xfffdad08*/
  if ( !(_BYTE)v1 ) /*0xfffdad0f*/
  {
    v13 = 0; /*0xfffdad20*/
    v10 = sub_FFFDA08B(a1, 5, v8); /*0xfffdad28*/
    v11 = 0; /*0xfffdad2b*/
    v1 = v10 + 9; /*0xfffdad2f*/
    do /*0xfffdaef0*/
    {
      v12 = v1; /*0xfffdad36*/
      v2 = 0; /*0xfffdad39*/
      v9 = 4; /*0xfffdad3b*/
      do /*0xfffdaedd*/
      {
        if ( !sub_FFFD9539(0x1786u) ) /*0xfffdad47*/
        {
          v14 = sub_FFFC4FE3( /*0xfffdad78*/
                  (int)a1,
                  a1[6997],
                  v11,
                  (int)&a1[2 * (unsigned __int16)word_FFFDF9D0[v2] + 2017 + (unsigned __int16)word_FFFDF9D0[v2]]);
          LOWORD(v3) = sub_FFFD9539((unsigned __int16)word_FFFDF9B8[4 * v13 + v2]); /*0xfffdad87*/
          if ( !(_WORD)v3 ) /*0xfffdad92*/
          {
            if ( v10 ) /*0xfffdad98*/
            {
              v4 = *(v12 - 1); /*0xfffdad9d*/
              if ( v4 != 0xFF ) /*0xfffdada3*/
                LOWORD(v3) = v4; /*0xfffdada5*/
            }
          }
          sub_FFFD9DD9(v3, 3u, (unsigned int *)&v14); /*0xfffdadb0*/
          sub_FFFC8367( /*0xfffdadd7*/
            (int)a1,
            a1[6997],
            v11,
            (int)&a1[2 * (unsigned __int16)word_FFFDF9D0[v2] + 2017 + (unsigned __int16)word_FFFDF9D0[v2]],
            v14,
            1u);
        }
        v14 = sub_FFFC4FE3( /*0xfffdae01*/
                (int)a1,
                a1[6997],
                v11,
                (int)&a1[2 * (unsigned __int16)word_FFFDF990[v2] + 2017 + (unsigned __int16)word_FFFDF990[v2]]);
        LOWORD(v5) = sub_FFFD9539((unsigned __int16)word_FFFDF978[4 * v13 + v2]); /*0xfffdae10*/
        if ( !(_WORD)v5 && v10 && *v12 != -1 ) /*0xfffdae2b*/
          LOWORD(v5) = (unsigned __int8)*v12; /*0xfffdae2d*/
        sub_FFFD9DD9(v5, 3u, (unsigned int *)&v14); /*0xfffdae38*/
        sub_FFFC8367( /*0xfffdae5f*/
          (int)a1,
          a1[6997],
          v11,
          (int)&a1[2 * (unsigned __int16)word_FFFDF990[v2] + 2017 + (unsigned __int16)word_FFFDF990[v2]],
          v14,
          1u);
        v14 = sub_FFFC4FE3( /*0xfffdae86*/
                (int)a1,
                a1[6997],
                v11,
                (int)&a1[2 * (unsigned __int16)word_FFFDF9B0[v2] + 2017 + (unsigned __int16)word_FFFDF9B0[v2]]);
        LOWORD(v6) = sub_FFFD9539((unsigned __int16)word_FFFDF998[4 * v13 + v2]); /*0xfffdae9e*/
        sub_FFFD9DD9(v6, 3u, (unsigned int *)&v14); /*0xfffdaea5*/
        sub_FFFC8367( /*0xfffdaecc*/
          (int)a1,
          a1[6997],
          v11,
          (int)&a1[2 * (unsigned __int16)word_FFFDF9B0[v2] + 2017 + (unsigned __int16)word_FFFDF9B0[v2]],
          v14,
          1u);
        v12 += 3; /*0xfffdaed1*/
        ++v2; /*0xfffdaed9*/
        --v9; /*0xfffdaeda*/
      }
      while ( v9 ); /*0xfffdaedd*/
      ++v11; /*0xfffdaee3*/
      ++v13; /*0xfffdaee6*/
      v1 = v12; /*0xfffdaeed*/
    }
    while ( v11 < 3u ); /*0xfffdaef0*/
  }
  return (char)v1; /*0xfffdaef8*/
}

/* 0xfffdaefb sub_FFFDAEFB */
char __cdecl sub_FFFDAEFB(unsigned __int8 *a1)
{
  char *v1; // eax
  unsigned __int16 *v2; // ecx
  unsigned __int16 *v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  char *v7; // [esp+4h] [ebp-1Ch]
  unsigned __int8 v8; // [esp+8h] [ebp-18h]
  int v9; // [esp+8h] [ebp-18h]
  int v10; // [esp+Ch] [ebp-14h]
  int v11; // [esp+10h] [ebp-10h] BYREF
  char *v12; // [esp+14h] [ebp-Ch]
  unsigned __int16 *v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v8 = sub_FFFD9FFA((int)a1); /*0xfffdaf0c*/
  LOBYTE(v1) = sub_FFFD9A84(); /*0xfffdaf0f*/
  if ( !(_BYTE)v1 ) /*0xfffdaf16*/
  {
    v7 = sub_FFFDA08B(a1, 5, v8); /*0xfffdaf2b*/
    LOBYTE(v14) = 0; /*0xfffdaf2e*/
    v2 = (unsigned __int16 *)&unk_FFFDF9D8; /*0xfffdaf32*/
    v1 = v7 + 10; /*0xfffdaf37*/
    do /*0xfffdaff7*/
    {
      v3 = (unsigned __int16 *)&unk_FFFDF9F0; /*0xfffdaf3b*/
      v13 = v2; /*0xfffdaf40*/
      v12 = v1; /*0xfffdaf43*/
      v9 = 4; /*0xfffdaf46*/
      do /*0xfffdafe4*/
      {
        LOWORD(v4) = sub_FFFD9539(*v13); /*0xfffdaf54*/
        v5 = v4; /*0xfffdaf5a*/
        if ( !(_WORD)v4 && v7 && *v12 != -1 ) /*0xfffdaf6e*/
          LOWORD(v5) = (unsigned __int8)*v12; /*0xfffdaf70*/
        v10 = 8; /*0xfffdaf74*/
        do /*0xfffdafd7*/
        {
          v11 = sub_FFFC4FE3((int)a1, a1[6997], v14, (int)&a1[2 * *v3 + 2017 + *v3]); /*0xfffdaf9b*/
          sub_FFFD9DD9(v5, 3u, (unsigned int *)&v11); /*0xfffdafa5*/
          sub_FFFC8367((int)a1, a1[6997], v14, (int)&a1[2 * *v3 + 2017 + *v3], v11, 1u); /*0xfffdafca*/
          ++v3; /*0xfffdafd3*/
          --v10; /*0xfffdafd4*/
        }
        while ( v10 ); /*0xfffdafd7*/
        ++v13; /*0xfffdafd9*/
        v12 += 3; /*0xfffdafdd*/
        --v9; /*0xfffdafe1*/
      }
      while ( v9 ); /*0xfffdafe4*/
      LOBYTE(v14) = v14 + 1; /*0xfffdafea*/
      v2 = v13; /*0xfffdaff1*/
      v1 = v12; /*0xfffdaff4*/
    }
    while ( (unsigned __int8)v14 < 3u ); /*0xfffdaff7*/
  }
  return (char)v1; /*0xfffdafff*/
}

/* 0xfffdb002 sub_FFFDB002 */
char __cdecl sub_FFFDB002(int a1)
{
  int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned __int8 v4; // al
  __int16 v5; // bx
  int v7; // [esp+0h] [ebp-14h]
  int v8; // [esp+4h] [ebp-10h] BYREF
  unsigned __int16 *v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  LOBYTE(v1) = sub_FFFD9A84(); /*0xfffdb008*/
  if ( !(_BYTE)v1 ) /*0xfffdb00f*/
  {
    v10 = 0; /*0xfffdb015*/
    LOBYTE(v11) = 4; /*0xfffdb01f*/
    v9 = (unsigned __int16 *)&unk_FFFDFA30; /*0xfffdb023*/
    v7 = 3; /*0xfffdb02a*/
    do /*0xfffdb0cf*/
    {
      v1 = sub_FFFC4EEF(a1, *(_BYTE *)(a1 + 6997), v11, 0, 0xD4u); /*0xfffdb046*/
      v8 = v1; /*0xfffdb050*/
      if ( v1 ) /*0xfffdb053*/
      {
        LOWORD(v2) = sub_FFFD9539(*v9); /*0xfffdb05c*/
        v3 = v2; /*0xfffdb062*/
        if ( !(_WORD)v2 ) /*0xfffdb067*/
        {
          v4 = sub_FFFD9FFA(a1); /*0xfffdb06a*/
          if ( sub_FFFD9D99(v4) == 2 && *(_BYTE *)(v10 + a1 + 5529) == 7 ) /*0xfffdb086*/
            v3 = 21; /*0xfffdb08a*/
        }
        sub_FFFD9DD9(v3, 1u, (unsigned int *)&v8); /*0xfffdb092*/
        v5 = v8; /*0xfffdb097*/
        sub_FFFC4FB2(a1, *(_BYTE *)(a1 + 6997), v11, 0, 0xD4u, v8); /*0xfffdb0ab*/
        LOBYTE(v1) = v10; /*0xfffdb0b0*/
        *(_WORD *)(v10 + a1 + 5525) = v5; /*0xfffdb0b6*/
      }
      LOBYTE(v11) = v11 + 1; /*0xfffdb0be*/
      ++v9; /*0xfffdb0c1*/
      v10 += 430; /*0xfffdb0c5*/
      --v7; /*0xfffdb0cc*/
    }
    while ( v7 ); /*0xfffdb0cf*/
  }
  return v1; /*0xfffdb0d8*/
}

/* 0xfffdb0da sub_FFFDB0DA */
char __cdecl sub_FFFDB0DA(unsigned __int8 *a1)
{
  __int16 v1; // ax
  __int16 *v2; // ebx
  char *v3; // eax
  __int16 *v4; // edi
  unsigned int v5; // eax
  unsigned __int8 v6; // bl
  __int16 v7; // ax
  char *v9; // [esp+4h] [ebp-14h]
  unsigned __int8 v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+8h] [ebp-10h]
  __int16 v12; // [esp+8h] [ebp-10h]
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  char *v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v10 = sub_FFFD9FFA((int)a1); /*0xfffdb0eb*/
  LOBYTE(v1) = sub_FFFD9A84(); /*0xfffdb0ee*/
  if ( !(_BYTE)v1 ) /*0xfffdb0f5*/
  {
    if ( sub_FFFD9539(0x1786u) == 1 ) /*0xfffdb10c*/
    {
      v9 = sub_FFFDA08B(a1, 5, v10); /*0xfffdb120*/
      LOBYTE(v15) = 0; /*0xfffdb123*/
      v2 = word_FFFDF9B8; /*0xfffdb127*/
      v3 = v9 + 8; /*0xfffdb12c*/
      do /*0xfffdb1d7*/
      {
        v4 = word_FFFDF9D0; /*0xfffdb12f*/
        v14 = v3; /*0xfffdb134*/
        v11 = 4; /*0xfffdb137*/
        do /*0xfffdb1c7*/
        {
          v13 = sub_FFFC4FE3((int)a1, a1[6997], v15, (int)&a1[2 * (unsigned __int16)*v4 + 2017 + (unsigned __int16)*v4]); /*0xfffdb15e*/
          LOWORD(v5) = sub_FFFD9539((unsigned __int16)*v2); /*0xfffdb167*/
          if ( !(_WORD)v5 && v9 && *v14 != -1 ) /*0xfffdb182*/
            LOWORD(v5) = (unsigned __int8)*v14; /*0xfffdb184*/
          sub_FFFD9DD9(v5, 3u, (unsigned int *)&v13); /*0xfffdb18f*/
          sub_FFFC8367( /*0xfffdb1b4*/
            (int)a1,
            a1[6997],
            v15,
            (int)&a1[2 * (unsigned __int16)*v4 + 2017 + (unsigned __int16)*v4],
            v13,
            1u);
          v14 += 3; /*0xfffdb1b9*/
          ++v2; /*0xfffdb1c1*/
          ++v4; /*0xfffdb1c3*/
          --v11; /*0xfffdb1c4*/
        }
        while ( v11 ); /*0xfffdb1c7*/
        LOBYTE(v15) = v15 + 1; /*0xfffdb1cd*/
        v3 = v14; /*0xfffdb1d4*/
      }
      while ( (unsigned __int8)v15 < 3u ); /*0xfffdb1d7*/
    }
    v1 = sub_FFFD9539(0x272Eu); /*0xfffdb1e2*/
    v12 = v1; /*0xfffdb1eb*/
    if ( v1 ) /*0xfffdb1ee*/
    {
      v6 = 4; /*0xfffdb1f0*/
      v13 = 3; /*0xfffdb1f4*/
      while ( 1 ) /*0xfffdb20e*/
      {
        v1 = sub_FFFC4EC2((int)a1, a1[6997], v6, 0, 0xB8u); /*0xfffdb20e*/
        if ( v12 == 1 ) /*0xfffdb21b*/
          break; /*0xfffdb21b*/
        if ( v12 == 2 ) /*0xfffdb229*/
        {
          v7 = v1 | 0x800; /*0xfffdb22b*/
          goto LABEL_17; /*0xfffdb22b*/
        }
LABEL_18:
        ++v6; /*0xfffdb246*/
        if ( !--v13 ) /*0xfffdb24b*/
          return v1; /*0xfffdb24b*/
      }
      v7 = v1 & 0xF7FF; /*0xfffdb21d*/
LABEL_17:
      LOBYTE(v1) = sub_FFFC4F7F((int)a1, a1[6997], v6, 0, 0xB8u, v7); /*0xfffdb230*/
      goto LABEL_18; /*0xfffdb23e*/
    }
  }
  return v1; /*0xfffdb24f*/
}

/* 0xfffdb252 sub_FFFDB252 */
unsigned __int8 __cdecl sub_FFFDB252(unsigned __int8 *a1)
{
  unsigned __int8 result; // al
  int v2; // eax

  sub_FFFC4F4E((int)a1, a1[6997], 0, 0, 0x90u, 2); /*0xfffdb26c*/
  result = sub_FFFD9A84(); /*0xfffdb274*/
  if ( !result ) /*0xfffdb27b*/
  {
    a1[3757] = sub_FFFD9FFA((int)a1); /*0xfffdb284*/
    result = sub_FFFD9FFA((int)a1); /*0xfffdb28a*/
    a1[3732] = result; /*0xfffdb291*/
  }
  if ( a1[1] != 1 ) /*0xfffdb29b*/
  {
    v2 = sub_FFFDA06B(a1); /*0xfffdb29e*/
    LOWORD(v2) = (unsigned __int8)v2; /*0xfffdb2a3*/
    return sub_FFFD95D9(0x371Du, v2); /*0xfffdb2ad*/
  }
  return result; /*0xfffdb2b5*/
}
