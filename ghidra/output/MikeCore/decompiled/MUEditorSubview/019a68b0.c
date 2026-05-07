// Function: FUN_019a68b0
// Address: 019a68b0
// Size: 819 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a68b0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong **pplVar10;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  ulonglong local_48;
  uint local_3c;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar9) {
    local_48 = (ulonglong)uVar9;
    local_50 = 0;
    plVar7 = (longlong *)0x0;
    do {
      local_3c = uVar9 - 1;
      plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
      local_60 = plVar8;
      local_58 = '\0';
      uVar5 = 0;
      if ((DAT_02702df0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
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
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar10 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      cVar2 = (char)local_50;
      if (plVar8 == plVar7) {
        if ((cVar2 == '\0') && (plVar8 != (longlong *)0x0)) {
          uVar5 = local_50;
          plVar8 = plVar7;
          if (*(char *)(pplVar10 + 1) != '\0') goto LAB_019a69c7;
          local_38 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
          FUN_00d50b00();
          uVar6 = local_48;
          uVar9 = local_3c;
        }
        else {
          local_38 = local_50;
          uVar6 = local_48;
          plVar8 = plVar7;
          uVar9 = local_3c;
        }
      }
      else if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        uVar9 = local_3c;
        uVar6 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a69c7:
        *(undefined1 *)(pplVar10 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        uVar6 = local_48;
        uVar9 = local_3c;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar8 + 0x960))(param_1), cVar2 != '\0')) {
        local_58 = '\0';
        local_60 = plVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((longlong)uVar6 < 2) goto LAB_019a6b8d;
      local_48 = uVar6 - 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      local_50 = local_38;
      plVar7 = plVar8;
    } while( true );
  }
  cVar2 = '\0';
  plVar8 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
joined_r0x019a6bba:
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((cVar2 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a6b8d:
  cVar2 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
  goto joined_r0x019a6bba;
}


