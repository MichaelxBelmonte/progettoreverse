// Function: FUN_019a5c40
// Address: 019a5c40
// Size: 884 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a5c40(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = *(longlong *)(unaff_RSI + 0x38);
    uVar1 = *(uint *)(lVar6 + 0xc);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      local_38 = (longlong *)0x0;
      bVar2 = false;
      do {
        plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = plVar9;
        local_40 = '\0';
        if ((DAT_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        plVar9 = *pplVar7;
        if (plVar9 == local_38) {
          if ((!bVar2) && (plVar9 != (longlong *)0x0)) {
            plVar9 = local_38;
            if (*(char *)(pplVar7 + 1) != '\0') goto LAB_019a5d64;
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar9;
              bVar2 = true;
              goto LAB_019a5db0;
            }
          }
          else {
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019a5d64:
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          local_38 = plVar9;
          bVar2 = true;
        }
LAB_019a5db0:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_38;
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x928))();
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_48 = local_68;
          local_40 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_48 = plVar9;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((ulonglong)uVar1 - 1 == lVar8) goto LAB_019a5f90;
        lVar6 = *(longlong *)(unaff_RSI + 0x38);
        lVar8 = lVar8 + 1;
      } while( true );
    }
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5f90:
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


