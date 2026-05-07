// ===================================================================
// GNCTypeID — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (5):
//   bool            _showsX
//   bool            _showsY
//   bool            _showsWidth
//   bool            _showsHeight
//   GNCTypeID       _cTypeID


// ============================================================
// 00043f30
// ============================================================
// Function: FUN_00043f30
// Address: 00043f30
// Size: 883 bytes
// Class: GNCTypeID
// String references:
//   "bool"
//   "_showsX"
//   "_showsY"
//   "_showsWidth"
//   "_showsHeight"
//   "_cTypeID"
//   "GNCTypeID"
// === GNCTypeID properties ===
//   bool            _showsX
//   bool            _showsY
//   bool            _showsWidth
//   bool            _showsHeight
//   GNCTypeID       _cTypeID


void FUN_00043f30(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257f3c0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  lVar2 = FUN_00043d20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00044310();
  return;
}

