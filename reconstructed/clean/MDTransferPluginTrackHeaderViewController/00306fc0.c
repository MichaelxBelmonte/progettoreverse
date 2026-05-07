// Function: FUN_00306fc0
// Address: 00306fc0
// Size: 591 bytes
// Class: MDTransferPluginTrackHeaderViewController
// String references:
//   "MDTransferPluginTrackHeaderViewController"
// === MDTransferPluginTrackHeaderViewController properties ===
//                   _canTransfer
//                   _transferButtonActive
//                   _featureSetObserver
//                   _transferButton


void FUN_00306fc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00306500();
  *this_ptr = &g_024fea68;
  *(void*)(this_ptr + 0x18) = 0;
  // [STATIC_INIT: property registration]
  if (g_02700403 == '\0') {
    FUN_00307290();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02700403 == '\0') {
    FUN_00307420();
    FUN_00e87980();
  }
  FUN_003075b0();
  FUN_003078e0();
  return;
}

