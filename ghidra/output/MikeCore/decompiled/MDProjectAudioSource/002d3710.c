// Function: FUN_002d3710
// Address: 002d3710
// Size: 908 bytes
// Class: MDProjectAudioSource
// String references:
//   "MDProjectAudioSource"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002d3710(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_32;
  char local_31;
  
  plVar1 = (longlong *)*param_2;
  if ((DAT_026fd0a8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_01, iVar5 != 0)) {
    _DAT_026fcff8 = FUN_00d4fe50();
    _DAT_026fcfe0 = "MDProjectAudioSource";
    _DAT_026fcfe8 = 0x28;
    _DAT_026fcff0 = FUN_002d5b80;
    _DAT_026fd000 = 0;
    uRam00000000026fd008 = 0;
    _DAT_026fd010 = 0;
    _DAT_026fd088 = 0;
    uRam00000000026fd090 = 0;
    _DAT_026fd098 = 0;
    DAT_026fd09a = 1;
    _DAT_026fd018 = 0;
    uRam00000000026fd020 = 0;
    _DAT_026fd028 = 0;
    uRam00000000026fd030 = 0;
    _DAT_026fd038 = 0;
    uRam00000000026fd040 = 0;
    _DAT_026fd048 = 0;
    uRam00000000026fd050 = 0;
    _DAT_026fd058 = 0;
    uRam00000000026fd060 = 0;
    _DAT_026fd068 = 0;
    uRam00000000026fd070 = 0;
    _DAT_026fd078 = 0;
    uRam00000000026fd080 = 0;
    DAT_026fd0a3 = 0;
    _DAT_026fd09b = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d375f:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_002d375f;
  }
  lVar2 = *param_2;
  local_32 = (char)param_2[1];
  if ((local_32 == '\0') || (lVar2 == 0)) {
    if (lVar2 == 0) {
      return;
    }
  }
  else {
    param_1 = FUN_00d50b00();
  }
  plVar1 = (longlong *)*param_3;
  if ((DAT_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_02, iVar5 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e60 = 0;
    uRam00000000026d5e68 = 0;
    _DAT_026d5e70 = 0;
    uRam00000000026d5e78 = 0;
    _DAT_026d5e80 = 0;
    uRam00000000026d5e88 = 0;
    _DAT_026d5e90 = 0;
    uRam00000000026d5e98 = 0;
    _DAT_026d5ea0 = 0;
    uRam00000000026d5ea8 = 0;
    _DAT_026d5eb0 = 0;
    uRam00000000026d5eb8 = 0;
    _DAT_026d5ec0 = 0;
    uRam00000000026d5ec8 = 0;
    _DAT_026d5ed0 = 0;
    uRam00000000026d5ed8 = 0;
    _DAT_026d5ee0 = 0;
    uRam00000000026d5ee8 = 0;
    _DAT_026d5ef0 = 0;
    uRam00000000026d5ef8 = 0;
    _DAT_026d5f00 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_002d37c1:
    param_3 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    param_1 = extraout_XMM0_Da_00;
    if (cVar4 == '\0') goto LAB_002d37c1;
  }
  lVar3 = *param_3;
  local_31 = (char)param_3[1];
  if ((local_31 == '\0') || (lVar3 == 0)) {
    if (lVar3 == 0) goto LAB_002d38dd;
  }
  else {
    param_1 = FUN_00d50b00();
  }
  local_60 = '\0';
  local_68 = lVar3;
  FUN_002d2d30(param_1,&local_68);
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = FUN_00ce6e30();
  if (cVar4 == '\0') {
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar2 = *(longlong *)(lVar2 + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar3;
      local_50 = '\0';
      FUN_00b86c30();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xf0) + 0x578))();
    FUN_002c9a70();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
LAB_002d38dd:
  if (local_32 != '\0') {
    FUN_00d50b20();
  }
  return;
}


