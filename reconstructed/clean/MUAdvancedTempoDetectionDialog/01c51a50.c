// Function: FUN_01c51a50
// Address: 01c51a50
// Size: 534 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c51a50(void* param_1)

{
  int64_t lVar1;
  double dVar2;
  void *pvVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)((int64_t)this_ptr + 0x2e1) == '\0') {
    if (*(char *)((int64_t)this_ptr + 0x2e2) == '\0') {
      dVar5 = g_02395720;
      if (this_ptr[0x31] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar1 = this_ptr[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016cd860();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      dVar6 = g_0241eeb8;
      if (g_0241eeb8 <= g_0241ea50 * dVar5) {
        dVar6 = g_0241ea50 * dVar5;
      }
      dVar2 = g_0241ea58;
      if (dVar5 * g_023b3bc0 <= g_0241ea58) {
        dVar2 = dVar5 * g_023b3bc0;
      }
      if (((double)this_ptr[0x38] != dVar6) || (NAN((double)this_ptr[0x38]) || NAN(dVar6))) {
        this_ptr[0x38] = (int64_t)dVar6;
        dVar5 = (double)_log((double)this_ptr[0x37] /
                             (double)(~-(uint64_t)(dVar6 == 0.0) & (uint64_t)dVar6 |
                                     g_0238fee8 & -(uint64_t)(dVar6 == 0.0)));
        *(float *)(this_ptr + 0x55) = (float)dVar5;
        (**(code **)(*this_ptr + 0x620))();
        *(void*)(this_ptr + 0x3a) = 1;
        if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
        }
      }
      if (((double)this_ptr[0x37] != dVar2) || (NAN((double)this_ptr[0x37]) || NAN(dVar2))) {
        this_ptr[0x37] = (int64_t)dVar2;
        uVar4 = -(uint64_t)((double)this_ptr[0x38] == 0.0);
        dVar5 = (double)_log(dVar2 / (double)(~uVar4 & this_ptr[0x38] | g_0238fee8 & uVar4));
        *(float *)(this_ptr + 0x55) = (float)dVar5;
        (**(code **)(*this_ptr + 0x620))();
        *(void*)(this_ptr + 0x3a) = 1;
        if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
        }
      }
    }
    else {
      *(void*)((int64_t)this_ptr + 0x2e2) = 0;
    }
    if ((int64_t *)this_ptr[0x36] != (int64_t *)0x0) {
                                              (**(code **)(*(int64_t *)this_ptr[0x36] + 0x620))();
      return;
    }
  }
  else {
    *(void*)((int64_t)this_ptr + 0x2e1) = 0;
  }
  return;
}

