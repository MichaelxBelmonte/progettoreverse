// Function: FUN_00fce180
// Address: 00fce180
// Size: 1280 bytes
// Class: Unknown


void FUN_00fce180(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int *unaff_RSI;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int *unaff_RDI;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  
  lVar5 = (longlong)*unaff_RSI;
  lVar22 = (longlong)unaff_RSI[1];
  lVar14 = (longlong)unaff_RSI[2];
  lVar29 = (longlong)unaff_RSI[3];
  lVar26 = (longlong)unaff_RSI[9];
  lVar4 = lVar5 * 2;
  lVar9 = lVar22 * 2;
  lVar10 = lVar29 * 2;
  lVar11 = lVar26 * 0x26;
  lVar1 = lVar14 * 2;
  lVar23 = (longlong)unaff_RSI[4];
  lVar34 = (longlong)unaff_RSI[5];
  lVar17 = lVar34 * 2;
  lVar30 = (longlong)unaff_RSI[6];
  lVar27 = (longlong)unaff_RSI[7];
  lVar21 = lVar27 * 2;
  lVar24 = (longlong)unaff_RSI[8];
  lVar2 = lVar23 * 2;
  lVar35 = lVar27 * 0x26;
  lVar12 = lVar30 * 0x13;
  lVar13 = lVar24 * 0x13;
  lVar6 = lVar34 * lVar34 * 0x26 + lVar5 * lVar5 + lVar12 * lVar2 + lVar35 * lVar10 + lVar1 * lVar13
  ;
  lVar5 = lVar35 * lVar27 + lVar14 * lVar14 + lVar10 * lVar9 + lVar23 * lVar4 + lVar30 * lVar13 * 2;
  uVar7 = lVar6 + lVar9 * lVar11 + 0x2000000;
  lVar3 = lVar12 * lVar17 + lVar4 * lVar22 + lVar35 * lVar23 + lVar13 * lVar10 + lVar11 * lVar14;
  lVar36 = (lVar6 + lVar9 * lVar11) - (uVar7 & 0xfffffffffc000000);
  uVar18 = lVar5 + lVar17 * lVar11 + 0x2000000;
  lVar37 = lVar13 * lVar21 + lVar1 * lVar29 + lVar23 * lVar9 + lVar34 * lVar4 + lVar11 * lVar30;
  lVar8 = (lVar5 + lVar17 * lVar11) - (uVar18 & 0xfffffffffc000000);
  lVar15 = (longlong)uVar7 >> 0x1a;
  lVar6 = lVar3 + lVar15 + 0x1000000;
  lVar12 = lVar12 * lVar30 + lVar22 * lVar9 + lVar14 * lVar4 + lVar35 * lVar17 + lVar2 * lVar13 +
           lVar10 * lVar11;
  lVar31 = (longlong)uVar18 >> 0x1a;
  lVar16 = lVar37 + lVar31 + 0x1000000;
  lVar28 = lVar13 * lVar24 + lVar29 * lVar10 + lVar23 * lVar1 + lVar17 * lVar9 + lVar30 * lVar4 +
           lVar21 * lVar11;
  lVar19 = lVar6 >> 0x19;
  lVar22 = lVar12 + lVar19 + 0x2000000;
  lVar25 = lVar35 * lVar30 + lVar9 * lVar14 + lVar29 * lVar4 + lVar13 * lVar17 + lVar23 * lVar11;
  lVar32 = lVar16 >> 0x19;
  lVar13 = lVar28 + lVar32 + 0x2000000;
  lVar29 = lVar24 * lVar11 + lVar10 * lVar23 + lVar34 * lVar1 + lVar30 * lVar9 + lVar27 * lVar4;
  lVar35 = lVar22 >> 0x1a;
  lVar14 = lVar35 + lVar25 + 0x1000000;
  lVar33 = lVar13 >> 0x1a;
  lVar20 = lVar29 + lVar33 + 0x1000000;
  lVar17 = lVar11 * lVar26 +
           lVar23 * lVar23 + lVar30 * lVar1 + lVar17 * lVar10 + lVar21 * lVar9 + lVar24 * lVar4;
  lVar11 = lVar14 >> 0x19;
  uVar7 = lVar8 + lVar11 + 0x2000000;
  lVar23 = lVar20 >> 0x19;
  lVar21 = lVar23 + lVar17 + 0x2000000;
  lVar9 = lVar34 * lVar2 + lVar30 * lVar10 + lVar27 * lVar1 + lVar24 * lVar9 + lVar4 * lVar26;
  lVar4 = lVar21 >> 0x1a;
  lVar10 = lVar9 + lVar4 + 0x1000000;
  lVar5 = (lVar10 >> 0x19) * 0x13;
  uVar18 = lVar36 + lVar5 + 0x2000000;
  *unaff_RDI = ((int)lVar5 + (int)lVar36) - ((uint)uVar18 & 0xfc000000);
  unaff_RDI[1] = (int)(uVar18 >> 0x1a) + (((int)lVar3 + (int)lVar15) - ((uint)lVar6 & 0xfe000000));
  unaff_RDI[2] = ((int)lVar12 + (int)lVar19) - ((uint)lVar22 & 0xfc000000);
  unaff_RDI[3] = ((int)lVar25 + (int)lVar35) - ((uint)lVar14 & 0xfe000000);
  unaff_RDI[4] = ((int)lVar11 + (int)lVar8) - ((uint)uVar7 & 0xfc000000);
  unaff_RDI[5] = (int)(uVar7 >> 0x1a) + (((int)lVar37 + (int)lVar31) - ((uint)lVar16 & 0xfe000000));
  unaff_RDI[6] = ((int)lVar28 + (int)lVar32) - ((uint)lVar13 & 0xfc000000);
  unaff_RDI[7] = ((int)lVar29 + (int)lVar33) - ((uint)lVar20 & 0xfe000000);
  unaff_RDI[8] = ((int)lVar17 + (int)lVar23) - ((uint)lVar21 & 0xfc000000);
  unaff_RDI[9] = ((int)lVar9 + (int)lVar4) - ((uint)lVar10 & 0xfe000000);
  return;
}


