// Function: FUN_01ca4950
// Address: 01ca4950
// Size: 734 bytes
// Class: MUPasteboardElementPasteIdentifier
// String references:
//   "MUPasteboardElementPasteIdentifier"

void FUN_01ca4950(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02670d18;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed533 == '\0') {
    FUN_01ca4c70();
    FUN_00e87980();
  }
  this_ptr[3] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027ed533 == '\0') {
    FUN_01ca4de0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ed533 == '\0') {
    FUN_01ca4f50();
    FUN_00e87980();
  }
  FUN_01ca50c0();
  FUN_01ca53b0();
  return;
}

