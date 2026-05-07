// Function: FUN_00c6c8c0
// Address: 00c6c8c0
// Size: 604 bytes
// Class: Unknown

void FUN_00c6c8c0(uint64_t param_1,uint *param_2,uint param_3,byte param_4)

{
  int iVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int64_t arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int local_res8;
  int64_t local_res10;
  int local_res18;
  
  bVar2 = (char)local_res18 * '\b';
  if (local_res8 == 0) {
    param_1 = param_1 & 0xffffffff;
    if (local_res18 == 0) {
      if (0 < (int)param_3) {
        if ((uint64_t)param_3 - 1 < 3) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          do {
            puVar3 = param_2;
            *puVar3 = *(uint *)(this_ptr + uVar7 * 4);
            puVar3[1] = *(uint *)(arg1 + uVar7 * 4);
            puVar3[param_1] = *(uint *)(this_ptr + 4 + uVar7 * 4);
            puVar3[param_1 + 1] = *(uint *)(arg1 + 4 + uVar7 * 4);
            puVar3[param_1 * 2] = *(uint *)(this_ptr + 8 + uVar7 * 4);
            puVar3[param_1 * 2 + 1] = *(uint *)(arg1 + 8 + uVar7 * 4);
            puVar3[param_1 * 3] = *(uint *)(this_ptr + 0xc + uVar7 * 4);
            puVar3[param_1 * 3 + 1] = *(uint *)(arg1 + 0xc + uVar7 * 4);
            uVar7 = uVar7 + 4;
            param_2 = puVar3 + param_1 * 4;
          } while ((param_3 & 0xfffffffc) != uVar7);
          param_2 = puVar3 + param_1 * 4;
        }
        if ((uint64_t)(param_3 & 3) != 0) {
          param_2 = param_2 + 1;
          uVar5 = 0;
          do {
            param_2[-1] = *(uint *)(this_ptr + uVar7 * 4 + uVar5 * 4);
            *param_2 = *(uint *)(arg1 + uVar7 * 4 + uVar5 * 4);
            uVar5 = uVar5 + 1;
            param_2 = param_2 + param_1;
          } while ((param_3 & 3) != uVar5);
        }
      }
    }
    else if (0 < (int)param_3) {
      if (param_3 == 1) {
        lVar6 = 0;
        uVar7 = 0;
      }
      else {
        lVar6 = 0;
        uVar7 = 0;
        do {
          puVar3 = param_2;
          *puVar3 = (uint)*(ushort *)(local_res10 + uVar7 * 4) |
                    *(int *)(this_ptr + uVar7 * 4) << (bVar2 & 0x1f);
          puVar3[1] = (uint)*(ushort *)(local_res10 + 2 + uVar7 * 4) |
                      *(int *)(arg1 + uVar7 * 4) << (bVar2 & 0x1f);
          puVar3[param_1] =
               (uint)*(ushort *)(local_res10 + 4 + uVar7 * 4) |
               *(int *)(this_ptr + 4 + uVar7 * 4) << (bVar2 & 0x1f);
          puVar3[param_1 + 1] =
               (uint)*(ushort *)(local_res10 + 6 + uVar7 * 4) |
               *(int *)(arg1 + 4 + uVar7 * 4) << (bVar2 & 0x1f);
          uVar7 = uVar7 + 2;
          lVar6 = lVar6 + 4;
          param_2 = puVar3 + param_1 * 2;
        } while ((param_3 & 0xfffffffe) != uVar7);
        param_2 = puVar3 + param_1 * 2;
        if ((param_3 & 1) == 0) {
          return;
        }
      }
      *param_2 = (uint)*(ushort *)(local_res10 + lVar6 * 2) |
                 *(int *)(this_ptr + uVar7 * 4) << (bVar2 & 0x1f);
      param_2[1] = (uint)*(ushort *)(local_res10 + (lVar6 * 2 | 2U)) |
                   *(int *)(arg1 + uVar7 * 4) << (bVar2 & 0x1f);
    }
  }
  else if (0 < (int)param_3) {
    param_2 = param_2 + 1;
    uVar7 = 0;
    do {
      iVar1 = *(int *)(arg1 + uVar7 * 4);
      iVar4 = (*(int *)(this_ptr + uVar7 * 4) + iVar1) - (iVar1 * local_res8 >> (param_4 & 0x1f));
      param_2[-1] = (uint)*(ushort *)(local_res10 + uVar7 * 4) | iVar4 << (bVar2 & 0x1f);
      *param_2 = (uint)*(ushort *)(local_res10 + 2 + uVar7 * 4) | iVar4 - iVar1 << (bVar2 & 0x1f);
      uVar7 = uVar7 + 1;
      param_2 = param_2 + (param_1 & 0xffffffff);
    } while (param_3 != uVar7);
  }
  return;
}

