// Function: FUN_0024b760
// Address: 0024b760
// Size: 564 bytes
// Class: GNFilePath


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0024b760(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 in_XMM1 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fStack_84;
  undefined4 uStack_7c;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  undefined8 uVar6;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  local_38[0] = local_58[0];
  pcVar3 = local_58;
  if (local_58[0] == '\0') {
    pcVar3 = local_38;
  }
  *pcVar3 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == (longlong *)0x0) {
    plVar4 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024b7d5:
    FUN_00d50b00();
  }
  else {
    plVar4 = local_60;
    if (local_38[0] == '\0') goto LAB_0024b7d5;
  }
  (**(code **)(*plVar4 + 0x7b8))();
  local_50 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((float)param_1 <= DAT_02390434) goto LAB_0024b945;
  plVar1 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_58;
  if (local_58[0] == '\0') {
    pcVar3 = local_38;
  }
  local_38[0] = local_58[0];
  *pcVar3 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 == (longlong *)0x0) {
    local_60 = *(longlong **)(unaff_RDI + 0x90);
LAB_0024b8a3:
    FUN_00d50b00();
  }
  else if (local_38[0] == '\0') goto LAB_0024b8a3;
  (**(code **)(*local_60 + 0x7b8))();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x4d8))();
  auVar7 = in_XMM1;
  uVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x4d8))();
  fStack_84 = in_XMM1._4_4_;
  uStack_7c = in_XMM1._12_4_;
  auVar8._8_4_ = in_XMM0_Dc;
  auVar8._0_8_ = param_1;
  auVar8._12_4_ = in_XMM0_Dd;
  if (fStack_84 + _DAT_02394dcc < (float)param_1) {
    auVar2._4_4_ = fStack_84;
    auVar2._0_4_ = fStack_84 + _DAT_02394dcc;
    auVar2._8_4_ = uStack_7c;
    auVar2._12_4_ = uStack_7c;
    auVar8 = insertps(auVar7,auVar2,0x10);
    uVar6 = auVar8._0_8_;
  }
  else {
    auVar8 = insertps(auVar7,auVar8,0x10);
    uVar6 = auVar8._0_8_;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x4d0))(uVar5,uVar6);
  (**(code **)(*plVar4 + 0x928))();
  FUN_00d50b20();
LAB_0024b945:
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


