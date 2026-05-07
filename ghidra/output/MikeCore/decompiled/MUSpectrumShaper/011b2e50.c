// Function: FUN_011b2e50
// Address: 011b2e50
// Size: 2923 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "_spectrumSize"
//   "MUSpectrumShaperParameterSet"
//   "GNInt"
//   "_didRequestCacheValidation"
//   "_needsProcessSpectrumShaper"
//   "_needsProcessFormants"
//   "_needsProcessFormantsIsValid"
//   "_appliedSpectrumFactorsAreValid"
//   "_combFactorsAreValid"
//   "_referenceFrequency"
//   "_oneByFTiltPow"
//   "_oneByFDiffPow"
//   "_oneByFDecayPow"
//   "_oneByFDecayPowIsValid"
//   "_combStart"
//   "_combBalance"
//   "_combWidth"
//   ... +0 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b2e50(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025f0a18;
  unaff_RDI[7] = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b3b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSpectrumShaperParameterSet");
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011b3c80();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b28e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b28a8 = FUN_011b2c10();
        _DAT_027b28a0 = "_spectrumSize";
        _DAT_027b28b0 = 0;
        _DAT_027b28b8 = 0x6900;
        _DAT_027b28c0 = "GNInt";
        _DAT_027b28c8 = 0;
        uRam00000000027b28d0 = 0;
        _DAT_027b28d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2928 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b28f0 = FUN_011b2c10();
        _DAT_027b28e8 = "_needsProcessSpectrumShaper";
        _DAT_027b28f8 = 0;
        _DAT_027b2900 = 0x6201;
        _DAT_027b2908 = "bool";
        _DAT_027b2910 = 0;
        uRam00000000027b2918 = 0;
        _DAT_027b2920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2970 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2938 = FUN_011b2c10();
        _DAT_027b2930 = "_needsProcessFormants";
        _DAT_027b2940 = 0;
        _DAT_027b2948 = 0x6201;
        _DAT_027b2950 = "bool";
        _DAT_027b2958 = 0;
        uRam00000000027b2960 = 0;
        _DAT_027b2968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b29b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2980 = FUN_011b2c10();
        _DAT_027b2978 = "_needsProcessFormantsIsValid";
        _DAT_027b2988 = 0;
        _DAT_027b2990 = 0x6201;
        _DAT_027b2998 = "bool";
        _DAT_027b29a0 = 0;
        uRam00000000027b29a8 = 0;
        _DAT_027b29b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2a00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b29c8 = FUN_011b2c10();
        _DAT_027b29c0 = "_didRequestCacheValidation";
        _DAT_027b29d0 = 0;
        _DAT_027b29d8 = 0x6211;
        _DAT_027b29e0 = "bool";
        _DAT_027b29e8 = 0;
        uRam00000000027b29f0 = 0;
        _DAT_027b29f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b3df0();
  FUN_011b3ed0();
  FUN_011b3fb0();
  FUN_011b4090();
  FUN_011b4170();
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2bb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2b78 = FUN_011b2c10();
        _DAT_027b2b70 = "_appliedSpectrumFactorsAreValid";
        _DAT_027b2b80 = 0;
        _DAT_027b2b88 = 0x6201;
        _DAT_027b2b90 = "bool";
        _DAT_027b2b98 = 0;
        uRam00000000027b2ba0 = 0;
        _DAT_027b2ba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b4250();
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2c40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c08 = FUN_011b2c10();
        _DAT_027b2c00 = "_combFactorsAreValid";
        _DAT_027b2c10 = 0;
        _DAT_027b2c18 = 0x6201;
        _DAT_027b2c20 = "bool";
        _DAT_027b2c28 = 0;
        uRam00000000027b2c30 = 0;
        _DAT_027b2c38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2c88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c50 = FUN_011b2c10();
        _DAT_027b2c48 = "_referenceFrequency";
        _DAT_027b2c58 = 0;
        _DAT_027b2c60 = 0x6600;
        _DAT_027b2c68 = "float";
        _DAT_027b2c70 = 0;
        uRam00000000027b2c78 = 0;
        _DAT_027b2c80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2cd0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2c98 = FUN_011b2c10();
        _DAT_027b2c90 = "_oneByFTiltPow";
        _DAT_027b2ca0 = 0;
        _DAT_027b2ca8 = 0x6600;
        _DAT_027b2cb0 = "float";
        _DAT_027b2cb8 = 0;
        uRam00000000027b2cc0 = 0;
        _DAT_027b2cc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2d18 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2ce0 = FUN_011b2c10();
        _DAT_027b2cd8 = "_oneByFDiffPow";
        _DAT_027b2ce8 = 0;
        _DAT_027b2cf0 = 0x6600;
        _DAT_027b2cf8 = "float";
        _DAT_027b2d00 = 0;
        uRam00000000027b2d08 = 0;
        _DAT_027b2d10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2d60 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2d28 = FUN_011b2c10();
        _DAT_027b2d20 = "_oneByFDecayPow";
        _DAT_027b2d30 = 0;
        _DAT_027b2d38 = 0x6601;
        _DAT_027b2d40 = "float";
        _DAT_027b2d48 = 0;
        uRam00000000027b2d50 = 0;
        _DAT_027b2d58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2da8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2d70 = FUN_011b2c10();
        _DAT_027b2d68 = "_oneByFDecayPowIsValid";
        _DAT_027b2d78 = 0;
        _DAT_027b2d80 = 0x6200;
        _DAT_027b2d88 = "bool";
        _DAT_027b2d90 = 0;
        uRam00000000027b2d98 = 0;
        _DAT_027b2da0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2df0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2db8 = FUN_011b2c10();
        _DAT_027b2db0 = "_combStart";
        _DAT_027b2dc0 = 0;
        _DAT_027b2dc8 = 0x6600;
        _DAT_027b2dd0 = "float";
        _DAT_027b2dd8 = 0;
        uRam00000000027b2de0 = 0;
        _DAT_027b2de8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2e38 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2e00 = FUN_011b2c10();
        _DAT_027b2df8 = "_combBalance";
        _DAT_027b2e08 = 0;
        _DAT_027b2e10 = 0x6600;
        _DAT_027b2e18 = "float";
        _DAT_027b2e20 = 0;
        uRam00000000027b2e28 = 0;
        _DAT_027b2e30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar9 = FUN_011b2c10();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b2e80 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b2e48 = FUN_011b2c10();
        _DAT_027b2e40 = "_combWidth";
        _DAT_027b2e50 = 0;
        _DAT_027b2e58 = 0x6600;
        _DAT_027b2e60 = "float";
        _DAT_027b2e68 = 0;
        uRam00000000027b2e70 = 0;
        _DAT_027b2e78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


