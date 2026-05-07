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
  int *arg1;
  void*this_ptr;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = arg1[9];
  iVar4 = (((((((((((iVar1 * 0x13 + 0x1000000 >> 0x19) + *arg1 >> 0x1a) + arg1[1] >> 0x19)
                  + arg1[2] >> 0x1a) + arg1[3] >> 0x19) + arg1[4] >> 0x1a) +
               arg1[5] >> 0x19) + arg1[6] >> 0x1a) + arg1[7] >> 0x19) + arg1[8]
           >> 0x1a) + iVar1 >> 0x19) * 0x13 + *arg1;
  uVar2 = (iVar4 >> 0x1a) + arg1[1];
  uVar3 = ((int)uVar2 >> 0x19) + arg1[2];
  uVar10 = ((int)uVar3 >> 0x1a) + arg1[3];
  uVar9 = ((int)uVar10 >> 0x19) + arg1[4];
  iVar5 = ((int)uVar9 >> 0x1a) + arg1[5];
  uVar11 = (iVar5 >> 0x19) + arg1[6];
  uVar8 = ((int)uVar11 >> 0x1a) + arg1[7];
  uVar7 = ((int)uVar8 >> 0x19) + arg1[8];
  uVar6 = ((int)uVar7 >> 0x1a) + iVar1;
  *this_ptr = (char)iVar4;
  this_ptr[1] = (char)((uint)iVar4 >> 8);
  this_ptr[2] = (char)((uint)iVar4 >> 0x10);
  this_ptr[3] = ((byte)((uint)iVar4 >> 0x18) & 3) + (char)(uVar2 & 0x1ffffff) * '\x04';
  this_ptr[4] = (char)(uVar2 >> 6);
  this_ptr[5] = (char)(uVar2 >> 0xe);
  this_ptr[6] = (char)((uVar2 & 0x1ffffff) >> 0x16) + (char)(uVar3 & 0x3ffffff) * '\b';
  this_ptr[7] = (char)(uVar3 >> 5);
  this_ptr[8] = (char)(uVar3 >> 0xd);
  this_ptr[9] = (byte)((uVar10 & 0x1ffffff) << 5) | (byte)((uVar3 & 0x3ffffff) >> 0x15);
  this_ptr[10] = (char)(uVar10 >> 3);
  this_ptr[0xb] = (char)(uVar10 >> 0xb);
  this_ptr[0xc] = (char)uVar9 * '@' | (byte)((uVar10 & 0x1ffffff) >> 0x13);
  this_ptr[0xd] = (char)(uVar9 >> 2);
  this_ptr[0xe] = (char)(uVar9 >> 10);
  this_ptr[0xf] = (char)(uVar9 >> 0x12);
  this_ptr[0x10] = (char)iVar5;
  this_ptr[0x11] = (char)((uint)iVar5 >> 8);
  this_ptr[0x12] = (char)((uint)iVar5 >> 0x10);
  this_ptr[0x13] = ((byte)((uint)iVar5 >> 0x18) & 1) + (char)(uVar11 & 0x3ffffff) * '\x02';
  this_ptr[0x14] = (char)(uVar11 >> 7);
  this_ptr[0x15] = (char)(uVar11 >> 0xf);
  this_ptr[0x16] = (char)((uVar11 & 0x3ffffff) >> 0x17) + (char)(uVar8 & 0x1ffffff) * '\b';
  this_ptr[0x17] = (char)(uVar8 >> 5);
  this_ptr[0x18] = (char)(uVar8 >> 0xd);
  this_ptr[0x19] = (byte)((uVar7 & 0x3ffffff) << 4) | (byte)((uVar8 & 0x1ffffff) >> 0x15);
  this_ptr[0x1a] = (char)(uVar7 >> 4);
  this_ptr[0x1b] = (char)(uVar7 >> 0xc);
  this_ptr[0x1c] = (byte)((uVar6 & 0x1ffffff) << 6) | (byte)((uVar7 & 0x3ffffff) >> 0x14);
  this_ptr[0x1d] = (char)(uVar6 >> 2);
  this_ptr[0x1e] = (char)(uVar6 >> 10);
  this_ptr[0x1f] = (char)((uVar6 & 0x1ffffff) >> 0x12);
  return;
}

