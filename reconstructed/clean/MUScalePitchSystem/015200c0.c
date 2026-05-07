// Function: FUN_015200c0
// Address: 015200c0
// Size: 956 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_015200c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010ed760();
  *this_ptr = &g_025fee18;
  FUN_01520520();
  FUN_01520810();
  *(void*)(this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270abcb == '\0') {
    FUN_01520b00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270abcb == '\0') {
    FUN_01520c70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270abcb == '\0') {
    FUN_01520de0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270abcb == '\0') {
    FUN_01520f50();
    FUN_00e87980();
  }
  return;
}

