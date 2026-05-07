// Function: FUN_012c3160
// Address: 012c3160
// Size: 812 bytes
// Class: Unknown

void FUN_012c3160(uint32_t param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  bool bVar6;
  uint32_t uVar7;
  
  plVar1 = (int64_t *)FUN_011679f0();
  (**(code **)(*plVar1 + 0x18))();
  FUN_01432090();
  FUN_01432080(param_1);
  uVar7 = FUN_01432070();
  FUN_00d23370(uVar7,0);
  this_ptr[0x20] = 0;
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  bVar6 = *(int64_t *)(lVar4 + 0x108) != 0;
  *(bool *)(this_ptr + 0x1a) = bVar6;
  if (bVar6) {
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015392b0();
    plVar5 = (int64_t *)this_ptr[0x18];
    if (plVar5 != plVar1) {
      if (plVar1 == (int64_t *)0x0) {
        this_ptr[0x18] = 0;
      }
      else {
        FUN_00d50b00();
        plVar5 = (int64_t *)this_ptr[0x18];
        this_ptr[0x18] = (int64_t)plVar1;
      }
      in_ECX = (void*)plVar5;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar5 = (int64_t *)this_ptr[0x18];
    if (plVar5 != (int64_t *)0x0) {
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        plVar5 = (int64_t *)this_ptr[0x18];
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
      }
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_015392f0();
      FUN_012dd9d0();
      lVar4 = *plVar5;
      (**(code **)(lVar4 + 0x370))(uVar7);
      in_ECX = (void*)lVar4;
    }
    this_ptr[0x15] = 0;
    this_ptr[0x16] = 0;
    this_ptr[0x17] = 0x3ff0000000000000;
  }
  FUN_0142dbe0();
  bVar6 = plVar1 == (int64_t *)0x0;
  if (bVar6) {
    plVar1 = (int64_t *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*this_ptr + 0x5f8))();
  FUN_012c35a0();
  if (!bVar6 && plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

