// Reconstructed implementation of GNAudioProcessorController
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioProcessorController.h"

// ============================================================
// @00b36c50 — 915 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b36cec) */
/* WARNING: Removing unreachable block (ram,0x00b36cf8) */
/* WARNING: Removing unreachable block (ram,0x00b36ead) */
/* WARNING: Removing unreachable block (ram,0x00b36eb9) */
/* WARNING: Removing unreachable block (ram,0x00b36de4) */
/* WARNING: Removing unreachable block (ram,0x00b36ded) */
/* WARNING: Removing unreachable block (ram,0x00b36e2f) */
/* WARNING: Removing unreachable block (ram,0x00b36e38) */

void FUN_00b36c50(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 in_ECX;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong *local_88;
  char local_80;
  undefined4 local_74;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*unaff_RDI + 0x5d0))();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    (**(code **)(*unaff_RDI + 0x5d0))();
    FUN_00b32070(local_74,in_ECX);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
    lVar1 = DAT_0276caa0;
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      uVar4 = FUN_00d50b00();
      lVar1 = DAT_0276caa0;
    }
    DAT_0276caa0 = lVar1;
    if (lVar1 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
    uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar4 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar2 = DAT_0276ca98;
    if (lVar1 != 0) {
      if (DAT_0276ca98 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_40 = lVar2;
      local_38 = '\0';
      FUN_00ca0840(uVar4,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = DAT_0276caa8;
    if (DAT_0276caa8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = '\0';
    local_88 = plVar3;
    FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x5e8))();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00b365f0 — 848 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00b36662) */
/* WARNING: Removing unreachable block (ram,0x00b36656) */
/* WARNING: Removing unreachable block (ram,0x00b36817) */
/* WARNING: Removing unreachable block (ram,0x00b36823) */
/* WARNING: Removing unreachable block (ram,0x00b3674e) */
/* WARNING: Removing unreachable block (ram,0x00b36757) */
/* WARNING: Removing unreachable block (ram,0x00b36799) */
/* WARNING: Removing unreachable block (ram,0x00b367a2) */

void FUN_00b365f0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong *local_88;
  char local_80;
  undefined4 local_74;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_74 = param_1;
  (**(code **)(*unaff_RDI + 0x5d0))();
  FUN_00b32070(local_74,param_2);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
  lVar1 = DAT_0276caa0;
  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = DAT_0276caa0;
  }
  DAT_0276caa0 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  FUN_00ca0840(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x5d0))();
  uVar4 = (**(code **)(*local_50 + 0x480))(uVar4,unaff_ESI);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (uVar4 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      uVar4 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = DAT_0276ca98;
  if (lVar1 != 0) {
    if (DAT_0276ca98 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_40 = lVar2;
    local_38 = '\0';
    FUN_00ca0840(uVar4,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar1 = DAT_0276caa8;
  if (DAT_0276caa8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = '\0';
  local_88 = plVar3;
  FUN_00d40470(&local_88,&stack0xffffffffffffff90,3,3);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00b35dc0 — 679 bytes
// str: ""GNAudioProcessorController""
// str: ""setProcessorParameterAtIndex""
// str: ""editProcessorParameterAtIndex""
// str: ""vfi@e""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b35dc0(void)

{
  int iVar1;
  
  if (DAT_028a4ed8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02756490 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027563e0 = FUN_00015ff0();
          _DAT_027563c8 = "GNAudioProcessorController";
          _DAT_027563d0 = 0x98;
          _DAT_027563d8 = FUN_00afa990;
          _DAT_027563e8 = 0;
          uRam00000000027563f0 = 0;
          _DAT_027563f8 = 0;
          uRam0000000002756400 = 0;
          _DAT_02756408 = 0;
          uRam0000000002756410 = 0;
          _DAT_02756418 = 0;
          uRam0000000002756420 = 0;
          _DAT_02756428 = 0;
          uRam0000000002756430 = 0;
          _DAT_02756438 = 0;
          uRam0000000002756440 = 0;
          _DAT_02756448 = 0;
          uRam0000000002756450 = 0;
          _DAT_02756458 = 0;
          uRam0000000002756460 = 0;
          _DAT_02756468 = 0;
          uRam0000000002756470 = 0;
          _DAT_02756478 = 0;
          uRam0000000002756480 = 0;
          _DAT_02756488 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a4e98 = "setProcessorParameterAtIndex";
      _DAT_028a4ea0 = &DAT_027563c8;
      _DAT_028a4ea8 = 0;
      _DAT_028a4eb0 = &DAT_0275e660;
      _DAT_028a4eb8 = FUN_00b37d30;
      _DAT_028a4ec0 = 0x5d9;
      _DAT_028a4ec8 = 0;
      uRam00000000028a4ed0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a4f20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02756490 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027563e0 = FUN_00015ff0();
          _DAT_027563c8 = "GNAudioProcessorController";
          _DAT_027563d0 = 0x98;
          _DAT_027563d8 = FUN_00afa990;
          _DAT_027563e8 = 0;
          uRam00000000027563f0 = 0;
          _DAT_027563f8 = 0;
          uRam0000000002756400 = 0;
          _DAT_02756408 = 0;
          uRam0000000002756410 = 0;
          _DAT_02756418 = 0;
          uRam0000000002756420 = 0;
          _DAT_02756428 = 0;
          uRam0000000002756430 = 0;
          _DAT_02756438 = 0;
          uRam0000000002756440 = 0;
          _DAT_02756448 = 0;
          uRam0000000002756450 = 0;
          _DAT_02756458 = 0;
          uRam0000000002756460 = 0;
          _DAT_02756468 = 0;
          uRam0000000002756470 = 0;
          _DAT_02756478 = 0;
          uRam0000000002756480 = 0;
          _DAT_02756488 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a4ee0 = "editProcessorParameterAtIndex";
      _DAT_028a4ee8 = &DAT_027563c8;
      _DAT_028a4ef0 = 0;
      _DAT_028a4ef8 = s_vfi_e_0275e665;
      _DAT_028a4f00 = FUN_00b37d60;
      _DAT_028a4f08 = 0x5e1;
      _DAT_028a4f10 = 0;
      uRam00000000028a4f18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00af0290 — 513 bytes
// str: ""GNAudioProcessorController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00af03ba) */
/* WARNING: Removing unreachable block (ram,0x00af03ac) */
/* WARNING: Removing unreachable block (ram,0x00af03c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af0290(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  
  if ((DAT_02756490 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027563e0 = FUN_00015ff0();
    _DAT_027563c8 = "GNAudioProcessorController";
    _DAT_027563d0 = 0x98;
    _DAT_027563d8 = FUN_00afa990;
    _DAT_027563e8 = 0;
    uRam00000000027563f0 = 0;
    _DAT_027563f8 = 0;
    uRam0000000002756400 = 0;
    _DAT_02756408 = 0;
    uRam0000000002756410 = 0;
    _DAT_02756418 = 0;
    uRam0000000002756420 = 0;
    _DAT_02756428 = 0;
    uRam0000000002756430 = 0;
    _DAT_02756438 = 0;
    uRam0000000002756440 = 0;
    _DAT_02756448 = 0;
    uRam0000000002756450 = 0;
    _DAT_02756458 = 0;
    uRam0000000002756460 = 0;
    _DAT_02756468 = 0;
    uRam0000000002756470 = 0;
    _DAT_02756478 = 0;
    _uRam0000000002756480 = 0;
    _DAT_02756488 = 0;
    ___cxa_guard_release();
  }
  if (DAT_02756483 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_00afa9e0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00b35dc0();
    FUN_00e87920(uVar2,0);
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    if (local_d0 != 0) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



