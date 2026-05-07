// Function: FUN_00a2adf2
// Address: 00a2adf2
// Size: 689 bytes
// Class: Unknown
// String references:
//   "deleteObject"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblice...


void FUN_00a2adf2(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  void *pvVar8;
  longlong lVar9;
  void *pvVar10;
  void *pvVar11;
  longlong lVar12;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  size_t sVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  
  iVar2 = *(int *)(unaff_RSI + 8);
  iVar6 = (**(code **)(*unaff_RDI + 0x50))();
  if (iVar2 != iVar6) {
    uVar7 = (**(code **)(*unaff_RDI + 0x50))();
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorAuthorization.cpp"
    ;
    FUN_009b89d0(*(undefined4 *)(unaff_RSI + 8),uVar7,
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorAuthorization.cpp"
                 ,0x20b);
  }
  plVar3 = *(longlong **)(unaff_RDI[1] + 8);
  plVar4 = *(longlong **)(unaff_RDI[1] + 0x10);
  plVar16 = plVar3;
  if (plVar3 == plVar4) {
LAB_00a2ae6f:
    if ((plVar16 == plVar4) || ((longlong)plVar16 - (longlong)plVar3 == -8)) goto LAB_00a2ae7d;
    lVar17 = (longlong)plVar16 - (longlong)plVar3 >> 3;
  }
  else {
    do {
      if (*plVar16 == *(longlong *)(unaff_RSI + 0x10)) goto LAB_00a2ae6f;
      plVar16 = plVar16 + 1;
    } while (plVar4 != plVar16);
LAB_00a2ae7d:
    param_3 = 
    "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorAuthorization.cpp"
    ;
    FUN_009b8b10(*(longlong *)(unaff_RSI + 0x10),*(undefined4 *)(unaff_RSI + 8),
                 "/Users/admin/jenkins/workspace/EdenFiveMacFull/common/paceSources/generated/licenseServices/liblicenseservices/LsCachedObjectVectorAuthorization.cpp"
                 ,0x212);
    lVar17 = -1;
  }
  plVar3 = *(longlong **)(unaff_RDI[7] + lVar17 * 8);
  plVar4 = *(longlong **)(unaff_RDI[4] + lVar17 * 8);
  FUN_00a1e2ca();
  FUN_009b9dcc();
  FUN_009bc00c();
  cVar5 = FUN_009b9a8a();
  if (cVar5 == '\0') {
    FUN_00a486f6();
    FUN_00a2acf0();
  }
  lVar9 = *(longlong *)(unaff_RDI[3] + 0x30);
  if (lVar9 != 0) {
    do {
      lVar9 = *(longlong *)
               (lVar9 + (ulonglong)(*(longlong *)(lVar9 + 0x20) < *(longlong *)(unaff_RSI + 0x10)) *
                        8);
    } while (lVar9 != 0);
  }
  FUN_00a272b0();
  pvVar11 = (void *)unaff_RDI[3];
  lVar9 = *(longlong *)((longlong)pvVar11 + 0x10);
  pvVar10 = (void *)(*(longlong *)((longlong)pvVar11 + 0x18) - (lVar9 + 8 + lVar17 * 8));
  pvVar8 = pvVar11;
  if (pvVar10 != (void *)0x0) {
    _memmove(pvVar11,pvVar10,(size_t)param_3);
    pvVar8 = (void *)unaff_RDI[3];
  }
  *(longlong *)((longlong)pvVar11 + 0x18) = lVar9 + lVar17 * 8 + ((longlong)pvVar10 >> 3) * 8;
  lVar14 = lVar17 * 0x1e0 + *(longlong *)((longlong)pvVar8 + 0x48);
  lVar12 = lVar14 + 0x1e0;
  lVar9 = *(longlong *)((longlong)pvVar8 + 0x50);
  lVar15 = lVar14;
  if (lVar12 != lVar9) {
    do {
      lVar15 = lVar14 + 0x1e0;
      FUN_00a6f5c6();
      sVar13 = (size_t)param_3;
      lVar12 = lVar14 + 0x3c0;
      lVar14 = lVar15;
    } while (lVar12 != lVar9);
    lVar12 = *(longlong *)((longlong)pvVar8 + 0x50);
    if (lVar12 == lVar15) goto LAB_00a2b004;
  }
  do {
    puVar1 = (undefined8 *)(lVar12 + -0x1e0);
    lVar12 = lVar12 + -0x1e0;
    (**(code **)*puVar1)();
    sVar13 = (size_t)param_3;
  } while (lVar15 != lVar12);
LAB_00a2b004:
  *(longlong *)((longlong)pvVar8 + 0x50) = lVar15;
  lVar9 = unaff_RDI[7];
  pvVar11 = (void *)(unaff_RDI[8] - (lVar9 + 8 + lVar17 * 8));
  if (pvVar11 != (void *)0x0) {
    _memmove(pvVar8,pvVar11,sVar13);
  }
  unaff_RDI[8] = lVar9 + lVar17 * 8 + ((longlong)pvVar11 >> 3) * 8;
  lVar9 = unaff_RDI[4];
  pvVar11 = (void *)(unaff_RDI[5] - (lVar9 + 8 + lVar17 * 8));
  if (pvVar11 != (void *)0x0) {
    _memmove(pvVar8,pvVar11,sVar13);
  }
  unaff_RDI[5] = lVar9 + lVar17 * 8 + ((longlong)pvVar11 >> 3) * 8;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a2b091. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))();
    return;
  }
  return;
}


