// Function: FUN_00c302d0
// Address: 00c302d0
// Size: 717 bytes
// Class: GNOverloudTapedesk
// String references:
//   "GNOverloudTapedesk"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c302d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0xb0) == '\0') goto LAB_00c304a9;
  pplVar4 = &local_40;
  local_98 = param_1;
  uVar5 = FUN_00b37610();
  plVar1 = local_40;
  if (DAT_0276e460 == '\0') {
    iVar3 = ___cxa_guard_acquire();
    uVar5 = extraout_XMM0_Da_00;
    if (iVar3 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      uVar5 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c30349:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c30349;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_90 = *param_3;
    local_88 = '\0';
    local_80 = *local_98;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x80))(uVar5,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_70 = DAT_0276cb38;
  if (DAT_0276cb38 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d40470(&local_50,&local_60,3,3);
  param_1 = local_98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c304a9:
  local_b8 = *param_2;
  local_b0 = 0;
  local_a8 = *param_1;
  local_a0 = 0;
  FUN_00c2bb50(&local_a8,&local_b8);
  return;
}


