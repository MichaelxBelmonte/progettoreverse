// Function: FUN_011b5fd0
// Address: 011b5fd0
// Size: 3405 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_attributes"
//   "float"
//   "_isVisible"
//   "GNInt"
//   "MUTagSetDescription"
//   "_isMandatory"
//   "_isSearchable"
//   "_isCopyable"
//   "_searchConfigIndex"
//   "_searchAllConfigIndex"
//   "_isExportable"
//   "_isUsableByAsset"
//   "_layerDerivesItFromMaster"
//   "_layerDerivesItFromAllLoops"
//   "_layerMaintainsItManually"
//   "_layerIgnoresIt"
//   "_rehashDerivesItFromMaster"
//   "_rehashMaintainsItManually"
//   ... +5 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b5fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02610a58;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b36e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b36b0 = FUN_011b5ca0();
        _DAT_027b36a8 = "_isMandatory";
        _DAT_027b36b8 = 0;
        _DAT_027b36c0 = 0x6200;
        _DAT_027b36c8 = "bool";
        _DAT_027b36d0 = 0;
        uRam00000000027b36d8 = 0;
        _DAT_027b36e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3d) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b36f8 = FUN_011b5ca0();
        _DAT_027b36f0 = "_isSearchable";
        _DAT_027b3700 = 0;
        _DAT_027b3708 = 0x6200;
        _DAT_027b3710 = "bool";
        _DAT_027b3718 = 0;
        uRam00000000027b3720 = 0;
        _DAT_027b3728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3778 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3740 = FUN_011b5ca0();
        _DAT_027b3738 = "_isCopyable";
        _DAT_027b3748 = 0;
        _DAT_027b3750 = 0x6200;
        _DAT_027b3758 = "bool";
        _DAT_027b3760 = 0;
        uRam00000000027b3768 = 0;
        _DAT_027b3770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b37c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3788 = FUN_011b5ca0();
        _DAT_027b3780 = "_isVisible";
        _DAT_027b3790 = 0;
        _DAT_027b3798 = 0x6200;
        _DAT_027b37a0 = "bool";
        _DAT_027b37a8 = 0;
        uRam00000000027b37b0 = 0;
        _DAT_027b37b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3808 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b37d0 = FUN_011b5ca0();
        _DAT_027b37c8 = "_searchConfigIndex";
        _DAT_027b37d8 = 0;
        _DAT_027b37e0 = 0x6900;
        _DAT_027b37e8 = "GNInt";
        _DAT_027b37f0 = 0;
        uRam00000000027b37f8 = 0;
        _DAT_027b3800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3818 = FUN_011b5ca0();
        _DAT_027b3810 = "_searchAllConfigIndex";
        _DAT_027b3820 = 0;
        _DAT_027b3828 = 0x6901;
        _DAT_027b3830 = "GNInt";
        _DAT_027b3838 = 0;
        uRam00000000027b3840 = 0;
        _DAT_027b3848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3860 = FUN_011b5ca0();
        _DAT_027b3858 = "_isExportable";
        _DAT_027b3868 = 0;
        _DAT_027b3870 = 0x6200;
        _DAT_027b3878 = "bool";
        _DAT_027b3880 = 0;
        uRam00000000027b3888 = 0;
        _DAT_027b3890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b38e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b38a8 = FUN_011b5ca0();
        _DAT_027b38a0 = "_isUsableByAsset";
        _DAT_027b38b0 = 0;
        _DAT_027b38b8 = 0x6200;
        _DAT_027b38c0 = "bool";
        _DAT_027b38c8 = 0;
        uRam00000000027b38d0 = 0;
        _DAT_027b38d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3928 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b38f0 = FUN_011b5ca0();
        _DAT_027b38e8 = "_layerDerivesItFromMaster";
        _DAT_027b38f8 = 0;
        _DAT_027b3900 = 0x6200;
        _DAT_027b3908 = "bool";
        _DAT_027b3910 = 0;
        uRam00000000027b3918 = 0;
        _DAT_027b3920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3938 = FUN_011b5ca0();
        _DAT_027b3930 = "_layerDerivesItFromAllLoops";
        _DAT_027b3940 = 0;
        _DAT_027b3948 = 0x6200;
        _DAT_027b3950 = "bool";
        _DAT_027b3958 = 0;
        uRam00000000027b3960 = 0;
        _DAT_027b3968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b39b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3980 = FUN_011b5ca0();
        _DAT_027b3978 = "_layerMaintainsItManually";
        _DAT_027b3988 = 0;
        _DAT_027b3990 = 0x6200;
        _DAT_027b3998 = "bool";
        _DAT_027b39a0 = 0;
        uRam00000000027b39a8 = 0;
        _DAT_027b39b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3a00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b39c8 = FUN_011b5ca0();
        _DAT_027b39c0 = "_layerIgnoresIt";
        _DAT_027b39d0 = 0;
        _DAT_027b39d8 = 0x6200;
        _DAT_027b39e0 = "bool";
        _DAT_027b39e8 = 0;
        uRam00000000027b39f0 = 0;
        _DAT_027b39f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4e) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3a48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3a10 = FUN_011b5ca0();
        _DAT_027b3a08 = "_rehashDerivesItFromMaster";
        _DAT_027b3a18 = 0;
        _DAT_027b3a20 = 0x6200;
        _DAT_027b3a28 = "bool";
        _DAT_027b3a30 = 0;
        uRam00000000027b3a38 = 0;
        _DAT_027b3a40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4f) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3a90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3a58 = FUN_011b5ca0();
        _DAT_027b3a50 = "_rehashMaintainsItManually";
        _DAT_027b3a60 = 0;
        _DAT_027b3a68 = 0x6200;
        _DAT_027b3a70 = "bool";
        _DAT_027b3a78 = 0;
        uRam00000000027b3a80 = 0;
        _DAT_027b3a88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3ad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3aa0 = FUN_011b5ca0();
        _DAT_027b3a98 = "_rehashIgnoresIt";
        _DAT_027b3aa8 = 0;
        _DAT_027b3ab0 = 0x6200;
        _DAT_027b3ab8 = "bool";
        _DAT_027b3ac0 = 0;
        uRam00000000027b3ac8 = 0;
        _DAT_027b3ad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3b20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3ae8 = FUN_011b5ca0();
        _DAT_027b3ae0 = "_similarity";
        _DAT_027b3af0 = 0;
        _DAT_027b3af8 = 0x6600;
        _DAT_027b3b00 = "float";
        _DAT_027b3b08 = 0;
        uRam00000000027b3b10 = 0;
        _DAT_027b3b18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b6f00();
    FUN_00e87980();
  }
  FUN_011b7090();
  FUN_011b7170();
  FUN_011b7250();
  FUN_011b7330();
  FUN_011b7410();
  puVar4 = unaff_RDI + 0x11;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b74f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption",param_3,param_4,puVar4);
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b75e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_attributes";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSetDescription");
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3e48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3e10 = FUN_011b5ca0();
        _DAT_027b3e08 = "_indexInDescription";
        _DAT_027b3e18 = 0;
        _DAT_027b3e20 = 0x6901;
        _DAT_027b3e28 = "GNInt";
        _DAT_027b3e30 = 0;
        uRam00000000027b3e38 = 0;
        _DAT_027b3e40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_011b5ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b3e90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b3e58 = FUN_011b5ca0();
        _DAT_027b3e50 = "_usageCount";
        _DAT_027b3e60 = 0;
        _DAT_027b3e68 = 0x6901;
        _DAT_027b3e70 = "GNInt";
        _DAT_027b3e78 = 0;
        uRam00000000027b3e80 = 0;
        _DAT_027b3e88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


