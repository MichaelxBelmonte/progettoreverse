// Function: FUN_01df5490
// Address: 01df5490
// Size: 2224 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_01df5490(uint64_t param_1,char param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  uint32_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  undefined7 uVar13;
  int64_t *plVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int64_t *this_ptr;
  int64_t lVar17;
  int64_t *local_78;
  uint32_t local_64;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar17 = g_027f2e80;
  if (g_027f2e80 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*local_40 + 0x50))();
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    (**(code **)(*this_ptr + 0x510))();
LAB_01df5681:
    uVar10 = FUN_01d827c0();
    return uVar10;
  }
  FUN_01cae990();
  lVar17 = g_027ef978;
  if (g_027ef978 != 0) {
    FUN_00d50b00();
  }
  cVar8 = (**(code **)(*local_40 + 0x50))();
  cVar9 = '\x01';
  if (cVar8 == '\0') {
    FUN_01cae990();
    lVar2 = g_02725a10;
    if (g_02725a10 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)(*local_58 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar17 = g_027edfd0;
  if (cVar9 == '\0') goto LAB_01df5681;
  if (g_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  local_78 = local_40;
  plVar12 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar5 = true;
    local_78 = (int64_t *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar5 = false;
  }
  else {
    local_38 = '\0';
    bVar5 = false;
  }
  if (lVar17 != 0) {
    FUN_00d50b20();
  }
  if (local_78 == (int64_t *)0x0) {
    return 0;
  }
  cVar8 = FUN_01d259f0();
  if (cVar8 == '\0') {
    local_64 = 0;
    goto LAB_01df5d2f;
  }
  FUN_01ccad60();
  if (local_40 == (int64_t *)0x0) {
    plVar14 = (int64_t *)0x0;
LAB_01df5779:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar14 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_01df5779;
    }
  }
  FUN_01ed7190();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_019ba260();
  if (local_40 == (int64_t *)0x0) {
    bVar7 = true;
    plVar15 = (int64_t *)0x0;
  }
  else {
    plVar15 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar7 = false;
    }
    else {
      local_38 = '\0';
      bVar7 = false;
    }
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar15 == (int64_t *)0x0) {
    local_64 = 0;
  }
  else {
    iVar1 = *(int *)((int64_t)plVar15 + 0xc);
    uVar13 = (undefined7)((uint64_t)plVar12 >> 8);
    local_64 = (uint32_t)CONCAT71(uVar13,iVar1 != 0);
    if (((iVar1 != 0) && (param_2 != '\0')) &&
       (local_64 = (uint32_t)CONCAT71(uVar13,1), 0 < iVar1)) {
      lVar17 = 0;
      bVar3 = false;
      bVar6 = false;
      local_48 = 0;
      plVar12 = (int64_t *)0x0;
      do {
        lVar2 = *(int64_t *)(plVar15[2] + lVar17 * 8);
        if (local_48 == lVar2) {
          lVar11 = local_48;
          bVar4 = bVar6;
          if ((!bVar6) && (lVar2 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar11 = lVar2;
          if ((bVar6) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar4;
        FUN_01edb1d0();
        if (local_40 == plVar12) {
          plVar16 = plVar12;
          bVar4 = bVar3;
          if ((!bVar3) && (local_40 != (int64_t *)0x0)) {
            if (local_38 != '\0') goto LAB_01df59a1;
            FUN_00d50b00();
            bVar4 = true;
          }
LAB_01df5a00:
          bVar3 = bVar4;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar16 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar4 = true;
            if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01df5a00;
          }
          if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01df59a1:
          local_38 = '\0';
          bVar3 = true;
        }
        lVar2 = g_027edfd0;
        if (plVar16 == (int64_t *)0x0) {
          FUN_002edd50();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01d2db80();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_027edfd0 != 0) {
            FUN_00d50b00();
          }
          FUN_01ccab60();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d4efa0();
          FUN_00c84370();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            (**(code **)(*plVar16 + 200))();
            FUN_00d50b20();
          }
        }
        lVar17 = lVar17 + 1;
        plVar12 = plVar16;
        local_48 = lVar11;
      } while (lVar17 < *(int *)((int64_t)plVar15 + 0xc));
      if ((bVar3) && (plVar16 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar6) && (lVar11 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_40 != (int64_t *)0x0) && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar7 && plVar15 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01df5d2f:
  if (bVar5) {
    return local_64;
  }
  FUN_00d50b20();
  return local_64;
}

