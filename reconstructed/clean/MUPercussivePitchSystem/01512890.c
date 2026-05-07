// Function: FUN_01512890
// Address: 01512890
// Size: 666 bytes
// Class: MUPercussivePitchSystem

uint FUN_01512890(void* param_1)

{
  uint uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  if (*(int64_t *)(lVar4 + 0x88) == 0) {
    do {
      lVar3 = *(int64_t *)(lVar4 + 0x50);
      if (lVar3 == 0) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *(int64_t *)(lVar4 + 0x50);
        lVar4 = FUN_00e8b990();
        if (lVar4 != 0) {
          lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
      }
      lVar4 = lVar3;
    } while (*(int64_t *)(lVar3 + 0x88) == 0);
    lVar4 = *(int64_t *)(lVar3 + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x88);
  }
  if (lVar4 == 0) {
    return 0;
  }
  FUN_00d50b00();
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  else {
    lVar4 = *(int64_t *)(this_ptr + 0x88);
  }
  if (lVar4 == 0) {
    do {
      lVar4 = *(int64_t *)(this_ptr + 0x50);
      if (lVar4 == 0) {
        local_50 = 0;
        goto LAB_01512a5a;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        lVar4 = *(int64_t *)(this_ptr + 0x50);
        lVar3 = FUN_00e8b990();
        if (lVar3 != 0) {
          lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        }
      }
      this_ptr = lVar4;
    } while (*(int64_t *)(lVar4 + 0x88) == 0);
    local_50 = *(int64_t *)(lVar4 + 0x88);
  }
  else {
    local_50 = *(int64_t *)(this_ptr + 0x88);
  }
  if (local_50 != 0) {
    FUN_00d50b00();
  }
LAB_01512a5a:
  uVar1 = FUN_00d51e10();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0150c7f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return uVar1 ^ 1;
}

