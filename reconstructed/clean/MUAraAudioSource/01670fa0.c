// Function: FUN_01670fa0
// Address: 01670fa0
// Size: 638 bytes
// Class: MUAraAudioSource
// String references:
//   "_musicalContextData"
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


void FUN_01670fa0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_028ad820;
  if ((g_028ad820 == 0) || (g_028ad829 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad820 == 0) {
      FUN_00d630a0();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01e33cd0();
      lVar2 = g_028ad820;
      if (g_028ad820 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_40;
          }
        }
        else {
          local_38 = '\0';
          lVar2 = local_40;
        }
        bVar1 = g_028ad820 != 0;
        g_028ad820 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_40;
        }
      }
      if ((lVar2 != 0) && (g_028ad828 == '\0')) {
        g_028ad828 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_40;
      }
      if ((local_38 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_016be450();
      lVar2 = FUN_00e85ef0();
      if (lVar2 == 0) {
        lVar2 = FUN_00e858c0();
        if ((lVar2 == 0) || (*(int64_t *)(lVar2 + 0x28) == 0)) goto LAB_0167119a;
LAB_0167115a:
        FUN_00d50b00();
        bVar1 = false;
      }
      else {
        if (*(int64_t *)(lVar2 + 0x30) != 0) goto LAB_0167115a;
LAB_0167119a:
        bVar1 = true;
      }
      FUN_00d23f50();
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad829 = '\x01';
      FUN_00e8cb70();
    }
    lVar2 = g_028ad820;
    *(void*)(this_ptr + 1) = 0;
    if (lVar2 == 0) {
      lVar2 = 0;
      goto LAB_016711f7;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_016711f7:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

