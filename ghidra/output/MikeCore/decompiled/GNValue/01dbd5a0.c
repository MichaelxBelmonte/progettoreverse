// Function: FUN_01dbd5a0
// Address: 01dbd5a0
// Size: 987 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01dbd8e8) */
/* WARNING: Removing unreachable block (ram,0x01dbd8f4) */
/* WARNING: Removing unreachable block (ram,0x01dbd94b) */
/* WARNING: Removing unreachable block (ram,0x01dbd957) */

void FUN_01dbd5a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar10;
  float fVar11;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_88;
  char local_80;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  uVar6 = FUN_01e3f820();
  local_f8 = (float)uVar6;
  fStack_f4 = (float)((ulonglong)uVar6 >> 0x20);
  fStack_f0 = (float)extraout_XMM0_Qb;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  (**(code **)(*unaff_RDI + 0x640))();
  lVar4 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_48 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_88;
  auVar9._4_4_ = fVar11;
  auVar9._0_4_ = fVar10;
  auVar9._8_4_ = in_XMM1_Dc;
  auVar9._12_4_ = in_XMM1_Dd;
  auVar7._4_12_ = auVar9._4_12_;
  auVar7._0_4_ = fVar10 + DAT_023b8b2c;
  FUN_01d44870(auVar7._0_8_,&local_50);
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0xad8))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((longlong)unaff_RDI + 0x239) != '\0') {
    fStack_f4 = fStack_f4 + fVar11;
    fStack_ec = fStack_ec + in_XMM1_Dd;
    fVar10 = ((local_f8 + auVar7._0_4_ + DAT_02390d00) - fVar11 * DAT_0239011c) + DAT_02390d2c;
    fVar11 = (fStack_f4 + DAT_02390d00) - fVar11 * DAT_0239011c;
    auVar8._4_4_ = fStack_f4;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar8._12_4_ = fStack_ec;
    auVar9 = insertps(auVar8,ZEXT416((uint)(DAT_02390124 + fVar11)),0x10);
    FUN_01cb3a60(auVar9._0_8_,DAT_02394298);
    auVar3._4_4_ = fStack_f4;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = fStack_f0 + in_XMM1_Dc;
    auVar3._12_4_ = fStack_ec;
    auVar2._4_4_ = fStack_f4;
    auVar2._0_4_ = fVar11 + DAT_02390d00;
    auVar2._8_4_ = fStack_ec;
    auVar2._12_4_ = fStack_ec;
    auVar9 = insertps(auVar3,auVar2,0x10);
    FUN_01cb3a60(auVar9._0_8_,DAT_02394298);
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


