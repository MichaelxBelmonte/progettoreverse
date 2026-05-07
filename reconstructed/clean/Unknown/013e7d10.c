// Function: FUN_013e7d10
// Address: 013e7d10
// Size: 627 bytes
// Class: Unknown

void FUN_013e7d10(void* param_1)

{
  uint8_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_58;
  void*local_48;
  char local_40;
  
  lVar2 = *arg1;
  lVar5 = arg1[1];
  if (((char)lVar5 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  lVar3 = *(int64_t *)(lVar2 + 0x10);
  if (lVar3 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar3;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    param_1 = (void*)local_58;
  }
  FUN_01270530();
  if (local_40 == '\0') {
    if (local_48 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_013e7dd5;
    }
  }
  else if (local_48 != (void*)0x0) {
LAB_013e7dd5:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c71a0();
    if (local_48 == (void*)0x0) {
      local_48 = (void*)0x0;
      bVar4 = false;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar4 = true;
    }
    else {
      bVar4 = true;
    }
    FUN_00d50b20();
    goto LAB_013e7e86;
  }
  uVar1 = *(void*)(lVar2 + 0x20);
  local_48 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_48 = &g_02539a88;
  local_48[2] = 0;
  (*g_02539aa0)();
  FUN_00b519f0(uVar1,0,0);
  bVar4 = true;
LAB_013e7e86:
  (**(code **)(*this_ptr + 0x6d0))();
  FUN_00d21140();
  FUN_00d23f50();
  if ((lVar3 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar5 != '\0') {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

