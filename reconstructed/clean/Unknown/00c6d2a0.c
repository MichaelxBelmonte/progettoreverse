// Function: FUN_00c6d2a0
// Address: 00c6d2a0
// Size: 693 bytes
// Class: Unknown

void FUN_00c6d2a0(int64_t param_1,int64_t param_2,uint param_3,byte param_4)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  int iVar6;
  int64_t this_ptr;
  byte *pbVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int local_res8;
  int64_t local_res10;
  int local_res18;
  
  bVar3 = (char)local_res18 * '\b';
  uVar1 = ~(ushort)(-1L << (bVar3 & 0x3f));
  if (local_res8 == 0) {
    uVar8 = (uint64_t)(unaff_ESI * 3 - 3);
    if (local_res18 == 0) {
      if (0 < (int)param_3) {
        pbVar7 = (byte *)(this_ptr + 5);
        uVar10 = 0;
        do {
          *(int *)(param_2 + uVar10 * 4) =
               (int)(((uint)pbVar7[-5] | (uint)pbVar7[-4] << 8 | (uint)pbVar7[-3] << 0x10) << 8) >>
               8;
          *(int *)(param_1 + uVar10 * 4) =
               (int)(((uint)pbVar7[-2] | (uint)pbVar7[-1] << 8 | (uint)*pbVar7 << 0x10) << 8) >> 8;
          uVar10 = uVar10 + 1;
          pbVar7 = pbVar7 + uVar8 + 3;
        } while (param_3 != uVar10);
      }
    }
    else if (0 < (int)param_3) {
      pbVar7 = (byte *)(this_ptr + 5);
      uVar10 = 0;
      do {
        uVar4 = (uint)pbVar7[-5] | (uint)pbVar7[-4] << 8 | (uint)pbVar7[-3] << 0x10;
        uVar5 = (uint)pbVar7[-2] | (uint)pbVar7[-1] << 8 | (uint)*pbVar7 << 0x10;
        *(ushort *)(local_res10 + uVar10 * 4) = (ushort)uVar4 & uVar1;
        *(ushort *)(local_res10 + 2 + uVar10 * 4) = (ushort)uVar5 & uVar1;
        *(int *)(param_2 + uVar10 * 4) = ((int)(uVar4 << 8) >> 8) >> (bVar3 & 0x1f);
        *(int *)(param_1 + uVar10 * 4) = ((int)(uVar5 << 8) >> 8) >> (bVar3 & 0x1f);
        uVar10 = uVar10 + 1;
        pbVar7 = pbVar7 + uVar8 + 3;
      } while (param_3 != uVar10);
    }
  }
  else {
    iVar9 = (1 << (param_4 & 0x1f)) - local_res8;
    uVar8 = (uint64_t)(unaff_ESI * 3 - 3);
    if (local_res18 == 0) {
      if (0 < (int)param_3) {
        pbVar7 = (byte *)(this_ptr + 5);
        uVar10 = 0;
        do {
          iVar2 = (int)(((uint)pbVar7[-5] | (uint)pbVar7[-4] << 8 | (uint)pbVar7[-3] << 0x10) << 8)
                  >> 8;
          iVar6 = (int)(((uint)pbVar7[-2] | (uint)pbVar7[-1] << 8 | (uint)*pbVar7 << 0x10) << 8) >>
                  8;
          *(int *)(param_2 + uVar10 * 4) = iVar6 * iVar9 + iVar2 * local_res8 >> (param_4 & 0x1f);
          *(int *)(param_1 + uVar10 * 4) = iVar2 - iVar6;
          uVar10 = uVar10 + 1;
          pbVar7 = pbVar7 + uVar8 + 3;
        } while (param_3 != uVar10);
      }
    }
    else if (0 < (int)param_3) {
      pbVar7 = (byte *)(this_ptr + 5);
      uVar10 = 0;
      do {
        uVar4 = (uint)pbVar7[-5] | (uint)pbVar7[-4] << 8 | (uint)pbVar7[-3] << 0x10;
        uVar5 = (uint)pbVar7[-2] | (uint)pbVar7[-1] << 8 | (uint)*pbVar7 << 0x10;
        *(ushort *)(local_res10 + uVar10 * 4) = (ushort)uVar4 & uVar1;
        iVar2 = ((int)(uVar4 << 8) >> 8) >> (bVar3 & 0x1f);
        *(ushort *)(local_res10 + 2 + uVar10 * 4) = (ushort)uVar5 & uVar1;
        iVar6 = ((int)(uVar5 << 8) >> 8) >> (bVar3 & 0x1f);
        *(int *)(param_2 + uVar10 * 4) = iVar6 * iVar9 + iVar2 * local_res8 >> (param_4 & 0x1f);
        *(int *)(param_1 + uVar10 * 4) = iVar2 - iVar6;
        uVar10 = uVar10 + 1;
        pbVar7 = pbVar7 + uVar8 + 3;
      } while (param_3 != uVar10);
    }
  }
  return;
}

