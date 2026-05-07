// Function: FUN_01d9a670
// Address: 01d9a670
// Size: 1119 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d9a670(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  bool bVar8;
  longlong *local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  
  if (*(longlong *)(unaff_RSI + 0x150) == 0) {
    local_50 = '\0';
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
  if ((DAT_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar7 == (longlong *)0x0) {
LAB_01d9a6f2:
    pplVar4 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01d9a702;
LAB_01d9a715:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01d9a6f2;
    pplVar4 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a715;
LAB_01d9a702:
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (longlong *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a7bf:
    if (*(longlong *)(unaff_RSI + 0x158) == 0) {
      local_50 = '\0';
      plVar1 = (longlong *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar1 = local_58;
    }
    local_58 = plVar1;
    if ((DAT_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    if (plVar1 == (longlong *)0x0) {
LAB_01d9a828:
      pplVar4 = &DAT_02802688;
      plVar1 = DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01d9a828;
      pplVar4 = &local_58;
      plVar1 = local_58;
    }
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (longlong *)0x0;
        plVar7 = plVar1;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(pplVar4 + 1) = 0;
        plVar7 = plVar1;
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (longlong *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a93e:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01d9a94d;
    }
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a93e;
      }
      local_58 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a7bf;
      }
      local_58 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = lVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_01da2210();
joined_r0x01d9a94d:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


