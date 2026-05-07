// Function: FUN_005e4870
// Address: 005e4870
// Size: 934 bytes
// Class: MDWorkspaceView
// String references:
//   "bool"
//   "_size"
//   "MDWorkspaceView"
//   "_isVertical"
//   "GNCoord"
//   "_allowsChainedResize"
//   "_paddingLineSize"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_005e4870(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000a5ee0();
  *this_ptr = &g_02501bf8;
  this_ptr[2] = &g_025025f0;
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4cd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  this_ptr[0x33] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  *(void*)(this_ptr + 0x34) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a4) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x35) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

