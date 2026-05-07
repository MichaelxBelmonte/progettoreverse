// Function: FUN_00a35d98
// Address: 00a35d98
// Size: 958 bytes
// Class: Unknown


void FUN_00a35d98(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined *puVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_40;
  
  FUN_009b882c();
  *unaff_RDI = &DAT_025271b8;
  unaff_RDI[3] = unaff_RSI;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  FUN_00a4ce6e();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xd] = 0;
  local_40 = *(longlong *)(unaff_RSI + 0x48);
  if (local_40 != *(longlong *)(unaff_RSI + 0x50)) {
    puVar9 = &DAT_0252a720;
    do {
      pvVar5 = operator_new((ulong)puVar9);
      FUN_00a55710();
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
        puVar9 = (undefined *)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((undefined *)0xffffffffffffffe < puVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a37354();
            goto LAB_00a36158;
          }
          pvVar6 = operator_new((ulong)puVar9);
        }
        lVar10 = (longlong)pvVar6 + ((longlong)pvVar8 >> 3) * 8 + 8;
        *(void **)(lVar10 + -8) = pvVar5;
        if (0 < (longlong)pvVar8) {
          _memcpy(puVar9,pvVar8,param_3);
        }
        unaff_RDI[4] = pvVar6;
        unaff_RDI[5] = lVar10;
        unaff_RDI[6] = (void *)((longlong)pvVar6 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar9);
        }
      }
      else {
        *puVar2 = pvVar5;
        unaff_RDI[5] = puVar2 + 1;
      }
      puVar7 = operator_new((ulong)puVar9);
      *puVar7 = &DAT_0252a4c0;
      puVar7[1] = &DAT_0252a720;
      *(undefined4 *)(puVar7 + 2) = 0xffffffff;
      puVar7[3] = 0xffffffffffffffff;
      *(undefined2 *)(puVar7 + 4) = 0x101;
      *(undefined1 *)(puVar7 + 5) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x34) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x44) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = 0;
      FUN_00a372d2();
      FUN_00a372d2();
      puVar7[0x15] = 0;
      puVar7[0x14] = 0;
      puVar7[0x13] = 0;
      puVar7[0x12] = 0;
      puVar7[0x11] = 0;
      puVar7[0x10] = 0;
      *(undefined2 *)(puVar7 + 0x16) = 0x100;
      *(undefined8 *)((longlong)puVar7 + 0xb2) = 0x10100000000;
      FUN_00aa5ac6();
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
        puVar9 = (undefined *)(lVar10 >> 3);
        uVar11 = lVar10 >> 2;
        if (uVar11 < uVar1) {
          uVar11 = uVar1;
        }
        if ((undefined *)0xffffffffffffffe < puVar9) {
          uVar11 = 0x1fffffffffffffff;
        }
        if (uVar11 == 0) {
          pvVar8 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar11) {
            FUN_00a37354();
LAB_00a36158:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pvVar8 = operator_new((ulong)puVar9);
        }
        lVar10 = (longlong)pvVar8 + ((longlong)pvVar5 >> 3) * 8 + 8;
        *(undefined8 **)(lVar10 + -8) = puVar7;
        if (0 < (longlong)pvVar5) {
          _memcpy(puVar9,pvVar5,param_3);
        }
        unaff_RDI[7] = pvVar8;
        unaff_RDI[8] = lVar10;
        unaff_RDI[9] = (void *)((longlong)pvVar8 + uVar11 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar9);
        }
      }
      else {
        *puVar2 = puVar7;
        unaff_RDI[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xc0;
    } while (local_40 != *(longlong *)(unaff_RSI + 0x50));
  }
  *(undefined4 *)(unaff_RDI[3] + 0x40) = 0x76;
  FUN_009b99ca();
  return;
}


