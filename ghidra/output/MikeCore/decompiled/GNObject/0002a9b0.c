// Function: FUN_0002a9b0
// Address: 0002a9b0
// Size: 1586 bytes
// Class: GNObject
// String references:
//   "bool"
//   "GNObject"
//   "GNHashedDictionary"
//   "GNTypedStream"
//   "GNClassDescription"
//   "_usedCompressorIndex"
//   "_gatherOnly"
//   "GNBinaryArchiveTypeInfoContainer"
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNOperationProgressObserver"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a9b0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_0258cea8;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ce860 = FUN_0002a740();
        _DAT_026ce858 = "_usedCompressorIndex";
        _DAT_026ce868 = 0;
        _DAT_026ce870 = 0x6900;
        _DAT_026ce878 = "GNInt";
        _DAT_026ce880 = 0;
        uRam00000000026ce888 = 0;
        _DAT_026ce890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce8e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ce8a8 = FUN_0002a740();
        _DAT_026ce8a0 = "_gatherOnly";
        _DAT_026ce8b0 = 0;
        _DAT_026ce8b8 = 0x6200;
        _DAT_026ce8c0 = "bool";
        _DAT_026ce8c8 = 0;
        uRam00000000026ce8d0 = 0;
        _DAT_026ce8d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b730();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b810();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b900();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b9f0();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bbc0();
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bd90();
  FUN_0002be70();
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bf50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  FUN_0002c040();
  FUN_0002c120();
  FUN_0002c200();
  FUN_0002c2e0();
  FUN_0002c3c0();
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryKeyValueArchiverDelegate");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c5e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOperationProgressObserver");
  }
  return;
}


