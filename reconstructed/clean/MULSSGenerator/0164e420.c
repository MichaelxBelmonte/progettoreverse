// Function: FUN_0164e420
// Address: 0164e420
// Size: 951 bytes
// Class: MULSSGenerator

void FUN_0164e420(void* param_1,uint8_t param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  if (lVar2 != *arg1) {
    lVar6 = *(int64_t *)(this_ptr + 0x98);
    if (lVar6 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01658a40();
      }
      FUN_00277f20();
      param_1 = (void*)lVar6;
    }
    if (lVar2 != 0) {
      FUN_01849e20();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505de0();
    }
    FUN_00d64850();
    lVar6 = *arg1;
    lVar4 = *(int64_t *)(this_ptr + 0xa8);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xa8) = lVar6;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (lVar2 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
    if (*arg1 != 0) {
      FUN_01650500();
      lVar6 = *(int64_t *)(this_ptr + 0x98);
      if (lVar6 != 0) {
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar4 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_40) break;
          local_58 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar4 * 8);
          pvVar5 = _pthread_getspecific((void*)*(int64_t *)(lVar6 + 0x10));
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01658a70(param_2,1);
        }
        FUN_00277f20();
        param_1 = (void*)lVar6;
      }
      cVar3 = FUN_01733c10();
      if (cVar3 != '\0') {
        if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0164e7e9;
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_58 + 0xc);
        if (local_50 != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 < 2) goto LAB_0164e7e9;
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      FUN_016818b0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_0164e7e9:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

