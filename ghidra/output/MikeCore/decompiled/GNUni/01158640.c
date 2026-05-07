// Function: FUN_01158640
// Address: 01158640
// Size: 2084 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "_isLoaded"
//   "_contentSize"
//   "MULoop"
//   "MULoopProject"
//   "MULoopUser"
//   "_loopLibrary"
//   "MULoopWorkflowValue"
//   "MUTagSetDescription"
//   "MULoopProducer"
//   "MULoopMusician"
//   "MULoopWorkflowAspect"
//   "MULoopWorkflowState"
//   "MUTagAttributeOptionType"
//   "MULoopCollection"
//   "MULoopAsset"
//   "MULoopCoverRow"
//   "MUTrackSet"
//   ... +1 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01158640(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02614858;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1750 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a1718 = FUN_01157d30();
        _DAT_027a1710 = "_isLoaded";
        _DAT_027a1720 = 0;
        _DAT_027a1728 = 0x6201;
        _DAT_027a1730 = "bool";
        _DAT_027a1738 = 0;
        uRam00000000027a1740 = 0;
        _DAT_027a1748 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011593f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSetDescription");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011594e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProducer");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011595d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011596c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusician");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011597b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopProject");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011598a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowAspect");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowState");
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopWorkflowValue");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOptionType");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollection");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159d50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopAsset");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159e40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopLibrary";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCoverRow");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01159f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_library";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackSet");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115a020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_0115a110();
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0115a1f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopUser");
  }
  FUN_0115a2e0();
  FUN_0115a3c0();
  FUN_0115a4a0();
  FUN_0115a580();
  FUN_0115a660();
  FUN_0115a740();
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_01157d30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a1e10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a1dd8 = FUN_01157d30();
        _DAT_027a1dd0 = "_contentSize";
        _DAT_027a1de0 = 0;
        _DAT_027a1de8 = 0x6c01;
        _DAT_027a1df0 = "SInt64";
        _DAT_027a1df8 = 0;
        uRam00000000027a1e00 = 0;
        _DAT_027a1e08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


