// Function: FUN_011180b0
// Address: 011180b0
// Size: 1216 bytes
// Class: MUChordParser
// String references:
//   "MUChordParser"
// === MUChordParser properties ===
//                   _workString
//                   _chordIsDim
//                   _chordIsHalfDim
//                   _chordIsAug
//                   _chordIsDom
//                   _baseChord
//                   _extensionsChord
//                   _additionsChord
//                   _omitsChord
//                   _suspendedChord
//                   _alterationsChord
//                   _omitParsingSymbol
//                   _majNumberPrefix
//                   _numberPrefixes
//                   _maj7Symbol
//                   _maj9Symbol
//                   _maj11Symbol
//                   _maj13Symbol


void FUN_011180b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025deee0;
  FUN_01118760();
  FUN_01118a50();
  FUN_01118cd0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_02795c6b == '\0') {
    FUN_01118f50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_02795c6b == '\0') {
    FUN_011190c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_02795c6b == '\0') {
    FUN_01119230();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_02795c6b == '\0') {
    FUN_011193a0();
    FUN_00e87980();
  }
  FUN_01119510();
  FUN_01119800();
  FUN_01119af0();
  FUN_01119de0();
  FUN_0111a0d0();
  FUN_0111a3c0();
  FUN_0111a6b0();
  FUN_0111a930();
  FUN_0111abb0();
  FUN_0111ae30();
  FUN_0111b0b0();
  FUN_0111b330();
  FUN_0111b5b0();
  return;
}

