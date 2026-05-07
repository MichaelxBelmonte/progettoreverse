// Function: FUN_00fcdaa0
// Address: 00fcdaa0
// Size: 1749 bytes
// Class: Unknown


void FUN_00fcdaa0(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int *unaff_RSI;
  longlong lVar21;
  longlong lVar22;
  int *unaff_RDI;
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
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  
  lVar3 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00fce180();
  FUN_00fce180();
  lVar17 = (longlong)unaff_RSI[0x14];
  lVar21 = (longlong)unaff_RSI[0x15];
  lVar25 = (longlong)unaff_RSI[0x16];
  lVar24 = (longlong)unaff_RSI[0x17];
  lVar6 = (longlong)unaff_RSI[0x1d];
  lVar4 = lVar17 * 2;
  lVar9 = lVar21 * 2;
  lVar10 = lVar24 * 2;
  lVar19 = lVar6 * 0x26;
  lVar11 = lVar25 * 2;
  lVar20 = (longlong)unaff_RSI[0x18];
  lVar29 = (longlong)unaff_RSI[0x19];
  lVar12 = lVar29 * 2;
  lVar26 = (longlong)unaff_RSI[0x1a];
  lVar31 = (longlong)unaff_RSI[0x1b];
  lVar13 = lVar31 * 2;
  lVar23 = (longlong)unaff_RSI[0x1c];
  lVar15 = lVar20 * 2;
  lVar34 = lVar31 * 0x26;
  lVar18 = lVar26 * 0x13;
  lVar14 = lVar23 * 0x13;
  lVar17 = lVar29 * lVar29 * 0x26 + lVar17 * lVar17 + lVar18 * lVar15 + lVar34 * lVar10 +
           lVar11 * lVar14 + lVar9 * lVar19;
  lVar33 = lVar18 * lVar12 + lVar4 * lVar21 + lVar34 * lVar20 + lVar14 * lVar10 + lVar19 * lVar25;
  lVar21 = lVar18 * lVar26 + lVar21 * lVar9 + lVar25 * lVar4 + lVar34 * lVar12 + lVar15 * lVar14 +
           lVar10 * lVar19;
  lVar22 = lVar34 * lVar26 + lVar9 * lVar25 + lVar24 * lVar4 + lVar14 * lVar12 + lVar20 * lVar19;
  lVar25 = lVar34 * lVar31 + lVar25 * lVar25 + lVar10 * lVar9 + lVar20 * lVar4 + lVar26 * lVar14 * 2
           + lVar12 * lVar19;
  lVar30 = lVar14 * lVar13 + lVar11 * lVar24 + lVar20 * lVar9 + lVar29 * lVar4 + lVar19 * lVar26;
  lVar32 = lVar14 * lVar23 + lVar24 * lVar10 + lVar20 * lVar11 + lVar12 * lVar9 + lVar26 * lVar4 +
           lVar13 * lVar19;
  lVar24 = lVar23 * lVar19 + lVar10 * lVar20 + lVar29 * lVar11 + lVar26 * lVar9 + lVar31 * lVar4;
  lVar18 = lVar19 * lVar6 +
           lVar20 * lVar20 + lVar26 * lVar11 + lVar12 * lVar10 + lVar13 * lVar9 + lVar23 * lVar4;
  lVar34 = lVar29 * lVar15 + lVar26 * lVar10 + lVar31 * lVar11 + lVar23 * lVar9 + lVar4 * lVar6;
  uVar7 = lVar17 * 2 + 0x2000000;
  lVar35 = lVar17 * 2 - (uVar7 & 0xfffffffffc000000);
  uVar8 = lVar25 * 2 + 0x2000000;
  lVar6 = lVar25 * 2 - (uVar8 & 0xfffffffffc000000);
  lVar25 = (longlong)uVar7 >> 0x1a;
  lVar9 = lVar25 + lVar33 * 2 + 0x1000000;
  lVar27 = (longlong)uVar8 >> 0x1a;
  lVar10 = lVar27 + lVar30 * 2 + 0x1000000;
  lVar23 = lVar9 >> 0x19;
  lVar11 = lVar23 + lVar21 * 2 + 0x2000000;
  lVar28 = lVar10 >> 0x19;
  lVar12 = lVar28 + lVar32 * 2 + 0x2000000;
  lVar19 = lVar11 >> 0x1a;
  lVar13 = lVar19 + lVar22 * 2 + 0x1000000;
  lVar26 = lVar12 >> 0x1a;
  lVar14 = lVar26 + lVar24 * 2 + 0x1000000;
  lVar20 = lVar13 >> 0x19;
  uVar8 = lVar6 + lVar20 + 0x2000000;
  lVar29 = lVar14 >> 0x19;
  lVar17 = lVar29 + lVar18 * 2 + 0x2000000;
  lVar31 = lVar17 >> 0x1a;
  lVar15 = lVar31 + lVar34 * 2 + 0x1000000;
  lVar4 = (lVar15 >> 0x19) * 0x13;
  uVar7 = lVar35 + lVar4 + 0x2000000;
  unaff_RDI[0x1e] = ((int)lVar4 + (int)lVar35) - ((uint)uVar7 & 0xfc000000);
  unaff_RDI[0x1f] =
       (int)(uVar7 >> 0x1a) + (((int)lVar25 + (int)lVar33 * 2) - ((uint)lVar9 & 0xfe000000));
  unaff_RDI[0x20] = ((int)lVar23 + (int)lVar21 * 2) - ((uint)lVar11 & 0xfc000000);
  unaff_RDI[0x21] = ((int)lVar19 + (int)lVar22 * 2) - ((uint)lVar13 & 0xfe000000);
  unaff_RDI[0x22] = ((int)lVar20 + (int)lVar6) - ((uint)uVar8 & 0xfc000000);
  unaff_RDI[0x23] =
       (int)(uVar8 >> 0x1a) + (((int)lVar27 + (int)lVar30 * 2) - ((uint)lVar10 & 0xfe000000));
  unaff_RDI[0x24] = ((int)lVar28 + (int)lVar32 * 2) - ((uint)lVar12 & 0xfc000000);
  unaff_RDI[0x25] = ((int)lVar26 + (int)lVar24 * 2) - ((uint)lVar14 & 0xfe000000);
  unaff_RDI[0x26] = ((int)lVar29 + (int)lVar18 * 2) - ((uint)lVar17 & 0xfc000000);
  unaff_RDI[0x27] = ((int)lVar31 + (int)lVar34 * 2) - ((uint)lVar15 & 0xfe000000);
  unaff_RDI[10] = unaff_RSI[10] + *unaff_RSI;
  unaff_RDI[0xb] = unaff_RSI[0xb] + unaff_RSI[1];
  unaff_RDI[0xc] = unaff_RSI[0xc] + unaff_RSI[2];
  unaff_RDI[0xd] = unaff_RSI[0xd] + unaff_RSI[3];
  unaff_RDI[0xe] = unaff_RSI[0xe] + unaff_RSI[4];
  unaff_RDI[0xf] = unaff_RSI[0xf] + unaff_RSI[5];
  unaff_RDI[0x10] = unaff_RSI[0x10] + unaff_RSI[6];
  unaff_RDI[0x11] = unaff_RSI[0x11] + unaff_RSI[7];
  unaff_RDI[0x12] = unaff_RSI[0x12] + unaff_RSI[8];
  unaff_RDI[0x13] = unaff_RSI[0x13] + unaff_RSI[9];
  FUN_00fce180();
  iVar44 = *unaff_RDI + unaff_RDI[0x14];
  iVar45 = unaff_RDI[1] + unaff_RDI[0x15];
  iVar46 = unaff_RDI[2] + unaff_RDI[0x16];
  iVar47 = unaff_RDI[3] + unaff_RDI[0x17];
  unaff_RDI[10] = iVar44;
  unaff_RDI[0xb] = iVar45;
  unaff_RDI[0xc] = iVar46;
  unaff_RDI[0xd] = iVar47;
  iVar48 = unaff_RDI[4] + unaff_RDI[0x18];
  iVar49 = unaff_RDI[5] + unaff_RDI[0x19];
  iVar50 = unaff_RDI[6] + unaff_RDI[0x1a];
  iVar51 = unaff_RDI[7] + unaff_RDI[0x1b];
  unaff_RDI[0xe] = iVar48;
  unaff_RDI[0xf] = iVar49;
  unaff_RDI[0x10] = iVar50;
  unaff_RDI[0x11] = iVar51;
  iVar1 = unaff_RDI[8] + unaff_RDI[0x1c];
  unaff_RDI[0x12] = iVar1;
  iVar2 = unaff_RDI[9] + unaff_RDI[0x1d];
  unaff_RDI[0x13] = iVar2;
  iVar36 = unaff_RDI[0x14] - *unaff_RDI;
  iVar37 = unaff_RDI[0x15] - unaff_RDI[1];
  iVar38 = unaff_RDI[0x16] - unaff_RDI[2];
  iVar39 = unaff_RDI[0x17] - unaff_RDI[3];
  unaff_RDI[0x14] = iVar36;
  unaff_RDI[0x15] = iVar37;
  unaff_RDI[0x16] = iVar38;
  unaff_RDI[0x17] = iVar39;
  iVar40 = unaff_RDI[0x18] - unaff_RDI[4];
  iVar41 = unaff_RDI[0x19] - unaff_RDI[5];
  iVar42 = unaff_RDI[0x1a] - unaff_RDI[6];
  iVar43 = unaff_RDI[0x1b] - unaff_RDI[7];
  unaff_RDI[0x18] = iVar40;
  unaff_RDI[0x19] = iVar41;
  unaff_RDI[0x1a] = iVar42;
  unaff_RDI[0x1b] = iVar43;
  iVar5 = unaff_RDI[0x1c] - unaff_RDI[8];
  unaff_RDI[0x1c] = iVar5;
  iVar16 = unaff_RDI[0x1d] - unaff_RDI[9];
  unaff_RDI[0x1d] = iVar16;
  *unaff_RDI = local_68 - iVar44;
  unaff_RDI[1] = iStack_64 - iVar45;
  unaff_RDI[2] = iStack_60 - iVar46;
  unaff_RDI[3] = iStack_5c - iVar47;
  unaff_RDI[4] = local_58 - iVar48;
  unaff_RDI[5] = iStack_54 - iVar49;
  unaff_RDI[6] = iStack_50 - iVar50;
  unaff_RDI[7] = iStack_4c - iVar51;
  unaff_RDI[8] = local_48 - iVar1;
  unaff_RDI[9] = local_44 - iVar2;
  unaff_RDI[0x1e] = unaff_RDI[0x1e] - iVar36;
  unaff_RDI[0x1f] = unaff_RDI[0x1f] - iVar37;
  unaff_RDI[0x20] = unaff_RDI[0x20] - iVar38;
  unaff_RDI[0x21] = unaff_RDI[0x21] - iVar39;
  unaff_RDI[0x22] = unaff_RDI[0x22] - iVar40;
  unaff_RDI[0x23] = unaff_RDI[0x23] - iVar41;
  unaff_RDI[0x24] = unaff_RDI[0x24] - iVar42;
  unaff_RDI[0x25] = unaff_RDI[0x25] - iVar43;
  unaff_RDI[0x26] = unaff_RDI[0x26] - iVar5;
  unaff_RDI[0x27] = unaff_RDI[0x27] - iVar16;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


