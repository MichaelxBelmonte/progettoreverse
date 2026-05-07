// Function: FUN_00371b30
// Address: 00371b30
// Size: 653 bytes
// Class: MDFileBrowserInsp
// String references:
//   "MDFileBrowserInsp"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00371b30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0xad8))();
  pplVar5 = &local_38;
  FUN_01c259e0();
  plVar1 = local_38;
  if ((DAT_02704150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0271b2f8 = FUN_00018750();
    _DAT_0271b2e0 = "MDFileBrowserInsp";
    _DAT_0271b2e8 = 0x170;
    _DAT_0271b2f0 = FUN_0038a3b0;
    _DAT_0271b300 = 0;
    uRam000000000271b308 = 0;
    _DAT_0271b310 = 0;
    _DAT_0271b388 = 0;
    uRam000000000271b390 = 0;
    _DAT_0271b398 = 0;
    DAT_0271b39a = 1;
    _DAT_0271b318 = 0;
    uRam000000000271b320 = 0;
    _DAT_0271b328 = 0;
    uRam000000000271b330 = 0;
    _DAT_0271b338 = 0;
    uRam000000000271b340 = 0;
    _DAT_0271b348 = 0;
    uRam000000000271b350 = 0;
    _DAT_0271b358 = 0;
    uRam000000000271b360 = 0;
    _DAT_0271b368 = 0;
    uRam000000000271b370 = 0;
    _DAT_0271b378 = 0;
    uRam000000000271b380 = 0;
    DAT_0271b3a3 = 0;
    _DAT_0271b39b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00371b98:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00371b98;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0xae0))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x00371cf3;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (plVar2 == (longlong *)0x0) goto joined_r0x00371cf3;
  }
  else {
    uVar6 = (**(code **)(*plVar2 + 0x388))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x6a0))(uVar6,&local_48);
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
joined_r0x00371cf3:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


