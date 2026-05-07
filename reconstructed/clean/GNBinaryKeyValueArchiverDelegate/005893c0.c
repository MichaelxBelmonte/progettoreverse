// Function: FUN_005893c0
// Address: 005893c0
// Size: 1102 bytes
// Class: GNBinaryKeyValueArchiverDelegate
// String references:
//   "GNBinaryKeyValueArchiverDelegate"
//   "GNBinaryKeyValueUnarchiverDelegate"
//   "GNKeyValueUnarchiverDelegate"
//   "GNKeyValueArchiverDelegate"
//   "MDCopyAndPaste"

void FUN_005893c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_02570ec8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_02571cf8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[4] = &g_0258ce70;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[5] = &g_0258dd80;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024ced98;
  this_ptr[2] = &g_024cf130;
  this_ptr[3] = &g_024cf168;
  this_ptr[4] = &g_024cf1a8;
  this_ptr[5] = &g_024cf1e0;
  FUN_00589890();
  FUN_00589bc0();
  FUN_00589e80();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1483 == '\0') {
    FUN_0058a140();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e1483 == '\0') {
    FUN_0058a2d0();
    FUN_00e87980();
  }
  return;
}

