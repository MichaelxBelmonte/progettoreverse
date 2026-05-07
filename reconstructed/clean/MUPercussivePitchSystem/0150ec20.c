// Function: FUN_0150ec20
// Address: 0150ec20
// Size: 649 bytes
// Class: MUPercussivePitchSystem

void FUN_0150ec20(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *arg1;
  int iVar3;
  int64_t local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_0150ed30;
          }
        }
        else if (local_40 != 0) {
LAB_0150ed30:
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_0150da40();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508a20();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0128c470();
          FUN_0150d560();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

