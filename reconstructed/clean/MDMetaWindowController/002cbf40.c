// Function: FUN_002cbf40
// Address: 002cbf40
// Size: 931 bytes
// Class: MDMetaWindowController

void* FUN_002cbf40(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  code *pcVar3;
  void*puVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t arg1;
  void*this_ptr;
  void*puVar8;
  void*local_68;
  char local_60;
  int local_50;
  void*local_40;
  char local_38;
  
  if (*(char *)(arg1 + 0x130) == '\0') {
    FUN_002cc530(0,FUN_002c8da0);
    return this_ptr;
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar3)();
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*pcVar3)();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    local_60 = '\0';
    local_68 = (void*)0x0;
    local_50 = -1;
    while( true ) {
      lVar7 = (int64_t)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_50) break;
      local_68 = *(void**)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar7 * 8);
      iVar1 = *(int *)((int64_t)local_68 + 0x24);
      if (iVar1 == 2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
      else if (iVar1 == 1) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
      else if (iVar1 == 0) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = local_68;
      }
    }
    FUN_002d7300();
  }
  FUN_002cc530(0,FUN_002c8da0);
  if (puVar4 != local_68) {
    puVar8 = local_68;
    if (local_60 != '\0') {
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
      goto LAB_002cc1b6;
    }
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
    }
    if (puVar4 == (void*)0x0) goto LAB_002cc1b6;
    FUN_00d50b20();
    puVar4 = local_68;
  }
  puVar8 = puVar4;
  if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_002cc1b6:
  FUN_002cc530(0,FUN_002c8da0);
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d214d0();
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_002cc530(0,FUN_002c8da0);
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d214d0();
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

