// Function: FUN_0131df10
// Address: 0131df10
// Size: 701 bytes
// Class: Unknown

void FUN_0131df10(void)

{
  int64_t lVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  int64_t this_ptr;
  int iVar5;
  int iVar6;
  int64_t local_80;
  char local_78;
  
  iVar5 = *(int *)(this_ptr + 0xf8);
  if (iVar5 < 1) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    iVar5 = 1 - iVar5;
    iVar6 = iVar5;
    if (iVar5 < 2) {
      iVar5 = 1;
      iVar6 = 1;
    }
    do {
      FUN_0131dbb0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = **(int64_t **)(*(int64_t *)(this_ptr + 0x100) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    (*pcVar2)();
    do {
      FUN_0131dcc0();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar1 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x100) + 0x10) + 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

