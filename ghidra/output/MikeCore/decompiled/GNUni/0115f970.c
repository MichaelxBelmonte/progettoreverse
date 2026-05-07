// Function: FUN_0115f970
// Address: 0115f970
// Size: 769 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_collection"
//   "_source"
//   "MULoop"
//   "MULoopLibrary"
//   "_collections"
//   "_showInSearch"
//   "MULoopCollectionAsset"
//   "MULoopCollectionRelation"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0115f970(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_025bfd80;
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115fe40();
    FUN_00e87980();
  }
  FUN_0115ffb0();
  FUN_01160090();
  FUN_01160170();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01160340();
  FUN_01160420();
  FUN_01160500();
  FUN_011605e0();
  FUN_011606c0();
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a30e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a30a8 = FUN_0115f4e0();
        _DAT_027a30a0 = "_showInSearch";
        _DAT_027a30b0 = 0;
        _DAT_027a30b8 = 0x6200;
        _DAT_027a30c0 = "bool";
        _DAT_027a30c8 = 0;
        uRam00000000027a30d0 = 0;
        _DAT_027a30d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011607a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_collection";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollectionAsset");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160890();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_source";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollectionRelation");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_0115f4e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01160980();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_collections";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  return;
}


