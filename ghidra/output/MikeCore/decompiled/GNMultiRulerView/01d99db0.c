// Function: FUN_01d99db0
// Address: 01d99db0
// Size: 601 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d99db0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  longlong lVar8;
  longlong *local_70;
  char local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x1b0) == 0) goto LAB_01d99f4f;
  pplVar7 = &local_70;
  FUN_01cf3f40();
  plVar1 = local_70;
  if (DAT_027f1760 == '\0') {
    iVar5 = ___cxa_guard_acquire();
    if (iVar5 != 0) {
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
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01d99e43:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d99e43;
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
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = plVar1[0x27];
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_50 = 0;
    local_58 = 0;
    local_60 = lVar2;
    local_38 = plVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar8 = 0;
      do {
        local_70 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar8 * 8);
        lVar3 = local_70[2];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar3;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar2 + 0xc));
    }
    FUN_01da2210();
    if (local_38 == (longlong *)0x0) goto LAB_01d99f4f;
  }
  FUN_00d50b20();
LAB_01d99f4f:
  *unaff_RDI = puVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


