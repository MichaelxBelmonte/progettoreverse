// Function: FUN_00d99d60
// Address: 00d99d60
// Size: 922 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d99d60(void)

{
  short sVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  char cVar17;
  uint uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  char cVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong unaff_RSI;
  short sVar26;
  undefined8 *unaff_RDI;
  longlong lVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ushort uVar32;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined1 auVar33 [16];
  undefined1 auVar41 [16];
  ushort uVar42;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  uVar18 = *(uint *)(unaff_RSI + 0x20);
  if (uVar18 == 0xffffffff) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      uVar18 = FUN_00e7dde0();
      goto joined_r0x00d99da3;
    }
  }
  else {
joined_r0x00d99da3:
    if (uVar18 != 0) {
      if (*(int *)(unaff_RSI + 0x20) == -1) {
        lVar24 = FUN_00e83010();
        uVar28 = extraout_XMM0_Qa;
        if (0 < (int)uVar18) {
          uVar20 = 0;
          do {
            cVar17 = FUN_00d8ca70();
            cVar21 = cVar17 + -0x20;
            if (0x19 < (ushort)((short)cVar17 - 0x61U)) {
              cVar21 = cVar17;
            }
            *(char *)(lVar24 + uVar20) = cVar21;
            uVar20 = uVar20 + 1;
            uVar28 = extraout_XMM0_Qa_00;
          } while (uVar18 != uVar20);
        }
        *(undefined1 *)(lVar24 + (int)uVar18) = 0;
        FUN_00d92e10(uVar28,0);
        return unaff_RDI;
      }
      puVar19 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar19 = &DAT_025795a8;
      FUN_00d500e0();
      uVar20 = FUN_00e83010();
      sVar16 = _UNK_023de2ae;
      sVar15 = _UNK_023de2ac;
      sVar14 = _UNK_023de2aa;
      sVar13 = _UNK_023de2a8;
      sVar12 = _UNK_023de2a6;
      sVar11 = _UNK_023de2a4;
      sVar10 = _UNK_023de2a2;
      sVar9 = _DAT_023de2a0;
      sVar8 = _UNK_023de29e;
      sVar7 = _UNK_023de29c;
      sVar6 = _UNK_023de29a;
      sVar5 = _UNK_023de298;
      sVar4 = _UNK_023de296;
      sVar3 = _UNK_023de294;
      sVar26 = _UNK_023de292;
      sVar1 = _DAT_023de290;
      uVar40 = _UNK_023de27e;
      uVar39 = _UNK_023de27c;
      uVar38 = _UNK_023de27a;
      uVar37 = _UNK_023de278;
      uVar36 = _UNK_023de276;
      uVar35 = _UNK_023de274;
      uVar34 = _UNK_023de272;
      uVar32 = _DAT_023de270;
      if (0 < (int)uVar18) {
        uVar25 = (ulonglong)uVar18;
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          lVar24 = 0;
          do {
            FUN_00d931c0();
            do {
              sVar1 = *(short *)(*(longlong *)(unaff_RSI + 0x18) + lVar24 * 2);
              sVar26 = sVar1 + -0x20;
              if (0x19 < (ushort)(sVar1 - 0x61U)) {
                sVar26 = sVar1;
              }
              *(short *)(uVar20 + lVar24 * 2) = sVar26;
              if (uVar25 - 1 == lVar24) goto LAB_00d99f96;
              lVar24 = lVar24 + 1;
            } while (*(int *)(unaff_RSI + 0x20) != -1);
          } while( true );
        }
        uVar2 = *(ulonglong *)(unaff_RSI + 0x18);
        if ((uVar18 < 8) || ((uVar20 < uVar2 + uVar25 * 2 && (uVar2 < uVar25 * 2 + uVar20)))) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ulonglong)(uVar18 & 0xfffffff8);
          uVar23 = (uVar22 - 8 >> 3) + 1;
          if (uVar22 - 8 == 0) {
            lVar24 = 0;
          }
          else {
            lVar27 = -(uVar23 & 0xfffffffffffffffe);
            lVar24 = 0;
            do {
              auVar41 = *(undefined1 (*) [16])(uVar2 + lVar24 * 2);
              uVar42 = auVar41._0_2_ + sVar1;
              uVar45 = auVar41._2_2_ + sVar26;
              uVar46 = auVar41._4_2_ + sVar3;
              uVar47 = auVar41._6_2_ + sVar4;
              uVar48 = auVar41._8_2_ + sVar5;
              uVar49 = auVar41._10_2_ + sVar6;
              uVar50 = auVar41._12_2_ + sVar7;
              uVar51 = auVar41._14_2_ + sVar8;
              auVar29._0_2_ =
                   -(ushort)((ushort)((uVar32 < uVar42) * uVar32 | (uVar32 >= uVar42) * uVar42) ==
                            uVar42);
              auVar29._2_2_ =
                   -(ushort)((ushort)((uVar34 < uVar45) * uVar34 | (uVar34 >= uVar45) * uVar45) ==
                            uVar45);
              auVar29._4_2_ =
                   -(ushort)((ushort)((uVar35 < uVar46) * uVar35 | (uVar35 >= uVar46) * uVar46) ==
                            uVar46);
              auVar29._6_2_ =
                   -(ushort)((ushort)((uVar36 < uVar47) * uVar36 | (uVar36 >= uVar47) * uVar47) ==
                            uVar47);
              auVar29._8_2_ =
                   -(ushort)((ushort)((uVar37 < uVar48) * uVar37 | (uVar37 >= uVar48) * uVar48) ==
                            uVar48);
              auVar29._10_2_ =
                   -(ushort)((ushort)((uVar38 < uVar49) * uVar38 | (uVar38 >= uVar49) * uVar49) ==
                            uVar49);
              auVar29._12_2_ =
                   -(ushort)((ushort)((uVar39 < uVar50) * uVar39 | (uVar39 >= uVar50) * uVar50) ==
                            uVar50);
              auVar29._14_2_ =
                   -(ushort)((ushort)((uVar40 < uVar51) * uVar40 | (uVar40 >= uVar51) * uVar51) ==
                            uVar51);
              auVar43._0_2_ = auVar41._0_2_ + sVar9;
              auVar43._2_2_ = auVar41._2_2_ + sVar10;
              auVar43._4_2_ = auVar41._4_2_ + sVar11;
              auVar43._6_2_ = auVar41._6_2_ + sVar12;
              auVar43._8_2_ = auVar41._8_2_ + sVar13;
              auVar43._10_2_ = auVar41._10_2_ + sVar14;
              auVar43._12_2_ = auVar41._12_2_ + sVar15;
              auVar43._14_2_ = auVar41._14_2_ + sVar16;
              auVar41 = pblendvb(auVar41,auVar43,auVar29);
              *(undefined1 (*) [16])(uVar20 + lVar24 * 2) = auVar41;
              auVar41 = *(undefined1 (*) [16])(uVar2 + 0x10 + lVar24 * 2);
              uVar42 = auVar41._0_2_ + sVar1;
              uVar45 = auVar41._2_2_ + sVar26;
              uVar46 = auVar41._4_2_ + sVar3;
              uVar47 = auVar41._6_2_ + sVar4;
              uVar48 = auVar41._8_2_ + sVar5;
              uVar49 = auVar41._10_2_ + sVar6;
              uVar50 = auVar41._12_2_ + sVar7;
              uVar51 = auVar41._14_2_ + sVar8;
              auVar30._0_2_ =
                   -(ushort)((ushort)((uVar32 < uVar42) * uVar32 | (uVar32 >= uVar42) * uVar42) ==
                            uVar42);
              auVar30._2_2_ =
                   -(ushort)((ushort)((uVar34 < uVar45) * uVar34 | (uVar34 >= uVar45) * uVar45) ==
                            uVar45);
              auVar30._4_2_ =
                   -(ushort)((ushort)((uVar35 < uVar46) * uVar35 | (uVar35 >= uVar46) * uVar46) ==
                            uVar46);
              auVar30._6_2_ =
                   -(ushort)((ushort)((uVar36 < uVar47) * uVar36 | (uVar36 >= uVar47) * uVar47) ==
                            uVar47);
              auVar30._8_2_ =
                   -(ushort)((ushort)((uVar37 < uVar48) * uVar37 | (uVar37 >= uVar48) * uVar48) ==
                            uVar48);
              auVar30._10_2_ =
                   -(ushort)((ushort)((uVar38 < uVar49) * uVar38 | (uVar38 >= uVar49) * uVar49) ==
                            uVar49);
              auVar30._12_2_ =
                   -(ushort)((ushort)((uVar39 < uVar50) * uVar39 | (uVar39 >= uVar50) * uVar50) ==
                            uVar50);
              auVar30._14_2_ =
                   -(ushort)((ushort)((uVar40 < uVar51) * uVar40 | (uVar40 >= uVar51) * uVar51) ==
                            uVar51);
              auVar44._0_2_ = auVar41._0_2_ + sVar9;
              auVar44._2_2_ = auVar41._2_2_ + sVar10;
              auVar44._4_2_ = auVar41._4_2_ + sVar11;
              auVar44._6_2_ = auVar41._6_2_ + sVar12;
              auVar44._8_2_ = auVar41._8_2_ + sVar13;
              auVar44._10_2_ = auVar41._10_2_ + sVar14;
              auVar44._12_2_ = auVar41._12_2_ + sVar15;
              auVar44._14_2_ = auVar41._14_2_ + sVar16;
              auVar41 = pblendvb(auVar41,auVar44,auVar30);
              *(undefined1 (*) [16])(uVar20 + 0x10 + lVar24 * 2) = auVar41;
              lVar24 = lVar24 + 0x10;
              lVar27 = lVar27 + 2;
            } while (lVar27 != 0);
          }
          if ((uVar23 & 1) != 0) {
            auVar41 = *(undefined1 (*) [16])(uVar2 + lVar24 * 2);
            uVar32 = _DAT_023de290 + auVar41._0_2_;
            uVar34 = _UNK_023de292 + auVar41._2_2_;
            uVar35 = _UNK_023de294 + auVar41._4_2_;
            uVar36 = _UNK_023de296 + auVar41._6_2_;
            uVar37 = _UNK_023de298 + auVar41._8_2_;
            uVar38 = _UNK_023de29a + auVar41._10_2_;
            uVar39 = _UNK_023de29c + auVar41._12_2_;
            uVar40 = _UNK_023de29e + auVar41._14_2_;
            auVar31._0_2_ =
                 -(ushort)((ushort)((uVar32 < _DAT_023de270) * uVar32 |
                                   (uVar32 >= _DAT_023de270) * _DAT_023de270) == uVar32);
            auVar31._2_2_ =
                 -(ushort)((ushort)((uVar34 < _UNK_023de272) * uVar34 |
                                   (uVar34 >= _UNK_023de272) * _UNK_023de272) == uVar34);
            auVar31._4_2_ =
                 -(ushort)((ushort)((uVar35 < _UNK_023de274) * uVar35 |
                                   (uVar35 >= _UNK_023de274) * _UNK_023de274) == uVar35);
            auVar31._6_2_ =
                 -(ushort)((ushort)((uVar36 < _UNK_023de276) * uVar36 |
                                   (uVar36 >= _UNK_023de276) * _UNK_023de276) == uVar36);
            auVar31._8_2_ =
                 -(ushort)((ushort)((uVar37 < _UNK_023de278) * uVar37 |
                                   (uVar37 >= _UNK_023de278) * _UNK_023de278) == uVar37);
            auVar31._10_2_ =
                 -(ushort)((ushort)((uVar38 < _UNK_023de27a) * uVar38 |
                                   (uVar38 >= _UNK_023de27a) * _UNK_023de27a) == uVar38);
            auVar31._12_2_ =
                 -(ushort)((ushort)((uVar39 < _UNK_023de27c) * uVar39 |
                                   (uVar39 >= _UNK_023de27c) * _UNK_023de27c) == uVar39);
            auVar31._14_2_ =
                 -(ushort)((ushort)((uVar40 < _UNK_023de27e) * uVar40 |
                                   (uVar40 >= _UNK_023de27e) * _UNK_023de27e) == uVar40);
            auVar33._0_2_ = _DAT_023de2a0 + auVar41._0_2_;
            auVar33._2_2_ = _UNK_023de2a2 + auVar41._2_2_;
            auVar33._4_2_ = _UNK_023de2a4 + auVar41._4_2_;
            auVar33._6_2_ = _UNK_023de2a6 + auVar41._6_2_;
            auVar33._8_2_ = _UNK_023de2a8 + auVar41._8_2_;
            auVar33._10_2_ = _UNK_023de2aa + auVar41._10_2_;
            auVar33._12_2_ = _UNK_023de2ac + auVar41._12_2_;
            auVar33._14_2_ = _UNK_023de2ae + auVar41._14_2_;
            auVar41 = pblendvb(auVar41,auVar33,auVar31);
            *(undefined1 (*) [16])(uVar20 + lVar24 * 2) = auVar41;
          }
          if (uVar22 == uVar25) goto LAB_00d99f96;
        }
        uVar23 = ~uVar22;
        if ((uVar18 & 1) != 0) {
          sVar1 = *(short *)(uVar2 + uVar22 * 2);
          sVar26 = sVar1 + -0x20;
          if (0x19 < (ushort)(sVar1 - 0x61U)) {
            sVar26 = sVar1;
          }
          *(short *)(uVar20 + uVar22 * 2) = sVar26;
          uVar22 = uVar22 | 1;
        }
        if (uVar23 + uVar25 != 0) {
          do {
            sVar1 = *(short *)(uVar2 + uVar22 * 2);
            sVar26 = sVar1 + -0x20;
            if (0x19 < (ushort)(sVar1 - 0x61U)) {
              sVar26 = sVar1;
            }
            *(short *)(uVar20 + uVar22 * 2) = sVar26;
            sVar1 = *(short *)(uVar2 + 2 + uVar22 * 2);
            sVar26 = sVar1 + -0x20;
            if (0x19 < (ushort)(sVar1 - 0x61U)) {
              sVar26 = sVar1;
            }
            *(short *)(uVar20 + 2 + uVar22 * 2) = sVar26;
            uVar22 = uVar22 + 2;
          } while (uVar25 != uVar22);
        }
      }
LAB_00d99f96:
      *(undefined2 *)(uVar20 + (longlong)(int)uVar18 * 2) = 0;
      if (((undefined8 *)puVar19[2] != (undefined8 *)0x0) &&
         ((undefined8 *)puVar19[2] != puVar19 + 5)) {
        FUN_00e83070();
      }
      puVar19[2] = 0;
      if (*(int *)(puVar19 + 4) != -1) {
        FUN_00e83070();
        puVar19[3] = 0;
        *(undefined4 *)(puVar19 + 4) = 0xffffffff;
      }
      puVar19[3] = uVar20;
      *(uint *)(puVar19 + 4) = uVar18;
      *(byte *)((longlong)puVar19 + 0x24) = *(byte *)((longlong)puVar19 + 0x24) & 0xfe;
      goto LAB_00d99ff5;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar19 = DAT_028a8368;
  if (DAT_028a8368 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
LAB_00d99ff5:
  *unaff_RDI = puVar19;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


