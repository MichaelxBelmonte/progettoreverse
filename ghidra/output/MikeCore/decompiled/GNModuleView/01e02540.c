// Function: FUN_01e02540
// Address: 01e02540
// Size: 833 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"


/* WARNING: Removing unreachable block (ram,0x01e025da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02540(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x140);
  if (plVar1 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
LAB_01e025a4:
    FUN_01e4b940();
LAB_01e02681:
    if (local_48 != (longlong *)0x0) goto LAB_01e02686;
  }
  else {
    FUN_00d50b00();
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x370))();
    if (local_40 == (longlong *)0x0) {
      if (local_38 != '\0') {
        local_48 = (longlong *)0x0;
      }
LAB_01e025df:
      if (local_48 != (longlong *)0x0) goto LAB_01e025e8;
      goto LAB_01e02725;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e025df;
    }
    local_48 = local_40;
LAB_01e025e8:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == local_48) {
      FUN_01e4b940();
      goto LAB_01e02681;
    }
    if ((DAT_026e5340 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
    plVar2 = DAT_02802688;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar2 = DAT_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_48;
      }
    }
    if (plVar2 == (longlong *)0x0) {
LAB_01e02725:
      (**(code **)(*plVar1 + 0x398))();
      if (local_40 == local_48) {
LAB_01e02788:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = (longlong *)0x0;
        plVar2 = local_48;
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = local_48 != (longlong *)0x0;
          local_48 = local_40;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_01e02788;
        }
        plVar3 = local_40;
        plVar2 = local_40;
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar3 = local_40;
        }
      }
      local_48 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto LAB_01e027ad;
      }
      goto LAB_01e025a4;
    }
    (**(code **)(*local_48 + 0x978))();
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != local_58) goto LAB_01e02725;
    FUN_01e4b940();
LAB_01e02686:
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_01e027ad:
  FUN_00d50b20();
  return;
}


