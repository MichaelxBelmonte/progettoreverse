// Function: FUN_01e1aa30
// Address: 01e1aa30
// Size: 759 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e1aa30(int param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar7;
  int64_t local_58;
  char local_50;
  int64_t *local_38;
  
  if (*arg1 != 0) goto LAB_01e1ab0d;
  FUN_00d8ede0();
  lVar1 = *arg1;
  if (lVar1 == local_58) {
    if (((char)arg1[1] != '\0') || (local_58 == 0)) goto LAB_01e1aaf9;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_01e1aaf2;
    }
  }
  else {
    lVar2 = arg1[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_58;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01e1aaf2:
      local_38 = arg1 + 1;
      *(void*)local_38 = 1;
LAB_01e1aaf9:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01e1ab0d;
    }
    *arg1 = local_58;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = arg1 + 1;
  *(void*)local_38 = 1;
LAB_01e1ab0d:
  (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x378))();
  if (local_58 == 0) {
    local_58 = 0;
  }
  else if (local_50 == '\0') {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d8c7a0();
  if ((0 < param_1) && (iVar4 <= param_1)) {
    param_1 = FUN_00d8c7a0();
    param_1 = param_1 + -1;
  }
  if (param_2 == 0) {
    iVar4 = FUN_00d8c7a0();
    iVar7 = 1;
    lVar1 = *arg1;
  }
  else {
    iVar7 = -1;
    iVar4 = 0;
    lVar1 = *arg1;
  }
  if ((lVar1 == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    if (param_2 == 0) {
      uVar6 = FUN_00e7b4e0();
    }
    else {
      uVar6 = FUN_00e7b4e0();
    }
  }
  else if (param_2 == 0) {
    for (; param_1 != iVar4; param_1 = param_1 + iVar7) {
      FUN_00d8cbc0();
      cVar3 = FUN_00d90d50();
      if (cVar3 != '\0') {
        uVar6 = FUN_00e7b4e0();
        goto LAB_01e1acd4;
      }
    }
    uVar6 = FUN_00e7b4e0();
  }
  else {
    if (param_2 != 1) {
      do {
        FUN_00d8cbc0();
        FUN_00d90d50();
      } while( true );
    }
    for (; param_1 != iVar4; param_1 = param_1 + iVar7) {
      FUN_00d8cbc0();
      cVar3 = FUN_00d90d50();
      if (cVar3 != '\0') {
        uVar6 = FUN_00e7b4e0();
        goto LAB_01e1acd4;
      }
    }
    uVar6 = FUN_00e7b4e0();
  }
LAB_01e1acd4:
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return uVar6;
}

