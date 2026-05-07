// Reconstructed implementation of MDFileBrowserInsp
// From MikeCore binary — reverse-engineered pseudocode

#include "MDFileBrowserInsp.h"

// ============================================================
// @00375aa0 — 5507 bytes
// str: ""onLocaleChanged""
// str: ""onPreferencesChanged""
// str: ""handleRevealInBrowserViewAction""
// str: ""handleSetBrowserInspectorModeAction""
// str: ""handleUpdateQueryQualifierAction""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00375aa0(void)

{
  int iVar1;
  
  if (DAT_02807b20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807ae0 = "handleRevealInBrowserViewAction";
      _DAT_02807ae8 = &DAT_0271b2e0;
      _DAT_02807af0 = 0;
      _DAT_02807af8 = &DAT_02704598;
      _DAT_02807b00 = FUN_0038af40;
      _DAT_02807b08 = 0x6a9;
      _DAT_02807b10 = 0;
      uRam0000000002807b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807b68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807b28 = "handleSetBrowserInspectorModeAction";
      _DAT_02807b30 = &DAT_0271b2e0;
      _DAT_02807b38 = 0;
      _DAT_02807b40 = &DAT_02704598;
      _DAT_02807b48 = FUN_0038af40;
      _DAT_02807b50 = 0x6b1;
      _DAT_02807b58 = 0;
      uRam0000000002807b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807bb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807b70 = "handleUpdateQueryQualifierAction";
      _DAT_02807b78 = &DAT_0271b2e0;
      _DAT_02807b80 = 0;
      _DAT_02807b88 = &DAT_02704598;
      _DAT_02807b90 = FUN_0038af40;
      _DAT_02807b98 = 0x6b9;
      _DAT_02807ba0 = 0;
      uRam0000000002807ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807bf8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807bb8 = "handleToggleShowColumns";
      _DAT_02807bc0 = &DAT_0271b2e0;
      _DAT_02807bc8 = 0;
      _DAT_02807bd0 = &DAT_02704598;
      _DAT_02807bd8 = FUN_0038af40;
      _DAT_02807be0 = 0x6c1;
      _DAT_02807be8 = 0;
      uRam0000000002807bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807c40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807c00 = "handleToggleShowPlaybackButtons";
      _DAT_02807c08 = &DAT_0271b2e0;
      _DAT_02807c10 = 0;
      _DAT_02807c18 = &DAT_02704598;
      _DAT_02807c20 = FUN_0038af40;
      _DAT_02807c28 = 0x6c9;
      _DAT_02807c30 = 0;
      uRam0000000002807c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807c88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807c48 = "handleToggleShowIcons";
      _DAT_02807c50 = &DAT_0271b2e0;
      _DAT_02807c58 = 0;
      _DAT_02807c60 = &DAT_02704598;
      _DAT_02807c68 = FUN_0038af40;
      _DAT_02807c70 = 0x6d1;
      _DAT_02807c78 = 0;
      uRam0000000002807c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807cd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807c90 = "handleToggleShowPreview";
      _DAT_02807c98 = &DAT_0271b2e0;
      _DAT_02807ca0 = 0;
      _DAT_02807ca8 = &DAT_02704598;
      _DAT_02807cb0 = FUN_0038af40;
      _DAT_02807cb8 = 0x6d9;
      _DAT_02807cc0 = 0;
      uRam0000000002807cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807cd8 = "handleBrowserSelection";
      _DAT_02807ce0 = &DAT_0271b2e0;
      _DAT_02807ce8 = 0;
      _DAT_02807cf0 = &DAT_02704598;
      _DAT_02807cf8 = FUN_0038af40;
      _DAT_02807d00 = 0x6e1;
      _DAT_02807d08 = 0;
      uRam0000000002807d10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807d60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807d20 = "handleBrowserDoubleClick";
      _DAT_02807d28 = &DAT_0271b2e0;
      _DAT_02807d30 = 0;
      _DAT_02807d38 = &DAT_02704598;
      _DAT_02807d40 = FUN_0038af40;
      _DAT_02807d48 = 0x6e9;
      _DAT_02807d50 = 0;
      uRam0000000002807d58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807da8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807d68 = "handleSelectSourcePath";
      _DAT_02807d70 = &DAT_0271b2e0;
      _DAT_02807d78 = 0;
      _DAT_02807d80 = &DAT_02704598;
      _DAT_02807d88 = FUN_0038af40;
      _DAT_02807d90 = 0x6f1;
      _DAT_02807d98 = 0;
      uRam0000000002807da0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807df0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807db0 = "handleDelete";
      _DAT_02807db8 = &DAT_0271b2e0;
      _DAT_02807dc0 = 0;
      _DAT_02807dc8 = &DAT_02704598;
      _DAT_02807dd0 = FUN_0038af40;
      _DAT_02807dd8 = 0x6f9;
      _DAT_02807de0 = 0;
      uRam0000000002807de8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807df8 = "handleSetPrelistenVolume";
      _DAT_02807e00 = &DAT_0271b2e0;
      _DAT_02807e08 = 0;
      _DAT_02807e10 = &DAT_02704598;
      _DAT_02807e18 = FUN_0038af40;
      _DAT_02807e20 = 0x701;
      _DAT_02807e28 = 0;
      uRam0000000002807e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807e40 = "handleTogglePrelistenPlayback";
      _DAT_02807e48 = &DAT_0271b2e0;
      _DAT_02807e50 = 0;
      _DAT_02807e58 = &DAT_02704598;
      _DAT_02807e60 = FUN_0038af40;
      _DAT_02807e68 = 0x709;
      _DAT_02807e70 = 0;
      uRam0000000002807e78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807ec8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807e88 = "onLocaleChanged";
      _DAT_02807e90 = &DAT_0271b2e0;
      _DAT_02807e98 = 0;
      _DAT_02807ea0 = &DAT_0270459c;
      _DAT_02807ea8 = FUN_0038afd0;
      _DAT_02807eb0 = FUN_0037ab30;
      _DAT_02807eb8 = 0;
      uRam0000000002807ec0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02807f10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02807ed0 = "onPreferencesChanged";
      _DAT_02807ed8 = &DAT_0271b2e0;
      _DAT_02807ee0 = 0;
      _DAT_02807ee8 = &DAT_0270459c;
      _DAT_02807ef0 = FUN_0038afd0;
      _DAT_02807ef8 = FUN_0037a800;
      _DAT_02807f00 = 0;
      uRam0000000002807f08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00373de0 — 3195 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00373f91) */
/* WARNING: Removing unreachable block (ram,0x00373f9d) */
/* WARNING: Removing unreachable block (ram,0x00374366) */
/* WARNING: Removing unreachable block (ram,0x00374372) */
/* WARNING: Removing unreachable block (ram,0x003740a3) */
/* WARNING: Removing unreachable block (ram,0x003740af) */

void FUN_00373de0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
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
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = (longlong *)(unaff_RDI + 0x28);
  if (*(longlong *)(unaff_RDI + 0x28) == 0) {
    if (*(longlong **)(unaff_RDI + 0x18) == (longlong *)0x0) {
LAB_00373e4b:
      plVar7 = (longlong *)0x0;
    }
    else {
      (**(code **)(**(longlong **)(unaff_RDI + 0x18) + 0x370))();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_00373e4b;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_c0 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x18);
    local_d0 = plVar7;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar2;
    cVar3 = FUN_00b80190();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017a52b0();
      cVar3 = (**(code **)(*local_40 + 0x50))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        FUN_01552cd0();
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_003745b0;
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_025f02c0;
        plVar7 = (longlong *)&DAT_025f0658;
        puVar4[2] = &DAT_025f0658;
        puVar4[3] = 0;
        *(undefined2 *)(puVar4 + 4) = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[8] = 0;
        uVar10 = (*DAT_025f02d8)();
        local_90 = 0;
        local_98 = *(longlong *)(unaff_RDI + 0x18);
        if (local_98 != 0) {
          uVar10 = FUN_00d50b00();
        }
        local_90 = '\x01';
        FUN_015ab850(uVar10,&local_98);
        plVar6 = *(longlong **)(unaff_RDI + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_00374178;
            }
            FUN_00d50b00();
            plVar7 = *(longlong **)(unaff_RDI + 0x20);
            *(longlong **)(unaff_RDI + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374178:
            *(longlong **)(unaff_RDI + 0x20) = plVar8;
            plVar7 = plVar6;
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        param_1 = (pthread_key_t)plVar7;
        if (*(longlong *)(unaff_RDI + 0x20) != 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01313ad0();
          plVar6 = (longlong *)*plVar1;
          if (plVar6 != local_40) {
            plVar7 = plVar6;
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) {
                plVar6 = (longlong *)0x0;
              }
              else {
                FUN_00d50b00();
                plVar6 = local_40;
                plVar7 = (longlong *)*plVar1;
              }
            }
            else {
              local_38 = '\0';
              plVar6 = local_40;
            }
            *plVar1 = (longlong)plVar6;
            if (plVar7 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar6 = local_40;
            }
          }
          param_1 = (pthread_key_t)plVar7;
          if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_003745b0;
      }
      local_a0 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar2;
      uVar10 = FUN_017a57b0();
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_017a7c70(uVar10,&local_50);
        plVar6 = *(longlong **)(unaff_RDI + 0x20);
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_00374058;
            }
            FUN_00d50b00();
            plVar6 = *(longlong **)(unaff_RDI + 0x20);
            *(longlong **)(unaff_RDI + 0x20) = local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_00374058:
            *(longlong **)(unaff_RDI + 0x20) = plVar8;
          }
          param_1 = (pthread_key_t)plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(unaff_RDI + 0x20) != 0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01313ad0();
        plVar6 = (longlong *)*plVar1;
        plVar8 = plVar6;
        if (plVar6 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
              goto LAB_0037443b;
            }
            FUN_00d50b00();
            plVar6 = (longlong *)*plVar1;
            *plVar1 = (longlong)local_40;
            plVar8 = local_40;
          }
          else {
            local_38 = '\0';
            plVar8 = local_40;
LAB_0037443b:
            *plVar1 = (longlong)plVar8;
          }
          param_1 = (pthread_key_t)plVar6;
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar8 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      local_b0 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar2;
      uVar10 = FUN_00b810f0();
      local_68 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_012ca6e0(uVar10,0);
        plVar7 = (longlong *)*plVar1;
        plVar6 = plVar7;
        if (plVar7 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar6 = (longlong *)0x0;
              goto LAB_00373f47;
            }
            FUN_00d50b00();
            plVar7 = (longlong *)*plVar1;
            *plVar1 = (longlong)local_40;
            plVar6 = local_40;
          }
          else {
            local_38 = '\0';
            plVar6 = local_40;
LAB_00373f47:
            *plVar1 = (longlong)plVar6;
          }
          param_1 = (pthread_key_t)plVar7;
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar6 = local_40;
          }
        }
        if ((local_38 != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cbe00();
        local_60 = local_50;
        local_58 = 0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_58 = '\x01';
        FUN_012e6a70();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
LAB_003745b0:
    if (*plVar1 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = 0;
      lVar2 = *(longlong *)(unaff_RDI + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_110 = (longlong *)0x0;
      local_108 = '\0';
      local_100 = (longlong *)0x0;
      local_f8 = '\0';
      pplVar9 = &local_100;
      local_88 = lVar2;
      FUN_012cc0c0(pplVar9,&local_110,1,0);
      param_1 = (pthread_key_t)pplVar9;
      if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
        (**(code **)(*local_100 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e7d10();
      plVar7 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb110();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e7900();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00039550();
      (**(code **)(*plVar7 + 0x18))();
      lVar2 = *(longlong *)(unaff_RDI + 0x30);
      *(longlong **)(unaff_RDI + 0x30) = plVar7;
      if (lVar2 != 0) {
        FUN_00d50b20();
        plVar7 = *(longlong **)(unaff_RDI + 0x30);
      }
      local_70 = 0;
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      local_78 = lVar2;
      (**(code **)(*plVar7 + 0x3a0))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_e8 = '\0';
      local_f0 = (longlong *)0x0;
      FUN_00cb1fa0();
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (*plVar1 == 0) goto LAB_00374990;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7d10();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0x150);
  uVar10 = DAT_02390124;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x930))();
    uVar10 = FUN_00aea630();
  }
  FUN_012a4680(uVar10);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
LAB_00374990:
  FUN_00375250();
  return;
}




// ============================================================
// @003726c0 — 1948 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003726fd) */
/* WARNING: Removing unreachable block (ram,0x00372709) */
/* WARNING: Removing unreachable block (ram,0x00372c18) */
/* WARNING: Removing unreachable block (ram,0x00372c24) */

void FUN_003726c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_01c33af0();
  pplVar6 = &local_40;
  (**(code **)(*unaff_RDI + 0xae0))();
  plVar5 = local_40;
  FUN_0038aac0();
  if (plVar5 == (longlong *)0x0) {
LAB_0037274e:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0037274e;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) goto LAB_00372d22;
  pplVar6 = &local_40;
  FUN_01c19440();
  plVar5 = local_40;
  FUN_0038ad10();
  if (plVar5 == (longlong *)0x0) {
LAB_003727cb:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_003727cb;
  }
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    bVar2 = false;
    plVar5 = (longlong *)0x0;
  }
  else {
    FUN_01c19c80();
    FUN_01c19d80();
    if (*(int *)(local_130 + 0xc) == 0) {
      cVar4 = '\0';
    }
    else {
      FUN_01c19c80();
      FUN_01c19d80();
      local_38 = '\0';
      local_40 = plVar5;
      cVar4 = FUN_00d23d70();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        cVar4 = '\0';
      }
      else {
        FUN_01c0b7c0();
        plVar5 = local_40;
        FUN_01c0a900();
        local_60 = local_80;
        local_58 = 0;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_58 = '\x01';
        cVar4 = (**(code **)(*plVar5 + 0x50))();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02703f90;
    if (cVar4 == '\0') {
      bVar2 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      if (DAT_02703f90 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      plVar5 = local_40;
      if (local_40 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        bVar2 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar5 != (longlong *)0x0) {
    if (unaff_RDI[0x40] == 0) {
      uVar7 = FUN_01e3f820();
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_0006daf0();
      *(undefined4 *)(plVar5 + 0x27) = 0;
      plVar5[0x2e] = 0;
      *(undefined4 *)(plVar5 + 0x2f) = 0;
      plVar5[0x30] = 0;
      *(undefined1 *)(plVar5 + 0x31) = 0;
      plVar5[0x28] = 0;
      plVar5[0x29] = 0;
      *(undefined4 *)(plVar5 + 0x2a) = 0;
      plVar5[0x2b] = 0;
      plVar5[0x2c] = 0;
      *(undefined8 *)((longlong)plVar5 + 0x165) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x199) = 0;
      plVar5[0x35] = 0;
      plVar5[0x36] = 0;
      plVar5[0x37] = 0;
      plVar5[0x38] = 0;
      *plVar5 = (longlong)&DAT_02677e10;
      plVar5[2] = (longlong)&DAT_026788e8;
      plVar5[0x39] = (longlong)&DAT_02678928;
      *(undefined4 *)((longlong)plVar5 + 500) = 0;
      *(undefined1 *)(plVar5 + 0x3f) = 0;
      plVar5[0x43] = 0;
      plVar5[0x3c] = 0;
      plVar5[0x3d] = 0;
      plVar5[0x3a] = 0;
      plVar5[0x3b] = 0;
      *(undefined1 *)(plVar5 + 0x3e) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x1fc) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x204) = 0;
      *(undefined8 *)((longlong)plVar5 + 0x20c) = 0;
      (*DAT_02677e28)();
      lVar1 = unaff_RDI[0x40];
      unaff_RDI[0x40] = (longlong)plVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar5 = (longlong *)unaff_RDI[0x40];
      }
      auVar8._0_4_ = fVar10 - fVar11;
      auVar8._4_4_ = fVar11 - fVar11;
      auVar8._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
      auVar8._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
      auVar9._8_8_ = extraout_XMM0_Qb;
      auVar9._0_8_ = uVar7;
      auVar9 = blendps(auVar8,auVar9,2);
      (**(code **)(*plVar5 + 0x4d0))(auVar9._0_8_);
      FUN_01cef490();
      (**(code **)(*(longlong *)unaff_RDI[0x40] + 0x558))();
      FUN_01cef3b0();
      FUN_01e3b6a0();
      lVar1 = DAT_02725a10;
      plVar5 = (longlong *)unaff_RDI[0x40];
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0xa10))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_02703fa0;
      plVar5 = (longlong *)unaff_RDI[0x40];
      if (DAT_02703fa0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_02703fa8;
      if (DAT_02703fa8 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      local_90 = 0;
      local_88 = '\0';
      FUN_00d31230(&local_90,&local_a0);
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar5 + 0x6a8))();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      local_68 = 0;
      lVar1 = unaff_RDI[0x40];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      local_70 = lVar1;
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar2) {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_00372d22:
  if (((longlong *)unaff_RDI[0x40] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x40] + 0x478))(), unaff_RDI[0x40] != 0)) {
    unaff_RDI[0x40] = 0;
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005ca0e0 — 1125 bytes
// str: ""MDFileBrowserInsp""
// str: ""MUBrowserViewDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ca0e0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a2970();
  unaff_RDI[0x1a] = &DAT_02667b80;
  if (DAT_027303a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b3b0 = "MUBrowserViewDelegate";
      DAT_0271b3c0 = 0;
      _DAT_0271b3b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024eb6e8;
  unaff_RDI[0x1a] = &DAT_024ebe28;
  FUN_005ca7a0();
  FUN_005caad0();
  FUN_005cad90();
  FUN_005cb0c0();
  FUN_005cb3f0();
  FUN_005cb720();
  FUN_005cba50();
  *(undefined4 *)(unaff_RDI + 0x22) = 0;
  if (DAT_02704150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b2f8 = FUN_00018750();
      _DAT_0271b2e0 = "MDFileBrowserInsp";
      _DAT_0271b2e8 = 0x170;
      _DAT_0271b2f0 = FUN_0038a3b0;
      _DAT_0271b300 = 0;
      uRam000000000271b308 = 0;
      _DAT_0271b310 = 0;
      _DAT_0271b388 = 0;
      uRam000000000271b390 = 0;
      _DAT_0271b398 = 0;
      DAT_0271b39a = 1;
      _DAT_0271b318 = 0;
      uRam000000000271b320 = 0;
      _DAT_0271b328 = 0;
      uRam000000000271b330 = 0;
      _DAT_0271b338 = 0;
      uRam000000000271b340 = 0;
      _DAT_0271b348 = 0;
      uRam000000000271b350 = 0;
      _DAT_0271b358 = 0;
      uRam000000000271b360 = 0;
      _DAT_0271b368 = 0;
      uRam000000000271b370 = 0;
      _DAT_0271b378 = 0;
      uRam000000000271b380 = 0;
      DAT_0271b3a3 = 0;
      _DAT_0271b39b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271b39b == '\0') {
    FUN_005cbd80();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x114) = 0;
  if (DAT_02704150 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b2f8 = FUN_00018750();
      _DAT_0271b2e0 = "MDFileBrowserInsp";
      _DAT_0271b2e8 = 0x170;
      _DAT_0271b2f0 = FUN_0038a3b0;
      _DAT_0271b300 = 0;
      uRam000000000271b308 = 0;
      _DAT_0271b310 = 0;
      _DAT_0271b388 = 0;
      uRam000000000271b390 = 0;
      _DAT_0271b398 = 0;
      DAT_0271b39a = 1;
      _DAT_0271b318 = 0;
      uRam000000000271b320 = 0;
      _DAT_0271b328 = 0;
      uRam000000000271b330 = 0;
      _DAT_0271b338 = 0;
      uRam000000000271b340 = 0;
      _DAT_0271b348 = 0;
      uRam000000000271b350 = 0;
      _DAT_0271b358 = 0;
      uRam000000000271b360 = 0;
      _DAT_0271b368 = 0;
      uRam000000000271b370 = 0;
      _DAT_0271b378 = 0;
      uRam000000000271b380 = 0;
      DAT_0271b3a3 = 0;
      _DAT_0271b39b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271b39b == '\0') {
    FUN_005cbfe0();
    FUN_00e87980();
  }
  FUN_005cc170();
  FUN_005cc4a0();
  FUN_005cc7d0();
  FUN_005ccb00();
  FUN_005cce30();
  FUN_005cd0f0();
  FUN_005cd420();
  FUN_005cd6e0();
  FUN_005cda10();
  FUN_005cdd40();
  FUN_005ce070();
  return;
}




// ============================================================
// @00371b30 — 653 bytes
// str: ""MDFileBrowserInsp""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00371b30(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0xad8))();
  pplVar5 = &local_38;
  FUN_01c259e0();
  plVar1 = local_38;
  if ((DAT_02704150 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0271b2f8 = FUN_00018750();
    _DAT_0271b2e0 = "MDFileBrowserInsp";
    _DAT_0271b2e8 = 0x170;
    _DAT_0271b2f0 = FUN_0038a3b0;
    _DAT_0271b300 = 0;
    uRam000000000271b308 = 0;
    _DAT_0271b310 = 0;
    _DAT_0271b388 = 0;
    uRam000000000271b390 = 0;
    _DAT_0271b398 = 0;
    DAT_0271b39a = 1;
    _DAT_0271b318 = 0;
    uRam000000000271b320 = 0;
    _DAT_0271b328 = 0;
    uRam000000000271b330 = 0;
    _DAT_0271b338 = 0;
    uRam000000000271b340 = 0;
    _DAT_0271b348 = 0;
    uRam000000000271b350 = 0;
    _DAT_0271b358 = 0;
    uRam000000000271b360 = 0;
    _DAT_0271b368 = 0;
    uRam000000000271b370 = 0;
    _DAT_0271b378 = 0;
    uRam000000000271b380 = 0;
    DAT_0271b3a3 = 0;
    _DAT_0271b39b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00371b98:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00371b98;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0xae0))();
  plVar2 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x00371cf3;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    if (plVar2 == (longlong *)0x0) goto joined_r0x00371cf3;
  }
  else {
    uVar6 = (**(code **)(*plVar2 + 0x388))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x6a0))(uVar6,&local_48);
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
joined_r0x00371cf3:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005cbd80 — 560 bytes
// str: ""_mode""
// str: ""MDFileBrowserInsp""
// str: ""MDFileBrowserInspectorMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_005cbd80(void)

