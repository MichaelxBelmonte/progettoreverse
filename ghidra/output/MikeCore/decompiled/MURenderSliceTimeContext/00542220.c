// Function: FUN_00542220
// Address: 00542220
// Size: 925 bytes
// Class: MURenderSliceTimeContext


void FUN_00542220(float param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 in_XMM1_Qb;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float local_a8;
  float fStack_a4;
  float local_98;
  float fStack_94;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 == (longlong *)0x0) {
LAB_00542277:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 == '\0') goto LAB_00542277;
  }
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x4d8))();
  fStack_84 = (float)((ulonglong)param_2 >> 0x20);
  uStack_80 = (undefined4)in_XMM1_Qb;
  uStack_7c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar14 = param_2;
  (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d8))();
  local_48 = (undefined1  [8])uVar14;
  uStack_40 = in_XMM1_Qb;
  local_78._0_8_ = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d8))();
  local_78._8_8_ = extraout_XMM0_Qb;
  auVar5 = _local_48;
  uVar15 = local_48;
  local_58._0_8_ = (**(code **)(*unaff_RDI + 0x4d8))();
  local_58._8_8_ = extraout_XMM0_Qb_00;
  uVar12 = (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x528))();
  uVar13 = (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x528))();
  auVar7._8_8_ = in_XMM1_Qb;
  auVar7._0_8_ = uVar14;
  fVar16 = (float)((ulonglong)uVar14 >> 0x20);
  uVar2 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uVar3 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  if ((char)unaff_RDI[0x31] == '\0') {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    if (param_1 < 0.0) {
      fStack_a4 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_a4 = (fVar16 + param_1) - fStack_a4;
      uVar11 = -(uint)(fStack_a4 < 0.0);
      fVar20 = (float)(~uVar11 & (uint)param_1 | (uint)(param_1 - fStack_a4) & uVar11);
      fVar21 = ((float)local_48._4_4_ + fVar20) - (float)((ulonglong)uVar13 >> 0x20);
      uVar11 = -(uint)(fVar21 < 0.0);
      param_1 = (float)(~uVar11 & (uint)fVar20 | (uint)(fVar20 - fVar21) & uVar11);
    }
    uVar4 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar20 = (float)((ulonglong)local_58._0_8_ >> 0x20);
    fVar21 = (float)((ulonglong)local_78._0_8_ >> 0x20);
    auVar17._4_4_ = fVar21;
    auVar17._0_4_ = fVar21;
    auVar17._8_4_ = uVar3;
    auVar17._12_4_ = uVar3;
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = fVar21 + param_1;
    fStack_94 = (float)((ulonglong)uVar15 >> 0x20);
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
  (**(code **)(*(longlong *)unaff_RDI[0x32] + 0x4d0))();
  (**(code **)(*(longlong *)unaff_RDI[0x33] + 0x4d0))();
  (**(code **)(*unaff_RDI + 0x4d0))();
  (**(code **)(*plVar1 + 0xa10))();
  pplVar10 = &local_38;
  FUN_01e40eb0();
  plVar1 = local_38;
  FUN_000a94a0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar9 = FUN_00e85ea0();
    if (cVar9 != '\0') goto LAB_0054255b;
  }
  pplVar10 = (longlong **)&DAT_02802688;
LAB_0054255b:
  plVar1 = *pplVar10;
  if (*(char *)(pplVar10 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar10 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_006c5b60();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


