// Function: FUN_00a28a88
// Address: 00a28a88
// Size: 941 bytes
// Class: Unknown


void FUN_00a28a88(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  char *pcVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_40;
  
  FUN_009b882c();
  *unaff_RDI = &DAT_02526cf0;
  unaff_RDI[3] = unaff_RSI;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  FUN_00a47bbe();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xd] = 0;
  local_40 = *(longlong *)(unaff_RSI + 0x48);
  if (local_40 != *(longlong *)(unaff_RSI + 0x50)) {
    pcVar9 = segment_command_00000020.segname + 8;
    do {
      pvVar5 = operator_new((ulong)pcVar9);
      FUN_00a1b6e8();
      puVar2 = (undefined8 *)unaff_RDI[5];
      if (puVar2 == (undefined8 *)unaff_RDI[6]) {
        lVar3 = unaff_RDI[4];
        pvVar8 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar8 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (longlong)unaff_RDI[6] - lVar3;
        pcVar9 = (char *)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((char *)0xffffffffffffffe < pcVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a29fea();
            goto LAB_00a28e37;
          }
          pvVar6 = operator_new((ulong)pcVar9);
        }
        lVar10 = (longlong)pvVar6 + ((longlong)pvVar8 >> 3) * 8 + 8;
        *(void **)(lVar10 + -8) = pvVar5;
        if (0 < (longlong)pvVar8) {
          _memcpy(pcVar9,pvVar8,param_3);
        }
        unaff_RDI[4] = pvVar6;
        unaff_RDI[5] = lVar10;
        unaff_RDI[6] = (void *)((longlong)pvVar6 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(pcVar9);
        }
      }
      else {
        *puVar2 = pvVar5;
        unaff_RDI[5] = puVar2 + 1;
      }
      puVar7 = operator_new((ulong)pcVar9);
      *puVar7 = &DAT_02528d90;
      puVar7[1] = &DAT_0252a720;
      *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      puVar7[3] = 0xffffffffffffffff;
      *(undefined2 *)(puVar7 + 4) = 0x101;
      *(undefined1 *)(puVar7 + 5) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = 0;
      FUN_00a29f68();
      FUN_00a29f68();
      puVar7[0x15] = 0x101000100;
      puVar7[0x14] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      puVar7[0xf] = 0;
      puVar7[0xe] = 0;
      puVar7[0xd] = 0;
      puVar7[0xc] = 0;
      FUN_00a6cd30();
      puVar2 = (undefined8 *)unaff_RDI[8];
      if (puVar2 == (undefined8 *)unaff_RDI[9]) {
        lVar3 = unaff_RDI[7];
        pvVar5 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar5 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (longlong)unaff_RDI[9] - lVar3;
        pcVar9 = (char *)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((char *)0xffffffffffffffe < pcVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a29fea();
LAB_00a28e37:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pvVar8 = operator_new((ulong)pcVar9);
        }
        lVar10 = (longlong)pvVar8 + ((longlong)pvVar5 >> 3) * 8 + 8;
        *(undefined8 **)(lVar10 + -8) = puVar7;
        if (0 < (longlong)pvVar5) {
          _memcpy(pcVar9,pvVar5,param_3);
        }
        unaff_RDI[7] = pvVar8;
        unaff_RDI[8] = lVar10;
        unaff_RDI[9] = (void *)((longlong)pvVar8 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(pcVar9);
        }
      }
      else {
        *puVar2 = puVar7;
        unaff_RDI[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xb0;
    } while (local_40 != *(longlong *)(unaff_RSI + 0x50));
  }
  *(undefined4 *)(unaff_RDI[3] + 0x40) = 0x6b;
  FUN_009b99ca();
  return;
}


