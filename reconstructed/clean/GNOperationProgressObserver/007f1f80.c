// Function: FUN_007f1f80
// Address: 007f1f80
// Size: 502 bytes
// Class: GNOperationProgressObserver

void FUN_007f1f80(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_68 = '\0';
  local_70 = 0;
  FUN_01502670(param_2,&local_70);
  lVar4 = local_40;
  pVar5 = (void*)param_2;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
    lVar4 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d610();
    local_50 = local_60;
    local_48 = 0;
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = '\x01';
    FUN_016cbba0();
    lVar2 = local_40;
    if (local_40 == 0) {
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        bVar1 = true;
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    lVar4 = 0;
    if (bVar1) {
      lVar4 = lVar2;
    }
    if (lVar2 != 0 && !bVar1) {
      FUN_00d50b00();
      lVar4 = lVar2;
    }
  }
  *this_ptr = lVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

