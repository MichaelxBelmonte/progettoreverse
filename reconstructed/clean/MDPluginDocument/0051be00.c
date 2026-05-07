// Function: FUN_0051be00
// Address: 0051be00
// Size: 793 bytes
// Class: MDPluginDocument

void FUN_0051be00(void* param_1)

{
  void *pvVar1;
  void* pVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48 [9];
  undefined7 uStack_3f;
  char local_38;
  char local_30 [8];
  
  if (*(int64_t *)(arg1 + 0x308) == 0) {
    if (*(int64_t *)(arg1 + 0x110) != 0) {
      FUN_00d50b00();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00154c00();
      FUN_00d50b20();
      return;
    }
  }
  else {
    if ((*(char *)(arg1 + 0x358) != '\0') &&
       (*(int *)(*(int64_t *)(arg1 + 0x310) + 0xc) != 0)) {
      FUN_00d23310();
      pVar2 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
      pcVar3 = local_30;
      if (local_48[0] != '\0') {
        pcVar3 = local_48;
      }
      local_30[0] = local_48[0];
      *pcVar3 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165a070();
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_48[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_30[0] == '\0') {
        return;
      }
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (*(char *)(arg1 + 0x359) != '\0') {
      if (*(int *)(*(int64_t *)(arg1 + 800) + 0xc) != 0) {
        FUN_00d23310();
        pcVar3 = local_48 + 8;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_48[8] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        if ((local_48[8] == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        *this_ptr = local_50;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      if (*(int *)(*(int64_t *)(arg1 + 0x318) + 0xc) != 0) {
        FUN_00d23310();
        pVar2 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
        pcVar3 = local_30;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_30[0] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_48[8]) != 0)) {
          FUN_00d50b20();
        }
        if (local_30[0] == '\0') {
          return;
        }
        if (local_50 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

