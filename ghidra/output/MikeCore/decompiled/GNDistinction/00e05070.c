// Function: FUN_00e05070
// Address: 00e05070
// Size: 1314 bytes
// Class: GNDistinction


void FUN_00e05070(void)

{
  longlong lVar1;
  uint uVar2;
  uint *unaff_RSI;
  uint *unaff_RDI;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *unaff_RDI;
  uVar2 = unaff_RDI[1];
  uVar4 = unaff_RDI[2];
  uVar3 = *unaff_RSI +
          (~uVar2 & unaff_RDI[3]) + unaff_RDI[4] + (uVar2 & uVar4) + (uVar9 << 5 | uVar9 >> 0x1b) +
          0x5a827999;
  uVar2 = uVar2 << 0x1e | uVar2 >> 2;
  uVar10 = unaff_RSI[1] +
           (~uVar9 & uVar4) + unaff_RDI[3] + (uVar9 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
           0x5a827999;
  uVar5 = uVar9 << 0x1e | uVar9 >> 2;
  uVar9 = unaff_RSI[2];
  uVar6 = uVar9 + (~uVar3 & uVar2) + uVar4 + (uVar3 & uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar2 = unaff_RSI[3] +
          (~uVar10 & uVar5) + uVar2 + (uVar10 & uVar4) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar8 = unaff_RSI[4] +
          (~uVar6 & uVar4) + uVar5 + (uVar6 & uVar10) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar3 = unaff_RSI[5] +
          (~uVar2 & uVar10) + uVar4 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar10 = unaff_RSI[6] +
           (~uVar8 & uVar5) + uVar10 + (uVar8 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x5a827999
  ;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar4 = unaff_RSI[7] +
          (~uVar3 & uVar2) + uVar5 + (uVar3 & uVar8) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x5a827999
  ;
  uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar5 = unaff_RSI[8] +
          (~uVar10 & uVar8) + uVar2 + (uVar10 & uVar6) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar2 = unaff_RSI[9] +
          (~uVar4 & uVar6) + uVar8 + (uVar4 & uVar10) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999;
  uVar3 = uVar4 * 0x40000000 | uVar4 >> 2;
  uVar6 = unaff_RSI[10] +
          (~uVar5 & uVar10) + uVar6 + (uVar5 & uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = unaff_RSI[0xb] +
          (~uVar2 & uVar3) + uVar10 + (uVar2 & uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999;
  uVar3 = (~uVar6 & uVar5) + uVar3 + (uVar6 & uVar4) + (uVar2 * 0x20 | uVar2 >> 0x1b) +
          unaff_RSI[0xc] + 0x5a827999;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar7 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = (~uVar2 & uVar4) + uVar5 + (uVar2 & uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          unaff_RSI[0xd] + 0x5a827999;
  uVar5 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar8 = unaff_RSI[0xe] +
          (~uVar3 & uVar10) + uVar4 + (uVar3 & uVar7) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar6 = *unaff_RSI ^ uVar9 ^ unaff_RSI[8] ^ unaff_RSI[0xd];
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar3 = unaff_RSI[0xf] +
          (~uVar2 & uVar7) + uVar10 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar10 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar8 = uVar6 + (~uVar8 & uVar5) + uVar7 + (uVar8 & uVar4) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          0x5a827999;
  unaff_RSI[0x10] = uVar6;
  uVar2 = unaff_RSI[9] ^ unaff_RSI[0xe] ^ unaff_RSI[3] ^ unaff_RSI[1];
  uVar7 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  unaff_RSI[0x11] = uVar7;
  uVar9 = unaff_RSI[10] ^ unaff_RSI[0xf] ^ unaff_RSI[4] ^ uVar9;
  uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar5 = uVar7 + (~uVar3 & uVar4) + uVar5 + (uVar3 & uVar10) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
          0x5a827999;
  unaff_RSI[0x12] = uVar9;
  uVar9 = uVar9 + (~uVar8 & uVar10) + uVar4 + (uVar8 & uVar2) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar3 = uVar6 ^ unaff_RSI[0xb] ^ unaff_RSI[5] ^ unaff_RSI[3];
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  unaff_RSI[0x13] = uVar3;
  lVar1 = 0;
  uVar3 = (~uVar5 & uVar2) + uVar10 + (uVar5 & uVar4) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar3 +
          0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  do {
    uVar8 = uVar5;
    uVar10 = uVar3;
    uVar6 = uVar4;
    uVar4 = unaff_RSI[lVar1 + 0xc] ^ unaff_RSI[lVar1 + 0x11] ^ unaff_RSI[lVar1 + 6] ^
            unaff_RSI[lVar1 + 4];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    unaff_RSI[lVar1 + 0x14] = uVar4;
    uVar3 = uVar4 + (uVar8 ^ uVar6 ^ uVar9) + uVar2 + (uVar10 << 5 | uVar10 >> 0x1b) + 0x6ed9eba1;
    uVar5 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar2 = uVar6;
    uVar9 = uVar10;
    uVar4 = uVar8;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar4 = uVar5;
    uVar2 = uVar3;
    uVar9 = uVar8;
    uVar3 = unaff_RSI[lVar1 + 0x20] ^ unaff_RSI[lVar1 + 0x25] ^ unaff_RSI[lVar1 + 0x1a] ^
            unaff_RSI[lVar1 + 0x18];
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    unaff_RSI[lVar1 + 0x28] = uVar3;
    uVar3 = uVar3 + (uVar4 & uVar9 | (uVar4 | uVar9) & uVar10) + uVar6 +
                    (uVar2 << 5 | uVar2 >> 0x1b) + 0x8f1bbcdc;
    uVar5 = uVar10 << 0x1e | uVar10 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar9;
    uVar10 = uVar2;
    uVar8 = uVar4;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar10 = uVar5;
    uVar6 = uVar3;
    uVar8 = uVar4;
    uVar4 = unaff_RSI[lVar1 + 0x34] ^ unaff_RSI[lVar1 + 0x39] ^ unaff_RSI[lVar1 + 0x2e] ^
            unaff_RSI[lVar1 + 0x2c];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    unaff_RSI[lVar1 + 0x3c] = uVar4;
    uVar3 = uVar4 + (uVar10 ^ uVar8 ^ uVar2) + uVar9 + (uVar6 << 5 | uVar6 >> 0x1b) + 0xca62c1d6;
    uVar5 = uVar2 << 0x1e | uVar2 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar8;
    uVar2 = uVar6;
    uVar4 = uVar10;
  } while (lVar1 != 0x14);
  *unaff_RDI = uVar3 + *unaff_RDI;
  unaff_RDI[1] = uVar6 + unaff_RDI[1];
  unaff_RDI[2] = uVar5 + unaff_RDI[2];
  unaff_RDI[3] = uVar10 + unaff_RDI[3];
  unaff_RDI[4] = unaff_RDI[4] + uVar8;
  return;
}


