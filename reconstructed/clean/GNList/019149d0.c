// Function: FUN_019149d0
// Address: 019149d0
// Size: 2325 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_019149d0(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  void* pVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int iVar13;
  char *pcVar14;
  undefined7 uVar16;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar17;
  int iVar18;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x50) + 0xc) == 0) {
    return;
  }
  FUN_017e1dd0();
  lVar2 = local_68;
  pcVar14 = local_38;
  if (local_60[0] != '\0') {
    pcVar14 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar14 = '\0';
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  iVar13 = *(int *)(lVar2 + 0x80) % *(int *)(*(int64_t *)(this_ptr + 0x50) + 0xc);
  lVar6 = *(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10);
  lVar12 = *(int64_t *)(lVar6 + (int64_t)iVar13 * 8);
  local_70 = lVar2;
  if (lVar12 != 0) {
    FUN_00d50b00();
  }
  pVar10 = (void*)lVar6;
  local_78 = lVar12;
  FUN_017e1bc0();
  lVar2 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
     (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1bf0();
  lVar6 = local_68;
  if (((local_60[0] == '\0') && (local_68 != 0)) &&
     ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != 0)))) {
    FUN_00d50b20();
  }
  lVar12 = local_78;
  local_40 = CONCAT44(local_40._4_4_,iVar13);
  local_88 = lVar6;
  pvVar5 = _pthread_getspecific(pVar10);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    uVar7 = (uint64_t)*(uint *)(lVar12 + 0x3c);
    if (uVar7 < 5) goto LAB_01914b40;
