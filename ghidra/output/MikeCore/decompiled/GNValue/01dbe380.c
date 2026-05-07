// Function: FUN_01dbe380
// Address: 01dbe380
// Size: 806 bytes
// Class: GNValue


/* WARNING: Removing unreachable block (ram,0x01dbe66f) */
/* WARNING: Removing unreachable block (ram,0x01dbe67b) */

void FUN_01dbe380(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar10 = (float)((ulonglong)param_2 >> 0x20);
  fVar9 = (float)param_2;
  uVar4 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x9e8))();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d48a10();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x9e8))();
  (**(code **)(*unaff_RDI + 0x960))();
  local_48 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_80;
  auVar8._4_4_ = fVar10;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dc;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar5._4_12_ = auVar8._4_12_;
  auVar5._0_4_ = fVar9 + DAT_023b8b2c;
  FUN_01d44870(auVar5._0_8_,&local_50);
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*unaff_RDI + 0xb58))();
  (**(code **)(*unaff_RDI + 0xb58))();
  (**(code **)(*unaff_RDI + 0x9e8))();
  FUN_01d43ca0();
  (**(code **)(*plVar1 + 0x3f0))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(char *)((longlong)unaff_RDI + 0x261) != '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    local_c8 = (float)uVar4;
    fStack_c4 = (float)((ulonglong)uVar4 >> 0x20);
    fStack_c0 = (float)extraout_XMM0_Qb;
    fStack_bc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar6._0_4_ = local_c8 + auVar5._0_4_;
    auVar6._4_4_ = fStack_c4 + fVar10;
    auVar6._8_4_ = fStack_c0 + in_XMM1_Dc;
    auVar6._12_4_ = fStack_bc + in_XMM1_Dd;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = ((auVar6._0_4_ + DAT_02390d00) - fVar10 * DAT_0239011c) + DAT_02390d2c;
    auVar2._4_4_ = auVar6._4_4_;
    auVar2._0_4_ = (auVar6._4_4_ + DAT_02390d00) - fVar10 * DAT_0239011c;
    auVar2._8_4_ = auVar6._12_4_;
    auVar2._12_4_ = auVar6._12_4_;
    auVar8 = insertps(auVar7,auVar2,0x10);
    FUN_01cb3a60(auVar8._0_8_,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


