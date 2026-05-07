// Function: FUN_008d865e
// Address: 008d865e
// Size: 553 bytes
// Class: GNList
// String references:
//   "ContentSymmetricKeys"
//   "licenseDataCommonKey"
//   "productSpecificKey"
//   "nonce"
//   "allowedPlayerIds"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_008d865e(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar3 = (**(code **)(*arg1 + 0x20))();
  if (*(char *)(this_ptr + 0xd8) != '\0') {
    iVar4 = (**(code **)(*arg1 + 0x30))(1,0xc);
    iVar5 = FUN_008d7c1a();
    iVar6 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar4 + iVar3 + iVar5 + iVar6;
  }
  if (*(char *)(this_ptr + 0xd9) != '\0') {
    iVar4 = (**(code **)(*arg1 + 0x30))(2,0xc);
    iVar5 = FUN_008d7c1a();
    iVar6 = (**(code **)(*arg1 + 0x38))();
    iVar3 = iVar4 + iVar3 + iVar5 + iVar6;
  }
  iVar4 = (**(code **)(*arg1 + 0x30))(3,0xf);
  iVar5 = (**(code **)(*arg1 + 0x58))();
  iVar5 = iVar4 + iVar3 + iVar5;
  for (lVar9 = *(int64_t *)(this_ptr + 0xa8); lVar9 != *(int64_t *)(this_ptr + 0xb0);
      lVar9 = lVar9 + 1) {
    iVar3 = (**(code **)(*arg1 + 0x80))();
    iVar5 = iVar5 + iVar3;
  }
  iVar4 = (**(code **)(*arg1 + 0x60))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(4,0xe);
  iVar3 = (**(code **)(*arg1 + 0x68))();
  iVar3 = iVar4 + iVar5 + iVar6 + iVar7 + iVar3;
  plVar1 = *(int64_t **)(this_ptr + 0xc0);
  while (plVar1 != (int64_t *)(this_ptr + 200)) {
    iVar4 = (**(code **)(*arg1 + 0x90))();
    plVar2 = (int64_t *)plVar1[1];
    if ((int64_t *)plVar1[1] == (int64_t *)0x0) {
      plVar8 = (int64_t *)plVar1[2];
      if ((int64_t *)*plVar8 != plVar1) {
        do {
          plVar1 = (int64_t *)plVar1[2];
          plVar8 = (int64_t *)plVar1[2];
        } while ((int64_t *)*plVar8 != plVar1);
      }
    }
    else {
      do {
        plVar8 = plVar2;
        plVar2 = (int64_t *)*plVar8;
      } while ((int64_t *)*plVar8 != (int64_t *)0x0);
    }
    iVar3 = iVar3 + iVar4;
    plVar1 = plVar8;
  }
  iVar4 = (**(code **)(*arg1 + 0x70))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar6 = (**(code **)(*arg1 + 0x40))();
  iVar7 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar4 + iVar3 + iVar5 + iVar6 + iVar7;
}

