// Function: FUN_002358e0
// Address: 002358e0
// Size: 694 bytes
// Class: MUTool

void FUN_002358e0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *local_38;
  char local_30;
  
  *(int64_t *)(this_ptr + 0xd8) = *arg1;
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00235db0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_019f0f30();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00236020();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar2 = *(int64_t **)(lVar1 + 0x408);
    if (plVar2 != local_38) {
      if (local_30 == '\0') {
        if (local_38 == (int64_t *)0x0) {
          *(void*)(lVar1 + 0x408) = 0;
        }
        else {
          FUN_00d50b00();
          plVar2 = *(int64_t **)(lVar1 + 0x408);
          *(int64_t **)(lVar1 + 0x408) = local_38;
        }
      }
      else {
        local_30 = '\0';
        *(int64_t **)(lVar1 + 0x408) = local_38;
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x90);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x968))(0);
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x90);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_019f0ee0();
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_00234400();
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      FUN_01f27fe0();
      cVar3 = (**(code **)(*local_38 + 0x450))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        lVar1 = *(int64_t *)(this_ptr + 0x90);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01e42250();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

