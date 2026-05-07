// Function: FUN_00a44880
// Address: 00a44880
// Size: 992 bytes
// Class: Unknown


void FUN_00a44880(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  longlong lVar4;
  _Unwind_Exception *exception_object;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *unaff_RDI;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  void *local_68;
  longlong lStack_60;
  longlong local_58;
  undefined8 local_38;
  
  if ((ulonglong)unaff_RDI[4] < 0x200) {
    lVar4 = unaff_RDI[3];
    uVar6 = unaff_RDI[2] - unaff_RDI[1] >> 3;
    lVar7 = lVar4 - *unaff_RDI;
    if ((ulonglong)(lVar7 >> 3) <= uVar6) {
      uVar13 = 1;
      if (lVar7 != 0) {
        uVar13 = lVar7 >> 2;
      }
      pvVar12 = (void *)0x0;
      if (uVar13 >> 0x3d == 0) {
        pvVar2 = operator_new(0);
        pvVar12 = (void *)((longlong)pvVar2 + uVar6 * 8);
        operator_new((ulong)pvVar12);
        FUN_00a554b8();
        for (lVar4 = unaff_RDI[2]; lVar4 != unaff_RDI[1]; lVar4 = lVar4 + -8) {
          FUN_00a43078();
        }
        lVar4 = *unaff_RDI;
        *unaff_RDI = (longlong)pvVar2;
        unaff_RDI[1] = (longlong)pvVar12;
        pvVar10 = (void *)unaff_RDI[2];
        unaff_RDI[2] = (longlong)pvVar12;
        unaff_RDI[3] = (longlong)((longlong)pvVar2 + uVar13 * 8);
        if (lVar4 == 0) {
          return;
        }
        operator_delete(pvVar10);
        return;
      }
LAB_00a44c16:
      FUN_00a446a4();
      operator_delete(pvVar12);
      exception_object = (_Unwind_Exception *)0x0;
      if (local_58 - lStack_60 != 0) {
        exception_object = (_Unwind_Exception *)~((local_58 - lStack_60) - 8U >> 3);
      }
      if (local_68 != (void *)0x0) {
        operator_delete(exception_object);
      }
      __Unwind_Resume(exception_object);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (lVar4 != unaff_RDI[2]) {
      operator_new((ulong)lVar4);
      FUN_00a42f08();
      return;
    }
    local_68 = operator_new((ulong)lVar4);
    FUN_00a55370();
    puVar11 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar14 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar14;
    puVar5 = puVar11;
    if (puVar11 != (undefined8 *)unaff_RDI[3]) goto LAB_00a44bff;
    puVar9 = (undefined8 *)*unaff_RDI;
    lVar4 = (longlong)puVar14 - (longlong)puVar9;
    if (puVar14 < puVar9 || lVar4 == 0) {
      lVar4 = unaff_RDI[3] - (longlong)puVar9;
      pvVar12 = (void *)(lVar4 >> 2);
      pvVar2 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar4 != 0) {
        pvVar2 = pvVar12;
      }
      if ((ulonglong)pvVar2 >> 0x3d != 0) goto LAB_00a44c16;
      pvVar3 = operator_new((ulong)pvVar12);
      puVar5 = (undefined8 *)((longlong)pvVar3 + ((ulonglong)pvVar2 >> 2) * 8);
      pvVar10 = (void *)((longlong)pvVar3 + (longlong)pvVar2 * 8);
      lVar4 = (longlong)puVar11 - (longlong)puVar14;
      puVar11 = puVar5;
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)((longlong)puVar5 + lVar4);
        lVar7 = 0;
        do {
          pvVar12 = *(void **)((longlong)puVar14 + lVar7);
          *puVar5 = pvVar12;
          puVar5 = (undefined8 *)((longlong)pvVar3 + lVar7 + ((ulonglong)pvVar2 >> 2) * 8 + 8);
          lVar7 = lVar7 + 8;
        } while ((lVar4 >> 3) * 8 != lVar7);
        goto LAB_00a44bce;
      }
      goto LAB_00a44bd8;
    }
  }
  else {
    unaff_RDI[4] = unaff_RDI[4] - 0x200;
    puVar11 = (undefined8 *)unaff_RDI[2];
    local_38 = *(undefined8 *)unaff_RDI[1];
    puVar14 = (undefined8 *)unaff_RDI[1] + 1;
    unaff_RDI[1] = (longlong)puVar14;
    puVar5 = puVar11;
    if (puVar11 != (undefined8 *)unaff_RDI[3]) goto LAB_00a44bff;
    puVar9 = (undefined8 *)*unaff_RDI;
    lVar4 = (longlong)puVar14 - (longlong)puVar9;
    if (puVar14 < puVar9 || lVar4 == 0) {
      lVar4 = unaff_RDI[3] - (longlong)puVar9;
      pvVar12 = (void *)(lVar4 >> 2);
      pvVar2 = (void *)((longlong)&MACH_HEADER.magic + 1);
      if (lVar4 != 0) {
        pvVar2 = pvVar12;
      }
      if ((ulonglong)pvVar2 >> 0x3d != 0) goto LAB_00a44c16;
      pvVar3 = operator_new((ulong)pvVar12);
      puVar5 = (undefined8 *)((longlong)pvVar3 + ((ulonglong)pvVar2 >> 2) * 8);
      pvVar10 = (void *)((longlong)pvVar3 + (longlong)pvVar2 * 8);
      lVar4 = (longlong)puVar11 - (longlong)puVar14;
      puVar11 = puVar5;
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)((longlong)puVar5 + lVar4);
        lVar7 = 0;
        do {
          pvVar12 = *(void **)((longlong)puVar14 + lVar7);
          *puVar5 = pvVar12;
          puVar5 = (undefined8 *)((longlong)pvVar3 + lVar7 + ((ulonglong)pvVar2 >> 2) * 8 + 8);
          lVar7 = lVar7 + 8;
        } while ((lVar4 >> 3) * 8 != lVar7);
LAB_00a44bce:
        puVar9 = (undefined8 *)*unaff_RDI;
        puVar5 = puVar8;
      }
LAB_00a44bd8:
      *unaff_RDI = (longlong)pvVar3;
      unaff_RDI[1] = (longlong)puVar11;
      unaff_RDI[2] = (longlong)puVar5;
      unaff_RDI[3] = (longlong)pvVar10;
      if (puVar9 != (undefined8 *)0x0) {
        operator_delete(pvVar12);
        puVar5 = (undefined8 *)unaff_RDI[2];
      }
      goto LAB_00a44bff;
    }
  }
  lVar4 = ((lVar4 >> 3) + 1) - ((lVar4 >> 3) + 1 >> 0x3f) >> 1;
  pvVar12 = (void *)((longlong)puVar11 - (longlong)puVar14);
  puVar5 = puVar14;
  if (pvVar12 != (void *)0x0) {
    _memmove((void *)-lVar4,pvVar12,param_3);
    puVar5 = (undefined8 *)unaff_RDI[1];
  }
  unaff_RDI[2] = (longlong)(puVar14 + (((longlong)pvVar12 >> 3) - lVar4));
  unaff_RDI[1] = (longlong)(puVar5 + -lVar4);
  puVar5 = puVar14 + (((longlong)pvVar12 >> 3) - lVar4);
LAB_00a44bff:
  *puVar5 = local_38;
  unaff_RDI[2] = unaff_RDI[2] + 8;
  return;
}


