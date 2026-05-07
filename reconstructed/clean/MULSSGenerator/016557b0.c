// Function: FUN_016557b0
// Address: 016557b0
// Size: 1611 bytes
// Class: MULSSGenerator

void FUN_016557b0(void* param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t this_ptr;
  uint64_t uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int64_t local_80;
  char local_78;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x65) == '\0') {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    return;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016501d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01650620();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016676b0();
    if (local_38 != '\0') {
      local_38 = '\0';
    }
    FUN_01650af0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01650210();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
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
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar3 = FUN_016c25f0(*(void*)(this_ptr + 0x40));
  *(void*)(this_ptr + 0x70) = uVar3;
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a10();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01710460();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    *(void*)(this_ptr + 0x78) = *(void*)(this_ptr + 0x70);
LAB_01655bbd:
    dVar5 = *(double *)(this_ptr + 0x58);
    if ((dVar5 == 0.0) && (dVar6 = g_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
    dVar4 = *(double *)(this_ptr + 0x48);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_016c25f0(*(void*)(this_ptr + 0x50));
    *(void*)(this_ptr + 0x78) = uVar3;
    if (*(char *)(this_ptr + 0x60) == '\0') goto LAB_01655bbd;
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_016c25f0(*(double *)(this_ptr + 0x40) + *(double *)(this_ptr + 0x48));
    dVar4 = dVar4 - *(double *)(this_ptr + 0x70);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016c25f0(*(double *)(this_ptr + 0x50) + *(double *)(this_ptr + 0x58));
    dVar5 = dVar5 - *(double *)(this_ptr + 0x78);
    if ((dVar5 == 0.0) && (dVar6 = g_0238fee8, !NAN(dVar5))) goto LAB_01655c99;
  }
  if ((dVar4 != 0.0) || (dVar6 = g_0238fee8, NAN(dVar4))) {
    dVar6 = dVar5 / dVar4;
  }
LAB_01655c99:
  *(double *)(this_ptr + 0x68) = dVar6;
  *(void*)(this_ptr + 0x65) = 0;
  FUN_00d403d0();
  lVar1 = g_026dc2a0;
  if (g_026dc2a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

