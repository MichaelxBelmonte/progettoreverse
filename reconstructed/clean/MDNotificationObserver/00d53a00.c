// Function: FUN_00d53a00
// Address: 00d53a00
// Size: 1007 bytes
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


void FUN_00d53a00(int64_t *param_1,char param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char *pcVar3;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qa;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_58;
  uint local_50;
  uint32_t local_4c;
  int64_t *local_48;
  uint local_40;
  uint64_t local_38;
  
  local_d8 = *param_1;
  local_d0 = '\0';
  uVar4 = (**(code **)(*this_ptr + 0xe8))(param_1,&local_d8);
  plVar2 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      uVar4 = FUN_00e31530(uVar4,0);
      if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar4 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)FUN_00d8b910();
    uVar4 = extraout_XMM0_Qa;
  }
  if (param_2 == 'I') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &g_024cc6f0;
    local_4c = *(void*)arg1;
    uVar4 = FUN_00d3af80(&g_0277e4be,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'd') {
    FUN_00e31530(uVar4,0);
    local_40 = 1;
    local_48 = (int64_t *)&g_024de5e0;
    local_38 = *arg1;
    uVar4 = FUN_00d3af80(&g_0277e4b8,pcVar3,&local_48);
    plVar1 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  else if (param_2 == 'f') {
    FUN_00e31530(uVar4,0);
    local_50 = 1;
    local_58 = &g_024d0b28;
    local_4c = *(void*)arg1;
    uVar4 = FUN_00d3af80(&g_0277e4bb,pcVar3,&local_58);
    plVar1 = local_48;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(uVar4,0);
        if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x368))();
    FUN_00d50b20();
  }
  local_c8 = *param_1;
  local_c0 = '\0';
  (**(code **)(*this_ptr + 0x260))(&local_c8,(int)param_2);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

