// Function: FUN_00a35344
// Address: 00a35344
// Size: 689 bytes
// Class: Unknown
// String references:
//   "deleteObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...

void FUN_00a35344(uint64_t param_1,uint64_t param_2,char *param_3)

{
  void*puVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint32_t uVar7;
  void *pvVar8;
  int64_t lVar9;
  void *pvVar10;
  void *pvVar11;
  int64_t lVar12;
  int64_t arg1;
  int64_t *this_ptr;
  size_t sVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t *plVar16;
  int64_t lVar17;
  
  iVar2 = *(int *)(arg1 + 8);
  iVar6 = (**(code **)(*this_ptr + 0x50))();
  if (iVar2 != iVar6) {
    uVar7 = (**(code **)(*this_ptr + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorLicense.cpp"
    ;
    FUN_009b89d0(*(void*)(arg1 + 8),uVar7,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorLicense.cpp"
                 ,0x20b);
  }
  plVar3 = *(int64_t **)(this_ptr[1] + 8);
  plVar4 = *(int64_t **)(this_ptr[1] + 0x10);
  plVar16 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a353c1:
    if ((plVar16 == plVar4) || ((int64_t)plVar16 - (int64_t)plVar3 == -8)) goto LAB_00a353cf;
    lVar17 = (int64_t)plVar16 - (int64_t)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar16 == *(int64_t *)(arg1 + 0x10)) goto LAB_00a353c1;
      plVar16 = plVar16 + 1;
    } while (plVar4 != plVar16);
LAB_00a353cf:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorLicense.cpp"
    ;
    FUN_009b8b10(*(int64_t *)(arg1 + 0x10),*(void*)(arg1 + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorLicense.cpp"
                 ,0x212);
    lVar17 = -1;
  }
  plVar3 = *(int64_t **)(this_ptr[7] + lVar17 * 8);
  plVar4 = *(int64_t **)(this_ptr[4] + lVar17 * 8);
  FUN_00a52f66();
  FUN_009b9dcc();
  FUN_009bc00c();
  cVar5 = FUN_009b9a8a();
  if (cVar5 == '\0') {
    FUN_00a4c666();
    FUN_00a35232();
  }
  lVar9 = *(int64_t *)(this_ptr[3] + 0x30);
  if (lVar9 != 0) {
    do {
      lVar9 = *(int64_t *)
               (lVar9 + (uint64_t)(*(int64_t *)(lVar9 + 0x20) < *(int64_t *)(arg1 + 0x10)) *
                        8);
    } while (lVar9 != 0);
  }
  FUN_00a272b0();
  pvVar11 = (void *)this_ptr[3];
  lVar9 = *(int64_t *)((int64_t)pvVar11 + 0x10);
  pvVar10 = (void *)(*(int64_t *)((int64_t)pvVar11 + 0x18) - (lVar9 + 8 + lVar17 * 8));
  pvVar8 = pvVar11;
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar11,pvVar10,(size_t)param_3);
    pvVar8 = (void *)this_ptr[3];
  }
  *(int64_t *)((int64_t)pvVar11 + 0x18) = lVar9 + lVar17 * 8 + ((int64_t)pvVar10 >> 3) * 8;
  lVar14 = lVar17 * 0x1e0 + *(int64_t *)((int64_t)pvVar8 + 0x48);
  lVar12 = lVar14 + 0x1e0;
  lVar9 = *(int64_t *)((int64_t)pvVar8 + 0x50);
  lVar15 = lVar14;
  if (lVar12 != lVar9) {
    do {
      lVar15 = lVar14 + 0x1e0;
      FUN_00aa31be();
      sVar13 = (size_t)param_3;
      lVar12 = lVar14 + 0x3c0;
      lVar14 = lVar15;
    } while (lVar12 != lVar9);
    lVar12 = *(int64_t *)((int64_t)pvVar8 + 0x50);
    if (lVar12 == lVar15) goto LAB_00a35556;
  }
  do {
    puVar1 = (void*)(lVar12 + -0x1e0);
    lVar12 = lVar12 + -0x1e0;
    (**(code **)*puVar1)();
    sVar13 = (size_t)param_3;
  } while (lVar15 != lVar12);
LAB_00a35556:
  *(int64_t *)((int64_t)pvVar8 + 0x50) = lVar15;
  lVar9 = this_ptr[7];
  pvVar11 = (void *)(this_ptr[8] - (lVar9 + 8 + lVar17 * 8));
  if (pvVar11 != (void *)0x0) {
    _memmove(pvVar8,pvVar11,sVar13);
  }
  this_ptr[8] = lVar9 + lVar17 * 8 + ((int64_t)pvVar11 >> 3) * 8;
  lVar9 = this_ptr[4];
  pvVar11 = (void *)(this_ptr[5] - (lVar9 + 8 + lVar17 * 8));
  if (pvVar11 != (void *)0x0) {
    _memmove(pvVar8,pvVar11,sVar13);
  }
  this_ptr[5] = lVar9 + lVar17 * 8 + ((int64_t)pvVar11 >> 3) * 8;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (int64_t *)0x0) {
                                            (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}

