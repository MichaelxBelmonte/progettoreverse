// Function: FUN_00fcc780
// Address: 00fcc780
// Size: 2093 bytes
// Class: Unknown


void FUN_00fcc780(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
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
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int *unaff_RSI;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  int *unaff_RDI;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  
  lVar48 = (longlong)*param_2;
  lVar43 = (longlong)param_2[1];
  lVar39 = (longlong)param_2[2];
  lVar34 = (longlong)param_2[3];
  lVar23 = (longlong)param_2[4];
  lVar36 = (longlong)param_2[5];
  lVar41 = (longlong)param_2[6];
  lVar45 = (longlong)param_2[7];
  lVar2 = (longlong)param_2[8];
  lVar33 = (longlong)param_2[9] * 0x13;
  lVar6 = (longlong)*unaff_RSI;
  lVar3 = (longlong)unaff_RSI[1];
  lVar1 = lVar2 * 0x13;
  lVar13 = lVar3 * 2;
  lVar20 = (longlong)unaff_RSI[2];
  lVar46 = (longlong)unaff_RSI[3];
  lVar18 = lVar46 * 2;
  lVar7 = (longlong)unaff_RSI[4];
  lVar24 = (longlong)unaff_RSI[5];
  lVar19 = lVar24 * 2;
  lVar37 = (longlong)unaff_RSI[6];
  lVar42 = (longlong)unaff_RSI[7];
  lVar28 = lVar42 * 2;
  lVar25 = (longlong)unaff_RSI[8];
  lVar21 = (longlong)unaff_RSI[9];
  lVar8 = lVar34 * 0x13;
  lVar10 = lVar23 * 0x13;
  lVar11 = lVar36 * 0x13;
  lVar12 = lVar41 * 0x13;
  lVar17 = lVar45 * 0x13;
  lVar29 = lVar21 * 2;
  lVar14 = lVar43 * lVar29 * 0x13 + lVar48 * lVar6 + lVar39 * 0x13 * lVar25 + lVar8 * lVar28 +
           lVar10 * lVar37 + lVar11 * lVar19 + lVar12 * lVar7 + lVar17 * lVar18 + lVar1 * lVar20;
  lVar35 = lVar11 * lVar29 +
           lVar48 * lVar7 + lVar43 * lVar18 + lVar39 * lVar20 + lVar34 * lVar13 + lVar23 * lVar6 +
           lVar12 * lVar25 + lVar17 * lVar28 + lVar1 * lVar37;
  uVar4 = lVar13 * lVar33 + lVar14 + 0x2000000;
  lVar30 = lVar39 * 0x13 * lVar21 + lVar48 * lVar3 + lVar43 * lVar6 + lVar8 * lVar25 +
           lVar10 * lVar42 + lVar11 * lVar37 + lVar12 * lVar24 + lVar17 * lVar7 + lVar46 * lVar1 +
           lVar20 * lVar33;
  lVar26 = (lVar14 + lVar13 * lVar33) - (uVar4 & 0xfffffffffc000000);
  uVar5 = lVar19 * lVar33 + lVar35 + 0x2000000;
  lVar49 = lVar12 * lVar21 +
           lVar48 * lVar24 + lVar43 * lVar7 + lVar39 * lVar46 + lVar34 * lVar20 + lVar23 * lVar3 +
           lVar36 * lVar6 + lVar17 * lVar25 + lVar42 * lVar1 + lVar37 * lVar33;
  lVar22 = (lVar35 + lVar19 * lVar33) - (uVar5 & 0xfffffffffc000000);
  lVar35 = (longlong)uVar4 >> 0x1a;
  lVar14 = lVar35 + lVar30 + 0x1000000;
  lVar44 = lVar8 * lVar29 + lVar48 * lVar20 + lVar43 * lVar13 + lVar39 * lVar6 + lVar10 * lVar25 +
           lVar11 * lVar28 + lVar12 * lVar37 + lVar17 * lVar19 + lVar1 * lVar7 + lVar18 * lVar33;
  lVar15 = (longlong)uVar5 >> 0x1a;
  lVar16 = lVar15 + lVar49 + 0x1000000;
  lVar47 = lVar17 * lVar29 +
           lVar48 * lVar37 + lVar43 * lVar19 + lVar39 * lVar7 + lVar34 * lVar18 + lVar23 * lVar20 +
           lVar36 * lVar13 + lVar41 * lVar6 + lVar1 * lVar25 + lVar28 * lVar33;
  lVar8 = lVar14 >> 0x19;
  lVar9 = lVar8 + lVar44 + 0x2000000;
  lVar40 = lVar10 * lVar21 + lVar48 * lVar46 + lVar43 * lVar20 + lVar39 * lVar3 + lVar34 * lVar6 +
           lVar11 * lVar25 + lVar12 * lVar42 + lVar17 * lVar37 + lVar24 * lVar1 + lVar7 * lVar33;
  lVar31 = lVar16 >> 0x19;
  lVar10 = lVar31 + lVar47 + 0x2000000;
  lVar32 = lVar1 * lVar21 +
           lVar48 * lVar42 + lVar43 * lVar37 + lVar39 * lVar24 + lVar34 * lVar7 + lVar23 * lVar46 +
           lVar36 * lVar20 + lVar41 * lVar3 + lVar45 * lVar6 + lVar25 * lVar33;
  lVar17 = lVar9 >> 0x1a;
  lVar11 = lVar17 + lVar40 + 0x1000000;
  lVar27 = lVar10 >> 0x1a;
  lVar12 = lVar27 + lVar32 + 0x1000000;
  lVar38 = lVar33 * lVar29 +
           lVar48 * lVar25 + lVar43 * lVar28 + lVar39 * lVar37 + lVar34 * lVar19 + lVar23 * lVar7 +
           lVar36 * lVar18 + lVar41 * lVar20 + lVar45 * lVar13 + lVar2 * lVar6;
  lVar18 = lVar11 >> 0x19;
  uVar5 = lVar18 + lVar22 + 0x2000000;
  lVar28 = lVar12 >> 0x19;
  lVar19 = lVar28 + lVar38 + 0x2000000;
  lVar13 = lVar48 * lVar21 + lVar43 * lVar25 + lVar39 * lVar42 + lVar34 * lVar37 + lVar23 * lVar24 +
           lVar36 * lVar7 + lVar41 * lVar46 + lVar45 * lVar20 + lVar2 * lVar3 + param_2[9] * lVar6;
  lVar29 = lVar19 >> 0x1a;
  lVar33 = lVar29 + lVar13 + 0x1000000;
  lVar1 = (lVar33 >> 0x19) * 0x13;
  uVar4 = lVar1 + lVar26 + 0x2000000;
  *unaff_RDI = ((int)lVar1 + (int)lVar26) - ((uint)uVar4 & 0xfc000000);
  unaff_RDI[1] = (int)(uVar4 >> 0x1a) + (((int)lVar30 + (int)lVar35) - ((uint)lVar14 & 0xfe000000));
  unaff_RDI[2] = ((int)lVar8 + (int)lVar44) - ((uint)lVar9 & 0xfc000000);
  unaff_RDI[3] = ((int)lVar40 + (int)lVar17) - ((uint)lVar11 & 0xfe000000);
  unaff_RDI[4] = ((int)lVar18 + (int)lVar22) - ((uint)uVar5 & 0xfc000000);
  unaff_RDI[5] = (int)(uVar5 >> 0x1a) + (((int)lVar49 + (int)lVar15) - ((uint)lVar16 & 0xfe000000));
  unaff_RDI[6] = ((int)lVar47 + (int)lVar31) - ((uint)lVar10 & 0xfc000000);
  unaff_RDI[7] = ((int)lVar32 + (int)lVar27) - ((uint)lVar12 & 0xfe000000);
  unaff_RDI[8] = ((int)lVar38 + (int)lVar28) - ((uint)lVar19 & 0xfc000000);
  unaff_RDI[9] = ((int)lVar13 + (int)lVar29) - ((uint)lVar33 & 0xfe000000);
  return;
}


