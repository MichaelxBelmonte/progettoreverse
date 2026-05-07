// Function: FUN_00abd1ab
// Address: 00abd1ab
// Size: 683 bytes
// Class: OsSignatureMac

int FUN_00abd1ab(int64_t param_1,int64_t param_2,void*param_3)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  int iVar7;
  int64_t arg1;
  int64_t this_ptr;
  
  iVar7 = FUN_00abcd74(param_3);
  cVar6 = (**param_3)();
  if (cVar6 != '\0') {
    puVar1 = (void*)(param_2 + 8);
    uVar3 = *(void*)(param_2 + 8);
    uVar4 = *(void*)(param_2 + 0x10);
    if (*(int64_t *)(param_2 + 0x20) != 0) {
      _CFRetain();
    }
    uVar5 = *(void*)(param_1 + 8);
    *(void*)(param_2 + 0x10) = *(void*)(param_1 + 0x10);
    *puVar1 = uVar5;
    FUN_00abdcf0();
    *(void*)(param_1 + 0x10) = uVar4;
    *(void*)(param_1 + 8) = uVar3;
    FUN_00abdcf0();
    FUN_00abb66e();
    cVar6 = (**param_3)();
    if (cVar6 == '\0') {
      iVar7 = iVar7 + 1;
    }
    else {
      puVar2 = (void*)(arg1 + 8);
      uVar3 = *(void*)(arg1 + 8);
      uVar4 = *(void*)(arg1 + 0x10);
      if (*(int64_t *)(arg1 + 0x20) != 0) {
        _CFRetain();
      }
      uVar5 = *puVar1;
      *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
      *puVar2 = uVar5;
      FUN_00abdcf0();
      *(void*)(param_2 + 0x10) = uVar4;
      *puVar1 = uVar3;
      FUN_00abdcf0();
      FUN_00abb66e();
      cVar6 = (**param_3)();
      if (cVar6 == '\0') {
        iVar7 = iVar7 + 2;
      }
      else {
        uVar3 = *(void*)(this_ptr + 8);
        uVar4 = *(void*)(this_ptr + 0x10);
        if (*(int64_t *)(this_ptr + 0x20) != 0) {
          _CFRetain();
        }
        uVar5 = *puVar2;
        *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
        *(void*)(this_ptr + 8) = uVar5;
        FUN_00abdcf0();
        *(void*)(arg1 + 0x10) = uVar4;
        *puVar2 = uVar3;
        FUN_00abdcf0();
        FUN_00abb66e();
        iVar7 = iVar7 + 3;
      }
    }
  }
  return iVar7;
}

