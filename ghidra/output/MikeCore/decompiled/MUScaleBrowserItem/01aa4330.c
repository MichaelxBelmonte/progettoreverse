// Function: FUN_01aa4330
// Address: 01aa4330
// Size: 541 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01aa4330(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  
  plVar7 = (longlong *)*unaff_RSI;
  uVar9 = (undefined7)((ulonglong)plVar7 >> 8);
  if (plVar7 == unaff_RDI) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_01aa4492;
  }
  if ((DAT_02737920 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027e2e88 = FUN_00d4fe50();
    _DAT_027e2e70 = "MUScaleBrowserItem";
    _DAT_027e2e78 = 0x20;
    _DAT_027e2e80 = FUN_00841ad0;
    _DAT_027e2e90 = 0;
    uRam00000000027e2e98 = 0;
    _DAT_027e2ea0 = 0;
    uRam00000000027e2ea8 = 0;
    _DAT_027e2eb0 = 0;
    uRam00000000027e2eb8 = 0;
    _DAT_027e2ec0 = 0;
    uRam00000000027e2ec8 = 0;
    _DAT_027e2ed0 = 0;
    uRam00000000027e2ed8 = 0;
    _DAT_027e2ee0 = 0;
    uRam00000000027e2ee8 = 0;
    _DAT_027e2ef0 = 0;
    uRam00000000027e2ef8 = 0;
    _DAT_027e2f00 = 0;
    uRam00000000027e2f08 = 0;
    _DAT_027e2f10 = 0;
    uRam00000000027e2f18 = 0;
    _DAT_027e2f20 = 0;
    uRam00000000027e2f28 = 0;
    _DAT_027e2f30 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (longlong *)0x0) {
LAB_01aa4388:
    plVar7 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_01aa4388;
  }
  if (*plVar7 == 0) {
    uVar8 = 0;
  }
  else {
    lVar1 = unaff_RDI[3];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(*unaff_RSI + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 == lVar2) {
      uVar8 = CONCAT71(uVar9,1);
    }
    else if (unaff_RDI[3] == 0) {
      uVar8 = 0;
    }
    else {
      FUN_00d50b00();
      if (*(longlong *)(*unaff_RSI + 0x18) == 0) {
        uVar8 = 0;
      }
      else {
        FUN_00d50b00();
        plVar7 = (longlong *)unaff_RDI[3];
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        lVar3 = *(longlong *)(*unaff_RSI + 0x18);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        uVar5 = (**(code **)(*plVar7 + 0x50))();
        uVar8 = (ulonglong)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01aa4492:
  return uVar8 & 0xffffffff;
}


