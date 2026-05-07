// Function: FUN_011f4d10
// Address: 011f4d10
// Size: 508 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011f4d10(ulonglong param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  
  local_48 = param_1;
  if (param_1 >> 0x20 != 0) {
    iVar9 = (int)param_1 % 3;
    if (iVar9 == 0) {
      local_58 = FUN_00e7bcc0();
      FUN_00e7bac0();
      iVar1 = local_48._4_4_;
    }
    else {
      iVar1 = (int)(param_1 >> 0x20);
    }
    if (iVar1 == 1) {
      uVar7 = (uint)(iVar9 == 0);
      local_60 = param_2;
      dVar10 = (double)_log((double)(int)local_48);
      uVar2 = FUN_00e7d850(dVar10 / _DAT_0241e5a8);
      uVar3 = FUN_00e7bcc0();
      uVar6 = uVar3 & 0xffffffff00000000;
      uVar8 = (uint)(iVar9 == 0);
      uVar4 = uVar2;
      if ((int)uVar2 < (int)uVar8) {
        iVar1 = -uVar2;
        uVar4 = uVar8 - uVar2 & 7;
        if (uVar4 != 0) {
          iVar5 = 0;
          do {
            uVar3 = (ulonglong)(uint)((int)uVar3 * 2);
            iVar5 = iVar5 + -1;
          } while (-uVar4 != iVar5);
          uVar2 = uVar2 - iVar5;
        }
        uVar4 = uVar7;
        if (6 < iVar1 - (uint)(iVar9 != 0)) {
          iVar9 = uVar8 - uVar2;
          do {
            uVar3 = (ulonglong)(uint)((int)uVar3 << 8);
            iVar9 = iVar9 + -8;
          } while (iVar9 != 0);
        }
      }
      local_58 = *unaff_RDI;
      local_a0 = *local_60;
      local_50 = 0;
      local_98 = 0;
      FUN_011f3be0(DAT_0238fee8,&local_a0,uVar4,uVar6 | uVar3 & 0xffffffff,0);
      return;
    }
  }
  local_90 = *unaff_RDI;
  local_88 = 0;
  local_80 = *unaff_RSI;
  local_78 = 0;
  local_70 = *param_2;
  local_68 = 0;
  FUN_011f3ab0(param_3,&local_70,param_4);
  return;
}


