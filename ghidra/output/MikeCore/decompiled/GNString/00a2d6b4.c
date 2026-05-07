// Function: FUN_00a2d6b4
// Address: 00a2d6b4
// Size: 1159 bytes
// Class: GNString


undefined8 FUN_00a2d6b4(ulong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *pvVar7;
  ulonglong uVar8;
  char *pcVar9;
  void *pvVar10;
  void *pvVar11;
  longlong unaff_RDI;
  size_t sVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong local_60;
  
  puVar5 = operator_new(param_1);
  pcVar9 = segment_command_00000020.segname + 8;
  *puVar5 = &DAT_0252a000;
  puVar5[1] = &DAT_0252a720;
  *(undefined4 *)(puVar5 + 2) = 0xffffffff;
  puVar5[3] = 0xffffffffffffffff;
  *(undefined2 *)(puVar5 + 4) = 0x101;
  *(undefined1 *)(puVar5 + 5) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  FUN_00a2e49a();
  FUN_00a2e49a();
  *(undefined4 *)(puVar5 + 0x11) = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  *(undefined2 *)(puVar5 + 0x18) = 0x100;
  *(undefined8 *)((longlong)puVar5 + 0xc2) = 0;
  *(undefined2 *)((longlong)puVar5 + 0xca) = 0;
  *(undefined4 *)((longlong)puVar5 + 0xcc) = 0x101;
  *(undefined1 *)(puVar5 + 0x1a) = 0;
  FUN_00a9728e();
  FUN_00a3f600();
  uVar2 = puVar5[3];
  lVar3 = *(longlong *)(unaff_RDI + 8);
  puVar4 = *(undefined8 **)(lVar3 + 0x10);
  if (puVar4 == *(undefined8 **)(lVar3 + 0x18)) {
    lVar13 = *(longlong *)(lVar3 + 8);
    pvVar6 = (void *)((longlong)puVar4 - lVar13);
    uVar1 = ((longlong)pvVar6 >> 3) + 1;
    sVar12 = 0xffffffff;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2db31;
    lVar15 = (longlong)*(undefined8 **)(lVar3 + 0x18) - lVar13;
    uVar8 = lVar15 >> 3;
    uVar14 = lVar15 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if (0xffffffffffffffe < uVar8) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) goto LAB_00a2db36;
      sVar12 = 0xffffffff;
      pvVar11 = operator_new((ulong)uVar8);
    }
    pcVar9 = (char *)((longlong)pvVar11 + uVar14 * 8);
    lVar15 = (longlong)pvVar11 + ((longlong)pvVar6 >> 3) * 8 + 8;
    *(undefined8 *)(lVar15 + -8) = uVar2;
    if (0 < (longlong)pvVar6) {
      _memcpy(pcVar9,pvVar6,sVar12);
    }
    *(void **)(lVar3 + 8) = pvVar11;
    *(longlong *)(lVar3 + 0x10) = lVar15;
    *(char **)(lVar3 + 0x18) = pcVar9;
    if (lVar13 != 0) {
      operator_delete(pcVar9);
    }
  }
  else {
    *puVar4 = uVar2;
    *(undefined8 **)(lVar3 + 0x10) = puVar4 + 1;
  }
  FUN_009b4be0();
  FUN_00a2db84();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x40);
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x48)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x38);
    pvVar6 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar6 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) goto LAB_00a2db31;
    lVar13 = (longlong)*(undefined8 **)(unaff_RDI + 0x48) - lVar3;
    pcVar9 = (char *)(lVar13 >> 3);
    uVar14 = lVar13 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if ((char *)0xffffffffffffffe < pcVar9) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar11 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) goto LAB_00a2db36;
      pvVar11 = operator_new((ulong)pcVar9);
    }
    lVar13 = (longlong)pvVar11 + ((longlong)pvVar6 >> 3) * 8 + 8;
    *(undefined8 **)(lVar13 + -8) = puVar5;
    if (0 < (longlong)pvVar6) {
      _memcpy(pcVar9,pvVar6,(size_t)lVar3);
    }
    *(void **)(unaff_RDI + 0x38) = pvVar11;
    *(longlong *)(unaff_RDI + 0x40) = lVar13;
    *(void **)(unaff_RDI + 0x48) = (void *)((longlong)pvVar11 + uVar14 * 8);
    if (lVar3 != 0) {
      operator_delete(pcVar9);
    }
  }
  else {
    *puVar4 = puVar5;
    *(undefined8 **)(unaff_RDI + 0x40) = puVar4 + 1;
  }
  pvVar6 = operator_new((ulong)pcVar9);
  FUN_00a3ef70();
  puVar4 = *(undefined8 **)(unaff_RDI + 0x28);
  sVar12 = 0xffffffff;
  if (puVar4 == *(undefined8 **)(unaff_RDI + 0x30)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x20);
    pvVar11 = (void *)((longlong)puVar4 - lVar3);
    uVar1 = ((longlong)pvVar11 >> 3) + 1;
    if (0x1fffffffffffffff < uVar1) {
LAB_00a2db31:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = (longlong)*(undefined8 **)(unaff_RDI + 0x30) - lVar3;
    pvVar10 = (void *)(lVar13 >> 3);
    uVar14 = lVar13 >> 2;
    if (uVar14 < uVar1) {
      uVar14 = uVar1;
    }
    if ((void *)0xffffffffffffffe < pvVar10) {
      uVar14 = 0x1fffffffffffffff;
    }
    if (uVar14 == 0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (0x1fffffffffffffff < uVar14) {
LAB_00a2db36:
                    /* WARNING: Subroutine does not return */
        FUN_00a2e51c();
      }
      sVar12 = 0xffffffff;
      pvVar7 = operator_new((ulong)pvVar10);
    }
    lVar13 = (longlong)pvVar7 + ((longlong)pvVar11 >> 3) * 8 + 8;
    *(void **)(lVar13 + -8) = pvVar6;
    if (0 < (longlong)pvVar11) {
      _memcpy(pvVar10,pvVar11,sVar12);
    }
    *(void **)(unaff_RDI + 0x20) = pvVar7;
    *(longlong *)(unaff_RDI + 0x28) = lVar13;
    *(void **)(unaff_RDI + 0x30) = (void *)((longlong)pvVar7 + uVar14 * 8);
    if (lVar3 != 0) {
      operator_delete(pvVar10);
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


