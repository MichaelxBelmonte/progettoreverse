// Function: FUN_00c6c630
// Address: 00c6c630
// Size: 655 bytes
// Class: Unknown

void FUN_00c6c630(int param_1,void*param_2,uint param_3,byte param_4)

{
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  byte bVar4;
  uint uVar5;
  uint64_t uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int64_t arg1;
  uint uVar10;
  int64_t this_ptr;
  uint64_t uVar11;
  int local_res8;
  int64_t local_res10;
  int local_res18;
  
  bVar4 = (char)local_res18 * '\b';
  uVar11 = (uint64_t)(param_1 * 3 - 3);
  if (local_res8 == 0) {
    if (local_res18 == 0) {
      if (0 < (int)param_3) {
        if (param_3 == 1) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          do {
            uVar3 = *(void*)(this_ptr + uVar6 * 4);
            param_2[2] = (char)((uint)uVar3 >> 0x10);
            param_2[1] = (char)((uint)uVar3 >> 8);
            *param_2 = (char)uVar3;
            uVar3 = *(void*)(arg1 + uVar6 * 4);
            param_2[5] = (char)((uint)uVar3 >> 0x10);
            param_2[4] = (char)((uint)uVar3 >> 8);
            param_2[3] = (char)uVar3;
            uVar3 = *(void*)(this_ptr + 4 + uVar6 * 4);
            param_2[uVar11 + 5] = (char)((uint)uVar3 >> 0x10);
            param_2[uVar11 + 4] = (char)((uint)uVar3 >> 8);
            param_2[uVar11 + 3] = (char)uVar3;
            uVar3 = *(void*)(arg1 + 4 + uVar6 * 4);
            param_2[uVar11 + 8] = (char)((uint)uVar3 >> 0x10);
            param_2[uVar11 + 7] = (char)((uint)uVar3 >> 8);
            param_2[uVar11 + 6] = (char)uVar3;
            param_2 = param_2 + uVar11 * 2 + 6;
            uVar6 = uVar6 + 2;
          } while ((param_3 & 0xfffffffe) != uVar6);
        }
        if ((param_3 & 1) != 0) {
          uVar3 = *(void*)(this_ptr + uVar6 * 4);
          param_2[2] = (char)((uint)uVar3 >> 0x10);
          param_2[1] = (char)((uint)uVar3 >> 8);
          *param_2 = (char)uVar3;
          uVar3 = *(void*)(arg1 + uVar6 * 4);
          param_2[5] = (char)((uint)uVar3 >> 0x10);
          param_2[4] = (char)((uint)uVar3 >> 8);
          param_2[3] = (char)uVar3;
        }
      }
    }
    else if (0 < (int)param_3) {
      param_2 = param_2 + 5;
      uVar6 = 0;
      do {
        uVar9 = *(int *)(this_ptr + uVar6 * 4) << (bVar4 & 0x1f);
        uVar5 = *(ushort *)(local_res10 + uVar6 * 4) | uVar9;
        uVar8 = *(int *)(arg1 + uVar6 * 4) << (bVar4 & 0x1f);
        uVar10 = *(ushort *)(local_res10 + 2 + uVar6 * 4) | uVar8;
        param_2[-3] = (char)(uVar9 >> 0x10);
        param_2[-4] = (char)(uVar5 >> 8);
        param_2[-5] = (char)uVar5;
        *param_2 = (char)(uVar8 >> 0x10);
        param_2[-1] = (char)(uVar10 >> 8);
        param_2[-2] = (char)uVar10;
        uVar6 = uVar6 + 1;
        param_2 = param_2 + uVar11 + 3;
      } while (param_3 != uVar6);
    }
  }
  else if (local_res18 == 0) {
    if (0 < (int)param_3) {
      param_2 = param_2 + 5;
      uVar6 = 0;
      do {
        iVar2 = *(int *)(arg1 + uVar6 * 4);
        iVar7 = (*(int *)(this_ptr + uVar6 * 4) + iVar2) - (iVar2 * local_res8 >> (param_4 & 0x1f))
        ;
        param_2[-3] = (char)((uint)iVar7 >> 0x10);
        param_2[-4] = (char)((uint)iVar7 >> 8);
        param_2[-5] = (char)iVar7;
        iVar7 = iVar7 - iVar2;
        *param_2 = (char)((uint)iVar7 >> 0x10);
        param_2[-1] = (char)((uint)iVar7 >> 8);
        param_2[-2] = (char)iVar7;
        uVar6 = uVar6 + 1;
        param_2 = param_2 + uVar11 + 3;
      } while (param_3 != uVar6);
    }
  }
  else if (0 < (int)param_3) {
    param_2 = param_2 + 5;
    uVar6 = 0;
    do {
      iVar2 = *(int *)(arg1 + uVar6 * 4);
      iVar7 = (*(int *)(this_ptr + uVar6 * 4) + iVar2) - (iVar2 * local_res8 >> (param_4 & 0x1f));
      uVar8 = iVar7 << (bVar4 & 0x1f);
      uVar5 = *(ushort *)(local_res10 + uVar6 * 4) | uVar8;
      uVar1 = *(ushort *)(local_res10 + 2 + uVar6 * 4);
      param_2[-3] = (char)(uVar8 >> 0x10);
      param_2[-4] = (char)(uVar5 >> 8);
      param_2[-5] = (char)uVar5;
      uVar8 = iVar7 - iVar2 << (bVar4 & 0x1f);
      uVar5 = uVar1 | uVar8;
      *param_2 = (char)(uVar8 >> 0x10);
      param_2[-1] = (char)(uVar5 >> 8);
      param_2[-2] = (char)uVar5;
      uVar6 = uVar6 + 1;
      param_2 = param_2 + uVar11 + 3;
    } while (param_3 != uVar6);
  }
  return;
}

