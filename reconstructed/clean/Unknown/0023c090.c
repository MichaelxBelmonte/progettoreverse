// Function: FUN_0023c090
// Address: 0023c090
// Size: 1239 bytes
// Class: Unknown

void FUN_0023c090(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  char *pcVar5;
  int64_t *plVar6;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  lVar1 = *(int64_t *)(this_ptr + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if ((lVar1 == 0) != (bool)unaff_SIL) {
    return;
  }
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar6 = local_48;
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = *(int64_t **)(this_ptr + 0x90);
  }
  else if (local_38[0] != '\0') goto LAB_0023c137;
  FUN_00d50b00();
LAB_0023c137:
  (**(code **)(*plVar6 + 0x7b8))();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_SIL == '\0') {
    lVar1 = *(int64_t *)(this_ptr + 200);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d98b80();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 200);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50130();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 200) != 0) {
      *(void*)(this_ptr + 200) = 0;
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar4 = &g_0266fa08;
    puVar4[2] = &g_02670338;
    puVar4[0x27] = &g_02670378;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    puVar4[0x31] = 0x100000000;
    *(void*)(puVar4 + 0x32) = 0;
    *(void*)((int64_t)puVar4 + 0x194) = 0;
    puVar4[0x33] = 0;
    *(void*)(puVar4 + 0x34) = 0;
    puVar4[0x35] = 0;
    (*g_0266fa20)();
    FUN_01c87040();
    FUN_01c86380();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar3 = *(void**)(this_ptr + 200);
    if (puVar3 != puVar4) {
      FUN_00d50b00();
      *(void**)(this_ptr + 200) = puVar4;
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(int64_t *)(this_ptr + 0x98);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    lVar1 = *(int64_t *)(this_ptr + 200);
    if (lVar1 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 200);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
    }
    FUN_01c87040();
    local_58 = local_48;
    local_50 = 0;
    if (local_40[0] == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_50 = '\x01';
    FUN_0071fc50(0,&local_58);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0021f1f0();
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  return;
}

