// Function: FUN_0030b420
// Address: 0030b420
// Size: 565 bytes
// Class: MDAudioTrackItem
// String references:
//   "MDAudioTrackItem"
// === MDAudioTrackItem properties ===
//   MDAudioTrackItemType _trackItemType


void FUN_0030b420(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00309440();
  *this_ptr = &g_024c4bd8;
  this_ptr[2] = &g_024c4ff8;
  FUN_0030b6a0();
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d799b == '\0') {
    FUN_0030b9d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d799b == '\0') {
    FUN_0030bb60();
    FUN_00e87980();
  }
  return;
}