{
  int iVar1;
  
  if (DAT_0271b640 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b630 = 0x100000000;
      _DAT_0271b638 = 2;
      DAT_0271b63c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271b678 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271b648 = "MDFileBrowserInspectorMode";
      _DAT_0271b650 = 3;
      DAT_0271b654 = DAT_0271b63c;
      _DAT_0271b658 = &DAT_0271b630;
      _DAT_0271b660 = &DAT_0271b610;
      _DAT_0271b668 = 0;
      uRam000000000271b670 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_0271b608 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02704150 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271b2f8 = FUN_00018750();
          _DAT_0271b2e0 = "MDFileBrowserInsp";
          _DAT_0271b2e8 = 0x170;
          _DAT_0271b2f0 = FUN_0038a3b0;
          _DAT_0271b300 = 0;
          uRam000000000271b308 = 0;
          _DAT_0271b310 = 0;
          _DAT_0271b388 = 0;
          uRam000000000271b390 = 0;
          _DAT_0271b398 = 0;
          DAT_0271b39a = 1;
          _DAT_0271b318 = 0;
          uRam000000000271b320 = 0;
          _DAT_0271b328 = 0;
          uRam000000000271b330 = 0;
          _DAT_0271b338 = 0;
          uRam000000000271b340 = 0;
          _DAT_0271b348 = 0;
          uRam000000000271b350 = 0;
          _DAT_0271b358 = 0;
          uRam000000000271b360 = 0;
          _DAT_0271b368 = 0;
          uRam000000000271b370 = 0;
          _DAT_0271b378 = 0;
          uRam000000000271b380 = 0;
          DAT_0271b3a3 = 0;
          _DAT_0271b39b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0271b5c8 = "_mode";
      _DAT_0271b5d0 = &DAT_0271b2e0;
      _DAT_0271b5d8 = 0;
      _DAT_0271b5e0 = 0x6500;
      _DAT_0271b5e8 = "MDFileBrowserInspectorMode";
      _DAT_0271b5f0 = &DAT_0271b648;
      _DAT_0271b5f8 = 0;
      uRam000000000271b600 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_0271b5c8;
}




// ============================================================
// @00375250 — 539 bytes
// ============================================================

void FUN_00375250(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x28) != 0) {
    cVar5 = (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0xd8) + 0x5e8))();
    if (cVar5 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0xd8);
      FUN_0141cb10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      (**(code **)(*plVar1 + 0x690))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0xd8) + 0x698))();
    lVar2 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012d1940();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0xd8);
    lVar2 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_0141c4c0(0);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x690))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x18);
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    lVar4 = *(longlong *)(lVar3 + 0xe0);
    if (lVar4 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(lVar3 + 0xe0) = lVar2;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI + 0x38) + 0xd8) + 0x6a8))();
  }
  return;
}



