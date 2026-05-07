// Function: FUN_010ff5d0
// Address: 010ff5d0
// Size: 3187 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "float"
//   "GNFraction"
//   "MUFunction"
//   "MUAudioSourceComponent"
//   "_sampleCount"
//   "MUAudioSourceDescription"
//   "_energyClaimFactor"
//   "MUAudioSourceItem"
//   "MUPulseAssignmentTarget"
//   "_audioSourceItem"
//   "GNInt"
//   "_startSampleIndex"
//   "_signalEndSampleOffset"
//   "_signalStartSampleOffset"
//   "MUDecomposedAudioSignal"
//   "_owners"
//   "_pitchCenter"
//   ... +9 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010ff5d0(void)

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
  *unaff_RDI = &DAT_025c7fc8;
  unaff_RDI[7] = &DAT_025eefe0;
  if (DAT_0272fca8 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025e6748;
  unaff_RDI[7] = &DAT_025e6ba8;
  unaff_RDI[8] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790418 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027903e0 = FUN_007ef2d0();
        _DAT_027903d8 = "_startSampleIndex";
        _DAT_027903e8 = 0;
        _DAT_027903f0 = 0x6c00;
        _DAT_027903f8 = "SInt64";
        _DAT_02790400 = 0;
        uRam0000000002790408 = 0;
        _DAT_02790410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790460 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790428 = FUN_007ef2d0();
        _DAT_02790420 = "_sampleCount";
        _DAT_02790430 = 0;
        _DAT_02790438 = 0x6c00;
        _DAT_02790440 = "SInt64";
        _DAT_02790448 = 0;
        uRam0000000002790450 = 0;
        _DAT_02790458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027904a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790470 = FUN_007ef2d0();
        _DAT_02790468 = "_signalEndSampleOffset";
        _DAT_02790478 = 0;
        _DAT_02790480 = 0x6c00;
        _DAT_02790488 = "SInt64";
        _DAT_02790490 = 0;
        uRam0000000002790498 = 0;
        _DAT_027904a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027904f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027904b8 = FUN_007ef2d0();
        _DAT_027904b0 = "_signalStartSampleOffset";
        _DAT_027904c0 = 0;
        _DAT_027904c8 = 0x6c00;
        _DAT_027904d0 = "SInt64";
        _DAT_027904d8 = 0;
        uRam00000000027904e0 = 0;
        _DAT_027904e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_owners";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790580 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790548 = FUN_007ef2d0();
        _DAT_02790540 = "_pitchCenter";
        _DAT_02790550 = 0;
        _DAT_02790558 = 0x6600;
        _DAT_02790560 = "float";
        _DAT_02790568 = 0;
        uRam0000000002790570 = 0;
        _DAT_02790578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027905c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790590 = FUN_007ef2d0();
        _DAT_02790588 = "_energyClaimFactor";
        _DAT_02790598 = 0;
        _DAT_027905a0 = 0x6600;
        _DAT_027905a8 = "float";
        _DAT_027905b0 = 0;
        uRam00000000027905b8 = 0;
        _DAT_027905c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790658 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790620 = FUN_007ef2d0();
        _DAT_02790618 = "_detectionQuality";
        _DAT_02790628 = 0;
        _DAT_02790630 = 0x6600;
        _DAT_02790638 = "float";
        _DAT_02790640 = 0;
        uRam0000000002790648 = 0;
        _DAT_02790650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x94) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027906a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790668 = FUN_007ef2d0();
        _DAT_02790660 = "_idealStartPulse";
        _DAT_02790670 = 0;
        _DAT_02790678 = 0x7101;
        _DAT_02790680 = "GNFraction";
        _DAT_02790688 = 0;
        uRam0000000002790690 = 0;
        _DAT_02790698 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x9c) = 0x100000000;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027906e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027906b0 = FUN_007ef2d0();
        _DAT_027906a8 = "_idealEndPulse";
        _DAT_027906b8 = 0;
        _DAT_027906c0 = 0x7101;
        _DAT_027906c8 = "GNFraction";
        _DAT_027906d0 = 0;
        uRam00000000027906d8 = 0;
        _DAT_027906e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790730 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027906f8 = FUN_007ef2d0();
        _DAT_027906f0 = "_isPreferredDivisionTriplets";
        _DAT_02790700 = 0;
        _DAT_02790708 = 0x6200;
        _DAT_02790710 = "bool";
        _DAT_02790718 = 0;
        uRam0000000002790720 = 0;
        _DAT_02790728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790778 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790740 = FUN_007ef2d0();
        _DAT_02790738 = "_preferredSubPulsesIndex";
        _DAT_02790748 = 0;
        _DAT_02790750 = 0x6900;
        _DAT_02790758 = "GNInt";
        _DAT_02790760 = 0;
        uRam0000000002790768 = 0;
        _DAT_02790770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027907c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02790788 = FUN_007ef2d0();
        _DAT_02790780 = "_isResidual";
        _DAT_02790790 = 0;
        _DAT_02790798 = 0x6200;
        _DAT_027907a0 = "bool";
        _DAT_027907a8 = 0;
        uRam00000000027907b0 = 0;
        _DAT_027907b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xad) = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02790808 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027907d0 = FUN_007ef2d0();
        _DAT_027907c8 = "_rightSeparationTypeIsSetExplicitly";
        _DAT_027907d8 = 0;
        _DAT_027907e0 = 0x6200;
        _DAT_027907e8 = "bool";
        _DAT_027907f0 = 0;
        uRam00000000027907f8 = 0;
        _DAT_02790800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rightAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  unaff_RDI[0x17] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011009f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_leftAdjacentItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  unaff_RDI[0x18] = 0;
  lVar9 = FUN_007ef2d0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01100ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceItem";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  return;
}


