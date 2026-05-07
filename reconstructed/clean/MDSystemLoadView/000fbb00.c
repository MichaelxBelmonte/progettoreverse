// Function: FUN_000fbb00
// Address: 000fbb00
// Size: 947 bytes
// Class: MDSystemLoadView
// String references:
//   "MDSystemLoadView"
// === MDSystemLoadView properties ===
//                   _tag
//                   _intValue
//                   _responder
//                   _isAutoenabling
//                   _isContinuous
//                   _toggleValueOnSendingAction
//                   _localizesTitle
//                   _floatValue
//                   _textAlignment


void FUN_000fbb00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000fabd0();
  *this_ptr = &g_024f2238;
  this_ptr[2] = &g_024f2d10;
  this_ptr[0x39] = &g_024f2d50;
  *(void*)(this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df79b == '\0') {
    FUN_000fbee0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df79b == '\0') {
    FUN_000fc050();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df79b == '\0') {
    FUN_000fc1c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df79b == '\0') {
    FUN_000fc330();
    FUN_00e87980();
  }
  return;
}

