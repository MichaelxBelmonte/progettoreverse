// Function: FUN_00a3b3e6
// Address: 00a3b3e6
// Size: 645 bytes
// Class: Unknown
// String references:
//   "flushObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...

void FUN_00a3b3e6(uint64_t param_1,uint64_t param_2,char *param_3)

{
  void*puVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  uint32_t uVar6;
  void *pvVar7;
  int64_t lVar8;
  void *pvVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t arg1;
  int64_t *this_ptr;
  size_t sVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t *plVar15;
  int64_t lVar16;
  
  iVar2 = *(int *)(arg1 + 8);
  iVar5 = (**(code **)(*this_ptr + 0x50))();
  if (iVar2 != iVar5) {
    uVar6 = (**(code **)(*this_ptr + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignedDigest.cpp"
    ;
    FUN_009b89d0(*(void*)(arg1 + 8),uVar6,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignedDigest.cpp"
                 ,0x2b8);
  }
  lVar16 = *(int64_t *)(arg1 + 0x10);
  if (0x7fffffff00000000 < lVar16) {
    FUN_00a3b07c();
    return;
  }
  plVar3 = *(int64_t **)(this_ptr[1] + 8);
  plVar4 = *(int64_t **)(this_ptr[1] + 0x10);
  plVar15 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a3b48b:
    if ((plVar15 == plVar4) || ((int64_t)plVar15 - (int64_t)plVar3 == -8)) goto LAB_00a3b499;
    lVar16 = (int64_t)plVar15 - (int64_t)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar15 == lVar16) goto LAB_00a3b48b;
      plVar15 = plVar15 + 1;
    } while (plVar4 != plVar15);
LAB_00a3b499:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignedDigest.cpp"
    ;
    FUN_009b8b10(lVar16,*(void*)(arg1 + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignedDigest.cpp"
                 ,0x2c7);
    lVar16 = -1;
  }
  plVar3 = *(int64_t **)(this_ptr[7] + lVar16 * 8);
  plVar4 = *(int64_t **)(this_ptr[4] + lVar16 * 8);
  lVar8 = *(int64_t *)(this_ptr[3] + 0x30);
  if (lVar8 != 0) {
    do {
      lVar8 = *(int64_t *)
               (lVar8 + (uint64_t)(*(int64_t *)(lVar8 + 0x20) < *(int64_t *)(arg1 + 0x10)) *
                        8);
    } while (lVar8 != 0);
  }
  FUN_00a272b0();
  pvVar10 = (void *)this_ptr[3];
  lVar8 = *(int64_t *)((int64_t)pvVar10 + 0x10);
  pvVar9 = (void *)(*(int64_t *)((int64_t)pvVar10 + 0x18) - (lVar8 + 8 + lVar16 * 8));
  pvVar7 = pvVar10;
  if (pvVar9 != (void *)0x0) {
    _memmove(pvVar10,pvVar9,(size_t)param_3);
    pvVar7 = (void *)this_ptr[3];
  }
  *(int64_t *)((int64_t)pvVar10 + 0x18) = lVar8 + lVar16 * 8 + ((int64_t)pvVar9 >> 3) * 8;
  lVar13 = lVar16 * 0xe8 + *(int64_t *)((int64_t)pvVar7 + 0x48);
  lVar11 = lVar13 + 0xe8;
  lVar8 = *(int64_t *)((int64_t)pvVar7 + 0x50);
  lVar14 = lVar13;
  if (lVar11 != lVar8) {
    do {
      lVar14 = lVar13 + 0xe8;
      FUN_00aabc02();
      sVar12 = (size_t)param_3;
      lVar11 = lVar13 + 0x1d0;
      lVar13 = lVar14;
    } while (lVar11 != lVar8);
    lVar11 = *(int64_t *)((int64_t)pvVar7 + 0x50);
    if (lVar11 == lVar14) goto LAB_00a3b5cc;
  }
  do {
    puVar1 = (void*)(lVar11 + -0xe8);
    lVar11 = lVar11 + -0xe8;
    (**(code **)*puVar1)();
    sVar12 = (size_t)param_3;
  } while (lVar14 != lVar11);
LAB_00a3b5cc:
  *(int64_t *)((int64_t)pvVar7 + 0x50) = lVar14;
  lVar8 = this_ptr[7];
  pvVar10 = (void *)(this_ptr[8] - (lVar8 + 8 + lVar16 * 8));
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar7,pvVar10,sVar12);
  }
  this_ptr[8] = lVar8 + lVar16 * 8 + ((int64_t)pvVar10 >> 3) * 8;
  lVar8 = this_ptr[4];
  pvVar10 = (void *)(this_ptr[5] - (lVar8 + 8 + lVar16 * 8));
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar7,pvVar10,sVar12);
  }
  this_ptr[5] = lVar8 + lVar16 * 8 + ((int64_t)pvVar10 >> 3) * 8;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (int64_t *)0x0) {
                                            (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}

