// Function: FUN_00ac71d0
// Address: 00ac71d0
// Size: 788 bytes
// Class: OsSignatureMac

void FUN_00ac71d0(ulong param_1,int *param_2)

{
  uint8_t uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void*puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *arg1;
  void*this_ptr;
  uint32_t uVar9;
  ushort local_d4;
  
  if ((*arg1 & 1) == 0) {
    iVar2 = _lstat_INODE64();
  }
  else {
    iVar2 = _lstat_INODE64();
  }
  if (iVar2 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = 0;
      *(void*)(param_2 + 1) = 0;
      if ((g_02754570 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      *(void***)(param_2 + 2) = &g_02754560;
    }
    uVar8 = (local_d4 & 0xf000) - 0x1000 >> 0xc;
    uVar7 = 0xffff;
    uVar9 = 10;
    if (uVar8 < 0xc) {
      uVar6 = (uint)local_d4;
      switch(uVar8) {
      case 0:
        uVar7 = local_d4 & 0xfff;
        uVar9 = 7;
        break;
      case 1:
        uVar7 = local_d4 & 0xfff;
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
      case 9:
        uVar7 = uVar6 & 0xfff;
        uVar9 = 4;
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
      if ((g_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        param_1 = 0x2520080;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      *param_2 = iVar2;
      uVar1 = (**(code **)(g_02754560 + 0x30))();
      *(void*)(param_2 + 1) = uVar1;
      *(void***)(param_2 + 2) = &g_02754560;
    }
    uVar7 = 0;
    uVar9 = 1;
    if ((iVar2 != 2) && (iVar2 != 0x14)) {
      if (param_2 == (int *)0x0) {
        ___cxa_allocate_exception();
        puVar5 = operator_new(param_1);
        puVar5[2] = 0x75746174733a3a6d;
        puVar5[1] = 0x6574737973656c69;
        *puVar5 = 0x663a3a74736f6f62;
        *(void*)(puVar5 + 3) = 0x73;
        if ((g_02754570 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_02754568 = 0x8fafd21e25c5e09b;
          g_02754560 = &g_02520080;
          ___cxa_guard_release();
        }
        uVar1 = (**(code **)(g_02754560 + 0x30))();
        uVar9 = FUN_00ac4640((uint64_t)CONCAT14(uVar1,iVar2));
                            ___cxa_throw(uVar9,FUN_00ac46f0);
      }
      uVar7 = 0xffff;
      uVar9 = 0;
    }
  }
  *this_ptr = uVar9;
  this_ptr[1] = uVar7;
  return;
}

