// Function: FUN_01a1af40
// Address: 01a1af40
// Size: 554 bytes
// Class: Unknown

void FUN_01a1af40(float param_1)

{
  char cVar1;
  void *pvVar2;
  void* in_ECX;
  float fVar3;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125ea80();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  param_1 = param_1 / g_023908e0;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar3 = (float)FUN_0125ea80();
  FUN_0125ea20(fVar3 + param_1);
  FUN_01a58dc0();
  if (local_48 == 0) {
    cVar1 = '\0';
  }
  else {
    FUN_01a58dc0();
    cVar1 = FUN_0199be40();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01a58dc0();
    (**(code **)((int64_t)&linkedit_data_command_000013d8.cmd + *local_58))();
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(in_ECX);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125ea80();
    FUN_0125ea20();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

