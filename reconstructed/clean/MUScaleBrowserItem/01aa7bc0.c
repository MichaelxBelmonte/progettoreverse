// Function: FUN_01aa7bc0
// Address: 01aa7bc0
// Size: 507 bytes
// Class: MUScaleBrowserItem

void FUN_01aa7bc0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t local_50;
  char local_48;
  
  if (*(int64_t **)(this_ptr + 0x18) != (int64_t *)0x0) {
    cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x390))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x5e8))();
      if (cVar3 != '\0') {
        plVar1 = *(int64_t **)(this_ptr + 0x18);
        FUN_0141cb10();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        (**(code **)(*plVar1 + 0x690))();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x698))();
      }
      plVar1 = *(int64_t **)(this_ptr + 0x28);
      lVar2 = *(int64_t *)(this_ptr + 0x18);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x128))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x10);
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      *(void*)(this_ptr + 0x20) = 0;
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x468))();
    (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x470))();
    FUN_00d50130();
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      *(void*)(this_ptr + 0x10) = 0;
      FUN_00d50b20();
    }
  }
  return;
}

