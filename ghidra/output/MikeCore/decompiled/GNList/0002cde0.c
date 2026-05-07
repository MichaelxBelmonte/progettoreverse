// Function: FUN_0002cde0
// Address: 0002cde0
// Size: 2127 bytes
// Class: GNList
// String references:
//   "bool"
//   "GNList"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNTypedStream"
//   "GNClassDescription"
//   "GNOperationProgressObserver"
//   "_archiveVersion"
//   "_awakesObjectsAfterDecoding"
//   "_isCancelled"
//   "GNBitfield"
//   "_currentObjectGraphIdx"
//   "GNBinaryKeyValueUnarchiverObjectInfo"
//   "GNBinaryKeyValueUnarchiverDelegate"
//   "GNOperationCancelDelegate"
//   "_predictedDecodedValuesIndex"
//   "GNString"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002cde0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_0258e140;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cf020 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cefe8 = FUN_0002c940();
        _DAT_026cefe0 = "_archiveVersion";
        _DAT_026ceff0 = 0;
        _DAT_026ceff8 = 0x6900;
        _DAT_026cf000 = "GNInt";
        _DAT_026cf008 = 0;
        uRam00000000026cf010 = 0;
        _DAT_026cf018 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cf068 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cf030 = FUN_0002c940();
        _DAT_026cf028 = "_awakesObjectsAfterDecoding";
        _DAT_026cf038 = 0;
        _DAT_026cf040 = 0x6200;
        _DAT_026cf048 = "bool";
        _DAT_026cf050 = 0;
        uRam00000000026cf058 = 0;
        _DAT_026cf060 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2d) = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cf0b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cf078 = FUN_0002c940();
        _DAT_026cf070 = "_isCancelled";
        _DAT_026cf080 = 0;
        _DAT_026cf088 = 0x6200;
        _DAT_026cf090 = "bool";
        _DAT_026cf098 = 0;
        uRam00000000026cf0a0 = 0;
        _DAT_026cf0a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar4 = unaff_RDI + 6;
  unaff_RDI[6] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002d980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream",param_3,param_4,puVar4);
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002da70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002db60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002dc50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBitfield");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002dd40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002de30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002df20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  FUN_0002e010();
  FUN_0002e0f0();
  FUN_0002e1d0();
  FUN_0002e2b0();
  *(undefined4 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cf410 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cf3d8 = FUN_0002c940();
        _DAT_026cf3d0 = "_currentObjectGraphIdx";
        _DAT_026cf3e0 = 0;
        _DAT_026cf3e8 = 0x6900;
        _DAT_026cf3f0 = "GNInt";
        _DAT_026cf3f8 = 0;
        uRam00000000026cf400 = 0;
        _DAT_026cf408 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0002e390();
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e470();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e560();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e650();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryKeyValueUnarchiverObjectInfo");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryKeyValueUnarchiverDelegate");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOperationProgressObserver");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002e9c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOperationCancelDelegate");
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_0002c940();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cf690 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cf658 = FUN_0002c940();
        _DAT_026cf650 = "_predictedDecodedValuesIndex";
        _DAT_026cf660 = 0;
        _DAT_026cf668 = 0x6900;
        _DAT_026cf670 = "GNInt";
        _DAT_026cf678 = 0;
        uRam00000000026cf680 = 0;
        _DAT_026cf688 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


