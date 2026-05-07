// Reconstructed implementation of MDToolbarTempoCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarTempoCtrl.h"

// ============================================================
// @000870e0 — 4785 bytes
// str: ""handleTempoChanged""
// str: ""handleToggleTempoEditor""
// str: ""handleToggleAutoStretch""
// str: ""handleSignatureChanged""
// str: ""handleClickSliderChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000870e0(void)

{
  int iVar1;
  
  if (DAT_028033b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803378 = "handleTempoChanged";
      _DAT_02803380 = &DAT_026d8950;
      _DAT_02803388 = 0;
      _DAT_02803390 = &DAT_026d8a20;
      _DAT_02803398 = FUN_00091390;
      _DAT_028033a0 = FUN_0008d170;
      _DAT_028033a8 = 0;
      uRam00000000028033b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803400 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028033c0 = "handleToggleTempoEditor";
      _DAT_028033c8 = &DAT_026d8950;
      _DAT_028033d0 = 0;
      _DAT_028033d8 = &DAT_026d8a20;
      _DAT_028033e0 = FUN_00091390;
      _DAT_028033e8 = FUN_0008ee80;
      _DAT_028033f0 = 0;
      uRam00000000028033f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803448 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803408 = "handleToggleAutoStretch";
      _DAT_02803410 = &DAT_026d8950;
      _DAT_02803418 = 0;
      _DAT_02803420 = &DAT_026d8a20;
      _DAT_02803428 = FUN_00091390;
      _DAT_02803430 = FUN_0008dd50;
      _DAT_02803438 = 0;
      uRam0000000002803440 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803490 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803450 = "handleSignatureChanged";
      _DAT_02803458 = &DAT_026d8950;
      _DAT_02803460 = 0;
      _DAT_02803468 = &DAT_026d8a20;
      _DAT_02803470 = FUN_00091390;
      _DAT_02803478 = FUN_0008f9e0;
      _DAT_02803480 = 0;
      uRam0000000002803488 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028034d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803498 = "handleClickSliderChanged";
      _DAT_028034a0 = &DAT_026d8950;
      _DAT_028034a8 = 0;
      _DAT_028034b0 = &DAT_026d8a20;
      _DAT_028034b8 = FUN_00091390;
      _DAT_028034c0 = FUN_00090480;
      _DAT_028034c8 = 0;
      uRam00000000028034d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803520 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028034e0 = "onUpdatePlaybackController";
      _DAT_028034e8 = &DAT_026d8950;
      _DAT_028034f0 = 0;
      _DAT_028034f8 = &DAT_026d8a24;
      _DAT_02803500 = FUN_00091420;
      _DAT_02803508 = FUN_0008b1e0;
      _DAT_02803510 = 0;
      uRam0000000002803518 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803568 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803528 = "onTempoEditorChanged";
      _DAT_02803530 = &DAT_026d8950;
      _DAT_02803538 = 0;
      _DAT_02803540 = &DAT_026d8a24;
      _DAT_02803548 = FUN_00091420;
      _DAT_02803550 = FUN_0008a6e0;
      _DAT_02803558 = 0;
      uRam0000000002803560 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028035b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803570 = "onPreferencesDidChange";
      _DAT_02803578 = &DAT_026d8950;
      _DAT_02803580 = 0;
      _DAT_02803588 = &DAT_026d8a24;
      _DAT_02803590 = FUN_00091420;
      _DAT_02803598 = FUN_00089b20;
      _DAT_028035a0 = 0;
      uRam00000000028035a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028035f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028035b8 = "onTempoEditorIsChanging";
      _DAT_028035c0 = &DAT_026d8950;
      _DAT_028035c8 = 0;
      _DAT_028035d0 = &DAT_026d8a24;
      _DAT_028035d8 = FUN_00091420;
      _DAT_028035e0 = FUN_00088ba0;
      _DAT_028035e8 = 0;
      uRam00000000028035f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803640 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803600 = "onFeatureSetChanged";
      _DAT_02803608 = &DAT_026d8950;
      _DAT_02803610 = 0;
      _DAT_02803618 = &DAT_026d8a24;
      _DAT_02803620 = FUN_00091420;
      _DAT_02803628 = FUN_00088790;
      _DAT_02803630 = 0;
      uRam0000000002803638 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803688 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803648 = "onMainResponderChanged";
      _DAT_02803650 = &DAT_026d8950;
      _DAT_02803658 = 0;
      _DAT_02803660 = &DAT_026d8a24;
      _DAT_02803668 = FUN_00091420;
      _DAT_02803670 = FUN_000883d0;
      _DAT_02803678 = 0;
      uRam0000000002803680 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028036d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803690 = "onTimeGridChanged";
      _DAT_02803698 = &DAT_026d8950;
      _DAT_028036a0 = 0;
      _DAT_028036a8 = &DAT_026d8a24;
      _DAT_028036b0 = FUN_00091420;
      _DAT_028036b8 = FUN_0008a6d0;
      _DAT_028036c0 = 0;
      uRam00000000028036c8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803718 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028036d8 = "onUserLocaleChanged";
      _DAT_028036e0 = &DAT_026d8950;
      _DAT_028036e8 = 0;
      _DAT_028036f0 = &DAT_026d8a24;
      _DAT_028036f8 = FUN_00091420;
      _DAT_02803700 = FUN_00089de0;
      _DAT_02803708 = 0;
      uRam0000000002803710 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803760 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026d8a18 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d8968 = FUN_00015ff0();
          _DAT_026d8950 = "MDToolbarTempoCtrl";
          _DAT_026d8958 = 0x138;
          _DAT_026d8960 = FUN_000912f0;
          _DAT_026d8970 = 0;
          uRam00000000026d8978 = 0;
          _DAT_026d8980 = 0;
          uRam00000000026d8988 = 0;
          _DAT_026d8990 = 0;
          uRam00000000026d8998 = 0;
          _DAT_026d89a0 = 0;
          uRam00000000026d89a8 = 0;
          _DAT_026d89b0 = 0;
          uRam00000000026d89b8 = 0;
          _DAT_026d89c0 = 0;
          uRam00000000026d89c8 = 0;
          _DAT_026d89d0 = 0;
          uRam00000000026d89d8 = 0;
          _DAT_026d89e0 = 0;
          uRam00000000026d89e8 = 0;
          _DAT_026d89f0 = 0;
          uRam00000000026d89f8 = 0;
          _DAT_026d8a00 = 0;
          uRam00000000026d8a08 = 0;
          _DAT_026d8a10 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803720 = "onAudioDeviceChanged";
      _DAT_02803728 = &DAT_026d8950;
      _DAT_02803730 = 0;
      _DAT_02803738 = &DAT_026d8a24;
      _DAT_02803740 = FUN_00091420;
      _DAT_02803748 = FUN_00089d90;
      _DAT_02803750 = 0;
      uRam0000000002803758 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0087bf80 — 2032 bytes
// str: ""MDToolbarTempoCtrl""
// str: ""GNTextViewDelegate""
// str: ""MUTextFieldDragAndEditHandler""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0087bf80(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  unaff_RDI[0xe] = &DAT_0264a7b8;
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
  unaff_RDI[0xf] = &DAT_0269d6b8;
  if (DAT_026ea700 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027399d0 = "GNTextViewDelegate";
      DAT_027399e0 = 0;
      _DAT_027399d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_024c6008;
  unaff_RDI[0xe] = &DAT_024c65f8;
  unaff_RDI[0xf] = &DAT_024c6640;
  FUN_0087c970();
  FUN_0087cc50();
  FUN_0087cf30();
  FUN_0087d220();
  FUN_0087d500();
  FUN_0087d7f0();
  FUN_0087dad0();
  FUN_0087ddc0();
  FUN_0087e0b0();
  FUN_0087e3a0();
  FUN_0087e690();
  FUN_0087e980();
  FUN_0087ec70();
  FUN_0087ef60();
  FUN_0087f250();
  unaff_RDI[0x1f] = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_0087f540();
    FUN_00e87980();
  }
  unaff_RDI[0x20] = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_0087f6b0();
    FUN_00e87980();
  }
  FUN_0087f820();
  unaff_RDI[0x22] = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_0087faa0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x23) = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_0087fc10();
    FUN_00e87980();
  }
  unaff_RDI[0x24] = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_0087fd80();
    FUN_00e87980();
  }
  FUN_0087fef0();
  *(undefined1 *)(unaff_RDI + 0x26) = 0;
  if (DAT_026d8a18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026d8968 = FUN_00015ff0();
      _DAT_026d8950 = "MDToolbarTempoCtrl";
      _DAT_026d8958 = 0x138;
      _DAT_026d8960 = FUN_000912f0;
      _DAT_026d8970 = 0;
      uRam00000000026d8978 = 0;
      _DAT_026d8980 = 0;
      uRam00000000026d8988 = 0;
      _DAT_026d8990 = 0;
      uRam00000000026d8998 = 0;
      _DAT_026d89a0 = 0;
      uRam00000000026d89a8 = 0;
      _DAT_026d89b0 = 0;
      uRam00000000026d89b8 = 0;
      _DAT_026d89c0 = 0;
      uRam00000000026d89c8 = 0;
      _DAT_026d89d0 = 0;
      uRam00000000026d89d8 = 0;
      _DAT_026d89e0 = 0;
      uRam00000000026d89e8 = 0;
      _DAT_026d89f0 = 0;
      uRam00000000026d89f8 = 0;
      _DAT_026d8a00 = 0;
      _uRam00000000026d8a08 = 0;
      _DAT_026d8a10 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026d8a0b == '\0') {
    FUN_00880170();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @000883e0 — 589 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000883e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_026d8938;
  if ((*(longlong *)(unaff_RDI + 0xa0) != 0) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
    if (DAT_026d8938 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((longlong)dVar6 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar2;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((lVar3 != 0 & bVar4) == 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x478))();
      }
    }
    else {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        plVar1 = *(longlong **)(unaff_RDI + 0x10);
        lVar2 = *(longlong *)(unaff_RDI + 0xa0);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar2;
        (**(code **)(*plVar1 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0008a6e0();
  return;
}



