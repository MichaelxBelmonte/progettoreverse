// Function: FUN_01aa8960
// Address: 01aa8960
// Size: 908 bytes
// Class: MUScaleBrowserItem

int64_t * FUN_01aa8960(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265b80();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_01aa8ac5;
    }
  }
  else if (local_68 != 0) {
LAB_01aa8ac5:
    if (0 < *(int *)(local_68 + 0xc)) {
      lVar3 = 0;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar3 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
            goto LAB_01aa8be0;
          }
        }
        else if (local_98 != 0) {
LAB_01aa8be0:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd9a0();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef3f0();
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar3 = lVar3 + 1;
      } while ((int)lVar3 < *(int *)(local_68 + 0xc));
    }
    FUN_0015edf0();
    *this_ptr = local_68;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    goto joined_r0x01aa8cfb;
  }
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
joined_r0x01aa8cfb:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

