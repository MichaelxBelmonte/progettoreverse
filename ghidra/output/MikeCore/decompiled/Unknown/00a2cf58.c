// Function: FUN_00a2cf58
// Address: 00a2cf58
// Size: 991 bytes
// Class: Unknown


void FUN_00a2cf58(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined *puVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_40;
  
  FUN_009b882c();
  *unaff_RDI = &DAT_02526e88;
  unaff_RDI[3] = unaff_RSI;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  FUN_00a4989e();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xd] = 0;
  local_40 = *(longlong *)(unaff_RSI + 0x48);
  if (local_40 != *(longlong *)(unaff_RSI + 0x50)) {
    puVar8 = &DAT_0252a720;
    do {
      pvVar4 = operator_new((ulong)puVar8);
      FUN_00a3ef70();
      puVar2 = (undefined8 *)unaff_RDI[5];
      if (puVar2 == (undefined8 *)unaff_RDI[6]) {
        lVar3 = unaff_RDI[4];
        pvVar7 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (longlong)unaff_RDI[6] - lVar3;
        puVar8 = (undefined *)(lVar9 >> 3);
        uVar10 = lVar9 >> 2;
        if (uVar10 < uVar1) {
          uVar10 = uVar1;
        }
        if ((undefined *)0xffffffffffffffe < puVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00a2e51c();
          }
          pvVar5 = operator_new((ulong)puVar8);
        }
        lVar9 = (longlong)pvVar5 + ((longlong)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar9 + -8) = pvVar4;
        if (0 < (longlong)pvVar7) {
          _memcpy(puVar8,pvVar7,param_3);
        }
        unaff_RDI[4] = pvVar5;
        unaff_RDI[5] = lVar9;
        unaff_RDI[6] = (void *)((longlong)pvVar5 + uVar10 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar8);
        }
      }
      else {
        *puVar2 = pvVar4;
        unaff_RDI[5] = puVar2 + 1;
      }
      puVar6 = operator_new((ulong)puVar8);
      *puVar6 = &DAT_0252a000;
      puVar6[1] = &DAT_0252a720;
      *(undefined4 *)(puVar6 + 2) = 0xffffffff;
      puVar6[3] = 0xffffffffffffffff;
      *(undefined2 *)(puVar6 + 4) = 0x101;
      *(undefined1 *)(puVar6 + 5) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x2c) = 0;
      *(undefined1 *)(puVar6 + 6) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
      puVar6[8] = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      FUN_00a2e49a();
      FUN_00a2e49a();
      *(undefined4 *)(puVar6 + 0x11) = 0;
      puVar6[0x12] = 0;
      puVar6[0x13] = 0;
      puVar6[0x14] = 0;
      puVar6[0x15] = 0;
      puVar6[0x16] = 0;
      puVar6[0x17] = 0;
      *(undefined2 *)(puVar6 + 0x18) = 0x100;
      *(undefined8 *)((longlong)puVar6 + 0xc2) = 0;
      *(undefined2 *)((longlong)puVar6 + 0xca) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xcc) = 0x101;
      *(undefined1 *)(puVar6 + 0x1a) = 0;
      FUN_00a9728e();
      puVar2 = (undefined8 *)unaff_RDI[8];
      if (puVar2 == (undefined8 *)unaff_RDI[9]) {
        lVar3 = unaff_RDI[7];
        pvVar4 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar4 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (longlong)unaff_RDI[9] - lVar3;
        puVar8 = (undefined *)(lVar9 >> 3);
        uVar10 = lVar9 >> 2;
        if (uVar10 < uVar1) {
          uVar10 = uVar1;
        }
        if ((undefined *)0xffffffffffffffe < puVar8) {
          uVar10 = 0x1fffffffffffffff;
        }
        if (uVar10 == 0) {
          pvVar7 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_00a2e51c();
          }
          pvVar7 = operator_new((ulong)puVar8);
        }
        lVar9 = (longlong)pvVar7 + ((longlong)pvVar4 >> 3) * 8 + 8;
        *(undefined8 **)(lVar9 + -8) = puVar6;
        if (0 < (longlong)pvVar4) {
          _memcpy(puVar8,pvVar4,param_3);
        }
        unaff_RDI[7] = pvVar7;
        unaff_RDI[8] = lVar9;
        unaff_RDI[9] = (void *)((longlong)pvVar7 + uVar10 * 8);
        if (lVar3 != 0) {
          operator_delete(puVar8);
        }
      }
      else {
        *puVar2 = puVar6;
        unaff_RDI[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xd8;
    } while (local_40 != *(longlong *)(unaff_RSI + 0x50));
  }
  *(undefined4 *)(unaff_RDI[3] + 0x40) = 0x6e;
  FUN_009b99ca();
  return;
}


