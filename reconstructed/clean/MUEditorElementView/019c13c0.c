// Function: FUN_019c13c0
// Address: 019c13c0
// Size: 558 bytes
// Class: MUEditorElementView

void FUN_019c13c0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t *this_ptr;
  int64_t local_38;
  char local_30;
  
  (**(code **)(*this_ptr + 0xe20))();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00e7b500(g_023908c8,0);
  if (*(int *)(local_38 + 0xc) != 0) {
    FUN_01266770();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a280();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)((int64_t)&dylib_command_00001288.cmd + *this_ptr))();
    if (cVar1 == '\0') {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012646c0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01266b80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(&g_000015f8 + *this_ptr))();
  FUN_00d50b20();
  return;
}

