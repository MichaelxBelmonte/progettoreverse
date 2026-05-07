// Function: FUN_01ab2a40
// Address: 01ab2a40
// Size: 639 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01ab2ba5) */
/* WARNING: Removing unreachable block (ram,0x01ab2bae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ab2a40(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if ((((longlong *)*param_2 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x3a0))(), cVar2 == '\0')) ||
     (cVar2 = FUN_00ce6e30(), cVar2 == '\0')) goto LAB_01ab2bf7;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x368))();
  local_40 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_58;
  pplVar4 = &local_38;
  FUN_000175c0(uVar5,&local_48);
  plVar1 = local_38;
  if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01ab2b16:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01ab2b16;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00cddf30();
    plVar1 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if (plVar1 != (longlong *)0x0) {
      *unaff_RDI = plVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
LAB_01ab2bf7:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


