// Function: FUN_00e4a560
// Address: 00e4a560
// Size: 1193 bytes
// Class: GNList
// String references:
//   "GNList"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4a560(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x2c) != '\0') {
    local_70 = *param_2;
    local_68 = 0;
    FUN_00e484f0(param_1,&local_70);
    local_40 = *unaff_RSI;
    if (local_40 == 0) {
      return;
    }
    local_38 = '\0';
    FUN_00e3a1c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = (longlong *)*unaff_RSI;
    if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = unaff_RSI;
      if (cVar3 != '\0') goto LAB_00e4a618;
    }
    plVar5 = &DAT_02802688;
LAB_00e4a618:
    if (*plVar5 != 0) {
      FUN_00d227e0();
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e3a1c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_40 = *unaff_RSI;
      local_38 = '\0';
      FUN_00e38fb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    return;
  }
  local_40 = *param_2;
  local_38 = '\0';
  FUN_00e3a2a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_50 = *(longlong *)(unaff_RDI + 0x48);
  local_48 = '\0';
  iVar4 = FUN_00e5d7f0();
  uVar6 = extraout_XMM0_Da;
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (iVar4 == -1) {
    local_60 = *param_2;
    local_58 = 0;
    FUN_00e484f0(uVar6,&local_60);
    lVar2 = *unaff_RSI;
    lVar1 = local_40;
  }
  else {
    FUN_00dac5e0();
    lVar2 = *unaff_RSI;
    lVar1 = local_40;
  }
  local_40 = lVar2;
  if (local_40 == 0) goto LAB_00e4a864;
  local_38 = '\0';
  FUN_00e3a1c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)*unaff_RSI;
  if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_00e4a787:
    plVar5 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    if (cVar3 == '\0') goto LAB_00e4a787;
  }
  if (*plVar5 != 0) {
    FUN_00d227e0();
    local_40 = *unaff_RSI;
    local_38 = '\0';
    FUN_00e3a1c0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_40 = *unaff_RSI;
    local_38 = '\0';
    FUN_00e38fb0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  local_40 = *unaff_RSI;
  local_38 = '\0';
  FUN_00e3a2a0();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
    lVar1 = local_40;
  }
LAB_00e4a864:
  local_40 = lVar1;
  FUN_00daab70();
  return;
}


