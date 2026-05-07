// Function: FUN_00da7a00
// Address: 00da7a00
// Size: 1056 bytes
// Class: GNForeignThreadPool
// String references:
//   "GNForeignThreadPool"
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void FUN_00da7a00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02579cc0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02782bcb == '\0') {
    FUN_00da7ea0();
    FUN_00e87980();
  }
  FUN_00da80f0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_02782bcb == '\0') {
    FUN_00da8420();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02782bcb == '\0') {
    FUN_00da85b0();
    FUN_00e87980();
  }
  FUN_00da8740();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02782bcb == '\0') {
    FUN_00da8a70();
    FUN_00e87980();
  }
  return;
}

