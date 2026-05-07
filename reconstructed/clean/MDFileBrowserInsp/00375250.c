// Function: FUN_00375250
// Address: 00375250
// Size: 539 bytes
// Class: MDFileBrowserInsp
// === MDFileBrowserInsp properties ===
//   MDFileBrowserInspectorMode _mode


void FUN_00375250(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t this_ptr;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    cVar5 = (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x5e8))();
    if (cVar5 != '\0') {
      plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8);
      FUN_0141cb10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      (**(code **)(*plVar1 + 0x690))();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x698))();
    lVar2 = *(int64_t *)(this_ptr + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_012d1940();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8);
    lVar2 = *(int64_t *)(this_ptr + 0x28);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_0141c4c0(0);
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x690))();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x18);
    lVar3 = *(int64_t *)(this_ptr + 0x38);
    lVar4 = *(int64_t *)(lVar3 + 0xe0);
    if (lVar4 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(lVar3 + 0xe0) = lVar2;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr + 0x38) + 0xd8) + 0x6a8))();
  }
  return;
}

