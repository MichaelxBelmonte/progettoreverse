// Function: FUN_00abcd74
// Address: 00abcd74
// Size: 1013 bytes
// Class: OsSignatureMac

uint64_t FUN_00abcd74(void*param_1,int64_t param_2)

{
  void*puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  char cVar5;
  char cVar6;
  int64_t arg1;
  int64_t this_ptr;
  
  cVar5 = (**param_1)();
  cVar6 = (**param_1)();
  if (cVar5 == '\0') {
    if (cVar6 == '\0') {
      return 0;
    }
    puVar1 = (void*)(arg1 + 8);
    uVar2 = *(void*)(arg1 + 8);
    uVar3 = *(void*)(arg1 + 0x10);
    if (*(int64_t *)(arg1 + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(void*)(param_2 + 8);
    *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(void*)(param_2 + 0x10) = uVar3;
    *(void*)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (**param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *(void*)(this_ptr + 8);
    uVar3 = *(void*)(this_ptr + 0x10);
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *puVar1;
    *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
    *(void*)(this_ptr + 8) = uVar4;
    FUN_00abdcf0();
    *(void*)(arg1 + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
  }
  else {
    if (cVar6 != '\0') {
      uVar2 = *(void*)(this_ptr + 8);
      uVar3 = *(void*)(this_ptr + 0x10);
      if (*(int64_t *)(this_ptr + 0x20) != 0) {
        _CFRetain();
      }
      uVar4 = *(void*)(param_2 + 8);
      *(void*)(this_ptr + 0x10) = *(void*)(param_2 + 0x10);
      *(void*)(this_ptr + 8) = uVar4;
      FUN_00abdcf0();
      *(void*)(param_2 + 0x10) = uVar3;
      *(void*)(param_2 + 8) = uVar2;
      FUN_00abdcf0();
      FUN_00abb66e();
      return 1;
    }
    uVar2 = *(void*)(this_ptr + 8);
    uVar3 = *(void*)(this_ptr + 0x10);
    if (*(int64_t *)(this_ptr + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(void*)(arg1 + 8);
    *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
    *(void*)(this_ptr + 8) = uVar4;
    FUN_00abdcf0();
    puVar1 = (void*)(arg1 + 8);
    *(void*)(arg1 + 0x10) = uVar3;
    *puVar1 = uVar2;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar5 = (**param_1)();
    if (cVar5 == '\0') {
      return 1;
    }
    uVar2 = *puVar1;
    uVar3 = *(void*)(arg1 + 0x10);
    if (*(int64_t *)(arg1 + 0x20) != 0) {
      _CFRetain();
    }
    uVar4 = *(void*)(param_2 + 8);
    *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
    *puVar1 = uVar4;
    FUN_00abdcf0();
    *(void*)(param_2 + 0x10) = uVar3;
    *(void*)(param_2 + 8) = uVar2;
    FUN_00abdcf0();
  }
  FUN_00abb66e();
  return 2;
}

