// Function: FUN_01d87280
// Address: 01d87280
// Size: 675 bytes
// Class: GNString


void FUN_01d87280(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint unaff_ESI;
  longlong *unaff_RDI;
  uint uVar7;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_a8;
  float fStack_a4;
  undefined4 local_98;
  undefined4 uStack_94;
  float local_38;
  int local_34;
  int iVar8;
  
  uVar11 = CONCAT44(uStack_94,local_98);
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  fVar12 = (float)param_2;
  uVar14 = (undefined4)param_1;
  uVar9 = 0;
  if ((fVar12 == 0.0) && (!NAN(fVar12))) {
    return;
  }
  if ((fVar15 == 0.0) && (!NAN(fVar15))) {
    return;
  }
  lVar6 = *unaff_RDI;
  iVar2 = *(int *)(lVar6 + 0x18);
  iVar8 = iVar2 + 0xf;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  uVar7 = iVar8 >> 4;
  if (uVar7 == unaff_ESI) {
    uVar11 = FUN_00d052e0(uVar14,fVar12,(int)**(undefined8 **)(lVar6 + 0x10),
                          (*(undefined8 **)(lVar6 + 0x10))[1]);
    puVar4 = *(undefined8 **)(*unaff_RDI + 0x10);
    *puVar4 = uVar11;
    local_a8 = fVar12;
    fStack_a4 = fVar15;
LAB_01d87308:
    puVar4[1] = CONCAT44(fStack_a4,local_a8);
  }
  else {
    if (0xf < iVar2) {
      cVar3 = FUN_00d05440((int)**(undefined8 **)(lVar6 + 0x10),
                           (int)(*(undefined8 **)(lVar6 + 0x10))[1],uVar14,param_2);
      if (cVar3 != '\0') {
        return;
      }
      lVar6 = 0x18;
      uVar5 = (ulonglong)uVar7;
      while (uVar5 = uVar5 - 1, uVar5 != 0) {
        cVar3 = FUN_00d05440((int)*(undefined8 *)(*(longlong *)(*unaff_RDI + 0x10) + -8 + lVar6),
                             (int)*(undefined8 *)(*(longlong *)(*unaff_RDI + 0x10) + lVar6),uVar14,
                             param_2);
        lVar6 = lVar6 + 0x10;
        if (cVar3 != '\0') {
          return;
        }
      }
      local_38 = DAT_02390124 + param_3;
      local_34 = -1;
      lVar6 = 8;
      uVar5 = 0;
      do {
        uVar10 = *(undefined8 *)(*(longlong *)(*unaff_RDI + 0x10) + lVar6);
        fVar18 = (float)uVar10;
        fVar16 = (float)((ulonglong)uVar10 >> 0x20);
        fVar13 = fVar18;
        fVar17 = fVar16;
        uVar10 = FUN_00d052e0((int)*(undefined8 *)(*(longlong *)(*unaff_RDI + 0x10) + -8 + lVar6),
                              fVar18,uVar14,param_2);
        uVar9 = (undefined4)uVar10;
        fVar18 = (fVar17 * fVar13) / (fVar16 * fVar18 + fVar15 * fVar12);
        if ((fVar18 < param_3) && (fVar18 < local_38)) {
          local_34 = (int)uVar5;
          local_a8 = fVar13;
          fStack_a4 = fVar17;
          local_38 = fVar18;
          uVar11 = uVar10;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while (uVar7 != uVar5);
      if (local_34 != -1) {
        lVar6 = *(longlong *)(*unaff_RDI + 0x10);
        *(undefined8 *)(lVar6 + (longlong)local_34 * 0x10) = uVar11;
        puVar4 = (undefined8 *)((longlong)local_34 * 0x10 + lVar6);
        goto LAB_01d87308;
      }
    }
    lVar6 = *unaff_RDI;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(uVar9,1);
    puVar1 = (undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2);
    *puVar1 = uVar14;
    puVar1[1] = (int)((ulonglong)param_1 >> 0x20);
    puVar1[2] = fVar12;
    puVar1[3] = fVar15;
    if ((uVar7 == unaff_ESI - 1) && (1 < (int)unaff_ESI)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(*unaff_RDI + 0x10);
        uVar11 = *(undefined8 *)((longlong)puVar4 + lVar6 + 0x18);
        uVar14 = (undefined4)uVar11;
        uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uVar11 = FUN_00d052e0((int)*(undefined8 *)((longlong)puVar4 + lVar6 + 0x10),uVar14,
                              (int)*puVar4,puVar4[1]);
        puVar4 = *(undefined8 **)(*unaff_RDI + 0x10);
        *puVar4 = uVar11;
        *(undefined4 *)(puVar4 + 1) = uVar14;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uVar9;
        lVar6 = lVar6 + 0x10;
      } while ((ulonglong)unaff_ESI * 0x10 + -0x10 != lVar6);
    }
  }
  return;
}


