// Function: FUN_01f8e100
// Address: 01f8e100
// Size: 1741 bytes
// Class: GNActionGroup
// String references:
//   "GNActionGroup"
//   "GNActionRegistration"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f8e100(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = DAT_027feca0;
  if (DAT_027feca0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    plVar4 = (longlong *)*param_1;
    if ((DAT_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_02801338 = FUN_00d4fe50();
      _DAT_02801320 = "GNActionGroup";
      _DAT_02801328 = 0x38;
      _DAT_02801330 = FUN_001a4a20;
      _DAT_02801340 = 0;
      uRam0000000002801348 = 0;
      _DAT_02801350 = 0;
      uRam0000000002801358 = 0;
      _DAT_02801360 = 0;
      uRam0000000002801368 = 0;
      _DAT_02801370 = 0;
      uRam0000000002801378 = 0;
      _DAT_02801380 = 0;
      uRam0000000002801388 = 0;
      _DAT_02801390 = 0;
      uRam0000000002801398 = 0;
      _DAT_028013a0 = 0;
      uRam00000000028013a8 = 0;
      _DAT_028013b0 = 0;
      uRam00000000028013b8 = 0;
      _DAT_028013c0 = 0;
      uRam00000000028013c8 = 0;
      _DAT_028013d0 = 0;
      uRam00000000028013d8 = 0;
      _DAT_028013e0 = 0;
      ___cxa_guard_release();
    }
    if (plVar4 == (longlong *)0x0) {
LAB_01f8e1be:
      plVar4 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar4 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = param_1;
      if (cVar2 == '\0') goto LAB_01f8e1be;
    }
    if (*plVar4 == 0) {
      plVar4 = (longlong *)*param_1;
      if ((DAT_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026e7ac8 = FUN_00d4fe50();
        _DAT_026e7ab0 = "GNActionRegistration";
        _DAT_026e7ab8 = 0x38;
        _DAT_026e7ac0 = FUN_001a8af0;
        _DAT_026e7ad0 = 0;
        uRam00000000026e7ad8 = 0;
        _DAT_026e7ae0 = 0;
        uRam00000000026e7ae8 = 0;
        _DAT_026e7af0 = 0;
        uRam00000000026e7af8 = 0;
        _DAT_026e7b00 = 0;
        uRam00000000026e7b08 = 0;
        _DAT_026e7b10 = 0;
        uRam00000000026e7b18 = 0;
        _DAT_026e7b20 = 0;
        uRam00000000026e7b28 = 0;
        _DAT_026e7b30 = 0;
        uRam00000000026e7b38 = 0;
        _DAT_026e7b40 = 0;
        uRam00000000026e7b48 = 0;
        _DAT_026e7b50 = 0;
        uRam00000000026e7b58 = 0;
        _DAT_026e7b60 = 0;
        uRam00000000026e7b68 = 0;
        _DAT_026e7b70 = 0;
        ___cxa_guard_release();
      }
      if (plVar4 == (longlong *)0x0) {
LAB_01f8e25c:
        plVar4 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        plVar4 = param_1;
        if (cVar2 == '\0') goto LAB_01f8e25c;
      }
      if (*plVar4 == 0) goto LAB_01f8e2c2;
      FUN_01caf440();
      plVar4 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    else {
      FUN_01caf0e0();
      plVar4 = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_38 != '\0') goto LAB_01f8e403;
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = plVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (local_38 == '\0') {
          return;
        }
        if (local_40 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
    local_40 = (longlong *)0x0;
LAB_01f8e403:
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
LAB_01f8e2c2:
  FUN_01db9a80();
  plVar4 = local_40;
  lVar1 = DAT_02704000;
  if (DAT_02704000 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01f8e370;
  plVar4 = (longlong *)*param_1;
  if ((DAT_026e73b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_02801338 = FUN_00d4fe50();
    _DAT_02801320 = "GNActionGroup";
    _DAT_02801328 = 0x38;
    _DAT_02801330 = FUN_001a4a20;
    _DAT_02801340 = 0;
    uRam0000000002801348 = 0;
    _DAT_02801350 = 0;
    uRam0000000002801358 = 0;
    _DAT_02801360 = 0;
    uRam0000000002801368 = 0;
    _DAT_02801370 = 0;
    uRam0000000002801378 = 0;
    _DAT_02801380 = 0;
    uRam0000000002801388 = 0;
    _DAT_02801390 = 0;
    uRam0000000002801398 = 0;
    _DAT_028013a0 = 0;
    uRam00000000028013a8 = 0;
    _DAT_028013b0 = 0;
    uRam00000000028013b8 = 0;
    _DAT_028013c0 = 0;
    uRam00000000028013c8 = 0;
    _DAT_028013d0 = 0;
    uRam00000000028013d8 = 0;
    _DAT_028013e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01f8e363:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = param_1;
    if (cVar2 == '\0') goto LAB_01f8e363;
  }
  if (*plVar4 != 0) goto LAB_01f8e370;
  plVar4 = (longlong *)*param_1;
  if ((DAT_026e7b78 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026e7ac8 = FUN_00d4fe50();
    _DAT_026e7ab0 = "GNActionRegistration";
    _DAT_026e7ab8 = 0x38;
    _DAT_026e7ac0 = FUN_001a8af0;
    _DAT_026e7ad0 = 0;
    uRam00000000026e7ad8 = 0;
    _DAT_026e7ae0 = 0;
    uRam00000000026e7ae8 = 0;
    _DAT_026e7af0 = 0;
    uRam00000000026e7af8 = 0;
    _DAT_026e7b00 = 0;
    uRam00000000026e7b08 = 0;
    _DAT_026e7b10 = 0;
    uRam00000000026e7b18 = 0;
    _DAT_026e7b20 = 0;
    uRam00000000026e7b28 = 0;
    _DAT_026e7b30 = 0;
    uRam00000000026e7b38 = 0;
    _DAT_026e7b40 = 0;
    uRam00000000026e7b48 = 0;
    _DAT_026e7b50 = 0;
    uRam00000000026e7b58 = 0;
    _DAT_026e7b60 = 0;
    uRam00000000026e7b68 = 0;
    _DAT_026e7b70 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01f8e3b9:
    param_1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01f8e3b9;
  }
  if (*param_1 == 0) {
LAB_01f8e370:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_01da4890();
  uVar5 = FUN_01caf470();
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_60;
  FUN_01da5370(uVar5,&local_50);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) goto LAB_01f8e370;
  FUN_01d3d730();
  plVar4 = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      *unaff_RDI = plVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f8e4bb;
    }
    local_40 = (longlong *)0x0;
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01f8e4bb:
  FUN_00d50b20();
  return;
}


