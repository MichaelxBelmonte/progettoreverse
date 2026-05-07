// Function: FUN_01d9a0f0
// Address: 01d9a0f0
// Size: 1176 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d9a0f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  bool bVar8;
  longlong local_70;
  undefined1 local_68;
  longlong *local_58;
  char local_50;
  longlong local_48;
  int local_40;
  undefined8 local_3c;
  
  if (unaff_RDI[0x2a] == 0) {
    local_50 = '\0';
    plVar7 = (longlong *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
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
  if (plVar7 == (longlong *)0x0) {
LAB_01d9a173:
    pplVar5 = &DAT_02802688;
    plVar7 = DAT_02802688;
    if (DAT_02802690 != '\0') goto LAB_01d9a183;
LAB_01d9a196:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d9a173;
    pplVar5 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a196;
LAB_01d9a183:
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (longlong *)0x0) || (lVar1 = plVar7[0x27], lVar1 == 0)) {
LAB_01d9a2a1:
    if (unaff_RDI[0x2b] == 0) {
      local_50 = '\0';
      plVar2 = (longlong *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar2 = local_58;
    }
    local_58 = plVar2;
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
    if (plVar2 == (longlong *)0x0) {
LAB_01d9a309:
      pplVar5 = &DAT_02802688;
      plVar2 = DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01d9a309;
      pplVar5 = &local_58;
      plVar2 = local_58;
    }
    if (plVar7 != plVar2) {
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (longlong *)0x0;
        plVar7 = plVar2;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        *(undefined1 *)(pplVar5 + 1) = 0;
        plVar7 = plVar2;
      }
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    lVar1 = plVar7[0x27];
    if (lVar1 == 0) goto LAB_01d9a40b;
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01d9a402;
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*unaff_RSI != local_58[3]) {
      (**(code **)(*unaff_RDI + 0x928))();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a2a1;
      }
      local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*unaff_RSI != local_58[3]) {
      *(int *)(unaff_RDI + 0x35) = (int)unaff_RDI[0x35] + 1;
      FUN_01d98b80();
      local_70 = *unaff_RSI;
      local_68 = 0;
      FUN_01d98360(&local_70,local_3c._4_4_ + local_40,param_3,param_4,0);
      *(int *)(unaff_RDI + 0x35) = (int)unaff_RDI[0x35] + -1;
      (**(code **)(*unaff_RDI + 0x928))();
    }
  }
LAB_01d9a402:
  FUN_01da2210();
LAB_01d9a40b:
  FUN_00d50b20();
  return;
}


