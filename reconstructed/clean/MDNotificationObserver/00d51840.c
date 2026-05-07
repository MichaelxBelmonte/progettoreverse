// Function: FUN_00d51840
// Address: 00d51840
// Size: 807 bytes
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


void* FUN_00d51840(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t *arg1;
  void*this_ptr;
  int iVar5;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  *(void*)(puVar3 + 1) = 0;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  (**(code **)(*arg1 + 0x360))();
  FUN_00e86210();
  FUN_00c85c00();
  if (local_a0 == '\0') {
    if (local_a8 == 0) goto LAB_00d51b70;
    FUN_00e31530();
  }
  else if (local_a8 == 0) goto LAB_00d51b70;
  if (0 < *(int *)(local_a8 + 0xc)) {
    iVar5 = 0;
    do {
      lVar1 = local_58;
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*arg1 + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51b20;
          }
        }
        else if (local_58 != 0) {
LAB_00d51b20:
          FUN_00d21140();
          FUN_00d50b20();
        }
      }
      else {
        (**(code **)(*arg1 + 0x210))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00e31530();
            goto LAB_00d51a30;
          }
        }
        else if (local_58 != 0) {
LAB_00d51a30:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar4 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar1 + 0xc) <= local_40) break;
            local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
            FUN_00d21140();
          }
          FUN_00083b20();
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_a8 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
LAB_00d51b70:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

