// Function: FUN_00b10c00
// Address: 00b10c00
// Size: 592 bytes
// Class: GNPolyMidiInstrument
// String references:
//   "GNPolyMidiInstrument"

void FUN_00b10c00(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_0253c2f8;
  *(void*)(this_ptr + 0x12) = 0;
  lVar2 = FUN_00b0c680();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0c8a0();
    FUN_00e87980();
  }
  *this_ptr = &g_0253f450;
  FUN_00b10ec0();
  *(void*)(this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275bfa3 == '\0') {
    FUN_00b111b0();
    FUN_00e87980();
  }
  FUN_00b11320();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275bfa3 == '\0') {
    FUN_00b115a0();
    FUN_00e87980();
  }
  return;
}

