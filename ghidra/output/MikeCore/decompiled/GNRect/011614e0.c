// Function: FUN_011614e0
// Address: 011614e0
// Size: 941 bytes
// Class: GNRect
// String references:
//   "GNRect"
//   "MULibraryFile"
//   "MUTagSet"
//   "MULoopLibrary"
//   "MULoopMusician"
//   "_assets"
//   "MULoopAsset"
//   "MULoopCollectionAsset"
//   "_asset"
//   "_focusRect"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011614e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_02610df8;
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161a10();
    FUN_00e87980();
  }
  FUN_01161b90();
  FUN_01161c70();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161d50();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161ed0();
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027a36e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027a36b0 = FUN_011611c0();
        _DAT_027a36a8 = "_focusRect";
        _DAT_027a36b8 = 0;
        _DAT_027a36c0 = 0x5200;
        _DAT_027a36c8 = "GNRect";
        _DAT_027a36d0 = 0;
        uRam00000000027a36d8 = 0;
        _DAT_027a36e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagSet");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162140();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULibraryFile");
  }
  puVar4 = unaff_RDI + 0xf;
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162230();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_assets";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopMusician",param_3,param_4,puVar4);
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162320();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_asset";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCollectionAsset");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162410();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopAsset");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01162500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_assets";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  FUN_011625f0();
  return;
}


