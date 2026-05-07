// Function: FUN_00c6a470
// Address: 00c6a470
// Size: 1073 bytes
// Class: GNString


undefined8 FUN_00c6a470(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  undefined8 uVar8;
  size_t sVar9;
  longlong unaff_RDI;
  longlong lVar10;
  undefined4 uVar11;
  double local_res8;
  int local_res14;
  size_t local_res24;
  
  *(int *)(&DAT_00002068 + unaff_RDI) = (int)(longlong)local_res8;
  *(size_t *)(&DAT_00002064 + unaff_RDI) = local_res24;
  sVar7 = local_res14 - 1;
  if (sVar7 < 4) {
    sVar7 = sVar7 * 0x10;
    *(short *)(unaff_RDI + 8) = (short)(0x20001800140010 >> ((byte)sVar7 & 0x3f));
  }
  *(undefined8 *)(unaff_RDI + 0xc) = 0;
  *(undefined8 *)(unaff_RDI + 0x14) = 0;
  *(size_t *)(&DAT_00002060 + unaff_RDI) = local_res24 * *(int *)(&DAT_0000205c + unaff_RDI) * 5 + 1
  ;
  sVar9 = local_res24;
  pvVar1 = _calloc(sVar7,local_res24);
  *(void **)(unaff_RDI + 0x20) = pvVar1;
  pvVar2 = _calloc(sVar7,sVar9);
  *(void **)(unaff_RDI + 0x28) = pvVar2;
  pvVar3 = _calloc(sVar7,sVar9);
  *(void **)(unaff_RDI + 0x30) = pvVar3;
  pvVar4 = _calloc(sVar7,sVar9);
  *(void **)(unaff_RDI + 0x38) = pvVar4;
  pvVar5 = _calloc(sVar7,sVar9);
  *(void **)(unaff_RDI + 0x40) = pvVar5;
  pvVar6 = _calloc(sVar7,sVar9);
  *(void **)(unaff_RDI + 0x48) = pvVar6;
  uVar8 = 0xffffff94;
  if ((((pvVar1 != (void *)0x0) && (pvVar2 != (void *)0x0)) && (pvVar3 != (void *)0x0)) &&
     (((pvVar4 != (void *)0x0 && (pvVar6 != (void *)0x0)) && (pvVar5 != (void *)0x0)))) {
    if (0 < (int)local_res24) {
      lVar10 = 0;
      do {
        uVar11 = FUN_00c6b530();
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        uVar11 = FUN_00c6b530(uVar11,0x10);
        FUN_00c6b530(uVar11,0x10);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(&DAT_00002064 + unaff_RDI));
    }
    uVar8 = 0;
  }
  return uVar8;
}


