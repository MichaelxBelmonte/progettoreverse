// Function: FUN_007886a0
// Address: 007886a0
// Size: 750 bytes
// Class: MUAraAudioSource
// String references:
//   "%@.txt"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint32_t FUN_007886a0(void)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_40;
  
  if (((int64_t *)*this_ptr == (int64_t *)0x0) ||
     ((cVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x3a0))(), cVar3 == '\0' &&
      (cVar3 = (**(code **)(*(int64_t *)*this_ptr + 0x428))(), cVar3 == '\0')))) {
    uVar4 = 0;
  }
  else {
    bVar1 = false;
    local_40 = (int64_t *)0x0;
    do {
      plVar5 = (int64_t *)*this_ptr;
      FUN_00d9bb60();
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8cb40();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      (**(code **)(*plVar5 + 0x400))();
      if (local_60 == local_40) {
        if ((!bVar1) && (local_60 != (int64_t *)0x0)) {
          plVar5 = local_40;
          if (local_58 != '\0') goto LAB_00788813;
          FUN_00d50b00();
LAB_00788870:
          bVar1 = true;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar1) {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            local_40 = local_60;
            goto LAB_00788870;
          }
          local_40 = local_60;
          bVar1 = true;
        }
        else {
          local_40 = local_60;
          bVar1 = true;
        }
      }
      else {
        plVar5 = local_60;
        if ((bVar1) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00788813:
        local_58 = '\0';
        local_40 = plVar5;
        bVar1 = true;
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      cVar3 = (**(code **)(*local_40 + 0x398))();
      lVar2 = g_02729640;
    } while (cVar3 != '\0');
    if (g_02729640 != 0) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d90550();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((char)uVar4 != '\0') {
      (**(code **)(*local_40 + 0x408))();
    }
    if (bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}

