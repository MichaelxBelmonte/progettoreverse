// Reconstructed implementation of GNInt
// From MikeCore binary — reverse-engineered pseudocode

#include "GNInt.h"

// ============================================================
// @00aff2e0 — 11911 bytes
// str: ""bool""
// str: ""float""
// str: ""void *""
// str: ""_volume""
// str: ""_tempo""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aff2e0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02564240;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757530 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027574f8 = FUN_00aff000();
        _DAT_027574f0 = "_libArchiveVersion";
        _DAT_02757500 = 0;
        _DAT_02757508 = 0x6900;
        _DAT_02757510 = "GNInt";
        _DAT_02757518 = 0;
        uRam0000000002757520 = 0;
        _DAT_02757528 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757578 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757540 = FUN_00aff000();
        _DAT_02757538 = "_volume";
        _DAT_02757548 = 0;
        _DAT_02757550 = 0x6600;
        _DAT_02757558 = "float";
        _DAT_02757560 = 0;
        uRam0000000002757568 = 0;
        _DAT_02757570 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027575c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757588 = FUN_00aff000();
        _DAT_02757580 = "_level";
        _DAT_02757590 = 0;
        _DAT_02757598 = 0x6600;
        _DAT_027575a0 = "float";
        _DAT_027575a8 = 0;
        uRam00000000027575b0 = 0;
        _DAT_027575b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757608 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027575d0 = FUN_00aff000();
        _DAT_027575c8 = "_gain";
        _DAT_027575d8 = 0;
        _DAT_027575e0 = 0x6600;
        _DAT_027575e8 = "float";
        _DAT_027575f0 = 0;
        uRam00000000027575f8 = 0;
        _DAT_02757600 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757618 = FUN_00aff000();
        _DAT_02757610 = "_isStackActive";
        _DAT_02757620 = 0;
        _DAT_02757628 = 0x6200;
        _DAT_02757630 = "bool";
        _DAT_02757638 = 0;
        uRam0000000002757640 = 0;
        _DAT_02757648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757660 = FUN_00aff000();
        _DAT_02757658 = "_eqBass";
        _DAT_02757668 = 0;
        _DAT_02757670 = 0x6600;
        _DAT_02757678 = "float";
        _DAT_02757680 = 0;
        uRam0000000002757688 = 0;
        _DAT_02757690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027576e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027576a8 = FUN_00aff000();
        _DAT_027576a0 = "_eqMiddle";
        _DAT_027576b0 = 0;
        _DAT_027576b8 = 0x6600;
        _DAT_027576c0 = "float";
        _DAT_027576c8 = 0;
        uRam00000000027576d0 = 0;
        _DAT_027576d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757728 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027576f0 = FUN_00aff000();
        _DAT_027576e8 = "_eqTreble";
        _DAT_027576f8 = 0;
        _DAT_02757700 = 0x6600;
        _DAT_02757708 = "float";
        _DAT_02757710 = 0;
        uRam0000000002757718 = 0;
        _DAT_02757720 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757770 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757738 = FUN_00aff000();
        _DAT_02757730 = "_eqPresence";
        _DAT_02757740 = 0;
        _DAT_02757748 = 0x6600;
        _DAT_02757750 = "float";
        _DAT_02757758 = 0;
        uRam0000000002757760 = 0;
        _DAT_02757768 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027577b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757780 = FUN_00aff000();
        _DAT_02757778 = "_isDelayActive";
        _DAT_02757788 = 0;
        _DAT_02757790 = 0x6200;
        _DAT_02757798 = "bool";
        _DAT_027577a0 = 0;
        uRam00000000027577a8 = 0;
        _DAT_027577b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b02610();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027578d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027578a0 = FUN_00aff000();
        _DAT_02757898 = "_delayMix";
        _DAT_027578a8 = 0;
        _DAT_027578b0 = 0x6600;
        _DAT_027578b8 = "float";
        _DAT_027578c0 = 0;
        uRam00000000027578c8 = 0;
        _DAT_027578d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757920 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027578e8 = FUN_00aff000();
        _DAT_027578e0 = "_delayFeedback";
        _DAT_027578f0 = 0;
        _DAT_027578f8 = 0x6600;
        _DAT_02757900 = "float";
        _DAT_02757908 = 0;
        uRam0000000002757910 = 0;
        _DAT_02757918 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757968 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757930 = FUN_00aff000();
        _DAT_02757928 = "_delayBandwidth";
        _DAT_02757938 = 0;
        _DAT_02757940 = 0x6600;
        _DAT_02757948 = "float";
        _DAT_02757950 = 0;
        uRam0000000002757958 = 0;
        _DAT_02757960 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027579b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757978 = FUN_00aff000();
        _DAT_02757970 = "_delayFrequency";
        _DAT_02757980 = 0;
        _DAT_02757988 = 0x6600;
        _DAT_02757990 = "float";
        _DAT_02757998 = 0;
        uRam00000000027579a0 = 0;
        _DAT_027579a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027579f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027579c0 = FUN_00aff000();
        _DAT_027579b8 = "_delayModulation";
        _DAT_027579c8 = 0;
        _DAT_027579d0 = 0x6600;
        _DAT_027579d8 = "float";
        _DAT_027579e0 = 0;
        uRam00000000027579e8 = 0;
        _DAT_027579f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757a40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757a08 = FUN_00aff000();
        _DAT_02757a00 = "_delayDucking";
        _DAT_02757a10 = 0;
        _DAT_02757a18 = 0x6600;
        _DAT_02757a20 = "float";
        _DAT_02757a28 = 0;
        uRam0000000002757a30 = 0;
        _DAT_02757a38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xd4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757a88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757a50 = FUN_00aff000();
        _DAT_02757a48 = "_delayLowCut";
        _DAT_02757a58 = 0;
        _DAT_02757a60 = 0x6600;
        _DAT_02757a68 = "float";
        _DAT_02757a70 = 0;
        uRam0000000002757a78 = 0;
        _DAT_02757a80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757ad0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757a98 = FUN_00aff000();
        _DAT_02757a90 = "_delayHighCut";
        _DAT_02757aa0 = 0;
        _DAT_02757aa8 = 0x6600;
        _DAT_02757ab0 = "float";
        _DAT_02757ab8 = 0;
        uRam0000000002757ac0 = 0;
        _DAT_02757ac8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xdc) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757b18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757ae0 = FUN_00aff000();
        _DAT_02757ad8 = "_delayReverseMix";
        _DAT_02757ae8 = 0;
        _DAT_02757af0 = 0x6600;
        _DAT_02757af8 = "float";
        _DAT_02757b00 = 0;
        uRam0000000002757b08 = 0;
        _DAT_02757b10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757b60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757b28 = FUN_00aff000();
        _DAT_02757b20 = "_delayStereo";
        _DAT_02757b30 = 0;
        _DAT_02757b38 = 0x6600;
        _DAT_02757b40 = "float";
        _DAT_02757b48 = 0;
        uRam0000000002757b50 = 0;
        _DAT_02757b58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757ba8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757b70 = FUN_00aff000();
        _DAT_02757b68 = "_delayFlutterIntensity";
        _DAT_02757b78 = 0;
        _DAT_02757b80 = 0x6600;
        _DAT_02757b88 = "float";
        _DAT_02757b90 = 0;
        uRam0000000002757b98 = 0;
        _DAT_02757ba0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757bf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757bb8 = FUN_00aff000();
        _DAT_02757bb0 = "_delayFlutterRate";
        _DAT_02757bc0 = 0;
        _DAT_02757bc8 = 0x6600;
        _DAT_02757bd0 = "float";
        _DAT_02757bd8 = 0;
        uRam0000000002757be0 = 0;
        _DAT_02757be8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757c38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757c00 = FUN_00aff000();
        _DAT_02757bf8 = "_delayGrit";
        _DAT_02757c08 = 0;
        _DAT_02757c10 = 0x6600;
        _DAT_02757c18 = "float";
        _DAT_02757c20 = 0;
        uRam0000000002757c28 = 0;
        _DAT_02757c30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757c80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757c48 = FUN_00aff000();
        _DAT_02757c40 = "_delaySwell";
        _DAT_02757c50 = 0;
        _DAT_02757c58 = 0x6600;
        _DAT_02757c60 = "float";
        _DAT_02757c68 = 0;
        uRam0000000002757c70 = 0;
        _DAT_02757c78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xf4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757cc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757c90 = FUN_00aff000();
        _DAT_02757c88 = "_delaySmear";
        _DAT_02757c98 = 0;
        _DAT_02757ca0 = 0x6600;
        _DAT_02757ca8 = "float";
        _DAT_02757cb0 = 0;
        uRam0000000002757cb8 = 0;
        _DAT_02757cc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757d10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757cd8 = FUN_00aff000();
        _DAT_02757cd0 = "_delayChorus";
        _DAT_02757ce0 = 0;
        _DAT_02757ce8 = 0x6600;
        _DAT_02757cf0 = "float";
        _DAT_02757cf8 = 0;
        uRam0000000002757d00 = 0;
        _DAT_02757d08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xfc) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757d58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757d20 = FUN_00aff000();
        _DAT_02757d18 = "_delayCrystalMix";
        _DAT_02757d28 = 0;
        _DAT_02757d30 = 0x6600;
        _DAT_02757d38 = "float";
        _DAT_02757d40 = 0;
        uRam0000000002757d48 = 0;
        _DAT_02757d50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757da0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757d68 = FUN_00aff000();
        _DAT_02757d60 = "_delayCrystalPitch";
        _DAT_02757d70 = 0;
        _DAT_02757d78 = 0x6900;
        _DAT_02757d80 = "GNInt";
        _DAT_02757d88 = 0;
        uRam0000000002757d90 = 0;
        _DAT_02757d98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x104) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757de8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757db0 = FUN_00aff000();
        _DAT_02757da8 = "_delayPitchDetune";
        _DAT_02757db8 = 0;
        _DAT_02757dc0 = 0x6600;
        _DAT_02757dc8 = "float";
        _DAT_02757dd0 = 0;
        uRam0000000002757dd8 = 0;
        _DAT_02757de0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x21) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b027f0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x10c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b029b0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x22) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757fe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757fa8 = FUN_00aff000();
        _DAT_02757fa0 = "_diMixFactor";
        _DAT_02757fb0 = 0;
        _DAT_02757fb8 = 0x6600;
        _DAT_02757fc0 = "float";
        _DAT_02757fc8 = 0;
        uRam0000000002757fd0 = 0;
        _DAT_02757fd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x114) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758028 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757ff0 = FUN_00aff000();
        _DAT_02757fe8 = "_isDiMixEnabled";
        _DAT_02757ff8 = 0;
        _DAT_02758000 = 0x6200;
        _DAT_02758008 = "bool";
        _DAT_02758010 = 0;
        uRam0000000002758018 = 0;
        _DAT_02758020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x115) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758070 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758038 = FUN_00aff000();
        _DAT_02758030 = "_isDiMixBlending";
        _DAT_02758040 = 0;
        _DAT_02758048 = 0x6200;
        _DAT_02758050 = "bool";
        _DAT_02758058 = 0;
        uRam0000000002758060 = 0;
        _DAT_02758068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x116) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027580b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758080 = FUN_00aff000();
        _DAT_02758078 = "_isDiMixInverted";
        _DAT_02758088 = 0;
        _DAT_02758090 = 0x6200;
        _DAT_02758098 = "bool";
        _DAT_027580a0 = 0;
        uRam00000000027580a8 = 0;
        _DAT_027580b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00b02b70();
  FUN_00b02c50();
  *(undefined4 *)(unaff_RDI + 0x25) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758190 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758158 = FUN_00aff000();
        _DAT_02758150 = "_rigTempo";
        _DAT_02758160 = 0;
        _DAT_02758168 = 0x6600;
        _DAT_02758170 = "float";
        _DAT_02758178 = 0;
        uRam0000000002758180 = 0;
        _DAT_02758188 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 300) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027581d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027581a0 = FUN_00aff000();
        _DAT_02758198 = "_isTempoSyncingToSong";
        _DAT_027581a8 = 0;
        _DAT_027581b0 = 0x6200;
        _DAT_027581b8 = "bool";
        _DAT_027581c0 = 0;
        uRam00000000027581c8 = 0;
        _DAT_027581d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x12d) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758220 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027581e8 = FUN_00aff000();
        _DAT_027581e0 = "_isTempoWrapAroundEnabled";
        _DAT_027581f0 = 0;
        _DAT_027581f8 = 0x6200;
        _DAT_02758200 = "bool";
        _DAT_02758208 = 0;
        uRam0000000002758210 = 0;
        _DAT_02758218 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758268 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758230 = FUN_00aff000();
        _DAT_02758228 = "_maxTempoFactor";
        _DAT_02758238 = 0;
        _DAT_02758240 = 0x6600;
        _DAT_02758248 = "float";
        _DAT_02758250 = 0;
        uRam0000000002758258 = 0;
        _DAT_02758260 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x134) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027582b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758278 = FUN_00aff000();
        _DAT_02758270 = "_tempo";
        _DAT_02758280 = 0;
        _DAT_02758288 = 0x6601;
        _DAT_02758290 = "float";
        _DAT_02758298 = 0;
        uRam00000000027582a0 = 0;
        _DAT_027582a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x27] = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027582f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027582c0 = FUN_00aff000();
        _DAT_027582b8 = "_ref";
        _DAT_027582c8 = 0;
        _DAT_027582d0 = 0x5e01;
        _DAT_027582d8 = "void *";
        _DAT_027582e0 = 0;
        uRam00000000027582e8 = 0;
        _DAT_027582f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x28) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758340 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758308 = FUN_00aff000();
        _DAT_02758300 = "_refSampleRate";
        _DAT_02758310 = 0;
        _DAT_02758318 = 0x6901;
        _DAT_02758320 = "GNInt";
        _DAT_02758328 = 0;
        uRam0000000002758330 = 0;
        _DAT_02758338 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00b02d30();
  *(undefined4 *)(unaff_RDI + 0x2a) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027583d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758398 = FUN_00aff000();
        _DAT_02758390 = "_syncedGain";
        _DAT_027583a0 = 0;
        _DAT_027583a8 = 0x6601;
        _DAT_027583b0 = "float";
        _DAT_027583b8 = 0;
        uRam00000000027583c0 = 0;
        _DAT_027583c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x154) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758418 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027583e0 = FUN_00aff000();
        _DAT_027583d8 = "_syncedIsStackActive";
        _DAT_027583e8 = 0;
        _DAT_027583f0 = 0x6201;
        _DAT_027583f8 = "bool";
        _DAT_02758400 = 0;
        uRam0000000002758408 = 0;
        _DAT_02758410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758460 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758428 = FUN_00aff000();
        _DAT_02758420 = "_syncedEqBass";
        _DAT_02758430 = 0;
        _DAT_02758438 = 0x6601;
        _DAT_02758440 = "float";
        _DAT_02758448 = 0;
        uRam0000000002758450 = 0;
        _DAT_02758458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x15c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027584a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758470 = FUN_00aff000();
        _DAT_02758468 = "_syncedEqMiddle";
        _DAT_02758478 = 0;
        _DAT_02758480 = 0x6601;
        _DAT_02758488 = "float";
        _DAT_02758490 = 0;
        uRam0000000002758498 = 0;
        _DAT_027584a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027584f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027584b8 = FUN_00aff000();
        _DAT_027584b0 = "_syncedEqTreble";
        _DAT_027584c0 = 0;
        _DAT_027584c8 = 0x6601;
        _DAT_027584d0 = "float";
        _DAT_027584d8 = 0;
        uRam00000000027584e0 = 0;
        _DAT_027584e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758538 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758500 = FUN_00aff000();
        _DAT_027584f8 = "_syncedEqPresence";
        _DAT_02758508 = 0;
        _DAT_02758510 = 0x6601;
        _DAT_02758518 = "float";
        _DAT_02758520 = 0;
        uRam0000000002758528 = 0;
        _DAT_02758530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758580 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758548 = FUN_00aff000();
        _DAT_02758540 = "_syncedIsDelayActive";
        _DAT_02758550 = 0;
        _DAT_02758558 = 0x6201;
        _DAT_02758560 = "bool";
        _DAT_02758568 = 0;
        uRam0000000002758570 = 0;
        _DAT_02758578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b02e10();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758610 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027585d8 = FUN_00aff000();
        _DAT_027585d0 = "_syncedDelayMix";
        _DAT_027585e0 = 0;
        _DAT_027585e8 = 0x6601;
        _DAT_027585f0 = "float";
        _DAT_027585f8 = 0;
        uRam0000000002758600 = 0;
        _DAT_02758608 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x174) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758658 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758620 = FUN_00aff000();
        _DAT_02758618 = "_syncedDelayFeedback";
        _DAT_02758628 = 0;
        _DAT_02758630 = 0x6601;
        _DAT_02758638 = "float";
        _DAT_02758640 = 0;
        uRam0000000002758648 = 0;
        _DAT_02758650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027586a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758668 = FUN_00aff000();
        _DAT_02758660 = "_syncedDelayBandwidth";
        _DAT_02758670 = 0;
        _DAT_02758678 = 0x6601;
        _DAT_02758680 = "float";
        _DAT_02758688 = 0;
        uRam0000000002758690 = 0;
        _DAT_02758698 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x17c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027586e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027586b0 = FUN_00aff000();
        _DAT_027586a8 = "_syncedDelayFrequency";
        _DAT_027586b8 = 0;
        _DAT_027586c0 = 0x6601;
        _DAT_027586c8 = "float";
        _DAT_027586d0 = 0;
        uRam00000000027586d8 = 0;
        _DAT_027586e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027586f8 = FUN_00aff000();
        _DAT_027586f0 = "_syncedDelayModulation";
        _DAT_02758700 = 0;
        _DAT_02758708 = 0x6601;
        _DAT_02758710 = "float";
        _DAT_02758718 = 0;
        uRam0000000002758720 = 0;
        _DAT_02758728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758778 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758740 = FUN_00aff000();
        _DAT_02758738 = "_syncedDelayDucking";
        _DAT_02758748 = 0;
        _DAT_02758750 = 0x6601;
        _DAT_02758758 = "float";
        _DAT_02758760 = 0;
        uRam0000000002758768 = 0;
        _DAT_02758770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027587c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758788 = FUN_00aff000();
        _DAT_02758780 = "_syncedDelayLowCut";
        _DAT_02758790 = 0;
        _DAT_02758798 = 0x6601;
        _DAT_027587a0 = "float";
        _DAT_027587a8 = 0;
        uRam00000000027587b0 = 0;
        _DAT_027587b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758808 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027587d0 = FUN_00aff000();
        _DAT_027587c8 = "_syncedDelayHighCut";
        _DAT_027587d8 = 0;
        _DAT_027587e0 = 0x6601;
        _DAT_027587e8 = "float";
        _DAT_027587f0 = 0;
        uRam00000000027587f8 = 0;
        _DAT_02758800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758818 = FUN_00aff000();
        _DAT_02758810 = "_syncedDelayReverseMix";
        _DAT_02758820 = 0;
        _DAT_02758828 = 0x6601;
        _DAT_02758830 = "float";
        _DAT_02758838 = 0;
        uRam0000000002758840 = 0;
        _DAT_02758848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758860 = FUN_00aff000();
        _DAT_02758858 = "_syncedDelayStereo";
        _DAT_02758868 = 0;
        _DAT_02758870 = 0x6601;
        _DAT_02758878 = "float";
        _DAT_02758880 = 0;
        uRam0000000002758888 = 0;
        _DAT_02758890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027588e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027588a8 = FUN_00aff000();
        _DAT_027588a0 = "_syncedDelayFlutterIntensity";
        _DAT_027588b0 = 0;
        _DAT_027588b8 = 0x6601;
        _DAT_027588c0 = "float";
        _DAT_027588c8 = 0;
        uRam00000000027588d0 = 0;
        _DAT_027588d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x19c) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758928 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027588f0 = FUN_00aff000();
        _DAT_027588e8 = "_syncedDelayFlutterRate";
        _DAT_027588f8 = 0;
        _DAT_02758900 = 0x6601;
        _DAT_02758908 = "float";
        _DAT_02758910 = 0;
        uRam0000000002758918 = 0;
        _DAT_02758920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x34) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758938 = FUN_00aff000();
        _DAT_02758930 = "_syncedDelayGrit";
        _DAT_02758940 = 0;
        _DAT_02758948 = 0x6601;
        _DAT_02758950 = "float";
        _DAT_02758958 = 0;
        uRam0000000002758960 = 0;
        _DAT_02758968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1a4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027589b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758980 = FUN_00aff000();
        _DAT_02758978 = "_syncedDelaySwell";
        _DAT_02758988 = 0;
        _DAT_02758990 = 0x6601;
        _DAT_02758998 = "float";
        _DAT_027589a0 = 0;
        uRam00000000027589a8 = 0;
        _DAT_027589b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x35) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758a00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027589c8 = FUN_00aff000();
        _DAT_027589c0 = "_syncedDelaySmear";
        _DAT_027589d0 = 0;
        _DAT_027589d8 = 0x6601;
        _DAT_027589e0 = "float";
        _DAT_027589e8 = 0;
        uRam00000000027589f0 = 0;
        _DAT_027589f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ac) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758a48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758a10 = FUN_00aff000();
        _DAT_02758a08 = "_syncedDelayChorus";
        _DAT_02758a18 = 0;
        _DAT_02758a20 = 0x6601;
        _DAT_02758a28 = "float";
        _DAT_02758a30 = 0;
        uRam0000000002758a38 = 0;
        _DAT_02758a40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x36) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758a90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758a58 = FUN_00aff000();
        _DAT_02758a50 = "_syncedDelayCrystalMix";
        _DAT_02758a60 = 0;
        _DAT_02758a68 = 0x6601;
        _DAT_02758a70 = "float";
        _DAT_02758a78 = 0;
        uRam0000000002758a80 = 0;
        _DAT_02758a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1b4) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758ad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758aa0 = FUN_00aff000();
        _DAT_02758a98 = "_syncedDelayCrystalPitch";
        _DAT_02758aa8 = 0;
        _DAT_02758ab0 = 0x6901;
        _DAT_02758ab8 = "GNInt";
        _DAT_02758ac0 = 0;
        uRam0000000002758ac8 = 0;
        _DAT_02758ad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x37) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02758b20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02758ae8 = FUN_00aff000();
        _DAT_02758ae0 = "_syncedDelayPitchDetune";
        _DAT_02758af0 = 0;
        _DAT_02758af8 = 0x6601;
        _DAT_02758b00 = "float";
        _DAT_02758b08 = 0;
        uRam0000000002758b10 = 0;
        _DAT_02758b18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1bc) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b02ff0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x38) = 0;
  lVar2 = FUN_00aff000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b031b0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @014f0c40 — 8250 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014f2a8f) */
/* WARNING: Removing unreachable block (ram,0x014f2a94) */
/* WARNING: Removing unreachable block (ram,0x014f2095) */
/* WARNING: Removing unreachable block (ram,0x014f20a1) */
/* WARNING: Removing unreachable block (ram,0x014f165a) */
/* WARNING: Removing unreachable block (ram,0x014f1666) */
/* WARNING: Removing unreachable block (ram,0x014f14fa) */
/* WARNING: Removing unreachable block (ram,0x014f1506) */
/* WARNING: Removing unreachable block (ram,0x014f1732) */
/* WARNING: Removing unreachable block (ram,0x014f173e) */
/* WARNING: Removing unreachable block (ram,0x014f29f1) */
/* WARNING: Removing unreachable block (ram,0x014f29fa) */
/* WARNING: Removing unreachable block (ram,0x014f2a07) */
/* WARNING: Removing unreachable block (ram,0x014f0e87) */
/* WARNING: Removing unreachable block (ram,0x014f0e97) */
/* WARNING: Removing unreachable block (ram,0x014f2b4a) */
/* WARNING: Removing unreachable block (ram,0x014f2b56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f0c40(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  code *pcVar27;
  longlong *plVar28;
  int iVar29;
  bool bVar30;
  int iVar31;
  void *pvVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  longlong lVar35;
  pthread_key_t pVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  int iVar39;
  float *pfVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  int iVar44;
  ulonglong uVar45;
  longlong *plVar46;
  uint uVar47;
  longlong unaff_RSI;
  longlong lVar48;
  int iVar49;
  longlong *unaff_RDI;
  uint uVar50;
  ulonglong uVar51;
  longlong lVar52;
  bool bVar53;
  longlong lVar54;
  int iVar55;
  bool bVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint local_res8;
  longlong *local_res10;
  longlong *local_res20;
  float local_17c;
  ulonglong local_140;
  int local_130;
  uint local_12c;
  longlong local_108;
  longlong local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_c8;
  char local_c0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_78;
  longlong local_60;
  longlong local_58;
  longlong *local_40;
  
  plVar28 = local_c8;
  if (*local_res20 == 0) {
    return;
  }
  lVar48 = param_1;
  (**(code **)(*unaff_RDI + 0x378))();
  pvVar32 = _pthread_getspecific((pthread_key_t)lVar48);
  if (pvVar32 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_c0 == '\0') {
    if (local_c8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  dVar59 = *(double *)((longlong)local_c8 + 0x38);
  FUN_00d216c0();
  iVar39 = (int)(DAT_0241b598 / dVar59);
  uVar7 = *(uint *)(unaff_RDI[0x21] + 0xc);
  if ((int)uVar7 < iVar39 * 2) {
    local_60 = 0;
    bVar9 = false;
    local_a8 = 0;
    bVar20 = false;
    local_78 = 0;
    bVar25 = false;
    local_98 = 0;
    bVar19 = false;
    local_a0 = 0;
    bVar21 = false;
    unaff_RDI = (longlong *)0x0;
    bVar53 = false;
    local_40 = (longlong *)0x0;
    bVar30 = false;
    local_108 = 0;
    bVar18 = false;
  }
  else {
    bVar56 = unaff_RSI == 0;
    bVar10 = param_2 < (int)(uVar7 * 6);
    if (bVar10 || bVar56) {
      unaff_RSI = FUN_00e83010();
    }
    if (param_1 == 0) {
      FUN_014efd00();
      if (local_c0 == '\0') {
        FUN_00d50b00();
      }
      bVar18 = true;
      local_108 = (longlong)local_c8;
    }
    else {
      bVar18 = false;
      local_108 = 0;
    }
    local_140 = param_4;
    if (param_4 == 0) {
      dVar58 = DAT_0240de80 / dVar59;
      local_140 = FUN_00e83010();
      local_res8 = (int)dVar58 * 2 + 1;
      uVar45 = FUN_00e83da0();
      if (0 < (int)local_res8) {
        uVar42 = (ulonglong)local_res8;
        if ((local_res8 < 4) ||
           ((local_140 < uVar45 + uVar42 * 4 && (uVar45 < local_140 + uVar42 * 4)))) {
          uVar37 = 0;
        }
        else {
          uVar37 = (ulonglong)(local_res8 & 0xfffffffc);
          uVar41 = 0;
          do {
            auVar61 = *(undefined1 (*) [16])(uVar45 + uVar41 * 4);
            auVar61 = sqrtps(auVar61,auVar61);
            *(undefined1 (*) [16])(local_140 + uVar41 * 4) = auVar61;
            uVar41 = uVar41 + 4;
          } while (uVar37 != uVar41);
        }
        do {
          *(float *)(local_140 + uVar37 * 4) = SQRT(*(float *)(uVar45 + uVar37 * 4));
          uVar37 = uVar37 + 1;
        } while (uVar42 != uVar37);
      }
      FUN_00e83070();
    }
    puVar33 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar33 = &DAT_02572358;
    pcVar27 = DAT_02572370;
    (*DAT_02572370)();
    puVar34 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar34 = &DAT_02572358;
    (*pcVar27)();
    FUN_014c2f20();
    lVar48 = (longlong)(int)uVar7;
    pfVar40 = (float *)(lVar48 * 0x10 + unaff_RSI);
    puVar1 = (undefined4 *)(unaff_RSI + lVar48 * 0x14);
    if ((int)uVar7 < 1) {
      bVar19 = false;
      local_98 = 0;
      bVar9 = false;
    }
    else {
      uVar45 = 0;
      local_98 = 0;
      bVar19 = false;
      do {
        lVar54 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar45 * 8);
        if (local_98 == lVar54) {
          if ((!bVar19) && (local_98 != 0)) {
            bVar19 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar19) && (local_98 != 0)) {
            FUN_00d50b20();
            bVar19 = true;
            local_98 = lVar54;
          }
          else {
            bVar19 = true;
            local_98 = lVar54;
          }
        }
        *(undefined4 *)(unaff_RSI + uVar45 * 4) = *(undefined4 *)(local_98 + 0x14);
        pfVar40[uVar45] = *(float *)(local_98 + 0x18);
        *(undefined4 *)(unaff_RSI + lVar48 * 4 + uVar45 * 4) = *(undefined4 *)(local_98 + 0x1c);
        uVar26 = _UNK_0239014c;
        uVar11 = _UNK_02390148;
        uVar47 = _UNK_02390144;
        uVar50 = _DAT_02390140;
        uVar45 = uVar45 + 1;
      } while (uVar7 != uVar45);
      uVar45 = (ulonglong)(uVar7 - 1);
      bVar9 = 2 < (int)uVar7;
      if (2 < (int)uVar7) {
        fVar57 = *pfVar40;
        uVar42 = uVar45 - 1;
        uVar37 = 1;
        if (7 < uVar42) {
          uVar51 = unaff_RSI + lVar48 * 0x14 + 4;
          uVar41 = unaff_RSI + (lVar48 * 5 + uVar45) * 4;
          lVar54 = lVar48 * 4 + uVar45;
          if (((ulonglong)(unaff_RSI + lVar54 * 4) <= uVar51 ||
               uVar41 <= (lVar48 << 4 | 4U) + unaff_RSI) &&
             (unaff_RSI + lVar54 * 4 + 4U <= uVar51 || uVar41 <= (lVar48 << 4 | 8U) + unaff_RSI)) {
            uVar51 = uVar42 & 0xfffffffffffffff8;
            uVar37 = uVar51 + 1;
            auVar61._4_4_ = fVar57;
            auVar61._0_4_ = fVar57;
            auVar61._8_4_ = fVar57;
            auVar61._12_4_ = fVar57;
            lVar54 = unaff_RSI + lVar48 * 0x10;
            lVar35 = unaff_RSI + lVar48 * 0x14;
            uVar41 = 0;
            do {
              auVar5 = *(undefined1 (*) [16])(lVar54 + 4 + uVar41 * 4);
              pfVar3 = (float *)(lVar54 + 8 + uVar41 * 4);
              fVar60 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              auVar6 = *(undefined1 (*) [16])(lVar54 + 0x14 + uVar41 * 4);
              fVar57 = auVar6._12_4_;
              pfVar2 = (float *)(lVar54 + 0x18 + uVar41 * 4);
              fVar14 = *pfVar2;
              fVar15 = pfVar2[1];
              fVar16 = pfVar2[2];
              fVar17 = pfVar2[3];
              auVar61 = blendps(auVar61,auVar5,7);
              auVar62 = blendps(auVar6,auVar5,8);
              puVar4 = (uint *)(lVar35 + 4 + uVar41 * 4);
              *puVar4 = (uint)((auVar5._0_4_ - auVar61._12_4_) + (*pfVar3 - auVar5._0_4_)) & uVar50;
              puVar4[1] = (uint)((auVar5._4_4_ - auVar61._0_4_) + (fVar60 - auVar5._4_4_)) & uVar47;
              puVar4[2] = (uint)((auVar5._8_4_ - auVar61._4_4_) + (fVar12 - auVar5._8_4_)) & uVar11;
              puVar4[3] = (uint)((auVar5._12_4_ - auVar61._8_4_) + (fVar13 - auVar5._12_4_)) &
                          uVar26;
              puVar4 = (uint *)(lVar35 + 0x14 + uVar41 * 4);
              *puVar4 = (uint)((fVar14 - auVar6._0_4_) + (auVar6._0_4_ - auVar62._12_4_)) & uVar50;
              puVar4[1] = (uint)((fVar15 - auVar6._4_4_) + (auVar6._4_4_ - auVar62._0_4_)) & uVar47;
              puVar4[2] = (uint)((fVar16 - auVar6._8_4_) + (auVar6._8_4_ - auVar62._4_4_)) & uVar11;
              puVar4[3] = (uint)((fVar17 - fVar57) + (fVar57 - auVar62._8_4_)) & uVar26;
              uVar41 = uVar41 + 8;
              auVar61 = auVar6;
            } while (uVar51 != uVar41);
            if (uVar42 == uVar51) goto LAB_014f13df;
          }
        }
        uVar42 = ~uVar37;
        fVar60 = fVar57;
        if ((uVar7 - 1 & 1) == 0) {
          fVar60 = pfVar40[uVar37];
          puVar1[uVar37] =
               (uint)((pfVar40[uVar37 + 1] - fVar60) + (fVar60 - fVar57)) & _DAT_02390140;
          uVar37 = uVar37 + 1;
        }
        uVar50 = _DAT_02390140;
        if (uVar42 + uVar45 != 0) {
          lVar54 = unaff_RSI + lVar48 * 0x10;
          lVar35 = unaff_RSI + lVar48 * 0x14;
          do {
            fVar57 = *(float *)(lVar54 + uVar37 * 4);
            *(uint *)(lVar35 + uVar37 * 4) =
                 (uint)((*(float *)(lVar54 + 4 + uVar37 * 4) - fVar57) + (fVar57 - fVar60)) & uVar50
            ;
            fVar60 = *(float *)(lVar54 + 4 + uVar37 * 4);
            *(uint *)(lVar35 + 4 + uVar37 * 4) =
                 (uint)((*(float *)(lVar54 + 8 + uVar37 * 4) - fVar60) + (fVar60 - fVar57)) & uVar50
            ;
            uVar37 = uVar37 + 2;
          } while (uVar45 != uVar37);
        }
      }
LAB_014f13df:
      if (1 < (int)uVar7) {
        *puVar1 = puVar1[1];
        puVar1[uVar45] = puVar1[uVar7 - 2];
      }
    }
    local_12c = uVar7 - 1;
    FUN_00d216c0();
    FUN_014328b0(DAT_023942d0,(double)*(float *)(unaff_RDI + 0x10));
    if (local_e0 == '\0') {
      if (local_e8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e0 = '\0';
    }
    FUN_00d21140();
    if (local_e8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d216c0();
    if (bVar9) {
      uVar45 = 1;
      do {
        fVar57 = (float)puVar1[uVar45 - 1];
        fVar60 = (float)puVar1[uVar45];
        if ((fVar60 <= fVar57) && (fVar60 < (float)puVar1[uVar45 + 1])) {
          FUN_01432b10((double)(int)uVar45 + DAT_023942d0,(double)fVar60);
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          fVar57 = (float)puVar1[uVar45 - 1];
          fVar60 = (float)puVar1[uVar45];
        }
        if ((fVar57 <= fVar60) &&
           ((float)puVar1[uVar45 + 1] <= fVar60 && fVar60 != (float)puVar1[uVar45 + 1])) {
          FUN_01432b10((double)(int)uVar45 + DAT_023942d0,(double)fVar60);
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar45 = uVar45 + 1;
      } while (local_12c != uVar45);
    }
    dVar59 = DAT_0240de98 / dVar59;
    iVar44 = *(int *)((longlong)puVar33 + 0xc);
    if (iVar44 < 2) {
      local_130 = uVar7 - iVar39;
      local_a8 = 0;
      bVar20 = false;
      bVar9 = false;
      local_60 = 0;
joined_r0x014f1a2f:
      bVar25 = false;
      local_78 = 0;
      if (0 < iVar44) goto LAB_014f1a35;
LAB_014f2359:
      bVar21 = false;
      local_a0 = 0;
    }
    else {
      iVar55 = 0;
      local_60 = 0;
      bVar9 = false;
      local_a8 = 0;
      bVar20 = false;
      do {
        lVar54 = *(longlong *)(puVar33[2] + (longlong)iVar55 * 8);
        if (local_60 == lVar54) {
          if ((!bVar9) && (local_60 != 0)) {
            bVar9 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar9) && (local_60 != 0)) {
            FUN_00d50b20();
            bVar9 = true;
            local_60 = lVar54;
          }
          else {
            bVar9 = true;
            local_60 = lVar54;
          }
        }
        lVar54 = *(longlong *)(puVar33[2] + 8 + (longlong)iVar55 * 8);
        if (local_a8 == lVar54) {
          if ((!bVar20) && (local_a8 != 0)) {
            bVar20 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar20) && (local_a8 != 0)) {
            FUN_00d50b20();
            bVar20 = true;
            local_a8 = lVar54;
          }
          else {
            bVar20 = true;
            local_a8 = lVar54;
          }
        }
        if ((*(double *)(local_60 + 0x20) <= 0.0) || (*(double *)(local_a8 + 0x20) <= 0.0)) {
          if ((*(double *)(local_60 + 0x20) < 0.0) &&
             (*(double *)(local_a8 + 0x20) <= 0.0 && *(double *)(local_a8 + 0x20) != 0.0)) {
            if (*(double *)(local_60 + 0x18) < *(double *)(local_a8 + 0x18) ||
                *(double *)(local_60 + 0x18) == *(double *)(local_a8 + 0x18)) {
              FUN_00d23620();
            }
            else {
              FUN_00d23620();
            }
            goto LAB_014f17da;
          }
        }
        else {
          if (*(double *)(local_a8 + 0x18) < *(double *)(local_60 + 0x18) ||
              *(double *)(local_a8 + 0x18) == *(double *)(local_60 + 0x18)) {
            FUN_00d23620();
          }
          else {
            FUN_00d23620();
          }
LAB_014f17da:
          if (iVar55 < 1) {
            iVar55 = 1;
          }
          iVar55 = iVar55 + -2;
        }
        iVar55 = iVar55 + 1;
        iVar44 = *(int *)((longlong)puVar33 + 0xc);
      } while (iVar55 < iVar44 + -1);
      local_130 = uVar7 - iVar39;
      iVar55 = 0;
      if (iVar44 < 3) goto joined_r0x014f1a2f;
      lVar54 = 0;
      bVar25 = false;
      do {
        lVar35 = *(longlong *)(puVar33[2] + (longlong)iVar55 * 8);
        if (local_60 == lVar35) {
          if (!bVar9) {
            bVar9 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          local_60 = lVar35;
          if (bVar9) {
            FUN_00d50b20();
            bVar9 = true;
          }
          else {
            bVar9 = true;
          }
        }
        if (DAT_02390448 < *(double *)(local_60 + 0x20)) {
          iVar44 = (int)*(double *)(local_60 + 0x10);
          local_78 = *(longlong *)(puVar33[2] + 0x10 + (longlong)iVar55 * 8);
          if (lVar54 == local_78) {
            if ((!bVar25) && (lVar54 != 0)) {
              FUN_00d50b00();
              local_78 = lVar54;
              goto LAB_014f2250;
            }
          }
          else {
            if (local_78 != 0) {
              FUN_00d50b00(local_78);
            }
            if ((bVar25) && (lVar54 != 0)) {
              FUN_00d50b20();
            }
LAB_014f2250:
            bVar25 = true;
            lVar54 = local_78;
          }
          if ((((iVar39 < iVar44) && (iVar31 = (int)*(double *)(lVar54 + 0x10), iVar31 < local_130))
              && (iVar31 - iVar44 < (int)dVar59)) &&
             (((0.0 < (float)puVar1[iVar44] && (0.0 < (float)puVar1[iVar31])) ||
              (((float)puVar1[iVar44] < 0.0 &&
               ((float)puVar1[iVar31] <= 0.0 && (float)puVar1[iVar31] != 0.0)))))) {
            if (*(double *)(lVar54 + 0x18) < *(double *)(local_60 + 0x18) ||
                *(double *)(lVar54 + 0x18) == *(double *)(local_60 + 0x18)) {
              FUN_00d23620();
              FUN_00d23620();
            }
            else {
              FUN_00d23620();
              FUN_00d23620();
            }
            if (iVar55 < 1) {
              iVar55 = 1;
            }
            iVar55 = iVar55 + -2;
          }
        }
        iVar55 = iVar55 + 1;
      } while (iVar55 < *(int *)((longlong)puVar33 + 0xc) + -2);
      local_78 = lVar54;
      if (*(int *)((longlong)puVar33 + 0xc) < 1) goto LAB_014f2359;
LAB_014f1a35:
      iVar44 = 0;
      lVar54 = local_140 + (longlong)(int)local_res8 * 4;
      lVar35 = local_140 + (longlong)(int)(local_res8 * 2) * 4;
      iVar55 = (int)local_res8 / 2;
      lVar8 = unaff_RSI + lVar48 * 0x14;
      lVar43 = 0;
      local_a0 = 0;
      bVar21 = false;
      lVar52 = local_60;
      do {
        local_60 = *(longlong *)(puVar33[2] + lVar43 * 8);
        if (lVar52 == local_60) {
          local_60 = lVar52;
          if ((!bVar9) && (lVar52 != 0)) {
            bVar9 = true;
            FUN_00d50b00();
          }
LAB_014f1b30:
          if (DAT_02390448 < *(double *)(local_60 + 0x20)) {
LAB_014f1b6e:
            lVar52 = puVar33[2];
            if (lVar43 == 0) {
              iVar31 = 0;
            }
            else {
              iVar31 = (int)*(double *)(*(longlong *)(lVar52 + -8 + lVar43 * 8) + 0x10);
            }
            uVar50 = uVar7;
            if (lVar43 < (longlong)*(int *)((longlong)puVar33 + 0xc) + -1) {
              uVar50 = (uint)*(double *)(*(longlong *)(lVar52 + 8 + lVar43 * 8) + 0x10);
            }
            if (iVar31 < (int)uVar50) {
              uVar45 = (ulonglong)iVar31;
              uVar37 = ~uVar45;
              fVar57 = 0.0;
              uVar42 = (ulonglong)(uVar50 - iVar31) & 7;
              if ((uVar50 - iVar31 & 7) != 0) {
                do {
                  fVar57 = fVar57 + (float)puVar1[uVar45];
                  uVar45 = uVar45 + 1;
                  uVar42 = uVar42 - 1;
                } while (uVar42 != 0);
              }
              if (6 < uVar37 + (longlong)(int)uVar50) {
                do {
                  fVar57 = fVar57 + *(float *)(lVar8 + uVar45 * 4) +
                           *(float *)(lVar8 + 4 + uVar45 * 4) + *(float *)(lVar8 + 8 + uVar45 * 4) +
                           *(float *)(lVar8 + 0xc + uVar45 * 4) +
                           *(float *)(lVar8 + 0x10 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x14 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x18 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x1c + uVar45 * 4);
                  uVar45 = uVar45 + 8;
                } while ((longlong)(int)uVar50 != uVar45);
              }
              if ((DAT_023908e0 < fVar57) &&
                 (iVar31 = (int)*(double *)(*(longlong *)(lVar52 + lVar43 * 8) + 0x10),
                 DAT_023908d8 < (float)puVar1[iVar31])) {
                uVar47 = iVar31 - iVar55;
                iVar49 = 1 - uVar47;
                uVar50 = 1;
                if (0 < (int)uVar47) {
                  iVar49 = 1;
                  uVar50 = uVar47;
                }
                uVar47 = iVar55 + iVar31 + 1;
                if ((int)local_12c <= iVar55 + iVar31) {
                  uVar47 = local_12c;
                }
                uVar11 = uVar47;
                if ((int)uVar47 < (int)uVar50) {
                  uVar11 = uVar50;
                }
                if ((int)uVar50 < (int)uVar47) {
                  uVar45 = (ulonglong)(uVar11 - uVar50);
                  uVar42 = 0;
                  do {
                    lVar52 = *(longlong *)
                              (*(longlong *)(unaff_RDI[0x21] + 0x10) + (ulonglong)uVar50 * 8 +
                              uVar42 * 8);
                    if (local_98 == lVar52) {
                      if ((!bVar19) && (local_98 != 0)) {
                        bVar19 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar52 != 0) {
                        FUN_00d50b00();
                      }
                      if ((bVar19) && (local_98 != 0)) {
                        FUN_00d50b20();
                        bVar19 = true;
                        local_98 = lVar52;
                      }
                      else {
                        bVar19 = true;
                        local_98 = lVar52;
                      }
                    }
                    lVar52 = *(longlong *)
                              (*(longlong *)(unaff_RDI[0x21] + 0x10) + (ulonglong)uVar50 * 8 + -8 +
                              uVar42 * 8);
                    if (local_a0 == lVar52) {
                      if ((!bVar21) && (local_a0 != 0)) {
                        bVar21 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar52 != 0) {
                        FUN_00d50b00();
                      }
                      if ((bVar21) && (local_a0 != 0)) {
                        FUN_00d50b20();
                        bVar21 = true;
                        local_a0 = lVar52;
                      }
                      else {
                        bVar21 = true;
                        local_a0 = lVar52;
                      }
                    }
                    fVar57 = DAT_02411280;
                    if (!NAN(*(float *)(local_98 + 0x20))) {
                      fVar57 = (float)_powf();
                    }
                    fVar60 = DAT_02411280;
                    if (DAT_02411280 <= fVar57) {
                      fVar60 = fVar57;
                    }
                    *(uint *)(lVar54 + uVar42 * 4) =
                         (uint)(*(float *)(local_98 + 0x14) - *(float *)(local_a0 + 0x14)) &
                         _DAT_02390140;
                    *(float *)(lVar35 + uVar42 * 4) = fVar60;
                    uVar42 = uVar42 + 1;
                  } while (uVar45 != uVar42);
                }
                else {
                  uVar45 = (ulonglong)(uVar11 - uVar50);
                }
                FUN_015c1480(1,uVar45);
                FUN_015c1480(1,uVar45);
                if ((int)uVar50 < (int)uVar47) {
                  uVar42 = 0;
                  fVar57 = 0.0;
                  do {
                    fVar60 = (*(float *)(lVar54 + uVar42 * 4) / *(float *)(lVar35 + uVar42 * 4)) *
                             *(float *)(local_140 + (longlong)iVar49 * 4 + uVar42 * 4);
                    iVar29 = uVar50 + (int)uVar42;
                    if (fVar60 <= fVar57) {
                      fVar60 = fVar57;
                      iVar29 = iVar31;
                    }
                    iVar31 = iVar29;
                    uVar42 = uVar42 + 1;
                    fVar57 = fVar60;
                  } while (uVar45 != uVar42);
                }
                if (((iVar39 < iVar31) && (iVar31 < local_130)) && ((int)dVar59 <= iVar31 - iVar44))
                {
                  FUN_014328b0((double)iVar31 + DAT_023942d0,0);
                  if (local_e0 == '\0') {
                    if (local_e8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_e0 = '\0';
                  }
                  FUN_00d21140();
                  if (local_e8 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  iVar44 = iVar31;
                  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
        }
        else {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
          if ((bVar9) && (lVar52 != 0)) {
            FUN_00d50b20();
            bVar9 = true;
            goto LAB_014f1b30;
          }
          bVar9 = true;
          if (DAT_02390448 < *(double *)(local_60 + 0x20)) goto LAB_014f1b6e;
        }
        lVar43 = lVar43 + 1;
        lVar52 = local_60;
      } while (lVar43 < *(int *)((longlong)puVar33 + 0xc));
    }
    local_c8 = local_e8;
    iVar39 = 0;
    if (*(int *)((longlong)puVar34 + 0xc) < 2) {
      bVar30 = false;
      local_40 = (longlong *)0x0;
      bVar53 = false;
      unaff_RDI = (longlong *)0x0;
    }
    else {
      lVar54 = unaff_RSI + lVar48 * 0xc;
      bVar23 = false;
      local_f0 = 0;
      bVar22 = false;
      local_58 = 0;
      do {
        lVar35 = *(longlong *)(puVar34[2] + (longlong)iVar39 * 8);
        if (local_58 == lVar35) {
          if ((!bVar22) && (local_58 != 0)) {
            bVar22 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          if ((bVar22) && (local_58 != 0)) {
            FUN_00d50b20();
            bVar22 = true;
            local_58 = lVar35;
          }
          else {
            bVar22 = true;
            local_58 = lVar35;
          }
        }
        uVar50 = uVar7;
        if (iVar39 < *(int *)((longlong)puVar34 + 0xc) + -1) {
          uVar50 = (uint)*(double *)(*(longlong *)(puVar34[2] + 8 + (longlong)iVar39 * 8) + 0x10);
        }
        lVar35 = lVar54;
        FUN_015c35f0(lVar54,pfVar40 + (int)*(double *)(local_58 + 0x10),unaff_RSI + lVar48 * 8,
                     uVar50 - (int)*(double *)(local_58 + 0x10));
        *(double *)(local_58 + 0x18) = (double)local_17c;
        if (0 < iVar39) {
          plVar46 = (longlong *)*local_res10;
          pvVar32 = _pthread_getspecific((pthread_key_t)lVar35);
          if (pvVar32 != (void *)0x0) {
            plVar46 = (longlong *)*local_res10;
            lVar35 = FUN_00e8b990();
            if (lVar35 != 0) {
              plVar46 = (longlong *)plVar46[(ulonglong)(*(uint *)(lVar35 + 0x154) & 1) + 4];
            }
          }
          iVar44 = (**(code **)(*plVar46 + 0x3a8))
                             (CONCAT44((int)((ulonglong)*(double *)(local_58 + 0x18) >> 0x20),
                                       (float)*(double *)(local_58 + 0x18)));
          lVar35 = puVar34[2];
          lVar8 = *(longlong *)(lVar35 + (ulonglong)(iVar39 - 1) * 8);
          if (local_f0 == lVar8) {
            if ((!bVar23) && (local_f0 != 0)) {
              bVar23 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            if ((bVar23) && (local_f0 != 0)) {
              FUN_00d50b20();
              bVar23 = true;
              local_f0 = lVar8;
            }
            else {
              bVar23 = true;
              local_f0 = lVar8;
            }
          }
          plVar46 = (longlong *)*local_res10;
          pvVar32 = _pthread_getspecific((pthread_key_t)lVar35);
          if (pvVar32 != (void *)0x0) {
            plVar46 = (longlong *)*local_res10;
            lVar35 = FUN_00e8b990();
            if (lVar35 != 0) {
              plVar46 = (longlong *)plVar46[(ulonglong)(*(uint *)(lVar35 + 0x154) & 1) + 4];
            }
          }
          iVar55 = (**(code **)(*plVar46 + 0x3a8))
                             (CONCAT44((int)((ulonglong)*(double *)(local_f0 + 0x18) >> 0x20),
                                       (float)*(double *)(local_f0 + 0x18)));
          if (iVar44 == iVar55) {
            FUN_00d23620();
            iVar39 = iVar39 + -2;
          }
        }
        iVar39 = iVar39 + 1;
      } while (iVar39 < *(int *)((longlong)puVar34 + 0xc));
      if (*(int *)((longlong)puVar34 + 0xc) < 2) {
        bVar30 = false;
        local_40 = (longlong *)0x0;
        bVar53 = false;
        unaff_RDI = (longlong *)0x0;
      }
      else {
        (**(code **)(*unaff_RDI + 0x450))();
        if (0 < (int)uVar7) {
          uVar45 = 0;
          do {
            lVar48 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar45 * 8);
            if (local_98 == lVar48) {
              if ((!bVar19) && (local_98 != 0)) {
                bVar19 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar48 != 0) {
                FUN_00d50b00();
              }
              if ((bVar19) && (local_98 != 0)) {
                FUN_00d50b20();
                bVar19 = true;
                local_98 = lVar48;
              }
              else {
                bVar19 = true;
                local_98 = lVar48;
              }
            }
            *(float *)(local_98 + 0x18) = pfVar40[uVar45];
            uVar45 = uVar45 + 1;
          } while (uVar7 != uVar45);
        }
        lVar48 = *(longlong *)puVar34[2];
        if (local_58 == lVar48) {
          lVar48 = local_58;
          bVar30 = bVar22;
          if ((!bVar22) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar30 = true;
          }
        }
        else {
          if (lVar48 != 0) {
            FUN_00d50b00();
          }
          bVar30 = true;
          if ((bVar22) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar22 = bVar30;
        FUN_014bd3c0(CONCAT44((int)((ulonglong)*(double *)(lVar48 + 0x18) >> 0x20),
                              (float)*(double *)(lVar48 + 0x18)));
        FUN_00d50b00();
        if (*(int *)((longlong)puVar34 + 0xc) < 2) {
          bVar30 = false;
          local_40 = (longlong *)0x0;
          bVar53 = true;
        }
        else {
          lVar54 = 1;
          local_40 = (longlong *)0x0;
          bVar30 = false;
          plVar46 = unaff_RDI;
          local_58 = lVar48;
          bVar24 = true;
          do {
            lVar48 = *(longlong *)(puVar34[2] + lVar54 * 8);
            puVar38 = puVar34;
            if (local_58 == lVar48) {
              if (!bVar22) {
                bVar22 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar48 != 0) {
                FUN_00d50b00();
              }
              local_58 = lVar48;
              if (bVar22) {
                FUN_00d50b20();
                bVar22 = true;
              }
              else {
                bVar22 = true;
              }
            }
            pVar36 = (pthread_key_t)puVar38;
            pvVar32 = _pthread_getspecific(pVar36);
            if ((pvVar32 != (void *)0x0) && (lVar48 = FUN_00e8b990(), lVar48 != 0)) {
              pVar36 = (pthread_key_t)plVar46;
            }
            FUN_014f38a0();
            if (local_c8 == local_40) {
              if ((!bVar30) && (local_c8 != (longlong *)0x0)) {
                FUN_00d50b00();
                bVar30 = true;
              }
            }
            else {
              if (local_c8 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar30) && (local_40 != (longlong *)0x0)) {
                bVar30 = true;
                FUN_00d50b20();
                local_40 = local_c8;
              }
              else {
                bVar30 = true;
                local_40 = local_c8;
              }
            }
            pvVar32 = _pthread_getspecific(pVar36);
            if (pvVar32 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bd3c0(CONCAT44((int)((ulonglong)*(double *)(local_58 + 0x18) >> 0x20),
                                  (float)*(double *)(local_58 + 0x18)));
            FUN_00d21140();
            if (plVar46 == local_40) {
              unaff_RDI = plVar46;
              bVar53 = bVar24;
              if ((bVar30) && (!bVar24)) {
                if (plVar46 == (longlong *)0x0) {
                  bVar53 = false;
                }
                else {
                  FUN_00d50b00();
                  bVar53 = true;
                }
              }
            }
            else {
              if ((bVar30) && (local_40 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              unaff_RDI = local_40;
              bVar53 = bVar30;
              if ((bVar24) && (plVar46 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar54 = lVar54 + 1;
            plVar46 = unaff_RDI;
            local_c8 = local_40;
            bVar24 = bVar53;
          } while (lVar54 < *(int *)((longlong)puVar34 + 0xc));
        }
      }
      if ((bVar23) && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (bVar22) {
        FUN_00d50b20();
      }
    }
    if (bVar10 || bVar56) {
      FUN_00e83070();
    }
    if (param_4 == 0) {
      FUN_00e83070();
    }
    FUN_00d50b20();
    if (puVar33 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (plVar28 == (longlong *)0x0) goto LAB_014f2ca1;
  }
  FUN_00d50b20();
LAB_014f2ca1:
  if ((bVar18) && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar30) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar53) && (unaff_RDI != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar21) && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar19) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar25) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar20) && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @017e87c0 — 7158 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e8b75) */
/* WARNING: Removing unreachable block (ram,0x017e922d) */
/* WARNING: Removing unreachable block (ram,0x017e923c) */
/* WARNING: Removing unreachable block (ram,0x017e8b8e) */
/* WARNING: Removing unreachable block (ram,0x017e8b92) */
/* WARNING: Removing unreachable block (ram,0x017e8b9a) */
/* WARNING: Removing unreachable block (ram,0x017e9340) */
/* WARNING: Removing unreachable block (ram,0x017e934c) */
/* WARNING: Removing unreachable block (ram,0x017e9533) */
/* WARNING: Removing unreachable block (ram,0x017e9543) */
/* WARNING: Removing unreachable block (ram,0x017e8d73) */
/* WARNING: Removing unreachable block (ram,0x017e8d7f) */

void FUN_017e87c0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  pthread_key_t pVar7;
  int iVar8;
  void *pvVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int extraout_var;
  pthread_key_t pVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  int iVar16;
  longlong unaff_RDI;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Da_04;
  longlong local_1f8;
  char local_1f0;
  ulonglong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  ulonglong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  ulonglong local_140;
  char local_138;
  ulonglong local_130;
  char local_128;
  ulonglong local_120;
  char local_118;
  ulonglong local_110;
  char local_108;
  ulonglong local_100;
  char local_f8;
  ulonglong local_f0;
  char local_e8;
  ulonglong local_e0;
  char local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong *local_88;
  ulonglong local_80;
  ulonglong *local_78;
  undefined8 local_70;
  int local_68;
  char local_60 [8];
  ulonglong *local_58;
  ulonglong *local_50;
  ulonglong local_48;
  char local_40;
  char local_38 [8];
  
  FUN_017e1d40();
  if (((((char)local_80 == '\0') && (local_88 != (ulonglong *)0x0)) &&
      (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != (ulonglong *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = local_88;
  FUN_017e1dd0();
  local_c0 = local_88;
  if ((((char)local_80 == '\0') && (local_88 != (ulonglong *)0x0)) &&
     ((FUN_00d50b00(), (char)local_80 != '\0' && (local_88 != (ulonglong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar20 = (ulonglong)*(uint *)((longlong)local_88 + 0xc);
  puVar15 = local_88;
  if (0 < (int)*(uint *)((longlong)local_88 + 0xc)) {
    do {
      uVar21 = uVar20 - 1;
      lVar12 = *(longlong *)(puVar15[2] + (uVar21 & 0xffffffff) * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)puVar15[2]);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017ddb20();
      FUN_00d23310();
      local_a8 = CONCAT71(local_a8._1_7_,(char)local_80);
      puVar19 = &local_80;
      if ((char)local_80 == '\0') {
        puVar19 = &local_a8;
      }
      *(undefined1 *)puVar19 = 0;
      if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = local_88;
      local_60[0] = (char)local_a8 != '\0';
      puVar19 = (ulonglong *)local_60;
      puVar10 = &local_a8;
      if (!(bool)local_60[0]) {
        puVar10 = puVar19;
      }
      *(undefined1 *)puVar10 = 0;
      if (((char)local_a8 != '\0') && (local_88 != (ulonglong *)0x0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)puVar19;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      if (local_c8 != (ulonglong *)0x0) {
        pvVar9 = _pthread_getspecific(pVar7);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017e11f0();
        FUN_01543a70(0,FUN_017db4e0);
        if ((char)local_80 == '\0') {
          if (((local_88 != (ulonglong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
             (local_88 != (ulonglong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_80._0_1_ = '\0';
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23340();
        local_48 = CONCAT71(local_48._1_7_,(char)local_80);
        puVar19 = &local_48;
        puVar10 = &local_80;
        if ((char)local_80 == '\0') {
          puVar10 = puVar19;
        }
        *(undefined1 *)puVar10 = 0;
        if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)puVar19;
        local_b8 = lVar12;
        if (local_88 == (ulonglong *)0x0) {
          puVar19 = (ulonglong *)0x0;
        }
        else {
          puVar19 = (ulonglong *)local_38;
          if ((char)local_48 != '\0') {
            local_38[0] = '\x01';
            puVar19 = &local_48;
          }
          *(char *)puVar19 = '\0';
          puVar19 = local_88;
          if ((char)local_48 != '\0') {
            FUN_00d50b20();
          }
        }
        local_80._0_1_ = '\0';
        cVar4 = FUN_00d23d70();
        if (((char)local_80 != '\0') && (puVar19 != (ulonglong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00d23310();
          local_48 = CONCAT71(local_48._1_7_,(char)local_80);
          puVar10 = &local_48;
          puVar11 = &local_80;
          if ((char)local_80 == '\0') {
            puVar11 = puVar10;
          }
          *(undefined1 *)puVar11 = 0;
          if (((char)local_80 != '\0') && (puVar19 != (ulonglong *)0x0)) {
            FUN_00d50b20();
          }
          if (((local_38[0] == '\0') && (puVar19 != (ulonglong *)0x0)) && ((char)local_48 != '\0'))
          {
            local_38[0] = '\x01';
                    /* WARNING: Ignoring partial resolution of indirect */
            local_48._0_1_ = 0;
            puVar10 = puVar19;
          }
          pVar7 = (pthread_key_t)puVar10;
          if (((char)local_48 != '\0') && (puVar19 != (ulonglong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (local_88 != (ulonglong *)0x0) {
          FUN_00d50b20();
        }
        local_88 = puVar19;
        if (puVar19 != (ulonglong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar7);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017db850();
          local_d0 = uVar21;
          pvVar9 = _pthread_getspecific(pVar7);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = FUN_01507970();
          if ((local_48 >> 0x20 == 0) || ((int)local_c0[3] == 0)) {
            bVar5 = 0;
          }
          else {
            bVar5 = FUN_00e7c020();
            bVar5 = bVar5 ^ 1;
          }
          if (((char)local_80 != '\0') && (puVar19 != (ulonglong *)0x0)) {
            FUN_00d50b20();
          }
          uVar21 = local_d0;
          if (bVar5 != 0) {
            pvVar9 = _pthread_getspecific(pVar7);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_017dda00();
            if ((char)local_80 == '\0') {
              if (((puVar19 != (ulonglong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
                 (puVar19 != (ulonglong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_80._0_1_ = '\0';
            }
            uVar21 = local_d0;
            if (puVar19 != (ulonglong *)0x0) {
              local_50 = puVar19;
              pvVar9 = _pthread_getspecific(pVar7);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017dfc90();
              pVar7 = 0;
              FUN_01543a70();
              if ((char)local_80 == '\0') {
                if (((puVar19 != (ulonglong *)0x0) && (FUN_00d50b00(), (char)local_80 != '\0')) &&
                   (puVar19 != (ulonglong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_80._0_1_ = '\0';
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (puVar19 == (ulonglong *)0x0) {
                puVar15 = (ulonglong *)0x0;
                bVar2 = false;
              }
              else {
                local_80._0_1_ = '\0';
                local_88 = (ulonglong *)0x0;
                local_70 = 0xffffffff;
                local_68 = 0;
                bVar2 = false;
                puVar15 = (ulonglong *)0x0;
                local_b0 = puVar19;
                local_78 = puVar19;
                local_70._4_4_ = 0;
                while( true ) {
                  if (local_70._4_4_ != 0) {
                    if (local_70._4_4_ < 1) {
                      iVar16 = -local_70._4_4_;
                    }
                    else {
                      iVar16 = (int)local_70 - local_70._4_4_;
                      local_70 = CONCAT44(local_70._4_4_,iVar16);
                      FUN_00d23690();
                      local_68 = local_68 + local_70._4_4_;
                      iVar16 = 0;
                    }
                    local_70 = CONCAT44(iVar16,(int)local_70);
                  }
                  lVar12 = (longlong)(int)local_70;
                  iVar16 = (int)local_70 + 1;
                  local_70 = CONCAT44(local_70._4_4_,iVar16);
                  puVar10 = local_78;
                  if (*(int *)((longlong)local_78 + 0xc) <= iVar16) break;
                  puVar10 = (ulonglong *)local_78[2];
                  local_88 = (ulonglong *)puVar10[lVar12 + 1];
                  pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_017db850();
                  pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                  if (pvVar9 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  local_a8 = FUN_01507970();
                  if ((local_a8 >> 0x20 == 0) || ((int)local_c0[2] == 0)) {
                    bVar5 = 0;
                  }
                  else {
                    bVar5 = FUN_00e7c020();
                    bVar5 = bVar5 ^ 1;
                  }
                  if ((local_40 != '\0') && (local_48 != 0)) {
                    FUN_00d50b20();
                  }
                  if (bVar5 != 0) {
                    if (puVar15 != (ulonglong *)0x0) {
                      pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_017db850();
                      pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_01507970();
                      pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_017db850();
                      pvVar9 = _pthread_getspecific((pthread_key_t)puVar10);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      uVar21 = FUN_01507970();
                      cVar4 = '\0';
                      if ((extraout_var != 0) && (uVar21 >> 0x20 != 0)) {
                        cVar4 = FUN_00e7c020();
                      }
                      if ((local_a0 != '\0') && (local_a8 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_40 != '\0') && (local_48 != 0)) {
                        FUN_00d50b20();
                      }
                      pVar7 = (pthread_key_t)puVar10;
                      if (cVar4 != '\0') break;
                      pvVar9 = _pthread_getspecific(pVar7);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar16 = FUN_017dca70();
                      pvVar9 = _pthread_getspecific(pVar7);
                      if (pvVar9 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      iVar6 = FUN_017dca70();
                      if (iVar16 < iVar6) goto LAB_017e8e53;
                    }
                    if (local_88 == puVar15) {
                      if ((!bVar2) && (local_88 != (ulonglong *)0x0)) {
                        puVar10 = puVar15;
                        if ((char)local_80 != '\0') goto LAB_017e91ca;
                        bVar2 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      puVar10 = local_88;
                      if ((char)local_80 == '\0') {
                        if (local_88 != (ulonglong *)0x0) {
                          FUN_00d50b00();
                        }
                        if ((bVar2) && (puVar15 != (ulonglong *)0x0)) {
                          FUN_00d50b20();
                          puVar15 = local_88;
                          bVar2 = true;
                          goto LAB_017e8e53;
                        }
                      }
                      else {
                        if ((bVar2) && (puVar15 != (ulonglong *)0x0)) {
                          FUN_00d50b20();
                        }
LAB_017e91ca:
                        local_80._0_1_ = '\0';
                      }
                      puVar15 = puVar10;
                      bVar2 = true;
                    }
                  }
LAB_017e8e53:
                }
                pVar7 = (pthread_key_t)puVar10;
                FUN_01916320();
                FUN_00d50b20();
              }
              FUN_00d50b20();
              uVar21 = local_d0;
              if ((puVar15 != (ulonglong *)0x0) && (puVar19 != puVar15)) {
                if (local_38[0] != '\0') {
                  FUN_00d50b20();
                }
                local_38[0] = '\0';
                puVar19 = puVar15;
              }
              if ((bVar2) && (puVar15 != (ulonglong *)0x0)) {
                FUN_00d50b20();
              }
              puVar15 = local_58;
              if (puVar19 == (ulonglong *)0x0) goto LAB_017e9368;
            }
          }
          local_50 = puVar19;
          iVar16 = FUN_017e4480();
          if (iVar16 != -1000000) {
            pvVar9 = _pthread_getspecific(pVar7);
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (pthread_key_t)local_b8;
            }
            iVar16 = FUN_017dca70();
            pvVar9 = _pthread_getspecific(pVar7);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar6 = FUN_017dca70();
            uVar14 = (ulonglong)(iVar6 <= iVar16);
            uVar22 = *(undefined4 *)(unaff_RDI + 0x48 + uVar14 * 4);
            pvVar9 = _pthread_getspecific((uint)(iVar6 <= iVar16));
            pVar7 = (pthread_key_t)uVar14;
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (pthread_key_t)local_b8;
            }
            iVar16 = FUN_017dca70();
            pvVar9 = _pthread_getspecific(pVar7);
            if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              pVar7 = (pthread_key_t)local_50;
            }
            iVar6 = FUN_017dca70();
            if (iVar16 == iVar6) {
              FUN_017e4480();
              local_1f8 = local_b8;
              local_1f0 = '\0';
              FUN_017e4370(local_b8,&local_1f8);
              if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pVar13 = 0x17eb464;
              puVar19 = local_88;
              switch(uVar22) {
              case 0:
                pvVar9 = _pthread_getspecific(0x17eb464);
                if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                  pVar13 = (pthread_key_t)local_50;
                }
                FUN_017dca70();
                pvVar9 = _pthread_getspecific(pVar13);
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_017dca70();
                local_1e8 = local_50;
                local_1e0 = '\0';
                FUN_017e4480();
                local_1d8 = local_b8;
                local_1d0 = '\0';
                FUN_017e4370(local_b8,&local_1d8);
                uVar21 = local_d0;
                if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1e0 != '\0') && (local_1e8 != (ulonglong *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_017e9359;
              case 1:
                FUN_017e1a30();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_01794400(extraout_XMM0_Da_00,uVar22);
                local_b0 = local_88;
                puVar15 = local_88;
                if (local_88 == (ulonglong *)0x0) {
                  bVar3 = false;
                  local_b0 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                pVar7 = (pthread_key_t)puVar15;
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bc0();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_01794400(extraout_XMM0_Da_02,uVar22);
                if (local_88 == (ulonglong *)0x0) {
                  bVar2 = false;
                  puVar19 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 2:
                FUN_017e1a60();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_017936d0(extraout_XMM0_Da,uVar22);
                local_b0 = local_88;
                puVar15 = local_88;
                if (local_88 == (ulonglong *)0x0) {
                  bVar3 = false;
                  local_b0 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                pVar7 = (pthread_key_t)puVar15;
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                uVar22 = FUN_017e1d20();
                FUN_017936d0(extraout_XMM0_Da_01,uVar22);
                if (local_88 == (ulonglong *)0x0) {
                  bVar2 = false;
                  puVar19 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 3:
                FUN_017e1a60();
                uVar21 = local_48;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                FUN_017e1a30();
                uVar14 = local_a8;
                local_138 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_138 = '\x01';
                local_140 = uVar14;
                uVar22 = FUN_017e1d20();
                FUN_017921e0(uVar22,&local_140,0);
                local_b0 = local_88;
                if (local_88 == (ulonglong *)0x0) {
                  bVar3 = false;
                  local_b0 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if (uVar21 != 0) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                local_128 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_128 = '\x01';
                local_130 = uVar21;
                FUN_017e1bc0();
                uVar21 = local_a8;
                local_118 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_118 = '\x01';
                local_120 = uVar21;
                pVar7 = FUN_017e1d20();
                FUN_017921e0(pVar7,&local_120,0);
                if (local_88 == (ulonglong *)0x0) {
                  bVar2 = false;
                  puVar19 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 4:
                FUN_017e1a60();
                uVar21 = local_48;
                local_108 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_108 = '\x01';
                local_110 = uVar21;
                FUN_017e1a30();
                uVar21 = local_a8;
                local_f8 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_f8 = '\x01';
                local_100 = uVar21;
                uVar22 = FUN_017e1d20();
                FUN_017921e0(uVar22,&local_100,1);
                local_b0 = local_88;
                if (local_88 == (ulonglong *)0x0) {
                  bVar3 = false;
                  local_b0 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar3 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar3 = true;
                }
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                FUN_017e1bf0();
                uVar21 = local_48;
                local_e8 = 0;
                if (local_40 == '\0') {
                  if (local_48 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_e8 = '\x01';
                local_f0 = uVar21;
                FUN_017e1bc0();
                uVar21 = local_a8;
                local_d8 = 0;
                if (local_a0 == '\0') {
                  if (local_a8 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_a0 = '\0';
                }
                local_d8 = '\x01';
                local_e0 = uVar21;
                pVar7 = FUN_017e1d20();
                FUN_017921e0(pVar7,&local_e0,1);
                if (local_88 == (ulonglong *)0x0) {
                  bVar2 = false;
                  puVar19 = (ulonglong *)0x0;
                }
                else if ((char)local_80 == '\0') {
                  FUN_00d50b00();
                  bVar2 = true;
                  if (((char)local_80 != '\0') && (local_88 != (ulonglong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_80._0_1_ = '\0';
                  bVar2 = true;
                }
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                break;
              default:
                local_b0 = (ulonglong *)0x0;
                bVar3 = false;
                puVar19 = (ulonglong *)0x0;
                bVar2 = false;
              }
              pvVar9 = _pthread_getspecific(pVar7);
              if ((pvVar9 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
                pVar7 = (pthread_key_t)local_b8;
              }
              iVar16 = FUN_017dca70();
              pvVar9 = _pthread_getspecific(pVar7);
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_017dca70();
              iVar17 = 0;
              iVar6 = (uint)(iVar16 < iVar8) * 2 + -1;
              if (iVar16 != iVar8) {
                iVar17 = 0;
                do {
                  bVar5 = FUN_01716980((((uint)(iVar16 / 6 + (iVar16 >> 0x1f)) >> 1) -
                                       (iVar16 >> 0x1f)) * 0xc);
                  iVar17 = iVar17 + (uint)bVar5;
                  iVar16 = iVar16 + iVar6;
                } while (iVar8 != iVar16);
              }
              local_1c8 = local_50;
              local_1c0 = '\0';
              iVar16 = FUN_017e4480();
              uVar22 = extraout_XMM0_Da_03;
              if ((local_1c0 != '\0') && (local_1c8 != (ulonglong *)0x0)) {
                uVar22 = FUN_00d50b20();
              }
              if (0 < iVar17) {
                do {
                  iVar8 = iVar16 - iVar6 >> 0x1f;
                  bVar5 = FUN_01716980((((uint)((iVar16 - iVar6) / 6 + iVar8) >> 1) - iVar8) * 0xc);
                  iVar16 = iVar16 - iVar6;
                  iVar17 = iVar17 - (uint)bVar5;
                  uVar22 = extraout_XMM0_Da_04;
                } while (0 < iVar17);
              }
              local_1b8 = local_b8;
              local_1b0 = '\0';
              FUN_017e4370(uVar22,&local_1b8);
              puVar15 = local_58;
              uVar21 = local_d0;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                FUN_00d50b20();
              }
              if ((bVar2) && (puVar19 != (ulonglong *)0x0)) {
                FUN_00d50b20();
              }
              if ((bVar3) && (local_b0 != (ulonglong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
LAB_017e9359:
          if (local_38[0] != '\0') {
            FUN_00d50b20();
          }
        }
      }
LAB_017e9368:
      if ((local_60[0] != '\0') && (local_c8 != (ulonglong *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = 1 < (longlong)uVar20;
      uVar20 = uVar21;
    } while (bVar2);
  }
  if (*(int *)(unaff_RDI + 0x50) == 2) {
    uVar18 = *(uint *)((longlong)local_58 + 0xc);
    if (0 < (int)uVar18) {
      lVar12 = (ulonglong)uVar18 + 1;
      do {
        uVar18 = uVar18 - 1;
        lVar1 = *(longlong *)(local_58[2] + (ulonglong)uVar18 * 8);
        cVar4 = FUN_017e82b0();
        if (cVar4 != '\0') {
          local_1a0 = '\0';
          local_1a8 = lVar1;
          FUN_017e4670(DAT_02391078);
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar12 = lVar12 + -1;
      } while (1 < lVar12);
    }
  }
  if (local_c0 != (ulonglong *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (ulonglong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00eab35d — 5120 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_00eab35d(undefined8 *param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  longlong *plVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  dword *pdVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong lVar30;
  undefined8 *puVar31;
  int iVar32;
  uint uVar33;
  longlong *unaff_RSI;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  dword *unaff_RDI;
  size_t sVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  ulonglong uVar43;
  longlong lVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  longlong lVar52;
  undefined1 auVar53 [16];
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  dword *pdVar58;
  undefined8 *local_c8;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  undefined8 *local_a8;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 *local_88;
  undefined8 local_60;
  int local_58 [2];
  undefined8 local_48;
  int local_40;
  
  lVar4 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar25 = unaff_RDI[6];
  lVar21 = *(longlong *)(unaff_RDI + 2);
  uVar40 = unaff_RDI[0x44] - 3;
  uVar39 = (ulonglong)uVar40;
  if (2 < uVar40) {
    uVar39 = (ulonglong)(2 < unaff_RDI[0x44]) * 3;
  }
  local_b0 = 0xfff;
  if (unaff_RDI[0x45] < 0xfff) {
    local_b0 = unaff_RDI[0x45];
  }
  pdVar27 = (dword *)(ulonglong)local_b0;
  local_b4 = unaff_RDI[0xb];
  lVar5 = *(longlong *)(unaff_RDI + 0x2c);
  piVar6 = *(int **)(unaff_RDI + 0x2e);
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    pdVar58 = (dword *)0x0;
  }
  else {
    pdVar27 = *(dword **)(*(longlong *)(unaff_RDI + 0x48) + 0x20);
    pdVar58 = pdVar27;
  }
  local_98 = (longlong *)(unaff_RDI + 0x24);
  puVar19 = (undefined8 *)((longlong)param_1 + (param_3 - 8));
  uVar34 = param_3;
  FUN_00eadcaa(pdVar27,param_3 & 0xffffffff,param_3,param_4,pdVar58,0,0);
  plVar14 = local_98;
  sVar37 = (size_t)uVar34;
  iVar54 = unaff_RDI[0x3c];
  unaff_RDI[0x38] = 0;
  if (unaff_RDI[0x31] == 0) {
    if (param_3 < 9) {
      unaff_RDI[0x38] = 1;
      pdVar27 = unaff_RDI;
    }
    lVar44 = *(longlong *)(unaff_RDI + 0x3a);
    if (*(int *)(lVar44 + 0x808) == 2) {
      unaff_RDI[0x38] = 0;
      local_a0 = uVar39;
      if (iVar54 != 2) {
        unaff_RDI[0x30] = 0;
        lVar28 = 0;
        do {
          iVar54 = _HUF_getNbBitsFromCTable();
          iVar55 = 1 << (0xbU - (char)iVar54 & 0x1f);
          if (iVar54 == 0) {
            iVar55 = 1;
          }
          *(int *)(*(longlong *)(unaff_RDI + 0x24) + lVar28 * 4) = iVar55;
          unaff_RDI[0x30] = unaff_RDI[0x30] + iVar55;
          lVar28 = lVar28 + 1;
          lVar44 = *(longlong *)(unaff_RDI + 0x3a);
        } while (lVar28 != 0x100);
      }
      lVar28 = 2;
      if (*(short *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar44 + 0x28) != 0) {
        lVar28 = (longlong)
                 (1 << ((char)*(short *)(
                                        "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                        + lVar44 + 0x28) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x31] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x26);
      lVar30 = 0;
      do {
        iVar54 = 1 << (10U - (char)(*(int *)(
                                            "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                                            + lVar30 * 8 + lVar44 + lVar28 * 4 + 0x2c) + 0xffffU >>
                                   0x10) & 0x1f);
        if (*(int *)(
                    "/System/Library/Frameworks/ApplicationServices.framework/Versions/A/ApplicationServices"
                    + lVar30 * 8 + lVar44 + lVar28 * 4 + 0x2c) + 0xffffU < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x31] = unaff_RDI[0x31] + iVar54;
        lVar30 = lVar30 + 1;
      } while (lVar30 != 0x24);
      lVar28 = 2;
      if (*(short *)(lVar44 + 0xb14) != 0) {
        lVar28 = (longlong)(1 << ((char)*(short *)(lVar44 + 0xb14) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x32] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x28);
      lVar30 = 0;
      do {
        uVar24 = *(int *)(lVar44 + lVar28 * 4 + 0xb18 + lVar30 * 8) + 0xffff;
        iVar54 = 1 << (10U - (char)(uVar24 >> 0x10) & 0x1f);
        if (uVar24 < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x32] = unaff_RDI[0x32] + iVar54;
        lVar30 = lVar30 + 1;
      } while (lVar30 != 0x35);
      lVar28 = 2;
      if (*(short *)(lVar44 + 0x810) != 0) {
        lVar28 = (longlong)(1 << ((char)*(short *)(lVar44 + 0x810) - 1U & 0x1f)) + 1;
      }
      unaff_RDI[0x33] = 0;
      lVar52 = *(longlong *)(unaff_RDI + 0x2a);
      lVar30 = 0;
      do {
        uVar24 = *(int *)(lVar44 + lVar28 * 4 + 0x814 + lVar30 * 8) + 0xffff;
        iVar54 = 1 << (10U - (char)(uVar24 >> 0x10) & 0x1f);
        if (uVar24 < 0x10000) {
          iVar54 = 1;
        }
        *(int *)(lVar52 + lVar30 * 4) = iVar54;
        unaff_RDI[0x33] = unaff_RDI[0x33] + iVar54;
        lVar30 = lVar30 + 1;
        uVar39 = local_a0;
      } while (lVar30 != 0x20);
      goto LAB_00eaba19;
    }
    if (iVar54 != 2) {
      local_60 = CONCAT44(local_60._4_4_,0xff);
      _HIST_count_simple(param_3,param_1);
      lVar44 = *plVar14;
      lVar28 = 0;
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        iVar54 = ((*puVar1 >> 8) - (uint)(*puVar1 == 0)) + 1;
        iVar55 = ((puVar1[1] >> 8) - (uint)(puVar1[1] == 0)) + 1;
        iVar56 = ((puVar1[2] >> 8) - (uint)(puVar1[2] == 0)) + 1;
        iVar57 = ((puVar1[3] >> 8) - (uint)(puVar1[3] == 0)) + 1;
        auVar53._0_4_ = auVar46._0_4_ + iVar54;
        auVar53._4_4_ = auVar46._4_4_ + iVar55;
        auVar53._8_4_ = auVar46._8_4_ + iVar56;
        auVar53._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar53;
      } while (lVar28 != 0x100);
      auVar46 = phaddd(auVar53,auVar53);
      auVar46 = phaddd(auVar46,auVar46);
      unaff_RDI[0x30] = auVar46._0_4_;
      pdVar27 = &section_000000b8.reserved2;
    }
    _memcpy(pdVar27,&section_00000068.size,sVar37);
    unaff_RDI[0x31] = 0x28;
    _memset_pattern16(pdVar27,section_000000b8.segname + 0xc,sVar37);
    unaff_RDI[0x32] = 0x35;
    uVar10 = _UNK_023e22f8;
    puVar20 = *(undefined8 **)(unaff_RDI + 0x2a);
    puVar20[0xe] = _DAT_023e22f0;
    puVar20[0xf] = uVar10;
    uVar10 = _UNK_023e22e8;
    puVar20[0xc] = _DAT_023e22e0;
    puVar20[0xd] = uVar10;
    uVar10 = _UNK_023e22d8;
    puVar20[10] = _DAT_023e22d0;
    puVar20[0xb] = uVar10;
    uVar10 = _UNK_023e22c8;
    puVar20[8] = _DAT_023e22c0;
    puVar20[9] = uVar10;
    uVar10 = _UNK_023e22b8;
    puVar20[6] = _DAT_023e22b0;
    puVar20[7] = uVar10;
    uVar10 = _UNK_023e22a8;
    puVar20[4] = _DAT_023e22a0;
    puVar20[5] = uVar10;
    uVar10 = _UNK_023e2298;
    puVar20[2] = _DAT_023e2290;
    puVar20[3] = uVar10;
    uVar10 = _UNK_023e2288;
    *puVar20 = _DAT_023e2280;
    puVar20[1] = uVar10;
    uVar24 = 0x35;
  }
  else {
    if (iVar54 != 2) {
      lVar44 = *local_98;
      lVar28 = 0;
      auVar46 = (undefined1  [16])0x0;
      do {
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        auVar45._0_4_ = auVar46._0_4_ + *piVar23;
        auVar45._4_4_ = auVar46._4_4_ + piVar23[1];
        auVar45._8_4_ = auVar46._8_4_ + piVar23[2];
        auVar45._12_4_ = auVar46._12_4_ + piVar23[3];
        lVar28 = lVar28 + 4;
        auVar46 = auVar45;
      } while (lVar28 != 0x100);
      auVar46 = phaddd(auVar45,auVar45);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
      if (0x1fff < uVar24) {
        uVar35 = 0x1f;
        if (uVar24 >> 0xc != 0) {
          for (; (uVar24 >> 0xc) >> uVar35 == 0; uVar35 = uVar35 - 1) {
          }
        }
        lVar28 = 0;
        auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
        auVar46 = (undefined1  [16])0x0;
        do {
          puVar1 = (uint *)(lVar44 + lVar28 * 4);
          lVar52 = auVar53._0_8_;
          iVar54 = (*puVar1 >> lVar52) + 1;
          iVar55 = (puVar1[1] >> lVar52) + 1;
          iVar56 = (puVar1[2] >> lVar52) + 1;
          iVar57 = (puVar1[3] >> lVar52) + 1;
          auVar47._0_4_ = auVar46._0_4_ + iVar54;
          auVar47._4_4_ = auVar46._4_4_ + iVar55;
          auVar47._8_4_ = auVar46._8_4_ + iVar56;
          auVar47._12_4_ = auVar46._12_4_ + iVar57;
          piVar23 = (int *)(lVar44 + lVar28 * 4);
          *piVar23 = iVar54;
          piVar23[1] = iVar55;
          piVar23[2] = iVar56;
          piVar23[3] = iVar57;
          lVar28 = lVar28 + 4;
          auVar46 = auVar47;
        } while (lVar28 != 0x100);
        auVar46 = phaddd(auVar47,auVar47);
        auVar46 = phaddd(auVar46,auVar46);
        uVar24 = auVar46._0_4_;
      }
      unaff_RDI[0x30] = uVar24;
    }
    lVar44 = *(longlong *)(unaff_RDI + 0x26);
    lVar28 = 0;
    auVar46 = (undefined1  [16])0x0;
    do {
      piVar23 = (int *)(lVar44 + lVar28 * 4);
      auVar48._0_4_ = auVar46._0_4_ + *piVar23;
      auVar48._4_4_ = auVar46._4_4_ + piVar23[1];
      auVar48._8_4_ = auVar46._8_4_ + piVar23[2];
      auVar48._12_4_ = auVar46._12_4_ + piVar23[3];
      lVar28 = lVar28 + 4;
      auVar46 = auVar48;
    } while (lVar28 != 0x24);
    auVar46 = phaddd(auVar48,auVar48);
    auVar46 = phaddd(auVar46,auVar46);
    uVar24 = auVar46._0_4_;
    if (0xfff < uVar24) {
      uVar35 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> uVar35 == 0; uVar35 = uVar35 - 1) {
        }
      }
      lVar28 = 0;
      auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        lVar52 = auVar53._0_8_;
        iVar54 = (*puVar1 >> lVar52) + 1;
        iVar55 = (puVar1[1] >> lVar52) + 1;
        iVar56 = (puVar1[2] >> lVar52) + 1;
        iVar57 = (puVar1[3] >> lVar52) + 1;
        auVar49._0_4_ = auVar46._0_4_ + iVar54;
        auVar49._4_4_ = auVar46._4_4_ + iVar55;
        auVar49._8_4_ = auVar46._8_4_ + iVar56;
        auVar49._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar49;
      } while (lVar28 != 0x24);
      auVar46 = phaddd(auVar49,auVar49);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
    }
    unaff_RDI[0x31] = uVar24;
    lVar44 = *(longlong *)(unaff_RDI + 0x28);
    uVar24 = 0;
    lVar28 = 0;
    do {
      uVar24 = uVar24 + *(int *)(lVar44 + lVar28 * 4);
      lVar28 = lVar28 + 1;
    } while (lVar28 != 0x35);
    if (0xfff < uVar24) {
      iVar54 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> iVar54 == 0; iVar54 = iVar54 + -1) {
        }
      }
      lVar28 = 0;
      uVar24 = 0;
      do {
        uVar35 = *(uint *)(lVar44 + lVar28 * 4) >> ((byte)iVar54 & 0x1f);
        uVar24 = uVar24 + uVar35 + 1;
        *(uint *)(lVar44 + lVar28 * 4) = uVar35 + 1;
        lVar28 = lVar28 + 1;
      } while (lVar28 != 0x35);
    }
    unaff_RDI[0x32] = uVar24;
    lVar44 = *(longlong *)(unaff_RDI + 0x2a);
    lVar28 = 0;
    auVar46 = (undefined1  [16])0x0;
    do {
      piVar23 = (int *)(lVar44 + lVar28 * 4);
      auVar50._0_4_ = auVar46._0_4_ + *piVar23;
      auVar50._4_4_ = auVar46._4_4_ + piVar23[1];
      auVar50._8_4_ = auVar46._8_4_ + piVar23[2];
      auVar50._12_4_ = auVar46._12_4_ + piVar23[3];
      lVar28 = lVar28 + 4;
      auVar46 = auVar50;
    } while (lVar28 != 0x20);
    auVar46 = phaddd(auVar50,auVar50);
    auVar46 = phaddd(auVar46,auVar46);
    uVar24 = auVar46._0_4_;
    if (0xfff < uVar24) {
      uVar35 = 0x1f;
      if (uVar24 >> 0xb != 0) {
        for (; (uVar24 >> 0xb) >> uVar35 == 0; uVar35 = uVar35 - 1) {
        }
      }
      lVar28 = 0;
      auVar53 = pmovzxdq(ZEXT416(uVar35),ZEXT416(uVar35));
      auVar46 = (undefined1  [16])0x0;
      do {
        puVar1 = (uint *)(lVar44 + lVar28 * 4);
        lVar52 = auVar53._0_8_;
        iVar54 = (*puVar1 >> lVar52) + 1;
        iVar55 = (puVar1[1] >> lVar52) + 1;
        iVar56 = (puVar1[2] >> lVar52) + 1;
        iVar57 = (puVar1[3] >> lVar52) + 1;
        auVar51._0_4_ = auVar46._0_4_ + iVar54;
        auVar51._4_4_ = auVar46._4_4_ + iVar55;
        auVar51._8_4_ = auVar46._8_4_ + iVar56;
        auVar51._12_4_ = auVar46._12_4_ + iVar57;
        piVar23 = (int *)(lVar44 + lVar28 * 4);
        *piVar23 = iVar54;
        piVar23[1] = iVar55;
        piVar23[2] = iVar56;
        piVar23[3] = iVar57;
        lVar28 = lVar28 + 4;
        auVar46 = auVar51;
      } while (lVar28 != 0x20);
      auVar46 = phaddd(auVar51,auVar51);
      auVar46 = phaddd(auVar46,auVar46);
      uVar24 = auVar46._0_4_;
    }
  }
  unaff_RDI[0x33] = uVar24;
LAB_00eaba19:
  lVar44 = param_3 + (longlong)param_1;
  FUN_00eade89();
  puVar20 = (undefined8 *)
            ((ulonglong)((undefined8 *)((ulonglong)uVar25 + lVar21) == param_1) + (longlong)param_1)
  ;
  local_88 = param_1;
  if (puVar20 < puVar19) {
    uVar25 = 4 - (uVar40 == 0);
    pcVar7 = *(code **)(&DAT_025934f0 + uVar39 * 8 + (param_4 & 0xffffffff) * 0x20);
    local_a8 = (undefined8 *)(lVar44 + -0x20);
    local_ac = 0;
    local_c8 = param_1;
    do {
      iVar54 = (int)puVar20 - (int)local_c8;
      uVar15 = (*pcVar7)(puVar20,&local_b4,lVar44,param_2);
      local_60 = CONCAT44(local_60._4_4_,uVar15);
      local_88._0_4_ = (int)param_1;
      FUN_00eadd34((int)puVar20 - (int)local_88,&local_60);
      uVar39 = local_60;
      uVar34 = local_60 & 0xffffffff;
      if (uVar34 == 0) {
        puVar20 = (undefined8 *)((longlong)puVar20 + 1);
      }
      else {
        lVar21 = 0;
        do {
          iVar55 = *(int *)((longlong)param_2 + lVar21 * 4);
          piVar6[lVar21 + 4] = iVar55;
          lVar21 = lVar21 + 1;
        } while (lVar21 != 3);
        piVar6[2] = 0;
        piVar6[3] = iVar54;
        iVar55 = FUN_00eaddd8(iVar55,0);
        *piVar6 = iVar55;
        uVar39 = (ulonglong)((int)uVar39 - 1);
        uVar40 = *(uint *)(lVar5 + 4 + uVar39 * 8);
        if (local_b0 < uVar40) {
          uVar24 = *(uint *)(lVar5 + uVar39 * 8);
          uVar39 = 0;
LAB_00eac2d2:
          local_58[0] = piVar6[uVar39 * 7 + 6];
          local_60 = *(ulonglong *)(piVar6 + uVar39 * 7 + 4);
          uVar34 = local_60;
          if (uVar24 < 4) {
            uVar35 = (uVar24 + (iVar54 == 0)) - 1;
            if (uVar35 == 3) {
              iVar55 = (int)local_60 + -1;
LAB_00eac36b:
              piVar23 = local_58;
              if (1 < uVar35) {
                piVar23 = (int *)((longlong)&local_60 + 4);
              }
              local_58[0] = *piVar23;
              goto LAB_00eac382;
            }
            if (uVar35 != 0) {
              iVar55 = local_58[(ulonglong)uVar35 - 2];
              goto LAB_00eac36b;
            }
          }
          else {
            local_60._4_4_ = (int)(local_60 >> 0x20);
            iVar55 = uVar24 - 3;
            local_58[0] = local_60._4_4_;
LAB_00eac382:
            local_60 = CONCAT44((int)local_60,iVar55);
            uVar34 = local_60;
          }
          local_60 = uVar34;
          *param_2 = local_60;
          *(int *)(param_2 + 1) = local_58[0];
        }
        else {
          iVar56 = FUN_00eaddd8(uVar40,0);
          piVar23 = piVar6 + 7;
          lVar21 = (ulonglong)uVar25 - 1;
          do {
            *piVar23 = 0x40000000;
            piVar23 = piVar23 + 7;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          uVar43 = 0;
          uVar39 = (ulonglong)uVar25;
          do {
            uVar40 = *(uint *)(lVar5 + 4 + uVar43 * 8);
            if ((uint)uVar39 <= uVar40) {
              uVar24 = *(uint *)(lVar5 + uVar43 * 8);
              uVar35 = 0x1f;
              if (uVar24 != 0) {
                for (; uVar24 >> uVar35 == 0; uVar35 = uVar35 - 1) {
                }
              }
              iVar38 = uVar35 * 0x200 + -0x63cd;
              iVar57 = unaff_RDI[0x38];
              if (uVar35 < 0x14) {
                iVar38 = -0x3dcd;
              }
              do {
                iVar41 = (int)uVar39;
                if (iVar57 == 1) {
                  iVar32 = 0x1f;
                  if (iVar41 - 2U != 0) {
                    for (; iVar41 - 2U >> iVar32 == 0; iVar32 = iVar32 + -1) {
                    }
                  }
                  iVar32 = iVar32 * 0x100 + uVar35 * 0x100 + 0x1000;
                }
                else {
                  uVar33 = iVar41 - 3;
                  uVar18 = *(int *)(*(longlong *)(unaff_RDI + 0x2a) + (ulonglong)uVar35 * 4) + 1;
                  uVar42 = 0x1f;
                  if (uVar18 != 0) {
                    for (; uVar18 >> uVar42 == 0; uVar42 = uVar42 - 1) {
                    }
                  }
                  if (uVar33 < 0x80) {
                    uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar33];
                  }
                  else {
                    uVar18 = 0x1f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                      }
                    }
                    uVar18 = (uVar18 ^ 0xffffffe0) + 0x44;
                  }
                  uVar26 = *(int *)(*(longlong *)(unaff_RDI + 0x28) + (ulonglong)uVar18 * 4) + 1;
                  uVar33 = 0x1f;
                  if (uVar26 != 0) {
                    for (; uVar26 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                    }
                  }
                  iVar32 = unaff_RDI[0x37] + iVar38 + unaff_RDI[0x36] +
                           ((uVar42 ^ 0x1f) + uVar35 + (uint)(byte)(&DAT_023e2370)[uVar18] +
                           (uVar33 ^ 0x1f)) * 0x100;
                }
                piVar6[uVar39 * 7 + 2] = iVar41;
                piVar6[uVar39 * 7 + 1] = uVar24;
                piVar6[uVar39 * 7 + 3] = iVar54;
                piVar6[uVar39 * 7] = iVar32 + iVar56 + iVar55;
                uVar39 = (ulonglong)(iVar41 + 1U);
              } while (iVar41 + 1U <= uVar40);
            }
            uVar43 = uVar43 + 1;
          } while (uVar43 != uVar34);
          uVar24 = (int)uVar39 - 1;
          if (uVar24 == 0) {
            uVar35 = 0;
          }
          else {
            uVar39 = 1;
            do {
              uVar42 = (uint)uVar39;
              uVar34 = (ulonglong)(uVar42 - 1);
              local_a0 = uVar34 * 0x1c;
              iVar54 = 1;
              if (piVar6[uVar34 * 7 + 2] == 0) {
                iVar54 = piVar6[uVar34 * 7 + 3] + 1;
              }
              puVar29 = (undefined8 *)((longlong)puVar20 + uVar39);
              iVar55 = 0x800;
              uVar43 = uVar39;
              if ((unaff_RDI[0x3c] != 2) && (iVar55 = 0x600, unaff_RDI[0x38] != 1)) {
                uVar40 = unaff_RDI[0x34] - 0x100;
                uVar35 = *(int *)(*(longlong *)(unaff_RDI + 0x24) +
                                 (ulonglong)*(byte *)((longlong)puVar29 - 1) * 4) + 1;
                iVar55 = 0x1f;
                if (uVar35 != 0) {
                  for (; uVar35 >> iVar55 == 0; iVar55 = iVar55 + -1) {
                  }
                }
                uVar35 = iVar55 << 8;
                if (uVar40 < (uint)(iVar55 << 8)) {
                  uVar35 = uVar40;
                }
                uVar43 = (ulonglong)uVar35;
                iVar55 = unaff_RDI[0x34] - uVar35;
              }
              iVar56 = piVar6[uVar34 * 7];
              iVar57 = FUN_00eaddd8(uVar43,0);
              iVar38 = FUN_00eaddd8();
              iVar38 = (iVar57 + iVar55 + iVar56) - iVar38;
              piVar23 = piVar6 + uVar39 * 7 + 2;
              iVar55 = piVar6[uVar39 * 7];
              if (iVar55 < iVar38) {
                if (*piVar23 == 0) goto LAB_00eabea4;
                uVar34 = (ulonglong)(uVar42 - *piVar23);
                uVar40 = piVar6[uVar39 * 7 + 1];
                local_58[0] = piVar6[uVar34 * 7 + 6];
                local_60 = *(ulonglong *)(piVar6 + uVar34 * 7 + 4);
                uVar34 = local_60;
                if (uVar40 < 4) {
                  uVar40 = (uVar40 + (piVar6[uVar39 * 7 + 3] == 0)) - 1;
                  if (uVar40 == 3) {
                    iVar54 = (int)local_60 + -1;
LAB_00eabf11:
                    piVar22 = local_58;
                    if (1 < uVar40) {
                      piVar22 = (int *)((longlong)&local_60 + 4);
                    }
                    local_58[0] = *piVar22;
                    goto LAB_00eabf28;
                  }
                  if (uVar40 != 0) {
                    iVar54 = local_58[(ulonglong)uVar40 - 2];
                    goto LAB_00eabf11;
                  }
                }
                else {
                  local_60._4_4_ = (int)(local_60 >> 0x20);
                  iVar54 = uVar40 - 3;
                  local_58[0] = local_60._4_4_;
LAB_00eabf28:
                  local_60 = CONCAT44((int)local_60,iVar54);
                  uVar34 = local_60;
                }
                local_60 = uVar34;
                *(ulonglong *)(piVar6 + uVar39 * 7 + 4) = local_60;
                piVar6[uVar39 * 7 + 6] = local_58[0];
                bVar13 = false;
              }
              else {
                *piVar23 = 0;
                piVar6[uVar39 * 7 + 1] = 0;
                piVar6[uVar39 * 7 + 3] = iVar54;
                piVar6[uVar39 * 7] = iVar38;
                iVar55 = iVar38;
LAB_00eabea4:
                piVar6[uVar39 * 7 + 6] = *(int *)((longlong)piVar6 + local_a0 + 0x18);
                *(undefined8 *)(piVar6 + uVar39 * 7 + 4) =
                     *(undefined8 *)((longlong)piVar6 + local_a0 + 0x10);
                bVar13 = true;
              }
              if (puVar29 <= puVar19) {
                uVar35 = uVar42;
                if (uVar42 == uVar24) break;
                if (iVar55 + 0x80 < piVar6[(ulonglong)(uVar42 + 1) * 7]) {
                  iVar54 = 0;
                  if (bVar13) {
                    iVar54 = piVar6[uVar39 * 7 + 3];
                  }
                  uVar15 = FUN_00eaddd8(0,0);
                  local_a0 = CONCAT44(local_a0._4_4_,uVar15);
                  uVar15 = (*pcVar7)(puVar29,&local_b4,lVar44,piVar6 + uVar39 * 7 + 4);
                  local_60 = CONCAT44(local_60._4_4_,uVar15);
                  FUN_00eadd34((int)puVar29 - (int)local_88,&local_60,(int)lVar44 - (int)puVar29);
                  if ((local_60 & 0xffffffff) != 0) {
                    uVar40 = *(uint *)(lVar5 + 4 + (ulonglong)((int)local_60 - 1U) * 8);
                    if ((local_b0 < uVar40) || (0xfff < uVar40 + uVar42)) {
                      iVar55 = 0;
                      if (*piVar23 == 0) {
                        iVar55 = piVar6[uVar39 * 7 + 3];
                      }
                      uVar24 = *(uint *)(lVar5 + (ulonglong)((int)local_60 - 1U) * 8);
                      uVar35 = uVar42 - iVar55;
                      if (0x1000 < uVar42 - iVar55) {
                        uVar35 = 0;
                      }
                      uVar39 = (ulonglong)uVar35;
                      goto LAB_00eac2c7;
                    }
                    iVar55 = (int)local_a0 + iVar55;
                    local_a0 = CONCAT44(local_a0._4_4_,iVar55);
                    uVar39 = 0;
                    do {
                      uVar40 = uVar25;
                      if (uVar39 != 0) {
                        uVar40 = *(int *)(lVar5 + -4 + uVar39 * 8) + 1;
                      }
                      uVar35 = *(uint *)(lVar5 + 4 + uVar39 * 8);
                      if (uVar40 <= uVar35) {
                        uVar18 = *(uint *)(lVar5 + uVar39 * 8);
                        uVar33 = 0x1f;
                        if (uVar18 != 0) {
                          for (; uVar18 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                          }
                        }
                        uVar26 = uVar35 + uVar42;
                        iVar56 = unaff_RDI[0x38];
                        iVar57 = uVar33 * 0x200 + -0x63cd;
                        if (uVar33 < 0x14) {
                          iVar57 = -0x3dcd;
                        }
                        do {
                          if (iVar56 == 1) {
                            iVar38 = 0x1f;
                            if (uVar35 - 2 != 0) {
                              for (; uVar35 - 2 >> iVar38 == 0; iVar38 = iVar38 + -1) {
                              }
                            }
                            iVar38 = iVar38 * 0x100 + uVar33 * 0x100 + 0x1000;
                          }
                          else {
                            uVar16 = uVar35 - 3;
                            uVar36 = *(int *)(*(longlong *)(unaff_RDI + 0x2a) +
                                             (ulonglong)uVar33 * 4) + 1;
                            uVar9 = 0x1f;
                            if (uVar36 != 0) {
                              for (; uVar36 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                              }
                            }
                            if (uVar16 < 0x80) {
                              uVar16 = (uint)(byte)(&DAT_023e23b0)[uVar16];
                            }
                            else {
                              uVar36 = 0x1f;
                              if (uVar16 != 0) {
                                for (; uVar16 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                                }
                              }
                              uVar16 = (uVar36 ^ 0xffffffe0) + 0x44;
                            }
                            uVar17 = *(int *)(*(longlong *)(unaff_RDI + 0x28) +
                                             (ulonglong)uVar16 * 4) + 1;
                            uVar36 = 0x1f;
                            if (uVar17 != 0) {
                              for (; uVar17 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                              }
                            }
                            iVar38 = unaff_RDI[0x37] + iVar57 + unaff_RDI[0x36] +
                                     ((uVar9 ^ 0x1f) + uVar33 + (uint)(byte)(&DAT_023e2370)[uVar16]
                                     + (uVar36 ^ 0x1f)) * 0x100;
                          }
                          iVar38 = iVar38 + iVar55;
                          uVar34 = (ulonglong)(uVar42 + uVar35);
                          if (uVar24 < uVar42 + uVar35) {
                            lVar21 = (ulonglong)uVar26 - (ulonglong)uVar24;
                            piVar23 = piVar6 + 7 + (ulonglong)uVar24 * 7;
                            do {
                              *piVar23 = 0x40000000;
                              piVar23 = piVar23 + 7;
                              lVar21 = lVar21 + -1;
                              uVar24 = uVar26;
                            } while (lVar21 != 0);
                          }
                          else if (piVar6[uVar34 * 7] <= iVar38) break;
                          piVar6[uVar34 * 7 + 2] = uVar35;
                          piVar6[uVar34 * 7 + 1] = uVar18;
                          piVar6[uVar34 * 7 + 3] = iVar54;
                          piVar6[uVar34 * 7] = iVar38;
                          uVar35 = uVar35 - 1;
                          uVar26 = uVar26 - 1;
                        } while (uVar40 <= uVar35);
                      }
                      uVar39 = uVar39 + 1;
                    } while (uVar39 != (local_60 & 0xffffffff));
                  }
                }
              }
              uVar39 = (ulonglong)(uVar42 + 1);
              uVar35 = uVar24;
            } while (uVar42 + 1 <= uVar24);
          }
          uVar39 = (ulonglong)uVar35;
          local_ac = piVar6[uVar39 * 7];
          uVar24 = piVar6[uVar39 * 7 + 1];
          uVar40 = piVar6[uVar39 * 7 + 2];
          iVar54 = piVar6[uVar39 * 7 + 3];
          local_40 = piVar6[uVar39 * 7 + 6];
          local_48 = *(undefined8 *)(piVar6 + uVar39 * 7 + 4);
          uVar39 = (ulonglong)(uVar35 - (iVar54 + uVar40));
          if (uVar35 < iVar54 + uVar40) {
            uVar39 = 0;
          }
LAB_00eac2c7:
          if (uVar40 != 0) goto LAB_00eac2d2;
          *(int *)(param_2 + 1) = piVar6[uVar39 * 7 + 6];
          *param_2 = *(ulonglong *)(piVar6 + uVar39 * 7 + 4);
          uVar40 = 0;
        }
        uVar35 = (int)uVar39 + 1;
        uVar34 = (ulonglong)uVar35;
        piVar6[uVar34 * 7] = local_ac;
        piVar6[uVar34 * 7 + 1] = uVar24;
        piVar6[uVar34 * 7 + 2] = uVar40;
        piVar6[uVar34 * 7 + 3] = iVar54;
        *(undefined8 *)(piVar6 + uVar34 * 7 + 4) = local_48;
        piVar6[uVar34 * 7 + 6] = local_40;
        uVar34 = uVar39;
        if ((int)uVar39 == 0) {
          uVar43 = 1;
          goto LAB_00eac447;
        }
        do {
          uVar43 = uVar34;
          uVar40 = (uint)uVar39;
          uVar24 = piVar6[uVar39 * 7 + 3] + piVar6[uVar39 * 7 + 2];
          uVar42 = (uint)uVar43;
          uVar10 = *(undefined8 *)(piVar6 + uVar39 * 7);
          uVar11 = *(undefined8 *)(piVar6 + uVar39 * 7 + 2);
          uVar12 = *(undefined8 *)(piVar6 + uVar39 * 7 + 3 + 2);
          *(undefined8 *)(piVar6 + uVar43 * 7 + 3) = *(undefined8 *)(piVar6 + uVar39 * 7 + 3);
          *(undefined8 *)(piVar6 + uVar43 * 7 + 3 + 2) = uVar12;
          *(undefined8 *)(piVar6 + uVar43 * 7) = uVar10;
          *(undefined8 *)(piVar6 + uVar43 * 7 + 2) = uVar11;
          uVar39 = (ulonglong)(uVar40 - uVar24);
          if (uVar24 > uVar40) {
            uVar39 = 0;
          }
          uVar34 = (ulonglong)(uVar42 - 1);
        } while (uVar24 <= uVar40 && uVar40 - uVar24 != 0);
        while (uVar42 <= uVar35) {
LAB_00eac447:
          uVar40 = piVar6[uVar43 * 7 + 3];
          uVar39 = (ulonglong)uVar40;
          uVar24 = piVar6[uVar43 * 7 + 2];
          if ((ulonglong)uVar24 == 0) {
            puVar20 = (undefined8 *)(uVar39 + (longlong)local_c8);
          }
          else {
            uVar42 = piVar6[uVar43 * 7 + 1];
            if (unaff_RDI[0x3c] != 2) {
              if (uVar39 != 0) {
                lVar21 = *local_98;
                uVar34 = 0;
                do {
                  piVar23 = (int *)(lVar21 + (ulonglong)*(byte *)((longlong)local_c8 + uVar34) * 4);
                  *piVar23 = *piVar23 + 2;
                  uVar34 = uVar34 + 1;
                } while (uVar39 != uVar34);
              }
              unaff_RDI[0x30] = unaff_RDI[0x30] + uVar40 * 2;
            }
            if (uVar40 < 0x40) {
              uVar18 = (uint)(byte)(&DAT_023e2330)[uVar39];
            }
            else {
              uVar18 = 0x1f;
              if (uVar40 != 0) {
                for (; uVar40 >> uVar18 == 0; uVar18 = uVar18 - 1) {
                }
              }
              uVar18 = (uVar18 ^ 0xffffffe0) + 0x33;
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x26) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x31] = unaff_RDI[0x31] + 1;
            uVar18 = 0x1f;
            if (uVar42 != 0) {
              for (; uVar42 >> uVar18 == 0; uVar18 = uVar18 - 1) {
              }
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x2a) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x33] = unaff_RDI[0x33] + 1;
            uVar18 = uVar24 - 3;
            if (uVar18 < 0x80) {
              uVar18 = (uint)(byte)(&DAT_023e23b0)[uVar18];
            }
            else {
              uVar33 = 0x1f;
              if (uVar18 != 0) {
                for (; uVar18 >> uVar33 == 0; uVar33 = uVar33 - 1) {
                }
              }
              uVar18 = (uVar33 ^ 0xffffffe0) + 0x44;
            }
            piVar23 = (int *)(*(longlong *)(unaff_RDI + 0x28) + (ulonglong)uVar18 * 4);
            *piVar23 = *piVar23 + 1;
            unaff_RDI[0x32] = unaff_RDI[0x32] + 1;
            puVar20 = (undefined8 *)((longlong)local_c8 + uVar39);
            if (local_a8 < puVar20) {
              puVar8 = (undefined8 *)unaff_RSI[3];
              puVar29 = puVar8;
              puVar31 = local_c8;
              if (local_c8 <= local_a8) {
                puVar29 = (undefined8 *)
                          ((longlong)puVar8 + ((longlong)local_a8 - (longlong)local_c8));
                uVar10 = local_c8[1];
                *puVar8 = *local_c8;
                puVar8[1] = uVar10;
                puVar31 = local_a8;
                if (0x10 < (longlong)local_a8 - (longlong)local_c8) {
                  lVar21 = 0x10;
                  do {
                    uVar10 = ((undefined8 *)((longlong)local_c8 + lVar21))[1];
                    puVar2 = (undefined8 *)((longlong)puVar8 + lVar21);
                    *puVar2 = *(undefined8 *)((longlong)local_c8 + lVar21);
                    puVar2[1] = uVar10;
                    puVar3 = (undefined8 *)((longlong)local_c8 + lVar21 + 0x10);
                    uVar10 = puVar3[1];
                    puVar2[2] = *puVar3;
                    puVar2[3] = uVar10;
                    lVar21 = lVar21 + 0x20;
                  } while (puVar2 + 4 < puVar29);
                }
              }
              if (puVar31 < puVar20) {
                lVar21 = 0;
                do {
                  *(undefined1 *)((longlong)puVar29 + lVar21) =
                       *(undefined1 *)((longlong)puVar31 + lVar21);
                  lVar21 = lVar21 + 1;
                } while ((longlong)puVar20 - (longlong)puVar31 != lVar21);
              }
LAB_00eac613:
              unaff_RSI[3] = unaff_RSI[3] + uVar39;
              if (0xffff < uVar40) {
                *(undefined4 *)(unaff_RSI + 9) = 1;
                *(int *)((longlong)unaff_RSI + 0x4c) =
                     (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
              }
            }
            else {
              puVar20 = (undefined8 *)unaff_RSI[3];
              uVar10 = local_c8[1];
              *puVar20 = *local_c8;
              puVar20[1] = uVar10;
              lVar21 = unaff_RSI[3];
              if (uVar40 < 0x11) {
                unaff_RSI[3] = lVar21 + uVar39;
              }
              else {
                uVar10 = local_c8[3];
                *(undefined8 *)(lVar21 + 0x10) = local_c8[2];
                *(undefined8 *)(lVar21 + 0x18) = uVar10;
                if (0x20 < uVar40) {
                  lVar28 = 0;
                  do {
                    puVar29 = (undefined8 *)((longlong)local_c8 + lVar28 + 0x20);
                    uVar10 = puVar29[1];
                    puVar20 = (undefined8 *)(lVar21 + 0x20 + lVar28);
                    *puVar20 = *puVar29;
                    puVar20[1] = uVar10;
                    puVar29 = (undefined8 *)((longlong)local_c8 + lVar28 + 0x30);
                    uVar10 = puVar29[1];
                    puVar20[2] = *puVar29;
                    puVar20[3] = uVar10;
                    lVar28 = lVar28 + 0x20;
                  } while (puVar20 + 4 < (undefined8 *)(lVar21 + uVar39));
                  goto LAB_00eac613;
                }
                unaff_RSI[3] = unaff_RSI[3] + uVar39;
              }
            }
            puVar1 = (uint *)unaff_RSI[1];
            *(short *)(puVar1 + 1) = (short)uVar40;
            *puVar1 = uVar42;
            uVar39 = (ulonglong)uVar24 - 3;
            if (0xffff < uVar39) {
              *(undefined4 *)(unaff_RSI + 9) = 2;
              *(int *)((longlong)unaff_RSI + 0x4c) =
                   (int)((ulonglong)((longlong)puVar1 - *unaff_RSI) >> 3);
            }
            *(short *)((longlong)puVar1 + 6) = (short)uVar39;
            unaff_RSI[1] = (longlong)(puVar1 + 2);
            local_c8 = (undefined8 *)((longlong)local_c8 + (ulonglong)(uVar24 + uVar40));
            puVar20 = local_c8;
          }
          uVar42 = (int)uVar43 + 1;
          uVar43 = (ulonglong)uVar42;
        }
        FUN_00eade89();
      }
    } while (puVar20 < puVar19);
    local_88 = local_c8;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar4) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar44 - (longlong)local_88;
}




// ============================================================
// @017e22f0 — 4758 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e2d10) */
/* WARNING: Removing unreachable block (ram,0x017e2d20) */
/* WARNING: Removing unreachable block (ram,0x017e2cb4) */
/* WARNING: Removing unreachable block (ram,0x017e2cc4) */
/* WARNING: Removing unreachable block (ram,0x017e2d94) */
/* WARNING: Removing unreachable block (ram,0x017e2da4) */

void FUN_017e22f0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  undefined8 *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  undefined8 *local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  undefined4 local_34;
  
  local_40 = param_1;
  local_34 = param_3;
  if ((DAT_028af4e8 == (undefined8 *)0x0) || (DAT_028af4f1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af4e8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af4e8 == (undefined8 *)0x0;
      DAT_028af4e8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af4e8 != (undefined8 *)0x0)) && (DAT_028af4f0 == '\0')
         ) {
        DAT_028af4f0 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 5;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 7;
      puVar4 = DAT_028af4e8;
      iVar1 = *(int *)(DAT_028af4e8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af4f1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af4f8 == (undefined8 *)0x0) || (DAT_028af501 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af4f8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af4f8 == (undefined8 *)0x0;
      DAT_028af4f8 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af4f8 != (undefined8 *)0x0)) && (DAT_028af500 == '\0')
         ) {
        DAT_028af500 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 4;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 7;
      puVar4 = DAT_028af4f8;
      iVar1 = *(int *)(DAT_028af4f8 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 9;
      DAT_028af501 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af501 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af508 == (undefined8 *)0x0) || (DAT_028af511 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af508 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af508 == (undefined8 *)0x0;
      DAT_028af508 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af508 != (undefined8 *)0x0)) && (DAT_028af510 == '\0')
         ) {
        DAT_028af510 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 6;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af508;
      iVar1 = *(int *)(DAT_028af508 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af511 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af511 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af518 == (undefined8 *)0x0) || (DAT_028af521 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af518 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af518 == (undefined8 *)0x0;
      DAT_028af518 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af518 != (undefined8 *)0x0)) && (DAT_028af520 == '\0')
         ) {
        DAT_028af520 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 5;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af518;
      iVar1 = *(int *)(DAT_028af518 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af521 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af521 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af528 == (undefined8 *)0x0) || (DAT_028af531 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af528 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af528 == (undefined8 *)0x0;
      DAT_028af528 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af528 != (undefined8 *)0x0)) && (DAT_028af530 == '\0')
         ) {
        DAT_028af530 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 4;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 8;
      puVar4 = DAT_028af528;
      iVar1 = *(int *)(DAT_028af528 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af531 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af531 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028af538 == (undefined8 *)0x0) || (DAT_028af541 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af538 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar6 = DAT_028af538 == (undefined8 *)0x0;
      DAT_028af538 = puVar4;
      if (((bVar6) || (FUN_00d50b20(), DAT_028af538 != (undefined8 *)0x0)) && (DAT_028af540 == '\0')
         ) {
        DAT_028af540 = '\x01';
        FUN_00e8cb90();
      }
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 0;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 2;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 3;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 6;
      puVar4 = DAT_028af538;
      iVar1 = *(int *)(DAT_028af538 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar4[2] + (longlong)iVar1) = 10;
      DAT_028af541 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af541 = '\x01';
      FUN_00e8cb70();
    }
  }
  switch(unaff_ESI) {
  case 0:
    FUN_01794400(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 1:
    FUN_017936d0(&switchD_017e2c7e::switchdataD_017e3c28,local_34);
    break;
  case 2:
    local_170 = *local_40;
    local_168 = '\0';
    FUN_017921e0(local_34,&local_170,0);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_160 = *param_2;
    local_158 = '\0';
    local_150 = *local_40;
    local_148 = '\0';
    FUN_017921e0(local_34,&local_150,1);
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 4:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_130 = *local_40;
      local_128 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        if (cVar3 == '\0') {
          cVar3 = FUN_01716be0();
          plVar5 = (longlong *)&DAT_028af4f8;
          if (cVar3 == '\0') {
            cVar3 = FUN_01716c00();
            if (cVar3 == '\0') {
              FUN_01715480();
              cVar3 = FUN_01716980();
              if (cVar3 == '\0') {
                FUN_01715480();
                FUN_01716980();
                plVar5 = (longlong *)&DAT_028af4e8;
              }
            }
            else {
              plVar5 = (longlong *)&DAT_028af4e8;
            }
          }
          FUN_01715620();
          local_100 = *plVar5;
          if (local_100 != 0) {
            FUN_00d50b00();
          }
          local_f8 = '\x01';
          FUN_017167a0();
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01715620();
          local_110 = DAT_028af508;
          if (DAT_028af508 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_108 = '\x01';
          FUN_017167a0();
          if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_120 = DAT_028af518;
        if (DAT_028af518 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_118 = '\x01';
        FUN_017167a0();
        if ((local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_140 = DAT_028af4f8;
      if (DAT_028af4f8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_017167a0();
      if ((local_138 != '\0') && (local_140 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 5:
    cVar3 = FUN_017176e0();
    if (cVar3 == '\0') {
      local_e0 = *local_40;
      local_d8 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        cVar3 = FUN_01717530();
        FUN_01715620();
        puVar4 = DAT_028af508;
        local_b0 = DAT_028af4e8;
        if (cVar3 == '\0') {
          if (DAT_028af4e8 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_a8 = '\x01';
          FUN_017167a0();
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_028af508 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          local_c0 = puVar4;
          local_b8 = '\x01';
          FUN_017167a0();
          if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01715620();
        local_d0 = DAT_028af518;
        if (DAT_028af518 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_c8 = '\x01';
        FUN_017167a0();
        if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01715620();
      local_f0 = DAT_028af4e8;
      if (DAT_028af4e8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      FUN_017167a0();
      if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 6:
    cVar3 = FUN_017176e0();
    if (cVar3 != '\0') {
      FUN_01715620();
      local_a0 = DAT_028af528;
      if (DAT_028af528 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      FUN_017167a0();
      if (local_98 == '\0') {
        return;
      }
      if (local_a0 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01717530();
    if (cVar3 != '\0') {
      local_90 = *local_40;
      local_88 = '\0';
      cVar3 = FUN_017175c0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      FUN_01715620();
      puVar4 = DAT_028af538;
      local_70 = DAT_028af508;
      if (cVar3 != '\0') {
        if (DAT_028af538 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        local_80 = puVar4;
        local_78 = '\x01';
        FUN_017167a0();
        if (local_78 == '\0') {
          return;
        }
        if (local_80 == (undefined8 *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      if (DAT_028af508 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      FUN_017167a0();
      if (local_68 == '\0') {
        return;
      }
      if (local_70 == (undefined8 *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_01716be0();
    bVar6 = true;
    if (cVar3 == '\0') {
      cVar3 = FUN_01716c00();
      if (cVar3 == '\0') {
        FUN_01715480();
        cVar3 = FUN_01716980();
        if (cVar3 != '\0') goto LAB_017e31ef;
        FUN_01715480();
        FUN_01716980();
      }
      bVar6 = false;
    }
LAB_017e31ef:
    FUN_01715620();
    local_48 = 0;
    plVar5 = (longlong *)&DAT_028af4e8;
    if (bVar6) {
      plVar5 = (longlong *)&DAT_028af4f8;
    }
    lVar2 = *plVar5;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar2;
    FUN_017167a0();
    lVar2 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      if ((~*(ulonglong *)(*param_2 + 0x18) & 0xf0000000000) != 0) {
        FUN_017163c0();
        FUN_01715d40();
      }
    }
    else if ((~*(ulonglong *)(*param_2 + 0x18) & 0xf00000000000) != 0) {
      FUN_017163c0();
      FUN_01715d40();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    break;
  default:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  return;
}




// ============================================================
// @00fc6310 — 3424 bytes
// ============================================================

void FUN_00fc6310(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint3 *unaff_RDI;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  
  uVar17 = (ulonglong)((uint6)*(uint3 *)((longlong)unaff_RDI + 0x2a) & 0x1fffff);
  uVar22 = (ulonglong)(*(uint *)((longlong)unaff_RDI + 0x39) >> 6 & 0x1fffff);
  uVar4 = (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x37) >> 1 & 0x1fffff);
  lVar6 = uVar4 * -0xa6f7d + (ulonglong)(*(uint *)(unaff_RDI + 9) >> 6 & 0x1fffff) +
          uVar22 * 0x215d1;
  uVar32 = (ulonglong)(*(uint *)(unaff_RDI + 0xd) >> 4 & 0x1fffff);
  uVar12 = (ulonglong)(*(uint *)((longlong)unaff_RDI + 0x31) >> 7 & 0x1fffff);
  lVar18 = uVar12 * -0xa6f7d + (ulonglong)(*(uint *)((longlong)unaff_RDI + 0x1f) >> 4 & 0x1fffff) +
           uVar32 * 0x215d1 + uVar4 * -0xf39ad + uVar22 * 0x9fb67;
  uVar29 = (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x2f) >> 2 & 0x1fffff);
  lVar10 = uVar29 * 0x9fb67 + (ulonglong)((uint6)*(uint3 *)((longlong)unaff_RDI + 0x15) & 0x1fffff)
           + uVar12 * 0x72d18;
  lVar2 = uVar29 * 0x215d1 + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x1a) >> 2 & 0x1fffff) +
          uVar12 * -0xf39ad + uVar32 * 0x9fb67 + uVar4 * 0x72d18;
  uVar15 = (ulonglong)(*(uint *)((longlong)unaff_RDI + 0xf) >> 6 & 0x1fffff);
  uVar26 = uVar29 * 0xa2c13 + uVar15 + 0x100000;
  lVar23 = (uVar26 >> 0x15) +
           uVar29 * 0x72d18 + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x12) >> 3);
  uVar40 = uVar32 * 0xa2c13 + lVar10 + 0x100000;
  lVar37 = uVar29 * -0xf39ad + (ulonglong)(*(uint *)((longlong)unaff_RDI + 0x17) >> 5 & 0x1fffff) +
           uVar12 * 0x9fb67 + uVar32 * 0x72d18 + uVar4 * 0xa2c13;
  uVar11 = uVar22 * 0xa2c13 + lVar2 + 0x100000;
  uVar28 = (ulonglong)(*(uint *)(unaff_RDI + 0xf) >> 3);
  lVar30 = uVar29 * -0xa6f7d + (ulonglong)(*(uint *)(unaff_RDI + 7) >> 7 & 0x1fffff) +
           uVar12 * 0x215d1 + uVar32 * -0xf39ad + uVar4 * 0x9fb67 + uVar22 * 0x72d18 +
           uVar28 * 0xa2c13;
  uVar3 = uVar28 * 0x72d18 + lVar18 + 0x100000;
  lVar33 = uVar32 * -0xa6f7d + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x22) >> 1 & 0x1fffff) +
           uVar4 * 0x215d1 + uVar22 * -0xf39ad + uVar28 * 0x9fb67;
  uVar4 = uVar28 * -0xf39ad + lVar6 + 0x100000;
  lVar8 = uVar22 * -0xa6f7d + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0x27) >> 3) +
          uVar28 * 0x215d1;
  uVar5 = uVar28 * -0xa6f7d + uVar17 + 0x100000;
  lVar27 = ((longlong)uVar5 >> 0x15) + (ulonglong)(*(uint *)(unaff_RDI + 0xb) >> 5 & 0x1fffff);
  uVar7 = uVar12 * 0xa2c13 + lVar23 + 0x100000;
  uVar13 = uVar40 >> 0x15;
  uVar24 = uVar13 + lVar37 + 0x100000;
  lVar2 = (((longlong)uVar24 >> 0x15) + lVar2 + uVar22 * 0xa2c13) - (uVar11 & 0xffffffffffe00000);
  lVar14 = (longlong)uVar11 >> 0x15;
  uVar11 = lVar14 + lVar30 + 0x100000;
  lVar31 = ((longlong)uVar11 >> 0x15) + ((lVar18 + uVar28 * 0x72d18) - (uVar3 & 0xffffffffffe00000))
  ;
  lVar19 = (lVar30 + lVar14) - (uVar11 & 0xffffffffffe00000);
  lVar14 = (longlong)uVar3 >> 0x15;
  uVar3 = lVar33 + lVar14 + 0x100000;
  lVar18 = ((longlong)uVar3 >> 0x15) + ((lVar6 + uVar28 * -0xf39ad) - (uVar4 & 0xffffffffffe00000));
  lVar6 = (lVar33 + lVar14) - (uVar3 & 0xffffffffffe00000);
  lVar33 = (longlong)uVar4 >> 0x15;
  uVar3 = lVar33 + lVar8 + 0x100000;
  lVar14 = ((longlong)uVar3 >> 0x15) + ((uVar28 * -0xa6f7d + uVar17) - (uVar5 & 0xffffffffffe00000))
  ;
  lVar35 = (lVar8 + lVar33) - (uVar3 & 0xffffffffffe00000);
  lVar8 = lVar14 * -0xa6f7d + lVar27 * 0x215d1 + ((lVar37 + uVar13) - (uVar24 & 0xffffffffffe00000))
  ;
  lVar20 = lVar14 * 0x215d1 +
           lVar27 * -0xf39ad +
           (((uVar7 >> 0x15) + lVar10 + uVar32 * 0xa2c13) - (uVar40 & 0xffffffffffe00000));
  lVar34 = lVar18 * 0x215d1 +
           lVar35 * -0xf39ad +
           lVar14 * 0x9fb67 +
           lVar27 * 0x72d18 + ((uVar29 * 0xa2c13 + uVar15) - (uVar26 & 0xffffffffffe00000));
  lVar33 = lVar18 * -0xa6f7d +
           lVar35 * 0x215d1 +
           lVar14 * -0xf39ad +
           lVar27 * 0x9fb67 + ((lVar23 + uVar12 * 0xa2c13) - (uVar7 & 0xffffffffffe00000));
  lVar30 = lVar31 * 0x9fb67 + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 5) >> 2 & 0x1fffff) +
           lVar18 * 0xa2c13;
  lVar10 = lVar31 * 0x215d1 +
           lVar35 * 0x72d18 +
           lVar14 * 0xa2c13 + (ulonglong)(*(uint *)((longlong)unaff_RDI + 10) >> 4 & 0x1fffff) +
           lVar18 * 0x9fb67;
  uVar12 = lVar31 * 0xa2c13 + (ulonglong)((uint6)*unaff_RDI & 0x1fffff) + 0x100000;
  lVar41 = lVar31 * 0x72d18 + (ulonglong)(*(uint *)((longlong)unaff_RDI + 2) >> 5 & 0x1fffff) +
           lVar6 * 0xa2c13;
  uVar3 = lVar6 * 0x72d18 + lVar30 + 0x100000;
  lVar36 = lVar31 * -0xf39ad +
           lVar35 * 0xa2c13 + (ulonglong)(*(uint *)((longlong)unaff_RDI + 7) >> 7 & 0x1fffff) +
           lVar18 * 0x72d18 + lVar6 * 0x9fb67;
  uVar4 = lVar6 * -0xf39ad + lVar10 + 0x100000;
  lVar21 = lVar31 * -0xa6f7d +
           lVar35 * 0x9fb67 +
           lVar14 * 0x72d18 +
           lVar27 * 0xa2c13 + (ulonglong)(*(uint3 *)((longlong)unaff_RDI + 0xd) >> 1 & 0x1fffff) +
           lVar18 * -0xf39ad + lVar6 * 0x215d1;
  uVar13 = lVar6 * -0xa6f7d + lVar34 + 0x100000;
  uVar17 = lVar20 + lVar35 * -0xa6f7d + 0x100000;
  uVar15 = lVar2 + lVar27 * -0xa6f7d + 0x100000;
  lVar25 = (longlong)uVar12 >> 0x15;
  uVar24 = lVar25 + lVar41 + 0x100000;
  lVar37 = (longlong)uVar3 >> 0x15;
  uVar29 = lVar37 + lVar36 + 0x100000;
  lVar16 = (longlong)uVar4 >> 0x15;
  uVar22 = lVar21 + lVar16 + 0x100000;
  lVar14 = (longlong)uVar13 >> 0x15;
  uVar5 = lVar14 + lVar33 + 0x100000;
  lVar18 = (longlong)uVar17 >> 0x15;
  uVar7 = lVar18 + lVar8 + 0x100000;
  lVar38 = (longlong)uVar15 >> 0x15;
  uVar11 = lVar19 + lVar38 + 0x100000;
  lVar23 = (longlong)uVar11 >> 0x15;
  lVar39 = lVar23 * 0xa2c13 +
           ((lVar31 * 0xa2c13 + (ulonglong)((uint6)*unaff_RDI & 0x1fffff)) -
           (uVar12 & 0xffffffffffe00000));
  lVar25 = (lVar39 >> 0x15) + ((lVar23 * 0x72d18 + lVar41 + lVar25) - (uVar24 & 0xffffffffffe00000))
  ;
  lVar30 = (lVar25 >> 0x15) +
           ((lVar23 * 0x9fb67 + lVar30 + lVar6 * 0x72d18) - (uVar3 & 0xffffffffffe00000)) +
           ((longlong)uVar24 >> 0x15);
  lVar31 = (lVar30 >> 0x15) +
           ((lVar23 * -0xf39ad + lVar37 + lVar36) - (uVar29 & 0xffffffffffe00000));
  lVar37 = (lVar31 >> 0x15) +
           ((lVar23 * 0x215d1 + lVar10 + lVar6 * -0xf39ad) - (uVar4 & 0xffffffffffe00000)) +
           ((longlong)uVar29 >> 0x15);
  lVar10 = (lVar37 >> 0x15) +
           ((lVar23 * -0xa6f7d + lVar21 + lVar16) - (uVar22 & 0xffffffffffe00000));
  lVar6 = (lVar10 >> 0x15) +
          ((longlong)uVar22 >> 0x15) + ((lVar34 + lVar6 * -0xa6f7d) - (uVar13 & 0xffffffffffe00000))
  ;
  lVar14 = (lVar6 >> 0x15) + ((lVar33 + lVar14) - (uVar5 & 0xffffffffffe00000));
  lVar23 = (lVar14 >> 0x15) +
           ((longlong)uVar5 >> 0x15) +
           ((lVar20 + lVar35 * -0xa6f7d) - (uVar17 & 0xffffffffffe00000));
  lVar16 = (lVar23 >> 0x15) + ((lVar8 + lVar18) - (uVar7 & 0xffffffffffe00000));
  lVar18 = (lVar16 >> 0x15) +
           ((longlong)uVar7 >> 0x15) + ((lVar2 + lVar27 * -0xa6f7d) - (uVar15 & 0xffffffffffe00000))
  ;
  lVar2 = (lVar18 >> 0x15) + ((lVar19 + lVar38) - (uVar11 & 0xffffffffffe00000));
  lVar8 = lVar2 >> 0x15;
  lVar33 = lVar8 * 0xa2c13 + (ulonglong)((uint)lVar39 & 0x1fffff);
  uVar3 = (lVar33 >> 0x15) + lVar8 * 0x72d18 + (ulonglong)((uint)lVar25 & 0x1fffff);
  uVar4 = ((longlong)uVar3 >> 0x15) + lVar8 * 0x9fb67 + (ulonglong)((uint)lVar30 & 0x1fffff);
  uVar7 = ((longlong)uVar4 >> 0x15) + lVar8 * -0xf39ad + (ulonglong)((uint)lVar31 & 0x1fffff);
  uVar17 = ((longlong)uVar7 >> 0x15) + lVar8 * 0x215d1 + (ulonglong)((uint)lVar37 & 0x1fffff);
  uVar5 = ((longlong)uVar17 >> 0x15) + lVar8 * -0xa6f7d + (ulonglong)((uint)lVar10 & 0x1fffff);
  uVar13 = ((longlong)uVar5 >> 0x15) + (ulonglong)((uint)lVar6 & 0x1fffff);
  uVar12 = ((longlong)uVar13 >> 0x15) + (ulonglong)((uint)lVar14 & 0x1fffff);
  lVar8 = ((longlong)uVar12 >> 0x15) + (ulonglong)((uint)lVar23 & 0x1fffff);
  uVar11 = (lVar8 >> 0x15) + (ulonglong)((uint)lVar16 & 0x1fffff);
  uVar15 = ((longlong)uVar11 >> 0x15) + (ulonglong)((uint)lVar18 & 0x1fffff);
  uVar22 = ((longlong)uVar15 >> 0x15) + (ulonglong)((uint)lVar2 & 0x1fffff);
  uVar9 = (uint)uVar3 & 0x1fffff;
  *(char *)unaff_RDI = (char)lVar33;
  *(char *)((longlong)unaff_RDI + 1) = (char)((ulonglong)lVar33 >> 8);
  *(byte *)((longlong)unaff_RDI + 2) = (byte)(uVar9 << 5) | (byte)((ulonglong)lVar33 >> 0x10) & 0x1f
  ;
  *(char *)((longlong)unaff_RDI + 3) = (char)(uVar3 >> 3);
  *(char *)(unaff_RDI + 1) = (char)(uVar3 >> 0xb);
  uVar1 = (uint)uVar4 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 5) = (char)(uVar9 >> 0x13) + (char)uVar1 * '\x04';
  uVar9 = (uint)uVar7 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 6) = (char)(uVar4 >> 6);
  *(byte *)((longlong)unaff_RDI + 7) = (byte)(uVar1 >> 0xe) | (byte)(uVar9 << 7);
  *(char *)(unaff_RDI + 2) = (char)(uVar7 >> 1);
  uVar1 = (uint)uVar17 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 9) = (char)(uVar7 >> 9);
  *(byte *)((longlong)unaff_RDI + 10) = (byte)(uVar9 >> 0x11) | (byte)(uVar1 << 4);
  *(char *)((longlong)unaff_RDI + 0xb) = (char)(uVar17 >> 4);
  *(char *)(unaff_RDI + 3) = (char)(uVar17 >> 0xc);
  uVar9 = (uint)uVar5 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 0xd) = (char)(uVar1 >> 0x14) + (char)uVar9 * '\x02';
  uVar1 = (uint)uVar13 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 0xe) = (char)(uVar5 >> 7);
  *(byte *)((longlong)unaff_RDI + 0xf) = (byte)(uVar9 >> 0xf) | (byte)(uVar1 << 6);
  *(char *)(unaff_RDI + 4) = (char)(uVar13 >> 2);
  *(char *)((longlong)unaff_RDI + 0x11) = (char)(uVar13 >> 10);
  *(char *)((longlong)unaff_RDI + 0x12) = (char)(uVar1 >> 0x12) + (char)uVar12 * '\b';
  *(char *)((longlong)unaff_RDI + 0x13) = (char)(uVar12 >> 5);
  uVar1 = (uint)uVar11 & 0x1fffff;
  *(char *)(unaff_RDI + 5) = (char)(uVar12 >> 0xd);
  *(char *)((longlong)unaff_RDI + 0x15) = (char)lVar8;
  *(char *)((longlong)unaff_RDI + 0x16) = (char)((ulonglong)lVar8 >> 8);
  *(byte *)((longlong)unaff_RDI + 0x17) =
       (byte)(uVar1 << 5) | (byte)((ulonglong)lVar8 >> 0x10) & 0x1f;
  *(char *)(unaff_RDI + 6) = (char)(uVar11 >> 3);
  *(char *)((longlong)unaff_RDI + 0x19) = (char)(uVar11 >> 0xb);
  uVar9 = (uint)uVar15 & 0x1fffff;
  *(char *)((longlong)unaff_RDI + 0x1a) = (char)(uVar1 >> 0x13) + (char)uVar9 * '\x04';
  *(char *)((longlong)unaff_RDI + 0x1b) = (char)(uVar15 >> 6);
  *(byte *)(unaff_RDI + 7) = (byte)(uVar9 >> 0xe) | (byte)((int)uVar22 << 7);
  *(char *)((longlong)unaff_RDI + 0x1d) = (char)(uVar22 >> 1);
  *(char *)((longlong)unaff_RDI + 0x1e) = (char)(uVar22 >> 9);
  *(char *)((longlong)unaff_RDI + 0x1f) = (char)(uVar22 >> 0x11);
  return;
}




// ============================================================
// @00fa4b60 — 2532 bytes
// str: ""expand 32-byte k""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00fa4b60(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16])

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int iVar27;
  ulonglong *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong in_R10;
  longlong lVar28;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  int iVar38;
  undefined1 auVar35 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar36 [64];
  int iVar39;
  int iVar45;
  uint uVar46;
  uint uVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar49;
  ulonglong uVar47;
  undefined1 auVar44 [32];
  int iVar50;
  uint uVar56;
  ulonglong uVar51;
  uint uVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  int iVar58;
  uint uVar63;
  uint uVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  uint uVar65;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  uint uVar66;
  uint uVar69;
  ulonglong uVar67;
  uint uVar70;
  undefined1 auVar68 [16];
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  undefined1 auVar76 [32];
  int iVar77;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  int iVar89;
  ulonglong uVar90;
  undefined1 in_ZMM8 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [64];
  undefined1 auVar87 [64];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  uint uVar97;
  undefined1 in_ZMM9 [64];
  undefined1 auVar95 [64];
  undefined1 auVar96 [64];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar102 [64];
  undefined1 auVar103 [64];
  undefined1 auVar104 [64];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
  int iVar113;
  undefined1 in_ZMM11 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [64];
  uint uVar115;
  ulonglong uVar114;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar125;
  ulonglong uVar120;
  uint uVar126;
  uint uVar127;
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  uint uVar136;
  uint uVar137;
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auStack_2a0 [32];
  undefined1 auStack_280 [32];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint uStack_c4;
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined1 local_18 [16];
  undefined1 auVar37 [64];
  ulonglong uVar29;
  undefined1 auVar86 [64];
  undefined1 auVar88 [64];
  ulonglong uVar78;
  undefined1 auVar105 [64];
  
  uVar26 = s_expand_32_byte_k_00fa4200._12_4_;
  uVar25 = s_expand_32_byte_k_00fa4200._8_4_;
  uVar24 = s_expand_32_byte_k_00fa4200._4_4_;
  uVar23 = s_expand_32_byte_k_00fa4200._0_4_;
  auVar32 = _DAT_00fa40d0;
  auVar33 = _DAT_00fa40c0;
  if ((in_R10 >> 0x20 & 0x20) != 0) {
    auVar33._4_4_ = s_expand_32_byte_k_00fa4200._4_4_;
    auVar33._0_4_ = s_expand_32_byte_k_00fa4200._0_4_;
    auVar33._8_4_ = s_expand_32_byte_k_00fa4200._8_4_;
    auVar33._12_4_ = s_expand_32_byte_k_00fa4200._12_4_;
    auVar110._16_16_ = auVar33;
    auVar110._0_16_ = auVar33;
    auVar61._16_16_ = *param_1;
    auVar61._0_16_ = *param_1;
    auVar128._16_16_ = param_1[1];
    auVar128._0_16_ = param_1[1];
    auVar76._16_16_ = *param_3;
    auVar76._0_16_ = *param_3;
    auStack_220 = vpshufd_avx2(auVar110,0);
    auStack_200 = vpshufd_avx2(auVar110,0x55);
    auStack_1e0 = vpshufd_avx2(auVar110,0xaa);
    auStack_1c0 = vpshufd_avx2(auVar110,0xff);
    auStack_1a0 = vpshufd_avx2(auVar61,0);
    auStack_180 = vpshufd_avx2(auVar61,0x55);
    auStack_160 = vpshufd_avx2(auVar61,0xaa);
    auStack_140 = vpshufd_avx2(auVar61,0xff);
    auVar61 = vpshufd_avx2(auVar128,0);
    auVar110 = vpshufd_avx2(auVar128,0x55);
    uStack_120 = auVar61._0_4_;
    uStack_11c = auVar61._4_4_;
    local_118 = auVar61._8_4_;
    uStack_114 = auVar61._12_4_;
    uStack_110 = auVar61._16_4_;
    uStack_10c = auVar61._20_4_;
    local_108 = auVar61._24_4_;
    uStack_104 = auVar61._28_4_;
    auVar8 = vpshufd_avx2(auVar128,0xaa);
    uStack_100 = auVar110._0_4_;
    uStack_fc = auVar110._4_4_;
    local_f8 = auVar110._8_4_;
    uStack_f4 = auVar110._12_4_;
    uStack_f0 = auVar110._16_4_;
    uStack_ec = auVar110._20_4_;
    local_e8 = auVar110._24_4_;
    uStack_e4 = auVar110._28_4_;
    auStack_c0 = vpshufd_avx2(auVar128,0xff);
    uStack_e0 = auVar8._0_4_;
    uStack_dc = auVar8._4_4_;
    local_d8 = auVar8._8_4_;
    uStack_d4 = auVar8._12_4_;
    uStack_d0 = auVar8._16_4_;
    uStack_cc = auVar8._20_4_;
    local_c8 = auVar8._24_4_;
    uStack_c4 = auVar8._28_4_;
    auVar128 = vpshufd_avx2(auVar76,0);
    auStack_80 = vpshufd_avx2(auVar76,0x55);
    auStack_a0 = vpaddd_avx2(auVar128,_DAT_00fa4080);
    auVar128 = vpshufd_avx2(auVar76,0xaa);
    auVar76 = vpshufd_avx2(auVar76,0xff);
    uStack_60 = auVar128._0_4_;
    uStack_5c = auVar128._4_4_;
    local_58 = auVar128._8_4_;
    uStack_54 = auVar128._12_4_;
    uStack_50 = auVar128._16_4_;
    uStack_4c = auVar128._20_4_;
    local_48 = auVar128._24_4_;
    uStack_44 = auVar128._28_4_;
    uStack_40 = auVar76._0_4_;
    uStack_3c = auVar76._4_4_;
    local_38 = auVar76._8_4_;
    uStack_34 = auVar76._12_4_;
    uStack_30 = auVar76._16_4_;
    uStack_2c = auVar76._20_4_;
    local_28 = auVar76._24_4_;
    uStack_24 = auVar76._28_4_;
    while( true ) {
      iVar27 = 10;
      auVar34 = auStack_1a0;
      auVar44 = auStack_180;
      auVar55 = auStack_160;
      auVar62 = auStack_140;
      auVar129 = auStack_a0;
      auVar124 = auStack_80;
      auVar132 = auVar128;
      auVar122 = auVar76;
      auVar2 = auStack_220;
      auVar3 = auStack_200;
      auVar6 = auStack_1e0;
      auVar7 = auStack_1c0;
      auVar4 = auVar61;
      auVar5 = auVar110;
      auStack_260 = auVar8;
      auStack_240 = auStack_c0;
      do {
        auVar131._16_16_ = _DAT_00fa40c0;
        auVar131._0_16_ = _DAT_00fa40c0;
        auVar2 = vpaddd_avx2(auVar2,auVar34);
        auVar129 = vpshufb_avx2(auVar2 ^ auVar129,auVar131);
        auVar3 = vpaddd_avx2(auVar3,auVar44);
        auVar124 = vpshufb_avx2(auVar3 ^ auVar124,auVar131);
        auVar4 = vpaddd_avx2(auVar4,auVar129);
        auVar121 = vpslld_avx2(auVar4 ^ auVar34,0xc);
        auVar34 = vpsrld_avx2(auVar4 ^ auVar34,0x14);
        auVar34 = vpor_avx2(auVar121,auVar34);
        auVar135._16_16_ = _DAT_00fa40d0;
        auVar135._0_16_ = _DAT_00fa40d0;
        auVar5 = vpaddd_avx2(auVar5,auVar124);
        auVar121 = vpslld_avx2(auVar5 ^ auVar44,0xc);
        auVar44 = vpsrld_avx2(auVar5 ^ auVar44,0x14);
        auVar44 = vpor_avx2(auVar121,auVar44);
        auVar2 = vpaddd_avx2(auVar2,auVar34);
        auVar121 = vpshufb_avx2(auVar2 ^ auVar129,auVar135);
        auVar3 = vpaddd_avx2(auVar3,auVar44);
        auVar135 = vpshufb_avx2(auVar3 ^ auVar124,auVar135);
        auVar4 = vpaddd_avx2(auVar4,auVar121);
        auVar129 = vpslld_avx2(auVar4 ^ auVar34,7);
        auVar34 = vpsrld_avx2(auVar4 ^ auVar34,0x19);
        auVar34 = vpor_avx2(auVar129,auVar34);
        auVar130._16_16_ = _DAT_00fa40c0;
        auVar130._0_16_ = _DAT_00fa40c0;
        auVar5 = vpaddd_avx2(auVar5,auVar135);
        auVar129 = vpslld_avx2(auVar5 ^ auVar44,7);
        auVar44 = vpsrld_avx2(auVar5 ^ auVar44,0x19);
        auVar129 = vpor_avx2(auVar129,auVar44);
        auVar6 = vpaddd_avx2(auVar6,auVar55);
        auVar124 = vpshufb_avx2(auVar6 ^ auVar132,auVar130);
        auVar7 = vpaddd_avx2(auVar7,auVar62);
        auVar132 = vpshufb_avx2(auVar7 ^ auVar122,auVar130);
        auVar44 = vpaddd_avx2(auStack_260,auVar124);
        auVar122 = vpslld_avx2(auVar44 ^ auVar55,0xc);
        auVar55 = vpsrld_avx2(auVar44 ^ auVar55,0x14);
        auVar122 = vpor_avx2(auVar122,auVar55);
        auVar123._16_16_ = _DAT_00fa40d0;
        auVar123._0_16_ = _DAT_00fa40d0;
        auVar55 = vpaddd_avx2(auStack_240,auVar132);
        auVar131 = vpslld_avx2(auVar55 ^ auVar62,0xc);
        auVar62 = vpsrld_avx2(auVar55 ^ auVar62,0x14);
        auVar62 = vpor_avx2(auVar131,auVar62);
        auVar6 = vpaddd_avx2(auVar6,auVar122);
        auVar131 = vpshufb_avx2(auVar6 ^ auVar124,auVar123);
        auVar7 = vpaddd_avx2(auVar7,auVar62);
        auVar124 = vpshufb_avx2(auVar7 ^ auVar132,auVar123);
        auVar44 = vpaddd_avx2(auVar44,auVar131);
        auVar132 = vpslld_avx2(auVar44 ^ auVar122,7);
        auVar122 = vpsrld_avx2(auVar44 ^ auVar122,0x19);
        auVar122 = vpor_avx2(auVar132,auVar122);
        auVar133._16_16_ = _DAT_00fa40c0;
        auVar133._0_16_ = _DAT_00fa40c0;
        auVar55 = vpaddd_avx2(auVar55,auVar124);
        auVar132 = vpslld_avx2(auVar55 ^ auVar62,7);
        auVar62 = vpsrld_avx2(auVar55 ^ auVar62,0x19);
        auVar62 = vpor_avx2(auVar132,auVar62);
        auVar2 = vpaddd_avx2(auVar2,auVar129);
        auVar123 = vpshufb_avx2(auVar2 ^ auVar124,auVar133);
        auVar3 = vpaddd_avx2(auVar3,auVar122);
        auVar121 = vpshufb_avx2(auVar3 ^ auVar121,auVar133);
        auVar44 = vpaddd_avx2(auVar44,auVar123);
        auVar124 = vpslld_avx2(auVar44 ^ auVar129,0xc);
        auVar129 = vpsrld_avx2(auVar44 ^ auVar129,0x14);
        auVar124 = vpor_avx2(auVar124,auVar129);
        auVar129._16_16_ = _DAT_00fa40d0;
        auVar129._0_16_ = _DAT_00fa40d0;
        auVar55 = vpaddd_avx2(auVar55,auVar121);
        auVar132 = vpslld_avx2(auVar55 ^ auVar122,0xc);
        auVar122 = vpsrld_avx2(auVar55 ^ auVar122,0x14);
        auVar132 = vpor_avx2(auVar132,auVar122);
        auVar2 = vpaddd_avx2(auVar2,auVar124);
        auVar122 = vpshufb_avx2(auVar2 ^ auVar123,auVar129);
        auVar3 = vpaddd_avx2(auVar3,auVar132);
        auVar129 = vpshufb_avx2(auVar3 ^ auVar121,auVar129);
        auStack_260 = vpaddd_avx2(auVar44,auVar122);
        auVar121 = vpslld_avx2(auStack_260 ^ auVar124,7);
        auVar44 = vpsrld_avx2(auStack_260 ^ auVar124,0x19);
        auVar44 = vpor_avx2(auVar121,auVar44);
        auVar134._16_16_ = _DAT_00fa40c0;
        auVar134._0_16_ = _DAT_00fa40c0;
        auStack_240 = vpaddd_avx2(auVar55,auVar129);
        auVar124 = vpslld_avx2(auStack_240 ^ auVar132,7);
        auVar55 = vpsrld_avx2(auStack_240 ^ auVar132,0x19);
        auVar55 = vpor_avx2(auVar124,auVar55);
        auVar6 = vpaddd_avx2(auVar6,auVar62);
        auVar124 = vpshufb_avx2(auVar6 ^ auVar135,auVar134);
        auVar7 = vpaddd_avx2(auVar7,auVar34);
        auVar132 = vpshufb_avx2(auVar7 ^ auVar131,auVar134);
        auVar4 = vpaddd_avx2(auVar4,auVar124);
        auVar121 = vpslld_avx2(auVar4 ^ auVar62,0xc);
        auVar62 = vpsrld_avx2(auVar4 ^ auVar62,0x14);
        auVar62 = vpor_avx2(auVar121,auVar62);
        auVar121._16_16_ = _DAT_00fa40d0;
        auVar121._0_16_ = _DAT_00fa40d0;
        auVar5 = vpaddd_avx2(auVar5,auVar132);
        auVar135 = vpslld_avx2(auVar5 ^ auVar34,0xc);
        auVar34 = vpsrld_avx2(auVar5 ^ auVar34,0x14);
        auVar34 = vpor_avx2(auVar135,auVar34);
        auVar6 = vpaddd_avx2(auVar6,auVar62);
        auVar124 = vpshufb_avx2(auVar6 ^ auVar124,auVar121);
        auVar7 = vpaddd_avx2(auVar7,auVar34);
        auVar132 = vpshufb_avx2(auVar7 ^ auVar132,auVar121);
        auVar4 = vpaddd_avx2(auVar4,auVar124);
        auVar121 = vpslld_avx2(auVar4 ^ auVar62,7);
        auVar62 = vpsrld_avx2(auVar4 ^ auVar62,0x19);
        auVar62 = vpor_avx2(auVar121,auVar62);
        auVar5 = vpaddd_avx2(auVar5,auVar132);
        auVar121 = vpslld_avx2(auVar5 ^ auVar34,7);
        auVar34 = vpsrld_avx2(auVar5 ^ auVar34,0x19);
        auVar34 = vpor_avx2(auVar121,auVar34);
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
      auVar2 = vpaddd_avx2(auVar2,auStack_220);
      auVar3 = vpaddd_avx2(auVar3,auStack_200);
      auVar6 = vpaddd_avx2(auVar6,auStack_1e0);
      auVar7 = vpaddd_avx2(auVar7,auStack_1c0);
      auVar121 = vpunpckldq_avx2(auVar2,auVar3);
      auVar135 = vpunpckldq_avx2(auVar6,auVar7);
      auVar2 = vpunpckhdq_avx2(auVar2,auVar3);
      auVar3 = vpunpckhdq_avx2(auVar6,auVar7);
      auVar131 = vpunpcklqdq_avx2(auVar121,auVar135);
      auVar121 = vpunpckhqdq_avx2(auVar121,auVar135);
      auVar123 = vpunpcklqdq_avx2(auVar2,auVar3);
      auVar135 = vpunpckhqdq_avx2(auVar2,auVar3);
      auVar2 = vpaddd_avx2(auVar34,auStack_1a0);
      auVar3 = vpaddd_avx2(auVar44,auStack_180);
      auVar6 = vpaddd_avx2(auVar55,auStack_160);
      auVar7 = vpaddd_avx2(auVar62,auStack_140);
      auVar44 = vpunpckldq_avx2(auVar2,auVar3);
      auVar55 = vpunpckldq_avx2(auVar6,auVar7);
      auVar2 = vpunpckhdq_avx2(auVar2,auVar3);
      auVar3 = vpunpckhdq_avx2(auVar6,auVar7);
      auVar7 = vpunpcklqdq_avx2(auVar44,auVar55);
      auVar6 = vpunpckhqdq_avx2(auVar44,auVar55);
      auVar44 = vpunpcklqdq_avx2(auVar2,auVar3);
      auVar2 = vpunpckhqdq_avx2(auVar2,auVar3);
      auStack_2a0 = vperm2i128_avx2(auVar131,auVar7,0x20);
      auVar131 = vperm2i128_avx2(auVar131,auVar7,0x31);
      auVar130 = vperm2i128_avx2(auVar121,auVar6,0x20);
      auVar121 = vperm2i128_avx2(auVar121,auVar6,0x31);
      auVar133 = vperm2i128_avx2(auVar123,auVar44,0x20);
      auVar123 = vperm2i128_avx2(auVar123,auVar44,0x31);
      auVar134 = vperm2i128_avx2(auVar135,auVar2,0x20);
      auVar135 = vperm2i128_avx2(auVar135,auVar2,0x31);
      auVar2 = vpaddd_avx2(auVar4,auVar61);
      auVar3 = vpaddd_avx2(auVar5,auVar110);
      auVar6 = vpaddd_avx2(auStack_260,auVar8);
      auVar7 = vpaddd_avx2(auStack_240,auStack_c0);
      auVar4 = vpunpckldq_avx2(auVar2,auVar3);
      auVar5 = vpunpckldq_avx2(auVar6,auVar7);
      auVar2 = vpunpckhdq_avx2(auVar2,auVar3);
      auVar3 = vpunpckhdq_avx2(auVar6,auVar7);
      auVar62 = vpunpcklqdq_avx2(auVar4,auVar5);
      auVar4 = vpunpckhqdq_avx2(auVar4,auVar5);
      auVar34 = vpunpcklqdq_avx2(auVar2,auVar3);
      auVar5 = vpunpckhqdq_avx2(auVar2,auVar3);
      auVar2 = vpaddd_avx2(auVar129,auStack_a0);
      auVar3 = vpaddd_avx2(auVar124,auStack_80);
      auVar6 = vpaddd_avx2(auVar132,auVar128);
      auVar7 = vpaddd_avx2(auVar122,auVar76);
      auVar44 = vpunpckldq_avx2(auVar2,auVar3);
      auVar55 = vpunpckldq_avx2(auVar6,auVar7);
      auVar2 = vpunpckhdq_avx2(auVar2,auVar3);
      auVar3 = vpunpckhdq_avx2(auVar6,auVar7);
      auVar7 = vpunpcklqdq_avx2(auVar44,auVar55);
      auVar6 = vpunpckhqdq_avx2(auVar44,auVar55);
      auVar44 = vpunpcklqdq_avx2(auVar2,auVar3);
      auVar2 = vpunpckhqdq_avx2(auVar2,auVar3);
      auVar3 = vperm2i128_avx2(auVar62,auVar7,0x20);
      auVar7 = vperm2i128_avx2(auVar62,auVar7,0x31);
      auVar55 = vperm2i128_avx2(auVar4,auVar6,0x20);
      auVar6 = vperm2i128_avx2(auVar4,auVar6,0x31);
      auVar4 = vperm2i128_avx2(auVar34,auVar44,0x20);
      auVar44 = vperm2i128_avx2(auVar34,auVar44,0x31);
      auVar62 = vperm2i128_avx2(auVar5,auVar2,0x20);
      auVar2 = vperm2i128_avx2(auVar5,auVar2,0x31);
      auStack_280._0_8_ = auVar130._0_8_;
      auStack_280._8_8_ = auVar130._8_8_;
      auStack_280._16_8_ = auVar130._16_8_;
      auStack_280._24_8_ = auVar130._24_8_;
      if (param_2 < 0x200) break;
      uVar29 = unaff_RSI[1];
      uVar47 = unaff_RSI[2];
      uVar51 = unaff_RSI[3];
      auVar5 = *(undefined1 (*) [32])(unaff_RSI + 4);
      auVar34 = *(undefined1 (*) [32])(unaff_RSI + 8);
      auVar122 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
      *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
      unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
      unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
      unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
      *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar5;
      *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar34;
      *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar122;
      uVar29 = unaff_RSI[0x11];
      uVar47 = unaff_RSI[0x12];
      uVar51 = unaff_RSI[0x13];
      auVar3 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
      auVar7 = *(undefined1 (*) [32])(unaff_RSI + 0x18);
      auVar5 = *(undefined1 (*) [32])(unaff_RSI + 0x1c);
      unaff_RDI[0x10] = auStack_280._0_8_ ^ unaff_RSI[0x10];
      unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar29;
      unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar47;
      unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar51;
      *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar3;
      *(undefined1 (*) [32])(unaff_RDI + 0x18) = auVar121 ^ auVar7;
      *(undefined1 (*) [32])(unaff_RDI + 0x1c) = auVar6 ^ auVar5;
      auVar3 = *(undefined1 (*) [32])(unaff_RSI + 0x24);
      auVar6 = *(undefined1 (*) [32])(unaff_RSI + 0x28);
      auVar7 = *(undefined1 (*) [32])(unaff_RSI + 0x2c);
      pauVar1 = (undefined1 (*) [32])(unaff_RSI + 0x30);
      *(undefined1 (*) [32])(unaff_RDI + 0x20) = auVar133 ^ *(undefined1 (*) [32])(unaff_RSI + 0x20)
      ;
      *(undefined1 (*) [32])(unaff_RDI + 0x24) = auVar4 ^ auVar3;
      *(undefined1 (*) [32])(unaff_RDI + 0x28) = auVar123 ^ auVar6;
      *(undefined1 (*) [32])(unaff_RDI + 0x2c) = auVar44 ^ auVar7;
      auVar3 = *(undefined1 (*) [32])(unaff_RSI + 0x34);
      auVar6 = *(undefined1 (*) [32])(unaff_RSI + 0x38);
      auVar7 = *(undefined1 (*) [32])(unaff_RSI + 0x3c);
      unaff_RSI = unaff_RSI + 0x40;
      *(undefined1 (*) [32])(unaff_RDI + 0x30) = auVar134 ^ *pauVar1;
      *(undefined1 (*) [32])(unaff_RDI + 0x34) = auVar62 ^ auVar3;
      *(undefined1 (*) [32])(unaff_RDI + 0x38) = auVar135 ^ auVar6;
      *(undefined1 (*) [32])(unaff_RDI + 0x3c) = auVar2 ^ auVar7;
      unaff_RDI = unaff_RDI + 0x40;
      param_2 = param_2 - 0x200;
      if (param_2 == 0) {
        return;
      }
      auStack_a0 = vpaddd_avx2(auStack_a0,_DAT_00fa40a0);
    }
    if (param_2 < 0x1c0) {
      if (param_2 < 0x180) {
        if (param_2 < 0x140) {
          if (param_2 < 0x100) {
            if (param_2 < 0xc0) {
              if (param_2 < 0x80) {
                if (param_2 < 0x40) {
                  auStack_280 = auVar3;
                  lVar28 = 0;
                }
                else {
                  uVar29 = unaff_RSI[1];
                  uVar47 = unaff_RSI[2];
                  uVar51 = unaff_RSI[3];
                  auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
                  *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
                  unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
                  unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
                  unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
                  *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
                  if (param_2 == 0x40) {
                    return;
                  }
                  unaff_RSI = unaff_RSI + 8;
                  lVar28 = 0;
                  auStack_2a0 = auVar131;
                  unaff_RDI = unaff_RDI + 8;
                  param_2 = param_2 - 0x40;
                  auStack_280 = auVar7;
                }
              }
              else {
                uVar29 = unaff_RSI[1];
                uVar47 = unaff_RSI[2];
                uVar51 = unaff_RSI[3];
                auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
                auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
                auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
                *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
                unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
                unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
                unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
                *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
                *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
                *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
                if (param_2 == 0x80) {
                  return;
                }
                unaff_RSI = unaff_RSI + 0x10;
                lVar28 = 0;
                auStack_2a0 = auVar130;
                unaff_RDI = unaff_RDI + 0x10;
                param_2 = param_2 - 0x80;
                auStack_280 = auVar55;
              }
            }
            else {
              uVar29 = unaff_RSI[1];
              uVar47 = unaff_RSI[2];
              uVar51 = unaff_RSI[3];
              auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
              auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
              auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
              uVar67 = unaff_RSI[0x10];
              uVar78 = unaff_RSI[0x11];
              uVar90 = unaff_RSI[0x12];
              uVar114 = unaff_RSI[0x13];
              auVar128 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
              *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
              unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
              unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
              unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
              *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
              *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
              *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
              unaff_RDI[0x10] = auStack_280._0_8_ ^ uVar67;
              unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar78;
              unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar90;
              unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar114;
              *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar128;
              if (param_2 == 0xc0) {
                return;
              }
              unaff_RSI = unaff_RSI + 0x18;
              lVar28 = 0;
              auStack_2a0 = auVar121;
              unaff_RDI = unaff_RDI + 0x18;
              param_2 = param_2 - 0xc0;
              auStack_280 = auVar6;
            }
          }
          else {
            uVar29 = unaff_RSI[1];
            uVar47 = unaff_RSI[2];
            uVar51 = unaff_RSI[3];
            auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
            auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
            auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
            uVar67 = unaff_RSI[0x10];
            uVar78 = unaff_RSI[0x11];
            uVar90 = unaff_RSI[0x12];
            uVar114 = unaff_RSI[0x13];
            auVar128 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
            auVar76 = *(undefined1 (*) [32])(unaff_RSI + 0x18);
            auVar2 = *(undefined1 (*) [32])(unaff_RSI + 0x1c);
            *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
            unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
            unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
            unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
            *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
            *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
            *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
            unaff_RDI[0x10] = auStack_280._0_8_ ^ uVar67;
            unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar78;
            unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar90;
            unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar114;
            *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar128;
            *(undefined1 (*) [32])(unaff_RDI + 0x18) = auVar121 ^ auVar76;
            *(undefined1 (*) [32])(unaff_RDI + 0x1c) = auVar6 ^ auVar2;
            if (param_2 == 0x100) {
              return;
            }
            unaff_RSI = unaff_RSI + 0x20;
            lVar28 = 0;
            auStack_2a0 = auVar133;
            unaff_RDI = unaff_RDI + 0x20;
            param_2 = param_2 - 0x100;
            auStack_280 = auVar4;
          }
        }
        else {
          uVar29 = unaff_RSI[1];
          uVar47 = unaff_RSI[2];
          uVar51 = unaff_RSI[3];
          auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
          auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
          auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
          uVar67 = unaff_RSI[0x10];
          uVar78 = unaff_RSI[0x11];
          uVar90 = unaff_RSI[0x12];
          uVar114 = unaff_RSI[0x13];
          auVar128 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
          auVar76 = *(undefined1 (*) [32])(unaff_RSI + 0x18);
          auVar2 = *(undefined1 (*) [32])(unaff_RSI + 0x1c);
          auVar5 = *(undefined1 (*) [32])(unaff_RSI + 0x20);
          auVar62 = *(undefined1 (*) [32])(unaff_RSI + 0x24);
          *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
          unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
          unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
          unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
          *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
          *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
          *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
          unaff_RDI[0x10] = auStack_280._0_8_ ^ uVar67;
          unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar78;
          unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar90;
          unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar114;
          *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar128;
          *(undefined1 (*) [32])(unaff_RDI + 0x18) = auVar121 ^ auVar76;
          *(undefined1 (*) [32])(unaff_RDI + 0x1c) = auVar6 ^ auVar2;
          *(undefined1 (*) [32])(unaff_RDI + 0x20) = auVar133 ^ auVar5;
          *(undefined1 (*) [32])(unaff_RDI + 0x24) = auVar4 ^ auVar62;
          if (param_2 == 0x140) {
            return;
          }
          unaff_RSI = unaff_RSI + 0x28;
          lVar28 = 0;
          auStack_2a0 = auVar123;
          unaff_RDI = unaff_RDI + 0x28;
          param_2 = param_2 - 0x140;
          auStack_280 = auVar44;
        }
      }
      else {
        uVar29 = unaff_RSI[1];
        uVar47 = unaff_RSI[2];
        uVar51 = unaff_RSI[3];
        auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
        auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
        auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
        uVar67 = unaff_RSI[0x10];
        uVar78 = unaff_RSI[0x11];
        uVar90 = unaff_RSI[0x12];
        uVar114 = unaff_RSI[0x13];
        auVar128 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
        auVar76 = *(undefined1 (*) [32])(unaff_RSI + 0x18);
        auVar2 = *(undefined1 (*) [32])(unaff_RSI + 0x1c);
        auVar5 = *(undefined1 (*) [32])(unaff_RSI + 0x20);
        auVar34 = *(undefined1 (*) [32])(unaff_RSI + 0x24);
        auVar122 = *(undefined1 (*) [32])(unaff_RSI + 0x28);
        auVar129 = *(undefined1 (*) [32])(unaff_RSI + 0x2c);
        *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
        unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
        unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
        unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
        *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
        *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
        *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
        unaff_RDI[0x10] = auStack_280._0_8_ ^ uVar67;
        unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar78;
        unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar90;
        unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar114;
        *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar128;
        *(undefined1 (*) [32])(unaff_RDI + 0x18) = auVar121 ^ auVar76;
        *(undefined1 (*) [32])(unaff_RDI + 0x1c) = auVar6 ^ auVar2;
        *(undefined1 (*) [32])(unaff_RDI + 0x20) = auVar133 ^ auVar5;
        *(undefined1 (*) [32])(unaff_RDI + 0x24) = auVar4 ^ auVar34;
        *(undefined1 (*) [32])(unaff_RDI + 0x28) = auVar123 ^ auVar122;
        *(undefined1 (*) [32])(unaff_RDI + 0x2c) = auVar44 ^ auVar129;
        if (param_2 == 0x180) {
          return;
        }
        unaff_RSI = unaff_RSI + 0x30;
        lVar28 = 0;
        auStack_2a0 = auVar134;
        unaff_RDI = unaff_RDI + 0x30;
        param_2 = param_2 - 0x180;
        auStack_280 = auVar62;
      }
    }
    else {
      uVar29 = unaff_RSI[1];
      uVar47 = unaff_RSI[2];
      uVar51 = unaff_RSI[3];
      auVar61 = *(undefined1 (*) [32])(unaff_RSI + 4);
      auVar110 = *(undefined1 (*) [32])(unaff_RSI + 8);
      auVar8 = *(undefined1 (*) [32])(unaff_RSI + 0xc);
      uVar67 = unaff_RSI[0x10];
      uVar78 = unaff_RSI[0x11];
      uVar90 = unaff_RSI[0x12];
      uVar114 = unaff_RSI[0x13];
      auVar128 = *(undefined1 (*) [32])(unaff_RSI + 0x14);
      auVar76 = *(undefined1 (*) [32])(unaff_RSI + 0x18);
      auVar5 = *(undefined1 (*) [32])(unaff_RSI + 0x1c);
      auVar34 = *(undefined1 (*) [32])(unaff_RSI + 0x20);
      auVar122 = *(undefined1 (*) [32])(unaff_RSI + 0x24);
      auVar129 = *(undefined1 (*) [32])(unaff_RSI + 0x28);
      auVar124 = *(undefined1 (*) [32])(unaff_RSI + 0x2c);
      auVar132 = *(undefined1 (*) [32])(unaff_RSI + 0x30);
      auVar130 = *(undefined1 (*) [32])(unaff_RSI + 0x34);
      *unaff_RDI = auStack_2a0._0_8_ ^ *unaff_RSI;
      unaff_RDI[1] = auStack_2a0._8_8_ ^ uVar29;
      unaff_RDI[2] = auStack_2a0._16_8_ ^ uVar47;
      unaff_RDI[3] = auStack_2a0._24_8_ ^ uVar51;
      *(undefined1 (*) [32])(unaff_RDI + 4) = auVar3 ^ auVar61;
      *(undefined1 (*) [32])(unaff_RDI + 8) = auVar131 ^ auVar110;
      *(undefined1 (*) [32])(unaff_RDI + 0xc) = auVar7 ^ auVar8;
      unaff_RDI[0x10] = auStack_280._0_8_ ^ uVar67;
      unaff_RDI[0x11] = auStack_280._8_8_ ^ uVar78;
      unaff_RDI[0x12] = auStack_280._16_8_ ^ uVar90;
      unaff_RDI[0x13] = auStack_280._24_8_ ^ uVar114;
      *(undefined1 (*) [32])(unaff_RDI + 0x14) = auVar55 ^ auVar128;
      *(undefined1 (*) [32])(unaff_RDI + 0x18) = auVar121 ^ auVar76;
      *(undefined1 (*) [32])(unaff_RDI + 0x1c) = auVar6 ^ auVar5;
      *(undefined1 (*) [32])(unaff_RDI + 0x20) = auVar133 ^ auVar34;
      *(undefined1 (*) [32])(unaff_RDI + 0x24) = auVar4 ^ auVar122;
      *(undefined1 (*) [32])(unaff_RDI + 0x28) = auVar123 ^ auVar129;
      *(undefined1 (*) [32])(unaff_RDI + 0x2c) = auVar44 ^ auVar124;
      *(undefined1 (*) [32])(unaff_RDI + 0x30) = auVar134 ^ auVar132;
      *(undefined1 (*) [32])(unaff_RDI + 0x34) = auVar62 ^ auVar130;
      if (param_2 == 0x1c0) {
        return;
      }
      unaff_RSI = unaff_RSI + 0x38;
      lVar28 = 0;
      auStack_2a0 = auVar135;
      unaff_RDI = unaff_RDI + 0x38;
      param_2 = param_2 - 0x1c0;
      auStack_280 = auVar2;
    }
    do {
      *(byte *)((longlong)unaff_RDI + lVar28) =
           *(byte *)((longlong)unaff_RSI + lVar28) ^ auStack_2a0[lVar28];
      param_2 = param_2 - 1;
      lVar28 = lVar28 + 1;
    } while (param_2 != 0);
    return;
  }
  auVar35._16_48_ = in_ZMM0._16_48_;
  if ((0xc0 < param_2) || ((in_R10 & 0x4400000) != 0x400000)) {
    auVar111._16_48_ = in_ZMM11._16_48_;
    local_c8 = *(uint *)*param_1;
    auStack_c0._8_4_ = *(undefined4 *)(*param_1 + 4);
    auStack_c0._24_4_ = *(undefined4 *)(*param_1 + 8);
    auStack_a0._8_4_ = *(undefined4 *)(*param_1 + 0xc);
    auStack_a0._24_4_ = *(undefined4 *)param_1[1];
    auStack_80._8_4_ = *(undefined4 *)(param_1[1] + 4);
    auStack_80._24_4_ = *(undefined4 *)(param_1[1] + 8);
    local_58 = *(uint *)(param_1[1] + 0xc);
    iVar27 = *(int *)*param_3;
    local_38 = *(uint *)(*param_3 + 4);
    local_28 = *(uint *)(*param_3 + 8);
    iVar9 = *(int *)(*param_3 + 0xc);
    auVar83._0_8_ = CONCAT44(s_expand_32_byte_k_00fa4200._0_4_,s_expand_32_byte_k_00fa4200._0_4_);
    auVar83._8_4_ = s_expand_32_byte_k_00fa4200._0_4_;
    auVar83._16_48_ = in_ZMM8._16_48_;
    auVar83._12_4_ = s_expand_32_byte_k_00fa4200._0_4_;
    auVar95._0_8_ = CONCAT44(s_expand_32_byte_k_00fa4200._4_4_,s_expand_32_byte_k_00fa4200._4_4_);
    auVar95._8_4_ = s_expand_32_byte_k_00fa4200._4_4_;
    auVar95._16_48_ = in_ZMM9._16_48_;
    auVar95._12_4_ = s_expand_32_byte_k_00fa4200._4_4_;
    local_108 = s_expand_32_byte_k_00fa4200._0_4_;
    uStack_104 = s_expand_32_byte_k_00fa4200._0_4_;
    uStack_100 = s_expand_32_byte_k_00fa4200._0_4_;
    uStack_fc = s_expand_32_byte_k_00fa4200._0_4_;
    auVar102._0_8_ = CONCAT44(s_expand_32_byte_k_00fa4200._8_4_,s_expand_32_byte_k_00fa4200._8_4_);
    auVar102._8_4_ = s_expand_32_byte_k_00fa4200._8_4_;
    auVar102._16_48_ = in_ZMM10._16_48_;
    auVar102._12_4_ = s_expand_32_byte_k_00fa4200._8_4_;
    local_f8 = s_expand_32_byte_k_00fa4200._4_4_;
    uStack_f4 = s_expand_32_byte_k_00fa4200._4_4_;
    uStack_f0 = s_expand_32_byte_k_00fa4200._4_4_;
    uStack_ec = s_expand_32_byte_k_00fa4200._4_4_;
    auVar111._0_8_ = CONCAT44(s_expand_32_byte_k_00fa4200._12_4_,s_expand_32_byte_k_00fa4200._12_4_)
    ;
    auVar111._8_4_ = s_expand_32_byte_k_00fa4200._12_4_;
    auVar111._12_4_ = s_expand_32_byte_k_00fa4200._12_4_;
    local_e8 = s_expand_32_byte_k_00fa4200._8_4_;
    uStack_e4 = s_expand_32_byte_k_00fa4200._8_4_;
    uStack_e0 = s_expand_32_byte_k_00fa4200._8_4_;
    uStack_dc = s_expand_32_byte_k_00fa4200._8_4_;
    local_d8 = s_expand_32_byte_k_00fa4200._12_4_;
    uStack_d4 = s_expand_32_byte_k_00fa4200._12_4_;
    uStack_d0 = s_expand_32_byte_k_00fa4200._12_4_;
    uStack_cc = s_expand_32_byte_k_00fa4200._12_4_;
    uStack_c4 = local_c8;
    auStack_c0._4_4_ = local_c8;
    auStack_c0._0_4_ = local_c8;
    auStack_c0._12_4_ = auStack_c0._8_4_;
    auStack_c0._16_4_ = auStack_c0._8_4_;
    auStack_c0._20_4_ = auStack_c0._8_4_;
    auStack_c0._28_4_ = auStack_c0._24_4_;
    auStack_a0._4_4_ = auStack_c0._24_4_;
    auStack_a0._0_4_ = auStack_c0._24_4_;
    auStack_a0._12_4_ = auStack_a0._8_4_;
    auStack_a0._16_4_ = auStack_a0._8_4_;
    auStack_a0._20_4_ = auStack_a0._8_4_;
    auStack_a0._28_4_ = auStack_a0._24_4_;
    auStack_80._4_4_ = auStack_a0._24_4_;
    auStack_80._0_4_ = auStack_a0._24_4_;
    auStack_80._12_4_ = auStack_80._8_4_;
    auStack_80._16_4_ = auStack_80._8_4_;
    auStack_80._20_4_ = auStack_80._8_4_;
    auStack_80._28_4_ = auStack_80._24_4_;
    uStack_60 = auStack_80._24_4_;
    uStack_5c = auStack_80._24_4_;
    uStack_54 = local_58;
    uStack_50 = local_58;
    uStack_4c = local_58;
    auVar42._4_4_ = local_38;
    auVar42._0_4_ = local_38;
    auVar32._0_4_ = iVar27 + _DAT_00fa4060;
    auVar32._4_4_ = iVar27 + _UNK_00fa4064;
    auVar32._8_4_ = iVar27 + _UNK_00fa4068;
    auVar32._12_4_ = iVar27 + _UNK_00fa406c;
    auVar53._4_4_ = local_28;
    auVar53._0_4_ = local_28;
    uStack_34 = local_38;
    uStack_30 = local_38;
    uStack_2c = local_38;
    local_18._4_4_ = iVar9;
    local_18._0_4_ = iVar9;
    local_18._8_4_ = iVar9;
    local_18._12_4_ = iVar9;
    uStack_24 = local_28;
    uStack_20 = local_28;
    uStack_1c = local_28;
    auVar84 = auVar83;
    auVar96 = auVar95;
    auVar103 = auVar102;
    auVar112 = auVar111;
    while( true ) {
      auVar53._8_4_ = local_28;
      auVar42._8_4_ = local_38;
      auVar53._12_4_ = local_28;
      auVar42._12_4_ = local_38;
      auStack_140._24_4_ = auStack_80._24_4_;
      auStack_140._28_4_ = auStack_80._24_4_;
      iVar27 = 10;
      local_48 = auVar32._0_4_;
      uStack_44 = auVar32._4_4_;
      uStack_40 = auVar32._8_4_;
      uStack_3c = auVar32._12_4_;
      auVar33 = auVar42;
      auVar54 = auVar53;
      auVar60 = local_18;
      uVar72 = auStack_80._8_4_;
      uVar73 = auStack_80._8_4_;
      uVar74 = auStack_80._8_4_;
      uVar75 = auStack_80._8_4_;
      uVar46 = auStack_c0._8_4_;
      uVar118 = auStack_c0._8_4_;
      uVar119 = auStack_c0._8_4_;
      uVar127 = auStack_c0._8_4_;
      uVar49 = auStack_c0._24_4_;
      uVar125 = auStack_c0._24_4_;
      uVar126 = auStack_c0._24_4_;
      uVar57 = auStack_c0._24_4_;
      uVar56 = auStack_a0._8_4_;
      uVar136 = auStack_a0._8_4_;
      uVar137 = auStack_a0._8_4_;
      uVar48 = auStack_a0._8_4_;
      uVar66 = auStack_a0._24_4_;
      uVar69 = auStack_a0._24_4_;
      uVar70 = auStack_a0._24_4_;
      uVar71 = auStack_a0._24_4_;
      uVar63 = local_c8;
      uVar115 = local_c8;
      uVar116 = local_c8;
      uVar117 = local_c8;
      uStack_120 = auStack_80._24_4_;
      uStack_11c = auStack_80._24_4_;
      local_118 = local_58;
      uStack_114 = local_58;
      uStack_110 = local_58;
      uStack_10c = local_58;
      do {
        auVar61 = auStack_140;
        auVar79._0_4_ = auVar84._0_4_ + uVar63;
        auVar79._4_4_ = auVar84._4_4_ + uVar115;
        auVar79._8_4_ = auVar84._8_4_ + uVar116;
        auVar79._12_4_ = auVar84._12_4_ + uVar117;
        auVar91._0_4_ = auVar96._0_4_ + uVar46;
        auVar91._4_4_ = auVar96._4_4_ + uVar118;
        auVar91._8_4_ = auVar96._8_4_ + uVar119;
        auVar91._12_4_ = auVar96._12_4_ + uVar127;
        auVar32 = pshufb(auVar32 ^ auVar79,_DAT_00fa40c0);
        auVar43 = pshufb(auVar33 ^ auVar91,_DAT_00fa40c0);
        uVar66 = uVar66 + auVar32._0_4_;
        uVar69 = uVar69 + auVar32._4_4_;
        uVar70 = uVar70 + auVar32._8_4_;
        uVar71 = uVar71 + auVar32._12_4_;
        uVar72 = uVar72 + auVar43._0_4_;
        uVar73 = uVar73 + auVar43._4_4_;
        uVar74 = uVar74 + auVar43._8_4_;
        uVar75 = uVar75 + auVar43._12_4_;
        uVar63 = uVar63 ^ uVar66;
        uVar115 = uVar115 ^ uVar69;
        uVar116 = uVar116 ^ uVar70;
        uVar117 = uVar117 ^ uVar71;
        uVar46 = uVar46 ^ uVar72;
        uVar118 = uVar118 ^ uVar73;
        uVar119 = uVar119 ^ uVar74;
        uVar127 = uVar127 ^ uVar75;
        uVar63 = uVar63 << 0xc | uVar63 >> 0x14;
        uVar115 = uVar115 << 0xc | uVar115 >> 0x14;
        uVar116 = uVar116 << 0xc | uVar116 >> 0x14;
        uVar117 = uVar117 << 0xc | uVar117 >> 0x14;
        uVar46 = uVar46 << 0xc | uVar46 >> 0x14;
        uVar118 = uVar118 << 0xc | uVar118 >> 0x14;
        uVar119 = uVar119 << 0xc | uVar119 >> 0x14;
        uVar127 = uVar127 << 0xc | uVar127 >> 0x14;
        auVar80._0_4_ = auVar79._0_4_ + uVar63;
        auVar80._4_4_ = auVar79._4_4_ + uVar115;
        auVar80._8_4_ = auVar79._8_4_ + uVar116;
        auVar80._12_4_ = auVar79._12_4_ + uVar117;
        auVar92._0_4_ = auVar91._0_4_ + uVar46;
        auVar92._4_4_ = auVar91._4_4_ + uVar118;
        auVar92._8_4_ = auVar91._8_4_ + uVar119;
        auVar92._12_4_ = auVar91._12_4_ + uVar127;
        auVar33 = pshufb(auVar32 ^ auVar80,_DAT_00fa40d0);
        auVar43 = pshufb(auVar43 ^ auVar92,_DAT_00fa40d0);
        uVar66 = uVar66 + auVar33._0_4_;
        uVar69 = uVar69 + auVar33._4_4_;
        auStack_140._0_4_ = uVar70 + auVar33._8_4_;
        auStack_140._4_4_ = uVar71 + auVar33._12_4_;
        auStack_140._8_4_ = uVar72 + auVar43._0_4_;
        auStack_140._12_4_ = uVar73 + auVar43._4_4_;
        auStack_140._16_4_ = uVar74 + auVar43._8_4_;
        auStack_140._20_4_ = uVar75 + auVar43._12_4_;
        uVar63 = uVar63 ^ uVar66;
        uVar115 = uVar115 ^ uVar69;
        uVar116 = uVar116 ^ auStack_140._0_4_;
        uVar117 = uVar117 ^ auStack_140._4_4_;
        uVar46 = uVar46 ^ auStack_140._8_4_;
        uVar118 = uVar118 ^ auStack_140._12_4_;
        uVar119 = uVar119 ^ auStack_140._16_4_;
        uVar127 = uVar127 ^ auStack_140._20_4_;
        uVar63 = uVar63 << 7 | uVar63 >> 0x19;
        uVar115 = uVar115 << 7 | uVar115 >> 0x19;
        uVar116 = uVar116 << 7 | uVar116 >> 0x19;
        uVar117 = uVar117 << 7 | uVar117 >> 0x19;
        uVar72 = uVar46 << 7 | uVar46 >> 0x19;
        uVar73 = uVar118 << 7 | uVar118 >> 0x19;
        uVar74 = uVar119 << 7 | uVar119 >> 0x19;
        uVar75 = uVar127 << 7 | uVar127 >> 0x19;
        auStack_160._24_4_ = uVar66;
        auStack_160._28_4_ = uVar69;
        auStack_140._24_4_ = auVar61._24_4_;
        auStack_140._28_4_ = auVar61._28_4_;
        auVar98._0_4_ = auVar103._0_4_ + uVar49;
        auVar98._4_4_ = auVar103._4_4_ + uVar125;
        auVar98._8_4_ = auVar103._8_4_ + uVar126;
        auVar98._12_4_ = auVar103._12_4_ + uVar57;
        auVar106._0_4_ = auVar112._0_4_ + uVar56;
        auVar106._4_4_ = auVar112._4_4_ + uVar136;
        auVar106._8_4_ = auVar112._8_4_ + uVar137;
        auVar106._12_4_ = auVar112._12_4_ + uVar48;
        auVar32 = pshufb(auVar54 ^ auVar98,_DAT_00fa40c0);
        auVar60 = pshufb(auVar60 ^ auVar106,_DAT_00fa40c0);
        auStack_140._24_4_ = auStack_140._24_4_ + auVar32._0_4_;
        auStack_140._28_4_ = auStack_140._28_4_ + auVar32._4_4_;
        uStack_120 = uStack_120 + auVar32._8_4_;
        uStack_11c = uStack_11c + auVar32._12_4_;
        local_118 = local_118 + auVar60._0_4_;
        uStack_114 = uStack_114 + auVar60._4_4_;
        uStack_110 = uStack_110 + auVar60._8_4_;
        uStack_10c = uStack_10c + auVar60._12_4_;
        uVar49 = uVar49 ^ auStack_140._24_4_;
        uVar125 = uVar125 ^ auStack_140._28_4_;
        uVar126 = uVar126 ^ uStack_120;
        uVar57 = uVar57 ^ uStack_11c;
        uVar56 = uVar56 ^ local_118;
        uVar136 = uVar136 ^ uStack_114;
        uVar137 = uVar137 ^ uStack_110;
        uVar48 = uVar48 ^ uStack_10c;
        uVar46 = uVar49 << 0xc | uVar49 >> 0x14;
        uVar118 = uVar125 << 0xc | uVar125 >> 0x14;
        uVar119 = uVar126 << 0xc | uVar126 >> 0x14;
        uVar127 = uVar57 << 0xc | uVar57 >> 0x14;
        uVar49 = uVar56 << 0xc | uVar56 >> 0x14;
        uVar125 = uVar136 << 0xc | uVar136 >> 0x14;
        uVar126 = uVar137 << 0xc | uVar137 >> 0x14;
        uVar57 = uVar48 << 0xc | uVar48 >> 0x14;
        auVar99._0_4_ = auVar98._0_4_ + uVar46;
        auVar99._4_4_ = auVar98._4_4_ + uVar118;
        auVar99._8_4_ = auVar98._8_4_ + uVar119;
        auVar99._12_4_ = auVar98._12_4_ + uVar127;
        auVar107._0_4_ = auVar106._0_4_ + uVar49;
        auVar107._4_4_ = auVar106._4_4_ + uVar125;
        auVar107._8_4_ = auVar106._8_4_ + uVar126;
        auVar107._12_4_ = auVar106._12_4_ + uVar57;
        auVar54 = pshufb(auVar32 ^ auVar99,_DAT_00fa40d0);
        auVar32 = pshufb(auVar60 ^ auVar107,_DAT_00fa40d0);
        auStack_140._24_4_ = auStack_140._24_4_ + auVar54._0_4_;
        auStack_140._28_4_ = auStack_140._28_4_ + auVar54._4_4_;
        uStack_120 = uStack_120 + auVar54._8_4_;
        uStack_11c = uStack_11c + auVar54._12_4_;
        local_118 = local_118 + auVar32._0_4_;
        uStack_114 = uStack_114 + auVar32._4_4_;
        uStack_110 = uStack_110 + auVar32._8_4_;
        uStack_10c = uStack_10c + auVar32._12_4_;
        uVar46 = uVar46 ^ auStack_140._24_4_;
        uVar118 = uVar118 ^ auStack_140._28_4_;
        uVar119 = uVar119 ^ uStack_120;
        uVar127 = uVar127 ^ uStack_11c;
        uVar49 = uVar49 ^ local_118;
        uVar125 = uVar125 ^ uStack_114;
        uVar126 = uVar126 ^ uStack_110;
        uVar57 = uVar57 ^ uStack_10c;
        uVar46 = uVar46 << 7 | uVar46 >> 0x19;
        uVar118 = uVar118 << 7 | uVar118 >> 0x19;
        uVar119 = uVar119 << 7 | uVar119 >> 0x19;
        uVar127 = uVar127 << 7 | uVar127 >> 0x19;
        uVar56 = uVar49 << 7 | uVar49 >> 0x19;
        uVar136 = uVar125 << 7 | uVar125 >> 0x19;
        uVar137 = uVar126 << 7 | uVar126 >> 0x19;
        uVar48 = uVar57 << 7 | uVar57 >> 0x19;
        auVar81._0_4_ = auVar80._0_4_ + uVar72;
        auVar81._4_4_ = auVar80._4_4_ + uVar73;
        auVar81._8_4_ = auVar80._8_4_ + uVar74;
        auVar81._12_4_ = auVar80._12_4_ + uVar75;
        auVar93._0_4_ = auVar92._0_4_ + uVar46;
        auVar93._4_4_ = auVar92._4_4_ + uVar118;
        auVar93._8_4_ = auVar92._8_4_ + uVar119;
        auVar93._12_4_ = auVar92._12_4_ + uVar127;
        auVar32 = pshufb(auVar32 ^ auVar81,_DAT_00fa40c0);
        auVar33 = pshufb(auVar33 ^ auVar93,_DAT_00fa40c0);
        auStack_140._24_4_ = auStack_140._24_4_ + auVar32._0_4_;
        auStack_140._28_4_ = auStack_140._28_4_ + auVar32._4_4_;
        uStack_120 = uStack_120 + auVar32._8_4_;
        uStack_11c = uStack_11c + auVar32._12_4_;
        local_118 = local_118 + auVar33._0_4_;
        uStack_114 = uStack_114 + auVar33._4_4_;
        uStack_110 = uStack_110 + auVar33._8_4_;
        uStack_10c = uStack_10c + auVar33._12_4_;
        uVar72 = uVar72 ^ auStack_140._24_4_;
        uVar73 = uVar73 ^ auStack_140._28_4_;
        uVar74 = uVar74 ^ uStack_120;
        uVar75 = uVar75 ^ uStack_11c;
        uVar46 = uVar46 ^ local_118;
        uVar118 = uVar118 ^ uStack_114;
        uVar119 = uVar119 ^ uStack_110;
        uVar127 = uVar127 ^ uStack_10c;
        uVar72 = uVar72 << 0xc | uVar72 >> 0x14;
        uVar73 = uVar73 << 0xc | uVar73 >> 0x14;
        uVar74 = uVar74 << 0xc | uVar74 >> 0x14;
        uVar75 = uVar75 << 0xc | uVar75 >> 0x14;
        uVar49 = uVar46 << 0xc | uVar46 >> 0x14;
        uVar125 = uVar118 << 0xc | uVar118 >> 0x14;
        uVar126 = uVar119 << 0xc | uVar119 >> 0x14;
        uVar57 = uVar127 << 0xc | uVar127 >> 0x14;
        auVar82._0_4_ = auVar81._0_4_ + uVar72;
        auVar82._4_4_ = auVar81._4_4_ + uVar73;
        auVar82._8_4_ = auVar81._8_4_ + uVar74;
        auVar82._12_4_ = auVar81._12_4_ + uVar75;
        auVar84._0_16_ = auVar82;
        auVar94._0_4_ = auVar93._0_4_ + uVar49;
        auVar94._4_4_ = auVar93._4_4_ + uVar125;
        auVar94._8_4_ = auVar93._8_4_ + uVar126;
        auVar94._12_4_ = auVar93._12_4_ + uVar57;
        auVar96._0_16_ = auVar94;
        auVar60 = pshufb(auVar32 ^ auVar82,_DAT_00fa40d0);
        auVar32 = pshufb(auVar33 ^ auVar94,_DAT_00fa40d0);
        auStack_140._24_4_ = auStack_140._24_4_ + auVar60._0_4_;
        auStack_140._28_4_ = auStack_140._28_4_ + auVar60._4_4_;
        uStack_120 = uStack_120 + auVar60._8_4_;
        uStack_11c = uStack_11c + auVar60._12_4_;
        local_118 = local_118 + auVar32._0_4_;
        uStack_114 = uStack_114 + auVar32._4_4_;
        uStack_110 = uStack_110 + auVar32._8_4_;
        uStack_10c = uStack_10c + auVar32._12_4_;
        uVar72 = uVar72 ^ auStack_140._24_4_;
        uVar73 = uVar73 ^ auStack_140._28_4_;
        uVar74 = uVar74 ^ uStack_120;
        uVar75 = uVar75 ^ uStack_11c;
        uVar49 = uVar49 ^ local_118;
        uVar125 = uVar125 ^ uStack_114;
        uVar126 = uVar126 ^ uStack_110;
        uVar57 = uVar57 ^ uStack_10c;
        uVar46 = uVar72 << 7 | uVar72 >> 0x19;
        uVar118 = uVar73 << 7 | uVar73 >> 0x19;
        uVar119 = uVar74 << 7 | uVar74 >> 0x19;
        uVar127 = uVar75 << 7 | uVar75 >> 0x19;
        uVar49 = uVar49 << 7 | uVar49 >> 0x19;
        uVar125 = uVar125 << 7 | uVar125 >> 0x19;
        uVar126 = uVar126 << 7 | uVar126 >> 0x19;
        uVar57 = uVar57 << 7 | uVar57 >> 0x19;
        auVar100._0_4_ = auVar99._0_4_ + uVar56;
        auVar100._4_4_ = auVar99._4_4_ + uVar136;
        auVar100._8_4_ = auVar99._8_4_ + uVar137;
        auVar100._12_4_ = auVar99._12_4_ + uVar48;
        auVar108._0_4_ = auVar107._0_4_ + uVar63;
        auVar108._4_4_ = auVar107._4_4_ + uVar115;
        auVar108._8_4_ = auVar107._8_4_ + uVar116;
        auVar108._12_4_ = auVar107._12_4_ + uVar117;
        auVar33 = pshufb(auVar43 ^ auVar100,_DAT_00fa40c0);
        auVar54 = pshufb(auVar54 ^ auVar108,_DAT_00fa40c0);
        uVar66 = uVar66 + auVar33._0_4_;
        uVar69 = uVar69 + auVar33._4_4_;
        uVar70 = auStack_140._0_4_ + auVar33._8_4_;
        uVar71 = auStack_140._4_4_ + auVar33._12_4_;
        uVar72 = auStack_140._8_4_ + auVar54._0_4_;
        uVar73 = auStack_140._12_4_ + auVar54._4_4_;
        uVar74 = auStack_140._16_4_ + auVar54._8_4_;
        uVar75 = auStack_140._20_4_ + auVar54._12_4_;
        uVar56 = uVar56 ^ uVar66;
        uVar136 = uVar136 ^ uVar69;
        uVar137 = uVar137 ^ uVar70;
        uVar48 = uVar48 ^ uVar71;
        uVar63 = uVar63 ^ uVar72;
        uVar115 = uVar115 ^ uVar73;
        uVar116 = uVar116 ^ uVar74;
        uVar117 = uVar117 ^ uVar75;
        uVar56 = uVar56 << 0xc | uVar56 >> 0x14;
        uVar136 = uVar136 << 0xc | uVar136 >> 0x14;
        uVar137 = uVar137 << 0xc | uVar137 >> 0x14;
        uVar48 = uVar48 << 0xc | uVar48 >> 0x14;
        uVar63 = uVar63 << 0xc | uVar63 >> 0x14;
        uVar115 = uVar115 << 0xc | uVar115 >> 0x14;
        uVar116 = uVar116 << 0xc | uVar116 >> 0x14;
        uVar117 = uVar117 << 0xc | uVar117 >> 0x14;
        auVar101._0_4_ = auVar100._0_4_ + uVar56;
        auVar101._4_4_ = auVar100._4_4_ + uVar136;
        auVar101._8_4_ = auVar100._8_4_ + uVar137;
        auVar101._12_4_ = auVar100._12_4_ + uVar48;
        auVar103._0_16_ = auVar101;
        auVar109._0_4_ = auVar108._0_4_ + uVar63;
        auVar109._4_4_ = auVar108._4_4_ + uVar115;
        auVar109._8_4_ = auVar108._8_4_ + uVar116;
        auVar109._12_4_ = auVar108._12_4_ + uVar117;
        auVar112._0_16_ = auVar109;
        auVar33 = pshufb(auVar33 ^ auVar101,_DAT_00fa40d0);
        auVar54 = pshufb(auVar54 ^ auVar109,_DAT_00fa40d0);
        uVar66 = uVar66 + auVar33._0_4_;
        uVar69 = uVar69 + auVar33._4_4_;
        uVar70 = uVar70 + auVar33._8_4_;
        uVar71 = uVar71 + auVar33._12_4_;
        uVar72 = uVar72 + auVar54._0_4_;
        uVar73 = uVar73 + auVar54._4_4_;
        uVar74 = uVar74 + auVar54._8_4_;
        uVar75 = uVar75 + auVar54._12_4_;
        uVar56 = uVar56 ^ uVar66;
        uVar136 = uVar136 ^ uVar69;
        uVar137 = uVar137 ^ uVar70;
        uVar48 = uVar48 ^ uVar71;
        uVar63 = uVar63 ^ uVar72;
        uVar115 = uVar115 ^ uVar73;
        uVar116 = uVar116 ^ uVar74;
        uVar117 = uVar117 ^ uVar75;
        uVar56 = uVar56 << 7 | uVar56 >> 0x19;
        uVar136 = uVar136 << 7 | uVar136 >> 0x19;
        uVar137 = uVar137 << 7 | uVar137 >> 0x19;
        uVar48 = uVar48 << 7 | uVar48 >> 0x19;
        uVar63 = uVar63 << 7 | uVar63 >> 0x19;
        uVar115 = uVar115 << 7 | uVar115 >> 0x19;
        uVar116 = uVar116 << 7 | uVar116 >> 0x19;
        uVar117 = uVar117 << 7 | uVar117 >> 0x19;
        iVar27 = iVar27 + -1;
      } while (iVar27 != 0);
      auVar85._0_8_ = CONCAT44(auVar82._4_4_ + uVar23,auVar82._0_4_ + uVar23);
      auVar86._8_4_ = auVar82._8_4_ + uVar23;
      auVar86._0_8_ = auVar85._0_8_;
      auVar104._0_8_ = CONCAT44(auVar101._4_4_ + uVar25,auVar101._0_4_ + uVar25);
      auVar105._8_4_ = auVar101._8_4_ + uVar25;
      auVar105._0_8_ = auVar104._0_8_;
      iVar113 = auVar109._8_4_ + uVar26;
      auVar86._12_4_ = auVar94._4_4_ + uVar24;
      auVar86._16_48_ = auVar84._16_48_;
      auVar85._12_52_ = auVar86._12_52_;
      auVar85._8_4_ = auVar82._4_4_ + uVar23;
      auStack_160._24_8_ = CONCAT44(auVar94._0_4_ + uVar24,auVar82._0_4_ + uVar23);
      auVar105._12_4_ = auVar109._4_4_ + uVar26;
      auVar105._16_48_ = auVar103._16_48_;
      auVar104._12_52_ = auVar105._12_52_;
      auVar104._8_4_ = auVar101._4_4_ + uVar25;
      auStack_140._0_8_ = CONCAT44(auVar109._0_4_ + uVar26,auVar101._0_4_ + uVar25);
      auStack_140._8_8_ = auVar85._8_8_;
      auStack_140._16_8_ = auVar104._8_8_;
      uVar115 = uVar115 + local_c8;
      uVar116 = uVar116 + local_c8;
      uVar118 = uVar118 + auStack_c0._8_4_;
      uVar119 = uVar119 + auStack_c0._8_4_;
      uVar125 = uVar125 + auStack_c0._24_4_;
      uVar126 = uVar126 + auStack_c0._24_4_;
      uVar136 = uVar136 + auStack_a0._8_4_;
      uVar137 = uVar137 + auStack_a0._8_4_;
      uVar114 = CONCAT44(uVar46 + auStack_c0._8_4_,uVar63 + local_c8);
      uVar120 = CONCAT44(uVar56 + auStack_a0._8_4_,uVar49 + auStack_c0._24_4_);
      uVar69 = uVar69 + auStack_a0._24_4_;
      uVar70 = uVar70 + auStack_a0._24_4_;
      uVar73 = uVar73 + auStack_80._8_4_;
      uVar74 = uVar74 + auStack_80._8_4_;
      iVar77 = auStack_140._24_4_ + auStack_80._24_4_;
      iVar89 = auStack_140._28_4_ + auStack_80._24_4_;
      auVar87._0_8_ = CONCAT44(iVar89,iVar77);
      auVar88._8_4_ = uStack_120 + auStack_80._24_4_;
      auVar88._0_8_ = auVar87._0_8_;
      uVar97 = uStack_110 + local_58;
      auStack_140._24_4_ = auVar86._8_4_;
      auStack_140._28_4_ = auVar94._8_4_ + uVar24;
      uVar67 = CONCAT44(uVar72 + auStack_80._8_4_,uVar66 + auStack_a0._24_4_);
      auVar88._12_4_ = uStack_114 + local_58;
      auVar88._16_48_ = auVar84._16_48_;
      auVar87._12_52_ = auVar88._12_52_;
      auVar87._8_4_ = iVar89;
      uVar78 = CONCAT44(local_118 + local_58,iVar77);
      uVar90 = auVar87._8_8_;
      iVar27 = auVar32._0_4_ + local_48;
      iVar38 = auVar32._4_4_ + uStack_44;
      auVar36._0_8_ = CONCAT44(iVar38,iVar27);
      auVar37._8_4_ = auVar32._8_4_ + uStack_40;
      auVar37._0_8_ = auVar36._0_8_;
      uVar72 = auVar32._12_4_ + uStack_3c;
      iVar39 = auVar33._0_4_ + local_38;
      iVar45 = auVar33._4_4_ + local_38;
      uVar46 = auVar33._8_4_ + local_38;
      uVar49 = auVar33._12_4_ + local_38;
      iVar50 = auVar54._0_4_ + local_28;
      uVar56 = auVar54._4_4_ + local_28;
      uVar66 = auVar54._8_4_ + local_28;
      uStack_110 = auVar54._12_4_ + local_28;
      iVar58 = auVar60._0_4_ + iVar9;
      uVar63 = auVar60._4_4_ + iVar9;
      uVar64 = auVar60._8_4_ + iVar9;
      uVar65 = auVar60._12_4_ + iVar9;
      auVar37._12_4_ = iVar45;
      auVar37._16_48_ = auVar35._16_48_;
      auVar36._12_52_ = auVar37._12_52_;
      auVar36._8_4_ = iVar38;
      uVar29 = CONCAT44(iVar39,iVar27);
      uVar51 = CONCAT44(iVar58,iVar50);
      uVar47 = auVar36._8_8_;
      if (param_2 < 0x100) break;
      uVar20 = unaff_RSI[1];
      uVar15 = unaff_RSI[2];
      uVar16 = unaff_RSI[3];
      uVar13 = unaff_RSI[4];
      uVar14 = unaff_RSI[5];
      uVar10 = unaff_RSI[6];
      uVar11 = unaff_RSI[7];
      *unaff_RDI = *unaff_RSI ^ auStack_160._24_8_;
      unaff_RDI[1] = uVar20 ^ auStack_140._0_8_;
      uVar20 = unaff_RSI[8];
      uVar21 = unaff_RSI[9];
      unaff_RDI[2] = uVar15 ^ uVar114;
      unaff_RDI[3] = uVar16 ^ uVar120;
      uVar120 = unaff_RSI[10];
      uVar19 = *(uint *)((longlong)unaff_RSI + 0x54);
      uVar114 = unaff_RSI[0xb];
      uVar17 = *(uint *)((longlong)unaff_RSI + 0x5c);
      unaff_RDI[4] = uVar13 ^ uVar67;
      unaff_RDI[5] = uVar14 ^ uVar78;
      uVar13 = unaff_RSI[0xc];
      uVar18 = *(uint *)((longlong)unaff_RSI + 100);
      uVar67 = unaff_RSI[0xd];
      unaff_RDI[6] = uVar10 ^ uVar29;
      unaff_RDI[7] = uVar11 ^ uVar51;
      uVar29 = unaff_RSI[0xe];
      uVar10 = unaff_RSI[0xf];
      uVar12 = *(uint *)((longlong)unaff_RSI + 0x7c);
      unaff_RDI[8] = uVar20 ^ auStack_140._8_8_;
      unaff_RDI[9] = uVar21 ^ auStack_140._16_8_;
      uVar51 = unaff_RSI[0x10];
      uVar78 = unaff_RSI[0x11];
      *(uint *)(unaff_RDI + 10) = (uint)uVar120 ^ uVar115;
      *(uint *)((longlong)unaff_RDI + 0x54) = uVar19 ^ uVar118;
      *(uint *)(unaff_RDI + 0xb) = (uint)uVar114 ^ uVar125;
      *(uint *)((longlong)unaff_RDI + 0x5c) = uVar17 ^ uVar136;
      uVar120 = unaff_RSI[0x12];
      uVar115 = *(uint *)((longlong)unaff_RSI + 0x94);
      uVar114 = unaff_RSI[0x13];
      uVar125 = *(uint *)((longlong)unaff_RSI + 0x9c);
      *(uint *)(unaff_RDI + 0xc) = (uint)uVar13 ^ uVar69;
      *(uint *)((longlong)unaff_RDI + 100) = uVar18 ^ uVar73;
      unaff_RDI[0xd] = uVar67 ^ uVar90;
      uVar67 = unaff_RSI[0x14];
      uVar118 = *(uint *)((longlong)unaff_RSI + 0xa4);
      uVar90 = unaff_RSI[0x15];
      uVar136 = *(uint *)((longlong)unaff_RSI + 0xac);
      unaff_RDI[0xe] = uVar29 ^ uVar47;
      *(uint *)(unaff_RDI + 0xf) = (uint)uVar10 ^ uVar56;
      *(uint *)((longlong)unaff_RDI + 0x7c) = uVar12 ^ uVar63;
      uVar10 = unaff_RSI[0x16];
      uVar73 = *(uint *)((longlong)unaff_RSI + 0xb4);
      uVar11 = unaff_RSI[0x17];
      uVar56 = *(uint *)((longlong)unaff_RSI + 0xbc);
      unaff_RDI[0x10] = uVar51 ^ auStack_140._24_8_;
      unaff_RDI[0x11] = uVar78 ^ CONCAT44(iVar113,auVar105._8_4_);
      uVar29 = unaff_RSI[0x18];
      uVar47 = unaff_RSI[0x19];
      *(uint *)(unaff_RDI + 0x12) = (uint)uVar120 ^ uVar116;
      *(uint *)((longlong)unaff_RDI + 0x94) = uVar115 ^ uVar119;
      *(uint *)(unaff_RDI + 0x13) = (uint)uVar114 ^ uVar126;
      *(uint *)((longlong)unaff_RDI + 0x9c) = uVar125 ^ uVar137;
      uVar78 = unaff_RSI[0x1a];
      uVar125 = *(uint *)((longlong)unaff_RSI + 0xd4);
      uVar51 = unaff_RSI[0x1b];
      uVar119 = *(uint *)((longlong)unaff_RSI + 0xdc);
      *(uint *)(unaff_RDI + 0x14) = (uint)uVar67 ^ uVar70;
      *(uint *)((longlong)unaff_RDI + 0xa4) = uVar118 ^ uVar74;
      *(uint *)(unaff_RDI + 0x15) = (uint)uVar90 ^ auVar88._8_4_;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar136 ^ uVar97;
      uVar67 = unaff_RSI[0x1c];
      uVar74 = *(uint *)((longlong)unaff_RSI + 0xe4);
      uVar90 = unaff_RSI[0x1d];
      uVar118 = *(uint *)((longlong)unaff_RSI + 0xec);
      *(uint *)(unaff_RDI + 0x16) = (uint)uVar10 ^ auVar37._8_4_;
      *(uint *)((longlong)unaff_RDI + 0xb4) = uVar73 ^ uVar46;
      *(uint *)(unaff_RDI + 0x17) = (uint)uVar11 ^ uVar66;
      *(uint *)((longlong)unaff_RDI + 0xbc) = uVar56 ^ uVar64;
      uVar114 = unaff_RSI[0x1e];
      uVar73 = *(uint *)((longlong)unaff_RSI + 0xf4);
      uVar120 = unaff_RSI[0x1f];
      uVar46 = *(uint *)((longlong)unaff_RSI + 0xfc);
      unaff_RSI = unaff_RSI + 0x20;
      unaff_RDI[0x18] = uVar29 ^ CONCAT44(auVar94._12_4_ + uVar24,auVar82._12_4_ + uVar23);
      unaff_RDI[0x19] = uVar47 ^ CONCAT44(auVar109._12_4_ + uVar26,auVar101._12_4_ + uVar25);
      *(uint *)(unaff_RDI + 0x1a) = (uint)uVar78 ^ uVar117 + local_c8;
      *(uint *)((longlong)unaff_RDI + 0xd4) = uVar125 ^ uVar127 + auStack_c0._8_4_;
      *(uint *)(unaff_RDI + 0x1b) = (uint)uVar51 ^ uVar57 + auStack_c0._24_4_;
      *(uint *)((longlong)unaff_RDI + 0xdc) = uVar119 ^ uVar48 + auStack_a0._8_4_;
      *(uint *)(unaff_RDI + 0x1c) = (uint)uVar67 ^ uVar71 + auStack_a0._24_4_;
      *(uint *)((longlong)unaff_RDI + 0xe4) = uVar74 ^ uVar75 + auStack_80._8_4_;
      *(uint *)(unaff_RDI + 0x1d) = (uint)uVar90 ^ uStack_11c + auStack_80._24_4_;
      *(uint *)((longlong)unaff_RDI + 0xec) = uVar118 ^ uStack_10c + local_58;
      *(uint *)(unaff_RDI + 0x1e) = (uint)uVar114 ^ uVar72;
      *(uint *)((longlong)unaff_RDI + 0xf4) = uVar73 ^ uVar49;
      *(uint *)(unaff_RDI + 0x1f) = (uint)uVar120 ^ uStack_110;
      *(uint *)((longlong)unaff_RDI + 0xfc) = uVar46 ^ uVar65;
      unaff_RDI = unaff_RDI + 0x20;
      param_2 = param_2 - 0x100;
      if (param_2 == 0) {
        return;
      }
      auVar84._8_4_ = uVar23;
      auVar84._0_8_ = auVar83._0_8_;
      auVar84._12_4_ = uVar23;
      auVar96._8_4_ = uVar24;
      auVar96._0_8_ = auVar95._0_8_;
      auVar96._12_4_ = uVar24;
      auVar103._8_4_ = uVar25;
      auVar103._0_8_ = auVar102._0_8_;
      auVar103._12_4_ = uVar25;
      auVar112._8_4_ = uVar26;
      auVar112._0_8_ = auVar111._0_8_;
      auVar112._12_4_ = uVar26;
      auVar32._0_4_ = local_48 + _DAT_00fa4070;
      auVar32._4_4_ = uStack_44 + _UNK_00fa4074;
      auVar32._8_4_ = uStack_40 + _UNK_00fa4078;
      auVar32._12_4_ = uStack_3c + _UNK_00fa407c;
    }
    if (param_2 < 0xc0) {
      if (param_2 < 0x80) {
        if (param_2 < 0x40) {
          auStack_140._8_8_ = uVar114;
          auStack_140._16_8_ = uVar120;
          auStack_140._24_8_ = uVar67;
          uStack_120 = iVar77;
          uStack_11c = local_118 + local_58;
          local_118 = iVar27;
          uStack_114 = iVar39;
          uStack_110 = iVar50;
          uStack_10c = iVar58;
          lVar28 = 0;
        }
        else {
          uVar15 = unaff_RSI[1];
          uVar13 = unaff_RSI[2];
          uVar14 = unaff_RSI[3];
          uVar10 = unaff_RSI[4];
          uVar11 = unaff_RSI[5];
          uVar47 = unaff_RSI[6];
          uVar90 = unaff_RSI[7];
          *unaff_RDI = *unaff_RSI ^ auStack_160._24_8_;
          unaff_RDI[1] = uVar15 ^ auStack_140._0_8_;
          unaff_RDI[2] = uVar13 ^ uVar114;
          unaff_RDI[3] = uVar14 ^ uVar120;
          unaff_RDI[4] = uVar10 ^ uVar67;
          unaff_RDI[5] = uVar11 ^ uVar78;
          unaff_RDI[6] = uVar47 ^ uVar29;
          unaff_RDI[7] = uVar90 ^ uVar51;
          if (param_2 == 0x40) {
            return;
          }
          unaff_RSI = unaff_RSI + 8;
          lVar28 = 0;
          auStack_160._24_8_ = auStack_140._8_8_;
          auStack_140._8_4_ = uVar115;
          auStack_140._0_8_ = auStack_140._16_8_;
          auStack_140._12_4_ = uVar118;
          auStack_140._16_4_ = uVar125;
          auStack_140._20_4_ = uVar136;
          unaff_RDI = unaff_RDI + 8;
          auStack_140._24_4_ = uVar69;
          auStack_140._28_4_ = uVar73;
          uStack_120 = iVar89;
          uStack_11c = uStack_114 + local_58;
          param_2 = param_2 - 0x40;
          local_118 = iVar38;
          uStack_114 = iVar45;
          uStack_110 = uVar56;
          uStack_10c = uVar63;
        }
      }
      else {
        uVar20 = unaff_RSI[1];
        uVar15 = unaff_RSI[2];
        uVar16 = unaff_RSI[3];
        uVar13 = unaff_RSI[4];
        uVar14 = unaff_RSI[5];
        uVar10 = unaff_RSI[6];
        uVar11 = unaff_RSI[7];
        *unaff_RDI = *unaff_RSI ^ auStack_160._24_8_;
        unaff_RDI[1] = uVar20 ^ auStack_140._0_8_;
        uVar20 = unaff_RSI[8];
        uVar21 = unaff_RSI[9];
        unaff_RDI[2] = uVar15 ^ uVar114;
        unaff_RDI[3] = uVar16 ^ uVar120;
        uVar120 = unaff_RSI[10];
        uVar49 = *(uint *)((longlong)unaff_RSI + 0x54);
        uVar114 = unaff_RSI[0xb];
        uVar75 = *(uint *)((longlong)unaff_RSI + 0x5c);
        unaff_RDI[4] = uVar13 ^ uVar67;
        unaff_RDI[5] = uVar14 ^ uVar78;
        uVar78 = unaff_RSI[0xc];
        uVar127 = *(uint *)((longlong)unaff_RSI + 100);
        uVar67 = unaff_RSI[0xd];
        unaff_RDI[6] = uVar10 ^ uVar29;
        unaff_RDI[7] = uVar11 ^ uVar51;
        uVar29 = unaff_RSI[0xe];
        uVar51 = unaff_RSI[0xf];
        uVar72 = *(uint *)((longlong)unaff_RSI + 0x7c);
        unaff_RDI[8] = uVar20 ^ auStack_140._8_8_;
        unaff_RDI[9] = uVar21 ^ auStack_140._16_8_;
        *(uint *)(unaff_RDI + 10) = (uint)uVar120 ^ uVar115;
        *(uint *)((longlong)unaff_RDI + 0x54) = uVar49 ^ uVar118;
        *(uint *)(unaff_RDI + 0xb) = (uint)uVar114 ^ uVar125;
        *(uint *)((longlong)unaff_RDI + 0x5c) = uVar75 ^ uVar136;
        *(uint *)(unaff_RDI + 0xc) = (uint)uVar78 ^ uVar69;
        *(uint *)((longlong)unaff_RDI + 100) = uVar127 ^ uVar73;
        unaff_RDI[0xd] = uVar67 ^ uVar90;
        unaff_RDI[0xe] = uVar29 ^ uVar47;
        *(uint *)(unaff_RDI + 0xf) = (uint)uVar51 ^ uVar56;
        *(uint *)((longlong)unaff_RDI + 0x7c) = uVar72 ^ uVar63;
        if (param_2 == 0x80) {
          return;
        }
        auStack_140._4_4_ = iVar113;
        auStack_140._0_4_ = auVar105._8_4_;
        unaff_RSI = unaff_RSI + 0x10;
        lVar28 = 0;
        auStack_160._24_8_ = auStack_140._24_8_;
        auStack_140._8_4_ = uVar116;
        auStack_140._12_4_ = uVar119;
        auStack_140._16_4_ = uVar126;
        auStack_140._20_4_ = uVar137;
        unaff_RDI = unaff_RDI + 0x10;
        auStack_140._24_4_ = uVar70;
        auStack_140._28_4_ = uVar74;
        uStack_120 = auVar88._8_4_;
        uStack_11c = uVar97;
        param_2 = param_2 - 0x80;
        local_118 = auVar37._8_4_;
        uStack_114 = uVar46;
        uStack_110 = uVar66;
        uStack_10c = uVar64;
      }
    }
    else {
      uVar20 = unaff_RSI[1];
      uVar15 = unaff_RSI[2];
      uVar16 = unaff_RSI[3];
      uVar13 = unaff_RSI[4];
      uVar14 = unaff_RSI[5];
      uVar10 = unaff_RSI[6];
      uVar11 = unaff_RSI[7];
      *unaff_RDI = *unaff_RSI ^ auStack_160._24_8_;
      unaff_RDI[1] = uVar20 ^ auStack_140._0_8_;
      uVar20 = unaff_RSI[8];
      uVar21 = unaff_RSI[9];
      unaff_RDI[2] = uVar15 ^ uVar114;
      unaff_RDI[3] = uVar16 ^ uVar120;
      uVar120 = unaff_RSI[10];
      uVar19 = *(uint *)((longlong)unaff_RSI + 0x54);
      uVar114 = unaff_RSI[0xb];
      uVar17 = *(uint *)((longlong)unaff_RSI + 0x5c);
      unaff_RDI[4] = uVar13 ^ uVar67;
      unaff_RDI[5] = uVar14 ^ uVar78;
      uVar13 = unaff_RSI[0xc];
      uVar18 = *(uint *)((longlong)unaff_RSI + 100);
      uVar67 = unaff_RSI[0xd];
      unaff_RDI[6] = uVar10 ^ uVar29;
      unaff_RDI[7] = uVar11 ^ uVar51;
      uVar29 = unaff_RSI[0xe];
      uVar10 = unaff_RSI[0xf];
      uVar12 = *(uint *)((longlong)unaff_RSI + 0x7c);
      unaff_RDI[8] = uVar20 ^ auStack_140._8_8_;
      unaff_RDI[9] = uVar21 ^ auStack_140._16_8_;
      uVar51 = unaff_RSI[0x10];
      uVar78 = unaff_RSI[0x11];
      *(uint *)(unaff_RDI + 10) = (uint)uVar120 ^ uVar115;
      *(uint *)((longlong)unaff_RDI + 0x54) = uVar19 ^ uVar118;
      *(uint *)(unaff_RDI + 0xb) = (uint)uVar114 ^ uVar125;
      *(uint *)((longlong)unaff_RDI + 0x5c) = uVar17 ^ uVar136;
      uVar120 = unaff_RSI[0x12];
      uVar115 = *(uint *)((longlong)unaff_RSI + 0x94);
      uVar114 = unaff_RSI[0x13];
      uVar125 = *(uint *)((longlong)unaff_RSI + 0x9c);
      *(uint *)(unaff_RDI + 0xc) = (uint)uVar13 ^ uVar69;
      *(uint *)((longlong)unaff_RDI + 100) = uVar18 ^ uVar73;
      unaff_RDI[0xd] = uVar67 ^ uVar90;
      uVar67 = unaff_RSI[0x14];
      uVar118 = *(uint *)((longlong)unaff_RSI + 0xa4);
      uVar90 = unaff_RSI[0x15];
      uVar136 = *(uint *)((longlong)unaff_RSI + 0xac);
      unaff_RDI[0xe] = uVar29 ^ uVar47;
      *(uint *)(unaff_RDI + 0xf) = (uint)uVar10 ^ uVar56;
      *(uint *)((longlong)unaff_RDI + 0x7c) = uVar12 ^ uVar63;
      uVar29 = unaff_RSI[0x16];
      uVar73 = *(uint *)((longlong)unaff_RSI + 0xb4);
      uVar47 = unaff_RSI[0x17];
      uVar56 = *(uint *)((longlong)unaff_RSI + 0xbc);
      unaff_RDI[0x10] = uVar51 ^ auStack_140._24_8_;
      unaff_RDI[0x11] = uVar78 ^ CONCAT44(iVar113,auVar105._8_4_);
      *(uint *)(unaff_RDI + 0x12) = (uint)uVar120 ^ uVar116;
      *(uint *)((longlong)unaff_RDI + 0x94) = uVar115 ^ uVar119;
      *(uint *)(unaff_RDI + 0x13) = (uint)uVar114 ^ uVar126;
      *(uint *)((longlong)unaff_RDI + 0x9c) = uVar125 ^ uVar137;
      *(uint *)(unaff_RDI + 0x14) = (uint)uVar67 ^ uVar70;
      *(uint *)((longlong)unaff_RDI + 0xa4) = uVar118 ^ uVar74;
      *(uint *)(unaff_RDI + 0x15) = (uint)uVar90 ^ auVar88._8_4_;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar136 ^ uVar97;
      *(uint *)(unaff_RDI + 0x16) = (uint)uVar29 ^ auVar37._8_4_;
      *(uint *)((longlong)unaff_RDI + 0xb4) = uVar73 ^ uVar46;
      *(uint *)(unaff_RDI + 0x17) = (uint)uVar47 ^ uVar66;
      *(uint *)((longlong)unaff_RDI + 0xbc) = uVar56 ^ uVar64;
      if (param_2 == 0xc0) {
        return;
      }
      auStack_160._28_4_ = auVar94._12_4_ + uVar24;
      auStack_160._24_4_ = auVar82._12_4_ + uVar23;
      auStack_140._4_4_ = auVar109._12_4_ + uVar26;
      auStack_140._0_4_ = auVar101._12_4_ + uVar25;
      unaff_RSI = unaff_RSI + 0x18;
      lVar28 = 0;
      auStack_140._8_4_ = uVar117 + local_c8;
      auStack_140._12_4_ = uVar127 + auStack_c0._8_4_;
      auStack_140._16_4_ = uVar57 + auStack_c0._24_4_;
      auStack_140._20_4_ = uVar48 + auStack_a0._8_4_;
      unaff_RDI = unaff_RDI + 0x18;
      auStack_140._24_4_ = uVar71 + auStack_a0._24_4_;
      auStack_140._28_4_ = uVar75 + auStack_80._8_4_;
      uStack_120 = uStack_11c + auStack_80._24_4_;
      uStack_11c = uStack_10c + local_58;
      param_2 = param_2 - 0xc0;
      local_118 = uVar72;
      uStack_114 = uVar49;
      uStack_10c = uVar65;
    }
    do {
      *(byte *)((longlong)unaff_RDI + lVar28) =
           *(byte *)((longlong)unaff_RSI + lVar28) ^ auStack_160[lVar28 + 0x18];
      param_2 = param_2 - 1;
      lVar28 = lVar28 + 1;
    } while (param_2 != 0);
    return;
  }
  uVar22 = CONCAT44(s_expand_32_byte_k_00fa4200._4_4_,s_expand_32_byte_k_00fa4200._0_4_);
  auVar35._8_4_ = s_expand_32_byte_k_00fa4200._8_4_;
  auVar35._0_8_ = uVar22;
  auVar35._12_4_ = s_expand_32_byte_k_00fa4200._12_4_;
  uVar72 = *(uint *)*param_1;
  uVar73 = *(uint *)(*param_1 + 4);
  uVar74 = *(uint *)(*param_1 + 8);
  uVar75 = *(uint *)(*param_1 + 0xc);
  uVar46 = *(uint *)param_1[1];
  uVar118 = *(uint *)(param_1[1] + 4);
  uVar119 = *(uint *)(param_1[1] + 8);
  uVar127 = *(uint *)(param_1[1] + 0xc);
  auVar54 = *param_3;
  lVar28 = 10;
  local_38 = uVar72;
  uStack_34 = uVar73;
  uStack_30 = uVar74;
  uStack_2c = uVar75;
  uVar49 = uVar46;
  uVar125 = uVar118;
  uVar126 = uVar119;
  uVar57 = uVar127;
  local_18 = auVar54;
LAB_00fa46e0:
  do {
    auVar60._0_4_ = auVar35._0_4_ + local_38;
    auVar60._4_4_ = auVar35._4_4_ + uStack_34;
    auVar60._8_4_ = auVar35._8_4_ + uStack_30;
    auVar60._12_4_ = auVar35._12_4_ + uStack_2c;
    auVar54 = pshufb(auVar54 ^ auVar60,auVar33);
    uVar49 = uVar49 + auVar54._0_4_;
    uVar125 = uVar125 + auVar54._4_4_;
    uVar126 = uVar126 + auVar54._8_4_;
    uVar57 = uVar57 + auVar54._12_4_;
    local_38 = local_38 ^ uVar49;
    uStack_34 = uStack_34 ^ uVar125;
    uStack_30 = uStack_30 ^ uVar126;
    uStack_2c = uStack_2c ^ uVar57;
    uVar56 = local_38 >> 0x14 | local_38 << 0xc;
    uVar136 = uStack_34 >> 0x14 | uStack_34 << 0xc;
    uVar137 = uStack_30 >> 0x14 | uStack_30 << 0xc;
    uVar48 = uStack_2c >> 0x14 | uStack_2c << 0xc;
    auVar43._0_4_ = auVar60._0_4_ + uVar56;
    auVar43._4_4_ = auVar60._4_4_ + uVar136;
    auVar43._8_4_ = auVar60._8_4_ + uVar137;
    auVar43._12_4_ = auVar60._12_4_ + uVar48;
    auVar54 = pshufb(auVar54 ^ auVar43,auVar32);
    uVar49 = uVar49 + auVar54._0_4_;
    uVar125 = uVar125 + auVar54._4_4_;
    uVar126 = uVar126 + auVar54._8_4_;
    uVar57 = uVar57 + auVar54._12_4_;
    uVar56 = uVar56 ^ uVar49;
    uVar136 = uVar136 ^ uVar125;
    uVar137 = uVar137 ^ uVar126;
    uVar48 = uVar48 ^ uVar57;
    auVar40._0_4_ = uVar56 >> 0x19;
    auVar40._4_4_ = uVar136 >> 0x19;
    auVar40._8_4_ = uVar137 >> 0x19;
    auVar40._12_4_ = uVar48 >> 0x19;
    auVar68._0_4_ = uVar56 << 7;
    auVar68._4_4_ = uVar136 << 7;
    auVar68._8_4_ = uVar137 << 7;
    auVar68._12_4_ = uVar48 << 7;
    auVar40 = auVar40 | auVar68;
    auVar41._0_12_ = auVar40._4_12_;
    auVar41._12_4_ = auVar40._0_4_;
    auVar59._4_4_ = auVar54._0_4_;
    auVar59._0_4_ = auVar54._12_4_;
    auVar59._8_4_ = auVar54._4_4_;
    auVar59._12_4_ = auVar54._8_4_;
    auVar30._0_4_ = auVar43._0_4_ + auVar40._4_4_;
    auVar30._4_4_ = auVar43._4_4_ + auVar40._8_4_;
    auVar30._8_4_ = auVar43._8_4_ + auVar40._12_4_;
    auVar30._12_4_ = auVar43._12_4_ + auVar40._0_4_;
    auVar54 = pshufb(auVar59 ^ auVar30,auVar33);
    auVar52._0_4_ = uVar126 + auVar54._0_4_;
    auVar52._4_4_ = uVar57 + auVar54._4_4_;
    auVar52._8_4_ = uVar49 + auVar54._8_4_;
    auVar52._12_4_ = uVar125 + auVar54._12_4_;
    auVar41 = auVar41 ^ auVar52;
    uVar56 = auVar41._0_4_ >> 0x14 | auVar41._0_4_ << 0xc;
    uVar136 = auVar41._4_4_ >> 0x14 | auVar41._4_4_ << 0xc;
    uVar137 = auVar41._8_4_ >> 0x14 | auVar41._8_4_ << 0xc;
    uVar48 = auVar41._12_4_ >> 0x14 | auVar41._12_4_ << 0xc;
    auVar31._0_4_ = auVar30._0_4_ + uVar56;
    auVar31._4_4_ = auVar30._4_4_ + uVar136;
    auVar31._8_4_ = auVar30._8_4_ + uVar137;
    auVar31._12_4_ = auVar30._12_4_ + uVar48;
    auVar35._0_16_ = auVar31;
    auVar60 = pshufb(auVar54 ^ auVar31,auVar32);
    iVar27 = auVar60._0_4_;
    uVar126 = auVar52._0_4_ + iVar27;
    uVar57 = auVar52._4_4_ + auVar60._4_4_;
    uVar49 = auVar52._8_4_ + auVar60._8_4_;
    uVar125 = auVar52._12_4_ + auVar60._12_4_;
    uVar56 = uVar56 ^ uVar126;
    uVar136 = uVar136 ^ uVar57;
    uVar137 = uVar137 ^ uVar49;
    uVar48 = uVar48 ^ uVar125;
    uStack_34 = uVar56 >> 0x19 | uVar56 << 7;
    uStack_30 = uVar136 >> 0x19 | uVar136 << 7;
    uStack_2c = uVar137 >> 0x19 | uVar137 << 7;
    local_38 = uVar48 >> 0x19 | uVar48 << 7;
    auVar54._0_12_ = auVar60._4_12_;
    auVar54._12_4_ = iVar27;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  local_38 = local_38 + uVar72;
  uStack_34 = uStack_34 + uVar73;
  uStack_30 = uStack_30 + uVar74;
  uStack_2c = uStack_2c + uVar75;
  uVar56 = auVar60._4_4_ + local_18._0_4_;
  uVar136 = auVar60._8_4_ + local_18._4_4_;
  uVar137 = auVar60._12_4_ + local_18._8_4_;
  if (param_2 < 0x40) {
    local_48 = auVar31._0_4_ + uVar23;
    uStack_44 = auVar31._4_4_ + uVar24;
    uStack_40 = auVar31._8_4_ + uVar25;
    uStack_3c = auVar31._12_4_ + uVar26;
    local_28 = uVar49 + uVar46;
    uStack_24 = uVar125 + uVar118;
    uStack_20 = uVar126 + uVar119;
    uStack_1c = uVar57 + uVar127;
    local_18._4_4_ = uVar136;
    local_18._0_4_ = uVar56;
    local_18._8_4_ = uVar137;
    local_18._12_4_ = iVar27 + local_18._12_4_;
    lVar28 = 0;
    do {
      *(byte *)((longlong)unaff_RDI + lVar28) =
           *(byte *)((longlong)unaff_RSI + lVar28) ^ *(byte *)((longlong)&local_48 + lVar28);
      param_2 = param_2 - 1;
      lVar28 = lVar28 + 1;
    } while (param_2 != 0);
  }
  else {
    uVar29 = *unaff_RSI;
    uVar48 = *(uint *)((longlong)unaff_RSI + 4);
    uVar47 = unaff_RSI[1];
    uVar66 = *(uint *)((longlong)unaff_RSI + 0xc);
    uVar51 = unaff_RSI[2];
    uVar69 = *(uint *)((longlong)unaff_RSI + 0x14);
    uVar67 = unaff_RSI[3];
    uVar70 = *(uint *)((longlong)unaff_RSI + 0x1c);
    uVar78 = unaff_RSI[4];
    uVar115 = *(uint *)((longlong)unaff_RSI + 0x24);
    uVar90 = unaff_RSI[5];
    uVar116 = *(uint *)((longlong)unaff_RSI + 0x2c);
    uVar114 = unaff_RSI[6];
    uVar71 = *(uint *)((longlong)unaff_RSI + 0x34);
    uVar120 = unaff_RSI[7];
    uVar63 = *(uint *)((longlong)unaff_RSI + 0x3c);
    unaff_RSI = unaff_RSI + 8;
    *(uint *)unaff_RDI = auVar31._0_4_ + uVar23 ^ (uint)uVar29;
    *(uint *)((longlong)unaff_RDI + 4) = auVar31._4_4_ + uVar24 ^ uVar48;
    *(uint *)(unaff_RDI + 1) = auVar31._8_4_ + uVar25 ^ (uint)uVar47;
    *(uint *)((longlong)unaff_RDI + 0xc) = auVar31._12_4_ + uVar26 ^ uVar66;
    *(uint *)(unaff_RDI + 2) = local_38 ^ (uint)uVar51;
    *(uint *)((longlong)unaff_RDI + 0x14) = uStack_34 ^ uVar69;
    *(uint *)(unaff_RDI + 3) = uStack_30 ^ (uint)uVar67;
    *(uint *)((longlong)unaff_RDI + 0x1c) = uStack_2c ^ uVar70;
    *(uint *)(unaff_RDI + 4) = uVar49 + uVar46 ^ (uint)uVar78;
    *(uint *)((longlong)unaff_RDI + 0x24) = uVar125 + uVar118 ^ uVar115;
    *(uint *)(unaff_RDI + 5) = uVar126 + uVar119 ^ (uint)uVar90;
    *(uint *)((longlong)unaff_RDI + 0x2c) = uVar57 + uVar127 ^ uVar116;
    *(uint *)(unaff_RDI + 6) = uVar56 ^ (uint)uVar114;
    *(uint *)((longlong)unaff_RDI + 0x34) = uVar136 ^ uVar71;
    *(uint *)(unaff_RDI + 7) = uVar137 ^ (uint)uVar120;
    *(uint *)((longlong)unaff_RDI + 0x3c) = iVar27 + local_18._12_4_ ^ uVar63;
    unaff_RDI = unaff_RDI + 8;
    param_2 = param_2 - 0x40;
    if (param_2 != 0) {
      auVar35._8_4_ = uVar25;
      auVar35._12_4_ = uVar26;
      auVar54._0_4_ = _DAT_00fa4050 + local_18._0_4_;
      auVar54._4_4_ = _UNK_00fa4054 + local_18._4_4_;
      auVar54._8_4_ = _UNK_00fa4058 + local_18._8_4_;
      auVar54._12_4_ = _UNK_00fa405c + local_18._12_4_;
      lVar28 = 10;
      local_38 = uVar72;
      uStack_34 = uVar73;
      uStack_30 = uVar74;
      uStack_2c = uVar75;
      uVar49 = uVar46;
      uVar125 = uVar118;
      uVar126 = uVar119;
      uVar57 = uVar127;
      local_18 = auVar54;
      goto LAB_00fa46e0;
    }
  }
  return;
}




// ============================================================
// @00efaf33 — 2094 bytes
// str: ""crypto/bio/bio_meth.c""
// ============================================================

longlong FUN_00efaf33(int param_1,uint *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong unaff_RSI;
  ulonglong uVar11;
  int iVar12;
  undefined8 *unaff_RDI;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int local_res8;
  
  if (((*(int *)((longlong)unaff_RDI + 0x8c) == 0) || (local_res8 != 0)) &&
     ((param_2[6] == 1 || ((param_2[6] - 3 < 3 && (param_1 == 1)))))) {
    lVar5 = 0;
  }
  else {
    lVar5 = 4L << ((byte)param_2[1] & 0x3f);
  }
  lVar15 = 1L << ((byte)param_2[2] & 0x3f);
  uVar14 = 0;
  if ((local_res8 == 1) && (uVar14 = 0, param_2[4] == 3)) {
    uVar14 = 0x11;
    if (*param_2 < 0x11) {
      uVar14 = *param_2;
    }
  }
  if (param_4 == 1) {
    unaff_RDI[4] = 0;
    iVar10 = 0x2009a1e;
    unaff_RDI[1] = " ";
    unaff_RDI[2] = " ";
    iVar12 = 0x2009a20;
    *unaff_RDI = "crypto/bio/bio_meth.c";
    uVar11 = *(ulonglong *)(unaff_RSI + 0x10);
    *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
  }
  else {
    iVar12 = (int)*unaff_RDI;
    iVar10 = (int)unaff_RDI[1];
    uVar11 = *(ulonglong *)(unaff_RSI + 0x10);
  }
  *(uint *)(unaff_RDI + 6) = uVar14;
  *(undefined4 *)((longlong)unaff_RDI + 300) = 0;
  iVar12 = iVar12 - iVar10;
  *(int *)((longlong)unaff_RDI + 0x1c) = iVar12;
  *(int *)(unaff_RDI + 3) = iVar12;
  *(int *)((longlong)unaff_RDI + 0x2c) = iVar12;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  unaff_RDI[0x1f] = 0;
  *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
  if (*(int *)(unaff_RSI + 0x40) == 0) {
    *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar8 = (ulonglong)(-(int)uVar11 & 0x3f);
    uVar13 = uVar11 + uVar8;
    if (uVar13 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar13;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      uVar11 = uVar13;
      goto LAB_00efb102;
    }
    unaff_RDI[0xe] = 0;
    lVar1 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar1;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar8 = (ulonglong)(-(int)lVar1 & 0x3f);
    uVar13 = lVar1 + uVar8;
    if (uVar13 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar13;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      if (uVar8 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      goto LAB_00efb127;
    }
    uVar13 = 0;
    unaff_RDI[0x10] = 0;
    uVar8 = 4L << ((byte)uVar14 & 0x3f);
    if (uVar14 == 0) {
      uVar8 = uVar13;
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar9 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar6 = lVar5 + uVar9;
    if (uVar6 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar6;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar6;
      if (uVar9 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar6;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 1;
      goto LAB_00efb158;
    }
  }
  else {
LAB_00efb102:
    uVar13 = lVar15 * 4 + uVar11;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar13) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar8 = 0;
      uVar13 = uVar11;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar13;
      uVar8 = uVar11;
    }
    unaff_RDI[0xe] = uVar8;
LAB_00efb127:
    uVar6 = lVar5 + uVar13;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar6) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar6 = uVar13;
      uVar13 = 0;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar6;
    }
    unaff_RDI[0x10] = uVar13;
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = 4L << ((byte)uVar14 & 0x3f);
    }
LAB_00efb158:
    uVar11 = uVar8 + uVar6;
    if (*(ulonglong *)(unaff_RSI + 0x28) < uVar11) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar13 = 0;
      uVar11 = uVar6;
    }
    else {
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      uVar13 = uVar6;
    }
  }
  unaff_RDI[0xf] = uVar13;
  if (*(char *)(unaff_RSI + 0x38) != '\0') {
    return -0x40;
  }
  if (param_3 != 1) {
    uVar13 = *(ulonglong *)(unaff_RSI + 0x20);
    if (uVar13 < uVar11) {
      ___bzero();
      uVar11 = *(ulonglong *)(unaff_RSI + 0x18);
      uVar13 = *(ulonglong *)(unaff_RSI + 0x20);
    }
    if (uVar13 < uVar11) {
      *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    }
  }
  if ((param_2[6] - 3 < 3) && (param_1 == 1)) {
    uVar13 = lVar15 + 0x3fU & 0xffffffffffffffc0;
    uVar14 = *(uint *)(unaff_RSI + 0x40);
    if (local_res8 == 1) {
      if (uVar14 == 0) {
        lVar5 = *(longlong *)(unaff_RSI + 0x10);
        *(longlong *)(unaff_RSI + 0x20) = lVar5;
        *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
        uVar8 = (ulonglong)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
          *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
          *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
          }
          *(undefined4 *)(unaff_RSI + 0x40) = 1;
          goto LAB_00efb233;
        }
LAB_00efb2fa:
        uVar13 = 0;
      }
      else {
LAB_00efb233:
        if (uVar13 == 0) goto LAB_00efb2fa;
        lVar5 = *(longlong *)(unaff_RSI + 0x28);
        uVar13 = lVar5 - uVar13;
        if (uVar13 < uVar11) {
          *(undefined1 *)(unaff_RSI + 0x38) = 1;
          goto LAB_00efb2fa;
        }
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x20)) {
          *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
        }
        *(ulonglong *)(unaff_RSI + 0x28) = uVar13;
        if (lVar5 == 0) goto LAB_00efb2fa;
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x30)) {
          ___bzero();
          *(ulonglong *)(unaff_RSI + 0x30) = uVar13;
        }
      }
      unaff_RDI[7] = uVar13;
      uVar11 = unaff_RDI[0xc];
      uVar11 = ((uVar11 << 0x28 | uVar11 >> 0x18) ^ uVar11 ^ (uVar11 << 0xf | uVar11 >> 0x31)) *
               -0x604de39ae16720db;
      uVar11 = ((uVar11 >> 0x23) + 8 ^ uVar11) * -0x604de39ae16720db;
      uVar13 = (ulonglong)*(uint *)(unaff_RDI + 0xd);
      uVar13 = (uVar13 << 0xf ^ uVar13 ^
               (uVar13 << 0x28 | (ulonglong)(*(uint *)(unaff_RDI + 0xd) >> 0x18))) *
               -0x604de39ae16720db;
      uVar13 = ((uVar13 >> 0x23) + 4 ^ uVar13) * -0x604de39ae16720db;
      unaff_RDI[0xc] = uVar11 ^ uVar13 ^ uVar11 >> 0x1c ^ uVar13 >> 0x1c;
    }
    else {
      if (uVar14 < 2) {
        if (uVar14 != 0) {
LAB_00efb280:
          *(undefined4 *)(unaff_RSI + 0x40) = 2;
          goto LAB_00efb288;
        }
        lVar5 = *(longlong *)(unaff_RSI + 0x10);
        *(longlong *)(unaff_RSI + 0x20) = lVar5;
        *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
        uVar8 = (ulonglong)(-(int)lVar5 & 0x3f);
        uVar11 = lVar5 + uVar8;
        if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
          *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
          *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
          if (uVar8 != 0) {
            *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
          }
          goto LAB_00efb280;
        }
LAB_00efb3a8:
        uVar13 = 0;
      }
      else {
LAB_00efb288:
        if (uVar13 == 0) goto LAB_00efb3a8;
        uVar13 = *(longlong *)(unaff_RSI + 0x28) - uVar13;
        if (uVar13 < uVar11) {
          *(undefined1 *)(unaff_RSI + 0x38) = 1;
          goto LAB_00efb3a8;
        }
        if (uVar13 < *(ulonglong *)(unaff_RSI + 0x20)) {
          *(ulonglong *)(unaff_RSI + 0x20) = uVar13;
        }
        *(ulonglong *)(unaff_RSI + 0x28) = uVar13;
      }
      unaff_RDI[7] = uVar13;
      ___bzero();
      unaff_RDI[0xc] = 0;
    }
    uVar14 = 6;
    if (param_2[3] < 6) {
      uVar14 = param_2[3];
    }
    uVar7 = 4;
    if (4 < uVar14) {
      uVar7 = uVar14;
    }
    *(uint *)((longlong)unaff_RDI + 0x34) = param_2[2] - uVar7;
  }
  if ((local_res8 != 1) || (param_2[6] < 7)) goto LAB_00efb52a;
  if (*(uint *)(unaff_RSI + 0x40) < 2) {
    if (*(uint *)(unaff_RSI + 0x40) != 0) {
LAB_00efb40b:
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb413;
    }
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      goto LAB_00efb40b;
    }
    unaff_RDI[0x12] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb442;
    }
    unaff_RDI[0x13] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb471;
    }
    unaff_RDI[0x14] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4a0;
    }
    unaff_RDI[0x15] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4cc;
    }
    unaff_RDI[0x16] = 0;
    lVar5 = *(longlong *)(unaff_RSI + 0x10);
    *(longlong *)(unaff_RSI + 0x20) = lVar5;
    *(ulonglong *)(unaff_RSI + 0x30) = *(ulonglong *)(unaff_RSI + 8) & 0xffffffffffffffc0;
    uVar13 = (ulonglong)(-(int)lVar5 & 0x3f);
    uVar11 = lVar5 + uVar13;
    if (uVar11 <= *(ulonglong *)(unaff_RSI + 8)) {
      *(ulonglong *)(unaff_RSI + 0x10) = uVar11;
      *(ulonglong *)(unaff_RSI + 0x18) = uVar11;
      if (uVar13 != 0) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 2;
      goto LAB_00efb4fb;
    }
LAB_00efb511:
    uVar11 = 0;
  }
  else {
LAB_00efb413:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x400;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x12] = uVar11;
LAB_00efb442:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0xc0;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x13] = uVar11;
LAB_00efb471:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x100;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x14] = uVar11;
LAB_00efb4a0:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x80;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x15] = uVar11;
LAB_00efb4cc:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x8040;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      uVar11 = 0;
    }
    else {
      if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
        *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
      }
      *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
    }
    unaff_RDI[0x16] = uVar11;
LAB_00efb4fb:
    uVar11 = *(longlong *)(unaff_RSI + 0x28) - 0x1c040;
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(undefined1 *)(unaff_RSI + 0x38) = 1;
      goto LAB_00efb511;
    }
    if (uVar11 < *(ulonglong *)(unaff_RSI + 0x20)) {
      *(ulonglong *)(unaff_RSI + 0x20) = uVar11;
    }
    *(ulonglong *)(unaff_RSI + 0x28) = uVar11;
  }
  unaff_RDI[0x17] = uVar11;
LAB_00efb52a:
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = *(undefined8 *)(param_2 + 3);
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = uVar4;
  unaff_RDI[0x20] = uVar2;
  unaff_RDI[0x21] = uVar3;
  return (ulonglong)(*(char *)(unaff_RSI + 0x38) == '\0') * 0x40 + -0x40;
}




// ============================================================
// @00f4f780 — 2064 bytes
// ============================================================

void FUN_00f4f780(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*unaff_RSI) [16];
  undefined8 *unaff_RDI;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 local_2c0 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [16];
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  
  auVar24 = *unaff_RSI;
  local_2a0._0_4_ = *(undefined4 *)(unaff_RDI + 2);
  pauVar7 = (undefined1 (*) [16])*unaff_RDI;
  iVar3 = local_2a0._0_4_;
  if ((int)local_2a0._0_4_ < 1) {
    pauVar7 = &local_2c0;
    iVar3 = 0;
  }
  lVar4 = unaff_RDI[1] - (longlong)pauVar7;
  local_2a0._4_4_ = *(undefined4 *)(unaff_RDI + 7);
  if (iVar3 < (int)local_2a0._4_4_) {
    iVar3 = local_2a0._4_4_;
  }
  pauVar9 = (undefined1 (*) [16])unaff_RDI[5];
  if ((int)local_2a0._4_4_ < 1) {
    pauVar9 = &local_2c0;
  }
  local_278 = unaff_RDI[6] - (longlong)pauVar9;
  local_2a0._8_4_ = *(undefined4 *)(unaff_RDI + 0xc);
  if (iVar3 < (int)local_2a0._8_4_) {
    iVar3 = local_2a0._8_4_;
  }
  pauVar11 = (undefined1 (*) [16])unaff_RDI[10];
  if ((int)local_2a0._8_4_ < 1) {
    pauVar11 = &local_2c0;
  }
  local_270 = unaff_RDI[0xb] - (longlong)pauVar11;
  local_2a0._12_4_ = *(undefined4 *)(unaff_RDI + 0x11);
  if (iVar3 < (int)local_2a0._12_4_) {
    iVar3 = local_2a0._12_4_;
  }
  pauVar13 = (undefined1 (*) [16])unaff_RDI[0xf];
  if ((int)local_2a0._12_4_ < 1) {
    pauVar13 = &local_2c0;
  }
  local_268 = unaff_RDI[0x10] - (longlong)pauVar13;
  local_290._0_4_ = *(undefined4 *)(unaff_RDI + 0x16);
  if (iVar3 < (int)local_290._0_4_) {
    iVar3 = local_290._0_4_;
  }
  pauVar15 = (undefined1 (*) [16])unaff_RDI[0x14];
  if ((int)local_290._0_4_ < 1) {
    pauVar15 = &local_2c0;
  }
  local_260 = unaff_RDI[0x15] - (longlong)pauVar15;
  local_290._4_4_ = *(undefined4 *)(unaff_RDI + 0x1b);
  if (iVar3 < (int)local_290._4_4_) {
    iVar3 = local_290._4_4_;
  }
  pauVar17 = (undefined1 (*) [16])unaff_RDI[0x19];
  if ((int)local_290._4_4_ < 1) {
    pauVar17 = &local_2c0;
  }
  local_258 = unaff_RDI[0x1a] - (longlong)pauVar17;
  local_290._8_4_ = *(undefined4 *)(unaff_RDI + 0x20);
  if (iVar3 < (int)local_290._8_4_) {
    iVar3 = local_290._8_4_;
  }
  pauVar19 = (undefined1 (*) [16])unaff_RDI[0x1e];
  if ((int)local_290._8_4_ < 1) {
    pauVar19 = &local_2c0;
  }
  local_250 = unaff_RDI[0x1f] - (longlong)pauVar19;
  local_290._12_4_ = *(undefined4 *)(unaff_RDI + 0x25);
  if (iVar3 < (int)local_290._12_4_) {
    iVar3 = local_290._12_4_;
  }
  pauVar21 = (undefined1 (*) [16])unaff_RDI[0x23];
  if ((int)local_290._12_4_ < 1) {
    pauVar21 = &local_2c0;
  }
  local_248 = unaff_RDI[0x24] - (longlong)pauVar21;
  if (iVar3 != 0) {
    auVar26 = unaff_RSI[1];
    auVar23 = unaff_RSI[2];
    uVar1 = *(uint *)unaff_RSI[0xf];
    pauVar6 = &local_180;
    local_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    local_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    local_160 = *pauVar11;
    auVar30 = *pauVar11 ^ auVar24;
    local_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    local_140 = *pauVar15;
    auVar35 = *pauVar15 ^ auVar24;
    local_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    local_120 = *pauVar19;
    auVar31 = *pauVar19 ^ auVar24;
    local_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (undefined1 (*) [16])((ulonglong)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar30 = aesdec(auVar30,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if ((int)local_2a0._0_4_ < 2) {
        pauVar8 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if ((int)local_2a0._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar29,auVar26);
      lVar4 = (longlong)puVar5 - (longlong)pauVar8;
      auVar41 = aesdec(auVar31,auVar26);
      auVar2 = pauVar8[1];
      auVar44 = aesdec(auVar24,auVar26);
      auVar24 = unaff_RSI[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar31 = aesdec(auVar30,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if ((int)local_2a0._4_4_ < 2) {
        pauVar10 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar9 + local_278;
      if ((int)local_2a0._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar30 = aesdec(auVar38,auVar23);
      local_278 = (longlong)puVar5 - (longlong)pauVar10;
      auVar25 = aesdec(auVar41,auVar23);
      auVar28 = pauVar10[1];
      auVar38 = aesdec(auVar44,auVar23);
      auVar23 = unaff_RSI[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if ((int)local_2a0._8_4_ < 2) {
        pauVar12 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar11 + local_270;
      if ((int)local_2a0._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar30,auVar24);
      local_270 = (longlong)puVar5 - (longlong)pauVar12;
      auVar44 = aesdec(auVar25,auVar24);
      auVar30 = pauVar12[1];
      auVar38 = aesdec(auVar38,auVar24);
      auVar24 = unaff_RSI[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if ((int)local_2a0._12_4_ < 2) {
        pauVar14 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar13 + local_268;
      if ((int)local_2a0._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar23);
      local_268 = (longlong)puVar5 - (longlong)pauVar14;
      auVar44 = aesdec(auVar44,auVar23);
      auVar33 = pauVar14[1];
      auVar38 = aesdec(auVar38,auVar23);
      auVar23 = unaff_RSI[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar31 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if ((int)local_290._0_4_ < 2) {
        pauVar16 = &local_2c0;
      }
      auVar36 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar15 + local_260;
      if ((int)local_290._0_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar41 = aesdec(auVar41,auVar24);
      local_260 = (longlong)puVar5 - (longlong)pauVar16;
      auVar44 = aesdec(auVar44,auVar24);
      auVar35 = pauVar16[1];
      auVar45 = aesdec(auVar38,auVar24);
      auVar24 = unaff_RSI[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar29,auVar23);
      auVar31 = aesdec(auVar31,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if ((int)local_290._4_4_ < 2) {
        pauVar18 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar17 + local_258;
      if ((int)local_290._4_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar41,auVar23);
      local_258 = (longlong)puVar5 - (longlong)pauVar18;
      auVar44 = aesdec(auVar44,auVar23);
      auVar29 = pauVar18[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = unaff_RSI[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar31,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if ((int)local_290._8_4_ < 2) {
        pauVar20 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar24);
      puVar5 = *pauVar19 + local_250;
      if ((int)local_290._8_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar24);
      local_250 = (longlong)puVar5 - (longlong)pauVar20;
      auVar44 = aesdec(auVar44,auVar24);
      auVar31 = pauVar20[1];
      auVar45 = aesdec(auVar45,auVar24);
      auVar24 = unaff_RSI[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar38 = aesdec(auVar38,auVar23);
      auVar41 = aesdec(auVar41,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if ((int)local_290._12_4_ < 2) {
        pauVar22 = &local_2c0;
      }
      auVar36 = aesdec(auVar36,auVar23);
      puVar5 = *pauVar21 + local_248;
      if ((int)local_290._12_4_ < 1) {
        puVar5 = local_2c0;
      }
      auVar39 = aesdec(auVar39,auVar23);
      local_248 = (longlong)puVar5 - (longlong)pauVar22;
      auVar42 = aesdec(auVar44,auVar23);
      auVar44 = pauVar22[1];
      auVar45 = aesdec(auVar45,auVar23);
      auVar23 = unaff_RSI[10];
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar36 = aesdec(auVar36,auVar24);
        auVar39 = aesdec(auVar39,auVar24);
        auVar42 = aesdec(auVar42,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = unaff_RSI[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar36 = aesdec(auVar36,auVar23);
        auVar39 = aesdec(auVar39,auVar23);
        auVar42 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = unaff_RSI[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar36 = aesdec(auVar36,auVar24);
          auVar39 = aesdec(auVar39,auVar24);
          auVar42 = aesdec(auVar42,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = unaff_RSI[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar36 = aesdec(auVar36,auVar23);
          auVar39 = aesdec(auVar39,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = unaff_RSI[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar38 = aesdec(auVar38,auVar24);
      auVar41 = aesdec(auVar41,auVar24);
      auVar26 = vpcmpgtd_avx(local_2a0,(undefined1  [16])0x0);
      auVar34 = aesdec(auVar25,auVar24);
      auVar36 = aesdec(auVar36,auVar24);
      local_2a0 = vpaddd_avx(auVar26,local_2a0);
      auVar39 = aesdec(auVar39,auVar24);
      auVar43 = aesdec(auVar42,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = unaff_RSI[1];
      auVar42 = aesdeclast(auVar27,auVar23);
      auVar27 = aesdeclast(auVar38,auVar23);
      auVar32 = aesdeclast(auVar41,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(local_290,(undefined1  [16])0x0);
      auVar34 = aesdeclast(auVar34,auVar23);
      auVar38 = pauVar6[2];
      auVar37 = aesdeclast(auVar36,auVar23);
      auVar41 = pauVar6[3];
      local_290 = vpaddd_avx(local_290,auVar24);
      auVar24 = *unaff_RSI;
      auVar40 = aesdeclast(auVar39,auVar23);
      auVar36 = pauVar6[4];
      auVar43 = aesdeclast(auVar43,auVar23);
      auVar45 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar39 = pauVar6[6];
      auVar23 = unaff_RSI[2];
      *(undefined1 (*) [16])((longlong)pauVar8 + lVar4) = auVar42 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar42 = pauVar6[7];
      *(undefined1 (*) [16])((longlong)pauVar10 + local_278) = auVar27 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar12 + local_270) = auVar32 ^ auVar38;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar14 + local_268) = auVar34 ^ auVar41;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar30;
      auVar30 = auVar30 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar16 + local_260) = auVar37 ^ auVar36;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar35;
      auVar35 = auVar24 ^ auVar35;
      *(undefined1 (*) [16])((longlong)pauVar18 + local_258) = auVar40 ^ auVar45;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(undefined1 (*) [16])((longlong)pauVar20 + local_250) = auVar43 ^ auVar39;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar31;
      auVar31 = auVar24 ^ auVar31;
      *(undefined1 (*) [16])((longlong)pauVar22 + local_248) = auVar46 ^ auVar42;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar44;
      auVar24 = auVar24 ^ auVar44;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}




// ============================================================
// @01964b30 — 2001 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01964c44) */
/* WARNING: Removing unreachable block (ram,0x01964b82) */
/* WARNING: Removing unreachable block (ram,0x01964b8b) */
/* WARNING: Removing unreachable block (ram,0x01964bd0) */
/* WARNING: Removing unreachable block (ram,0x01964bd9) */

void FUN_01964b30(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RDI;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  undefined8 extraout_XMM0_Qb;
  float fVar18;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  char local_a0;
  undefined8 local_58;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x2f] == 0) {
    return;
  }
  uVar15 = FUN_01989f80();
  if (local_40 == (longlong *)0x0) {
    return;
  }
  if (local_38 == '\0') {
    uVar15 = FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0xcd0))(uVar15,&local_d0);
  plVar9 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    fVar10 = DAT_02390124;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = false;
    fVar10 = (float)local_d0;
  }
  pVar8 = (pthread_key_t)plVar9;
  *(float *)(unaff_RDI + 0x3a) = fVar10;
  lVar1 = unaff_RDI[0x35];
  local_c8 = unaff_RDI[0x36];
  uStack_c0 = 0;
  local_b8 = ZEXT416((uint)(*(float *)((longlong)unaff_RDI + 0x10c) + (float)lVar1));
  fVar10 = *(float *)(unaff_RDI + 0x22);
  fVar11 = (float)(**(code **)(*local_40 + 3000))();
  FUN_01964590();
  fVar12 = (float)FUN_0198a7d0();
  fVar18 = DAT_0241b660 * fVar11;
  fVar13 = DAT_023908e0 * fVar11;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125a280();
  fVar14 = (float)(**(code **)(*local_40 + 0x938))();
  local_58 = CONCAT44(fVar12 + fVar18,fVar14);
  cVar4 = (**(code **)((longlong)&dylib_command_00001288.cmd + *local_40))();
  if (cVar4 == '\0') {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar17 = (double)FUN_01264380();
    fVar12 = (float)(**(code **)(*local_40 + 0x938))(dVar16 + dVar17);
  }
  else {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar17 = (double)FUN_01264170();
    fVar12 = (float)(**(code **)(*local_40 + 0x938))(dVar16 + dVar17);
  }
  fVar12 = fVar12 - fVar14;
  uVar15 = FUN_00d051c0(local_58);
  cVar4 = *(char *)((longlong)unaff_RDI + 0x1c5);
  cVar5 = (**(code **)(*unaff_RDI + 0x9d0))();
  if (cVar4 != cVar5) {
    uVar6 = (**(code **)(*unaff_RDI + 0x9d0))();
    *(undefined1 *)((longlong)unaff_RDI + 0x1c5) = uVar6;
    FUN_00d216c0();
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
  }
  if ((fVar13 != *(float *)(unaff_RDI + 0x23)) || (NAN(fVar13) || NAN(*(float *)(unaff_RDI + 0x23)))
     ) {
LAB_01964f44:
    if (unaff_RDI[0x30] != 0) {
      unaff_RDI[0x30] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x31] != 0) {
      unaff_RDI[0x31] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x3b] != 0) {
      unaff_RDI[0x3b] = 0;
      FUN_00d50b20();
    }
    if (unaff_RDI[0x33] != 0) {
      unaff_RDI[0x33] = 0;
      FUN_00d50b20();
    }
    FUN_00d216c0();
    if (unaff_RDI[0x32] != 0) {
      unaff_RDI[0x32] = 0;
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
  }
  else if ((fVar12 != *(float *)((longlong)unaff_RDI + 0x114)) ||
          (NAN(fVar12) || NAN(*(float *)((longlong)unaff_RDI + 0x114)))) goto LAB_01964f44;
  if ((*(float *)((longlong)unaff_RDI + 0x1bc) != fVar11) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x1bc)) || NAN(fVar11))) {
LAB_01965017:
    FUN_00d216c0();
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
  }
  else {
    local_58._0_4_ = (float)uVar15;
    if (((float)local_58 != *(float *)((longlong)unaff_RDI + 0x10c)) ||
       (NAN((float)local_58) || NAN(*(float *)((longlong)unaff_RDI + 0x10c)))) goto LAB_01965017;
    local_58._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
    if ((local_58._4_4_ != *(float *)(unaff_RDI + 0x22)) ||
       (NAN(local_58._4_4_) || NAN(*(float *)(unaff_RDI + 0x22)))) goto LAB_01965017;
  }
  local_a0 = 0;
  lVar2 = unaff_RDI[0x2f];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  fVar13 = (float)(**(code **)((longlong)&dylib_command_000011b8.cmd + *local_40))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (NAN(fVar13)) {
    if (((char)unaff_RDI[0x37] == '\0') &&
       (cVar4 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *local_40 + 0x40))(), cVar4 == '\0')) goto LAB_019652b4;
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x37) = 1;
  }
  *(float *)((longlong)unaff_RDI + 0x1bc) = fVar11;
  (**(code **)(*unaff_RDI + 0x9e0))();
  FUN_01e3c0a0(uVar15,fVar12);
  local_b8 = insertps(local_b8,(float)((ulonglong)lVar1 >> 0x20) + fVar10,0x10);
  if (((local_c8._4_4_ != 0.0) || (NAN(local_c8._4_4_))) &&
     (((float)local_c8 != 0.0 || (NAN((float)local_c8))))) {
    local_b8._0_8_ = FUN_00d052e0();
    local_b8._8_8_ = extraout_XMM0_Qb;
  }
  FUN_01e40eb0();
  (**(code **)(*local_40 + 0x618))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  FUN_01989f80();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_01989f80();
    FUN_00d50b00();
    (**(code **)(*local_40 + 0xbb0))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e3f820();
    cVar4 = FUN_00d05440();
    if (cVar4 == '\0') {
      FUN_01989f80();
      FUN_00d50b00();
      (**(code **)(*local_40 + 0xc30))();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_019652b4:
  if (!bVar3) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @0176d660 — 1902 bytes
// str: ""bool""
// str: ""float""
// str: ""_isCyclic""
// str: ""GNInt""
// str: ""_tuning""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0176d660(void)

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
  *unaff_RDI = &DAT_025ff2a8;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cda78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cda40 = FUN_01a014c0();
        _DAT_027cda38 = "_isCyclic";
        _DAT_027cda48 = 0;
        _DAT_027cda50 = 0x6200;
        _DAT_027cda58 = "bool";
        _DAT_027cda60 = 0;
        uRam00000000027cda68 = 0;
        _DAT_027cda70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0176df20();
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdb08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdad0 = FUN_01a014c0();
        _DAT_027cdac8 = "_rootIndex";
        _DAT_027cdad8 = 0;
        _DAT_027cdae0 = 0x6900;
        _DAT_027cdae8 = "GNInt";
        _DAT_027cdaf0 = 0;
        uRam00000000027cdaf8 = 0;
        _DAT_027cdb00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_tuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningInterval");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e0f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_scaleTuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuningSequence");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdbe0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdba8 = FUN_01a014c0();
        _DAT_027cdba0 = "_tuningPitchAnchor";
        _DAT_027cdbb0 = 0;
        _DAT_027cdbb8 = 0x6600;
        _DAT_027cdbc0 = "float";
        _DAT_027cdbc8 = 0;
        uRam00000000027cdbd0 = 0;
        _DAT_027cdbd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdc28 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdbf0 = FUN_01a014c0();
        _DAT_027cdbe8 = "_westernStandardPitchIndexAnchor";
        _DAT_027cdbf8 = 0;
        _DAT_027cdc00 = 0x6900;
        _DAT_027cdc08 = "GNInt";
        _DAT_027cdc10 = 0;
        uRam00000000027cdc18 = 0;
        _DAT_027cdc20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176e1e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_tuning";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleStretching");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdcb8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdc80 = FUN_01a014c0();
        _DAT_027cdc78 = "_didRequestCacheValidation";
        _DAT_027cdc88 = 0;
        _DAT_027cdc90 = 0x6211;
        _DAT_027cdc98 = "bool";
        _DAT_027cdca0 = 0;
        uRam00000000027cdca8 = 0;
        _DAT_027cdcb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdcc8 = FUN_01a014c0();
        _DAT_027cdcc0 = "_suggestedMinPitch";
        _DAT_027cdcd0 = 0;
        _DAT_027cdcd8 = 0x6601;
        _DAT_027cdce0 = "float";
        _DAT_027cdce8 = 0;
        uRam00000000027cdcf0 = 0;
        _DAT_027cdcf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdd10 = FUN_01a014c0();
        _DAT_027cdd08 = "_suggestedMaxPitch";
        _DAT_027cdd18 = 0;
        _DAT_027cdd20 = 0x6601;
        _DAT_027cdd28 = "float";
        _DAT_027cdd30 = 0;
        uRam00000000027cdd38 = 0;
        _DAT_027cdd40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cdd90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdd58 = FUN_01a014c0();
        _DAT_027cdd50 = "_suggestedMinPitchIndex";
        _DAT_027cdd60 = 0;
        _DAT_027cdd68 = 0x6901;
        _DAT_027cdd70 = "GNInt";
        _DAT_027cdd78 = 0;
        uRam00000000027cdd80 = 0;
        _DAT_027cdd88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_01a014c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cddd8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cdda0 = FUN_01a014c0();
        _DAT_027cdd98 = "_suggestedMaxPitchIndex";
        _DAT_027cdda8 = 0;
        _DAT_027cddb0 = 0x6901;
        _DAT_027cddb8 = "GNInt";
        _DAT_027cddc0 = 0;
        uRam00000000027cddc8 = 0;
        _DAT_027cddd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00b14030 — 1843 bytes
// str: ""float""
// str: ""gain""
// str: ""roomsize""
// str: ""damp""
// str: ""wet""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b14030(char *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_025408b0;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cd50 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cd18 = FUN_00b13a60();
        param_1 = "gain";
        _DAT_0275cd10 = "gain";
        _DAT_0275cd20 = 0;
        _DAT_0275cd28 = 0x6600;
        _DAT_0275cd30 = "float";
        _DAT_0275cd38 = 0;
        uRam000000000275cd40 = 0;
        _DAT_0275cd48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cd98 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cd60 = FUN_00b13a60();
        param_1 = "roomsize";
        _DAT_0275cd58 = "roomsize";
        _DAT_0275cd68 = 0;
        _DAT_0275cd70 = 0x6600;
        _DAT_0275cd78 = "float";
        _DAT_0275cd80 = 0;
        uRam000000000275cd88 = 0;
        _DAT_0275cd90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275cde0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cda8 = FUN_00b13a60();
        param_1 = "damp";
        _DAT_0275cda0 = "damp";
        _DAT_0275cdb0 = 0;
        _DAT_0275cdb8 = 0x6600;
        _DAT_0275cdc0 = "float";
        _DAT_0275cdc8 = 0;
        uRam000000000275cdd0 = 0;
        _DAT_0275cdd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ce28 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275cdf0 = FUN_00b13a60();
        param_1 = "wet";
        _DAT_0275cde8 = "wet";
        _DAT_0275cdf8 = 0;
        _DAT_0275ce00 = 0x6600;
        _DAT_0275ce08 = "float";
        _DAT_0275ce10 = 0;
        uRam000000000275ce18 = 0;
        _DAT_0275ce20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ce70 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275ce38 = FUN_00b13a60();
        param_1 = "dry";
        _DAT_0275ce30 = "dry";
        _DAT_0275ce40 = 0;
        _DAT_0275ce48 = 0x6600;
        _DAT_0275ce50 = "float";
        _DAT_0275ce58 = 0;
        uRam000000000275ce60 = 0;
        _DAT_0275ce68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar5 = FUN_00b13a60();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0275ceb8 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0275ce80 = FUN_00b13a60();
        param_1 = "width";
        _DAT_0275ce78 = "width";
        _DAT_0275ce88 = 0;
        _DAT_0275ce90 = 0x6600;
        _DAT_0275ce98 = "float";
        _DAT_0275cea0 = 0;
        uRam000000000275cea8 = 0;
        _DAT_0275ceb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  uVar1 = *(undefined8 *)(unaff_RSI + 0xb0);
  unaff_RDI[0x15] = *(undefined8 *)(unaff_RSI + 0xa8);
  unaff_RDI[0x16] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xb8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0xc0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0xd0);
  unaff_RDI[0x19] = *(undefined8 *)(unaff_RSI + 200);
  unaff_RDI[0x1a] = uVar3;
  unaff_RDI[0x17] = uVar1;
  unaff_RDI[0x18] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xd8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0xe0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0xf0);
  unaff_RDI[0x1d] = *(undefined8 *)(unaff_RSI + 0xe8);
  unaff_RDI[0x1e] = uVar3;
  unaff_RDI[0x1b] = uVar1;
  unaff_RDI[0x1c] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0xf8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x100);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x110);
  unaff_RDI[0x21] = *(undefined8 *)(unaff_RSI + 0x108);
  unaff_RDI[0x22] = uVar3;
  unaff_RDI[0x1f] = uVar1;
  unaff_RDI[0x20] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x118);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x120);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x130);
  unaff_RDI[0x25] = *(undefined8 *)(unaff_RSI + 0x128);
  unaff_RDI[0x26] = uVar3;
  unaff_RDI[0x23] = uVar1;
  unaff_RDI[0x24] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x140);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x148);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x150);
  unaff_RDI[0x27] = *(undefined8 *)(unaff_RSI + 0x138);
  unaff_RDI[0x28] = uVar1;
  unaff_RDI[0x29] = uVar2;
  unaff_RDI[0x2a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x160);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x168);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x170);
  unaff_RDI[0x2b] = *(undefined8 *)(unaff_RSI + 0x158);
  unaff_RDI[0x2c] = uVar1;
  unaff_RDI[0x2d] = uVar2;
  unaff_RDI[0x2e] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x180);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x188);
  uVar3 = *(undefined8 *)(unaff_RSI + 400);
  unaff_RDI[0x2f] = *(undefined8 *)(unaff_RSI + 0x178);
  unaff_RDI[0x30] = uVar1;
  unaff_RDI[0x31] = uVar2;
  unaff_RDI[0x32] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1b0);
  unaff_RDI[0x33] = *(undefined8 *)(unaff_RSI + 0x198);
  unaff_RDI[0x34] = uVar1;
  unaff_RDI[0x35] = uVar2;
  unaff_RDI[0x36] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1c8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1d0);
  unaff_RDI[0x37] = *(undefined8 *)(unaff_RSI + 0x1b8);
  unaff_RDI[0x38] = uVar1;
  unaff_RDI[0x39] = uVar2;
  unaff_RDI[0x3a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x1f0);
  unaff_RDI[0x3d] = *(undefined8 *)(unaff_RSI + 0x1e8);
  unaff_RDI[0x3e] = uVar3;
  unaff_RDI[0x3b] = uVar1;
  unaff_RDI[0x3c] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x200);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x210);
  unaff_RDI[0x41] = *(undefined8 *)(unaff_RSI + 0x208);
  unaff_RDI[0x42] = uVar3;
  unaff_RDI[0x3f] = uVar1;
  unaff_RDI[0x40] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x220);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x228);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x230);
  unaff_RDI[0x43] = *(undefined8 *)(unaff_RSI + 0x218);
  unaff_RDI[0x44] = uVar1;
  unaff_RDI[0x45] = uVar2;
  unaff_RDI[0x46] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x240);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x248);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x250);
  unaff_RDI[0x47] = *(undefined8 *)(unaff_RSI + 0x238);
  unaff_RDI[0x48] = uVar1;
  unaff_RDI[0x49] = uVar2;
  unaff_RDI[0x4a] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x260);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x268);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x270);
  unaff_RDI[0x4b] = *(undefined8 *)(unaff_RSI + 600);
  unaff_RDI[0x4c] = uVar1;
  unaff_RDI[0x4d] = uVar2;
  unaff_RDI[0x4e] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x278);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x280);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x290);
  unaff_RDI[0x51] = *(undefined8 *)(unaff_RSI + 0x288);
  unaff_RDI[0x52] = uVar3;
  unaff_RDI[0x4f] = uVar1;
  unaff_RDI[0x50] = uVar2;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2a0);
  uVar2 = *(undefined8 *)(unaff_RSI + 0x2a8);
  uVar3 = *(undefined8 *)(unaff_RSI + 0x2b0);
  unaff_RDI[0x53] = *(undefined8 *)(unaff_RSI + 0x298);
  unaff_RDI[0x54] = uVar1;
  unaff_RDI[0x55] = uVar2;
  unaff_RDI[0x56] = uVar3;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2c0);
  unaff_RDI[0x57] = *(undefined8 *)(unaff_RSI + 0x2b8);
  unaff_RDI[0x58] = uVar1;
  unaff_RDI[0x59] = *(undefined8 *)(unaff_RSI + 0x2c8);
  unaff_RDI[0x5c] = *(undefined8 *)(unaff_RSI + 0x2e0);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2d8);
  unaff_RDI[0x5a] = *(undefined8 *)(unaff_RSI + 0x2d0);
  unaff_RDI[0x5b] = uVar1;
  unaff_RDI[0x5f] = *(undefined8 *)(unaff_RSI + 0x2f8);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x2f0);
  unaff_RDI[0x5d] = *(undefined8 *)(unaff_RSI + 0x2e8);
  unaff_RDI[0x5e] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x308);
  unaff_RDI[0x60] = *(undefined8 *)(unaff_RSI + 0x300);
  unaff_RDI[0x61] = uVar1;
  unaff_RDI[0x62] = *(undefined8 *)(unaff_RSI + 0x310);
  uVar1 = *(undefined8 *)(unaff_RSI + 800);
  unaff_RDI[99] = *(undefined8 *)(unaff_RSI + 0x318);
  unaff_RDI[100] = uVar1;
  unaff_RDI[0x65] = *(undefined8 *)(unaff_RSI + 0x328);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x338);
  unaff_RDI[0x66] = *(undefined8 *)(unaff_RSI + 0x330);
  unaff_RDI[0x67] = uVar1;
  unaff_RDI[0x68] = *(undefined8 *)(unaff_RSI + 0x340);
  unaff_RDI[0x6b] = *(undefined8 *)(unaff_RSI + 0x358);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x350);
  unaff_RDI[0x69] = *(undefined8 *)(unaff_RSI + 0x348);
  unaff_RDI[0x6a] = uVar1;
  uVar1 = *(undefined8 *)(unaff_RSI + 0x368);
  unaff_RDI[0x6c] = *(undefined8 *)(unaff_RSI + 0x360);
  unaff_RDI[0x6d] = uVar1;
  unaff_RDI[0x6e] = *(undefined8 *)(unaff_RSI + 0x370);
  _memcpy(param_1,&DAT_00018da8,param_3);
  return;
}




// ============================================================
// @00f4f060 — 1796 bytes
// ============================================================

void FUN_00f4f060(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 (*unaff_RSI) [16];
  undefined8 *unaff_RDI;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 local_100 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  
  auVar41 = *unaff_RSI;
  local_e0._0_4_ = *(undefined4 *)(unaff_RDI + 2);
  iVar7 = 0;
  if (0 < (int)local_e0._0_4_) {
    iVar7 = local_e0._0_4_;
  }
  pauVar10 = (undefined1 (*) [16])*unaff_RDI;
  if ((int)local_e0._0_4_ < 1) {
    pauVar10 = &local_100;
  }
  lVar8 = unaff_RDI[1] - (longlong)pauVar10;
  local_e0._4_4_ = *(undefined4 *)(unaff_RDI + 7);
  if (iVar7 < (int)local_e0._4_4_) {
    iVar7 = local_e0._4_4_;
  }
  pauVar12 = (undefined1 (*) [16])unaff_RDI[5];
  if ((int)local_e0._4_4_ < 1) {
    pauVar12 = &local_100;
  }
  local_b8 = unaff_RDI[6] - (longlong)pauVar12;
  local_e0._8_4_ = *(undefined4 *)(unaff_RDI + 0xc);
  if (iVar7 < (int)local_e0._8_4_) {
    iVar7 = local_e0._8_4_;
  }
  pauVar14 = (undefined1 (*) [16])unaff_RDI[10];
  if ((int)local_e0._8_4_ < 1) {
    pauVar14 = &local_100;
  }
  local_b0 = unaff_RDI[0xb] - (longlong)pauVar14;
  local_e0._12_4_ = *(undefined4 *)(unaff_RDI + 0x11);
  if (iVar7 < (int)local_e0._12_4_) {
    iVar7 = local_e0._12_4_;
  }
  pauVar16 = (undefined1 (*) [16])unaff_RDI[0xf];
  if ((int)local_e0._12_4_ < 1) {
    pauVar16 = &local_100;
  }
  local_a8 = unaff_RDI[0x10] - (longlong)pauVar16;
  local_d0._0_4_ = *(undefined4 *)(unaff_RDI + 0x16);
  if (iVar7 < (int)local_d0._0_4_) {
    iVar7 = local_d0._0_4_;
  }
  pauVar18 = (undefined1 (*) [16])unaff_RDI[0x14];
  if ((int)local_d0._0_4_ < 1) {
    pauVar18 = &local_100;
  }
  local_a0 = unaff_RDI[0x15] - (longlong)pauVar18;
  local_d0._4_4_ = *(undefined4 *)(unaff_RDI + 0x1b);
  if (iVar7 < (int)local_d0._4_4_) {
    iVar7 = local_d0._4_4_;
  }
  pauVar20 = (undefined1 (*) [16])unaff_RDI[0x19];
  if ((int)local_d0._4_4_ < 1) {
    pauVar20 = &local_100;
  }
  local_98 = unaff_RDI[0x1a] - (longlong)pauVar20;
  local_d0._8_4_ = *(undefined4 *)(unaff_RDI + 0x20);
  if (iVar7 < (int)local_d0._8_4_) {
    iVar7 = local_d0._8_4_;
  }
  pauVar22 = (undefined1 (*) [16])unaff_RDI[0x1e];
  if ((int)local_d0._8_4_ < 1) {
    pauVar22 = &local_100;
  }
  local_90 = unaff_RDI[0x1f] - (longlong)pauVar22;
  local_d0._12_4_ = *(undefined4 *)(unaff_RDI + 0x25);
  if (iVar7 < (int)local_d0._12_4_) {
    iVar7 = local_d0._12_4_;
  }
  pauVar24 = (undefined1 (*) [16])unaff_RDI[0x23];
  if ((int)local_d0._12_4_ < 1) {
    pauVar24 = &local_100;
  }
  local_88 = unaff_RDI[0x24] - (longlong)pauVar24;
  if (iVar7 != 0) {
    auVar27 = unaff_RSI[1];
    auVar26 = unaff_RSI[2];
    uVar1 = *(uint *)unaff_RSI[0xf];
    auVar28 = *(undefined1 (*) [16])(unaff_RDI + 3) ^ auVar41 ^ *pauVar10;
    auVar29 = *(undefined1 (*) [16])(unaff_RDI + 8) ^ auVar41 ^ *pauVar12;
    auVar31 = *(undefined1 (*) [16])(unaff_RDI + 0xd) ^ auVar41 ^ *pauVar14;
    auVar33 = *(undefined1 (*) [16])(unaff_RDI + 0x12) ^ auVar41 ^ *pauVar16;
    auVar35 = *(undefined1 (*) [16])(unaff_RDI + 0x17) ^ auVar41 ^ *pauVar18;
    auVar34 = *(undefined1 (*) [16])(unaff_RDI + 0x1c) ^ auVar41 ^ *pauVar20;
    auVar32 = *(undefined1 (*) [16])(unaff_RDI + 0x21) ^ auVar41 ^ *pauVar22;
    auVar30 = *(undefined1 (*) [16])(unaff_RDI + 0x26) ^ auVar41 ^ *pauVar24;
    do {
      auVar28 = aesenc(auVar28,auVar27);
      auVar29 = aesenc(auVar29,auVar27);
      auVar31 = aesenc(auVar31,auVar27);
      auVar33 = aesenc(auVar33,auVar27);
      pauVar11 = pauVar10;
      if ((int)local_e0._0_4_ < 2) {
        pauVar11 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar10 + lVar8;
      if ((int)local_e0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar36 = aesenc(auVar34,auVar27);
      lVar8 = (longlong)puVar9 - (longlong)pauVar11;
      auVar38 = aesenc(auVar32,auVar27);
      auVar2 = auVar41 ^ pauVar11[1];
      auVar40 = aesenc(auVar30,auVar27);
      auVar27 = unaff_RSI[3];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar29,auVar26);
      auVar32 = aesenc(auVar31,auVar26);
      auVar34 = aesenc(auVar33,auVar26);
      pauVar13 = pauVar12;
      if ((int)local_e0._4_4_ < 2) {
        pauVar13 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar12 + local_b8;
      if ((int)local_e0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar36,auVar26);
      local_b8 = (longlong)puVar9 - (longlong)pauVar13;
      auVar31 = aesenc(auVar38,auVar26);
      auVar36 = auVar41 ^ pauVar13[1];
      auVar29 = aesenc(auVar40,auVar26);
      auVar26 = unaff_RSI[4];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar15 = pauVar14;
      if ((int)local_e0._8_4_ < 2) {
        pauVar15 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar14 + local_b0;
      if ((int)local_e0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_b0 = (longlong)puVar9 - (longlong)pauVar15;
      auVar31 = aesenc(auVar31,auVar27);
      auVar38 = auVar41 ^ pauVar15[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[5];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar17 = pauVar16;
      if ((int)local_e0._12_4_ < 2) {
        pauVar17 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar16 + local_a8;
      if ((int)local_e0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_a8 = (longlong)puVar9 - (longlong)pauVar17;
      auVar31 = aesenc(auVar31,auVar26);
      auVar40 = auVar41 ^ pauVar17[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[6];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar19 = pauVar18;
      if ((int)local_d0._0_4_ < 2) {
        pauVar19 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar18 + local_a0;
      if ((int)local_d0._0_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_a0 = (longlong)puVar9 - (longlong)pauVar19;
      auVar31 = aesenc(auVar31,auVar27);
      auVar3 = auVar41 ^ pauVar19[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[7];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar21 = pauVar20;
      if ((int)local_d0._4_4_ < 2) {
        pauVar21 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar20 + local_98;
      if ((int)local_d0._4_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_98 = (longlong)puVar9 - (longlong)pauVar21;
      auVar31 = aesenc(auVar31,auVar26);
      auVar4 = auVar41 ^ pauVar21[1];
      auVar29 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[8];
      auVar28 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      pauVar23 = pauVar22;
      if ((int)local_d0._8_4_ < 2) {
        pauVar23 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar27);
      puVar9 = *pauVar22 + local_90;
      if ((int)local_d0._8_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar27);
      local_90 = (longlong)puVar9 - (longlong)pauVar23;
      auVar31 = aesenc(auVar31,auVar27);
      auVar5 = auVar41 ^ pauVar23[1];
      auVar29 = aesenc(auVar29,auVar27);
      auVar27 = unaff_RSI[9];
      auVar28 = aesenc(auVar28,auVar26);
      auVar30 = aesenc(auVar30,auVar26);
      auVar32 = aesenc(auVar32,auVar26);
      auVar34 = aesenc(auVar34,auVar26);
      pauVar25 = pauVar24;
      if ((int)local_d0._12_4_ < 2) {
        pauVar25 = &local_100;
      }
      auVar35 = aesenc(auVar35,auVar26);
      puVar9 = *pauVar24 + local_88;
      if ((int)local_d0._12_4_ < 1) {
        puVar9 = local_100;
      }
      auVar33 = aesenc(auVar33,auVar26);
      local_88 = (longlong)puVar9 - (longlong)pauVar25;
      auVar31 = aesenc(auVar31,auVar26);
      auVar6 = auVar41 ^ pauVar25[1];
      auVar41 = aesenc(auVar29,auVar26);
      auVar26 = unaff_RSI[10];
      if (10 < uVar1) {
        auVar28 = aesenc(auVar28,auVar27);
        auVar30 = aesenc(auVar30,auVar27);
        auVar32 = aesenc(auVar32,auVar27);
        auVar34 = aesenc(auVar34,auVar27);
        auVar35 = aesenc(auVar35,auVar27);
        auVar33 = aesenc(auVar33,auVar27);
        auVar31 = aesenc(auVar31,auVar27);
        auVar41 = aesenc(auVar41,auVar27);
        auVar27 = unaff_RSI[0xb];
        auVar28 = aesenc(auVar28,auVar26);
        auVar30 = aesenc(auVar30,auVar26);
        auVar32 = aesenc(auVar32,auVar26);
        auVar34 = aesenc(auVar34,auVar26);
        auVar35 = aesenc(auVar35,auVar26);
        auVar33 = aesenc(auVar33,auVar26);
        auVar31 = aesenc(auVar31,auVar26);
        auVar41 = aesenc(auVar41,auVar26);
        auVar26 = unaff_RSI[0xc];
        if (uVar1 != 0xb) {
          auVar28 = aesenc(auVar28,auVar27);
          auVar30 = aesenc(auVar30,auVar27);
          auVar32 = aesenc(auVar32,auVar27);
          auVar34 = aesenc(auVar34,auVar27);
          auVar35 = aesenc(auVar35,auVar27);
          auVar33 = aesenc(auVar33,auVar27);
          auVar31 = aesenc(auVar31,auVar27);
          auVar41 = aesenc(auVar41,auVar27);
          auVar27 = unaff_RSI[0xd];
          auVar28 = aesenc(auVar28,auVar26);
          auVar30 = aesenc(auVar30,auVar26);
          auVar32 = aesenc(auVar32,auVar26);
          auVar34 = aesenc(auVar34,auVar26);
          auVar35 = aesenc(auVar35,auVar26);
          auVar33 = aesenc(auVar33,auVar26);
          auVar31 = aesenc(auVar31,auVar26);
          auVar41 = aesenc(auVar41,auVar26);
          auVar26 = unaff_RSI[0xe];
        }
      }
      auVar29 = aesenc(auVar28,auVar27);
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar28 = vpcmpgtd_avx(local_e0,(undefined1  [16])0x0);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      local_e0 = vpaddd_avx(auVar28,local_e0);
      auVar37 = aesenc(auVar33,auVar27);
      auVar39 = aesenc(auVar31,auVar27);
      auVar42 = aesenc(auVar41,auVar27);
      auVar27 = unaff_RSI[1];
      auVar28 = aesenclast(auVar29,auVar26);
      auVar29 = aesenclast(auVar30,auVar26);
      auVar31 = aesenclast(auVar32,auVar26);
      auVar41 = vpcmpgtd_avx(local_d0,(undefined1  [16])0x0);
      auVar33 = aesenclast(auVar34,auVar26);
      auVar35 = aesenclast(auVar35,auVar26);
      local_d0 = vpaddd_avx(local_d0,auVar41);
      auVar41 = *unaff_RSI;
      auVar34 = aesenclast(auVar37,auVar26);
      auVar32 = aesenclast(auVar39,auVar26);
      auVar30 = aesenclast(auVar42,auVar26);
      auVar26 = unaff_RSI[2];
      *(undefined1 (*) [16])((longlong)pauVar11 + lVar8) = auVar28;
      pauVar10 = pauVar11 + 1;
      auVar28 = auVar28 ^ auVar2;
      *(undefined1 (*) [16])((longlong)pauVar13 + local_b8) = auVar29;
      pauVar12 = pauVar13 + 1;
      auVar29 = auVar29 ^ auVar36;
      *(undefined1 (*) [16])((longlong)pauVar15 + local_b0) = auVar31;
      pauVar14 = pauVar15 + 1;
      auVar31 = auVar31 ^ auVar38;
      *(undefined1 (*) [16])((longlong)pauVar17 + local_a8) = auVar33;
      pauVar16 = pauVar17 + 1;
      auVar33 = auVar33 ^ auVar40;
      *(undefined1 (*) [16])((longlong)pauVar19 + local_a0) = auVar35;
      pauVar18 = pauVar19 + 1;
      auVar35 = auVar35 ^ auVar3;
      *(undefined1 (*) [16])((longlong)pauVar21 + local_98) = auVar34;
      pauVar20 = pauVar21 + 1;
      auVar34 = auVar34 ^ auVar4;
      *(undefined1 (*) [16])((longlong)pauVar23 + local_90) = auVar32;
      pauVar22 = pauVar23 + 1;
      auVar32 = auVar32 ^ auVar5;
      *(undefined1 (*) [16])((longlong)pauVar25 + local_88) = auVar30;
      pauVar24 = pauVar25 + 1;
      auVar30 = auVar30 ^ auVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}




// ============================================================
// @009de670 — 1791 bytes
// ============================================================

longlong FUN_009de670(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte *pbVar32;
  char cVar33;
  char cVar34;
  byte bVar35;
  byte bVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  void *pvVar40;
  undefined8 *puVar41;
  undefined1 *puVar42;
  void *pvVar43;
  byte *pbVar44;
  void *pvVar45;
  longlong lVar46;
  byte *pbVar47;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar48;
  void *pvVar49;
  byte local_c0;
  undefined1 local_bf [7];
  void *local_b8;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  void *local_88;
  undefined1 local_78 [16];
  byte *local_68;
  byte local_58;
  undefined7 uStack_57;
  void *local_50;
  byte *local_48;
  void *local_40;
  char local_33;
  byte local_32;
  undefined1 local_31;
  
  lVar39 = FUN_009d8a9c(param_1,0x110);
  local_33 = *(char *)(unaff_RSI + 6);
  local_88 = (void *)(lVar39 + 0x10);
  ___bzero();
  puVar41 = (undefined8 *)*unaff_RSI;
  while (puVar3 = puVar41, puVar3 != unaff_RSI + 1) {
    lVar46 = 0;
    do {
      if ((char)unaff_RDI[3] == '\0') {
        cVar34 = *(char *)((longlong)puVar3 + 0x19);
        cVar33 = (char)lVar46;
      }
      else {
        cVar33 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        cVar34 = *(char *)((longlong)puVar3 + 0x19);
        if ((char)unaff_RDI[3] != '\0') {
          cVar34 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        }
      }
      if (cVar33 == cVar34) {
        *(undefined1 *)((longlong)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
    puVar2 = (undefined8 *)puVar3[1];
    if ((undefined8 *)puVar3[1] == (undefined8 *)0x0) {
      puVar41 = (undefined8 *)puVar3[2];
      if (*(undefined8 **)puVar3[2] != puVar3) {
        do {
          puVar3 = (undefined8 *)puVar3[2];
          puVar41 = (undefined8 *)puVar3[2];
        } while (*(undefined8 **)puVar3[2] != puVar3);
      }
    }
    else {
      do {
        puVar41 = puVar2;
        puVar2 = (undefined8 *)*puVar41;
      } while (puVar2 != (undefined8 *)0x0);
    }
  }
  pbVar47 = (byte *)unaff_RSI[3];
  pbVar44 = (byte *)unaff_RSI[4];
  if (pbVar47 != pbVar44) {
    local_98 = (byte *)((ulonglong)&local_58 | 1);
    local_a0 = (byte *)((ulonglong)local_78 | 1);
    local_40 = (void *)((ulonglong)&local_c0 | 1);
    local_90 = pbVar44;
    do {
      bVar35 = *pbVar47;
      if ((char)unaff_RDI[3] == '\0') {
        bVar36 = pbVar47[2];
      }
      else {
        bVar35 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        bVar36 = pbVar47[2];
        if ((char)unaff_RDI[3] != '\0') {
          bVar36 = (**(code **)(**(longlong **)(*(longlong *)unaff_RDI[1] + 8) + 0x28))();
        }
      }
      if ((*(byte *)(*unaff_RDI + 0x2a) & 0x20) == 0) {
        if (bVar36 < bVar35) {
          return 0;
        }
        _memset(local_88,((uint)bVar36 - (uint)bVar35) + 1,param_3);
      }
      else {
        local_31 = 0;
        puVar42 = &local_31;
        local_32 = bVar35;
        FUN_009d76b8(puVar42,&local_32);
        local_32 = bVar36;
        FUN_009d76b8(puVar42,&local_32);
        if ((local_78[0] & 1) == 0) {
          pvVar49 = (void *)(ulonglong)(local_78[0] >> 1);
        }
        else {
          pvVar49 = (void *)local_78._8_8_;
        }
        pvVar43 = (void *)CONCAT71((int7)((ulonglong)puVar42 >> 8),1);
        bVar35 = local_58 & 1;
        pvVar40 = local_50;
        if (bVar35 == 0) {
          pvVar40 = (void *)(ulonglong)(local_58 >> 1);
        }
        pvVar45 = pvVar40;
        if (pvVar49 < pvVar40) {
          pvVar45 = pvVar49;
        }
        local_a8 = pbVar47;
        if (pvVar45 == (void *)0x0) {
LAB_009de8f2:
          bVar17 = true;
          if (pvVar49 <= pvVar40) {
LAB_009de901:
            lVar46 = 0;
            do {
              local_32 = (byte)lVar46;
              puVar42 = &local_31;
              FUN_009d76b8(puVar42,&local_32);
              if ((local_78[0] & 1) == 0) {
                pvVar49 = (void *)(ulonglong)(local_78[0] >> 1);
              }
              else {
                pvVar49 = (void *)local_78._8_8_;
              }
              pvVar43 = (void *)CONCAT71((int7)((ulonglong)puVar42 >> 8),1);
              bVar35 = local_c0 & 1;
              pvVar40 = local_b8;
              if (bVar35 == 0) {
                pvVar40 = (void *)(ulonglong)(local_c0 >> 1);
              }
              pvVar45 = pvVar40;
              if (pvVar49 < pvVar40) {
                pvVar45 = pvVar49;
              }
              if (pvVar45 == (void *)0x0) {
LAB_009de991:
                if (pvVar49 <= pvVar40) {
LAB_009de996:
                  pvVar43 = (void *)CONCAT71((int7)((ulonglong)pvVar43 >> 8),1);
                  pvVar49 = local_50;
                  if ((local_58 & 1) == 0) {
                    pvVar49 = (void *)(ulonglong)(local_58 >> 1);
                  }
                  pvVar45 = pvVar49;
                  if (pvVar40 < pvVar49) {
                    pvVar45 = pvVar40;
                  }
                  if (pvVar45 == (void *)0x0) {
LAB_009de9e7:
                    if (pvVar49 < pvVar40) goto LAB_009dea00;
                  }
                  else {
                    iVar38 = _memcmp(pvVar43,pvVar45,param_3);
                    if (iVar38 == 0) goto LAB_009de9e7;
                    if (iVar38 < 0) goto LAB_009dea00;
                  }
                  pvVar43 = (void *)CONCAT71((int7)((ulonglong)pvVar43 >> 8),1);
                  *(undefined1 *)((longlong)local_88 + lVar46) = 1;
                  bVar35 = local_c0 & 1;
                }
              }
              else {
                iVar38 = _memcmp(pvVar43,pvVar45,param_3);
                if (iVar38 == 0) goto LAB_009de991;
                if (-1 < iVar38) goto LAB_009de996;
              }
LAB_009dea00:
              if (bVar35 != 0) {
                operator_delete(pvVar43);
              }
              lVar46 = lVar46 + 1;
            } while (lVar46 != 0x100);
            bVar35 = local_58 & 1;
            bVar17 = false;
          }
        }
        else {
          iVar38 = _memcmp(pvVar43,pvVar45,param_3);
          if (iVar38 == 0) goto LAB_009de8f2;
          bVar17 = true;
          if (-1 < iVar38) goto LAB_009de901;
        }
        if (bVar35 != 0) {
          operator_delete(pvVar43);
        }
        pbVar44 = local_90;
        pbVar47 = local_a8;
        if ((local_78[0] & 1) != 0) {
          operator_delete(pvVar43);
        }
        if (bVar17) {
          return 0;
        }
      }
      pbVar47 = pbVar47 + 4;
    } while (pbVar47 != pbVar44);
  }
  uVar48 = *(uint *)((longlong)unaff_RSI + 0x34);
  uVar37 = *(uint *)(*unaff_RDI + 0x28) & 0x100000;
  if ((uVar37 != 0) &&
     (((*(uint *)(unaff_RDI + 0xb) & uVar48) == *(uint *)(unaff_RDI + 0xb) ||
      ((*(uint *)((longlong)unaff_RDI + 0x5c) & uVar48) == *(uint *)((longlong)unaff_RDI + 0x5c)))))
  {
    uVar48 = uVar48 | *(uint *)(unaff_RDI + 0xc);
  }
  if (uVar48 != 0) {
    lVar46 = 0;
    do {
      cVar34 = FUN_009df118();
      if (cVar34 != '\0') {
        *(undefined1 *)((longlong)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
    uVar37 = *(uint *)(*unaff_RDI + 0x28) & 0x100000;
  }
  uVar48 = *(uint *)(unaff_RSI + 7);
  if ((uVar37 != 0) &&
     (((*(uint *)(unaff_RDI + 0xb) & uVar48) == *(uint *)(unaff_RDI + 0xb) ||
      ((*(uint *)((longlong)unaff_RDI + 0x5c) & uVar48) == *(uint *)((longlong)unaff_RDI + 0x5c)))))
  {
    uVar48 = uVar48 | *(uint *)(unaff_RDI + 0xc);
  }
  if (uVar48 != 0) {
    lVar46 = 0;
    do {
      cVar34 = FUN_009df118();
      if (cVar34 == '\0') {
        *(undefined1 *)((longlong)local_88 + lVar46) = 1;
      }
      lVar46 = lVar46 + 1;
    } while (lVar46 != 0x100);
  }
  pbVar47 = (byte *)unaff_RSI[8];
  if (pbVar47 != (byte *)(unaff_RSI + 9)) {
    local_a0 = (byte *)((ulonglong)&local_58 | 1);
    do {
      local_78 = (undefined1  [16])0x0;
      local_68 = (byte *)0x0;
      FUN_009dedf4(pbVar47 + 0x1a,pbVar47 + 0x19);
      local_68 = local_48;
      bVar35 = local_58 >> 1;
      pvVar49 = local_50;
      if ((local_58 & 1) == 0) {
        pvVar49 = (void *)(ulonglong)bVar35;
      }
      if (pvVar49 == (void *)0x0) {
        if ((local_58 & 1) != 0) {
          operator_delete((void *)CONCAT71(uStack_57,local_58));
        }
        return 0;
      }
      local_90 = local_48;
      local_98 = local_48;
      if ((local_58 & 1) == 0) {
        local_98 = (byte *)((ulonglong)local_78 | 1);
      }
      lVar46 = 0;
      local_a8 = pbVar47;
      local_40 = (void *)CONCAT71(uStack_57,local_58);
      do {
        local_c0 = (byte)lVar46;
        local_bf[0] = 0;
        puVar42 = local_bf;
        FUN_009dedf4(puVar42,&local_c0);
        pvVar43 = (void *)CONCAT71((int7)((ulonglong)puVar42 >> 8),1);
        bVar36 = local_58 & 1;
        pvVar40 = local_50;
        if (bVar36 == 0) {
          pvVar40 = (void *)(ulonglong)(local_58 >> 1);
        }
        if (pvVar49 == pvVar40) {
          pbVar47 = local_a0;
          if (bVar36 != 0) {
            pbVar47 = local_48;
          }
          if (((ulonglong)local_40 & 1) == 0) {
            pvVar40 = (void *)0x0;
            do {
              pvVar43 = (void *)CONCAT71((int7)((ulonglong)pvVar43 >> 8),
                                         (local_78 + 1)[(longlong)pvVar40]);
              if ((local_78 + 1)[(longlong)pvVar40] != pbVar47[(longlong)pvVar40])
              goto LAB_009dec87;
              pvVar40 = (void *)((longlong)pvVar40 + 1);
            } while ((void *)(ulonglong)bVar35 != pvVar40);
          }
          else {
            iVar38 = _memcmp(pvVar43,pvVar49,param_3);
            if (iVar38 != 0) goto LAB_009dec87;
          }
          pvVar43 = (void *)CONCAT71((int7)((ulonglong)pvVar43 >> 8),1);
          *(undefined1 *)((longlong)local_88 + lVar46) = 1;
          bVar36 = local_58 & 1;
        }
LAB_009dec87:
        if (bVar36 != 0) {
          operator_delete(pvVar43);
        }
        lVar46 = lVar46 + 1;
      } while (lVar46 != 0x100);
      pbVar32 = *(byte **)(local_a8 + 8);
      pbVar44 = local_a8;
      if (*(byte **)(local_a8 + 8) == (byte *)0x0) {
        pbVar47 = *(byte **)(local_a8 + 0x10);
        if (*(byte **)pbVar47 != local_a8) {
          pbVar44 = local_a8 + 0x10;
          do {
            lVar46 = *(longlong *)pbVar44;
            pbVar47 = *(byte **)(lVar46 + 0x10);
            pbVar44 = (byte *)(lVar46 + 0x10);
          } while (*(longlong *)pbVar47 != lVar46);
        }
      }
      else {
        do {
          pbVar47 = pbVar32;
          pbVar32 = *(byte **)pbVar47;
        } while (*(byte **)pbVar47 != (byte *)0x0);
      }
      if (((ulonglong)local_40 & 1) != 0) {
        operator_delete(pbVar44);
      }
    } while (pbVar47 != (byte *)(unaff_RSI + 9));
  }
  bVar31 = UNK_023d4d9f;
  bVar30 = UNK_023d4d9e;
  bVar29 = UNK_023d4d9d;
  bVar28 = UNK_023d4d9c;
  bVar27 = UNK_023d4d9b;
  bVar26 = UNK_023d4d9a;
  bVar25 = UNK_023d4d99;
  bVar24 = UNK_023d4d98;
  bVar23 = UNK_023d4d97;
  bVar22 = UNK_023d4d96;
  bVar21 = UNK_023d4d95;
  bVar20 = UNK_023d4d94;
  bVar19 = UNK_023d4d93;
  bVar18 = UNK_023d4d92;
  bVar36 = UNK_023d4d91;
  bVar35 = DAT_023d4d90;
  if (local_33 != '\0') {
    lVar46 = 0x10;
    do {
      pcVar1 = (char *)(lVar39 + lVar46);
      cVar34 = pcVar1[1];
      cVar33 = pcVar1[2];
      cVar4 = pcVar1[3];
      cVar5 = pcVar1[4];
      cVar6 = pcVar1[5];
      cVar7 = pcVar1[6];
      cVar8 = pcVar1[7];
      cVar9 = pcVar1[8];
      cVar10 = pcVar1[9];
      cVar11 = pcVar1[10];
      cVar12 = pcVar1[0xb];
      cVar13 = pcVar1[0xc];
      cVar14 = pcVar1[0xd];
      cVar15 = pcVar1[0xe];
      cVar16 = pcVar1[0xf];
      pbVar47 = (byte *)(lVar39 + lVar46);
      *pbVar47 = -(*pcVar1 == '\0') & bVar35;
      pbVar47[1] = -(cVar34 == '\0') & bVar36;
      pbVar47[2] = -(cVar33 == '\0') & bVar18;
      pbVar47[3] = -(cVar4 == '\0') & bVar19;
      pbVar47[4] = -(cVar5 == '\0') & bVar20;
      pbVar47[5] = -(cVar6 == '\0') & bVar21;
      pbVar47[6] = -(cVar7 == '\0') & bVar22;
      pbVar47[7] = -(cVar8 == '\0') & bVar23;
      pbVar47[8] = -(cVar9 == '\0') & bVar24;
      pbVar47[9] = -(cVar10 == '\0') & bVar25;
      pbVar47[10] = -(cVar11 == '\0') & bVar26;
      pbVar47[0xb] = -(cVar12 == '\0') & bVar27;
      pbVar47[0xc] = -(cVar13 == '\0') & bVar28;
      pbVar47[0xd] = -(cVar14 == '\0') & bVar29;
      pbVar47[0xe] = -(cVar15 == '\0') & bVar30;
      pbVar47[0xf] = -(cVar16 == '\0') & bVar31;
      lVar46 = lVar46 + 0x10;
    } while (lVar46 != 0x110);
  }
  return lVar39;
}




// ============================================================
// @00b12ed0 — 1784 bytes
// str: ""float""
// str: ""_time""
// str: ""_nextBeepStartTime""
// str: ""_beepTime""
// str: ""_beepLength""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b12ed0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02546b98;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c818 = FUN_00b12ca0();
        _DAT_0275c810 = "_time";
        _DAT_0275c820 = 0;
        _DAT_0275c828 = 0x6600;
        _DAT_0275c830 = "float";
        _DAT_0275c838 = 0;
        uRam000000000275c840 = 0;
        _DAT_0275c848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c860 = FUN_00b12ca0();
        _DAT_0275c858 = "_nextBeepStartTime";
        _DAT_0275c868 = 0;
        _DAT_0275c870 = 0x6600;
        _DAT_0275c878 = "float";
        _DAT_0275c880 = 0;
        uRam000000000275c888 = 0;
        _DAT_0275c890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c8e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c8a8 = FUN_00b12ca0();
        _DAT_0275c8a0 = "_beepTime";
        _DAT_0275c8b0 = 0;
        _DAT_0275c8b8 = 0x6600;
        _DAT_0275c8c0 = "float";
        _DAT_0275c8c8 = 0;
        uRam000000000275c8d0 = 0;
        _DAT_0275c8d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c928 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c8f0 = FUN_00b12ca0();
        _DAT_0275c8e8 = "_beepLength";
        _DAT_0275c8f8 = 0;
        _DAT_0275c900 = 0x6600;
        _DAT_0275c908 = "float";
        _DAT_0275c910 = 0;
        uRam000000000275c918 = 0;
        _DAT_0275c920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c938 = FUN_00b12ca0();
        _DAT_0275c930 = "_startPeriod";
        _DAT_0275c940 = 0;
        _DAT_0275c948 = 0x6600;
        _DAT_0275c950 = "float";
        _DAT_0275c958 = 0;
        uRam000000000275c960 = 0;
        _DAT_0275c968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c9b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c980 = FUN_00b12ca0();
        _DAT_0275c978 = "_startVariance";
        _DAT_0275c988 = 0;
        _DAT_0275c990 = 0x6600;
        _DAT_0275c998 = "float";
        _DAT_0275c9a0 = 0;
        uRam000000000275c9a8 = 0;
        _DAT_0275c9b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c9c8 = FUN_00b12ca0();
        _DAT_0275c9c0 = "_endPeriod";
        _DAT_0275c9d0 = 0;
        _DAT_0275c9d8 = 0x6600;
        _DAT_0275c9e0 = "float";
        _DAT_0275c9e8 = 0;
        uRam000000000275c9f0 = 0;
        _DAT_0275c9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ca10 = FUN_00b12ca0();
        _DAT_0275ca08 = "_endVariance";
        _DAT_0275ca18 = 0;
        _DAT_0275ca20 = 0x6600;
        _DAT_0275ca28 = "float";
        _DAT_0275ca30 = 0;
        uRam000000000275ca38 = 0;
        _DAT_0275ca40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ca58 = FUN_00b12ca0();
        _DAT_0275ca50 = "_progression";
        _DAT_0275ca60 = 0;
        _DAT_0275ca68 = 0x6600;
        _DAT_0275ca70 = "float";
        _DAT_0275ca78 = 0;
        uRam000000000275ca80 = 0;
        _DAT_0275ca88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275caa0 = FUN_00b12ca0();
        _DAT_0275ca98 = "_isDemoBeepPlaying";
        _DAT_0275caa8 = 0;
        _DAT_0275cab0 = 0x6900;
        _DAT_0275cab8 = "GNInt";
        _DAT_0275cac0 = 0;
        uRam000000000275cac8 = 0;
        _DAT_0275cad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @010fc3b0 — 1771 bytes
// str: ""bool""
// str: ""float""
// str: ""GNInt""
// str: ""_processPeriodBased""
// str: ""_usesPososc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010fc3b0(void)

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
  *unaff_RDI = &DAT_025f0698;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278f9b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278f980 = FUN_010fc1b0();
        _DAT_0278f978 = "_processPeriodBased";
        _DAT_0278f988 = 0;
        _DAT_0278f990 = 0x6200;
        _DAT_0278f998 = "bool";
        _DAT_0278f9a0 = 0;
        uRam000000000278f9a8 = 0;
        _DAT_0278f9b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa00 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278f9c8 = FUN_010fc1b0();
        _DAT_0278f9c0 = "_usesPososc";
        _DAT_0278f9d0 = 0;
        _DAT_0278f9d8 = 0x6200;
        _DAT_0278f9e0 = "bool";
        _DAT_0278f9e8 = 0;
        uRam000000000278f9f0 = 0;
        _DAT_0278f9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fa10 = FUN_010fc1b0();
        _DAT_0278fa08 = "_resetAllPhasesAtAttack";
        _DAT_0278fa18 = 0;
        _DAT_0278fa20 = 0x6200;
        _DAT_0278fa28 = "bool";
        _DAT_0278fa30 = 0;
        uRam000000000278fa38 = 0;
        _DAT_0278fa40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fa90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fa58 = FUN_010fc1b0();
        _DAT_0278fa50 = "_continueAllPhasesByDefault";
        _DAT_0278fa60 = 0;
        _DAT_0278fa68 = 0x6200;
        _DAT_0278fa70 = "bool";
        _DAT_0278fa78 = 0;
        uRam000000000278fa80 = 0;
        _DAT_0278fa88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fad8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278faa0 = FUN_010fc1b0();
        _DAT_0278fa98 = "_renderWithOriginalTime";
        _DAT_0278faa8 = 0;
        _DAT_0278fab0 = 0x6200;
        _DAT_0278fab8 = "bool";
        _DAT_0278fac0 = 0;
        uRam000000000278fac8 = 0;
        _DAT_0278fad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fb20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fae8 = FUN_010fc1b0();
        _DAT_0278fae0 = "_freqDomainFormantResolution";
        _DAT_0278faf0 = 0;
        _DAT_0278faf8 = 0x6600;
        _DAT_0278fb00 = "float";
        _DAT_0278fb08 = 0;
        uRam000000000278fb10 = 0;
        _DAT_0278fb18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fb68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fb30 = FUN_010fc1b0();
        _DAT_0278fb28 = "_freqDomainFourierSize";
        _DAT_0278fb38 = 0;
        _DAT_0278fb40 = 0x6900;
        _DAT_0278fb48 = "GNInt";
        _DAT_0278fb50 = 0;
        uRam000000000278fb58 = 0;
        _DAT_0278fb60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fbb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fb78 = FUN_010fc1b0();
        _DAT_0278fb70 = "_freqDomainPhaseResetParametersScale";
        _DAT_0278fb80 = 0;
        _DAT_0278fb88 = 0x6600;
        _DAT_0278fb90 = "float";
        _DAT_0278fb98 = 0;
        uRam000000000278fba0 = 0;
        _DAT_0278fba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fbf8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fbc0 = FUN_010fc1b0();
        _DAT_0278fbb8 = "_formantPitchUpCompensationFactor";
        _DAT_0278fbc8 = 0;
        _DAT_0278fbd0 = 0x6600;
        _DAT_0278fbd8 = "float";
        _DAT_0278fbe0 = 0;
        uRam000000000278fbe8 = 0;
        _DAT_0278fbf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_010fc1b0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278fc40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278fc08 = FUN_010fc1b0();
        _DAT_0278fc00 = "_formantPitchDownCompensationFactor";
        _DAT_0278fc10 = 0;
        _DAT_0278fc18 = 0x6600;
        _DAT_0278fc20 = "float";
        _DAT_0278fc28 = 0;
        uRam000000000278fc30 = 0;
        _DAT_0278fc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017e7400 — 1653 bytes
// ============================================================

undefined8 FUN_017e7400(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  pthread_key_t pVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined8 unaff_RSI;
  int iVar10;
  bool bVar11;
  undefined4 local_70;
  int local_6c;
  longlong local_68;
  undefined4 *local_60;
  ulonglong local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_60 = &local_70;
  if (param_1 != (undefined4 *)0x0) {
    local_60 = param_1;
  }
  local_70 = 0xffffffff;
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  pVar7 = (pthread_key_t)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_38 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = local_60;
  FUN_016cac90(local_60,1);
  pvVar4 = _pthread_getspecific((pthread_key_t)puVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar8 = local_60;
  local_6c = param_2;
  uVar5 = FUN_016cac90(local_60,2);
  pVar7 = (pthread_key_t)puVar8;
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    local_68 = uVar5;
    FUN_00e8b990();
  }
  local_48 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = FUN_016caaa0();
  pvVar4 = _pthread_getspecific(pVar7);
  iVar3 = local_6c;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ca840(0,unaff_RSI,0,local_60);
  uVar9 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_68 = uVar9;
  uVar2 = FUN_0123fef0();
  uVar9 = local_38;
  FUN_00e7bcc0();
  local_58 = uVar9;
  FUN_00e7c860();
  local_38 = FUN_00e7cd00();
  uVar9 = local_38 >> 0x20;
  uVar6 = (uint)(local_38 >> 0x20);
  if ((uVar2 + 1 < 3) || ((uVar2 - ((int)uVar2 >> 0x1f) & 0xfffffffe) != uVar2)) {
    if (iVar3 == 1) {
      do {
        if (uVar6 != 0) {
          pVar7 = (pthread_key_t)uVar9;
          local_48._4_4_ = (int)(local_48 >> 0x20);
          bVar11 = local_48._4_4_ != 0;
          if (bVar11) {
            cVar1 = FUN_00e7c020();
            uVar9 = local_48;
            if (cVar1 == '\0') goto LAB_017e7a5c;
            if (local_38._4_4_ == 0) goto LAB_017e7942;
          }
          if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
          goto LAB_017e7a5c;
        }
LAB_017e7942:
        local_58 = CONCAT44(local_58._4_4_,1);
        FUN_00e7c280();
        uVar9 = (ulonglong)local_38._4_4_;
        uVar6 = local_38._4_4_;
      } while( true );
    }
    if (iVar3 != 2) {
      do {
        pVar7 = (pthread_key_t)uVar9;
        if (pVar7 != 0) {
          if (local_48._4_4_ != 0) {
            cVar1 = FUN_00e7c020();
            uVar9 = local_48;
            if (cVar1 == '\0') goto LAB_017e7a5c;
            if (local_38._4_4_ == 0) goto LAB_017e7a00;
          }
          if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
          goto LAB_017e7a5c;
        }
LAB_017e7a00:
        uVar9 = local_38 >> 0x20;
      } while( true );
    }
    do {
      if (uVar6 != 0) {
        pVar7 = (pthread_key_t)uVar9;
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e7812;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e7812:
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c260();
      uVar9 = (ulonglong)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  iVar10 = (int)uVar2 / 2;
  if (iVar3 == 1) {
    do {
      pVar7 = (pthread_key_t)uVar9;
      if (uVar6 != 0) {
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e7893;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e7893:
      local_58 = local_38;
      FUN_00e7b970();
      iVar3 = FUN_00e7cea0();
      uVar9 = local_38;
      if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_00e7c280();
      uVar9 = (ulonglong)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  if (iVar3 != 2) {
    do {
      pVar7 = (pthread_key_t)uVar9;
      if (uVar6 != 0) {
        local_48._4_4_ = (int)(local_48 >> 0x20);
        bVar11 = local_48._4_4_ != 0;
        if (bVar11) {
          cVar1 = FUN_00e7c020();
          uVar9 = local_48;
          if (cVar1 == '\0') goto LAB_017e7a5c;
          if (local_38._4_4_ == 0) goto LAB_017e79c3;
        }
        if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
        goto LAB_017e7a5c;
      }
LAB_017e79c3:
      local_58 = local_38;
      FUN_00e7b970();
      iVar3 = FUN_00e7cea0();
      uVar9 = local_38;
      if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
      uVar9 = (ulonglong)local_38._4_4_;
      uVar6 = local_38._4_4_;
    } while( true );
  }
  do {
    pVar7 = (pthread_key_t)uVar9;
    if (uVar6 != 0) {
      local_48._4_4_ = (int)(local_48 >> 0x20);
      bVar11 = local_48._4_4_ != 0;
      if (bVar11) {
        cVar1 = FUN_00e7c020();
        uVar9 = local_48;
        if (cVar1 == '\0') {
LAB_017e7a5c:
          local_38 = uVar9;
          pvVar4 = _pthread_getspecific(pVar7);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_016c4760();
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          return uVar5;
        }
        if (local_38._4_4_ == 0) goto LAB_017e7743;
      }
      if ((local_40._4_4_ != 0) && (cVar1 = FUN_00e7c020(), uVar9 = local_40, cVar1 == '\0'))
      goto LAB_017e7a5c;
    }
LAB_017e7743:
    local_58 = local_38;
    FUN_00e7b970();
    iVar3 = FUN_00e7cea0();
    uVar9 = local_38;
    if (iVar3 % iVar10 == 0) goto LAB_017e7a5c;
    local_58 = CONCAT44(local_58._4_4_,1);
    FUN_00e7c260();
    uVar9 = (ulonglong)local_38._4_4_;
    uVar6 = local_38._4_4_;
  } while( true );
}




// ============================================================
// @017726c0 — 1604 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01772aa7) */
/* WARNING: Removing unreachable block (ram,0x01772ab4) */
/* WARNING: Removing unreachable block (ram,0x01772c8f) */
/* WARNING: Removing unreachable block (ram,0x01772c98) */
/* WARNING: Removing unreachable block (ram,0x01772ad9) */
/* WARNING: Removing unreachable block (ram,0x01772ae6) */

float FUN_017726c0(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong unaff_RDI;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_54;
  longlong local_48;
  char local_40;
  
  fVar13 = (float)FUN_017708f0();
  FUN_01770aa0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar14 = (float)FUN_01779ec0();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01772f00();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d23740();
  pcVar4 = DAT_025ffd78;
  iVar1 = *(int *)(local_48 + 0xc);
  puVar11 = &DAT_025ffd50;
  pVar10 = 0x25ffd50;
  iVar12 = 0;
  if (iVar1 < 1) {
    bVar3 = false;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    local_54 = 0.0;
    bVar3 = false;
    puVar9 = (undefined8 *)0x0;
    do {
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_01779ec0();
      fVar15 = fVar15 - fVar14;
      if (iVar12 != 0) {
        for (; fVar15 < local_54; fVar15 = fVar15 + fVar13) {
        }
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_025ffd60;
      puVar8[7] = 0;
      puVar8[8] = 0;
      (*pcVar4)();
      if (puVar8 == puVar9) {
        puVar8 = puVar9;
        if (bVar3) {
          FUN_00d50b20();
          bVar5 = bVar3;
        }
        else {
          bVar5 = true;
        }
      }
      else {
        bVar5 = true;
        if ((bVar3) && (puVar9 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar3 = bVar5;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0(fVar15);
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar11);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f40();
      FUN_00d21140();
      pVar10 = (pthread_key_t)puVar11;
      iVar12 = iVar12 + 1;
      puVar9 = puVar8;
      local_54 = fVar15;
    } while (iVar12 != iVar1);
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025ffd60;
  puVar9[7] = 0;
  puVar9[8] = 0;
  (*pcVar4)();
  if (puVar9 == puVar8) {
    puVar9 = puVar8;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else if ((bVar3) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar15 = (float)FUN_01779ec0();
  FUN_01779ed0(fVar13 + fVar15);
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01779f30();
  FUN_01779f40();
  FUN_00d21140();
  FUN_017712c0();
  if (*(int *)(unaff_RDI + 0x48) != 0) {
    FUN_00d64850();
    *(undefined4 *)(unaff_RDI + 0x48) = 0;
    FUN_00d64910();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return fVar14;
}




// ============================================================
// @014f0020 — 1511 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014f0166) */
/* WARNING: Removing unreachable block (ram,0x014f0173) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f0020(longlong param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  longlong local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_80;
  char local_78;
  
  lVar10 = param_1;
  (**(code **)(*unaff_RDI + 0x378))();
  pvVar8 = _pthread_getspecific((pthread_key_t)lVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)(unaff_RDI[0x21] + 0xc);
  lVar10 = (longlong)(int)uVar5;
  bVar15 = unaff_RSI == 0;
  bVar6 = param_2 < (int)(uVar5 * 5);
  if (bVar6 || bVar15) {
    unaff_RSI = FUN_00e83010();
  }
  if (param_1 == 0) {
    FUN_014efd00();
    lVar13 = local_80;
    if (local_78 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar13 = 0;
  }
  puVar2 = (undefined4 *)(unaff_RSI + lVar10 * 4);
  if ((int)uVar5 < 1) {
    bVar14 = false;
    lVar12 = 0;
  }
  else {
    uVar11 = 0;
    lVar12 = 0;
    bVar14 = false;
    do {
      lVar9 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar11 * 8);
      if (lVar12 == lVar9) {
        if ((!bVar14) && (lVar12 != 0)) {
          bVar14 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar14) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar14 = true;
          lVar12 = lVar9;
        }
        else {
          bVar14 = true;
          lVar12 = lVar9;
        }
      }
      *(undefined4 *)(unaff_RSI + uVar11 * 4) = *(undefined4 *)(lVar12 + 0x14);
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
    if ((int)uVar5 < 5) {
      uVar11 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar11 * 8);
        if (lVar12 == lVar9) {
          if (!bVar14) {
            bVar14 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          lVar12 = lVar9;
          if (bVar14) {
            FUN_00d50b20();
            bVar14 = true;
          }
          else {
            bVar14 = true;
          }
        }
        fVar17 = 0.0;
        if ((!NAN(*(float *)(lVar12 + 0x20))) && (!NAN(*(float *)(lVar12 + 0x10)))) {
          fVar17 = *(float *)(lVar12 + 0x20) * *(float *)(lVar12 + 0x10) * DAT_0239011c;
        }
        puVar2[uVar11] = fVar17;
        uVar11 = uVar11 + 1;
      } while (uVar5 != uVar11);
    }
    else {
      uVar11 = 2;
      do {
        lVar9 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar11 * 8);
        if (lVar12 == lVar9) {
          if (!bVar14) {
            bVar14 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          lVar12 = lVar9;
          if (bVar14) {
            FUN_00d50b20();
            bVar14 = true;
          }
          else {
            bVar14 = true;
          }
        }
        fVar17 = *(float *)(unaff_RSI + -4 + uVar11 * 4);
        fVar16 = *(float *)(unaff_RSI + uVar11 * 4);
        fVar3 = *(float *)(unaff_RSI + 4 + uVar11 * 4);
        uVar1 = uVar11 + 1;
        fVar16 = DAT_02394240 -
                 (float)((uint)((*(float *)(unaff_RSI + 8 + uVar11 * 4) - fVar3) * DAT_0239011c +
                               (fVar3 - fVar16) +
                               (fVar16 - fVar17) +
                               (fVar17 - *(float *)(unaff_RSI + -8 + uVar11 * 4)) * DAT_0239011c) &
                        _DAT_02390140);
        fVar17 = DAT_0239425c;
        if (DAT_0239425c <= fVar16) {
          fVar17 = fVar16;
        }
        fVar16 = 0.0;
        if ((!NAN(*(float *)(lVar12 + 0x20))) && (!NAN(*(float *)(lVar12 + 0x10)))) {
          fVar16 = *(float *)(lVar12 + 0x20) *
                   fVar17 * DAT_023b81d4 * fVar17 * DAT_023b81d4 * *(float *)(lVar12 + 0x10);
        }
        puVar2[uVar11] = fVar16;
        uVar11 = uVar1;
      } while (uVar5 - 2 != uVar1);
      *puVar2 = puVar2[2];
      puVar2[1] = puVar2[2];
      uVar4 = puVar2[uVar5 - 3];
      puVar2[uVar5 - 1] = uVar4;
      puVar2[(int)(uVar5 - 2)] = uVar4;
    }
  }
  lVar9 = lVar10 * 0x10 + unaff_RSI;
  FUN_015c35f0(unaff_RSI + lVar10 * 0xc,lVar9,unaff_RSI + lVar10 * 8,uVar5);
  if (0 < (int)uVar5) {
    uVar11 = 0;
    do {
      lVar10 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar11 * 8);
      if (lVar12 == lVar10) {
        lVar10 = lVar12;
        bVar7 = bVar14;
        if ((!bVar14) && (lVar12 != 0)) {
          FUN_00d50b00();
          bVar7 = true;
        }
      }
      else {
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar14) && (lVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar14 = bVar7;
      lVar12 = lVar10;
      *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(lVar9 + uVar11 * 4);
      *(undefined4 *)(lVar12 + 0x1c) = puVar2[uVar11];
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
  }
  FUN_014bd3c0(local_94);
  if (bVar6 || bVar15) {
    FUN_00e83070();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (param_1 == 0 && lVar13 != 0) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @017e6420 — 1471 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e6766) */
/* WARNING: Removing unreachable block (ram,0x017e65cb) */
/* WARNING: Removing unreachable block (ram,0x017e65db) */
/* WARNING: Removing unreachable block (ram,0x017e64b4) */
/* WARNING: Removing unreachable block (ram,0x017e64c0) */
/* WARNING: Removing unreachable block (ram,0x017e66e7) */
/* WARNING: Removing unreachable block (ram,0x017e66f3) */
/* WARNING: Removing unreachable block (ram,0x017e6772) */
/* WARNING: Removing unreachable block (ram,0x017e68a4) */
/* WARNING: Removing unreachable block (ram,0x017e68b0) */

void FUN_017e6420(char *param_1)

{
  void *pvVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  int iVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  uint uVar8;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  char *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  uVar8 = *(uint *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
  uVar7 = (ulonglong)uVar8;
  if (0 < (int)uVar8) {
    while( true ) {
      uVar8 = uVar8 - 1;
      param_1 = (char *)(ulonglong)uVar8;
      pvVar1 = _pthread_getspecific(uVar8);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e1840();
      if ((longlong)uVar7 < 2) break;
      uVar7 = uVar7 - 1;
    }
  }
  if (*(char **)(unaff_RDI + 0x50) != (char *)0x0) {
    local_58[0] = '\0';
    local_60 = 0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = *(char **)(unaff_RDI + 0x50);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar6 = -local_48._4_4_;
        }
        else {
          iVar6 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar2 = (longlong)(int)local_48;
      iVar6 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar6);
      if (*(int *)(local_50 + 0xc) <= iVar6) break;
      local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
      pvVar1 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_50 + 0x10));
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e0330();
    }
    param_1 = local_50;
    FUN_017e8120();
  }
  pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017de950();
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de950();
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017deb20();
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de970();
  }
  while( true ) {
    pVar5 = (pthread_key_t)param_1;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    iVar6 = *(int *)(local_60 + 0xc);
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar6 == 0) break;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    FUN_00d23340();
    local_38[0] = local_58[0];
    pcVar4 = local_38;
    pcVar3 = local_58;
    if (local_58[0] == '\0') {
      pcVar3 = pcVar4;
    }
    *pcVar3 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pVar5 = (pthread_key_t)pcVar4;
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de970();
    if ((local_38[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar5);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017de9c0();
    FUN_00d23340();
    local_38[0] = local_58[0];
    param_1 = local_38;
    pcVar4 = local_58;
    if (local_58[0] == '\0') {
      pcVar4 = param_1;
    }
    *pcVar4 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_017deb20();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00d045f0 — 1387 bytes
// ============================================================

float FUN_00d045f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  float fVar7;
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
  float local_50;
  float local_4c;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar2 = DAT_027259e0;
  if (*unaff_RSI == 0) {
    return 0.0;
  }
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d91000(1,&local_a0);
  plVar1 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_4c = 0.0;
  if (*(int *)((longlong)plVar1 + 0xc) == 0) goto LAB_00d04b3f;
  FUN_00d23310();
  plVar3 = local_48;
  local_38[0] = local_40[0];
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_0270b790;
  if (DAT_0270b790 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar2;
  local_88 = '\x01';
  cVar4 = (**(code **)(*plVar3 + 0x50))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d23310();
    plVar3 = local_48;
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_026fce10;
    if (DAT_026fce10 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    cVar4 = (**(code **)(*plVar3 + 0x50))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      plVar3 = local_48;
      local_38[0] = local_40[0];
      pcVar5 = local_40;
      if (local_40[0] == '\0') {
        pcVar5 = local_38;
      }
      *pcVar5 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_40[0] = '\0';
      FUN_00d23f50();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d23310();
    plVar3 = local_48;
    local_38[0] = local_40[0];
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_40[0] = '\0';
    FUN_00d23f50();
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)plVar1 + 0xc) == 2) {
    FUN_00d23310();
    plVar3 = local_48;
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_4c = (float)FUN_00d8d7b0();
    if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = *(longlong **)(plVar1[2] + 8);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d99300();
    plVar3 = local_48;
    plVar6 = plVar1;
    if (local_48 == plVar1) {
LAB_00d04a51:
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar6 = plVar3;
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_00d04a51;
      }
      plVar6 = local_48;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar2 = DAT_0277c3f8;
    if (DAT_0277c3f8 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_0277c400;
    local_50 = DAT_02393944;
    if (cVar4 == '\0') {
      if (DAT_0277c400 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar2;
      local_58 = '\x01';
      cVar4 = (**(code **)(*plVar6 + 0x50))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_50 = DAT_0240e358;
      if (cVar4 == '\0') {
        local_50 = DAT_02390124;
      }
    }
    FUN_00d50b20();
    local_4c = local_4c * local_50;
  }
  else {
    if (*(int *)((longlong)plVar1 + 0xc) != 1) goto LAB_00d04b3f;
    FUN_00d23310();
    pcVar5 = local_40;
    if (local_40[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_4c = (float)FUN_00d8d7b0();
    if ((local_38[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  fVar7 = *(float *)(unaff_RDI + 0x18);
  if (*(float *)(unaff_RDI + 0x18) <= local_4c) {
    fVar7 = local_4c;
  }
  local_4c = fVar7;
  if (*(float *)(unaff_RDI + 0x1c) < fVar7) {
    local_4c = *(float *)(unaff_RDI + 0x1c);
  }
LAB_00d04b3f:
  FUN_00d50b20();
  return local_4c;
}




// ============================================================
// @00d05f30 — 1313 bytes
// str: ""bool""
// str: ""SInt64""
// str: ""_didFail""
// str: ""_isSuspended""
// str: ""_uploadLength""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d05f30(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00e95410();
  *unaff_RDI = &DAT_0258d9f8;
  unaff_RDI[7] = *(undefined8 *)(unaff_RSI + 0x38);
  FUN_00d06520();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c560 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c528 = FUN_00d05d00();
        _DAT_0277c520 = "_didFail";
        _DAT_0277c530 = 0;
        _DAT_0277c538 = 0x6200;
        _DAT_0277c540 = "bool";
        _DAT_0277c548 = 0;
        uRam000000000277c550 = 0;
        _DAT_0277c558 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00d06600();
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c5f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c5b8 = FUN_00d05d00();
        _DAT_0277c5b0 = "_expectedResultLength";
        _DAT_0277c5c0 = 0;
        _DAT_0277c5c8 = 0x6900;
        _DAT_0277c5d0 = "GNInt";
        _DAT_0277c5d8 = 0;
        uRam000000000277c5e0 = 0;
        _DAT_0277c5e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c638 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c600 = FUN_00d05d00();
        _DAT_0277c5f8 = "_httpStatusCode";
        _DAT_0277c608 = 0;
        _DAT_0277c610 = 0x6900;
        _DAT_0277c618 = "GNInt";
        _DAT_0277c620 = 0;
        uRam000000000277c628 = 0;
        _DAT_0277c630 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c680 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c648 = FUN_00d05d00();
        _DAT_0277c640 = "_isSuspended";
        _DAT_0277c650 = 0;
        _DAT_0277c658 = 0x6200;
        _DAT_0277c660 = "bool";
        _DAT_0277c668 = 0;
        uRam000000000277c670 = 0;
        _DAT_0277c678 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00d066e0();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c710 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c6d8 = FUN_00d05d00();
        _DAT_0277c6d0 = "_uploadLength";
        _DAT_0277c6e0 = 0;
        _DAT_0277c6e8 = 0x6c00;
        _DAT_0277c6f0 = "SInt64";
        _DAT_0277c6f8 = 0;
        uRam000000000277c700 = 0;
        _DAT_0277c708 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c758 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c720 = FUN_00d05d00();
        _DAT_0277c718 = "_receivedResultLength";
        _DAT_0277c728 = 0;
        _DAT_0277c730 = 0x6900;
        _DAT_0277c738 = "GNInt";
        _DAT_0277c740 = 0;
        uRam000000000277c748 = 0;
        _DAT_0277c750 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c7a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c768 = FUN_00d05d00();
        _DAT_0277c760 = "_didTimeOut";
        _DAT_0277c770 = 0;
        _DAT_0277c778 = 0x6200;
        _DAT_0277c780 = "bool";
        _DAT_0277c788 = 0;
        uRam000000000277c790 = 0;
        _DAT_0277c798 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007b8500 — 1217 bytes
// str: ""_baseNote""
// str: ""_fineTune""
// str: ""_lowNote""
// str: ""_highNote""
// str: ""_lowVelocity""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b8500(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02548f60;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c880 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c848 = FUN_007b8310();
        _DAT_0272c840 = "_baseNote";
        _DAT_0272c850 = 0;
        _DAT_0272c858 = 0x6900;
        _DAT_0272c860 = "GNInt";
        _DAT_0272c868 = 0;
        uRam000000000272c870 = 0;
        _DAT_0272c878 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c8c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c890 = FUN_007b8310();
        _DAT_0272c888 = "_fineTune";
        _DAT_0272c898 = 0;
        _DAT_0272c8a0 = 0x6900;
        _DAT_0272c8a8 = "GNInt";
        _DAT_0272c8b0 = 0;
        uRam000000000272c8b8 = 0;
        _DAT_0272c8c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c8d8 = FUN_007b8310();
        _DAT_0272c8d0 = "_lowNote";
        _DAT_0272c8e0 = 0;
        _DAT_0272c8e8 = 0x6900;
        _DAT_0272c8f0 = "GNInt";
        _DAT_0272c8f8 = 0;
        uRam000000000272c900 = 0;
        _DAT_0272c908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c958 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c920 = FUN_007b8310();
        _DAT_0272c918 = "_highNote";
        _DAT_0272c928 = 0;
        _DAT_0272c930 = 0x6900;
        _DAT_0272c938 = "GNInt";
        _DAT_0272c940 = 0;
        uRam000000000272c948 = 0;
        _DAT_0272c950 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c9a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c968 = FUN_007b8310();
        _DAT_0272c960 = "_lowVelocity";
        _DAT_0272c970 = 0;
        _DAT_0272c978 = 0x6900;
        _DAT_0272c980 = "GNInt";
        _DAT_0272c988 = 0;
        uRam000000000272c990 = 0;
        _DAT_0272c998 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c9e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c9b0 = FUN_007b8310();
        _DAT_0272c9a8 = "_highVelocity";
        _DAT_0272c9b8 = 0;
        _DAT_0272c9c0 = 0x6900;
        _DAT_0272c9c8 = "GNInt";
        _DAT_0272c9d0 = 0;
        uRam000000000272c9d8 = 0;
        _DAT_0272c9e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272ca30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c9f8 = FUN_007b8310();
        _DAT_0272c9f0 = "_gain";
        _DAT_0272ca00 = 0;
        _DAT_0272ca08 = 0x6900;
        _DAT_0272ca10 = "GNInt";
        _DAT_0272ca18 = 0;
        uRam000000000272ca20 = 0;
        _DAT_0272ca28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017753d0 — 1184 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01775783) */
/* WARNING: Removing unreachable block (ram,0x0177578c) */
/* WARNING: Removing unreachable block (ram,0x01775711) */
/* WARNING: Removing unreachable block (ram,0x0177571a) */
/* WARNING: Removing unreachable block (ram,0x017757f5) */
/* WARNING: Removing unreachable block (ram,0x017757fe) */

undefined8 * FUN_017753d0(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  pthread_key_t pVar5;
  void *pvVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  uint uVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  int *piVar10;
  
  piVar10 = param_1;
  FUN_01774750();
  pVar8 = (pthread_key_t)piVar10;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(pVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_01779f30();
  iVar3 = iVar3 + *(int *)(unaff_RSI + 100);
  iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
  iVar4 = iVar3 + 0xc;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *param_1 = iVar4;
  iVar3 = FUN_01775a80();
  iVar3 = iVar3 + *(int *)(unaff_RSI + 100);
  iVar3 = iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc;
  iVar4 = iVar3 + 0xc;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  uVar9 = (char)((char)iVar4 + -1) * 0x2b;
  FUN_01774750((uint)(byte)((char)((uVar9 & 0xffff) >> 0xf) + (char)(uVar9 >> 9)) * 0xc,param_2 + 1)
  ;
  pVar8 = ((iVar4 + 1U & 0xff) / 3 & 0xfffffffc) * 3;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_017755cd;
    FUN_00d50b00();
LAB_01775546:
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01779f30();
    iVar4 = iVar4 + *(int *)(unaff_RSI + 100);
    pVar5 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    pVar8 = pVar5 + 0xc;
    if (-1 < (int)pVar5) {
      pVar8 = pVar5;
    }
    bVar2 = false;
  }
  else {
    if (local_40 != 0) goto LAB_01775546;
LAB_017755cd:
    bVar2 = true;
  }
  FUN_01774750(pVar8,param_2 + -1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01775611;
    }
  }
  else if (local_40 != 0) {
LAB_01775611:
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f30();
    bVar1 = false;
    goto LAB_017756a0;
  }
  bVar1 = true;
LAB_017756a0:
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d46530();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @007c71c0 — 1182 bytes
// str: ""bool""
// str: ""_inputChannelCount""
// str: ""_outputChannelCount""
// str: ""_outputBuffersDidUnderrfftun""
// str: ""_reloadRequestedByDriver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c71c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0252d640;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x94);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x98);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x9c);
  *(undefined4 *)(unaff_RDI + 0x12) = *(undefined4 *)(unaff_RSI + 0x90);
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = uVar1;
  *(undefined4 *)(unaff_RDI + 0x13) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = uVar3;
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754e70 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754e38 = FUN_00370d10();
        _DAT_02754e30 = "_inputChannelCount";
        _DAT_02754e40 = 0;
        _DAT_02754e48 = 0x6900;
        _DAT_02754e50 = "GNInt";
        _DAT_02754e58 = 0;
        uRam0000000002754e60 = 0;
        _DAT_02754e68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ec90 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272ec58 = FUN_00370d10();
        _DAT_0272ec50 = "_outputChannelCount";
        _DAT_0272ec60 = 0;
        _DAT_0272ec68 = 0x6900;
        _DAT_0272ec70 = "GNInt";
        _DAT_0272ec78 = 0;
        uRam000000000272ec80 = 0;
        _DAT_0272ec88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c7720();
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ece0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272eca8 = FUN_00370d10();
        _DAT_0272eca0 = "_outputBuffersDidUnderrfftun";
        _DAT_0272ecb0 = 0;
        _DAT_0272ecb8 = 0x6200;
        _DAT_0272ecc0 = "bool";
        _DAT_0272ecc8 = 0;
        uRam000000000272ecd0 = 0;
        _DAT_0272ecd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xb1) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754f10 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754ed8 = FUN_00370d10();
        _DAT_02754ed0 = "_reloadRequestedByDriver";
        _DAT_02754ee0 = 0;
        _DAT_02754ee8 = 0x6200;
        _DAT_02754ef0 = "bool";
        _DAT_02754ef8 = 0;
        uRam0000000002754f00 = 0;
        _DAT_02754f08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_0272ed30 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_0272ecf8 = FUN_00370d10();
        _DAT_0272ecf0 = "_bufferUnderruns";
        _DAT_0272ed00 = 0;
        _DAT_0272ed08 = 0x6900;
        _DAT_0272ed10 = "GNInt";
        _DAT_0272ed18 = 0;
        uRam000000000272ed20 = 0;
        _DAT_0272ed28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c7800();
  FUN_007c78e0();
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar5 = FUN_00370d10();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02754fb0 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02754f78 = FUN_00370d10();
        _DAT_02754f70 = "_switchInputBuffersLock";
        _DAT_02754f80 = 0;
        _DAT_02754f88 = 0x6900;
        _DAT_02754f90 = "GNInt";
        _DAT_02754f98 = 0;
        uRam0000000002754fa0 = 0;
        _DAT_02754fa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @014f0770 — 1139 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f0770(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  float *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  char cVar22;
  undefined8 uVar23;
  
  uVar2 = *(uint *)(unaff_RDI[0x21] + 0xc);
  uVar15 = (ulonglong)uVar2;
  iVar5 = uVar2 * 2;
  bVar3 = (int)param_2 < iVar5;
  bVar10 = bVar3 || unaff_RSI == (float *)0x0;
  if (bVar3 || unaff_RSI == (float *)0x0) {
    unaff_RSI = (float *)FUN_00e83010(CONCAT31((int3)((uint)iVar5 >> 8),bVar10),param_2,param_3,
                                      param_4,0);
  }
  fVar16 = (float)(**(code **)(*unaff_RDI + 0x3e0))();
  if (0 < (int)uVar2) {
    uVar13 = 0;
    lVar14 = 0;
    uVar23 = 0;
    do {
      cVar22 = (char)uVar23;
      lVar12 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar13 * 8);
      if (lVar14 == lVar12) {
        if ((cVar22 == '\0') && (lVar14 != 0)) {
          uVar23 = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        if ((cVar22 == '\0') || (lVar14 == 0)) {
          uVar23 = 1;
          lVar14 = lVar12;
        }
        else {
          FUN_00d50b20();
          uVar23 = 1;
          lVar14 = lVar12;
        }
      }
      cVar22 = (char)uVar23;
      unaff_RSI[uVar13] = *(float *)(lVar14 + 0x14);
      unaff_RSI[(longlong)(int)uVar2 + uVar13] = *(float *)(lVar14 + 0x18);
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
    fVar1 = *unaff_RSI;
    fVar21 = unaff_RSI[(int)uVar2];
    lVar12 = 0;
    fVar17 = fVar1 - fVar21;
    pfVar4 = unaff_RSI;
    do {
      pfVar9 = pfVar4 + 1;
      fVar20 = fVar1 - fVar21;
      if ((float)((uint)(fVar1 - fVar16) & _DAT_02390140) < DAT_0241fd58) {
        uVar7 = (uint)lVar12;
        if ((float)((uint)fVar20 & _DAT_02390140) < DAT_023908ec) {
          uVar11 = -uVar7;
        }
        else {
          if (((fVar17 < 0.0) || (0.0 <= fVar20)) && ((0.0 < fVar17 || (fVar20 <= 0.0))))
          goto LAB_014f094a;
          uVar11 = -uVar7;
          if ((int)uVar11 < (int)(uVar2 - 1)) {
            auVar19 = insertps(ZEXT416((uint)*pfVar9),ZEXT416((uint)fVar1),0x10);
            auVar18 = insertps(ZEXT416((uint)fVar1),pfVar4[-1],0x10);
            if ((float)((uint)(auVar19._4_4_ - auVar18._4_4_) & _UNK_02390144) <=
                (float)((uint)(auVar19._0_4_ - auVar18._0_4_) & _DAT_02390140)) {
              uVar11 = ~uVar7;
            }
          }
          else {
            uVar11 = ~uVar7;
          }
        }
        iVar5 = FUN_014c2f20();
        iVar5 = iVar5 + uVar11;
        goto LAB_014f09e4;
      }
LAB_014f094a:
      if (1 - uVar15 == lVar12) goto LAB_014f096e;
      fVar1 = *pfVar9;
      fVar21 = pfVar9[(int)uVar2];
      lVar12 = lVar12 + -1;
      fVar17 = fVar20;
      pfVar4 = pfVar9;
    } while( true );
  }
  lVar14 = 0;
  cVar22 = '\0';
LAB_014f096e:
  iVar5 = FUN_014c2f20();
  iVar6 = FUN_014c2f80();
  iVar5 = (iVar6 + iVar5) / 2;
LAB_014f09e4:
  iVar6 = FUN_014c2f80();
  if (iVar6 <= iVar5) {
    iVar5 = FUN_014c2f80();
    iVar5 = iVar5 + -1;
  }
  iVar6 = FUN_014c2f20();
  if (iVar5 < iVar6) {
    iVar5 = FUN_014c2f20();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)((longlong)unaff_RDI + 0x15c) = iVar5;
  }
  if (0 < (int)uVar2) {
    uVar7 = uVar2 - 1;
    uVar13 = (ulonglong)uVar7;
    fVar21 = unaff_RSI[(int)uVar7] - unaff_RSI[(longlong)(int)uVar2 + (longlong)(int)uVar7];
    do {
      fVar1 = unaff_RSI[uVar13];
      fVar17 = fVar1 - unaff_RSI[(longlong)(int)uVar2 + uVar13];
      iVar5 = (int)uVar15;
      if ((float)((uint)(fVar1 - fVar16) & _DAT_02390140) < DAT_0241fd58) {
        if ((float)((uint)fVar17 & _DAT_02390140) < DAT_023908ec) {
          iVar5 = iVar5 + -1;
        }
        else {
          if (((fVar21 < 0.0) || (0.0 <= fVar17)) && ((0.0 < fVar21 || (fVar17 <= 0.0))))
          goto LAB_014f0a90;
          iVar6 = iVar5 + -1;
          if (0 < iVar6) {
            auVar18 = insertps(ZEXT416((uint)fVar1),unaff_RSI[uVar15],0x10);
            auVar19 = insertps(ZEXT416((uint)unaff_RSI[(int)uVar13 - 1]),ZEXT416((uint)fVar1),0x10);
            bVar3 = true;
            if ((float)((uint)(auVar18._0_4_ - auVar19._0_4_) & _DAT_02390140) <
                (float)((uint)(auVar18._4_4_ - auVar19._4_4_) & _UNK_02390144)) goto LAB_014f0b3b;
          }
        }
        iVar6 = iVar5;
        bVar3 = true;
        goto LAB_014f0b3b;
      }
LAB_014f0a90:
      uVar15 = (ulonglong)(iVar5 - 1);
      bVar3 = 0 < (longlong)uVar13;
      uVar13 = uVar13 - 1;
      fVar21 = fVar17;
    } while (bVar3);
  }
  bVar3 = false;
  iVar6 = 0;
LAB_014f0b3b:
  iVar5 = FUN_014c2f20();
  if (bVar3) {
    iVar8 = *(int *)((longlong)unaff_RDI + 0x15c);
    if (iVar8 == -1) {
      iVar8 = FUN_014c2f20();
    }
    iVar5 = iVar5 + iVar6;
    if (iVar8 < iVar5) goto LAB_014f0b8c;
  }
  iVar5 = *(int *)((longlong)unaff_RDI + 0x15c);
  if (iVar5 == -1) {
    iVar5 = FUN_014c2f20();
  }
  iVar5 = iVar5 + 1;
LAB_014f0b8c:
  iVar6 = FUN_014c2f80();
  if (iVar6 < iVar5) {
    iVar5 = FUN_014c2f80();
  }
  iVar6 = FUN_014c2f20();
  if ((iVar6 <= iVar5) && (iVar6 = FUN_014c2f80(), iVar5 <= iVar6)) {
    *(int *)(unaff_RDI + 0x2c) = iVar5;
  }
  if (bVar10) {
    FUN_00e83070();
  }
  if ((cVar22 != '\0') && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @008c3d62 — 1120 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008c41a4) */

int FUN_008c3d62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar6 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x50;
  lVar8 = unaff_RDI + 0x38;
  lVar9 = unaff_RDI + 0x20;
  lVar10 = unaff_RDI + 8;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (local_46,&local_4c,param_3,param_4,uVar6,lVar7,lVar8,lVar9,lVar10);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_46[0] + -1;
    switch(iVar1) {
    case 0:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 8) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x6c) = 1;
      goto LAB_008c400e;
    case 1:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x28) = *(undefined8 *)(unaff_RDI + 0x20);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x28) - *(longlong *)(unaff_RDI + 0x20);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x20) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6d) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 2:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(unaff_RDI + 0x38);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x40) - *(longlong *)(unaff_RDI + 0x38);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x40) = *(longlong *)(unaff_RDI + 0x38) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6e) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x58) - *(longlong *)(unaff_RDI + 0x50);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x58) = *(longlong *)(unaff_RDI + 0x50) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6f) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      if (local_46[0] == 10000) {
        if (local_4c == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x70) = 1;
          goto LAB_008c400e;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008c400e:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ============================================================
// @014edfa0 — 1102 bytes
// str: ""SInt64""
// str: ""GNInt""
// str: ""_vibratoStartSampleIndex""
// str: ""_vibratoSampleCount""
// str: ""_vibratoPeriodSampleCount""
// ============================================================

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




// ============================================================
// @00f439b0 — 1068 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f439b0(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  short sVar17;
  uint uVar18;
  longlong *unaff_RDI;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  void *pvVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar3 = *(uint *)(unaff_RDI + 10);
  uVar21 = *(uint *)((longlong)unaff_RDI + 0xb4);
  pvVar22 = (void *)(ulonglong)(uVar3 - 0x106);
  uVar20 = (ulonglong)uVar3;
  do {
    uVar19 = *(uint *)((longlong)unaff_RDI + 0xac);
    uVar21 = (int)unaff_RDI[0xd] - (uVar21 + uVar19);
    if ((int)uVar20 + (uVar3 - 0x106) <= uVar19) {
      _memcpy(pvVar22,(void *)(ulonglong)(uVar3 - uVar21),(size_t)param_3);
      *(uint *)(unaff_RDI + 0x16) = (int)unaff_RDI[0x16] - uVar3;
      uVar19 = *(int *)((longlong)unaff_RDI + 0xac) - uVar3;
      *(uint *)((longlong)unaff_RDI + 0xac) = uVar19;
      unaff_RDI[0x13] = unaff_RDI[0x13] - (ulonglong)uVar3;
      if (uVar19 < *(uint *)((longlong)unaff_RDI + 0x172c)) {
        *(uint *)((longlong)unaff_RDI + 0x172c) = uVar19;
      }
      auVar9 = _DAT_023e75a0;
      uVar8 = _UNK_023e759c;
      uVar7 = _UNK_023e7598;
      uVar6 = _UNK_023e7594;
      uVar5 = _DAT_023e7590;
      uVar15 = *(uint *)(unaff_RDI + 10);
      uVar18 = *(uint *)((longlong)unaff_RDI + 0x84);
      uVar20 = (ulonglong)uVar18;
      lVar12 = unaff_RDI[0xf] + uVar20 * 2;
      if (uVar18 - 1 < 0xf) {
LAB_00f43aff:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar24 = (ulonglong)(uVar18 - 1) + 1;
        param_3 = uVar24 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        uVar18 = uVar18 - (int)param_3;
        lVar11 = unaff_RDI[0xf] + uVar20 * 2;
        lVar16 = 0;
        do {
          auVar26._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar26._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar26._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar26._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar26,auVar26);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar24 & 0xfffffffffffffff0));
        if (uVar24 != param_3) goto LAB_00f43aff;
      }
      lVar12 = unaff_RDI[0xe] + (ulonglong)uVar15 * 2;
      uVar18 = uVar15;
      if (uVar15 - 1 < 0xf) {
LAB_00f43bcf:
        lVar11 = 0;
        do {
          uVar2 = *(ushort *)(lVar12 + -2 + lVar11 * 2);
          sVar17 = uVar2 - (short)uVar15;
          if (uVar2 < uVar15) {
            sVar17 = 0;
          }
          *(short *)(lVar12 + -2 + lVar11 * 2) = sVar17;
          lVar11 = lVar11 + -1;
        } while (-uVar18 != (int)lVar11);
      }
      else {
        uVar20 = (ulonglong)(uVar15 - 1) + 1;
        param_3 = uVar20 & 0x1fffffff0;
        lVar12 = lVar12 + param_3 * -2;
        lVar11 = unaff_RDI[0xe] + (ulonglong)uVar15 * 2;
        lVar16 = 0;
        do {
          auVar27._0_4_ = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
          auVar27._4_4_ = (uVar6 < uVar15) * uVar6 | (uVar6 >= uVar15) * uVar15;
          auVar27._8_4_ = (uVar7 < uVar15) * uVar7 | (uVar7 >= uVar15) * uVar15;
          auVar27._12_4_ = (uVar8 < uVar15) * uVar8 | (uVar8 >= uVar15) * uVar15;
          auVar26 = packusdw(auVar27,auVar27);
          auVar27 = pshufb(auVar26,auVar9);
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x10 + lVar16 * 2) = auVar26;
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2),auVar27);
          *(undefined1 (*) [16])(lVar11 + -0x20 + lVar16 * 2) = auVar26;
          lVar16 = lVar16 + -0x10;
        } while (-lVar16 != (uVar20 & 0xfffffffffffffff0));
        uVar18 = uVar15 - (int)param_3;
        if (uVar20 != param_3) goto LAB_00f43bcf;
      }
      uVar21 = uVar21 + uVar3;
    }
    plVar4 = (longlong *)*unaff_RDI;
    uVar15 = *(uint *)(plVar4 + 1);
    if (uVar15 == 0) {
LAB_00f43d67:
      uVar20 = unaff_RDI[0x2e7];
      uVar24 = unaff_RDI[0xd];
      uVar13 = uVar24 - uVar20;
      if (uVar20 <= uVar24 && uVar13 != 0) {
        uVar23 = (ulonglong)*(uint *)((longlong)unaff_RDI + 0xb4) +
                 (ulonglong)*(uint *)((longlong)unaff_RDI + 0xac);
        if (uVar20 < uVar23) {
          uVar20 = 0x102;
          if (uVar24 - uVar23 < 0x102) {
            uVar20 = uVar24 - uVar23;
          }
          ___bzero();
          lVar12 = uVar20 + uVar23;
        }
        else {
          uVar24 = (uVar23 + 0x102) - uVar20;
          if (uVar23 + 0x102 < uVar20 || uVar24 == 0) {
            return;
          }
          if (uVar13 < uVar24) {
            uVar24 = uVar13;
          }
          ___bzero();
          lVar12 = uVar24 + unaff_RDI[0x2e7];
        }
        unaff_RDI[0x2e7] = lVar12;
      }
      return;
    }
    iVar10 = *(int *)((longlong)unaff_RDI + 0xb4);
    if (uVar15 <= uVar21) {
      uVar21 = uVar15;
    }
    pvVar22 = (void *)(ulonglong)uVar21;
    if (uVar21 != 0) {
      *(uint *)(plVar4 + 1) = uVar15 - uVar21;
      _memcpy((void *)(ulonglong)uVar19,pvVar22,(size_t)param_3);
      if (*(int *)(plVar4[7] + 0x30) == 2) {
        lVar12 = FUN_00f43510();
LAB_00f43c7e:
        plVar4[0xc] = lVar12;
      }
      else if (*(int *)(plVar4[7] + 0x30) == 1) {
        lVar12 = FUN_00f42bd0();
        goto LAB_00f43c7e;
      }
      *plVar4 = *plVar4 + (longlong)pvVar22;
      plVar4[2] = plVar4[2] + (longlong)pvVar22;
      iVar10 = *(int *)((longlong)unaff_RDI + 0xb4);
    }
    uVar21 = iVar10 + uVar21;
    *(uint *)((longlong)unaff_RDI + 0xb4) = uVar21;
    iVar10 = *(int *)((longlong)unaff_RDI + 0x172c);
    pvVar22 = (void *)(ulonglong)(iVar10 + uVar21);
    if (2 < iVar10 + uVar21) {
      uVar15 = *(int *)((longlong)unaff_RDI + 0xac) - iVar10;
      uVar20 = (ulonglong)uVar15;
      param_3 = unaff_RDI[0xc];
      bVar1 = *(byte *)(param_3 + uVar20);
      *(uint *)(unaff_RDI + 0x10) = (uint)bVar1;
      pvVar22 = (void *)(ulonglong)*(uint *)(unaff_RDI + 0x12);
      bVar14 = (byte)*(uint *)(unaff_RDI + 0x12);
      uVar19 = *(uint *)((longlong)unaff_RDI + 0x8c);
      uVar15 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 1)) ^ (uint)bVar1 << (bVar14 & 0x1f));
      uVar24 = (ulonglong)uVar15;
      *(uint *)(unaff_RDI + 0x10) = uVar15;
      do {
        bVar25 = iVar10 == 0;
        iVar10 = iVar10 + -1;
        if (bVar25) break;
        uVar15 = (uint)uVar20;
        uVar18 = uVar19 & ((uint)*(byte *)(param_3 + (uVar15 + 2)) ^ (int)uVar24 << (bVar14 & 0x1f))
        ;
        uVar24 = (ulonglong)uVar18;
        *(uint *)(unaff_RDI + 0x10) = uVar18;
        lVar12 = unaff_RDI[0xf];
        *(undefined2 *)(unaff_RDI[0xe] + (ulonglong)(*(uint *)(unaff_RDI + 0xb) & uVar15) * 2) =
             *(undefined2 *)(lVar12 + uVar24 * 2);
        *(short *)(lVar12 + uVar24 * 2) = (short)uVar20;
        uVar20 = (ulonglong)(uVar15 + 1);
        *(int *)((longlong)unaff_RDI + 0x172c) = iVar10;
      } while (2 < uVar21 + iVar10);
    }
    if ((0x105 < uVar21) || (*(int *)(*unaff_RDI + 8) == 0)) goto LAB_00f43d67;
    uVar20 = (ulonglong)*(uint *)(unaff_RDI + 10);
  } while( true );
}




// ============================================================
// @011cce10 — 1046 bytes
// str: ""bool""
// str: ""_cache""
// str: ""GNInt""
// str: ""_isValid""
// str: ""_segmentSize""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cce10(void)

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
  *unaff_RDI = &DAT_025ebc18;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b8338 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8300 = FUN_011ccba0();
        _DAT_027b82f8 = "_isValid";
        _DAT_027b8308 = 0;
        _DAT_027b8310 = 0x6211;
        _DAT_027b8318 = "bool";
        _DAT_027b8320 = 0;
        uRam00000000027b8328 = 0;
        _DAT_027b8330 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b8380 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8348 = FUN_011ccba0();
        _DAT_027b8340 = "_segmentSize";
        _DAT_027b8350 = 0;
        _DAT_027b8358 = 0x6901;
        _DAT_027b8360 = "GNInt";
        _DAT_027b8368 = 0;
        uRam00000000027b8370 = 0;
        _DAT_027b8378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b83c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8390 = FUN_011ccba0();
        _DAT_027b8388 = "_segmentOffset";
        _DAT_027b8398 = 0;
        _DAT_027b83a0 = 0x6901;
        _DAT_027b83a8 = "GNInt";
        _DAT_027b83b0 = 0;
        uRam00000000027b83b8 = 0;
        _DAT_027b83c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cd2e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_cache";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackTimeSegment");
  }
  FUN_011cd3d0();
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b84a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8468 = FUN_011ccba0();
        _DAT_027b8460 = "_maximumElementRendererCount";
        _DAT_027b8470 = 0;
        _DAT_027b8478 = 0x6901;
        _DAT_027b8480 = "GNInt";
        _DAT_027b8488 = 0;
        uRam00000000027b8490 = 0;
        _DAT_027b8498 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b84e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b84b0 = FUN_011ccba0();
        _DAT_027b84a8 = "_maximumElementRendererCountIsValid";
        _DAT_027b84b8 = 0;
        _DAT_027b84c0 = 0x6201;
        _DAT_027b84c8 = "bool";
        _DAT_027b84d0 = 0;
        uRam00000000027b84d8 = 0;
        _DAT_027b84e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @007b47e0 — 1045 bytes
// str: ""bool""
// str: ""_numerator""
// str: ""_denominator""
// str: ""_isLoop""
// str: ""_beats""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b47e0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025480c0;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cf00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cec8 = FUN_007b4410();
        _DAT_0275cec0 = "_isLoop";
        _DAT_0275ced0 = 0;
        _DAT_0275ced8 = 0x6200;
        _DAT_0275cee0 = "bool";
        _DAT_0275cee8 = 0;
        uRam000000000275cef0 = 0;
        _DAT_0275cef8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bcc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bc88 = FUN_007b4410();
        _DAT_0272bc80 = "_numerator";
        _DAT_0272bc90 = 0;
        _DAT_0272bc98 = 0x6900;
        _DAT_0272bca0 = "GNInt";
        _DAT_0272bca8 = 0;
        uRam000000000272bcb0 = 0;
        _DAT_0272bcb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cf50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cf18 = FUN_007b4410();
        _DAT_0275cf10 = "_denominator";
        _DAT_0275cf20 = 0;
        _DAT_0275cf28 = 0x6900;
        _DAT_0275cf30 = "GNInt";
        _DAT_0275cf38 = 0;
        uRam000000000275cf40 = 0;
        _DAT_0275cf48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bd10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bcd8 = FUN_007b4410();
        _DAT_0272bcd0 = "_beats";
        _DAT_0272bce0 = 0;
        _DAT_0272bce8 = 0x6900;
        _DAT_0272bcf0 = "GNInt";
        _DAT_0272bcf8 = 0;
        uRam000000000272bd00 = 0;
        _DAT_0272bd08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cfa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275cf68 = FUN_007b4410();
        _DAT_0275cf60 = "_tonalKey";
        _DAT_0275cf70 = 0;
        _DAT_0275cf78 = 0x6900;
        _DAT_0275cf80 = "GNInt";
        _DAT_0275cf88 = 0;
        uRam000000000275cf90 = 0;
        _DAT_0275cf98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_007b4410();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272bd60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272bd28 = FUN_007b4410();
        _DAT_0272bd20 = "_tonalGender";
        _DAT_0272bd30 = 0;
        _DAT_0272bd38 = 0x6900;
        _DAT_0272bd40 = "GNInt";
        _DAT_0272bd48 = 0;
        uRam000000000272bd50 = 0;
        _DAT_0272bd58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01162ae0 — 1043 bytes
// str: ""bool""
// str: ""GNInt""
// str: ""MULoopLibrary""
// str: ""_coverRows""
// str: ""_orderindex""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01162ae0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02611170;
  FUN_01162fe0();
  unaff_RDI[9] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011630c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRow";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011631b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011632a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRows";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3b18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3ae0 = FUN_011627b0();
        _DAT_027a3ad8 = "_orderindex";
        _DAT_027a3ae8 = 0;
        _DAT_027a3af0 = 0x6900;
        _DAT_027a3af8 = "GNInt";
        _DAT_027a3b00 = 0;
        uRam00000000027a3b08 = 0;
        _DAT_027a3b10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01163390();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3c38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c00 = FUN_011627b0();
        _DAT_027a3bf8 = "_maxCovers";
        _DAT_027a3c08 = 0;
        _DAT_027a3c10 = 0x6900;
        _DAT_027a3c18 = "GNInt";
        _DAT_027a3c20 = 0;
        uRam00000000027a3c28 = 0;
        _DAT_027a3c30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3c80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c48 = FUN_011627b0();
        _DAT_027a3c40 = "_seeAll";
        _DAT_027a3c50 = 0;
        _DAT_027a3c58 = 0x6200;
        _DAT_027a3c60 = "bool";
        _DAT_027a3c68 = 0;
        uRam00000000027a3c70 = 0;
        _DAT_027a3c78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6d) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a3cc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a3c90 = FUN_011627b0();
        _DAT_027a3c88 = "_randomizeOrder";
        _DAT_027a3c98 = 0;
        _DAT_027a3ca0 = 0x6200;
        _DAT_027a3ca8 = "bool";
        _DAT_027a3cb0 = 0;
        uRam00000000027a3cb8 = 0;
        _DAT_027a3cc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00038300 — 1006 bytes
// str: ""bool""
// str: ""_precision""
// str: ""_minValue""
// str: ""float""
// str: ""_maxValue""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038300(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02576110;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0690 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0658 = FUN_00037f20();
        _DAT_026d0650 = "_precision";
        _DAT_026d0660 = 0;
        _DAT_026d0668 = 0x6900;
        _DAT_026d0670 = "GNInt";
        _DAT_026d0678 = 0;
        uRam00000000026d0680 = 0;
        _DAT_026d0688 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273e360 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273e328 = FUN_00037f20();
        _DAT_0273e320 = "_minValue";
        _DAT_0273e330 = 0;
        _DAT_0273e338 = 0x6600;
        _DAT_0273e340 = "float";
        _DAT_0273e348 = 0;
        uRam000000000273e350 = 0;
        _DAT_0273e358 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d06e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d06a8 = FUN_00037f20();
        _DAT_026d06a0 = "_maxValue";
        _DAT_026d06b0 = 0;
        _DAT_026d06b8 = 0x6600;
        _DAT_026d06c0 = "float";
        _DAT_026d06c8 = 0;
        uRam00000000026d06d0 = 0;
        _DAT_026d06d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000387e0();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d06f8 = FUN_00037f20();
        _DAT_026d06f0 = "_shouldRemoveTrailingZeros";
        _DAT_026d0700 = 0;
        _DAT_026d0708 = 0x6200;
        _DAT_026d0710 = "bool";
        _DAT_026d0718 = 0;
        uRam00000000026d0720 = 0;
        _DAT_026d0728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273e400 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273e3c8 = FUN_00037f20();
        _DAT_0273e3c0 = "_precisionRelatesToAllDigits";
        _DAT_0273e3d0 = 0;
        _DAT_0273e3d8 = 0x6200;
        _DAT_0273e3e0 = "bool";
        _DAT_0273e3e8 = 0;
        uRam000000000273e3f0 = 0;
        _DAT_0273e3f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000388c0();
  FUN_000389a0();
  FUN_00038a80();
  FUN_00038b60();
  FUN_00038c40();
  return;
}




// ============================================================
// @017737b0 — 1005 bytes
// ============================================================

undefined8 FUN_017737b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong **pplVar6;
  undefined8 unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar7;
  undefined4 uVar9;
  undefined8 uVar8;
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
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  undefined8 local_38;
  
  uVar9 = 0;
  fVar7 = DAT_028adb78;
  if ((DAT_028adb78 != 0.0) || (NAN(DAT_028adb78))) goto LAB_01773b8b;
  FUN_00d6f370();
  plVar2 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01773820;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_01773820:
    lVar1 = DAT_027cdfc0;
    if (DAT_027cdfc0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d70700();
    uVar9 = extraout_XMM0_Da;
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
    lVar1 = DAT_027cdfc0;
    if (cVar3 == '\0') {
      uVar4 = 0;
LAB_01773950:
      lVar1 = DAT_027cdfc8;
      if (DAT_027cdfc8 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_a0 = '\x01';
      cVar3 = FUN_00d70700();
      uVar9 = extraout_XMM0_Da_00;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar9 = FUN_00d50b20();
      }
      lVar1 = DAT_027cdfc8;
      if (cVar3 != '\0') {
        local_38 = uVar4;
        if (DAT_027cdfc8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_98 = lVar1;
        local_90 = '\x01';
        pplVar6 = &local_48;
        (**(code **)(*plVar2 + 0x88))(uVar9,&local_98);
        plVar5 = local_48;
        uVar9 = FUN_00053ac0();
        if (plVar5 == (longlong *)0x0) {
LAB_01773a11:
          pplVar6 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar5 + 0x360))();
          cVar3 = FUN_00e85ea0();
          uVar9 = extraout_XMM0_Da_01;
          if (cVar3 == '\0') goto LAB_01773a11;
        }
        plVar5 = *pplVar6;
        if (plVar5 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          uVar4 = local_38;
        }
        else {
          if (*(char *)(pplVar6 + 1) == '\0') {
            uVar9 = FUN_00d50b00();
          }
          else {
            *(undefined1 *)(pplVar6 + 1) = 0;
          }
          uVar4 = 1;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        lVar1 = DAT_027cdfc8;
        local_88 = 0;
        local_80 = '\0';
        if (DAT_027cdfc8 != 0) {
          uVar9 = FUN_00d50b00();
        }
        local_78 = lVar1;
        local_70 = '\x01';
        uVar9 = (**(code **)(*plVar2 + 0x80))(uVar9,&local_78);
        if ((local_70 != '\0') && (local_78 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar9 = FUN_00d50b20();
        }
        lVar1 = DAT_027cdfc0;
        if (plVar5 != (longlong *)0x0) {
          local_60 = '\0';
          local_68 = plVar5;
          if (DAT_027cdfc0 != 0) {
            uVar9 = FUN_00d50b00();
          }
          local_58 = lVar1;
          local_50 = '\x01';
          (**(code **)(*plVar2 + 0x80))(uVar9,&local_58);
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01773b45;
        }
      }
      plVar5 = (longlong *)0x0;
    }
    else {
      if (DAT_027cdfc0 != 0) {
        uVar9 = FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      pplVar6 = &local_48;
      (**(code **)(*plVar2 + 0x88))(uVar9,&local_b8);
      plVar5 = local_48;
      uVar4 = FUN_00053ac0();
      if (plVar5 == (longlong *)0x0) {
LAB_017738dd:
        pplVar6 = (longlong **)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar3 = FUN_00e85ea0();
        unaff_R15 = uVar4;
        if (cVar3 == '\0') goto LAB_017738dd;
      }
      plVar5 = *pplVar6;
      if (plVar5 == (longlong *)0x0) {
        uVar4 = 0;
        plVar5 = (longlong *)0x0;
      }
      else {
        if (*(char *)(pplVar6 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(undefined1 *)(pplVar6 + 1) = 0;
        }
        uVar4 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 == (longlong *)0x0) goto LAB_01773950;
    }
LAB_01773b45:
    FUN_00d50b20();
    if (plVar5 != (longlong *)0x0) {
      uVar8 = FUN_00d459e0();
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      DAT_028adb78 = (float)uVar8;
      fVar7 = DAT_028adb78;
      if ((char)uVar4 != '\0') {
        FUN_00d50b20();
        uVar9 = 0;
        fVar7 = DAT_028adb78;
      }
      goto LAB_01773b8b;
    }
  }
  DAT_028adb78 = 440.0;
  uVar9 = 0;
  fVar7 = DAT_02411fd0;
LAB_01773b8b:
  return CONCAT44(uVar9,fVar7);
}




// ============================================================
// @01775c40 — 995 bytes
// ============================================================

void FUN_01775c40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  int iVar8;
  char *pcVar9;
  longlong unaff_RDI;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  longlong local_60;
  char local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  int local_40;
  char local_38 [8];
  
  puVar1 = *(undefined8 **)(unaff_RDI + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    fVar10 = (float)FUN_017708f0();
    FUN_00e7d780(fVar10 / DAT_023908e0);
    FUN_00d23340();
    param_1 = (undefined8 *)CONCAT71((int7)((ulonglong)param_1 >> 8),local_58[0]);
    pcVar9 = local_38;
    if (local_58[0] != '\0') {
      pcVar9 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar9 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f40();
    if ((local_38[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if (puVar1 == (undefined8 *)0x0) {
    if (*(char *)(unaff_RDI + 0x38) == '\0') {
      return;
    }
  }
  else {
    local_58[0] = '\0';
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = puVar1;
    while( true ) {
      lVar6 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar8) break;
      uVar2 = *(undefined8 *)(local_50[2] + 8 + lVar6 * 8);
      uVar11 = FUN_01775a80();
      FUN_01772540(uVar2,uVar11);
      if (local_48._4_4_ != 0) {
        if (local_48 < 0) {
          iVar8 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
    }
    param_1 = local_50;
    FUN_01777940();
    if (*(char *)(unaff_RDI + 0x38) == '\0') goto LAB_01776036;
  }
  if (2 < *(int *)((longlong)puVar1 + 0xc)) {
    lVar6 = 1;
    do {
      pVar7 = (pthread_key_t)param_1;
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar8 = FUN_01779f30();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01779f30();
      param_1 = &DAT_02802558;
      if (iVar8 == iVar4) {
        pvVar5 = _pthread_getspecific(0x2802558);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01779f30();
        if (iVar8 + 1 < iVar4) {
          lVar3 = *(longlong *)(puVar1[2] + lVar6 * 8);
          uVar11 = extraout_XMM0_Da;
          if (lVar3 != 0) {
            uVar11 = FUN_00d50b00();
          }
          FUN_01772540(uVar11,iVar8 + 1,param_3,param_4,lVar3,1);
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        pvVar5 = _pthread_getspecific(0x2802558);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01779f30();
        if (iVar8 == iVar4) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar4 = FUN_01779f30();
          if (iVar4 < iVar8 + -1) {
            lVar3 = *(longlong *)(puVar1[2] + lVar6 * 8);
            uVar11 = extraout_XMM0_Da_00;
            if (lVar3 != 0) {
              uVar11 = FUN_00d50b00();
            }
            FUN_01772540(uVar11,iVar8 + -1);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (longlong)*(int *)((longlong)puVar1 + 0xc) + -1);
  }
LAB_01776036:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01774300 — 928 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01774442) */
/* WARNING: Removing unreachable block (ram,0x017744da) */
/* WARNING: Removing unreachable block (ram,0x0177463b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01774300(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  uint unaff_ESI;
  uint uVar11;
  uint uVar12;
  longlong unaff_RDI;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38 [8];
  
  uVar15 = (ulonglong)unaff_ESI;
  lVar16 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    FUN_01774750();
    pVar6 = (pthread_key_t)param_1;
    if (local_50 == 0) {
      iVar3 = unaff_ESI + *(int *)(unaff_RDI + 0x48);
      if (*(char *)(unaff_RDI + 0x38) != '\0') {
        uVar5 = *(uint *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
        param_1 = (ulonglong)uVar5;
        do {
          iVar3 = iVar3 + (uVar5 - 1);
        } while ((int)((1 - uVar5) + iVar3) < 0);
        do {
          iVar3 = iVar3 + (1 - uVar5);
        } while ((int)(uVar5 - 1) <= iVar3);
      }
      if (iVar3 < 0) {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_01779f30();
        iVar3 = iVar10 + iVar3 + *(int *)(unaff_RDI + 100);
      }
      else {
        iVar10 = *(int *)(lVar16 + 0xc);
        FUN_00d23340();
        pcVar9 = local_38;
        if (local_48[0] != '\0') {
          pcVar9 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar9 = '\0';
        pvVar4 = _pthread_getspecific((pthread_key_t)CONCAT71((int7)(param_1 >> 8),local_48[0]));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar1 = FUN_01779f30();
        iVar3 = (iVar3 - iVar10) + iVar1 + 1 + *(int *)(unaff_RDI + 100);
      }
      goto LAB_01774607;
    }
    if (local_48[0] == '\0') {
      FUN_00d50b00();
    }
    iVar10 = *(int *)(unaff_RDI + 100);
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    iVar3 = iVar3 + iVar10;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    local_40 = lVar16;
    iVar1 = FUN_01770aa0();
    uVar5 = iVar3 - 1;
    iVar10 = 0;
    if ((int)uVar5 <= (int)unaff_ESI) {
      iVar10 = 0;
      do {
        uVar13 = (int)uVar15 - uVar5;
        uVar15 = (ulonglong)uVar13;
        iVar10 = iVar10 + 1;
      } while ((int)uVar5 <= (int)uVar13);
    }
    iVar14 = (int)uVar15;
    if (iVar14 < 0) {
      iVar2 = iVar14 + -1 + iVar3;
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar3 = ((iVar2 - iVar14) - iVar3) + 1;
      uVar13 = (uint)(iVar3 != 0);
      uVar13 = (iVar3 - uVar13) / uVar5 + uVar13 + 1;
      if (7 < uVar13) {
        uVar8 = uVar13 & 0xfffffff8;
        iVar3 = 0;
        iVar2 = 0;
        iVar17 = 0;
        uVar12 = (uVar8 - 8 >> 3) + 1;
        uVar11 = uVar12 & 7;
        if (uVar8 - 8 < 0x38) {
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
        }
        else {
          uVar12 = uVar12 & 0xfffffff8;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          do {
            iVar10 = iVar10 + _DAT_02411fc0;
            iVar3 = iVar3 + _UNK_02411fc4;
            iVar2 = iVar2 + _UNK_02411fc8;
            iVar17 = iVar17 + _UNK_02411fcc;
            iVar18 = iVar18 + _DAT_02411fc0;
            iVar19 = iVar19 + _UNK_02411fc4;
            iVar20 = iVar20 + _UNK_02411fc8;
            iVar21 = iVar21 + _UNK_02411fcc;
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          iVar10 = iVar10 + -1;
          iVar3 = iVar3 + -1;
          iVar2 = iVar2 + -1;
          iVar17 = iVar17 + -1;
          iVar18 = iVar18 + -1;
          iVar19 = iVar19 + -1;
          iVar20 = iVar20 + -1;
          iVar21 = iVar21 + -1;
        }
        uVar15 = (ulonglong)(iVar14 + uVar8 * uVar5);
        iVar10 = iVar17 + iVar21 + iVar3 + iVar19 + iVar2 + iVar20 + iVar10 + iVar18;
        if (uVar13 == uVar8) goto LAB_01774588;
      }
      do {
        iVar10 = iVar10 + -1;
        uVar13 = (int)uVar15 + uVar5;
        uVar15 = (ulonglong)uVar13;
      } while ((int)uVar13 < 0);
    }
LAB_01774588:
    lVar7 = *(longlong *)(lVar16 + 0x10);
    local_50 = *(longlong *)(lVar7 + uVar15 * 8);
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    lVar16 = local_40;
    iVar14 = *(int *)(unaff_RDI + 100);
    pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    iVar3 = iVar10 * iVar1 + iVar14 + iVar3;
    if (local_50 == 0) goto LAB_01774607;
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
LAB_01774607:
  if (lVar16 != 0) {
    FUN_00d50b20();
  }
  return iVar3;
}




// ============================================================
// @01ce7ee0 — 888 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ce7ee0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  
  FUN_01e3b710();
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0x41900000;
  *(undefined1 *)(unaff_RDI + 5) = 1;
  uVar3 = DAT_0241fce8;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = uVar3;
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00074c30();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x28];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x28] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))(0,_DAT_0241fcf0);
  FUN_01d9af20();
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x558))();
  FUN_01d97870();
  (**(code **)(*unaff_RDI + 0x998))();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01cf3e00();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d94ee0();
  (**(code **)(*unaff_RDI + 0x570))();
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)unaff_RDI[0x29];
  if (plVar1 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x29] = (longlong)plVar4;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x4d0))(0,_DAT_0241fcf0);
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x570))();
  lVar2 = unaff_RDI[0x29];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d978b0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 1;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(undefined4 *)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(undefined1 *)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(undefined4 *)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x165) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  puVar5[0x39] = 0;
  *puVar5 = &DAT_02675388;
  puVar5[2] = &DAT_02675e68;
  *(undefined1 *)(puVar5 + 0x3a) = 0;
  FUN_00d500e0();
  (**(code **)(*unaff_RDI + 0x918))();
  if (puVar5 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00900c88 — 857 bytes
// ============================================================

int FUN_00900c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar11 = unaff_RDI + 0x18;
  lVar6 = unaff_RDI + 0xc;
  lVar7 = unaff_RDI + 0xb;
  lVar8 = unaff_RDI + 10;
  lVar9 = unaff_RDI + 9;
  lVar10 = unaff_RDI + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar12 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    switch((int)local_32) {
    case 1:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x20) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x21) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x22) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
switchD_00900d67_caseD_4:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x23) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xb:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x24) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xc:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x25) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xd:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x26) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xe:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x27) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x14:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined1 *)(unaff_RDI + 0x28) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      if (local_32 != 0x1e) goto switchD_00900d67_caseD_4;
      if (local_38 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        *(undefined1 *)(unaff_RDI + 0x29) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}




// ============================================================
// @01771ef0 — 848 bytes
// ============================================================

pthread_key_t FUN_01771ef0(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  char *pcVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_48 = CONCAT44(local_48._4_4_,param_1);
  pvVar2 = _pthread_getspecific(unaff_ESI);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar9 = (float)FUN_01779ec0();
  fVar10 = (float)local_48;
  local_48 = CONCAT44(local_48._4_4_,fVar9 + (float)local_48);
  pVar8 = (0.0 <= fVar10) + unaff_ESI;
  fVar10 = (float)FUN_017708f0();
  if ((*(char *)(unaff_RDI + 0x38) != '\0') && (pVar8 == 0)) {
    pVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) - 1;
    local_48 = CONCAT44(local_48._4_4_,(float)local_48 + fVar10);
  }
  if (0 < (int)pVar8) {
    pvVar2 = _pthread_getspecific(pVar8 - 1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    if ((float)local_48 <= fVar9) {
      return 0xffffffff;
    }
  }
  if ((int)pVar8 < *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc)) {
    pvVar2 = _pthread_getspecific(pVar8);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    if (fVar9 <= (float)local_48) {
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(unaff_RDI + 0x48);
  if ((int)pVar8 <= iVar1) {
    FUN_00d64850();
    *(int *)(unaff_RDI + 0x48) = iVar1 + 1;
    FUN_00d64910();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x25ffd60;
  *puVar3 = &DAT_025ffd60;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*DAT_025ffd78)();
  pvVar2 = _pthread_getspecific(pVar6);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar11 = FUN_01779ed0((float)local_48);
  FUN_01770f30(uVar11,pVar8);
  if (*(char *)(unaff_RDI + 0x38) != '\0') {
    FUN_00d23340();
    local_40[0] = local_50[0];
    pcVar4 = local_40;
    if (local_50[0] != '\0') {
      pcVar4 = local_50;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar6);
    if ((pvVar2 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      local_48 = local_58;
    }
    else {
      local_48 = *(longlong *)(local_58 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
    FUN_00d23310();
    pcVar4 = local_38;
    pcVar7 = local_50;
    if (local_50[0] == '\0') {
      pcVar7 = pcVar4;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)pcVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar9 = (float)FUN_01779ec0();
    FUN_01779ed0(fVar10 + fVar9);
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return pVar8;
}




// ============================================================
// @00914600 — 845 bytes
// ============================================================

void FUN_00914600(void)

{
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251d408;
  unaff_RDI[1] = &DAT_0251cbd8;
  unaff_RDI[2] = 0;
  *(undefined2 *)(unaff_RDI + 3) = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x35) = 0;
  unaff_RDI[8] = &DAT_0251d2e0;
  unaff_RDI[0xb] = &DAT_0251b588;
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0x1010100000000;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa4) = 0;
  unaff_RDI[0xc] = 1;
  *(undefined4 *)(unaff_RDI + 0xd) = 2;
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  *(undefined4 *)(unaff_RDI + 0x19) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0xcc) = 0;
  unaff_RDI[9] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 10) = 2;
  unaff_RDI[0x1a] = &DAT_0251d2e0;
  unaff_RDI[0x1d] = &DAT_0251b588;
  *(undefined4 *)((longlong)unaff_RDI + 300) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x124) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x11c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x104) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  *(undefined4 *)(unaff_RDI + 0x26) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x134) = 0;
  unaff_RDI[0x1e] = 1;
  *(undefined4 *)(unaff_RDI + 0x1f) = 2;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x28] = 0;
  *(undefined4 *)(unaff_RDI + 0x2b) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x15c) = 0;
  unaff_RDI[0x1b] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 0x1c) = 2;
  unaff_RDI[0x2c] = &DAT_0251d2e0;
  unaff_RDI[0x2f] = &DAT_0251b588;
  *(undefined4 *)((longlong)unaff_RDI + 0x1bc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1b4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1ac) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1a4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x19c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x194) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x18c) = 0;
  *(undefined4 *)(unaff_RDI + 0x38) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x1c4) = 0;
  unaff_RDI[0x30] = 1;
  *(undefined4 *)(unaff_RDI + 0x31) = 2;
  *(undefined4 *)(unaff_RDI + 0x39) = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  *(undefined4 *)(unaff_RDI + 0x3d) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x1ec) = 0;
  unaff_RDI[0x2d] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 0x2e) = 2;
  unaff_RDI[0x3e] = &DAT_0251d338;
  unaff_RDI[0x3f] = 0;
  *(undefined4 *)(unaff_RDI + 0x40) = 0;
  ___bzero();
  ___bzero();
  ___bzero();
  *(undefined8 *)((longlong)unaff_RDI + 0x43e) = 0;
  unaff_RDI[0x87] = 0;
  unaff_RDI[0x86] = 0;
  unaff_RDI[0x85] = 0;
  FUN_0090691c();
  FUN_0090fc5a();
  FUN_0090fc5a();
  FUN_0090fc5a();
  FUN_009128e4();
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080();
  }
  *(undefined2 *)((longlong)unaff_RDI + 0x444) = *(undefined2 *)((longlong)unaff_RSI + 0x444);
  *(undefined4 *)(unaff_RDI + 0x88) = *(undefined4 *)(unaff_RSI + 0x88);
  return;
}




// ============================================================
// @0176ef50 — 831 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0176ef8a) */
/* WARNING: Removing unreachable block (ram,0x0176ef96) */
/* WARNING: Removing unreachable block (ram,0x0176f21b) */
/* WARNING: Removing unreachable block (ram,0x0176f228) */
/* WARNING: Removing unreachable block (ram,0x0176eff7) */
/* WARNING: Removing unreachable block (ram,0x0176f020) */
/* WARNING: Removing unreachable block (ram,0x0176eff9) */
/* WARNING: Removing unreachable block (ram,0x0176f022) */

void FUN_0176ef50(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00d50f50();
  if ((*(longlong *)(unaff_RDI + 0x18) == unaff_RDI) &&
     (lVar5 = *(longlong *)(unaff_RDI + 0x50), lVar5 != 0)) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar1 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      lVar4 = *(longlong *)(lVar5 + 0x10);
      local_58 = *(longlong *)(lVar4 + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
      pVar3 = (pthread_key_t)lVar4;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f90();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != unaff_RDI) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01777940();
    param_1 = (pthread_key_t)lVar5;
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01777cf0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_0176f3a0();
    }
    if (*(longlong *)(unaff_RDI + 0x68) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777c80();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01777ca0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ============================================================
// @007c6620 — 820 bytes
// str: ""bool""
// str: ""SInt64""
// str: ""_sampleRate""
// str: ""_sampleFrames""
// str: ""_channelCount""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c6620(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02542f00;
  FUN_007b52b0();
  FUN_007b5570();
  *unaff_RDI = &DAT_025436d8;
  unaff_RDI[4] = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272ea70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272ea38 = FUN_007c63e0();
        _DAT_0272ea30 = "_sampleFrames";
        _DAT_0272ea40 = 0;
        _DAT_0272ea48 = 0x6c00;
        _DAT_0272ea50 = "SInt64";
        _DAT_0272ea58 = 0;
        uRam000000000272ea60 = 0;
        _DAT_0272ea68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eab8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272ea80 = FUN_007c63e0();
        _DAT_0272ea78 = "_channelCount";
        _DAT_0272ea88 = 0;
        _DAT_0272ea90 = 0x6900;
        _DAT_0272ea98 = "GNInt";
        _DAT_0272eaa0 = 0;
        uRam000000000272eaa8 = 0;
        _DAT_0272eab0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eb00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272eac8 = FUN_007c63e0();
        _DAT_0272eac0 = "_sampleRate";
        _DAT_0272ead0 = 0;
        _DAT_0272ead8 = 0x6400;
        _DAT_0272eae0 = "double";
        _DAT_0272eae8 = 0;
        uRam000000000272eaf0 = 0;
        _DAT_0272eaf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_007c63e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272eb48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272eb10 = FUN_007c63e0();
        _DAT_0272eb08 = "_didReadMetadata";
        _DAT_0272eb18 = 0;
        _DAT_0272eb20 = 0x6200;
        _DAT_0272eb28 = "bool";
        _DAT_0272eb30 = 0;
        uRam000000000272eb38 = 0;
        _DAT_0272eb40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_007c6a10();
  FUN_007c6af0();
  return;
}




// ============================================================
// @017e50e0 — 812 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e5351) */
/* WARNING: Removing unreachable block (ram,0x017e535e) */
/* WARNING: Removing unreachable block (ram,0x017e53e4) */
/* WARNING: Removing unreachable block (ram,0x017e53ed) */
/* WARNING: Removing unreachable block (ram,0x017e5287) */
/* WARNING: Removing unreachable block (ram,0x017e52b0) */
/* WARNING: Removing unreachable block (ram,0x017e5289) */
/* WARNING: Removing unreachable block (ram,0x017e52b2) */

void FUN_017e50e0(void)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong unaff_RDI;
  undefined8 local_a0;
  code *local_98;
  longlong local_70;
  char local_68;
  undefined8 *local_58;
  char local_50;
  int local_40;
  
  plVar4 = (longlong *)FUN_010eca10();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  *(longlong **)(unaff_RDI + 0x58) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_02572370;
  local_68 = '\0';
  local_70 = 0;
  pcVar7 = DAT_02572370;
  do {
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)pcVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      pcVar7 = (code *)FUN_00e7bdb0();
      cVar3 = FUN_01252960(pcVar7,uVar6,&local_70,&local_a0);
      pVar9 = (pthread_key_t)pcVar7;
      if (cVar3 == '\0') {
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        return;
      }
    } while (local_70 == 0);
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*pcVar2)();
    FUN_017e4b40();
    if (local_50 == '\0') {
      if (local_58 != (undefined8 *)0x0) {
        FUN_00d50b00();
        goto LAB_017e5251;
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
LAB_017e5251:
      local_40 = -1;
      while (local_40 = local_40 + 1, local_40 < *(int *)((longlong)local_58 + 0xc)) {
        pvVar5 = _pthread_getspecific((pthread_key_t)local_58[2]);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_017dde70();
        if (cVar3 != '\0') {
          FUN_00d24b60(0,FUN_017db4e0,0);
        }
      }
      FUN_01916320();
      pVar9 = (pthread_key_t)local_58;
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = '\0';
    pcVar7 = local_98;
    FUN_012502a0(local_98,local_a0,0);
    local_58 = puVar8;
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}




// ============================================================
// @017e82b0 — 786 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e8512) */

undefined8 FUN_017e82b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar5;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50 [32];
  
  if (*(int *)(unaff_RDI + 0x50) == 2) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017ddb20();
    FUN_00d23310();
    lVar1 = local_58;
    local_50[0x18] = local_50[0];
    pcVar5 = local_50 + 0x18;
    pcVar4 = local_50;
    if (local_50[0] == '\0') {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_60 = lVar1;
    local_50[8] = local_50[0x18] != '\0';
    pcVar4 = local_50 + 8;
    if ((bool)local_50[8]) {
      pcVar4 = pcVar5;
    }
    *pcVar4 = '\0';
    if ((local_50[0x18] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    local_50[0x18] = '\0';
    local_50[0x10] = '\0';
    if (local_60 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e11f0();
      FUN_01543a70(0,FUN_017db4e0);
      lVar1 = local_58;
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      lVar2 = local_58;
      local_70 = local_50[0];
      pcVar4 = local_50;
      if (local_50[0] == '\0') {
        pcVar4 = &local_70;
      }
      *pcVar4 = '\0';
      if ((local_50[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        if (local_70 != '\0') {
          local_50[0x18] = '\x01';
          pcVar5 = &local_70;
        }
        *pcVar5 = '\0';
        if (local_70 != '\0') {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      local_70 = local_50[0];
      pcVar5 = local_50;
      if (local_50[0] == '\0') {
        pcVar5 = &local_70;
      }
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        if (local_70 == '\0') {
          local_50[0x10] = '\0';
        }
        else {
          local_50[0x10] = '\x01';
          local_70 = '\0';
        }
      }
      if ((*unaff_RSI != lVar2) && (*unaff_RSI != local_58)) {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_50[0x10] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        if (local_50[8] != '\0') {
          FUN_00d50b20();
        }
        return 1;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0x10] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0x18] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_50[8] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  return 0;
}




// ============================================================
// @017718e0 — 785 bytes
// ============================================================

float FUN_017718e0(float param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  char *pcVar7;
  float fVar8;
  float local_64;
  float local_60;
  float local_5c;
  longlong local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  local_48 = 0.0;
  if (-1 < unaff_ESI) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    if (((*(char *)(unaff_RDI + 0x38) != '\0') || (unaff_ESI < iVar1)) &&
       ((*(char *)(unaff_RDI + 0x38) == '\0' || (unaff_ESI < iVar1 + -1)))) {
      pVar6 = (pthread_key_t)&local_60;
      local_44 = param_1;
      cVar3 = FUN_017715d0(param_2,&local_64);
      local_48 = 0.0;
      if (cVar3 != '\0') {
        local_5c = (float)FUN_017708f0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01779ec0();
        fVar8 = fVar8 + local_44;
        local_44 = local_60;
        if (fVar8 <= local_60) {
          local_44 = fVar8;
        }
        local_48 = local_64;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        if (local_48 <= local_44) {
          local_48 = local_44;
        }
        local_44 = (float)FUN_01779ec0();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = local_48 - local_44;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01779ec0();
        FUN_01779ed0(fVar8 + local_48);
        if (*(char *)(unaff_RDI + 0x38) != '\0') {
          FUN_00d23340();
          lVar2 = local_58;
          local_40[0] = local_50[0];
          pcVar5 = local_40;
          if (local_50[0] != '\0') {
            pcVar5 = local_50;
          }
          *pcVar5 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d23310();
          pcVar5 = local_38;
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = pcVar5;
          }
          local_38[0] = local_50[0];
          *pcVar7 = '\0';
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)pcVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar8 = (float)FUN_01779ec0();
          FUN_01779ed0(local_5c + fVar8);
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  return local_48;
}




// ============================================================
// @01776110 — 767 bytes
// ============================================================

void FUN_01776110(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  int local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)unaff_ESI * 8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_38 = FUN_01775a80();
  if (0 < (int)unaff_ESI) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 < iVar3) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (iVar3 < local_38) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if (((*(char *)(unaff_RDI + 0x38) != '\0') && (0 < (int)unaff_ESI)) &&
     ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 == iVar3) {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
    }
    else {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01779f30();
      if (local_38 == iVar3) {
        pvVar4 = _pthread_getspecific(unaff_ESI);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779f30();
      }
    }
  }
  FUN_01772540();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00a6a008 — 727 bytes
// ============================================================

void FUN_00a6a008(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_02528c60;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  this = (string *)0x0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  *(undefined2 *)(unaff_RDI + 0x26) = 0x100;
  *(undefined8 *)((longlong)unaff_RDI + 0x132) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x13a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x13b) = 0x101;
  *(undefined1 *)((longlong)unaff_RDI + 0x13d) = 1;
  *(undefined8 *)((longlong)unaff_RDI + 0x13e) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x146) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined1 *)((longlong)unaff_RDI + 0x34) = *(undefined1 *)((longlong)unaff_RSI + 0x34);
  if (unaff_RDI != unaff_RSI) {
    FUN_008df080();
    param_2 = (string *)unaff_RSI[0xb];
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(unaff_RSI + 0xd);
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = *(undefined4 *)((longlong)unaff_RSI + 0x6c);
  *(undefined4 *)(unaff_RDI + 0xe) = *(undefined4 *)(unaff_RSI + 0xe);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined1 *)(unaff_RDI + 0x15) = *(undefined1 *)(unaff_RSI + 0x15);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    param_2 = (string *)unaff_RSI[0x1a];
    FUN_008df080();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = *(undefined4 *)(unaff_RSI + 0x1c);
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = *(undefined4 *)((longlong)unaff_RSI + 0xe4);
  *(undefined1 *)(unaff_RDI + 0x1d) = *(undefined1 *)(unaff_RSI + 0x1d);
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = *(undefined4 *)((longlong)unaff_RSI + 0xec);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x21) = *(undefined4 *)(unaff_RSI + 0x21);
  *(undefined4 *)((longlong)unaff_RDI + 0x10c) = *(undefined4 *)((longlong)unaff_RSI + 0x10c);
  *(undefined1 *)(unaff_RDI + 0x22) = *(undefined1 *)(unaff_RSI + 0x22);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  unaff_RDI[0x28] = unaff_RSI[0x28];
  uVar1 = unaff_RSI[0x26];
  unaff_RDI[0x27] = unaff_RSI[0x27];
  unaff_RDI[0x26] = uVar1;
  return;
}




// ============================================================
// @0176f970 — 717 bytes
// ============================================================

longlong * FUN_0176f970(pthread_key_t param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  int iVar9;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_01a016a0();
  local_38 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  pvVar4 = _pthread_getspecific(param_1);
  lVar7 = DAT_027cd5a0;
  plVar3 = local_38;
  if ((pvVar4 != (void *)0x0) &&
     (lVar5 = FUN_00e8b990(), lVar7 = DAT_027cd5a0, plVar3 = local_38, lVar5 != 0)) {
    plVar3 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  DAT_027cd5a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_027cd5c0;
  if (DAT_027cd5c0 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar5;
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  plVar8 = &local_58;
  FUN_00d31230(plVar8,&local_68);
  lVar5 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar3[8] != lVar5) {
    FUN_00d64850();
    lVar1 = plVar3[8];
    if (lVar1 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      plVar3[8] = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_025ffd78;
  iVar9 = 0;
  do {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025ffd60;
    puVar6[7] = 0;
    puVar6[8] = 0;
    (*pcVar2)();
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779ed0((float)iVar9 * DAT_023908e0);
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01779f40();
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar8);
    if ((pvVar4 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar8 = local_38;
    }
    FUN_0176fde0();
    FUN_00d50b20();
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0xd);
  *unaff_RDI = (longlong)local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @017715d0 — 716 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_017715d0(float param_1,float *param_2)

{
  int iVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  float *in_RCX;
  char *pcVar4;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  float fVar5;
  longlong local_58;
  char local_50 [8];
  float *local_48;
  float local_40;
  float local_3c;
  char local_38 [8];
  
  local_3c = DAT_02390124;
  if (DAT_02390124 <= param_1) {
    local_3c = param_1;
  }
  local_48 = in_RCX;
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    if ((int)unaff_ESI < 0) {
      return 0;
    }
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    if (iVar1 <= (int)unaff_ESI) {
      return 0;
    }
    if (unaff_ESI == 0) {
      FUN_00d23310();
      pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_50[0]);
      pcVar4 = local_38;
      if (local_50[0] != '\0') {
        pcVar4 = local_50;
      }
      local_38[0] = local_50[0];
      *pcVar4 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      *param_2 = fVar5 + DAT_0240f124;
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar2 = _pthread_getspecific
                         ((pthread_key_t)*(undefined8 *)(*(longlong *)(unaff_RDI + 0x50) + 0x10));
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      *param_2 = fVar5 + local_3c;
    }
    if (iVar1 - 1U == unaff_ESI) {
      pvVar2 = _pthread_getspecific(unaff_ESI);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
      fVar5 = fVar5 + _DAT_02394238;
      goto LAB_01771787;
    }
  }
  else {
    if (unaff_ESI == 0) {
      unaff_ESI = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) - 2;
      pvVar2 = _pthread_getspecific(unaff_ESI);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_40 = (float)FUN_01779ec0();
      fVar5 = (float)FUN_017708f0();
      fVar5 = local_40 - fVar5;
    }
    else {
      pvVar2 = _pthread_getspecific((pthread_key_t)in_RCX);
      unaff_ESI = (pthread_key_t)in_RCX;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar5 = (float)FUN_01779ec0();
    }
    *param_2 = fVar5 + local_3c;
  }
  pvVar2 = _pthread_getspecific(unaff_ESI);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_01779ec0();
  fVar5 = fVar5 - local_3c;
LAB_01771787:
  *local_48 = fVar5;
  return 1;
}




// ============================================================
// @014efd00 — 703 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x014efd4d) */
/* WARNING: Removing unreachable block (ram,0x014efd56) */
/* WARNING: Removing unreachable block (ram,0x014effbd) */

longlong * FUN_014efd00(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  ulonglong uVar13;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined1 auVar20 [16];
  longlong local_68;
  char local_60;
  undefined1 local_48 [16];
  
  uVar14 = *unaff_RSI;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 + 1;
    *unaff_RSI = uVar14;
  }
  FUN_00e84080();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((int)uVar14 < 2) goto LAB_014eff92;
  lVar2 = *(longlong *)(local_68 + 0x10);
  uVar16 = uVar14 >> 1;
  if (uVar14 < 8) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulonglong)(uVar16 & 0xfffffffc);
    uVar17 = (uVar13 - 4 >> 2) + 1;
    if (uVar13 - 4 == 0) {
      lVar15 = 0;
LAB_014efeda:
      lVar18 = lVar2 + lVar15 * 4;
      uVar19 = *(undefined4 *)(lVar18 + 4);
      uVar12 = *(undefined4 *)(lVar18 + 0xc);
      local_48._0_8_ = _powf();
      local_48._8_4_ = extraout_XMM0_Dc_07;
      local_48._12_4_ = extraout_XMM0_Dd_07;
      uVar3 = _powf(uVar19);
      auVar9._8_4_ = extraout_XMM0_Dc_08;
      auVar9._0_8_ = uVar3;
      auVar9._12_4_ = extraout_XMM0_Dd_08;
      auVar20 = insertps(local_48,auVar9,0x10);
      uVar3 = _powf(*(undefined4 *)(lVar2 + 8 + lVar15 * 4));
      auVar10._8_4_ = extraout_XMM0_Dc_09;
      auVar10._0_8_ = uVar3;
      auVar10._12_4_ = extraout_XMM0_Dd_09;
      auVar20 = insertps(auVar20,auVar10,0x20);
      uVar3 = _powf(uVar12);
      auVar11._8_4_ = extraout_XMM0_Dc_10;
      auVar11._0_8_ = uVar3;
      auVar11._12_4_ = extraout_XMM0_Dd_10;
      auVar20 = insertps(auVar20,auVar11,0x30);
      *(undefined1 (*) [16])(lVar2 + lVar15 * 4) = auVar20;
    }
    else {
      lVar18 = -(uVar17 & 0xfffffffffffffffe);
      lVar15 = 0;
      do {
        lVar1 = lVar2 + lVar15 * 4;
        uVar19 = *(undefined4 *)(lVar1 + 4);
        uVar12 = *(undefined4 *)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc;
        local_48._12_4_ = extraout_XMM0_Dd;
        uVar3 = _powf(uVar19);
        auVar20._8_4_ = extraout_XMM0_Dc_00;
        auVar20._0_8_ = uVar3;
        auVar20._12_4_ = extraout_XMM0_Dd_00;
        auVar20 = insertps(local_48,auVar20,0x10);
        uVar3 = _powf(*(undefined4 *)(lVar2 + 8 + lVar15 * 4));
        auVar4._8_4_ = extraout_XMM0_Dc_01;
        auVar4._0_8_ = uVar3;
        auVar4._12_4_ = extraout_XMM0_Dd_01;
        auVar20 = insertps(auVar20,auVar4,0x20);
        uVar3 = _powf(uVar12);
        auVar5._8_4_ = extraout_XMM0_Dc_02;
        auVar5._0_8_ = uVar3;
        auVar5._12_4_ = extraout_XMM0_Dd_02;
        auVar20 = insertps(auVar20,auVar5,0x30);
        *(undefined1 (*) [16])(lVar2 + lVar15 * 4) = auVar20;
        lVar1 = lVar2 + 0x10 + lVar15 * 4;
        uVar19 = *(undefined4 *)(lVar1 + 4);
        uVar12 = *(undefined4 *)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc_03;
        local_48._12_4_ = extraout_XMM0_Dd_03;
        uVar3 = _powf(uVar19);
        auVar6._8_4_ = extraout_XMM0_Dc_04;
        auVar6._0_8_ = uVar3;
        auVar6._12_4_ = extraout_XMM0_Dd_04;
        auVar20 = insertps(local_48,auVar6,0x10);
        uVar3 = _powf(*(undefined4 *)(lVar2 + 0x18 + lVar15 * 4));
        auVar7._8_4_ = extraout_XMM0_Dc_05;
        auVar7._0_8_ = uVar3;
        auVar7._12_4_ = extraout_XMM0_Dd_05;
        auVar20 = insertps(auVar20,auVar7,0x20);
        uVar3 = _powf(uVar12);
        auVar8._8_4_ = extraout_XMM0_Dc_06;
        auVar8._0_8_ = uVar3;
        auVar8._12_4_ = extraout_XMM0_Dd_06;
        auVar20 = insertps(auVar20,auVar8,0x30);
        *(undefined1 (*) [16])(lVar2 + 0x10 + lVar15 * 4) = auVar20;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar17 & 1) != 0) goto LAB_014efeda;
    }
    if (uVar13 == uVar16) goto LAB_014eff92;
  }
  do {
    uVar19 = _powf(*(undefined4 *)(lVar2 + uVar13 * 4));
    *(undefined4 *)(lVar2 + uVar13 * 4) = uVar19;
    uVar13 = uVar13 + 1;
  } while (uVar16 != uVar13);
LAB_014eff92:
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @017e0a10 — 674 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e0bba) */
/* WARNING: Removing unreachable block (ram,0x017e0bc3) */
/* WARNING: Removing unreachable block (ram,0x017e0b04) */
/* WARNING: Removing unreachable block (ram,0x017e0b0d) */
/* WARNING: Removing unreachable block (ram,0x017e0bf0) */
/* WARNING: Removing unreachable block (ram,0x017e0bf9) */
/* WARNING: Removing unreachable block (ram,0x017e0a70) */
/* WARNING: Removing unreachable block (ram,0x017e0a90) */
/* WARNING: Removing unreachable block (ram,0x017e0a72) */
/* WARNING: Removing unreachable block (ram,0x017e0a92) */

longlong * FUN_017e0a10(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int local_40;
  
  lVar1 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar1 != 0) {
    local_40 = -1;
    do {
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_017dee80();
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (unaff_RSI == 0) goto LAB_017e0c9c;
        goto LAB_017e0c94;
      }
      lVar7 = *(longlong *)(lVar1 + 0x10);
      plVar2 = *(longlong **)(lVar7 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar4 = (pthread_key_t)lVar7;
      plVar8 = plVar2;
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar3 = (**(code **)(*plVar8 + 0x3b8))();
    } while (cVar3 == '\0');
    FUN_017dee80();
    if (*(longlong *)(unaff_RSI + 0x50) != 0) {
      FUN_00d50b00();
      pvVar6 = _pthread_getspecific(pVar4);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017e5fe0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
        FUN_00d50b00();
        pVar4 = FUN_00d23d20();
        FUN_00d50b20();
        if ((pVar4 != 0xffffffff) && ((int)pVar4 < *(int *)((longlong)plVar2 + 0xc) + -1)) {
          pvVar6 = _pthread_getspecific(pVar4);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017e0a10();
          FUN_00d50b20();
          FUN_00d50b20();
          return unaff_RDI;
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
LAB_017e0c94:
  FUN_00d50b00();
LAB_017e0c9c:
  *unaff_RDI = unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @0091c86e — 658 bytes
// ============================================================

void FUN_0091c86e(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251d408;
  unaff_RDI[1] = &DAT_0251cbd8;
  unaff_RDI[2] = 0;
  *(undefined2 *)(unaff_RDI + 3) = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x35) = 0;
  unaff_RDI[8] = &DAT_0251d2e0;
  unaff_RDI[0xb] = &DAT_0251b588;
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0x1010100000000;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x8c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0xa4) = 0;
  unaff_RDI[0xc] = 1;
  *(undefined4 *)(unaff_RDI + 0xd) = 2;
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  *(undefined4 *)(unaff_RDI + 0x19) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0xcc) = 0;
  unaff_RDI[9] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 10) = 2;
  unaff_RDI[0x1a] = &DAT_0251d2e0;
  unaff_RDI[0x1d] = &DAT_0251b588;
  *(undefined4 *)((longlong)unaff_RDI + 300) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x124) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x11c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x104) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xfc) = 0;
  *(undefined4 *)(unaff_RDI + 0x26) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x134) = 0;
  unaff_RDI[0x1e] = 1;
  *(undefined4 *)(unaff_RDI + 0x1f) = 2;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x28] = 0;
  *(undefined4 *)(unaff_RDI + 0x2b) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x15c) = 0;
  unaff_RDI[0x1b] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 0x1c) = 2;
  unaff_RDI[0x2c] = &DAT_0251d2e0;
  unaff_RDI[0x2f] = &DAT_0251b588;
  *(undefined4 *)((longlong)unaff_RDI + 0x1bc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1b4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1ac) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1a4) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x19c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x194) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x18c) = 0;
  *(undefined4 *)(unaff_RDI + 0x38) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x1c4) = 0;
  unaff_RDI[0x30] = 1;
  *(undefined4 *)(unaff_RDI + 0x31) = 2;
  *(undefined4 *)(unaff_RDI + 0x39) = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  *(undefined4 *)(unaff_RDI + 0x3d) = 0x10101;
  *(undefined2 *)((longlong)unaff_RDI + 0x1ec) = 0;
  unaff_RDI[0x2d] = 0x100000001;
  *(undefined4 *)(unaff_RDI + 0x2e) = 2;
  unaff_RDI[0x3e] = &DAT_0251d338;
  unaff_RDI[0x3f] = 0;
  *(undefined4 *)(unaff_RDI + 0x40) = 0;
  ___bzero();
  ___bzero();
  ___bzero();
  *(undefined8 *)((longlong)unaff_RDI + 0x43e) = 0;
  unaff_RDI[0x87] = 0;
  unaff_RDI[0x86] = 0;
  unaff_RDI[0x85] = 0;
  return;
}




// ============================================================
// @019e7900 — 645 bytes
// ============================================================

void FUN_019e7900(void)

{
  uint uVar1;
  float fVar2;
  longlong *unaff_RDI;
  double dVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  double local_60;
  double local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  float local_14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_02;
  
  dVar3 = (double)FUN_00e7d6f0();
  if ((double)unaff_RDI[0x2d] <= dVar3 - (double)unaff_RDI[0x2e]) {
    *(undefined1 *)((longlong)unaff_RDI + 0x1bc) = 0;
    dVar3 = DAT_0238fee8;
  }
  else {
    dVar3 = (dVar3 - (double)unaff_RDI[0x2e]) / (double)unaff_RDI[0x2d];
  }
  dVar3 = (double)_pow(dVar3,DAT_023908d0);
  local_48._8_8_ = 0;
  local_48._0_8_ = unaff_RDI[0x2f];
  local_38._0_8_ = unaff_RDI[0x30];
  uVar1 = *(uint *)(unaff_RDI + 0x37);
  local_38._8_8_ = 0;
  if ((uVar1 & 0xc) == 0) {
    local_58 = 0.0;
    local_60 = 0.0;
  }
  else {
    local_60 = (double)unaff_RDI[0x32];
    if ((uVar1 & 8) != 0) {
      local_60 = local_60 + ((double)unaff_RDI[0x34] - local_60) * dVar3;
    }
    local_58 = (double)unaff_RDI[0x31];
    if ((uVar1 & 4) != 0) {
      local_58 = local_58 + ((double)unaff_RDI[0x33] - local_58) * dVar3;
    }
    (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x3f0))();
    uVar1 = *(uint *)(unaff_RDI + 0x37);
  }
  if ((uVar1 & 3) == 0) {
    local_14 = 0.0;
    fVar10 = 0.0;
  }
  else {
    local_14 = *(float *)(unaff_RDI + 0x35);
    fVar2 = (float)((ulonglong)local_38._0_8_ >> 0x20);
    if ((uVar1 & 1) == 0) {
      fVar10 = *(float *)((longlong)unaff_RDI + 0x1ac);
    }
    else {
      local_14 = local_14 + (float)dVar3 * (*(float *)(unaff_RDI + 0x36) - local_14);
      fVar10 = *(float *)((longlong)unaff_RDI + 0x1ac);
    }
    if ((uVar1 & 2) != 0) {
      fVar10 = fVar10 + (float)dVar3 * (*(float *)((longlong)unaff_RDI + 0x1b4) - fVar10);
    }
    (**(code **)(*unaff_RDI + 0xc08))(CONCAT44(fVar2,fVar2 / fVar10));
  }
  (**(code **)(*unaff_RDI + 0x540))();
  (**(code **)(*unaff_RDI + 0xa48))();
  uVar1 = *(uint *)(unaff_RDI + 0x37);
  if ((uVar1 & 0xc) != 0) {
    auVar5._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_60 + local_58);
    auVar5._8_8_ = extraout_XMM0_Qb;
    local_38 = blendps(local_38,auVar5,1);
    auVar6._0_8_ = (**(code **)(*unaff_RDI + 0x938))(local_58);
    auVar6._8_8_ = extraout_XMM0_Qb_00;
    local_48 = blendps(local_48,auVar6,1);
    uVar1 = *(uint *)(unaff_RDI + 0x37);
  }
  if ((uVar1 & 3) != 0) {
    uVar4 = (**(code **)(*unaff_RDI + 0xbf8))(fVar10 + local_14);
    auVar9._8_4_ = (int)extraout_XMM0_Qb_01;
    auVar9._0_8_ = uVar4;
    auVar9._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    insertps(local_48,auVar9,0x10);
    auVar7._0_8_ = (**(code **)(*unaff_RDI + 0xbf8))();
    auVar7._8_8_ = extraout_XMM0_Qb_02;
    local_58._0_4_ = (float)uVar4;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = (float)auVar7._0_8_ - local_58._0_4_;
    insertps(local_38,auVar8,0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x019e7b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_RDI + 0x518))();
  return;
}




// ============================================================
// @01e3b960 — 630 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e3b98b) */
/* WARNING: Removing unreachable block (ram,0x01e3b994) */

void FUN_01e3b960(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  longlong local_28;
  char local_20;
  
  FUN_01d81f40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  unaff_RDI[3] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x450))();
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = uVar4;
  *(undefined8 *)((longlong)unaff_RDI + 0x114) = param_2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  (**(code **)(*unaff_RDI + 0x558))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  unaff_RDI[6] = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[8];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[8] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[8];
        unaff_RDI[8] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[8] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 9) = uVar2;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[10];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[10] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[10];
        unaff_RDI[10] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[10] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0xb) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = unaff_RDI[0xc];
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        unaff_RDI[0xc] = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = unaff_RDI[0xc];
        unaff_RDI[0xc] = local_28;
      }
    }
    else {
      local_20 = '\0';
      unaff_RDI[0xc] = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  FUN_00e88810();
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00aa0894 — 623 bytes
// ============================================================

void FUN_00aa0894(void)

{
  undefined8 uVar1;
  string *this;
  string *psVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0252a2f8;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  psVar2 = (string *)(unaff_RDI + 0x1b);
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  *(undefined1 *)(unaff_RDI + 0x24) = 0;
  this = (string *)0x1010000010001;
  *(undefined8 *)((longlong)unaff_RDI + 0x121) = 0x1010000010001;
  *(undefined1 *)((longlong)unaff_RDI + 0x129) = 1;
  *(undefined4 *)((longlong)unaff_RDI + 0x12a) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x12e) = 0x101;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 0x28);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)(unaff_RSI + 0x2c);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(unaff_RSI + 0x60);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0x13) = *(undefined4 *)(unaff_RSI + 0x98);
  std::string::operator=(this,psVar2);
  *(undefined4 *)(unaff_RDI + 0x17) = *(undefined4 *)(unaff_RSI + 0xb8);
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = *(undefined4 *)(unaff_RSI + 0xbc);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  std::string::operator=(this,psVar2);
  uVar1 = *(undefined8 *)(unaff_RSI + 0x120);
  unaff_RDI[0x25] = *(undefined8 *)(unaff_RSI + 0x128);
  unaff_RDI[0x24] = uVar1;
  return;
}




// ============================================================
// @0088dffa — 619 bytes
// ============================================================

void FUN_0088dffa(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0251c5a8;
  unaff_RDI[1] = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  *(undefined2 *)(unaff_RDI + 4) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x34) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0;
  unaff_RDI[0xc] = 0xffffffffffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  unaff_RDI[0x11] = &DAT_0251c338;
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x12] = 0;
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  unaff_RDI[0x1a] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x31] = 0;
  unaff_RDI[0x30] = 0;
  unaff_RDI[0x2f] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2d] = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x2b] = 0;
  unaff_RDI[0x2a] = 0;
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x27] = 0;
  *(undefined1 *)(unaff_RDI + 0x32) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x19c) = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x36] = 0;
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x38] = &DAT_0251c3a0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x3e] = 0;
  unaff_RDI[0x3d] = 0;
  unaff_RDI[0x3c] = 0;
  unaff_RDI[0x3b] = 0;
  unaff_RDI[0x3a] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x40] = 0x100000001;
  unaff_RDI[0x45] = 0;
  unaff_RDI[0x44] = 0;
  unaff_RDI[0x43] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x41] = 0;
  *(undefined2 *)(unaff_RDI + 0x46) = 1;
  *(undefined1 *)((longlong)unaff_RDI + 0x232) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x233) = 0x1010101;
  *(undefined2 *)((longlong)unaff_RDI + 0x237) = 0;
  *(undefined1 *)((longlong)unaff_RDI + 0x239) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x26f) = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x4c] = 0;
  unaff_RDI[0x4b] = 0;
  unaff_RDI[0x4a] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x48] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x277) = 0x100010000010001;
  *(undefined4 *)((longlong)unaff_RDI + 0x27f) = 0;
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  return;
}




// ============================================================
// @011a5bd0 — 618 bytes
// str: ""GNInt""
// str: ""_assembledElementRendererCount""
// str: ""MUSampler""
// str: ""MUSamplerComponentRenderer""
// str: ""MUSamplerElementRenderer""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a5bd0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_010f3160();
  *unaff_RDI = &DAT_025d7780;
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a5f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSampler");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027afc68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027afc30 = FUN_011a5760();
        _DAT_027afc28 = "_assembledElementRendererCount";
        _DAT_027afc38 = 0;
        _DAT_027afc40 = 0x6900;
        _DAT_027afc48 = "GNInt";
        _DAT_027afc50 = 0;
        uRam00000000027afc58 = 0;
        _DAT_027afc60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011a6170();
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerComponentRenderer");
  }
  return;
}




// ============================================================
// @01774880 — 613 bytes
// ============================================================

void FUN_01774880(int *param_1,int param_2,size_t param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_68;
  char local_60;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x25683c0;
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  fVar8 = (float)FUN_01774c90();
  iVar2 = *(int *)(unaff_RSI + 100);
  FUN_0176fff0();
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar9 = (float)FUN_01774c90();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = FUN_01774ef0(fVar8 + (float)iVar2 * DAT_0241b664 + fVar9,0);
  iVar3 = FUN_01774300();
  uVar10 = extraout_XMM0_Da;
  if (iVar3 == param_2) {
LAB_01774a06:
    iVar3 = -1000000;
    if (iVar2 != -1000000) {
      iVar3 = *(int *)(puVar5 + 3);
      FUN_00c8e340(uVar10,1);
      iVar4 = iVar2;
      while( true ) {
        pvVar6 = (void *)(longlong)iVar3;
        *(int *)(puVar5[2] + (longlong)pvVar6) = iVar4;
        iVar4 = iVar4 + 1;
        iVar3 = FUN_01774300();
        if (iVar3 != param_2) break;
        iVar3 = *(int *)(puVar5 + 3);
        FUN_00c8e340(extraout_XMM0_Da_02,1);
      }
      while( true ) {
        iVar2 = iVar2 + -1;
        iVar3 = FUN_01774300();
        if (iVar3 != param_2) break;
        iVar3 = *(int *)(puVar5 + 3);
        FUN_00c8e340(extraout_XMM0_Da_03,1);
        piVar1 = (int *)puVar5[2];
        _memmove(pvVar6,(void *)(longlong)iVar3,param_3);
        *piVar1 = iVar2;
      }
      iVar3 = *(int *)puVar5[2] + -1;
    }
  }
  else if (param_2 < iVar3) {
    do {
      iVar3 = iVar2 + -1;
      iVar4 = FUN_01774300();
      if (iVar4 == param_2) {
        iVar2 = iVar2 + -1;
        uVar10 = extraout_XMM0_Da_00;
        goto LAB_01774a06;
      }
      iVar2 = iVar3;
    } while (param_2 <= iVar4);
  }
  else {
    iVar3 = iVar2 + -1;
    do {
      iVar2 = iVar3 + 2;
      iVar4 = FUN_01774300();
      uVar10 = extraout_XMM0_Da_01;
      if (iVar4 == param_2) goto LAB_01774a06;
      iVar3 = iVar3 + 1;
    } while (iVar4 <= param_2);
  }
  if (param_1 != (int *)0x0) {
    *param_1 = iVar3;
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @017e7190 — 613 bytes
// ============================================================

undefined8 FUN_017e7190(ulonglong param_1,longlong *param_2,ulonglong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  void *pvVar3;
  int extraout_var;
  ulonglong uVar4;
  pthread_key_t pVar5;
  ulonglong unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 uVar6;
  
  if (*param_2 != 0) {
    pVar5 = 0;
    uVar2 = FUN_017e7400();
    if (param_3 != (ulonglong *)0x0) {
      *param_3 = uVar2;
    }
    if (((uVar2 >> 0x20 == 0) || ((int)((ulonglong)unaff_RDI >> 0x20) == 0)) ||
       (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016caaa0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_016caaa0();
      FUN_00e7bcc0();
      if ((param_1 >> 0x20 != 0) && (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
        FUN_00e7bdc0();
      }
      FUN_00e7b970();
      if (((uVar2 >> 0x20 == 0) || (extraout_var == 0)) || (cVar1 = FUN_00e7c020(), cVar1 == '\0'))
      {
        uVar6 = CONCAT71((uint7)(param_1 >> 0x28),1);
        if (unaff_RSI >> 0x20 == 0) {
          return uVar6;
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_016caaa0();
        if (((uVar4 >> 0x20 == 0) || (uVar2 >> 0x20 == 0)) ||
           (cVar1 = FUN_00e7c020(), cVar1 != '\0')) {
          FUN_00e7b970();
          FUN_00e7b970();
          if (uVar4 >> 0x20 == 0) {
            return uVar6;
          }
          if (uVar2 >> 0x20 == 0) {
            return uVar6;
          }
          cVar1 = FUN_00e7c020();
          if (cVar1 == '\0') {
            return uVar6;
          }
        }
      }
    }
  }
  return 0;
}




// ============================================================
// @017df3a0 — 596 bytes
// str: ""_string""
// str: ""GNInt""
// str: ""_fret""
// str: ""_finger""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017df3a0(void)

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
  *unaff_RDI = &DAT_025e8080;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d4868 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d4830 = FUN_017df1a0();
        _DAT_027d4828 = "_fret";
        _DAT_027d4838 = 0;
        _DAT_027d4840 = 0x6900;
        _DAT_027d4848 = "GNInt";
        _DAT_027d4850 = 0;
        uRam00000000027d4858 = 0;
        _DAT_027d4860 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d48b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d4878 = FUN_017df1a0();
        _DAT_027d4870 = "_string";
        _DAT_027d4880 = 0;
        _DAT_027d4888 = 0x6900;
        _DAT_027d4890 = "GNInt";
        _DAT_027d4898 = 0;
        uRam00000000027d48a0 = 0;
        _DAT_027d48a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_017df1a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d48f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d48c0 = FUN_017df1a0();
        _DAT_027d48b8 = "_finger";
        _DAT_027d48c8 = 0;
        _DAT_027d48d0 = 0x6900;
        _DAT_027d48d8 = "GNInt";
        _DAT_027d48e0 = 0;
        uRam00000000027d48e8 = 0;
        _DAT_027d48f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00b13c40 — 579 bytes
// ============================================================

void FUN_00b13c40(void)

{
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *(undefined8 *)((longlong)unaff_RDI + 0x7c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x84) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x6c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x74) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x5c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 100) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x54) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x3c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x2c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x34) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x14) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  *unaff_RDI = &DAT_025408b0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x14] = 0;
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b79380();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  FUN_00b793b0();
  return;
}




// ============================================================
// @0088984a — 574 bytes
// ============================================================

int FUN_0088984a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x10;
  lVar7 = unaff_RDI + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        *(undefined1 *)(unaff_RDI + 0x21) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined1 *)(unaff_RDI + 0x22) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined1 *)(unaff_RDI + 0x23) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 4:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined1 *)(unaff_RDI + 0x24) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 5:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined1 *)(unaff_RDI + 0x25) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 6:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x26) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
  if ((uVar8 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
  return iVar3 + iVar2 + iVar1;
}




// ============================================================
// @00aae772 — 574 bytes
// ============================================================

void FUN_00aae772(undefined8 param_1,string *param_2)

{
  undefined8 uVar1;
  string *this;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  
  this = (string *)(segment_command_00000020.segname + 8);
  *unaff_RDI = &DAT_0252a9f0;
  unaff_RDI[1] = &DAT_0252a720;
  *(undefined4 *)(unaff_RDI + 2) = 0xffffffff;
  unaff_RDI[3] = 0xffffffffffffffff;
  *(undefined2 *)(unaff_RDI + 4) = 0x101;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x19] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x17] = 0;
  unaff_RDI[0x16] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x14] = 0;
  unaff_RDI[0x20] = 0;
  unaff_RDI[0x1f] = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1d] = 0;
  unaff_RDI[0x1c] = 0;
  unaff_RDI[0x1b] = 0;
  *(undefined1 *)(unaff_RDI + 0x21) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x109) = 0x101010100000001;
  *(undefined4 *)((longlong)unaff_RDI + 0x111) = 0x10100;
  *(undefined2 *)((longlong)unaff_RDI + 0x115) = 0;
  FUN_00aa9d7a();
  *(undefined1 *)(unaff_RDI + 5) = *(undefined1 *)(unaff_RSI + 5);
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = *(undefined4 *)((longlong)unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 6) = *(undefined4 *)(unaff_RSI + 6);
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = *(undefined4 *)((longlong)unaff_RSI + 0x34);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x13) = *(undefined4 *)(unaff_RSI + 0x13);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(undefined4 *)(unaff_RDI + 0x1a) = *(undefined4 *)(unaff_RSI + 0x1a);
  std::string::operator=(this,param_2);
  if (unaff_RDI != unaff_RSI) {
    FUN_009bc850();
  }
  uVar1 = unaff_RSI[0x21];
  *(undefined8 *)((longlong)unaff_RDI + 0x10f) = *(undefined8 *)((longlong)unaff_RSI + 0x10f);
  unaff_RDI[0x21] = uVar1;
  return;
}




// ============================================================
// @00068b60 — 572 bytes
// str: ""bool""
// str: ""_memoryLevel""
// str: ""_blockSize""
// str: ""_wantsGZIPHeader""
// str: ""GNInt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068b60(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0258ed08;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00068df0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d7738 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7700 = FUN_00068910();
        _DAT_026d76f8 = "_memoryLevel";
        _DAT_026d7708 = 0;
        _DAT_026d7710 = 0x6900;
        _DAT_026d7718 = "GNInt";
        _DAT_026d7720 = 0;
        uRam00000000026d7728 = 0;
        _DAT_026d7730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d7780 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7748 = FUN_00068910();
        _DAT_026d7740 = "_blockSize";
        _DAT_026d7750 = 0;
        _DAT_026d7758 = 0x6900;
        _DAT_026d7760 = "GNInt";
        _DAT_026d7768 = 0;
        uRam00000000026d7770 = 0;
        _DAT_026d7778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d77c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7790 = FUN_00068910();
        _DAT_026d7788 = "_wantsGZIPHeader";
        _DAT_026d7798 = 0;
        _DAT_026d77a0 = 0x6200;
        _DAT_026d77a8 = "bool";
        _DAT_026d77b0 = 0;
        uRam00000000026d77b8 = 0;
        _DAT_026d77c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017e3fb0 — 569 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e3ff2) */
/* WARNING: Removing unreachable block (ram,0x017e3ffb) */
/* WARNING: Removing unreachable block (ram,0x017e406b) */
/* WARNING: Removing unreachable block (ram,0x017e4074) */

void FUN_017e3fb0(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00d50100();
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x50) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x58) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  pcVar2 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  *(undefined8 **)(unaff_RDI + 0x68) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  *(undefined8 **)(unaff_RDI + 0x60) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  *(undefined8 **)(unaff_RDI + 0x70) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0xd0);
  *(longlong **)(unaff_RDI + 0xd0) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011b4770 — 561 bytes
// str: ""double""
// str: ""GNInt""
// str: ""_panorama""
// str: ""_panoramaInc""
// str: ""_panoramaSteps""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b4770(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_010f30b0();
  *unaff_RDI = &DAT_025d5c88;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b2fe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b2fa8 = FUN_011b4520();
        _DAT_027b2fa0 = "_panorama";
        _DAT_027b2fb0 = 0;
        _DAT_027b2fb8 = 0x6400;
        _DAT_027b2fc0 = "double";
        _DAT_027b2fc8 = 0;
        uRam00000000027b2fd0 = 0;
        _DAT_027b2fd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3028 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b2ff0 = FUN_011b4520();
        _DAT_027b2fe8 = "_panoramaInc";
        _DAT_027b2ff8 = 0;
        _DAT_027b3000 = 0x6400;
        _DAT_027b3008 = "double";
        _DAT_027b3010 = 0;
        uRam00000000027b3018 = 0;
        _DAT_027b3020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_011b4520();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3070 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3038 = FUN_011b4520();
        _DAT_027b3030 = "_panoramaSteps";
        _DAT_027b3040 = 0;
        _DAT_027b3048 = 0x6900;
        _DAT_027b3050 = "GNInt";
        _DAT_027b3058 = 0;
        uRam00000000027b3060 = 0;
        _DAT_027b3068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0114d0f0 — 561 bytes
// str: ""_volume""
// str: ""double""
// str: ""GNInt""
// str: ""_volumeInc""
// str: ""_volumeSteps""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0114d0f0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_010f30b0();
  *unaff_RDI = &DAT_025db568;
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ec50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ec18 = FUN_0114cea0();
        _DAT_0279ec10 = "_volume";
        _DAT_0279ec20 = 0;
        _DAT_0279ec28 = 0x6400;
        _DAT_0279ec30 = "double";
        _DAT_0279ec38 = 0;
        uRam000000000279ec40 = 0;
        _DAT_0279ec48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ec98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ec60 = FUN_0114cea0();
        _DAT_0279ec58 = "_volumeInc";
        _DAT_0279ec68 = 0;
        _DAT_0279ec70 = 0x6400;
        _DAT_0279ec78 = "double";
        _DAT_0279ec80 = 0;
        uRam000000000279ec88 = 0;
        _DAT_0279ec90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_0114cea0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ece0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279eca8 = FUN_0114cea0();
        _DAT_0279eca0 = "_volumeSteps";
        _DAT_0279ecb0 = 0;
        _DAT_0279ecb8 = 0x6900;
        _DAT_0279ecc0 = "GNInt";
        _DAT_0279ecc8 = 0;
        uRam000000000279ecd0 = 0;
        _DAT_0279ecd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00afe410 — 559 bytes
// str: ""float""
// str: ""_frame""
// str: ""_frequency""
// str: ""_amplitude""
// str: ""GNInt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00afe410(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02533468;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757208 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027571d0 = FUN_00afe200();
        _DAT_027571c8 = "_frequency";
        _DAT_027571d8 = 0;
        _DAT_027571e0 = 0x6600;
        _DAT_027571e8 = "float";
        _DAT_027571f0 = 0;
        uRam00000000027571f8 = 0;
        _DAT_02757200 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757250 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757218 = FUN_00afe200();
        _DAT_02757210 = "_amplitude";
        _DAT_02757220 = 0;
        _DAT_02757228 = 0x6600;
        _DAT_02757230 = "float";
        _DAT_02757238 = 0;
        uRam0000000002757240 = 0;
        _DAT_02757248 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00afe200();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02757298 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02757260 = FUN_00afe200();
        _DAT_02757258 = "_frame";
        _DAT_02757268 = 0;
        _DAT_02757270 = 0x6900;
        _DAT_02757278 = "GNInt";
        _DAT_02757280 = 0;
        uRam0000000002757288 = 0;
        _DAT_02757290 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @017712c0 — 553 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017713c3) */
/* WARNING: Removing unreachable block (ram,0x017713d0) */
/* WARNING: Removing unreachable block (ram,0x01771412) */
/* WARNING: Removing unreachable block (ram,0x0177141b) */
/* WARNING: Removing unreachable block (ram,0x01771327) */
/* WARNING: Removing unreachable block (ram,0x01771350) */
/* WARNING: Removing unreachable block (ram,0x01771329) */
/* WARNING: Removing unreachable block (ram,0x01771352) */

void FUN_017712c0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong unaff_RDI;
  int iVar3;
  int local_40;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar2 + 0xc)) {
      pvVar1 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar2 + 0x10));
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779fc0();
    }
    FUN_01777940();
    param_1 = lVar2;
  }
  FUN_00d64850();
  FUN_00d243f0();
  FUN_00d64910();
  lVar2 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar2 + 0xc));
    }
    FUN_01777940();
  }
  return;
}




// ============================================================
// @01773fe0 — 551 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_01773fe0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int unaff_ESI;
  undefined4 uVar4;
  float fVar5;
  longlong local_50;
  char local_48;
  float local_40;
  undefined1 local_38 [4];
  float local_34;
  
  FUN_01774880(local_38,unaff_ESI);
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  iVar1 = *(int *)(local_50 + 0x18);
  iVar2 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar2 >> 2 == 0) {
    iVar1 = FUN_01774300();
    iVar2 = FUN_01774300();
    local_34 = (float)FUN_01774b50();
    fVar5 = (float)FUN_01774b50();
    local_34 = (float)(unaff_ESI - iVar1) * ((fVar5 - local_34) / (float)(iVar2 - iVar1)) + local_34
    ;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0xfff0bdc0;
    }
  }
  else if (iVar2 >> 2 == 1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = **(undefined4 **)(local_50 + 0x10);
    }
    local_34 = (float)FUN_01774b50();
  }
  else {
    local_34 = 0.0;
    if (7 < iVar1) {
      local_34 = 0.0;
      lVar3 = 0;
      do {
        fVar5 = (float)FUN_01774b50();
        lVar3 = lVar3 + 1;
        iVar1 = *(int *)(local_50 + 0x18);
        iVar2 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar2 = iVar1;
        }
        local_34 = local_34 + fVar5;
      } while (lVar3 < iVar2 >> 2);
      uVar4 = **(undefined4 **)(local_50 + 0x10);
      if (3 < iVar1) {
        local_34 = local_34 / (float)(iVar2 >> 2);
        local_40 = DAT_02411fd8;
        lVar3 = 1;
        while( true ) {
          fVar5 = (float)FUN_01774b50();
          fVar5 = (float)((uint)(fVar5 - local_34) & _DAT_02390140);
          if (fVar5 < local_40) {
            uVar4 = *(undefined4 *)(*(longlong *)(local_50 + 0x10) + -4 + lVar3 * 4);
            local_40 = fVar5;
          }
          iVar1 = *(int *)(local_50 + 0x18);
          iVar2 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar2 = iVar1;
          }
          if (iVar2 >> 2 <= lVar3) break;
          lVar3 = lVar3 + 1;
        }
      }
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uVar4;
      }
      local_34 = (float)FUN_01774b50();
    }
  }
  FUN_00d50b20();
  return local_34;
}




// ============================================================
// @017766f0 — 547 bytes
// ============================================================

undefined4 FUN_017766f0(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  int unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar1 = *(int *)(unaff_RDI + 0x48);
  pVar7 = unaff_ESI + iVar1;
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    if (iVar1 + param_2 != pVar7) goto LAB_0177678c;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    iVar4 = iVar2 + -1;
    do {
      pVar7 = pVar7 + iVar4;
    } while ((int)((1 - iVar2) + pVar7) < 0);
    do {
      pVar7 = pVar7 + (1 - iVar2);
    } while (iVar4 <= (int)pVar7);
    pVar8 = iVar1 + param_2;
    do {
      pVar8 = pVar8 + iVar4;
    } while ((int)((1 - iVar2) + pVar8) < 0);
    do {
      pVar8 = pVar8 + (1 - iVar2);
    } while (iVar4 <= (int)pVar8);
    if (pVar8 != pVar7) {
LAB_0177678c:
      lVar3 = *(longlong *)(unaff_RDI + 0x50);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar9 = (float)FUN_01779ec0();
      fVar9 = fVar9 + param_1;
      if (*(char *)(unaff_RDI + 0x38) != '\0') {
        fVar10 = (float)FUN_017708f0();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_01779ec0();
        pvVar6 = _pthread_getspecific((pthread_key_t)*(undefined8 *)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = (float)FUN_01779ec0();
        for (; fVar12 <= fVar9; fVar9 = fVar9 - fVar10) {
        }
        for (; fVar9 < fVar11; fVar9 = fVar9 + fVar10) {
        }
      }
      uVar5 = FUN_01771c60(fVar9);
      if ((char)uVar5 != '\0') {
        FUN_01776110();
      }
      if (lVar3 == 0) {
        return uVar5;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}




// ============================================================
// @00039550 — 546 bytes
// ============================================================

void FUN_00039550(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  unaff_RDI[2] = 0;
  *unaff_RDI = &DAT_02569280;
  unaff_RDI[3] = &DAT_025697c0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[9] = puVar2;
  }
  iVar1 = DAT_02802630;
  unaff_RDI[0xd] = 0;
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x12] = 0;
  unaff_RDI[0x13] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  unaff_RDI[0x15] = 0;
  unaff_RDI[0x16] = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x16] = puVar2;
    iVar1 = DAT_02802630;
  }
  unaff_RDI[0x1b] = 0;
  *(undefined2 *)(unaff_RDI + 0x1c) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0xe4) = 0;
  unaff_RDI[0x28] = 0;
  unaff_RDI[0x18] = 0;
  unaff_RDI[0x19] = 0;
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  unaff_RDI[0x1e] = 0;
  unaff_RDI[0x1f] = 0;
  *(undefined1 *)(unaff_RDI + 0x20) = 0;
  unaff_RDI[0x21] = 0;
  unaff_RDI[0x22] = 0;
  unaff_RDI[0x23] = 0;
  unaff_RDI[0x24] = 0;
  unaff_RDI[0x25] = 0;
  unaff_RDI[0x26] = 0;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d22760();
    unaff_RDI[0x28] = puVar2;
  }
  unaff_RDI[0x29] = 0;
  unaff_RDI[0x2b] = 0;
  return;
}




// ============================================================
// @01771c60 — 538 bytes
// ============================================================

undefined8 FUN_01771c60(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  longlong lVar6;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  char *pcVar7;
  float fVar8;
  float local_64;
  float local_60;
  float local_5c;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (-1 < (int)unaff_ESI) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc);
    if (((*(char *)(unaff_RDI + 0x38) != '\0') || ((int)unaff_ESI < iVar1)) &&
       ((*(char *)(unaff_RDI + 0x38) == '\0' || ((int)unaff_ESI < iVar1 + -1)))) {
      local_48 = CONCAT44(local_48._4_4_,param_1);
      cVar3 = FUN_017715d0(DAT_02390124,&local_64);
      if (cVar3 == '\0') {
        return 0;
      }
      if (local_60 < (float)local_48) {
        return 0;
      }
      if ((float)local_48 < local_64) {
        return 0;
      }
      local_5c = (float)FUN_017708f0();
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)local_48);
      if (*(char *)(unaff_RDI + 0x38) == '\0') {
        return 1;
      }
      FUN_00d23340();
      lVar2 = local_58;
      local_40[0] = local_50[0];
      pcVar5 = local_40;
      if (local_50[0] != '\0') {
        pcVar5 = local_50;
      }
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        local_48 = lVar2;
      }
      else {
        local_48 = *(longlong *)(lVar2 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_00d23310();
      pcVar5 = local_38;
      pcVar7 = local_50;
      if (local_50[0] == '\0') {
        pcVar7 = pcVar5;
      }
      local_38[0] = local_50[0];
      *pcVar7 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((pthread_key_t)pcVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_01779ec0();
      FUN_01779ed0(local_5c + fVar8);
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] == '\0') {
        return 1;
      }
      if (lVar2 == 0) {
        return 1;
      }
      FUN_00d50b20();
      return 1;
    }
  }
  return 0;
}




// ============================================================
// @00b10260 — 538 bytes
// str: ""void *""
// str: ""_overloudEffectID""
// str: ""_overloudInstance""
// str: ""GNInt""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b10260(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0254f0b8;
  FUN_00b10520();
  FUN_00b10600();
  FUN_00b106e0();
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b107c0();
    FUN_00e87980();
  }
  FUN_00b10940();
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275bdc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275bd90 = FUN_00b10020();
        _DAT_0275bd88 = "_overloudEffectID";
        _DAT_0275bd98 = 0;
        _DAT_0275bda0 = 0x6901;
        _DAT_0275bda8 = "GNInt";
        _DAT_0275bdb0 = 0;
        uRam000000000275bdb8 = 0;
        _DAT_0275bdc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00b10020();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275be10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275bdd8 = FUN_00b10020();
        _DAT_0275bdd0 = "_overloudInstance";
        _DAT_0275bde0 = 0;
        _DAT_0275bde8 = 0x5e01;
        _DAT_0275bdf0 = "void *";
        _DAT_0275bdf8 = 0;
        uRam000000000275be00 = 0;
        _DAT_0275be08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @014ee5f0 — 534 bytes
// ============================================================

void FUN_014ee5f0(undefined8 param_1,char param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(*unaff_RSI + 0xc);
  *(undefined4 *)(unaff_RDI + 0x14) = *(undefined4 *)(*unaff_RSI + 0x14);
  *(undefined4 *)(unaff_RDI + 0x18) = *(undefined4 *)(*unaff_RSI + 0x18);
  *(undefined4 *)(unaff_RDI + 0x1c) = *(undefined4 *)(*unaff_RSI + 0x1c);
  *(undefined4 *)(unaff_RDI + 0x24) = *(undefined4 *)(*unaff_RSI + 0x24);
  *(undefined4 *)(unaff_RDI + 0x28) = *(undefined4 *)(*unaff_RSI + 0x28);
  *(undefined4 *)(unaff_RDI + 0x40) = *(undefined4 *)(*unaff_RSI + 0x40);
  *(undefined4 *)(unaff_RDI + 0x44) = *(undefined4 *)(*unaff_RSI + 0x44);
  *(undefined4 *)(unaff_RDI + 0x48) = *(undefined4 *)(*unaff_RSI + 0x48);
  *(undefined4 *)(unaff_RDI + 0x4c) = *(undefined4 *)(*unaff_RSI + 0x4c);
  lVar4 = *unaff_RSI;
  fVar1 = *(float *)(lVar4 + 0x20);
  if (NAN(fVar1)) {
    *(undefined4 *)(unaff_RDI + 0x20) = 0x7fc00000;
    fVar1 = *(float *)(lVar4 + 0x10);
  }
  else {
    *(float *)(unaff_RDI + 0x20) = fVar1;
    fVar1 = *(float *)(*unaff_RSI + 0x10);
  }
  if (NAN(fVar1)) {
    *(undefined4 *)(unaff_RDI + 0x10) = 0x7fc00000;
  }
  else {
    *(float *)(unaff_RDI + 0x10) = fVar1;
  }
  if ((param_2 != '\0') && (lVar4 = *(longlong *)(*unaff_RSI + 0x30), lVar4 != 0)) {
    uVar3 = *(undefined4 *)(lVar4 + 0xc);
    uVar2 = *(undefined4 *)(lVar4 + 0x10);
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025f1b78;
    *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
    (*DAT_025f1b90)();
    puVar6 = *(undefined8 **)(unaff_RDI + 0x30);
    if (puVar6 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x30) = puVar5;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar4 = *(longlong *)(unaff_RDI + 0x30);
    *(undefined4 *)(lVar4 + 0xc) = uVar3;
    *(undefined4 *)(lVar4 + 0x10) = uVar2;
  }
  if (*(longlong *)(*unaff_RSI + 0x38) != 0) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025f1ef0;
    *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
    (*DAT_025f1f08)();
    *(undefined4 *)((longlong)puVar6 + 0xc) =
         *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0xc);
    *(undefined4 *)((longlong)puVar6 + 0x14) =
         *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x14);
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x10);
    *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(*(longlong *)(*unaff_RSI + 0x38) + 0x18);
    if (*(undefined8 **)(unaff_RDI + 0x38) != puVar6) {
      FUN_00d64850();
      puVar5 = *(undefined8 **)(unaff_RDI + 0x38);
      if (puVar5 != puVar6) {
        FUN_00d50b00();
        *(undefined8 **)(unaff_RDI + 0x38) = puVar6;
        if (puVar5 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @017e6010 — 529 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x017e6094) */
/* WARNING: Removing unreachable block (ram,0x017e609d) */
/* WARNING: Removing unreachable block (ram,0x017e6143) */
/* WARNING: Removing unreachable block (ram,0x017e614c) */

void FUN_017e6010(pthread_key_t param_1)

{
  longlong *plVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0117ae00();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017dd940();
  FUN_017e5510();
  if (*(int *)(*(longlong *)(unaff_RDI + 0x50) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_50[0];
    pcVar5 = local_38;
    pcVar3 = local_50;
    if (local_50[0] == '\0') {
      pcVar3 = pcVar5;
    }
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (pthread_key_t)pcVar5;
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017dfee0();
    if ((local_38[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23310();
    pcVar5 = local_50;
    if (local_50[0] == '\0') {
      pcVar5 = local_38;
    }
    local_38[0] = local_50[0];
    *pcVar5 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_40 = 0;
    if ((local_38[0] == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    local_48 = local_58;
    local_40 = '\x01';
    FUN_017ddad0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01774ef0 — 528 bytes
// ============================================================

int FUN_01774ef0(float param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  char unaff_SIL;
  longlong *unaff_RDI;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 == 0) {
    iVar5 = (**(code **)(*unaff_RDI + 0x370))();
    iVar4 = (**(code **)(*unaff_RDI + 0x378))();
  }
  else {
    iVar5 = -1000;
    iVar4 = 1000;
  }
  fVar6 = (float)FUN_01774c90();
  fVar7 = (float)FUN_01774c90();
  while( true ) {
    while( true ) {
      while (iVar3 = iVar4, iVar4 = iVar5, fVar10 = fVar7, param_1 < fVar6) {
        fVar10 = (float)FUN_01774c90();
        fVar7 = fVar6;
        iVar5 = iVar4 * 2 - iVar3;
        fVar6 = fVar10;
      }
      if (param_1 <= fVar10) break;
      fVar7 = (float)FUN_01774c90();
      fVar6 = fVar10;
      iVar5 = iVar3;
      iVar4 = iVar3 * 2 - iVar4;
    }
    if (iVar3 <= iVar4 + 1) break;
    fVar8 = (fVar10 + fVar6) * DAT_0239011c;
    iVar2 = (iVar4 + iVar3) / 2;
    fVar9 = (float)FUN_01774c90();
    fVar7 = fVar9;
    iVar5 = iVar4;
    iVar4 = iVar2;
    if (fVar8 <= param_1) {
      fVar7 = fVar10;
      fVar6 = fVar9;
      iVar5 = iVar2;
      iVar4 = iVar3;
    }
  }
  iVar5 = iVar3;
  if (iVar3 == iVar4) {
    if (param_1 <= fVar6) {
      iVar4 = iVar3 + -1;
      fVar6 = (float)FUN_01774c90();
    }
    else {
      fVar10 = (float)FUN_01774c90();
      iVar5 = iVar3 + 1;
      iVar4 = iVar3;
    }
  }
  if (param_1 - fVar6 < fVar10 - param_1) {
    iVar5 = iVar4;
  }
  if ((unaff_SIL != '\0') && ((char)unaff_RDI[7] == '\0')) {
    iVar3 = (int)unaff_RDI[9] + iVar5;
    iVar4 = -(int)unaff_RDI[9];
    if (-1 < iVar3) {
      iVar4 = iVar5;
    }
    lVar1 = unaff_RDI[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar1 + 0xc);
    FUN_00d50b20();
    iVar5 = iVar4;
    if (iVar2 <= iVar3) {
      lVar1 = unaff_RDI[10];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      iVar5 = ~*(uint *)(unaff_RDI + 9) + *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
  }
  return iVar5;
}




// ============================================================
// @01774c90 — 523 bytes
// ============================================================

float FUN_01774c90(void)

{
  pthread_key_t pVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  int iVar6;
  pthread_key_t pVar7;
  uint uVar8;
  int unaff_ESI;
  longlong unaff_RDI;
  pthread_key_t pVar9;
  float fVar10;
  float fVar11;
  
  pVar7 = unaff_ESI + *(int *)(unaff_RDI + 0x48);
  if (*(char *)(unaff_RDI + 0x38) == '\0') {
    lVar4 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    iVar3 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
    pVar1 = iVar3 - 1;
    pVar9 = 0;
    if (-1 < (int)pVar7) {
      pVar9 = pVar7;
    }
    uVar8 = pVar9 - pVar1;
    if ((int)pVar9 < iVar3) {
      uVar8 = (int)pVar7 >> 0x1f & pVar7;
      pVar1 = pVar9;
    }
    fVar11 = *(float *)(unaff_RDI + 0x60);
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01779ec0();
    FUN_00d50b20();
    fVar11 = fVar11 + fVar10;
    if (uVar8 != 0) {
      fVar11 = fVar11 + (float)(int)uVar8 * DAT_023908e0;
    }
  }
  else {
    fVar10 = (float)FUN_017708f0();
    lVar4 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    iVar2 = *(int *)(lVar4 + 0xc);
    FUN_00d50b20();
    iVar3 = iVar2 + -1;
    fVar11 = *(float *)(unaff_RDI + 0x60);
    if ((int)pVar7 < 0) {
      iVar6 = 1 - (int)pVar7 / iVar3;
      pVar7 = pVar7 + iVar6 * iVar3;
      fVar11 = fVar11 - (float)iVar6 * fVar10;
    }
    for (; iVar2 <= (int)pVar7; pVar7 = (int)pVar7 % iVar3) {
      fVar11 = fVar11 + (float)((int)pVar7 / iVar3) * fVar10;
    }
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar10 = (float)FUN_01779ec0();
    FUN_00d50b20();
    fVar11 = fVar11 + fVar10;
  }
  return fVar11;
}




// ============================================================
// @011a7e10 — 518 bytes
// str: ""float""
// str: ""GNInt""
// str: ""MUScaleTuning""
// str: ""_cent""
// str: ""_westernStandardPitchIndexOffset""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a7e10(void)

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
  char *pcVar10;
  
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
  *unaff_RDI = &DAT_025ffd60;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b04d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b04a0 = FUN_011a7c20();
        _DAT_027b0498 = "_cent";
        _DAT_027b04a8 = 0;
        _DAT_027b04b0 = 0x6600;
        _DAT_027b04b8 = "float";
        _DAT_027b04c0 = 0;
        uRam00000000027b04c8 = 0;
        _DAT_027b04d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0520 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b04e8 = FUN_011a7c20();
        _DAT_027b04e0 = "_westernStandardPitchIndexOffset";
        _DAT_027b04f0 = 0;
        _DAT_027b04f8 = 0x6900;
        _DAT_027b0500 = "GNInt";
        _DAT_027b0508 = 0;
        uRam00000000027b0510 = 0;
        _DAT_027b0518 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a8050();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_intervals";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuning");
  }
  return;
}




// ============================================================
// @00d042e0 — 508 bytes
// str: ""%@ Hz""
// str: ""%@ kHz""
// str: ""%@ MHz""
// ============================================================

void FUN_00d042e0(float param_1)

{
  longlong unaff_RSI;
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar3 = *(float *)(unaff_RSI + 0x18);
  if (*(float *)(unaff_RSI + 0x18) <= param_1) {
    fVar3 = param_1;
  }
  fVar1 = *(float *)(unaff_RSI + 0x1c);
  if (fVar3 <= *(float *)(unaff_RSI + 0x1c)) {
    fVar1 = fVar3;
  }
  if (DAT_02393944 <= fVar1) {
    if (DAT_0240e358 <= fVar1) {
      uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))(fVar1 / DAT_0240e358);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))(fVar1 / DAT_02393944);
      local_40 = local_30;
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_30 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = '\x01';
      FUN_00d8cb40(uVar2,&local_50);
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x378))();
    local_40 = local_30;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_30 != 0) {
      uVar2 = FUN_00d50b00();
    }
    local_38 = '\x01';
    FUN_00d8cb40(uVar2,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @014ef680 — 500 bytes
// ============================================================

void FUN_014ef680(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  bool bVar7;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x108) + 0xc) != 0) {
    lVar2 = FUN_00e83010();
    lVar3 = *(longlong *)(unaff_RDI + 0x108);
    if (*(int *)(lVar3 + 0xc) < 1) {
      bVar7 = false;
      lVar5 = 0;
    }
    else {
      lVar4 = 0;
      lVar5 = 0;
      bVar7 = false;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar4 * 8);
        if (lVar5 == lVar3) {
          if ((!bVar7) && (lVar5 != 0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (lVar5 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
            lVar5 = lVar3;
          }
          else {
            bVar7 = true;
            lVar5 = lVar3;
          }
        }
        *(undefined4 *)(lVar2 + lVar4 * 4) = *(undefined4 *)(lVar5 + 0x24);
        lVar4 = lVar4 + 1;
        lVar3 = *(longlong *)(unaff_RDI + 0x108);
      } while (lVar4 < *(int *)(lVar3 + 0xc));
    }
    FUN_015c1480(param_1);
    lVar3 = *(longlong *)(unaff_RDI + 0x108);
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      lVar4 = lVar5;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
        if (lVar4 == lVar5) {
          lVar5 = lVar4;
          bVar1 = bVar7;
          if ((!bVar7) && (lVar4 != 0)) {
            FUN_00d50b00();
            bVar1 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar7) && (lVar4 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar7 = bVar1;
        *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(lVar2 + lVar6 * 4);
        lVar6 = lVar6 + 1;
        lVar3 = *(longlong *)(unaff_RDI + 0x108);
        lVar4 = lVar5;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
    }
    FUN_00e83070();
    if ((bVar7) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @017703a0 — 500 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01770490) */
/* WARNING: Removing unreachable block (ram,0x01770531) */
/* WARNING: Removing unreachable block (ram,0x0177053a) */
/* WARNING: Removing unreachable block (ram,0x01770559) */
/* WARNING: Removing unreachable block (ram,0x01770562) */
/* WARNING: Removing unreachable block (ram,0x0177044e) */
/* WARNING: Removing unreachable block (ram,0x0177045b) */
/* WARNING: Removing unreachable block (ram,0x0177049d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017703a0(pthread_key_t param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_78;
  char local_70;
  
  FUN_01770670();
  lVar1 = *unaff_RSI;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != local_78) {
    if (*unaff_RSI == 0) {
      if (unaff_RDI[0xd] != 0) {
        FUN_0176f3a0();
      }
    }
    else if (unaff_RDI[0xd] == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar7 = 0x25ff650;
      *puVar6 = &DAT_025ff650;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[10] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x51) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x59) = 0;
      (*DAT_025ff668)();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
      FUN_0176f3a0();
      FUN_00d50b20();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777d20();
    }
    uVar4 = _UNK_02411fbc;
    uVar3 = _UNK_02411fb8;
    uVar2 = _UNK_02411fb4;
    *(undefined4 *)((longlong)unaff_RDI + 0x74) = _DAT_02411fb0;
    *(undefined4 *)(unaff_RDI + 0xf) = uVar2;
    *(undefined4 *)((longlong)unaff_RDI + 0x7c) = uVar3;
    *(undefined4 *)(unaff_RDI + 0x10) = uVar4;
    (**(code **)(*unaff_RDI + 0x390))();
  }
  return;
}



