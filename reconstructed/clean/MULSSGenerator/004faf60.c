// Function: FUN_004faf60
// Address: 004faf60
// Size: 505 bytes
// Class: MULSSGenerator

void FUN_004faf60(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  if (*this_ptr != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4ba0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4ba0();
      local_50 = g_02708bf0;
      if (g_02708bf0 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      FUN_00ca13a0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_48 == '\0') {
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
      return;
    }
    for (iVar2 = 0; iVar2 < *(int *)(local_50 + 0xc); iVar2 = iVar2 + 1) {
      FUN_004faf60();
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}

