// Function: FUN_019a7930
// Address: 019a7930
// Size: 714 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019a7930(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  ulonglong local_40;
  uint local_34;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_48 = (ulonglong)uVar9;
  local_40 = 0;
  plVar8 = (longlong *)0x0;
  do {
    local_34 = uVar9 - 1;
    plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
    local_58 = plVar1;
    local_50 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_58;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar5;
    uVar11 = (undefined7)((ulonglong)plVar1 >> 8);
    if (plVar7 == plVar8) {
      if (((char)local_40 == '\0') && (plVar7 != (longlong *)0x0)) {
        plVar7 = plVar8;
        if (*(char *)(pplVar5 + 1) != '\0') goto LAB_019a7a14;
        uVar10 = CONCAT71(uVar11,1);
        FUN_00d50b00();
        uVar6 = local_48;
        uVar9 = local_34;
      }
      else {
        uVar10 = local_40 & 0xffffffff;
        uVar6 = local_48;
        plVar7 = plVar8;
        uVar9 = local_34;
      }
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = local_34;
      uVar6 = local_48;
      uVar10 = CONCAT71(uVar11,1);
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a7a14:
      *(undefined1 *)(pplVar5 + 1) = 0;
      uVar10 = CONCAT71(uVar11,1);
      uVar6 = local_48;
      uVar9 = local_34;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x960))(param_1), cVar2 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)uVar10 == '\0') {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if ((longlong)uVar6 < 2) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if ((char)uVar10 == '\0') {
        return;
      }
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_48 = uVar6 - 1;
    lVar4 = *(longlong *)(unaff_RSI + 0x38);
    local_40 = uVar10 & 0xffffffff;
    plVar8 = plVar7;
  } while( true );
}


