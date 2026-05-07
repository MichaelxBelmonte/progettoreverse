// Function: FUN_01d98e50
// Address: 01d98e50
// Size: 761 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"


/* WARNING: Removing unreachable block (ram,0x01d98fbb) */
/* WARNING: Removing unreachable block (ram,0x01d98fc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d98e50(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_50;
  char local_48;
  longlong local_40;
  int local_38;
  undefined8 local_34;
  
  if (unaff_RDI[0x36] == 0) {
    return;
  }
  pplVar6 = &local_50;
  FUN_01cf3f40();
  plVar1 = local_50;
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01d98ebe;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_01d98ebe:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    lVar2 = plVar1[0x27];
    lVar5 = 0;
    if (lVar2 != 0) {
      local_48 = '\0';
      local_50 = (longlong *)0x0;
      local_34 = 0;
      lVar5 = 0;
      do {
        local_38 = (int)lVar5;
        local_40 = lVar2;
        if (*(int *)(lVar2 + 0xc) <= local_38) goto LAB_01d98f7f;
        local_50 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while (local_50[2] != *unaff_RSI);
      local_38 = (int)lVar5 + -1;
      if ((longlong *)local_50[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_50[3] + 0x478))();
      }
      (**(code **)(*(longlong *)local_50[2] + 0x478))();
      local_34 = CONCAT44(local_34._4_4_,~(uint)local_34);
LAB_01d98f7f:
      FUN_01da2210();
      lVar5 = plVar1[0x27];
    }
    if (*(int *)(lVar5 + 0xc) == 0) {
      FUN_01cf5bb0();
      plVar1 = (longlong *)unaff_RDI[0x36];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = plVar1;
      FUN_00d23f50();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x36] + 0x478))();
      if (unaff_RDI[0x36] != 0) {
        unaff_RDI[0x36] = 0;
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)unaff_RDI[0x37] + 0x480))();
      (**(code **)(*(longlong *)unaff_RDI[0x37] + 0x478))();
      if (unaff_RDI[0x37] != 0) {
        unaff_RDI[0x37] = 0;
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x928))();
    FUN_00d50b20();
  }
  return;
}


