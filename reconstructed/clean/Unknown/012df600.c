// Function: FUN_012df600
// Address: 012df600
// Size: 684 bytes
// Class: Unknown

void FUN_012df600(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t this_ptr;
  
  cVar1 = FUN_00d59e50();
  if (cVar1 == '\0') {
    cVar1 = FUN_00d59e50();
    if (cVar1 != '\0') {
      if (*(int64_t *)(this_ptr + 0x58) != 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268df0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128c190();
      }
      if (*(int64_t *)(this_ptr + 0x60) == 0) goto LAB_012df812;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268df0();
      goto LAB_012df7d7;
    }
    cVar1 = FUN_00d59e50();
    if (cVar1 == '\0') goto LAB_012df812;
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c190();
    }
    if (*(int64_t *)(this_ptr + 0x60) == 0) goto LAB_012df812;
    pvVar2 = _pthread_getspecific(param_1);
  }
  else {
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125ef90();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0128c190();
    }
    if (*(int64_t *)(this_ptr + 0x60) == 0) goto LAB_012df812;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125ef90();
LAB_012df7d7:
    pvVar2 = _pthread_getspecific(param_1);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0128c190();
LAB_012df812:
  FUN_00d654d0();
  return;
}

