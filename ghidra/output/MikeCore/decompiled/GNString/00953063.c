// Function: FUN_00953063
// Address: 00953063
// Size: 549 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Enc...
//   "Index specified: %d; number of blobs: %d"
//   "void pace::fusion::decryptIndexedBlob(const petfusion::EncryptedBlobArray &, const size_t, std::vec...


void FUN_00953063(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong unaff_RSI;
  void *pvVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong local_298;
  longlong lStack_290;
  undefined8 local_288;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar5 = (*(longlong *)(unaff_RDI + 0x78) - *(longlong *)(unaff_RDI + 0x70) >> 3) *
          -0x5555555555555555;
  if (uVar5 < unaff_RSI || uVar5 - unaff_RSI == 0) {
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
    plVar8 = (longlong *)0x0;
  }
  FUN_0098ce6c(plVar8,*(undefined2 *)(unaff_RDI + 0x28),unaff_RDI + 0x48);
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  pvVar4 = *(void **)(lVar2 + unaff_RSI * 0x18);
  pvVar6 = *(void **)(lVar2 + 8 + unaff_RSI * 0x18);
  uVar5 = (longlong)pvVar6 - (longlong)pvVar4;
  lVar7 = *param_2;
  if ((ulonglong)(param_2[1] - lVar7) < uVar5) {
    FUN_00958ec0();
    plVar8 = (longlong *)(lVar2 + unaff_RSI * 0x18);
    pvVar4 = (void *)*plVar8;
    pvVar6 = (void *)plVar8[1];
    lVar7 = *param_2;
  }
  else if (uVar5 < (ulonglong)(param_2[1] - lVar7)) {
    param_2[1] = uVar5 + lVar7;
  }
  if (pvVar4 != pvVar6) {
    pvVar6 = (void *)((longlong)pvVar6 - (longlong)pvVar4);
    pvVar9 = (void *)0x0;
    do {
      *(undefined1 *)(lVar7 + (longlong)pvVar9) =
           *(undefined1 *)((longlong)pvVar4 + (longlong)pvVar9);
      pvVar9 = (void *)((longlong)pvVar9 + 1);
    } while (pvVar6 != pvVar9);
  }
  FUN_0098d41a();
  FUN_0098ce7c();
  if (local_298 != 0) {
    lStack_290 = local_298;
    operator_delete(pvVar6);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


