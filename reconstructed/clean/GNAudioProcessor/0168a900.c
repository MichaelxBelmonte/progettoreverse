// Function: FUN_0168a900
// Address: 0168a900
// Size: 1862 bytes
// Class: GNAudioProcessor

void FUN_0168a900(void* param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar2 = local_60;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01653bd0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if (local_60 == *arg1) goto LAB_0168b056;
  if (local_60 == 0) {
LAB_0168aa03:
    lVar7 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    lVar7 = local_60;
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa03;
      FUN_00d50b00();
    }
  }
  if (*arg1 == 0) {
LAB_0168aa82:
    local_68 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c8a10();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_0168aa82;
      local_68 = local_60;
      FUN_00d50b00();
    }
    else {
      local_68 = local_60;
    }
  }
  if (local_60 != 0) {
    lVar6 = *(int64_t *)(this_ptr + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_100 = *param_2;
        local_f8 = '\0';
        FUN_01694e10(*(int64_t *)(lVar6 + 0x10),&local_100);
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (void*)lVar6;
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e8 = '\0';
      local_f0 = lVar7;
      FUN_01657d60();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = *param_2;
    local_d8 = '\0';
    FUN_012c85c0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_d0 = *arg1;
  local_c8 = '\0';
  FUN_01658140();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c0 = *param_2;
    local_b8 = '\0';
    FUN_012c8210();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != local_68) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_b0 = local_68;
      local_a8 = '\0';
      FUN_01657410();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = *(int64_t *)(this_ptr + 0x60);
    if (lVar6 != 0) {
      local_58 = '\0';
      local_60 = 0;
      local_48 = -1;
      while( true ) {
        lVar5 = (int64_t)local_48;
        local_48 = local_48 + 1;
        if (*(int *)(lVar6 + 0xc) <= local_48) break;
        local_60 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar5 * 8);
        local_a0 = *arg1;
        local_98 = '\0';
        local_90 = *param_2;
        local_88 = '\0';
        FUN_01694d70(*(int64_t *)(lVar6 + 0x10),&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_016be7c0();
      param_1 = (void*)lVar6;
    }
  }
  cVar3 = FUN_016ae5f0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c81e0();
    iVar1 = *(int *)(local_60 + 0xc);
    if (local_58 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      FUN_00d23d90();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = '\0';
      local_80 = 0;
      FUN_012c8a40();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d50130();
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
LAB_0168b056:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

