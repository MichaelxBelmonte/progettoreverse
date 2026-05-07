// Function: FUN_00a36aaa
// Address: 00a36aaa
// Size: 695 bytes
// Class: Unknown
// String references:
//   "deleteObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...

void FUN_00a36aaa(uint64_t param_1,uint64_t param_2,char *param_3)

{
  void*puVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  uint32_t uVar9;
  void *pvVar10;
  int64_t lVar11;
  void *pvVar12;
  void *pvVar13;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  size_t sVar15;
  void *pvVar16;
  int64_t *plVar17;
  int64_t lVar18;
  
  iVar2 = *(int *)(arg1 + 8);
  iVar8 = (**(code **)(*this_ptr + 0x50))();
  if (iVar2 != iVar8) {
    uVar9 = (**(code **)(*this_ptr + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
    ;
    FUN_009b89d0(*(void*)(arg1 + 8),uVar9,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
                 ,0x20b);
  }
  plVar3 = *(int64_t **)(this_ptr[1] + 8);
  plVar4 = *(int64_t **)(this_ptr[1] + 0x10);
  plVar17 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a36b27:
    if ((plVar17 == plVar4) || ((int64_t)plVar17 - (int64_t)plVar3 == -8)) goto LAB_00a36b35;
    lVar18 = (int64_t)plVar17 - (int64_t)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar17 == *(int64_t *)(arg1 + 0x10)) goto LAB_00a36b27;
      plVar17 = plVar17 + 1;
    } while (plVar4 != plVar17);
LAB_00a36b35:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
    ;
    FUN_009b8b10(*(int64_t *)(arg1 + 0x10),*(void*)(arg1 + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorMachineBinding.cpp"
                 ,0x212);
    lVar18 = -1;
  }
  pvVar13 = (void *)this_ptr[7];
  plVar3 = *(int64_t **)((int64_t)pvVar13 + lVar18 * 8);
  plVar4 = *(int64_t **)(this_ptr[4] + lVar18 * 8);
  FUN_00a55d24();
  FUN_009b9dcc();
  FUN_009bc00c();
  cVar7 = FUN_009b9a8a();
  if (cVar7 == '\0') {
    FUN_00a4d006();
    FUN_00a369a8();
  }
  lVar11 = *(int64_t *)(this_ptr[3] + 0x30);
  if (lVar11 != 0) {
    pvVar13 = *(void **)(arg1 + 0x10);
    do {
      lVar11 = *(int64_t *)
                (lVar11 + (uint64_t)(*(int64_t *)(lVar11 + 0x20) < (int64_t)pvVar13) * 8);
    } while (lVar11 != 0);
  }
  FUN_00a272b0();
  lVar11 = this_ptr[3];
  lVar5 = *(int64_t *)(lVar11 + 0x10);
  pvVar12 = (void *)(*(int64_t *)(lVar11 + 0x18) - (lVar5 + 8 + lVar18 * 8));
  lVar14 = lVar11;
  if (pvVar12 != (void *)0x0) {
    _memmove(pvVar13,pvVar12,(size_t)param_3);
    lVar14 = this_ptr[3];
  }
  *(int64_t *)(lVar11 + 0x18) = lVar5 + lVar18 * 8 + ((int64_t)pvVar12 >> 3) * 8;
  pvVar10 = *(void **)(lVar14 + 0x48);
  pvVar6 = *(void **)(lVar14 + 0x50);
  pvVar13 = (void *)((int64_t)pvVar10 + lVar18 * 0xc0);
  pvVar12 = (void *)((int64_t)pvVar10 + lVar18 * 0xc0 + 0xc0);
  pvVar16 = pvVar13;
  if (pvVar12 != pvVar6) {
    do {
      pvVar16 = (void *)((int64_t)pvVar13 + 0xc0);
      FUN_00aa5ac6();
      sVar15 = (size_t)param_3;
      pvVar12 = (void *)((int64_t)pvVar13 + 0x180);
      pvVar13 = pvVar16;
    } while (pvVar12 != pvVar6);
    pvVar12 = *(void **)(lVar14 + 0x50);
    if (pvVar12 == pvVar16) goto LAB_00a36cc2;
  }
  do {
    puVar1 = (void*)((int64_t)pvVar12 + -0xc0);
    pvVar12 = (void *)((int64_t)pvVar12 + -0xc0);
    (**(code **)*puVar1)();
    sVar15 = (size_t)param_3;
  } while (pvVar16 != pvVar12);
LAB_00a36cc2:
  *(void **)(lVar14 + 0x50) = pvVar16;
  lVar11 = this_ptr[7];
  pvVar13 = (void *)(this_ptr[8] - (lVar11 + 8 + lVar18 * 8));
  if (pvVar13 != (void *)0x0) {
    _memmove(pvVar10,pvVar13,sVar15);
  }
  this_ptr[8] = lVar11 + lVar18 * 8 + ((int64_t)pvVar13 >> 3) * 8;
  lVar11 = this_ptr[4];
  pvVar13 = (void *)(this_ptr[5] - (lVar11 + 8 + lVar18 * 8));
  if (pvVar13 != (void *)0x0) {
    _memmove(pvVar10,pvVar13,sVar15);
  }
  this_ptr[5] = lVar11 + lVar18 * 8 + ((int64_t)pvVar13 >> 3) * 8;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (int64_t *)0x0) {
                                            (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}

