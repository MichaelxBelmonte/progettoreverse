// Function: FUN_00a2e7c8
// Address: 00a2e7c8
// Size: 751 bytes
// Class: Unknown


void FUN_00a2e7c8(void *param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_40;
  
  FUN_009b882c();
  *unaff_RDI = &DAT_02526f10;
  unaff_RDI[3] = unaff_RSI;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  FUN_00a4a0ee();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xd] = 0;
  local_40 = *(longlong *)(unaff_RSI + 0x48);
  if (local_40 != *(longlong *)(unaff_RSI + 0x50)) {
    do {
      pvVar4 = operator_new((ulong)param_1);
      FUN_00a40500();
      puVar2 = (undefined8 *)unaff_RDI[5];
      if (puVar2 == (undefined8 *)unaff_RDI[6]) {
        lVar3 = unaff_RDI[4];
        pvVar6 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar6 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (longlong)unaff_RDI[6] - lVar3;
        param_1 = (void *)(lVar7 >> 3);
        uVar8 = lVar7 >> 2;
        if (uVar8 < uVar1) {
          uVar8 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00a2fe7c();
          }
          pvVar5 = operator_new((ulong)param_1);
        }
        lVar7 = (longlong)pvVar5 + ((longlong)pvVar6 >> 3) * 8 + 8;
        *(void **)(lVar7 + -8) = pvVar4;
        if (0 < (longlong)pvVar6) {
          _memcpy(param_1,pvVar6,param_3);
        }
        unaff_RDI[4] = pvVar5;
        unaff_RDI[5] = lVar7;
        unaff_RDI[6] = (void *)((longlong)pvVar5 + uVar8 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar4;
        unaff_RDI[5] = puVar2 + 1;
      }
      pvVar4 = operator_new((ulong)param_1);
      FUN_00a2eb36();
      FUN_00a993c2();
      puVar2 = (undefined8 *)unaff_RDI[8];
      if (puVar2 == (undefined8 *)unaff_RDI[9]) {
        lVar3 = unaff_RDI[7];
        pvVar6 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar6 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (longlong)unaff_RDI[9] - lVar3;
        param_1 = (void *)(lVar7 >> 3);
        uVar8 = lVar7 >> 2;
        if (uVar8 < uVar1) {
          uVar8 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar8 = 0x1fffffffffffffff;
        }
        if (uVar8 == 0) {
          pvVar5 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_00a2fe7c();
          }
          pvVar5 = operator_new((ulong)param_1);
        }
        lVar7 = (longlong)pvVar5 + ((longlong)pvVar6 >> 3) * 8 + 8;
        *(void **)(lVar7 + -8) = pvVar4;
        if (0 < (longlong)pvVar6) {
          _memcpy(param_1,pvVar6,param_3);
        }
        unaff_RDI[7] = pvVar5;
        unaff_RDI[8] = lVar7;
        unaff_RDI[9] = (void *)((longlong)pvVar5 + uVar8 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar4;
        unaff_RDI[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0x1d0;
    } while (local_40 != *(longlong *)(unaff_RSI + 0x50));
  }
  *(undefined4 *)(unaff_RDI[3] + 0x40) = 0x6f;
  FUN_009b99ca();
  return;
}


