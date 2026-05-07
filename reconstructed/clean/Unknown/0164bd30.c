// Function: FUN_0164bd30
// Address: 0164bd30
// Size: 1021 bytes
// Class: Unknown

void* FUN_0164bd30(int64_t param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  void*this_ptr;
  int64_t lVar6;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar6 + 0xc) <= local_40) break;
      local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar2 * 8);
      pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013c8d80();
    }
    FUN_00115190();
    param_1 = lVar6;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0079bdf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_010fbcf0();
  (**(code **)(*plVar4 + 0x18))();
  FUN_01318520();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d214d0();
  if (0 < *(int *)(local_58 + 0xc)) {
    lVar6 = 0;
    do {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar2 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + lVar6 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01646050();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(local_58 + 0xc));
  }
  lVar6 = *param_3;
  lVar2 = plVar3[0xe];
  if (lVar2 != lVar6) {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    plVar3[0xe] = lVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)plVar3[0xd];
  if (plVar1 != plVar4) {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar3[0xd] = (int64_t)plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d243f0();
  FUN_00d243f0();
  FUN_00d243f0();
  (**(code **)(*plVar3 + 0x398))();
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

