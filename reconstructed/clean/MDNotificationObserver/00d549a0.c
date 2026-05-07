// Function: FUN_00d549a0
// Address: 00d549a0
// Size: 1804 bytes
// Class: MDNotificationObserver
// === MDNotificationObserver properties ===
//   bool            _didChooseQuantization
//   bool            _customValue
//   bool            _showsReplaceRanges
//   bool            _isEditingDetection
//   float           _trackHeaderWidth
//   GNDoubleRange   _startTimeRange
//   GNDoubleRange   _destTimeRange
//   float           _animateZoomToTimeProgress
//   bool            _updateViewPositionDisabled
//   GNInt           _selectedIndex
//   GNInt           _fixedCount
//   bool            _showsEditorBar
//   double          _stopTime
//   double          _startTime


void* FUN_00d549a0(void)

{
  int64_t *arg1;
  void*this_ptr;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  
  (**(code **)(*arg1 + 0x360))();
  FUN_00e86210();
  FUN_00c85dd0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00e31530();
  }
  if (local_58 == (int64_t *)0x0) {
    (**(code **)(*arg1 + 0xf8))();
    (**(code **)(*arg1 + 0x1f8))();
    FUN_00c841b0();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00e31530();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00dd4dc0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c85c30();
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    FUN_00e31530();
    (**(code **)(*local_58 + 0x368))();
    if (arg1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}

