// Function: FUN_0005f200
// Address: 0005f200
// Size: 658 bytes
// Class: GNTask
// String references:
//   "GNTask"
// === GNTask properties ===
//                   _terminationStatus
//                   _executablePath
//                   _args
//                   _standardInPipe
//                   _standardOutPipe
//                   _standardErrorPipe
//                   _isMainThread
//                   _realtimeCycleDuration
//                   _renderUserInfo
//                   _poolIndex
//                   _previousThread
//                   _previousMXCSR
//                   _usesTyping
//                   _intCTypeID


void FUN_0005f200(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025818d0;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d649b == '\0') {
    FUN_0005f550();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d649b == '\0') {
    FUN_0005f6e0();
    FUN_00e87980();
  }
  FUN_0005f870();
  FUN_0005fb30();
  FUN_0005fdf0();
  FUN_000600b0();
  FUN_000603e0();
  FUN_00060710();
  return;
}

