// Function: FUN_01d2b270
// Address: 01d2b270
// Size: 669 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_01d2b270(void)

{
  uint uVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  plVar7 = *(int64_t **)(this_ptr + 0x40);
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar7 + 0x68))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = *(int64_t *)(this_ptr + 0x28);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar3 = false;
    plVar7 = (int64_t *)0x0;
  }
  else {
    lVar8 = 0;
    plVar7 = (int64_t *)0x0;
    bVar3 = false;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar8 * 8);
      if (plVar7 == plVar2) {
        if ((!bVar3) && (plVar7 != (int64_t *)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          plVar7 = plVar2;
        }
        else {
          bVar3 = true;
          plVar7 = plVar2;
        }
      }
      cVar4 = (**(code **)(*plVar7 + 0x488))();
      if ((cVar4 != '\0') && ((char)plVar7[8] == '\0')) {
        *(void*)(plVar7 + 8) = 1;
        FUN_00d50b00();
        (**(code **)(*plVar7 + 0x498))();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
      lVar5 = *(int64_t *)(this_ptr + 0x28);
    } while (lVar8 < *(int *)(lVar5 + 0xc));
  }
  uVar1 = *(uint *)(lVar5 + 0xc);
  if (0 < (int)uVar1) {
    lVar5 = *(int64_t *)(lVar5 + 0x10);
    uVar6 = uVar1 & 3;
    if (uVar1 - 1 < 3) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0;
      do {
        *(void*)(*(int64_t *)(lVar5 + uVar9 * 8) + 0x40) = 0;
        *(void*)(*(int64_t *)(lVar5 + 8 + uVar9 * 8) + 0x40) = 0;
        *(void*)(*(int64_t *)(lVar5 + 0x10 + uVar9 * 8) + 0x40) = 0;
        *(void*)(*(int64_t *)(lVar5 + 0x18 + uVar9 * 8) + 0x40) = 0;
        uVar9 = uVar9 + 4;
      } while ((uVar1 & 0xfffffffc) != (uint)uVar9);
    }
    if (uVar6 != 0) {
      uVar9 = uVar9 & 0xffffffff;
      do {
        *(void*)(*(int64_t *)(lVar5 + uVar9 * 8) + 0x40) = 0;
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  FUN_01d300d0();
  plVar2 = *(int64_t **)(this_ptr + 0x40);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x70))();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

