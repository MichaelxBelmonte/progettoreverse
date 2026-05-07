// Reconstructed implementation of GNPlugInWrapperDelegate
// From MikeCore binary — reverse-engineered pseudocode

#include "GNPlugInWrapperDelegate.h"

// ============================================================
// @00bce900 — 3626 bytes
// str: ""GNPlugInWrapperDelegate""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bcf2d3) */
/* WARNING: Removing unreachable block (ram,0x00bcf2df) */
/* WARNING: Removing unreachable block (ram,0x00bcf5a3) */
/* WARNING: Removing unreachable block (ram,0x00bcf5ac) */
/* WARNING: Removing unreachable block (ram,0x00bcf4e1) */
/* WARNING: Removing unreachable block (ram,0x00bcf4ea) */
/* WARNING: Removing unreachable block (ram,0x00bcf41f) */
/* WARNING: Removing unreachable block (ram,0x00bcf428) */
/* WARNING: Removing unreachable block (ram,0x00bcf44c) */
/* WARNING: Removing unreachable block (ram,0x00bcf50e) */
/* WARNING: Removing unreachable block (ram,0x00bcf65a) */
/* WARNING: Removing unreachable block (ram,0x00bcf663) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bce900(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar11;
  undefined8 uVar12;
  longlong *local_a8;
  char local_a0;
  longlong local_40;
  char local_38;
  
  unaff_RDI[0xd] = (longlong)unaff_RSI;
  FUN_01f27fe0();
  if ((DAT_026cbca0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026cbc88 = "GNPlugInWrapperDelegate";
    DAT_026cbc98 = 0;
    _DAT_026cbc90 = 0;
    ___cxa_guard_release();
  }
  if (local_a8 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    uVar12 = (**(code **)(*local_a8 + 0x360))();
    lVar6 = FUN_00e86120(uVar12,1);
  }
  (**(code **)(*(longlong *)((longlong)local_a8 + lVar6) + 0x20))();
  lVar6 = unaff_RDI[5];
  lVar7 = lVar6;
  if (lVar6 != local_40) {
    lVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar7 = 0;
        goto LAB_00bce991;
      }
      FUN_00d50b00();
      lVar6 = unaff_RDI[5];
      unaff_RDI[5] = local_40;
    }
    else {
      local_38 = '\0';
LAB_00bce991:
      unaff_RDI[5] = lVar7;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
      lVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((DAT_028a5780 == (longlong *)0x0) || (DAT_028a5789 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5780 == (longlong *)0x0) {
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar10 = (longlong)&DAT_02573318;
      (*DAT_02573330)();
      if (DAT_028a5770 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5770 != (longlong *)0x0;
        DAT_028a5770 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5778 == '\0') {
        DAT_028a5778 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      plVar10 = (longlong *)FUN_00e8fc40();
      FUN_00bdab20();
      (**(code **)(*plVar10 + 0x18))();
      if (DAT_028a5780 == plVar10) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5780 != (longlong *)0x0;
        DAT_028a5780 = plVar10;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5788 == '\0') {
        DAT_028a5788 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02578b00;
      (*DAT_02578b18)();
      if (DAT_028a5790 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar11 = DAT_028a5790 != (undefined8 *)0x0;
        DAT_028a5790 = puVar8;
        if (bVar11) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5798 == '\0') {
        DAT_028a5798 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028a5789 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5789 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar9 = DAT_028a5780;
  plVar10 = (longlong *)unaff_RDI[0xb];
  if (plVar10 != DAT_028a5780) {
    if (DAT_028a5780 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0xb] = (longlong)plVar9;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar9 + 0x18))();
  plVar10 = (longlong *)unaff_RDI[0xc];
  if (plVar10 == plVar9) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0xc] = (longlong)plVar9;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar6 = unaff_RDI[5];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b690f0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x368))();
  lVar6 = unaff_RDI[0xc];
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00b68030();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x378))();
  FUN_00b33530();
  FUN_00b335a0();
  (**(code **)(*(longlong *)unaff_RDI[5] + 0x3a0))();
  (**(code **)(*(longlong *)unaff_RDI[5] + 0x398))(DAT_02410f78);
  (**(code **)(unaff_RDI[2] + 0x10))();
  FUN_00d50b00();
  FUN_00b32c10();
  if (unaff_RDI + 2 != (longlong *)0x0) {
    (**(code **)(unaff_RDI[2] + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(unaff_RDI[3] + 0x10))();
  FUN_00d50b00();
  FUN_00b34cd0();
  if (unaff_RDI + 3 != (longlong *)0x0) {
    (**(code **)(unaff_RDI[3] + 0x10))();
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] == 0) {
    return;
  }
  plVar10 = (longlong *)FUN_00e8fc40();
  FUN_0000ee70();
  (**(code **)(*plVar10 + 0x18))();
  FUN_00b30410();
  uVar12 = FUN_00003080();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b30350();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00003040();
  FUN_00d91a70(uVar12,1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00b303c0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*unaff_RSI + 0x68))();
  switch(uVar3) {
  case 0xb:
    FUN_00b303b0();
    lVar6 = DAT_027662b8;
    if (DAT_027662b8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0xc:
    FUN_00b303b0();
    lVar6 = DAT_027662a8;
    if (DAT_027662a8 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  default:
    FUN_00d50b20();
    lVar6 = DAT_02766278;
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    bVar1 = true;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar10 = (longlong *)0x0;
    goto LAB_00bcf2ac;
  case 0xf:
    FUN_00b303b0();
    lVar6 = DAT_027662c0;
    if (DAT_027662c0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    break;
  case 0x10:
    FUN_00b303b0();
    lVar6 = DAT_027662b0;
    if (DAT_027662b0 != 0) {
      FUN_00d50b00();
    }
    lVar7 = DAT_026fb928;
    if (DAT_026fb928 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7e120();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  bVar1 = false;
LAB_00bcf2ac:
  uVar12 = FUN_00b34ba0();
  FUN_00bcdd30(uVar12,0x200);
  lVar6 = unaff_RDI[7];
  lVar7 = lVar6;
  if (lVar6 == local_40) goto LAB_00bcf352;
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar7 = 0;
      goto LAB_00bcf310;
    }
    FUN_00d50b00();
    lVar6 = unaff_RDI[7];
    unaff_RDI[7] = local_40;
  }
  else {
    local_38 = '\0';
LAB_00bcf310:
    unaff_RDI[7] = lVar7;
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
    lVar7 = local_40;
  }
LAB_00bcf352:
  if ((local_38 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b34c20();
  (**(code **)(*unaff_RDI + 0x3d0))();
  lVar6 = DAT_027662c8;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
    lVar6 = DAT_027662c8;
  }
  DAT_027662c8 = lVar6;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3d8))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_027662d0;
  if (DAT_027662d0 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x3e0))();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  lVar6 = DAT_027662d8;
  if (DAT_027662d8 != 0) {
    FUN_00d50b00();
  }
  FUN_00e7e120();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((DAT_02802504 == 0) &&
     (DAT_02802504 = (**(code **)(*(longlong *)unaff_RDI[0xd] + 0xb8))(), DAT_02802504 == 0)) {
    (**(code **)(*unaff_RDI + 0x3d0))();
    FUN_00d99d60();
    lVar6 = DAT_027662e0;
    if (DAT_027662e0 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90eb0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    DAT_02802504 = (uVar4 & 0xff) * 2 + -1;
  }
  iVar5 = (**(code **)(*(longlong *)unaff_RDI[0xd] + 0xb0))();
  if ((iVar5 == 1) || (DAT_02802510 != '\0')) {
    FUN_00b67ff0();
  }
  if (!bVar1 && plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00bd0770 — 2133 bytes
// ============================================================

void FUN_00bd0770(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong local_30;
  char local_28;
  
  DAT_02802500 = 0;
  DAT_02802501 = 0;
  DAT_02802504 = 0;
  lVar5 = _CFBundleGetMainBundle();
  if ((lVar5 != 0) && (lVar5 = _CFBundleGetIdentifier(), lVar5 != 0)) {
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5740;
    if (DAT_028a5740 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = DAT_028a5740 != 0;
      DAT_028a5740 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5748 == '\0')) {
      DAT_028a5748 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5750;
    if (DAT_028a5750 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = DAT_028a5750 != 0;
      DAT_028a5750 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5758 == '\0')) {
      DAT_028a5758 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    _CFBundleGetValueForInfoDictionaryKey();
    FUN_00e1c780();
    lVar5 = DAT_028a5760;
    if (DAT_028a5760 != local_30) {
      if (local_28 == '\0') {
        if (local_30 == 0) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
          lVar5 = local_30;
        }
      }
      else {
        local_28 = '\0';
        lVar5 = local_30;
      }
      bVar2 = DAT_028a5760 != 0;
      DAT_028a5760 = lVar5;
      if (bVar2) {
        FUN_00d50b20();
        lVar5 = local_30;
      }
    }
    if ((lVar5 != 0) && (DAT_028a5768 == '\0')) {
      DAT_028a5768 = '\x01';
      FUN_00e8cb90();
      lVar5 = local_30;
    }
    if ((local_28 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5740 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5740;
    if (DAT_028a5740 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5740 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5748 == '\0')) {
      DAT_028a5748 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5750 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5750;
    if (DAT_028a5750 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5750 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5758 == '\0')) {
      DAT_028a5758 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_02766278;
  if (DAT_028a5760 == 0) {
    if (DAT_02766278 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_028a5760;
    if (DAT_028a5760 == lVar5) {
      bVar1 = false;
      bVar2 = false;
    }
    else {
      DAT_028a5760 = lVar5;
      bVar1 = true;
      bVar2 = true;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((lVar5 != 0) && (bVar2 = bVar1, DAT_028a5768 == '\0')) {
      DAT_028a5768 = '\x01';
      FUN_00e8cb90();
    }
    if (!bVar2 && lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  iVar4 = FUN_000030b0();
  if (iVar4 == 2) {
    FUN_00d6f370();
    lVar5 = DAT_02766280;
    if (DAT_02766280 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250c = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766288;
    if (DAT_02766288 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250d = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766290;
    if (DAT_02766290 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250e = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766298;
    if (DAT_02766298 != 0) {
      FUN_00d50b00();
    }
    DAT_0280250f = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_027662a0;
    if (DAT_027662a0 != 0) {
      FUN_00d50b00();
    }
    DAT_02802510 = FUN_00d70f90();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d6f370();
    lVar5 = DAT_02766280;
    if (DAT_02766280 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766288;
    if (DAT_02766288 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766290;
    if (DAT_02766290 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_02766298;
    if (DAT_02766298 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    lVar5 = DAT_027662a0;
    if (DAT_027662a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d72780();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00b4edb0 — 1511 bytes
// str: ""GNPlugInWrapperDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00b4edb0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 in_DL;
  int iVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong *local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RSI != 0) && (*(longlong *)(unaff_RDI + 0x20) != 0)) {
    FUN_01e53c20();
    lVar5 = local_88;
    if (((char)plStack_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_e0 = '\0';
      local_e8 = 0;
      FUN_01d3a910();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
      FUN_01e53c20();
      local_f8 = FUN_01e3f820();
      uStack_f0 = (undefined4)param_2;
      uStack_ec = (undefined4)((ulonglong)param_2 >> 0x20);
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d8b770();
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_00097dd0();
      *plVar4 = (longlong)&DAT_026b3fa8;
      plVar4[2] = (longlong)&DAT_026b4980;
      *(undefined4 *)(plVar4 + 0x3a) = 0;
      (*DAT_026b3fc0)();
      _objc_alloc();
      lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
      local_d8 = *(longlong *)(unaff_RDI + 0x18);
      local_d0 = '\0';
      (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      uVar2 = (**(code **)(*plVar4 + 0x978))();
      cVar1 = (**(code **)(*plVar4 + 0x980))();
      iVar3 = (uVar2 & 0xff) * 2;
      iVar7 = iVar3 + 0x10;
      if (cVar1 == '\0') {
        iVar7 = iVar3;
      }
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(iVar3,iVar7);
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,1);
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,in_DL);
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)(uVar10,1);
      (*(code *)PTR__objc_msgSend_024a9998)(uVar10,1);
      FUN_01f25900(uStack_f0);
      uVar10 = (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)PTR__objc_msgSend_024a9998)(uVar10,lVar5);
      (*(code *)PTR__objc_release_024a99a0)();
      local_88 = lVar5;
      plStack_80 = plVar4;
      FUN_01f09f50(0,&local_f8);
      FUN_01e53c20();
      (**(code **)(*local_48 + 0x528))();
      FUN_01e4cf40();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(longlong **)(unaff_RDI + 0x30) != (longlong *)0x0) {
        cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x20))();
        if (cVar1 != '\0') {
          cVar1 = (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x20))();
          if ((cVar1 != '\0') && ((DAT_028a5118 == (longlong *)0x0 || (DAT_028a5121 == '\0')))) {
            FUN_00e8cb50();
            if (DAT_028a5118 == (longlong *)0x0) {
              plVar6 = (longlong *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*plVar6 + 0x18))();
              bVar9 = DAT_028a5118 == (longlong *)0x0;
              DAT_028a5118 = plVar6;
              if (bVar9) {
LAB_00b4f101:
                if (DAT_028a5120 == '\0') {
                  DAT_028a5120 = '\x01';
                  FUN_00e8cb90();
                }
              }
              else {
                FUN_00d50b20();
                if (DAT_028a5118 != (longlong *)0x0) goto LAB_00b4f101;
              }
              FUN_01d88e40();
              DAT_028a5121 = '\x01';
              FUN_00e8cb70();
            }
            else {
              DAT_028a5121 = '\x01';
              FUN_00e8cb70();
            }
          }
          if (DAT_028a5118 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
            local_c0 = '\0';
            local_c8 = plVar4;
            FUN_00b4f6a0(uVar10,&local_c8);
            if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      (**(code **)(*plVar4 + 0x988))();
      plVar6 = *(longlong **)(unaff_RDI + 0x28);
      if (plVar6 != plVar4) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0x28) = plVar4;
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      local_b0 = '\0';
      local_b8 = plVar4;
      (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x4c8))((int)DAT_023dccec,DAT_023dccf4);
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      FUN_01d8c720();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      FUN_01f27fe0();
      if (DAT_026cbca0 == '\0') {
        iVar3 = ___cxa_guard_acquire();
        if (iVar3 != 0) {
          _DAT_026cbc88 = "GNPlugInWrapperDelegate";
          DAT_026cbc98 = 0;
          _DAT_026cbc90 = 0;
          ___cxa_guard_release();
        }
      }
      if (local_48 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        uVar10 = (**(code **)(*local_48 + 0x360))();
        lVar5 = FUN_00e86120(uVar10,1);
      }
      local_a0 = '\0';
      local_a8 = plVar4;
      (**(code **)(*(longlong *)((longlong)local_48 + lVar5) + 0x28))();
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_98 = 0;
      local_90 = '\0';
      FUN_01d3a930();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar8 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
      goto LAB_00b4f335;
    }
  }
  uVar8 = 0;
LAB_00b4f335:
  FUN_00da71b0();
  return uVar8 & 0xffffffff;
}




// ============================================================
// @00bd1510 — 648 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bd15c7) */
/* WARNING: Removing unreachable block (ram,0x00bd1590) */
/* WARNING: Removing unreachable block (ram,0x00bd1587) */
/* WARNING: Removing unreachable block (ram,0x00bd15be) */
/* WARNING: Removing unreachable block (ram,0x00bd1711) */
/* WARNING: Removing unreachable block (ram,0x00bd171a) */

