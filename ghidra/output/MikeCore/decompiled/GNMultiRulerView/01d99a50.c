// Function: FUN_01d99a50
// Address: 01d99a50
// Size: 645 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Removing unreachable block (ram,0x01d99bd4) */
/* WARNING: Removing unreachable block (ram,0x01d99bdd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01d99a50(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong *)(unaff_RSI + 0x150) == 0) {
    local_50 = '\0';
    plVar3 = (longlong *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar3 = local_58;
  }
  local_58 = plVar3;
  if ((DAT_027f1760 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar7 = &local_58;
      plVar3 = local_58;
      cVar4 = local_50;
      goto joined_r0x01d99b07;
    }
  }
  pplVar7 = &DAT_02802688;
  plVar3 = DAT_02802688;
  cVar4 = DAT_02802690;
joined_r0x01d99b07:
  if (cVar4 == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar1 = plVar3[0x27];
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = (longlong *)0x0;
      local_38 = 0;
      local_40 = 0;
      local_48 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          local_58 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
          lVar2 = local_58[2];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_01da2210();
    }
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  return unaff_RDI;
}


