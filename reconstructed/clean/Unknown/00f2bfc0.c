// Function: FUN_00f2bfc0
// Address: 00f2bfc0
// Size: 750 bytes
// Class: Unknown

void FUN_00f2bfc0(void*param_1,uint64_t param_2,uint64_t *param_3,uint64_t param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint64_t uVar5;
  void*unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t uVar6;
  void*arg1;
  void*this_ptr;
  uint64_t in_R10;
  uint64_t in_R11;
  uint64_t unaff_R12;
  uint64_t uVar7;
  uint64_t unaff_R13;
  uint64_t uVar8;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t *unaff_retaddr;
  uint64_t *local_res8;
  uint64_t *local_res10;
  void*local_res18;
  
  do {
    uVar6 = unaff_RBP << (unaff_R15 & 0x3f);
    *arg1 = (char)(unaff_R15 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << (param_4 & 0x3f);
    *unaff_RBX = (char)(param_4 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = unaff_R12 << (in_R10 & 0x3f);
    *param_1 = (char)(in_R10 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = unaff_R13 << (in_R11 & 0x3f);
    *this_ptr = (char)(in_R11 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((uint64_t)uVar1 & 0x3f);
    arg1[1] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((uint64_t)uVar2 & 0x3f);
    unaff_RBX[1] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((uint64_t)uVar3 & 0x3f);
    param_1[1] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((uint64_t)uVar4 & 0x3f);
    this_ptr[1] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((uint64_t)uVar1 & 0x3f);
    arg1[2] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((uint64_t)uVar2 & 0x3f);
    unaff_RBX[2] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((uint64_t)uVar3 & 0x3f);
    param_1[2] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((uint64_t)uVar4 & 0x3f);
    this_ptr[2] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((uint64_t)uVar1 & 0x3f);
    arg1[3] = (char)(uVar1 >> 8);
    uVar1 = *(ushort *)(unaff_R14 + (uVar6 >> 0x35) * 2);
    param_2 = param_2 << ((uint64_t)uVar2 & 0x3f);
    unaff_RBX[3] = (char)(uVar2 >> 8);
    uVar2 = *(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar7 = uVar7 << ((uint64_t)uVar3 & 0x3f);
    param_1[3] = (char)(uVar3 >> 8);
    uVar3 = *(ushort *)(unaff_R14 + (uVar7 >> 0x35) * 2);
    uVar8 = uVar8 << ((uint64_t)uVar4 & 0x3f);
    this_ptr[3] = (char)(uVar4 >> 8);
    uVar4 = *(ushort *)(unaff_R14 + (uVar8 >> 0x35) * 2);
    uVar6 = uVar6 << ((uint64_t)uVar1 & 0x3f);
    arg1[4] = (char)(uVar1 >> 8);
    param_2 = param_2 << ((uint64_t)uVar2 & 0x3f);
    unaff_RBX[4] = (char)(uVar2 >> 8);
    uVar7 = uVar7 << ((uint64_t)uVar3 & 0x3f);
    param_1[4] = (char)(uVar3 >> 8);
    uVar8 = uVar8 << ((uint64_t)uVar4 & 0x3f);
    this_ptr[4] = (char)(uVar4 >> 8);
    uVar5 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    arg1 = arg1 + 5;
    param_3 = (uint64_t *)((int64_t)param_3 - (uVar5 >> 3));
    unaff_RBP = (*param_3 | 1) << (uVar5 & 7);
    unaff_R15 = (uint64_t)*(ushort *)(unaff_R14 + (unaff_RBP >> 0x35) * 2);
    uVar5 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    unaff_RBX = unaff_RBX + 5;
    unaff_retaddr = (uint64_t *)((int64_t)unaff_retaddr - (uVar5 >> 3));
    param_2 = (*unaff_retaddr | 1) << (uVar5 & 7);
    param_4 = (uint64_t)*(ushort *)(unaff_R14 + (param_2 >> 0x35) * 2);
    uVar5 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    param_1 = param_1 + 5;
    local_res8 = (uint64_t *)((int64_t)local_res8 - (uVar5 >> 3));
    unaff_R12 = (*local_res8 | 1) << (uVar5 & 7);
    in_R10 = (uint64_t)*(ushort *)(unaff_R14 + (unaff_R12 >> 0x35) * 2);
    uVar5 = 0;
    if (uVar8 != 0) {
      for (; (uVar8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    this_ptr = this_ptr + 5;
    local_res10 = (uint64_t *)((int64_t)local_res10 - (uVar5 >> 3));
    unaff_R13 = (*local_res10 | 1) << (uVar5 & 7);
    in_R11 = (uint64_t)*(ushort *)(unaff_R14 + (unaff_R13 >> 0x35) * 2);
  } while (this_ptr < local_res18);
  FUN_00f2beda();
  return;
}

