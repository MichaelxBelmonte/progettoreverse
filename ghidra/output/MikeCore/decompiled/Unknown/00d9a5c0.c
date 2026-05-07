// Function: FUN_00d9a5c0
// Address: 00d9a5c0
// Size: 877 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00d9a5c0(void)

{
  short sVar1;
  short *psVar2;
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
  uint uVar17;
  undefined8 *puVar18;
  short *psVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  short sVar23;
  longlong unaff_RSI;
  longlong lVar24;
  undefined8 *unaff_RDI;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ushort uVar30;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  ushort uVar40;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  uVar17 = *(uint *)(unaff_RSI + 0x20);
  if (uVar17 == 0xffffffff) {
    if (*(longlong *)(unaff_RSI + 0x10) != 0) {
      uVar17 = FUN_00e7dde0();
      goto joined_r0x00d9a603;
    }
  }
  else {
joined_r0x00d9a603:
    if (uVar17 != 0) {
      uVar26 = (ulonglong)uVar17;
      puVar18 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar18 = &DAT_025795a8;
      FUN_00d500e0();
      psVar19 = (short *)FUN_00e83010();
      if (*(int *)(unaff_RSI + 0x20) == -1) {
        FUN_00d931c0();
      }
      psVar2 = *(short **)(unaff_RSI + 0x18);
      sVar1 = *psVar2;
      sVar23 = sVar1 + -0x20;
      if (0x19 < (ushort)(sVar1 - 0x61U)) {
        sVar23 = sVar1;
      }
      *psVar19 = sVar23;
      sVar16 = _UNK_023de28e;
      sVar15 = _UNK_023de28c;
      sVar14 = _UNK_023de28a;
      sVar13 = _UNK_023de288;
      sVar12 = _UNK_023de286;
      sVar11 = _UNK_023de284;
      sVar10 = _UNK_023de282;
      sVar9 = _DAT_023de280;
      uVar38 = _UNK_023de27e;
      uVar37 = _UNK_023de27c;
      uVar36 = _UNK_023de27a;
      uVar35 = _UNK_023de278;
      uVar34 = _UNK_023de276;
      uVar33 = _UNK_023de274;
      uVar32 = _UNK_023de272;
      uVar30 = _DAT_023de270;
      sVar8 = _UNK_023de26e;
      sVar7 = _UNK_023de26c;
      sVar6 = _UNK_023de26a;
      sVar5 = _UNK_023de268;
      sVar4 = _UNK_023de266;
      sVar3 = _UNK_023de264;
      sVar23 = _UNK_023de262;
      sVar1 = _DAT_023de260;
      if (1 < (int)uVar17) {
        if (*(int *)(unaff_RSI + 0x20) == -1) {
          lVar24 = 0;
          do {
            FUN_00d931c0();
            lVar25 = *(longlong *)(unaff_RSI + 0x18);
            do {
              sVar1 = *(short *)(lVar25 + 2 + lVar24 * 2);
              sVar23 = sVar1 + 0x20;
              if (0x19 < (ushort)(sVar1 - 0x41U)) {
                sVar23 = sVar1;
              }
              psVar19[lVar24 + 1] = sVar23;
              if (uVar26 - 2 == lVar24) goto LAB_00d9a8a8;
              lVar24 = lVar24 + 1;
            } while (*(int *)(unaff_RSI + 0x20) != -1);
          } while( true );
        }
        uVar21 = uVar26 - 1;
        uVar20 = 1;
        if ((7 < uVar21) && ((psVar2 + uVar26 <= psVar19 + 1 || (psVar19 + uVar26 <= psVar2 + 1))))
        {
          uVar20 = uVar21 & 0xfffffffffffffff8;
          uVar22 = (uVar20 - 8 >> 3) + 1;
          if (uVar20 - 8 == 0) {
            lVar24 = 1;
          }
          else {
            lVar25 = -(uVar22 & 0xfffffffffffffffe);
            lVar24 = 1;
            do {
              auVar39 = *(undefined1 (*) [16])(psVar2 + lVar24);
              uVar40 = auVar39._0_2_ + sVar1;
              uVar43 = auVar39._2_2_ + sVar23;
              uVar44 = auVar39._4_2_ + sVar3;
              uVar45 = auVar39._6_2_ + sVar4;
              uVar46 = auVar39._8_2_ + sVar5;
              uVar47 = auVar39._10_2_ + sVar6;
              uVar48 = auVar39._12_2_ + sVar7;
              uVar49 = auVar39._14_2_ + sVar8;
              auVar27._0_2_ =
                   -(ushort)((ushort)((uVar30 < uVar40) * uVar30 | (uVar30 >= uVar40) * uVar40) ==
                            uVar40);
              auVar27._2_2_ =
                   -(ushort)((ushort)((uVar32 < uVar43) * uVar32 | (uVar32 >= uVar43) * uVar43) ==
                            uVar43);
              auVar27._4_2_ =
                   -(ushort)((ushort)((uVar33 < uVar44) * uVar33 | (uVar33 >= uVar44) * uVar44) ==
                            uVar44);
              auVar27._6_2_ =
                   -(ushort)((ushort)((uVar34 < uVar45) * uVar34 | (uVar34 >= uVar45) * uVar45) ==
                            uVar45);
              auVar27._8_2_ =
                   -(ushort)((ushort)((uVar35 < uVar46) * uVar35 | (uVar35 >= uVar46) * uVar46) ==
                            uVar46);
              auVar27._10_2_ =
                   -(ushort)((ushort)((uVar36 < uVar47) * uVar36 | (uVar36 >= uVar47) * uVar47) ==
                            uVar47);
              auVar27._12_2_ =
                   -(ushort)((ushort)((uVar37 < uVar48) * uVar37 | (uVar37 >= uVar48) * uVar48) ==
                            uVar48);
              auVar27._14_2_ =
                   -(ushort)((ushort)((uVar38 < uVar49) * uVar38 | (uVar38 >= uVar49) * uVar49) ==
                            uVar49);
              auVar41._0_2_ = auVar39._0_2_ + sVar9;
              auVar41._2_2_ = auVar39._2_2_ + sVar10;
              auVar41._4_2_ = auVar39._4_2_ + sVar11;
              auVar41._6_2_ = auVar39._6_2_ + sVar12;
              auVar41._8_2_ = auVar39._8_2_ + sVar13;
              auVar41._10_2_ = auVar39._10_2_ + sVar14;
              auVar41._12_2_ = auVar39._12_2_ + sVar15;
              auVar41._14_2_ = auVar39._14_2_ + sVar16;
              auVar39 = pblendvb(auVar39,auVar41,auVar27);
              *(undefined1 (*) [16])(psVar19 + lVar24) = auVar39;
              auVar39 = *(undefined1 (*) [16])(psVar2 + lVar24 + 8);
              uVar40 = auVar39._0_2_ + sVar1;
              uVar43 = auVar39._2_2_ + sVar23;
              uVar44 = auVar39._4_2_ + sVar3;
              uVar45 = auVar39._6_2_ + sVar4;
              uVar46 = auVar39._8_2_ + sVar5;
              uVar47 = auVar39._10_2_ + sVar6;
              uVar48 = auVar39._12_2_ + sVar7;
              uVar49 = auVar39._14_2_ + sVar8;
              auVar28._0_2_ =
                   -(ushort)((ushort)((uVar30 < uVar40) * uVar30 | (uVar30 >= uVar40) * uVar40) ==
                            uVar40);
              auVar28._2_2_ =
                   -(ushort)((ushort)((uVar32 < uVar43) * uVar32 | (uVar32 >= uVar43) * uVar43) ==
                            uVar43);
              auVar28._4_2_ =
                   -(ushort)((ushort)((uVar33 < uVar44) * uVar33 | (uVar33 >= uVar44) * uVar44) ==
                            uVar44);
              auVar28._6_2_ =
                   -(ushort)((ushort)((uVar34 < uVar45) * uVar34 | (uVar34 >= uVar45) * uVar45) ==
                            uVar45);
              auVar28._8_2_ =
                   -(ushort)((ushort)((uVar35 < uVar46) * uVar35 | (uVar35 >= uVar46) * uVar46) ==
                            uVar46);
              auVar28._10_2_ =
                   -(ushort)((ushort)((uVar36 < uVar47) * uVar36 | (uVar36 >= uVar47) * uVar47) ==
                            uVar47);
              auVar28._12_2_ =
                   -(ushort)((ushort)((uVar37 < uVar48) * uVar37 | (uVar37 >= uVar48) * uVar48) ==
                            uVar48);
              auVar28._14_2_ =
                   -(ushort)((ushort)((uVar38 < uVar49) * uVar38 | (uVar38 >= uVar49) * uVar49) ==
                            uVar49);
              auVar42._0_2_ = auVar39._0_2_ + sVar9;
              auVar42._2_2_ = auVar39._2_2_ + sVar10;
              auVar42._4_2_ = auVar39._4_2_ + sVar11;
              auVar42._6_2_ = auVar39._6_2_ + sVar12;
              auVar42._8_2_ = auVar39._8_2_ + sVar13;
              auVar42._10_2_ = auVar39._10_2_ + sVar14;
              auVar42._12_2_ = auVar39._12_2_ + sVar15;
              auVar42._14_2_ = auVar39._14_2_ + sVar16;
              auVar39 = pblendvb(auVar39,auVar42,auVar28);
              *(undefined1 (*) [16])(psVar19 + lVar24 + 8) = auVar39;
              lVar24 = lVar24 + 0x10;
              lVar25 = lVar25 + 2;
            } while (lVar25 != 0);
          }
          if ((uVar22 & 1) != 0) {
            auVar39 = *(undefined1 (*) [16])(psVar2 + lVar24);
            uVar30 = _DAT_023de260 + auVar39._0_2_;
            uVar32 = _UNK_023de262 + auVar39._2_2_;
            uVar33 = _UNK_023de264 + auVar39._4_2_;
            uVar34 = _UNK_023de266 + auVar39._6_2_;
            uVar35 = _UNK_023de268 + auVar39._8_2_;
            uVar36 = _UNK_023de26a + auVar39._10_2_;
            uVar37 = _UNK_023de26c + auVar39._12_2_;
            uVar38 = _UNK_023de26e + auVar39._14_2_;
            auVar29._0_2_ =
                 -(ushort)((ushort)((uVar30 < _DAT_023de270) * uVar30 |
                                   (uVar30 >= _DAT_023de270) * _DAT_023de270) == uVar30);
            auVar29._2_2_ =
                 -(ushort)((ushort)((uVar32 < _UNK_023de272) * uVar32 |
                                   (uVar32 >= _UNK_023de272) * _UNK_023de272) == uVar32);
            auVar29._4_2_ =
                 -(ushort)((ushort)((uVar33 < _UNK_023de274) * uVar33 |
                                   (uVar33 >= _UNK_023de274) * _UNK_023de274) == uVar33);
            auVar29._6_2_ =
                 -(ushort)((ushort)((uVar34 < _UNK_023de276) * uVar34 |
                                   (uVar34 >= _UNK_023de276) * _UNK_023de276) == uVar34);
            auVar29._8_2_ =
                 -(ushort)((ushort)((uVar35 < _UNK_023de278) * uVar35 |
                                   (uVar35 >= _UNK_023de278) * _UNK_023de278) == uVar35);
            auVar29._10_2_ =
                 -(ushort)((ushort)((uVar36 < _UNK_023de27a) * uVar36 |
                                   (uVar36 >= _UNK_023de27a) * _UNK_023de27a) == uVar36);
            auVar29._12_2_ =
                 -(ushort)((ushort)((uVar37 < _UNK_023de27c) * uVar37 |
                                   (uVar37 >= _UNK_023de27c) * _UNK_023de27c) == uVar37);
            auVar29._14_2_ =
                 -(ushort)((ushort)((uVar38 < _UNK_023de27e) * uVar38 |
                                   (uVar38 >= _UNK_023de27e) * _UNK_023de27e) == uVar38);
            auVar31._0_2_ = _DAT_023de280 + auVar39._0_2_;
            auVar31._2_2_ = _UNK_023de282 + auVar39._2_2_;
            auVar31._4_2_ = _UNK_023de284 + auVar39._4_2_;
            auVar31._6_2_ = _UNK_023de286 + auVar39._6_2_;
            auVar31._8_2_ = _UNK_023de288 + auVar39._8_2_;
            auVar31._10_2_ = _UNK_023de28a + auVar39._10_2_;
            auVar31._12_2_ = _UNK_023de28c + auVar39._12_2_;
            auVar31._14_2_ = _UNK_023de28e + auVar39._14_2_;
            auVar39 = pblendvb(auVar39,auVar31,auVar29);
            *(undefined1 (*) [16])(psVar19 + lVar24) = auVar39;
          }
          if (uVar21 == uVar20) goto LAB_00d9a8a8;
          uVar20 = uVar20 | 1;
        }
        uVar21 = ~uVar20;
        if ((uVar17 & 1) == 0) {
          sVar1 = psVar2[uVar20];
          sVar23 = sVar1 + 0x20;
          if (0x19 < (ushort)(sVar1 - 0x41U)) {
            sVar23 = sVar1;
          }
          psVar19[uVar20] = sVar23;
          uVar20 = uVar20 + 1;
        }
        if (uVar21 + uVar26 != 0) {
          do {
            sVar1 = psVar2[uVar20];
            sVar23 = sVar1 + 0x20;
            if (0x19 < (ushort)(sVar1 - 0x41U)) {
              sVar23 = sVar1;
            }
            psVar19[uVar20] = sVar23;
            sVar1 = psVar2[uVar20 + 1];
            sVar23 = sVar1 + 0x20;
            if (0x19 < (ushort)(sVar1 - 0x41U)) {
              sVar23 = sVar1;
            }
            psVar19[uVar20 + 1] = sVar23;
            uVar20 = uVar20 + 2;
          } while (uVar26 != uVar20);
        }
      }
LAB_00d9a8a8:
      psVar19[(int)uVar17] = 0;
      if (((undefined8 *)puVar18[2] != (undefined8 *)0x0) &&
         ((undefined8 *)puVar18[2] != puVar18 + 5)) {
        FUN_00e83070();
      }
      puVar18[2] = 0;
      if (*(int *)(puVar18 + 4) != -1) {
        FUN_00e83070();
        puVar18[3] = 0;
        *(undefined4 *)(puVar18 + 4) = 0xffffffff;
      }
      puVar18[3] = psVar19;
      *(uint *)(puVar18 + 4) = uVar17;
      *(byte *)((longlong)puVar18 + 0x24) = *(byte *)((longlong)puVar18 + 0x24) & 0xfe;
      goto LAB_00d9a913;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar18 = DAT_028a8368;
  if (DAT_028a8368 == (undefined8 *)0x0) {
    puVar18 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
LAB_00d9a913:
  *unaff_RDI = puVar18;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


