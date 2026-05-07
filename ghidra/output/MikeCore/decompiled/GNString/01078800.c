// Function: FUN_01078800
// Address: 01078800
// Size: 718 bytes
// Class: GNString


void FUN_01078800(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong unaff_RSI;
  longlong lVar9;
  longlong unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *unaff_R15;
  
  uVar1 = *(ulonglong *)(unaff_RDI + 0x3c);
  uVar8 = *(ulonglong *)(unaff_RDI + 0x44);
  uVar5 = *(ulonglong *)(unaff_RDI + 0x4c);
  uVar11 = *(ulonglong *)(unaff_RDI + 0x54);
  uVar13 = *(ulonglong *)(unaff_RDI + 0x5c);
  do {
    lVar9 = unaff_RSI;
    uVar3 = uVar5 ^ *(ulonglong *)(unaff_RDI + -0x54) ^ *(ulonglong *)(unaff_RDI + -0x2c) ^
            *(ulonglong *)(unaff_RDI + -4) ^ *(ulonglong *)(unaff_RDI + 0x24);
    uVar1 = uVar1 ^ *(ulonglong *)(unaff_RDI + -100) ^ *(ulonglong *)(unaff_RDI + -0x3c) ^
            *(ulonglong *)(unaff_RDI + -0x14) ^ *(ulonglong *)(unaff_RDI + 0x14);
    uVar4 = (uVar3 << 1 | (ulonglong)((longlong)uVar3 < 0)) ^ uVar1;
    uVar5 = uVar11 ^ *(ulonglong *)(unaff_RDI + -0x4c) ^ *(ulonglong *)(unaff_RDI + -0x24) ^
            *(ulonglong *)(unaff_RDI + 4) ^ *(ulonglong *)(unaff_RDI + 0x2c);
    uVar2 = (uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0)) ^ uVar5;
    uVar1 = uVar8 ^ *(ulonglong *)(unaff_RDI + -0x5c) ^ *(ulonglong *)(unaff_RDI + -0x34) ^
            *(ulonglong *)(unaff_RDI + -0xc) ^ *(ulonglong *)(unaff_RDI + 0x1c);
    uVar6 = (uVar5 << 1 | (ulonglong)((longlong)uVar5 < 0)) ^ uVar1;
    uVar8 = uVar13 ^ *(ulonglong *)(unaff_RDI + -0x44) ^ *(ulonglong *)(unaff_RDI + -0x1c) ^
            *(ulonglong *)(unaff_RDI + 0xc) ^ *(ulonglong *)(unaff_RDI + 0x34);
    uVar7 = (uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0)) ^ uVar8;
    uVar3 = (uVar8 << 1 | (ulonglong)((longlong)uVar8 < 0)) ^ uVar3;
    uVar1 = *(ulonglong *)(unaff_RDI + -0x34) ^ uVar4;
    uVar8 = *(ulonglong *)(unaff_RDI + -4) ^ uVar6;
    uVar11 = uVar1 << 0x2c | uVar1 >> 0x14;
    uVar1 = *(ulonglong *)(unaff_RDI + 0x2c) ^ uVar3;
    uVar8 = uVar8 << 0x2b | uVar8 >> 0x15;
    uVar10 = *(ulonglong *)(unaff_RDI + -100) ^ uVar7;
    uVar12 = uVar1 << 0x15 | uVar1 >> 0x2b;
    uVar14 = (uVar13 ^ uVar2) << 0xe | (uVar13 ^ uVar2) >> 0x32;
    uVar1 = *unaff_R15;
    unaff_R15 = unaff_R15 + 1;
    *(ulonglong *)(lVar9 + -100) = (uVar11 | uVar8) ^ uVar10 ^ uVar1;
    *(ulonglong *)(lVar9 + -0x54) = uVar14 & uVar12 ^ uVar8;
    uVar1 = *(ulonglong *)(unaff_RDI + 0x4c);
    *(ulonglong *)(lVar9 + -0x5c) = (~uVar8 | uVar12) ^ uVar11;
    uVar8 = *(ulonglong *)(unaff_RDI + -0x1c);
    uVar5 = *(ulonglong *)(unaff_RDI + -0x14);
    *(ulonglong *)(lVar9 + -0x44) = uVar11 & uVar10 ^ uVar14;
    uVar11 = *(ulonglong *)(unaff_RDI + -0x4c);
    uVar13 = *(ulonglong *)(unaff_RDI + 0x1c);
    *(ulonglong *)(lVar9 + -0x4c) = (uVar14 | uVar10) ^ uVar12;
    uVar11 = uVar11 ^ uVar3;
    uVar1 = uVar1 ^ uVar6;
    uVar10 = uVar11 << 0x1c | uVar11 >> 0x24;
    uVar13 = uVar13 ^ uVar4;
    uVar8 = uVar8 ^ uVar2;
    uVar15 = uVar1 << 0x3d | uVar1 >> 3;
    uVar11 = uVar13 << 0x2d | uVar13 >> 0x13;
    uVar5 = uVar5 ^ uVar7;
    uVar12 = uVar8 << 0x14 | uVar8 >> 0x2c;
    uVar14 = uVar5 << 3 | uVar5 >> 0x3d;
    *(ulonglong *)(lVar9 + -0x24) = (uVar10 | uVar15) ^ uVar11;
    uVar1 = *(ulonglong *)(unaff_RDI + -0x5c);
    *(ulonglong *)(lVar9 + -0x1c) = uVar12 & uVar10 ^ uVar15;
    uVar8 = *(ulonglong *)(unaff_RDI + -0x2c);
    *(ulonglong *)(lVar9 + -0x2c) = (~uVar15 | uVar11) ^ uVar14;
    uVar5 = *(ulonglong *)(unaff_RDI + 0x3c);
    *(ulonglong *)(lVar9 + -0x34) = uVar11 & uVar14 ^ uVar12;
    uVar11 = *(ulonglong *)(unaff_RDI + 4);
    uVar13 = *(ulonglong *)(unaff_RDI + 0x34);
    *(ulonglong *)(lVar9 + -0x3c) = (uVar12 | uVar14) ^ uVar10;
    uVar11 = uVar11 ^ uVar3;
    uVar13 = uVar13 ^ uVar2;
    uVar10 = uVar11 << 0x19 | uVar11 >> 0x27;
    uVar8 = uVar8 ^ uVar6;
    uVar12 = uVar13 << 8 | uVar13 >> 0x38;
    uVar5 = uVar5 ^ uVar7;
    uVar11 = uVar8 << 6 | uVar8 >> 0x3a;
    uVar1 = uVar1 ^ uVar4;
    uVar15 = uVar5 << 0x12 | uVar5 >> 0x2e;
    uVar13 = uVar1 << 1 | (ulonglong)((longlong)uVar1 < 0);
    uVar14 = ~uVar12;
    *(ulonglong *)(lVar9 + -0xc) = uVar10 & uVar12 ^ uVar11;
    uVar1 = *(ulonglong *)(unaff_RDI + -0xc);
    *(ulonglong *)(lVar9 + -4) = uVar15 & uVar14 ^ uVar10;
    uVar8 = *(ulonglong *)(unaff_RDI + 0x54);
    *(ulonglong *)(lVar9 + -0x14) = (uVar10 | uVar11) ^ uVar13;
    *(ulonglong *)(lVar9 + 0xc) = uVar11 & uVar13 ^ uVar15;
    uVar5 = *(ulonglong *)(unaff_RDI + -0x3c);
    uVar11 = *(ulonglong *)(unaff_RDI + 0x24);
    *(ulonglong *)(lVar9 + 4) = (uVar15 | uVar13) ^ uVar14;
    uVar1 = uVar1 ^ uVar4;
    uVar11 = uVar11 ^ uVar6;
    uVar13 = uVar1 << 10 | uVar1 >> 0x36;
    uVar5 = uVar5 ^ uVar7;
    uVar11 = uVar11 << 0xf | uVar11 >> 0x31;
    uVar8 = uVar8 ^ uVar3;
    uVar5 = uVar5 << 0x24 | uVar5 >> 0x1c;
    uVar1 = *(ulonglong *)(unaff_RDI + -0x44) ^ uVar2;
    uVar10 = uVar8 << 0x38 | uVar8 >> 8;
    uVar1 = uVar1 << 0x1b | uVar1 >> 0x25;
    uVar8 = ~uVar11;
    *(ulonglong *)(lVar9 + 0x1c) = (uVar13 | uVar11) ^ uVar5;
    *(ulonglong *)(lVar9 + 0x24) = (uVar10 | uVar8) ^ uVar13;
    *(ulonglong *)(lVar9 + 0x14) = uVar13 & uVar5 ^ uVar1;
    *(ulonglong *)(lVar9 + 0x34) = (uVar5 | uVar1) ^ uVar10;
    *(ulonglong *)(lVar9 + 0x2c) = uVar1 & uVar10 ^ uVar8;
    uVar6 = uVar6 ^ *(ulonglong *)(unaff_RDI + -0x54);
    uVar3 = uVar3 ^ *(ulonglong *)(unaff_RDI + -0x24);
    uVar11 = uVar6 << 0x3e | uVar6 >> 2;
    uVar4 = uVar4 ^ *(ulonglong *)(unaff_RDI + 0x44);
    uVar1 = uVar3 << 0x37 | uVar3 >> 9;
    uVar2 = uVar2 ^ *(ulonglong *)(unaff_RDI + 0xc);
    uVar5 = uVar4 << 2 | uVar4 >> 0x3e;
    uVar7 = uVar7 ^ *(ulonglong *)(unaff_RDI + 0x14);
    uVar2 = uVar2 << 0x27 | uVar2 >> 0x19;
    uVar3 = uVar7 << 0x29 | uVar7 >> 0x17;
    uVar8 = ~uVar1;
    uVar13 = uVar11 & uVar1 ^ uVar5;
    *(ulonglong *)(lVar9 + 0x5c) = uVar13;
    uVar1 = uVar2 & uVar8 ^ uVar11;
    *(ulonglong *)(lVar9 + 0x3c) = uVar1;
    uVar11 = (uVar11 | uVar5) ^ uVar3;
    *(ulonglong *)(lVar9 + 0x54) = uVar11;
    uVar5 = uVar5 & uVar3 ^ uVar2;
    *(ulonglong *)(lVar9 + 0x4c) = uVar5;
    uVar8 = (uVar3 | uVar2) ^ uVar8;
    *(ulonglong *)(lVar9 + 0x44) = uVar8;
    unaff_RSI = unaff_RDI;
    unaff_RDI = lVar9;
  } while (((ulonglong)unaff_R15 & 0xff) != 0);
  return;
}


