// Function: FUN_002ee7c0
// Address: 002ee7c0
// Size: 1218 bytes
// Class: MDTimeFormatter
// String references:
//   "MDTimeFormatter"
//   "MUBeatFormatter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_002ee7c0(double param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong **pplVar9;
  longlong local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  FUN_01be81a0();
  plVar2 = local_40;
  FUN_00083c20();
  if (plVar2 == (longlong *)0x0) {
LAB_002ee815:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002ee815;
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
  plVar1 = (longlong *)(unaff_RSI + 0x2a0);
  plVar8 = *(longlong **)(unaff_RSI + 0x2a0);
  if (plVar2 == (longlong *)0x0) {
    if ((DAT_026df0a8 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      _DAT_02702118 = FUN_00037f20();
      _DAT_02702100 = "MDTimeFormatter";
      _DAT_02702108 = 0x50;
      _DAT_02702110 = FUN_000ed720;
      _DAT_02702120 = 0;
      uRam0000000002702128 = 0;
      _DAT_02702130 = 0;
      uRam0000000002702138 = 0;
      _DAT_02702140 = 0;
      uRam0000000002702148 = 0;
      _DAT_02702150 = 0;
      uRam0000000002702158 = 0;
      _DAT_02702160 = 0;
      uRam0000000002702168 = 0;
      _DAT_02702170 = 0;
      uRam0000000002702178 = 0;
      _DAT_02702180 = 0;
      uRam0000000002702188 = 0;
      _DAT_02702190 = 0;
      uRam0000000002702198 = 0;
      _DAT_027021a0 = 0;
      uRam00000000027021a8 = 0;
      _DAT_027021b0 = 0;
      uRam00000000027021b8 = 0;
      _DAT_027021c0 = 0;
      ___cxa_guard_release();
    }
    if (plVar8 == (longlong *)0x0) {
LAB_002ee918:
      plVar8 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar5 = FUN_00e85ea0();
      plVar8 = plVar1;
      if (cVar5 == '\0') goto LAB_002ee918;
    }
    if (*plVar8 == 0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x1a) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *puVar7 = &DAT_024dfd78;
      (*DAT_024dfd90)();
      puVar3 = (undefined8 *)*plVar1;
      if (puVar3 != puVar7) {
        FUN_00d50b00();
        *plVar1 = (longlong)puVar7;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    goto LAB_002ee9c8;
  }
  if ((DAT_026df0b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_02701f78 = FUN_00037f20();
    _DAT_02701f60 = "MUBeatFormatter";
    _DAT_02701f68 = 0x58;
    _DAT_02701f70 = FUN_000ed780;
    _DAT_02701f80 = 0;
    uRam0000000002701f88 = 0;
    _DAT_02701f90 = 0;
    uRam0000000002701f98 = 0;
    _DAT_02701fa0 = 0;
    uRam0000000002701fa8 = 0;
    _DAT_02701fb0 = 0;
    uRam0000000002701fb8 = 0;
    _DAT_02701fc0 = 0;
    uRam0000000002701fc8 = 0;
    _DAT_02701fd0 = 0;
    uRam0000000002701fd8 = 0;
    _DAT_02701fe0 = 0;
    uRam0000000002701fe8 = 0;
    _DAT_02701ff0 = 0;
    uRam0000000002701ff8 = 0;
    _DAT_02702000 = 0;
    uRam0000000002702008 = 0;
    _DAT_02702010 = 0;
    uRam0000000002702018 = 0;
    _DAT_02702020 = 0;
    ___cxa_guard_release();
  }
  if (plVar8 == (longlong *)0x0) {
LAB_002ee899:
    plVar8 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = plVar1;
    if (cVar5 == '\0') goto LAB_002ee899;
  }
  plVar8 = (longlong *)*plVar8;
  if (plVar8 == (longlong *)0x0) {
    FUN_01a8c310();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_01912530();
    if (local_40 != (longlong *)0x0) {
      plVar8 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = (longlong *)*plVar1;
    if (plVar4 != plVar8) {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *plVar1 = (longlong)plVar8;
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    FUN_01a8c310();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_019125e0();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_002ee9c8:
  (**(code **)(**(longlong **)(unaff_RSI + 0x2a0) + 0x378))((float)param_1);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


