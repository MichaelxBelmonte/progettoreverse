// Reconstructed implementation of MDTrackInsp
// From MikeCore binary — reverse-engineered pseudocode

#include "MDTrackInsp.h"

// ============================================================
// @006c76c0 — 7022 bytes
// str: ""onIOChanged""
// str: ""onTrackChanged""
// str: ""MDTrackInsp""
// str: ""handleAnalyzeTrack""
// str: ""handleTransferAllFromReferenceTracks""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c76c0(void)

{
  int iVar1;
  
  if (DAT_0280b910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280b8d0 = "handleAnalyzeTrack";
      _DAT_0280b8d8 = &DAT_0271faa0;
      _DAT_0280b8e0 = 0;
      _DAT_0280b8e8 = &DAT_02727218;
      _DAT_0280b8f0 = FUN_006dd9d0;
      _DAT_0280b8f8 = FUN_006d16c0;
      _DAT_0280b900 = 0;
      uRam000000000280b908 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280b958 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280b918 = "handleTransferAllFromReferenceTracks";
      _DAT_0280b920 = &DAT_0271faa0;
      _DAT_0280b928 = 0;
      _DAT_0280b930 = &DAT_02727218;
      _DAT_0280b938 = FUN_006dd9d0;
      _DAT_0280b940 = FUN_006d3140;
      _DAT_0280b948 = 0;
      uRam000000000280b950 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280b9a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280b960 = "handleAdjustAllElementAttacksAndStartTimesWithReferenceDescriptions";
      _DAT_0280b968 = &DAT_0271faa0;
      _DAT_0280b970 = 0;
      _DAT_0280b978 = &DAT_02727218;
      _DAT_0280b980 = FUN_006dd9d0;
      _DAT_0280b988 = FUN_006d46e0;
      _DAT_0280b990 = 0;
      uRam000000000280b998 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280b9e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280b9a8 = "handleAdjustAllElementAttacksWithReferenceDescriptions";
      _DAT_0280b9b0 = &DAT_0271faa0;
      _DAT_0280b9b8 = 0;
      _DAT_0280b9c0 = &DAT_02727218;
      _DAT_0280b9c8 = FUN_006dd9d0;
      _DAT_0280b9d0 = FUN_006d46d0;
      _DAT_0280b9d8 = 0;
      uRam000000000280b9e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280ba30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280b9f0 = "handleSetDefaultDetection";
      _DAT_0280b9f8 = &DAT_0271faa0;
      _DAT_0280ba00 = 0;
      _DAT_0280ba08 = &DAT_02727218;
      _DAT_0280ba10 = FUN_006dd9d0;
      _DAT_0280ba18 = FUN_006d1290;
      _DAT_0280ba20 = 0;
      uRam000000000280ba28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280ba78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280ba38 = "handleApplyOffsets";
      _DAT_0280ba40 = &DAT_0271faa0;
      _DAT_0280ba48 = 0;
      _DAT_0280ba50 = &DAT_02727218;
      _DAT_0280ba58 = FUN_006dd9d0;
      _DAT_0280ba60 = FUN_006d8580;
      _DAT_0280ba68 = 0;
      uRam000000000280ba70 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bac0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280ba80 = "handleVolumeChanged";
      _DAT_0280ba88 = &DAT_0271faa0;
      _DAT_0280ba90 = 0;
      _DAT_0280ba98 = &DAT_02727218;
      _DAT_0280baa0 = FUN_006dd9d0;
      _DAT_0280baa8 = FUN_006d8d80;
      _DAT_0280bab0 = 0;
      uRam000000000280bab8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bb08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bac8 = "handlePanoramaChanged";
      _DAT_0280bad0 = &DAT_0271faa0;
      _DAT_0280bad8 = 0;
      _DAT_0280bae0 = &DAT_02727218;
      _DAT_0280bae8 = FUN_006dd9d0;
      _DAT_0280baf0 = FUN_006d9da0;
      _DAT_0280baf8 = 0;
      uRam000000000280bb00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bb50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bb10 = "handlePitchChanged";
      _DAT_0280bb18 = &DAT_0271faa0;
      _DAT_0280bb20 = 0;
      _DAT_0280bb28 = &DAT_02727218;
      _DAT_0280bb30 = FUN_006dd9d0;
      _DAT_0280bb38 = FUN_006da4e0;
      _DAT_0280bb40 = 0;
      uRam000000000280bb48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bb98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bb58 = "handleFormantChanged";
      _DAT_0280bb60 = &DAT_0271faa0;
      _DAT_0280bb68 = 0;
      _DAT_0280bb70 = &DAT_02727218;
      _DAT_0280bb78 = FUN_006dd9d0;
      _DAT_0280bb80 = FUN_006daca0;
      _DAT_0280bb88 = 0;
      uRam000000000280bb90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bbe0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bba0 = "handleMuteClicked";
      _DAT_0280bba8 = &DAT_0271faa0;
      _DAT_0280bbb0 = 0;
      _DAT_0280bbb8 = &DAT_02727218;
      _DAT_0280bbc0 = FUN_006dd9d0;
      _DAT_0280bbc8 = FUN_006d9a10;
      _DAT_0280bbd0 = 0;
      uRam000000000280bbd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bc28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bbe8 = "handleSoloClicked";
      _DAT_0280bbf0 = &DAT_0271faa0;
      _DAT_0280bbf8 = 0;
      _DAT_0280bc00 = &DAT_02727218;
      _DAT_0280bc08 = FUN_006dd9d0;
      _DAT_0280bc10 = FUN_006d9b30;
      _DAT_0280bc18 = 0;
      uRam000000000280bc20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bc70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bc30 = "handleRecordClicked";
      _DAT_0280bc38 = &DAT_0271faa0;
      _DAT_0280bc40 = 0;
      _DAT_0280bc48 = &DAT_02727218;
      _DAT_0280bc50 = FUN_006dd9d0;
      _DAT_0280bc58 = FUN_006d9c50;
      _DAT_0280bc60 = 0;
      uRam000000000280bc68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bcb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bc78 = "handleTrackHeightChanged";
      _DAT_0280bc80 = &DAT_0271faa0;
      _DAT_0280bc88 = 0;
      _DAT_0280bc90 = &DAT_02727218;
      _DAT_0280bc98 = FUN_006dd9d0;
      _DAT_0280bca0 = FUN_006d98f0;
      _DAT_0280bca8 = 0;
      uRam000000000280bcb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bd00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bcc0 = "onGeneratorChanged";
      _DAT_0280bcc8 = &DAT_0271faa0;
      _DAT_0280bcd0 = 0;
      _DAT_0280bcd8 = &DAT_0272721c;
      _DAT_0280bce0 = FUN_006dda60;
      _DAT_0280bce8 = FUN_006c9280;
      _DAT_0280bcf0 = 0;
      uRam000000000280bcf8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bd48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bd08 = "onPannerChanged";
      _DAT_0280bd10 = &DAT_0271faa0;
      _DAT_0280bd18 = 0;
      _DAT_0280bd20 = &DAT_0272721c;
      _DAT_0280bd28 = FUN_006dda60;
      _DAT_0280bd30 = FUN_006c9eb0;
      _DAT_0280bd38 = 0;
      uRam000000000280bd40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bd90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bd50 = "onTrackChanged";
      _DAT_0280bd58 = &DAT_0271faa0;
      _DAT_0280bd60 = 0;
      _DAT_0280bd68 = &DAT_0272721c;
      _DAT_0280bd70 = FUN_006dda60;
      _DAT_0280bd78 = FUN_006ca460;
      _DAT_0280bd80 = 0;
      uRam000000000280bd88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280bdd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bd98 = "onIOChanged";
      _DAT_0280bda0 = &DAT_0271faa0;
      _DAT_0280bda8 = 0;
      _DAT_0280bdb0 = &DAT_0272721e;
      _DAT_0280bdb8 = FUN_006dda80;
      _DAT_0280bdc0 = FUN_006db470;
      _DAT_0280bdc8 = 0;
      uRam000000000280bdd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280be20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02726d40 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0271fab8 = FUN_00018750();
          _DAT_0271faa0 = "MDTrackInsp";
          _DAT_0271faa8 = 0x1c8;
          _DAT_0271fab0 = FUN_005e9200;
          _DAT_0271fac0 = 0;
          uRam000000000271fac8 = 0;
          _DAT_0271fad0 = 0;
          _DAT_0271fb48 = 0;
          uRam000000000271fb50 = 0;
          _DAT_0271fb58 = 0;
          DAT_0271fb5a = 1;
          _DAT_0271fad8 = 0;
          uRam000000000271fae0 = 0;
          _DAT_0271fae8 = 0;
          uRam000000000271faf0 = 0;
          _DAT_0271faf8 = 0;
          uRam000000000271fb00 = 0;
          _DAT_0271fb08 = 0;
          uRam000000000271fb10 = 0;
          _DAT_0271fb18 = 0;
          uRam000000000271fb20 = 0;
          _DAT_0271fb28 = 0;
          uRam000000000271fb30 = 0;
          _DAT_0271fb38 = 0;
          uRam000000000271fb40 = 0;
          DAT_0271fb63 = 0;
          _DAT_0271fb5b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280bde0 = "handleCopyDetection";
      _DAT_0280bde8 = &DAT_0271faa0;
      _DAT_0280bdf0 = 0;
      _DAT_0280bdf8 = &DAT_02727218;
      _DAT_0280be00 = FUN_006dd9d0;
      _DAT_0280be08 = FUN_006dbc00;
      _DAT_0280be10 = 0;
      uRam000000000280be18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @006ca460 — 2729 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006cacd5) */
/* WARNING: Removing unreachable block (ram,0x006cace1) */
/* WARNING: Removing unreachable block (ram,0x006ca8a9) */
/* WARNING: Removing unreachable block (ram,0x006ca8b5) */
/* WARNING: Removing unreachable block (ram,0x006cab56) */
/* WARNING: Removing unreachable block (ram,0x006cab62) */
/* WARNING: Removing unreachable block (ram,0x006cae49) */
/* WARNING: Removing unreachable block (ram,0x006cae55) */

void FUN_006ca460(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong **pplVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong **pplVar12;
  int iVar13;
  int iVar14;
  longlong *unaff_RDI;
  longlong *plVar15;
  char cVar16;
  bool bVar17;
  int local_ac;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_78;
  FUN_006cb500();
  if (((char)local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x26] + 0xb28))();
  if (((((char)local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
      (FUN_00d50b00(), (char)local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar14 = *(int *)((longlong)local_78 + 0xc);
  if (iVar14 == 1) {
    FUN_00d23310();
    pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),(char)local_70);
    pplVar12 = &local_40;
    if ((char)local_70 != '\0') {
      pplVar12 = &local_70;
    }
    local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_70);
    *(undefined1 *)pplVar12 = 0;
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6040();
    if (((char)local_40 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar14 = *(int *)((longlong)local_78 + 0xc);
  }
  if (iVar14 == 0) {
    local_ac = -1;
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x998))();
  }
  else {
    FUN_00d23310();
    pplVar12 = &local_70;
    local_50 = (char)local_70;
    pplVar7 = (longlong **)&local_50;
    if ((char)local_70 != '\0') {
      pplVar7 = pplVar12;
    }
    *(undefined1 *)pplVar7 = 0;
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)pplVar12);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e60a0();
    plVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_70._0_1_ = '\0';
    local_78 = (longlong *)0x0;
    local_68 = plVar5;
    local_60 = 0xffffffff;
    local_58 = 0;
    iVar14 = -1;
    local_60._4_4_ = 0;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar8 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar13) break;
      lVar11 = local_68[2];
      local_78 = *(longlong **)(lVar11 + 8 + lVar8 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar11);
      pVar10 = (pthread_key_t)lVar11;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_40 != (longlong *)0x0) {
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar10);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e60a0();
      plVar15 = (longlong *)CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        cVar16 = plVar1 == (longlong *)0x0;
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_006ca7d5;
        }
      }
      else {
        local_48 = '\0';
LAB_006ca7d5:
        cVar16 = plVar1 == (longlong *)0x0 && plVar15 == (longlong *)0x0;
        if ((plVar1 != (longlong *)0x0) && (plVar15 != (longlong *)0x0)) {
          local_38 = '\0';
          local_40 = plVar15;
          cVar16 = (**(code **)(*plVar1 + 0x50))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if (cVar16 == '\0') {
        iVar14 = -2;
      }
    }
    FUN_000be170();
    bVar17 = iVar14 != -2;
    local_ac = (bVar17 - 2) + (uint)bVar17;
    if ((bVar17) && (plVar1 != (longlong *)0x0)) {
      local_ac = FUN_0141b8d0();
      local_ac = local_ac + 1;
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\0';
    plVar15 = unaff_RDI;
    local_40 = unaff_RDI;
    do {
      (**(code **)(*plVar15 + 0x370))();
      if (local_78 == plVar15) {
        if (((local_50 == '\0') && (local_78 != (longlong *)0x0)) && ((char)local_70 != '\0'))
        goto LAB_006ca937;
      }
      else {
        local_40 = local_78;
        plVar15 = local_78;
        if ((char)local_70 == '\0') {
          if (local_50 == '\0') {
            pplVar12 = (longlong **)&local_50;
          }
          else {
            FUN_00d50b20();
            pplVar12 = (longlong **)&local_50;
          }
        }
        else {
          if (local_50 != '\0') {
            FUN_00d50b20();
          }
LAB_006ca937:
          local_50 = '\x01';
          pplVar12 = &local_70;
        }
        *(undefined1 *)pplVar12 = 0;
      }
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00082eb0();
      pplVar12 = (longlong **)&DAT_02802688;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 0x360))();
        cVar16 = FUN_00e85ea0();
        pplVar12 = &local_40;
        if (cVar16 == '\0') {
          pplVar12 = (longlong **)&DAT_02802688;
        }
      }
      if (*pplVar12 != (longlong *)0x0) {
        if ((local_50 == '\0') && (plVar15 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        break;
      }
    } while (plVar15 != (longlong *)0x0);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    bVar17 = true;
    if (plVar15 == (longlong *)0x0) {
LAB_006cac83:
      bVar3 = false;
    }
    else {
      FUN_007646f0();
      if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pcVar4 = DAT_02572370;
      if (local_78 == (longlong *)0x0) goto LAB_006cac83;
      local_70._0_1_ = '\0';
      local_78 = (longlong *)0x0;
      local_68 = plVar5;
      local_60 = 0xffffffff;
      local_58 = 0;
      bVar3 = false;
      puVar9 = (undefined8 *)0x0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar14 = -local_60._4_4_;
          }
          else {
            iVar14 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar14);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar14 = 0;
          }
          local_60 = CONCAT44(iVar14,(int)local_60);
        }
        lVar8 = (longlong)(int)local_60;
        iVar14 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar14);
        if (*(int *)((longlong)local_68 + 0xc) <= iVar14) break;
        local_78 = *(longlong **)(local_68[2] + 8 + lVar8 * 8);
        FUN_007646f0();
        FUN_012d2830();
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
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = &DAT_02572358;
            (*pcVar4)();
            bVar3 = true;
          }
          (**(code **)(*plVar2 + 0x658))();
          plVar2 = (longlong *)CONCAT71(uStack_4f,local_50);
          if (local_48 == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_38 = '\0';
          local_40 = plVar2;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      if (puVar9 != (undefined8 *)0x0) {
        if (plVar5 != (longlong *)0x0) {
          FUN_00b2ada0();
          FUN_00d23310();
          pplVar12 = &local_70;
          if ((char)local_70 == '\0') {
            pplVar12 = &local_40;
          }
          local_40 = (longlong *)CONCAT71(local_40._1_7_,(char)local_70);
          *(undefined1 *)pplVar12 = 0;
          if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b33590();
          FUN_00b2b4a0();
          if (((char)local_40 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00b2b3b0();
        }
        bVar17 = false;
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x998))();
    if (plVar15 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (bVar3 && !bVar17) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar17) goto LAB_006cae63;
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00b2b1b0();
    if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00b2b080();
      FUN_00b2ad50();
    }
  }
