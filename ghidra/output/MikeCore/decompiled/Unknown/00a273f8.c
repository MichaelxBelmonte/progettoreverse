// Function: FUN_00a273f8
// Address: 00a273f8
// Size: 755 bytes
// Class: Unknown


void FUN_00a273f8(void *param_1,undefined8 param_2,size_t param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  longlong local_40;
  
  FUN_009b882c();
  *unaff_RDI = &DAT_02526c68;
  unaff_RDI[3] = unaff_RSI;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  FUN_00a4721e();
  unaff_RDI[0xf] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xd] = 0;
  local_40 = *(longlong *)(unaff_RSI + 0x48);
  if (local_40 != *(longlong *)(unaff_RSI + 0x50)) {
    do {
      pvVar5 = operator_new((ulong)param_1);
      FUN_00a1a2b0();
      puVar2 = (undefined8 *)unaff_RDI[5];
      if (puVar2 == (undefined8 *)unaff_RDI[6]) {
        lVar3 = unaff_RDI[4];
        pvVar7 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (longlong)unaff_RDI[6] - lVar3;
        param_1 = (void *)(lVar8 >> 3);
        uVar9 = lVar8 >> 2;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar9) {
            FUN_00a2890a();
            goto LAB_00a276ed;
          }
          pvVar6 = operator_new((ulong)param_1);
        }
        lVar8 = (longlong)pvVar6 + ((longlong)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar8 + -8) = pvVar5;
        if (0 < (longlong)pvVar7) {
          _memcpy(param_1,pvVar7,param_3);
        }
        unaff_RDI[4] = pvVar6;
        unaff_RDI[5] = lVar8;
        unaff_RDI[6] = (void *)((longlong)pvVar6 + uVar9 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar5;
        unaff_RDI[5] = puVar2 + 1;
      }
      pvVar5 = operator_new((ulong)param_1);
      FUN_00a27766();
      FUN_00a6bc68();
      puVar2 = (undefined8 *)unaff_RDI[8];
      if (puVar2 == (undefined8 *)unaff_RDI[9]) {
        lVar3 = unaff_RDI[7];
        pvVar7 = (void *)((longlong)puVar2 - lVar3);
        uVar1 = ((longlong)pvVar7 >> 3) + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (longlong)unaff_RDI[9] - lVar3;
        param_1 = (void *)(lVar8 >> 3);
        uVar9 = lVar8 >> 2;
        if (uVar9 < uVar1) {
          uVar9 = uVar1;
        }
        if ((void *)0xffffffffffffffe < param_1) {
          uVar9 = 0x1fffffffffffffff;
        }
        if (uVar9 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x1fffffffffffffff < uVar9) {
            FUN_00a2890a();
LAB_00a276ed:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pvVar6 = operator_new((ulong)param_1);
        }
        lVar8 = (longlong)pvVar6 + ((longlong)pvVar7 >> 3) * 8 + 8;
        *(void **)(lVar8 + -8) = pvVar5;
        if (0 < (longlong)pvVar7) {
          _memcpy(param_1,pvVar7,param_3);
        }
        unaff_RDI[7] = pvVar6;
        unaff_RDI[8] = lVar8;
        unaff_RDI[9] = (void *)((longlong)pvVar6 + uVar9 * 8);
        if (lVar3 != 0) {
          operator_delete(param_1);
        }
      }
      else {
        *puVar2 = pvVar5;
        unaff_RDI[8] = puVar2 + 1;
      }
      local_40 = local_40 + 0xe0;
    } while (local_40 != *(longlong *)(unaff_RSI + 0x50));
  }
  *(undefined4 *)(unaff_RDI[3] + 0x40) = 0x6a;
  FUN_009b99ca();
  return;
}


