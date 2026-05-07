// Reconstructed implementation of MDDetectionAudioSourceInsp
// From MikeCore binary — reverse-engineered pseudocode

#include "MDDetectionAudioSourceInsp.h"

// ============================================================
// @0047a4c0 — 14402 bytes
// str: ""onFeatureSetChanged""
// str: ""handleAudioSourceTransients""
// str: ""handleAudioSourceFormantsUp""
// str: ""handleAudioSourceFormantsDown""
// str: ""_updateControls""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a4c0(void)

{
  int iVar1;
  
  if (DAT_02808b10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808ad0 = "handleSwitchSibilants";
      _DAT_02808ad8 = &DAT_02712c20;
      _DAT_02808ae0 = 0;
      _DAT_02808ae8 = &DAT_02708948;
      _DAT_02808af0 = FUN_0049c2c0;
      _DAT_02808af8 = FUN_0049a5d0;
      _DAT_02808b00 = 0;
      uRam0000000002808b08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808b58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808b18 = "handleSibilantBalancePreviewChanged";
      _DAT_02808b20 = &DAT_02712c20;
      _DAT_02808b28 = 0;
      _DAT_02808b30 = &DAT_02708948;
      _DAT_02808b38 = FUN_0049c2c0;
      _DAT_02808b40 = FUN_0049aa10;
      _DAT_02808b48 = 0;
      uRam0000000002808b50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808ba0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808b60 = "handleSwitchRobustPitchCurve";
      _DAT_02808b68 = &DAT_02712c20;
      _DAT_02808b70 = 0;
      _DAT_02808b78 = &DAT_02708948;
      _DAT_02808b80 = FUN_0049c2c0;
      _DAT_02808b88 = FUN_0049a500;
      _DAT_02808b90 = 0;
      uRam0000000002808b98 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808be8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808ba8 = "handleChangeAlgorithmInsp";
      _DAT_02808bb0 = &DAT_02712c20;
      _DAT_02808bb8 = 0;
      _DAT_02808bc0 = &DAT_02708948;
      _DAT_02808bc8 = FUN_0049c2c0;
      _DAT_02808bd0 = FUN_0048fe80;
      _DAT_02808bd8 = 0;
      uRam0000000002808be0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808c30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808bf0 = "handleSaveMDDAsFile";
      _DAT_02808bf8 = &DAT_02712c20;
      _DAT_02808c00 = 0;
      _DAT_02808c08 = &DAT_02708948;
      _DAT_02808c10 = FUN_0049c2c0;
      _DAT_02808c18 = FUN_00491070;
      _DAT_02808c20 = 0;
      uRam0000000002808c28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808c78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808c38 = "handleSaveMDD";
      _DAT_02808c40 = &DAT_02712c20;
      _DAT_02808c48 = 0;
      _DAT_02808c50 = &DAT_02708948;
      _DAT_02808c58 = FUN_0049c2c0;
      _DAT_02808c60 = FUN_00492210;
      _DAT_02808c68 = 0;
      uRam0000000002808c70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808cc0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808c80 = "handleLoadMDD";
      _DAT_02808c88 = &DAT_02712c20;
      _DAT_02808c90 = 0;
      _DAT_02808c98 = &DAT_02708948;
      _DAT_02808ca0 = FUN_0049c2c0;
      _DAT_02808ca8 = FUN_00494690;
      _DAT_02808cb0 = 0;
      uRam0000000002808cb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808d08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808cc8 = "handleLoadMDDFromFile";
      _DAT_02808cd0 = &DAT_02712c20;
      _DAT_02808cd8 = 0;
      _DAT_02808ce0 = &DAT_02708948;
      _DAT_02808ce8 = FUN_0049c2c0;
      _DAT_02808cf0 = FUN_00493fd0;
      _DAT_02808cf8 = 0;
      uRam0000000002808d00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808d50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808d10 = "handleClearMDD";
      _DAT_02808d18 = &DAT_02712c20;
      _DAT_02808d20 = 0;
      _DAT_02808d28 = &DAT_02708948;
      _DAT_02808d30 = FUN_0049c2c0;
      _DAT_02808d38 = FUN_00492370;
      _DAT_02808d40 = 0;
      uRam0000000002808d48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808d98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808d58 = "handleAudioSourceTransients";
      _DAT_02808d60 = &DAT_02712c20;
      _DAT_02808d68 = 0;
      _DAT_02808d70 = &DAT_02708948;
      _DAT_02808d78 = FUN_0049c2c0;
      _DAT_02808d80 = FUN_00495c70;
      _DAT_02808d88 = 0;
      uRam0000000002808d90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808de0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808da0 = "handleAudioSourceFormantsUp";
      _DAT_02808da8 = &DAT_02712c20;
      _DAT_02808db0 = 0;
      _DAT_02808db8 = &DAT_02708948;
      _DAT_02808dc0 = FUN_0049c2c0;
      _DAT_02808dc8 = FUN_00495de0;
      _DAT_02808dd0 = 0;
      uRam0000000002808dd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808e28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808de8 = "handleAudioSourceFormantsDown";
      _DAT_02808df0 = &DAT_02712c20;
      _DAT_02808df8 = 0;
      _DAT_02808e00 = &DAT_02708948;
      _DAT_02808e08 = FUN_0049c2c0;
      _DAT_02808e10 = FUN_00495f50;
      _DAT_02808e18 = 0;
      uRam0000000002808e20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808e70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808e30 = "handleAudioSourceFormantsCharacter";
      _DAT_02808e38 = &DAT_02712c20;
      _DAT_02808e40 = 0;
      _DAT_02808e48 = &DAT_02708948;
      _DAT_02808e50 = FUN_0049c2c0;
      _DAT_02808e58 = FUN_004960c0;
      _DAT_02808e60 = 0;
      uRam0000000002808e68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808eb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808e78 = "handleAudioSourceCharacter";
      _DAT_02808e80 = &DAT_02712c20;
      _DAT_02808e88 = 0;
      _DAT_02808e90 = &DAT_02708948;
      _DAT_02808e98 = FUN_0049c2c0;
      _DAT_02808ea0 = FUN_00496390;
      _DAT_02808ea8 = 0;
      uRam0000000002808eb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808f00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808ec0 = "handleAudioSourceProcessPeriodBased";
      _DAT_02808ec8 = &DAT_02712c20;
      _DAT_02808ed0 = 0;
      _DAT_02808ed8 = &DAT_02708948;
      _DAT_02808ee0 = FUN_0049c2c0;
      _DAT_02808ee8 = FUN_00496510;
      _DAT_02808ef0 = 0;
      uRam0000000002808ef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808f48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808f08 = "handleSetPitchOffset";
      _DAT_02808f10 = &DAT_02712c20;
      _DAT_02808f18 = 0;
      _DAT_02808f20 = &DAT_02708948;
      _DAT_02808f28 = FUN_0049c2c0;
      _DAT_02808f30 = FUN_004990f0;
      _DAT_02808f38 = 0;
      uRam0000000002808f40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808f90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808f50 = "handleSetFormantOffset";
      _DAT_02808f58 = &DAT_02712c20;
      _DAT_02808f60 = 0;
      _DAT_02808f68 = &DAT_02708948;
      _DAT_02808f70 = FUN_0049c2c0;
      _DAT_02808f78 = FUN_004991e0;
      _DAT_02808f80 = 0;
      uRam0000000002808f88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02808fd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808f98 = "handlePatchTempo";
      _DAT_02808fa0 = &DAT_02712c20;
      _DAT_02808fa8 = 0;
      _DAT_02808fb0 = &DAT_02708948;
      _DAT_02808fb8 = FUN_0049c2c0;
      _DAT_02808fc0 = FUN_004992d0;
      _DAT_02808fc8 = 0;
      uRam0000000002808fd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809020 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02808fe0 = "handleBlendSpectrum";
      _DAT_02808fe8 = &DAT_02712c20;
      _DAT_02808ff0 = 0;
      _DAT_02808ff8 = &DAT_02708948;
      _DAT_02809000 = FUN_0049c2c0;
      _DAT_02809008 = FUN_00499400;
      _DAT_02809010 = 0;
      uRam0000000002809018 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809068 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809028 = "handleToggleSeparateAudioAutomatically";
      _DAT_02809030 = &DAT_02712c20;
      _DAT_02809038 = 0;
      _DAT_02809040 = &DAT_02708948;
      _DAT_02809048 = FUN_0049c2c0;
      _DAT_02809050 = FUN_00496700;
      _DAT_02809058 = 0;
      uRam0000000002809060 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028090b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809070 = "handleSeparateNow";
      _DAT_02809078 = &DAT_02712c20;
      _DAT_02809080 = 0;
      _DAT_02809088 = &DAT_02708948;
      _DAT_02809090 = FUN_0049c2c0;
      _DAT_02809098 = FUN_004968e0;
      _DAT_028090a0 = 0;
      uRam00000000028090a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028090f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028090b8 = "handleAdjustAttacks";
      _DAT_028090c0 = &DAT_02712c20;
      _DAT_028090c8 = 0;
      _DAT_028090d0 = &DAT_02708948;
      _DAT_028090d8 = FUN_0049c2c0;
      _DAT_028090e0 = FUN_00496970;
      _DAT_028090e8 = 0;
      uRam00000000028090f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809140 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809100 = "handleLoadAdjustAttacksPreset";
      _DAT_02809108 = &DAT_02712c20;
      _DAT_02809110 = 0;
      _DAT_02809118 = &DAT_02708948;
      _DAT_02809120 = FUN_0049c2c0;
      _DAT_02809128 = FUN_00496bd0;
      _DAT_02809130 = 0;
      uRam0000000002809138 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809188 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809148 = "handleResetAdjustAttacksToAppliedParameterSet";
      _DAT_02809150 = &DAT_02712c20;
      _DAT_02809158 = 0;
      _DAT_02809160 = &DAT_02708948;
      _DAT_02809168 = FUN_0049c2c0;
      _DAT_02809170 = FUN_00496ec0;
      _DAT_02809178 = 0;
      uRam0000000002809180 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028091d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809190 = "handleSetAdjustAttacksPresetDirectory";
      _DAT_02809198 = &DAT_02712c20;
      _DAT_028091a0 = 0;
      _DAT_028091a8 = &DAT_02708948;
      _DAT_028091b0 = FUN_0049c2c0;
      _DAT_028091b8 = FUN_00497330;
      _DAT_028091c0 = 0;
      uRam00000000028091c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809218 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028091d8 = "handleSaveAdjustAttacksPreset";
      _DAT_028091e0 = &DAT_02712c20;
      _DAT_028091e8 = 0;
      _DAT_028091f0 = &DAT_02708948;
      _DAT_028091f8 = FUN_0049c2c0;
      _DAT_02809200 = FUN_00497610;
      _DAT_02809208 = 0;
      uRam0000000002809210 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809260 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809220 = "handleRecalcAllElementsPitchCenter";
      _DAT_02809228 = &DAT_02712c20;
      _DAT_02809230 = 0;
      _DAT_02809238 = &DAT_02708948;
      _DAT_02809240 = FUN_0049c2c0;
      _DAT_02809248 = FUN_00497fc0;
      _DAT_02809250 = 0;
      uRam0000000002809258 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028092a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809268 = "handleRecalcAllElementsPeriodsAndPitchCentersFromDecomposedAudioSignals";
      _DAT_02809270 = &DAT_02712c20;
      _DAT_02809278 = 0;
      _DAT_02809280 = &DAT_02708948;
      _DAT_02809288 = FUN_0049c2c0;
      _DAT_02809290 = FUN_00498060;
      _DAT_02809298 = 0;
      uRam00000000028092a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028092f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028092b0 = "handlePitchToChordAdaptionEnabledChanged";
      _DAT_028092b8 = &DAT_02712c20;
      _DAT_028092c0 = 0;
      _DAT_028092c8 = &DAT_02708948;
      _DAT_028092d0 = FUN_0049c2c0;
      _DAT_028092d8 = FUN_0049aae0;
      _DAT_028092e0 = 0;
      uRam00000000028092e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809338 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028092f8 = "handlePitchToChordAdaptionModeChanged";
      _DAT_02809300 = &DAT_02712c20;
      _DAT_02809308 = 0;
      _DAT_02809310 = &DAT_02708948;
      _DAT_02809318 = FUN_0049c2c0;
      _DAT_02809320 = FUN_0049abb0;
      _DAT_02809328 = 0;
      uRam0000000002809330 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809380 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809340 = "handlePitchToChordAdaptionContextChanged";
      _DAT_02809348 = &DAT_02712c20;
      _DAT_02809350 = 0;
      _DAT_02809358 = &DAT_02708948;
      _DAT_02809360 = FUN_0049c2c0;
      _DAT_02809368 = FUN_0049ac70;
      _DAT_02809370 = 0;
      uRam0000000002809378 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028093c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809388 = "onStartEditionDetection";
      _DAT_02809390 = &DAT_02712c20;
      _DAT_02809398 = 0;
      _DAT_028093a0 = &DAT_0270894c;
      _DAT_028093a8 = FUN_0049c350;
      _DAT_028093b0 = FUN_00498190;
      _DAT_028093b8 = 0;
      uRam00000000028093c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809410 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028093d0 = "onFeatureSetChanged";
      _DAT_028093d8 = &DAT_02712c20;
      _DAT_028093e0 = 0;
      _DAT_028093e8 = &DAT_0270894c;
      _DAT_028093f0 = FUN_0049c350;
      _DAT_028093f8 = FUN_00498b30;
      _DAT_02809400 = 0;
      uRam0000000002809408 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809458 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809418 = "onEditingDetectionTargetNotification";
      _DAT_02809420 = &DAT_02712c20;
      _DAT_02809428 = 0;
      _DAT_02809430 = &DAT_0270894c;
      _DAT_02809438 = FUN_0049c350;
      _DAT_02809440 = FUN_00498300;
      _DAT_02809448 = 0;
      uRam0000000002809450 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028094a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809460 = "onDetectionRenderParametersChanged";
      _DAT_02809468 = &DAT_02712c20;
      _DAT_02809470 = 0;
      _DAT_02809478 = &DAT_0270894c;
      _DAT_02809480 = FUN_0049c350;
      _DAT_02809488 = FUN_004994f0;
      _DAT_02809490 = 0;
      uRam0000000002809498 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028094e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028094a8 = "onLocaleChanedNotification";
      _DAT_028094b0 = &DAT_02712c20;
      _DAT_028094b8 = 0;
      _DAT_028094c0 = &DAT_0270894c;
      _DAT_028094c8 = FUN_0049c350;
      _DAT_028094d0 = FUN_004995c0;
      _DAT_028094d8 = 0;
      uRam00000000028094e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809530 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028094f0 = "onQuantizationPreviewChanged";
      _DAT_028094f8 = &DAT_02712c20;
      _DAT_02809500 = 0;
      _DAT_02809508 = &DAT_0270894c;
      _DAT_02809510 = FUN_0049c350;
      _DAT_02809518 = FUN_0049a3e0;
      _DAT_02809520 = 0;
      uRam0000000002809528 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809578 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809538 = "_updateControls";
      _DAT_02809540 = &DAT_02712c20;
      _DAT_02809548 = 0;
      _DAT_02809550 = &DAT_0270894f;
      _DAT_02809558 = FUN_0049c3d0;
      _DAT_02809560 = FUN_0047dd70;
      _DAT_02809568 = 0;
      uRam0000000002809570 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028095c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02708820 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02712c38 = FUN_00018750();
          _DAT_02712c20 = "MDDetectionAudioSourceInsp";
          _DAT_02712c28 = 0x2d8;
          _DAT_02712c30 = FUN_0049b5a0;
          _DAT_02712c40 = 0;
          uRam0000000002712c48 = 0;
          _DAT_02712c50 = 0;
          _DAT_02712cc8 = 0;
          uRam0000000002712cd0 = 0;
          _DAT_02712cd8 = 0;
          DAT_02712cda = 1;
          _DAT_02712c58 = 0;
          uRam0000000002712c60 = 0;
          _DAT_02712c68 = 0;
          uRam0000000002712c70 = 0;
          _DAT_02712c78 = 0;
          uRam0000000002712c80 = 0;
          _DAT_02712c88 = 0;
          uRam0000000002712c90 = 0;
          _DAT_02712c98 = 0;
          uRam0000000002712ca0 = 0;
          _DAT_02712ca8 = 0;
          uRam0000000002712cb0 = 0;
          _DAT_02712cb8 = 0;
          uRam0000000002712cc0 = 0;
          DAT_02712ce3 = 0;
          _DAT_02712cdb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809580 = "handleQuantizationToggle";
      _DAT_02809588 = &DAT_02712c20;
      _DAT_02809590 = 0;
      _DAT_02809598 = &DAT_02708948;
      _DAT_028095a0 = FUN_0049c2c0;
      _DAT_028095a8 = FUN_0049a270;
      _DAT_028095b0 = 0;
      uRam00000000028095b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00479050 — 1636 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0047946c) */
/* WARNING: Removing unreachable block (ram,0x00479478) */
/* WARNING: Removing unreachable block (ram,0x00479107) */
/* WARNING: Removing unreachable block (ram,0x00479117) */
/* WARNING: Removing unreachable block (ram,0x00479220) */
/* WARNING: Removing unreachable block (ram,0x0047922c) */
/* WARNING: Removing unreachable block (ram,0x0047956f) */
/* WARNING: Removing unreachable block (ram,0x0047957b) */
/* WARNING: Removing unreachable block (ram,0x004795b6) */
/* WARNING: Removing unreachable block (ram,0x004795c2) */
/* WARNING: Removing unreachable block (ram,0x00479299) */
/* WARNING: Removing unreachable block (ram,0x004792a2) */
/* WARNING: Removing unreachable block (ram,0x00479164) */
/* WARNING: Removing unreachable block (ram,0x00479171) */
/* WARNING: Removing unreachable block (ram,0x0047969c) */
/* WARNING: Removing unreachable block (ram,0x004796a9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479050(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined1 uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  longlong **pplVar14;
  short *psVar15;
  short *psVar16;
  undefined8 *unaff_RSI;
  ulonglong uVar17;
  longlong *unaff_RDI;
  short *psVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [8];
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong *local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong local_58;
  longlong *local_40;
  char local_38;
  
  fVar24 = (float)((ulonglong)param_2 >> 0x20);
  fVar23 = (float)param_2;
  uStack_60 = in_XMM0_Qb;
  local_68 = (undefined1  [8])param_1;
  local_88 = fVar23;
  fStack_84 = fVar24;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  (**(code **)(*unaff_RDI + 0x640))();
  local_90 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_90 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  plVar7 = local_90;
  lVar2 = unaff_RDI[0x4d];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar2;
  bVar9 = (**(code **)(*unaff_RDI + 0xac8))();
  if ((bVar9 | local_58 == 0) == 1) {
    FUN_01e07690(local_58 == 0,local_88);
  }
  else {
    cVar11 = (**(code **)(*unaff_RDI + 0xac8))();
    if (cVar11 != '\0') {
      (**(code **)(*unaff_RDI + 0x878))();
    }
    cVar11 = FUN_01e07410();
    if (cVar11 != '\0') {
      uVar19 = *(undefined4 *)((longlong)unaff_RDI + 0x18c);
      uVar20 = FUN_01e3f820();
      local_88 = (float)uVar20;
      fStack_84 = (float)((ulonglong)uVar20 >> 0x20);
      fStack_80 = (float)extraout_XMM0_Qb;
      fStack_7c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      local_68._4_4_ = fVar24;
      local_68._0_4_ = fVar23;
      uStack_60._0_4_ = in_XMM1_Dc;
      uStack_60._4_4_ = in_XMM1_Dd;
      cVar11 = FUN_01e05890();
      uVar10 = (**(code **)(*unaff_RDI + 0x9a0))();
      uVar20 = 0x12;
      if (cVar11 != '\0') {
        uVar20 = 8;
      }
      fVar23 = (float)local_68._0_4_;
      fVar24 = (float)local_68._4_4_;
      in_XMM1_Dc = (float)uStack_60;
      in_XMM1_Dd = uStack_60._4_4_;
      (**(code **)(*plVar7 + 0x3f0))(uVar20,uVar19,0,uVar10);
    }
    FUN_01e3f820();
    uVar20 = (**(code **)(*plVar7 + 0x548))();
    local_88 = fVar23;
    fStack_84 = fVar24;
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    (**(code **)(*unaff_RDI + 0x960))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_004792a7;
      }
    }
    else if (local_40 != (longlong *)0x0) {
LAB_004792a7:
      iVar13 = FUN_00d8c7a0();
      if ((0 < iVar13) && (iVar13 = FUN_00d8c7a0(), 0 < iVar13)) {
        do {
          sVar12 = FUN_00d8cbc0();
          psVar15 = (short *)unaff_RDI[0x4e];
          piVar1 = (int *)(psVar15 + 0xc);
          psVar16 = (short *)&DAT_023dccec;
          psVar18 = (short *)&DAT_023dccf4;
          if (*piVar1 < 0x14) {
LAB_004793c0:
            fVar23 = (float)*(undefined8 *)psVar18;
            fVar24 = (float)((ulonglong)*(undefined8 *)psVar18 >> 0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
          else {
            psVar15 = *(short **)(psVar15 + 8);
            if (*psVar15 == sVar12) {
              psVar16 = psVar15 + 2;
              psVar15 = psVar15 + 6;
              psVar18 = psVar15;
              goto LAB_004793c0;
            }
            uVar5 = *piVar1 / 0x14;
            uVar8 = 1;
            psVar16 = psVar15;
            do {
              uVar17 = uVar8;
              psVar16 = psVar16 + 10;
              if (uVar5 == uVar17) {
                psVar18 = (short *)&DAT_023dccf4;
                psVar16 = (short *)&DAT_023dccec;
                if ((longlong)uVar17 < (longlong)(int)uVar5) goto LAB_004793c8;
                goto LAB_004793c0;
              }
              uVar8 = uVar17 + 1;
            } while (*psVar16 != sVar12);
            psVar18 = (short *)&DAT_023dccf4;
            psVar16 = (short *)&DAT_023dccec;
            if ((longlong)(int)uVar5 <= (longlong)uVar17) goto LAB_004793c0;
            fVar23 = (float)*(undefined8 *)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6);
            fVar24 = (float)((ulonglong)*(undefined8 *)(psVar15 + (uVar17 & 0xffffffff) * 10 + 6) >>
                            0x20);
            in_XMM1_Dc = 0.0;
            in_XMM1_Dd = 0.0;
          }
LAB_004793c8:
          if (fVar23 <= DAT_0239424c) {
            auVar21 = (undefined1  [8])CONCAT44(fStack_84,local_88);
            uVar22 = CONCAT44(fStack_7c,fStack_80);
          }
          else {
            local_68._4_4_ = fStack_84 - fVar24;
            uStack_60._4_4_ = fStack_7c - in_XMM1_Dd;
            auVar27._8_8_ = extraout_XMM0_Qb_00;
            auVar27._0_8_ = uVar20;
            auVar25._4_12_ = auVar27._4_12_;
            auVar25._0_4_ = (float)uVar20 + (local_88 - fVar23) + DAT_02390d00 + DAT_02390d00;
            local_68._0_4_ = local_88 - fVar23;
            uStack_60._0_4_ = fStack_80 - in_XMM1_Dc;
            auVar28._0_4_ = (uint)((float)local_68._4_4_ * DAT_0239011c) & _DAT_023945e0;
            auVar28._4_4_ = local_68._4_4_ & _UNK_023945e4;
            auVar28._8_4_ = (uint)uStack_60._4_4_ & _UNK_023945e8;
            auVar28._12_4_ = (uint)uStack_60._4_4_ & _UNK_023945ec;
            auVar29._4_12_ = SUB1612(auVar28 | _DAT_023945f0,4);
            auVar29._0_4_ = SUB164(auVar28 | _DAT_023945f0,0) + (float)local_68._4_4_ * DAT_0239011c
            ;
            auVar26._0_12_ = ZEXT812(0);
            auVar26._12_4_ = 0;
            auVar27 = roundss(auVar26,auVar29,0xb);
            auVar27 = insertps(auVar25,auVar27,0x10);
            (**(code **)(*(longlong *)*unaff_RSI + 0x408))(psVar15,psVar16,auVar27._0_8_);
            auVar6._4_4_ = fStack_84;
            auVar6._0_4_ = local_88;
            auVar6._8_4_ = fStack_80;
            auVar6._12_4_ = fStack_7c;
            _local_68 = blendps(_local_68,auVar6,2);
            auVar21 = local_68;
            uVar22 = uStack_60;
          }
          local_88 = SUB84(auVar21,0);
          fStack_84 = (float)((ulonglong)auVar21 >> 0x20);
          fStack_80 = (float)uVar22;
          fStack_7c = (float)((ulonglong)uVar22 >> 0x20);
          bVar4 = 1 < iVar13;
          iVar13 = iVar13 + -1;
        } while (bVar4);
      }
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x4c] == 0) goto LAB_00479654;
  FUN_00d50b00();
  FUN_00209700();
  if (plVar7 == (longlong *)0x0) {
LAB_004794e2:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar11 = FUN_00e85ea0();
    if (cVar11 == '\0') goto LAB_004794e2;
    pplVar14 = &local_90;
  }
  plVar3 = *pplVar14;
  FUN_00d50b20();
  if (plVar3 != (longlong *)0x0) {
    uVar19 = FUN_01e3f820();
    (**(code **)(*plVar7 + 0x6a0))(0,uVar19);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
    lVar2 = unaff_RDI[0x4c];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))
              (*(undefined8 *)((longlong)unaff_RDI + 0x24c),
               (int)*(undefined8 *)((longlong)unaff_RDI + 0x254));
    FUN_01d48390();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_00479654:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}



