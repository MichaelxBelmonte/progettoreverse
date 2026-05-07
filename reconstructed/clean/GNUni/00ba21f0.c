// Function: FUN_00ba21f0
// Address: 00ba21f0
// Size: 29958 bytes
// Class: GNUni
// String references:
//   "RIFF"
//   "data"
//   "regn"
//   "iXML"
//   "WAVE"
//   "adtl"
//   "labl"
//   "note"
//   "ltxt"
//   "acid"
//   "bext"
//   "CELE"
//   "cue "
//   "fmt "
//   "list"
//   "LIST"
//   "plst"
//   "smpl"
//   "wavl"
//   "JUNK"
//   ... +4 more
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_00ba21f0(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  int64_t lVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int64_t *plVar14;
  void*puVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  int64_t **pplVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int iVar23;
  int64_t lVar24;
  int64_t *this_ptr;
  uint uVar25;
  int64_t *plVar26;
  int64_t *unaff_R15;
  undefined7 uVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar33;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t extraout_XMM0_Qa_07;
  uint64_t extraout_XMM0_Qa_08;
  uint64_t extraout_XMM0_Qa_09;
  uint64_t extraout_XMM0_Qa_10;
  uint64_t extraout_XMM0_Qa_11;
  uint64_t extraout_XMM0_Qa_12;
  uint64_t extraout_XMM0_Qa_13;
  uint64_t extraout_XMM0_Qa_14;
  uint64_t extraout_XMM0_Qa_15;
  uint64_t extraout_XMM0_Qa_16;
  uint64_t extraout_XMM0_Qa_17;
  uint64_t extraout_XMM0_Qa_18;
  uint64_t extraout_XMM0_Qa_19;
  uint64_t extraout_XMM0_Qa_20;
  uint64_t extraout_XMM0_Qa_21;
  uint64_t extraout_XMM0_Qa_22;
  uint64_t extraout_XMM0_Qa_23;
  uint64_t extraout_XMM0_Qa_24;
  uint64_t extraout_XMM0_Qa_25;
  uint64_t extraout_XMM0_Qa_26;
  uint64_t extraout_XMM0_Qa_27;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  uint64_t extraout_XMM0_Qb_12;
  uint64_t extraout_XMM0_Qb_13;
  uint64_t extraout_XMM0_Qb_14;
  uint64_t extraout_XMM0_Qb_15;
  uint64_t extraout_XMM0_Qb_16;
  uint64_t extraout_XMM0_Qb_17;
  uint64_t extraout_XMM0_Qb_18;
  uint64_t extraout_XMM0_Qb_19;
  uint64_t extraout_XMM0_Qb_20;
  uint64_t extraout_XMM0_Qb_21;
  uint64_t extraout_XMM0_Qb_22;
  uint64_t extraout_XMM0_Qb_23;
  uint64_t extraout_XMM0_Qb_24;
  uint64_t extraout_XMM0_Qb_25;
  uint64_t extraout_XMM0_Qb_26;
  uint64_t extraout_XMM0_Qb_27;
  uint64_t extraout_XMM0_Qb_28;
  uint64_t extraout_XMM0_Qb_29;
  uint64_t extraout_XMM0_Qb_30;
  uint64_t extraout_XMM0_Qb_31;
  uint64_t extraout_XMM0_Qb_32;
  uint64_t extraout_XMM0_Qb_33;
  uint64_t extraout_XMM0_Qb_34;
  uint64_t extraout_XMM0_Qb_35;
  uint64_t extraout_XMM0_Qb_36;
  uint64_t extraout_XMM0_Qb_37;
  uint64_t extraout_XMM0_Qb_38;
  uint64_t extraout_XMM0_Qb_39;
  uint64_t extraout_XMM0_Qb_40;
  uint64_t extraout_XMM0_Qb_41;
  uint64_t extraout_XMM0_Qb_42;
  uint64_t extraout_XMM0_Qb_43;
  uint64_t extraout_XMM0_Qb_44;
  uint64_t extraout_XMM0_Qb_45;
  uint64_t extraout_XMM0_Qb_46;
  uint64_t extraout_XMM0_Qb_47;
  uint64_t extraout_XMM0_Qb_48;
  uint64_t extraout_XMM0_Qb_49;
  uint64_t extraout_XMM0_Qb_50;
  uint64_t extraout_XMM0_Qb_51;
  uint64_t extraout_XMM0_Qb_52;
  uint64_t extraout_XMM0_Qb_53;
  uint64_t extraout_XMM0_Qb_54;
  uint64_t extraout_XMM0_Qb_55;
  uint64_t extraout_XMM0_Qb_56;
  uint64_t extraout_XMM0_Qb_57;
  uint64_t extraout_XMM0_Qb_58;
  uint64_t extraout_XMM0_Qb_59;
  uint64_t extraout_XMM0_Qb_60;
  uint64_t extraout_XMM0_Qb_61;
  uint64_t extraout_XMM0_Qb_62;
  uint64_t extraout_XMM0_Qb_63;
  uint64_t extraout_XMM0_Qb_64;
  uint64_t extraout_XMM0_Qb_65;
  uint64_t extraout_XMM0_Qb_66;
  uint64_t extraout_XMM0_Qb_67;
  uint64_t extraout_XMM0_Qb_68;
  uint64_t extraout_XMM0_Qb_69;
  uint64_t extraout_XMM0_Qb_70;
  uint64_t extraout_XMM0_Qb_71;
  uint64_t extraout_XMM0_Qb_72;
  uint64_t extraout_XMM0_Qb_73;
  uint64_t extraout_XMM0_Qb_74;
  uint64_t extraout_XMM0_Qb_75;
  uint64_t extraout_XMM0_Qb_76;
  uint64_t extraout_XMM0_Qb_77;
  uint8_t auVar34 [16];
  uint64_t extraout_XMM0_Qb_78;
  uint64_t extraout_XMM0_Qb_79;
  uint64_t extraout_XMM0_Qb_80;
  uint64_t extraout_XMM0_Qb_81;
  uint64_t extraout_XMM0_Qb_82;
  uint64_t extraout_XMM0_Qb_83;
  uint64_t extraout_XMM0_Qb_84;
  uint64_t extraout_XMM0_Qb_85;
  uint64_t extraout_XMM0_Qb_86;
  uint64_t extraout_XMM0_Qb_87;
  uint64_t extraout_XMM0_Qb_88;
  uint64_t extraout_XMM0_Qb_89;
  uint64_t extraout_XMM0_Qb_90;
  uint64_t extraout_XMM0_Qb_91;
  uint64_t extraout_XMM0_Qb_92;
  uint64_t extraout_XMM0_Qb_93;
  uint64_t extraout_XMM0_Qb_94;
  uint64_t extraout_XMM0_Qb_95;
  int64_t local_cb0;
  char local_ca8;
  int64_t local_c80;
  char local_c78;
  int64_t local_c70;
  char local_c68;
  int64_t local_c60;
  char local_c58;
  int64_t local_c50;
  char local_c48;
  int64_t local_c40;
  char local_c38;
  int64_t local_c30;
  char local_c28;
  int64_t local_c20;
  char local_c18;
  int64_t local_c10;
  char local_c08;
  int64_t local_c00;
  char local_bf8;
  int64_t local_bf0;
  char local_be8;
  int64_t local_be0;
  char local_bd8;
  int64_t local_bd0;
  char local_bc8;
  int64_t local_bc0;
  char local_bb8;
  int64_t local_bb0;
  char local_ba8;
  int64_t local_ba0;
  char local_b98;
  int64_t local_b90;
  char local_b88;
  int64_t local_b80;
  char local_b78;
  int64_t local_b70;
  char local_b68;
  int64_t local_b60;
  char local_b58;
  int64_t local_b50;
  char local_b48;
  int64_t local_b40;
  char local_b38;
  int64_t local_b30;
  char local_b28;
  int64_t local_b20;
  char local_b18;
  int64_t local_b10;
  char local_b08;
  int64_t local_b00;
  char local_af8;
  int64_t local_af0;
  char local_ae8;
  int64_t local_ae0;
  char local_ad8;
  int64_t local_ad0;
  char local_ac8;
  int64_t local_ac0;
  char local_ab8;
  int64_t local_ab0;
  char local_aa8;
  int64_t local_aa0;
  char local_a98;
  int64_t local_a90;
  char local_a88;
  int64_t local_a80;
  char local_a78;
  int64_t local_a70;
  char local_a68;
  int64_t local_a60;
  char local_a58;
  int64_t local_a50;
  char local_a48;
  int64_t local_a40;
  char local_a38;
  int64_t local_a30;
  char local_a28;
  int64_t local_a20;
  char local_a18;
  int64_t local_a10;
  char local_a08;
  int64_t *local_6e0;
  char local_6d8;
  int64_t *local_6d0;
  char local_6c8;
  int64_t local_6c0;
  char local_6b8;
  int64_t local_6b0;
  char local_6a8;
  int64_t local_6a0;
  char local_698;
  int64_t local_690;
  char local_688;
  int64_t local_680;
  char local_678;
  int64_t local_670;
  char local_668;
  int64_t *local_660;
  char local_658;
  int64_t local_650;
  char local_648;
  int64_t local_640;
  char local_638;
  int64_t local_630;
  char local_628;
  int64_t local_620;
  char local_618;
  int64_t local_610;
  char local_608;
  int64_t local_600;
  char local_5f8;
  int64_t local_5f0;
  char local_5e8;
  int64_t local_5e0;
  char local_5d8;
  int64_t local_5d0;
  char local_5c8;
  int64_t local_5c0;
  char local_5b8;
  int64_t local_5b0;
  char local_5a8;
  int64_t local_5a0;
  char local_598;
  int64_t *local_590;
  char local_588;
  int64_t local_580;
  char local_578;
  int64_t *local_570;
  char local_568;
  int64_t *local_560;
  char local_558;
  int64_t local_550;
  char local_548;
  int64_t local_540;
  char local_538;
  void*local_530;
  char local_528;
  int64_t local_520;
  char local_518;
  int64_t local_510;
  char local_508;
  int64_t *local_500;
  char local_4f8;
  int64_t local_4f0;
  char local_4e8;
  int64_t *local_4e0;
  char local_4d8;
  int64_t local_4d0;
  char local_4c8;
  int64_t local_4c0;
  char local_4b8;
  int64_t local_4b0;
  char local_4a8;
  int64_t *local_4a0;
  char local_498;
  int64_t *local_490;
  char local_488;
  int64_t *local_480;
  char local_478;
  int64_t *local_470;
  char local_468;
  int64_t *local_460;
  char local_458;
  void*local_450;
  char local_448;
  int64_t *local_440;
  char local_438;
  int64_t *local_430;
  char local_428;
  int64_t *local_420;
  char local_418;
  int64_t *local_410;
  char local_408;
  int64_t local_400;
  char local_3f8;
  short *local_3f0;
  short *local_3e8;
  int64_t local_3e0;
  char local_3d8;
  int64_t *local_3d0;
  short *local_3c8;
  void*local_3c0;
  uint16_t local_3b4 [2];
  int64_t *local_3b0;
  char local_3a8;
  int64_t *local_3a0;
  char local_398;
  int64_t *local_390;
  char local_388;
  int64_t *local_380;
  char local_378;
  int64_t *local_370;
  char local_368;
  int64_t *local_360;
  char local_358;
  int64_t *local_350;
  char local_348;
  int64_t *local_340;
  char local_338;
  int64_t *local_330;
  char local_328;
  int64_t *local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t *local_2f0;
  char local_2e8;
  int64_t *local_2e0;
  char local_2d8;
  int64_t *local_2d0;
  char local_2c8;
  int64_t *local_2c0;
  char local_2b8;
  int64_t *local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t *local_290;
  char local_288;
  int64_t *local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t *local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  uint64_t local_140;
  uint64_t local_138;
  void*local_130;
  code *local_128;
  uint64_t local_120;
  uint local_118;
  uint32_t uStack_114;
  char local_110;
  void*local_108;
  int local_100;
  uint8_t local_fc [4];
  int64_t *local_f8;
  int64_t local_f0;
  char local_e8;
  int local_dc;
  uint64_t local_d8;
  int64_t *local_d0;
  uint local_c8;
  uint8_t local_c1;
  uint64_t local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  uint local_94;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int local_5c;
  uint local_58;
  uint uStack_54;
  uint64_t uStack_50;
  int64_t *local_48;
  char cStack_40;
  undefined7 uStack_3f;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00b9d1d0();
  *(void*)(this_ptr + 7) = 1;
  local_100 = 0x10;
  (**(code **)(*(int64_t *)this_ptr[4] + 0x380))(&local_100,&local_58);
  bVar28 = local_48 != (int64_t *)0x0;
  bVar29 = local_100 != 0x10;
  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar24 = g_02765700;
  if (bVar28 || bVar29) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar24 != 0) {
      FUN_00d50b20();
    }
  }
  local_d0 = this_ptr + 7;
  plVar26 = this_ptr + 4;
  auVar1._4_4_ = uStack_54;
  auVar1._0_4_ = local_58;
  auVar1._8_8_ = uStack_50;
  if ((auVar1 ^ g_02764b10) == (uint8_t  [16])0x0) {
    local_f0 = CONCAT44(local_f0._4_4_,8);
    FUN_00ccd5c0(&local_f0,&local_140);
    bVar28 = local_48 != (int64_t *)0x0;
    bVar29 = (int)local_f0 != 8;
    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar24 = g_02765700;
    if (bVar28 || bVar29) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)*plVar26 + 0x380))(&local_100,&local_58);
    bVar28 = local_48 != (int64_t *)0x0;
    bVar29 = local_100 != 0x10;
    unaff_R15 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_R15 >> 8),bVar29);
    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar24 = g_02765700;
    if (bVar28 || bVar29) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
    lVar24 = g_02765700;
    auVar2._4_4_ = uStack_54;
    auVar2._0_4_ = local_58;
    auVar2._8_8_ = uStack_50;
    if (auVar2 != g_02764b20) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    iVar11 = FUN_00e7de00(SUB168(auVar1 ^ g_02764b10,0),4);
    lVar24 = g_02764880;
    uVar33 = extraout_XMM0_Qa;
    if (iVar11 != 0) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      uVar33 = FUN_00cc78b0();
      if (lVar24 != 0) {
        uVar33 = FUN_00d50b20();
      }
    }
    iVar11 = FUN_00e7de00(uVar33,4);
    lVar24 = g_02764880;
    if (iVar11 != 0) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
    uVar25 = uStack_54;
    iVar11 = FUN_00ccce90();
    uVar12 = uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8 | uVar25 << 0x18;
    if (iVar11 == 0) {
      uVar12 = uVar25;
    }
    local_140 = (uint64_t)(int)uVar12;
    local_100 = 4;
    uStack_54 = uStack_54 & 0xffffff00;
    *(char *)local_d0 = '\0';
    (**(code **)(*(int64_t *)*plVar26 + 0x390))(extraout_XMM0_Qa_00,&local_d8);
    plVar14 = local_48;
    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar24 = g_02765700;
    if (plVar14 != (int64_t *)0x0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
    local_d8 = local_d8 - 4;
    (**(code **)(*(int64_t *)*plVar26 + 0x3a0))();
    plVar14 = local_48;
    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar24 = g_02765700;
    if (plVar14 != (int64_t *)0x0) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar24 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((char)*local_d0 == '\0') {
    local_140 = local_140 + 8;
  }
  local_e8 = '\0';
  local_f0 = 0;
  plVar14 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar14 + 0x18))();
  local_f8 = plVar14;
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_130 = &g_02572358;
  *puVar15 = &g_02572358;
  local_128 = g_02572370;
  auVar34._0_8_ = (*g_02572370)();
  auVar34._8_8_ = extraout_XMM0_Qb;
  local_3d0 = this_ptr + 8;
  local_3c8 = (short *)((int64_t)this_ptr + 0x3c);
  local_3f0 = (short *)((int64_t)this_ptr + 0x3e);
  local_3e8 = (short *)((int64_t)this_ptr + 0x6c);
  bVar28 = false;
  bVar29 = false;
  local_138 = 0;
  local_108 = puVar15;
