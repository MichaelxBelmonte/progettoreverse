// Function: FUN_00756ee0
// Address: 00756ee0
// Size: 716 bytes
// Class: MUAudioIOSlot

void FUN_00756ee0(void)

{
  int64_t *plVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0xe] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar5 = 0x25d84d8;
    *puVar2 = &g_025d84d8;
    puVar2[7] = 0;
    puVar2[8] = 0;
    (*g_025d84f0)();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    else {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x418))();
    FUN_013200d0();
    FUN_00d50b20();
    pvVar3 = _pthread_getspecific(pVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    else {
      plVar1 = (int64_t *)this_ptr[0xe];
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x408))();
    FUN_01320140();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a7b10();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3f8))();
    FUN_004a7cc0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x628))();
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)this_ptr[0xe];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_004a7ce0();
    FUN_00d50b20();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

