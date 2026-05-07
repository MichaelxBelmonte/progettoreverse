// Function: FUN_00953063
// Address: 00953063
// Size: 549 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Enc...
//   "Index specified: %d; number of blobs: %d"
//   "void pace::fusion::decryptIndexedBlob(const petfusion::EncryptedBlobArray &, const size_t, std::vec...
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00953063(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  void *pvVar4;
  uint64_t uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t arg1;
  void *pvVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_298;
  int64_t lStack_290;
  uint64_t local_288;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar5 = (*(int64_t *)(this_ptr + 0x78) - *(int64_t *)(this_ptr + 0x70) >> 3) *
          -0x5555555555555555;
  if (uVar5 < arg1 || uVar5 - arg1 == 0) {
    FUN_00925fd0();
    uVar3 = FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    uVar10 = FUN_00928ab0("void pace::fusion::decryptIndexedBlob(const petfusion::EncryptedBlobArray &, const size_t, std::vector<uint8_t> &)"
                          ,0x3fb);
    FUN_009cb75b(uVar10,uVar3);
  }
  local_298 = 0;
  lStack_290 = 0;
  local_288 = 0;
  FUN_00952e74(0,&local_298);
  plVar8 = &local_298;
  if (lStack_290 == local_298) {
    plVar8 = (int64_t *)0x0;
  }
  FUN_0098ce6c(plVar8,*(void*)(this_ptr + 0x28),this_ptr + 0x48);
  lVar2 = *(int64_t *)(this_ptr + 0x70);
  pvVar4 = *(void **)(lVar2 + arg1 * 0x18);
  pvVar6 = *(void **)(lVar2 + 8 + arg1 * 0x18);
  uVar5 = (int64_t)pvVar6 - (int64_t)pvVar4;
  lVar7 = *param_2;
  if ((uint64_t)(param_2[1] - lVar7) < uVar5) {
    FUN_00958ec0();
    plVar8 = (int64_t *)(lVar2 + arg1 * 0x18);
    pvVar4 = (void *)*plVar8;
    pvVar6 = (void *)plVar8[1];
    lVar7 = *param_2;
  }
  else if (uVar5 < (uint64_t)(param_2[1] - lVar7)) {
    param_2[1] = uVar5 + lVar7;
  }
  if (pvVar4 != pvVar6) {
    pvVar6 = (void *)((int64_t)pvVar6 - (int64_t)pvVar4);
    pvVar9 = (void *)0x0;
    do {
      *(void*)(lVar7 + (int64_t)pvVar9) =
           *(void*)((int64_t)pvVar4 + (int64_t)pvVar9);
      pvVar9 = (void *)((int64_t)pvVar9 + 1);
    } while (pvVar6 != pvVar9);
  }
  FUN_0098d41a();
  FUN_0098ce7c();
  if (local_298 != 0) {
    lStack_290 = local_298;
    operator_delete(pvVar6);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                      ___stack_chk_fail();
}