LAB_006cae63:
  if (local_ac < -1) {
    FUN_01d6ed40();
    lVar8 = DAT_02726ce0;
    plVar1 = (longlong *)unaff_RDI[0x2a];
    if (DAT_02726ce0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x958))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d6ed40();
  }
  FUN_006db470();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @006c9280 — 1717 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006c955c) */
/* WARNING: Removing unreachable block (ram,0x006c9568) */

void FUN_006c9280(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong unaff_RDI;
  undefined4 uVar6;
  float extraout_XMM0_Da;
  float fVar7;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
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
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  uVar6 = FUN_006cb500();
  lVar4 = local_30;
  if ((local_28 == '\0') && (local_30 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x178);
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar3 = DAT_02726cb0;
  local_b8 = '\x01';
  local_c0 = lVar1;
  if (DAT_02726cb0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar1 = DAT_0270b8a0;
  local_150 = lVar3;
  local_148 = '\x01';
  if (DAT_0270b8a0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_140 = lVar1;
  local_138 = '\x01';
  uVar6 = FUN_01e57260(uVar6,&local_140);
  local_80 = local_30;
  local_78 = 0;
  local_130 = DAT_02726ca8;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      uVar6 = FUN_00d50b00();
      local_130 = DAT_02726ca8;
    }
  }
  else {
    local_28 = '\0';
  }
  local_78 = '\x01';
  DAT_02726ca8 = local_130;
  if (local_130 != 0) {
    local_78 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_01e57260(uVar6,&local_130);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x140);
  }
  else {
    local_38 = '\0';
    lVar1 = *(longlong *)(unaff_RDI + 0x140);
  }
  local_68 = '\x01';
  if (lVar1 != 0) {
    local_68 = '\x01';
    local_a8 = 0;
    FUN_00d50b00();
  }
  lVar3 = DAT_02726cc0;
  local_a8 = '\x01';
  local_b0 = lVar1;
  if (DAT_02726cc0 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  uVar6 = FUN_000b75e0(DAT_023908e0,&local_150,&local_70,&local_b0);
  if ((local_118 != '\0') && (local_120 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  local_98 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x180);
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar3 = DAT_02726cc8;
  local_98 = '\x01';
  local_110 = lVar4;
  local_108 = '\0';
  local_a0 = lVar1;
  if (DAT_02726cc8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  lVar1 = DAT_02726cd0;
  local_100 = lVar3;
  local_f8 = '\x01';
  if (DAT_02726cd0 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  uVar6 = FUN_01e57260(uVar6,&local_f0);
  local_60 = local_30;
  local_58 = 0;
  local_e0 = DAT_02726ca8;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      uVar6 = FUN_00d50b00();
      local_e0 = DAT_02726ca8;
    }
  }
  else {
    local_28 = '\0';
  }
  local_58 = '\x01';
  DAT_02726ca8 = local_e0;
  if (local_e0 != 0) {
    local_58 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01e57260(uVar6,&local_e0);
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x138);
  }
  else {
    local_38 = '\0';
    lVar1 = *(longlong *)(unaff_RDI + 0x138);
  }
  local_48 = '\x01';
  if (lVar1 != 0) {
    local_48 = '\x01';
    local_88 = 0;
    FUN_00d50b00();
  }
  lVar3 = DAT_02726cd8;
  local_88 = '\x01';
  local_90 = lVar1;
  if (DAT_02726cd8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar3;
  local_c8 = '\x01';
  FUN_000b75e0(DAT_02390124,&local_100,&local_50,&local_90);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x108);
  if (plVar2 != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x178) + 0x9a0))();
    fVar7 = extraout_XMM0_Da;
    if (cVar5 != '\0') {
      fVar7 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x178) + 0x930))();
      if ((fVar7 == 0.0) && (!NAN(fVar7))) {
        fVar7 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x930))();
        fVar7 = (float)-(uint)(fVar7 != 0.0);
      }
    }
    (**(code **)(*plVar2 + 0x998))(fVar7);
  }
  cVar5 = FUN_006cff00();
  if (cVar5 != '\0') {
    if (*(longlong **)(unaff_RDI + 0x180) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x180) + 0x928))(0);
    }
    if (*(longlong **)(unaff_RDI + 0x138) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x998))();
      (**(code **)(**(longlong **)(unaff_RDI + 0x138) + 0x928))(0);
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @005e92e0 — 1641 bytes
// str: ""MDTrackInsp""
// str: ""MUTextFieldDragAndEditHandler""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e92e0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a2970();
  unaff_RDI[0x1a] = &DAT_0264a7b8;
  if (DAT_027323d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fb70 = "MUTextFieldDragAndEditHandler";
      DAT_0271fb80 = 0;
      _DAT_0271fb78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02509010;
  unaff_RDI[0x1a] = &DAT_025096d8;
  *(undefined1 *)(unaff_RDI + 0x1b) = 0;
  if (DAT_02726d40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fab8 = FUN_00018750();
      _DAT_0271faa0 = "MDTrackInsp";
      _DAT_0271faa8 = 0x1c8;
      _DAT_0271fab0 = FUN_005e9200;
      _DAT_0271fac0 = 0;
      uRam000000000271fac8 = 0;
      _DAT_0271fad0 = 0;
      _DAT_0271fb48 = 0;
      uRam000000000271fb50 = 0;
      _DAT_0271fb58 = 0;
      DAT_0271fb5a = 1;
      _DAT_0271fad8 = 0;
      uRam000000000271fae0 = 0;
      _DAT_0271fae8 = 0;
      uRam000000000271faf0 = 0;
      _DAT_0271faf8 = 0;
      uRam000000000271fb00 = 0;
      _DAT_0271fb08 = 0;
      uRam000000000271fb10 = 0;
      _DAT_0271fb18 = 0;
      uRam000000000271fb20 = 0;
      _DAT_0271fb28 = 0;
      uRam000000000271fb30 = 0;
      _DAT_0271fb38 = 0;
      uRam000000000271fb40 = 0;
      DAT_0271fb63 = 0;
      _DAT_0271fb5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271fb5b == '\0') {
    FUN_005e9d20();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd9) = 0;
  if (DAT_02726d40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fab8 = FUN_00018750();
      _DAT_0271faa0 = "MDTrackInsp";
      _DAT_0271faa8 = 0x1c8;
      _DAT_0271fab0 = FUN_005e9200;
      _DAT_0271fac0 = 0;
      uRam000000000271fac8 = 0;
      _DAT_0271fad0 = 0;
      _DAT_0271fb48 = 0;
      uRam000000000271fb50 = 0;
      _DAT_0271fb58 = 0;
      DAT_0271fb5a = 1;
      _DAT_0271fad8 = 0;
      uRam000000000271fae0 = 0;
      _DAT_0271fae8 = 0;
      uRam000000000271faf0 = 0;
      _DAT_0271faf8 = 0;
      uRam000000000271fb00 = 0;
      _DAT_0271fb08 = 0;
      uRam000000000271fb10 = 0;
      _DAT_0271fb18 = 0;
      uRam000000000271fb20 = 0;
      _DAT_0271fb28 = 0;
      uRam000000000271fb30 = 0;
      _DAT_0271fb38 = 0;
      uRam000000000271fb40 = 0;
      DAT_0271fb63 = 0;
      _DAT_0271fb5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271fb5b == '\0') {
    FUN_005e9eb0();
    FUN_00e87980();
  }
  FUN_005ea040();
  FUN_005ea300();
  FUN_005ea630();
  FUN_005ea960();
  FUN_005eac90();
  FUN_005eafc0();
  FUN_005eb2f0();
  FUN_005eb620();
  FUN_005eb950();
  FUN_005ebc80();
  FUN_005ebfb0();
  FUN_005ec2e0();
  FUN_005ec610();
  FUN_005ec940();
  FUN_005ecc70();
  FUN_005ecfa0();
  FUN_005ed2d0();
  FUN_005ed600();
  FUN_005ed930();
  FUN_005edc60();
  FUN_005edf90();
  FUN_005ee2c0();
  FUN_005ee5f0();
  FUN_005ee920();
  FUN_005eec50();
  FUN_005eef80();
  FUN_005ef2b0();
  FUN_005ef5e0();
  *(undefined1 *)(unaff_RDI + 0x38) = 0;
  if (DAT_02726d40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fab8 = FUN_00018750();
      _DAT_0271faa0 = "MDTrackInsp";
      _DAT_0271faa8 = 0x1c8;
      _DAT_0271fab0 = FUN_005e9200;
      _DAT_0271fac0 = 0;
      uRam000000000271fac8 = 0;
      _DAT_0271fad0 = 0;
      _DAT_0271fb48 = 0;
      uRam000000000271fb50 = 0;
      _DAT_0271fb58 = 0;
      DAT_0271fb5a = 1;
      _DAT_0271fad8 = 0;
      uRam000000000271fae0 = 0;
      _DAT_0271fae8 = 0;
      uRam000000000271faf0 = 0;
      _DAT_0271faf8 = 0;
      uRam000000000271fb00 = 0;
      _DAT_0271fb08 = 0;
      uRam000000000271fb10 = 0;
      _DAT_0271fb18 = 0;
      uRam000000000271fb20 = 0;
      _DAT_0271fb28 = 0;
      uRam000000000271fb30 = 0;
      _DAT_0271fb38 = 0;
      uRam000000000271fb40 = 0;
      DAT_0271fb63 = 0;
      _DAT_0271fb5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271fb5b == '\0') {
    FUN_005ef910();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @006c9eb0 — 757 bytes
// ============================================================

void FUN_006c9eb0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_d8;
  char local_d0;
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
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  local_60 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x170);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar3 = FUN_006cb500();
  local_40 = 0;
  lVar1 = DAT_02726c98;
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    uVar3 = FUN_00d50b00();
    lVar1 = DAT_02726c98;
  }
  local_40 = '\x01';
  local_48 = local_d8;
  DAT_02726c98 = lVar1;
  if (lVar1 != 0) {
    local_40 = '\x01';
    uVar3 = FUN_00d50b00();
  }
  lVar2 = DAT_02726ca0;
  local_c0 = '\x01';
  local_c8 = lVar1;
  if (DAT_02726ca0 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  uVar3 = FUN_01e57260(uVar3,&local_b8);
  local_38 = local_88;
  local_30 = 0;
  local_a8 = DAT_02726ca8;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      uVar3 = FUN_00d50b00();
      local_a8 = DAT_02726ca8;
    }
  }
  else {
    local_80 = '\0';
  }
  local_30 = '\x01';
  DAT_02726ca8 = local_a8;
  if (local_a8 != 0) {
    local_30 = '\x01';
    uVar3 = FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01e57260(uVar3,&local_a8);
  local_28 = local_78;
  local_20 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x148);
  }
  else {
    local_70 = '\0';
    lVar1 = *(longlong *)(unaff_RDI + 0x148);
  }
  local_20 = '\x01';
  if (lVar1 != 0) {
    local_20 = '\x01';
    local_50 = 0;
    FUN_00d50b00();
  }
  local_50 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  local_58 = lVar1;
  FUN_000b75e0(DAT_02390124,&local_c8,&local_28,&local_58);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00565ea0 — 572 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005660ab) */
