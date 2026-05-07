// Function: FUN_0009f2a0
// Address: 0009f2a0
// Size: 2713 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNValue"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009f2a0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar5;
  longlong *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  plVar6 = &DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
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
      cVar3 = FUN_00e8db60();
      plVar6 = unaff_RSI;
      if (cVar3 == '\0') {
        plVar6 = &DAT_02802688;
      }
    }
  }
  local_31 = (char)plVar6[1];
  if ((local_31 == '\0') || (*plVar6 == 0)) {
    if (*plVar6 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar1 = DAT_026d8e58;
  if (DAT_026d8e58 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar1;
  local_40 = '\0';
  cVar3 = FUN_00c9ff50();
  uVar7 = extraout_XMM0_Da;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    uVar7 = FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    if (*(longlong *)(unaff_RDI + 0x78) == 0) goto LAB_0009f73c;
    local_a0 = DAT_026d8e58;
    if (*(longlong *)(unaff_RDI + 0x90) == 0) {
      uVar7 = FUN_0009ddd0();
      local_a0 = DAT_026d8e58;
    }
    DAT_026d8e58 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_000175c0(uVar7,&local_a0);
    plVar1 = local_48;
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
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
        if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
        cVar3 = FUN_00e8da30();
        pplVar5 = &local_48;
        if (cVar3 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
    }
    local_68 = 0;
    plVar1 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    local_68 = '\x01';
    local_70 = plVar1;
    uVar7 = FUN_006c5ee0();
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar2 = DAT_026d8e60;
  if (DAT_026d8e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  FUN_000175c0(uVar7,&local_90);
  plVar1 = local_48;
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
  pplVar5 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      cVar3 = FUN_00e8da30();
      pplVar5 = &local_48;
      if (cVar3 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_58 = 0;
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  local_58 = '\x01';
  local_60 = plVar1;
  uVar7 = FUN_006c5ee0();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  lVar2 = DAT_026d8e68;
  if (DAT_026d8e68 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_000175c0(uVar7,&local_80);
  plVar1 = local_48;
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
  pplVar5 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((DAT_0270c850 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
      cVar3 = FUN_00e8da30();
      pplVar5 = &local_48;
      if (cVar3 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
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
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = *(longlong **)(unaff_RDI + 0xd8);
  if (plVar6 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0xd8) = plVar1;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0009f73c:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}


