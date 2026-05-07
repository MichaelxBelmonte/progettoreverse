// Function: FUN_0059ba40
// Address: 0059ba40
// Size: 2643 bytes
// Class: EnergyClaimSystem
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElement"
//   "GNRect"
//   "GNDrawPath"
//   "GNPropertyObserver"
//   "MUEnvelopeDrawPathDataSource"
//   "_drawingBounds"
//   "_needsUpdateFrame"
//   "_pixelPerCent"
//   "_playingAnimation"
//   "_notOnTrack"
//   "_showsPitchCurve"
//   "_time"
//   "_displayPitchCenterTransition"
//   "_envelopeParamsLastUpdateTime"
//   "_feedsbackEnergyClaimFactor"
//   "_energyClaimFactor"
//   "double"
//   ... +0 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059ba40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0059c6c0();
  unaff_RDI[0x2d] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x2e] = &DAT_02505720;
  if (DAT_02733cb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027145d0 = "MUEnvelopeDrawPathDataSource";
      DAT_027145e0 = 0;
      _DAT_027145d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02620818;
  unaff_RDI[2] = &DAT_02621210;
  unaff_RDI[0x27] = &DAT_02621250;
  unaff_RDI[0x2d] = &DAT_02621280;
  unaff_RDI[0x2e] = &DAT_026212d0;
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0059dd90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  FUN_0059de80();
  FUN_0059df60();
  FUN_0059e040();
  FUN_0059e120();
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0059e200();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDrawPath");
  }
  unaff_RDI[0x35] = 0;
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02714730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027146f8 = FUN_0034cf20();
        _DAT_027146f0 = "_drawingBounds";
        _DAT_02714700 = 0;
        _DAT_02714708 = 0x5200;
        _DAT_02714710 = "GNRect";
        _DAT_02714718 = 0;
        uRam0000000002714720 = 0;
        _DAT_02714728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02733e00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02733dc8 = FUN_0034cf20();
        _DAT_02733dc0 = "_needsUpdateFrame";
        _DAT_02733dd0 = 0;
        _DAT_02733dd8 = 0x6200;
        _DAT_02733de0 = "bool";
        _DAT_02733de8 = 0;
        uRam0000000002733df0 = 0;
        _DAT_02733df8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1bc) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02714780 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02714748 = FUN_0034cf20();
        _DAT_02714740 = "_pixelPerCent";
        _DAT_02714750 = 0;
        _DAT_02714758 = 0x6600;
        _DAT_02714760 = "float";
        _DAT_02714768 = 0;
        uRam0000000002714770 = 0;
        _DAT_02714778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x38) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02733e50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02733e18 = FUN_0034cf20();
        _DAT_02733e10 = "_playingAnimation";
        _DAT_02733e20 = 0;
        _DAT_02733e28 = 0x6600;
        _DAT_02733e30 = "float";
        _DAT_02733e38 = 0;
        uRam0000000002733e40 = 0;
        _DAT_02733e48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1c4) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027147d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02714798 = FUN_0034cf20();
        _DAT_02714790 = "_notOnTrack";
        _DAT_027147a0 = 0;
        _DAT_027147a8 = 0x6200;
        _DAT_027147b0 = "bool";
        _DAT_027147b8 = 0;
        uRam00000000027147c0 = 0;
        _DAT_027147c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1c5) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02733ea0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02733e68 = FUN_0034cf20();
        _DAT_02733e60 = "_showsPitchCurve";
        _DAT_02733e70 = 0;
        _DAT_02733e78 = 0x6200;
        _DAT_02733e80 = "bool";
        _DAT_02733e88 = 0;
        uRam0000000002733e90 = 0;
        _DAT_02733e98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02714820 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027147e8 = FUN_0034cf20();
        _DAT_027147e0 = "_time";
        _DAT_027147f0 = 0;
        _DAT_027147f8 = 0x6400;
        _DAT_02714800 = "double";
        _DAT_02714808 = 0;
        uRam0000000002714810 = 0;
        _DAT_02714818 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02733ef0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02733eb8 = FUN_0034cf20();
        _DAT_02733eb0 = "_displayPitchCenterTransition";
        _DAT_02733ec0 = 0;
        _DAT_02733ec8 = 0x6600;
        _DAT_02733ed0 = "float";
        _DAT_02733ed8 = 0;
        uRam0000000002733ee0 = 0;
        _DAT_02733ee8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0059e2f0();
  FUN_0059e3d0();
  unaff_RDI[0x3d] = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027148c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02714888 = FUN_0034cf20();
        _DAT_02714880 = "_envelopeParamsLastUpdateTime";
        _DAT_02714890 = 0;
        _DAT_02714898 = 0x6400;
        _DAT_027148a0 = "double";
        _DAT_027148a8 = 0;
        uRam00000000027148b0 = 0;
        _DAT_027148b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02733f90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02733f58 = FUN_0034cf20();
        _DAT_02733f50 = "_feedsbackEnergyClaimFactor";
        _DAT_02733f60 = 0;
        _DAT_02733f68 = 0x6200;
        _DAT_02733f70 = "bool";
        _DAT_02733f78 = 0;
        uRam0000000002733f80 = 0;
        _DAT_02733f88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 500) = 0;
  lVar2 = FUN_0034cf20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02714910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027148d8 = FUN_0034cf20();
        _DAT_027148d0 = "_energyClaimFactor";
        _DAT_027148e0 = 0;
        _DAT_027148e8 = 0x6600;
        _DAT_027148f0 = "float";
        _DAT_027148f8 = 0;
        uRam0000000002714900 = 0;
        _DAT_02714908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


