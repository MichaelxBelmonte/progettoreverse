// Function: FUN_00110e00
// Address: 00110e00
// Size: 1509 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNValue"
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00110e00(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  uVar8 = (*DAT_02572370)();
  local_80 = DAT_026e1378;
  if (DAT_026e1378 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_78 = '\x01';
  uVar8 = FUN_01cacbe0(uVar8,&local_80);
  plVar1 = local_68;
  if ((DAT_026fdd40 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_01, iVar3 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  pplVar7 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar2 != '\0') {
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
      cVar2 = FUN_00e8db60();
      pplVar7 = &local_68;
      uVar8 = extraout_XMM0_Da_00;
      if (cVar2 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar6 = DAT_026e13a8;
  if (plVar1 == (longlong *)0x0) {
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    local_70 = plVar1;
    if (DAT_026e13a8 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = lVar6;
    local_38 = '\0';
    FUN_000175c0(uVar8,&local_40);
    plVar1 = local_68;
    if ((DAT_027048b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    pplVar7 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 != '\0') {
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
        cVar2 = FUN_00e8da30();
        pplVar7 = &local_68;
        if (cVar2 == '\0') {
          pplVar7 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_48 = 0;
      local_50 = 0;
      local_58 = plVar1;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar6 = 0;
        do {
          local_68 = *(longlong **)(plVar1[2] + lVar6 * 8);
          lVar5 = FUN_00dd6dc0();
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = lVar5;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_50 = CONCAT44(local_50._4_4_,(int)lVar6);
        } while ((int)lVar6 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_00115a50();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


