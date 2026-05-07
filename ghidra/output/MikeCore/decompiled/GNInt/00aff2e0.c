// Function: FUN_00aff2e0
// Address: 00aff2e0
// Size: 11911 bytes
// Class: GNInt
// String references:
//   "bool"
//   "float"
//   "void *"
//   "_volume"
//   "_tempo"
//   "_gain"
//   "_libArchiveVersion"
//   "_level"
//   "_isStackActive"
//   "_eqBass"
//   "_eqMiddle"
//   "_eqTreble"
//   "_eqPresence"
//   "_isDelayActive"
//   "_delayMix"
//   "_delayFeedback"
//   "_delayBandwidth"
//   "_delayFrequency"
//   "_delayModulation"
//   "_delayDucking"
//   ... +50 more


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


