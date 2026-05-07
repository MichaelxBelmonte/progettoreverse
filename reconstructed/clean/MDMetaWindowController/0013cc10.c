// Function: FUN_0013cc10
// Address: 0013cc10
// Size: 1763 bytes
// Class: MDMetaWindowController

void FUN_0013cc10(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    local_58 = 0;
    bVar5 = false;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) {
      bVar5 = false;
      local_58 = 0;
    }
    else {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      local_58 = local_40;
      param_1 = local_40;
      if (local_40 == 0) {
        local_58 = 0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0xb8) != 0) {
      FUN_00d50b00();
      bVar4 = false;
      goto LAB_0013cdc0;
    }
  }
  bVar4 = true;
LAB_0013cdc0:
  pvVar7 = _pthread_getspecific((void*)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = 0;
  while( true ) {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = FUN_00e7bdb0();
    param_1 = FUN_00e7bdb0();
    cVar6 = FUN_01252960(param_1,uVar8,&local_40,0);
    if (cVar6 == '\0') break;
    if (local_40 != 0) {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      lVar2 = *(int64_t *)(this_ptr + 0xd0);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == lVar2) break;
    }
    if (local_40 != 0) {
      local_40 = 0;
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
  }
  FUN_00d8ede0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if (local_40 == 0) {
    if (local_58 != 0) {
      FUN_01246780();
      plVar3 = *(int64_t **)(this_ptr + 0x98);
      lVar2 = *(int64_t *)(this_ptr + 0xd0);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar3 + 0x388))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01246780();
    }
  }
  else {
    FUN_01246780();
    plVar3 = *(int64_t **)(this_ptr + 0x98);
    lVar2 = *(int64_t *)(this_ptr + 0xd0);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x388))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01246780();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x968))();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

