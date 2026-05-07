// Reconstructed implementation of MDDocumentViewController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDDocumentViewController.h"

// ============================================================
// @006f07b0 — 11069 bytes
// str: ""MDDocumentViewController""
// str: ""handleImportTempo""
// str: ""handleToggleShowTempoEditor""
// str: ""handleToggleShowChangeTempoEditor""
// str: ""handleToggleShowDefineTempoEditor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f07b0(void)

{
  int iVar1;
  
  if (DAT_0280c0f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c0b8 = "handleImportTempo";
      _DAT_0280c0c0 = &DAT_026fe6a0;
      _DAT_0280c0c8 = 0;
      _DAT_0280c0d0 = &DAT_02728008;
      _DAT_0280c0d8 = FUN_00713960;
      _DAT_0280c0e0 = FUN_00707bf0;
      _DAT_0280c0e8 = 0;
      uRam000000000280c0f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c140 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c100 = "handleAddTrack";
      _DAT_0280c108 = &DAT_026fe6a0;
      _DAT_0280c110 = 0;
      _DAT_0280c118 = &DAT_02728008;
      _DAT_0280c120 = FUN_00713960;
      _DAT_0280c128 = FUN_006fb580;
      _DAT_0280c130 = 0;
      uRam000000000280c138 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c188 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c148 = "handleDetectTimelineWithSelection";
      _DAT_0280c150 = &DAT_026fe6a0;
      _DAT_0280c158 = 0;
      _DAT_0280c160 = &DAT_02728008;
      _DAT_0280c168 = FUN_00713960;
      _DAT_0280c170 = FUN_00702ff0;
      _DAT_0280c178 = 0;
      uRam000000000280c180 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c1d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c190 = "handleDetectTimelineWithSelectionAndMerge";
      _DAT_0280c198 = &DAT_026fe6a0;
      _DAT_0280c1a0 = 0;
      _DAT_0280c1a8 = &DAT_02728008;
      _DAT_0280c1b0 = FUN_00713960;
      _DAT_0280c1b8 = FUN_00703000;
      _DAT_0280c1c0 = 0;
      uRam000000000280c1c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c218 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c1d8 = "handleSmoothenTempoAnchors";
      _DAT_0280c1e0 = &DAT_026fe6a0;
      _DAT_0280c1e8 = 0;
      _DAT_0280c1f0 = &DAT_02728008;
      _DAT_0280c1f8 = FUN_00713960;
      _DAT_0280c200 = FUN_007031f0;
      _DAT_0280c208 = 0;
      uRam000000000280c210 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c260 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c220 = "handleSmoothenTempoAnchorsWide";
      _DAT_0280c228 = &DAT_026fe6a0;
      _DAT_0280c230 = 0;
      _DAT_0280c238 = &DAT_02728008;
      _DAT_0280c240 = FUN_00713960;
      _DAT_0280c248 = FUN_007032e0;
      _DAT_0280c250 = 0;
      uRam000000000280c258 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c2a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c268 = "handleSmoothenTempoAnchorsLocal";
      _DAT_0280c270 = &DAT_026fe6a0;
      _DAT_0280c278 = 0;
      _DAT_0280c280 = &DAT_02728008;
      _DAT_0280c288 = FUN_00713960;
      _DAT_0280c290 = FUN_007033d0;
      _DAT_0280c298 = 0;
      uRam000000000280c2a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c2f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c2b0 = "handleSetBar1ToStartOfFile";
      _DAT_0280c2b8 = &DAT_026fe6a0;
      _DAT_0280c2c0 = 0;
      _DAT_0280c2c8 = &DAT_02728008;
      _DAT_0280c2d0 = FUN_00713960;
      _DAT_0280c2d8 = FUN_007034c0;
      _DAT_0280c2e0 = 0;
      uRam000000000280c2e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c338 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c2f8 = "handleMakeConstantTempo";
      _DAT_0280c300 = &DAT_026fe6a0;
      _DAT_0280c308 = 0;
      _DAT_0280c310 = &DAT_02728008;
      _DAT_0280c318 = FUN_00713960;
      _DAT_0280c320 = FUN_00703010;
      _DAT_0280c328 = 0;
      uRam000000000280c330 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c380 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c340 = "handleInterpolateTempoForAnchors";
      _DAT_0280c348 = &DAT_026fe6a0;
      _DAT_0280c350 = 0;
      _DAT_0280c358 = &DAT_02728008;
      _DAT_0280c360 = FUN_00713960;
      _DAT_0280c368 = FUN_00703100;
      _DAT_0280c370 = 0;
      uRam000000000280c378 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c3c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c388 = "handleShowPolyphonicAnalyzerResult";
      _DAT_0280c390 = &DAT_026fe6a0;
      _DAT_0280c398 = 0;
      _DAT_0280c3a0 = &DAT_02728008;
      _DAT_0280c3a8 = FUN_00713960;
      _DAT_0280c3b0 = FUN_006ffef0;
      _DAT_0280c3b8 = 0;
      uRam000000000280c3c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c410 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c3d0 = "handleSplitAudioSourcesIntoTracks";
      _DAT_0280c3d8 = &DAT_026fe6a0;
      _DAT_0280c3e0 = 0;
      _DAT_0280c3e8 = &DAT_02728008;
      _DAT_0280c3f0 = FUN_00713960;
      _DAT_0280c3f8 = FUN_00700430;
      _DAT_0280c400 = 0;
      uRam000000000280c408 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c458 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c418 = "handleToggleImportCreateSumTrack";
      _DAT_0280c420 = &DAT_026fe6a0;
      _DAT_0280c428 = 0;
      _DAT_0280c430 = &DAT_02728008;
      _DAT_0280c438 = FUN_00713960;
      _DAT_0280c440 = FUN_00700c70;
      _DAT_0280c448 = 0;
      uRam000000000280c450 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c4a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c460 = "handleToggleImportSplitReferenceTracks";
      _DAT_0280c468 = &DAT_026fe6a0;
      _DAT_0280c470 = 0;
      _DAT_0280c478 = &DAT_02728008;
      _DAT_0280c480 = FUN_00713960;
      _DAT_0280c488 = FUN_00700a50;
      _DAT_0280c490 = 0;
      uRam000000000280c498 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c4e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c4a8 = "handleToggleShowTempoEditor";
      _DAT_0280c4b0 = &DAT_026fe6a0;
      _DAT_0280c4b8 = 0;
      _DAT_0280c4c0 = &DAT_02728008;
      _DAT_0280c4c8 = FUN_00713960;
      _DAT_0280c4d0 = FUN_006fb400;
      _DAT_0280c4d8 = 0;
      uRam000000000280c4e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c530 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c4f0 = "handleToggleShowChangeTempoEditor";
      _DAT_0280c4f8 = &DAT_026fe6a0;
      _DAT_0280c500 = 0;
      _DAT_0280c508 = &DAT_02728008;
      _DAT_0280c510 = FUN_00713960;
      _DAT_0280c518 = FUN_006fabd0;
      _DAT_0280c520 = 0;
      uRam000000000280c528 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c578 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c538 = "handleToggleShowDefineTempoEditor";
      _DAT_0280c540 = &DAT_026fe6a0;
      _DAT_0280c548 = 0;
      _DAT_0280c550 = &DAT_02728008;
      _DAT_0280c558 = FUN_00713960;
      _DAT_0280c560 = FUN_006faff0;
      _DAT_0280c568 = 0;
      uRam000000000280c570 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c5c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c580 = "handleCopy";
      _DAT_0280c588 = &DAT_026fe6a0;
      _DAT_0280c590 = 0;
      _DAT_0280c598 = &DAT_02728008;
      _DAT_0280c5a0 = FUN_00713960;
      _DAT_0280c5a8 = 0x651;
      _DAT_0280c5b0 = 0;
      uRam000000000280c5b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c608 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c5c8 = "handlePaste";
      _DAT_0280c5d0 = &DAT_026fe6a0;
      _DAT_0280c5d8 = 0;
      _DAT_0280c5e0 = &DAT_02728008;
      _DAT_0280c5e8 = FUN_00713960;
      _DAT_0280c5f0 = 0x659;
      _DAT_0280c5f8 = 0;
      uRam000000000280c600 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c650 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c610 = "handleCut";
      _DAT_0280c618 = &DAT_026fe6a0;
      _DAT_0280c620 = 0;
      _DAT_0280c628 = &DAT_02728008;
      _DAT_0280c630 = FUN_00713960;
      _DAT_0280c638 = 0x661;
      _DAT_0280c640 = 0;
      uRam000000000280c648 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c698 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c658 = "handleDelete";
      _DAT_0280c660 = &DAT_026fe6a0;
      _DAT_0280c668 = 0;
      _DAT_0280c670 = &DAT_02728008;
      _DAT_0280c678 = FUN_00713960;
      _DAT_0280c680 = 0x669;
      _DAT_0280c688 = 0;
      uRam000000000280c690 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c6a0 = "handleToggleFollowCursor";
      _DAT_0280c6a8 = &DAT_026fe6a0;
      _DAT_0280c6b0 = 0;
      _DAT_0280c6b8 = &DAT_02728008;
      _DAT_0280c6c0 = FUN_00713960;
      _DAT_0280c6c8 = FUN_006fc090;
      _DAT_0280c6d0 = 0;
      uRam000000000280c6d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c728 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c6e8 = "onTimelineChanged";
      _DAT_0280c6f0 = &DAT_026fe6a0;
      _DAT_0280c6f8 = 0;
      _DAT_0280c700 = &DAT_0272800c;
      _DAT_0280c708 = FUN_007139f0;
      _DAT_0280c710 = FUN_006f3350;
      _DAT_0280c718 = 0;
      uRam000000000280c720 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c770 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c730 = "handleChangeAlgorithm";
      _DAT_0280c738 = &DAT_026fe6a0;
      _DAT_0280c740 = 0;
      _DAT_0280c748 = &DAT_02728008;
      _DAT_0280c750 = FUN_00713960;
      _DAT_0280c758 = FUN_0070c1e0;
      _DAT_0280c760 = 0;
      uRam000000000280c768 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c7b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c778 = "handleToggleReferenceMode";
      _DAT_0280c780 = &DAT_026fe6a0;
      _DAT_0280c788 = 0;
      _DAT_0280c790 = &DAT_02728008;
      _DAT_0280c798 = FUN_00713960;
      _DAT_0280c7a0 = FUN_0070f2e0;
      _DAT_0280c7a8 = 0;
      uRam000000000280c7b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c800 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c7c0 = "handleToggleEditMode";
      _DAT_0280c7c8 = &DAT_026fe6a0;
      _DAT_0280c7d0 = 0;
      _DAT_0280c7d8 = &DAT_02728008;
      _DAT_0280c7e0 = FUN_00713960;
      _DAT_0280c7e8 = FUN_0070f740;
      _DAT_0280c7f0 = 0;
      uRam000000000280c7f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c848 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c808 = "handleToggleTrackMute";
      _DAT_0280c810 = &DAT_026fe6a0;
      _DAT_0280c818 = 0;
      _DAT_0280c820 = &DAT_02728008;
      _DAT_0280c828 = FUN_00713960;
      _DAT_0280c830 = FUN_0070fba0;
      _DAT_0280c838 = 0;
      uRam000000000280c840 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c890 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c850 = "handleToggleTrackSolo";
      _DAT_0280c858 = &DAT_026fe6a0;
      _DAT_0280c860 = 0;
      _DAT_0280c868 = &DAT_02728008;
      _DAT_0280c870 = FUN_00713960;
      _DAT_0280c878 = FUN_0070fe70;
      _DAT_0280c880 = 0;
      uRam000000000280c888 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c8d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c898 = "handleToggleTrackRecord";
      _DAT_0280c8a0 = &DAT_026fe6a0;
      _DAT_0280c8a8 = 0;
      _DAT_0280c8b0 = &DAT_02728008;
      _DAT_0280c8b8 = FUN_00713960;
      _DAT_0280c8c0 = FUN_00710140;
      _DAT_0280c8c8 = 0;
      uRam000000000280c8d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280c920 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fe6b8 = FUN_00015ff0();
          _DAT_026fe6a0 = "MDDocumentViewController";
          _DAT_026fe6a8 = 0x100;
          _DAT_026fe6b0 = FUN_00082e10;
          _DAT_026fe6c0 = 0;
          uRam00000000026fe6c8 = 0;
          _DAT_026fe6d0 = 0;
          _DAT_026fe748 = 0;
          uRam00000000026fe750 = 0;
          _DAT_026fe758 = 0;
          DAT_026fe75a = 1;
          _DAT_026fe6d8 = 0;
          uRam00000000026fe6e0 = 0;
          _DAT_026fe6e8 = 0;
          uRam00000000026fe6f0 = 0;
          _DAT_026fe6f8 = 0;
          uRam00000000026fe700 = 0;
          _DAT_026fe708 = 0;
          uRam00000000026fe710 = 0;
          _DAT_026fe718 = 0;
          uRam00000000026fe720 = 0;
          _DAT_026fe728 = 0;
          uRam00000000026fe730 = 0;
          _DAT_026fe738 = 0;
          uRam00000000026fe740 = 0;
          DAT_026fe763 = 0;
          _DAT_026fe75b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280c8e0 = "windowDidBecomeFirst";
      _DAT_0280c8e8 = &DAT_026fe6a0;
      _DAT_0280c8f0 = 0;
      _DAT_0280c8f8 = &DAT_0272800e;
      _DAT_0280c900 = FUN_00713a10;
      _DAT_0280c908 = FUN_00710860;
      _DAT_0280c910 = 0;
      uRam000000000280c918 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @005b6230 — 1984 bytes
// str: ""MDDocumentViewController""
// str: ""MDMultiTrackViewDelegate""
// str: ""MDWorkspaceNamedViewController""
// str: ""MUTempoEditorDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b6230(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_024d59a0;
  if (DAT_027195a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02719590 = "MDWorkspaceNamedViewController";
      DAT_027195a0 = 0;
      _DAT_02719598 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0xf] = &DAT_0266be50;
  if (DAT_027195c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027195b0 = "MUTempoEditorDelegate";
      DAT_027195c0 = 0;
      _DAT_027195b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x10] = &DAT_02505758;
  if (DAT_026fff78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fff60 = "MDMultiTrackViewDelegate";
      DAT_026fff70 = 0;
      _DAT_026fff68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0250ac78;
  unaff_RDI[0xe] = &DAT_0250b2f8;
  unaff_RDI[0xf] = &DAT_0250b330;
  unaff_RDI[0x10] = &DAT_0250b3a8;
  FUN_005b6b80();
  FUN_005b6eb0();
  FUN_005b71d0();
  FUN_005b7500();
  FUN_005b7830();
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  if (DAT_026d8470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fe75b == '\0') {
    FUN_005b7af0();
    FUN_00e87980();
  }
  FUN_005b7c80();
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  if (DAT_026d8470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fe75b == '\0') {
    FUN_005b7fb0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  if (DAT_026d8470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fe75b == '\0') {
    FUN_005b8140();
    FUN_00e87980();
  }
  FUN_005b82d0();
  FUN_005b8600();
  FUN_005b8930();
  FUN_005b8c60();
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  if (DAT_026d8470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fe75b == '\0') {
    FUN_005b8f90();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  if (DAT_026d8470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fe75b == '\0') {
    FUN_005b9120();
    FUN_00e87980();
  }
  FUN_005b92b0();
  FUN_005b95e0();
  return;
}




// ============================================================
// @002f2ac0 — 1847 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f2cde) */
/* WARNING: Removing unreachable block (ram,0x002f2cee) */
/* WARNING: Removing unreachable block (ram,0x002f2b13) */
/* WARNING: Removing unreachable block (ram,0x002f2b23) */

int FUN_002f2ac0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0x2e0) == '\0') {
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_48 + 0x450))();
    uVar8 = extraout_XMM0_Da;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      iVar4 = FUN_01ddf560();
    }
    else {
      local_118 = *unaff_RSI;
      local_110 = '\0';
      FUN_002f5380(uVar8,&local_118);
      plVar2 = local_48;
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        if (*(longlong *)(unaff_RDI + 0x2f0) != 0) {
          FUN_006f4810();
          FUN_01be8270();
          plVar2 = local_48;
          pcVar7 = local_38;
          if (local_40[0] != '\0') {
            pcVar7 = local_40;
          }
          local_38[0] = local_40[0];
          *pcVar7 = '\0';
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_01bcee20();
            plVar6 = *(longlong **)(unaff_RDI + 0x2e8);
            plVar5 = plVar6;
            if (plVar6 != local_48) {
              if (local_40[0] == '\0') {
                if (local_48 == (longlong *)0x0) {
                  plVar5 = (longlong *)0x0;
                }
                else {
                  FUN_00d50b00();
                  plVar6 = *(longlong **)(unaff_RDI + 0x2e8);
                  plVar5 = local_48;
                }
              }
              else {
                local_40[0] = '\0';
                plVar5 = local_48;
              }
              *(longlong **)(unaff_RDI + 0x2e8) = plVar5;
              if (plVar6 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar5 = local_48;
              }
            }
            if ((local_40[0] != '\0') && (plVar5 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_f8 = *unaff_RSI;
          local_f0 = '\0';
          local_c0 = 0;
          lVar1 = *(longlong *)(unaff_RDI + 0x2e8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_c0 = '\x01';
          local_c8 = lVar1;
          FUN_006f4810();
          local_98 = local_48;
          local_90 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_90 = '\x01';
          FUN_006f3f00();
          FUN_00757c60();
          local_88 = local_58;
          local_80 = 0;
          if (local_50 == '\0') {
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_80 = '\x01';
          iVar4 = FUN_0007cb70(&local_88,&local_98,0,2);
          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != 0)) {
            FUN_00d50b20();
          }
          if (iVar4 != 0) {
            if (*(longlong *)(unaff_RDI + 0x2e8) != 0) {
              FUN_006f4810();
              (**(code **)(*local_58 + 0x930))();
              local_78 = local_48;
              local_70 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_70 = '\x01';
              local_e0 = '\0';
              local_e8 = 0;
              FUN_01c025c0(0,&local_e8,0);
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_38[0] == '\0') {
              return iVar4;
            }
            if (plVar2 == (longlong *)0x0) {
              return iVar4;
            }
            FUN_00d50b20();
            return iVar4;
          }
          if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar4 = 0;
      }
      else {
        local_108 = *unaff_RSI;
        local_100 = '\0';
        local_d0 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x2e8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_d0 = '\x01';
        local_d8 = lVar1;
        iVar4 = (**(code **)(*plVar2 + 0x388))(1,&local_d8);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((iVar4 != 0) && (*(longlong *)(unaff_RDI + 0x2e8) != 0)) {
          FUN_01bbfb40();
          (**(code **)(*local_58 + 0x930))();
          local_b8 = local_48;
          local_b0 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01bc0650();
          local_a8 = local_68;
          local_a0 = 0;
          if (local_60 == '\0') {
            if (local_68 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_a0 = '\x01';
          FUN_01c025c0(0,&local_a8,0);
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar4 = FUN_01ddf560();
  }
  return iVar4;
}




// ============================================================
// @002f4600 — 1731 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f4745) */
/* WARNING: Removing unreachable block (ram,0x002f4751) */
/* WARNING: Removing unreachable block (ram,0x002f49c4) */
/* WARNING: Removing unreachable block (ram,0x002f49d0) */
/* WARNING: Removing unreachable block (ram,0x002f47c8) */
/* WARNING: Removing unreachable block (ram,0x002f47d5) */
/* WARNING: Removing unreachable block (ram,0x002f4658) */
/* WARNING: Removing unreachable block (ram,0x002f4661) */
/* WARNING: Removing unreachable block (ram,0x002f47fb) */
/* WARNING: Removing unreachable block (ram,0x002f4808) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f4600(float param_1,undefined8 param_2,int param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 in_RCX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  int local_ac;
  longlong local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  FUN_01ed2e60(in_RCX,param_3);
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = local_50;
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_a0 + 0x3a0))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_a0 + 0x470))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar6 = FUN_01ed4e60();
  if (iVar6 == 0) {
    cVar4 = FUN_01dd3250();
    if (cVar4 == '\0') {
      if (local_50 == 0) goto LAB_002f4987;
      bVar3 = true;
      FUN_00d50b00();
      local_38 = local_50;
    }
    else if (local_50 == 0) {
LAB_002f4987:
      bVar3 = false;
      local_38 = 0;
    }
    else {
      bVar3 = true;
      FUN_00d50b00();
      local_38 = local_50;
    }
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1);
    FUN_01ed46d0();
    goto LAB_002f4c6a;
  }
  local_f0 = local_a8;
  local_e8 = '\0';
  FUN_01edb3b0(extraout_XMM0_Da,&local_f0);
  local_88 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_88 = '\x01';
  local_90 = local_50;
  FUN_01ed2ec0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  local_ac = param_3;
  cVar4 = FUN_01dd3250();
  cVar5 = FUN_01dd3250();
  if (cVar4 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if (cVar5 != '\0') goto LAB_002f4a21;
LAB_002f4a8f:
    local_e0 = local_50;
    local_38 = local_50;
    local_d8 = '\0';
    FUN_01d488d0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = 0;
    bVar2 = false;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1);
  }
  else {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    if (cVar5 != '\0') goto LAB_002f4a8f;
LAB_002f4a21:
    lVar7 = local_50;
    if (cVar5 == '\0') {
      if (local_50 == 0) goto LAB_002f4af6;
      bVar2 = true;
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
LAB_002f4af6:
      bVar2 = false;
      lVar7 = 0;
    }
    else {
      bVar2 = true;
      FUN_00d50b00();
    }
    local_c8 = '\0';
    local_d0 = local_50;
    FUN_01d488d0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    auVar9._8_8_ = in_XMM1_Qb;
    auVar9._0_8_ = param_2;
    auVar8._4_12_ = auVar9._4_12_;
    auVar8._0_4_ = (float)param_2 + DAT_02394248;
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1 + DAT_023908ec,auVar8._0_8_);
    local_b8 = '\0';
    local_c0 = lVar7;
    FUN_01d488d0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    auVar1._8_8_ = in_XMM1_Qb;
    auVar1._0_8_ = param_2;
    auVar9 = blendps(auVar1,_DAT_023b1e70,0xd);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(param_1,auVar9._0_8_);
    local_38 = local_50;
  }
  bVar3 = local_50 != 0;
  iVar6 = FUN_01dcea80();
  if (local_ac + 1 != iVar6) {
    FUN_01ed2e60();
    local_78 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_78 = '\x01';
    local_80 = local_50;
    FUN_01ed4e60();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
LAB_002f4c6a:
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002f2270 — 1400 bytes
// str: ""MDDocumentViewController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f264e) */
/* WARNING: Removing unreachable block (ram,0x002f273c) */
/* WARNING: Removing unreachable block (ram,0x002f27bc) */
/* WARNING: Removing unreachable block (ram,0x002f27c5) */
/* WARNING: Removing unreachable block (ram,0x002f23b4) */
/* WARNING: Removing unreachable block (ram,0x002f23c1) */
/* WARNING: Removing unreachable block (ram,0x002f23fa) */
/* WARNING: Removing unreachable block (ram,0x002f240a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002f2270(void)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong in_stack_ffffffffffffffa8;
  longlong *plVar8;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_48 + 0x450))();
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01ddf370();
    return uVar4;
  }
  if ((unaff_RDI[0x5d] != 0) && (FUN_01c023b0(), unaff_RDI[0x5d] != 0)) {
    unaff_RDI[0x5d] = 0;
    FUN_00d50b20();
  }
  FUN_01d384d0();
  FUN_01ca8220();
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = DAT_027f29d0;
  if (DAT_027f29d0 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40[0] = '\0';
  cVar3 = FUN_00d23d70();
  if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(char *)(unaff_RDI + 0x5c) = cVar3;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
    cVar3 = (char)unaff_RDI[0x5c];
  }
  if (cVar3 != '\0') {
    uVar4 = FUN_01ddf370();
    goto LAB_002f27ca;
  }
  FUN_00d50b00();
  local_38[0] = '\0';
  plVar8 = unaff_RDI;
  do {
    (**(code **)(*plVar8 + 0x370))();
    if (plVar2 == plVar8) {
      if (((local_38[0] == '\0') && (plVar2 != (longlong *)0x0)) && (local_40[0] != '\0')) {
        local_38[0] = '\x01';
        goto LAB_002f24c7;
      }
    }
    else {
      plVar8 = plVar2;
      if (local_40[0] == '\0') {
        if (local_38[0] == '\0') {
          pcVar6 = local_38;
        }
        else {
          FUN_00d50b20();
          pcVar6 = local_38;
        }
      }
      else {
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        local_38[0] = '\x01';
LAB_002f24c7:
        local_38[0] = '\x01';
        pcVar6 = local_40;
      }
      *pcVar6 = '\0';
    }
    if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((DAT_026d8470 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026fe6b8 = FUN_00015ff0();
      _DAT_026fe6a0 = "MDDocumentViewController";
      _DAT_026fe6a8 = 0x100;
      _DAT_026fe6b0 = FUN_00082e10;
      _DAT_026fe6c0 = 0;
      uRam00000000026fe6c8 = 0;
      _DAT_026fe6d0 = 0;
      _DAT_026fe748 = 0;
      uRam00000000026fe750 = 0;
      _DAT_026fe758 = 0;
      DAT_026fe75a = 1;
      _DAT_026fe6d8 = 0;
      uRam00000000026fe6e0 = 0;
      _DAT_026fe6e8 = 0;
      uRam00000000026fe6f0 = 0;
      _DAT_026fe6f8 = 0;
      uRam00000000026fe700 = 0;
      _DAT_026fe708 = 0;
      uRam00000000026fe710 = 0;
      _DAT_026fe718 = 0;
      uRam00000000026fe720 = 0;
      _DAT_026fe728 = 0;
      uRam00000000026fe730 = 0;
      _DAT_026fe738 = 0;
      uRam00000000026fe740 = 0;
      DAT_026fe763 = 0;
      _DAT_026fe75b = 0;
      ___cxa_guard_release();
    }
    plVar7 = &DAT_02802688;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar7 = (longlong *)&stack0xffffffffffffffa8;
      if (cVar3 == '\0') {
        plVar7 = &DAT_02802688;
      }
    }
    if (*plVar7 != 0) {
      bVar1 = false;
      plVar7 = plVar8;
      if (local_38[0] == '\0') {
        if (plVar8 == (longlong *)0x0) goto LAB_002f2659;
        FUN_00d50b00();
        unaff_RDI[0x5e] = (longlong)plVar8;
      }
      else {
        unaff_RDI[0x5e] = (longlong)plVar8;
      }
      goto LAB_002f2665;
    }
  } while (plVar8 != (longlong *)0x0);
  bVar1 = true;
  plVar7 = (longlong *)0x0;
LAB_002f2659:
  unaff_RDI[0x5e] = (longlong)plVar7;
  if (!bVar1) {
LAB_002f2665:
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  if (unaff_RDI[0x5e] != 0) {
    FUN_006f4810();
    FUN_01be8270();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (plVar2 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_01bcee20();
      plVar8 = (longlong *)unaff_RDI[0x5d];
      plVar7 = plVar8;
      if (plVar8 != plVar2) {
        plVar7 = plVar2;
        if (local_40[0] == '\0') {
          if (plVar2 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
            goto LAB_002f2713;
          }
          FUN_00d50b00();
          plVar8 = (longlong *)unaff_RDI[0x5d];
          unaff_RDI[0x5d] = (longlong)plVar2;
        }
        else {
          local_40[0] = '\0';
LAB_002f2713:
          unaff_RDI[0x5d] = (longlong)plVar7;
        }
        if (plVar8 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar7 = plVar2;
        }
      }
      if ((local_40[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  uVar4 = (**(code **)(*unaff_RDI + 0x3d0))();
LAB_002f27ca:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}




// ============================================================
// @002f3ad0 — 1040 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002f3b58) */
/* WARNING: Removing unreachable block (ram,0x002f3b68) */
/* WARNING: Removing unreachable block (ram,0x002f3ba2) */
/* WARNING: Removing unreachable block (ram,0x002f3bb2) */

ulonglong FUN_002f3ad0(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong local_e0;
  char local_d8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01f27fe0();
  uVar6 = (**(code **)(*local_40 + 0x450))();
  uVar9 = extraout_XMM0_Da;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((char)uVar6 == '\0') {
    uVar7 = FUN_01de0270();
    uVar8 = (ulonglong)uVar7;
    goto LAB_002f3ecc;
  }
  if (*(char *)(unaff_RDI + 0x2e0) != '\0') {
    uVar7 = FUN_01de0270();
    uVar8 = (ulonglong)uVar7;
    goto LAB_002f3ecc;
  }
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_002f5380(uVar9,&local_b0);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong *)(unaff_RDI + 0x2f0) != 0) {
      if ((*(longlong *)(unaff_RDI + 0x2e8) != 0) &&
         (FUN_01c023b0(), *(longlong *)(unaff_RDI + 0x2e8) != 0)) {
        *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
        FUN_00d50b20();
      }
      local_90 = *unaff_RSI;
      local_88 = '\0';
      FUN_006f4810();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      local_78 = '\0';
      local_80 = 0;
      FUN_006f3f00();
      FUN_00757c60();
      lVar1 = local_70;
      local_48 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_48 = '\x01';
      local_50 = lVar1;
      cVar5 = FUN_0007a0d0(0,&local_80,0,2);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (cVar5 != '\0') goto LAB_002f3ecc;
    }
LAB_002f3e90:
    if ((*(longlong *)(unaff_RDI + 0x2e8) != 0) &&
       (FUN_01c023b0(), *(longlong *)(unaff_RDI + 0x2e8) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
      FUN_00d50b20();
    }
    uVar8 = 0;
    uVar3 = 0;
    if (plVar2 == (longlong *)0x0) goto LAB_002f3ecc;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x2e8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_01c03aa0();
      FUN_01c023b0();
      if (*(longlong *)(unaff_RDI + 0x2e8) != 0) {
        *(undefined8 *)(unaff_RDI + 0x2e8) = 0;
        FUN_00d50b20();
      }
    }
    local_a0 = *unaff_RSI;
    local_98 = '\0';
    cVar5 = (**(code **)(*plVar2 + 0x390))(0,uVar4);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    uVar3 = CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),1);
    if (cVar5 == '\0') goto LAB_002f3e90;
  }
  uVar8 = uVar3;
  FUN_00d50b20();
LAB_002f3ecc:
  return uVar8 & 0xffffffff;
}




