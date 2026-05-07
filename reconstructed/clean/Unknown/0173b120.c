// Function: FUN_0173b120
// Address: 0173b120
// Size: 1020 bytes
// Class: Unknown

void FUN_0173b120(int64_t param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d51d20();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    lVar4 = *arg1;
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      lVar4 = *arg1;
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    if (*(char *)(lVar4 + 0x68) != '\0') {
      pvVar2 = _pthread_getspecific((void*)param_1);
      if ((pvVar2 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
        cVar1 = *(char *)(local_48 + 0x68);
        lVar4 = local_48;
      }
      else {
        lVar4 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        cVar1 = *(char *)(lVar4 + 0x68);
        param_1 = local_48;
      }
      if (cVar1 != '\0') {
        *(void*)(lVar4 + 0x68) = 0;
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      lVar4 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
        param_1 = local_48;
      }
      lVar3 = *arg1;
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(int64_t *)(lVar3 + 0x58);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (*(int64_t *)(lVar4 + 0x58) != local_48) {
        FUN_00d64850();
        lVar5 = *(int64_t *)(lVar4 + 0x58);
        if (lVar5 != local_48) {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(lVar4 + 0x58) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      lVar4 = local_48;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        param_1 = local_48;
        lVar4 = *(int64_t *)(local_48 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      lVar3 = *arg1;
      pVar6 = (void*)param_1;
      pvVar2 = _pthread_getspecific(pVar6);
      if (pvVar2 != (void *)0x0) {
        lVar3 = *arg1;
        lVar5 = FUN_00e8b990();
        if (lVar5 != 0) {
          lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
      }
      lVar3 = *(int64_t *)(lVar3 + 0x60);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar6);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (*(int64_t *)(lVar4 + 0x60) != local_48) {
        FUN_00d64850();
        lVar5 = *(int64_t *)(lVar4 + 0x60);
        if (lVar5 != local_48) {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *(int64_t *)(lVar4 + 0x60) = local_48;
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d64910();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}

