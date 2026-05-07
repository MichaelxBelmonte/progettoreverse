// Function: FUN_00611860
// Address: 00611860
// Size: 619 bytes
// Class: MDMetaWindowController

void FUN_00611860(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01e534b0();
  plVar1 = *(int64_t **)(this_ptr + 0x70);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00aea5e0(g_023908e4);
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xab8))();
    plVar1 = *(int64_t **)(this_ptr + 0x70);
    FUN_00aea5e0(0);
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xac8))();
    plVar1 = *(int64_t **)(this_ptr + 0x70);
    FUN_00aea5e0(0);
    FUN_00aea6b0();
    FUN_00d46dc0();
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    (**(code **)(*plVar1 + 0x988))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar4 + 0xc) = 0;
    *(void*)((int64_t)puVar4 + 0x14) = 0;
    *(void*)((int64_t)puVar4 + 0x1a) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(void*)((int64_t)puVar4 + 0x44) = 0;
    *(void*)((int64_t)puVar4 + 0x4c) = 0;
    *puVar4 = &g_0252f488;
    (*g_0252f4a0)();
    lVar2 = g_026d8928;
    if (g_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_026d8930;
    if (g_026d8930 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar3;
    local_78 = '\x01';
    local_70 = 0;
    local_68 = '\0';
    FUN_00d31230(&local_70,&local_80);
    local_40 = local_30;
    local_38 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_38 = '\x01';
    FUN_00d4c980();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_58 = '\0';
    local_60 = puVar4;
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x9b8))();
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

