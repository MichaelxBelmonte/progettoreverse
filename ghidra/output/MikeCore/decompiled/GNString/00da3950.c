// Function: FUN_00da3950
// Address: 00da3950
// Size: 2047 bytes
// Class: GNString
// String references:
//   "^^^^^^^^"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00da3950(uint param_1,undefined4 param_2)

{
  ushort *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  ushort uVar35;
  byte *pbVar36;
  byte bVar37;
  ulonglong uVar38;
  byte bVar39;
  longlong lVar40;
  ushort uVar41;
  int iVar42;
  ushort *unaff_RSI;
  ulonglong uVar43;
  ushort *unaff_RDI;
  longlong lVar44;
  undefined *puVar45;
  uint uVar46;
  ulonglong uVar47;
  longlong lVar48;
  uint uVar49;
  ushort *puVar50;
  ushort *puVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  byte bVar61;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  
  auVar53 = _DAT_023def40;
  bVar33 = UNK_023def3f;
  bVar32 = UNK_023def3e;
  bVar31 = UNK_023def3d;
  bVar30 = UNK_023def3c;
  bVar29 = UNK_023def3b;
  bVar28 = UNK_023def3a;
  bVar27 = UNK_023def39;
  cVar26 = s__________023def30[8];
  cVar25 = s__________023def30[7];
  cVar24 = s__________023def30[6];
  cVar23 = s__________023def30[5];
  cVar22 = s__________023def30[4];
  cVar21 = s__________023def30[3];
  cVar20 = s__________023def30[2];
  cVar19 = s__________023def30[1];
  cVar18 = s__________023def30[0];
  bVar17 = UNK_023def2f;
  bVar16 = UNK_023def2e;
  bVar15 = UNK_023def2d;
  bVar34 = UNK_023def2c;
  bVar4 = UNK_023def2b;
  bVar5 = UNK_023def2a;
  bVar37 = UNK_023def29;
  bVar39 = UNK_023def28;
  cVar14 = UNK_023def27;
  cVar13 = UNK_023def26;
  cVar12 = UNK_023def25;
  cVar11 = UNK_023def24;
  cVar10 = UNK_023def23;
  cVar9 = UNK_023def22;
  cVar8 = UNK_023def21;
  cVar7 = DAT_023def20;
  pbVar36 = &DAT_02782030;
  switch(param_2) {
  case 0:
    goto switchD_00da3987_caseD_0;
  case 1:
    pbVar36 = &DAT_027822b0;
    if ((int)param_1 < 1) break;
    goto LAB_00da39bb;
  case 2:
    pbVar36 = &DAT_02782520;
    goto joined_r0x00da39a4;
  case 3:
    pbVar36 = &DAT_027827b0;
    goto switchD_00da3987_caseD_0;
  case 4:
    pbVar36 = &DAT_02782a30;
joined_r0x00da39a4:
    if (0 < (int)param_1) {
LAB_00da39bb:
      uVar46 = 0;
      do {
        bVar39 = (byte)*unaff_RDI;
        uVar41 = (ushort)bVar39;
        if (0x5e < (byte)(bVar39 - 0x20)) {
          bVar37 = *pbVar36;
          pbVar6 = pbVar36;
          while (bVar37 != 0) {
            if (bVar37 == bVar39) {
              uVar41 = *(ushort *)(pbVar6 + 2);
              goto LAB_00da39d4;
            }
            bVar37 = pbVar6[4];
            pbVar6 = pbVar6 + 4;
          }
          uVar41 = 0xfffd;
        }
LAB_00da39d4:
        unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
        *unaff_RSI = uVar41;
        unaff_RSI = unaff_RSI + 1;
        uVar46 = uVar46 + 1;
      } while (uVar46 != param_1);
      goto LAB_00da3ec1;
    }
    break;
  default:
    if (0 < (int)param_1) {
      uVar47 = 0;
      if ((0xe < param_1 - 1) &&
         ((uVar38 = (ulonglong)(param_1 - 1) + 1,
          (ushort *)((longlong)unaff_RDI + uVar38) <= unaff_RSI || (unaff_RSI + uVar38 <= unaff_RDI)
          ))) {
        uVar47 = uVar38 & 0xfffffffffffffff0;
        uVar43 = (uVar47 - 0x10 >> 4) + 1;
        if (uVar47 - 0x10 == 0) {
          lVar40 = 0;
        }
        else {
          lVar44 = -(uVar43 & 0xfffffffffffffffe);
          lVar40 = 0;
          in_XMM3[1] = s__________023def30[1];
          in_XMM3[0] = s__________023def30[0];
          in_XMM3[2] = s__________023def30[2];
          in_XMM3[3] = s__________023def30[3];
          in_XMM3[4] = s__________023def30[4];
          in_XMM3[5] = s__________023def30[5];
          in_XMM3[6] = s__________023def30[6];
          in_XMM3[7] = s__________023def30[7];
          in_XMM3[8] = s__________023def30[8];
          in_XMM3[9] = UNK_023def39;
          in_XMM3[10] = UNK_023def3a;
          in_XMM3[0xb] = UNK_023def3b;
          in_XMM3[0xc] = UNK_023def3c;
          in_XMM3[0xd] = UNK_023def3d;
          in_XMM3[0xe] = UNK_023def3e;
          in_XMM3[0xf] = UNK_023def3f;
          auVar60._8_4_ = 0xffffffff;
          auVar60._0_8_ = 0xffffffffffffffff;
          auVar60._12_4_ = 0xffffffff;
          do {
            uVar2 = *(ulonglong *)((longlong)unaff_RDI + lVar40);
            auVar62._8_8_ = 0;
            auVar62._0_8_ = uVar2;
            uVar3 = *(ulonglong *)((longlong)unaff_RDI + lVar40 + 8);
            auVar55._8_8_ = 0;
            auVar55._0_8_ = uVar3;
            auVar74 = pmovzxbw(unaff_XMM6,auVar62);
            bVar61 = (char)uVar2 + cVar7;
            bVar65 = (char)(uVar2 >> 8) + cVar8;
            bVar66 = (char)(uVar2 >> 0x10) + cVar9;
            bVar67 = (char)(uVar2 >> 0x18) + cVar10;
            bVar68 = (char)(uVar2 >> 0x20) + cVar11;
            bVar69 = (char)(uVar2 >> 0x28) + cVar12;
            bVar70 = (char)(uVar2 >> 0x30) + cVar13;
            bVar71 = (char)(uVar2 >> 0x38) + cVar14;
            auVar55 = pmovzxbw(unaff_XMM7,auVar55);
            auVar75[0] = (char)uVar3 + cVar7;
            auVar75[1] = (char)(uVar3 >> 8) + cVar8;
            auVar75[2] = (char)(uVar3 >> 0x10) + cVar9;
            auVar75[3] = (char)(uVar3 >> 0x18) + cVar10;
            auVar75[4] = (char)(uVar3 >> 0x20) + cVar11;
            auVar75[5] = (char)(uVar3 >> 0x28) + cVar12;
            auVar75[6] = (char)(uVar3 >> 0x30) + cVar13;
            auVar75[7] = (char)(uVar3 >> 0x38) + cVar14;
            auVar75[8] = bVar39;
            auVar75[9] = bVar37;
            auVar75[10] = bVar5;
            auVar75[0xb] = bVar4;
            auVar75[0xc] = bVar34;
            auVar75[0xd] = bVar15;
            auVar75[0xe] = bVar16;
            auVar75[0xf] = bVar17;
            auVar52[0] = -((byte)(((byte)cVar18 < bVar61) * cVar18 |
                                 ((byte)cVar18 >= bVar61) * bVar61) == bVar61);
            auVar52[1] = -((byte)(((byte)cVar19 < bVar65) * cVar19 |
                                 ((byte)cVar19 >= bVar65) * bVar65) == bVar65);
            auVar52[2] = -((byte)(((byte)cVar20 < bVar66) * cVar20 |
                                 ((byte)cVar20 >= bVar66) * bVar66) == bVar66);
            auVar52[3] = -((byte)(((byte)cVar21 < bVar67) * cVar21 |
                                 ((byte)cVar21 >= bVar67) * bVar67) == bVar67);
            auVar52[4] = -((byte)(((byte)cVar22 < bVar68) * cVar22 |
                                 ((byte)cVar22 >= bVar68) * bVar68) == bVar68);
            auVar52[5] = -((byte)(((byte)cVar23 < bVar69) * cVar23 |
                                 ((byte)cVar23 >= bVar69) * bVar69) == bVar69);
            auVar52[6] = -((byte)(((byte)cVar24 < bVar70) * cVar24 |
                                 ((byte)cVar24 >= bVar70) * bVar70) == bVar70);
            auVar52[7] = -((byte)(((byte)cVar25 < bVar71) * cVar25 |
                                 ((byte)cVar25 >= bVar71) * bVar71) == bVar71);
            auVar52[8] = -((byte)(((byte)cVar26 < bVar39) * cVar26 |
                                 ((byte)cVar26 >= bVar39) * bVar39) == bVar39);
            auVar52[9] = -((byte)((bVar27 < bVar37) * bVar27 | (bVar27 >= bVar37) * bVar37) ==
                          bVar37);
            auVar52[10] = -((byte)((bVar28 < bVar5) * bVar28 | (bVar28 >= bVar5) * bVar5) == bVar5);
            auVar52[0xb] = -((byte)((bVar29 < bVar4) * bVar29 | (bVar29 >= bVar4) * bVar4) == bVar4)
            ;
            auVar52[0xc] = -((byte)((bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34) ==
                            bVar34);
            auVar52[0xd] = -((byte)((bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15) ==
                            bVar15);
            auVar52[0xe] = -((byte)((bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16) ==
                            bVar16);
            auVar52[0xf] = -((byte)((bVar33 < bVar17) * bVar33 | (bVar33 >= bVar17) * bVar17) ==
                            bVar17);
            auVar52 = pmovsxbw(auVar52 ^ auVar60,auVar52 ^ auVar60);
            auVar63[0] = -((byte)(((byte)cVar18 < auVar75[0]) * cVar18 |
                                 ((byte)cVar18 >= auVar75[0]) * auVar75[0]) == auVar75[0]);
            auVar63[1] = -((byte)(((byte)cVar19 < auVar75[1]) * cVar19 |
                                 ((byte)cVar19 >= auVar75[1]) * auVar75[1]) == auVar75[1]);
            auVar63[2] = -((byte)(((byte)cVar20 < auVar75[2]) * cVar20 |
                                 ((byte)cVar20 >= auVar75[2]) * auVar75[2]) == auVar75[2]);
            auVar63[3] = -((byte)(((byte)cVar21 < auVar75[3]) * cVar21 |
                                 ((byte)cVar21 >= auVar75[3]) * auVar75[3]) == auVar75[3]);
            auVar63[4] = -((byte)(((byte)cVar22 < auVar75[4]) * cVar22 |
                                 ((byte)cVar22 >= auVar75[4]) * auVar75[4]) == auVar75[4]);
            auVar63[5] = -((byte)(((byte)cVar23 < auVar75[5]) * cVar23 |
                                 ((byte)cVar23 >= auVar75[5]) * auVar75[5]) == auVar75[5]);
            auVar63[6] = -((byte)(((byte)cVar24 < auVar75[6]) * cVar24 |
                                 ((byte)cVar24 >= auVar75[6]) * auVar75[6]) == auVar75[6]);
            auVar63[7] = -((byte)(((byte)cVar25 < auVar75[7]) * cVar25 |
                                 ((byte)cVar25 >= auVar75[7]) * auVar75[7]) == auVar75[7]);
            auVar63[8] = -((byte)(((byte)cVar26 < bVar39) * cVar26 |
                                 ((byte)cVar26 >= bVar39) * bVar39) == bVar39);
            auVar63[9] = -((byte)((bVar27 < bVar37) * bVar27 | (bVar27 >= bVar37) * bVar37) ==
                          bVar37);
            auVar63[10] = -((byte)((bVar28 < bVar5) * bVar28 | (bVar28 >= bVar5) * bVar5) == bVar5);
            auVar63[0xb] = -((byte)((bVar29 < bVar4) * bVar29 | (bVar29 >= bVar4) * bVar4) == bVar4)
            ;
            auVar63[0xc] = -((byte)((bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34) ==
                            bVar34);
            auVar63[0xd] = -((byte)((bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15) ==
                            bVar15);
            auVar63[0xe] = -((byte)((bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16) ==
                            bVar16);
            auVar63[0xf] = -((byte)((bVar33 < bVar17) * bVar33 | (bVar33 >= bVar17) * bVar17) ==
                            bVar17);
            auVar56 = pmovsxbw(auVar75,auVar63 ^ auVar60);
            auVar52 = pblendvb(auVar74,auVar53,auVar52);
            auVar56 = pblendvb(auVar55,auVar53,auVar56);
            *(undefined1 (*) [16])(unaff_RSI + lVar40) = auVar52;
            *(undefined1 (*) [16])(unaff_RSI + lVar40 + 8) = auVar56;
            uVar2 = *(ulonglong *)((longlong)unaff_RDI + lVar40 + 0x10);
            auVar56._8_8_ = 0;
            auVar56._0_8_ = uVar2;
            uVar3 = *(ulonglong *)((longlong)unaff_RDI + lVar40 + 0x18);
            auVar57._8_8_ = 0;
            auVar57._0_8_ = uVar3;
            auVar55 = pmovzxbw(auVar63 ^ auVar60,auVar56);
            auVar74[0] = (char)uVar2 + cVar7;
            auVar74[1] = (char)(uVar2 >> 8) + cVar8;
            auVar74[2] = (char)(uVar2 >> 0x10) + cVar9;
            auVar74[3] = (char)(uVar2 >> 0x18) + cVar10;
            auVar74[4] = (char)(uVar2 >> 0x20) + cVar11;
            auVar74[5] = (char)(uVar2 >> 0x28) + cVar12;
            auVar74[6] = (char)(uVar2 >> 0x30) + cVar13;
            auVar74[7] = (char)(uVar2 >> 0x38) + cVar14;
            auVar74[8] = bVar39;
            auVar74[9] = bVar37;
            auVar74[10] = bVar5;
            auVar74[0xb] = bVar4;
            auVar74[0xc] = bVar34;
            auVar74[0xd] = bVar15;
            auVar74[0xe] = bVar16;
            auVar74[0xf] = bVar17;
            auVar75 = pmovzxbw(auVar52,auVar57);
            auVar58[0] = (char)uVar3 + cVar7;
            auVar58[1] = (char)(uVar3 >> 8) + cVar8;
            auVar58[2] = (char)(uVar3 >> 0x10) + cVar9;
            auVar58[3] = (char)(uVar3 >> 0x18) + cVar10;
            auVar58[4] = (char)(uVar3 >> 0x20) + cVar11;
            auVar58[5] = (char)(uVar3 >> 0x28) + cVar12;
            auVar58[6] = (char)(uVar3 >> 0x30) + cVar13;
            auVar58[7] = (char)(uVar3 >> 0x38) + cVar14;
            auVar58[8] = bVar39;
            auVar58[9] = bVar37;
            auVar58[10] = bVar5;
            auVar58[0xb] = bVar4;
            auVar58[0xc] = bVar34;
            auVar58[0xd] = bVar15;
            auVar58[0xe] = bVar16;
            auVar58[0xf] = bVar17;
            auVar77[0] = -((byte)(((byte)cVar18 < auVar74[0]) * cVar18 |
                                 ((byte)cVar18 >= auVar74[0]) * auVar74[0]) == auVar74[0]);
            auVar77[1] = -((byte)(((byte)cVar19 < auVar74[1]) * cVar19 |
                                 ((byte)cVar19 >= auVar74[1]) * auVar74[1]) == auVar74[1]);
            auVar77[2] = -((byte)(((byte)cVar20 < auVar74[2]) * cVar20 |
                                 ((byte)cVar20 >= auVar74[2]) * auVar74[2]) == auVar74[2]);
            auVar77[3] = -((byte)(((byte)cVar21 < auVar74[3]) * cVar21 |
                                 ((byte)cVar21 >= auVar74[3]) * auVar74[3]) == auVar74[3]);
            auVar77[4] = -((byte)(((byte)cVar22 < auVar74[4]) * cVar22 |
                                 ((byte)cVar22 >= auVar74[4]) * auVar74[4]) == auVar74[4]);
            auVar77[5] = -((byte)(((byte)cVar23 < auVar74[5]) * cVar23 |
                                 ((byte)cVar23 >= auVar74[5]) * auVar74[5]) == auVar74[5]);
            auVar77[6] = -((byte)(((byte)cVar24 < auVar74[6]) * cVar24 |
                                 ((byte)cVar24 >= auVar74[6]) * auVar74[6]) == auVar74[6]);
            auVar77[7] = -((byte)(((byte)cVar25 < auVar74[7]) * cVar25 |
                                 ((byte)cVar25 >= auVar74[7]) * auVar74[7]) == auVar74[7]);
            auVar77[8] = -((byte)(((byte)cVar26 < bVar39) * cVar26 |
                                 ((byte)cVar26 >= bVar39) * bVar39) == bVar39);
            auVar77[9] = -((byte)((bVar27 < bVar37) * bVar27 | (bVar27 >= bVar37) * bVar37) ==
                          bVar37);
            auVar77[10] = -((byte)((bVar28 < bVar5) * bVar28 | (bVar28 >= bVar5) * bVar5) == bVar5);
            auVar77[0xb] = -((byte)((bVar29 < bVar4) * bVar29 | (bVar29 >= bVar4) * bVar4) == bVar4)
            ;
            auVar77[0xc] = -((byte)((bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34) ==
                            bVar34);
            auVar77[0xd] = -((byte)((bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15) ==
                            bVar15);
            auVar77[0xe] = -((byte)((bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16) ==
                            bVar16);
            auVar77[0xf] = -((byte)((bVar33 < bVar17) * bVar33 | (bVar33 >= bVar17) * bVar17) ==
                            bVar17);
            auVar52 = pmovsxbw(auVar74,auVar77 ^ auVar60);
            auVar78[0] = -((byte)(((byte)cVar18 < auVar58[0]) * cVar18 |
                                 ((byte)cVar18 >= auVar58[0]) * auVar58[0]) == auVar58[0]);
            auVar78[1] = -((byte)(((byte)cVar19 < auVar58[1]) * cVar19 |
                                 ((byte)cVar19 >= auVar58[1]) * auVar58[1]) == auVar58[1]);
            auVar78[2] = -((byte)(((byte)cVar20 < auVar58[2]) * cVar20 |
                                 ((byte)cVar20 >= auVar58[2]) * auVar58[2]) == auVar58[2]);
            auVar78[3] = -((byte)(((byte)cVar21 < auVar58[3]) * cVar21 |
                                 ((byte)cVar21 >= auVar58[3]) * auVar58[3]) == auVar58[3]);
            auVar78[4] = -((byte)(((byte)cVar22 < auVar58[4]) * cVar22 |
                                 ((byte)cVar22 >= auVar58[4]) * auVar58[4]) == auVar58[4]);
            auVar78[5] = -((byte)(((byte)cVar23 < auVar58[5]) * cVar23 |
                                 ((byte)cVar23 >= auVar58[5]) * auVar58[5]) == auVar58[5]);
            auVar78[6] = -((byte)(((byte)cVar24 < auVar58[6]) * cVar24 |
                                 ((byte)cVar24 >= auVar58[6]) * auVar58[6]) == auVar58[6]);
            auVar78[7] = -((byte)(((byte)cVar25 < auVar58[7]) * cVar25 |
                                 ((byte)cVar25 >= auVar58[7]) * auVar58[7]) == auVar58[7]);
            auVar78[8] = -((byte)(((byte)cVar26 < bVar39) * cVar26 |
                                 ((byte)cVar26 >= bVar39) * bVar39) == bVar39);
            auVar78[9] = -((byte)((bVar27 < bVar37) * bVar27 | (bVar27 >= bVar37) * bVar37) ==
                          bVar37);
            auVar78[10] = -((byte)((bVar28 < bVar5) * bVar28 | (bVar28 >= bVar5) * bVar5) == bVar5);
            auVar78[0xb] = -((byte)((bVar29 < bVar4) * bVar29 | (bVar29 >= bVar4) * bVar4) == bVar4)
            ;
            auVar78[0xc] = -((byte)((bVar30 < bVar34) * bVar30 | (bVar30 >= bVar34) * bVar34) ==
                            bVar34);
            auVar78[0xd] = -((byte)((bVar31 < bVar15) * bVar31 | (bVar31 >= bVar15) * bVar15) ==
                            bVar15);
            auVar78[0xe] = -((byte)((bVar32 < bVar16) * bVar32 | (bVar32 >= bVar16) * bVar16) ==
                            bVar16);
            auVar78[0xf] = -((byte)((bVar33 < bVar17) * bVar33 | (bVar33 >= bVar17) * bVar17) ==
                            bVar17);
            unaff_XMM7 = auVar78 ^ auVar60;
            auVar56 = pmovsxbw(auVar58,unaff_XMM7);
            auVar52 = pblendvb(auVar55,auVar53,auVar52);
            unaff_XMM6 = pblendvb(auVar75,auVar53,auVar56);
            *(undefined1 (*) [16])(unaff_RSI + lVar40 + 0x10) = auVar52;
            *(undefined1 (*) [16])(unaff_RSI + lVar40 + 0x18) = unaff_XMM6;
            lVar40 = lVar40 + 0x20;
            lVar44 = lVar44 + 2;
          } while (lVar44 != 0);
        }
        if ((uVar43 & 1) != 0) {
          uVar43 = *(ulonglong *)((longlong)unaff_RDI + lVar40);
          auVar53._8_8_ = 0;
          auVar53._0_8_ = uVar43;
          uVar2 = *(ulonglong *)((longlong)unaff_RDI + lVar40 + 8);
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar2;
          auVar56 = pmovzxbw(in_XMM3,auVar53);
          auVar54[0] = (char)uVar43 + DAT_023def20;
          auVar54[1] = (char)(uVar43 >> 8) + UNK_023def21;
          auVar54[2] = (char)(uVar43 >> 0x10) + UNK_023def22;
          auVar54[3] = (char)(uVar43 >> 0x18) + UNK_023def23;
          auVar54[4] = (char)(uVar43 >> 0x20) + UNK_023def24;
          auVar54[5] = (char)(uVar43 >> 0x28) + UNK_023def25;
          auVar54[6] = (char)(uVar43 >> 0x30) + UNK_023def26;
          auVar54[7] = (char)(uVar43 >> 0x38) + UNK_023def27;
          auVar54[8] = UNK_023def28;
          auVar54[9] = UNK_023def29;
          auVar54[10] = UNK_023def2a;
          auVar54[0xb] = UNK_023def2b;
          auVar54[0xc] = UNK_023def2c;
          auVar54[0xd] = UNK_023def2d;
          auVar54[0xe] = UNK_023def2e;
          auVar54[0xf] = UNK_023def2f;
          auVar59[0] = DAT_023def20 + (char)uVar2;
          auVar59[1] = UNK_023def21 + (char)(uVar2 >> 8);
          auVar59[2] = UNK_023def22 + (char)(uVar2 >> 0x10);
          auVar59[3] = UNK_023def23 + (char)(uVar2 >> 0x18);
          auVar59[4] = UNK_023def24 + (char)(uVar2 >> 0x20);
          auVar59[5] = UNK_023def25 + (char)(uVar2 >> 0x28);
          auVar59[6] = UNK_023def26 + (char)(uVar2 >> 0x30);
          auVar59[7] = UNK_023def27 + (char)(uVar2 >> 0x38);
          auVar59[8] = UNK_023def28;
          auVar59[9] = UNK_023def29;
          auVar59[10] = UNK_023def2a;
          auVar59[0xb] = UNK_023def2b;
          auVar59[0xc] = UNK_023def2c;
          auVar59[0xd] = UNK_023def2d;
          auVar59[0xe] = UNK_023def2e;
          auVar59[0xf] = UNK_023def2f;
          auVar73[0] = -((byte)(((byte)s__________023def30[0] < auVar54[0]) * s__________023def30[0]
                               | ((byte)s__________023def30[0] >= auVar54[0]) * auVar54[0]) ==
                        auVar54[0]);
          auVar73[1] = -((byte)(((byte)s__________023def30[1] < auVar54[1]) * s__________023def30[1]
                               | ((byte)s__________023def30[1] >= auVar54[1]) * auVar54[1]) ==
                        auVar54[1]);
          auVar73[2] = -((byte)(((byte)s__________023def30[2] < auVar54[2]) * s__________023def30[2]
                               | ((byte)s__________023def30[2] >= auVar54[2]) * auVar54[2]) ==
                        auVar54[2]);
          auVar73[3] = -((byte)(((byte)s__________023def30[3] < auVar54[3]) * s__________023def30[3]
                               | ((byte)s__________023def30[3] >= auVar54[3]) * auVar54[3]) ==
                        auVar54[3]);
          auVar73[4] = -((byte)(((byte)s__________023def30[4] < auVar54[4]) * s__________023def30[4]
                               | ((byte)s__________023def30[4] >= auVar54[4]) * auVar54[4]) ==
                        auVar54[4]);
          auVar73[5] = -((byte)(((byte)s__________023def30[5] < auVar54[5]) * s__________023def30[5]
                               | ((byte)s__________023def30[5] >= auVar54[5]) * auVar54[5]) ==
                        auVar54[5]);
          auVar73[6] = -((byte)(((byte)s__________023def30[6] < auVar54[6]) * s__________023def30[6]
                               | ((byte)s__________023def30[6] >= auVar54[6]) * auVar54[6]) ==
                        auVar54[6]);
          auVar73[7] = -((byte)(((byte)s__________023def30[7] < auVar54[7]) * s__________023def30[7]
                               | ((byte)s__________023def30[7] >= auVar54[7]) * auVar54[7]) ==
                        auVar54[7]);
          auVar73[8] = -((byte)(((byte)s__________023def30[8] < UNK_023def28) *
                                s__________023def30[8] |
                               ((byte)s__________023def30[8] >= UNK_023def28) * UNK_023def28) ==
                        UNK_023def28);
          auVar73[9] = -((byte)((UNK_023def39 < UNK_023def29) * UNK_023def39 |
                               (UNK_023def39 >= UNK_023def29) * UNK_023def29) == UNK_023def29);
          auVar73[10] = -((byte)((UNK_023def3a < UNK_023def2a) * UNK_023def3a |
                                (UNK_023def3a >= UNK_023def2a) * UNK_023def2a) == UNK_023def2a);
          auVar73[0xb] = -((byte)((UNK_023def3b < UNK_023def2b) * UNK_023def3b |
                                 (UNK_023def3b >= UNK_023def2b) * UNK_023def2b) == UNK_023def2b);
          auVar73[0xc] = -((byte)((UNK_023def3c < UNK_023def2c) * UNK_023def3c |
                                 (UNK_023def3c >= UNK_023def2c) * UNK_023def2c) == UNK_023def2c);
          auVar73[0xd] = -((byte)((UNK_023def3d < UNK_023def2d) * UNK_023def3d |
                                 (UNK_023def3d >= UNK_023def2d) * UNK_023def2d) == UNK_023def2d);
          auVar73[0xe] = -((byte)((UNK_023def3e < UNK_023def2e) * UNK_023def3e |
                                 (UNK_023def3e >= UNK_023def2e) * UNK_023def2e) == UNK_023def2e);
          auVar73[0xf] = -((byte)((UNK_023def3f < UNK_023def2f) * UNK_023def3f |
                                 (UNK_023def3f >= UNK_023def2f) * UNK_023def2f) == UNK_023def2f);
          auVar76._8_4_ = 0xffffffff;
          auVar76._0_8_ = 0xffffffffffffffff;
          auVar76._12_4_ = 0xffffffff;
          auVar53 = pmovsxbw(auVar54,auVar73 ^ auVar76);
          auVar72[0] = -((byte)((auVar59[0] < (byte)s__________023def30[0]) * auVar59[0] |
                               (auVar59[0] >= (byte)s__________023def30[0]) * s__________023def30[0]
                               ) == auVar59[0]);
          auVar72[1] = -((byte)((auVar59[1] < (byte)s__________023def30[1]) * auVar59[1] |
                               (auVar59[1] >= (byte)s__________023def30[1]) * s__________023def30[1]
                               ) == auVar59[1]);
          auVar72[2] = -((byte)((auVar59[2] < (byte)s__________023def30[2]) * auVar59[2] |
                               (auVar59[2] >= (byte)s__________023def30[2]) * s__________023def30[2]
                               ) == auVar59[2]);
          auVar72[3] = -((byte)((auVar59[3] < (byte)s__________023def30[3]) * auVar59[3] |
                               (auVar59[3] >= (byte)s__________023def30[3]) * s__________023def30[3]
                               ) == auVar59[3]);
          auVar72[4] = -((byte)((auVar59[4] < (byte)s__________023def30[4]) * auVar59[4] |
                               (auVar59[4] >= (byte)s__________023def30[4]) * s__________023def30[4]
                               ) == auVar59[4]);
          auVar72[5] = -((byte)((auVar59[5] < (byte)s__________023def30[5]) * auVar59[5] |
                               (auVar59[5] >= (byte)s__________023def30[5]) * s__________023def30[5]
                               ) == auVar59[5]);
          auVar72[6] = -((byte)((auVar59[6] < (byte)s__________023def30[6]) * auVar59[6] |
                               (auVar59[6] >= (byte)s__________023def30[6]) * s__________023def30[6]
                               ) == auVar59[6]);
          auVar72[7] = -((byte)((auVar59[7] < (byte)s__________023def30[7]) * auVar59[7] |
                               (auVar59[7] >= (byte)s__________023def30[7]) * s__________023def30[7]
                               ) == auVar59[7]);
          auVar72[8] = -((byte)((UNK_023def28 < (byte)s__________023def30[8]) * UNK_023def28 |
                               (UNK_023def28 >= (byte)s__________023def30[8]) *
                               s__________023def30[8]) == UNK_023def28);
          auVar72[9] = -((byte)((UNK_023def29 < UNK_023def39) * UNK_023def29 |
                               (UNK_023def29 >= UNK_023def39) * UNK_023def39) == UNK_023def29);
          auVar72[10] = -((byte)((UNK_023def2a < UNK_023def3a) * UNK_023def2a |
                                (UNK_023def2a >= UNK_023def3a) * UNK_023def3a) == UNK_023def2a);
          auVar72[0xb] = -((byte)((UNK_023def2b < UNK_023def3b) * UNK_023def2b |
                                 (UNK_023def2b >= UNK_023def3b) * UNK_023def3b) == UNK_023def2b);
          auVar72[0xc] = -((byte)((UNK_023def2c < UNK_023def3c) * UNK_023def2c |
                                 (UNK_023def2c >= UNK_023def3c) * UNK_023def3c) == UNK_023def2c);
          auVar72[0xd] = -((byte)((UNK_023def2d < UNK_023def3d) * UNK_023def2d |
                                 (UNK_023def2d >= UNK_023def3d) * UNK_023def3d) == UNK_023def2d);
          auVar72[0xe] = -((byte)((UNK_023def2e < UNK_023def3e) * UNK_023def2e |
                                 (UNK_023def2e >= UNK_023def3e) * UNK_023def3e) == UNK_023def2e);
          auVar72[0xf] = -((byte)((UNK_023def2f < UNK_023def3f) * UNK_023def2f |
                                 (UNK_023def2f >= UNK_023def3f) * UNK_023def3f) == UNK_023def2f);
          auVar60 = pmovsxbw(auVar59,auVar72 ^ auVar76);
          auVar52 = pmovzxbw(auVar64,auVar64);
          auVar56 = pblendvb(auVar56,_DAT_023def40,auVar53);
          auVar53 = pblendvb(auVar52,_DAT_023def40,auVar60);
          *(undefined1 (*) [16])(unaff_RSI + lVar40) = auVar56;
          *(undefined1 (*) [16])(unaff_RSI + lVar40 + 8) = auVar53;
        }
        unaff_RSI = unaff_RSI + uVar47;
        if (uVar38 == uVar47) goto LAB_00da3ec1;
        unaff_RDI = (ushort *)((longlong)unaff_RDI + uVar47);
      }
      uVar46 = (uint)uVar47;
      uVar49 = ~uVar46;
      if ((param_1 & 3) != 0) {
        iVar42 = 0;
        do {
          uVar41 = *unaff_RDI;
          uVar35 = (ushort)(byte)uVar41;
          unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
          if (0x5e < (byte)((byte)uVar41 - 0x20)) {
            uVar35 = 0xfffd;
          }
          *unaff_RSI = uVar35;
          unaff_RSI = unaff_RSI + 1;
          iVar42 = iVar42 + -1;
        } while (-(param_1 & 3) != iVar42);
        uVar46 = uVar46 - iVar42;
      }
      if (2 < uVar49 + param_1) {
        lVar40 = 0;
        do {
          uVar41 = (ushort)*(byte *)((longlong)unaff_RDI + lVar40);
          if (0x5e < (byte)(*(byte *)((longlong)unaff_RDI + lVar40) - 0x20)) {
            uVar41 = 0xfffd;
          }
          *unaff_RSI = uVar41;
          bVar39 = *(byte *)((longlong)unaff_RDI + lVar40 + 1);
          uVar41 = (ushort)bVar39;
          if (0x5e < (byte)(bVar39 - 0x20)) {
            uVar41 = 0xfffd;
          }
          unaff_RSI[1] = uVar41;
          bVar39 = *(byte *)((longlong)unaff_RDI + lVar40 + 2);
          uVar41 = (ushort)bVar39;
          if (0x5e < (byte)(bVar39 - 0x20)) {
            uVar41 = 0xfffd;
          }
          unaff_RSI[2] = uVar41;
          bVar39 = *(byte *)((longlong)unaff_RDI + lVar40 + 3);
          uVar41 = (ushort)bVar39;
          if (0x5e < (byte)(bVar39 - 0x20)) {
            uVar41 = 0xfffd;
          }
          unaff_RSI[3] = uVar41;
          unaff_RSI = unaff_RSI + 4;
          lVar40 = lVar40 + 4;
        } while (param_1 - uVar46 != (int)lVar40);
      }
      goto LAB_00da3ec1;
    }
    break;
  case 6:
    if (0 < (int)param_1) {
      puVar51 = (ushort *)((longlong)unaff_RDI + (longlong)(int)param_1);
      puVar1 = unaff_RSI + (int)param_1;
      param_1 = 0;
      puVar50 = unaff_RSI;
      do {
        bVar39 = (byte)*unaff_RDI;
        uVar38 = (ulonglong)bVar39;
        bVar37 = (&DAT_023def80)[uVar38];
        uVar47 = (ulonglong)((int)(char)bVar37 & 0xffff);
        if (puVar51 <= (ushort *)((longlong)unaff_RDI + uVar47)) {
          return 0;
        }
        if (3 < bVar37) {
          return 0;
        }
        lVar40 = uVar47 + 1;
        switch(bVar37) {
        case 0:
          goto switchD_00da3bf4_caseD_0;
        case 3:
          bVar5 = (byte)*(ushort *)((longlong)unaff_RDI + uVar47);
          if (-1 < (char)bVar5) {
            return 0;
          }
          lVar40 = 3;
          if (0xbf < bVar5) {
            return 0;
          }
        case 2:
          bVar5 = *(byte *)((longlong)unaff_RDI + lVar40 + -1);
          if (-1 < (char)bVar5) {
            return 0;
          }
          if (0xbf < bVar5) {
            return 0;
          }
          lVar40 = lVar40 + -1;
        }
        bVar5 = *(byte *)(lVar40 + -1 + (longlong)unaff_RDI);
        if (0xbf < bVar5) {
          return 0;
        }
        if (bVar39 == 0xf4) {
          if (0x8f < bVar5) {
            return 0;
          }
        }
        else if (bVar39 == 0xf0) {
          if (bVar5 < 0x90) {
            return 0;
          }
        }
        else if (bVar39 == 0xe0) {
          if (bVar5 < 0xa0) {
            return 0;
          }
        }
        else {
          if (-1 < (char)bVar5) {
            return 0;
          }
switchD_00da3bf4_caseD_0:
          if (0xf4 < bVar39) {
            return 0;
          }
          if ((char)bVar39 < -0x3e) {
            return 0;
          }
        }
        lVar44 = 0;
        lVar40 = 0;
        lVar48 = 0;
        switch(bVar37) {
        case 3:
          lVar44 = uVar38 << 6;
          uVar38 = (ulonglong)*(byte *)((longlong)unaff_RDI + 1);
          unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
        case 2:
          lVar40 = (uVar38 + lVar44) * 0x40;
          uVar38 = (ulonglong)*(byte *)((longlong)unaff_RDI + 1);
          unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
        case 1:
          lVar48 = (uVar38 + lVar40) * 0x40;
          uVar38 = (ulonglong)*(byte *)((longlong)unaff_RDI + 1);
          unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
        case 0:
          lVar48 = uVar38 + lVar48;
          unaff_RDI = (ushort *)((longlong)unaff_RDI + 1);
          if (puVar1 <= puVar50) {
            return 0;
          }
          break;
        default:
          lVar48 = 0;
          if (puVar1 <= puVar50) {
            return 0;
          }
        }
        puVar45 = (undefined *)(lVar48 - *(longlong *)(&DAT_023df080 + uVar47 * 8));
        if (puVar45 < (undefined *)0x10000) {
          *puVar50 = (ushort)puVar45;
          unaff_RSI = puVar50 + 1;
          iVar42 = 1;
        }
        else {
          unaff_RSI = puVar50 + 1;
          if (puVar45 < &UNK_00110000) {
            if (puVar1 <= unaff_RSI) {
              return 0;
            }
            *puVar50 = (short)((int)puVar45 + 0x3ff0000U >> 10) + 0xd800;
            puVar50[1] = (ushort)puVar45 & 0x3ff | 0xdc00;
            unaff_RSI = puVar50 + 2;
            iVar42 = 2;
          }
          else {
            *puVar50 = 0xfffd;
            iVar42 = 1;
          }
        }
        param_1 = param_1 + iVar42;
        puVar50 = unaff_RSI;
      } while (unaff_RDI < puVar51);
      goto LAB_00da3ec1;
    }
    break;
  case 7:
    uVar46 = FUN_00d8c0a0();
    if (uVar46 < 5) {
      if (0 < (int)param_1) {
        pbVar36 = *(byte **)(&DAT_02579910 + (longlong)(int)uVar46 * 8);
        uVar46 = param_1;
        param_1 = 0;
        do {
          bVar39 = (byte)*unaff_RDI;
          puVar51 = (ushort *)((longlong)unaff_RDI + 1);
          uVar49 = uVar46 - 1;
          if (bVar39 == 0x25) {
            bVar5 = *(byte *)((longlong)unaff_RDI + 1);
            bVar4 = (byte)unaff_RDI[1];
            bVar37 = bVar5 - 0x30;
            if (bVar37 < 10) {
LAB_00da3f3d:
              bVar34 = bVar4 - 0x30;
              if (9 < bVar34) {
                bVar39 = 0x25;
                if ((0x25 < (byte)(bVar4 + 0xbf)) ||
                   ((0x3f0000003fU >> ((ulonglong)(byte)(bVar4 + 0xbf) & 0x3f) & 1) == 0))
                goto LAB_00da3ee0;
              }
              if ((9 < bVar37) && (bVar37 = bVar5 - 0x37, 5 < (byte)((bVar5 & 0xdf) + 0xbf))) {
                bVar37 = 0;
              }
              if ((9 < bVar34) && (bVar34 = bVar4 - 0x37, 5 < (byte)((bVar4 & 0xdf) + 0xbf))) {
                bVar34 = 0;
              }
              bVar39 = bVar34 | bVar37 << 4;
              puVar51 = (ushort *)((longlong)unaff_RDI + 3);
              uVar49 = uVar46 - 3;
              goto LAB_00da3fc6;
            }
            bVar39 = 0x25;
            if (((byte)(bVar5 + 0xbf) < 0x26) &&
               ((0x3f0000003fU >> ((ulonglong)(byte)(bVar5 + 0xbf) & 0x3f) & 1) != 0))
            goto LAB_00da3f3d;
LAB_00da3ee0:
            uVar46 = uVar49;
            uVar41 = (ushort)bVar39;
          }
          else {
LAB_00da3fc6:
            uVar46 = uVar49;
            uVar49 = uVar46;
            if ((byte)(bVar39 - 0x20) < 0x5f) goto LAB_00da3ee0;
            uVar41 = 0xfffd;
            bVar37 = *pbVar36;
            pbVar6 = pbVar36;
            while (bVar37 != 0) {
              if (bVar37 == bVar39) {
                uVar41 = *(ushort *)(pbVar6 + 2);
                break;
              }
              bVar37 = pbVar6[4];
              pbVar6 = pbVar6 + 4;
            }
          }
          param_1 = param_1 + 1;
          *unaff_RSI = uVar41;
          unaff_RSI = unaff_RSI + 1;
          unaff_RDI = puVar51;
        } while (0 < (int)uVar46);
        goto LAB_00da3ec1;
      }
    }
    else if (0 < (int)param_1) {
      uVar46 = param_1;
      param_1 = 0;
      do {
        bVar39 = (byte)*unaff_RDI;
        puVar51 = (ushort *)((longlong)unaff_RDI + 1);
        uVar49 = uVar46 - 1;
        if (bVar39 == 0x25) {
          bVar5 = *(byte *)((longlong)unaff_RDI + 1);
          bVar4 = (byte)unaff_RDI[1];
          bVar37 = bVar5 - 0x30;
          if (9 < bVar37) {
            bVar39 = 0x25;
            if ((0x25 < (byte)(bVar5 + 0xbf)) ||
               ((0x3f0000003fU >> ((ulonglong)(byte)(bVar5 + 0xbf) & 0x3f) & 1) == 0))
            goto LAB_00da3ea4;
          }
          bVar34 = bVar4 - 0x30;
          if (9 < bVar34) {
            bVar39 = 0x25;
            if ((0x25 < (byte)(bVar4 + 0xbf)) ||
               ((0x3f0000003fU >> ((ulonglong)(byte)(bVar4 + 0xbf) & 0x3f) & 1) == 0))
            goto LAB_00da3ea4;
          }
          if ((9 < bVar37) && (bVar37 = bVar5 - 0x37, 5 < (byte)((bVar5 & 0xdf) + 0xbf))) {
            bVar37 = 0;
          }
          if ((9 < bVar34) && (bVar34 = bVar4 - 0x37, 5 < (byte)((bVar4 & 0xdf) + 0xbf))) {
            bVar34 = 0;
          }
          bVar39 = bVar34 | bVar37 << 4;
          puVar51 = (ushort *)((longlong)unaff_RDI + 3);
          uVar49 = uVar46 - 3;
        }
LAB_00da3ea4:
        uVar46 = uVar49;
        uVar41 = 0xfffd;
        if ((byte)(bVar39 - 0x20) < 0x5f) {
          uVar41 = (ushort)bVar39;
        }
        *unaff_RSI = uVar41;
        unaff_RSI = unaff_RSI + 1;
        param_1 = param_1 + 1;
        unaff_RDI = puVar51;
      } while (0 < (int)uVar46);
      goto LAB_00da3ec1;
    }
  }
  param_1 = 0;
LAB_00da3ec1:
  *unaff_RSI = 0;
  return param_1;
switchD_00da3987_caseD_0:
  goto joined_r0x00da39a4;
}


