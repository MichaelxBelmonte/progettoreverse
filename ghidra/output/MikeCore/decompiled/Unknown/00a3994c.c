// Function: FUN_00a3994c
// Address: 00a3994c
// Size: 695 bytes
// Class: Unknown
// String references:
//   "deleteObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...


void FUN_00a3994c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  longlong lVar11;
  void *pvVar12;
  void *pvVar13;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  size_t sVar15;
  void *pvVar16;
  longlong *plVar17;
  longlong lVar18;
  
  iVar2 = *(int *)(unaff_RSI + 8);
  iVar8 = (**(code **)(*unaff_RDI + 0x50))();
  if (iVar2 != iVar8) {
    uVar9 = (**(code **)(*unaff_RDI + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignature.cpp"
    ;
    FUN_009b89d0(*(undefined4 *)(unaff_RSI + 8),uVar9,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignature.cpp"
                 ,0x20b);
  }
  plVar3 = *(longlong **)(unaff_RDI[1] + 8);
  plVar4 = *(longlong **)(unaff_RDI[1] + 0x10);
  plVar17 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a399c9:
    if ((plVar17 == plVar4) || ((longlong)plVar17 - (longlong)plVar3 == -8)) goto LAB_00a399d7;
    lVar18 = (longlong)plVar17 - (longlong)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar17 == *(longlong *)(unaff_RSI + 0x10)) goto LAB_00a399c9;
      plVar17 = plVar17 + 1;
    } while (plVar4 != plVar17);
LAB_00a399d7:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignature.cpp"
    ;
    FUN_009b8b10(*(longlong *)(unaff_RSI + 0x10),*(undefined4 *)(unaff_RSI + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorSignature.cpp"
                 ,0x212);
    lVar18 = -1;
  }
  pvVar13 = (void *)unaff_RDI[7];
  plVar3 = *(longlong **)((longlong)pvVar13 + lVar18 * 8);
  plVar4 = *(longlong **)(unaff_RDI[4] + lVar18 * 8);
  FUN_00a5d3e6();
  FUN_009b9dcc();
  FUN_009bc00c();
  cVar7 = FUN_009b9a8a();
  if (cVar7 == '\0') {
    FUN_00a4e206();
    FUN_00a3984a();
  }
  lVar11 = *(longlong *)(unaff_RDI[3] + 0x30);
  if (lVar11 != 0) {
    pvVar13 = *(void **)(unaff_RSI + 0x10);
    do {
      lVar11 = *(longlong *)
                (lVar11 + (ulonglong)(*(longlong *)(lVar11 + 0x20) < (longlong)pvVar13) * 8);
    } while (lVar11 != 0);
  }
  FUN_00a272b0();
  lVar11 = unaff_RDI[3];
  lVar5 = *(longlong *)(lVar11 + 0x10);
  pvVar12 = (void *)(*(longlong *)(lVar11 + 0x18) - (lVar5 + 8 + lVar18 * 8));
  lVar14 = lVar11;
  if (pvVar12 != (void *)0x0) {
    _memmove(pvVar13,pvVar12,(size_t)param_3);
    lVar14 = unaff_RDI[3];
  }
  *(longlong *)(lVar11 + 0x18) = lVar5 + lVar18 * 8 + ((longlong)pvVar12 >> 3) * 8;
  pvVar10 = *(void **)(lVar14 + 0x48);
  pvVar6 = *(void **)(lVar14 + 0x50);
  pvVar13 = (void *)((longlong)pvVar10 + lVar18 * 0xa0);
  pvVar12 = (void *)((longlong)pvVar10 + lVar18 * 0xa0 + 0xa0);
  pvVar16 = pvVar13;
  if (pvVar12 != pvVar6) {
    do {
      pvVar16 = (void *)((longlong)pvVar13 + 0xa0);
      FUN_00aaac2a();
      sVar15 = (size_t)param_3;
      pvVar12 = (void *)((longlong)pvVar13 + 0x140);
      pvVar13 = pvVar16;
    } while (pvVar12 != pvVar6);
    pvVar12 = *(void **)(lVar14 + 0x50);
    if (pvVar12 == pvVar16) goto LAB_00a39b64;
  }
  do {
    puVar1 = (undefined8 *)((longlong)pvVar12 + -0xa0);
    pvVar12 = (void *)((longlong)pvVar12 + -0xa0);
    (**(code **)*puVar1)();
    sVar15 = (size_t)param_3;
  } while (pvVar16 != pvVar12);
LAB_00a39b64:
  *(void **)(lVar14 + 0x50) = pvVar16;
  lVar11 = unaff_RDI[7];
  pvVar13 = (void *)(unaff_RDI[8] - (lVar11 + 8 + lVar18 * 8));
  if (pvVar13 != (void *)0x0) {
    _memmove(pvVar10,pvVar13,sVar15);
  }
  unaff_RDI[8] = lVar11 + lVar18 * 8 + ((longlong)pvVar13 >> 3) * 8;
  lVar11 = unaff_RDI[4];
  pvVar13 = (void *)(unaff_RDI[5] - (lVar11 + 8 + lVar18 * 8));
  if (pvVar13 != (void *)0x0) {
    _memmove(pvVar10,pvVar13,sVar15);
  }
  unaff_RDI[5] = lVar11 + lVar18 * 8 + ((longlong)pvVar13 >> 3) * 8;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a39bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}


