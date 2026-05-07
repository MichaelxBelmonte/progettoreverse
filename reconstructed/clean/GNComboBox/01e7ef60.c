// Function: FUN_01e7ef60
// Address: 01e7ef60
// Size: 598 bytes
// Class: GNComboBox
// String references:
//   "GNComboBox"
// === GNComboBox properties ===
//   GNComboBoxMode  _mode
//                   _customValue
//                   _view1
//                   _view2
//                   _allowsChainedResize
//                   _paddingLineSize
//                   _stopTime
//                   _scrubProgressor
//                   _timelineWillEditObserver
//                   _timelineDidEditObserver
//                   _willEditTimeline
//                   _plabackRangeTimer


void FUN_01e7ef60(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001f8d00();
  *this_ptr = &g_0267a768;
  this_ptr[2] = &g_0267b2d0;
  this_ptr[0x39] = &g_0267b310;
  FUN_01e7f240();
  FUN_01e7f530();
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ef5fb == '\0') {
    FUN_01e7f820();
    FUN_00e87980();
  }
  FUN_01e7fa50();
  *(void*)(this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ef5fb == '\0') {
    FUN_01e7fcd0();
    FUN_00e87980();
  }
  return;
}

