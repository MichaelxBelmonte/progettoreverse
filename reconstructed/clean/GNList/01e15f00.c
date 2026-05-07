// Function: FUN_01e15f00
// Address: 01e15f00
// Size: 565 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e15f00(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  uint64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  
  plVar1 = (int64_t *)this_ptr[0x36];
  if (plVar1 == (int64_t *)0x0) goto LAB_01e16037;
  FUN_00d50b00();
  local_90 = *param_2;
  local_88 = '\0';
  (**(code **)(*plVar1 + 0x18))(arg1,&stack0xffffffffffffffc0,&local_90);
  lVar2 = *param_2;
  if (lVar2 == local_50) {
    if (((char)param_2[1] == '\0') && (local_50 != 0)) {
      if (local_48 != '\0') goto LAB_01e15fb8;
      FUN_00d50b00();
      goto LAB_01e15ff1;
    }
LAB_01e15ff8:
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_50;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_01e15ff1:
      local_58 = param_2 + 1;
      *(void*)local_58 = 1;
      goto LAB_01e15ff8;
    }
    *param_2 = local_50;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01e15fb8:
    local_58 = param_2 + 1;
    *(void*)local_58 = 1;
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01e16037:
  if (*param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_00d8c7a0();
    uVar5 = (uint64_t)uVar4;
    (**(code **)(*this_ptr + 0x980))();
    local_80 = *param_2;
    local_78 = '\0';
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x380))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)this_ptr[0x27];
    (**(code **)(*plVar1 + 0x388))();
    (**(code **)(*plVar1 + 0x3a8))();
    if (*(char *)((int64_t)this_ptr + 0x1a9) != '\0') {
      (**(code **)(*this_ptr + 0x540))();
    }
    (**(code **)(*this_ptr + 0x620))();
    plVar1 = (int64_t *)this_ptr[0x36];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x20))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return arg1 & 0xffffffff | uVar5 << 0x20;
}

