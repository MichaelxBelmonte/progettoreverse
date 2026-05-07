// Function: FUN_0142a580
// Address: 0142a580
// Size: 533 bytes
// Class: MUGrooveBasedGrooveAssignment
// String references:
//   "MUGrooveBasedGrooveAssignment"
// === MUGrooveBasedGrooveAssignment properties ===
//                   _deviationOffset
//                   _grooveItemIndex
//                   _maximumIndex
//                   _relDeviation
//                   _quarterDeviation


void FUN_0142a580(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025e2848;
  FUN_0142a800();
  FUN_0142ab00();
  FUN_0142adf0();
  this_ptr[5] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027c15d3 == '\0') {
    FUN_0142b0e0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c15d3 == '\0') {
    FUN_0142b250();
    FUN_00e87980();
  }
  return;
}

