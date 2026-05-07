// Function: FUN_001df210
// Address: 001df210
// Size: 508 bytes
// Class: GNParagraphFormat
// String references:
//   "GNParagraphFormat"
// === GNParagraphFormat properties ===
//                   _defaultCharacterFormat
//                   _lineSpacing
//                   _tabs


void FUN_001df210(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026a9a38;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef69b == '\0') {
    FUN_001df460();
    FUN_00e87980();
  }
  FUN_001df5d0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef69b == '\0') {
    FUN_001df8c0();
    FUN_00e87980();
  }
  FUN_001dfa30();
  return;
}

