// Function: FUN_00fcd1e0
// Address: 00fcd1e0
// Size: 1694 bytes
// Class: Unknown


void FUN_00fcd1e0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  int unaff_ESI;
  uint uVar4;
  uint uVar5;
  undefined1 (*unaff_RDI) [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  bVar3 = param_2 + ((char)param_2 >> 7 & param_2) * -2;
  *unaff_RDI = (undefined1  [16])0x0;
  unaff_RDI[1] = (undefined1  [16])0x0;
  *(undefined8 *)unaff_RDI[2] = 0;
  *(undefined4 *)*unaff_RDI = 1;
  *(undefined1 (*) [16])(unaff_RDI[2] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RDI[3] + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(unaff_RDI[4] + 8) = 0;
  *(undefined4 *)(unaff_RDI[2] + 8) = 1;
  unaff_RDI[5] = (undefined1  [16])0x0;
  unaff_RDI[6] = (undefined1  [16])0x0;
  *(undefined8 *)unaff_RDI[7] = 0;
  lVar2 = (longlong)unaff_ESI * 0x3c0;
  auVar18._0_4_ = (int)((bVar3 ^ 1) - 1) >> 0x1f;
  auVar18._4_4_ = auVar18._0_4_;
  auVar18._8_4_ = auVar18._0_4_;
  auVar18._12_4_ = auVar18._0_4_;
  auVar12 = pblendvb(*unaff_RDI,*(undefined1 (*) [16])(&DAT_023f2d30 + lVar2),auVar18);
  auVar9 = pblendvb(unaff_RDI[2],*(undefined1 (*) [16])(&DAT_023f2d50 + lVar2),auVar18);
  auVar14 = pblendvb(unaff_RDI[3],*(undefined1 (*) [16])(&DAT_023f2d60 + lVar2),auVar18);
  auVar16 = pblendvb(unaff_RDI[4],*(undefined1 (*) [16])(&DAT_023f2d70 + lVar2),auVar18);
  auVar8._0_4_ = (int)((bVar3 ^ 2) - 1) >> 0x1f;
  auVar8._4_4_ = auVar8._0_4_;
  auVar8._8_4_ = auVar8._0_4_;
  auVar8._12_4_ = auVar8._0_4_;
  auVar13 = pblendvb(auVar12,*(undefined1 (*) [16])(&DAT_023f2da8 + lVar2),auVar8);
  auVar7 = pblendvb(*(undefined1 (*) [16])(&DAT_023f2d40 + lVar2) & auVar18,
                    *(undefined1 (*) [16])(&DAT_023f2db8 + lVar2),auVar8);
  auVar10 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f2dc8 + lVar2),auVar8);
  auVar15 = pblendvb(auVar14,*(undefined1 (*) [16])(&DAT_023f2dd8 + lVar2),auVar8);
  uVar6 = (*(uint *)(&DAT_023f2da4 + lVar2) ^ *(uint *)(unaff_RDI[7] + 4)) & auVar18._0_4_ ^
          *(uint *)(unaff_RDI[7] + 4);
  auVar17 = pblendvb(auVar16,*(undefined1 (*) [16])(&DAT_023f2de8 + lVar2),auVar8);
  auVar14 = pblendvb(*(undefined1 (*) [16])(&DAT_023f2d80 + lVar2) & auVar18,
                     *(undefined1 (*) [16])(&DAT_023f2df8 + lVar2),auVar8);
  auVar9 = pblendvb(auVar18 & *(undefined1 (*) [16])(&DAT_023f2d90 + lVar2),
                    *(undefined1 (*) [16])(&DAT_023f2e08 + lVar2),auVar8);
  uVar4 = (*(uint *)(&DAT_023f2e18 + lVar2) ^ *(uint *)(&DAT_023f2da0 + lVar2) & auVar18._0_4_) &
          auVar8._0_4_ ^ *(uint *)(&DAT_023f2da0 + lVar2) & auVar18._0_4_;
  auVar12._0_4_ = (int)((bVar3 ^ 3) - 1) >> 0x1f;
  auVar12._4_4_ = auVar12._0_4_;
  auVar12._8_4_ = auVar12._0_4_;
  auVar12._12_4_ = auVar12._0_4_;
  auVar16 = pblendvb(auVar13,*(undefined1 (*) [16])(&DAT_023f2e20 + lVar2),auVar12);
  auVar13 = pblendvb(auVar7,*(undefined1 (*) [16])(&DAT_023f2e30 + lVar2),auVar12);
  auVar10 = pblendvb(auVar10,*(undefined1 (*) [16])(&DAT_023f2e40 + lVar2),auVar12);
  auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f2e50 + lVar2),auVar12);
  uVar6 = (*(uint *)(&DAT_023f2e1c + lVar2) ^ uVar6) & auVar8._0_4_ ^ uVar6;
  auVar18 = pblendvb(auVar17,*(undefined1 (*) [16])(&DAT_023f2e60 + lVar2),auVar12);
  auVar14 = pblendvb(auVar14,*(undefined1 (*) [16])(&DAT_023f2e70 + lVar2),auVar12);
  auVar9 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f2e80 + lVar2),auVar12);
  uVar4 = (*(uint *)(&DAT_023f2e90 + lVar2) ^ uVar4) & auVar12._0_4_ ^ uVar4;
  auVar7._0_4_ = (int)((bVar3 ^ 4) - 1) >> 0x1f;
  auVar7._4_4_ = auVar7._0_4_;
  auVar7._8_4_ = auVar7._0_4_;
  auVar7._12_4_ = auVar7._0_4_;
  auVar16 = pblendvb(auVar16,*(undefined1 (*) [16])(&DAT_023f2e98 + lVar2),auVar7);
  auVar8 = pblendvb(auVar13,*(undefined1 (*) [16])(&DAT_023f2ea8 + lVar2),auVar7);
  auVar10 = pblendvb(auVar10,*(undefined1 (*) [16])(&DAT_023f2eb8 + lVar2),auVar7);
  auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f2ec8 + lVar2),auVar7);
  uVar6 = (*(uint *)(&DAT_023f2e94 + lVar2) ^ uVar6) & auVar12._0_4_ ^ uVar6;
  auVar18 = pblendvb(auVar18,*(undefined1 (*) [16])(&DAT_023f2ed8 + lVar2),auVar7);
  auVar14 = pblendvb(auVar14,*(undefined1 (*) [16])(&DAT_023f2ee8 + lVar2),auVar7);
  auVar9 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f2ef8 + lVar2),auVar7);
  uVar4 = (*(uint *)(&DAT_023f2f08 + lVar2) ^ uVar4) & auVar7._0_4_ ^ uVar4;
  auVar13._0_4_ = (int)((bVar3 ^ 5) - 1) >> 0x1f;
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  auVar16 = pblendvb(auVar16,*(undefined1 (*) [16])(&DAT_023f2f10 + lVar2),auVar13);
  auVar8 = pblendvb(auVar8,*(undefined1 (*) [16])(&DAT_023f2f20 + lVar2),auVar13);
  auVar12 = pblendvb(auVar10,*(undefined1 (*) [16])(&DAT_023f2f30 + lVar2),auVar13);
  auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f2f40 + lVar2),auVar13);
  uVar6 = (*(uint *)(&DAT_023f2f0c + lVar2) ^ uVar6) & auVar7._0_4_ ^ uVar6;
  auVar18 = pblendvb(auVar18,*(undefined1 (*) [16])(&DAT_023f2f50 + lVar2),auVar13);
  auVar7 = pblendvb(auVar14,*(undefined1 (*) [16])(&DAT_023f2f60 + lVar2),auVar13);
  auVar9 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f2f70 + lVar2),auVar13);
  uVar4 = (*(uint *)(&DAT_023f2f80 + lVar2) ^ uVar4) & auVar13._0_4_ ^ uVar4;
  auVar10._0_4_ = (int)((bVar3 ^ 6) - 1) >> 0x1f;
  auVar10._4_4_ = auVar10._0_4_;
  auVar10._8_4_ = auVar10._0_4_;
  auVar10._12_4_ = auVar10._0_4_;
  auVar16 = pblendvb(auVar16,*(undefined1 (*) [16])(&DAT_023f2f88 + lVar2),auVar10);
  auVar8 = pblendvb(auVar8,*(undefined1 (*) [16])(&DAT_023f2f98 + lVar2),auVar10);
  auVar12 = pblendvb(auVar12,*(undefined1 (*) [16])(&DAT_023f2fa8 + lVar2),auVar10);
  auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f2fb8 + lVar2),auVar10);
  uVar6 = (*(uint *)(&DAT_023f2f84 + lVar2) ^ uVar6) & auVar13._0_4_ ^ uVar6;
  auVar18 = pblendvb(auVar18,*(undefined1 (*) [16])(&DAT_023f2fc8 + lVar2),auVar10);
  auVar7 = pblendvb(auVar7,*(undefined1 (*) [16])(&DAT_023f2fd8 + lVar2),auVar10);
  auVar9 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f2fe8 + lVar2),auVar10);
  uVar4 = (*(uint *)(&DAT_023f2ff8 + lVar2) ^ uVar4) & auVar10._0_4_ ^ uVar4;
  auVar14._0_4_ = (int)((bVar3 ^ 7) - 1) >> 0x1f;
  auVar14._4_4_ = auVar14._0_4_;
  auVar14._8_4_ = auVar14._0_4_;
  auVar14._12_4_ = auVar14._0_4_;
  auVar13 = pblendvb(auVar16,*(undefined1 (*) [16])(&DAT_023f3000 + lVar2),auVar14);
  auVar8 = pblendvb(auVar8,*(undefined1 (*) [16])(&DAT_023f3010 + lVar2),auVar14);
  auVar12 = pblendvb(auVar12,*(undefined1 (*) [16])(&DAT_023f3020 + lVar2),auVar14);
  auVar15 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f3030 + lVar2),auVar14);
  auVar18 = pblendvb(auVar18,*(undefined1 (*) [16])(&DAT_023f3040 + lVar2),auVar14);
  uVar6 = (*(uint *)(&DAT_023f2ffc + lVar2) ^ uVar6) & auVar10._0_4_ ^ uVar6;
  auVar7 = pblendvb(auVar7,*(undefined1 (*) [16])(&DAT_023f3050 + lVar2),auVar14);
  auVar9 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f3060 + lVar2),auVar14);
  uVar4 = (*(uint *)(&DAT_023f3070 + lVar2) ^ uVar4) & auVar14._0_4_ ^ uVar4;
  auVar16._0_4_ = (int)((bVar3 ^ 8) - 1) >> 0x1f;
  auVar16._4_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar16._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  auVar13 = pblendvb(auVar13,*(undefined1 (*) [16])(&DAT_023f3078 + lVar2),auVar16);
  uVar6 = (*(uint *)(&DAT_023f3074 + lVar2) ^ uVar6) & auVar14._0_4_ ^ uVar6;
  auVar8 = pblendvb(auVar8,*(undefined1 (*) [16])(&DAT_023f3088 + lVar2),auVar16);
  auVar12 = pblendvb(auVar12,*(undefined1 (*) [16])(&DAT_023f3098 + lVar2),auVar16);
  *unaff_RDI = auVar13;
  auVar10 = pblendvb(auVar15,*(undefined1 (*) [16])(&DAT_023f30a8 + lVar2),auVar16);
  unaff_RDI[1] = auVar8;
  auVar8 = pblendvb(auVar18,*(undefined1 (*) [16])(&DAT_023f30b8 + lVar2),auVar16);
  unaff_RDI[2] = auVar12;
  auVar13 = pblendvb(auVar7,*(undefined1 (*) [16])(&DAT_023f30c8 + lVar2),auVar16);
  unaff_RDI[3] = auVar10;
  auVar7 = pblendvb(auVar9,*(undefined1 (*) [16])(&DAT_023f30d8 + lVar2),auVar16);
  unaff_RDI[4] = auVar8;
  uVar4 = (*(uint *)(&DAT_023f30e8 + lVar2) ^ uVar4) & auVar16._0_4_ ^ uVar4;
  uVar6 = (*(uint *)(&DAT_023f30ec + lVar2) ^ uVar6) & auVar16._0_4_ ^ uVar6;
  uVar1 = *(undefined8 *)(unaff_RDI[4] + 8);
  auVar9 = *(undefined1 (*) [16])(unaff_RDI[3] + 8);
  auVar8 = *(undefined1 (*) [16])(*unaff_RDI + 8);
  auVar12 = *(undefined1 (*) [16])(unaff_RDI[1] + 8);
  auVar15._4_4_ = -auVar13._4_4_;
  auVar15._0_4_ = -auVar13._0_4_;
  auVar15._8_4_ = -auVar13._8_4_;
  auVar15._12_4_ = -auVar13._12_4_;
  auVar11._4_4_ = -auVar7._4_4_;
  auVar11._0_4_ = -auVar7._0_4_;
  auVar11._8_4_ = -auVar7._8_4_;
  auVar11._12_4_ = -auVar7._12_4_;
  uVar5 = -(uint)(param_2 >> 7);
  auVar17._4_4_ = uVar5;
  auVar17._0_4_ = uVar5;
  auVar17._8_4_ = uVar5;
  auVar17._12_4_ = uVar5;
  *unaff_RDI = *(undefined1 (*) [16])(unaff_RDI[2] + 8) & auVar17 | ~auVar17 & *unaff_RDI;
  unaff_RDI[1] = auVar9 & auVar17 | ~auVar17 & unaff_RDI[1];
  auVar9._8_8_ = *(undefined8 *)*unaff_RDI;
  auVar9._0_8_ = uVar1;
  unaff_RDI[2] = auVar9 & auVar17 | ~auVar17 & unaff_RDI[2];
  unaff_RDI[3] = auVar8 & auVar17 | ~auVar17 & unaff_RDI[3];
  unaff_RDI[4] = auVar12 & auVar17 | ~auVar17 & unaff_RDI[4];
  unaff_RDI[5] = auVar15 & auVar17 | ~auVar17 & auVar13;
  unaff_RDI[6] = ~auVar17 & auVar7 | auVar11 & auVar17;
  *(uint *)unaff_RDI[7] = (-uVar4 ^ uVar4) & uVar5 ^ uVar4;
  *(uint *)(unaff_RDI[7] + 4) = (-uVar6 ^ uVar6) & uVar5 ^ uVar6;
  return;
}