/* WARNING: Removing unreachable block (ram,0x0056609d) */
/* WARNING: Removing unreachable block (ram,0x005660b9) */

void FUN_00565ea0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  
  lVar1 = FUN_00479d40();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_005efdc0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_005f0700();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2b8 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
    FUN_001fa900();
  }
  return;
}




// ============================================================
// @00565c40 — 539 bytes
// str: ""MDTrackInsp""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00565c40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_02726d40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0271fab8 = FUN_00018750();
      _DAT_0271faa0 = "MDTrackInsp";
      _DAT_0271faa8 = 0x1c8;
      _DAT_0271fab0 = FUN_005e9200;
      _DAT_0271fac0 = 0;
      uRam000000000271fac8 = 0;
      _DAT_0271fad0 = 0;
      _DAT_0271fb48 = 0;
      uRam000000000271fb50 = 0;
      _DAT_0271fb58 = 0;
      DAT_0271fb5a = 1;
      _DAT_0271fad8 = 0;
      uRam000000000271fae0 = 0;
      _DAT_0271fae8 = 0;
      uRam000000000271faf0 = 0;
      _DAT_0271faf8 = 0;
      uRam000000000271fb00 = 0;
      _DAT_0271fb08 = 0;
      uRam000000000271fb10 = 0;
      _DAT_0271fb18 = 0;
      uRam000000000271fb20 = 0;
      _DAT_0271fb28 = 0;
      uRam000000000271fb30 = 0;
      _DAT_0271fb38 = 0;
      uRam000000000271fb40 = 0;
      DAT_0271fb63 = 0;
      _DAT_0271fb5b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271fb5b != '\0') {
    return;
  }
  FUN_00099ac0();
  FUN_00e87760();
  FUN_00018440();
  FUN_00d50c00();
  FUN_005e92e0();
  FUN_00d50c00();
  FUN_00e87770();
  uVar2 = FUN_006c76c0();
  FUN_00e87920(uVar2,0);
  FUN_006c7210();
  FUN_005efaa0();
  FUN_005efaa0();
  return;
}



