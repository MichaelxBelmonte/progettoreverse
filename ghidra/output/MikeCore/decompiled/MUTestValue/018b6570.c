// Function: FUN_018b6570
// Address: 018b6570
// Size: 2201 bytes
// Class: MUTestValue
// String references:
//   "MUTestValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018b6570(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_88;
  char local_80;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_027dc098 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027dbfe8 = FUN_00d4fe50();
    _DAT_027dbfd0 = "MUTestValue";
    _DAT_027dbfd8 = 0x30;
    _DAT_027dbfe0 = FUN_018b5880;
    _DAT_027dbff0 = 0;
    uRam00000000027dbff8 = 0;
    _DAT_027dc000 = 0;
    _DAT_027dc078 = 0;
    uRam00000000027dc080 = 0;
    _DAT_027dc088 = 0;
    DAT_027dc08a = 1;
    _DAT_027dc008 = 0;
    uRam00000000027dc010 = 0;
    _DAT_027dc018 = 0;
    uRam00000000027dc020 = 0;
    _DAT_027dc028 = 0;
    uRam00000000027dc030 = 0;
    _DAT_027dc038 = 0;
    uRam00000000027dc040 = 0;
    _DAT_027dc048 = 0;
    uRam00000000027dc050 = 0;
    _DAT_027dc058 = 0;
    uRam00000000027dc060 = 0;
    _DAT_027dc068 = 0;
    uRam00000000027dc070 = 0;
    DAT_027dc093 = 0;
    _DAT_027dc08b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_018b65bf:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_018b65bf;
  }
  plVar1 = (longlong *)*unaff_RSI;
  cVar4 = (char)unaff_RSI[1];
  if ((cVar4 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(longlong **)(unaff_RDI + 0x1d0) != (longlong *)0x0) &&
     (plVar1 != *(longlong **)(unaff_RDI + 0x1d0))) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_128 = DAT_027dbfb8;
    if (DAT_027dbfb8 != 0) {
      FUN_00d50b00();
    }
    local_120 = '\x01';
    local_80 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x1d0);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar2;
    FUN_00d41040(&local_88,&local_128);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x1d0) != 0) {
      *(undefined8 *)(unaff_RDI + 0x1d0) = 0;
      FUN_00d50b20();
    }
  }
  if (plVar1 == (longlong *)0x0) {
    if (*(longlong **)(unaff_RDI + 0x1c8) == (longlong *)0x0) {
      return;
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x1c8) + 0x4d0))();
    FUN_00d50130();
    if (*(longlong *)(unaff_RDI + 0x1c8) == 0) {
      return;
    }
    *(undefined8 *)(unaff_RDI + 0x1c8) = 0;
    FUN_00d50b20();
    return;
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_118 = DAT_027dbfb8;
  if (DAT_027dbfb8 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_100 = '\0';
  local_108 = plVar1;
  FUN_00d41430(&local_108,&local_118);
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = *(longlong **)(unaff_RDI + 0x1d0);
  if (plVar3 != plVar1) {
    FUN_00d50b00();
    *(longlong **)(unaff_RDI + 0x1d0) = plVar1;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0x1c8) != 0) {
    plVar3 = *(longlong **)(unaff_RDI + 0x1d8);
    (**(code **)(*plVar1 + 0x368))();
    plVar7 = local_48;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar5 = (**(code **)(*plVar3 + 0x50))();
    uVar9 = extraout_XMM0_Da;
    if (plVar7 != (longlong *)0x0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = DAT_026d83d0;
    if (cVar5 != '\0') {
      if (DAT_026d83d0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_f8 = lVar2;
      local_f0 = '\x01';
      pplVar8 = &local_48;
      FUN_01e57490(uVar9,&local_f8);
      plVar3 = local_48;
      FUN_00081d60();
      if (plVar3 == (longlong *)0x0) {
LAB_018b6945:
        pplVar8 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_018b6945;
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      local_e0 = '\0';
      local_e8 = plVar1;
      FUN_01d2a770();
      if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_018b6d16;
    }
    if (*(longlong **)(unaff_RDI + 0x1c8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x1c8) + 0x4d0))();
      FUN_00d50130();
      if (*(longlong *)(unaff_RDI + 0x1c8) != 0) {
        *(undefined8 *)(unaff_RDI + 0x1c8) = 0;
        FUN_00d50b20();
      }
    }
  }
  local_31 = cVar4;
  uVar9 = (**(code **)(*plVar1 + 0x368))();
  plVar3 = *(longlong **)(unaff_RDI + 0x1d8);
  plVar7 = plVar3;
  if (plVar3 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_018b69d7;
      }
      uVar9 = FUN_00d50b00();
      plVar3 = *(longlong **)(unaff_RDI + 0x1d8);
      *(longlong **)(unaff_RDI + 0x1d8) = local_48;
      plVar7 = local_48;
    }
    else {
      local_40 = '\0';
      plVar7 = local_48;
LAB_018b69d7:
      *(longlong **)(unaff_RDI + 0x1d8) = plVar7;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar9 = FUN_00d50b20();
      plVar7 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x1d8);
  if (lVar2 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_d8 = 0;
  local_d0 = '\0';
  uVar9 = FUN_01e51a60(uVar9,&local_d8);
  plVar3 = *(longlong **)(unaff_RDI + 0x1c8);
  plVar7 = plVar3;
  if (plVar3 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_018b6a97;
      }
      uVar9 = FUN_00d50b00();
      plVar3 = *(longlong **)(unaff_RDI + 0x1c8);
      *(longlong **)(unaff_RDI + 0x1c8) = local_48;
      plVar7 = local_48;
    }
    else {
      local_40 = '\0';
      plVar7 = local_48;
LAB_018b6a97:
      *(longlong **)(unaff_RDI + 0x1c8) = plVar7;
    }
    if (plVar3 != (longlong *)0x0) {
      uVar9 = FUN_00d50b20();
      plVar7 = local_48;
    }
  }
  if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (lVar2 != 0) {
    uVar9 = FUN_00d50b20();
  }
  lVar2 = DAT_026d83d0;
  if (DAT_026d83d0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  pplVar8 = &local_48;
  FUN_01e57490(uVar9,&local_c8);
  plVar3 = local_48;
  FUN_00081d60();
  if (plVar3 == (longlong *)0x0) {
LAB_018b6b8f:
    pplVar8 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_018b6b8f;
  }
  cVar4 = local_31;
  plVar3 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
    cVar4 = local_31;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  local_b0 = '\0';
  local_b8 = plVar1;
  FUN_01d2a770();
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x1c8);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x4c8))((int)DAT_023dccec,DAT_023dccf4);
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_018b6d16:
  if (cVar4 != '\0') {
    FUN_00d50b20();
  }
  return;
}


