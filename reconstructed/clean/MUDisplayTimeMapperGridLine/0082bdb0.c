// Function: FUN_0082bdb0
// Address: 0082bdb0
// Size: 789 bytes
// Class: MUDisplayTimeMapperGridLine
// String references:
//   "MUDisplayTimeMapperGridLine"
// === MUDisplayTimeMapperGridLine properties ===
//                   _subGridLevel
//                   _xCoord
//                   _noteRealization
//                   _note


void FUN_0082bdb0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026390c8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02733b53 == '\0') {
    FUN_0082c0f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_02733b53 == '\0') {
    FUN_0082c280();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02733b53 == '\0') {
    FUN_0082c410();
    FUN_00e87980();
  }
  FUN_0082c5a0();
  return;
}

