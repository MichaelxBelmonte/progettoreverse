// Function: FUN_00a328b8
// Address: 00a328b8
// Size: 645 bytes
// Class: Unknown
// String references:
//   "flushObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...


void FUN_00a328b8(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  longlong lVar8;
  void *pvVar9;
  void *pvVar10;
  longlong lVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  size_t sVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  
  iVar2 = *(int *)(unaff_RSI + 8);
  iVar5 = (**(code **)(*unaff_RDI + 0x50))();
  if (iVar2 != iVar5) {
    uVar6 = (**(code **)(*unaff_RDI + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorExpirationWarning.cpp"
    ;
    FUN_009b89d0(*(undefined4 *)(unaff_RSI + 8),uVar6,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorExpirationWarning.cpp"
                 ,0x2b8);
  }
  lVar16 = *(longlong *)(unaff_RSI + 0x10);
  if (0x7fffffff00000000 < lVar16) {
    FUN_00a3254e();
    return;
  }
  plVar3 = *(longlong **)(unaff_RDI[1] + 8);
  plVar4 = *(longlong **)(unaff_RDI[1] + 0x10);
  plVar15 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a3295d:
    if ((plVar15 == plVar4) || ((longlong)plVar15 - (longlong)plVar3 == -8)) goto LAB_00a3296b;
    lVar16 = (longlong)plVar15 - (longlong)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar15 == lVar16) goto LAB_00a3295d;
      plVar15 = plVar15 + 1;
    } while (plVar4 != plVar15);
LAB_00a3296b:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorExpirationWarning.cpp"
    ;
    FUN_009b8b10(lVar16,*(undefined4 *)(unaff_RSI + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorExpirationWarning.cpp"
                 ,0x2c7);
    lVar16 = -1;
  }
  plVar3 = *(longlong **)(unaff_RDI[7] + lVar16 * 8);
  plVar4 = *(longlong **)(unaff_RDI[4] + lVar16 * 8);
  lVar8 = *(longlong *)(unaff_RDI[3] + 0x30);
  if (lVar8 != 0) {
    do {
      lVar8 = *(longlong *)
               (lVar8 + (ulonglong)(*(longlong *)(lVar8 + 0x20) < *(longlong *)(unaff_RSI + 0x10)) *
                        8);
    } while (lVar8 != 0);
  }
  FUN_00a272b0();
  pvVar10 = (void *)unaff_RDI[3];
  lVar8 = *(longlong *)((longlong)pvVar10 + 0x10);
  pvVar9 = (void *)(*(longlong *)((longlong)pvVar10 + 0x18) - (lVar8 + 8 + lVar16 * 8));
  pvVar7 = pvVar10;
  if (pvVar9 != (void *)0x0) {
    _memmove(pvVar10,pvVar9,(size_t)param_3);
    pvVar7 = (void *)unaff_RDI[3];
  }
  *(longlong *)((longlong)pvVar10 + 0x18) = lVar8 + lVar16 * 8 + ((longlong)pvVar9 >> 3) * 8;
  lVar13 = lVar16 * 0x150 + *(longlong *)((longlong)pvVar7 + 0x48);
  lVar11 = lVar13 + 0x150;
  lVar8 = *(longlong *)((longlong)pvVar7 + 0x50);
  lVar14 = lVar13;
  if (lVar11 != lVar8) {
    do {
      lVar14 = lVar13 + 0x150;
      FUN_00a9d2dc();
      sVar12 = (size_t)param_3;
      lVar11 = lVar13 + 0x2a0;
      lVar13 = lVar14;
    } while (lVar11 != lVar8);
    lVar11 = *(longlong *)((longlong)pvVar7 + 0x50);
    if (lVar11 == lVar14) goto LAB_00a32a9e;
  }
  do {
    puVar1 = (undefined8 *)(lVar11 + -0x150);
    lVar11 = lVar11 + -0x150;
    (**(code **)*puVar1)();
    sVar12 = (size_t)param_3;
  } while (lVar14 != lVar11);
LAB_00a32a9e:
  *(longlong *)((longlong)pvVar7 + 0x50) = lVar14;
  lVar8 = unaff_RDI[7];
  pvVar10 = (void *)(unaff_RDI[8] - (lVar8 + 8 + lVar16 * 8));
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar7,pvVar10,sVar12);
  }
  unaff_RDI[8] = lVar8 + lVar16 * 8 + ((longlong)pvVar10 >> 3) * 8;
  lVar8 = unaff_RDI[4];
  pvVar10 = (void *)(unaff_RDI[5] - (lVar8 + 8 + lVar16 * 8));
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar7,pvVar10,sVar12);
  }
  unaff_RDI[5] = lVar8 + lVar16 * 8 + ((longlong)pvVar10 >> 3) * 8;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a32b2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}


