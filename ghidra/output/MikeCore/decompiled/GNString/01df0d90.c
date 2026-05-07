// Function: FUN_01df0d90
// Address: 01df0d90
// Size: 517 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df0d90(undefined4 param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  
  lVar1 = DAT_02724b68;
  if (DAT_02724b68 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  FUN_01ccc2f0(param_1,&local_60);
  plVar5 = local_40;
  local_30 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_30 = (longlong *)0x0;
      plVar5 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (DAT_026fd0c0 == '\0') {
      iVar3 = ___cxa_guard_acquire();
      if (iVar3 != 0) {
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
    }
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = local_30;
    plVar4 = local_30;
    if (cVar2 == '\0') {
      plVar4 = DAT_02802688;
    }
    if (plVar4 == (longlong *)0x0) {
      *unaff_RDI = local_30;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      local_50 = local_30;
      local_48 = '\0';
      FUN_01cfb480();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


