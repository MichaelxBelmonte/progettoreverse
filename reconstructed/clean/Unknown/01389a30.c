// Function: FUN_01389a30
// Address: 01389a30
// Size: 781 bytes
// Class: Unknown

void FUN_01389a30(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t this_ptr;
  int iVar4;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x1c0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0xc) != 0) {
      lVar1 = **(int64_t **)(lVar1 + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013e0cc0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      if ((local_68 == '\0') && (local_70 != 0)) {
        FUN_00d50b00();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        if (0 < *(int *)(local_70 + 0xc)) {
          iVar4 = 0;
          do {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef8d0();
            if ((local_40 == '\0') && (local_48 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(local_70 + 0xc));
        }
        FUN_0015edf0();
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x1c0);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_013357a0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x1c0) != 0) {
      *(void*)(this_ptr + 0x1c0) = 0;
      FUN_00d50b20();
    }
  }
  return;
}

