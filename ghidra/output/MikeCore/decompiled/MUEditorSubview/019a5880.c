// Function: FUN_019a5880
// Address: 019a5880
// Size: 739 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a5880(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(unaff_RSI + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar1 < 1) {
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5b3f:
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return unaff_RDI;
  }
  lVar11 = 0;
  plVar9 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar10 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
    local_40 = plVar10;
    local_38 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    plVar10 = *pplVar8;
    if (plVar10 == plVar9) {
      if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
        plVar10 = plVar9;
        if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a5983;
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar10;
          bVar2 = true;
          goto LAB_019a59d0;
        }
      }
      else {
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019a5983:
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      plVar9 = plVar10;
      bVar2 = true;
    }
LAB_019a59d0:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x928))();
      plVar3 = local_40;
      plVar10 = (longlong *)*param_2;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        local_38 = '\0';
        local_40 = plVar9;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((ulonglong)uVar1 - 1 == lVar11) goto LAB_019a5b3f;
    lVar7 = *(longlong *)(unaff_RSI + 0x38);
    lVar11 = lVar11 + 1;
  } while( true );
}


