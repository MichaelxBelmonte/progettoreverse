// Function: FUN_00d55d70
// Address: 00d55d70
// Size: 723 bytes
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


void FUN_00d55d70(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar5 = FUN_00d8ca50();
  lVar2 = g_02774da0;
  if (cVar5 == '\0') {
    (**(code **)(*this_ptr + 0x80))();
  }
  else {
    if (g_02774da0 != 0) {
      FUN_00e31530();
    }
    local_88 = lVar2;
    local_80 = '\x01';
    FUN_00d91000(1,&local_88);
    plVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00e31530(), local_40[0] != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    plVar4 = local_48;
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00e31530();
    }
    FUN_00d23740();
    if (*(int *)((int64_t)plVar3 + 0xc) == 0) {
      if (this_ptr == (int64_t *)0x0) {
        this_ptr = (int64_t *)0x0;
        bVar1 = false;
      }
      else {
        bVar1 = true;
        FUN_00e31530();
      }
    }
    else {
      local_78 = plVar3;
      local_70 = '\0';
      (**(code **)(*this_ptr + 0xa0))();
      this_ptr = local_48;
      if (local_48 == (int64_t *)0x0) {
        bVar1 = false;
        this_ptr = (int64_t *)0x0;
      }
      else if (local_40[0] == '\0') {
        FUN_00e31530();
        bVar1 = true;
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar1 = true;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_68 = *arg1;
    local_60 = '\0';
    local_58 = plVar4;
    local_50 = '\0';
    (**(code **)(*this_ptr + 0x80))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

