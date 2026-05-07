// Function: FUN_01bec670
// Address: 01bec670
// Size: 1168 bytes
// Class: MUHorizontalOverviewScroller
// String references:
//   "MUHorizontalOverviewScroller"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bec670(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar5 = *unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x1a0) == lVar5) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x1a0) == 0) {
    lVar7 = 0;
    lVar2 = lVar7;
    if (lVar5 != 0) goto LAB_01bec78f;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_60 = 0;
    lVar5 = *(longlong *)(unaff_RDI + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar5;
    FUN_00d41040(&local_68,&local_b8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = *unaff_RSI;
    lVar7 = *(longlong *)(unaff_RDI + 0x1a0);
    lVar2 = lVar7;
    if (lVar7 != lVar5) {
LAB_01bec78f:
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x1a0) = lVar5;
      lVar2 = lVar5;
      if (lVar7 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(unaff_RDI + 0x1a0);
      }
    }
  }
  if (lVar2 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_40 = 0;
    lVar5 = *(longlong *)(unaff_RDI + 0x1a0);
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar5;
    FUN_00d41430(&local_48,&local_a8);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bece10();
  }
  if (*(longlong *)(unaff_RDI + 0x1b0) == 0) goto LAB_01bec9c1;
  FUN_00d50b00();
  FUN_00d50b20();
  FUN_01beab60();
  pplVar6 = &local_38;
  FUN_01d97e80();
  plVar1 = local_38;
  if ((DAT_02735a90 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_027359e0 = FUN_00835bf0();
    _DAT_027359c8 = "MUHorizontalOverviewScroller";
    _DAT_027359d0 = 0x248;
    _DAT_027359d8 = FUN_00835b60;
    _DAT_027359e8 = 0;
    uRam00000000027359f0 = 0;
    _DAT_027359f8 = 0;
    _DAT_02735a70 = 0;
    uRam0000000002735a78 = 0;
    _DAT_02735a80 = 0;
    DAT_02735a82 = 1;
    _DAT_02735a00 = 0;
    uRam0000000002735a08 = 0;
    _DAT_02735a10 = 0;
    uRam0000000002735a18 = 0;
    _DAT_02735a20 = 0;
    uRam0000000002735a28 = 0;
    _DAT_02735a30 = 0;
    uRam0000000002735a38 = 0;
    _DAT_02735a40 = 0;
    uRam0000000002735a48 = 0;
    _DAT_02735a50 = 0;
    uRam0000000002735a58 = 0;
    _DAT_02735a60 = 0;
    uRam0000000002735a68 = 0;
    DAT_02735a8b = 0;
    _DAT_02735a83 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01bec918:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bec918;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_98 = *unaff_RSI;
    local_90 = '\0';
    FUN_01a12210();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01bec9c1:
  if (*(longlong *)(unaff_RDI + 0x1b8) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(longlong **)(unaff_RDI + 0x1b8);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_88 = *unaff_RSI;
    local_80 = '\0';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}


