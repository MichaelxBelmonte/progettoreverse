// Function: FUN_01e125e0
// Address: 01e125e0
// Size: 514 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01e125e0(void)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int extraout_var;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
  if (local_40 == 0) {
    cVar2 = '\0';
  }
  else if (*arg1 == 0) {
    cVar2 = '\0';
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
    cVar2 = (**(code **)(*local_30 + 0x50))();
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    return;
  }
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x370))();
  if ((char)this_ptr[0x2a] != '\0') {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
    if (local_40 == 0) {
      bVar3 = 0;
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x378))();
      bVar3 = (**(code **)(*local_30 + 0x140))();
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 != 0) {
      FUN_01e12400();
    }
  }
  if ((int)this_ptr[0x2d] == 0) {
    iVar1 = *(int *)((int64_t)this_ptr + 0x164);
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
    if (iVar1 <= extraout_var) goto LAB_01e127bf;
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))();
  }
  FUN_00e7b4e0();
  (**(code **)(*this_ptr + 0x968))();
LAB_01e127bf:
  (**(code **)(*this_ptr + 0x620))();
  (**(code **)(*this_ptr + 0x540))();
  return;
}

