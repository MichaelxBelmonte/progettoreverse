// Function: FUN_01a7b3d0
// Address: 01a7b3d0
// Size: 1400 bytes
// Class: Unknown

void FUN_01a7b3d0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t local_58;
  char local_50;
  int local_40;
  
  lVar2 = local_58;
  FUN_01a78a20();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if (local_58 != 0) {
    lVar4 = *(int64_t *)(local_58 + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01a80920();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar2 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar4 * 8);
        cVar3 = FUN_01a87be0();
        if (cVar3 != '\0') {
          FUN_01a80590();
        }
      }
      lVar4 = lVar2;
      FUN_01a80d20();
      param_1 = (void*)lVar4;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126e7e0();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    iVar1 = *(int *)(local_58 + 0xc);
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 3) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126dd90();
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2ec0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126de80();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a5f0();
    FUN_0039e8b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_0152eef0();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

