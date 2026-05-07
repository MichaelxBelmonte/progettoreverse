// Function: FUN_00de5030
// Address: 00de5030
// Size: 568 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00de5030(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  void*puVar8;
  __darwin_ct_rune_t _Var9;
  uint uVar10;
  char *pcVar12;
  int64_t arg1;
  void*this_ptr;
  int iVar13;
  int iVar14;
  int64_t local_60;
  char local_58;
  void*puVar11;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar11 = &g_025683c0;
  *puVar8 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00de4120();
  iVar14 = 0;
  do {
    FUN_00de4720();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_00de521f;
      FUN_00d50b00();
    }
    else if (local_60 == 0) {
LAB_00de521f:
      sVar5 = FUN_00d8cbc0();
      if (sVar5 == 0x3e) {
        *(int *)(arg1 + 0x18) = *(int *)(arg1 + 0x18) + 1;
        *this_ptr = puVar8;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      break;
    }
    uVar6 = FUN_00d8c7a0();
    iVar13 = iVar14;
    if ((uVar6 & 1) == 0) {
      iVar13 = (int)uVar6 / 2 + iVar14;
      FUN_00c8e340();
      if (0 < (int)uVar6) {
        pcVar12 = (char *)((int64_t)iVar14 + puVar8[2]);
        iVar14 = 0;
        do {
          _Var9 = (__darwin_ct_rune_t)puVar11;
          bVar2 = FUN_00d8ca70();
          if ((PTR___DefaultRuneLocale_0249c238[(uint64_t)bVar2 * 4 + 0x3d] & 4) == 0) {
            uVar7 = ___tolower(_Var9);
            cVar3 = -1;
            if ((uVar7 & 0xff) - 0x61 < 6) {
              cVar3 = (char)uVar7 + -0x57;
            }
          }
          else {
            cVar3 = bVar2 - 0x30;
          }
          bVar2 = FUN_00d8ca70();
          if ((PTR___DefaultRuneLocale_0249c238[(uint64_t)bVar2 * 4 + 0x3d] & 4) == 0) {
            uVar7 = ___tolower((__darwin_ct_rune_t)PTR___DefaultRuneLocale_0249c238);
            uVar10 = (uVar7 & 0xff) - 0x61;
            puVar11 = (void*)(uint64_t)uVar10;
            if (5 < uVar10) goto LAB_00de51ed;
            cVar4 = (char)uVar7 + -0x57;
          }
          else {
            cVar4 = bVar2 - 0x30;
            puVar11 = PTR___DefaultRuneLocale_0249c238;
          }
          if ((cVar3 == -1) || (cVar4 == -1)) goto LAB_00de51ed;
          *pcVar12 = cVar4 + cVar3 * '\x10';
          pcVar12 = pcVar12 + 1;
          iVar14 = iVar14 + 2;
        } while (iVar14 < (int)uVar6);
      }
      bVar1 = true;
      FUN_00de4120();
    }
    else {
LAB_00de51ed:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      bVar1 = false;
    }
    FUN_00d50b20();
    iVar14 = iVar13;
  } while (bVar1);
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