LAB_01914d8b:
    uVar15 = 0;
    lVar6 = 0;
  }
  else {
    uVar7 = (uint64_t)
            *(uint *)(*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x3c);
    if (4 < uVar7) goto LAB_01914d8b;
LAB_01914b40:
    pVar10 = 0x1915800;
    uVar16 = (undefined7)((uint64_t)lVar12 >> 8);
    switch((int64_t)&switchD_01914b4e::switchdataD_01915800 +
           (int64_t)(int)(&switchD_01914b4e::switchdataD_01915800)[uVar7]) {
    case 0x1914b50:
      iVar13 = FUN_01715480();
      iVar13 = iVar13 * 7;
      iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc;
      cVar3 = ((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 + '\x06';
      uVar9 = cVar3 * 0x2b;
      pVar10 = (void*)
               (char)(cVar3 + ((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * -0xc + -6);
      FUN_01716350();
      lVar6 = local_68;
      if (local_68 == 0) {
LAB_01914d68:
        lVar6 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = CONCAT71(uVar16,1);
        if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      break;
    case 0x1914c06:
      iVar13 = FUN_01715480();
      iVar13 = iVar13 * 7;
      iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc;
      cVar3 = ((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 + '\x06';
      uVar9 = cVar3 * 0x2b;
      pVar10 = (void*)
               (char)(cVar3 + ((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * -0xc + -6);
      FUN_01716350();
      lVar6 = local_68;
      if (local_68 == 0) goto LAB_01914d68;
      uVar15 = CONCAT71(uVar16,1);
      if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x1914cb9:
      iVar13 = FUN_017154c0();
      iVar13 = iVar13 * 7;
      iVar13 = iVar13 + (((uint)(iVar13 / 6 + (iVar13 >> 0x1f)) >> 1) - (iVar13 >> 0x1f)) * -0xc;
      cVar3 = ((byte)(iVar13 >> 0x1f) & 0xc) + (char)iVar13 + '\x06';
      uVar9 = cVar3 * 0x2b;
      pVar10 = (void*)
               (char)(cVar3 + ((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * -0xc + -6);
      FUN_01716350();
      lVar6 = local_68;
      if (local_68 == 0) goto LAB_01914d68;
      uVar15 = CONCAT71(uVar16,1);
      if (((local_60[0] == '\0') && (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x1914d72:
      if (local_88 == 0) goto LAB_01914d8b;
      FUN_00d50b00();
      uVar15 = CONCAT71(uVar16,1);
      lVar6 = local_88;
      break;
    case 0x1914d95:
      pvVar5 = _pthread_getspecific(0x1915800);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e1bf0();
      local_b0 = 0;
      if (local_d8 == '\0') {
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d8 = '\0';
      }
      local_b0 = '\x01';
      local_b8 = local_e0;
      FUN_017e1bc0();
      local_a0 = 0;
      if (local_c8 == '\0') {
        if (local_d0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_c8 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = local_d0;
      uVar4 = FUN_017e1d20();
      plVar11 = &local_a8;
      FUN_017e22f0(plVar11,&local_b8,uVar4);
      lVar6 = local_68;
      pVar10 = (void*)plVar11;
      if (local_68 == 0) {
        lVar6 = 0;
        uVar15 = 0;
      }
      else {
        uVar16 = (undefined7)((uint64_t)local_d0 >> 8);
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          uVar15 = CONCAT71(uVar16,1);
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          uVar15 = CONCAT71(uVar16,1);
        }
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_80 = uVar15;
  FUN_017e1d40();
  local_98 = local_68;
  local_90 = 0;
  if (local_60[0] == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60[0] = '\0';
  }
  lVar12 = local_78;
  local_90 = '\x01';
  iVar13 = FUN_01815fa0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar10);
  if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
    cVar3 = *(char *)(lVar12 + 0x3a);
    lVar12 = local_78;
  }
  else {
    cVar3 = *(char *)(*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) +
                     0x3a);
    lVar12 = local_78;
  }
  uVar9 = 0xffffffff;
  local_78 = lVar12;
  if (cVar3 == '\0') {
    pvVar5 = _pthread_getspecific(pVar10);
    if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar12 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    uVar9 = (uint)*(byte *)(lVar12 + 0x38);
    if (*(byte *)(lVar12 + 0x38) == 0) goto LAB_01915295;
  }
  uVar17 = 0;
  if (*(char *)(local_70 + 0x84) != '\0') {
    uVar17 = uVar9;
  }
  if ((int)local_40 == 0) {
    uVar17 = 0;
  }
  lVar12 = *arg1;
  iVar18 = uVar17 + *(int *)(lVar12 + 0x84);
  if ((*(char *)(local_70 + 0x84) != '\0') || (*(int *)(local_70 + 0x80) == 0)) {
    while( true ) {
      pvVar5 = _pthread_getspecific((void*)lVar12);
      if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        iVar1 = *(int *)(local_78 + 0x3c);
      }
      else {
        iVar1 = *(int *)(*(int64_t *)
                          (local_78 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x3c);
        lVar12 = local_78;
      }
      if ((iVar1 == 5) || (cVar3 = FUN_01716980(), cVar3 != '\0')) break;
      iVar18 = iVar18 + uVar9;
    }
  }
  if (iVar18 != iVar13) {
    FUN_017e1d40();
    lVar12 = local_68;
    if (local_60[0] == '\0') {
      if (local_68 == 0) goto LAB_01915295;
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_68 == 0) goto LAB_01915295;
    local_60[0] = '\0';
    local_68 = 0;
    local_58 = lVar12;
    local_48 = 0;
    local_50 = 0;
    local_40 = lVar6;
    if (0 < *(int *)(lVar12 + 0xc)) {
      lVar6 = 0;
      do {
        local_68 = *(int64_t *)(*(int64_t *)(lVar12 + 0x10) + lVar6 * 8);
        FUN_017e4480();
        FUN_017e4370();
        if (*(char *)(this_ptr + 0x38) != '\0') {
          FUN_017e4290();
          FUN_017e4290();
          FUN_017e4290();
        }
        lVar6 = lVar6 + 1;
        local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
      } while ((int)lVar6 < *(int *)(lVar12 + 0xc));
    }
    FUN_01916320();
    FUN_00d50b20();
    lVar6 = local_40;
  }
LAB_01915295:
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  lVar12 = local_70;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}

