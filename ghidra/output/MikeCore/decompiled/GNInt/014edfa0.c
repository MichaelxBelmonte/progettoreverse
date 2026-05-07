// Function: FUN_014edfa0
// Address: 014edfa0
// Size: 1102 bytes
// Class: GNInt
// String references:
//   "SInt64"
//   "GNInt"
//   "_vibratoStartSampleIndex"
//   "_vibratoSampleCount"
//   "_vibratoPeriodSampleCount"
//   "_certainVibratoStartSampleIndex"
//   "_certainVibratoSampleCount"
//   "_certainVibratoPeriodSampleCount"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014edfa0(void)

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
  *unaff_RDI = &DAT_025e7120;
  unaff_RDI[7] = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1d30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1cf8 = FUN_014edd70();
        _DAT_027c1cf0 = "_vibratoStartSampleIndex";
        _DAT_027c1d00 = 0;
        _DAT_027c1d08 = 0x6c00;
        _DAT_027c1d10 = "SInt64";
        _DAT_027c1d18 = 0;
        uRam00000000027c1d20 = 0;
        _DAT_027c1d28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1d78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1d40 = FUN_014edd70();
        _DAT_027c1d38 = "_vibratoSampleCount";
        _DAT_027c1d48 = 0;
        _DAT_027c1d50 = 0x6c00;
        _DAT_027c1d58 = "SInt64";
        _DAT_027c1d60 = 0;
        uRam00000000027c1d68 = 0;
        _DAT_027c1d70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1dc0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1d88 = FUN_014edd70();
        _DAT_027c1d80 = "_vibratoPeriodSampleCount";
        _DAT_027c1d90 = 0;
        _DAT_027c1d98 = 0x6900;
        _DAT_027c1da0 = "GNInt";
        _DAT_027c1da8 = 0;
        uRam00000000027c1db0 = 0;
        _DAT_027c1db8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1e08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1dd0 = FUN_014edd70();
        _DAT_027c1dc8 = "_certainVibratoStartSampleIndex";
        _DAT_027c1dd8 = 0;
        _DAT_027c1de0 = 0x6c00;
        _DAT_027c1de8 = "SInt64";
        _DAT_027c1df0 = 0;
        uRam00000000027c1df8 = 0;
        _DAT_027c1e00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1e50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1e18 = FUN_014edd70();
        _DAT_027c1e10 = "_certainVibratoSampleCount";
        _DAT_027c1e20 = 0;
        _DAT_027c1e28 = 0x6c00;
        _DAT_027c1e30 = "SInt64";
        _DAT_027c1e38 = 0;
        uRam00000000027c1e40 = 0;
        _DAT_027c1e48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_014edd70();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c1e98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c1e60 = FUN_014edd70();
        _DAT_027c1e58 = "_certainVibratoPeriodSampleCount";
        _DAT_027c1e68 = 0;
        _DAT_027c1e70 = 0x6900;
        _DAT_027c1e78 = "GNInt";
        _DAT_027c1e80 = 0;
        uRam00000000027c1e88 = 0;
        _DAT_027c1e90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


