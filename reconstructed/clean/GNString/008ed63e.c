// Function: FUN_008ed63e
// Address: 008ed63e
// Size: 612 bytes
// Class: GNString
// String references:
//   "AuthStorage"
//   "timeLimitRecords"
//   "countLimitRecords"
//   "devDataRecords"
//   "secretDataRecords"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008ed63e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xf);
  iVar3 = (**(code **)(*arg1 + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  for (plVar6 = *(int64_t **)(this_ptr + 8); plVar6 != *(int64_t **)(this_ptr + 0x10);
      plVar6 = plVar6 + 0x12) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar3 = iVar3 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (plVar6 = *(int64_t **)(this_ptr + 0x20); plVar6 != *(int64_t **)(this_ptr + 0x28);
      plVar6 = plVar6 + 0xc) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(3,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (plVar6 = *(int64_t **)(this_ptr + 0x38); plVar6 != *(int64_t **)(this_ptr + 0x40);
      plVar6 = plVar6 + 0xb) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(4,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (plVar6 = *(int64_t **)(this_ptr + 0x50); plVar6 != *(int64_t **)(this_ptr + 0x58);
      plVar6 = plVar6 + 0x11) {
    iVar1 = (**(code **)(*plVar6 + 0x18))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar4 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
}

