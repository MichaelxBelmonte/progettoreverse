// Function: FUN_00e7dbc0
// Address: 00e7dbc0
// Size: 541 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_00e7dbc0(uint64_t param_1,uint64_t param_2)

{
  void*puVar1;
  void*puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t arg1;
  uint64_t uVar9;
  uint64_t this_ptr;
  uint64_t uVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((7 < param_2) && ((arg1 + param_2 <= this_ptr || (this_ptr + param_2 <= arg1)))) {
    if (param_2 < 0x20) {
      uVar9 = 0;
    }
    else {
      uVar9 = param_2 & 0xffffffffffffffe0;
      uVar8 = (uVar9 - 0x20 >> 5) + 1;
      uVar10 = (uint64_t)((uint)uVar8 & 3);
      if (uVar9 - 0x20 < 0x60) {
        lVar6 = 0;
      }
      else {
        lVar7 = -(uVar8 & 0xfffffffffffffffc);
        lVar6 = 0;
        do {
          uVar3 = ((void*)(arg1 + lVar6))[1];
          puVar1 = (void*)(arg1 + 0x10 + lVar6);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          *(void*)(this_ptr + lVar6) = *(void*)(arg1 + lVar6);
          ((void*)(this_ptr + lVar6))[1] = uVar3;
          puVar1 = (void*)(this_ptr + 0x10 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x20 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x30 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(this_ptr + 0x20 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(this_ptr + 0x30 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x40 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x50 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(this_ptr + 0x40 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(this_ptr + 0x50 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (void*)(arg1 + 0x60 + lVar6);
          uVar3 = puVar1[1];
          puVar2 = (void*)(arg1 + 0x70 + lVar6);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (void*)(this_ptr + 0x60 + lVar6);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (void*)(this_ptr + 0x70 + lVar6);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar6 = lVar6 + 0x80;
          lVar7 = lVar7 + 4;
        } while (lVar7 != 0);
      }
      if (uVar10 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (void*)(lVar6 + arg1 + lVar7);
          uVar3 = puVar2[1];
          puVar1 = (void*)(lVar6 + arg1 + 0x10 + lVar7);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (void*)(this_ptr + lVar6 + lVar7);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (void*)(this_ptr + lVar6 + 0x10 + lVar7);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar7 = lVar7 + 0x20;
        } while (uVar10 << 5 != lVar7);
      }
      if (uVar9 == param_2) {
        return 0;
      }
      if ((param_2 & 0x18) == 0) {
        param_2 = (uint64_t)((uint)param_2 & 0x1f);
        this_ptr = this_ptr + uVar9;
        arg1 = arg1 + uVar9;
        goto LAB_00e7dbf6;
      }
    }
    uVar8 = param_2 & 0xfffffffffffffff8;
    do {
      *(void*)(this_ptr + uVar9) = *(void*)(arg1 + uVar9);
      uVar9 = uVar9 + 8;
    } while (uVar8 != uVar9);
    bVar11 = uVar8 == param_2;
    this_ptr = this_ptr + uVar8;
    param_2 = (uint64_t)((uint)param_2 & 7);
    arg1 = arg1 + uVar8;
    if (bVar11) {
      return 0;
    }
  }
LAB_00e7dbf6:
  uVar8 = param_2 - 1;
  if ((param_2 & 7) != 0) {
    uVar9 = 0;
    do {
      *(void*)(this_ptr + uVar9) = *(void*)(arg1 + uVar9);
      uVar9 = uVar9 + 1;
    } while ((param_2 & 7) != uVar9);
    arg1 = arg1 + uVar9;
    this_ptr = this_ptr + uVar9;
    param_2 = param_2 - uVar9;
  }
  if (6 < uVar8) {
    uVar8 = 0;
    do {
      *(void*)(this_ptr + uVar8) = *(void*)(arg1 + uVar8);
      *(void*)(this_ptr + 1 + uVar8) = *(void*)(arg1 + 1 + uVar8);
      *(void*)(this_ptr + 2 + uVar8) = *(void*)(arg1 + 2 + uVar8);
      *(void*)(this_ptr + 3 + uVar8) = *(void*)(arg1 + 3 + uVar8);
      *(void*)(this_ptr + 4 + uVar8) = *(void*)(arg1 + 4 + uVar8);
      *(void*)(this_ptr + 5 + uVar8) = *(void*)(arg1 + 5 + uVar8);
      *(void*)(this_ptr + 6 + uVar8) = *(void*)(arg1 + 6 + uVar8);
      *(void*)(this_ptr + 7 + uVar8) = *(void*)(arg1 + 7 + uVar8);
      uVar8 = uVar8 + 8;
    } while (param_2 != uVar8);
  }
  return 0;
}

