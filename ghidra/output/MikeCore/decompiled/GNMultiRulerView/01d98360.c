// Function: FUN_01d98360
// Address: 01d98360
// Size: 1315 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Removing unreachable block (ram,0x01d98612) */
/* WARNING: Removing unreachable block (ram,0x01d9861b) */
/* WARNING: Removing unreachable block (ram,0x01d986ce) */
/* WARNING: Removing unreachable block (ram,0x01d986d7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d98360(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x2a] == 0) {
    local_38 = '\0';
    plVar6 = (longlong *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar6 = local_40;
  }
  local_40 = plVar6;
  if ((DAT_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f16b0 = FUN_0006d940();
    _DAT_027f1698 = "GNMultiRulerView";
    _DAT_027f16a0 = 0x140;
    _DAT_027f16a8 = FUN_01da14a0;
    _DAT_027f16b8 = 0;
    uRam00000000027f16c0 = 0;
    _DAT_027f16c8 = 0;
    uRam00000000027f16d0 = 0;
    _DAT_027f16d8 = 0;
    uRam00000000027f16e0 = 0;
    _DAT_027f16e8 = 0;
    uRam00000000027f16f0 = 0;
    _DAT_027f16f8 = 0;
    uRam00000000027f1700 = 0;
    _DAT_027f1708 = 0;
    uRam00000000027f1710 = 0;
    _DAT_027f1718 = 0;
    uRam00000000027f1720 = 0;
    _DAT_027f1728 = 0;
    uRam00000000027f1730 = 0;
    _DAT_027f1738 = 0;
    uRam00000000027f1740 = 0;
    _DAT_027f1748 = 0;
    uRam00000000027f1750 = 0;
    _DAT_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01d983e7:
    pplVar5 = &DAT_02802688;
    plVar6 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01d983f7;
LAB_01d9840a:
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d983e7;
    pplVar5 = &local_40;
    plVar6 = local_40;
    if (local_38 == '\0') goto LAB_01d9840a;
LAB_01d983f7:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = (longlong *)unaff_RDI[0x2e];
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((DAT_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027f16b0 = FUN_0006d940();
    _DAT_027f1698 = "GNMultiRulerView";
    _DAT_027f16a0 = 0x140;
    _DAT_027f16a8 = FUN_01da14a0;
    _DAT_027f16b8 = 0;
    uRam00000000027f16c0 = 0;
    _DAT_027f16c8 = 0;
    uRam00000000027f16d0 = 0;
    _DAT_027f16d8 = 0;
    uRam00000000027f16e0 = 0;
    _DAT_027f16e8 = 0;
    uRam00000000027f16f0 = 0;
    _DAT_027f16f8 = 0;
    uRam00000000027f1700 = 0;
    _DAT_027f1708 = 0;
    uRam00000000027f1710 = 0;
    _DAT_027f1718 = 0;
    uRam00000000027f1720 = 0;
    _DAT_027f1728 = 0;
    uRam00000000027f1730 = 0;
    _DAT_027f1738 = 0;
    uRam00000000027f1740 = 0;
    _DAT_027f1748 = 0;
    uRam00000000027f1750 = 0;
    _DAT_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      pplVar5 = &local_40;
      local_48 = local_40;
      cVar3 = local_38;
      goto joined_r0x01d9848b;
    }
  }
  pplVar5 = &DAT_02802688;
  local_48 = DAT_02802688;
  cVar3 = DAT_02802690;
joined_r0x01d9848b:
  if (cVar3 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_01da14a0();
    (**(code **)(*plVar6 + 0x18))();
    (**(code **)(*plVar6 + 0x558))();
    (**(code **)(*plVar6 + 0x570))();
    FUN_01d97f00();
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (longlong)&DAT_0268eee0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  uVar8 = FUN_00d500e0();
  lVar1 = *unaff_RSI;
  lVar2 = plVar7[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b00();
    }
    plVar7[2] = lVar1;
    if (lVar2 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  lVar1 = *param_1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  local_38 = '\0';
  local_40 = plVar7;
  FUN_00d23370(uVar8,param_2);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x450))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x558))();
  if (*(int *)((longlong)unaff_RDI + 0x1ac) == 0) {
    if (local_48 == (longlong *)0x0) {
      local_48 = (longlong *)FUN_01da14a0();
      (**(code **)(*local_48 + 0x18))();
      (**(code **)(*local_48 + 0x570))();
      FUN_01d98a70();
      lVar1 = *param_1;
    }
    else {
      lVar1 = *param_1;
    }
    if (lVar1 != 0) {
      (**(code **)(*local_48 + 0x450))();
      (**(code **)(*(longlong *)*param_1 + 0x558))();
    }
  }
  (**(code **)(*unaff_RDI + 0x928))();
  FUN_00d50b20();
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


