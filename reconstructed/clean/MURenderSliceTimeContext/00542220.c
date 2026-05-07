// Function: FUN_00542220
// Address: 00542220
// Size: 925 bytes
// Class: MURenderSliceTimeContext
// === MURenderSliceTimeContext properties ===
//   MUTimeContextCreationType _type


void FUN_00542220(float param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  char cVar9;
  int64_t *this_ptr;
  int64_t **pplVar10;
  uint uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t in_XMM1_Qb;
  float fVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float fVar20;
  float fVar21;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float fStack_84;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_78 [16];
  uint8_t local_58 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t *local_38;
  char local_30;
  
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 == (int64_t *)0x0) {
LAB_00542277:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 == '\0') goto LAB_00542277;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x4d8))();
  fStack_84 = (float)((uint64_t)param_2 >> 0x20);
  uStack_80 = (uint32_t)in_XMM1_Qb;
  uStack_7c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uVar14 = param_2;
  (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
  local_48 = (uint8_t  [8])uVar14;
  uStack_40 = in_XMM1_Qb;
  local_78._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x4d8))();
  local_78._8_8_ = extraout_XMM0_Qb;
  auVar5 = _local_48;
  uVar15 = local_48;
  local_58._0_8_ = (**(code **)(*this_ptr + 0x4d8))();
  local_58._8_8_ = extraout_XMM0_Qb_00;
  uVar12 = (**(code **)(*(int64_t *)this_ptr[0x32] + 0x528))();
  uVar13 = (**(code **)(*(int64_t *)this_ptr[0x33] + 0x528))();
  auVar7._8_8_ = in_XMM1_Qb;
  auVar7._0_8_ = uVar14;
  fVar16 = (float)((uint64_t)uVar14 >> 0x20);
  uVar2 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uVar3 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if ((char)this_ptr[0x31] == '\0') {
    local_48._4_4_ = (uint32_t)((uint64_t)local_48 >> 0x20);
    if (param_1 < 0.0) {
      fStack_a4 = (float)((uint64_t)uVar12 >> 0x20);
      fStack_a4 = (fVar16 + param_1) - fStack_a4;
      uVar11 = -(uint)(fStack_a4 < 0.0);
      fVar20 = (float)(~uVar11 & (uint)param_1 | (uint)(param_1 - fStack_a4) & uVar11);
      fVar21 = ((float)local_48._4_4_ + fVar20) - (float)((uint64_t)uVar13 >> 0x20);
      uVar11 = -(uint)(fVar21 < 0.0);
      param_1 = (float)(~uVar11 & (uint)fVar20 | (uint)(fVar20 - fVar21) & uVar11);
    }
    uVar4 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar20 = (float)((uint64_t)local_58._0_8_ >> 0x20);
    fVar21 = (float)((uint64_t)local_78._0_8_ >> 0x20);
    auVar17._4_4_ = fVar21;
    auVar17._0_4_ = fVar21;
    auVar17._8_4_ = uVar3;
    auVar17._12_4_ = uVar3;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = fVar21 + param_1;
    fStack_94 = (float)((uint64_t)uVar15 >> 0x20);
    fStack_94 = fStack_94 + fVar16 + param_1;
    auVar22._4_4_ = fStack_84;
    auVar22._0_4_ = fStack_84;
    auVar22._8_4_ = uStack_7c;
    auVar22._12_4_ = uStack_7c;
    if (fStack_84 < (float)local_48._4_4_ + fStack_94) {
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = fStack_84 - fStack_94;
      insertps(auVar5,auVar23,0x10);
    }
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar16 + param_1;
    auVar6._8_4_ = uVar2;
    auVar6._12_4_ = uVar2;
    insertps(auVar7,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + param_1;
    auVar5._8_4_ = uVar4;
    auVar5._12_4_ = uVar4;
    insertps(local_58,auVar5,0x10);
    insertps(local_78,auVar18,0x10);
  }
  else {
    if (param_1 < 0.0) {
      local_a8 = (float)uVar12;
      local_a8 = ((float)uVar14 + param_1) - local_a8;
      uVar11 = -(uint)(local_a8 < 0.0);
      fVar16 = (float)(~uVar11 & (uint)param_1 | (uint)(param_1 - local_a8) & uVar11);
      fVar20 = ((float)local_48._0_4_ + fVar16) - (float)uVar13;
      uVar11 = -(uint)(fVar20 < 0.0);
      param_1 = (float)(~uVar11 & (uint)fVar16 | (uint)(fVar16 - fVar20) & uVar11);
    }
    auVar8._8_4_ = uStack_80;
    auVar8._0_8_ = param_2;
    auVar8._12_4_ = uStack_7c;
    auVar24._4_12_ = auVar7._4_12_;
    auVar24._0_4_ = (float)uVar14 + param_1;
    local_98 = (float)uVar15;
    if ((float)param_2 < (float)local_48._0_4_ + local_98 + auVar24._0_4_) {
      auVar19._4_12_ = auVar8._4_12_;
      auVar19._0_4_ = (float)param_2 - (local_98 + auVar24._0_4_);
      blendps(auVar5,auVar19,1);
    }
    blendps(auVar7,auVar24,1);
  }
  (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d0))();
  (**(code **)(*(int64_t *)this_ptr[0x33] + 0x4d0))();
  (**(code **)(*this_ptr + 0x4d0))();
  (**(code **)(*plVar1 + 0xa10))();
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 != '\0') goto LAB_0054255b;
  }
  pplVar10 = (int64_t **)&g_02802688;
LAB_0054255b:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_006c5b60();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

