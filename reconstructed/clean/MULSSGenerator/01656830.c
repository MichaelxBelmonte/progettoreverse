// Function: FUN_01656830
// Address: 01656830
// Size: 710 bytes
// Class: MULSSGenerator

double FUN_01656830(double param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  FUN_016557b0();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((*(char *)(this_ptr + 0x60) == '\0') && (local_48 != 0)) {
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650210();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c26c0(param_1);
    uVar2 = FUN_01656080();
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38 = (double)FUN_016c25f0(uVar2);
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = (param_1 - *(double *)(this_ptr + 0x70)) * *(double *)(this_ptr + 0x68) +
               *(double *)(this_ptr + 0x78);
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return local_38;
}

