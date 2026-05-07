// Function: FUN_01b65f90
// Address: 01b65f90
// Size: 1774 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01b65f90(void)

{
  int iVar1;
  bool bVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  void*arg1;
  int64_t this_ptr;
  int iVar9;
  bool bVar11;
  float fVar12;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  uint32_t uVar18;
  uint8_t local_b8 [16];
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t uVar10;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_01d4ab40();
  FUN_01d4ab50();
  FUN_01d48370();
  plVar8 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x390))();
  FUN_01cfb920();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbc00();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01d488d0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x3b0))();
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  fVar15 = 0.0;
  fVar17 = 0.0;
  uVar18 = 0;
  FUN_01cfbee0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  FUN_01e3f820();
  if (*(int64_t *)(this_ptr + 0x138) == 0) {
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    fVar15 = fVar15 + g_02390d00;
    fVar12 = fVar17 + g_02390d00;
    bVar2 = false;
    plVar7 = (int64_t *)0x0;
    uVar10 = 0;
    do {
      iVar9 = (int)uVar10;
      if (iVar9 == 2) {
        plVar8 = *(int64_t **)(this_ptr + 0x158);
        if (plVar8 == plVar7) {
          if ((!bVar2) && (plVar8 != (int64_t *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
          goto LAB_01b66460;
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar11 = true;
        if (bVar2) {
          if (plVar7 == (int64_t *)0x0) goto LAB_01b663ef;
          FUN_00d50b20();
          plVar7 = plVar8;
          bVar2 = bVar11;
          goto LAB_01b66460;
        }
        if ((int64_t)*(int *)(this_ptr + 0x140) <= (int64_t)uVar10) goto LAB_01b66470;
LAB_01b66480:
        lVar5 = *(int64_t *)(puVar3[2] + uVar10 * 8);
        bVar2 = bVar11;
        if ((*(float *)(lVar5 + 0x1c) != g_0239011c) ||
           (NAN(*(float *)(lVar5 + 0x1c)) || NAN(g_0239011c))) {
          *(void*)(lVar5 + 0x1c) = 0x3f000000;
          *(void*)(lVar5 + 0xf) = 0x80;
        }
      }
      else {
        if (iVar9 == 1) {
          plVar8 = *(int64_t **)(this_ptr + 0x150);
          if (plVar8 == plVar7) {
            if ((!bVar2) && (plVar7 != (int64_t *)0x0)) {
              FUN_00d50b00();
              bVar2 = true;
            }
            goto LAB_01b66460;
          }
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar7 = plVar8;
            bVar2 = true;
            goto LAB_01b66460;
          }
LAB_01b663ef:
          iVar1 = *(int *)(this_ptr + 0x140);
          bVar11 = true;
        }
        else {
          if (iVar9 == 0) {
            plVar8 = *(int64_t **)(this_ptr + 0x148);
            if (plVar8 == plVar7) {
              if ((!bVar2) && (plVar7 != (int64_t *)0x0)) {
                FUN_00d50b00();
                bVar2 = true;
              }
            }
            else {
              if (plVar8 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((!bVar2) || (plVar7 == (int64_t *)0x0)) goto LAB_01b663ef;
              FUN_00d50b20();
              plVar7 = plVar8;
              bVar2 = true;
            }
          }
LAB_01b66460:
          iVar1 = *(int *)(this_ptr + 0x140);
          plVar8 = plVar7;
          bVar11 = bVar2;
        }
        if ((int64_t)uVar10 < (int64_t)iVar1) goto LAB_01b66480;
LAB_01b66470:
        if ((int64_t)*(int *)(this_ptr + 0x144) < (int64_t)uVar10) goto LAB_01b66480;
        lVar5 = *(int64_t *)(puVar3[2] + uVar10 * 8);
        bVar2 = bVar11;
        if ((*(float *)(lVar5 + 0x1c) != g_02390124) ||
           (NAN(*(float *)(lVar5 + 0x1c)) || NAN(g_02390124))) {
          *(void*)(lVar5 + 0x1c) = 0x3f800000;
          *(void*)(lVar5 + 0xf) = 0xff;
        }
      }
      lVar5 = *(int64_t *)(puVar3[2] + uVar10 * 8);
      puVar6 = puVar3;
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      fVar16 = (float)iVar9 + (float)iVar9;
      local_b8 = ZEXT416((uint)fVar16);
      while (fVar16 < fVar15) {
        pvVar4 = _pthread_getspecific((void*)puVar6);
        plVar7 = plVar8;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          plVar7 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        auVar13._4_12_ = local_b8._4_12_;
        auVar13._0_4_ = local_b8._0_4_ / fVar15;
        fVar16 = (float)(**(code **)(*plVar7 + 0x390))(auVar13._0_8_);
        auVar14._4_4_ = fVar17;
        auVar14._0_4_ = fVar12 - fVar16 * fVar12;
        auVar14._8_4_ = uVar18;
        auVar14._12_4_ = uVar18;
        auVar14 = insertps(local_b8,auVar14,0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar14._0_8_,g_02390d34);
        fVar16 = local_b8._0_4_ + g_02390d30;
        local_b8._4_4_ = 0;
        local_b8._0_4_ = fVar16;
      }
    } while ((*(int64_t *)(this_ptr + 0x138) != 0) &&
            (bVar11 = uVar10 < 2, plVar7 = plVar8, uVar10 = uVar10 + 1, bVar11));
  }
  FUN_01d48390();
  FUN_01d4ab50();
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

