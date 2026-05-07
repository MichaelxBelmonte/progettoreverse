// Function: FUN_00c6a000
// Address: 00c6a000
// Size: 785 bytes
// Class: Unknown
// String references:
//   "That ain't right! (%u)\n"

uint64_t FUN_00c6a000(uint *param_1,uint64_t param_2)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar9;
  uint local_res18;
  uint local_res24;
  
  uVar2 = *param_1 / local_res18;
  FUN_00c66620(param_2,*(void*)(&g_00002060 + this_ptr));
  if (local_res24 == 1) {
    FUN_00c667a0();
    FUN_00c667a0();
    uVar3 = FUN_00c69340(1);
    iVar5 = (int)uVar3;
  }
  else {
    if (local_res24 != 2) {
      iVar5 = *(short *)(this_ptr + 8) + 7;
      if (-1 < iVar5) {
        iVar5 = (int)*(short *)(this_ptr + 8);
      }
      uVar6 = iVar5 + 7 >> 3;
      uVar9 = 0;
      while (uVar9 < local_res24) {
        pcVar8 = (char *)(uint64_t)(uVar9 * 3);
        bVar4 = (byte)(uVar9 * 3);
        uVar1 = ((uint)(7L << (bVar4 & 0x3f)) &
                *(uint *)(&g_023dbf20 + (uint64_t)(local_res24 - 1) * 4)) >> (bVar4 & 0x3f);
        FUN_00c667a0(pcVar8,3);
        uVar7 = uVar6;
        if (uVar1 == 3) {
          FUN_00c667a0();
          uVar3 = FUN_00c69340(local_res24,arg1,uVar9,uVar2);
          uVar9 = uVar9 + 1;
        }
        else if (uVar1 == 1) {
          FUN_00c667a0();
          uVar3 = FUN_00c67f80(local_res24,arg1,uVar9,uVar2);
          uVar9 = uVar9 + 2;
          uVar7 = uVar6 * 2;
        }
        else {
          if (uVar1 != 0) {
            _printf(pcVar8);
            return 0xffffffce;
          }
          FUN_00c667a0();
          uVar3 = FUN_00c69340(local_res24,arg1,uVar9,uVar2);
          uVar9 = uVar9 + 1;
        }
        arg1 = arg1 + (uint64_t)uVar7;
        if ((int)uVar3 != 0) {
          return uVar3;
        }
      }
      goto LAB_00c6a2a9;
    }
    FUN_00c667a0();
    FUN_00c667a0();
    if (*(char *)(this_ptr + 10) == '\0') {
      uVar3 = FUN_00c67f80(2);
      iVar5 = (int)uVar3;
    }
    else {
      uVar3 = FUN_00c68d60(2);
      iVar5 = (int)uVar3;
    }
  }
  if (iVar5 != 0) {
    return uVar3;
  }
LAB_00c6a2a9:
  FUN_00c667a0();
  FUN_00c66720();
  uVar2 = FUN_00c66700();
  uVar2 = uVar2 >> 3;
  *param_1 = uVar2;
  *(uint *)(&g_00002050 + this_ptr) = *(int *)(&g_00002050 + this_ptr) + uVar2;
  if (uVar2 < *(uint *)(&g_00002058 + this_ptr)) {
    uVar2 = *(uint *)(&g_00002058 + this_ptr);
  }
  *(uint *)(&g_00002058 + this_ptr) = uVar2;
  return 0;
}

