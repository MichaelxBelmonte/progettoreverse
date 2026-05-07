// Function: FUN_019446a0
// Address: 019446a0
// Size: 769 bytes
// Class: Unknown

void FUN_019446a0(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xa8] != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    iVar2 = *(int *)(local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (iVar2 == 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      (**(code **)(&g_000017b0 + *this_ptr))();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (0 < *(int *)(local_68 + 0xc)) {
          iVar2 = 0;
          do {
            (**(code **)(&g_000017b0 + *this_ptr))();
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(local_68 + 0xc));
        }
        FUN_000be170();
        FUN_00d50b20();
      }
    }
  }
  return;
}

