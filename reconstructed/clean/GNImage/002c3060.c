// Function: FUN_002c3060
// Address: 002c3060
// Size: 865 bytes
// Class: GNImage
// === GNImage properties ===
//                   _alternateImage
//                   _disabledImage
//                   _alternateTitle
//                   _isBordered


void FUN_002c3060(void* param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  cVar2 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  if (cVar2 == '\0') {
    local_38 = *arg1;
    if ((local_38 == 0) || ((char)arg1[1] == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0123abe0();
    (**(code **)(*local_80 + 0x388))();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x400))();
    local_38 = local_50;
    if (local_50 == 0) {
      bVar1 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_48 = '\0';
      bVar1 = true;
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124d460();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123bd60();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  lVar5 = *(int64_t *)(this_ptr + 0x18);
  lVar4 = lVar5;
  if (lVar5 != local_50) {
    lVar4 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
        lVar5 = *(int64_t *)(this_ptr + 0x18);
      }
    }
    else {
      local_48 = '\0';
    }
    *(int64_t *)(this_ptr + 0x18) = lVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
      lVar4 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  FUN_002c2560();
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

