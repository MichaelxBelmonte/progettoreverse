// Function: FUN_00fccfb0
// Address: 00fccfb0
// Size: 551 bytes
// Class: Unknown


void FUN_00fccfb0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = unaff_RSI[9];
  iVar4 = (((((((((((iVar1 * 0x13 + 0x1000000 >> 0x19) + *unaff_RSI >> 0x1a) + unaff_RSI[1] >> 0x19)
                  + unaff_RSI[2] >> 0x1a) + unaff_RSI[3] >> 0x19) + unaff_RSI[4] >> 0x1a) +
               unaff_RSI[5] >> 0x19) + unaff_RSI[6] >> 0x1a) + unaff_RSI[7] >> 0x19) + unaff_RSI[8]
           >> 0x1a) + iVar1 >> 0x19) * 0x13 + *unaff_RSI;
  uVar2 = (iVar4 >> 0x1a) + unaff_RSI[1];
  uVar3 = ((int)uVar2 >> 0x19) + unaff_RSI[2];
  uVar10 = ((int)uVar3 >> 0x1a) + unaff_RSI[3];
  uVar9 = ((int)uVar10 >> 0x19) + unaff_RSI[4];
  iVar5 = ((int)uVar9 >> 0x1a) + unaff_RSI[5];
  uVar11 = (iVar5 >> 0x19) + unaff_RSI[6];
  uVar8 = ((int)uVar11 >> 0x1a) + unaff_RSI[7];
  uVar7 = ((int)uVar8 >> 0x19) + unaff_RSI[8];
  uVar6 = ((int)uVar7 >> 0x1a) + iVar1;
  *unaff_RDI = (char)iVar4;
  unaff_RDI[1] = (char)((uint)iVar4 >> 8);
  unaff_RDI[2] = (char)((uint)iVar4 >> 0x10);
  unaff_RDI[3] = ((byte)((uint)iVar4 >> 0x18) & 3) + (char)(uVar2 & 0x1ffffff) * '\x04';
  unaff_RDI[4] = (char)(uVar2 >> 6);
  unaff_RDI[5] = (char)(uVar2 >> 0xe);
  unaff_RDI[6] = (char)((uVar2 & 0x1ffffff) >> 0x16) + (char)(uVar3 & 0x3ffffff) * '\b';
  unaff_RDI[7] = (char)(uVar3 >> 5);
  unaff_RDI[8] = (char)(uVar3 >> 0xd);
  unaff_RDI[9] = (byte)((uVar10 & 0x1ffffff) << 5) | (byte)((uVar3 & 0x3ffffff) >> 0x15);
  unaff_RDI[10] = (char)(uVar10 >> 3);
  unaff_RDI[0xb] = (char)(uVar10 >> 0xb);
  unaff_RDI[0xc] = (char)uVar9 * '@' | (byte)((uVar10 & 0x1ffffff) >> 0x13);
  unaff_RDI[0xd] = (char)(uVar9 >> 2);
  unaff_RDI[0xe] = (char)(uVar9 >> 10);
  unaff_RDI[0xf] = (char)(uVar9 >> 0x12);
  unaff_RDI[0x10] = (char)iVar5;
  unaff_RDI[0x11] = (char)((uint)iVar5 >> 8);
  unaff_RDI[0x12] = (char)((uint)iVar5 >> 0x10);
  unaff_RDI[0x13] = ((byte)((uint)iVar5 >> 0x18) & 1) + (char)(uVar11 & 0x3ffffff) * '\x02';
  unaff_RDI[0x14] = (char)(uVar11 >> 7);
  unaff_RDI[0x15] = (char)(uVar11 >> 0xf);
  unaff_RDI[0x16] = (char)((uVar11 & 0x3ffffff) >> 0x17) + (char)(uVar8 & 0x1ffffff) * '\b';
  unaff_RDI[0x17] = (char)(uVar8 >> 5);
  unaff_RDI[0x18] = (char)(uVar8 >> 0xd);
  unaff_RDI[0x19] = (byte)((uVar7 & 0x3ffffff) << 4) | (byte)((uVar8 & 0x1ffffff) >> 0x15);
  unaff_RDI[0x1a] = (char)(uVar7 >> 4);
  unaff_RDI[0x1b] = (char)(uVar7 >> 0xc);
  unaff_RDI[0x1c] = (byte)((uVar6 & 0x1ffffff) << 6) | (byte)((uVar7 & 0x3ffffff) >> 0x14);
  unaff_RDI[0x1d] = (char)(uVar6 >> 2);
  unaff_RDI[0x1e] = (char)(uVar6 >> 10);
  unaff_RDI[0x1f] = (char)((uVar6 & 0x1ffffff) >> 0x12);
  return;
}


