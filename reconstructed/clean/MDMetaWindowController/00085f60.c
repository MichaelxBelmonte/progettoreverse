// Function: FUN_00085f60
// Address: 00085f60
// Size: 1225 bytes
// Class: MDMetaWindowController

void FUN_00085f60(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t *plVar4;
  int64_t *plVar5;
  uint8_t uVar6;
  byte bVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t this_ptr;
  byte bVar10;
  uint64_t uVar11;
  double dVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_XMM1_Dc;
  float fVar22;
  float fVar23;
  float in_XMM1_Dd;
  float fVar24;
  float fVar25;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar9 = g_026d85b0;
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  fVar16 = (float)param_2;
  if (g_026d85b0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_50 = lVar9;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar4;
    uVar6 = FUN_00c70bc0();
    local_68._0_1_ = uVar6;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  lVar9 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  uVar8 = (uint64_t)(dVar12 * g_023907c0);
  dVar12 = dVar12 * g_023907c0 - g_023907c8;
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  bVar7 = (byte)(((int64_t)dVar12 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
  local_50 = lVar9;
  local_48 = '\0';
  FUN_000175c0(uVar11,&local_50);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar5;
    bVar7 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  bVar10 = plVar4 != (int64_t *)0x0 & local_68._0_1_;
  if ((plVar5 != (int64_t *)0x0 & bVar7) == 0) {
    FUN_01e53c20();
    uVar11 = (**(code **)(*local_40 + 0x4d8))();
    fVar17 = fVar16;
    fVar20 = fVar19;
    fVar22 = in_XMM1_Dc;
    fVar24 = in_XMM1_Dd;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    local_88 = (float)uVar13;
    fStack_84 = (float)((uint64_t)uVar13 >> 0x20);
    fStack_80 = (float)extraout_XMM0_Qb_01;
    fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    uVar14 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4d8))();
    fVar18 = fVar17;
    fVar21 = fVar20;
    fVar23 = fVar22;
    fVar25 = fVar24;
    auVar27._0_8_ = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d8))();
    auVar27._8_8_ = extraout_XMM0_Qb_03;
    local_68 = (float)uVar14;
    fStack_64 = (float)((uint64_t)uVar14 >> 0x20);
    fStack_60 = (float)extraout_XMM0_Qb_02;
    fStack_5c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    if (bVar10 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
      *(void*)(this_ptr + 0x88) = 0;
      local_88 = fVar17 + local_68;
      fStack_84 = fVar20 + fStack_64;
      fStack_80 = fVar22 + fStack_60;
      fStack_7c = fVar24 + fStack_5c;
    }
    else {
      auVar3._8_4_ = fStack_80;
      auVar3._0_8_ = uVar13;
      auVar3._12_4_ = fStack_7c;
      auVar27 = blendps(auVar27,auVar3,0xd);
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d0))(auVar27._0_8_);
      local_88 = local_88 + fVar18;
      fStack_84 = fStack_84 + fVar21;
      fStack_80 = fStack_80 + fVar23;
      fStack_7c = fStack_7c + fVar25;
    }
    auVar15._0_4_ = local_68 + local_88;
    auVar15._4_4_ = fStack_64 + fStack_84;
    auVar15._8_4_ = fStack_60 + fStack_80;
    auVar15._12_4_ = fStack_5c + fStack_7c;
    auVar2._4_4_ = fVar19;
    auVar2._0_4_ = fVar16;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar27 = blendps(auVar15,auVar2,2);
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x478))();
    *(void*)(this_ptr + 0x80) = 0;
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x478))();
    *(void*)(this_ptr + 0x78) = 0;
    lVar9 = **(int64_t **)(this_ptr + 0x10);
    local_68 = auVar27._0_4_;
  }
  else {
    if (bVar10 != 0) {
      return;
    }
    FUN_01e53c20();
    uVar11 = (**(code **)(*local_40 + 0x4d8))();
    fVar17 = fVar16;
    fVar20 = fVar19;
    fVar22 = in_XMM1_Dc;
    fVar24 = in_XMM1_Dd;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x4d8))();
    local_b8 = (float)uVar13;
    fStack_b4 = (float)((uint64_t)uVar13 >> 0x20);
    fStack_b0 = (float)extraout_XMM0_Qb;
    fStack_ac = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    fVar18 = fVar17;
    fVar21 = fVar20;
    fVar23 = fVar22;
    fVar25 = fVar24;
    uVar13 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x4d8))();
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
    *(void*)(this_ptr + 0x88) = 0;
    auVar1._4_4_ = fVar19;
    auVar1._0_4_ = fVar16;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    local_98 = (float)uVar13;
    fStack_94 = (float)((uint64_t)uVar13 >> 0x20);
    fStack_90 = (float)extraout_XMM0_Qb_00;
    fStack_8c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    auVar26._0_4_ = fVar17 + local_b8 + ((fVar16 - local_98) - fVar18);
    auVar26._4_4_ = fVar20 + fStack_b4 + ((fVar19 - fStack_94) - fVar21);
    auVar26._8_4_ = fVar22 + fStack_b0 + ((in_XMM1_Dc - fStack_90) - fVar23);
    auVar26._12_4_ = fVar24 + fStack_ac + ((in_XMM1_Dd - fStack_8c) - fVar25);
    auVar27 = blendps(auVar26,auVar1,2);
    local_68 = auVar27._0_4_;
    lVar9 = **(int64_t **)(this_ptr + 0x10);
  }
  (**(code **)(lVar9 + 0x4d0))(uVar11,local_68);
  return;
}

