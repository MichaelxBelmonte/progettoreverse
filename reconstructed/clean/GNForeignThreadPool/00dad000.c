// Function: FUN_00dad000
// Address: 00dad000
// Size: 591 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void FUN_00dad000(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00c8e830();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00c92170();
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_0256d868;
    puVar2[2] = 0;
    *(void*)((int64_t)puVar2 + 0x1c) = 0;
    *(void*)((int64_t)puVar2 + 0x24) = 0;
    *(void*)((int64_t)puVar2 + 0x2c) = 0;
    (*g_0256d880)();
    FUN_00cccfe0();
    FUN_00d50b20();
    FUN_00ccce80();
    uVar3 = FUN_00daa940();
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (uVar3 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        uVar3 = FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_50 = lVar1;
      local_48 = '\0';
      (**(code **)(*arg1 + 0x618))(uVar3,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

