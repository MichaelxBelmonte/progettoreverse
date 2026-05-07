// Function: FUN_0037a800
// Address: 0037a800
// Size: 544 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037a800(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  undefined4 uVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar6 = FUN_00d3ed20();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    uVar6 = FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  lVar2 = DAT_02704000;
  if (DAT_02704000 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_58 = lVar2;
  local_50 = '\x01';
  pplVar5 = &local_38;
  FUN_000175c0(uVar6,&local_58);
  plVar1 = local_38;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0037a8c4;
  }
  pplVar5 = (longlong **)&DAT_02802688;
LAB_0037a8c4:
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
  lVar2 = DAT_02704008;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_02704008 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar2;
    local_40 = '\x01';
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00378ba0();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


