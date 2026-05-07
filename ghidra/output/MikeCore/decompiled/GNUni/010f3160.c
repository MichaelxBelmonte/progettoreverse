// Function: FUN_010f3160
// Address: 010f3160
// Size: 2496 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "MUTimeProgressor"
//   "MURenderParameter"
//   "MURenderer"
//   "_nextPerformanceTime"
//   "MUAudioRingBuffer"
//   "_hostRenderSampleIndex"
//   "double"
//   "_renderSampleIndex"
//   "_performanceTime"
//   "_tempoFactor"
//   "_definesPerformanceTime"
//   "_definesRenderSampleIndex"
//   "_definesHostRenderSampleIndex"
//   "_definesTimeProgressor"
//   "_definesRenderParameter"
//   "_definesProcessingOffline"
//   "_audioInputBufferOffset"
//   ... +0 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010f3160(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_025d4e88;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278ded0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278de98 = FUN_010f2dd0();
        _DAT_0278de90 = "_renderSampleIndex";
        _DAT_0278dea0 = 0;
        _DAT_0278dea8 = 0x6c00;
        _DAT_0278deb0 = "SInt64";
        _DAT_0278deb8 = 0;
        uRam000000000278dec0 = 0;
        _DAT_0278dec8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278df18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278dee0 = FUN_010f2dd0();
        _DAT_0278ded8 = "_hostRenderSampleIndex";
        _DAT_0278dee8 = 0;
        _DAT_0278def0 = 0x6c00;
        _DAT_0278def8 = "SInt64";
        _DAT_0278df00 = 0;
        uRam000000000278df08 = 0;
        _DAT_0278df10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3c80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278dfa8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278df70 = FUN_010f2dd0();
        _DAT_0278df68 = "_performanceTime";
        _DAT_0278df78 = 0;
        _DAT_0278df80 = 0x6400;
        _DAT_0278df88 = "double";
        _DAT_0278df90 = 0;
        uRam000000000278df98 = 0;
        _DAT_0278dfa0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278dff0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278dfb8 = FUN_010f2dd0();
        _DAT_0278dfb0 = "_nextPerformanceTime";
        _DAT_0278dfc0 = 0;
        _DAT_0278dfc8 = 0x6400;
        _DAT_0278dfd0 = "double";
        _DAT_0278dfd8 = 0;
        uRam000000000278dfe0 = 0;
        _DAT_0278dfe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e038 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e000 = FUN_010f2dd0();
        _DAT_0278dff8 = "_tempoFactor";
        _DAT_0278e008 = 0;
        _DAT_0278e010 = 0x6400;
        _DAT_0278e018 = "double";
        _DAT_0278e020 = 0;
        uRam000000000278e028 = 0;
        _DAT_0278e030 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3d70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeProgressor");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  *(undefined1 *)(unaff_RDI + 0x1a) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e110 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e0d8 = FUN_010f2dd0();
        _DAT_0278e0d0 = "_definesPerformanceTime";
        _DAT_0278e0e0 = 0;
        _DAT_0278e0e8 = 0x6200;
        _DAT_0278e0f0 = "bool";
        _DAT_0278e0f8 = 0;
        uRam000000000278e100 = 0;
        _DAT_0278e108 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd1) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e158 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e120 = FUN_010f2dd0();
        _DAT_0278e118 = "_definesRenderSampleIndex";
        _DAT_0278e128 = 0;
        _DAT_0278e130 = 0x6200;
        _DAT_0278e138 = "bool";
        _DAT_0278e140 = 0;
        uRam000000000278e148 = 0;
        _DAT_0278e150 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd2) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e1a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e168 = FUN_010f2dd0();
        _DAT_0278e160 = "_definesHostRenderSampleIndex";
        _DAT_0278e170 = 0;
        _DAT_0278e178 = 0x6200;
        _DAT_0278e180 = "bool";
        _DAT_0278e188 = 0;
        uRam000000000278e190 = 0;
        _DAT_0278e198 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd3) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e1e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e1b0 = FUN_010f2dd0();
        _DAT_0278e1a8 = "_definesTimeProgressor";
        _DAT_0278e1b8 = 0;
        _DAT_0278e1c0 = 0x6200;
        _DAT_0278e1c8 = "bool";
        _DAT_0278e1d0 = 0;
        uRam000000000278e1d8 = 0;
        _DAT_0278e1e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd4) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e230 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e1f8 = FUN_010f2dd0();
        _DAT_0278e1f0 = "_definesRenderParameter";
        _DAT_0278e200 = 0;
        _DAT_0278e208 = 0x6200;
        _DAT_0278e210 = "bool";
        _DAT_0278e218 = 0;
        uRam000000000278e220 = 0;
        _DAT_0278e228 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xd5) = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e278 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e240 = FUN_010f2dd0();
        _DAT_0278e238 = "_definesProcessingOffline";
        _DAT_0278e248 = 0;
        _DAT_0278e250 = 0x6200;
        _DAT_0278e258 = "bool";
        _DAT_0278e260 = 0;
        uRam000000000278e268 = 0;
        _DAT_0278e270 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_010f3f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_010f2dd0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0278e308 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0278e2d0 = FUN_010f2dd0();
        _DAT_0278e2c8 = "_audioInputBufferOffset";
        _DAT_0278e2d8 = 0;
        _DAT_0278e2e0 = 0x6c00;
        _DAT_0278e2e8 = "SInt64";
        _DAT_0278e2f0 = 0;
        uRam000000000278e2f8 = 0;
        _DAT_0278e300 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


