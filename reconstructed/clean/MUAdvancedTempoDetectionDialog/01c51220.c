// Function: FUN_01c51220
// Address: 01c51220
// Size: 656 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c51220(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x1a8) == *arg1) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(int64_t *)(this_ptr + 0x148) != 0) {
    *(void*)(this_ptr + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  lVar3 = *(int64_t *)(this_ptr + 0x1a8);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x1a8) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*arg1 != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(int64_t *)(this_ptr + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c51304;
        }
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x148);
        *(int64_t *)(this_ptr + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c51304:
        *(int64_t *)(this_ptr + 0x148) = lVar3;
      }
      param_1 = (void*)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      if (*(int64_t *)(this_ptr + 0x198) != 0) {
        *(void*)(this_ptr + 0x198) = 0;
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0x1a0) != 0) {
        *(void*)(this_ptr + 0x1a0) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c51471;
    }
  }
  FUN_01c51000();
LAB_01c51471:
  FUN_01c4df60();
  FUN_016bf0c0();
  *(void*)(this_ptr + 0x218) = 0;
  FUN_01c4e390();
  return;
}

