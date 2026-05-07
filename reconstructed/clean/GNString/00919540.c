// Function: FUN_00919540
// Address: 00919540
// Size: 817 bytes
// Class: GNString
// String references:
//   "PreferenceValues"
//   "boolArray"
//   "int8Array"
//   "int32Array"
//   "int64Array"
//   "stringArray"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00919540(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar7;
  bool bVar8;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(10,0xf);
  iVar3 = (**(code **)(*arg1 + 0x58))();
  iVar3 = iVar2 + iVar1 + iVar3;
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    lVar6 = *(int64_t *)(this_ptr + 8);
    uVar7 = 0;
    do {
      iVar1 = (**(code **)(*arg1 + 0x78))();
      iVar3 = iVar3 + iVar1;
      bVar8 = uVar7 == 0x3f;
      uVar7 = uVar7 + 1;
      if (bVar8) {
        uVar7 = 0;
        lVar6 = lVar6 + 8;
      }
    } while ((lVar6 != (*(uint64_t *)(this_ptr + 0x10) >> 3 & 0xfffffffffffffff8) +
                       *(int64_t *)(this_ptr + 8)) ||
            (uVar7 != ((uint)*(uint64_t *)(this_ptr + 0x10) & 0x3f)));
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x14,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar3 + iVar2 + iVar4 + iVar5;
  for (lVar6 = *(int64_t *)(this_ptr + 0x20); lVar6 != *(int64_t *)(this_ptr + 0x28);
      lVar6 = lVar6 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x1e,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar6 = *(int64_t *)(this_ptr + 0x38); lVar6 != *(int64_t *)(this_ptr + 0x40);
      lVar6 = lVar6 + 4) {
    iVar1 = (**(code **)(*arg1 + 0x90))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x28,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
  for (lVar6 = *(int64_t *)(this_ptr + 0x50); lVar6 != *(int64_t *)(this_ptr + 0x58);
      lVar6 = lVar6 + 8) {
    iVar1 = (**(code **)(*arg1 + 0x98))();
    iVar5 = iVar5 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(0x32,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))
                    (this_ptr,
                     (int)((uint64_t)
                           (*(int64_t *)(this_ptr + 0x70) - *(int64_t *)(this_ptr + 0x68)) >> 3)
                     * -0x55555555);
  iVar4 = iVar1 + iVar5 + iVar2 + iVar3 + iVar4;
  for (lVar6 = *(int64_t *)(this_ptr + 0x68); lVar6 != *(int64_t *)(this_ptr + 0x70);
      lVar6 = lVar6 + 0x18) {
    iVar1 = (**(code **)(*arg1 + 0xa8))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x40))();
  iVar5 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2 + iVar3 + iVar5;
}

