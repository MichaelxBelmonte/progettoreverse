// Function: FUN_01e17860
// Address: 01e17860
// Size: 576 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e17860(uint32_t param_1,int param_2)

{
  char cVar1;
  uint32_t uVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *local_40;
  char local_38;
  
  if (*(char *)((int64_t)this_ptr + 0x161) == '\0') {
    FUN_01f27fe0();
    cVar1 = (**(code **)(*local_40 + 0x6c0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  cVar1 = FUN_01e42250();
  if (cVar1 == '\0') {
    return;
  }
  if ((int64_t *)this_ptr[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x36] + 0x50))(param_1,param_2);
  }
  *(int *)((int64_t)this_ptr + 0x194) = param_2;
  if ((*(char *)((int64_t)this_ptr + 0x1d2) == '\0') || (uVar2 = 0xffffffff, param_2 < 2)) {
    uVar2 = FUN_01eacf20(param_1);
  }
  *(void*)(this_ptr + 0x33) = uVar2;
  uVar2 = FUN_01eacdb0(param_1);
  *(void*)((int64_t)this_ptr + 0x1cc) = uVar2;
  uVar3 = *(uint *)(this_ptr + 0x33);
  if (uVar3 == 0xffffffff) {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
    uVar3 = FUN_00d8c7a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)((int64_t)this_ptr + 0x194) - 1U < 3) {
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
      uVar3 = FUN_00d8c7a0();
      uVar6 = (uint64_t)uVar3;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0;
    if (*(int *)((int64_t)this_ptr + 0x194) == 3) {
      iVar4 = FUN_01eacf20(param_1);
      if ((iVar4 == -1) ||
         ((iVar4 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3e0))(), iVar4 == -1 &&
          (iVar4 = (**(code **)(*(int64_t *)this_ptr[0x27] + 0x3d8))(), iVar4 == 0)))) {
        uVar5 = FUN_00e7b4e0();
      }
      else {
        uVar5 = FUN_01eab6a0();
      }
    }
    else {
      if (*(int *)((int64_t)this_ptr + 0x194) != 2) goto LAB_01e17a5e;
      uVar5 = FUN_01e17b30(param_1);
    }
    if ((uint)uVar5 != 0xffffffff) {
      uVar6 = uVar5 >> 0x20;
      uVar3 = (uint)uVar5;
    }
  }
LAB_01e17a5e:
  (**(code **)(*this_ptr + 0x968))();
  this_ptr[0x34] = (uint64_t)uVar3 | uVar6 << 0x20;
  if ((int64_t *)this_ptr[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x38] + 0x20))();
  }
  return;
}