LAB_00ba27c9:
  do {
    (**(code **)(*(int64_t *)*plVar26 + 0x390))(auVar34._0_8_,&local_d8);
    if ((local_ca8 != '\0') && (local_cb0 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 < local_140 - 1) {
      unaff_R15 = (int64_t *)*plVar26;
      if ((char)*local_d0 == '\0') {
        if (unaff_R15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar9 = FUN_00ba1e20(&local_c0,&local_58,&g_02764b30,0x17);
        uVar33 = extraout_XMM0_Qa_02;
        if (unaff_R15 != (int64_t *)0x0) {
          uVar33 = FUN_00d50b20();
        }
      }
      else {
        if (unaff_R15 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar9 = FUN_00ba1c90(&local_c0,&local_58);
        uVar33 = extraout_XMM0_Qa_01;
        if (unaff_R15 != (int64_t *)0x0) {
          uVar33 = FUN_00d50b20();
        }
      }
      if (cVar9 == '\0') goto LAB_00ba2910;
      uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_d8);
      if ((local_c78 != '\0') && (local_c80 != 0)) {
        uVar33 = FUN_00d50b20();
      }
    }
    else {
LAB_00ba2910:
      lVar24 = g_02765700;
      if ((bVar28) && (bVar29)) {
        FUN_00c9fe20();
        plVar26 = local_48;
        pplVar20 = (int64_t **)&cStack_40;
        if (cStack_40 == '\0') {
          pplVar20 = &local_70;
        }
        local_70 = (int64_t *)CONCAT71(local_70._1_7_,cStack_40);
        *(char *)pplVar20 = '\0';
        if ((cStack_40 != '\0') && (plVar26 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar11 = *(int *)((int64_t)plVar26 + 0xc);
        if ((char)local_70 != '\0') {
          FUN_00d50b20();
        }
        if (iVar11 != 0) {
          uVar33 = (**(code **)(*this_ptr + 0x3a8))();
          plVar26 = g_02765240;
          if (g_02765240 != (int64_t *)0x0) {
            uVar33 = FUN_00d50b00();
          }
          local_48 = plVar26;
          cStack_40 = '\0';
          FUN_00ca0840(uVar33,&local_48);
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*(int *)((int64_t)local_108 + 0xc) != 0) {
          uVar33 = (**(code **)(*this_ptr + 0x3a8))();
          plVar26 = g_02764890;
          if (g_02764890 != (int64_t *)0x0) {
            uVar33 = FUN_00d50b00();
          }
          local_48 = plVar26;
          cStack_40 = '\0';
          FUN_00ca0840(uVar33,&local_48);
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar26 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_00ba975d:
        FUN_00d50b20();
LAB_00ba9762:
        if (local_f8 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                              ___stack_chk_fail();
        }
        return;
      }
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      uVar33 = FUN_00cc78b0();
      if (lVar24 != 0) {
        uVar33 = FUN_00d50b20();
      }
    }
    if ((char)*local_d0 == '\0') {
      iVar11 = FUN_00e7de00(uVar33,4);
      uVar33 = extraout_XMM0_Qa_03;
    }
    else {
      uVar21 = (uint64_t)(uStack_54 >> 0x18) | (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28
               | (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
               (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
               ((uint64_t)local_58 & 0xff000000) << 8 | ((uint64_t)local_58 & 0xff0000) << 0x18 |
               ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
      uVar22 = g_02764c30 >> 0x38 | (g_02764c30 & 0xff000000000000) >> 0x28 |
               (g_02764c30 & 0xff0000000000) >> 0x18 | (g_02764c30 & 0xff00000000) >> 8 |
               (g_02764c30 & 0xff000000) << 8 | (g_02764c30 & 0xff0000) << 0x18 |
               (g_02764c30 & 0xff00) << 0x28 | g_02764c30 << 0x38;
      if (uVar21 == uVar22) {
        uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                 (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                 (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                 (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
        uVar22 = g_02764c38 >> 0x38 | (g_02764c38 & 0xff000000000000) >> 0x28 |
                 (g_02764c38 & 0xff0000000000) >> 0x18 | (g_02764c38 & 0xff00000000) >> 8 |
                 (g_02764c38 & 0xff000000) << 8 | (g_02764c38 & 0xff0000) << 0x18 |
                 (g_02764c38 & 0xff00) << 0x28 | g_02764c38 << 0x38;
        iVar11 = 0;
        if (uVar21 == uVar22) goto LAB_00ba29d5;
      }
      iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
    }
LAB_00ba29d5:
    uVar27 = (undefined7)((uint64_t)unaff_R15 >> 8);
    if (iVar11 == 0) {
      FUN_00ccd330(&local_5c,local_3d0);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 2;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00ccd330(&local_5c,local_3c8);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 2;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00ccd540(&local_5c,&local_118);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 4;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      *(uint *)(this_ptr + 9) = local_118;
      FUN_00ccd540(&local_5c,&local_88);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 4;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      *(int *)(this_ptr + 0xb) = (int)local_88;
      FUN_00ccd330(&local_5c,(int64_t)this_ptr + 0x3a);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 2;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc78b0();
        if (lVar24 != 0) {
          FUN_00d50b20();
        }
      }
      uVar33 = FUN_00ccd330(&local_5c,local_3f0);
      bVar29 = local_48 != (int64_t *)0x0;
      bVar30 = local_5c != 2;
      unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar30);
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar33 = FUN_00d50b20();
      }
      lVar24 = g_02765700;
      if (bVar29 || bVar30) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        uVar33 = FUN_00cc78b0();
        if (lVar24 != 0) {
          uVar33 = FUN_00d50b20();
        }
      }
      lVar24 = g_02764880;
      if ((short)*local_3d0 == -2) {
        local_c8 = local_c8 & 0xffff0000;
        local_3b4[0] = 0;
        local_94 = 0;
        uVar33 = FUN_00ccd330(&local_5c,&local_c8);
        bVar29 = local_70 != (int64_t *)0x0;
        bVar30 = local_5c != 2;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar33 = FUN_00d50b20();
        }
        lVar24 = g_02765700;
        if (bVar29 || bVar30) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          uVar33 = FUN_00cc78b0();
          if (lVar24 != 0) {
            uVar33 = FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_d8);
        if ((local_c68 != '\0') && (local_c70 != 0)) {
          FUN_00d50b20();
        }
        FUN_00ccd330(&local_5c,local_3b4);
        bVar29 = local_70 != (int64_t *)0x0;
        bVar30 = local_5c != 2;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar24 = g_02765700;
        if (bVar29 || bVar30) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar24 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00ccd6d0(&local_5c,&local_94);
        bVar29 = local_70 != (int64_t *)0x0;
        bVar30 = local_5c != 4;
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar24 = g_02765700;
        if (bVar29 || bVar30) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar24 != 0) {
            FUN_00d50b20();
          }
        }
        local_5c = 0x10;
        (**(code **)(*(int64_t *)*plVar26 + 0x380))(&local_5c,&local_48);
        bVar29 = local_70 != (int64_t *)0x0;
        bVar30 = local_5c != 0x10;
        unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar30);
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar24 = g_02765700;
        if (bVar29 || bVar30) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar24 != 0) {
            FUN_00d50b20();
          }
        }
        lVar24 = g_02764880;
        auVar6[8] = cStack_40;
        auVar6._0_8_ = local_48;
        auVar6._9_7_ = uStack_3f;
        if (auVar6 == g_02764bb0) {
          sVar10 = 1;
LAB_00ba35ed:
          uVar33 = 0;
          *(short *)local_3d0 = sVar10;
        }
        else {
          auVar7[8] = cStack_40;
          auVar7._0_8_ = local_48;
          auVar7._9_7_ = uStack_3f;
          if (auVar7 == g_02764bc0) {
            sVar10 = 3;
            goto LAB_00ba35ed;
          }
          if (g_02764880 != 0) {
            FUN_00d50b00();
          }
          uVar33 = FUN_00cc78b0();
          if (lVar24 != 0) {
            uVar33 = FUN_00d50b20();
          }
        }
        sVar10 = *(short *)((int64_t)this_ptr + 0x3e);
        iVar11 = sVar10 + 7;
        if (-1 < iVar11) {
          iVar11 = (int)sVar10;
        }
        iVar11 = iVar11 + 7 >> 3;
        *(int *)((int64_t)this_ptr + 0x44) = iVar11;
        if (local_138 != 0) {
          uVar21 = (int64_t)iVar11 * (int64_t)*local_3c8;
          if ((local_138 | uVar21) >> 0x20 == 0) {
            uVar21 = (local_138 & 0xffffffff) / (uVar21 & 0xffffffff);
          }
          else {
            uVar21 = (int64_t)local_138 / (int64_t)uVar21;
          }
          this_ptr[10] = uVar21;
        }
        lVar24 = g_02765700;
        if (0x20 < sVar10) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          uVar33 = FUN_00cc78b0();
          if (lVar24 != 0) {
            uVar33 = FUN_00d50b20();
          }
        }
        auVar34._0_8_ =
             (**(code **)(*(int64_t *)*plVar26 + 0x3a0))
                       (uVar33,(int64_t)(short)local_c8 + local_d8);
        auVar34._8_8_ = extraout_XMM0_Qb_04;
        if ((local_c58 != '\0') && (local_c60 != 0)) {
          auVar34._0_8_ = FUN_00d50b20();
          auVar34._8_8_ = extraout_XMM0_Qb_05;
        }
      }
      else {
        switch((int)(short)*local_3d0) {
        case 1:
        case 3:
          sVar10 = *(short *)((int64_t)this_ptr + 0x3e);
          iVar11 = sVar10 + 7;
          if (-1 < iVar11) {
            iVar11 = (int)sVar10;
          }
          iVar11 = iVar11 + 7 >> 3;
          *(int *)((int64_t)this_ptr + 0x44) = iVar11;
          if (local_138 != 0) {
            uVar21 = (int64_t)iVar11 * (int64_t)*local_3c8;
            if ((local_138 | uVar21) >> 0x20 == 0) {
              uVar21 = (local_138 & 0xffffffff) / (uVar21 & 0xffffffff);
            }
            else {
              uVar21 = (int64_t)local_138 / (int64_t)uVar21;
            }
            this_ptr[10] = uVar21;
          }
          lVar24 = g_02765700;
          if (0x20 < sVar10) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            uVar33 = FUN_00cc78b0();
            if (lVar24 != 0) {
              uVar33 = FUN_00d50b20();
            }
          }
          (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_d8);
          if ((local_c48 != '\0') && (local_c50 != 0)) {
            FUN_00d50b20();
          }
          auVar34._0_8_ =
               (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(local_c0,local_d8 + local_c0 + -0x10);
          auVar34._8_8_ = extraout_XMM0_Qb_48;
          if ((local_c38 != '\0') && (local_c40 != 0)) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_49;
          }
          break;
        case 2:
          FUN_00ccd330(&local_5c,&local_dc);
          bVar29 = local_48 != (int64_t *)0x0;
          bVar30 = local_5c != 2;
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar24 = g_02765700;
          if (bVar29 || bVar30) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00ccd330(&local_5c,this_ptr + 0xd);
          bVar29 = local_48 != (int64_t *)0x0;
          bVar30 = local_5c != 2;
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar24 = g_02765700;
          if (bVar29 || bVar30) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
          }
          auVar34._0_8_ = FUN_00ccd330(&local_5c,local_3e8);
          auVar34._8_8_ = extraout_XMM0_Qb_14;
          bVar29 = local_48 != (int64_t *)0x0;
          bVar30 = local_5c != 2;
          unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar30);
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_15;
          }
          lVar24 = g_02765700;
          if (bVar29 || bVar30) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            auVar34._0_8_ = FUN_00cc78b0();
            auVar34._8_8_ = extraout_XMM0_Qb_16;
            if (lVar24 != 0) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_17;
            }
          }
          lVar24 = g_02764880;
          if ((1 < (ushort)(*local_3c8 - 1U)) || (0xf8 < (ushort)(*local_3e8 - 7U))) {
            if (g_02764880 != 0) {
              FUN_00d50b00();
            }
            auVar34._0_8_ = FUN_00cc78b0();
            auVar34._8_8_ = extraout_XMM0_Qb_18;
            if (lVar24 != 0) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_19;
            }
          }
          lVar24 = g_02764880;
          if (*local_3f0 != 4) {
            if (g_02764880 != 0) {
              FUN_00d50b00();
            }
            auVar34._0_8_ = FUN_00cc78b0();
            auVar34._8_8_ = extraout_XMM0_Qb_20;
            if (lVar24 != 0) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_21;
            }
          }
          if (0 < *local_3e8) {
            lVar24 = 0;
            do {
              auVar34._0_8_ = FUN_00ccd330(&local_5c,&local_94);
              auVar34._8_8_ = extraout_XMM0_Qb_22;
              uVar27 = (undefined7)((uint64_t)unaff_R15 >> 8);
              unaff_R15 = (int64_t *)CONCAT71(uVar27,1);
              if ((local_48 == (int64_t *)0x0) && (local_5c == 2)) {
                auVar34._0_8_ = FUN_00ccd330(&local_5c,&local_c8);
                auVar34._8_8_ = extraout_XMM0_Qb_23;
                bVar29 = local_70 != (int64_t *)0x0;
                bVar30 = local_5c != 2;
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  auVar34._0_8_ = FUN_00d50b20();
                  auVar34._8_8_ = extraout_XMM0_Qb_24;
                }
                unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar29 || bVar30);
              }
              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                auVar34._0_8_ = FUN_00d50b20();
                auVar34._8_8_ = extraout_XMM0_Qb_25;
              }
              lVar8 = g_02765700;
              if ((char)unaff_R15 != '\0') {
                if (g_02765700 != 0) {
                  FUN_00d50b00();
                }
                FUN_00cc78b0();
                if (lVar8 != 0) {
                  FUN_00d50b20();
                }
                if (local_108 == (void*)0x0) goto LAB_00ba9762;
                goto LAB_00ba975d;
              }
              *(int *)(this_ptr + lVar24 + 0x10) = (int)(short)local_94;
              *(int *)((int64_t)this_ptr + lVar24 * 8 + 0x84) = (int)(short)local_c8;
              lVar24 = lVar24 + 1;
            } while (lVar24 < *(short *)((int64_t)this_ptr + 0x6c));
          }
          *(void*)((int64_t)this_ptr + 0x6a) = *(void*)((int64_t)this_ptr + 0x3a);
          break;
        default:
          if (g_02764880 != 0) {
            FUN_00d50b00();
          }
          auVar34._0_8_ = FUN_00cc78b0();
          auVar34._8_8_ = extraout_XMM0_Qb_26;
          if (lVar24 != 0) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_27;
          }
          break;
        case 0x11:
          auVar34._0_8_ = FUN_00ccd330(&local_5c,&local_dc);
          auVar34._8_8_ = extraout_XMM0_Qb_06;
          bVar29 = true;
          if ((local_48 == (int64_t *)0x0) && (local_5c == 2)) {
            auVar34._0_8_ = FUN_00ccd330(&local_5c,(int64_t)this_ptr + 0x6e);
            auVar34._8_8_ = extraout_XMM0_Qb_07;
            bVar29 = local_70 != (int64_t *)0x0;
            bVar30 = local_5c != 2;
            unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar30);
            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_08;
            }
            bVar29 = bVar29 || bVar30;
          }
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_09;
          }
          lVar24 = g_02765700;
          if (bVar29) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            auVar34._0_8_ = FUN_00cc78b0();
            auVar34._8_8_ = extraout_XMM0_Qb_10;
            if (lVar24 != 0) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_11;
            }
          }
          lVar24 = g_02764880;
          if (*local_3f0 != 4) {
            if (g_02764880 != 0) {
              FUN_00d50b00();
            }
            auVar34._0_8_ = FUN_00cc78b0();
            auVar34._8_8_ = extraout_XMM0_Qb_12;
            if (lVar24 != 0) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_13;
            }
          }
          *(void*)(this_ptr + 0xe) = *(void*)((int64_t)this_ptr + 0x3a);
        }
      }
      bVar29 = true;
      goto LAB_00ba27c9;
    }
    if ((char)*local_d0 == '\0') {
      iVar11 = FUN_00e7de00(uVar33,4);
      uVar33 = extraout_XMM0_Qa_04;
    }
    else {
      uVar21 = (uint64_t)(uStack_54 >> 0x18) | (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28
               | (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
               (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
               ((uint64_t)local_58 & 0xff000000) << 8 | ((uint64_t)local_58 & 0xff0000) << 0x18 |
               ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
      uVar22 = g_02764c20 >> 0x38 | (g_02764c20 & 0xff000000000000) >> 0x28 |
               (g_02764c20 & 0xff0000000000) >> 0x18 | (g_02764c20 & 0xff00000000) >> 8 |
               (g_02764c20 & 0xff000000) << 8 | (g_02764c20 & 0xff0000) << 0x18 |
               (g_02764c20 & 0xff00) << 0x28 | g_02764c20 << 0x38;
      if (uVar21 == uVar22) {
        uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                 (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                 (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                 (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
        uVar22 = g_02764c28 >> 0x38 | (g_02764c28 & 0xff000000000000) >> 0x28 |
                 (g_02764c28 & 0xff0000000000) >> 0x18 | (g_02764c28 & 0xff00000000) >> 8 |
                 (g_02764c28 & 0xff000000) << 8 | (g_02764c28 & 0xff0000) << 0x18 |
                 (g_02764c28 & 0xff00) << 0x28 | g_02764c28 << 0x38;
        iVar11 = 0;
        if (uVar21 == uVar22) goto LAB_00ba3095;
      }
      iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
    }
LAB_00ba3095:
    if (iVar11 != 0) {
      if ((char)*local_d0 == '\0') {
        iVar11 = FUN_00e7de00(uVar33,4);
        uVar33 = extraout_XMM0_Qa_06;
      }
      else {
        uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                 (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                 (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                 (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                 ((uint64_t)local_58 & 0xff000000) << 8 | ((uint64_t)local_58 & 0xff0000) << 0x18
                 | ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
        uVar22 = (uint64_t)s_cf_celemony_com_02764c00._0_8_ >> 0x38 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff000000000000) >> 0x28 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff0000000000) >> 0x18 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff00000000) >> 8 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff000000) << 8 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff0000) << 0x18 |
                 (s_cf_celemony_com_02764c00._0_8_ & 0xff00) << 0x28 |
                 s_cf_celemony_com_02764c00._0_8_ << 0x38;
        if (uVar21 == uVar22) {
          uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                   (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                   (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                   (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
          uVar22 = (uint64_t)s_cf_celemony_com_02764c00._8_8_ >> 0x38 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff000000000000) >> 0x28 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff0000000000) >> 0x18 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff00000000) >> 8 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff000000) << 8 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff0000) << 0x18 |
                   (s_cf_celemony_com_02764c00._8_8_ & 0xff00) << 0x28 |
                   s_cf_celemony_com_02764c00._8_8_ << 0x38;
          iVar11 = 0;
          if (uVar21 == uVar22) goto LAB_00ba326b;
        }
        iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
      }
LAB_00ba326b:
      if (iVar11 == 0) {
        (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
        if ((local_bf8 != '\0') && (local_c00 != 0)) {
          FUN_00d50b20();
        }
        uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x370))();
        plVar14 = local_70;
        local_398 = 0;
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            uVar33 = FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_398 = '\x01';
        local_3a0 = plVar14;
        FUN_00e88a90(uVar33,local_b0);
        plVar14 = (int64_t *)this_ptr[6];
        plVar17 = plVar14;
        if (plVar14 != local_48) {
          if (cStack_40 == '\0') {
            if (local_48 == (int64_t *)0x0) {
              plVar17 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar14 = (int64_t *)this_ptr[6];
              plVar17 = local_48;
            }
          }
          else {
            cStack_40 = '\0';
            plVar17 = local_48;
          }
          this_ptr[6] = (int64_t)plVar17;
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar17 = local_48;
          }
        }
        if ((cStack_40 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_398 != '\0') && (local_3a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_b0 = local_b0 + local_c0;
        auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))();
        auVar34._8_8_ = extraout_XMM0_Qb_31;
        if ((local_be8 != '\0') && (local_bf0 != 0)) {
          auVar34._0_8_ = FUN_00d50b20();
          auVar34._8_8_ = extraout_XMM0_Qb_32;
        }
      }
      else {
        if ((char)*local_d0 == '\0') {
          iVar11 = FUN_00e7de00(uVar33,4);
          uVar33 = extraout_XMM0_Qa_07;
        }
        else {
          uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                   (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                   (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                   (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                   ((uint64_t)local_58 & 0xff000000) << 8 |
                   ((uint64_t)local_58 & 0xff0000) << 0x18 | ((uint64_t)local_58 & 0xff00) << 0x28
                   | CONCAT44(uStack_54,local_58) << 0x38;
          uVar22 = g_02764c60 >> 0x38 | (g_02764c60 & 0xff000000000000) >> 0x28 |
                   (g_02764c60 & 0xff0000000000) >> 0x18 | (g_02764c60 & 0xff00000000) >> 8 |
                   (g_02764c60 & 0xff000000) << 8 | (g_02764c60 & 0xff0000) << 0x18 |
                   (g_02764c60 & 0xff00) << 0x28 | g_02764c60 << 0x38;
          if (uVar21 == uVar22) {
            uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                     (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                     (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                     (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
            uVar22 = g_02764c68 >> 0x38 | (g_02764c68 & 0xff000000000000) >> 0x28 |
                     (g_02764c68 & 0xff0000000000) >> 0x18 | (g_02764c68 & 0xff00000000) >> 8 |
                     (g_02764c68 & 0xff000000) << 8 | (g_02764c68 & 0xff0000) << 0x18 |
                     (g_02764c68 & 0xff00) << 0x28 | g_02764c68 << 0x38;
            iVar11 = 0;
            if (uVar21 == uVar22) goto LAB_00ba3348;
          }
          iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
        }
LAB_00ba3348:
        if (iVar11 == 0) {
          (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
          if ((local_bd8 != '\0') && (local_be0 != 0)) {
            FUN_00d50b20();
          }
          local_b0 = local_b0 + local_c0;
          auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))();
          auVar34._8_8_ = extraout_XMM0_Qb_00;
          if ((local_bc8 != '\0') && (local_bd0 != 0)) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_01;
          }
        }
        else {
          if ((char)*local_d0 == '\0') {
            iVar11 = FUN_00e7de00(uVar33,4);
            uVar33 = extraout_XMM0_Qa_08;
          }
          else {
            uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                     (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                     (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                     (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                     ((uint64_t)local_58 & 0xff000000) << 8 |
                     ((uint64_t)local_58 & 0xff0000) << 0x18 |
                     ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
            uVar22 = g_02764c90 >> 0x38 | (g_02764c90 & 0xff000000000000) >> 0x28 |
                     (g_02764c90 & 0xff0000000000) >> 0x18 | (g_02764c90 & 0xff00000000) >> 8 |
                     (g_02764c90 & 0xff000000) << 8 | (g_02764c90 & 0xff0000) << 0x18 |
                     (g_02764c90 & 0xff00) << 0x28 | g_02764c90 << 0x38;
            if (uVar21 == uVar22) {
              uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                       (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                       (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                       (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
              uVar22 = g_02764c98 >> 0x38 | (g_02764c98 & 0xff000000000000) >> 0x28 |
                       (g_02764c98 & 0xff0000000000) >> 0x18 | (g_02764c98 & 0xff00000000) >> 8
                       | (g_02764c98 & 0xff000000) << 8 | (g_02764c98 & 0xff0000) << 0x18 |
                       (g_02764c98 & 0xff00) << 0x28 | g_02764c98 << 0x38;
              iVar11 = 0;
              if (uVar21 == uVar22) goto LAB_00ba3441;
            }
            iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
          }
LAB_00ba3441:
          if (iVar11 == 0) {
            (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
            if ((local_bb8 != '\0') && (local_bc0 != 0)) {
              FUN_00d50b20();
            }
            local_b0 = local_b0 + local_c0;
            auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))();
            auVar34._8_8_ = extraout_XMM0_Qb_02;
            if ((local_ba8 != '\0') && (local_bb0 != 0)) {
              auVar34._0_8_ = FUN_00d50b20();
              auVar34._8_8_ = extraout_XMM0_Qb_03;
            }
            goto LAB_00ba27c9;
          }
          if ((char)*local_d0 == '\0') {
            iVar11 = FUN_00e7de00(uVar33,4);
            uVar33 = extraout_XMM0_Qa_09;
          }
          else {
            uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                     (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                     (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                     (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                     ((uint64_t)local_58 & 0xff000000) << 8 |
                     ((uint64_t)local_58 & 0xff0000) << 0x18 |
                     ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38;
            uVar22 = g_02764c10 >> 0x38 | (g_02764c10 & 0xff000000000000) >> 0x28 |
                     (g_02764c10 & 0xff0000000000) >> 0x18 | (g_02764c10 & 0xff00000000) >> 8 |
                     (g_02764c10 & 0xff000000) << 8 | (g_02764c10 & 0xff0000) << 0x18 |
                     (g_02764c10 & 0xff00) << 0x28 | g_02764c10 << 0x38;
            if (uVar21 == uVar22) {
              uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                       (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                       (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                       (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
              uVar22 = g_02764c18 >> 0x38 | (g_02764c18 & 0xff000000000000) >> 0x28 |
                       (g_02764c18 & 0xff0000000000) >> 0x18 | (g_02764c18 & 0xff00000000) >> 8
                       | (g_02764c18 & 0xff000000) << 8 | (g_02764c18 & 0xff0000) << 0x18 |
                       (g_02764c18 & 0xff00) << 0x28 | g_02764c18 << 0x38;
              iVar11 = 0;
              if (uVar21 == uVar22) goto LAB_00ba3bc6;
            }
            iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
          }
LAB_00ba3bc6:
          if (iVar11 != 0) {
            if ((char)*local_d0 == '\0') {
              iVar11 = FUN_00e7de00(uVar33,4);
              if ((iVar11 == 0) || (iVar11 = FUN_00e7de00(extraout_XMM0_Qa_10,4), iVar11 == 0))
              goto LAB_00ba4835;
              uVar33 = extraout_XMM0_Qa_11;
              if ((char)*local_d0 != '\0') goto LAB_00ba3bf6;
              iVar11 = FUN_00e7de00(extraout_XMM0_Qa_11,4);
              uVar33 = extraout_XMM0_Qa_12;
            }
            else {
              auVar3._4_4_ = uStack_54;
              auVar3._0_4_ = local_58;
              auVar3._8_8_ = uStack_50;
              uVar33 = SUB168(auVar3 ^ g_02764c50,0);
              if ((auVar3 ^ g_02764c50) == (uint8_t  [16])0x0) {
LAB_00ba4835:
                local_dc = 4;
                uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x380))(&local_dc,&local_118);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_dc != 4;
                unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar31);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  uVar33 = FUN_00d50b20();
                }
                lVar24 = g_02764880;
                if (bVar30 || bVar31) {
                  if (g_02764880 != 0) {
                    FUN_00d50b00();
                  }
                  uVar33 = FUN_00cc78b0();
                  if (lVar24 != 0) {
                    uVar33 = FUN_00d50b20();
                  }
                }
                iVar11 = FUN_00e7de00(uVar33,4);
                plVar14 = g_02765270;
                if (iVar11 == 0) {
                  uVar33 = extraout_XMM0_Qa_13;
                  if (g_02765270 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                  }
                  local_6e0 = plVar14;
                  local_6d8 = '\x01';
                  auVar34._0_8_ = FUN_000175c0(uVar33,&local_6e0);
                  plVar14 = local_48;
                  auVar34._8_8_ = extraout_XMM0_Qb_50;
                  if (local_48 == (int64_t *)0x0) {
                    plVar14 = (int64_t *)0x0;
                    unaff_R15 = (int64_t *)0x0;
                  }
                  else if (cStack_40 == '\0') {
                    auVar34._0_8_ = FUN_00d50b00();
                    auVar34._8_8_ = extraout_XMM0_Qb_51;
                    unaff_R15 = (int64_t *)CONCAT71(uVar27,1);
                    if ((cStack_40 != '\0') &&
                       (unaff_R15 = (int64_t *)CONCAT71(uVar27,1), local_48 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_52;
                    }
                  }
                  else {
                    cStack_40 = '\0';
                    unaff_R15 = (int64_t *)CONCAT71(uVar27,1);
                  }
                  if ((local_6d8 != '\0') && (local_6e0 != (int64_t *)0x0)) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_53;
                  }
                  if (plVar14 == (int64_t *)0x0) {
                    plVar14 = (int64_t *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *plVar14 = (int64_t)local_130;
                    uVar33 = (*local_128)();
                    plVar17 = g_02765270;
                    local_6c8 = '\0';
                    local_6d0 = plVar14;
                    if (g_02765270 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b00();
                    }
                    local_48 = plVar17;
                    cStack_40 = '\0';
                    auVar34._0_8_ = FUN_00ca0840(uVar33,&local_48);
                    auVar34._8_8_ = extraout_XMM0_Qb_54;
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_55;
                    }
                    if (plVar17 != (int64_t *)0x0) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_56;
                    }
                    unaff_R15 = (int64_t *)CONCAT71((int7)((uint64_t)plVar17 >> 8),1);
                    if ((local_6c8 != '\0') && (local_6d0 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_57;
                    }
                  }
                  if (4 < local_c0) {
                    uVar21 = 4;
                    local_78 = (int64_t *)0x0;
                    bVar30 = false;
                    local_b8 = unaff_R15;
                    local_a8 = plVar14;
                    do {
                      local_5c = local_dc;
                      (**(code **)(*(int64_t *)*plVar26 + 0x380))(&local_dc,&local_58);
                      bVar31 = local_48 != (int64_t *)0x0;
                      bVar32 = local_5c != local_dc;
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      lVar24 = g_02765700;
                      if (bVar31 || bVar32) {
                        if (g_02765700 != 0) {
                          FUN_00d50b00();
                        }
                        local_6c0 = lVar24;
                        local_6b8 = '\x01';
                        FUN_00cc78b0();
                        if ((local_6b8 != '\0') && (local_6c0 != 0)) {
                          FUN_00d50b20();
                        }
                      }
                      uVar33 = FUN_00ccd540(&local_5c,&local_94);
                      bVar31 = local_48 != (int64_t *)0x0;
                      bVar32 = local_5c != 4;
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      lVar24 = g_02765700;
                      if (bVar31 || bVar32) {
                        if (g_02765700 != 0) {
                          FUN_00d50b00();
                        }
                        local_6b0 = lVar24;
                        local_6a8 = '\x01';
                        uVar33 = FUN_00cc78b0();
                        if ((local_6a8 != '\0') && (local_6b0 != 0)) {
                          uVar33 = FUN_00d50b20();
                        }
                      }
                      iVar11 = FUN_00e7de00(uVar33,4);
                      if (iVar11 == 0) {
                        local_68 = '\0';
                        local_70 = (int64_t *)0x0;
                        FUN_00ccd540(&local_5c,&local_c8);
                        bVar31 = local_48 != (int64_t *)0x0;
                        bVar32 = local_5c != 4;
                        if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        lVar24 = g_02765700;
                        if (bVar31 || bVar32) {
                          if (g_02765700 != 0) {
                            FUN_00d50b00();
                          }
                          local_6a0 = lVar24;
                          local_698 = '\x01';
                          FUN_00cc78b0();
                          if ((local_698 != '\0') && (local_6a0 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                        lVar24 = g_02765700;
                        uVar21 = uVar21 + 0xc;
                        if ((int)local_94 < 5) {
                          if (local_94 != 4) {
                            if (g_02765700 != 0) {
                              FUN_00d50b00();
                            }
                            local_680 = lVar24;
                            local_678 = '\x01';
                            FUN_00cc78b0();
                            if ((local_678 != '\0') && (local_680 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                        }
                        else {
                          uVar33 = FUN_00ccd8f0(local_94 - 4,&local_70);
                          if (local_48 == (int64_t *)0x0) {
                            if (local_70 == (int64_t *)0x0) goto LAB_00ba7074;
                          }
                          else {
                            if (cStack_40 != '\0') {
                              FUN_00d50b20();
                            }
LAB_00ba7074:
                            lVar24 = g_02765700;
                            if (g_02765700 != 0) {
                              FUN_00d50b00();
                            }
                            local_690 = lVar24;
                            local_688 = '\x01';
                            uVar33 = FUN_00cc78b0();
                            if ((local_688 != '\0') && (local_690 != 0)) {
                              uVar33 = FUN_00d50b20();
                            }
                          }
                          uVar21 = uVar21 + (int64_t)(int)local_94;
                          if ((int)local_70[3] < 2) {
                            local_70 = (int64_t *)0x0;
                            if (local_68 != '\0') {
                              FUN_00d50b20();
                            }
                            local_68 = '\0';
                          }
                          else {
                            FUN_00c8e340(uVar33,0);
                          }
                        }
                        if ((local_94 & 1) != 0) {
                          FUN_00ccd300(&local_5c,&local_c1);
                          bVar31 = local_48 != (int64_t *)0x0;
                          bVar32 = local_5c != 1;
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          lVar24 = g_02765700;
                          if (bVar31 || bVar32) {
                            if (g_02765700 != 0) {
                              FUN_00d50b00();
                            }
                            local_670 = lVar24;
                            local_668 = '\x01';
                            FUN_00cc78b0();
                            if ((local_668 != '\0') && (local_670 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          uVar21 = uVar21 + 1;
                        }
                        plVar14 = (int64_t *)FUN_00e8fc40();
                        FUN_00022d50();
                        (**(code **)(*plVar14 + 0x18))();
                        if (plVar14 == local_78) {
                          if (bVar30) {
                            FUN_00d50b20();
                            plVar14 = local_78;
                            bVar31 = bVar30;
                          }
                          else {
                            bVar31 = true;
                            plVar14 = local_78;
                          }
                        }
                        else {
                          bVar31 = true;
                          if ((bVar30) && (local_78 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_78 = plVar14;
                        uVar33 = FUN_00d46530();
                        plVar17 = local_88;
                        local_358 = 0;
                        plVar14 = g_02765258;
                        if (local_80 == '\0') {
                          if (local_88 != (int64_t *)0x0) {
                            uVar33 = FUN_00d50b00();
                            plVar14 = g_02765258;
                          }
                        }
                        else {
                          local_80 = '\0';
                        }
                        local_358 = '\x01';
                        local_360 = plVar17;
                        g_02765258 = plVar14;
                        if (plVar14 != (int64_t *)0x0) {
                          local_358 = '\x01';
                          uVar33 = FUN_00d50b00();
                        }
                        cStack_40 = '\0';
                        local_48 = plVar14;
                        uVar33 = FUN_00ca0840(uVar33,&local_48);
                        if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                          uVar33 = FUN_00d50b20();
                        }
                        if (plVar14 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b20();
                        }
                        if ((local_358 != '\0') && (local_360 != (int64_t *)0x0)) {
                          uVar33 = FUN_00d50b20();
                        }
                        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                          uVar33 = FUN_00d50b20();
                        }
                        if (local_70 == (int64_t *)0x0) {
                          uVar33 = FUN_00d8ede0();
                          plVar17 = local_88;
                          local_338 = 0;
                          plVar14 = g_02765278;
                          if (local_80 == '\0') {
                            if (local_88 != (int64_t *)0x0) {
                              uVar33 = FUN_00d50b00();
                              plVar14 = g_02765278;
                            }
                          }
                          else {
                            local_80 = '\0';
                          }
                          local_338 = '\x01';
                          local_340 = plVar17;
                          g_02765278 = plVar14;
                          if (plVar14 != (int64_t *)0x0) {
                            local_338 = '\x01';
                            uVar33 = FUN_00d50b00();
                          }
                          cStack_40 = '\0';
                          local_48 = plVar14;
                          FUN_00ca0840(uVar33,&local_48);
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (plVar14 != (int64_t *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((local_338 != '\0') && (local_340 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        else {
                          local_660 = local_70;
                          local_658 = '\0';
                          uVar33 = FUN_00d93320(uVar33,4);
                          plVar17 = local_88;
                          local_348 = 0;
                          plVar14 = g_02765278;
                          if (local_80 == '\0') {
                            if (local_88 != (int64_t *)0x0) {
                              uVar33 = FUN_00d50b00();
                              plVar14 = g_02765278;
                            }
                          }
                          else {
                            local_80 = '\0';
                          }
                          local_348 = '\x01';
                          local_350 = plVar17;
                          g_02765278 = plVar14;
                          if (plVar14 != (int64_t *)0x0) {
                            local_348 = '\x01';
                            uVar33 = FUN_00d50b00();
                          }
                          cStack_40 = '\0';
                          local_48 = plVar14;
                          FUN_00ca0840(uVar33,&local_48);
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if (plVar14 != (int64_t *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((local_348 != '\0') && (local_350 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_658 != '\0') && (local_660 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        local_48 = local_78;
                        cStack_40 = '\0';
                        auVar34._0_8_ = FUN_00d21140();
                        auVar34._8_8_ = extraout_XMM0_Qb_60;
                        if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                          auVar34._0_8_ = FUN_00d50b20();
                          auVar34._8_8_ = extraout_XMM0_Qb_61;
                        }
                        bVar30 = bVar31;
                        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                          auVar34._0_8_ = FUN_00d50b20();
                          auVar34._8_8_ = extraout_XMM0_Qb_62;
                        }
                      }
                      else {
                        iVar11 = FUN_00e7de00(extraout_XMM0_Qa_18,4);
                        if (iVar11 == 0) {
                          FUN_00ccd540(&local_5c,local_fc);
                          bVar31 = local_48 != (int64_t *)0x0;
                          bVar32 = local_5c != 4;
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          lVar24 = g_02765700;
                          if (bVar31 || bVar32) {
                            if (g_02765700 != 0) {
                              FUN_00d50b00();
                            }
                            local_650 = lVar24;
                            local_648 = '\x01';
                            FUN_00cc78b0();
                            if ((local_648 != '\0') && (local_650 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          lVar24 = g_02765700;
                          uVar21 = uVar21 + 0xc;
                          if ((int)local_94 < 5) {
                            if (local_94 != 4) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_630 = lVar24;
                              local_628 = '\x01';
                              FUN_00cc78b0();
                              if ((local_628 != '\0') && (local_630 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                          }
                          else {
                            uVar33 = FUN_00ccd8f0(local_94 - 4,&local_f0);
                            if (local_48 == (int64_t *)0x0) {
                              if (local_f0 == 0) goto LAB_00ba763b;
                            }
                            else {
                              if (cStack_40 != '\0') {
                                FUN_00d50b20();
                              }
LAB_00ba763b:
                              lVar24 = g_02765700;
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_640 = lVar24;
                              local_638 = '\x01';
                              uVar33 = FUN_00cc78b0();
                              if ((local_638 != '\0') && (local_640 != 0)) {
                                uVar33 = FUN_00d50b20();
                              }
                            }
                            uVar21 = uVar21 + (int64_t)(int)local_94;
                            if (*(int *)(local_f0 + 0x18) != 0) {
                              FUN_00c8e340(uVar33,0);
                            }
                          }
                          if ((local_94 & 1) != 0) {
                            FUN_00ccd300(&local_5c,&local_c1);
                            bVar31 = local_48 != (int64_t *)0x0;
                            bVar32 = local_5c != 1;
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar24 = g_02765700;
                            if (bVar31 || bVar32) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_620 = lVar24;
                              local_618 = '\x01';
                              FUN_00cc78b0();
                              if ((local_618 != '\0') && (local_620 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            uVar21 = uVar21 + 1;
                          }
                          plVar14 = (int64_t *)FUN_00e8fc40();
                          FUN_00022d50();
                          (**(code **)(*plVar14 + 0x18))();
                          if (plVar14 == local_78) {
                            if (bVar30) {
                              FUN_00d50b20();
                              plVar14 = local_78;
                              bVar31 = bVar30;
                            }
                            else {
                              bVar31 = true;
                              plVar14 = local_78;
                            }
                          }
                          else {
                            bVar31 = true;
                            if ((bVar30) && (local_78 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          local_78 = plVar14;
                          uVar33 = FUN_00d46530();
                          plVar17 = local_70;
                          local_328 = 0;
                          plVar14 = g_02765258;
                          if (local_68 == '\0') {
                            if (local_70 != (int64_t *)0x0) {
                              uVar33 = FUN_00d50b00();
                              plVar14 = g_02765258;
                            }
                          }
                          else {
                            local_68 = '\0';
                          }
                          local_328 = '\x01';
                          local_330 = plVar17;
                          g_02765258 = plVar14;
                          if (plVar14 != (int64_t *)0x0) {
                            local_328 = '\x01';
                            uVar33 = FUN_00d50b00();
                          }
                          cStack_40 = '\0';
                          local_48 = plVar14;
                          uVar33 = FUN_00ca0840(uVar33,&local_48);
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            uVar33 = FUN_00d50b20();
                          }
                          if (plVar14 != (int64_t *)0x0) {
                            uVar33 = FUN_00d50b20();
                          }
                          if ((local_328 != '\0') && (local_330 != (int64_t *)0x0)) {
                            uVar33 = FUN_00d50b20();
                          }
                          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                            uVar33 = FUN_00d50b20();
                          }
                          if (local_f0 == 0) {
                            uVar33 = FUN_00d8ede0();
                            plVar17 = local_70;
                            local_308 = 0;
                            plVar14 = g_02765280;
                            if (local_68 == '\0') {
                              if (local_70 != (int64_t *)0x0) {
                                uVar33 = FUN_00d50b00();
                                plVar14 = g_02765280;
                              }
                            }
                            else {
                              local_68 = '\0';
                            }
                            local_308 = '\x01';
                            local_310 = plVar17;
                            g_02765280 = plVar14;
                            if (plVar14 != (int64_t *)0x0) {
                              local_308 = '\x01';
                              uVar33 = FUN_00d50b00();
                            }
                            cStack_40 = '\0';
                            local_48 = plVar14;
                            FUN_00ca0840(uVar33,&local_48);
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar14 != (int64_t *)0x0) {
                              FUN_00d50b20();
                            }
                            if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          else {
                            local_610 = local_f0;
                            local_608 = '\0';
                            uVar33 = FUN_00d93320(uVar33,4);
                            plVar17 = local_70;
                            local_318 = 0;
                            plVar14 = g_02765280;
                            if (local_68 == '\0') {
                              if (local_70 != (int64_t *)0x0) {
                                uVar33 = FUN_00d50b00();
                                plVar14 = g_02765280;
                              }
                            }
                            else {
                              local_68 = '\0';
                            }
                            local_318 = '\x01';
                            local_320 = plVar17;
                            g_02765280 = plVar14;
                            if (plVar14 != (int64_t *)0x0) {
                              local_318 = '\x01';
                              uVar33 = FUN_00d50b00();
                            }
                            cStack_40 = '\0';
                            local_48 = plVar14;
                            FUN_00ca0840(uVar33,&local_48);
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar14 != (int64_t *)0x0) {
                              FUN_00d50b20();
                            }
                            if ((local_318 != '\0') && (local_320 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_608 != '\0') && (local_610 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          local_48 = local_78;
                          cStack_40 = '\0';
                          auVar34._0_8_ = FUN_00d21140();
                          auVar34._8_8_ = extraout_XMM0_Qb_63;
                          bVar30 = bVar31;
                          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                            auVar34._0_8_ = FUN_00d50b20();
                            auVar34._8_8_ = extraout_XMM0_Qb_64;
                          }
                        }
                        else {
                          iVar11 = FUN_00e7de00(extraout_XMM0_Qa_19,4);
                          if (iVar11 == 0) {
                            local_68 = '\0';
                            local_70 = (int64_t *)0x0;
                            FUN_00ccd540(&local_5c,local_fc);
                            bVar31 = local_48 != (int64_t *)0x0;
                            bVar32 = local_5c != 4;
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar24 = g_02765700;
                            if (bVar31 || bVar32) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_600 = lVar24;
                              local_5f8 = '\x01';
                              FUN_00cc78b0();
                              if ((local_5f8 != '\0') && (local_600 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            FUN_00ccd540(&local_5c,&local_c8);
                            bVar31 = local_48 != (int64_t *)0x0;
                            bVar32 = local_5c != 4;
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar24 = g_02765700;
                            if (bVar31 || bVar32) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_5f0 = lVar24;
                              local_5e8 = '\x01';
                              FUN_00cc78b0();
                              if ((local_5e8 != '\0') && (local_5f0 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            FUN_00ccd8f0(0xc,&local_70);
                            if (local_48 == (int64_t *)0x0) {
                              if (local_70 == (int64_t *)0x0) goto LAB_00ba720c;
                            }
                            else {
                              if (cStack_40 != '\0') {
                                FUN_00d50b20();
                              }
LAB_00ba720c:
                              lVar24 = g_02765700;
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_5e0 = lVar24;
                              local_5d8 = '\x01';
                              FUN_00cc78b0();
                              if ((local_5d8 != '\0') && (local_5e0 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            lVar24 = g_02765700;
                            uVar21 = uVar21 + 0x1c;
                            if ((int)local_94 < 0x15) {
                              if (local_94 != 0x14) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_5c0 = lVar24;
                                local_5b8 = '\x01';
                                FUN_00cc78b0();
                                if ((local_5b8 != '\0') && (local_5c0 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            else {
                              uVar33 = FUN_00ccd8f0(local_94 - 0x14,&local_f0);
                              if (local_48 == (int64_t *)0x0) {
                                if (local_f0 == 0) goto LAB_00ba7ac7;
                              }
                              else {
                                if (cStack_40 != '\0') {
                                  FUN_00d50b20();
                                }
LAB_00ba7ac7:
                                lVar24 = g_02765700;
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_5d0 = lVar24;
                                local_5c8 = '\x01';
                                uVar33 = FUN_00cc78b0();
                                if ((local_5c8 != '\0') && (local_5d0 != 0)) {
                                  uVar33 = FUN_00d50b20();
                                }
                              }
                              uVar21 = (uVar21 + (int64_t)(int)local_94) - 0x14;
                              if (*(int *)(local_f0 + 0x18) != 0) {
                                FUN_00c8e340(uVar33,0);
                              }
                            }
                            if ((local_94 & 1) != 0) {
                              FUN_00ccd300(&local_5c,&local_c1);
                              bVar31 = local_48 != (int64_t *)0x0;
                              bVar32 = local_5c != 1;
                              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              lVar24 = g_02765700;
                              if (bVar31 || bVar32) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_5b0 = lVar24;
                                local_5a8 = '\x01';
                                FUN_00cc78b0();
                                if ((local_5a8 != '\0') && (local_5b0 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              uVar21 = uVar21 + 1;
                            }
                            plVar14 = (int64_t *)FUN_00e8fc40();
                            FUN_00022d50();
                            (**(code **)(*plVar14 + 0x18))();
                            if (plVar14 == local_78) {
                              if (bVar30) {
                                FUN_00d50b20();
                                plVar14 = local_78;
                                bVar31 = bVar30;
                              }
                              else {
                                bVar31 = true;
                                plVar14 = local_78;
                              }
                            }
                            else {
                              bVar31 = true;
                              if ((bVar30) && (local_78 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                            local_78 = plVar14;
                            uVar33 = FUN_00d46530();
                            plVar17 = local_88;
                            local_2f8 = 0;
                            plVar14 = g_02765258;
                            if (local_80 == '\0') {
                              if (local_88 != (int64_t *)0x0) {
                                uVar33 = FUN_00d50b00();
                                plVar14 = g_02765258;
                              }
                            }
                            else {
                              local_80 = '\0';
                            }
                            local_2f8 = '\x01';
                            local_300 = plVar17;
                            g_02765258 = plVar14;
                            if (plVar14 != (int64_t *)0x0) {
                              local_2f8 = '\x01';
                              uVar33 = FUN_00d50b00();
                            }
                            cStack_40 = '\0';
                            local_48 = plVar14;
                            FUN_00ca0840(uVar33,&local_48);
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar14 != (int64_t *)0x0) {
                              FUN_00d50b20();
                            }
                            if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            uVar33 = FUN_00d46530();
                            plVar17 = local_88;
                            local_2e8 = 0;
                            plVar14 = g_02765288;
                            if (local_80 == '\0') {
                              if (local_88 != (int64_t *)0x0) {
                                uVar33 = FUN_00d50b00();
                                plVar14 = g_02765288;
                              }
                            }
                            else {
                              local_80 = '\0';
                            }
                            local_2e8 = '\x01';
                            local_2f0 = plVar17;
                            g_02765288 = plVar14;
                            if (plVar14 != (int64_t *)0x0) {
                              local_2e8 = '\x01';
                              uVar33 = FUN_00d50b00();
                            }
                            cStack_40 = '\0';
                            local_48 = plVar14;
                            uVar33 = FUN_00ca0840(uVar33,&local_48);
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            if (plVar14 != (int64_t *)0x0) {
                              uVar33 = FUN_00d50b20();
                            }
                            if ((local_2e8 != '\0') && (local_2f0 != (int64_t *)0x0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            if (local_f0 != 0) {
                              local_5a0 = local_f0;
                              local_598 = '\0';
                              uVar33 = FUN_00d93320(uVar33,4);
                              plVar17 = local_88;
                              local_2d8 = 0;
                              plVar14 = g_02765290;
                              if (local_80 == '\0') {
                                if (local_88 != (int64_t *)0x0) {
                                  uVar33 = FUN_00d50b00();
                                  plVar14 = g_02765290;
                                }
                              }
                              else {
                                local_80 = '\0';
                              }
                              local_2d8 = '\x01';
                              local_2e0 = plVar17;
                              g_02765290 = plVar14;
                              if (plVar14 != (int64_t *)0x0) {
                                local_2d8 = '\x01';
                                uVar33 = FUN_00d50b00();
                              }
                              cStack_40 = '\0';
                              local_48 = plVar14;
                              FUN_00ca0840(uVar33,&local_48);
                              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (plVar14 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                              if ((local_2d8 != '\0') && (local_2e0 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if ((local_598 != '\0') && (local_5a0 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            local_48 = local_78;
                            cStack_40 = '\0';
                            auVar34._0_8_ = FUN_00d21140();
                            auVar34._8_8_ = extraout_XMM0_Qb_65;
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              auVar34._0_8_ = FUN_00d50b20();
                              auVar34._8_8_ = extraout_XMM0_Qb_66;
                            }
                            bVar30 = bVar31;
                            if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                              auVar34._0_8_ = FUN_00d50b20();
                              auVar34._8_8_ = extraout_XMM0_Qb_67;
                            }
                          }
                          else {
                            lVar24 = (int64_t)(int)local_94;
                            uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))
                                               (extraout_XMM0_Qa_20,&local_d8);
                            if ((local_b78 != '\0') && (local_b80 != 0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            auVar34._0_8_ =
                                 (**(code **)(*(int64_t *)*plVar26 + 0x3a0))
                                           (uVar33,(int64_t)(int)local_94 + local_d8);
                            auVar34._8_8_ = extraout_XMM0_Qb_58;
                            uVar21 = uVar21 + 8 + lVar24;
                            if ((local_b68 != '\0') && (local_b70 != 0)) {
                              auVar34._0_8_ = FUN_00d50b20();
                              auVar34._8_8_ = extraout_XMM0_Qb_59;
                            }
                          }
                        }
                      }
                      plVar14 = local_a8;
                      unaff_R15 = local_b8;
                    } while (uVar21 < local_c0);
                    if ((bVar30) && (local_78 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_68;
                    }
                  }
                  if (((char)unaff_R15 != '\0') && (plVar14 != (int64_t *)0x0)) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_69;
                  }
                }
                else {
                  uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))
                                     (extraout_XMM0_Qa_13,&local_d8);
                  if ((local_b58 != '\0') && (local_b60 != 0)) {
                    uVar33 = FUN_00d50b20();
                  }
                  auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_d8 - 4);
                  auVar34._8_8_ = extraout_XMM0_Qb_33;
                  if ((local_b48 != '\0') && (local_b50 != 0)) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_34;
                  }
                  if (local_c0 != 0) {
                    auVar34._0_8_ = FUN_00ccd8f0(local_c0,&local_f0);
                    auVar34._8_8_ = extraout_XMM0_Qb_35;
                    bVar30 = local_48 == (int64_t *)0x0;
                    bVar31 = local_f0 != 0;
                    unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar31);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_36;
                    }
                    if (bVar30 && bVar31) {
                      FUN_00c8e2b0(auVar34._0_8_,4);
                      plVar14 = local_48;
                      if ((((cStack_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
                          (FUN_00d50b00(), cStack_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_590 = plVar14;
                      local_588 = '\0';
                      FUN_00d21140();
                      if ((local_588 != '\0') && (local_590 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_580 = local_f0;
                      local_578 = '\0';
                      auVar34._0_8_ = FUN_00d21140();
                      auVar34._8_8_ = extraout_XMM0_Qb_37;
                      if ((local_578 != '\0') && (local_580 != 0)) {
                        auVar34._0_8_ = FUN_00d50b20();
                        auVar34._8_8_ = extraout_XMM0_Qb_38;
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        auVar34._0_8_ = FUN_00d50b20();
                        auVar34._8_8_ = extraout_XMM0_Qb_39;
                      }
                    }
                  }
                }
                goto LAB_00ba27c9;
              }
LAB_00ba3bf6:
              uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                       (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                       (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                       (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                       ((uint64_t)local_58 & 0xff000000) << 8 |
                       ((uint64_t)local_58 & 0xff0000) << 0x18 |
                       ((uint64_t)local_58 & 0xff00) << 0x28 | CONCAT44(uStack_54,local_58) << 0x38
              ;
              uVar22 = g_02764c40 >> 0x38 | (g_02764c40 & 0xff000000000000) >> 0x28 |
                       (g_02764c40 & 0xff0000000000) >> 0x18 | (g_02764c40 & 0xff00000000) >> 8
                       | (g_02764c40 & 0xff000000) << 8 | (g_02764c40 & 0xff0000) << 0x18 |
                       (g_02764c40 & 0xff00) << 0x28 | g_02764c40 << 0x38;
              if (uVar21 == uVar22) {
                uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                         (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                         (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                         (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
                uVar22 = g_02764c48 >> 0x38 | (g_02764c48 & 0xff000000000000) >> 0x28 |
                         (g_02764c48 & 0xff0000000000) >> 0x18 |
                         (g_02764c48 & 0xff00000000) >> 8 | (g_02764c48 & 0xff000000) << 8 |
                         (g_02764c48 & 0xff0000) << 0x18 | (g_02764c48 & 0xff00) << 0x28 |
                         g_02764c48 << 0x38;
                iVar11 = 0;
                if (uVar21 == uVar22) goto LAB_00ba3c31;
              }
              iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
            }
LAB_00ba3c31:
            if (iVar11 == 0) {
              uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
              if ((local_b38 != '\0') && (local_b40 != 0)) {
                uVar33 = FUN_00d50b20();
              }
              local_b0 = local_b0 + local_c0;
              if (local_c0 != 0) {
                local_68 = '\0';
                local_70 = (int64_t *)0x0;
                uVar33 = FUN_00ccd8f0(local_c0,&local_70);
                if (local_48 == (int64_t *)0x0) {
                  if (local_70 != (int64_t *)0x0) {
                    (**(code **)(*this_ptr + 0x380))();
                    local_570 = local_70;
                    local_568 = '\0';
                    uVar33 = FUN_00bc2a40(local_70,&local_570);
                    unaff_R15 = local_48;
                    if (cStack_40 == '\0') {
                      if (((local_48 != (int64_t *)0x0) &&
                          (uVar33 = FUN_00d50b00(), cStack_40 != '\0')) &&
                         (local_48 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                    }
                    else {
                      cStack_40 = '\0';
                    }
                    if ((local_568 != '\0') && (local_570 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (unaff_R15 != (int64_t *)0x0) {
                      local_560 = unaff_R15;
                      local_558 = '\0';
                      uVar33 = (**(code **)(*unaff_R15 + 0x368))();
                      plVar14 = local_88;
                      if (local_80 == '\0') {
                        if (local_88 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                        }
                      }
                      else {
                        local_80 = '\0';
                      }
                      local_48 = plVar14;
                      cStack_40 = '\0';
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_558 != '\0') && (local_560 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00d50b20();
                    }
                  }
                }
                else if (cStack_40 != '\0') {
                  uVar33 = FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  uVar33 = FUN_00d50b20();
                }
              }
              auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
              auVar34._8_8_ = extraout_XMM0_Qb_87;
              if ((local_b28 != '\0') && (local_b30 != 0)) {
                auVar34._0_8_ = FUN_00d50b20();
                auVar34._8_8_ = extraout_XMM0_Qb_88;
              }
            }
            else {
              if ((char)*local_d0 == '\0') {
                iVar11 = FUN_00e7de00(uVar33,4);
                uVar33 = extraout_XMM0_Qa_15;
              }
              else {
                uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                         (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                         (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                         (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                         ((uint64_t)local_58 & 0xff000000) << 8 |
                         ((uint64_t)local_58 & 0xff0000) << 0x18 |
                         ((uint64_t)local_58 & 0xff00) << 0x28 |
                         CONCAT44(uStack_54,local_58) << 0x38;
                uVar22 = g_02764c80 >> 0x38 | (g_02764c80 & 0xff000000000000) >> 0x28 |
                         (g_02764c80 & 0xff0000000000) >> 0x18 |
                         (g_02764c80 & 0xff00000000) >> 8 | (g_02764c80 & 0xff000000) << 8 |
                         (g_02764c80 & 0xff0000) << 0x18 | (g_02764c80 & 0xff00) << 0x28 |
                         g_02764c80 << 0x38;
                if (uVar21 == uVar22) {
                  uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                           (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8 |
                           (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                           (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
                  uVar22 = g_02764c88 >> 0x38 | (g_02764c88 & 0xff000000000000) >> 0x28 |
                           (g_02764c88 & 0xff0000000000) >> 0x18 |
                           (g_02764c88 & 0xff00000000) >> 8 | (g_02764c88 & 0xff000000) << 8 |
                           (g_02764c88 & 0xff0000) << 0x18 | (g_02764c88 & 0xff00) << 0x28 |
                           g_02764c88 << 0x38;
                  iVar11 = 0;
                  if (uVar21 == uVar22) goto LAB_00ba4e67;
                }
                iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
              }
LAB_00ba4e67:
              if (iVar11 == 0) {
                (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
                if ((local_b18 != '\0') && (local_b20 != 0)) {
                  FUN_00d50b20();
                }
                local_b0 = local_b0 + local_c0;
                plVar14 = (int64_t *)FUN_00e8fc40();
                FUN_00022d50();
                (**(code **)(*plVar14 + 0x18))();
                local_78 = plVar14;
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_2c8 = 0;
                plVar14 = g_02765298;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_02765298;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_2c8 = '\x01';
                local_2d0 = plVar17;
                g_02765298 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_2c8 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_2c8 != '\0') && (local_2d0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_2b8 = 0;
                plVar14 = g_027652a0;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652a0;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_2b8 = '\x01';
                local_2c0 = plVar17;
                g_027652a0 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_2b8 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_2b8 != '\0') && (local_2c0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_2a8 = 0;
                plVar14 = g_027652a8;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652a8;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_2a8 = '\x01';
                local_2b0 = plVar17;
                g_027652a8 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_2a8 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_2a8 != '\0') && (local_2b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_298 = 0;
                plVar14 = g_027652b0;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652b0;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_298 = '\x01';
                local_2a0 = plVar17;
                g_027652b0 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_298 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_288 = 0;
                plVar14 = g_027652b8;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652b8;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_288 = '\x01';
                local_290 = plVar17;
                g_027652b8 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_288 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_278 = 0;
                plVar14 = g_027652c0;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652c0;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_278 = '\x01';
                local_280 = plVar17;
                g_027652c0 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_278 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar33 = FUN_00bae640();
                plVar17 = local_70;
                local_268 = 0;
                plVar14 = g_027652c8;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_027652c8;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_268 = '\x01';
                local_270 = plVar17;
                g_027652c8 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_268 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00ccd540(&local_5c,&local_88);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  local_550 = lVar24;
                  local_548 = '\x01';
                  FUN_00cc78b0();
                  if ((local_548 != '\0') && (local_550 != 0)) {
                    FUN_00d50b20();
                  }
                }
                uVar33 = FUN_00ccd540(&local_5c,&local_118);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  uVar33 = FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  local_540 = lVar24;
                  local_538 = '\x01';
                  uVar33 = FUN_00cc78b0();
                  if ((local_538 != '\0') && (local_540 != 0)) {
                    uVar33 = FUN_00d50b20();
                  }
                }
                local_a8 = (int64_t *)CONCAT44(local_a8._4_4_,(int)local_88);
                if ((int)local_88 == 0) {
                  unaff_R15 = (int64_t *)CONCAT71(uVar27,1);
                }
                else {
                  puVar15 = (void*)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar15 = local_130;
                  uVar33 = (*local_128)();
                  if (0 < (int)local_88) {
                    iVar11 = 0;
                    do {
                      plVar18 = (int64_t *)FUN_00e8fc40();
                      FUN_00022d50();
                      (**(code **)(*plVar18 + 0x18))();
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_258 = 0;
                      plVar14 = g_02765258;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_02765258;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_258 = '\x01';
                      local_260 = plVar17;
                      g_02765258 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_258 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_248 = 0;
                      plVar14 = g_027652d0;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_027652d0;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_248 = '\x01';
                      local_250 = plVar17;
                      g_027652d0 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_248 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_238 = 0;
                      plVar14 = g_027e2690;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_027e2690;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_238 = '\x01';
                      local_240 = plVar17;
                      g_027e2690 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_238 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_228 = 0;
                      plVar14 = g_027652e0;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_027652e0;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_228 = '\x01';
                      local_230 = plVar17;
                      g_027652e0 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_228 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_218 = 0;
                      plVar14 = g_027652e8;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_027652e8;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_218 = '\x01';
                      local_220 = plVar17;
                      g_027652e8 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_218 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae640();
                      plVar17 = local_70;
                      local_208 = 0;
                      plVar14 = g_027652f0;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar14 = g_027652f0;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_208 = '\x01';
                      local_210 = plVar17;
                      g_027652f0 = plVar14;
                      if (plVar14 != (int64_t *)0x0) {
                        local_208 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar18;
                      FUN_00d21140();
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00d50b20();
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < (int)local_88);
                    if (puVar15 == (void*)0x0) {
                      unaff_R15 = (int64_t *)CONCAT71((int7)((uint64_t)plVar18 >> 8),1);
                      goto joined_r0x00ba691a;
                    }
                  }
                  plVar14 = g_027652f8;
                  local_528 = '\0';
                  local_530 = puVar15;
                  if (g_027652f8 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                  }
                  local_48 = plVar14;
                  cStack_40 = '\0';
                  uVar33 = FUN_00ca0840(uVar33,&local_48);
                  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    uVar33 = FUN_00d50b20();
                  }
                  if (plVar14 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b20();
                  }
                  unaff_R15 = (int64_t *)0x0;
                  if ((local_528 != '\0') && (local_530 != (void*)0x0)) {
                    uVar33 = FUN_00d50b20();
                    unaff_R15 = (int64_t *)0x0;
                  }
                }
joined_r0x00ba691a:
                if (local_118 != 0) {
                  uVar33 = FUN_00ccd8f0(local_118,&local_f0);
                  if (local_48 == (int64_t *)0x0) {
                    if (local_f0 == 0) goto LAB_00ba81eb;
                  }
                  else {
                    if (cStack_40 != '\0') {
                      FUN_00d50b20();
                    }
LAB_00ba81eb:
                    lVar24 = g_02765700;
                    if (g_02765700 != 0) {
                      FUN_00d50b00();
                    }
                    local_520 = lVar24;
                    local_518 = '\x01';
                    uVar33 = FUN_00cc78b0();
                    if ((local_518 != '\0') && (local_520 != 0)) {
                      uVar33 = FUN_00d50b20();
                    }
                  }
                  plVar14 = g_02765300;
                  local_510 = local_f0;
                  local_508 = '\0';
                  if (g_02765300 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                  }
                  local_48 = plVar14;
                  cStack_40 = '\0';
                  uVar33 = FUN_00ca0840(uVar33,&local_48);
                  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    uVar33 = FUN_00d50b20();
                  }
                  if (plVar14 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b20();
                  }
                  if ((local_508 != '\0') && (local_510 != 0)) {
                    uVar33 = FUN_00d50b20();
                  }
                }
                plVar14 = g_02765308;
                local_500 = local_78;
                local_4f8 = '\0';
                if (g_02765308 != (int64_t *)0x0) {
                  uVar33 = FUN_00d50b00();
                }
                local_48 = plVar14;
                cStack_40 = '\0';
                uVar33 = FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  uVar33 = FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  uVar33 = FUN_00d50b20();
                }
                if ((local_4f8 != '\0') && (local_500 != (int64_t *)0x0)) {
                  uVar33 = FUN_00d50b20();
                }
                auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
                auVar34._8_8_ = extraout_XMM0_Qb_74;
                if ((local_b08 != '\0') && (local_b10 != 0)) {
                  auVar34._0_8_ = FUN_00d50b20();
                  auVar34._8_8_ = extraout_XMM0_Qb_75;
                }
                if (local_78 != (int64_t *)0x0) {
                  auVar34._0_8_ = FUN_00d50b20();
                  auVar34._8_8_ = extraout_XMM0_Qb_76;
                }
                if ((int)local_a8 != 0 && (char)unaff_R15 == '\0') {
                  auVar34._0_8_ = FUN_00d50b20();
                  auVar34._8_8_ = extraout_XMM0_Qb_77;
                }
              }
              else {
                if ((char)*local_d0 == '\0') {
                  iVar11 = FUN_00e7de00(uVar33,4);
                  uVar33 = extraout_XMM0_Qa_16;
                }
                else {
                  uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                           (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                           (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                           (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                           ((uint64_t)local_58 & 0xff000000) << 8 |
                           ((uint64_t)local_58 & 0xff0000) << 0x18 |
                           ((uint64_t)local_58 & 0xff00) << 0x28 |
                           CONCAT44(uStack_54,local_58) << 0x38;
                  uVar22 = g_02764c70 >> 0x38 | (g_02764c70 & 0xff000000000000) >> 0x28 |
                           (g_02764c70 & 0xff0000000000) >> 0x18 |
                           (g_02764c70 & 0xff00000000) >> 8 | (g_02764c70 & 0xff000000) << 8 |
                           (g_02764c70 & 0xff0000) << 0x18 | (g_02764c70 & 0xff00) << 0x28 |
                           g_02764c70 << 0x38;
                  if (uVar21 == uVar22) {
                    uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                             (uStack_50 & 0xff0000000000) >> 0x18 | (uStack_50 & 0xff00000000) >> 8
                             | (uStack_50 & 0xff000000) << 8 | (uStack_50 & 0xff0000) << 0x18 |
                             (uStack_50 & 0xff00) << 0x28 | uStack_50 << 0x38;
                    uVar22 = g_02764c78 >> 0x38 | (g_02764c78 & 0xff000000000000) >> 0x28 |
                             (g_02764c78 & 0xff0000000000) >> 0x18 |
                             (g_02764c78 & 0xff00000000) >> 8 | (g_02764c78 & 0xff000000) << 8 |
                             (g_02764c78 & 0xff0000) << 0x18 | (g_02764c78 & 0xff00) << 0x28 |
                             g_02764c78 << 0x38;
                    iVar11 = 0;
                    if (uVar21 == uVar22) goto LAB_00ba4f84;
                  }
                  iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
                }
LAB_00ba4f84:
                if (iVar11 == 0) {
                  (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
                  if ((local_af8 != '\0') && (local_b00 != 0)) {
                    FUN_00d50b20();
                  }
                  local_b0 = local_b0 + local_c0;
                  FUN_00ccd540(&local_5c,&local_88);
                  bVar30 = local_48 != (int64_t *)0x0;
                  bVar31 = local_5c != 4;
                  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  lVar24 = g_02765700;
                  if (bVar30 || bVar31) {
                    if (g_02765700 != 0) {
                      FUN_00d50b00();
                    }
                    local_4f0 = lVar24;
                    local_4e8 = '\x01';
                    FUN_00cc78b0();
                    if ((local_4e8 != '\0') && (local_4f0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  plVar14 = (int64_t *)FUN_00e8fc40();
                  FUN_00022d50();
                  uVar33 = (**(code **)(*plVar14 + 0x18))();
                  iVar11 = 0;
                  local_a8 = plVar14;
                  if ((int)local_88 < 1) {
                    local_78 = (int64_t *)0x0;
                    local_b8 = (int64_t *)0x0;
                  }
                  else {
                    local_b8 = (int64_t *)0x0;
                    local_78 = (int64_t *)0x0;
                    do {
                      plVar14 = (int64_t *)FUN_00e8fc40();
                      FUN_00022d50();
                      (**(code **)(*plVar14 + 0x18))();
                      if (local_78 == (int64_t *)0x0) {
                        plVar18 = (int64_t *)FUN_00e8fc40();
                        FUN_00d4ff40();
                        *plVar18 = (int64_t)local_130;
                        uVar33 = (*local_128)();
                        plVar17 = g_02765310;
                        local_4d8 = '\0';
                        local_4e0 = plVar18;
                        local_78 = plVar18;
                        if (g_02765310 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                        }
                        local_48 = plVar17;
                        cStack_40 = '\0';
                        uVar33 = FUN_00ca0840(uVar33,&local_48);
                        if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                          uVar33 = FUN_00d50b20();
                        }
                        if (plVar17 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b20();
                        }
                        local_b8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar33 >> 8),1);
                        if ((local_4d8 != '\0') && (local_4e0 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      uVar33 = FUN_00ccd8f0(0x10,&local_f0);
                      if (local_48 == (int64_t *)0x0) {
                        if (local_f0 == 0) goto LAB_00ba5220;
                      }
                      else {
                        if (cStack_40 != '\0') {
                          FUN_00d50b20();
                        }
LAB_00ba5220:
                        lVar24 = g_02765700;
                        if (g_02765700 != 0) {
                          FUN_00d50b00();
                        }
                        local_4d0 = lVar24;
                        local_4c8 = '\x01';
                        uVar33 = FUN_00cc78b0();
                        if ((local_4c8 != '\0') && (local_4d0 != 0)) {
                          uVar33 = FUN_00d50b20();
                        }
                      }
                      plVar17 = g_02764910;
                      local_4c0 = local_f0;
                      local_4b8 = '\0';
                      if (g_02764910 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                      }
                      local_48 = plVar17;
                      cStack_40 = '\0';
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_4b8 != '\0') && (local_4c0 != 0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae720();
                      plVar18 = local_70;
                      local_1f8 = 0;
                      plVar17 = g_02765320;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar17 = g_02765320;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_1f8 = '\x01';
                      local_200 = plVar18;
                      g_02765320 = plVar17;
                      if (plVar17 != (int64_t *)0x0) {
                        local_1f8 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar17;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae720();
                      plVar18 = local_70;
                      local_1e8 = 0;
                      plVar17 = g_02764920;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar17 = g_02764920;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_1e8 = '\x01';
                      local_1f0 = plVar18;
                      g_02764920 = plVar17;
                      if (plVar17 != (int64_t *)0x0) {
                        local_1e8 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar17;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae720();
                      plVar18 = local_70;
                      local_1d8 = 0;
                      plVar17 = g_02765330;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar17 = g_02765330;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_1d8 = '\x01';
                      local_1e0 = plVar18;
                      g_02765330 = plVar17;
                      if (plVar17 != (int64_t *)0x0) {
                        local_1d8 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar17;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae720();
                      plVar18 = local_70;
                      local_1c8 = 0;
                      plVar17 = g_02764930;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar17 = g_02764930;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_1c8 = '\x01';
                      local_1d0 = plVar18;
                      g_02764930 = plVar17;
                      if (plVar17 != (int64_t *)0x0) {
                        local_1c8 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar17;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      uVar33 = FUN_00bae720();
                      plVar18 = local_70;
                      local_1b8 = 0;
                      plVar17 = g_02765340;
                      if (local_68 == '\0') {
                        if (local_70 != (int64_t *)0x0) {
                          uVar33 = FUN_00d50b00();
                          plVar17 = g_02765340;
                        }
                      }
                      else {
                        local_68 = '\0';
                      }
                      local_1b8 = '\x01';
                      local_1c0 = plVar18;
                      g_02765340 = plVar17;
                      if (plVar17 != (int64_t *)0x0) {
                        local_1b8 = '\x01';
                        uVar33 = FUN_00d50b00();
                      }
                      cStack_40 = '\0';
                      local_48 = plVar17;
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar17 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00ccd300(&local_5c,&local_118);
                      if ((local_ae8 != '\0') && (local_af0 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((byte)local_118 == '\0') {
LAB_00ba58b9:
                        iVar23 = 0;
                        do {
                          FUN_00ccd300(&local_5c,&local_48);
                          if ((local_ad8 != '\0') && (local_ae0 != 0)) {
                            FUN_00d50b20();
                          }
                          iVar23 = iVar23 + 1;
                        } while (iVar23 < (int)(0x1f - (local_118 & 0xff)));
                      }
                      else {
                        uVar33 = FUN_00ccd8f0((byte)local_118,&local_f0);
                        if (local_48 == (int64_t *)0x0) {
                          if (local_f0 != 0) {
                            local_4b0 = local_f0;
                            local_4a8 = '\0';
                            uVar33 = FUN_00d93320(uVar33,4);
                            plVar17 = local_48;
                            if (cStack_40 == '\0') {
                              if (((local_48 != (int64_t *)0x0) &&
                                  (uVar33 = FUN_00d50b00(), cStack_40 != '\0')) &&
                                 (local_48 != (int64_t *)0x0)) {
                                uVar33 = FUN_00d50b20();
                              }
                            }
                            else {
                              cStack_40 = '\0';
                            }
                            if ((local_4a8 != '\0') && (local_4b0 != 0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            plVar18 = g_02729550;
                            if (plVar17 != (int64_t *)0x0) {
                              local_4a0 = plVar17;
                              local_498 = '\0';
                              if (g_02729550 != (int64_t *)0x0) {
                                uVar33 = FUN_00d50b00();
                              }
                              local_48 = plVar18;
                              cStack_40 = '\0';
                              FUN_00ca0840(uVar33,&local_48);
                              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (plVar18 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                              if ((local_498 != '\0') && (local_4a0 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              FUN_00d50b20();
                            }
                          }
                        }
                        else if (cStack_40 != '\0') {
                          FUN_00d50b20();
                        }
                        if ((byte)local_118 < 0x1f) goto LAB_00ba58b9;
                      }
                      cStack_40 = '\0';
                      local_48 = plVar14;
                      uVar33 = FUN_00d21140();
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b20();
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < (int)local_88);
                  }
                  plVar14 = g_02764940;
                  local_490 = local_a8;
                  local_488 = '\0';
                  if (g_02764940 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                  }
                  unaff_R15 = local_78;
                  local_48 = plVar14;
                  cStack_40 = '\0';
                  uVar33 = FUN_00ca0840(uVar33,&local_48);
                  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    uVar33 = FUN_00d50b20();
                  }
                  if (plVar14 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b20();
                  }
                  if ((local_488 != '\0') && (local_490 != (int64_t *)0x0)) {
                    uVar33 = FUN_00d50b20();
                  }
                  auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
                  auVar34._8_8_ = extraout_XMM0_Qb_70;
                  if ((local_ac8 != '\0') && (local_ad0 != 0)) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_71;
                  }
                  if (local_a8 != (int64_t *)0x0) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_72;
                  }
                  if (((char)local_b8 != '\0') && (unaff_R15 != (int64_t *)0x0)) {
                    auVar34._0_8_ = FUN_00d50b20();
                    auVar34._8_8_ = extraout_XMM0_Qb_73;
                  }
                }
                else {
                  if ((char)*local_d0 == '\0') {
                    iVar11 = FUN_00e7de00(uVar33,4);
                    uVar33 = extraout_XMM0_Qa_17;
                  }
                  else {
                    uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                             (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                             (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                             (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                             ((uint64_t)local_58 & 0xff000000) << 8 |
                             ((uint64_t)local_58 & 0xff0000) << 0x18 |
                             ((uint64_t)local_58 & 0xff00) << 0x28 |
                             CONCAT44(uStack_54,local_58) << 0x38;
                    uVar22 = g_02764bf0 >> 0x38 | (g_02764bf0 & 0xff000000000000) >> 0x28 |
                             (g_02764bf0 & 0xff0000000000) >> 0x18 |
                             (g_02764bf0 & 0xff00000000) >> 8 | (g_02764bf0 & 0xff000000) << 8 |
                             (g_02764bf0 & 0xff0000) << 0x18 | (g_02764bf0 & 0xff00) << 0x28 |
                             g_02764bf0 << 0x38;
                    if (uVar21 == uVar22) {
                      uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                               (uStack_50 & 0xff0000000000) >> 0x18 |
                               (uStack_50 & 0xff00000000) >> 8 | (uStack_50 & 0xff000000) << 8 |
                               (uStack_50 & 0xff0000) << 0x18 | (uStack_50 & 0xff00) << 0x28 |
                               uStack_50 << 0x38;
                      uVar22 = g_02764bf8 >> 0x38 | (g_02764bf8 & 0xff000000000000) >> 0x28 |
                               (g_02764bf8 & 0xff0000000000) >> 0x18 |
                               (g_02764bf8 & 0xff00000000) >> 8 | (g_02764bf8 & 0xff000000) << 8
                               | (g_02764bf8 & 0xff0000) << 0x18 | (g_02764bf8 & 0xff00) << 0x28
                               | g_02764bf8 << 0x38;
                      iVar11 = 0;
                      if (uVar21 == uVar22) goto LAB_00ba59a0;
                    }
                    iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
                  }
LAB_00ba59a0:
                  if (iVar11 == 0) {
                    local_68 = '\0';
                    local_70 = (int64_t *)0x0;
                    iVar11 = (int)local_c0;
                    (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
                    if ((local_ab8 != '\0') && (local_ac0 != 0)) {
                      FUN_00d50b20();
                    }
                    local_b0 = local_b0 + local_c0;
                    unaff_R15 = (int64_t *)FUN_00e8fc40();
                    FUN_00022d50();
                    uVar33 = (**(code **)(*unaff_R15 + 0x18))();
                    plVar14 = g_02765348;
                    local_478 = '\0';
                    local_480 = unaff_R15;
                    if (g_02765348 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b00();
                    }
                    local_48 = plVar14;
                    cStack_40 = '\0';
                    uVar33 = FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_478 != '\0') && (local_480 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae800(uVar33,0x100);
                    plVar17 = local_88;
                    local_1a8 = 0;
                    plVar14 = g_02765350;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765350;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_1a8 = '\x01';
                    local_1b0 = plVar17;
                    g_02765350 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_1a8 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    uVar33 = FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae800(uVar33,0x20);
                    plVar17 = local_88;
                    local_198 = 0;
                    plVar14 = g_02765358;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765358;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_198 = '\x01';
                    local_1a0 = plVar17;
                    g_02765358 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_198 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    uVar33 = FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae800(uVar33,0x20);
                    plVar17 = local_88;
                    local_188 = 0;
                    plVar14 = g_02765360;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765360;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_188 = '\x01';
                    local_190 = plVar17;
                    g_02765360 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_188 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    uVar33 = FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae800(uVar33,10);
                    plVar17 = local_88;
                    local_178 = 0;
                    plVar14 = g_02765368;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765368;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_178 = '\x01';
                    local_180 = plVar17;
                    g_02765368 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_178 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    uVar33 = FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae800(uVar33,8);
                    plVar17 = local_88;
                    local_168 = 0;
                    plVar14 = g_02765370;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765370;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_168 = '\x01';
                    local_170 = plVar17;
                    g_02765370 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_168 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae720();
                    plVar17 = local_88;
                    local_158 = 0;
                    plVar14 = g_02765378;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765378;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_158 = '\x01';
                    local_160 = plVar17;
                    g_02765378 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_158 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar33 = FUN_00bae9c0();
                    plVar17 = local_88;
                    local_148 = 0;
                    plVar14 = g_02765380;
                    if (local_80 == '\0') {
                      if (local_88 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                        plVar14 = g_02765380;
                      }
                    }
                    else {
                      local_80 = '\0';
                    }
                    local_148 = '\x01';
                    local_150 = plVar17;
                    g_02765380 = plVar14;
                    if (plVar14 != (int64_t *)0x0) {
                      local_148 = '\x01';
                      uVar33 = FUN_00d50b00();
                    }
                    cStack_40 = '\0';
                    local_48 = plVar14;
                    FUN_00ca0840(uVar33,&local_48);
                    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (plVar14 != (int64_t *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar33 = FUN_00ccd8f0(0x40,&local_70);
                    if ((local_aa8 != '\0') && (local_ab0 != 0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    plVar14 = g_02765388;
                    if (local_70 != (int64_t *)0x0) {
                      local_470 = local_70;
                      local_468 = '\0';
                      if (g_02765388 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                      }
                      local_48 = plVar14;
                      cStack_40 = '\0';
                      FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        FUN_00d50b20();
                      }
                      if ((local_468 != '\0') && (local_470 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    uVar33 = FUN_00ccd8f0(0xbe,&local_70);
                    if ((local_a98 != '\0') && (local_aa0 != 0)) {
                      uVar33 = FUN_00d50b20();
                    }
                    plVar14 = g_02765390;
                    if (local_70 != (int64_t *)0x0) {
                      local_460 = local_70;
                      local_458 = '\0';
                      if (g_02765390 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                      }
                      local_48 = plVar14;
                      cStack_40 = '\0';
                      uVar33 = FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b20();
                      }
                      if ((local_458 != '\0') && (local_460 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                    }
                    if (0x25a < iVar11) {
                      local_a0 = unaff_R15;
                      puVar15 = (void*)FUN_00e8fc40();
                      FUN_00d4ff40();
                      *puVar15 = local_130;
                      (*local_128)();
                      iVar11 = iVar11 + -0x25a;
                      local_80 = '\0';
                      local_88 = (int64_t *)0x0;
                      local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,iVar11);
                      local_3c0 = puVar15;
                      uVar33 = FUN_00ccd8f0(iVar11,&local_88);
                      if ((local_a88 != '\0') && (local_a90 != 0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      local_78 = (int64_t *)local_88[2];
                      uVar13 = 0;
                      local_120 = 0;
                      local_a8 = (int64_t *)0x0;
                      uVar25 = (uint)local_b8;
                      uVar12 = 0;
                      do {
                        while (((uVar12 == uVar25 ||
                                (*(char *)((int64_t)local_78 + (int64_t)(int)uVar12) == '\r')) ||
                               (*(char *)((int64_t)local_78 + (int64_t)(int)uVar12) == ','))) {
                          if (uVar12 - uVar13 == 0 || (int)uVar12 < (int)uVar13) {
                            uVar25 = (uint)local_b8;
                          }
                          else {
                            if (local_a8 == (int64_t *)0x0) {
                              plVar14 = (int64_t *)FUN_00e8fc40();
                              FUN_00d4ff40();
                              *plVar14 = (int64_t)local_130;
                              (*local_128)();
                              cStack_40 = '\0';
                              local_a8 = plVar14;
                              local_48 = plVar14;
                              uVar19 = FUN_00d21140();
                              uVar33 = extraout_XMM0_Qa_23;
                              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                                uVar19 = FUN_00d50b20();
                                uVar33 = extraout_XMM0_Qa_24;
                              }
                              local_120 = CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
                            }
                            FUN_00d8d3e0(uVar33,uVar12 - uVar13);
                            plVar14 = (int64_t *)CONCAT44(uStack_114,local_118);
                            uVar25 = (uint)local_b8;
                            if (local_110 == '\0') {
                              if (plVar14 != (int64_t *)0x0) {
                                FUN_00d50b00();
                              }
                            }
                            else {
                              local_110 = '\0';
                            }
                            cStack_40 = '\0';
                            local_48 = plVar14;
                            uVar33 = FUN_00d21140();
                            if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            if (plVar14 != (int64_t *)0x0) {
                              uVar33 = FUN_00d50b20();
                            }
                            if ((local_110 != '\0') && (CONCAT44(uStack_114,local_118) != 0)) {
                              uVar33 = FUN_00d50b20();
                            }
                          }
                          if (((int)uVar12 < (int)uVar25) &&
                             (*(char *)((int64_t)local_78 + (int64_t)(int)uVar12) == '\r')) {
                            uVar21 = (int64_t)(int)uVar12 + 1;
                            if (((uint)uVar21 == uVar25) ||
                               (*(char *)((int64_t)local_78 + uVar21) != '\n')) goto LAB_00ba8eec;
                            if (local_a8 == (int64_t *)0x0) {
                              local_a8 = (int64_t *)0x0;
                            }
                            else {
                              if ((char)local_120 != '\0') {
                                uVar33 = FUN_00d50b20();
                              }
                              local_a8 = (int64_t *)0x0;
                              local_120 = 0;
                            }
                          }
                          else {
                            uVar21 = (uint64_t)uVar12;
                          }
                          uVar13 = (int)uVar21 + 1;
                          uVar12 = uVar13;
                          if ((int)uVar25 <= (int)uVar21) goto LAB_00ba8eec;
                        }
                        bVar30 = (int)uVar12 < (int)uVar25;
                        uVar12 = uVar12 + 1;
                      } while (bVar30);
LAB_00ba8eec:
                      puVar15 = local_3c0;
                      plVar14 = g_02765398;
                      local_450 = local_3c0;
                      local_448 = '\0';
                      if (g_02765398 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b00();
                      }
                      unaff_R15 = local_a0;
                      plVar17 = local_a8;
                      local_48 = plVar14;
                      cStack_40 = '\0';
                      uVar33 = FUN_00ca0840(uVar33,&local_48);
                      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if (plVar14 != (int64_t *)0x0) {
                        uVar33 = FUN_00d50b20();
                      }
                      if ((local_448 != '\0') && (local_450 != (void*)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if (((char)local_120 != '\0') && (plVar17 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      if (puVar15 != (void*)0x0) {
                        uVar33 = FUN_00d50b20();
                      }
                    }
                    auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
                    auVar34._8_8_ = extraout_XMM0_Qb_78;
                    if ((local_a78 != '\0') && (local_a80 != 0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_79;
                    }
                    if (unaff_R15 != (int64_t *)0x0) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_80;
                    }
                    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_81;
                    }
                  }
                  else {
                    if ((char)*local_d0 == '\0') {
                      iVar11 = FUN_00e7de00(uVar33,4);
                      uVar33 = extraout_XMM0_Qa_21;
                    }
                    else {
                      uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                               (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                               (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                               (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                               ((uint64_t)local_58 & 0xff000000) << 8 |
                               ((uint64_t)local_58 & 0xff0000) << 0x18 |
                               ((uint64_t)local_58 & 0xff00) << 0x28 |
                               CONCAT44(uStack_54,local_58) << 0x38;
                      uVar22 = g_02764bd0 >> 0x38 | (g_02764bd0 & 0xff000000000000) >> 0x28 |
                               (g_02764bd0 & 0xff0000000000) >> 0x18 |
                               (g_02764bd0 & 0xff00000000) >> 8 | (g_02764bd0 & 0xff000000) << 8
                               | (g_02764bd0 & 0xff0000) << 0x18 | (g_02764bd0 & 0xff00) << 0x28
                               | g_02764bd0 << 0x38;
                      if (uVar21 == uVar22) {
                        uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                                 (uStack_50 & 0xff0000000000) >> 0x18 |
                                 (uStack_50 & 0xff00000000) >> 8 | (uStack_50 & 0xff000000) << 8 |
                                 (uStack_50 & 0xff0000) << 0x18 | (uStack_50 & 0xff00) << 0x28 |
                                 uStack_50 << 0x38;
                        uVar22 = g_02764bd8 >> 0x38 | (g_02764bd8 & 0xff000000000000) >> 0x28 |
                                 (g_02764bd8 & 0xff0000000000) >> 0x18 |
                                 (g_02764bd8 & 0xff00000000) >> 8 |
                                 (g_02764bd8 & 0xff000000) << 8 |
                                 (g_02764bd8 & 0xff0000) << 0x18 | (g_02764bd8 & 0xff00) << 0x28
                                 | g_02764bd8 << 0x38;
                        iVar11 = 0;
                        if (uVar21 == uVar22) goto LAB_00ba7f9b;
                      }
                      iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
                    }
LAB_00ba7f9b:
                    if (iVar11 != 0) {
                      if ((char)*local_d0 == '\0') {
                        iVar11 = FUN_00e7de00(uVar33,4);
                        uVar33 = extraout_XMM0_Qa_22;
                      }
                      else {
                        uVar21 = (uint64_t)(uStack_54 >> 0x18) |
                                 (((uint64_t)uStack_54 & 0xff0000) << 0x20) >> 0x28 |
                                 (((uint64_t)uStack_54 & 0xff00) << 0x20) >> 0x18 |
                                 (((uint64_t)uStack_54 & 0xff) << 0x20) >> 8 |
                                 ((uint64_t)local_58 & 0xff000000) << 8 |
                                 ((uint64_t)local_58 & 0xff0000) << 0x18 |
                                 ((uint64_t)local_58 & 0xff00) << 0x28 |
                                 CONCAT44(uStack_54,local_58) << 0x38;
                        uVar22 = g_02764be0 >> 0x38 | (g_02764be0 & 0xff000000000000) >> 0x28 |
                                 (g_02764be0 & 0xff0000000000) >> 0x18 |
                                 (g_02764be0 & 0xff00000000) >> 8 |
                                 (g_02764be0 & 0xff000000) << 8 |
                                 (g_02764be0 & 0xff0000) << 0x18 | (g_02764be0 & 0xff00) << 0x28
                                 | g_02764be0 << 0x38;
                        if (uVar21 == uVar22) {
                          uVar21 = uStack_50 >> 0x38 | (uStack_50 & 0xff000000000000) >> 0x28 |
                                   (uStack_50 & 0xff0000000000) >> 0x18 |
                                   (uStack_50 & 0xff00000000) >> 8 | (uStack_50 & 0xff000000) << 8 |
                                   (uStack_50 & 0xff0000) << 0x18 | (uStack_50 & 0xff00) << 0x28 |
                                   uStack_50 << 0x38;
                          uVar22 = g_02764be8 >> 0x38 | (g_02764be8 & 0xff000000000000) >> 0x28
                                   | (g_02764be8 & 0xff0000000000) >> 0x18 |
                                   (g_02764be8 & 0xff00000000) >> 8 |
                                   (g_02764be8 & 0xff000000) << 8 |
                                   (g_02764be8 & 0xff0000) << 0x18 |
                                   (g_02764be8 & 0xff00) << 0x28 | g_02764be8 << 0x38;
                          iVar11 = 0;
                          if (uVar21 == uVar22) goto LAB_00ba83aa;
                        }
                        iVar11 = (uint)(uVar22 <= uVar21) * 2 + -1;
                      }
LAB_00ba83aa:
                      if (iVar11 == 0) {
                        uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
                        if ((local_a48 != '\0') && (local_a50 != 0)) {
                          uVar33 = FUN_00d50b20();
                        }
                        local_b0 = local_b0 + local_c0;
                        if (local_c0 != 0) {
                          local_68 = '\0';
                          local_70 = (int64_t *)0x0;
                          uVar33 = FUN_00ccd8f0(local_c0,&local_70);
                          if ((local_a38 != '\0') && (local_a40 != 0)) {
                            uVar33 = FUN_00d50b20();
                          }
                          if (local_70 != (int64_t *)0x0) {
                            (**(code **)(*this_ptr + 0x380))();
                            local_430 = local_70;
                            local_428 = '\0';
                            uVar33 = FUN_00bc0e10(local_70,&local_430);
                            unaff_R15 = local_48;
                            if (cStack_40 == '\0') {
                              if (((local_48 != (int64_t *)0x0) &&
                                  (uVar33 = FUN_00d50b00(), cStack_40 != '\0')) &&
                                 (local_48 != (int64_t *)0x0)) {
                                uVar33 = FUN_00d50b20();
                              }
                            }
                            else {
                              cStack_40 = '\0';
                            }
                            if ((local_428 != '\0') && (local_430 != (int64_t *)0x0)) {
                              uVar33 = FUN_00d50b20();
                            }
                            if (unaff_R15 != (int64_t *)0x0) {
                              local_420 = unaff_R15;
                              local_418 = '\0';
                              uVar33 = (**(code **)(*unaff_R15 + 0x368))();
                              plVar14 = local_88;
                              if (local_80 == '\0') {
                                if (local_88 != (int64_t *)0x0) {
                                  uVar33 = FUN_00d50b00();
                                }
                              }
                              else {
                                local_80 = '\0';
                              }
                              local_48 = plVar14;
                              cStack_40 = '\0';
                              FUN_00ca0840(uVar33,&local_48);
                              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (plVar14 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                              if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if ((local_418 != '\0') && (local_420 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              uVar33 = FUN_00d50b20();
                            }
                          }
                          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                            uVar33 = FUN_00d50b20();
                          }
                        }
                        auVar34._0_8_ =
                             (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
                        auVar34._8_8_ = extraout_XMM0_Qb_94;
                        if ((local_a28 != '\0') && (local_a30 != 0)) {
                          auVar34._0_8_ = FUN_00d50b20();
                          auVar34._8_8_ = extraout_XMM0_Qb_95;
                        }
                        goto LAB_00ba27c9;
                      }
                      if ((char)*local_d0 == '\0') {
                        iVar11 = FUN_00e7de00(uVar33,4);
                        uVar33 = extraout_XMM0_Qa_25;
                        if ((iVar11 != 0) &&
                           (iVar11 = FUN_00e7de00(extraout_XMM0_Qa_25,4),
                           uVar33 = extraout_XMM0_Qa_26, iVar11 != 0)) {
                          iVar11 = FUN_00e7de00(extraout_XMM0_Qa_26,4);
                          auVar34._8_8_ = extraout_XMM0_Qb_82;
                          auVar34._0_8_ = extraout_XMM0_Qa_27;
                          uVar33 = extraout_XMM0_Qa_27;
                          if (iVar11 != 0) goto LAB_00ba9079;
                        }
                      }
                      else {
                        auVar4._4_4_ = uStack_54;
                        auVar4._0_4_ = local_58;
                        auVar4._8_8_ = uStack_50;
                        uVar33 = SUB168(auVar4 ^ g_02764ca0,0);
                        if ((auVar4 ^ g_02764ca0) != (uint8_t  [16])0x0) {
                          auVar5._4_4_ = uStack_54;
                          auVar5._0_4_ = local_58;
                          auVar5._8_8_ = uStack_50;
                          auVar34 = auVar5 ^ g_02764cb0;
                          if (auVar34 != (uint8_t  [16])0x0) {
LAB_00ba9079:
                            if (local_c0 != 0) {
                              auVar34._0_8_ = FUN_00ccd8f0(local_c0,&local_f0);
                              auVar34._8_8_ = extraout_XMM0_Qb_83;
                              if (local_48 == (int64_t *)0x0) {
                                if (local_f0 != 0) {
                                  uVar33 = 0x10;
                                  if ((char)*local_d0 == '\0') {
                                    uVar33 = 4;
                                  }
                                  FUN_00c8e2b0(auVar34._0_8_,uVar33);
                                  plVar14 = local_48;
                                  if ((((cStack_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
                                      (FUN_00d50b00(), cStack_40 != '\0')) &&
                                     (local_48 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  local_410 = plVar14;
                                  local_408 = '\0';
                                  FUN_00d21140();
                                  if ((local_408 != '\0') && (local_410 != (int64_t *)0x0)) {
                                    FUN_00d50b20();
                                  }
                                  local_400 = local_f0;
                                  local_3f8 = '\0';
                                  auVar34._0_8_ = FUN_00d21140();
                                  auVar34._8_8_ = extraout_XMM0_Qb_91;
                                  if ((local_3f8 != '\0') && (local_400 != 0)) {
                                    auVar34._0_8_ = FUN_00d50b20();
                                    auVar34._8_8_ = extraout_XMM0_Qb_92;
                                  }
                                  if (plVar14 != (int64_t *)0x0) {
                                    auVar34._0_8_ = FUN_00d50b20();
                                    auVar34._8_8_ = extraout_XMM0_Qb_93;
                                  }
                                }
                              }
                              else if (cStack_40 != '\0') {
                                auVar34._0_8_ = FUN_00d50b20();
                                auVar34._8_8_ = extraout_XMM0_Qb_84;
                              }
                            }
                            goto LAB_00ba27c9;
                          }
                          uVar33 = 0;
                        }
                      }
                      uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_d8);
                      if ((local_a18 != '\0') && (local_a20 != 0)) {
                        uVar33 = FUN_00d50b20();
                      }
                      auVar34._0_8_ =
                           (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_c0 + local_d8);
                      auVar34._8_8_ = extraout_XMM0_Qb_85;
                      if ((local_a08 != '\0') && (local_a10 != 0)) {
                        auVar34._0_8_ = FUN_00d50b20();
                        auVar34._8_8_ = extraout_XMM0_Qb_86;
                      }
                      goto LAB_00ba27c9;
                    }
                    (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
                    if ((local_a68 != '\0') && (local_a70 != 0)) {
                      FUN_00d50b20();
                    }
                    uVar21 = local_c0;
                    if (local_c0 != 0) {
                      local_3d8 = 0;
                      lVar24 = *plVar26;
                      if (lVar24 != 0) {
                        FUN_00d50b00();
                      }
                      local_3d8 = '\x01';
                      local_3e0 = lVar24;
                      FUN_00be1550(&local_3e0,uVar21);
                      unaff_R15 = local_48;
                      if (cStack_40 == '\0') {
                        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), cStack_40 != '\0'))
                           && (local_48 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                      else {
                        cStack_40 = '\0';
                      }
                      if ((local_3d8 != '\0') && (local_3e0 != 0)) {
                        FUN_00d50b20();
                      }
                      if (unaff_R15 != (int64_t *)0x0) {
                        local_440 = unaff_R15;
                        local_438 = '\0';
                        uVar33 = (**(code **)(*unaff_R15 + 0x368))();
                        plVar14 = local_70;
                        if (local_68 == '\0') {
                          if (local_70 != (int64_t *)0x0) {
                            uVar33 = FUN_00d50b00();
                          }
                        }
                        else {
                          local_68 = '\0';
                        }
                        local_48 = plVar14;
                        cStack_40 = '\0';
                        FUN_00ca0840(uVar33,&local_48);
                        if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar14 != (int64_t *)0x0) {
                          FUN_00d50b20();
                        }
                        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_438 != '\0') && (local_440 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        FUN_00d50b20();
                      }
                    }
                    local_b0 = local_b0 + local_c0;
                    auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))();
                    auVar34._8_8_ = extraout_XMM0_Qb_89;
                    if ((local_a58 != '\0') && (local_a60 != 0)) {
                      auVar34._0_8_ = FUN_00d50b20();
                      auVar34._8_8_ = extraout_XMM0_Qb_90;
                    }
                  }
                }
              }
            }
            goto LAB_00ba27c9;
          }
          (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_b0);
          if ((local_b98 != '\0') && (local_ba0 != 0)) {
            FUN_00d50b20();
          }
          local_b0 = local_b0 + local_c0;
          FUN_00ccd6d0(&local_5c,&local_94);
          bVar30 = local_48 != (int64_t *)0x0;
          bVar31 = local_5c != 4;
          unaff_R15 = (int64_t *)CONCAT71(uVar27,bVar31);
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar24 = g_02765700;
          if (bVar30 || bVar31) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
          }
          lVar24 = g_02765700;
          if (((char)*local_d0 == '\0') && (local_c0 < (local_94 * 0x18 | 4))) {
            if (g_02765700 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar24 != 0) {
              FUN_00d50b20();
            }
          }
          plVar14 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar14 = (int64_t)local_130;
          uVar33 = (*local_128)();
          local_78 = plVar14;
          if (local_94 != 0) {
            uVar25 = 0;
            do {
              unaff_R15 = (int64_t *)FUN_00e8fc40();
              FUN_00022d50();
              (**(code **)(*unaff_R15 + 0x18))();
              FUN_00ccd540(&local_5c,local_fc);
              bVar30 = local_48 != (int64_t *)0x0;
              bVar31 = local_5c != 4;
              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar24 = g_02765700;
              if (bVar30 || bVar31) {
                if (g_02765700 != 0) {
                  FUN_00d50b00();
                }
                FUN_00cc78b0();
                if (lVar24 != 0) {
                  FUN_00d50b20();
                }
              }
              uVar33 = FUN_00d46530();
              plVar17 = local_70;
              local_388 = 0;
              plVar14 = g_02765258;
              if (local_68 == '\0') {
                if (local_70 != (int64_t *)0x0) {
                  uVar33 = FUN_00d50b00();
                  plVar14 = g_02765258;
                }
              }
              else {
                local_68 = '\0';
              }
              local_388 = '\x01';
              local_390 = plVar17;
              g_02765258 = plVar14;
              if (plVar14 != (int64_t *)0x0) {
                local_388 = '\x01';
                uVar33 = FUN_00d50b00();
              }
              cStack_40 = '\0';
              local_48 = plVar14;
              FUN_00ca0840(uVar33,&local_48);
              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar14 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_388 != '\0') && (local_390 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)*local_d0 == '\0') {
                FUN_00ccd540(&local_5c,&local_118);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar14 = local_78;
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                local_68 = '\0';
                local_70 = (int64_t *)0x0;
                FUN_00ccd8f0(0x10,&local_70);
                if (local_48 == (int64_t *)0x0) {
                  if (local_70 == (int64_t *)0x0) goto LAB_00ba44b0;
                }
                else {
                  if (cStack_40 != '\0') {
                    FUN_00d50b20();
                  }
LAB_00ba44b0:
                  lVar24 = g_02765700;
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                uVar33 = FUN_00d46530();
                plVar18 = local_88;
                local_368 = 0;
                plVar17 = g_02765260;
                if (local_80 == '\0') {
                  if (local_88 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar17 = g_02765260;
                  }
                }
                else {
                  local_80 = '\0';
                }
                local_368 = '\x01';
                local_370 = plVar18;
                g_02765260 = plVar17;
                if (plVar17 != (int64_t *)0x0) {
                  local_368 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar17;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar17 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_368 != '\0') && (local_370 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                FUN_00ccd6d0(&local_5c,&local_dc);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00ccd750(&local_5c,&local_88);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 8;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                uVar33 = FUN_00d468f0();
                plVar17 = local_70;
                local_378 = 0;
                plVar14 = g_02765260;
                if (local_68 == '\0') {
                  if (local_70 != (int64_t *)0x0) {
                    uVar33 = FUN_00d50b00();
                    plVar14 = g_02765260;
                  }
                }
                else {
                  local_68 = '\0';
                }
                local_378 = '\x01';
                local_380 = plVar17;
                g_02765260 = plVar14;
                if (plVar14 != (int64_t *)0x0) {
                  local_378 = '\x01';
                  uVar33 = FUN_00d50b00();
                }
                cStack_40 = '\0';
                local_48 = plVar14;
                FUN_00ca0840(uVar33,&local_48);
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (plVar14 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_378 != '\0') && (local_380 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00ccd750(&local_5c,&local_118);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 8;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00ccd6d0(&local_5c,&local_c8);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                FUN_00ccd6d0(&local_5c,local_3b4);
                bVar30 = local_48 != (int64_t *)0x0;
                bVar31 = local_5c != 4;
                if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar14 = local_78;
                lVar24 = g_02765700;
                if (bVar30 || bVar31) {
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  FUN_00cc78b0();
                  if (lVar24 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (local_c8 != 0) {
                  cStack_40 = '\0';
                  local_48 = (int64_t *)0x0;
                  FUN_00ccd8f0(local_c8,&local_48);
                  if (local_70 == (int64_t *)0x0) {
                    if (local_48 == (int64_t *)0x0) goto LAB_00ba4440;
                  }
                  else {
                    if (local_68 != '\0') {
                      FUN_00d50b20();
                    }
LAB_00ba4440:
                    lVar24 = g_02765700;
                    if (g_02765700 != 0) {
                      FUN_00d50b00();
                    }
                    FUN_00cc78b0();
                    if (lVar24 != 0) {
                      FUN_00d50b20();
                    }
                  }
                  if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              cStack_40 = '\0';
              local_48 = unaff_R15;
              FUN_00d21140();
              if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              uVar33 = FUN_00d50b20();
              uVar25 = uVar25 + 1;
            } while (uVar25 < local_94);
          }
          plVar17 = g_02765268;
          if (g_02765268 != (int64_t *)0x0) {
            uVar33 = FUN_00d50b00();
          }
          local_48 = plVar17;
          cStack_40 = '\0';
          uVar33 = FUN_00ca0840(uVar33,&local_48);
          if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar33 = FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            uVar33 = FUN_00d50b20();
          }
          auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_b0);
          auVar34._8_8_ = extraout_XMM0_Qb_28;
          if ((local_b88 != '\0') && (local_b90 != 0)) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_29;
          }
          if (plVar14 != (int64_t *)0x0) {
            auVar34._0_8_ = FUN_00d50b20();
            auVar34._8_8_ = extraout_XMM0_Qb_30;
          }
        }
      }
      goto LAB_00ba27c9;
    }
    (**(code **)(*(int64_t *)*plVar26 + 0x370))();
    uVar21 = (**(code **)(*local_48 + 0x3a8))();
    uVar33 = extraout_XMM0_Qa_05;
    if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar33 = FUN_00d50b20();
    }
    if (local_140 < uVar21) {
      uVar21 = local_140;
    }
    uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,this_ptr + 0xc);
    if ((local_c28 != '\0') && (local_c30 != 0)) {
      uVar33 = FUN_00d50b20();
    }
    uVar21 = uVar21 - this_ptr[0xc];
    if (uVar21 < local_c0) {
      local_c0 = uVar21;
    }
    switch((short)*local_3d0) {
    case 1:
    case 3:
      uVar21 = (int64_t)*(int *)((int64_t)this_ptr + 0x44) *
               (int64_t)*(short *)((int64_t)this_ptr + 0x3c);
      if ((local_c0 | uVar21) >> 0x20 == 0) {
        uVar21 = (local_c0 & 0xffffffff) / (uVar21 & 0xffffffff);
      }
      else {
        uVar21 = (int64_t)local_c0 / (int64_t)uVar21;
      }
      this_ptr[10] = uVar21;
      local_138 = local_c0;
      break;
    case 2:
      uVar21 = local_c0 * (int64_t)(short)this_ptr[0xd];
      uVar22 = (uint64_t)*(short *)((int64_t)this_ptr + 0x6a);
      if ((uVar21 | uVar22) >> 0x20 == 0) {
        uVar21 = (uVar21 & 0xffffffff) / (uVar22 & 0xffffffff);
      }
      else {
        uVar21 = (int64_t)uVar21 / (int64_t)uVar22;
      }
      this_ptr[10] = uVar21;
      break;
    case 0x11:
      uVar22 = local_c0 * (int64_t)*(short *)((int64_t)this_ptr + 0x6e);
      uVar21 = (int64_t)(short)this_ptr[0xe] * (int64_t)*(short *)((int64_t)this_ptr + 0x3c);
      if ((uVar22 | uVar21) >> 0x20 == 0) {
        uVar16 = (uVar22 & 0xffffffff) / (uVar21 & 0xffffffff);
        uVar21 = (uVar22 & 0xffffffff) % (uVar21 & 0xffffffff);
      }
      else {
        uVar16 = (int64_t)uVar22 / (int64_t)uVar21;
        uVar21 = (int64_t)uVar22 % (int64_t)uVar21;
      }
      this_ptr[10] = uVar16;
      lVar24 = FUN_00e83010(uVar22,uVar21);
      this_ptr[0xf] = lVar24;
      uVar33 = extraout_XMM0_Qa_14;
    }
    uVar33 = (**(code **)(*(int64_t *)*plVar26 + 0x390))(uVar33,&local_d8);
    if ((local_c18 != '\0') && (local_c20 != 0)) {
      uVar33 = FUN_00d50b20();
    }
    auVar34._0_8_ = (**(code **)(*(int64_t *)*plVar26 + 0x3a0))(uVar33,local_c0 + local_d8);
    auVar34._8_8_ = extraout_XMM0_Qb_40;
    if ((local_c08 != '\0') && (local_c10 != 0)) {
      auVar34._0_8_ = FUN_00d50b20();
      auVar34._8_8_ = extraout_XMM0_Qb_41;
    }
    bVar28 = true;
    if (*(int *)((int64_t)this_ptr + 0x44) != 0) {
      (**(code **)(*this_ptr + 0x3a8))();
      unaff_R15 = local_70;
      uVar21 = this_ptr[0xc];
      uVar22 = (int64_t)*(int *)((int64_t)this_ptr + 0x44) *
               (int64_t)*(short *)((int64_t)this_ptr + 0x3c);
      if ((uVar21 | uVar22) >> 0x20 == 0) {
        uVar21 = (uVar21 & 0xffffffff) % (uVar22 & 0xffffffff);
      }
      else {
        uVar21 = uVar21 % uVar22;
      }
      uVar33 = FUN_00d468f0(uVar22,uVar21);
      plVar17 = local_88;
      local_3a8 = 0;
      plVar14 = g_02765250;
      if (local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          uVar33 = FUN_00d50b00();
          plVar14 = g_02765250;
        }
      }
      else {
        local_80 = '\0';
      }
      local_3a8 = '\x01';
      local_3b0 = plVar17;
      g_02765250 = plVar14;
      if (plVar14 != (int64_t *)0x0) {
        local_3a8 = '\x01';
        uVar33 = FUN_00d50b00();
      }
      cStack_40 = '\0';
      local_48 = plVar14;
      auVar34._0_8_ = FUN_00ca0840(uVar33,&local_48);
      auVar34._8_8_ = extraout_XMM0_Qb_42;
      if ((cStack_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        auVar34._0_8_ = FUN_00d50b20();
        auVar34._8_8_ = extraout_XMM0_Qb_43;
      }
      if (plVar14 != (int64_t *)0x0) {
        auVar34._0_8_ = FUN_00d50b20();
        auVar34._8_8_ = extraout_XMM0_Qb_44;
      }
      if ((local_3a8 != '\0') && (local_3b0 != (int64_t *)0x0)) {
        auVar34._0_8_ = FUN_00d50b20();
        auVar34._8_8_ = extraout_XMM0_Qb_45;
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        auVar34._0_8_ = FUN_00d50b20();
        auVar34._8_8_ = extraout_XMM0_Qb_46;
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        auVar34._0_8_ = FUN_00d50b20();
        auVar34._8_8_ = extraout_XMM0_Qb_47;
      }
    }
  } while( true );
}

