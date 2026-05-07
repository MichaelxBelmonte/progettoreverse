// Function: FUN_0193d2c0
// Address: 0193d2c0
// Size: 873 bytes
// Class: Unknown

void FUN_0193d2c0(void* param_1)

{
  code *pcVar1;
  void *pvVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  
  if (this_ptr[0xa8] != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ccc30();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar3 = (int64_t *)FUN_00e8b990();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar5 = this_ptr[0xa9];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x3a8))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (this_ptr[0xa8] != 0) {
      this_ptr[0xa8] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0xa9] != 0) {
      this_ptr[0xa9] = 0;
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    (**(code **)(*this_ptr + 0x980))();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*pcVar1)();
    FUN_019a4000();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1fa0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    FUN_00db3760();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01948fc0();
  return;
}

