// Function: FUN_01153590
// Address: 01153590
// Size: 5423 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "GNInt"
//   "MULibraryFile"
//   "MULoop"
//   "_isPlaceholder"
//   "_loopId"
//   "MUTagSet"
//   "MULoopRelation"
//   "_sourceLoop"
//   "_destinationLoop"
//   "MULoopProject"
//   "_loops"
//   "MULoopUser"
//   "MULoopProducerCommit"
//   "MULoopMusicianContract"
//   "_grooveReferenceIsNone"
//   "_prelistenAccompanyIsNone"
//   "_prelistenDrumsIsNone"
//   ... +22 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01153590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_026043c0;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0430 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a03f8 = FUN_01152ba0();
        _DAT_027a03f0 = "_isPlaceholder";
        _DAT_027a0400 = 0;
        _DAT_027a0408 = 0x6201;
        _DAT_027a0410 = "bool";
        _DAT_027a0418 = 0;
        uRam00000000027a0420 = 0;
        _DAT_027a0428 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0478 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0440 = FUN_01152ba0();
        _DAT_027a0438 = "_loopId";
        _DAT_027a0448 = 0;
        _DAT_027a0450 = 0x6c00;
        _DAT_027a0458 = "SInt64";
        _DAT_027a0460 = 0;
        uRam00000000027a0468 = 0;
        _DAT_027a0470 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01155230();
  FUN_01155310();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011553f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSet");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011554e0();
    FUN_00e87980();
  }
  puVar4 = unaff_RDI + 0xd;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULibraryFile",param_3,param_4,puVar4);
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_sourceLoop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopRelation");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155920();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_destinationLoop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopRelation");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01155fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011560a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducerCommit");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156280();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusicianContract");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  *(undefined1 *)(unaff_RDI + 0x1d) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0b00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0ac8 = FUN_01152ba0();
        _DAT_027a0ac0 = "_grooveReferenceIsNone";
        _DAT_027a0ad0 = 0;
        _DAT_027a0ad8 = 0x6200;
        _DAT_027a0ae0 = "bool";
        _DAT_027a0ae8 = 0;
        uRam00000000027a0af0 = 0;
        _DAT_027a0af8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe9) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0b48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0b10 = FUN_01152ba0();
        _DAT_027a0b08 = "_prelistenAccompanyIsNone";
        _DAT_027a0b18 = 0;
        _DAT_027a0b20 = 0x6200;
        _DAT_027a0b28 = "bool";
        _DAT_027a0b30 = 0;
        uRam00000000027a0b38 = 0;
        _DAT_027a0b40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xea) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0b90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0b58 = FUN_01152ba0();
        _DAT_027a0b50 = "_prelistenDrumsIsNone";
        _DAT_027a0b60 = 0;
        _DAT_027a0b68 = 0x6200;
        _DAT_027a0b70 = "bool";
        _DAT_027a0b78 = 0;
        uRam00000000027a0b80 = 0;
        _DAT_027a0b88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xeb) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0bd8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0ba0 = FUN_01152ba0();
        _DAT_027a0b98 = "_isTestLoop";
        _DAT_027a0ba8 = 0;
        _DAT_027a0bb0 = 0x6200;
        _DAT_027a0bb8 = "bool";
        _DAT_027a0bc0 = 0;
        uRam00000000027a0bc8 = 0;
        _DAT_027a0bd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xec) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0c20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0be8 = FUN_01152ba0();
        _DAT_027a0be0 = "_isCreated";
        _DAT_027a0bf0 = 0;
        _DAT_027a0bf8 = 0x6201;
        _DAT_027a0c00 = "bool";
        _DAT_027a0c08 = 0;
        uRam00000000027a0c10 = 0;
        _DAT_027a0c18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156640();
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011567b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011568a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loop";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  *(undefined4 *)(unaff_RDI + 0x23) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0e58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0e20 = FUN_01152ba0();
        _DAT_027a0e18 = "_loopComponentTypeMask";
        _DAT_027a0e28 = 0;
        _DAT_027a0e30 = 0x6901;
        _DAT_027a0e38 = "MULoopComponentTypeMask";
        _DAT_027a0e40 = 0;
        uRam00000000027a0e48 = 0;
        _DAT_027a0e50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x11c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156b70();
    FUN_00e87980();
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156cf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layerLoops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156de0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layers";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  *(undefined4 *)(unaff_RDI + 0x26) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a0ff0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a0fb8 = FUN_01152ba0();
        _DAT_027a0fb0 = "_loopSetOrderIndex";
        _DAT_027a0fc0 = 0;
        _DAT_027a0fc8 = 0x6900;
        _DAT_027a0fd0 = "GNInt";
        _DAT_027a0fd8 = 0;
        uRam00000000027a0fe0 = 0;
        _DAT_027a0fe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x27] = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01156ed0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loops";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopSet");
  }
  FUN_01156fc0();
  FUN_011570a0();
  *(undefined4 *)(unaff_RDI + 0x2a) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01157180();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x154) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a11c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a1190 = FUN_01152ba0();
        _DAT_027a1188 = "_automationMask";
        _DAT_027a1198 = 0;
        _DAT_027a11a0 = 0x6900;
        _DAT_027a11a8 = "MULoopAutomationTypeMask";
        _DAT_027a11b0 = 0;
        uRam00000000027a11b8 = 0;
        _DAT_027a11c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1210 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a11d8 = FUN_01152ba0();
        _DAT_027a11d0 = "_trackTypeMask";
        _DAT_027a11e0 = 0;
        _DAT_027a11e8 = 0x6900;
        _DAT_027a11f0 = "MULoopTrackTypeMask";
        _DAT_027a11f8 = 0;
        uRam00000000027a1200 = 0;
        _DAT_027a1208 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x15c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1258 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a1220 = FUN_01152ba0();
        _DAT_027a1218 = "_playGrooveReference";
        _DAT_027a1228 = 0;
        _DAT_027a1230 = 0x6201;
        _DAT_027a1238 = "bool";
        _DAT_027a1240 = 0;
        uRam00000000027a1248 = 0;
        _DAT_027a1250 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x15d) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a12a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a1268 = FUN_01152ba0();
        _DAT_027a1260 = "_mpdLocked";
        _DAT_027a1270 = 0;
        _DAT_027a1278 = 0x6200;
        _DAT_027a1280 = "bool";
        _DAT_027a1288 = 0;
        uRam00000000027a1290 = 0;
        _DAT_027a1298 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x15e) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a12e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a12b0 = FUN_01152ba0();
        _DAT_027a12a8 = "_tagsLocked";
        _DAT_027a12b8 = 0;
        _DAT_027a12c0 = 0x6200;
        _DAT_027a12c8 = "bool";
        _DAT_027a12d0 = 0;
        uRam00000000027a12d8 = 0;
        _DAT_027a12e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1330 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a12f8 = FUN_01152ba0();
        _DAT_027a12f0 = "_recognizableEffectTypeMask";
        _DAT_027a1300 = 0;
        _DAT_027a1308 = 0x6900;
        _DAT_027a1310 = "GNAudioEffectTypeMask";
        _DAT_027a1318 = 0;
        uRam00000000027a1320 = 0;
        _DAT_027a1328 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011572f0();
  FUN_011573d0();
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_01152ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1408 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a13d0 = FUN_01152ba0();
        _DAT_027a13c8 = "_mpdLockedOnServerCache";
        _DAT_027a13d8 = 0;
        _DAT_027a13e0 = 0x6901;
        _DAT_027a13e8 = "GNInt";
        _DAT_027a13f0 = 0;
        uRam00000000027a13f8 = 0;
        _DAT_027a1400 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


