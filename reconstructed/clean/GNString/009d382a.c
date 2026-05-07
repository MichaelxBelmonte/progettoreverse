// Function: FUN_009d382a
// Address: 009d382a
// Size: 583 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_009d382a(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t arg1;
  int64_t this_ptr;
  uint32_t local_5c;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_5c = FUN_009d3660(param_1,param_2,param_4);
  iVar7 = FUN_009d0902();
  if (iVar7 < 0) {
    uVar1 = *(void*)(param_1 + 0x20);
    uVar3 = *(void*)(param_1 + 0x18);
    uVar4 = *(void*)(param_1 + 8);
    uVar5 = *(void*)(param_1 + 0x10);
    *(void*)(param_1 + 0x20) = *(void*)(param_3 + 0x20);
    *(void*)(param_1 + 0x18) = *(void*)(param_3 + 0x18);
    uVar6 = *(void*)(param_3 + 8);
    *(void*)(param_1 + 0x10) = *(void*)(param_3 + 0x10);
    *(void*)(param_1 + 8) = uVar6;
    *(void*)(param_3 + 0x20) = uVar1;
    *(void*)(param_3 + 0x18) = uVar3;
    *(void*)(param_3 + 0x10) = uVar5;
    *(void*)(param_3 + 8) = uVar4;
    iVar7 = FUN_009d0902();
    if (iVar7 < 0) {
      uVar1 = *(void*)(param_2 + 0x20);
      uVar3 = *(void*)(param_2 + 0x18);
      uVar4 = *(void*)(param_2 + 8);
      uVar5 = *(void*)(param_2 + 0x10);
      *(void*)(param_2 + 0x20) = *(void*)(param_1 + 0x20);
      *(void*)(param_2 + 0x18) = *(void*)(param_1 + 0x18);
      uVar6 = *(void*)(param_1 + 8);
      *(void*)(param_2 + 0x10) = *(void*)(param_1 + 0x10);
      *(void*)(param_2 + 8) = uVar6;
      *(void*)(param_1 + 0x20) = uVar1;
      *(void*)(param_1 + 0x18) = uVar3;
      *(void*)(param_1 + 0x10) = uVar5;
      *(void*)(param_1 + 8) = uVar4;
      iVar7 = FUN_009d0902();
      if (iVar7 < 0) {
        uVar1 = *(void*)(arg1 + 0x20);
        uVar3 = *(void*)(arg1 + 0x18);
        uVar4 = *(void*)(arg1 + 8);
        uVar5 = *(void*)(arg1 + 0x10);
        *(void*)(arg1 + 0x20) = *(void*)(param_2 + 0x20);
        *(void*)(arg1 + 0x18) = *(void*)(param_2 + 0x18);
        uVar6 = *(void*)(param_2 + 8);
        *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
        *(void*)(arg1 + 8) = uVar6;
        *(void*)(param_2 + 0x20) = uVar1;
        *(void*)(param_2 + 0x18) = uVar3;
        *(void*)(param_2 + 0x10) = uVar5;
        *(void*)(param_2 + 8) = uVar4;
        iVar7 = FUN_009d0902();
        if (iVar7 < 0) {
          uVar1 = *(void*)(this_ptr + 0x20);
          uVar3 = *(void*)(this_ptr + 0x18);
          uVar4 = *(void*)(this_ptr + 8);
          uVar5 = *(void*)(this_ptr + 0x10);
          *(void*)(this_ptr + 0x20) = *(void*)(arg1 + 0x20);
          *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
          uVar6 = *(void*)(arg1 + 8);
          *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
          *(void*)(this_ptr + 8) = uVar6;
          *(void*)(arg1 + 0x20) = uVar1;
          *(void*)(arg1 + 0x18) = uVar3;
          *(void*)(arg1 + 0x10) = uVar5;
          *(void*)(arg1 + 8) = uVar4;
          local_5c = local_5c + 4;
        }
        else {
          local_5c = local_5c + 3;
        }
      }
      else {
        local_5c = local_5c + 2;
      }
    }
    else {
      local_5c = local_5c + 1;
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return local_5c;
  }
                      ___stack_chk_fail();
}

