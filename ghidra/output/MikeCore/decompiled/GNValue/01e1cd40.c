// Function: FUN_01e1cd40
// Address: 01e1cd40
// Size: 1116 bytes
// Class: GNValue
// String references:
//   "GNValue"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01e1cea6) */
/* WARNING: Removing unreachable block (ram,0x01e1ceb6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e1cd40(undefined4 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar1 = DAT_027f3348;
  plVar4 = (longlong *)*param_2;
  local_38 = param_3;
  local_34 = param_1;
  if (DAT_027f3348 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar4 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01e1cf6c;
  plVar4 = (longlong *)*unaff_RSI;
  if ((DAT_0270c850 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026d4348 = FUN_00d4fe50();
    _DAT_026d4330 = "GNValue";
    _DAT_026d4338 = 0x18;
    _DAT_026d4340 = FUN_00053cb0;
    _DAT_026d4350 = 0;
    uRam00000000026d4358 = 0;
    _DAT_026d4360 = 0;
    uRam00000000026d4368 = 0;
    _DAT_026d4370 = 0;
    uRam00000000026d4378 = 0;
    _DAT_026d4380 = 0;
    uRam00000000026d4388 = 0;
    _DAT_026d4390 = 0;
    uRam00000000026d4398 = 0;
    _DAT_026d43a0 = 0;
    uRam00000000026d43a8 = 0;
    _DAT_026d43b0 = 0;
    uRam00000000026d43b8 = 0;
    _DAT_026d43c0 = 0;
    uRam00000000026d43c8 = 0;
    _DAT_026d43d0 = 0;
    uRam00000000026d43d8 = 0;
    _DAT_026d43e0 = 0;
    uRam00000000026d43e8 = 0;
    _DAT_026d43f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01e1cdf5:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01e1cdf5;
  }
  if (*plVar4 != 0) {
    cVar2 = FUN_00dd6e50();
    if ((cVar2 != 'E') && (cVar2 = FUN_00dd6e50(), local_98 = DAT_027f3350, cVar2 != 'R')) {
      if (DAT_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(*unaff_RDI + 0x1f0))((undefined1)local_34,&local_98,(undefined1)local_38);
      if (local_90 == '\0') {
        return;
      }
      if (local_98 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    goto LAB_01e1cf6c;
  }
  plVar4 = (longlong *)*unaff_RSI;
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
  if (plVar4 == (longlong *)0x0) {
LAB_01e1cef8:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = unaff_RSI;
    if (cVar2 == '\0') goto LAB_01e1cef8;
  }
  lVar1 = DAT_0276cc80;
  if (*plVar4 != 0) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar1;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    iVar3 = *(int *)(local_c8 + 0xc);
    if (local_c0 != '\0') {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027f3350;
    if (iVar3 != 4) {
      local_78 = *unaff_RSI;
      local_70 = '\0';
      if (DAT_027f3350 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar1;
      local_60 = '\x01';
      (**(code **)(*unaff_RDI + 0x1f0))((undefined1)local_34,&local_68,(undefined1)local_38);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 == '\0') {
        return;
      }
      if (local_78 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
LAB_01e1cf6c:
  local_58 = *unaff_RSI;
  local_50 = '\0';
  local_48 = *param_2;
  local_40 = '\0';
  FUN_00d5adf0((undefined1)local_34,&local_48,(undefined1)local_38);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}


