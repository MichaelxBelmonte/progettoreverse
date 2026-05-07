// Function: FUN_015c22b0
// Address: 015c22b0
// Size: 518 bytes
// Class: GNData


undefined4 FUN_015c22b0(undefined8 param_1,ulonglong param_2,size_t param_3,int *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  ulonglong *unaff_RSI;
  ulonglong uVar12;
  longlong lVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  
  uVar10 = (uint)param_2;
  piVar16 = (int *)(param_2 & 0xffffffff);
  if (*(int *)(unaff_RDI + 0x24) < (int)uVar10) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RDI + 0x18) = 0;
    }
    uVar8 = FUN_00e83010();
    *(ulonglong *)(unaff_RDI + 0x18) = uVar8;
    *(uint *)(unaff_RDI + 0x24) = uVar10;
  }
  else {
    uVar8 = *(ulonglong *)(unaff_RDI + 0x18);
  }
  if (0 < (int)uVar10) {
    uVar4 = *unaff_RSI;
    param_4 = piVar16;
    if ((uVar10 < 8) ||
       ((uVar8 < uVar4 + (longlong)piVar16 * 4 && (uVar4 < uVar8 + (longlong)piVar16 * 4)))) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = (int *)(ulonglong)(uVar10 & 0xfffffff8);
      uVar12 = ((ulonglong)(piVar11 + -2) >> 3) + 1;
      uVar14 = (ulonglong)((uint)uVar12 & 3);
      if ((int *)((longlong)&MACH_HEADER.sizeofcmds + 3) < piVar11 + -2) {
        lVar15 = -(uVar12 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          puVar2 = (undefined8 *)(uVar4 + lVar13 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(uVar4 + 0x10 + lVar13 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(uVar8 + lVar13 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar13 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(uVar4 + 0x20 + lVar13 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(uVar4 + 0x30 + lVar13 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(uVar8 + 0x20 + lVar13 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar13 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(uVar4 + 0x40 + lVar13 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(uVar4 + 0x50 + lVar13 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(uVar8 + 0x40 + lVar13 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(uVar8 + 0x50 + lVar13 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2 = (undefined8 *)(uVar4 + 0x60 + lVar13 * 4);
          uVar5 = puVar2[1];
          puVar3 = (undefined8 *)(uVar4 + 0x70 + lVar13 * 4);
          uVar6 = *puVar3;
          uVar7 = puVar3[1];
          puVar3 = (undefined8 *)(uVar8 + 0x60 + lVar13 * 4);
          *puVar3 = *puVar2;
          puVar3[1] = uVar5;
          puVar2 = (undefined8 *)(uVar8 + 0x70 + lVar13 * 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar13 = lVar13 + 0x20;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0);
      }
      else {
        lVar13 = 0;
      }
      lVar15 = 0;
      if (uVar14 != 0) {
        lVar1 = uVar8 + lVar13 * 4;
        lVar13 = uVar4 + lVar13 * 4;
        lVar15 = uVar14 << 5;
        lVar9 = 0;
        do {
          puVar3 = (undefined8 *)(lVar13 + lVar9);
          uVar5 = puVar3[1];
          puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar9);
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          puVar2 = (undefined8 *)(lVar1 + lVar9);
          *puVar2 = *puVar3;
          puVar2[1] = uVar5;
          puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar9);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          lVar9 = lVar9 + 0x20;
        } while (lVar15 != lVar9);
      }
      param_3 = (size_t)lVar15;
      if (piVar11 == piVar16) goto LAB_015c2484;
    }
    uVar12 = ~(ulonglong)piVar11;
    for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
      *(undefined4 *)(uVar8 + (longlong)piVar11 * 4) =
           *(undefined4 *)(uVar4 + (longlong)piVar11 * 4);
      piVar11 = (int *)((longlong)piVar11 + 1);
    }
    if (2 < uVar12 + (longlong)piVar16) {
      do {
        *(undefined4 *)(uVar8 + (longlong)piVar11 * 4) =
             *(undefined4 *)(uVar4 + (longlong)piVar11 * 4);
        *(undefined4 *)(uVar8 + 4 + (longlong)piVar11 * 4) =
             *(undefined4 *)(uVar4 + 4 + (longlong)piVar11 * 4);
        *(undefined4 *)(uVar8 + 8 + (longlong)piVar11 * 4) =
             *(undefined4 *)(uVar4 + 8 + (longlong)piVar11 * 4);
        *(undefined4 *)(uVar8 + 0xc + (longlong)piVar11 * 4) =
             *(undefined4 *)(uVar4 + 0xc + (longlong)piVar11 * 4);
        piVar11 = piVar11 + 1;
      } while (piVar16 != piVar11);
    }
  }
LAB_015c2484:
  _qsort(FUN_00e8b5c0,4,param_3,param_4);
  return *(undefined4 *)
          (uVar8 + (longlong)((int)((int)((ulonglong)piVar16 >> 0x1f) + uVar10) >> 1) * 4);
}


