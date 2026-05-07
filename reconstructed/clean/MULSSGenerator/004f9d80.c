// Function: FUN_004f9d80
// Address: 004f9d80
// Size: 593 bytes
// Class: MULSSGenerator

int64_t * FUN_004f9d80(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  FUN_0025e9a0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_004f9fbe;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_004f9fbe;
  if (0 < *(int *)(local_70 + 0xc)) {
    lVar4 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar4 * 8);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == lVar2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = lVar1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_004f9fbe:
  *this_ptr = local_70;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

