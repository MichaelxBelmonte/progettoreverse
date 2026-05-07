// Function: FUN_009e70a0
// Address: 009e70a0
// Size: 557 bytes
// Class: Unknown


undefined8 * FUN_009e70a0(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *unaff_RSI;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *unaff_RDI;
  undefined8 *puVar7;
  longlong local_58;
  undefined8 *local_48;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)unaff_RDI[1];
    if ((ulonglong)((unaff_RDI[2] - (longlong)puVar2 >> 3) * -0x5555555555555555) < param_2) {
      if (0xaaaaaaaaaaaaaaa < ((longlong)puVar2 - *unaff_RDI >> 3) * -0x5555555555555555 + param_2)
      {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      FUN_009e7474(unaff_RDI + 2,((longlong)unaff_RSI - *unaff_RDI >> 3) * -0x5555555555555555);
      lVar3 = param_2 * 0x18;
      puVar2 = local_48;
      do {
        uVar1 = *param_1;
        puVar2[1] = param_1[1];
        *puVar2 = uVar1;
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_1 + 2);
        lVar3 = lVar3 + -0x18;
        puVar2 = puVar2 + 3;
      } while (lVar3 != 0);
      unaff_RSI = (undefined8 *)FUN_009e73b6();
      if (local_58 != 0) {
        operator_delete(local_48 + param_2 * 3);
      }
    }
    else {
      lVar3 = (longlong)puVar2 - (longlong)unaff_RSI >> 3;
      uVar4 = param_2;
      if ((ulonglong)(lVar3 * -0x5555555555555555) < param_2) {
        lVar5 = param_2 + lVar3 * 0x5555555555555555;
        puVar7 = puVar2;
        if (lVar5 != 0) {
          puVar7 = puVar2 + lVar5 * 3;
          lVar5 = param_2 * 0x18 + lVar3 * -8;
          puVar6 = puVar2;
          do {
            uVar1 = *param_1;
            puVar6[1] = param_1[1];
            *puVar6 = uVar1;
            *(undefined1 *)(puVar6 + 2) = *(undefined1 *)(param_1 + 2);
            lVar5 = lVar5 + -0x18;
            puVar6 = puVar6 + 3;
          } while (lVar5 != 0);
        }
        unaff_RDI[1] = (longlong)puVar7;
        uVar4 = lVar3 * -0x5555555555555555;
        if ((longlong)puVar2 - (longlong)unaff_RSI == 0) {
          return unaff_RSI;
        }
      }
      FUN_009e731a(unaff_RSI + param_2 * 3);
      puVar2 = unaff_RSI;
      if ((unaff_RSI <= param_1) && (param_1 < (undefined8 *)unaff_RDI[1])) {
        param_1 = param_1 + param_2 * 3;
      }
      do {
        *puVar2 = *param_1;
        puVar2[1] = param_1[1];
        *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(param_1 + 2);
        uVar4 = uVar4 - 1;
        puVar2 = puVar2 + 3;
      } while (uVar4 != 0);
    }
  }
  return unaff_RSI;
}


