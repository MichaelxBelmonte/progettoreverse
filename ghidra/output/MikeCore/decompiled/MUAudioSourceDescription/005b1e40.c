// Function: FUN_005b1e40
// Address: 005b1e40
// Size: 5742 bytes
// Class: MUAudioSourceDescription
// String references:
//   "bool"
//   "GNUni"
//   "_documentControllers"
//   "MDNotificationObserver"
//   "GNList"
//   "GNPlugInHostDocument"
//   "GNData"
//   "GNOperationProgressObserver"
//   "GNDate"
//   "GNJob"
//   "GNJobCompletionController"
//   "MUTrack"
//   "MDDocument"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"
//   "MDTimeGridSetter"
//   "MUPerformanceRenderer"
//   "MUAudioSourceDescription"
//   "MDMetaDocumentController"
//   ... +25 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b1e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_005b1650();
  *unaff_RDI = &DAT_024ff828;
  unaff_RDI[9] = &DAT_025768d0;
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
  unaff_RDI[10] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0xb] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0250c388;
  unaff_RDI[9] = &DAT_0250c9e8;
  unaff_RDI[10] = &DAT_0250ca38;
  unaff_RDI[0xb] = &DAT_0250ca68;
  FUN_005b3d30();
  FUN_005b3e10();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPlaybackController");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b3fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocument");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b40d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentControllers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaDocumentController");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b41c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPlugInHostDocument");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b42b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  puVar4 = unaff_RDI + 0x13;
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b43a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderParameter");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDisplayPerformanceTimeMapper",param_3,param_4,puVar4);
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURelativeTimeProgressor");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDate");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02718b68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02718b30 = FUN_00082eb0();
        _DAT_02718b28 = "_isNewDocument";
        _DAT_02718b38 = 0;
        _DAT_02718b40 = 0x6200;
        _DAT_02718b48 = "bool";
        _DAT_02718b50 = 0;
        uRam0000000002718b58 = 0;
        _DAT_02718b60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005b4940();
  FUN_005b4a20();
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02718c40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02718c08 = FUN_00082eb0();
        _DAT_02718c00 = "_isDetectionInProgress";
        _DAT_02718c10 = 0;
        _DAT_02718c18 = 0x6200;
        _DAT_02718c20 = "bool";
        _DAT_02718c28 = 0;
        uRam0000000002718c30 = 0;
        _DAT_02718c38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b4fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x23] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b50a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJob");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNJobCompletionController");
  }
  unaff_RDI[0x26] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  unaff_RDI[0x27] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUJobCompletionLock");
  }
  unaff_RDI[0x28] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  unaff_RDI[0x29] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDRecordingAmplitudeAnalyzer");
  }
  unaff_RDI[0x2a] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDictionary");
  }
  *(undefined1 *)(unaff_RDI + 0x2b) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719078 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719040 = FUN_00082eb0();
        _DAT_02719038 = "_insertGroupDefinesPerformanceTempo";
        _DAT_02719048 = 0;
        _DAT_02719050 = 0x6200;
        _DAT_02719058 = "bool";
        _DAT_02719060 = 0;
        uRam0000000002719068 = 0;
        _DAT_02719070 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x159) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027190c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719088 = FUN_00082eb0();
        _DAT_02719080 = "_stretchInsertGroup";
        _DAT_02719090 = 0;
        _DAT_02719098 = 0x6200;
        _DAT_027190a0 = "bool";
        _DAT_027190a8 = 0;
        uRam00000000027190b0 = 0;
        _DAT_027190b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2c] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719108 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027190d0 = FUN_00082eb0();
        _DAT_027190c8 = "_stretchInsertStartTime";
        _DAT_027190d8 = 0;
        _DAT_027190e0 = 0x6400;
        _DAT_027190e8 = "double";
        _DAT_027190f0 = 0;
        uRam00000000027190f8 = 0;
        _DAT_02719100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719150 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719118 = FUN_00082eb0();
        _DAT_02719110 = "_createdFromSoundfile";
        _DAT_02719120 = 0;
        _DAT_02719128 = 0x6200;
        _DAT_02719130 = "bool";
        _DAT_02719138 = 0;
        uRam0000000002719140 = 0;
        _DAT_02719148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x169) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719198 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719160 = FUN_00082eb0();
        _DAT_02719158 = "_timelineWasModified";
        _DAT_02719168 = 0;
        _DAT_02719170 = 0x6200;
        _DAT_02719178 = "bool";
        _DAT_02719180 = 0;
        uRam0000000002719188 = 0;
        _DAT_02719190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027191e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027191a8 = FUN_00082eb0();
        _DAT_027191a0 = "_recordingsInProgress";
        _DAT_027191b0 = 0;
        _DAT_027191b8 = 0x6900;
        _DAT_027191c0 = "GNInt";
        _DAT_027191c8 = 0;
        uRam00000000027191d0 = 0;
        _DAT_027191d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2e) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719228 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027191f0 = FUN_00082eb0();
        _DAT_027191e8 = "_isComparing";
        _DAT_027191f8 = 0;
        _DAT_02719200 = 0x6200;
        _DAT_02719208 = "bool";
        _DAT_02719210 = 0;
        uRam0000000002719218 = 0;
        _DAT_02719220 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x171) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719270 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719238 = FUN_00082eb0();
        _DAT_02719230 = "_followsHostRegionSelection";
        _DAT_02719240 = 0;
        _DAT_02719248 = 0x6200;
        _DAT_02719250 = "bool";
        _DAT_02719258 = 0;
        uRam0000000002719260 = 0;
        _DAT_02719268 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x172) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027192b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719280 = FUN_00082eb0();
        _DAT_02719278 = "_zoomsToHostRegionSelection";
        _DAT_02719288 = 0;
        _DAT_02719290 = 0x6200;
        _DAT_02719298 = "bool";
        _DAT_027192a0 = 0;
        uRam00000000027192a8 = 0;
        _DAT_027192b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x174) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027192c8 = FUN_00082eb0();
        _DAT_027192c0 = "_shouldDisplayStructureProblemDialog";
        _DAT_027192d0 = 0;
        _DAT_027192d8 = 0x6900;
        _DAT_027192e0 = "GNInt";
        _DAT_027192e8 = 0;
        uRam00000000027192f0 = 0;
        _DAT_027192f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719348 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719310 = FUN_00082eb0();
        _DAT_02719308 = "_shouldDisplayUnknownArchiveDialog";
        _DAT_02719318 = 0;
        _DAT_02719320 = 0x6200;
        _DAT_02719328 = "bool";
        _DAT_02719330 = 0;
        uRam0000000002719338 = 0;
        _DAT_02719340 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x179) = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02719390 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02719358 = FUN_00082eb0();
        _DAT_02719350 = "_shouldDisplayImportedArchiveDialog";
        _DAT_02719360 = 0;
        _DAT_02719368 = 0x6200;
        _DAT_02719370 = "bool";
        _DAT_02719378 = 0;
        uRam0000000002719380 = 0;
        _DAT_02719388 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_005b5820();
  FUN_005b5900();
  FUN_005b59e0();
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDViewSettings");
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDEditorDescription");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_00082eb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b5d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  return;
}


