// Function: FUN_01c4e0b0
// Address: 01c4e0b0
// Size: 564 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c4e0b0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  if ((int)this_ptr[0x39] != unaff_ESI) {
    if ((int)this_ptr[0x4d] != 0) {
      *(void*)(this_ptr + 0x4d) = 0;
      (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x478))();
      if (this_ptr[0x2b] != 0) {
        this_ptr[0x2b] = 0;
        FUN_00d50b20();
      }
      if (this_ptr[0x4e] != 0) {
        this_ptr[0x4e] = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    *(int *)(this_ptr + 0x39) = unaff_ESI;
    if (this_ptr[0x31] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = this_ptr[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016efaf0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c4df60();
    FUN_016bf0c0();
    *(void*)(this_ptr + 0x43) = 0;
    FUN_01c4e390();
    if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
    }
    FUN_01e42030();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*this_ptr + 0x7b0))();
      if (local_30 == '\0') {
        if (local_38 == 0) goto LAB_01c4e28d;
        FUN_00d50b00();
      }
      else if (local_38 == 0) goto LAB_01c4e28d;
      FUN_01cf9ad0();
      FUN_00d50b20();
    }
  }
LAB_01c4e28d:
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = this_ptr[0x2c];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c8da90();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

