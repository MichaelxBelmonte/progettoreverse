// Function: FUN_01d2c5c0
// Address: 01d2c5c0
// Size: 841 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d2c5c0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t lVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *local_80;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t **)(this_ptr + 0x20) == (int64_t *)*arg1) {
    return;
  }
  if (((int64_t *)*arg1 != (int64_t *)0x0) &&
     (cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x50))(), cVar3 != '\0')) {
    return;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x28);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar2 = false;
    plVar8 = (int64_t *)0x0;
  }
  else {
    lVar7 = 0;
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
      if (plVar8 == plVar1) {
        if ((!bVar2) && (plVar8 != (int64_t *)0x0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar2 = true;
          plVar8 = plVar1;
        }
        else {
          bVar2 = true;
          plVar8 = plVar1;
        }
      }
      cVar3 = (**(code **)(*plVar8 + 0x488))();
      if (cVar3 != '\0') {
        FUN_00d50b00();
        (**(code **)(*plVar8 + 0x4a8))();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
      lVar5 = *(int64_t *)(this_ptr + 0x28);
    } while (lVar7 < *(int *)(lVar5 + 0xc));
  }
  FUN_019ba260();
  lVar5 = *arg1;
  if (lVar5 == local_48) {
    if (((char)arg1[1] == '\0') && (local_48 != 0)) {
      if (local_40[0] != '\0') goto LAB_01d2c7b0;
      FUN_00d50b00();
      goto LAB_01d2c7ec;
    }
  }
  else {
    lVar7 = arg1[1];
    if (local_40[0] != '\0') {
      *arg1 = local_48;
      if (((char)lVar7 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_01d2c7b0:
      local_80 = arg1 + 1;
      *(void*)local_80 = 1;
      goto LAB_01d2c807;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *arg1 = local_48;
    if (((char)lVar7 != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_01d2c7ec:
    local_80 = arg1 + 1;
    *(void*)local_80 = 1;
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01d2c807:
  lVar5 = *arg1;
  local_40[0] = '\0';
  FUN_00d243f0();
  if ((local_40[0] != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x20) + 0xc) == 0) {
    *(void*)(this_ptr + 0xa8) = 0xffffffff;
  }
  else {
    FUN_00d23340();
    pcVar6 = local_38;
    if (local_40[0] != '\0') {
      pcVar6 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar6 = '\0';
    if ((local_40[0] != '\0') && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (lVar5 != 0)) {
      FUN_00d50b00();
    }
    uVar4 = FUN_00d23d20();
    *(void*)(this_ptr + 0xa8) = uVar4;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d2c360();
  if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

