// Function: FUN_00a4aad6
// Address: 00a4aad6
// Size: 727 bytes
// Class: Unknown
// String references:
//   "Attempt to add this object to the entity metadata twice. The object has entityId: %d and instanceId...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "void license_services::LsEntityUtilsDeveloperBlock::add(license_services::LsDeveloperBlockWire &)"


void FUN_00a4aad6(void)

{
  ulonglong uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong lVar5;
  void *pvVar6;
  _Unwind_Exception *exception_object;
  void *pvVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar5 = FUN_00a4a95c();
  if (lVar5 != -1) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void license_services::LsEntityUtilsDeveloperBlock::add(license_services::LsDeveloperBlockWire &)"
                 ,0x68);
    FUN_009c78cb();
  }
  FUN_009b4be0();
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  puVar3 = *(undefined8 **)(lVar5 + 0x18);
  if (puVar3 == *(undefined8 **)(lVar5 + 0x20)) {
    lVar8 = *(longlong *)(lVar5 + 0x10);
    pvVar7 = (void *)((longlong)puVar3 - lVar8);
    uVar1 = ((longlong)pvVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (longlong)*(undefined8 **)(lVar5 + 0x20) - lVar8;
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    exception_object = (_Unwind_Exception *)0xfffffffffffffff;
    if (0xffffffffffffffe < (ulonglong)(lVar9 >> 3)) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) {
        FUN_00a4af66();
        *(void **)(uVar10 + 0x50) = pvVar7;
        __Unwind_Resume(exception_object);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pvVar6 = operator_new(0xffffffff);
    }
    pvVar2 = (void *)((longlong)pvVar6 + uVar10 * 8);
    lVar9 = (longlong)pvVar6 + ((longlong)pvVar7 >> 3) * 8 + 8;
    *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(unaff_RSI + 0x18);
    if (0 < (longlong)pvVar7) {
      _memcpy(pvVar2,pvVar7,(size_t)lVar8);
    }
    *(void **)(lVar5 + 0x10) = pvVar6;
    *(longlong *)(lVar5 + 0x18) = lVar9;
    *(void **)(lVar5 + 0x20) = pvVar2;
    if (lVar8 != 0) {
      operator_delete(pvVar2);
    }
  }
  else {
    *puVar3 = *(undefined8 *)(unaff_RSI + 0x18);
    *(undefined8 **)(lVar5 + 0x18) = puVar3 + 1;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x10);
  lVar8 = *(longlong *)(lVar5 + 0x50);
  if (lVar8 == *(longlong *)(lVar5 + 0x58)) {
    lVar8 = lVar8 - *(longlong *)(lVar5 + 0x48) >> 8;
    if (lVar8 + 1U >> 0x38 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_00a31730(lVar5 + 0x58,lVar8);
    FUN_00a9aea4();
    FUN_00a316a0();
    FUN_00a8d548();
  }
  else {
    FUN_00a9aea4();
    *(longlong *)(lVar5 + 0x50) = lVar8 + 0x100;
  }
  return;
}


