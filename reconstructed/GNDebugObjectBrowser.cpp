// Reconstructed implementation of GNDebugObjectBrowser
// From MikeCore binary — reverse-engineered pseudocode

#include "GNDebugObjectBrowser.h"

// ============================================================
// @01f5ab60 — 2225 bytes
// str: ""GNDebugObjectBrowser""
// str: ""handleCopy""
// str: ""handleFinishEditing""
// str: ""handlePaste""
// str: ""handleSelectCell""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5ab60(void)

{
  int iVar1;
  
  if (DAT_028bab58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bab18 = "handleEditCell";
      _DAT_028bab20 = &DAT_026eb090;
      _DAT_028bab28 = 0;
      _DAT_028bab30 = &DAT_028007f0;
      _DAT_028bab38 = FUN_01f67450;
      _DAT_028bab40 = FUN_01f634e0;
      _DAT_028bab48 = 0;
      uRam00000000028bab50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028baba0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bab60 = "handleSelectCell";
      _DAT_028bab68 = &DAT_026eb090;
      _DAT_028bab70 = 0;
      _DAT_028bab78 = &DAT_028007f0;
      _DAT_028bab80 = FUN_01f67450;
      _DAT_028bab88 = FUN_01f64970;
      _DAT_028bab90 = 0;
      uRam00000000028bab98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028babe8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028baba8 = "handleFinishEditing";
      _DAT_028babb0 = &DAT_026eb090;
      _DAT_028babb8 = 0;
      _DAT_028babc0 = &DAT_028007f0;
      _DAT_028babc8 = FUN_01f67450;
      _DAT_028babd0 = FUN_01f64a20;
      _DAT_028babd8 = 0;
      uRam00000000028babe0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bac30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028babf0 = "handleCopy";
      _DAT_028babf8 = &DAT_026eb090;
      _DAT_028bac00 = 0;
      _DAT_028bac08 = &DAT_028007f0;
      _DAT_028bac10 = FUN_01f67450;
      _DAT_028bac18 = FUN_01f65830;
      _DAT_028bac20 = 0;
      uRam00000000028bac28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bac78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bac38 = "handlePaste";
      _DAT_028bac40 = &DAT_026eb090;
      _DAT_028bac48 = 0;
      _DAT_028bac50 = &DAT_028007f0;
      _DAT_028bac58 = FUN_01f67450;
      _DAT_028bac60 = FUN_01f64ef0;
      _DAT_028bac68 = 0;
      uRam00000000028bac70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028bacc0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb158 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028bac80 = "handleStopModal";
      _DAT_028bac88 = &DAT_026eb090;
      _DAT_028bac90 = 0;
      _DAT_028bac98 = &DAT_028007f0;
      _DAT_028baca0 = FUN_01f67450;
      _DAT_028baca8 = FUN_01f66f00;
      _DAT_028bacb0 = 0;
      uRam00000000028bacb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01f5b910 — 771 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5b910(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x10) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d0))(0,_DAT_02423950);
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x558))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x570))();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0083cb00();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x88) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x4d0))(0,_DAT_02423950);
  FUN_01ce8690();
  FUN_01ceca30();
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  FUN_01ce86a0();
  if ((longlong *)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x558))();
  FUN_00d50b00();
  FUN_01cebab0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_028007b0;
  if (DAT_028007b0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceba50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4580;
  if (DAT_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01ce8620();
  FUN_01ce8670();
  FUN_01ce84d0();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_01ce8720();
  }
  return;
}




// ============================================================
// @001c1360 — 512 bytes
// str: ""GNDebugObjectBrowser""
// str: ""_debugObjectBrowserDelegate""
// str: ""GNDebugObjectBrowserDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c1360(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_026eb1b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_026eb158 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026eb0a8 = FUN_00015ff0();
          _DAT_026eb090 = "GNDebugObjectBrowser";
          _DAT_026eb098 = 0xc0;
          _DAT_026eb0a0 = FUN_001c0b00;
          _DAT_026eb0b0 = 0;
          uRam00000000026eb0b8 = 0;
          _DAT_026eb0c0 = 0;
          _DAT_026eb138 = 0;
          uRam00000000026eb140 = 0;
          _DAT_026eb148 = 0;
          DAT_026eb14a = 1;
          _DAT_026eb0c8 = 0;
          uRam00000000026eb0d0 = 0;
          _DAT_026eb0d8 = 0;
          uRam00000000026eb0e0 = 0;
          _DAT_026eb0e8 = 0;
          uRam00000000026eb0f0 = 0;
          _DAT_026eb0f8 = 0;
          uRam00000000026eb100 = 0;
          _DAT_026eb108 = 0;
          uRam00000000026eb110 = 0;
          _DAT_026eb118 = 0;
          uRam00000000026eb120 = 0;
          _DAT_026eb128 = 0;
          uRam00000000026eb130 = 0;
          DAT_026eb153 = 0;
          _DAT_026eb14b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_026eb198 = (iVar1 != 0) << 6 | 0x82;
      _DAT_026eb180 = "_debugObjectBrowserDelegate";
      _DAT_026eb188 = &DAT_026eb090;
      _DAT_026eb190 = 0;
      _DAT_026eb1a0 = 0;
      uRam00000000026eb1a8 = 0;
      _DAT_026eb1b0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026eb1c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026eb1e0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026eb1c8 = "GNDebugObjectBrowserDelegate";
          DAT_026eb1d8 = 0;
          _DAT_026eb1d0 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_026eb180;
}



