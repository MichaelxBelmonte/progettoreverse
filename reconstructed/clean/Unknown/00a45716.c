// Function: FUN_00a45716
// Address: 00a45716
// Size: 734 bytes
// Class: Unknown
// String references:
//   "Attempt to add this object to the entity metadata twice. The object has entityId: %d and instanceId...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "void license_services::LsEntityUtilsArrayEntry::add(license_services::LsArrayEntryWire &)"

void FUN_00a45716(void)

{
  uint64_t uVar1;
  void *pvVar2;
  void*puVar3;
  code *pcVar4;
  int64_t lVar5;
  void *pvVar6;
  _Unwind_Exception *exception_object;
  void *pvVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  
  lVar5 = FUN_00a4559c();
  if (lVar5 != -1) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void license_services::LsEntityUtilsArrayEntry::add(license_services::LsArrayEntryWire &)"
                 ,0x68);
    FUN_009c78cb();
  }
  FUN_009b4be0();
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  puVar3 = *(void**)(lVar5 + 0x18);
  if (puVar3 == *(void**)(lVar5 + 0x20)) {
    lVar8 = *(int64_t *)(lVar5 + 0x10);
    pvVar7 = (void *)((int64_t)puVar3 - lVar8);
    uVar1 = ((int64_t)pvVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (int64_t)*(void**)(lVar5 + 0x20) - lVar8;
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    exception_object = (_Unwind_Exception *)0xfffffffffffffff;
    if (0xffffffffffffffe < (uint64_t)(lVar9 >> 3)) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) {
        FUN_00a45baa();
        *(void **)(uVar10 + 0x50) = pvVar7;
        __Unwind_Resume(exception_object);
                            pcVar4 = invalidInstructionException();
        (*pcVar4)();
      }
      pvVar6 = operator_new(0xffffffff);
    }
    pvVar2 = (void *)((int64_t)pvVar6 + uVar10 * 8);
    lVar9 = (int64_t)pvVar6 + ((int64_t)pvVar7 >> 3) * 8 + 8;
    *(void*)(lVar9 + -8) = *(void*)(arg1 + 0x18);
    if (0 < (int64_t)pvVar7) {
      _memcpy(pvVar2,pvVar7,(size_t)lVar8);
    }
    *(void **)(lVar5 + 0x10) = pvVar6;
    *(int64_t *)(lVar5 + 0x18) = lVar9;
    *(void **)(lVar5 + 0x20) = pvVar2;
    if (lVar8 != 0) {
      operator_delete(pvVar2);
    }
  }
  else {
    *puVar3 = *(void*)(arg1 + 0x18);
    *(void**)(lVar5 + 0x18) = puVar3 + 1;
  }
  lVar5 = *(int64_t *)(this_ptr + 0x10);
  lVar8 = *(int64_t *)(lVar5 + 0x50);
  if (lVar8 == *(int64_t *)(lVar5 + 0x58)) {
    lVar8 = (lVar8 - *(int64_t *)(lVar5 + 0x48) >> 5) * -0x71c71c71c71c71c7;
    if (0xe38e38e38e38e3 < lVar8 + 1U) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_00a45db4(lVar5 + 0x58,lVar8);
    FUN_00a65fa8();
    FUN_00a45d24();
    FUN_00a24734();
  }
  else {
    FUN_00a65fa8();
    *(int64_t *)(lVar5 + 0x50) = lVar8 + 0x120;
  }
  return;
}

