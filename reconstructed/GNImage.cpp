// Reconstructed implementation of GNImage
// From MikeCore binary — reverse-engineered pseudocode

#include "GNImage.h"

// ============================================================
// @002c07c0 — 5558 bytes
// str: ""GNImage""
// str: ""GNColor""
// str: ""getName""
// str: ""setName""
// str: ""getPath""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c07c0(void)

{
  int iVar1;
  
  if (DAT_02806148 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806108 = "getName";
      _DAT_02806110 = &DAT_026fcfe0;
      _DAT_02806118 = 0;
      _DAT_02806120 = &DAT_026fd0b0;
      _DAT_02806128 = FUN_002d5d70;
      _DAT_02806130 = FUN_002c1dc0;
      _DAT_02806138 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806140 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806190 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806150 = "setName";
      _DAT_02806158 = &DAT_026fcfe0;
      _DAT_02806160 = 0;
      _DAT_02806168 = &DAT_026fd0c8;
      _DAT_02806170 = FUN_002d5e10;
      _DAT_02806178 = FUN_002c1e90;
      _DAT_02806180 = 0;
      uRam0000000002806188 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028061d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806198 = "getPath";
      _DAT_028061a0 = &DAT_026fcfe0;
      _DAT_028061a8 = 0;
      _DAT_028061b0 = &DAT_026fd0b0;
      _DAT_028061b8 = FUN_002d5d70;
      _DAT_028061c0 = FUN_002c1ea0;
      _DAT_028061c8 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028061d0 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806220 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028061e0 = "getColor";
      _DAT_028061e8 = &DAT_026fcfe0;
      _DAT_028061f0 = 0;
      _DAT_028061f8 = &DAT_026fd0cb;
      _DAT_02806200 = FUN_002d5e90;
      _DAT_02806208 = FUN_002c3010;
      _DAT_02806210 = 0;
      if (DAT_026e9ce0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd0e8 = FUN_00d4fe50();
          DAT_026fd0d0 = "GNColor";
          _DAT_026fd0d8 = 0x30;
          _DAT_026fd0e0 = FUN_001b8c30;
          _DAT_026fd0f0 = 0;
          uRam00000000026fd0f8 = 0;
          _DAT_026fd100 = 0;
          uRam00000000026fd108 = 0;
          _DAT_026fd110 = 0;
          uRam00000000026fd118 = 0;
          _DAT_026fd120 = 0;
          uRam00000000026fd128 = 0;
          _DAT_026fd130 = 0;
          uRam00000000026fd138 = 0;
          _DAT_026fd140 = 0;
          uRam00000000026fd148 = 0;
          _DAT_026fd150 = 0;
          uRam00000000026fd158 = 0;
          _DAT_026fd160 = 0;
          uRam00000000026fd168 = 0;
          _DAT_026fd170 = 0;
          uRam00000000026fd178 = 0;
          _DAT_026fd180 = 0;
          uRam00000000026fd188 = 0;
          _DAT_026fd190 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806218 = DAT_026fd0d0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806268 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806228 = "getDirectory";
      _DAT_02806230 = &DAT_026fcfe0;
      _DAT_02806238 = 0;
      _DAT_02806240 = &DAT_026fd0b0;
      _DAT_02806248 = FUN_002d5d70;
      _DAT_02806250 = FUN_002c1f70;
      _DAT_02806258 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806260 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028062b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806270 = "getSampleFormat";
      _DAT_02806278 = &DAT_026fcfe0;
      _DAT_02806280 = 0;
      _DAT_02806288 = &DAT_026fd0b0;
      _DAT_02806290 = FUN_002d5d70;
      _DAT_02806298 = FUN_002c2090;
      _DAT_028062a0 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028062a8 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028062f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028062b8 = "getSampleLength";
      _DAT_028062c0 = &DAT_026fcfe0;
      _DAT_028062c8 = 0;
      _DAT_028062d0 = &DAT_026fd0b0;
      _DAT_028062d8 = FUN_002d5d70;
      _DAT_028062e0 = FUN_002c20e0;
      _DAT_028062e8 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028062f0 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806300 = "getChannelFormat";
      _DAT_02806308 = &DAT_026fcfe0;
      _DAT_02806310 = 0;
      _DAT_02806318 = &DAT_026fd0b0;
      _DAT_02806320 = FUN_002d5d70;
      _DAT_02806328 = FUN_002c21f0;
      _DAT_02806330 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806338 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806388 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806348 = "getFileFormat";
      _DAT_02806350 = &DAT_026fcfe0;
      _DAT_02806358 = 0;
      _DAT_02806360 = &DAT_026fd0b0;
      _DAT_02806368 = FUN_002d5d70;
      _DAT_02806370 = FUN_002c2270;
      _DAT_02806378 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806380 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028063d0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026fd0a8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fcff8 = FUN_00d4fe50();
          _DAT_026fcfe0 = "MDProjectAudioSource";
          _DAT_026fcfe8 = 0x28;
          _DAT_026fcff0 = FUN_002d5b80;
          _DAT_026fd000 = 0;
          uRam00000000026fd008 = 0;
          _DAT_026fd010 = 0;
          _DAT_026fd088 = 0;
          uRam00000000026fd090 = 0;
          _DAT_026fd098 = 0;
          DAT_026fd09a = 1;
          _DAT_026fd018 = 0;
          uRam00000000026fd020 = 0;
          _DAT_026fd028 = 0;
          uRam00000000026fd030 = 0;
          _DAT_026fd038 = 0;
          uRam00000000026fd040 = 0;
          _DAT_026fd048 = 0;
          uRam00000000026fd050 = 0;
          _DAT_026fd058 = 0;
          uRam00000000026fd060 = 0;
          _DAT_026fd068 = 0;
          uRam00000000026fd070 = 0;
          _DAT_026fd078 = 0;
          uRam00000000026fd080 = 0;
          DAT_026fd0a3 = 0;
          _DAT_026fd09b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02806390 = "getLocationImage";
      _DAT_02806398 = &DAT_026fcfe0;
      _DAT_028063a0 = 0;
      _DAT_028063a8 = &DAT_026fd1a0;
      _DAT_028063b0 = FUN_002d5f30;
      _DAT_028063b8 = FUN_002c2c30;
      _DAT_028063c0 = 0;
      if (DAT_026ed470 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027f7318 = FUN_00d4fe50();
          DAT_027f7300 = "GNImage";
          _DAT_027f7308 = 0x68;
          _DAT_027f7310 = FUN_001cdcc0;
          _DAT_027f7320 = 0;
          uRam00000000027f7328 = 0;
          _DAT_027f7330 = 0;
          uRam00000000027f7338 = 0;
          _DAT_027f7340 = 0;
          uRam00000000027f7348 = 0;
          _DAT_027f7350 = 0;
          uRam00000000027f7358 = 0;
          _DAT_027f7360 = 0;
          uRam00000000027f7368 = 0;
          _DAT_027f7370 = 0;
          uRam00000000027f7378 = 0;
          _DAT_027f7380 = 0;
          uRam00000000027f7388 = 0;
          _DAT_027f7390 = 0;
          uRam00000000027f7398 = 0;
          _DAT_027f73a0 = 0;
          uRam00000000027f73a8 = 0;
          _DAT_027f73b0 = 0;
          uRam00000000027f73b8 = 0;
          _DAT_027f73c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028063c8 = DAT_027f7300;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @001cdcf0 — 1251 bytes
// str: ""GNImage""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001cdcf0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_026817d8;
  FUN_001ce2d0();
  *(undefined1 *)(unaff_RDI + 3) = 0;
  if (DAT_026ed470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f7318 = FUN_00d4fe50();
      DAT_027f7300 = "GNImage";
      _DAT_027f7308 = 0x68;
      _DAT_027f7310 = FUN_001cdcc0;
      _DAT_027f7320 = 0;
      uRam00000000027f7328 = 0;
      _DAT_027f7330 = 0;
      uRam00000000027f7338 = 0;
      _DAT_027f7340 = 0;
      uRam00000000027f7348 = 0;
      _DAT_027f7350 = 0;
      uRam00000000027f7358 = 0;
      _DAT_027f7360 = 0;
      uRam00000000027f7368 = 0;
      _DAT_027f7370 = 0;
      uRam00000000027f7378 = 0;
      _DAT_027f7380 = 0;
      uRam00000000027f7388 = 0;
      _DAT_027f7390 = 0;
      uRam00000000027f7398 = 0;
      _DAT_027f73a0 = 0;
      uRam00000000027f73a8 = 0;
      _DAT_027f73b0 = 0;
      _uRam00000000027f73b8 = 0;
      _DAT_027f73c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f73bb == '\0') {
    FUN_001ce550();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19) = 0;
  if (DAT_026ed470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f7318 = FUN_00d4fe50();
      DAT_027f7300 = "GNImage";
      _DAT_027f7308 = 0x68;
      _DAT_027f7310 = FUN_001cdcc0;
      _DAT_027f7320 = 0;
      uRam00000000027f7328 = 0;
      _DAT_027f7330 = 0;
      uRam00000000027f7338 = 0;
      _DAT_027f7340 = 0;
      uRam00000000027f7348 = 0;
      _DAT_027f7350 = 0;
      uRam00000000027f7358 = 0;
      _DAT_027f7360 = 0;
      uRam00000000027f7368 = 0;
      _DAT_027f7370 = 0;
      uRam00000000027f7378 = 0;
      _DAT_027f7380 = 0;
      uRam00000000027f7388 = 0;
      _DAT_027f7390 = 0;
      uRam00000000027f7398 = 0;
      _DAT_027f73a0 = 0;
      uRam00000000027f73a8 = 0;
      _DAT_027f73b0 = 0;
      _uRam00000000027f73b8 = 0;
      _DAT_027f73c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f73bb == '\0') {
    FUN_001ce6c0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_026ed470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f7318 = FUN_00d4fe50();
      DAT_027f7300 = "GNImage";
      _DAT_027f7308 = 0x68;
      _DAT_027f7310 = FUN_001cdcc0;
      _DAT_027f7320 = 0;
      uRam00000000027f7328 = 0;
      _DAT_027f7330 = 0;
      uRam00000000027f7338 = 0;
      _DAT_027f7340 = 0;
      uRam00000000027f7348 = 0;
      _DAT_027f7350 = 0;
      uRam00000000027f7358 = 0;
      _DAT_027f7360 = 0;
      uRam00000000027f7368 = 0;
      _DAT_027f7370 = 0;
      uRam00000000027f7378 = 0;
      _DAT_027f7380 = 0;
      uRam00000000027f7388 = 0;
      _DAT_027f7390 = 0;
      uRam00000000027f7398 = 0;
      _DAT_027f73a0 = 0;
      uRam00000000027f73a8 = 0;
      _DAT_027f73b0 = 0;
      _uRam00000000027f73b8 = 0;
      _DAT_027f73c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f73bb == '\0') {
    FUN_001ce830();
    FUN_00e87980();
  }
  FUN_001ce9a0();
  FUN_001cec20();
  FUN_001cef10();
  FUN_001cf190();
  *(undefined4 *)(unaff_RDI + 9) = 0;
  if (DAT_026ed470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f7318 = FUN_00d4fe50();
      DAT_027f7300 = "GNImage";
      _DAT_027f7308 = 0x68;
      _DAT_027f7310 = FUN_001cdcc0;
      _DAT_027f7320 = 0;
      uRam00000000027f7328 = 0;
      _DAT_027f7330 = 0;
      uRam00000000027f7338 = 0;
      _DAT_027f7340 = 0;
      uRam00000000027f7348 = 0;
      _DAT_027f7350 = 0;
      uRam00000000027f7358 = 0;
      _DAT_027f7360 = 0;
      uRam00000000027f7368 = 0;
      _DAT_027f7370 = 0;
      uRam00000000027f7378 = 0;
      _DAT_027f7380 = 0;
      uRam00000000027f7388 = 0;
      _DAT_027f7390 = 0;
      uRam00000000027f7398 = 0;
      _DAT_027f73a0 = 0;
      uRam00000000027f73a8 = 0;
      _DAT_027f73b0 = 0;
      _uRam00000000027f73b8 = 0;
      _DAT_027f73c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f73bb == '\0') {
    FUN_001cf480();
    FUN_00e87980();
  }
  unaff_RDI[10] = *(undefined8 *)(unaff_RSI + 0x50);
  FUN_001cf5f0();
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  if (DAT_026ed470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f7318 = FUN_00d4fe50();
      DAT_027f7300 = "GNImage";
      _DAT_027f7308 = 0x68;
      _DAT_027f7310 = FUN_001cdcc0;
      _DAT_027f7320 = 0;
      uRam00000000027f7328 = 0;
      _DAT_027f7330 = 0;
      uRam00000000027f7338 = 0;
      _DAT_027f7340 = 0;
      uRam00000000027f7348 = 0;
      _DAT_027f7350 = 0;
      uRam00000000027f7358 = 0;
      _DAT_027f7360 = 0;
      uRam00000000027f7368 = 0;
      _DAT_027f7370 = 0;
      uRam00000000027f7378 = 0;
      _DAT_027f7380 = 0;
      uRam00000000027f7388 = 0;
      _DAT_027f7390 = 0;
      uRam00000000027f7398 = 0;
      _DAT_027f73a0 = 0;
      uRam00000000027f73a8 = 0;
      _DAT_027f73b0 = 0;
      _uRam00000000027f73b8 = 0;
      _DAT_027f73c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f73bb == '\0') {
    FUN_001cf8e0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @002c3060 — 865 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002c31da) */
/* WARNING: Removing unreachable block (ram,0x002c31e3) */
/* WARNING: Removing unreachable block (ram,0x002c32c9) */
/* WARNING: Removing unreachable block (ram,0x002c32d2) */
/* WARNING: Removing unreachable block (ram,0x002c3198) */
/* WARNING: Removing unreachable block (ram,0x002c31a5) */
/* WARNING: Removing unreachable block (ram,0x002c31c6) */
/* WARNING: Removing unreachable block (ram,0x002c31cf) */

void FUN_002c3060(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if (cVar2 == '\0') {
    local_38 = *unaff_RSI;
    if ((local_38 == 0) || ((char)unaff_RSI[1] == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_80 + 0x388))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x400))();
    local_38 = local_50;
    if (local_50 == 0) {
      bVar1 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_48 = '\0';
      bVar1 = true;
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124d460();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123bd60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  lVar5 = *(longlong *)(unaff_RDI + 0x18);
  lVar4 = lVar5;
  if (lVar5 != local_50) {
    lVar4 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
        lVar5 = *(longlong *)(unaff_RDI + 0x18);
      }
    }
    else {
      local_48 = '\0';
    }
    *(longlong *)(unaff_RDI + 0x18) = lVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar4 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_002c2560();
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002c2c30 — 734 bytes
// ============================================================

void FUN_002c2c30(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_28;
  char local_20;
  
  if (*(int *)(unaff_RSI + 0x20) == 1) {
    if ((DAT_028063e8 == 0) || (lVar3 = DAT_028063e8, DAT_028063f1 == '\0')) {
      FUN_00e8cb50();
      lVar3 = DAT_026fce20;
      if (DAT_028063e8 == 0) {
        if (DAT_026fce20 != 0) {
          FUN_00d50b00();
        }
        FUN_01d51a40();
        lVar2 = DAT_028063e8;
        if (DAT_028063e8 != local_28) {
          if (local_20 == '\0') {
            if (local_28 == 0) {
              lVar2 = 0;
            }
            else {
              FUN_00d50b00();
              lVar2 = local_28;
            }
          }
          else {
            local_20 = '\0';
            lVar2 = local_28;
          }
          bVar1 = DAT_028063e8 != 0;
          DAT_028063e8 = lVar2;
          if (bVar1) {
            FUN_00d50b20();
            lVar2 = local_28;
          }
        }
        if ((lVar2 != 0) && (DAT_028063f0 == '\0')) {
          DAT_028063f0 = '\x01';
          FUN_00e8cb90();
          lVar2 = local_28;
        }
        if ((local_20 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        DAT_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028063f1 = '\x01';
        FUN_00e8cb70();
      }
      lVar3 = DAT_028063e8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar3 != 0) goto LAB_002c2ee4;
LAB_002c2e3c:
      lVar3 = 0;
      goto LAB_002c2eec;
    }
LAB_002c2c94:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  else {
    if (*(int *)(unaff_RSI + 0x20) != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      return;
    }
    if ((DAT_028063d8 != 0) && (lVar3 = DAT_028063d8, DAT_028063e1 != '\0')) goto LAB_002c2c94;
    FUN_00e8cb50();
    lVar3 = DAT_026fce18;
    if (DAT_028063d8 == 0) {
      if (DAT_026fce18 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      lVar2 = DAT_028063d8;
      if (DAT_028063d8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028063d8 != 0;
        DAT_028063d8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028063e0 == '\0')) {
        DAT_028063e0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028063e1 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_028063d8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) goto LAB_002c2e3c;
  }
LAB_002c2ee4:
  FUN_00d50b00();
LAB_002c2eec:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @002c2710 — 572 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002c28fe) */
/* WARNING: Removing unreachable block (ram,0x002c2907) */

void FUN_002c2710(pthread_key_t param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x10);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar6 + 0x478))();
  }
  else {
    FUN_00b88600();
  }
  (**(code **)(*local_70 + 0x3f0))();
  cVar1 = (**(code **)(*local_a0 + 0x50))();
  uVar5 = 0;
  if (cVar1 != '\0') {
    if (*(longlong *)(unaff_RDI + 0x18) == 0) {
      plVar6 = *(longlong **)(unaff_RDI + 0x10);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        plVar6 = *(longlong **)(unaff_RDI + 0x10);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar6 + 0x478))();
    }
    else {
      FUN_00b88600();
    }
    (**(code **)(*local_50 + 0x3f0))();
    FUN_01f27fe0();
    (**(code **)(*local_80 + 0x760))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    bVar2 = (**(code **)(*local_90 + 0x50))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar5 = (uint)(bVar2 ^ 1);
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(uint *)(unaff_RDI + 0x20) = uVar5;
  return;
}



