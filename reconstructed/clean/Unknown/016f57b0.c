// Function: FUN_016f57b0
// Address: 016f57b0
// Size: 900 bytes
// Class: Unknown

int64_t * FUN_016f57b0(double param_1,uint64_t param_2)

{
  void *pvVar1;
  char *pcVar2;
  char *in_RCX;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  uint64_t uVar4;
  double dVar5;
  double dVar6;
  int64_t local_60;
  char local_58 [8];
  uint64_t local_50;
  double local_48;
  char local_38 [8];
  
  local_50 = param_2;
  local_48 = param_1;
  if (*(int *)(*(int64_t *)(arg1 + 0x60) + 0xc) == 0) goto LAB_016f595c;
  pvVar1 = _pthread_getspecific((void*)in_RCX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific((void*)in_RCX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar4 = FUN_01909dc0();
  dVar5 = (double)FUN_018fcb10(uVar4,local_50);
  if (local_48 < dVar5) {
    local_60 = **(int64_t **)(*(int64_t *)(arg1 + 0x60) + 0x10);
LAB_016f5aad:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(*(int64_t *)(arg1 + 0x60) + 0xc) == 0) {
LAB_016f595c:
      lVar3 = 0;
      do {
        if ((int64_t)*(int *)(*(int64_t *)(arg1 + 0x60) + 0xc) + -1 <= lVar3) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          return this_ptr;
        }
        pvVar1 = _pthread_getspecific((void*)in_RCX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific((void*)in_RCX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_01909dc0();
        dVar5 = (double)FUN_018fcb10(uVar4,local_50);
        pvVar1 = _pthread_getspecific((void*)in_RCX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific((void*)in_RCX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_01909dc0();
        dVar6 = (double)FUN_018fcb10(uVar4,local_50);
        lVar3 = lVar3 + 1;
      } while ((local_48 < dVar5) || (dVar6 <= local_48));
      local_60 = *(int64_t *)
                  (*(int64_t *)(*(int64_t *)(arg1 + 0x60) + 0x10) + -8 + lVar3 * 8);
      goto LAB_016f5aad;
    }
    pvVar1 = _pthread_getspecific((void*)in_RCX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d23340();
    local_38[0] = local_58[0];
    in_RCX = local_38;
    pcVar2 = local_58;
    if (local_58[0] == '\0') {
      pcVar2 = in_RCX;
    }
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific((void*)in_RCX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01909dc0();
    dVar5 = (double)FUN_018fcb10(uVar4,local_50);
    if ((local_38[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 < dVar5) goto LAB_016f595c;
    FUN_00d23340();
    pcVar2 = local_58;
    if (local_58[0] == '\0') {
      pcVar2 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar2 = '\0';
    if ((local_58[0] != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (local_38[0] != '\0') goto LAB_016f5ac2;
  }
  if (local_60 != 0) {
    FUN_00d50b00();
  }
LAB_016f5ac2:
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

