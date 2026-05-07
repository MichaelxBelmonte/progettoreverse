// Function: FUN_00c6e3d0
// Address: 00c6e3d0
// Size: 1015 bytes
// Class: Unknown

uint64_t FUN_00c6e3d0(void)

{
  int64_t *plVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*pcVar2)();
  (**(code **)(*arg1 + 0x3d8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00c6e5b3;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_00c6e5b3;
  local_40 = -1;
  while( true ) {
    lVar5 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar1 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + 8 + lVar5 * 8);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 400))();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_68 = local_80;
      local_60 = '\0';
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00c6f7c0();
  FUN_00d50b20();
LAB_00c6e5b3:
  lVar5 = g_02772078;
  if (1 < *(int *)((int64_t)puVar3 + 0xc)) {
    if (g_02772078 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_02772080;
  if (g_02772080 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d21140();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = g_02772088;
  if (1 < *(int *)((int64_t)puVar3 + 0xc)) {
    if (g_02772088 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

