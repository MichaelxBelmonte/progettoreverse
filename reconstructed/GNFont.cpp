// Reconstructed implementation of GNFont
// From MikeCore binary — reverse-engineered pseudocode

#include "GNFont.h"

// ============================================================
// @01e0f330 — 4566 bytes
// str: ""GNFont""
// str: ""GNTextView""
// str: ""GNString""
// str: ""getFont""
// str: ""getString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e0f330(void)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_028b9118 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b90d8 = "getFont";
      _DAT_028b90e0 = &DAT_027fadb0;
      _DAT_028b90e8 = 0;
      _DAT_028b90f0 = &DAT_027f3358;
      _DAT_028b90f8 = FUN_01e1d4d0;
      _DAT_028b9100 = FUN_01e12ce0;
      _DAT_028b9108 = 0;
      if (DAT_026ecc58 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ecba8 = FUN_00d4fe50();
          DAT_026ecb90 = "GNFont";
          _DAT_026ecb98 = 0x48;
          _DAT_026ecba0 = FUN_001c9760;
          _DAT_026ecbb0 = 0;
          uRam00000000026ecbb8 = 0;
          _DAT_026ecbc0 = 0;
          _DAT_026ecc38 = 0;
          uRam00000000026ecc40 = 0;
          _DAT_026ecc48 = 0;
          DAT_026ecc4a = 1;
          _DAT_026ecbc8 = 0;
          uRam00000000026ecbd0 = 0;
          _DAT_026ecbd8 = 0;
          uRam00000000026ecbe0 = 0;
          _DAT_026ecbe8 = 0;
          uRam00000000026ecbf0 = 0;
          _DAT_026ecbf8 = 0;
          uRam00000000026ecc00 = 0;
          _DAT_026ecc08 = 0;
          uRam00000000026ecc10 = 0;
          _DAT_026ecc18 = 0;
          uRam00000000026ecc20 = 0;
          _DAT_026ecc28 = 0;
          uRam00000000026ecc30 = 0;
          DAT_026ecc53 = 0;
          _DAT_026ecc4b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9110 = DAT_026ecb90;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9120 = "getString";
      _DAT_028b9128 = &DAT_027fadb0;
      _DAT_028b9130 = 0;
      _DAT_028b9138 = &DAT_027f3360;
      _DAT_028b9140 = FUN_01e1d570;
      _DAT_028b9148 = FUN_01e10550;
      _DAT_028b9150 = 0;
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
      _DAT_028b9158 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b91a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9168 = "setEditable";
      _DAT_028b9170 = &DAT_027fadb0;
      _DAT_028b9178 = 0;
      _DAT_028b9180 = &DAT_027f3368;
      _DAT_028b9188 = FUN_01e1d610;
      _DAT_028b9190 = FUN_01e10580;
      _DAT_028b9198 = 0;
      uRam00000000028b91a0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b91f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b91b0 = "setObjectValue";
      _DAT_028b91b8 = &DAT_027fadb0;
      _DAT_028b91c0 = 0;
      _DAT_028b91c8 = &DAT_027f336b;
      _DAT_028b91d0 = FUN_01e1d630;
      _DAT_028b91d8 = FUN_01e10690;
      _DAT_028b91e0 = 0;
      uRam00000000028b91e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9238 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b91f8 = "getObjectValue";
      _DAT_028b9200 = &DAT_027fadb0;
      _DAT_028b9208 = 0;
      _DAT_028b9210 = &DAT_027f336e;
      _DAT_028b9218 = FUN_01e1d6b0;
      _DAT_028b9220 = FUN_01e128f0;
      _DAT_028b9228 = 0;
      puVar2 = (undefined8 *)FUN_00d4fe50();
      _DAT_028b9230 = *puVar2;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9240 = "setFont";
      _DAT_028b9248 = &DAT_027fadb0;
      _DAT_028b9250 = 0;
      _DAT_028b9258 = &DAT_027f3370;
      _DAT_028b9260 = FUN_01e1d750;
      _DAT_028b9268 = FUN_01e12b60;
      _DAT_028b9270 = 0;
      uRam00000000028b9278 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b92c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9288 = "setTextAlignment";
      _DAT_028b9290 = &DAT_027fadb0;
      _DAT_028b9298 = 0;
      _DAT_028b92a0 = &DAT_027f3373;
      _DAT_028b92a8 = FUN_01e1d7d0;
      _DAT_028b92b0 = FUN_01e11330;
      _DAT_028b92b8 = 0;
      uRam00000000028b92c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9310 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b92d0 = "setForegroundColor";
      _DAT_028b92d8 = &DAT_027fadb0;
      _DAT_028b92e0 = 0;
      _DAT_028b92e8 = &DAT_027f3376;
      _DAT_028b92f0 = FUN_01e1d7f0;
      _DAT_028b92f8 = FUN_01e11400;
      _DAT_028b9300 = 0;
      uRam00000000028b9308 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9358 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9318 = "_editFont";
      _DAT_028b9320 = &DAT_027fadb0;
      _DAT_028b9328 = 0;
      _DAT_028b9330 = &DAT_027f3370;
      _DAT_028b9338 = FUN_01e1d750;
      _DAT_028b9340 = FUN_01e1c480;
      _DAT_028b9348 = 0;
      uRam00000000028b9350 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b93a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9360 = "_editTextAlignment";
      _DAT_028b9368 = &DAT_027fadb0;
      _DAT_028b9370 = 0;
      _DAT_028b9378 = &DAT_027f3373;
      _DAT_028b9380 = FUN_01e1d7d0;
      _DAT_028b9388 = FUN_01e114b0;
      _DAT_028b9390 = 0;
      uRam00000000028b9398 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b93e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b93a8 = "_editForegroundColor";
      _DAT_028b93b0 = &DAT_027fadb0;
      _DAT_028b93b8 = 0;
      _DAT_028b93c0 = &DAT_027f3376;
      _DAT_028b93c8 = FUN_01e1d7f0;
      _DAT_028b93d0 = FUN_01e11530;
      _DAT_028b93d8 = 0;
      uRam00000000028b93e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9430 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026f3380 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027fadc8 = FUN_0006d940();
          _DAT_027fadb0 = "GNTextView";
          _DAT_027fadb8 = 0x1d8;
          _DAT_027fadc0 = FUN_001fc360;
          _DAT_027fadd0 = 0;
          uRam00000000027fadd8 = 0;
          _DAT_027fade0 = 0;
          uRam00000000027fade8 = 0;
          _DAT_027fadf0 = 0;
          uRam00000000027fadf8 = 0;
          _DAT_027fae00 = 0;
          uRam00000000027fae08 = 0;
          _DAT_027fae10 = 0;
          uRam00000000027fae18 = 0;
          _DAT_027fae20 = 0;
          uRam00000000027fae28 = 0;
          _DAT_027fae30 = 0;
          uRam00000000027fae38 = 0;
          _DAT_027fae40 = 0;
          uRam00000000027fae48 = 0;
          _DAT_027fae50 = 0;
          uRam00000000027fae58 = 0;
          _DAT_027fae60 = 0;
          uRam00000000027fae68 = 0;
          _DAT_027fae70 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b93f0 = "_editObjectValue";
      _DAT_028b93f8 = &DAT_027fadb0;
      _DAT_028b9400 = 0;
      _DAT_028b9408 = &DAT_027f336b;
      _DAT_028b9410 = FUN_01e1d630;
      _DAT_028b9418 = FUN_01e11690;
      _DAT_028b9420 = 0;
      uRam00000000028b9428 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01ea5b80 — 1749 bytes
// ============================================================

void FUN_01ea5b80(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined7 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  longlong *local_148;
  undefined1 local_140;
  ulonglong local_138;
  undefined1 local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  iVar4 = FUN_01d3b620();
  if (((iVar4 == 2) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) && (iVar4 = FUN_01d3b630(), iVar4 == 1)
     ) {
    FUN_01d3b620();
                    /* WARNING: Could not recover jumptable at 0x01ea5bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x918))(*(code **)(*unaff_RDI + 0x918));
    return;
  }
  if (((*(char *)((longlong)unaff_RDI + 0x19f) == '\0') || (iVar4 = FUN_01d3a5a0(), iVar4 != 1)) ||
     (iVar4 = FUN_01d3b630(), iVar4 != 1)) goto LAB_01ea60ee;
  (**(code **)(*unaff_RDI + 0x658))();
  plVar5 = local_40;
  plVar8 = (longlong *)*unaff_RSI;
  if (plVar8 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      local_48 = unaff_RSI + 1;
      if (local_38 != '\0') goto LAB_01ea5c7c;
      FUN_00d50b00();
      goto LAB_01ea5cb1;
    }
LAB_01ea5cb8:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = unaff_RSI + 1;
    lVar1 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar5;
      if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ea5cb1:
      *(undefined1 *)local_48 = 1;
      goto LAB_01ea5cb8;
    }
    *unaff_RSI = (longlong)local_40;
    if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ea5c7c:
    *(undefined1 *)local_48 = 1;
  }
  local_60 = 0;
  local_98 = 0;
  local_48 = (longlong *)0x0;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 != 5) goto LAB_01ea60ee;
  FUN_01d3abf0();
  uVar9 = FUN_01e466c0();
  fVar12 = (float)unaff_RDI[0x32];
  auVar10._0_4_ = (float)uVar9 - fVar12;
  fVar13 = (float)((ulonglong)unaff_RDI[0x32] >> 0x20);
  auVar10._4_4_ = (float)((ulonglong)uVar9 >> 0x20) - fVar13;
  auVar10._8_4_ = (float)extraout_XMM0_Qb - 0.0;
  auVar10._12_4_ = (float)((ulonglong)extraout_XMM0_Qb >> 0x20) - 0.0;
  auVar11._4_4_ = (float)((ulonglong)unaff_RDI[0x31] >> 0x20) + fVar13;
  auVar11._0_4_ = (float)unaff_RDI[0x31] + fVar12;
  auVar11._8_8_ = 0;
  auVar11 = divps(auVar10,auVar11);
  uVar7 = (int)auVar11._4_4_ * (int)unaff_RDI[0x33] + (int)auVar11._0_4_;
  if (((int)uVar7 < 0) || (*(int *)(unaff_RDI[0x2b] + 0xc) <= (int)uVar7)) goto LAB_01ea60ee;
  plVar8 = *(longlong **)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + (ulonglong)uVar7 * 8);
  if (plVar8 == (longlong *)0x0) {
    local_98 = 0;
    local_48 = (longlong *)0x0;
  }
  else {
    uVar9 = FUN_00d50b00();
    local_98 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    local_48 = plVar8;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  local_f0 = '\0';
  local_f8 = 0;
  local_50 = plVar5;
  FUN_01d4eaa0(unaff_RDI[0x31]);
  local_138 = CONCAT44(local_138._4_4_,uVar7);
  local_100 = plVar8;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52700();
  FUN_01d52740();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_118 = 1;
  local_148 = local_48;
  local_140 = 0;
  uVar9 = FUN_01d530c0();
  FUN_01ea4e00(uVar9,&local_148);
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = 0;
  FUN_01d52770();
  uVar9 = FUN_01ca6a90();
  plVar8 = local_40;
  uVar6 = (undefined7)((ulonglong)uVar9 >> 8);
  if (local_40 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_54 = (undefined4)CONCAT71(uVar6,1);
    local_60 = 0;
  }
  else {
    local_60 = CONCAT71(uVar6,1);
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ea5f43;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01ea5f43:
  FUN_01ca5d90();
  plVar5 = (longlong *)unaff_RDI[0x2a];
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b00();
    local_e0 = '\0';
    local_e8 = plVar8;
    cVar3 = (**(code **)(*plVar5 + 0x18))(local_138 & 0xffffffff,&local_e8);
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01e42030();
      plVar2 = local_40;
      local_d8 = local_50;
      local_d0 = '\0';
      FUN_01e42030();
      FUN_00d50b00();
      local_138 = FUN_01e437f0();
      plVar5 = local_100;
      local_c8 = *unaff_RSI;
      local_c0 = '\0';
      FUN_01ca6a90();
      local_70 = local_a8;
      local_68 = 0;
      if (local_a0 == '\0') {
        if (local_a8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a0 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar2 + 0x738))(&local_70,&local_c8,5);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_54 == '\0' && plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((plVar5 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
  }
  if ((char)local_54 == '\0' && plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ea60ee:
  local_b8 = *unaff_RSI;
  local_b0 = '\0';
  FUN_01e459c0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @001c97b0 — 1098 bytes
// str: ""GNFont""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c97b0(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02680b28;
  unaff_RDI[2] = *(undefined8 *)(unaff_RSI + 0x10);
  FUN_001c9c60();
  unaff_RDI[4] = 0;
  if (DAT_026ecc58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ecba8 = FUN_00d4fe50();
      DAT_026ecb90 = "GNFont";
      _DAT_026ecb98 = 0x48;
      _DAT_026ecba0 = FUN_001c9760;
      _DAT_026ecbb0 = 0;
      uRam00000000026ecbb8 = 0;
      _DAT_026ecbc0 = 0;
      _DAT_026ecc38 = 0;
      uRam00000000026ecc40 = 0;
      _DAT_026ecc48 = 0;
      DAT_026ecc4a = 1;
      _DAT_026ecbc8 = 0;
      uRam00000000026ecbd0 = 0;
      _DAT_026ecbd8 = 0;
      uRam00000000026ecbe0 = 0;
      _DAT_026ecbe8 = 0;
      uRam00000000026ecbf0 = 0;
      _DAT_026ecbf8 = 0;
      uRam00000000026ecc00 = 0;
      _DAT_026ecc08 = 0;
      uRam00000000026ecc10 = 0;
      _DAT_026ecc18 = 0;
      uRam00000000026ecc20 = 0;
      _DAT_026ecc28 = 0;
      uRam00000000026ecc30 = 0;
      DAT_026ecc53 = 0;
      _DAT_026ecc4b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ecc4b == '\0') {
    FUN_001c9f20();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 5) = 0;
  if (DAT_026ecc58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ecba8 = FUN_00d4fe50();
      DAT_026ecb90 = "GNFont";
      _DAT_026ecb98 = 0x48;
      _DAT_026ecba0 = FUN_001c9760;
      _DAT_026ecbb0 = 0;
      uRam00000000026ecbb8 = 0;
      _DAT_026ecbc0 = 0;
      _DAT_026ecc38 = 0;
      uRam00000000026ecc40 = 0;
      _DAT_026ecc48 = 0;
      DAT_026ecc4a = 1;
      _DAT_026ecbc8 = 0;
      uRam00000000026ecbd0 = 0;
      _DAT_026ecbd8 = 0;
      uRam00000000026ecbe0 = 0;
      _DAT_026ecbe8 = 0;
      uRam00000000026ecbf0 = 0;
      _DAT_026ecbf8 = 0;
      uRam00000000026ecc00 = 0;
      _DAT_026ecc08 = 0;
      uRam00000000026ecc10 = 0;
      _DAT_026ecc18 = 0;
      uRam00000000026ecc20 = 0;
      _DAT_026ecc28 = 0;
      uRam00000000026ecc30 = 0;
      DAT_026ecc53 = 0;
      _DAT_026ecc4b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ecc4b == '\0') {
    FUN_001ca0b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = 0;
  if (DAT_026ecc58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ecba8 = FUN_00d4fe50();
      DAT_026ecb90 = "GNFont";
      _DAT_026ecb98 = 0x48;
      _DAT_026ecba0 = FUN_001c9760;
      _DAT_026ecbb0 = 0;
      uRam00000000026ecbb8 = 0;
      _DAT_026ecbc0 = 0;
      _DAT_026ecc38 = 0;
      uRam00000000026ecc40 = 0;
      _DAT_026ecc48 = 0;
      DAT_026ecc4a = 1;
      _DAT_026ecbc8 = 0;
      uRam00000000026ecbd0 = 0;
      _DAT_026ecbd8 = 0;
      uRam00000000026ecbe0 = 0;
      _DAT_026ecbe8 = 0;
      uRam00000000026ecbf0 = 0;
      _DAT_026ecbf8 = 0;
      uRam00000000026ecc00 = 0;
      _DAT_026ecc08 = 0;
      uRam00000000026ecc10 = 0;
      _DAT_026ecc18 = 0;
      uRam00000000026ecc20 = 0;
      _DAT_026ecc28 = 0;
      uRam00000000026ecc30 = 0;
      DAT_026ecc53 = 0;
      _DAT_026ecc4b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ecc4b == '\0') {
    FUN_001ca240();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_026ecc58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ecba8 = FUN_00d4fe50();
      DAT_026ecb90 = "GNFont";
      _DAT_026ecb98 = 0x48;
      _DAT_026ecba0 = FUN_001c9760;
      _DAT_026ecbb0 = 0;
      uRam00000000026ecbb8 = 0;
      _DAT_026ecbc0 = 0;
      _DAT_026ecc38 = 0;
      uRam00000000026ecc40 = 0;
      _DAT_026ecc48 = 0;
      DAT_026ecc4a = 1;
      _DAT_026ecbc8 = 0;
      uRam00000000026ecbd0 = 0;
      _DAT_026ecbd8 = 0;
      uRam00000000026ecbe0 = 0;
      _DAT_026ecbe8 = 0;
      uRam00000000026ecbf0 = 0;
      _DAT_026ecbf8 = 0;
      uRam00000000026ecc00 = 0;
      _DAT_026ecc08 = 0;
      uRam00000000026ecc10 = 0;
      _DAT_026ecc18 = 0;
      uRam00000000026ecc20 = 0;
      _DAT_026ecc28 = 0;
      uRam00000000026ecc30 = 0;
      DAT_026ecc53 = 0;
      _DAT_026ecc4b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ecc4b == '\0') {
    FUN_001ca3d0();
    FUN_00e87980();
  }
  FUN_001ca560();
  FUN_001ca820();
  return;
}




// ============================================================
// @01ea7310 — 916 bytes
// str: ""GNFont""
// str: ""GNCharacterFormat""
// str: ""getFont""
// str: ""setFont""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ea7310(void)

{
  int iVar1;
  
  if (DAT_028ba250 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e95c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9518 = FUN_00d4fe50();
          _DAT_026e9500 = "GNCharacterFormat";
          _DAT_026e9508 = 0x38;
          _DAT_026e9510 = FUN_001b5810;
          _DAT_026e9520 = 0;
          uRam00000000026e9528 = 0;
          _DAT_026e9530 = 0;
          uRam00000000026e9538 = 0;
          _DAT_026e9540 = 0;
          uRam00000000026e9548 = 0;
          _DAT_026e9550 = 0;
          uRam00000000026e9558 = 0;
          _DAT_026e9560 = 0;
          uRam00000000026e9568 = 0;
          _DAT_026e9570 = 0;
          uRam00000000026e9578 = 0;
          _DAT_026e9580 = 0;
          uRam00000000026e9588 = 0;
          _DAT_026e9590 = 0;
          uRam00000000026e9598 = 0;
          _DAT_026e95a0 = 0;
          uRam00000000026e95a8 = 0;
          _DAT_026e95b0 = 0;
          uRam00000000026e95b8 = 0;
          _DAT_026e95c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba210 = "setFont";
      _DAT_028ba218 = &DAT_026e9500;
      _DAT_028ba220 = 0;
      _DAT_028ba228 = &DAT_027fe2f0;
      _DAT_028ba230 = FUN_01ea8370;
      _DAT_028ba238 = 0x371;
      _DAT_028ba240 = 0;
      uRam00000000028ba248 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba298 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e95c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026e9518 = FUN_00d4fe50();
          _DAT_026e9500 = "GNCharacterFormat";
          _DAT_026e9508 = 0x38;
          _DAT_026e9510 = FUN_001b5810;
          _DAT_026e9520 = 0;
          uRam00000000026e9528 = 0;
          _DAT_026e9530 = 0;
          uRam00000000026e9538 = 0;
          _DAT_026e9540 = 0;
          uRam00000000026e9548 = 0;
          _DAT_026e9550 = 0;
          uRam00000000026e9558 = 0;
          _DAT_026e9560 = 0;
          uRam00000000026e9568 = 0;
          _DAT_026e9570 = 0;
          uRam00000000026e9578 = 0;
          _DAT_026e9580 = 0;
          uRam00000000026e9588 = 0;
          _DAT_026e9590 = 0;
          uRam00000000026e9598 = 0;
          _DAT_026e95a0 = 0;
          uRam00000000026e95a8 = 0;
          _DAT_026e95b0 = 0;
          uRam00000000026e95b8 = 0;
          _DAT_026e95c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba258 = "getFont";
      _DAT_028ba260 = &DAT_026e9500;
      _DAT_028ba268 = 0;
      _DAT_028ba270 = &DAT_027fe2f3;
      _DAT_028ba278 = FUN_01ea83f0;
      _DAT_028ba280 = _DAT_023dde40;
      uRam00000000028ba284 = _UNK_023dde44;
      uRam00000000028ba288 = _UNK_023dde48;
      uRam00000000028ba28c = _UNK_023dde4c;
      if (DAT_026ecc58 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026ecba8 = FUN_00d4fe50();
          DAT_026ecb90 = "GNFont";
          _DAT_026ecb98 = 0x48;
          _DAT_026ecba0 = FUN_001c9760;
          _DAT_026ecbb0 = 0;
          uRam00000000026ecbb8 = 0;
          _DAT_026ecbc0 = 0;
          _DAT_026ecc38 = 0;
          uRam00000000026ecc40 = 0;
          _DAT_026ecc48 = 0;
          DAT_026ecc4a = 1;
          _DAT_026ecbc8 = 0;
          uRam00000000026ecbd0 = 0;
          _DAT_026ecbd8 = 0;
          uRam00000000026ecbe0 = 0;
          _DAT_026ecbe8 = 0;
          uRam00000000026ecbf0 = 0;
          _DAT_026ecbf8 = 0;
          uRam00000000026ecc00 = 0;
          _DAT_026ecc08 = 0;
          uRam00000000026ecc10 = 0;
          _DAT_026ecc18 = 0;
          uRam00000000026ecc20 = 0;
          _DAT_026ecc28 = 0;
          uRam00000000026ecc30 = 0;
          DAT_026ecc53 = 0;
          _DAT_026ecc4b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba290 = DAT_026ecb90;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01ea56e0 — 844 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ea57d6) */
/* WARNING: Removing unreachable block (ram,0x01ea57df) */

void FUN_01ea56e0(void)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined8 uVar7;
  longlong *local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  lVar6 = unaff_RDI[0x27];
  if (lVar6 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar2 + 0x3b0))();
  }
  if ((int)unaff_RDI[0x28] != 0) {
    (**(code **)(*unaff_RDI + 0x640))();
    lVar6 = unaff_RDI[0x28];
    uVar7 = FUN_01e3f820();
    (**(code **)(*local_40 + 0x3c0))(uVar7,(int)lVar6);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar1 = *(uint *)(unaff_RDI[0x2b] + 0xc);
  if (0 < (int)uVar1) {
    iVar5 = 0;
    lVar6 = 0;
    while( true ) {
      cVar4 = FUN_00d054a0();
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI[0x2b] + 0x10) + lVar6 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_01ea4fa0();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if ((ulonglong)uVar1 - 1 == lVar6) break;
      iVar5 = iVar5 + 1;
      if ((int)unaff_RDI[0x33] <= iVar5) {
        iVar5 = 0;
      }
      lVar6 = lVar6 + 1;
    }
  }
  if (*(char *)((longlong)unaff_RDI + 0x19e) != '\0') {
    FUN_01d48370();
    FUN_01d48b40();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_80 + 0x498))(1,0x17);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    FUN_01e436c0();
    (**(code **)(*plVar2 + 0x3b8))();
    FUN_01d48390();
  }
  FUN_01d48390();
  return;
}



