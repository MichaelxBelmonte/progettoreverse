// Function: FUN_01526d00
// Address: 01526d00
// Size: 1270 bytes
// Class: GNFraction
// String references:
//   "GNFraction"
//   "GNInt"
//   "_beatsPerBar"
//   "_pulseAnchor"
//   "_pulsesPerQuarter"
//   "_beatsPerQuarter"
//   "_quarterAtPulseAnchor"
//   "_beatAtPulseAnchor"
//   "_barAtPulseAnchor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01526d00(void)

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
  *unaff_RDI = &DAT_025e8d20;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c39b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3980 = FUN_014ff9f0();
        _DAT_027c3978 = "_beatsPerBar";
        _DAT_027c3988 = 0;
        _DAT_027c3990 = 0x6900;
        _DAT_027c3998 = "GNInt";
        _DAT_027c39a0 = 0;
        uRam00000000027c39a8 = 0;
        _DAT_027c39b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c39c8 = FUN_014ff9f0();
        _DAT_027c39c0 = "_pulseAnchor";
        _DAT_027c39d0 = 0;
        _DAT_027c39d8 = 0x7100;
        _DAT_027c39e0 = "GNFraction";
        _DAT_027c39e8 = 0;
        uRam00000000027c39f0 = 0;
        _DAT_027c39f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3a10 = FUN_014ff9f0();
        _DAT_027c3a08 = "_pulsesPerQuarter";
        _DAT_027c3a18 = 0;
        _DAT_027c3a20 = 0x7100;
        _DAT_027c3a28 = "GNFraction";
        _DAT_027c3a30 = 0;
        uRam00000000027c3a38 = 0;
        _DAT_027c3a40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3a90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3a58 = FUN_014ff9f0();
        _DAT_027c3a50 = "_beatsPerQuarter";
        _DAT_027c3a60 = 0;
        _DAT_027c3a68 = 0x7100;
        _DAT_027c3a70 = "GNFraction";
        _DAT_027c3a78 = 0;
        uRam00000000027c3a80 = 0;
        _DAT_027c3a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0x100000000;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3ad8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3aa0 = FUN_014ff9f0();
        _DAT_027c3a98 = "_quarterAtPulseAnchor";
        _DAT_027c3aa8 = 0;
        _DAT_027c3ab0 = 0x7100;
        _DAT_027c3ab8 = "GNFraction";
        _DAT_027c3ac0 = 0;
        uRam00000000027c3ac8 = 0;
        _DAT_027c3ad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3b20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3ae8 = FUN_014ff9f0();
        _DAT_027c3ae0 = "_beatAtPulseAnchor";
        _DAT_027c3af0 = 0;
        _DAT_027c3af8 = 0x6900;
        _DAT_027c3b00 = "GNInt";
        _DAT_027c3b08 = 0;
        uRam00000000027c3b10 = 0;
        _DAT_027c3b18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_014ff9f0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3b68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3b30 = FUN_014ff9f0();
        _DAT_027c3b28 = "_barAtPulseAnchor";
        _DAT_027c3b38 = 0;
        _DAT_027c3b40 = 0x6900;
        _DAT_027c3b48 = "GNInt";
        _DAT_027c3b50 = 0;
        uRam00000000027c3b58 = 0;
        _DAT_027c3b60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


