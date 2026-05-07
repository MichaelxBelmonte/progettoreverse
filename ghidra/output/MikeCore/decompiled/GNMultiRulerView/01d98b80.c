// Function: FUN_01d98b80
// Address: 01d98b80
// Size: 591 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d98b80(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  longlong *local_50;
  char local_48;
  longlong local_40;
  int local_38;
  undefined8 local_34;
  
  if (unaff_RDI[0x2a] == 0) {
    local_48 = '\0';
    plVar3 = (longlong *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar3 = local_50;
  }
  local_50 = plVar3;
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
      pplVar6 = &local_50;
      plVar3 = local_50;
      cVar4 = local_48;
      goto joined_r0x01d98c1e;
    }
  }
  pplVar6 = &DAT_02802688;
  plVar3 = DAT_02802688;
  cVar4 = DAT_02802690;
joined_r0x01d98c1e:
  if (cVar4 == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (longlong *)0x0) && (lVar1 = plVar3[0x27], lVar1 != 0)) {
    local_48 = '\0';
    local_50 = (longlong *)0x0;
    local_34 = 0;
    lVar7 = 0;
    do {
      local_38 = (int)lVar7;
      local_40 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_38) goto LAB_01d98cde;
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar7 * 8);
      plVar8 = (longlong *)plVar2[2];
      lVar7 = lVar7 + 1;
      local_50 = plVar2;
    } while (plVar8 != (longlong *)*unaff_RSI);
    local_38 = (int)lVar7 + -1;
    if ((longlong *)plVar2[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar2[3] + 0x478))();
      plVar8 = (longlong *)plVar2[2];
    }
    (**(code **)(*plVar8 + 0x478))();
    local_34 = CONCAT44(local_34._4_4_,0xffffffff);
    (**(code **)(*unaff_RDI + 0x928))();
LAB_01d98cde:
    FUN_01da2210();
  }
  FUN_01d98e50();
  (**(code **)(*unaff_RDI + 0x928))();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


