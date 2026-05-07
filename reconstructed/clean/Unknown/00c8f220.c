// Function: FUN_00c8f220
// Address: 00c8f220
// Size: 526 bytes
// Class: Unknown

void FUN_00c8f220(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  char cVar4;
  void*arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int local_34;
  
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  lVar2 = g_027815b0;
  if (cVar4 == '\0') {
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    if (*(int *)(this_ptr + 0x20) != 0) {
      (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
                                            (**(code **)(*(int64_t *)*arg1 + 0x410))();
    return;
  }
  local_34 = *(int *)(this_ptr + 0x18);
  plVar1 = (int64_t *)*arg1;
  if (g_027815b0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x498))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027815c8;
  plVar1 = (int64_t *)*arg1;
  if (g_027815c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x488))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027726e8;
  plVar1 = (int64_t *)*arg1;
  if (g_027726e8 != 0) {
    FUN_00d50b00();
  }
  iVar3 = local_34;
  (**(code **)(*plVar1 + 0x498))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027648d0;
  if (iVar3 != 0) {
    plVar1 = (int64_t *)*arg1;
    if (g_027648d0 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar2;
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x500))(&local_58,local_34);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027815b8;
  plVar1 = (int64_t *)*arg1;
  if (g_027815b8 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  (**(code **)(*plVar1 + 0x498))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

