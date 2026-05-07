// Function: FUN_0170d020
// Address: 0170d020
// Size: 611 bytes
// Class: Unknown

void* FUN_0170d020(uint64_t param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  void*puVar3;
  void* pVar4;
  uint32_t unaff_ESI;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  FUN_012ca6e0(param_1,unaff_ESI);
  pVar4 = (void*)param_1;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_0150c9f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505730();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01505960();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar4 = 0x25d7080;
  *puVar3 = &g_025d7080;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*g_025d7098)();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013132f0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313360();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return this_ptr;
}

