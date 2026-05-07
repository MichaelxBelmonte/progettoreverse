// Function: FUN_00ac92d0
// Address: 00ac92d0
// Size: 775 bytes
// Class: OsSignatureMac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac92d0(undefined8 param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 uVar9;
  ushort local_d4;
  
  if ((*unaff_RSI & 1) == 0) {
    iVar2 = _stat_INODE64();
  }
  else {
    iVar2 = _stat_INODE64();
  }
  if (iVar2 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      *(undefined1 *)(param_2 + 1) = 0;
      if ((DAT_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar8 = (local_d4 & 0xf000) - 0x1000 >> 0xc;
    uVar7 = 0xffff;
    uVar9 = 10;
    if (uVar8 < 0xc) {
      uVar6 = (uint)local_d4;
      switch(uVar8) {
      case 0:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 7;
        break;
      case 1:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 6;
        break;
      case 3:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 3;
        break;
      case 5:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 5;
        break;
      case 7:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 2;
        break;
      case 0xb:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 8;
      }
    }
  }
  else {
    piVar4 = ___error();
    iVar2 = *piVar4;
    if (param_2 != (int *)0x0) {
      if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      *param_2 = iVar2;
      uVar1 = (**(code **)(DAT_02754560 + 0x30))();
      *(undefined1 *)(param_2 + 1) = uVar1;
      *(undefined ***)(param_2 + 2) = &DAT_02754560;
    }
    uVar7 = 0;
    uVar9 = 1;
    if ((iVar2 != 2) && (iVar2 != 0x14)) {
      if (param_2 == (int *)0x0) {
        ___cxa_allocate_exception();
        puVar5 = operator_new(uVar7);
        puVar5[2] = 0x75746174733a3a6d;
        puVar5[1] = 0x6574737973656c69;
        *puVar5 = 0x663a3a74736f6f62;
        *(undefined2 *)(puVar5 + 3) = 0x73;
        if ((DAT_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
          ___cxa_guard_release();
        }
        uVar1 = (**(code **)(DAT_02754560 + 0x30))();
        uVar9 = FUN_00ac4640((ulonglong)CONCAT14(uVar1,iVar2));
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar9,FUN_00ac46f0);
      }
      uVar7 = 0xffff;
      uVar9 = 0;
    }
  }
  *unaff_RDI = uVar9;
  unaff_RDI[1] = uVar7;
  return;
}


