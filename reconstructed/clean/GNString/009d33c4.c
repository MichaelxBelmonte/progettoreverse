// Function: FUN_009d33c4
// Address: 009d33c4
// Size: 668 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009d33c4(uint64_t param_1,int64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t arg1;
  int64_t this_ptr;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar6 = FUN_009d0902();
  iVar7 = FUN_009d0902();
  if (iVar6 < 0) {
    uVar1 = *(void*)(this_ptr + 0x20);
    uVar8 = *(void*)(this_ptr + 0x18);
    uVar3 = *(void*)(this_ptr + 8);
    uVar4 = *(void*)(this_ptr + 0x10);
    if (iVar7 < 0) {
      *(void*)(this_ptr + 0x20) = *(void*)(param_2 + 0x20);
      *(void*)(this_ptr + 0x18) = *(void*)(param_2 + 0x18);
      uVar5 = *(void*)(param_2 + 8);
      *(void*)(this_ptr + 0x10) = *(void*)(param_2 + 0x10);
      *(void*)(this_ptr + 8) = uVar5;
      *(void*)(param_2 + 8) = uVar3;
      *(void*)(param_2 + 0x10) = uVar4;
      *(void*)(param_2 + 0x18) = uVar8;
      *(void*)(param_2 + 0x20) = uVar1;
      uVar8 = 1;
      goto LAB_009d363e;
    }
    *(void*)(this_ptr + 0x20) = *(void*)(arg1 + 0x20);
    *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
    uVar5 = *(void*)(arg1 + 8);
    *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
    *(void*)(this_ptr + 8) = uVar5;
    *(void*)(arg1 + 8) = uVar3;
    *(void*)(arg1 + 0x10) = uVar4;
    *(void*)(arg1 + 0x18) = uVar8;
    *(void*)(arg1 + 0x20) = uVar1;
    iVar6 = FUN_009d0902();
    uVar8 = 1;
    if (-1 < iVar6) goto LAB_009d363e;
    uVar1 = *(void*)(arg1 + 0x20);
    uVar8 = *(void*)(arg1 + 0x18);
    uVar3 = *(void*)(arg1 + 8);
    uVar4 = *(void*)(arg1 + 0x10);
    *(void*)(arg1 + 0x20) = *(void*)(param_2 + 0x20);
    *(void*)(arg1 + 0x18) = *(void*)(param_2 + 0x18);
    uVar5 = *(void*)(param_2 + 8);
    *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
    *(void*)(arg1 + 8) = uVar5;
    *(void*)(param_2 + 0x20) = uVar1;
    *(void*)(param_2 + 0x18) = uVar8;
    *(void*)(param_2 + 0x10) = uVar4;
    *(void*)(param_2 + 8) = uVar3;
  }
  else {
    uVar8 = 0;
    if (-1 < iVar7) goto LAB_009d363e;
    uVar1 = *(void*)(arg1 + 0x20);
    uVar8 = *(void*)(arg1 + 0x18);
    uVar3 = *(void*)(arg1 + 8);
    uVar4 = *(void*)(arg1 + 0x10);
    *(void*)(arg1 + 0x20) = *(void*)(param_2 + 0x20);
    *(void*)(arg1 + 0x18) = *(void*)(param_2 + 0x18);
    uVar5 = *(void*)(param_2 + 8);
    *(void*)(arg1 + 0x10) = *(void*)(param_2 + 0x10);
    *(void*)(arg1 + 8) = uVar5;
    *(void*)(param_2 + 0x20) = uVar1;
    *(void*)(param_2 + 0x18) = uVar8;
    *(void*)(param_2 + 0x10) = uVar4;
    *(void*)(param_2 + 8) = uVar3;
    iVar6 = FUN_009d0902();
    uVar8 = 1;
    if (-1 < iVar6) goto LAB_009d363e;
    uVar1 = *(void*)(this_ptr + 0x20);
    uVar8 = *(void*)(this_ptr + 0x18);
    uVar3 = *(void*)(this_ptr + 8);
    uVar4 = *(void*)(this_ptr + 0x10);
    *(void*)(this_ptr + 0x20) = *(void*)(arg1 + 0x20);
    *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
    uVar5 = *(void*)(arg1 + 8);
    *(void*)(this_ptr + 0x10) = *(void*)(arg1 + 0x10);
    *(void*)(this_ptr + 8) = uVar5;
    *(void*)(arg1 + 0x20) = uVar1;
    *(void*)(arg1 + 0x18) = uVar8;
    *(void*)(arg1 + 0x10) = uVar4;
    *(void*)(arg1 + 8) = uVar3;
  }
  uVar8 = 2;
LAB_009d363e:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return uVar8;
  }
                      ___stack_chk_fail();
}

