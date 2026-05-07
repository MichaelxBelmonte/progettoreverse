// Function: FUN_00d14ff0
// Address: 00d14ff0
// Size: 1420 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint32_t FUN_00d14ff0(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint32_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  iVar1 = *(int *)(this_ptr + 0x28);
  if ((iVar1 == 9) || (iVar1 == 7)) {
    if (*arg1 == 0) {
      FUN_00d8ede0();
      lVar5 = *arg1;
      if (lVar5 == local_40) {
        if (((char)arg1[1] == '\0') && (local_40 != 0)) {
          if (local_38 != '\0') goto LAB_00d1515e;
          FUN_00d50b00();
          goto LAB_00d151fb;
        }
LAB_00d15202:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar3 = arg1[1];
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_40;
          if (((char)lVar3 != '\0') && (lVar5 != 0)) {
            FUN_00d50b20();
          }
LAB_00d151fb:
          local_48 = arg1 + 1;
          *(void*)local_48 = 1;
          goto LAB_00d15202;
        }
        *arg1 = local_40;
        if (((char)lVar3 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_00d1515e:
        local_48 = arg1 + 1;
        *(void*)local_48 = 1;
      }
      iVar1 = *(int *)(this_ptr + 0x28);
    }
    if (iVar1 == 9) {
      plVar2 = (int64_t *)*arg1;
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar2 + 0x310))();
      if (lVar5 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
    if (iVar1 == 7) {
      plVar2 = (int64_t *)*arg1;
      lVar5 = *(int64_t *)(this_ptr + 0x20);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar4 = (**(code **)(*plVar2 + 0x308))();
      if (lVar5 == 0) {
        return uVar4;
      }
      FUN_00d50b20();
      return uVar4;
    }
  }
  if (*arg1 == 0) {
    FUN_00d43000();
    lVar5 = *arg1;
    if (lVar5 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_00d15292;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00d1528b;
      }
    }
    else {
      lVar3 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_40;
        if (((char)lVar3 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_00d1528b:
        local_48 = arg1 + 1;
        *(void*)local_48 = 1;
LAB_00d15292:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00d152a6;
      }
      *arg1 = local_40;
      if (((char)lVar3 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_48 = arg1 + 1;
    *(void*)local_48 = 1;
  }
LAB_00d152a6:
  lVar5 = *(int64_t *)(this_ptr + 0x20);
  if (lVar5 == 0) {
    FUN_00d43000();
    if (local_40 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar4 = 0;
  switch(*(void*)(this_ptr + 0x28)) {
  case 0:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x50))();
    break;
  case 1:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x2f8))();
    break;
  case 2:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x2d8))();
    break;
  case 3:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x2f0))();
    break;
  case 4:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x2e0))();
    break;
  case 5:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x2e8))();
    break;
  case 6:
    FUN_00d43000();
    lVar3 = *arg1;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != lVar3) {
      uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x300))();
      break;
    }
    uVar4 = 0;
    if (lVar5 == 0) {
      return 0;
    }
    goto LAB_00d15555;
  case 8:
    uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x318))();
  }
  if (lVar5 != 0) {
LAB_00d15555:
    FUN_00d50b20();
  }
  return uVar4;
}

