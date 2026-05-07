// Function: FUN_011d4f40
// Address: 011d4f40
// Size: 500 bytes
// Class: MUTurkishPentachord
// String references:
//   "MUTurkishPentachord"
// === MUTurkishPentachord properties ===
//                   _baseCommaValue
//                   _validCommaValuesCount
//                   _pentachordCommaValues


void FUN_011d4f40(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c6088;
  FUN_011d5180();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9793 == '\0') {
    FUN_011d5400();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b9793 == '\0') {
    FUN_011d5570();
    FUN_00e87980();
  }
  FUN_011d56e0();
  return;
}

