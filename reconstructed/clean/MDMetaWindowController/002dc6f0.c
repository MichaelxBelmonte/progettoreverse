// Function: FUN_002dc6f0
// Address: 002dc6f0
// Size: 521 bytes
// Class: MDMetaWindowController

void FUN_002dc6f0(void* param_1)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t this_ptr;
  double dVar4;
  int64_t local_58;
  char local_50;
  
  if (*(char *)(this_ptr + 0x70) != '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013201b0();
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015305e0();
      iVar1 = *(int *)(local_58 + 0xc);
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (iVar1 == 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar2 = *(int64_t *)(this_ptr + 0x68);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01530610();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(char *)(this_ptr + 0x70) != '\0') {
      return;
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015305e0();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x68);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01530740();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

