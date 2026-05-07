// Reconstructed implementation of GNWizardView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNWizardView.h"

// ============================================================
// @01f18290 — 685 bytes
// str: ""GNWizardView""
// str: ""handleShowNextSheet""
// str: ""handleShowPreviousSheet""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f18290(void)

{
  int iVar1;
  
  if (DAT_028ba790 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fd398 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fd2e8 = FUN_0006d940();
          _DAT_027fd2d0 = "GNWizardView";
          _DAT_027fd2d8 = 0x158;
          _DAT_027fd2e0 = FUN_01e92700;
          _DAT_027fd2f0 = 0;
          uRam00000000027fd2f8 = 0;
          _DAT_027fd300 = 0;
          uRam00000000027fd308 = 0;
          _DAT_027fd310 = 0;
          uRam00000000027fd318 = 0;
          _DAT_027fd320 = 0;
          uRam00000000027fd328 = 0;
          _DAT_027fd330 = 0;
          uRam00000000027fd338 = 0;
          _DAT_027fd340 = 0;
          uRam00000000027fd348 = 0;
          _DAT_027fd350 = 0;
          uRam00000000027fd358 = 0;
          _DAT_027fd360 = 0;
          uRam00000000027fd368 = 0;
          _DAT_027fd370 = 0;
          uRam00000000027fd378 = 0;
          _DAT_027fd380 = 0;
          uRam00000000027fd388 = 0;
          _DAT_027fd390 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba750 = "handleShowNextSheet";
      _DAT_028ba758 = &DAT_027fd2d0;
      _DAT_028ba760 = 0;
      _DAT_028ba768 = &DAT_027ff108;
      _DAT_028ba770 = FUN_01f19070;
      _DAT_028ba778 = FUN_01f18bd0;
      _DAT_028ba780 = 0;
      uRam00000000028ba788 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba7d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fd398 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fd2e8 = FUN_0006d940();
          _DAT_027fd2d0 = "GNWizardView";
          _DAT_027fd2d8 = 0x158;
          _DAT_027fd2e0 = FUN_01e92700;
          _DAT_027fd2f0 = 0;
          uRam00000000027fd2f8 = 0;
          _DAT_027fd300 = 0;
          uRam00000000027fd308 = 0;
          _DAT_027fd310 = 0;
          uRam00000000027fd318 = 0;
          _DAT_027fd320 = 0;
          uRam00000000027fd328 = 0;
          _DAT_027fd330 = 0;
          uRam00000000027fd338 = 0;
          _DAT_027fd340 = 0;
          uRam00000000027fd348 = 0;
          _DAT_027fd350 = 0;
          uRam00000000027fd358 = 0;
          _DAT_027fd360 = 0;
          uRam00000000027fd368 = 0;
          _DAT_027fd370 = 0;
          uRam00000000027fd378 = 0;
          _DAT_027fd380 = 0;
          uRam00000000027fd388 = 0;
          _DAT_027fd390 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba798 = "handleShowPreviousSheet";
      _DAT_028ba7a0 = &DAT_027fd2d0;
      _DAT_028ba7a8 = 0;
      _DAT_028ba7b0 = &DAT_027ff108;
      _DAT_028ba7b8 = FUN_01f19070;
      _DAT_028ba7c0 = FUN_01f18d70;
      _DAT_028ba7c8 = 0;
      uRam00000000028ba7d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01f18560 — 652 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f1860a) */
/* WARNING: Removing unreachable block (ram,0x01f18616) */
/* WARNING: Removing unreachable block (ram,0x01f1878d) */
/* WARNING: Removing unreachable block (ram,0x01f18796) */

void FUN_01f18560(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  local_90 = 0;
  local_88 = '\0';
  FUN_01e51a60(param_1,&local_90);
  if (local_40 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = local_40;
    if (local_38 != '\0') {
      local_38 = '\0';
      goto LAB_01f185ea;
    }
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01f185ea:
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = *unaff_RSI;
  local_78 = '\0';
  FUN_01f19190();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)0x0;
  if (*(longlong **)(unaff_RDI + 0x138) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x4d0))();
    plVar2 = *(longlong **)(unaff_RDI + 0x138);
  }
  if (plVar2 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x138) = plVar3;
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  FUN_01e3f820();
  (**(code **)(*plVar3 + 0x4c8))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x150);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar1;
  (**(code **)(*plVar3 + 0x5c0))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar3 + 0x520))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x520))();
    (**(code **)(*local_40 + 0x8c0))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d21140();
  if (*(longlong **)(unaff_RDI + 0x140) != (longlong *)0x0) {
    local_60 = *unaff_RSI;
    local_58 = '\0';
    (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x18))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



