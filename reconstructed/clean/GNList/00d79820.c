// Function: FUN_00d79820
// Address: 00d79820
// Size: 602 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t FUN_00d79820(void)

{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int unaff_ESI;
  int64_t this_ptr;
  void *in_R9;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t local_60;
  code *local_58;
  int64_t local_50;
  int iVar9;
  int *in_stack_ffffffffffffffb8;
  
  lVar8 = *(int64_t *)(this_ptr + 0x18);
  if (lVar8 == 0) {
    FUN_00c8e710();
    lVar8 = local_60;
    if (((char)local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 == lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(int64_t *)(this_ptr + 0x18) = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      local_58 = ((uint64_t)local_58 & 0xffffffffffffff00);
      local_60 = 0;
      in_stack_ffffffffffffffb8 = (int *)0xffffffff;
      iVar2 = 0;
      local_50 = *(int64_t *)(this_ptr + 0x10);
      while( true ) {
        iVar9 = (int)in_stack_ffffffffffffffb8;
        iVar3 = iVar9 + 1;
        in_stack_ffffffffffffffb8 =
             (int *)CONCAT44((int)((uint64_t)in_stack_ffffffffffffffb8 >> 0x20),iVar3);
        if (*(int *)(local_50 + 0xc) <= iVar3) break;
        lVar8 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + (int64_t)iVar9 * 8);
        lVar1 = *(int64_t *)(this_ptr + 0x18);
        lVar6 = (int64_t)*(int *)(lVar1 + 0x18);
        local_60 = lVar8;
        FUN_00c8e340(*(int64_t *)(local_50 + 0x10),1);
        lVar1 = *(int64_t *)(lVar1 + 0x10);
        *(int64_t *)(lVar1 + lVar6) = lVar8;
        *(int *)(lVar1 + 8 + lVar6) = iVar2;
        iVar3 = FUN_00e5d890();
        iVar2 = iVar2 + iVar3;
        iVar3 = (int)((uint64_t)in_stack_ffffffffffffffb8 >> 0x20);
        if (iVar3 != 0) {
          if ((int64_t)in_stack_ffffffffffffffb8 < 0) {
            iVar3 = -iVar3;
          }
          else {
            in_stack_ffffffffffffffb8 =
                 (int *)CONCAT44(iVar3,(int)in_stack_ffffffffffffffb8 - iVar3);
            FUN_00d23690();
            iVar3 = 0;
          }
          in_stack_ffffffffffffffb8 = (int *)CONCAT44(iVar3,(int)in_stack_ffffffffffffffb8);
        }
      }
      FUN_00d79e20();
    }
    local_60 = 0;
    local_58 = FUN_00d79c30;
    _qsort_r(&local_60,0x10,0xd79ec0,in_R9,in_stack_ffffffffffffffb8);
    lVar8 = *(int64_t *)(this_ptr + 0x18);
    uVar7 = *(uint *)(lVar8 + 0x18);
  }
  else {
    uVar7 = *(uint *)(lVar8 + 0x18);
  }
  if ((int)uVar7 < 0x10) {
LAB_00d79a6f:
    lVar8 = 0;
  }
  else {
    uVar7 = (uVar7 >> 4) - 1;
    uVar5 = (uint64_t)(uVar7 >> 1);
    lVar8 = *(int64_t *)(lVar8 + 0x10);
    iVar2 = FUN_00e5d8b0();
    if (iVar2 == unaff_ESI) {
      lVar8 = lVar8 + uVar5 * 0x10;
    }
    else {
      iVar3 = 0;
      do {
        if (iVar2 < unaff_ESI) {
          iVar3 = (int)uVar5 + 1;
          iVar2 = uVar7 - iVar3;
          if ((int)uVar7 < iVar3) goto LAB_00d79a6f;
        }
        else {
          uVar7 = (int)uVar5 - 1;
          iVar2 = uVar7 - iVar3;
          if ((int)uVar7 < iVar3) goto LAB_00d79a6f;
        }
        uVar4 = iVar2 / 2 + iVar3;
        uVar5 = (uint64_t)uVar4;
        lVar8 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
        iVar2 = FUN_00e5d8b0();
      } while (iVar2 != unaff_ESI);
      lVar8 = lVar8 + (int64_t)(int)uVar4 * 0x10;
    }
  }
  return lVar8;
}