// ============================================================
// @0064cb40 — 900 bytes
// str: ""MDDocumentViewController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0064cb40(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  longlong *unaff_RSI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  longlong local_78;
  char local_70;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_026d8470 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_026fe6b8 = FUN_00015ff0();
    _DAT_026fe6a0 = "MDDocumentViewController";
    _DAT_026fe6a8 = 0x100;
    _DAT_026fe6b0 = FUN_00082e10;
    _DAT_026fe6c0 = 0;
    uRam00000000026fe6c8 = 0;
    _DAT_026fe6d0 = 0;
    _DAT_026fe748 = 0;
    uRam00000000026fe750 = 0;
    _DAT_026fe758 = 0;
    DAT_026fe75a = 1;
    _DAT_026fe6d8 = 0;
    uRam00000000026fe6e0 = 0;
    _DAT_026fe6e8 = 0;
    uRam00000000026fe6f0 = 0;
    _DAT_026fe6f8 = 0;
    uRam00000000026fe700 = 0;
    _DAT_026fe708 = 0;
    uRam00000000026fe710 = 0;
    _DAT_026fe718 = 0;
    uRam00000000026fe720 = 0;
    _DAT_026fe728 = 0;
    uRam00000000026fe730 = 0;
    _DAT_026fe738 = 0;
    uRam00000000026fe740 = 0;
    DAT_026fe763 = 0;
    _DAT_026fe75b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_0064cb8c:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_0064cb8c;
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar4 = unaff_RSI[1];
  if (((char)lVar4 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 != (longlong *)0x0) goto LAB_0064cbb7;
    bVar3 = true;
  }
  else {
    FUN_00d50b00();
LAB_0064cbb7:
    FUN_00631670();
    plVar7 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == plVar7) {
      FUN_00643590();
      FUN_00d23310();
      plVar1 = local_48;
      pcVar11 = local_38;
      if (local_40[0] != '\0') {
        pcVar11 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar11 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        cVar8 = FUN_00212c70();
        lVar6 = DAT_027259a0;
        if (cVar8 != '\0') {
          uVar12 = extraout_XMM0_Da;
          if (DAT_027259a0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          lVar5 = DAT_026fe4a0;
          if (DAT_026fe4a0 != 0) {
            uVar12 = FUN_00d50b00();
          }
          local_58 = lVar5;
          local_50 = '\x01';
          FUN_01f6ca30(uVar12,&local_58);
          iVar9 = (**(code **)(*local_48 + 0x5e0))();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if (iVar9 != 0) {
            FUN_00d50b20();
            bVar3 = false;
            unaff_RSI = (longlong *)0x0;
            goto LAB_0064cddc;
          }
          FUN_002218f0();
        }
        FUN_00d50b20();
      }
    }
    FUN_006f3f00();
    plVar1 = local_48;
    if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x610))();
    if (*(int *)((longlong)local_48 + 0xc) == 1) {
      cVar8 = (**(code **)(*plVar1 + 0x478))();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') goto LAB_0064cdc6;
      uVar10 = FUN_0064d070();
      unaff_RSI = (longlong *)(ulonglong)uVar10;
      bVar2 = false;
    }
    else {
      if (local_40[0] != '\0') {
        FUN_00d50b20();
      }
LAB_0064cdc6:
      bVar2 = true;
      unaff_RSI = (longlong *)0x0;
    }
    FUN_00d50b20();
    bVar3 = false;
    if (!bVar2) goto LAB_0064cddc;
  }
  unaff_RSI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_0064cddc:
  if (((char)lVar4 != '\0') && (!bVar3)) {
    FUN_00d50b20();
  }
  return (ulonglong)unaff_RSI & 0xffffffff;
}




