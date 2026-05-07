// Function: FUN_006d8d80
// Address: 006d8d80
// Size: 1478 bytes
// Class: MULSSGenerator

uint64_t FUN_006d8d80(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  float fVar13;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  float local_b4;
  int64_t local_b0;
  char local_a8 [8];
  int64_t local_a0;
  uint64_t local_98;
  uint32_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  float local_64;
  uint local_60;
  float local_5c;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  local_60 = FUN_01caecd0();
  if (local_60 == 1) {
    uVar11 = FUN_006cb500();
    lVar7 = local_b0;
    lVar1 = g_02726d08;
    if (local_a8[0] == '\0') {
      if (local_b0 != 0) {
        uVar11 = FUN_00d50b00();
        lVar1 = g_02726d08;
      }
    }
    else {
      local_a8[0] = '\0';
    }
    g_02726d08 = lVar1;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_120 = 1;
    local_128 = lVar1;
    FUN_006d9620(uVar11,&local_128);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ca1380();
  lVar1 = local_b0;
  local_38[0] = local_a8[0];
  pcVar2 = local_a8;
  if (local_a8[0] == '\0') {
    pcVar2 = local_38;
  }
  *pcVar2 = '\0';
  if ((local_a8[0] != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = 0;
  if ((local_38[0] == '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_00e986f0();
  local_5c = (float)FUN_00e991a0();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)FUN_01caeac0();
  fVar9 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x130) + 0xac0))();
  local_b4 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x130) + 0xad0))();
  FUN_006cb500();
  lVar1 = local_b0;
  if (local_a8[0] == '\0') {
    if (local_b0 == 0) goto LAB_006d933d;
    FUN_00d50b00();
  }
  else if (local_b0 == 0) goto LAB_006d933d;
  local_a8[0] = '\0';
  local_b0 = 0;
  local_a0 = lVar1;
  local_90 = 0;
  local_98 = 0;
  if (0 < *(int *)(lVar1 + 0xc)) {
    fVar8 = fVar8 / local_5c;
    auVar12 = ZEXT416((uint)fVar8);
    lVar7 = 0;
    do {
      lVar5 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      local_f0 = '\0';
      local_f8 = lVar5;
      local_b0 = lVar5;
      FUN_00c9fe40(auVar12._0_8_,&local_f8);
      local_38[0] = local_40[0];
      pcVar2 = local_38;
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = pcVar2;
      }
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pVar6 = (void*)pcVar2;
      if ((local_38[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
LAB_006d90e0:
        fVar10 = (float)FUN_01caeac0();
      }
      else {
        if ((local_5c == g_0239424c) && (!NAN(local_5c) && !NAN(g_0239424c))) goto LAB_006d90e0;
        if (*(char *)(this_ptr + 0x1c0) == '\0') {
          fVar10 = (float)FUN_00d459e0();
        }
        else {
          fVar10 = (float)FUN_00d459e0();
        }
        fVar10 = fVar10 * fVar8;
      }
      fVar13 = fVar9;
      if (fVar9 <= fVar10) {
        fVar13 = fVar10;
      }
      fVar10 = (float)(~-(uint)NAN(fVar10) & (uint)fVar13 | -(uint)NAN(fVar10) & (uint)fVar9);
      local_64 = local_b4;
      if (fVar10 <= local_b4) {
        local_64 = fVar10;
      }
      if (local_60 < 2) {
        local_e0 = '\0';
        local_e8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar5 = FUN_00e8b990();
        local_80 = 0;
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_80 = '\x01';
        local_88 = lVar5;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb;
        if ((local_80 != '\0') && (local_88 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_00;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_01;
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_02;
        }
      }
      else {
        local_d0 = '\0';
        local_d8 = lVar5;
        FUN_004f9670();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c0 = '\0';
        local_c8 = 0;
        auVar12._0_8_ = FUN_004fac10();
        auVar12._8_8_ = extraout_XMM0_Qb_03;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_04;
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_05;
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          auVar12._0_8_ = FUN_00d50b20();
          auVar12._8_8_ = extraout_XMM0_Qb_06;
        }
      }
      if (local_48 != 0) {
        auVar12._0_8_ = FUN_00d50b20();
        auVar12._8_8_ = extraout_XMM0_Qb_07;
      }
      lVar7 = lVar7 + 1;
      local_98 = CONCAT44(local_98._4_4_,(int)lVar7);
    } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_006d933d:
  if (local_60 == 3) {
    FUN_00ca1340();
  }
  return 1;
}

