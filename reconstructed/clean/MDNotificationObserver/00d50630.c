// Function: FUN_00d50630
// Address: 00d50630
// Size: 722 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDPropertyObserver"
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


void FUN_00d50630(void)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t local_40;
  char local_38;
  
  plVar4 = (int64_t *)*this_ptr;
  FUN_00e8b690();
  if (plVar4 == (int64_t *)0x0) {
LAB_00d50675:
    plVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar4 = this_ptr;
    if (cVar1 == '\0') goto LAB_00d50675;
  }
  if (*plVar4 != 0) {
    return;
  }
  (**(code **)(*(int64_t *)*this_ptr + 0x360))();
  lVar3 = FUN_00e86210();
  if (lVar3 != 0) {
    FUN_00e31530();
  }
  FUN_00c81c60();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00d508e5;
    FUN_00e31530();
  }
  else if (local_80 == 0) goto LAB_00d508e5;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      cVar1 = FUN_00d77e10();
      if (cVar1 != '\0') {
        FUN_00d77be0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
          FUN_00d76b90();
          FUN_00d8b910();
          iVar2 = FUN_00e7ddf0();
          if ((iVar2 == 0) || (iVar2 = FUN_00e7ddf0(), iVar2 == 0)) {
            (**(code **)(*(int64_t *)*this_ptr + 0x210))();
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d508e5:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}

