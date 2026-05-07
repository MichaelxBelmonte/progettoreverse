// Function: FUN_00fce680
// Address: 00fce680
// Size: 554 bytes
// Class: Unknown

void FUN_00fce680(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *arg1;
  int *this_ptr;
  uint64_t uVar13;
  
  *this_ptr = *arg1 + arg1[10];
  this_ptr[1] = arg1[1] + arg1[0xb];
  this_ptr[2] = arg1[2] + arg1[0xc];
  this_ptr[3] = arg1[3] + arg1[0xd];
  this_ptr[4] = arg1[4] + arg1[0xe];
  this_ptr[5] = arg1[5] + arg1[0xf];
  this_ptr[6] = arg1[6] + arg1[0x10];
  this_ptr[7] = arg1[7] + arg1[0x11];
  this_ptr[8] = arg1[8] + arg1[0x12];
  this_ptr[9] = arg1[9] + arg1[0x13];
  this_ptr[10] = arg1[10] - *arg1;
  this_ptr[0xb] = arg1[0xb] - arg1[1];
  this_ptr[0xc] = arg1[0xc] - arg1[2];
  this_ptr[0xd] = arg1[0xd] - arg1[3];
  this_ptr[0xe] = arg1[0xe] - arg1[4];
  this_ptr[0xf] = arg1[0xf] - arg1[5];
  this_ptr[0x10] = arg1[0x10] - arg1[6];
  this_ptr[0x11] = arg1[0x11] - arg1[7];
  this_ptr[0x12] = arg1[0x12] - arg1[8];
  this_ptr[0x13] = arg1[0x13] - arg1[9];
  uVar13 = FUN_00fcc780();
  uVar13 = FUN_00fcc780(uVar13,param_2 + 0x28);
  uVar13 = FUN_00fcc780(uVar13,arg1 + 0x1e);
  FUN_00fcc780(uVar13,param_2 + 0x50);
  iVar1 = (int)*(void*)this_ptr * 2;
  iVar2 = (int)((uint64_t)*(void*)this_ptr >> 0x20) * 2;
  iVar3 = this_ptr[2];
  iVar4 = this_ptr[3];
  iVar5 = this_ptr[4];
  iVar6 = this_ptr[5];
  iVar7 = this_ptr[6];
  iVar8 = this_ptr[7];
  iVar9 = this_ptr[8];
  iVar10 = this_ptr[9];
  *this_ptr = this_ptr[0x14] - this_ptr[10];
  this_ptr[1] = this_ptr[0x15] - this_ptr[0xb];
  this_ptr[2] = this_ptr[0x16] - this_ptr[0xc];
  this_ptr[3] = this_ptr[0x17] - this_ptr[0xd];
  this_ptr[4] = this_ptr[0x18] - this_ptr[0xe];
  this_ptr[5] = this_ptr[0x19] - this_ptr[0xf];
  this_ptr[6] = this_ptr[0x1a] - this_ptr[0x10];
  this_ptr[7] = this_ptr[0x1b] - this_ptr[0x11];
  iVar11 = (int)*(void*)(this_ptr + 0x12);
  this_ptr[8] = this_ptr[0x1c] - iVar11;
  iVar12 = (int)((uint64_t)*(void*)(this_ptr + 0x12) >> 0x20);
  this_ptr[9] = this_ptr[0x1d] - iVar12;
  this_ptr[10] = this_ptr[10] + this_ptr[0x14];
  this_ptr[0xb] = this_ptr[0xb] + this_ptr[0x15];
  this_ptr[0xc] = this_ptr[0xc] + this_ptr[0x16];
  this_ptr[0xd] = this_ptr[0xd] + this_ptr[0x17];
  this_ptr[0xe] = this_ptr[0xe] + this_ptr[0x18];
  this_ptr[0xf] = this_ptr[0xf] + this_ptr[0x19];
  this_ptr[0x10] = this_ptr[0x10] + this_ptr[0x1a];
  this_ptr[0x11] = this_ptr[0x11] + this_ptr[0x1b];
  this_ptr[0x12] = iVar11 + this_ptr[0x1c];
  this_ptr[0x13] = iVar12 + this_ptr[0x1d];
  this_ptr[0x14] = iVar1 + this_ptr[0x1e];
  this_ptr[0x15] = iVar2 + this_ptr[0x1f];
  this_ptr[0x16] = this_ptr[0x20] + iVar3 * 2;
  this_ptr[0x17] = this_ptr[0x21] + iVar4 * 2;
  this_ptr[0x18] = this_ptr[0x22] + iVar5 * 2;
  this_ptr[0x19] = this_ptr[0x23] + iVar6 * 2;
  this_ptr[0x1a] = this_ptr[0x24] + iVar7 * 2;
  this_ptr[0x1b] = this_ptr[0x25] + iVar8 * 2;
  this_ptr[0x1c] = this_ptr[0x26] + iVar9 * 2;
  this_ptr[0x1d] = this_ptr[0x27] + iVar10 * 2;
  this_ptr[0x1e] = iVar1 - this_ptr[0x1e];
  this_ptr[0x1f] = iVar2 - this_ptr[0x1f];
  this_ptr[0x20] = iVar3 * 2 - this_ptr[0x20];
  this_ptr[0x21] = iVar4 * 2 - this_ptr[0x21];
  this_ptr[0x22] = iVar5 * 2 - this_ptr[0x22];
  this_ptr[0x23] = iVar6 * 2 - this_ptr[0x23];
  this_ptr[0x24] = iVar7 * 2 - this_ptr[0x24];
  this_ptr[0x25] = iVar8 * 2 - this_ptr[0x25];
  this_ptr[0x26] = iVar9 * 2 - this_ptr[0x26];
  this_ptr[0x27] = iVar10 * 2 - this_ptr[0x27];
  return;
}

