// Function: FUN_01a6e960
// Address: 01a6e960
// Size: 1609 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01a6e960(undefined8 param_1,byte param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  longlong **pplVar9;
  undefined4 uVar10;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar4 = (**(code **)(*unaff_RDI + 0xa78))();
  if ((cVar4 == '\0') || (cVar4 = (**(code **)(*unaff_RDI + 0xa20))(), cVar4 == '\0')) {
    uVar8 = 0;
    goto LAB_01a6e9c8;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar5 = FUN_01b71a90();
  uVar8 = (ulonglong)uVar5;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((byte)uVar5 & param_2) == 0) goto LAB_01a6e9c8;
  FUN_00d403d0();
  lVar3 = DAT_027e2678;
  if (DAT_027e2678 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff88,3,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_00e7bdb0();
  local_80 = FUN_00e7bdb0();
  uVar10 = FUN_01caeae0();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6eb5e;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01a6eb5e:
    uVar10 = FUN_01d66da0();
    local_a0 = DAT_027e2690;
    if (DAT_027e2690 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_98 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_a0);
    plVar1 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar1 == (longlong *)0x0) {
LAB_01a6ebe7:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6ebe7;
    }
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = FUN_01d66da0();
    local_90 = DAT_027652e0;
    if (DAT_027652e0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_88 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar10,&local_90);
    plVar2 = local_40;
    if ((DAT_0270c850 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar2 == (longlong *)0x0) {
LAB_01a6eccc:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01a6eccc;
    }
    plVar2 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
      FUN_01e42030();
      if (local_40 == (longlong *)0x0) {
        cVar4 = '\0';
      }
      else {
        FUN_01e42030();
        FUN_01d8b200();
        if (local_50 == unaff_RDI) {
          cVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
        }
        else {
          cVar4 = '\0';
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
        local_80 = (**(code **)(*unaff_RDI + 0x9e0))();
      }
    }
    else {
      uVar7 = FUN_00dd6320();
      local_80 = FUN_00dd6320();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar10 = FUN_00d50b20();
  }
  FUN_01a6e330(uVar10,local_80);
  uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
LAB_01a6e9c8:
  return uVar8 & 0xffffffff;
}