// ============================================================
// @005b5e80 — 652 bytes
// ============================================================

void FUN_005b5e80(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0250c388;
  unaff_RDI[9] = &DAT_0250c9e8;
  unaff_RDI[10] = &DAT_0250ca38;
  unaff_RDI[0xb] = &DAT_0250ca68;
  if (unaff_RDI[0x36] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x35] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x34] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x33] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x32] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x30] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x27] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x26] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x25] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x24] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x23] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x22] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x21] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x20] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x18] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x17] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x15] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x14] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x13] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x12] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x11] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xf] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xe] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0xc] != 0) {
    FUN_00d50b20();
  }
  FUN_00083730();
  return;
}




// ============================================================
// @0064c7a0 — 560 bytes
// ============================================================

void FUN_0064c7a0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  FUN_00643590();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar3 = 0;
    do {
      FUN_00637870();
      iVar2 = FUN_006e30d0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 == -1) {
        FUN_0023af30(param_1,0);
      }
      else {
        FUN_0023af30(param_1,0);
        FUN_0021e4e0();
        FUN_00637870();
        FUN_006e30d0();
        FUN_01c4e0b0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00637870();
      FUN_006e30d0();
      FUN_0023c090();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00637870();
      cVar1 = FUN_006e6160();
      if (cVar1 != '\0') {
        FUN_00249a60();
      }
      FUN_00249a80();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00637870();
      cVar1 = FUN_006e67f0();
      if (cVar1 != '\0') {
        FUN_00249a70();
      }
      FUN_0024a180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(local_80 + 0xc));
  }
  FUN_0065ca40();
  FUN_00d50b20();
  return;
}




// ============================================================
// @0064d070 — 500 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0064d070(void)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  double dVar7;
  undefined8 uVar8;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026f6fa0;
  if (DAT_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar7 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar7 * DAT_023907c0);
  dVar7 = dVar7 * DAT_023907c0 - _DAT_023907c8;
  uVar8 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar8 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar7 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_60 = lVar1;
  local_58 = '\0';
  FUN_000175c0(uVar8,&local_60);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar3 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  if ((plVar2 != (longlong *)0x0 & bVar3) != 0) {
    FUN_01f27fe0();
    local_50 = *unaff_RSI;
    local_48 = '\0';
    iVar5 = (**(code **)(*local_40 + 0x5b8))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 0) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x4f8))();
      cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x478))();
      if (cVar4 == '\0') goto LAB_0064d234;
    }
    else if (iVar5 != 1) goto LAB_0064d234;
    uVar6 = 0;
  }
LAB_0064d234:
  return uVar6 & 0xffffffff;
}



