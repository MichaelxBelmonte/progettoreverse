// Function: FUN_018653b0
// Address: 018653b0
// Size: 712 bytes
// Class: Unknown


void FUN_018653b0(undefined8 *param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *unaff_RDI;
  uint uVar10;
  undefined4 uVar11;
  undefined8 local_70;
  undefined1 local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  int local_40;
  undefined4 uStack_3c;
  char local_38;
  
  local_58 = *unaff_RDI;
  local_50 = '\0';
  FUN_018da560();
  lVar2 = CONCAT44(uStack_3c,local_40);
  local_48 = param_1;
  if (local_38 == '\0') {
    if (((lVar2 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (CONCAT44(uStack_3c,local_40) != 0))
    {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  iVar4 = *(int *)(lVar2 + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  if (iVar6 >> 2 < param_3) {
    local_70 = *local_48;
    local_68 = 0;
    FUN_0185df90(1,param_2,&local_70);
    lVar3 = CONCAT44(uStack_3c,local_40);
    if ((local_38 == '\0') && (lVar3 != 0)) {
      FUN_00d50b00();
    }
    if ((int)*(uint *)(lVar2 + 0x18) < 4) {
      local_60 = *(longlong *)(lVar3 + 0x10);
    }
    else {
      uVar7 = *(uint *)(lVar2 + 0x18) >> 2;
      lVar1 = *(longlong *)(lVar2 + 0x10);
      local_60 = *(longlong *)(lVar3 + 0x10);
      if ((ulonglong)uVar7 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          *(undefined4 *)(local_60 + (longlong)*(int *)(lVar1 + uVar9 * 4) * 4) = 0;
          *(undefined4 *)(local_60 + (longlong)*(int *)(lVar1 + 4 + uVar9 * 4) * 4) = 0;
          *(undefined4 *)(local_60 + (longlong)*(int *)(lVar1 + 8 + uVar9 * 4) * 4) = 0;
          *(undefined4 *)(local_60 + (longlong)*(int *)(lVar1 + 0xc + uVar9 * 4) * 4) = 0;
          uVar9 = uVar9 + 4;
        } while ((uVar7 & 0xfffffffc) != uVar9);
      }
      if ((ulonglong)(uVar7 & 3) != 0) {
        uVar8 = 0;
        do {
          *(undefined4 *)(local_60 + (longlong)*(int *)(lVar1 + uVar9 * 4 + uVar8 * 4) * 4) = 0;
          uVar8 = uVar8 + 1;
        } while ((uVar7 & 3) != uVar8);
      }
    }
    uVar11 = FUN_015b32a0(DAT_02391074,&local_40);
    local_48 = (undefined8 *)CONCAT44(local_48._4_4_,uVar11);
    iVar4 = FUN_01715480();
    iVar4 = (local_40 - iVar4) + 0xc;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    uVar9 = *(ulonglong *)(*unaff_RDI + 0x18);
    cVar5 = (char)iVar4 + '\x01';
    uVar7 = cVar5 * 0x2b;
    uVar10 = (uint)(uVar9 >> (((char)(iVar4 + 0xbU) +
                               ((byte)((iVar4 + 0xbU & 0xff) / 3) & 0xfc) * -3 & 0xf) << 2)) & 0xf;
    uVar7 = (uint)(uVar9 >> ((cVar5 + ((char)((uVar7 & 0xffff) >> 0xf) + (char)(uVar7 >> 9)) * -0xc
                             & 0xfU) << 2)) & 0xf;
    if ((uVar10 == 0xf) || (uVar7 == 0xf)) {
      if (((~(uint)uVar9 & 0xf0000000) == 0) || (iVar4 != 6)) {
        if (*(float *)(&DAT_02417230 + (ulonglong)(uVar10 != 0xf || uVar7 != 0xf) * 4) <=
            local_48._0_4_ &&
            local_48._0_4_ !=
            *(float *)(&DAT_02417230 + (ulonglong)(uVar10 != 0xf || uVar7 != 0xf) * 4)) {
          FUN_0171a310();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 == 0) {
      return;
    }
  }
  FUN_00d50b20();
  return;
}


