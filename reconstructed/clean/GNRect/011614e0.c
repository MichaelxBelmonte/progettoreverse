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
// === GNRect properties ===
//   GNRect          _focusRect
//                   _minFrameSize
//                   _isSettingFrame
//                   _unregisterToolTipLocalisationTargetAnyway


void FUN_011614e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_01150e50();
  *this_ptr = &g_02610df8;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161a10();
    FUN_00e87980();
  }
  FUN_01161b90();
  FUN_01161c70();
  *(void*)(this_ptr + 10) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161d50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01161ed0();
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  lVar2 = FUN_011611c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
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
  this_ptr[0xe] = 0;
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
  puVar4 = this_ptr + 0xf;
  this_ptr[0xf] = 0;
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
  this_ptr[0x10] = 0;
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
  this_ptr[0x11] = 0;
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
  this_ptr[0x12] = 0;
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