void FUN_00bd1510(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (unaff_RDI[6] != 0) {
    (**(code **)(*unaff_RDI + 0x5f0))();
  }
  cVar2 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x390))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0x4d8))();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00b34c40();
  }
  FUN_00b34cd0();
  FUN_00b32c10();
  (**(code **)(*DAT_028a5770 + 0x368))();
  lVar3 = unaff_RDI[5];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00b69160();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00b690c0();
  iVar1 = *(int *)(local_38 + 0xc);
  if (local_30 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    lVar3 = unaff_RDI[0xc];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00b680a0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50130();
  }
  if (unaff_RDI[0xc] != 0) {
    unaff_RDI[0xc] = 0;
    FUN_00d50b20();
  }
  lVar3 = unaff_RDI[0xb];
  if (lVar3 != DAT_028a5780) {
    FUN_00b68000();
    iVar1 = *(int *)(local_38 + 0xc);
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      lVar3 = unaff_RDI[0xb];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00d7a770();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    lVar3 = unaff_RDI[0xb];
  }
  if (lVar3 != 0) {
    unaff_RDI[0xb] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x378))();
  FUN_00d50130();
  if (unaff_RDI[5] != 0) {
    unaff_RDI[5] = 0;
    FUN_00d50b20();
  }
  FUN_00d50550();
  return;
}




