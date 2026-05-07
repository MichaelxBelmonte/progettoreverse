// Function: FUN_00249a80
// Address: 00249a80
// Size: 1051 bytes
// Class: GNFilePath

void FUN_00249a80(void)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  void*puVar5;
  char *pcVar6;
  int64_t *plVar7;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38;
  char local_30 [8];
  
  if ((*(int64_t *)(this_ptr + 0xa0) != 0) == (bool)unaff_SIL) goto LAB_00249e83;
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  plVar7 = local_50;
  pcVar6 = local_30;
  if (local_48[0] != '\0') {
    pcVar6 = local_48;
  }
  local_30[0] = local_48[0];
  *pcVar6 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
    plVar7 = *(int64_t **)(this_ptr + 0x90);
LAB_00249b03:
    FUN_00d50b00();
  }
  else if (local_30[0] == '\0') goto LAB_00249b03;
  (**(code **)(*plVar7 + 0x7b8))();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0xa0);
  if (plVar1 == (int64_t *)0x0) {
    puVar5 = (void*)FUN_00e8fc40();
    FUN_0010c6d0();
    *(void*)((int64_t)puVar5 + 0x1fd) = 0;
    puVar5[0x3f] = 0;
    *puVar5 = &g_024fb340;
    puVar5[2] = &g_024fbed8;
    puVar5[0x27] = &g_024fbf18;
    puVar5[0x28] = &g_024fbf68;
    (*g_024fb358)();
    puVar2 = *(void**)(this_ptr + 0xa0);
    if (puVar2 == puVar5) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xa0) = puVar5;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x4d0))(g_02394e00,g_02394e10);
    plVar1 = *(int64_t **)(this_ptr + 0xa0);
    FUN_0021c9b0();
    FUN_0010bc80();
    local_60 = local_50;
    local_58 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar1 + 0x960))();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    lVar3 = *(int64_t *)(this_ptr + 0xa0);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    local_70 = lVar3;
    FUN_0071fc50(0,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    if (*(int64_t *)(this_ptr + 0xa0) != 0) {
      *(void*)(this_ptr + 0xa0) = 0;
      FUN_00d50b20();
    }
    FUN_01d98b80();
    FUN_01b6d800();
    FUN_01a70ac0();
    (**(code **)(*plVar1 + 0x960))();
    FUN_00d50130();
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00249e83:
  FUN_00223fa0();
  return;
}

