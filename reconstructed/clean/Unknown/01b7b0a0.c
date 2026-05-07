// Function: FUN_01b7b0a0
// Address: 01b7b0a0
// Size: 556 bytes
// Class: Unknown

uint64_t FUN_01b7b0a0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  void* pVar4;
  void*puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012521f0();
  lVar2 = local_50;
  pVar4 = (void*)CONCAT71((int7)((uint64_t)arg1 >> 8),local_48[0]);
  plVar6 = &local_40;
  if (local_48[0] != '\0') {
    plVar6 = (int64_t *)local_48;
  }
  local_40 = CONCAT71(local_40._1_7_,local_48[0]);
  *(char *)plVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_40 == '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_58 = local_70;
  local_68 = local_60;
  local_38 = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar2;
  local_38 = '\x01';
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar5 = &local_58;
  FUN_012535e0(puVar5,&local_40,&local_68,0);
  pVar4 = (void*)puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  uVar7 = 0;
  if ((lVar2 != 0) && (local_40 != 0)) {
    lVar1 = *(int64_t *)(this_ptr + 0x158);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = local_40;
    local_48[0] = '\0';
    FUN_012502a0(local_60,local_58,*(void*)(this_ptr + 0x1b0));
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = 1;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return uVar7;
}

