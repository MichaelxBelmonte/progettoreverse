// Function: FUN_00a36e1a
// Address: 00a36e1a
// Size: 650 bytes
// Class: Unknown
// String references:
//   "flushObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...

void FUN_00a36e1a(uint64_t param_1,uint64_t param_2,char *param_3)

{
  void*puVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  int iVar7;
  uint32_t uVar8;
  void *pvVar9;
  int64_t lVar10;
  void *pvVar11;
  void *pvVar12;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar13;
  size_t sVar14;
  void *pvVar15;
  int64_t *plVar16;
  int64_t lVar17;
  
  iVar2 = *(int *)(arg1 + 8);
  iVar7 = (**(code **)(*this_ptr + 0x50))();
  if (iVar2 != iVar7) {
    uVar8 = (**(code **)(*this_ptr + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
    ;
    FUN_009b89d0(*(void*)(arg1 + 8),uVar8,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
                 ,0x2b8);
  }
  pvVar12 = *(void **)(arg1 + 0x10);
  if (0x7fffffff00000000 < (int64_t)pvVar12) {
    FUN_00a36aaa();
    return;
  }
  plVar3 = *(int64_t **)(this_ptr[1] + 8);
  plVar4 = *(int64_t **)(this_ptr[1] + 0x10);
  plVar16 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a36ebf:
    if ((plVar16 == plVar4) || ((int64_t)plVar16 - (int64_t)plVar3 == -8)) goto LAB_00a36ecd;
    lVar17 = (int64_t)plVar16 - (int64_t)plVar3 >> 3;
  }
  else {
    do {
      if ((void *)*plVar16 == pvVar12) goto LAB_00a36ebf;
      plVar16 = plVar16 + 1;
    } while (plVar4 != plVar16);
LAB_00a36ecd:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
    ;
    FUN_009b8b10(pvVar12,*(void*)(arg1 + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
                 ,0x2c7);
    lVar17 = -1;
  }
  plVar3 = *(int64_t **)(this_ptr[7] + lVar17 * 8);
  plVar4 = *(int64_t **)(this_ptr[4] + lVar17 * 8);
  lVar10 = *(int64_t *)(this_ptr[3] + 0x30);
  if (lVar10 != 0) {
    pvVar12 = *(void **)(arg1 + 0x10);
    do {
      lVar10 = *(int64_t *)
                (lVar10 + (uint64_t)(*(int64_t *)(lVar10 + 0x20) < (int64_t)pvVar12) * 8);
    } while (lVar10 != 0);
  }
  FUN_00a272b0();
  lVar10 = this_ptr[3];
  lVar5 = *(int64_t *)(lVar10 + 0x10);
  pvVar11 = (void *)(*(int64_t *)(lVar10 + 0x18) - (lVar5 + 8 + lVar17 * 8));
  lVar13 = lVar10;
  if (pvVar11 != (void *)0x0) {
    _memmove(pvVar12,pvVar11,(size_t)param_3);
    lVar13 = this_ptr[3];
  }
  *(int64_t *)(lVar10 + 0x18) = lVar5 + lVar17 * 8 + ((int64_t)pvVar11 >> 3) * 8;
  pvVar9 = *(void **)(lVar13 + 0x48);
  pvVar6 = *(void **)(lVar13 + 0x50);
  pvVar12 = (void *)((int64_t)pvVar9 + lVar17 * 0xc0);
  pvVar11 = (void *)((int64_t)pvVar9 + lVar17 * 0xc0 + 0xc0);
  pvVar15 = pvVar12;
  if (pvVar11 != pvVar6) {
    do {
      pvVar15 = (void *)((int64_t)pvVar12 + 0xc0);
      FUN_00aa5ac6();
      sVar14 = (size_t)param_3;
      pvVar11 = (void *)((int64_t)pvVar12 + 0x180);
      pvVar12 = pvVar15;
    } while (pvVar11 != pvVar6);
    pvVar11 = *(void **)(lVar13 + 0x50);
    if (pvVar11 == pvVar15) goto LAB_00a37005;
  }
  do {
    puVar1 = (void*)((int64_t)pvVar11 + -0xc0);
    pvVar11 = (void *)((int64_t)pvVar11 + -0xc0);
    (**(code **)*puVar1)();
    sVar14 = (size_t)param_3;
  } while (pvVar15 != pvVar11);
LAB_00a37005:
  *(void **)(lVar13 + 0x50) = pvVar15;
  lVar10 = this_ptr[7];
  pvVar12 = (void *)(this_ptr[8] - (lVar10 + 8 + lVar17 * 8));
  if (pvVar12 != (void *)0x0) {
    _memmove(pvVar9,pvVar12,sVar14);
  }
  this_ptr[8] = lVar10 + lVar17 * 8 + ((int64_t)pvVar12 >> 3) * 8;
  lVar10 = this_ptr[4];
  pvVar12 = (void *)(this_ptr[5] - (lVar10 + 8 + lVar17 * 8));
  if (pvVar12 != (void *)0x0) {
    _memmove(pvVar9,pvVar12,sVar14);
  }
  this_ptr[5] = lVar10 + lVar17 * 8 + ((int64_t)pvVar12 >> 3) * 8;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (int64_t *)0x0) {
                                            (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}