// ============================================================
// @00b4f760 — 628 bytes
// str: ""GNPlugInWrapperDelegate""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b4f7a5) */
/* WARNING: Removing unreachable block (ram,0x00b4f7ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00b4f760(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  FUN_00da7190();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    FUN_01d3a910();
    local_70 = '\0';
    local_78 = 0;
    (*(code *)PTR__objc_msgSend_024a9998)(param_1,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    (*(code *)PTR__objc_msgSend_024a9998)();
    FUN_01f27fe0();
    plVar2 = local_48;
    if ((DAT_026cbca0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026cbc88 = "GNPlugInWrapperDelegate";
      DAT_026cbc98 = 0;
      _DAT_026cbc90 = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (longlong *)0x0) {
      lVar4 = 0;
      local_58 = *(longlong *)(unaff_RDI + 0x28);
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      lVar4 = FUN_00e86120(param_1,1);
      local_58 = *(longlong *)(unaff_RDI + 0x28);
    }
    if (local_58 != 0) {
      local_50 = 0;
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*(longlong *)((longlong)plVar2 + lVar4) + 0x30))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x4d0))();
    (**(code **)(**(longlong **)(unaff_RDI + 0x28) + 0x990))();
    FUN_00d50130();
    unaff_RBX = DAT_028a5118;
    if (DAT_028a5118 != 0) {
      plVar2 = *(longlong **)(unaff_RDI + 0x28);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_40 = '\0';
      local_48 = plVar2;
      FUN_00ca13a0();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    local_60 = '\0';
    local_68 = 0;
    FUN_01d3a930();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x28) != 0) {
      *(undefined8 *)(unaff_RDI + 0x28) = 0;
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar1 != 0) & 0xffffffff;
}




// ============================================================
// @00bd1ca0 — 619 bytes
// ============================================================

void FUN_00bd1ca0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_438;
  char local_430;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (DAT_02802500 == '\0') {
    iVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x68) + 0x70))(param_1,0x400);
    if (iVar3 < 1) {
      iVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x68) + 0x78))();
      if (0 < iVar3) {
        FUN_00d920f0();
        lVar4 = DAT_028a5740;
        if (DAT_028a5740 != local_438) {
          if (local_430 == '\0') {
            if (local_438 == 0) {
              lVar4 = 0;
            }
            else {
              FUN_00d50b00();
              lVar4 = local_438;
            }
          }
          else {
            local_430 = '\0';
            lVar4 = local_438;
          }
          bVar2 = DAT_028a5740 != 0;
          DAT_028a5740 = lVar4;
          if (bVar2) {
            FUN_00d50b20();
            lVar4 = local_438;
          }
        }
        if ((lVar4 != 0) && (DAT_028a5748 == '\0')) {
          DAT_028a5748 = '\x01';
          FUN_00e8cb90();
          lVar4 = local_438;
        }
        if ((local_430 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d93730();
      lVar4 = DAT_028a5740;
      if (DAT_028a5740 != local_438) {
        if (local_430 == '\0') {
          if (local_438 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_438;
          }
        }
        else {
          local_430 = '\0';
          lVar4 = local_438;
        }
        bVar2 = DAT_028a5740 != 0;
        DAT_028a5740 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_438;
        }
      }
      if ((lVar4 != 0) && (DAT_028a5748 == '\0')) {
        DAT_028a5748 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_438;
      }
      if ((local_430 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    DAT_02802500 = '\x01';
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = DAT_028a5740;
  if (DAT_028a5740 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



