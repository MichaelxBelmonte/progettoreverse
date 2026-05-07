// Function: FUN_00136020
// Address: 00136020
// Size: 906 bytes
// Class: MDExportControllerHelper


undefined4
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
  undefined8 *unaff_RSI;
  int *unaff_RDI;
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
  
  if (*(char *)*unaff_RSI == '=') {
    param_2 = param_1;
  }
  *unaff_RDI = param_2;
  if (*(char *)unaff_RSI[1] != '=') {
    param_3 = param_2 + 1;
  }
  unaff_RDI[1] = param_3;
  if (*(char *)unaff_RSI[2] != '=') {
    param_4 = param_3 + 1U;
  }
  unaff_RDI[2] = param_4;
  uVar11 = param_4 + 1;
  if (*(char *)unaff_RSI[3] == '=') {
    uVar11 = local_res8;
  }
  unaff_RDI[3] = uVar11;
  uVar1 = uVar11 + 1;
  if (*(char *)unaff_RSI[4] == '=') {
    uVar1 = local_res10;
  }
  unaff_RDI[4] = uVar1;
  uVar2 = uVar1 + 1;
  if (*(char *)unaff_RSI[5] == '=') {
    uVar2 = local_res18;
  }
  unaff_RDI[5] = uVar2;
  uVar3 = uVar2 + 1;
  if (*(char *)unaff_RSI[6] == '=') {
    uVar3 = local_res20;
  }
  unaff_RDI[6] = uVar3;
  uVar4 = uVar3 + 1;
  if (*(char *)unaff_RSI[7] == '=') {
    uVar4 = param_5;
  }
  unaff_RDI[7] = uVar4;
  uVar5 = uVar4 + 1;
  if (*(char *)unaff_RSI[8] == '=') {
    uVar5 = param_6;
  }
  unaff_RDI[8] = uVar5;
  uVar6 = uVar5 + 1;
  if (*(char *)unaff_RSI[9] == '=') {
    uVar6 = param_7;
  }
  unaff_RDI[9] = uVar6;
  uVar7 = uVar6 + 1;
  if (*(char *)unaff_RSI[10] == '=') {
    uVar7 = param_8;
  }
  unaff_RDI[10] = uVar7;
  uVar8 = uVar7 + 1;
  if (*(char *)unaff_RSI[0xb] == '=') {
    uVar8 = param_9;
  }
  unaff_RDI[0xb] = uVar8;
  uVar9 = uVar8 + 1;
  if (*(char *)unaff_RSI[0xc] == '=') {
    uVar9 = param_10;
  }
  unaff_RDI[0xc] = uVar9;
  uVar10 = uVar9 + 1;
  if (*(char *)unaff_RSI[0xd] == '=') {
    uVar10 = param_11;
  }
  unaff_RDI[0xd] = uVar10;
  uVar15 = uVar10 + 1;
  if (*(char *)unaff_RSI[0xe] == '=') {
    uVar15 = param_12;
  }
  unaff_RDI[0xe] = uVar15;
  uVar17 = uVar15 + 1;
  if (*(char *)unaff_RSI[0xf] == '=') {
    uVar17 = param_13;
  }
  unaff_RDI[0xf] = uVar17;
  uVar13 = uVar17 + 1;
  if (*(char *)unaff_RSI[0x10] == '=') {
    uVar13 = param_14;
  }
  unaff_RDI[0x10] = uVar13;
  uVar12 = uVar13 + 1;
  if (*(char *)unaff_RSI[0x11] == '=') {
    uVar12 = param_15;
  }
  unaff_RDI[0x11] = uVar12;
  uVar16 = uVar12 + 1;
  if (*(char *)unaff_RSI[0x12] == '=') {
    uVar16 = param_16;
  }
  unaff_RDI[0x12] = uVar16;
  uVar20 = uVar16 + 1;
  if (*(char *)unaff_RSI[0x13] == '=') {
    uVar20 = param_17;
  }
  unaff_RDI[0x13] = uVar20;
  uVar19 = uVar20 + 1;
  if (*(char *)unaff_RSI[0x14] == '=') {
    uVar19 = param_18;
  }
  unaff_RDI[0x14] = uVar19;
  uVar18 = uVar19 + 1;
  if (*(char *)unaff_RSI[0x15] == '=') {
    uVar18 = param_19;
  }
  unaff_RDI[0x15] = uVar18;
  uVar14 = uVar18 + 1;
  if (*(char *)unaff_RSI[0x16] == '=') {
    uVar14 = param_20;
  }
  unaff_RDI[0x16] = uVar14;
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


