// Function: FUN_00fce680
// Address: 00fce680
// Size: 554 bytes
// Class: Unknown


void FUN_00fce680(undefined8 param_1,longlong param_2)

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
  int *unaff_RSI;
  int *unaff_RDI;
  undefined8 uVar13;
  
  *unaff_RDI = *unaff_RSI + unaff_RSI[10];
  unaff_RDI[1] = unaff_RSI[1] + unaff_RSI[0xb];
  unaff_RDI[2] = unaff_RSI[2] + unaff_RSI[0xc];
  unaff_RDI[3] = unaff_RSI[3] + unaff_RSI[0xd];
  unaff_RDI[4] = unaff_RSI[4] + unaff_RSI[0xe];
  unaff_RDI[5] = unaff_RSI[5] + unaff_RSI[0xf];
  unaff_RDI[6] = unaff_RSI[6] + unaff_RSI[0x10];
  unaff_RDI[7] = unaff_RSI[7] + unaff_RSI[0x11];
  unaff_RDI[8] = unaff_RSI[8] + unaff_RSI[0x12];
  unaff_RDI[9] = unaff_RSI[9] + unaff_RSI[0x13];
  unaff_RDI[10] = unaff_RSI[10] - *unaff_RSI;
  unaff_RDI[0xb] = unaff_RSI[0xb] - unaff_RSI[1];
  unaff_RDI[0xc] = unaff_RSI[0xc] - unaff_RSI[2];
  unaff_RDI[0xd] = unaff_RSI[0xd] - unaff_RSI[3];
  unaff_RDI[0xe] = unaff_RSI[0xe] - unaff_RSI[4];
  unaff_RDI[0xf] = unaff_RSI[0xf] - unaff_RSI[5];
  unaff_RDI[0x10] = unaff_RSI[0x10] - unaff_RSI[6];
  unaff_RDI[0x11] = unaff_RSI[0x11] - unaff_RSI[7];
  unaff_RDI[0x12] = unaff_RSI[0x12] - unaff_RSI[8];
  unaff_RDI[0x13] = unaff_RSI[0x13] - unaff_RSI[9];
  uVar13 = FUN_00fcc780();
  uVar13 = FUN_00fcc780(uVar13,param_2 + 0x28);
  uVar13 = FUN_00fcc780(uVar13,unaff_RSI + 0x1e);
  FUN_00fcc780(uVar13,param_2 + 0x50);
  iVar1 = (int)*(undefined8 *)unaff_RDI * 2;
  iVar2 = (int)((ulonglong)*(undefined8 *)unaff_RDI >> 0x20) * 2;
  iVar3 = unaff_RDI[2];
  iVar4 = unaff_RDI[3];
  iVar5 = unaff_RDI[4];
  iVar6 = unaff_RDI[5];
  iVar7 = unaff_RDI[6];
  iVar8 = unaff_RDI[7];
  iVar9 = unaff_RDI[8];
  iVar10 = unaff_RDI[9];
  *unaff_RDI = unaff_RDI[0x14] - unaff_RDI[10];
  unaff_RDI[1] = unaff_RDI[0x15] - unaff_RDI[0xb];
  unaff_RDI[2] = unaff_RDI[0x16] - unaff_RDI[0xc];
  unaff_RDI[3] = unaff_RDI[0x17] - unaff_RDI[0xd];
  unaff_RDI[4] = unaff_RDI[0x18] - unaff_RDI[0xe];
  unaff_RDI[5] = unaff_RDI[0x19] - unaff_RDI[0xf];
  unaff_RDI[6] = unaff_RDI[0x1a] - unaff_RDI[0x10];
  unaff_RDI[7] = unaff_RDI[0x1b] - unaff_RDI[0x11];
  iVar11 = (int)*(undefined8 *)(unaff_RDI + 0x12);
  unaff_RDI[8] = unaff_RDI[0x1c] - iVar11;
  iVar12 = (int)((ulonglong)*(undefined8 *)(unaff_RDI + 0x12) >> 0x20);
  unaff_RDI[9] = unaff_RDI[0x1d] - iVar12;
  unaff_RDI[10] = unaff_RDI[10] + unaff_RDI[0x14];
  unaff_RDI[0xb] = unaff_RDI[0xb] + unaff_RDI[0x15];
  unaff_RDI[0xc] = unaff_RDI[0xc] + unaff_RDI[0x16];
  unaff_RDI[0xd] = unaff_RDI[0xd] + unaff_RDI[0x17];
  unaff_RDI[0xe] = unaff_RDI[0xe] + unaff_RDI[0x18];
  unaff_RDI[0xf] = unaff_RDI[0xf] + unaff_RDI[0x19];
  unaff_RDI[0x10] = unaff_RDI[0x10] + unaff_RDI[0x1a];
  unaff_RDI[0x11] = unaff_RDI[0x11] + unaff_RDI[0x1b];
  unaff_RDI[0x12] = iVar11 + unaff_RDI[0x1c];
  unaff_RDI[0x13] = iVar12 + unaff_RDI[0x1d];
  unaff_RDI[0x14] = iVar1 + unaff_RDI[0x1e];
  unaff_RDI[0x15] = iVar2 + unaff_RDI[0x1f];
  unaff_RDI[0x16] = unaff_RDI[0x20] + iVar3 * 2;
  unaff_RDI[0x17] = unaff_RDI[0x21] + iVar4 * 2;
  unaff_RDI[0x18] = unaff_RDI[0x22] + iVar5 * 2;
  unaff_RDI[0x19] = unaff_RDI[0x23] + iVar6 * 2;
  unaff_RDI[0x1a] = unaff_RDI[0x24] + iVar7 * 2;
  unaff_RDI[0x1b] = unaff_RDI[0x25] + iVar8 * 2;
  unaff_RDI[0x1c] = unaff_RDI[0x26] + iVar9 * 2;
  unaff_RDI[0x1d] = unaff_RDI[0x27] + iVar10 * 2;
  unaff_RDI[0x1e] = iVar1 - unaff_RDI[0x1e];
  unaff_RDI[0x1f] = iVar2 - unaff_RDI[0x1f];
  unaff_RDI[0x20] = iVar3 * 2 - unaff_RDI[0x20];
  unaff_RDI[0x21] = iVar4 * 2 - unaff_RDI[0x21];
  unaff_RDI[0x22] = iVar5 * 2 - unaff_RDI[0x22];
  unaff_RDI[0x23] = iVar6 * 2 - unaff_RDI[0x23];
  unaff_RDI[0x24] = iVar7 * 2 - unaff_RDI[0x24];
  unaff_RDI[0x25] = iVar8 * 2 - unaff_RDI[0x25];
  unaff_RDI[0x26] = iVar9 * 2 - unaff_RDI[0x26];
  unaff_RDI[0x27] = iVar10 * 2 - unaff_RDI[0x27];
  return;
}


