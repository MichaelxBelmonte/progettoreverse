// Function: FUN_00136020
// Address: 00136020
// Size: 906 bytes
// Class: MDExportControllerHelper
// === MDExportControllerHelper properties ===
//   GNAudioSampleFormat _sampleFormat


uint32_t
FUN_00136020(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,uint param_7
            ,uint param_8,uint param_9,uint param_10,uint param_11,uint param_12,uint param_13,
            uint param_14,uint param_15,uint param_16,uint param_17,uint param_18,uint param_19,
            uint param_20)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void*arg1;
  int *this_ptr;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_res8;
  uint local_res10;
  uint local_res18;
  uint local_res20;
  
  if (*(char *)*arg1 == '=') {
    param_2 = param_1;
  }
  *this_ptr = param_2;
  if (*(char *)arg1[1] != '=') {
    param_3 = param_2 + 1;
  }
  this_ptr[1] = param_3;
  if (*(char *)arg1[2] != '=') {
    param_4 = param_3 + 1U;
  }
  this_ptr[2] = param_4;
  uVar11 = param_4 + 1;
  if (*(char *)arg1[3] == '=') {
    uVar11 = local_res8;
  }
  this_ptr[3] = uVar11;
  uVar1 = uVar11 + 1;
  if (*(char *)arg1[4] == '=') {
    uVar1 = local_res10;
  }
  this_ptr[4] = uVar1;
  uVar2 = uVar1 + 1;
  if (*(char *)arg1[5] == '=') {
    uVar2 = local_res18;
  }
  this_ptr[5] = uVar2;
  uVar3 = uVar2 + 1;
  if (*(char *)arg1[6] == '=') {
    uVar3 = local_res20;
  }
  this_ptr[6] = uVar3;
  uVar4 = uVar3 + 1;
  if (*(char *)arg1[7] == '=') {
    uVar4 = param_5;
  }
  this_ptr[7] = uVar4;
  uVar5 = uVar4 + 1;
  if (*(char *)arg1[8] == '=') {
    uVar5 = param_6;
  }
  this_ptr[8] = uVar5;
  uVar6 = uVar5 + 1;
  if (*(char *)arg1[9] == '=') {
    uVar6 = param_7;
  }
  this_ptr[9] = uVar6;
  uVar7 = uVar6 + 1;
  if (*(char *)arg1[10] == '=') {
    uVar7 = param_8;
  }
  this_ptr[10] = uVar7;
  uVar8 = uVar7 + 1;
  if (*(char *)arg1[0xb] == '=') {
    uVar8 = param_9;
  }
  this_ptr[0xb] = uVar8;
  uVar9 = uVar8 + 1;
  if (*(char *)arg1[0xc] == '=') {
    uVar9 = param_10;
  }
  this_ptr[0xc] = uVar9;
  uVar10 = uVar9 + 1;
  if (*(char *)arg1[0xd] == '=') {
    uVar10 = param_11;
  }
  this_ptr[0xd] = uVar10;
  uVar15 = uVar10 + 1;
  if (*(char *)arg1[0xe] == '=') {
    uVar15 = param_12;
  }
  this_ptr[0xe] = uVar15;
  uVar17 = uVar15 + 1;
  if (*(char *)arg1[0xf] == '=') {
    uVar17 = param_13;
  }
  this_ptr[0xf] = uVar17;
  uVar13 = uVar17 + 1;
  if (*(char *)arg1[0x10] == '=') {
    uVar13 = param_14;
  }
  this_ptr[0x10] = uVar13;
  uVar12 = uVar13 + 1;
  if (*(char *)arg1[0x11] == '=') {
    uVar12 = param_15;
  }
  this_ptr[0x11] = uVar12;
  uVar16 = uVar12 + 1;
  if (*(char *)arg1[0x12] == '=') {
    uVar16 = param_16;
  }
  this_ptr[0x12] = uVar16;
  uVar20 = uVar16 + 1;
  if (*(char *)arg1[0x13] == '=') {
    uVar20 = param_17;
  }
  this_ptr[0x13] = uVar20;
  uVar19 = uVar20 + 1;
  if (*(char *)arg1[0x14] == '=') {
    uVar19 = param_18;
  }
  this_ptr[0x14] = uVar19;
  uVar18 = uVar19 + 1;
  if (*(char *)arg1[0x15] == '=') {
    uVar18 = param_19;
  }
  this_ptr[0x15] = uVar18;
  uVar14 = uVar18 + 1;
  if (*(char *)arg1[0x16] == '=') {
    uVar14 = param_20;
  }
  this_ptr[0x16] = uVar14;
  uVar11 = param_4 ^ param_3 + 1U |
           uVar11 ^ param_4 + 1 |
           uVar1 ^ uVar11 + 1 |
           uVar2 ^ uVar1 + 1 |
           uVar3 ^ uVar2 + 1 |
           uVar4 ^ uVar3 + 1 |
           uVar5 ^ uVar4 + 1 |
           uVar6 ^ uVar5 + 1 | uVar7 ^ uVar6 + 1 | uVar8 ^ uVar7 + 1 | uVar9 ^ uVar8 + 1 |
           uVar10 ^ uVar9 + 1 |
           uVar15 ^ uVar10 + 1 |
           uVar17 ^ uVar15 + 1 |
           uVar13 ^ uVar17 + 1 |
           uVar12 ^ uVar13 + 1 |
           uVar16 ^ uVar12 + 1 | uVar20 ^ uVar16 + 1 | uVar19 ^ uVar20 + 1 | uVar18 ^ uVar19 + 1 |
           uVar18 + 1 ^ uVar14;
  return CONCAT31((int3)(uVar11 >> 8),param_3 == param_2 + 1 && uVar11 == 0);
}

