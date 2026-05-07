// Function: FUN_00a2c030
// Address: 00a2c030
// Size: 983 bytes
// Class: GNString


undefined8 FUN_00a2c030(_Unwind_Exception *param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  void *pvVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong unaff_RDI;
  size_t sVar10;
  longlong lVar11;
  void *pvVar12;
  longlong local_60;
  
  pvVar6 = operator_new((ulong)param_1);
  FUN_00a2bb66();
  FUN_00a71340();
  FUN_00a3ed4e();
  uVar2 = *(undefined8 *)((longlong)pvVar6 + 0x18);
  lVar3 = *(longlong *)(unaff_RDI + 8);
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar4 == *(undefined8 **)(lVar3 + 0x18)) {
    lVar8 = *(longlong *)(lVar3 + 8);
    pvVar12 = (void *)((longlong)puVar4 - lVar8);
    uVar1 = ((longlong)pvVar12 >> 3) + 1;
    param_3 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2c3e5;
    lVar11 = (longlong)*(undefined8 **)(lVar3 + 0x18) - lVar8;
    param_1 = (_Unwind_Exception *)(lVar11 >> 3);
    uVar9 = lVar11 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto LAB_00a2c3ea;
      param_3 = 0xffffffff;
      pvVar7 = operator_new((ulong)param_1);
    }
    lVar11 = (longlong)pvVar7 + ((longlong)pvVar12 >> 3) * 8 + 8;
    *(undefined8 *)(lVar11 + -8) = uVar2;
    if (0 < (longlong)pvVar12) {
      _memcpy(param_1,pvVar12,param_3);
    }
    *(void **)(lVar3 + 8) = pvVar7;
    *(longlong *)(lVar3 + 0x10) = lVar11;
    *(void **)(lVar3 + 0x18) = (void *)((longlong)pvVar7 + uVar9 * 8);
    if (lVar8 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a2c41a();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x48)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    pvVar12 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar12 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2c3e5;
    lVar8 = (longlong)*(undefined8 **)(unaff_RDI + 0x48) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar8 >> 3);
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) goto LAB_00a2c3ea;
      pvVar7 = operator_new((ulong)param_1);
    }
    param_1 = (_Unwind_Exception *)((longlong)pvVar7 + uVar9 * 8);
    lVar8 = (longlong)pvVar7 + ((longlong)pvVar12 >> 3) * 8 + 8;
    *(void **)(lVar8 + -8) = pvVar6;
    if (0 < (longlong)pvVar12) {
      _memcpy(param_1,pvVar12,param_3);
    }
    *(void **)(unaff_RDI + 0x38) = pvVar7;
    *(longlong *)(unaff_RDI + 0x40) = lVar8;
    *(_Unwind_Exception **)(unaff_RDI + 0x48) = param_1;
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar6;
    *(undefined8 **)(unaff_RDI + 0x40) = puVar4 + 1;
  }
  pvVar6 = operator_new((ulong)param_1);
  FUN_00a3e9c6();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x28);
  sVar10 = 0xffffffff;
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x30)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x20);
    pvVar12 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar12 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a2c3e5:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (longlong)*(undefined8 **)(unaff_RDI + 0x30) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar8 >> 3);
    uVar9 = lVar8 >> 2;
    if (uVar9 < uVar1) {
      uVar9 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar9 = 0x1fffffffffffffff;
    }
    if (uVar9 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar9) {
LAB_00a2c3ea:
        FUN_00a2cda2();
        FUN_00aa9aa2();
        __Unwind_Resume(param_1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      sVar10 = 0xffffffff;
      pvVar7 = operator_new((ulong)param_1);
    }
    lVar8 = (longlong)pvVar7 + ((longlong)pvVar12 >> 3) * 8 + 8;
    *(void **)(lVar8 + -8) = pvVar6;
    if (0 < (longlong)pvVar12) {
      _memcpy(param_1,pvVar12,sVar10);
    }
    *(void **)(unaff_RDI + 0x20) = pvVar7;
    *(longlong *)(unaff_RDI + 0x28) = lVar8;
    *(void **)(unaff_RDI + 0x30) = (void *)((longlong)pvVar7 + uVar9 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar6;
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


