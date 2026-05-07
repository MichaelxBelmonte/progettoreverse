// Function: FUN_009c5364
// Address: 009c5364
// Size: 923 bytes
// Class: Unknown


void FUN_009c5364(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *unaff_RDI;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 *puVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 local_38;
  
  if ((ulonglong)unaff_RDI[4] < 0x200) {
    lVar3 = unaff_RDI[3];
    uVar5 = unaff_RDI[2] - unaff_RDI[1] >> 3;
    lVar6 = lVar3 - *unaff_RDI;
    if ((ulonglong)(lVar6 >> 3) <= uVar5) {
      uVar12 = 1;
      if (lVar6 != 0) {
        uVar12 = lVar6 >> 2;
      }
      if (uVar12 >> 0x3d == 0) {
        pvVar1 = operator_new(0);
        pvVar11 = (void *)((longlong)pvVar1 + uVar5 * 8);
        operator_new((ulong)pvVar11);
        FUN_009c59f6();
        for (lVar3 = unaff_RDI[2]; lVar3 != unaff_RDI[1]; lVar3 = lVar3 + -8) {
          FUN_009c5b5a();
        }
        lVar3 = *unaff_RDI;
        *unaff_RDI = (longlong)pvVar1;
        unaff_RDI[1] = (longlong)pvVar11;
        pvVar9 = (void *)unaff_RDI[2];
        unaff_RDI[2] = (longlong)pvVar11;
        unaff_RDI[3] = (longlong)((longlong)pvVar1 + uVar12 * 8);
        if (lVar3 == 0) {
          return;
        }
        operator_delete(pvVar9);
        return;
      }
LAB_009c56fa:
                    /* WARNING: Subroutine does not return */
      FUN_009c0cd9();
    }
    if (lVar3 != unaff_RDI[2]) {
      operator_new((ulong)lVar3);
      FUN_009c574a();
      return;
    }
    operator_new((ulong)lVar3);
    FUN_009c58ae();
    puVar10 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar13 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (undefined8 *)unaff_RDI[3]) goto LAB_009c56e3;
    puVar8 = (undefined8 *)*unaff_RDI;
    lVar3 = (longlong)puVar13 - (longlong)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = unaff_RDI[3] - (longlong)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((ulonglong)pvVar1 >> 0x3d != 0) goto LAB_009c56fa;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (undefined8 *)((longlong)pvVar2 + ((ulonglong)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((longlong)pvVar2 + (longlong)pvVar1 * 8);
      lVar3 = (longlong)puVar10 - (longlong)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)((longlong)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((longlong)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (undefined8 *)((longlong)pvVar2 + lVar6 + ((ulonglong)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
        goto LAB_009c56b2;
      }
      goto LAB_009c56bc;
    }
  }
  else {
    unaff_RDI[4] = unaff_RDI[4] - 0x200;
    puVar10 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar13 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar13;
    puVar4 = puVar10;
    if (puVar10 != (undefined8 *)unaff_RDI[3]) goto LAB_009c56e3;
    puVar8 = (undefined8 *)*unaff_RDI;
    lVar3 = (longlong)puVar13 - (longlong)puVar8;
    if (puVar13 < puVar8 || lVar3 == 0) {
      lVar3 = unaff_RDI[3] - (longlong)puVar8;
      pvVar11 = (void *)(lVar3 >> 2);
      pvVar1 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar3 != 0) {
        pvVar1 = pvVar11;
      }
      if ((ulonglong)pvVar1 >> 0x3d != 0) goto LAB_009c56fa;
      pvVar2 = operator_new((ulong)pvVar11);
      puVar4 = (undefined8 *)((longlong)pvVar2 + ((ulonglong)pvVar1 >> 2) * 8);
      pvVar9 = (void *)((longlong)pvVar2 + (longlong)pvVar1 * 8);
      lVar3 = (longlong)puVar10 - (longlong)puVar13;
      puVar10 = puVar4;
      if (lVar3 != 0) {
        puVar7 = (undefined8 *)((longlong)puVar4 + lVar3);
        lVar6 = 0;
        do {
          pvVar11 = *(void **)((longlong)puVar13 + lVar6);
          *puVar4 = pvVar11;
          puVar4 = (undefined8 *)((longlong)pvVar2 + lVar6 + ((ulonglong)pvVar1 >> 2) * 8 + 8);
          lVar6 = lVar6 + 8;
        } while ((lVar3 >> 3) * 8 != lVar6);
LAB_009c56b2:
        puVar8 = (undefined8 *)*unaff_RDI;
        puVar4 = puVar7;
      }
LAB_009c56bc:
      *unaff_RDI = (longlong)pvVar2;
      unaff_RDI[1] = (longlong)puVar10;
      unaff_RDI[2] = (longlong)puVar4;
      unaff_RDI[3] = (longlong)pvVar9;
      if (puVar8 != (undefined8 *)0x0) {
        operator_delete(pvVar11);
        puVar4 = (undefined8 *)unaff_RDI[2];
      }
      goto LAB_009c56e3;
    }
  }
  lVar3 = ((lVar3 >> 3) + 1) - ((lVar3 >> 3) + 1 >> 0x3f) >> 1;
  pvVar11 = (void *)((longlong)puVar10 - (longlong)puVar13);
  puVar4 = puVar13;
  if (pvVar11 != (void *)0x0) {
    _memmove((void *)-lVar3,pvVar11,param_3);
    puVar4 = (undefined8 *)unaff_RDI[1];
  }
  unaff_RDI[2] = (longlong)(puVar13 + (((longlong)pvVar11 >> 3) - lVar3));
  unaff_RDI[1] = (longlong)(puVar4 + -lVar3);
  puVar4 = puVar13 + (((longlong)pvVar11 >> 3) - lVar3);
LAB_009c56e3:
  *puVar4 = local_38;
  unaff_RDI[2] = unaff_RDI[2] + 8;
  return;
}


