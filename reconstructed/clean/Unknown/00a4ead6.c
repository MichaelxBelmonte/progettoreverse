// Function: FUN_00a4ead6
// Address: 00a4ead6
// Size: 715 bytes
// Class: Unknown
// String references:
//   "Attempt to add this object to the entity metadata twice. The object has entityId: %d and instanceId...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...
//   "void license_services::LsEntityUtilsSignedDigest::add(license_services::LsSignedDigestWire &)"

void FUN_00a4ead6(void)

{
  uint64_t uVar1;
  void *pvVar2;
  void*puVar3;
  int64_t lVar4;
  void *pvVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  
  lVar4 = FUN_00a4e95c();
  if (lVar4 != -1) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("void license_services::LsEntityUtilsSignedDigest::add(license_services::LsSignedDigestWire &)"
                 ,0x68);
    FUN_009c78cb();
  }
  FUN_009b4be0();
  lVar4 = *(int64_t *)(this_ptr + 0x10);
  puVar3 = *(void**)(lVar4 + 0x18);
  if (puVar3 == *(void**)(lVar4 + 0x20)) {
    lVar7 = *(int64_t *)(lVar4 + 0x10);
    pvVar6 = (void *)((int64_t)puVar3 - lVar7);
    uVar1 = ((int64_t)pvVar6 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (int64_t)*(void**)(lVar4 + 0x20) - lVar7;
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if (0xffffffffffffffe < (uint64_t)(lVar8 >> 3)) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) {
                            FUN_00a4ef64();
      }
      pvVar5 = operator_new(0xffffffff);
    }
    pvVar2 = (void *)((int64_t)pvVar5 + uVar9 * 8);
    lVar8 = (int64_t)pvVar5 + ((int64_t)pvVar6 >> 3) * 8 + 8;
    *(void*)(lVar8 + -8) = *(void*)(arg1 + 0x18);
    if (0 < (int64_t)pvVar6) {
      _memcpy(pvVar2,pvVar6,(size_t)lVar7);
    }
    *(void **)(lVar4 + 0x10) = pvVar5;
    *(int64_t *)(lVar4 + 0x18) = lVar8;
    *(void **)(lVar4 + 0x20) = pvVar2;
    if (lVar7 != 0) {
      operator_delete(pvVar2);
    }
  }
  else {
    *puVar3 = *(void*)(arg1 + 0x18);
    *(void**)(lVar4 + 0x18) = puVar3 + 1;
  }
  lVar4 = *(int64_t *)(this_ptr + 0x10);
  lVar7 = *(int64_t *)(lVar4 + 0x50);
  if (lVar7 == *(int64_t *)(lVar4 + 0x58)) {
    lVar7 = (lVar7 - *(int64_t *)(lVar4 + 0x48) >> 3) * 0x34f72c234f72c235;
    if (0x11a7b9611a7b961 < lVar7 + 1U) {
                          std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_00a4f170(lVar4 + 0x58,lVar7);
    FUN_00aaba30();
    FUN_00a4f0e0();
    FUN_00a4f1e0();
  }
  else {
    FUN_00aaba30();
    *(int64_t *)(lVar4 + 0x50) = lVar7 + 0xe8;
  }
  return;
}

