// Function: FUN_017906e0
// Address: 017906e0
// Size: 929 bytes
// Class: Unknown

double FUN_017906e0(void* param_1)

{
  void *pvVar1;
  int iVar2;
  float fVar3;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  double local_48;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01508830();
  if (local_98 == '\0') {
    if (local_a0 == 0) {
      return g_0238fee8;
    }
    FUN_00d50b00();
  }
  else if (local_a0 == 0) {
    return g_0238fee8;
  }
  iVar2 = 0;
  do {
    if (*(int *)(local_a0 + 0xc) <= iVar2) {
      FUN_015304b0();
      local_48 = g_0238fee8;
      goto LAB_01790a73;
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ec50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    iVar2 = iVar2 + 1;
  } while (local_58 == 0);
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0152ec50();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e7c0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd6a0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar3 = (float)FUN_014bc1c0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_48 = (double)fVar3;
  FUN_015304b0();
LAB_01790a73:
  FUN_00d50b20();
  return local_48;
}

