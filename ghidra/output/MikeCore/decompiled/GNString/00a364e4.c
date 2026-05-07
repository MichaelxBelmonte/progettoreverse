// Function: FUN_00a364e4
// Address: 00a364e4
// Size: 1153 bytes
// Class: GNString


undefined8 FUN_00a364e4(ulong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *pvVar8;
  _Unwind_Exception *exception_object;
  void *pvVar9;
  longlong unaff_RDI;
  size_t sVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong local_60;
  
  puVar6 = operator_new(param_1);
  exception_object = (_Unwind_Exception *)(segment_command_00000020.segname + 8);
  *puVar6 = &DAT_0252a4c0;
  puVar6[1] = &DAT_0252a720;
  *(undefined4 *)(puVar6 + 2) = 0xffffffff;
  puVar6[3] = 0xffffffffffffffff;
  *(undefined2 *)(puVar6 + 4) = 0x101;
  *(undefined1 *)(puVar6 + 5) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x44) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = 0;
  FUN_00a372d2();
  FUN_00a372d2();
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  *(undefined2 *)(puVar6 + 0x16) = 0x100;
  *(undefined8 *)((longlong)puVar6 + 0xb2) = 0x10100000000;
  FUN_00aa5ac6();
  FUN_00a55de8();
  uVar2 = puVar6[3];
  lVar3 = *(longlong *)(unaff_RDI + 8);
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar4 == *(undefined8 **)(lVar3 + 0x18)) {
    lVar11 = *(longlong *)(lVar3 + 8);
    pvVar7 = (void *)((longlong)puVar4 - lVar11);
    uVar1 = ((longlong)pvVar7 >> 3) + 1;
    sVar10 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a36943;
    lVar13 = (longlong)*(undefined8 **)(lVar3 + 0x18) - lVar11;
    exception_object = (_Unwind_Exception *)(lVar13 >> 3);
    uVar12 = lVar13 >> 2;
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < exception_object) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar12) goto LAB_00a36948;
      sVar10 = 0xffffffff;
      pvVar9 = operator_new((ulong)exception_object);
    }
    exception_object = (_Unwind_Exception *)((longlong)pvVar9 + uVar12 * 8);
    lVar13 = (longlong)pvVar9 + ((longlong)pvVar7 >> 3) * 8 + 8;
    *(undefined8 *)(lVar13 + -8) = uVar2;
    if (0 < (longlong)pvVar7) {
      _memcpy(exception_object,pvVar7,sVar10);
    }
    *(void **)(lVar3 + 8) = pvVar9;
    *(longlong *)(lVar3 + 0x10) = lVar13;
    *(_Unwind_Exception **)(lVar3 + 0x18) = exception_object;
    if (lVar11 != 0) {
      operator_delete(exception_object);
    }
  }
  else {
    *puVar4 = uVar2;
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a369a8();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x48)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    pvVar7 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar7 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a36943;
    lVar11 = (longlong)*(undefined8 **)(unaff_RDI + 0x48) - lVar3;
    exception_object = (_Unwind_Exception *)(lVar11 >> 3);
    uVar12 = lVar11 >> 2;
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < exception_object) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar12) goto LAB_00a36948;
      pvVar9 = operator_new((ulong)exception_object);
    }
    lVar11 = (longlong)pvVar9 + ((longlong)pvVar7 >> 3) * 8 + 8;
    *(undefined8 **)(lVar11 + -8) = puVar6;
    if (0 < (longlong)pvVar7) {
      _memcpy(exception_object,pvVar7,(size_t)lVar3);
    }
    *(void **)(unaff_RDI + 0x38) = pvVar9;
    *(longlong *)(unaff_RDI + 0x40) = lVar11;
    *(void **)(unaff_RDI + 0x48) = (void *)((longlong)pvVar9 + uVar12 * 8);
    if (lVar3 != 0) {
      operator_delete(exception_object);
    }
  }
  else {
    *puVar4 = puVar6;
    *(undefined8 **)(unaff_RDI + 0x40) = puVar4 + 1;
  }
  pvVar7 = operator_new((ulong)exception_object);
  FUN_00a55710();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x28);
  sVar10 = 0xffffffff;
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x30)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x20);
    pvVar9 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar9 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a36943:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = (longlong)*(undefined8 **)(unaff_RDI + 0x30) - lVar3;
    exception_object = (_Unwind_Exception *)(lVar11 >> 3);
    uVar12 = lVar11 >> 2;
    if (uVar12 < uVar1) {
      uVar12 = uVar1;
    }
    if ((_Unwind_Exception *)0xffffffffffffffe < exception_object) {
      uVar12 = 0x1fffffffffffffff;
    }
    if (uVar12 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar12) {
LAB_00a36948:
        FUN_00a37354();
        FUN_00aa9aa2();
        __Unwind_Resume(exception_object);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      sVar10 = 0xffffffff;
      pvVar8 = operator_new((ulong)exception_object);
    }
    lVar11 = (longlong)pvVar8 + ((longlong)pvVar9 >> 3) * 8 + 8;
    *(void **)(lVar11 + -8) = pvVar7;
    if (0 < (longlong)pvVar9) {
      _memcpy(exception_object,pvVar9,sVar10);
    }
    *(void **)(unaff_RDI + 0x20) = pvVar8;
    *(longlong *)(unaff_RDI + 0x28) = lVar11;
    *(void **)(unaff_RDI + 0x30) = (void *)((longlong)pvVar8 + uVar12 * 8);
    if (lVar3 != 0) {
      operator_delete(exception_object);
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


