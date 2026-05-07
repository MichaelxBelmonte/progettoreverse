// Reconstructed implementation of MDToolbarTransportCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MDToolbarTransportCtrl.h"

// ============================================================
// @000e95a0 — 3421 bytes
// str: ""onTimeGridChanged""
// str: ""handleTransportToggleCycle""
// str: ""handleTransportRecord""
// str: ""handleTransportStop""
// str: ""handleTransportStart""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e95a0(void)

{
  int iVar1;
  
  if (DAT_02803930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028038f0 = "handleTransportToggleCycle";
      _DAT_028038f8 = &DAT_026defd8;
      _DAT_02803900 = 0;
      _DAT_02803908 = &DAT_026df0c0;
      _DAT_02803910 = FUN_000edac0;
      _DAT_02803918 = FUN_000ec5d0;
      _DAT_02803920 = 0;
      uRam0000000002803928 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803978 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803938 = "handleTransportRecord";
      _DAT_02803940 = &DAT_026defd8;
      _DAT_02803948 = 0;
      _DAT_02803950 = &DAT_026df0c0;
      _DAT_02803958 = FUN_000edac0;
      _DAT_02803960 = FUN_000ec540;
      _DAT_02803968 = 0;
      uRam0000000002803970 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028039c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803980 = "handleTransportStop";
      _DAT_02803988 = &DAT_026defd8;
      _DAT_02803990 = 0;
      _DAT_02803998 = &DAT_026df0c0;
      _DAT_028039a0 = FUN_000edac0;
      _DAT_028039a8 = FUN_000ec780;
      _DAT_028039b0 = 0;
      uRam00000000028039b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803a08 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028039c8 = "handleTransportStart";
      _DAT_028039d0 = &DAT_026defd8;
      _DAT_028039d8 = 0;
      _DAT_028039e0 = &DAT_026df0c0;
      _DAT_028039e8 = FUN_000edac0;
      _DAT_028039f0 = FUN_000ec6f0;
      _DAT_028039f8 = 0;
      uRam0000000002803a00 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803a50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803a10 = "handleTransportTogglePlayback";
      _DAT_02803a18 = &DAT_026defd8;
      _DAT_02803a20 = 0;
      _DAT_02803a28 = &DAT_026df0c0;
      _DAT_02803a30 = FUN_000edac0;
      _DAT_02803a38 = FUN_000ec660;
      _DAT_02803a40 = 0;
      uRam0000000002803a48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803a98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803a58 = "handleTransportSetCursor";
      _DAT_02803a60 = &DAT_026defd8;
      _DAT_02803a68 = 0;
      _DAT_02803a70 = &DAT_026df0c0;
      _DAT_02803a78 = FUN_000edac0;
      _DAT_02803a80 = FUN_000ec810;
      _DAT_02803a88 = 0;
      uRam0000000002803a90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803ae0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803aa0 = "onTimeGridChanged";
      _DAT_02803aa8 = &DAT_026defd8;
      _DAT_02803ab0 = 0;
      _DAT_02803ab8 = &DAT_026df0c4;
      _DAT_02803ac0 = FUN_000edb50;
      _DAT_02803ac8 = FUN_000ea4c0;
      _DAT_02803ad0 = 0;
      uRam0000000002803ad8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803b28 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803ae8 = "onSomethingChanged";
      _DAT_02803af0 = &DAT_026defd8;
      _DAT_02803af8 = 0;
      _DAT_02803b00 = &DAT_026df0c4;
      _DAT_02803b08 = FUN_000edb50;
      _DAT_02803b10 = FUN_000eaa70;
      _DAT_02803b18 = 0;
      uRam0000000002803b20 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803b70 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803b30 = "onCompositionChanged";
      _DAT_02803b38 = &DAT_026defd8;
      _DAT_02803b40 = 0;
      _DAT_02803b48 = &DAT_026df0c7;
      _DAT_02803b50 = FUN_000edbd0;
      _DAT_02803b58 = FUN_000ea330;
      _DAT_02803b60 = 0;
      uRam0000000002803b68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02803bb8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026df0a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026deff0 = FUN_00015ff0();
          _DAT_026defd8 = "MDToolbarTransportCtrl";
          _DAT_026defe0 = 0xe8;
          _DAT_026defe8 = FUN_000ed6b0;
          _DAT_026deff8 = 0;
          uRam00000000026df000 = 0;
          _DAT_026df008 = 0;
          uRam00000000026df010 = 0;
          _DAT_026df018 = 0;
          uRam00000000026df020 = 0;
          _DAT_026df028 = 0;
          uRam00000000026df030 = 0;
          _DAT_026df038 = 0;
          uRam00000000026df040 = 0;
          _DAT_026df048 = 0;
          uRam00000000026df050 = 0;
          _DAT_026df058 = 0;
          uRam00000000026df060 = 0;
          _DAT_026df068 = 0;
          uRam00000000026df070 = 0;
          _DAT_026df078 = 0;
          uRam00000000026df080 = 0;
          _DAT_026df088 = 0;
          uRam00000000026df090 = 0;
          _DAT_026df098 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02803b78 = "onIOChanged";
      _DAT_02803b80 = &DAT_026defd8;
      _DAT_02803b88 = 0;
      _DAT_02803b90 = &DAT_026df0c4;
      _DAT_02803b98 = FUN_000edb50;
      _DAT_02803ba0 = FUN_000eceb0;
      _DAT_02803ba8 = 0;
      uRam0000000002803bb0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00879290 — 773 bytes
// str: ""MDToolbarTransportCtrl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00879290(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_024cc728;
  FUN_008796c0();
  FUN_008799a0();
  FUN_00879c80();
  FUN_00879f60();
  FUN_0087a240();
  FUN_0087a530();
  FUN_0087a820();
  FUN_0087ab10();
  FUN_0087ae00();
  FUN_0087b0f0();
  FUN_0087b3d0();
  FUN_0087b6c0();
  FUN_0087b9b0();
  unaff_RDI[0x1b] = 0;
  if (DAT_026df0a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026deff0 = FUN_00015ff0();
      _DAT_026defd8 = "MDToolbarTransportCtrl";
      _DAT_026defe0 = 0xe8;
      _DAT_026defe8 = FUN_000ed6b0;
      _DAT_026deff8 = 0;
      uRam00000000026df000 = 0;
      _DAT_026df008 = 0;
      uRam00000000026df010 = 0;
      _DAT_026df018 = 0;
      uRam00000000026df020 = 0;
      _DAT_026df028 = 0;
      uRam00000000026df030 = 0;
      _DAT_026df038 = 0;
      uRam00000000026df040 = 0;
      _DAT_026df048 = 0;
      uRam00000000026df050 = 0;
      _DAT_026df058 = 0;
      uRam00000000026df060 = 0;
      _DAT_026df068 = 0;
      uRam00000000026df070 = 0;
      _DAT_026df078 = 0;
      uRam00000000026df080 = 0;
      _DAT_026df088 = 0;
      _uRam00000000026df090 = 0;
      _DAT_026df098 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df093 == '\0') {
    FUN_0087bca0();
    FUN_00e87980();
  }
  unaff_RDI[0x1c] = 0;
  if (DAT_026df0a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026deff0 = FUN_00015ff0();
      _DAT_026defd8 = "MDToolbarTransportCtrl";
      _DAT_026defe0 = 0xe8;
      _DAT_026defe8 = FUN_000ed6b0;
      _DAT_026deff8 = 0;
      uRam00000000026df000 = 0;
      _DAT_026df008 = 0;
      uRam00000000026df010 = 0;
      _DAT_026df018 = 0;
      uRam00000000026df020 = 0;
      _DAT_026df028 = 0;
      uRam00000000026df030 = 0;
      _DAT_026df038 = 0;
      uRam00000000026df040 = 0;
      _DAT_026df048 = 0;
      uRam00000000026df050 = 0;
      _DAT_026df058 = 0;
      uRam00000000026df060 = 0;
      _DAT_026df068 = 0;
      uRam00000000026df070 = 0;
      _DAT_026df078 = 0;
      uRam00000000026df080 = 0;
      _DAT_026df088 = 0;
      _uRam00000000026df090 = 0;
      _DAT_026df098 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df093 == '\0') {
    FUN_0087be10();
    FUN_00e87980();
  }
  return;
}



