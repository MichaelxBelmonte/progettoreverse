// Function: FUN_01312f90
// Address: 01312f90
// Size: 621 bytes
// Class: Unknown

void* FUN_01312f90(void* param_1,uint8_t param_2)

{
  void*puVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025d7080;
  puVar2[7] = 0;
  puVar2[8] = 0;
  FUN_00d500e0();
  FUN_01505340();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012c9e50(param_1,param_2);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (void*)local_48;
  }
  FUN_01505960();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = puVar2[7];
    puVar1 = puVar2;
  }
  else {
    puVar1 = (void*)puVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = puVar1[7];
  }
  if (lVar4 != local_48) {
    FUN_00d64850();
    lVar4 = puVar1[7];
    if (lVar4 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar1[7] = local_48;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = puVar2[8];
    puVar1 = puVar2;
  }
  else {
    puVar1 = (void*)puVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = puVar1[8];
  }
  if (lVar4 != local_48) {
    FUN_00d64850();
    lVar4 = puVar1[8];
    if (lVar4 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      puVar1[8] = local_48;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return this_ptr;
}

