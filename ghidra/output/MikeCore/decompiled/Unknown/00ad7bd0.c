// Function: FUN_00ad7bd0
// Address: 00ad7bd0
// Size: 1974 bytes
// Class: Unknown


void FUN_00ad7bd0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *unaff_RDI;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  void *pvVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  if (0xff < unaff_RDI[4]) {
    unaff_RDI[4] = unaff_RDI[4] - 0x100;
    puVar7 = (undefined8 *)unaff_RDI[2];
    uVar1 = *(undefined8 *)unaff_RDI[1];
    puVar9 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (ulonglong)puVar9;
    if (puVar7 == (undefined8 *)unaff_RDI[3]) {
      puVar5 = (undefined8 *)*unaff_RDI;
      if (puVar9 < puVar5 || (longlong)puVar9 - (longlong)puVar5 == 0) {
        lVar2 = (longlong)unaff_RDI[3] - (longlong)puVar5;
        puVar6 = (undefined1 *)(lVar2 >> 2);
        puVar15 = (undefined1 *)((longlong)&MACH_HEADER.magic + 1);
        if (lVar2 != 0) {
          puVar15 = puVar6;
        }
        if ((ulonglong)puVar15 >> 0x3d != 0) goto LAB_00ad8382;
        pvVar4 = operator_new((ulong)puVar6);
        puVar14 = (undefined8 *)((longlong)pvVar4 + ((ulonglong)puVar15 >> 2) * 8);
        lVar2 = (longlong)puVar7 - (longlong)puVar9;
        puVar7 = puVar14;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((ulonglong)uVar10 & 7);
            do {
              puVar6 = (undefined1 *)*puVar9;
              *puVar7 = puVar6;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
          }
          if (0x37 < lVar2 - 8U) {
            puVar6 = (undefined1 *)0x0;
            puVar5 = puVar7;
            do {
              *puVar5 = *(undefined8 *)((longlong)puVar9 + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 1) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 1) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 2) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 2) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 3) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 3) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 4) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 4) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 5) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 5) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 6) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 6) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 7) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 7) + (longlong)puVar6);
              puVar5 = (undefined8 *)((longlong)(puVar7 + 8) + (longlong)puVar6);
              puVar6 = puVar6 + 0x40;
            } while ((undefined1 *)
                     ((longlong)pvVar4 +
                     ((((ulonglong)puVar15 >> 2) * 8 + (lVar2 >> 3) * 8) - (longlong)puVar7)) !=
                     puVar6);
          }
          puVar5 = (undefined8 *)*unaff_RDI;
          puVar7 = (undefined8 *)((longlong)puVar14 + lVar2);
        }
        *unaff_RDI = (ulonglong)pvVar4;
        unaff_RDI[1] = (ulonglong)puVar14;
        unaff_RDI[2] = (ulonglong)puVar7;
        unaff_RDI[3] = (ulonglong)((longlong)pvVar4 + (longlong)puVar15 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          operator_delete(puVar6);
          puVar7 = (undefined8 *)unaff_RDI[2];
        }
      }
      else {
        pvVar4 = (void *)((longlong)puVar9 - (longlong)puVar5 >> 3);
        lVar2 = (longlong)pvVar4 + (1 - ((longlong)pvVar4 + 1 >> 0x3f)) >> 1;
        pvVar16 = (void *)((longlong)puVar7 - (longlong)puVar9);
        puVar5 = puVar9;
        if (pvVar16 != (void *)0x0) {
          _memmove(pvVar4,pvVar16,param_3);
          puVar5 = (undefined8 *)unaff_RDI[1];
        }
        puVar7 = puVar9 + (((longlong)pvVar16 >> 3) - lVar2);
        unaff_RDI[2] = (ulonglong)puVar7;
        unaff_RDI[1] = (ulonglong)(puVar5 + -lVar2);
      }
    }
    *puVar7 = uVar1;
    unaff_RDI[2] = unaff_RDI[2] + 8;
    return;
  }
  puVar7 = (undefined8 *)unaff_RDI[1];
  puVar9 = (undefined8 *)unaff_RDI[2];
  puVar14 = (undefined8 *)((longlong)puVar9 - (longlong)puVar7 >> 3);
  puVar5 = (undefined8 *)unaff_RDI[3];
  lVar2 = (longlong)puVar5 - *unaff_RDI;
  if (puVar14 < (undefined8 *)(lVar2 >> 3)) {
    if (puVar5 != puVar9) {
      operator_new((ulong)puVar5);
      FUN_00ad83c0();
      return;
    }
    operator_new((ulong)puVar5);
    FUN_00ad85e0();
    puVar7 = (undefined8 *)unaff_RDI[2];
    uVar1 = *(undefined8 *)unaff_RDI[1];
    puVar9 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (ulonglong)puVar9;
    if (puVar7 == (undefined8 *)unaff_RDI[3]) {
      puVar5 = (undefined8 *)*unaff_RDI;
      if (puVar9 < puVar5 || (longlong)puVar9 - (longlong)puVar5 == 0) {
        lVar2 = (longlong)unaff_RDI[3] - (longlong)puVar5;
        puVar6 = (undefined1 *)(lVar2 >> 2);
        puVar15 = (undefined1 *)((longlong)&MACH_HEADER.magic + 1);
        if (lVar2 != 0) {
          puVar15 = puVar6;
        }
        if ((ulonglong)puVar15 >> 0x3d != 0) goto LAB_00ad8382;
        pvVar4 = operator_new((ulong)puVar6);
        puVar14 = (undefined8 *)((longlong)pvVar4 + ((ulonglong)puVar15 >> 2) * 8);
        lVar2 = (longlong)puVar7 - (longlong)puVar9;
        puVar7 = puVar14;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((ulonglong)uVar10 & 7);
            do {
              puVar6 = (undefined1 *)*puVar9;
              *puVar7 = puVar6;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 0);
          }
          if (0x37 < lVar2 - 8U) {
            puVar6 = (undefined1 *)0x0;
            puVar5 = puVar7;
            do {
              *puVar5 = *(undefined8 *)((longlong)puVar9 + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 1) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 1) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 2) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 2) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 3) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 3) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 4) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 4) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 5) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 5) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 6) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 6) + (longlong)puVar6);
              *(undefined8 *)((longlong)(puVar7 + 7) + (longlong)puVar6) =
                   *(undefined8 *)((longlong)(puVar9 + 7) + (longlong)puVar6);
              puVar5 = (undefined8 *)((longlong)(puVar7 + 8) + (longlong)puVar6);
              puVar6 = puVar6 + 0x40;
            } while ((undefined1 *)
                     ((longlong)pvVar4 +
                     ((((ulonglong)puVar15 >> 2) * 8 + (lVar2 >> 3) * 8) - (longlong)puVar7)) !=
                     puVar6);
          }
          puVar5 = (undefined8 *)*unaff_RDI;
          puVar7 = (undefined8 *)((longlong)puVar14 + lVar2);
        }
        *unaff_RDI = (ulonglong)pvVar4;
        unaff_RDI[1] = (ulonglong)puVar14;
        unaff_RDI[2] = (ulonglong)puVar7;
        unaff_RDI[3] = (ulonglong)((longlong)pvVar4 + (longlong)puVar15 * 8);
        if (puVar5 != (undefined8 *)0x0) {
          operator_delete(puVar6);
          puVar7 = (undefined8 *)unaff_RDI[2];
        }
      }
      else {
        pvVar4 = (void *)((longlong)puVar9 - (longlong)puVar5 >> 3);
        lVar2 = (longlong)pvVar4 + (1 - ((longlong)pvVar4 + 1 >> 0x3f)) >> 1;
        pvVar16 = (void *)((longlong)puVar7 - (longlong)puVar9);
        puVar5 = puVar9;
        if (pvVar16 != (void *)0x0) {
          _memmove(pvVar4,pvVar16,param_3);
          puVar5 = (undefined8 *)unaff_RDI[1];
        }
        puVar7 = puVar9 + (((longlong)pvVar16 >> 3) - lVar2);
        unaff_RDI[2] = (ulonglong)puVar7;
        unaff_RDI[1] = (ulonglong)(puVar5 + -lVar2);
      }
    }
    *puVar7 = uVar1;
    unaff_RDI[2] = unaff_RDI[2] + 8;
    return;
  }
  puVar5 = (undefined8 *)(lVar2 >> 2);
  puVar17 = (undefined8 *)((longlong)&MACH_HEADER.magic + 1);
  if (lVar2 != 0) {
    puVar17 = puVar5;
  }
  if ((ulonglong)puVar17 >> 0x3d != 0) {
LAB_00ad8382:
                    /* WARNING: Subroutine does not return */
    FUN_00ad7940();
  }
  puVar3 = operator_new((ulong)puVar5);
  pvVar4 = operator_new((ulong)puVar5);
  puVar18 = puVar3 + (longlong)puVar14;
  puVar13 = puVar3 + (longlong)puVar17;
  if (puVar14 == puVar17) {
    if (puVar18 < puVar3 || (longlong)puVar18 - (longlong)puVar3 == 0) {
      uVar8 = 1;
      if ((longlong)puVar13 - (longlong)puVar3 != 0) {
        uVar8 = (longlong)puVar13 - (longlong)puVar3 >> 2;
      }
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_00ad7940();
      }
      puVar3 = operator_new((ulong)puVar5);
      puVar18 = (undefined8 *)((longlong)puVar3 + (uVar8 & 0xfffffffffffffffc) * 2);
      puVar13 = puVar3 + uVar8;
      operator_delete(puVar5);
      puVar7 = (undefined8 *)unaff_RDI[1];
      puVar9 = (undefined8 *)unaff_RDI[2];
    }
    else {
      lVar2 = (longlong)puVar18 - (longlong)puVar3 >> 3;
      puVar5 = (undefined8 *)-(lVar2 + 1 >> 0x3f);
      puVar18 = (undefined8 *)
                ((longlong)puVar18 + (lVar2 + 1 + (longlong)puVar5 & 0x3ffffffffffffffeU) * -4);
    }
    *puVar18 = pvVar4;
    puVar14 = puVar18 + 1;
    if (puVar9 == puVar7) goto LAB_00ad7f3e;
  }
  else {
    *puVar18 = pvVar4;
    puVar14 = puVar18 + 1;
    if (puVar9 == puVar7) goto LAB_00ad7f3e;
  }
  do {
    puVar7 = puVar14;
    if (puVar18 == puVar3) {
      if (puVar14 < puVar13) {
        lVar2 = (longlong)puVar13 - (longlong)puVar14 >> 3;
        puVar5 = (undefined8 *)-(lVar2 + 1 >> 0x3f);
        puVar7 = (undefined8 *)
                 ((longlong)puVar14 + (lVar2 + 1 + (longlong)puVar5 & 0xfffffffffffffffeU) * 4);
        pvVar4 = (void *)((longlong)puVar14 - (longlong)puVar18);
        puVar18 = puVar7;
        if (pvVar4 != (void *)0x0) {
          puVar18 = (undefined8 *)((longlong)puVar7 - (longlong)pvVar4);
          _memmove(puVar5,pvVar4,(size_t)puVar13);
        }
      }
      else {
        uVar8 = (longlong)puVar13 - (longlong)puVar3 >> 2;
        if ((longlong)puVar13 - (longlong)puVar3 == 0) {
          uVar8 = 1;
        }
        if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00ad7940();
        }
        puVar3 = operator_new((ulong)puVar5);
        uVar12 = uVar8 + 3 >> 2;
        puVar17 = puVar3 + uVar12;
        puVar13 = puVar3 + uVar8;
        lVar2 = (longlong)puVar14 - (longlong)puVar18;
        puVar7 = puVar17;
        if (lVar2 != 0) {
          uVar10 = ((uint)(lVar2 - 8U >> 3) & 0x1fffffff) + 1;
          puVar14 = puVar17;
          puVar5 = puVar18;
          if ((uVar10 & 7) != 0) {
            lVar11 = -((ulonglong)uVar10 & 7);
            do {
              *puVar14 = *puVar18;
              puVar14 = puVar14 + 1;
              puVar18 = puVar18 + 1;
              lVar11 = lVar11 + 1;
              puVar5 = puVar18;
            } while (lVar11 != 0);
          }
          puVar7 = (undefined8 *)((longlong)puVar17 + lVar2);
          if (0x37 < lVar2 - 8U) {
            puVar7 = (undefined8 *)((longlong)puVar17 + lVar2);
            lVar11 = 0;
            puVar18 = puVar14;
            do {
              *puVar18 = *(undefined8 *)((longlong)puVar5 + lVar11);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 8) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 8);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x10) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x10);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x18) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x18);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x20) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x20);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x28) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x28);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x30) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x30);
              *(undefined8 *)((longlong)puVar14 + lVar11 + 0x38) =
                   *(undefined8 *)((longlong)puVar5 + lVar11 + 0x38);
              puVar18 = (undefined8 *)((longlong)puVar14 + lVar11 + 0x40);
              lVar11 = lVar11 + 0x40;
            } while ((longlong)puVar3 + ((uVar12 * 8 + (lVar2 >> 3) * 8) - (longlong)puVar14) !=
                     lVar11);
          }
        }
        operator_delete(puVar5);
        puVar18 = puVar17;
      }
    }
    puVar9 = puVar9 + -1;
    puVar18[-1] = *puVar9;
    puVar18 = puVar18 + -1;
    puVar14 = puVar7;
  } while (puVar9 != (undefined8 *)unaff_RDI[1]);
LAB_00ad7f3e:
  uVar8 = *unaff_RDI;
  *unaff_RDI = (ulonglong)puVar3;
  unaff_RDI[1] = (ulonglong)puVar18;
  unaff_RDI[2] = (ulonglong)puVar14;
  unaff_RDI[3] = (ulonglong)puVar13;
  if (uVar8 == 0) {
    return;
  }
  operator_delete(puVar5);
  return;
}


