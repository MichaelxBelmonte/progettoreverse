// Reconstructed implementation of MUScalePanel
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScalePanel.h"

// ============================================================
// @01ad0ca0 — 4878 bytes
// str: ""handleSelectNewScale""
// str: ""handleFinishEditing""
// str: ""handleSetTuningAnchor""
// str: ""handleSetIntervalCentForSelectedPitchIndex""
// str: ""handleToggleModeOffsetIsLocked""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad0ca0(void)

{
  int iVar1;
  
  if (DAT_028b36a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3668 = FUN_00275460();
      _DAT_028b3660 = "handleSetTuningAnchor";
      _DAT_028b3670 = 0;
      _DAT_028b3678 = &DAT_027e3fa8;
      _DAT_028b3680 = FUN_01b28f70;
      _DAT_028b3688 = 0x971;
      _DAT_028b3690 = 0;
      uRam00000000028b3698 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b36e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b36b0 = FUN_00275460();
      _DAT_028b36a8 = "handleSelectNewScale";
      _DAT_028b36b8 = 0;
      _DAT_028b36c0 = &DAT_027e3fa8;
      _DAT_028b36c8 = FUN_01b28f70;
      _DAT_028b36d0 = 0x979;
      _DAT_028b36d8 = 0;
      uRam00000000028b36e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3730 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b36f8 = FUN_00275460();
      _DAT_028b36f0 = "handleSetIntervalCentForSelectedPitchIndex";
      _DAT_028b3700 = 0;
      _DAT_028b3708 = &DAT_027e3fa8;
      _DAT_028b3710 = FUN_01b28f70;
      _DAT_028b3718 = 0x981;
      _DAT_028b3720 = 0;
      uRam00000000028b3728 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3778 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3740 = FUN_00275460();
      _DAT_028b3738 = "handleToggleModeOffsetIsLocked";
      _DAT_028b3748 = 0;
      _DAT_028b3750 = &DAT_027e3fa8;
      _DAT_028b3758 = FUN_01b28f70;
      _DAT_028b3760 = 0x989;
      _DAT_028b3768 = 0;
      uRam00000000028b3770 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b37c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3788 = FUN_00275460();
      _DAT_028b3780 = "handleToggleCentDisplayMode";
      _DAT_028b3790 = 0;
      _DAT_028b3798 = &DAT_027e3fa8;
      _DAT_028b37a0 = FUN_01b28f70;
      _DAT_028b37a8 = 0x991;
      _DAT_028b37b0 = 0;
      uRam00000000028b37b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3808 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b37d0 = FUN_00275460();
      _DAT_028b37c8 = "handleFilterSliderAction";
      _DAT_028b37d8 = 0;
      _DAT_028b37e0 = &DAT_027e3fa8;
      _DAT_028b37e8 = FUN_01b28f70;
      _DAT_028b37f0 = 0x999;
      _DAT_028b37f8 = 0;
      uRam00000000028b3800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3850 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3818 = FUN_00275460();
      _DAT_028b3810 = "handleToggleModeDegreeType";
      _DAT_028b3820 = 0;
      _DAT_028b3828 = &DAT_027e3fa8;
      _DAT_028b3830 = FUN_01b28f70;
      _DAT_028b3838 = 0x9a1;
      _DAT_028b3840 = 0;
      uRam00000000028b3848 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3898 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3860 = FUN_00275460();
      _DAT_028b3858 = "handleFinishEditing";
      _DAT_028b3868 = 0;
      _DAT_028b3870 = &DAT_027e3fa8;
      _DAT_028b3878 = FUN_01b28f70;
      _DAT_028b3880 = 0x9a9;
      _DAT_028b3888 = 0;
      uRam00000000028b3890 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b38e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b38a8 = FUN_00275460();
      _DAT_028b38a0 = "handlePlayCurrentScale";
      _DAT_028b38b0 = 0;
      _DAT_028b38b8 = &DAT_027e3fa8;
      _DAT_028b38c0 = FUN_01b28f70;
      _DAT_028b38c8 = 0x9b1;
      _DAT_028b38d0 = 0;
      uRam00000000028b38d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3928 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b38f0 = FUN_00275460();
      _DAT_028b38e8 = "handleCancelCurrentScalePlayback";
      _DAT_028b38f8 = 0;
      _DAT_028b3900 = &DAT_027e3fa8;
      _DAT_028b3908 = FUN_01b28f70;
      _DAT_028b3910 = 0x9b9;
      _DAT_028b3918 = 0;
      uRam00000000028b3920 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3938 = FUN_00275460();
      _DAT_028b3930 = "handleSetTuningIntervalAsDisplayReference";
      _DAT_028b3940 = 0;
      _DAT_028b3948 = &DAT_027e3fa8;
      _DAT_028b3950 = FUN_01b28f70;
      _DAT_028b3958 = 0x9c1;
      _DAT_028b3960 = 0;
      uRam00000000028b3968 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b39b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3980 = FUN_00275460();
      _DAT_028b3978 = "handleSetTuningIntervalAsTuningRoot";
      _DAT_028b3988 = 0;
      _DAT_028b3990 = &DAT_027e3fa8;
      _DAT_028b3998 = FUN_01b28f70;
      _DAT_028b39a0 = 0x9c9;
      _DAT_028b39a8 = 0;
      uRam00000000028b39b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3a00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b39c8 = FUN_00275460();
      _DAT_028b39c0 = "handleInsertTuningInterval";
      _DAT_028b39d0 = 0;
      _DAT_028b39d8 = &DAT_027e3fa8;
      _DAT_028b39e0 = FUN_01b28f70;
      _DAT_028b39e8 = 0x9d1;
      _DAT_028b39f0 = 0;
      uRam00000000028b39f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3a48 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3a10 = FUN_00275460();
      _DAT_028b3a08 = "handleDeleteTuningInterval";
      _DAT_028b3a18 = 0;
      _DAT_028b3a20 = &DAT_027e3fa8;
      _DAT_028b3a28 = FUN_01b28f70;
      _DAT_028b3a30 = 0x9d9;
      _DAT_028b3a38 = 0;
      uRam00000000028b3a40 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3a90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3a58 = FUN_00275460();
      _DAT_028b3a50 = "handleStretchTuning";
      _DAT_028b3a60 = 0;
      _DAT_028b3a68 = &DAT_027e3fa8;
      _DAT_028b3a70 = FUN_01b28f70;
      _DAT_028b3a78 = 0x9e1;
      _DAT_028b3a80 = 0;
      uRam00000000028b3a88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3aa0 = FUN_00275460();
      _DAT_028b3a98 = "handleCreateNewScale";
      _DAT_028b3aa8 = 0;
      _DAT_028b3ab0 = &DAT_027e3fa8;
      _DAT_028b3ab8 = FUN_01b28f70;
      _DAT_028b3ac0 = 0x9e9;
      _DAT_028b3ac8 = 0;
      uRam00000000028b3ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3b20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3ae8 = FUN_00275460();
      _DAT_028b3ae0 = "handleToggleIntervalMonitoring";
      _DAT_028b3af0 = 0;
      _DAT_028b3af8 = &DAT_027e3fa8;
      _DAT_028b3b00 = FUN_01b28f70;
      _DAT_028b3b08 = 0x9f1;
      _DAT_028b3b10 = 0;
      uRam00000000028b3b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3b68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3b30 = FUN_00275460();
      _DAT_028b3b28 = "handleSetModeTitlesType";
      _DAT_028b3b38 = 0;
      _DAT_028b3b40 = &DAT_027e3fa8;
      _DAT_028b3b48 = FUN_01b28f70;
      _DAT_028b3b50 = 0x9f9;
      _DAT_028b3b58 = 0;
      uRam00000000028b3b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3bb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3b78 = FUN_00275460();
      _DAT_028b3b70 = "handleSetPitchDisplayMode";
      _DAT_028b3b80 = 0;
      _DAT_028b3b88 = &DAT_027e3fa8;
      _DAT_028b3b90 = FUN_01b28f70;
      _DAT_028b3b98 = 0xa01;
      _DAT_028b3ba0 = 0;
      uRam00000000028b3ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3bf8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3bc0 = FUN_00275460();
      _DAT_028b3bb8 = "handleSetWesternStandardPitchIndexOffsetForPitchIndexByAssignmentOffset";
      _DAT_028b3bc8 = 0;
      _DAT_028b3bd0 = &DAT_027e3fa8;
      _DAT_028b3bd8 = FUN_01b28f70;
      _DAT_028b3be0 = 0xa09;
      _DAT_028b3be8 = 0;
      uRam00000000028b3bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3c40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3c08 = FUN_00275460();
      _DAT_028b3c00 = "handleRemoveUnusedDegrees";
      _DAT_028b3c10 = 0;
      _DAT_028b3c18 = &DAT_027e3fa8;
      _DAT_028b3c20 = FUN_01b28f70;
      _DAT_028b3c28 = 0xa11;
      _DAT_028b3c30 = 0;
      uRam00000000028b3c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3c88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3c50 = FUN_00275460();
      _DAT_028b3c48 = "handleInsertChromaticIntervals";
      _DAT_028b3c58 = 0;
      _DAT_028b3c60 = &DAT_027e3fa8;
      _DAT_028b3c68 = FUN_01b28f70;
      _DAT_028b3c70 = 0xa19;
      _DAT_028b3c78 = 0;
      uRam00000000028b3c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3cd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3c98 = FUN_00275460();
      _DAT_028b3c90 = "handleSetTuningToEqualTemperament";
      _DAT_028b3ca0 = 0;
      _DAT_028b3ca8 = &DAT_027e3fa8;
      _DAT_028b3cb0 = FUN_01b28f70;
      _DAT_028b3cb8 = 0xa21;
      _DAT_028b3cc0 = 0;
      uRam00000000028b3cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3ce0 = FUN_00275460();
      _DAT_028b3cd8 = "handleToggleApplyDetectionToScale";
      _DAT_028b3ce8 = 0;
      _DAT_028b3cf0 = &DAT_027e3fa8;
      _DAT_028b3cf8 = FUN_01b28f70;
      _DAT_028b3d00 = 0xa29;
      _DAT_028b3d08 = 0;
      uRam00000000028b3d10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3d60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3d28 = FUN_00275460();
      _DAT_028b3d20 = "handleRedetectScale";
      _DAT_028b3d30 = 0;
      _DAT_028b3d38 = &DAT_027e3fa8;
      _DAT_028b3d40 = FUN_01b28f70;
      _DAT_028b3d48 = 0xa31;
      _DAT_028b3d50 = 0;
      uRam00000000028b3d58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3da8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3d70 = FUN_00275460();
      _DAT_028b3d68 = "handleToggleDetectionInsertsChromaticIntervals";
      _DAT_028b3d78 = 0;
      _DAT_028b3d80 = &DAT_027e3fa8;
      _DAT_028b3d88 = FUN_01b28f70;
      _DAT_028b3d90 = 0xa39;
      _DAT_028b3d98 = 0;
      uRam00000000028b3da0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3df0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3db8 = FUN_00275460();
      _DAT_028b3db0 = "handleToggleKeepDetectionFundamental";
      _DAT_028b3dc0 = 0;
      _DAT_028b3dc8 = &DAT_027e3fa8;
      _DAT_028b3dd0 = FUN_01b28f70;
      _DAT_028b3dd8 = 0xa41;
      _DAT_028b3de0 = 0;
      uRam00000000028b3de8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3e00 = FUN_00275460();
      _DAT_028b3df8 = "handleOpenDetectionOptionsPanel";
      _DAT_028b3e08 = 0;
      _DAT_028b3e10 = &DAT_027e3fa8;
      _DAT_028b3e18 = FUN_01b28f70;
      _DAT_028b3e20 = 0xa49;
      _DAT_028b3e28 = 0;
      uRam00000000028b3e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3e80 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3e48 = FUN_00275460();
      _DAT_028b3e40 = "handleSavePitchSystem";
      _DAT_028b3e50 = 0;
      _DAT_028b3e58 = &DAT_027e3fa8;
      _DAT_028b3e60 = FUN_01b28f70;
      _DAT_028b3e68 = 0xa51;
      _DAT_028b3e70 = 0;
      uRam00000000028b3e78 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3ec8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3e90 = FUN_00275460();
      _DAT_028b3e88 = "handleSelectPitchSystem";
      _DAT_028b3e98 = 0;
      _DAT_028b3ea0 = &DAT_027e3fa8;
      _DAT_028b3ea8 = FUN_01b28f70;
      _DAT_028b3eb0 = 0xa59;
      _DAT_028b3eb8 = 0;
      uRam00000000028b3ec0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3f10 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3ed8 = FUN_00275460();
      _DAT_028b3ed0 = "handleSelectScaleAnalyzedFromAudio";
      _DAT_028b3ee0 = 0;
      _DAT_028b3ee8 = &DAT_027e3fa8;
      _DAT_028b3ef0 = FUN_01b28f70;
      _DAT_028b3ef8 = 0xa61;
      _DAT_028b3f00 = 0;
      uRam00000000028b3f08 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3f58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028b3f20 = FUN_00275460();
      _DAT_028b3f18 = "handleDynamicJustTuning";
      _DAT_028b3f28 = 0;
      _DAT_028b3f30 = &DAT_027e3fa8;
      _DAT_028b3f38 = FUN_01b28f70;
      _DAT_028b3f40 = FUN_01b28230;
      _DAT_028b3f48 = 0;
      uRam00000000028b3f50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01acbed0 — 2934 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01acc5e8) */
/* WARNING: Removing unreachable block (ram,0x01acc5f1) */
/* WARNING: Removing unreachable block (ram,0x01acc1e7) */
/* WARNING: Removing unreachable block (ram,0x01acc1f0) */
/* WARNING: Removing unreachable block (ram,0x01acbff1) */
/* WARNING: Removing unreachable block (ram,0x01acbffd) */
/* WARNING: Removing unreachable block (ram,0x01acca72) */
/* WARNING: Removing unreachable block (ram,0x01acca82) */
/* WARNING: Removing unreachable block (ram,0x01acc340) */
/* WARNING: Removing unreachable block (ram,0x01acc349) */
/* WARNING: Removing unreachable block (ram,0x01acc2d0) */
/* WARNING: Removing unreachable block (ram,0x01acc2d9) */
/* WARNING: Removing unreachable block (ram,0x01acc11f) */
/* WARNING: Removing unreachable block (ram,0x01acc140) */
/* WARNING: Removing unreachable block (ram,0x01acc121) */
/* WARNING: Removing unreachable block (ram,0x01acc142) */
/* WARNING: Removing unreachable block (ram,0x01acc488) */
/* WARNING: Removing unreachable block (ram,0x01acc491) */
/* WARNING: Removing unreachable block (ram,0x01acc875) */
/* WARNING: Removing unreachable block (ram,0x01acc882) */

void FUN_01acbed0(undefined8 param_1,char param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  pthread_key_t pVar13;
  pthread_key_t pVar14;
  longlong lVar15;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_a0;
  char local_98;
  int local_88;
  undefined8 local_60;
  char local_58;
  undefined8 local_40;
  char local_38;
  
  if ((unaff_RSI >> 0x20 != 0) && (lVar2 = *unaff_RDI, lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      pVar13 = 0;
      do {
        lVar6 = local_a0;
        pVar14 = pVar13;
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar14 = (pthread_key_t)local_a0;
        }
        FUN_013dfcb0();
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
LAB_01acc11b:
          while( true ) {
            uVar7 = local_40;
            lVar10 = (longlong)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_88) break;
            lVar15 = *(longlong *)(lVar6 + 0x10);
            local_a0 = *(longlong *)(lVar15 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
            pVar14 = (pthread_key_t)lVar15;
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_38 == '\0') goto LAB_01acc1d0;
            if (local_40 != 0) goto LAB_01acc200;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar13 = pVar13 + 1;
      } while ((int)pVar13 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
LAB_01acc1d0:
  if (local_40 == 0) goto LAB_01acc11b;
  FUN_00d50b00();
LAB_01acc200:
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01acc110;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (pthread_key_t)local_40;
  if (local_40 == 0) {
LAB_01acc3f0:
    uVar16 = 0;
    bVar5 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acc3f0;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar5 = false;
      uVar16 = 0;
    }
    else {
      uVar16 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        local_38 = '\0';
        bVar5 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 == 0) {
LAB_01acc550:
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acc550;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar4 = false;
      uVar17 = 0;
    }
    else {
      uVar17 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_38 = '\0';
        bVar4 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_01507970();
  FUN_00e7b820();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01508610();
  local_60._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  if (param_2 == '\0') {
    bVar3 = false;
    if ((uVar11 >> 0x20 != 0) && (bVar3 = false, local_60._4_4_ != 0)) {
      cVar8 = FUN_00e7c020();
      if (cVar8 == '\0') goto LAB_01acc775;
      bVar3 = false;
    }
  }
  else {
LAB_01acc775:
    FUN_00e7b820();
    bVar3 = true;
  }
  if (uVar16 == 0) {
LAB_01acc820:
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01508610();
      local_40._4_4_ = (int)(uVar11 >> 0x20);
      if (((local_40._4_4_ != 0) && (uVar12 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 == '\0')) goto LAB_01acc9c2;
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015084d0();
    if (uVar16 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015085a0();
    }
    if (bVar3) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015085a0();
      if (uVar17 != 0) {
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015084d0();
      }
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01507970();
    if (((local_60._4_4_ == 0) || (uVar12 >> 0x20 == 0)) || (cVar8 = FUN_00e7c020(), cVar8 != '\0'))
    goto LAB_01acc820;
  }
LAB_01acc9c2:
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (uVar17 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (uVar16 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar10;
  local_40 = uVar11;
  if (uVar7 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01acc110:
  FUN_00d50b20();
  goto LAB_01acc11b;
}




// ============================================================
// @01acce90 — 2934 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01acd5a8) */
/* WARNING: Removing unreachable block (ram,0x01acd5b1) */
/* WARNING: Removing unreachable block (ram,0x01acd1a7) */
/* WARNING: Removing unreachable block (ram,0x01acd1b0) */
/* WARNING: Removing unreachable block (ram,0x01accfb1) */
/* WARNING: Removing unreachable block (ram,0x01accfbd) */
/* WARNING: Removing unreachable block (ram,0x01acda32) */
/* WARNING: Removing unreachable block (ram,0x01acda42) */
/* WARNING: Removing unreachable block (ram,0x01acd300) */
/* WARNING: Removing unreachable block (ram,0x01acd309) */
/* WARNING: Removing unreachable block (ram,0x01acd290) */
/* WARNING: Removing unreachable block (ram,0x01acd299) */
/* WARNING: Removing unreachable block (ram,0x01acd0df) */
/* WARNING: Removing unreachable block (ram,0x01acd100) */
/* WARNING: Removing unreachable block (ram,0x01acd0e1) */
/* WARNING: Removing unreachable block (ram,0x01acd102) */
/* WARNING: Removing unreachable block (ram,0x01acd448) */
/* WARNING: Removing unreachable block (ram,0x01acd451) */
/* WARNING: Removing unreachable block (ram,0x01acd835) */
/* WARNING: Removing unreachable block (ram,0x01acd842) */

void FUN_01acce90(undefined8 param_1,char param_2)

{
  pthread_key_t pVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  pthread_key_t pVar13;
  pthread_key_t pVar14;
  longlong lVar15;
  ulonglong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_a0;
  char local_98;
  int local_88;
  undefined8 local_60;
  char local_58;
  undefined8 local_40;
  char local_38;
  
  if ((unaff_RSI >> 0x20 != 0) && (lVar2 = *unaff_RDI, lVar2 != 0)) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      pVar13 = 0;
      do {
        lVar6 = local_a0;
        pVar14 = pVar13;
        pvVar9 = _pthread_getspecific(pVar13);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_98 == '\0') && (local_a0 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar14);
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          pVar14 = (pthread_key_t)local_a0;
        }
        FUN_013dfcb0();
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd790();
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_a0 != 0) {
          local_98 = '\0';
          local_a0 = 0;
          local_88 = -1;
LAB_01acd0db:
          while( true ) {
            uVar7 = local_40;
            lVar10 = (longlong)local_88;
            local_88 = local_88 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_88) break;
            lVar15 = *(longlong *)(lVar6 + 0x10);
            local_a0 = *(longlong *)(lVar15 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((pthread_key_t)lVar15);
            pVar14 = (pthread_key_t)lVar15;
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if (local_38 == '\0') goto LAB_01acd190;
            if (local_40 != 0) goto LAB_01acd1c0;
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        pVar13 = pVar13 + 1;
      } while ((int)pVar13 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
LAB_01acd190:
  if (local_40 == 0) goto LAB_01acd0db;
  FUN_00d50b00();
LAB_01acd1c0:
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01acd0d0;
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012640f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012641c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pVar1 = (pthread_key_t)local_40;
  if (local_40 == 0) {
LAB_01acd3b0:
    uVar16 = 0;
    bVar5 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd3b0;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar5 = false;
      uVar16 = 0;
    }
    else {
      uVar16 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar5 = true;
      }
      else {
        local_38 = '\0';
        bVar5 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 == 0) {
LAB_01acd510:
    uVar17 = 0;
    bVar4 = false;
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) goto LAB_01acd510;
    pvVar9 = _pthread_getspecific(pVar14);
    if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      pVar14 = pVar1;
    }
    FUN_0125e930();
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if (local_40 == 0) {
      bVar4 = false;
      uVar17 = 0;
    }
    else {
      uVar17 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        local_38 = '\0';
        bVar4 = true;
      }
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ebe0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar10 = FUN_01508610();
  FUN_00e7b820();
  pvVar9 = _pthread_getspecific(pVar14);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01507970();
  local_60._4_4_ = (int)((ulonglong)lVar10 >> 0x20);
  if (param_2 == '\0') {
    bVar3 = false;
    if ((local_60._4_4_ != 0) && (uVar11 >> 0x20 != 0)) {
      cVar8 = FUN_00e7c020();
      if (cVar8 == '\0') goto LAB_01acd735;
      bVar3 = false;
    }
  }
  else {
LAB_01acd735:
    bVar3 = true;
    FUN_00e7b820();
  }
  if (uVar16 == 0) {
LAB_01acd7e0:
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01508610();
      if (((local_60._4_4_ != 0) && (uVar12 >> 0x20 != 0)) &&
         (cVar8 = FUN_00e7c020(), cVar8 == '\0')) goto LAB_01acd982;
    }
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015085a0();
    if (uVar17 != 0) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
    }
    if (bVar3) {
      pvVar9 = _pthread_getspecific(pVar14);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015084d0();
      if (uVar16 != 0) {
        pvVar9 = _pthread_getspecific(pVar14);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015085a0();
      }
    }
  }
  else {
    pvVar9 = _pthread_getspecific(pVar14);
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar12 = FUN_01507970();
    local_40._4_4_ = (int)(uVar11 >> 0x20);
    if (((local_40._4_4_ == 0) || (uVar12 >> 0x20 == 0)) || (cVar8 = FUN_00e7c020(), cVar8 != '\0'))
    goto LAB_01acd7e0;
  }
LAB_01acd982:
  if (uVar7 != 0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (uVar17 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (uVar16 != 0)) {
    FUN_00d50b20();
  }
  local_60 = lVar10;
  local_40 = uVar11;
  if (uVar7 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01acd0d0:
  FUN_00d50b20();
  goto LAB_01acd0db;
}




// ============================================================
// @01ad2000 — 1440 bytes
// ============================================================

void FUN_01ad2000(void)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
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
  longlong local_30;
  char local_28;
  
  FUN_01a1cd40();
  *(undefined8 *)(unaff_RDI + 0x180) = 0x3f800000;
  *(undefined8 *)(unaff_RDI + 400) = 0xfff0bdc0fff0bdc0;
  *(undefined4 *)(unaff_RDI + 0x29c) = 0x42fa0000;
  *(undefined2 *)(unaff_RDI + 0x1d9) = 0;
  uVar5 = FUN_00e7b4e0();
  *(undefined8 *)(unaff_RDI + 0x140) = uVar5;
  *(undefined4 *)(unaff_RDI + 0x1dc) = 0x7fc00000;
  *(undefined4 *)(unaff_RDI + 0x18c) = 0;
  FUN_00d6f370();
  lVar1 = DAT_027e3b20;
  if (DAT_027e3b20 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d70700();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d6f370();
    lVar1 = DAT_027e3b20;
    if (DAT_027e3b20 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d708a0();
    *(undefined4 *)(unaff_RDI + 0x18c) = uVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0x1b8) = 1;
  *(undefined8 *)(unaff_RDI + 0x1bc) = 0x4b0;
  *(undefined4 *)(unaff_RDI + 0x1c4) = 12000;
  FUN_00d6f370();
  lVar1 = DAT_027e3b28;
  if (DAT_027e3b28 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d70700();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00d6f370();
    lVar1 = DAT_027e3b28;
    if (DAT_027e3b28 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_00d70f90();
    *(undefined1 *)(unaff_RDI + 0x288) = uVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_027f1430;
  if (DAT_027f1430 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x310) = 0x80000000;
  *(undefined2 *)(unaff_RDI + 0x314) = 0x100;
  *(undefined1 *)(unaff_RDI + 0x316) = 1;
  return;
}




// ============================================================
// @01ad37a0 — 1150 bytes
// ============================================================

void FUN_01ad37a0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  longlong *local_48;
  char local_40;
  float local_38;
  float local_34;
  
  if ((longlong *)unaff_RDI[0x44] != (longlong *)0x0) {
    if ((int)unaff_RDI[0x32] == -1000000) {
      (**(code **)(*(longlong *)unaff_RDI[0x44] + 0x928))(0);
      FUN_01b2fee0(0);
      FUN_01b2fef0(0);
      FUN_01b2fea0();
    }
    else {
      FUN_01ad3cb0();
      plVar2 = local_48;
      if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = (float)FUN_01742280();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_34 = (float)FUN_01742280();
      plVar1 = (longlong *)unaff_RDI[0x44];
      _exp2f((local_38 - local_34) * DAT_023941f4);
      (**(code **)(*plVar1 + 0x928))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
      FUN_01b2fef0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01742280();
      _exp2f(((fVar9 + DAT_023908ec) - local_34) * DAT_023941f4);
      FUN_01b2fee0();
      FUN_01b2fea0();
      lVar3 = unaff_RDI[0x32];
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_01743090(local_38);
      if ((int)lVar3 == iVar5) {
        FUN_01b2fec0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
        FUN_01b2ff00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_01742280();
        _exp2f(((fVar9 + DAT_02394248) - local_34) * DAT_023941f4);
        FUN_01b2ff10();
      }
      else {
        FUN_01b2fec0();
      }
      uVar10 = FUN_01b2fe70();
      *(undefined4 *)(unaff_RDI + 0x50) = uVar10;
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RDI[0x44] + 0x998))();
  }
  if ((int)unaff_RDI[0x32] == -1000000) {
    bVar8 = false;
  }
  else {
    bVar8 = (int)unaff_RDI[0x32] != *(int *)((longlong)unaff_RDI + 0x184);
  }
  pplVar7 = &local_48;
  (**(code **)(*unaff_RDI + 0x7b8))();
  plVar2 = local_48;
  FUN_00074a70();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01ad3bb4;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01ad3bb4:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    if (bVar8) {
      (**(code **)(*plVar2 + 0x960))();
    }
    else {
      (**(code **)(*plVar2 + 0x968))();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ad2a70 — 1100 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad2ac3) */
/* WARNING: Removing unreachable block (ram,0x01ad2ad3) */

void FUN_01ad2a70(undefined8 param_1)

{
  longlong *unaff_RDI;
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
  longlong *local_80;
  char local_78;
  longlong local_30;
  char local_28;
  
  if ((char)unaff_RDI[0x5a] == '\0') {
    FUN_01f27fe0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_01f27fe0();
      local_78 = 0;
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = unaff_RDI + 0x2d;
      FUN_01f474f0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x9b8))(param_1,1);
  }
  (**(code **)(*unaff_RDI + 0x948))();
  FUN_00d403d0();
  FUN_00d50b00();
  local_100 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_00d41040(&local_f0,&local_100);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = DAT_027f1430;
  if (DAT_027f1430 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41040(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_c0 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d41040(&local_b0,&local_c0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41040(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a1d870();
  return;
}




// ============================================================
// @01ace020 — 1018 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ace0b5) */
/* WARNING: Removing unreachable block (ram,0x01ace0be) */

ulonglong FUN_01ace020(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xe20))();
  plVar3 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_01ace406;
  }
  if ((*(int *)((longlong)plVar3 + 0xc) == 1) &&
     (cVar2 = (**(code **)(*unaff_RDI + 0x488))(), cVar2 != '\0')) {
    FUN_01a58dc0();
    pplVar7 = &local_48;
    (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xd40))();
    plVar3 = local_48;
    FUN_00083c20();
    if (plVar3 == (longlong *)0x0) {
      pplVar7 = &DAT_02802688;
      plVar3 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01ace133;
LAB_01ace18a:
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') {
        pplVar7 = &DAT_02802688;
      }
      plVar3 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') goto LAB_01ace18a;
LAB_01ace133:
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    plVar5 = (longlong *)(ulonglong)param_2;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0) && ((char)param_2 != '\0')) {
      FUN_01caec40();
      lVar1 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acbed0();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acce90();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_01ace3fc;
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01ace3fc:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_01ace406:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @01ace990 — 1018 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01acea25) */
/* WARNING: Removing unreachable block (ram,0x01acea2e) */

ulonglong FUN_01ace990(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *unaff_RDI;
  longlong **pplVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xe20))();
  plVar3 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_01aced76;
  }
  if ((*(int *)((longlong)plVar3 + 0xc) == 1) &&
     (cVar2 = (**(code **)(*unaff_RDI + 0x488))(), cVar2 != '\0')) {
    FUN_01a58dc0();
    pplVar7 = &local_48;
    (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0xd40))();
    plVar3 = local_48;
    FUN_00083c20();
    if (plVar3 == (longlong *)0x0) {
      pplVar7 = &DAT_02802688;
      plVar3 = DAT_02802688;
      if (DAT_02802690 != '\0') goto LAB_01aceaa3;
LAB_01aceafa:
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') {
        pplVar7 = &DAT_02802688;
      }
      plVar3 = *pplVar7;
      if (*(char *)(pplVar7 + 1) == '\0') goto LAB_01aceafa;
LAB_01aceaa3:
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    plVar5 = (longlong *)(ulonglong)param_2;
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar3 != (longlong *)0x0) && ((char)param_2 != '\0')) {
      FUN_01caec40();
      lVar1 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == (longlong *)0x0) {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acbed0();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = (longlong *)FUN_01acdea0();
        FUN_00e7c2a0();
        FUN_00d23310();
        plVar5 = local_48;
        pcVar4 = local_38;
        if (local_40[0] != '\0') {
          pcVar4 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar4 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01ace610();
        FUN_01acce90();
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (plVar3 == (longlong *)0x0) goto LAB_01aced6c;
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    FUN_00d50b20();
  }
  else {
LAB_01aced6c:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_01aced76:
  return uVar6 & 0xffffffff;
}




// ============================================================
// @01acf890 — 959 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01acf95f) */
/* WARNING: Removing unreachable block (ram,0x01acf968) */

void FUN_01acf890(undefined8 param_1,undefined8 param_2)

{
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong local_78;
  char local_70;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*unaff_RSI != 0) {
    FUN_01e42030();
    if (local_38 == (longlong *)0x0) {
      bVar1 = false;
    }
    else {
      FUN_01e42030();
      FUN_01d8c6e0();
      bVar1 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (longlong *)0x0) {
      return;
    }
    unaff_RDI[0xe] = *unaff_RSI;
    if (bVar1) {
      (**(code **)(*unaff_RDI + 0x448))();
      FUN_01e56750();
      FUN_01e5eec0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e56750();
      FUN_01f27fe0();
      FUN_01f2e7e0();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01e5c1a0();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x460))();
      FUN_01f27fe0();
      FUN_01e56750();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01f45250();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d8f0f0();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x9b0))();
      }
      FUN_01e53c20();
      FUN_01e3f820();
      fVar3 = fVar2;
      fVar5 = fVar4;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      if ((fVar5 < fVar4) || (fVar3 < fVar2)) {
        FUN_01e53c20();
        FUN_01e53c20();
        (**(code **)(*local_48 + 0x528))();
        (**(code **)(*local_38 + 0x4e8))();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      (**(code **)(*local_38 + 0x9a8))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ace610 — 743 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ace79c) */
