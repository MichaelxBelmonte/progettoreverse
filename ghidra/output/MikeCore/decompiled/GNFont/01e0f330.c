// Function: FUN_01e0f330
// Address: 01e0f330
// Size: 4566 bytes
// Class: GNFont
// String references:
//   "GNFont"
//   "GNTextView"
//   "GNString"
//   "getFont"
//   "getString"
//   "setEditable"
//   "setObjectValue"
//   "getObjectValue"
//   "setFont"
//   "setTextAlignment"
//   "setForegroundColor"
//   "_editFont"
//   "_editTextAlignment"
//   "_editForegroundColor"
//   "_editObjectValue"


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


