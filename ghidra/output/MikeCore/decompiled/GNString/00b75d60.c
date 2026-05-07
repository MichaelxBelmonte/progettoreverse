// Function: FUN_00b75d60
// Address: 00b75d60
// Size: 709 bytes
// Class: GNString


void FUN_00b75d60(int *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong local_88;
  char local_80;
  undefined4 local_58;
  undefined4 uStack_54;
  char local_50;
  int *local_48;
  longlong local_40;
  int local_34;
  
  uVar4 = **(uint **)(unaff_RDI + 0x30);
  if (unaff_RSI >> 0x20 == 0) {
    uVar2 = (unaff_RSI & 0xffffffff) / (ulonglong)uVar4;
    if (uVar2 != *(ulonglong *)(unaff_RDI + 0x78)) goto LAB_00b75db0;
  }
  else {
    uVar2 = (longlong)unaff_RSI / (longlong)(ulonglong)uVar4;
    if (uVar2 != *(ulonglong *)(unaff_RDI + 0x78)) {
LAB_00b75db0:
      *(undefined8 *)(unaff_RDI + 0x78) = 0xffffffffffffffff;
      *(uint *)(unaff_RDI + 0x80) = uVar4 * uVar4;
      local_48 = param_2;
      if ((-1 < (longlong)uVar2) && (iVar1 = FUN_00b75b90(), (longlong)uVar2 < (longlong)iVar1)) {
        uVar4 = (uint)uVar2;
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(unaff_RDI + 0x98) + 0x10) +
                 (longlong)(int)(uVar2 >> 4) * 8);
        if (lVar5 != 0) {
          local_40 = lVar5;
          FUN_00d50b00();
          lVar5 = local_40;
        }
        if ((uVar2 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (ulonglong)(uVar4 & 0xf);
          if (6 < uVar6 - 1) {
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 8;
            } while ((uVar4 & 8) != uVar3);
          }
          if ((ulonglong)(uVar4 & 7) != 0) {
            uVar3 = 0;
            do {
              uVar3 = uVar3 + 1;
            } while ((uVar4 & 7) != uVar3);
          }
        }
        local_40 = CONCAT44(local_40._4_4_,*(undefined4 *)(*(longlong *)(lVar5 + 0x10) + uVar6 * 4))
        ;
        FUN_00d50b20();
        param_2 = local_48;
        local_34 = (int)local_40;
        FUN_00c66840();
        (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x3a0))();
        if (CONCAT44(uStack_54,local_58) == 0) {
          iVar1 = (int)local_40;
          (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x380))(&local_34);
          bVar7 = local_34 == iVar1;
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          bVar7 = local_88 == 0 && bVar7;
          param_2 = local_48;
        }
        else {
          bVar7 = false;
        }
        if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (bVar7) {
          FUN_00c66a40(*(undefined4 *)(unaff_RDI + 0x68),
                       *(undefined8 *)(*(longlong *)(unaff_RDI + 0x90) + 0x10),
                       *(undefined4 *)(unaff_RDI + 0x54),&local_58);
          *(ulonglong *)(unaff_RDI + 0x78) = uVar2;
          *(undefined4 *)(unaff_RDI + 0x80) = local_58;
        }
        uVar4 = **(uint **)(unaff_RDI + 0x30);
        goto joined_r0x00b75e88;
      }
      lVar5 = DAT_02765700;
      if (DAT_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      param_2 = local_48;
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
  }
  uVar4 = **(uint **)(unaff_RDI + 0x30);
joined_r0x00b75e88:
  if (unaff_RSI >> 0x20 == 0) {
    iVar1 = (int)((unaff_RSI & 0xffffffff) % (ulonglong)uVar4);
  }
  else {
    iVar1 = (int)((longlong)unaff_RSI % (longlong)(ulonglong)uVar4);
  }
  *param_2 = iVar1;
  *param_1 = *(int *)(unaff_RDI + 0x80) - iVar1;
  return;
}