/* WARNING: Removing unreachable block (ram,0x01ace7a9) */

ulonglong FUN_01ace610(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char unaff_SIL;
  ulonglong unaff_RDI;
  double dVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
    }
    if ((unaff_RDI >> 0x20 != 0) && (cVar1 = FUN_00e7c6b0(), cVar1 == '\0')) {
      FUN_00e7c2a0();
    }
    FUN_00e7bdc0();
    auVar4._0_8_ = FUN_00e7c860();
    auVar4._8_8_ = extraout_XMM0_Qb;
    auVar4 = roundsd(auVar4,auVar4,9);
    dVar3 = (double)FUN_00e7c860();
    if ((dVar3 != (double)(int)auVar4._0_8_) || (NAN(dVar3) || NAN((double)(int)auVar4._0_8_))) {
      if (((int)(unaff_RDI >> 0x20) == 0) || (cVar1 = FUN_00e7c6b0(), cVar1 != '\0')) {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
      else {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01ad07f0 — 741 bytes
// str: ""%@ %@""
// ============================================================

void FUN_01ad07f0(pthread_key_t param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 *local_a8;
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
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  puVar1 = local_a8;
  if ((((local_a0 == '\0') && (local_a8 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_a0 != '\0')
      ) && (local_a8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_38 = (longlong)puVar1;
  plVar6 = (longlong *)*unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    plVar6 = (longlong *)*unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_01736c50();
  local_68 = DAT_026e3bc8;
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  (**(code **)(*plVar6 + 0x3c8))(&local_68,uVar3,&local_58);
  lVar2 = local_38;
  local_c0 = local_38;
  FUN_00083ea0(2,&local_c0);
  FUN_00d8cb40();
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a8 = (undefined8 *)&DAT_0253d630;
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = &DAT_024c5048;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = lVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01acf580 — 679 bytes
// str: ""handleCancel""
// str: ""handleOK""
// str: ""MUScalePanel""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01acf580(void)

{
  int iVar1;
  
  if (DAT_028b3610 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02737be8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02737b38 = FUN_00015ff0();
          _DAT_02737b20 = "MUScalePanel";
          _DAT_02737b28 = 0x78;
          _DAT_02737b30 = FUN_00842560;
          _DAT_02737b40 = 0;
          uRam0000000002737b48 = 0;
          _DAT_02737b50 = 0;
          uRam0000000002737b58 = 0;
          _DAT_02737b60 = 0;
          uRam0000000002737b68 = 0;
          _DAT_02737b70 = 0;
          uRam0000000002737b78 = 0;
          _DAT_02737b80 = 0;
          uRam0000000002737b88 = 0;
          _DAT_02737b90 = 0;
          uRam0000000002737b98 = 0;
          _DAT_02737ba0 = 0;
          uRam0000000002737ba8 = 0;
          _DAT_02737bb0 = 0;
          uRam0000000002737bb8 = 0;
          _DAT_02737bc0 = 0;
          uRam0000000002737bc8 = 0;
          _DAT_02737bd0 = 0;
          uRam0000000002737bd8 = 0;
          _DAT_02737be0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b35d0 = "handleOK";
      _DAT_028b35d8 = &DAT_02737b20;
      _DAT_028b35e0 = 0;
      _DAT_028b35e8 = &DAT_027e30b8;
      _DAT_028b35f0 = FUN_01ad0760;
      _DAT_028b35f8 = 0x5c1;
      _DAT_028b3600 = 0;
      uRam00000000028b3608 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b3658 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02737be8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02737b38 = FUN_00015ff0();
          _DAT_02737b20 = "MUScalePanel";
          _DAT_02737b28 = 0x78;
          _DAT_02737b30 = FUN_00842560;
          _DAT_02737b40 = 0;
          uRam0000000002737b48 = 0;
          _DAT_02737b50 = 0;
          uRam0000000002737b58 = 0;
          _DAT_02737b60 = 0;
          uRam0000000002737b68 = 0;
          _DAT_02737b70 = 0;
          uRam0000000002737b78 = 0;
          _DAT_02737b80 = 0;
          uRam0000000002737b88 = 0;
          _DAT_02737b90 = 0;
          uRam0000000002737b98 = 0;
          _DAT_02737ba0 = 0;
          uRam0000000002737ba8 = 0;
          _DAT_02737bb0 = 0;
          uRam0000000002737bb8 = 0;
          _DAT_02737bc0 = 0;
          uRam0000000002737bc8 = 0;
          _DAT_02737bd0 = 0;
          uRam0000000002737bd8 = 0;
          _DAT_02737be0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b3618 = "handleCancel";
      _DAT_028b3620 = &DAT_02737b20;
      _DAT_028b3628 = 0;
      _DAT_028b3630 = &DAT_027e30b8;
      _DAT_028b3638 = FUN_01ad0760;
      _DAT_028b3640 = 0x5c9;
      _DAT_028b3648 = 0;
      uRam00000000028b3650 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01ad3320 — 525 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad3320(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  float fVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar3 = *(float *)(unaff_RSI + 0x61);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    FUN_00d50b00();
    uVar4 = FUN_01a1da00();
    fVar3 = (float)uVar4 * DAT_02390438;
    auVar7._0_4_ = (uint)fVar3 & _DAT_023945e0;
    auVar7._4_4_ = (uint)((ulonglong)uVar4 >> 0x20) & _UNK_023945e4;
    auVar7._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
    auVar7._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
    auVar8._4_12_ = SUB1612(auVar7 | ZEXT416(DAT_02394dc8),4);
    auVar8._0_4_ = SUB164(auVar7 | ZEXT416(DAT_02394dc8),0) + fVar3;
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar5 = roundss(auVar5,auVar8,0xb);
    fVar3 = DAT_02392fd8;
    if (auVar5._0_4_ <= DAT_02392fd8) {
      fVar3 = auVar5._0_4_;
    }
    auVar5 = roundss(ZEXT816(0),
                     ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(fVar3 * DAT_0241f368) |
                                           DAT_02394dc8) + fVar3 * DAT_0241f368)),0xb);
    fVar3 = DAT_023908ec;
    if (auVar5._0_4_ <= DAT_023908ec) {
      fVar3 = auVar5._0_4_;
    }
    *(float *)(unaff_RSI + 0x61) = fVar3;
    FUN_00d50b20();
    fVar3 = *(float *)(unaff_RSI + 0x61);
  }
  if (fVar3 < DAT_02390d30) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  lVar2 = unaff_RSI[0x60];
  if (lVar2 != 0) goto LAB_01ad34fe;
  (**(code **)(*unaff_RSI + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  auVar5 = ZEXT416(_DAT_023945e0 & (uint)*(float *)(unaff_RSI + 0x61)) | _DAT_023945f0;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = auVar5._0_4_ + *(float *)(unaff_RSI + 0x61);
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  FUN_01d44d80(auVar5._0_8_);
  lVar2 = unaff_RSI[0x60];
  lVar1 = lVar2;
  if (lVar2 != local_30) {
    lVar1 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar1 = 0;
        goto LAB_01ad3474;
      }
      FUN_00d50b00();
      lVar2 = unaff_RSI[0x60];
      unaff_RSI[0x60] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01ad3474:
      unaff_RSI[0x60] = lVar1;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar1 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RSI[0x60];
LAB_01ad34fe:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



