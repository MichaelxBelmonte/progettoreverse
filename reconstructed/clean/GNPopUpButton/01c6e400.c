// Function: FUN_01c6e400
// Address: 01c6e400
// Size: 506 bytes
// Class: GNPopUpButton

void FUN_01c6e400(void* param_1)

{
  double dVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = g_02395720;
  if (this_ptr[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar2 = this_ptr[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016cd860();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)this_ptr[0x38];
  dVar6 = SQRT((double)this_ptr[0x37] / dVar1);
  dVar7 = dVar5 / dVar6;
  dVar5 = dVar5 * dVar6;
  dVar6 = g_0241eeb8;
  if (g_0241eeb8 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar7 = g_0241ea58;
  if (dVar5 <= g_0241ea58) {
    dVar7 = dVar5;
  }
  if ((dVar1 != dVar6) || (NAN(dVar1) || NAN(dVar6))) {
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
  if (((double)this_ptr[0x37] != dVar7) || (NAN((double)this_ptr[0x37]) || NAN(dVar7))) {
    this_ptr[0x37] = (int64_t)dVar7;
    uVar4 = -(uint64_t)((double)this_ptr[0x38] == 0.0);
    dVar5 = (double)_log(dVar7 / (double)(~uVar4 & this_ptr[0x38] | g_0238fee8 & uVar4));
    *(float *)(this_ptr + 0x55) = (float)dVar5;
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
    }
  }
  if ((int64_t *)this_ptr[0x36] == (int64_t *)0x0) {
    return;
  }
                                          (**(code **)(*(int64_t *)this_ptr[0x36] + 0x620))();
  return;
}

