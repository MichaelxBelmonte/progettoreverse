// ===================================================================
// MUHostTimelineReader — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (1):
//   bool            _isReading


// ============================================================
// 0000dfe0
// ============================================================
// Function: FUN_0000dfe0
// Address: 0000dfe0
// Size: 541 bytes
// Class: MUHostTimelineReader
// String references:
//   "bool"
//   "MUHostTimelineReader"
//   "GNData"
//   "MUTimeline"
//   "_isReading"
// === MUHostTimelineReader properties ===
//   bool            _isReading


void FUN_0000dfe0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0000bce0();
  this_ptr[0xe] = &g_024bfe58;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026176d0;
  this_ptr[2] = &g_02617d80;
  this_ptr[3] = &g_02617db0;
  this_ptr[4] = &g_02617e58;
  this_ptr[0xe] = &g_02618118;
  this_ptr[0xf] = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0000e290();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNData");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0000e380();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_0000b9f0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

