// Function: FUN_012d3a20
// Address: 012d3a20
// Size: 1192 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012d3a20(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_58;
  char local_50;
  
  bVar4 = false;
  lVar7 = 0;
  bVar2 = false;
  lVar5 = 0;
LAB_012d3a70:
  FUN_012da450();
  if (local_58 == lVar7) {
    if ((bVar2) || (local_58 == 0)) {
joined_r0x012d3b3a:
      lVar6 = lVar7;
      bVar3 = bVar2;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        FUN_00d50b00();
        goto LAB_012d3b50;
      }
      lVar6 = lVar7;
      bVar3 = true;
    }
  }
  else {
    lVar6 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        lVar7 = local_58;
LAB_012d3b50:
        bVar2 = true;
        goto joined_r0x012d3b3a;
      }
    }
    else {
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
    }
  }
  bVar2 = bVar3;
  lVar7 = lVar6;
  if (lVar7 != 0) {
    if (lVar5 == lVar7) {
      if (((bVar2) && (!bVar4)) && (lVar5 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
        lVar6 = lVar5;
        goto LAB_012d3bf0;
      }
      lVar1 = *(int64_t *)(this_ptr + 0x148);
    }
    else {
      if (bVar2) {
        FUN_00d50b00();
      }
      lVar6 = lVar7;
      bVar3 = bVar2;
      if ((bVar4) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_012d3bf0:
      lVar1 = *(int64_t *)(this_ptr + 0x148);
      lVar5 = lVar6;
      bVar4 = bVar3;
    }
    if (lVar1 != 0) {
      *(void*)(this_ptr + 0x148) = 0;
      FUN_00d50b20();
    }
    goto LAB_012d3a70;
  }
  if (((lVar5 != 0) && (*(int *)(*(int64_t *)(lVar5 + 0x10) + 0xc) != 0)) &&
     (lVar7 = *(int64_t *)(this_ptr + 0x148), lVar7 != lVar5)) {
    FUN_00d50b00();
    *(int64_t *)(this_ptr + 0x148) = lVar5;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  lVar7 = 0;
  do {
    FUN_012da450();
    if (local_58 == lVar7) {
      if ((bVar2) || (local_58 == 0)) {
joined_r0x012d3d95:
        lVar6 = lVar7;
        bVar3 = bVar2;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_012d3db0;
        }
        lVar6 = lVar7;
        bVar3 = true;
      }
    }
    else {
      lVar6 = local_58;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar2) && (lVar7 != 0)) {
          FUN_00d50b20();
          lVar7 = local_58;
LAB_012d3db0:
          bVar2 = true;
          goto joined_r0x012d3d95;
        }
      }
      else {
        if ((bVar2) && (lVar7 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
      }
    }
    bVar2 = bVar3;
    lVar7 = lVar6;
    if (lVar7 == 0) {
      if (lVar5 != 0) {
        if ((*(int *)(*(int64_t *)(lVar5 + 0x10) + 0xc) != 0) &&
           (lVar7 = *(int64_t *)(this_ptr + 0x150), lVar7 != lVar5)) {
          FUN_00d50b00();
          *(int64_t *)(this_ptr + 0x150) = lVar5;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      return;
    }
    if (lVar5 == lVar7) {
      if (((bVar2) && (!bVar4)) && (lVar5 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
        lVar6 = lVar5;
        goto LAB_012d3e60;
      }
      lVar1 = *(int64_t *)(this_ptr + 0x150);
    }
    else {
      if (bVar2) {
        FUN_00d50b00();
      }
      lVar6 = lVar7;
      bVar3 = bVar2;
      if ((bVar4) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
LAB_012d3e60:
      lVar1 = *(int64_t *)(this_ptr + 0x150);
      lVar5 = lVar6;
      bVar4 = bVar3;
    }
    if (lVar1 != 0) {
      *(void*)(this_ptr + 0x150) = 0;
      FUN_00d50b20();
    }
  } while( true );
}

