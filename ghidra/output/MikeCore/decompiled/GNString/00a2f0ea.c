// Function: FUN_00a2f0ea
// Address: 00a2f0ea
// Size: 959 bytes
// Class: GNString


undefined8 FUN_00a2f0ea(void *param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  void *pvVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  size_t sVar11;
  longlong lVar12;
  void *pvVar13;
  longlong local_60;
  
  pvVar5 = operator_new((ulong)param_1);
  FUN_00a2eb36();
  FUN_00a993c2();
  FUN_00a41474();
  uVar2 = *(undefined8 *)((longlong)pvVar5 + 0x18);
  lVar3 = *(longlong *)(unaff_RDI + 8);
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar4 == *(undefined8 **)(lVar3 + 0x18)) {
    lVar9 = *(longlong *)(lVar3 + 8);
    pvVar13 = (void *)((longlong)puVar4 - lVar9);
    uVar1 = ((longlong)pvVar13 >> 3) + 1;
    param_3 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2f49f;
    lVar12 = (longlong)*(undefined8 **)(lVar3 + 0x18) - lVar9;
    param_1 = (void *)(lVar12 >> 3);
    uVar10 = lVar12 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if ((void *)0xffffffffffffffe < param_1) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_00a2f4a4;
      param_3 = 0xffffffff;
      pvVar8 = operator_new((ulong)param_1);
    }
    lVar12 = (longlong)pvVar8 + ((longlong)pvVar13 >> 3) * 8 + 8;
    *(undefined8 *)(lVar12 + -8) = uVar2;
    if (0 < (longlong)pvVar13) {
      _memcpy(param_1,pvVar13,param_3);
    }
    *(void **)(lVar3 + 8) = pvVar8;
    *(longlong *)(lVar3 + 0x10) = lVar12;
    *(void **)(lVar3 + 0x18) = (void *)((longlong)pvVar8 + uVar10 * 8);
    if (lVar9 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a2f4d4();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x48)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    pvVar13 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar13 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2f49f;
    lVar9 = (longlong)*(undefined8 **)(unaff_RDI + 0x48) - lVar3;
    uVar7 = lVar9 >> 3;
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if (0xffffffffffffffe < uVar7) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) goto LAB_00a2f4a4;
      pvVar8 = operator_new((ulong)uVar7);
    }
    param_1 = (void *)((longlong)pvVar8 + uVar10 * 8);
    lVar9 = (longlong)pvVar8 + ((longlong)pvVar13 >> 3) * 8 + 8;
    *(void **)(lVar9 + -8) = pvVar5;
    if (0 < (longlong)pvVar13) {
      _memcpy(param_1,pvVar13,param_3);
    }
    *(void **)(unaff_RDI + 0x38) = pvVar8;
    *(longlong *)(unaff_RDI + 0x40) = lVar9;
    *(void **)(unaff_RDI + 0x48) = param_1;
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar5;
    *(undefined8 **)(unaff_RDI + 0x40) = puVar4 + 1;
  }
  pvVar5 = operator_new((ulong)param_1);
  FUN_00a40500();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x28);
  sVar11 = 0xffffffff;
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x30)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x20);
    pvVar13 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar13 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a2f49f:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (longlong)*(undefined8 **)(unaff_RDI + 0x30) - lVar3;
    pvVar8 = (void *)(lVar9 >> 3);
    uVar10 = lVar9 >> 2;
    if (uVar10 < uVar1) {
      uVar10 = uVar1;
    }
    if ((void *)0xffffffffffffffe < pvVar8) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar10) {
LAB_00a2f4a4:
                    /* WARNING: Subroutine does not return */
        FUN_00a2fe7c();
      }
      sVar11 = 0xffffffff;
      pvVar6 = operator_new((ulong)pvVar8);
    }
    lVar9 = (longlong)pvVar6 + ((longlong)pvVar13 >> 3) * 8 + 8;
    *(void **)(lVar9 + -8) = pvVar5;
    if (0 < (longlong)pvVar13) {
      _memcpy(pvVar8,pvVar13,sVar11);
    }
    *(void **)(unaff_RDI + 0x20) = pvVar6;
    *(longlong *)(unaff_RDI + 0x28) = lVar9;
    *(void **)(unaff_RDI + 0x30) = (void *)((longlong)pvVar6 + uVar10 * 8);
    if (lVar3 != 0) {
      operator_delete(pvVar8);
    }
  }
  else {
    *puVar4 = pvVar5;
    *(undefined8 **)(unaff_RDI + 0x28) = puVar4 + 1;
  }
  FUN_00aa9d4e();
  if (0x7fffffff00000000 < local_60) {
    FUN_009b9a6e();
  }
  uVar2 = *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + -8);
  FUN_00aa9aa2();
  return uVar2;
}


