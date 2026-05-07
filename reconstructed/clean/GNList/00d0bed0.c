// Function: FUN_00d0bed0
// Address: 00d0bed0
// Size: 886 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d0bed0(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  int64_t *plVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t *local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  lVar3 = local_40;
  switch((int)arg1[0xc]) {
  case 0:
    FUN_00ca5c10();
    if (local_40 == 0) {
LAB_00d0c061:
      bVar1 = false;
      lVar3 = 0;
    }
    else {
      bVar1 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    break;
  case 1:
    FUN_00ca91d0();
    if (local_40 == 0) goto LAB_00d0c061;
    bVar1 = true;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    break;
  case 2:
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_00026420();
    (**(code **)(*plVar2 + 0x18))();
    (**(code **)(*plVar2 + 0x5f0))();
    if (local_40 == 0) {
      lVar3 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    FUN_00d50b20();
    break;
  case 3:
    FUN_00dc0c90();
    if (local_40 == 0) {
      lVar3 = 0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    break;
  default:
    *(void*)(this_ptr + 1) = 0;
    lVar3 = 0;
    goto LAB_00d0c220;
  }
  if (lVar3 != 0) {
    (**(code **)(*arg1 + 0x608))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*arg1 + 0x608))();
      (**(code **)(*local_88 + 0x368))();
      if (local_40 == lVar3) {
        if (!bVar1) {
          if (local_38 != '\0') goto LAB_00d0c1f3;
          FUN_00d50b00();
        }
LAB_00d0c1d1:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        lVar3 = local_40;
        if (bVar1) {
          FUN_00d50b20();
          goto LAB_00d0c1d1;
        }
      }
      else {
        lVar3 = local_40;
        if (bVar1) {
          FUN_00d50b20();
        }
      }
LAB_00d0c1f3:
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      goto LAB_00d0c220;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
LAB_00d0c220:
  *this_ptr = lVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

