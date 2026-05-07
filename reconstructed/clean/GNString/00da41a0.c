// Function: FUN_00da41a0
// Address: 00da41a0
// Size: 1663 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint FUN_00da41a0(uint param_1,uint32_t param_2)

{
  ushort *puVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  char *pcVar10;
  byte *pbVar11;
  char cVar12;
  uint uVar13;
  uint64_t uVar14;
  byte *pbVar15;
  byte bVar16;
  int64_t lVar17;
  ushort *puVar18;
  byte bVar19;
  int iVar20;
  ushort *arg1;
  uint64_t uVar21;
  byte *pbVar22;
  ushort *this_ptr;
  int64_t lVar23;
  uint uVar24;
  uint64_t uVar25;
  char *pcVar26;
  bool bVar27;
  uint8_t auVar28 [16];
  ushort uVar29;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  ushort uVar35;
  ushort uVar36;
  ushort uVar37;
  ushort uVar38;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  ushort uVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  ushort uVar59;
  
  auVar41 = g_023def70;
  auVar40 = g_023def60;
  uVar49 = _UNK_023def5e;
  uVar48 = _UNK_023def5c;
  uVar47 = _UNK_023def5a;
  uVar46 = _UNK_023def58;
  uVar45 = _UNK_023def56;
  uVar44 = _UNK_023def54;
  uVar43 = _UNK_023def52;
  uVar42 = g_023def50;
  sVar9 = _UNK_023de2ae;
  sVar8 = _UNK_023de2ac;
  sVar7 = _UNK_023de2aa;
  sVar6 = _UNK_023de2a8;
  sVar5 = _UNK_023de2a6;
  sVar4 = _UNK_023de2a4;
  sVar3 = _UNK_023de2a2;
  sVar2 = g_023de2a0;
  pcVar10 = &g_02782030;
  switch(param_2) {
  case 0:
    goto switchD_00da41d4_caseD_0;
  case 1:
    pcVar10 = &g_027822b0;
    break;
  case 2:
    pcVar10 = (char *)&g_02782520;
    break;
  case 3:
    pcVar10 = &g_027827b0;
    goto switchD_00da41d4_caseD_0;
  case 4:
    pcVar10 = &g_02782a30;
    break;
  default:
    if (0 < (int)param_1) {
      uVar25 = 0;
      if ((0xe < param_1 - 1) &&
         ((uVar14 = (uint64_t)(param_1 - 1) + 1, this_ptr + uVar14 <= arg1 ||
          ((ushort *)((int64_t)arg1 + uVar14) <= this_ptr)))) {
        uVar25 = uVar14 & 0xfffffffffffffff0;
        uVar21 = (uVar25 - 0x10 >> 4) + 1;
        if (uVar25 - 0x10 == 0) {
          lVar17 = 0;
        }
        else {
          lVar23 = -(uVar21 & 0xfffffffffffffffe);
          lVar17 = 0;
          do {
            auVar39 = *(uint8_t (*) [16])(this_ptr + lVar17);
            auVar51 = *(uint8_t (*) [16])(this_ptr + lVar17 + 8);
            uVar29 = auVar39._0_2_ + sVar2;
            uVar32 = auVar39._2_2_ + sVar3;
            uVar33 = auVar39._4_2_ + sVar4;
            uVar34 = auVar39._6_2_ + sVar5;
            uVar35 = auVar39._8_2_ + sVar6;
            uVar36 = auVar39._10_2_ + sVar7;
            uVar37 = auVar39._12_2_ + sVar8;
            uVar38 = auVar39._14_2_ + sVar9;
            uVar52 = auVar51._0_2_ + sVar2;
            uVar53 = auVar51._2_2_ + sVar3;
            uVar54 = auVar51._4_2_ + sVar4;
            uVar55 = auVar51._6_2_ + sVar5;
            uVar56 = auVar51._8_2_ + sVar6;
            uVar57 = auVar51._10_2_ + sVar7;
            uVar58 = auVar51._12_2_ + sVar8;
            uVar59 = auVar51._14_2_ + sVar9;
            auVar28._0_2_ =
                 -(ushort)((ushort)((uVar29 < uVar42) * uVar42 | (uVar29 >= uVar42) * uVar29) ==
                          uVar29);
            auVar28._2_2_ =
                 -(ushort)((ushort)((uVar32 < uVar43) * uVar43 | (uVar32 >= uVar43) * uVar32) ==
                          uVar32);
            auVar28._4_2_ =
                 -(ushort)((ushort)((uVar33 < uVar44) * uVar44 | (uVar33 >= uVar44) * uVar33) ==
                          uVar33);
            auVar28._6_2_ =
                 -(ushort)((ushort)((uVar34 < uVar45) * uVar45 | (uVar34 >= uVar45) * uVar34) ==
                          uVar34);
            auVar28._8_2_ =
                 -(ushort)((ushort)((uVar35 < uVar46) * uVar46 | (uVar35 >= uVar46) * uVar35) ==
                          uVar35);
            auVar28._10_2_ =
                 -(ushort)((ushort)((uVar36 < uVar47) * uVar47 | (uVar36 >= uVar47) * uVar36) ==
                          uVar36);
            auVar28._12_2_ =
                 -(ushort)((ushort)((uVar37 < uVar48) * uVar48 | (uVar37 >= uVar48) * uVar37) ==
                          uVar37);
            auVar28._14_2_ =
                 -(ushort)((ushort)((uVar38 < uVar49) * uVar49 | (uVar38 >= uVar49) * uVar38) ==
                          uVar38);
            auVar28 = packsswb(auVar28,auVar28);
            auVar50._0_2_ =
                 -(ushort)((ushort)((uVar52 < uVar42) * uVar42 | (uVar52 >= uVar42) * uVar52) ==
                          uVar52);
            auVar50._2_2_ =
                 -(ushort)((ushort)((uVar53 < uVar43) * uVar43 | (uVar53 >= uVar43) * uVar53) ==
                          uVar53);
            auVar50._4_2_ =
                 -(ushort)((ushort)((uVar54 < uVar44) * uVar44 | (uVar54 >= uVar44) * uVar54) ==
                          uVar54);
            auVar50._6_2_ =
                 -(ushort)((ushort)((uVar55 < uVar45) * uVar45 | (uVar55 >= uVar45) * uVar55) ==
                          uVar55);
            auVar50._8_2_ =
                 -(ushort)((ushort)((uVar56 < uVar46) * uVar46 | (uVar56 >= uVar46) * uVar56) ==
                          uVar56);
            auVar50._10_2_ =
                 -(ushort)((ushort)((uVar57 < uVar47) * uVar47 | (uVar57 >= uVar47) * uVar57) ==
                          uVar57);
            auVar50._12_2_ =
                 -(ushort)((ushort)((uVar58 < uVar48) * uVar48 | (uVar58 >= uVar48) * uVar58) ==
                          uVar58);
            auVar50._14_2_ =
                 -(ushort)((ushort)((uVar59 < uVar49) * uVar49 | (uVar59 >= uVar49) * uVar59) ==
                          uVar59);
            auVar30 = packsswb(auVar50,auVar50);
            auVar50 = pshufb(auVar39,auVar40);
            auVar39 = pshufb(auVar51,auVar40);
            auVar51 = pblendvb(auVar50,auVar41,auVar28);
            auVar39 = pblendvb(auVar39,auVar41,auVar30);
            *(int64_t *)((int64_t)arg1 + lVar17) = auVar51._0_8_;
            *(int64_t *)((char *)((int64_t)arg1 + lVar17) + 8) = auVar39._0_8_;
            auVar39 = *(uint8_t (*) [16])(this_ptr + lVar17 + 0x10);
            auVar51 = *(uint8_t (*) [16])(this_ptr + lVar17 + 0x18);
            uVar29 = auVar39._0_2_ + sVar2;
            uVar32 = auVar39._2_2_ + sVar3;
            uVar33 = auVar39._4_2_ + sVar4;
            uVar34 = auVar39._6_2_ + sVar5;
            uVar35 = auVar39._8_2_ + sVar6;
            uVar36 = auVar39._10_2_ + sVar7;
            uVar37 = auVar39._12_2_ + sVar8;
            uVar38 = auVar39._14_2_ + sVar9;
            uVar52 = auVar51._0_2_ + sVar2;
            uVar53 = auVar51._2_2_ + sVar3;
            uVar54 = auVar51._4_2_ + sVar4;
            uVar55 = auVar51._6_2_ + sVar5;
            uVar56 = auVar51._8_2_ + sVar6;
            uVar57 = auVar51._10_2_ + sVar7;
            uVar58 = auVar51._12_2_ + sVar8;
            uVar59 = auVar51._14_2_ + sVar9;
            auVar30._0_2_ =
                 -(ushort)((ushort)((uVar29 < uVar42) * uVar42 | (uVar29 >= uVar42) * uVar29) ==
                          uVar29);
            auVar30._2_2_ =
                 -(ushort)((ushort)((uVar32 < uVar43) * uVar43 | (uVar32 >= uVar43) * uVar32) ==
                          uVar32);
            auVar30._4_2_ =
                 -(ushort)((ushort)((uVar33 < uVar44) * uVar44 | (uVar33 >= uVar44) * uVar33) ==
                          uVar33);
            auVar30._6_2_ =
                 -(ushort)((ushort)((uVar34 < uVar45) * uVar45 | (uVar34 >= uVar45) * uVar34) ==
                          uVar34);
            auVar30._8_2_ =
                 -(ushort)((ushort)((uVar35 < uVar46) * uVar46 | (uVar35 >= uVar46) * uVar35) ==
                          uVar35);
            auVar30._10_2_ =
                 -(ushort)((ushort)((uVar36 < uVar47) * uVar47 | (uVar36 >= uVar47) * uVar36) ==
                          uVar36);
            auVar30._12_2_ =
                 -(ushort)((ushort)((uVar37 < uVar48) * uVar48 | (uVar37 >= uVar48) * uVar37) ==
                          uVar37);
            auVar30._14_2_ =
                 -(ushort)((ushort)((uVar38 < uVar49) * uVar49 | (uVar38 >= uVar49) * uVar38) ==
                          uVar38);
            auVar28 = packsswb(auVar30,auVar30);
            auVar31._0_2_ =
                 -(ushort)((ushort)((uVar52 < uVar42) * uVar42 | (uVar52 >= uVar42) * uVar52) ==
                          uVar52);
            auVar31._2_2_ =
                 -(ushort)((ushort)((uVar53 < uVar43) * uVar43 | (uVar53 >= uVar43) * uVar53) ==
                          uVar53);
            auVar31._4_2_ =
                 -(ushort)((ushort)((uVar54 < uVar44) * uVar44 | (uVar54 >= uVar44) * uVar54) ==
                          uVar54);
            auVar31._6_2_ =
                 -(ushort)((ushort)((uVar55 < uVar45) * uVar45 | (uVar55 >= uVar45) * uVar55) ==
                          uVar55);
            auVar31._8_2_ =
                 -(ushort)((ushort)((uVar56 < uVar46) * uVar46 | (uVar56 >= uVar46) * uVar56) ==
                          uVar56);
            auVar31._10_2_ =
                 -(ushort)((ushort)((uVar57 < uVar47) * uVar47 | (uVar57 >= uVar47) * uVar57) ==
                          uVar57);
            auVar31._12_2_ =
                 -(ushort)((ushort)((uVar58 < uVar48) * uVar48 | (uVar58 >= uVar48) * uVar58) ==
                          uVar58);
            auVar31._14_2_ =
                 -(ushort)((ushort)((uVar59 < uVar49) * uVar49 | (uVar59 >= uVar49) * uVar59) ==
                          uVar59);
            auVar30 = packsswb(auVar31,auVar31);
            auVar39 = pshufb(auVar39,auVar40);
            auVar51 = pshufb(auVar51,auVar40);
            auVar39 = pblendvb(auVar39,auVar41,auVar28);
            auVar51 = pblendvb(auVar51,auVar41,auVar30);
            pcVar10 = (char *)((int64_t)arg1 + lVar17 + 0x10);
            *(int64_t *)pcVar10 = auVar39._0_8_;
            *(int64_t *)(pcVar10 + 8) = auVar51._0_8_;
            lVar17 = lVar17 + 0x20;
            lVar23 = lVar23 + 2;
          } while (lVar23 != 0);
        }
        if ((uVar21 & 1) != 0) {
          auVar40 = *(uint8_t (*) [16])(this_ptr + lVar17);
          auVar41 = *(uint8_t (*) [16])(this_ptr + lVar17 + 8);
          uVar29 = auVar40._0_2_ + g_023de2a0;
          uVar32 = auVar40._2_2_ + _UNK_023de2a2;
          uVar33 = auVar40._4_2_ + _UNK_023de2a4;
          uVar34 = auVar40._6_2_ + _UNK_023de2a6;
          uVar35 = auVar40._8_2_ + _UNK_023de2a8;
          uVar36 = auVar40._10_2_ + _UNK_023de2aa;
          uVar37 = auVar40._12_2_ + _UNK_023de2ac;
          uVar38 = auVar40._14_2_ + _UNK_023de2ae;
          uVar42 = g_023de2a0 + auVar41._0_2_;
          uVar43 = _UNK_023de2a2 + auVar41._2_2_;
          uVar44 = _UNK_023de2a4 + auVar41._4_2_;
          uVar45 = _UNK_023de2a6 + auVar41._6_2_;
          uVar46 = _UNK_023de2a8 + auVar41._8_2_;
          uVar47 = _UNK_023de2aa + auVar41._10_2_;
          uVar48 = _UNK_023de2ac + auVar41._12_2_;
          uVar49 = _UNK_023de2ae + auVar41._14_2_;
          auVar39._0_2_ =
               -(ushort)((ushort)((uVar29 < g_023def50) * g_023def50 |
                                 (uVar29 >= g_023def50) * uVar29) == uVar29);
          auVar39._2_2_ =
               -(ushort)((ushort)((uVar32 < _UNK_023def52) * _UNK_023def52 |
                                 (uVar32 >= _UNK_023def52) * uVar32) == uVar32);
          auVar39._4_2_ =
               -(ushort)((ushort)((uVar33 < _UNK_023def54) * _UNK_023def54 |
                                 (uVar33 >= _UNK_023def54) * uVar33) == uVar33);
          auVar39._6_2_ =
               -(ushort)((ushort)((uVar34 < _UNK_023def56) * _UNK_023def56 |
                                 (uVar34 >= _UNK_023def56) * uVar34) == uVar34);
          auVar39._8_2_ =
               -(ushort)((ushort)((uVar35 < _UNK_023def58) * _UNK_023def58 |
                                 (uVar35 >= _UNK_023def58) * uVar35) == uVar35);
          auVar39._10_2_ =
               -(ushort)((ushort)((uVar36 < _UNK_023def5a) * _UNK_023def5a |
                                 (uVar36 >= _UNK_023def5a) * uVar36) == uVar36);
          auVar39._12_2_ =
               -(ushort)((ushort)((uVar37 < _UNK_023def5c) * _UNK_023def5c |
                                 (uVar37 >= _UNK_023def5c) * uVar37) == uVar37);
          auVar39._14_2_ =
               -(ushort)((ushort)((uVar38 < _UNK_023def5e) * _UNK_023def5e |
                                 (uVar38 >= _UNK_023def5e) * uVar38) == uVar38);
          auVar39 = packsswb(auVar39,auVar39);
          auVar51._0_2_ =
               -(ushort)((ushort)((g_023def50 < uVar42) * uVar42 |
                                 (g_023def50 >= uVar42) * g_023def50) == uVar42);
          auVar51._2_2_ =
               -(ushort)((ushort)((_UNK_023def52 < uVar43) * uVar43 |
                                 (_UNK_023def52 >= uVar43) * _UNK_023def52) == uVar43);
          auVar51._4_2_ =
               -(ushort)((ushort)((_UNK_023def54 < uVar44) * uVar44 |
                                 (_UNK_023def54 >= uVar44) * _UNK_023def54) == uVar44);
          auVar51._6_2_ =
               -(ushort)((ushort)((_UNK_023def56 < uVar45) * uVar45 |
                                 (_UNK_023def56 >= uVar45) * _UNK_023def56) == uVar45);
          auVar51._8_2_ =
               -(ushort)((ushort)((_UNK_023def58 < uVar46) * uVar46 |
                                 (_UNK_023def58 >= uVar46) * _UNK_023def58) == uVar46);
          auVar51._10_2_ =
               -(ushort)((ushort)((_UNK_023def5a < uVar47) * uVar47 |
                                 (_UNK_023def5a >= uVar47) * _UNK_023def5a) == uVar47);
          auVar51._12_2_ =
               -(ushort)((ushort)((_UNK_023def5c < uVar48) * uVar48 |
                                 (_UNK_023def5c >= uVar48) * _UNK_023def5c) == uVar48);
          auVar51._14_2_ =
               -(ushort)((ushort)((_UNK_023def5e < uVar49) * uVar49 |
                                 (_UNK_023def5e >= uVar49) * _UNK_023def5e) == uVar49);
          auVar51 = packsswb(auVar51,auVar51);
          auVar40 = pshufb(auVar40,g_023def60);
          auVar41 = pshufb(auVar41,g_023def60);
          auVar40 = pblendvb(auVar40,g_023def70,auVar39);
          auVar41 = pblendvb(auVar41,g_023def70,auVar51);
          *(int64_t *)((int64_t)arg1 + lVar17) = auVar40._0_8_;
          *(int64_t *)((char *)((int64_t)arg1 + lVar17) + 8) = auVar41._0_8_;
        }
        arg1 = (ushort *)((int64_t)arg1 + uVar25);
        if (uVar14 == uVar25) goto LAB_00da4550;
        this_ptr = this_ptr + uVar25;
      }
      uVar24 = (uint)uVar25;
      uVar13 = ~uVar24;
      if ((param_1 & 3) != 0) {
        iVar20 = 0;
        do {
          uVar42 = *this_ptr;
          this_ptr = this_ptr + 1;
          cVar12 = (char)uVar42;
          if (0x5e < (ushort)(uVar42 - 0x20)) {
            cVar12 = '\x1a';
          }
          *(char *)arg1 = cVar12;
          arg1 = (ushort *)((int64_t)arg1 + 1);
          iVar20 = iVar20 + -1;
        } while (-(param_1 & 3) != iVar20);
        uVar24 = uVar24 - iVar20;
      }
      if (2 < uVar13 + param_1) {
        lVar17 = 0;
        do {
          uVar42 = this_ptr[lVar17];
          if (0x5e < (ushort)(this_ptr[lVar17] - 0x20)) {
            uVar42 = 0x1a;
          }
          *(char *)((int64_t)arg1 + lVar17) = (char)uVar42;
          uVar42 = this_ptr[lVar17 + 1];
          if (0x5e < (ushort)(uVar42 - 0x20)) {
            uVar42 = 0x1a;
          }
          *(char *)((int64_t)arg1 + lVar17 + 1) = (char)uVar42;
          uVar42 = this_ptr[lVar17 + 2];
          if (0x5e < (ushort)(uVar42 - 0x20)) {
            uVar42 = 0x1a;
          }
          *(char *)((int64_t)arg1 + lVar17 + 2) = (char)uVar42;
          uVar42 = this_ptr[lVar17 + 3];
          if (0x5e < (ushort)(uVar42 - 0x20)) {
            uVar42 = 0x1a;
          }
          *(char *)((int64_t)arg1 + lVar17 + 3) = (char)uVar42;
          lVar17 = lVar17 + 4;
        } while (param_1 - uVar24 != (int)lVar17);
        arg1 = (ushort *)((int64_t)arg1 + lVar17);
      }
      goto LAB_00da4550;
    }
    goto LAB_00da454d;
  case 6:
    if (0 < (int)param_1) {
      puVar18 = this_ptr + (int)param_1;
      pcVar10 = (char *)((int64_t)(int)(param_1 << 2) + (int64_t)arg1);
      param_1 = 0;
      do {
        puVar1 = this_ptr + 1;
        uVar25 = (uint64_t)*this_ptr;
        if (((*this_ptr & 0xfc00) == 0xd800) && (puVar1 < puVar18)) {
          if ((this_ptr[1] & 0xfc00) == 0xdc00) {
            puVar1 = this_ptr + 2;
            uVar25 = (uVar25 * 0x400 + (uint64_t)this_ptr[1]) - 0x35fdc00;
          }
        }
        this_ptr = puVar1;
        uVar13 = 1;
        if (((0x7f < uVar25) && (uVar13 = 2, 0x7ff < uVar25)) && (uVar13 = 3, 0xffff < uVar25)) {
          bVar27 = uVar25 < 0x200000;
          if (!bVar27) {
            uVar25 = 0xfffd;
          }
          uVar13 = (uint)bVar27 * 2 + 2;
        }
        uVar14 = (uint64_t)uVar13;
        pcVar26 = (char *)((int64_t)arg1 + uVar14);
        if (pcVar10 < pcVar26) {
          return 0;
        }
        switch(uVar13) {
        case 4:
          pcVar26[-1] = (byte)uVar25 & 0x3f | 0x80;
          pcVar26 = pcVar26 + -1;
          uVar25 = uVar25 >> 6;
        case 3:
          pcVar26[-1] = (byte)uVar25 & 0x3f | 0x80;
          pcVar26 = pcVar26 + -1;
          uVar25 = uVar25 >> 6;
        case 2:
          pcVar26[-1] = (byte)uVar25 & 0x3f | 0x80;
          pcVar26 = pcVar26 + -1;
          uVar25 = uVar25 >> 6;
        case 1:
          pcVar26[-1] = (byte)uVar25 | (&g_023df0b0)[uVar14];
          pcVar26 = pcVar26 + -1;
        }
        arg1 = (ushort *)(pcVar26 + uVar14);
        param_1 = param_1 + uVar13;
      } while (this_ptr < puVar18);
      goto LAB_00da4550;
    }
    goto LAB_00da454d;
  case 7:
    pbVar11 = (byte *)FUN_00e83010();
    pbVar15 = pbVar11;
    uVar13 = param_1;
    if (0 < (int)param_1) {
      do {
        uVar42 = *this_ptr;
        if ((ushort)(uVar42 - 0x20) < 0x5f) {
          bVar19 = (byte)uVar42;
        }
        else if (g_02782520 == 0) {
LAB_00da45f0:
          bVar19 = 0x1a;
        }
        else {
          bVar19 = g_02782520;
          if (g_02782522 != uVar42) {
            pbVar22 = &g_02782524;
            do {
              bVar19 = *pbVar22;
              if (bVar19 == 0) goto LAB_00da45f0;
              puVar18 = (ushort *)(pbVar22 + 2);
              pbVar22 = pbVar22 + 4;
            } while (*puVar18 != uVar42);
          }
        }
        this_ptr = this_ptr + 1;
        *pbVar15 = bVar19;
        pbVar15 = pbVar15 + 1;
        bVar27 = 1 < (int)uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar27);
    }
    *pbVar15 = 0;
    uVar25 = (uint64_t)*pbVar11;
    pbVar11 = pbVar11 + 1;
    puVar18 = arg1;
    uVar13 = param_1;
    do {
      uVar24 = uVar13;
      bVar19 = (byte)uVar25;
      if ((bVar19 == 0) || ((int)uVar24 < 1)) {
        *(char *)puVar18 = '\0';
        uVar13 = (int)puVar18 - (int)arg1;
        if (-1 < (int)uVar13) goto LAB_00da46e1;
        goto LAB_00da46db;
      }
      if (bVar19 == 0x20) {
        *(char *)puVar18 = '+';
LAB_00da46a3:
        puVar18 = (ushort *)((int64_t)puVar18 + 1);
      }
      else {
        if (((byte)((bVar19 & 0xdf) + 0xbf) < 0x1a) || ((byte)(bVar19 - 0x30) < 10)) {
          *(byte *)puVar18 = bVar19;
          goto LAB_00da46a3;
        }
        cVar12 = (char)(uVar25 >> 4);
        bVar16 = cVar12 + 0x30;
        if (0x39 < bVar16) {
          bVar16 = cVar12 + 0x37;
        }
        *(char *)puVar18 = '%';
        *(byte *)((int64_t)puVar18 + 1) = bVar16;
        bVar16 = (bVar19 & 0xf) + 0x30;
        if (0x39 < bVar16) {
          bVar16 = (bVar19 & 0xf) + 0x37;
        }
        *(byte *)(puVar18 + 1) = bVar16;
        puVar18 = (ushort *)((int64_t)puVar18 + 3);
      }
      bVar19 = *pbVar11;
      uVar25 = (uint64_t)bVar19;
      uVar13 = uVar24 - 1;
      pbVar11 = pbVar11 + 1;
    } while (((bVar19 == 0) || ((int)uVar24 < 2)) ||
            (puVar18 <= (ushort *)((int64_t)arg1 + (int64_t)(int)(param_1 * 3) + -3)));
    *(char *)puVar18 = '\0';
LAB_00da46db:
    *(char *)arg1 = '\0';
    uVar13 = 0;
LAB_00da46e1:
    FUN_00e83070();
    return uVar13;
  }
joined_r0x00da427e:
  if ((int)param_1 < 1) {
LAB_00da454d:
    param_1 = 0;
  }
  else {
    uVar13 = 0;
    do {
      uVar42 = *this_ptr;
      if ((ushort)(uVar42 - 0x20) < 0x5f) {
        cVar12 = (char)uVar42;
      }
      else {
        cVar12 = *pcVar10;
        if (cVar12 == '\0') {
LAB_00da4270:
          cVar12 = '\x1a';
        }
        else {
          uVar43 = *(ushort *)(pcVar10 + 2);
          puVar18 = (ushort *)(pcVar10 + 6);
          while (uVar43 != uVar42) {
            cVar12 = (char)puVar18[-1];
            if (cVar12 == '\0') goto LAB_00da4270;
            uVar43 = *puVar18;
            puVar18 = puVar18 + 2;
          }
        }
      }
      this_ptr = this_ptr + 1;
      *(char *)arg1 = cVar12;
      arg1 = (ushort *)((int64_t)arg1 + 1);
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_1);
  }
LAB_00da4550:
  *(char *)arg1 = '\0';
  return param_1;
switchD_00da41d4_caseD_0:
  goto joined_r0x00da427e;
}

