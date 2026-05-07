// Function: FUN_0084c490
// Address: 0084c490
// Size: 553 bytes
// Class: MUPreviewController
// String references:
//   "MUPreviewController"

void FUN_0084c490(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02641fc0;
  FUN_0084c760();
  FUN_0084ca50();
  FUN_0084cd40();
  FUN_0084d030();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_02703c23 == '\0') {
    FUN_0084d390();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_02703c23 == '\0') {
    FUN_0084d500();
    FUN_00e87980();
  }
  return;
}

