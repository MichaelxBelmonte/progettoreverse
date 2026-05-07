// ===================================================================
// GNComboBox — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (12):
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


// ============================================================
// 01e73d90
// ============================================================
// Function: FUN_01e73d90
// Address: 01e73d90
// Size: 515 bytes
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


void FUN_01e73d90(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_2b0;
  int64_t local_2a8;
  int64_t local_298;
  int64_t local_48;
  int64_t local_40;
  int64_t local_30;
  
  // [STATIC_INIT: property registration]
  if (g_027ef5fb == '\0') {
    FUN_0018a670();
    FUN_00e87760();
    FUN_01d0ce00();
    FUN_00d50c00();
    FUN_01e7ef60();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01d08090();
    FUN_00e87920(uVar2,0);
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
    if (local_298 != 0) {
      FUN_00d50b20();
    }
    if (local_2a8 != 0) {
      FUN_00d50b20();
    }
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    FUN_001fa900();
  }
  return;
}



// ============================================================
// 01e7ef60
// ============================================================
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



// ============================================================
// 01e7f820
// ============================================================
// Function: FUN_01e7f820
// Address: 01e7f820
// Size: 519 bytes
// Class: GNComboBox
// String references:
//   "_mode"
//   "GNComboBox"
//   "GNComboBoxMode"
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


void* FUN_01e7f820(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f6018 = "_mode";
      g_027f6020 = &g_027ef540;
      g_027f6028 = 0;
      g_027f6030 = 0x6500;
      g_027f6038 = "GNComboBoxMode";
      g_027f6040 = &g_027f60b0;
      g_027f6048 = 0;
      ram_00000000027f6050 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f6018;
}

