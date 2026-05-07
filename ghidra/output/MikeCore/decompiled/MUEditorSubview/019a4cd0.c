// Function: FUN_019a4cd0
// Address: 019a4cd0
// Size: 995 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019a4cd0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*unaff_RDI;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019a4d20:
    unaff_RDI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019a4d20;
  }
  plVar1 = (longlong *)*unaff_RDI;
  plVar2 = (longlong *)*unaff_RSI;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_019a4d66;
  }
  unaff_RSI = &DAT_02802688;
LAB_019a4d66:
  plVar2 = (longlong *)*unaff_RSI;
  uVar5 = 0;
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_01989fa0();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar5 = FUN_01989fa0();
  }
  if (uVar4 == uVar5) {
    (**(code **)(*plVar1 + 0x928))();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x928))();
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = uVar4;
    if ((local_50 != 0) && (local_50 != 0)) {
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar5 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = uVar4 & 0xff;
      uVar5 = uVar5 & 0xff;
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = 0xffffffff;
  if ((int)uVar5 <= (int)uVar4) {
    uVar8 = (ulonglong)((int)uVar5 < (int)uVar4);
  }
  return uVar8;
}


