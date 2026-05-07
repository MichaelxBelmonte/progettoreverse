// Function: FUN_00a24f5e
// Address: 00a24f5e
// Size: 1112 bytes
// Class: GNString


undefined8 FUN_00a24f5e(_Unwind_Exception *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  longlong lVar9;
  void *pvVar10;
  longlong unaff_RDI;
  size_t sVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong local_60;
  
  puVar6 = operator_new((ulong)param_1);
  *puVar6 = &DAT_02528b30;
  puVar6[1] = &DAT_0252a720;
  *(undefined4 *)(puVar6 + 2) = 0xffffffff;
  puVar6[3] = 0xffffffffffffffff;
  *(undefined2 *)(puVar6 + 4) = 0x101;
  *(undefined1 *)(puVar6 + 5) = 0;
  FUN_00a25cfc();
  FUN_00a25cfc();
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0x1010100;
  *(undefined2 *)((longlong)puVar6 + 0x94) = 0;
  FUN_00a670e2();
  FUN_00a181a2();
  uVar2 = puVar6[3];
  lVar3 = *(longlong *)(unaff_RDI + 8);
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar4 == *(undefined8 **)(lVar3 + 0x18)) {
    lVar12 = *(longlong *)(lVar3 + 8);
    pvVar7 = (void *)((longlong)puVar4 - lVar12);
    uVar1 = ((longlong)pvVar7 >> 3) + 1;
    sVar11 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a25394;
    lVar9 = (longlong)*(undefined8 **)(lVar3 + 0x18) - lVar12;
    param_1 = (_Unwind_Exception *)(lVar9 >> 3);
    uVar13 = lVar9 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) goto LAB_00a25399;
      sVar11 = 0xffffffff;
      pvVar10 = operator_new((ulong)param_1);
    }
    param_1 = (_Unwind_Exception *)((longlong)pvVar10 + uVar13 * 8);
    lVar9 = (longlong)pvVar10 + ((longlong)pvVar7 >> 3) * 8 + 8;
    *(undefined8 *)(lVar9 + -8) = uVar2;
    if (0 < (longlong)pvVar7) {
      _memcpy(param_1,pvVar7,sVar11);
    }
    *(void **)(lVar3 + 8) = pvVar10;
    *(longlong *)(lVar3 + 0x10) = lVar9;
    *(_Unwind_Exception **)(lVar3 + 0x18) = param_1;
    if (lVar12 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = uVar2;
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a253e6();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x48)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    pvVar7 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar7 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a25394;
    lVar12 = (longlong)*(undefined8 **)(unaff_RDI + 0x48) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar12 >> 3);
    uVar13 = lVar12 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) goto LAB_00a25399;
      pvVar10 = operator_new((ulong)param_1);
    }
    lVar12 = (longlong)pvVar10 + ((longlong)pvVar7 >> 3) * 8 + 8;
    *(undefined8 **)(lVar12 + -8) = puVar6;
    if (0 < (longlong)pvVar7) {
      _memcpy(param_1,pvVar7,(size_t)lVar3);
    }
    *(void **)(unaff_RDI + 0x38) = pvVar10;
    *(longlong *)(unaff_RDI + 0x40) = lVar12;
    *(void **)(unaff_RDI + 0x48) = (void *)((longlong)pvVar10 + uVar13 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = puVar6;
    *(undefined8 **)(unaff_RDI + 0x40) = puVar4 + 1;
  }
  pvVar7 = operator_new((ulong)param_1);
  FUN_00a17af0();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x28);
  sVar11 = 0xffffffff;
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x30)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x20);
    pvVar10 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar10 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a25394:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = (longlong)*(undefined8 **)(unaff_RDI + 0x30) - lVar3;
    param_1 = (_Unwind_Exception *)(lVar12 >> 3);
    uVar13 = lVar12 >> 2;
    if (uVar13 < uVar1) {
      uVar13 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < param_1) {
      uVar13 = 0x1fffffffffffffff;
    }
    if (uVar13 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar13) {
LAB_00a25399:
        FUN_00a25d7e();
        FUN_00aa9aa2();
        __Unwind_Resume(param_1);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      sVar11 = 0xffffffff;
      pvVar8 = operator_new((ulong)param_1);
    }
    lVar12 = (longlong)pvVar8 + ((longlong)pvVar10 >> 3) * 8 + 8;
    *(void **)(lVar12 + -8) = pvVar7;
    if (0 < (longlong)pvVar10) {
      _memcpy(param_1,pvVar10,sVar11);
    }
    *(void **)(unaff_RDI + 0x20) = pvVar8;
    *(longlong *)(unaff_RDI + 0x28) = lVar12;
    *(void **)(unaff_RDI + 0x30) = (void *)((longlong)pvVar8 + uVar13 * 8);
    if (lVar3 != 0) {
      operator_delete(param_1);
    }
  }
  else {
    *puVar4 = pvVar7;
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


