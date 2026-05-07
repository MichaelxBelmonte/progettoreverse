// Function: FUN_00aeabf0
// Address: 00aeabf0
// Size: 1342 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aeabf0(void *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  uint uVar12;
  void*puVar13;
  void *pvVar14;
  int64_t lVar15;
  int64_t this_ptr;
  uint64_t uVar16;
  int iVar17;
  uint32_t uVar18;
  int64_t local_40;
  char local_38;
  
  lVar15 = g_02764880;
  if ((*(int64_t *)(this_ptr + 0xb0) == 0) || (*(int64_t *)(this_ptr + 0xb8) == 0)) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  puVar13 = operator_new((ulong)param_1);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  *(void**)(this_ptr + 0x38) = puVar13;
  pvVar14 = operator_new((ulong)param_1);
  uVar18 = FUN_00c66860();
  *(void **)(this_ptr + 0x30) = pvVar14;
  iVar11 = FUN_00c668e0(uVar18,*(void*)(*(int64_t *)(this_ptr + 0xb0) + 0x18));
  if (iVar11 != 0) {
    if (*(int64_t *)(this_ptr + 0x30) != 0) {
      FUN_00c66880();
      operator_delete(param_1);
    }
    *(void*)(this_ptr + 0x30) = 0;
    lVar15 = g_02764880;
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    *(void*)(this_ptr + 0xb0) = 0;
    FUN_00d50b20();
  }
  uVar12 = *(int *)(this_ptr + 0x6c) - 1;
  if (uVar12 < 4) {
    *(void*)(this_ptr + 0x50) = *(void*)(&g_023d51a0 + (int64_t)(int)uVar12 * 4);
  }
  else {
    *(void*)(this_ptr + 0x50) = 0;
    lVar15 = g_02764880;
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  lVar15 = g_02764880;
  if (1 < (byte)(*(char *)(*(int64_t *)(this_ptr + 0x30) + 9) - 1U)) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  iVar11 = *(int *)(this_ptr + 0x50);
  iVar17 = *(int *)(this_ptr + 0x68);
  iVar9 = *(int *)(this_ptr + 0x54);
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  lVar15 = *(int64_t *)(this_ptr + 0x88);
  if (lVar15 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x88) = local_40;
    if (lVar15 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar18 = FUN_00c92170();
  lVar15 = *(int64_t *)(this_ptr + 0x90);
  if (lVar15 == local_40) {
    if (local_40 != 0) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x90) = local_40;
    if (lVar15 != 0) {
      uVar18 = FUN_00d50b20();
    }
  }
  FUN_00c66620(uVar18,iVar17 * iVar9 * (iVar11 + 4U >> 3) + 8);
  lVar15 = *(int64_t *)(*(int64_t *)(this_ptr + 0xb8) + 0x10);
  bVar1 = *(byte *)(lVar15 + 8);
  bVar2 = *(byte *)(lVar15 + 9);
  bVar3 = *(byte *)(lVar15 + 10);
  bVar4 = *(byte *)(lVar15 + 0xb);
  bVar5 = *(byte *)(lVar15 + 0xc);
  bVar6 = *(byte *)(lVar15 + 0xd);
  bVar7 = *(byte *)(lVar15 + 0xe);
  bVar8 = *(byte *)(lVar15 + 0xf);
  iVar11 = *(int *)(*(int64_t *)(this_ptr + 0xb8) + 0x18);
  if (0x18 < iVar11) {
    uVar12 = 0x18;
    while( true ) {
      lVar10 = g_02764880;
      uVar16 = (uint64_t)uVar12;
      iVar17 = 1;
      if ((((((*(char *)(lVar15 + uVar16) < '\0') && ((int)(uVar16 + 1) < iVar11)) &&
            (iVar17 = 2, *(char *)(lVar15 + uVar16 + 1) < '\0')) &&
           (((int)(uVar16 + 2) < iVar11 && (iVar17 = 3, *(char *)(lVar15 + uVar16 + 2) < '\0')))) &&
          (((int)(uVar16 + 3) < iVar11 &&
           ((iVar17 = 4, *(char *)(lVar15 + uVar16 + 3) < '\0' && ((int)(uVar16 + 4) < iVar11))))))
         && ((iVar17 = 5, *(char *)(lVar15 + uVar16 + 4) < '\0' && ((int)(uVar12 + 5) < iVar11)))) {
        if (g_02764880 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        iVar17 = 6;
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      uVar12 = uVar12 + iVar17;
      FUN_00b757a0();
      iVar11 = *(int *)(*(int64_t *)(this_ptr + 0xb8) + 0x18);
      if (iVar11 <= (int)uVar12) break;
      lVar15 = *(int64_t *)(*(int64_t *)(this_ptr + 0xb8) + 0x10);
    }
  }
  *(void*)(this_ptr + 0xb8) = 0;
  FUN_00d50b20();
  *(void*)(this_ptr + 0x78) = 0xffffffffffffffff;
  *(uint64_t *)(this_ptr + 0x40) =
       ((uint64_t)bVar6 << 8 |
        (((uint64_t)bVar4 << 8 |
         (uint64_t)((uint)bVar3 | (uint)bVar2 << 8 | (uint)bVar1 << 0x10) << 0x10) +
        (uint64_t)bVar5) * 0x10000 | (uint64_t)bVar7) << 8 | (uint64_t)bVar8;
  return;
}

