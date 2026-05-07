// Function: FUN_00af64b0
// Address: 00af64b0
// Size: 1994 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNTimer"
//   "GNSoundFile"
//   "_channelCount"
//   "_bytesPerSample"
//   "_autostart"
//   "_bufferSize"
//   "_recordingBufferIndex"
//   "_recordedSampleFrames"
//   "_recordingBufferCompleted"
//   "_completedSampleFrame"
//   "_onHold"
//   "GNInt"
//   "_isRecording"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af64b0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_0252eeb0;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00af6d80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSoundFile");
  }
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755748 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755710 = FUN_00af6260();
        _DAT_02755708 = "_isRecording";
        _DAT_02755718 = 0;
        _DAT_02755720 = 0x6200;
        _DAT_02755728 = "bool";
        _DAT_02755730 = 0;
        uRam0000000002755738 = 0;
        _DAT_02755740 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x99) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755790 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755758 = FUN_00af6260();
        _DAT_02755750 = "_autostart";
        _DAT_02755760 = 0;
        _DAT_02755768 = 0x6200;
        _DAT_02755770 = "bool";
        _DAT_02755778 = 0;
        uRam0000000002755780 = 0;
        _DAT_02755788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027557d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027557a0 = FUN_00af6260();
        _DAT_02755798 = "_bufferSize";
        _DAT_027557a8 = 0;
        _DAT_027557b0 = 0x6900;
        _DAT_027557b8 = "GNInt";
        _DAT_027557c0 = 0;
        uRam00000000027557c8 = 0;
        _DAT_027557d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = *(undefined8 *)(unaff_RSI + 0xa0);
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755820 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027557e8 = FUN_00af6260();
        _DAT_027557e0 = "_recordingBufferIndex";
        _DAT_027557f0 = 0;
        _DAT_027557f8 = 0x6900;
        _DAT_02755800 = "GNInt";
        _DAT_02755808 = 0;
        uRam0000000002755810 = 0;
        _DAT_02755818 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755868 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755830 = FUN_00af6260();
        _DAT_02755828 = "_recordedSampleFrames";
        _DAT_02755838 = 0;
        _DAT_02755840 = 0x6900;
        _DAT_02755848 = "GNInt";
        _DAT_02755850 = 0;
        uRam0000000002755858 = 0;
        _DAT_02755860 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027558b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755878 = FUN_00af6260();
        _DAT_02755870 = "_recordingBufferCompleted";
        _DAT_02755880 = 0;
        _DAT_02755888 = 0x6900;
        _DAT_02755890 = "GNInt";
        _DAT_02755898 = 0;
        uRam00000000027558a0 = 0;
        _DAT_027558a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027558f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027558c0 = FUN_00af6260();
        _DAT_027558b8 = "_bytesPerSample";
        _DAT_027558c8 = 0;
        _DAT_027558d0 = 0x6900;
        _DAT_027558d8 = "GNInt";
        _DAT_027558e0 = 0;
        uRam00000000027558e8 = 0;
        _DAT_027558f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755940 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755908 = FUN_00af6260();
        _DAT_02755900 = "_channelCount";
        _DAT_02755910 = 0;
        _DAT_02755918 = 0x6900;
        _DAT_02755920 = "GNInt";
        _DAT_02755928 = 0;
        uRam0000000002755930 = 0;
        _DAT_02755938 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755988 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02755950 = FUN_00af6260();
        _DAT_02755948 = "_completedSampleFrame";
        _DAT_02755958 = 0;
        _DAT_02755960 = 0x6900;
        _DAT_02755968 = "GNInt";
        _DAT_02755970 = 0;
        uRam0000000002755978 = 0;
        _DAT_02755980 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00af6e70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00af6260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02755a18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027559e0 = FUN_00af6260();
        _DAT_027559d8 = "_onHold";
        _DAT_027559e8 = 0;
        _DAT_027559f0 = 0x6200;
        _DAT_027559f8 = "bool";
        _DAT_02755a00 = 0;
        uRam0000000002755a08 = 0;
        _DAT_02755a10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


