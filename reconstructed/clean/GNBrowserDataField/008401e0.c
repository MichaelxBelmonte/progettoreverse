// Function: FUN_008401e0
// Address: 008401e0
// Size: 588 bytes
// Class: GNBrowserDataField
// String references:
//   "float"
//   "GNBrowserDataField"
//   "_playingItemProgress"
//   "_canStartPlayback"
// === GNBrowserDataField properties ===
//   float           _playingItemProgress
//   float           _canStartPlayback


void FUN_008401e0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0083cc40();
  *this_ptr = &g_026415d0;
  this_ptr[2] = &g_02641f80;
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008404b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_0083c8c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008405a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowserDataField");
  }
  return;
}

