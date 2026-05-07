// Function: FUN_012f8ad0
// Address: 012f8ad0
// Size: 658 bytes
// Class: MULSSGenerator

uint64_t FUN_012f8ad0(uint64_t param_1)

{
  void *pvVar1;
  void* in_ECX;
  int64_t this_ptr;
  uint64_t uVar2;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    if (*(int64_t *)(this_ptr + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_01656080(param_1);
  return uVar2;
}

