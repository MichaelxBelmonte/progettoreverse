// Function: FUN_0015ae00
// Address: 0015ae00
// Size: 511 bytes
// Class: MULSSGenerator

void* FUN_0015ae00(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  void*this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_48;
  char local_40;
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0015e7e0();
  (**(code **)(*plVar3 + 0x18))();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar4 + 0x18))();
  FUN_004f7da0();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(param_1);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    plVar2 = (int64_t *)plVar3[0x11];
    plVar1 = plVar3;
  }
  else {
    plVar1 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    plVar2 = (int64_t *)plVar1[0x11];
  }
  if (plVar2 != plVar4) {
    FUN_00d50b00();
    plVar1[0x11] = (int64_t)plVar4;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  plVar4 = plVar3;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar4 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  FUN_004a11d0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_0015af5b;
    }
    if (plVar4[0x12] == 0) goto LAB_0015afb2;
    plVar4[0x12] = 0;
LAB_0015af9d:
    FUN_00d50b20();
  }
  else {
    local_40 = '\0';
LAB_0015af5b:
    lVar6 = plVar4[0x12];
    if (lVar6 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      plVar4[0x12] = local_48;
      if (lVar6 != 0) goto LAB_0015af9d;
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_0015afb2:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

