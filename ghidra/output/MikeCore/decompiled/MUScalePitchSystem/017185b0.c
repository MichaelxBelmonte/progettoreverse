// Function: FUN_017185b0
// Address: 017185b0
// Size: 910 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x0171893c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017185b0(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 unaff_ESI;
  ulonglong uVar8;
  undefined8 *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar11 = FUN_00c92160();
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 0;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 2;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 3;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 5;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 7;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 8;
  iVar2 = *(int *)(puVar5 + 3);
  FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 10;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  puVar6[3] = 0;
  FUN_00d500e0();
  *(undefined4 *)((longlong)puVar6 + 0xc) = unaff_ESI;
  uVar3 = *(uint *)(puVar5 + 3);
  if ((int)uVar3 < 4) {
LAB_01718902:
    FUN_01715d80();
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
  lVar4 = puVar5[2];
  uVar10 = puVar6[3];
  if (uVar3 < 0x10) {
    uVar8 = 0;
    do {
      uVar10 = uVar10 & ~(0xfL << ((*(byte *)(lVar4 + uVar8 * 4) & 0xf) << 2));
      uVar8 = uVar8 + 1;
joined_r0x017188dd:
    } while (uVar8 != uVar3 >> 2);
    puVar6[3] = uVar10;
    goto LAB_01718902;
  }
  uVar8 = (ulonglong)(uVar3 >> 2 & 0xfffffffc);
  auVar13._8_8_ = _UNK_023d4b78;
  auVar13._0_8_ = uVar10;
  uVar10 = (uVar8 - 4 >> 2) + 1;
  if (uVar8 - 4 == 0) {
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
  }
  else {
    lVar9 = -(uVar10 & 0xfffffffffffffffe);
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
    do {
      uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
      auVar30._0_4_ = (int)uVar11 << 2;
      auVar30._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar30._8_8_ = 0;
      auVar22 = pmovzxdq(auVar30,auVar30);
      auVar32._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar32._8_8_ = _UNK_02411a38 << lVar14;
      auVar27._0_4_ = (int)uVar1 << 2;
      auVar27._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar27._8_8_ = 0;
      auVar23._0_8_ = _DAT_02411a30 << lVar14;
      auVar23._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar27,auVar27);
      auVar24 = pblendw(auVar23,auVar32,0xf);
      auVar33._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar33._8_8_ = _UNK_02411a38 << lVar14;
      auVar22._8_4_ = auVar28._8_4_;
      auVar22._0_8_ = lVar14;
      auVar22._12_4_ = auVar28._12_4_;
      auVar29._0_8_ = _DAT_02411a30 << lVar14;
      auVar29._8_8_ = _UNK_02411a38 << auVar22._8_8_;
      auVar30 = pblendw(auVar29,auVar33,0xf);
      uVar11 = *(undefined8 *)(lVar4 + 0x10 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 0x18 + lVar7 * 4);
      auVar28._0_4_ = (int)uVar11 << 2;
      auVar28._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar28._8_8_ = 0;
      auVar22 = pmovzxdq(auVar28,auVar28);
      auVar34._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar34._8_8_ = _UNK_02411a38 << lVar14;
      auVar15._0_4_ = (int)uVar1 << 2;
      auVar15._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar15._8_8_ = 0;
      auVar12._0_8_ = _DAT_02411a30 << lVar14;
      auVar12._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar15,auVar15);
      auVar22 = pblendw(auVar12,auVar34,0xf);
      auVar35._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar35._8_8_ = _UNK_02411a38 << lVar14;
      auVar13 = ~auVar22 & ~auVar24 & auVar13;
      auVar25._8_4_ = auVar28._8_4_;
      auVar25._0_8_ = lVar14;
      auVar25._12_4_ = auVar28._12_4_;
      auVar24._0_8_ = _DAT_02411a30 << lVar14;
      auVar24._8_8_ = _UNK_02411a38 << auVar25._8_8_;
      auVar22 = pblendw(auVar24,auVar35,0xf);
      auVar16 = ~auVar22 & ~auVar30 & auVar16;
      lVar7 = lVar7 + 8;
      lVar9 = lVar9 + 2;
    } while (lVar9 != 0);
    if ((uVar10 & 1) == 0) goto LAB_017188c8;
  }
  uVar11 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
  auVar19._0_4_ = (int)uVar11 << 2;
  auVar19._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar19._8_8_ = 0;
  auVar22 = pmovzxdq(auVar19,auVar19);
  auVar31._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar9 = auVar22._8_8_;
  auVar31._8_8_ = _UNK_02411a38 << lVar9;
  auVar20._8_4_ = auVar22._8_4_;
  auVar20._12_4_ = auVar22._12_4_;
  auVar20._0_8_ = lVar9;
  auVar36._0_8_ = _DAT_02411a30 << lVar9;
  auVar36._8_8_ = _UNK_02411a38 << auVar20._8_8_;
  auVar22 = pblendw(auVar36,auVar31,0xf);
  auVar16 = ~auVar22 & auVar16;
  uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
  auVar17._0_4_ = (int)uVar11 << 2;
  auVar17._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar17._8_8_ = 0;
  auVar22 = pmovzxdq(auVar17,auVar17);
  auVar21._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar7 = auVar22._8_8_;
  auVar21._8_8_ = _UNK_02411a38 << lVar7;
  auVar18._8_4_ = auVar22._8_4_;
  auVar18._12_4_ = auVar22._12_4_;
  auVar18._0_8_ = lVar7;
  auVar26._0_8_ = _DAT_02411a30 << lVar7;
  auVar26._8_8_ = _UNK_02411a38 << auVar18._8_8_;
  auVar22 = pblendw(auVar26,auVar21,0xf);
  auVar13 = ~auVar22 & auVar13;
LAB_017188c8:
  uVar10 = SUB168(auVar13 & auVar16,8) & SUB168(auVar13 & auVar16,0);
  goto joined_r0x017188dd;
}


