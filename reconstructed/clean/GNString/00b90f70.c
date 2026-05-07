// Function: FUN_00b90f70
// Address: 00b90f70
// Size: 17739 bytes
// Class: GNString
// String references:
//   "FORM"
//   "AIFF"
//   "AIFC"
//   "                "
//   "SSND"
//   "COMM"
//   "NONE"
//   "fl32"
//   "FL32"
//   "sowt"
//   "twos"
//   "in24"
//   "in32"
//   "23ni"
//   "NAME"
//   "AUTH"
//   "(c) "
//   "ANNO"
//   "MIDI"
//   ".mid"
//   ... +6 more
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b90f70(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  undefined7 uVar14;
  int64_t *plVar11;
  void*puVar12;
  int64_t **pplVar13;
  uint64_t uVar15;
  int iVar16;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar17;
  bool bVar18;
  uint32_t uVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  uint32_t extraout_XMM0_Da_13;
  uint32_t extraout_XMM0_Da_14;
  uint32_t extraout_XMM0_Da_15;
  uint32_t extraout_XMM0_Da_16;
  uint32_t extraout_XMM0_Da_17;
  uint32_t extraout_XMM0_Da_18;
  uint32_t extraout_XMM0_Da_19;
  uint32_t extraout_XMM0_Da_20;
  uint32_t extraout_XMM0_Da_21;
  uint32_t extraout_XMM0_Da_22;
  uint32_t extraout_XMM0_Da_23;
  uint32_t extraout_XMM0_Da_24;
  uint32_t extraout_XMM0_Da_25;
  uint32_t extraout_XMM0_Da_26;
  uint32_t extraout_XMM0_Da_27;
  int64_t local_888;
  char local_880;
  int64_t local_878;
  char local_870;
  int64_t local_868;
  char local_860;
  int64_t local_858;
  char local_850;
  int64_t local_848;
  char local_840;
  int64_t local_838;
  char local_830;
  int64_t local_828;
  char local_820;
  int64_t local_818;
  char local_810;
  int64_t local_808;
  char local_800;
  int64_t local_7f8;
  char local_7f0;
  int64_t local_7e8;
  char local_7e0;
  int64_t local_7d8;
  char local_7d0;
  int64_t local_7c8;
  char local_7c0;
  int64_t local_7b8;
  char local_7b0;
  int64_t local_7a8;
  char local_7a0;
  int64_t local_798;
  char local_790;
  int64_t local_738;
  char local_730;
  int64_t local_728;
  char local_720;
  int64_t local_718;
  char local_710;
  int64_t local_708;
  char local_700;
  int64_t local_6f8;
  char local_6f0;
  int64_t local_6e8;
  char local_6e0;
  uint8_t local_6d4 [4];
  uint64_t local_6d0;
  uint64_t local_6c8;
  char *local_6c0;
  uint64_t local_6b8;
  int64_t *local_6b0;
  int64_t *local_6a8;
  int64_t *local_6a0;
  int64_t local_698;
  char local_690;
  int64_t local_688;
  char local_680;
  int64_t local_678;
  char local_670;
  int64_t local_668;
  char local_660;
  int64_t local_658;
  char local_650;
  int64_t local_648;
  char local_640;
  int64_t local_638;
  char local_630;
  int64_t local_628;
  char local_620;
  int64_t *local_618;
  char local_610;
  int64_t *local_608;
  char local_600;
  int64_t local_5f8;
  char local_5f0;
  int64_t local_5e8;
  char local_5e0;
  int64_t local_5d8;
  char local_5d0;
  int64_t local_5c8;
  char local_5c0;
  int64_t local_5b8;
  char local_5b0;
  int64_t local_5a8;
  char local_5a0;
  int64_t local_598;
  char local_590;
  int64_t local_588;
  char local_580;
  int64_t local_578;
  char local_570;
  int64_t local_568;
  char local_560;
  int64_t local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t local_528;
  char local_520;
  int64_t local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t local_4f8;
  char local_4f0;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t *local_458;
  char local_450;
  int64_t *local_448;
  char local_440;
  int64_t *local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t local_3c8;
  char local_3c0;
  void*local_3b8;
  char local_3b0;
  int64_t local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  void*local_318;
  char local_310;
  int64_t local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  int64_t *local_2c8;
  char local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t *local_2a8;
  char local_2a0;
  int64_t *local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int local_264;
  uint64_t local_260;
  uint64_t local_258;
  int64_t local_250;
  code *local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
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
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  uint64_t local_128;
  uint64_t local_120;
  int64_t *local_118;
  uint local_110;
  uint32_t local_10c;
  short local_108;
  uint16_t uStack_106;
  uint32_t uStack_104;
  char local_100;
  int64_t *local_f8;
  uint8_t local_eb;
  short local_ea;
  void*local_e8;
  uint32_t local_e0;
  uint8_t local_dc;
  int64_t *local_d8;
  int64_t *local_d0;
  int64_t local_c8;
  void*local_c0;
  byte local_b3;
  ushort local_b2;
  int64_t local_b0;
  char local_a8;
  int local_9c;
  uint32_t local_98;
  uint8_t local_94;
  int64_t *local_90;
  short local_82;
  int64_t *local_80;
  char local_78;
  int local_6c;
  int64_t *local_68;
  char local_60 [8];
  uint32_t local_58;
  uint32_t uStack_54;
  char acStack_50 [4];
  char acStack_4c [4];
  uint8_t local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_698 = *arg1;
  local_690 = '\0';
  uVar19 = FUN_00b9d1d0();
  if ((local_690 != '\0') && (local_698 != 0)) {
    uVar19 = FUN_00d50b20();
  }
  uVar19 = (**(code **)(*(int64_t *)this_ptr[4] + 0x398))(uVar19,&local_260);
  lVar2 = CONCAT44(uStack_54,local_58);
  if ((acStack_50[0] != '\0') && (lVar2 != 0)) {
    uVar19 = FUN_00d50b20();
  }
  lVar3 = g_02765700;
  if (lVar2 != 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_688 = lVar3;
    local_680 = '\x01';
    uVar19 = FUN_00cc78b0();
    if ((local_680 != '\0') && (local_688 != 0)) {
      uVar19 = FUN_00d50b20();
    }
  }
  plVar1 = this_ptr + 4;
  if (7 < local_260) {
    uVar8 = local_260 - 8;
    local_260 = 0;
    if (uVar8 < 0x80000000) {
      local_260 = uVar8;
    }
  }
  (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,0);
  lVar2 = CONCAT44(uStack_54,local_58);
  if ((acStack_50[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02765700;
  if (lVar2 != 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_678 = lVar3;
    local_670 = '\x01';
    FUN_00cc78b0();
    if ((local_670 != '\0') && (local_678 != 0)) {
      FUN_00d50b20();
    }
  }
  local_9c = 4;
  local_94 = 0;
  local_98 = 0;
  uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x380))(&local_9c,&local_98);
  lVar2 = CONCAT44(uStack_54,local_58);
  bVar17 = local_9c != 4;
  if ((acStack_50[0] != '\0') && (lVar2 != 0)) {
    uVar19 = FUN_00d50b20();
  }
  lVar3 = g_02765700;
  if (lVar2 != 0 || bVar17) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_668 = lVar3;
    local_660 = '\x01';
    uVar19 = FUN_00cc78b0();
    if ((local_660 != '\0') && (local_668 != 0)) {
      uVar19 = FUN_00d50b20();
    }
  }
  iVar6 = FUN_00e7de00(uVar19,4);
  lVar2 = g_02764880;
  if (iVar6 != 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_658 = lVar2;
    local_650 = '\x01';
    FUN_00cc78b0();
    if ((local_650 != '\0') && (local_658 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd540(&local_6c,&local_110);
  lVar2 = CONCAT44(uStack_54,local_58);
  if ((acStack_50[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02765700;
  if (lVar2 != 0 || local_6c != 4) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_648 = lVar3;
    local_640 = '\x01';
    FUN_00cc78b0();
    if ((local_640 != '\0') && (local_648 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((uint64_t)(int64_t)(int)local_110 < local_260) {
    local_110 = (uint)local_260;
  }
  local_6c = local_9c;
  uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x380))(&local_9c,&local_98);
  bVar17 = local_9c != local_6c;
  if ((acStack_50[0] != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    uVar19 = FUN_00d50b20();
  }
  lVar2 = g_02765700;
  if (CONCAT44(uStack_54,local_58) != 0 || bVar17) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_638 = lVar2;
    local_630 = '\x01';
    uVar19 = FUN_00cc78b0();
    if ((local_630 != '\0') && (local_638 != 0)) {
      uVar19 = FUN_00d50b20();
    }
  }
  iVar6 = FUN_00e7de00(uVar19,4);
  if (iVar6 != 0) {
    uVar9 = FUN_00e7de00(extraout_XMM0_Da,4);
    lVar2 = g_02764880;
    if ((int)uVar9 == 0) {
      local_10c = (uint32_t)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      goto LAB_00b913c7;
    }
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_628 = lVar2;
    local_620 = '\x01';
    FUN_00cc78b0();
    if ((local_620 != '\0') && (local_628 != 0)) {
      FUN_00d50b20();
    }
  }
  local_10c = 0;
LAB_00b913c7:
  local_dc = 0;
  local_e0 = 0x20202020;
  local_58._0_1_ = s__020003d0[0];
  local_58._1_1_ = s__020003d0[1];
  local_58._2_1_ = s__020003d0[2];
  local_58._3_1_ = s__020003d0[3];
  uStack_54._0_1_ = s__020003d0[4];
  uStack_54._1_1_ = s__020003d0[5];
  uStack_54._2_1_ = s__020003d0[6];
  uStack_54._3_1_ = s__020003d0[7];
  acStack_50[0] = s__020003d0[8];
  acStack_50[1] = s__020003d0[9];
  acStack_50[2] = s__020003d0[10];
  acStack_50[3] = s__020003d0[0xb];
  acStack_4c[0] = s__020003d0[0xc];
  acStack_4c[1] = s__020003d0[0xd];
  acStack_4c[2] = s__020003d0[0xe];
  acStack_4c[3] = s__020003d0[0xf];
  local_48 = 0;
  local_a8 = '\0';
  local_b0 = 0;
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  local_d0 = plVar10;
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar19 = (**(code **)(*plVar10 + 0x18))();
  local_6b0 = this_ptr + 9;
  this_ptr[9] = 0;
  local_248 = g_02572370;
  local_6c0 = (char *)((int64_t)this_ptr + 0x3c);
  local_6a0 = (int64_t *)((int64_t)this_ptr + 0x51);
  local_6a8 = this_ptr + 10;
  local_120 = 0;
  local_f8 = (int64_t *)0x0;
  local_6b8 = 0;
  local_6c8 = 0;
  local_130 = plVar10;
LAB_00b914b9:
  do {
    local_9c = 4;
    (**(code **)(*(int64_t *)*plVar1 + 0x390))(uVar19,&local_6d0);
    if ((local_880 != '\0') && (local_888 != 0)) {
      FUN_00d50b20();
    }
    if (local_6d0 < local_110) {
      local_238 = 0;
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_238 = '\x01';
      local_240 = lVar2;
      cVar5 = FUN_00ba1e20(&local_c8,&local_98,&g_027645a0,0x17);
      uVar19 = extraout_XMM0_Da_00;
      if ((local_238 != '\0') && (local_240 != 0)) {
        uVar19 = FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_00b9158f;
    }
    else {
LAB_00b9158f:
      lVar2 = g_02765700;
      if (((char)local_6c8 != '\0') && ((char)local_6b8 != '\0')) {
        FUN_00c9fe20();
        plVar1 = local_68;
        local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_60[0]);
        pplVar13 = (int64_t **)local_60;
        if (local_60[0] == '\0') {
          pplVar13 = &local_80;
        }
        *(char *)pplVar13 = '\0';
        if ((local_60[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar6 = *(int *)((int64_t)plVar1 + 0xc);
        if ((byte)local_80 != '\0') {
          FUN_00d50b20();
        }
        if (iVar6 != 0) {
          uVar19 = (**(code **)(*this_ptr + 0x3a8))();
          plVar1 = g_02765240;
          local_618 = local_d0;
          local_610 = '\0';
          if (g_02765240 != (int64_t *)0x0) {
            uVar19 = FUN_00d50b00();
          }
          local_68 = plVar1;
          local_60[0] = '\0';
          FUN_00ca0840(uVar19,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_610 != '\0') && (local_618 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00c9fe20();
        plVar1 = local_68;
        pplVar13 = (int64_t **)local_60;
        if (local_60[0] == '\0') {
          pplVar13 = &local_80;
        }
        local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_60[0]);
        *(char *)pplVar13 = '\0';
        if ((local_60[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar6 = *(int *)((int64_t)plVar1 + 0xc);
        if ((byte)local_80 != '\0') {
          FUN_00d50b20();
        }
        if (iVar6 != 0) {
          uVar19 = (**(code **)(*this_ptr + 0x3a8))();
          plVar1 = g_02764890;
          local_608 = local_130;
          local_600 = '\0';
          if (g_02764890 != (int64_t *)0x0) {
            uVar19 = FUN_00d50b00();
          }
          local_68 = plVar1;
          local_60[0] = '\0';
          FUN_00ca0840(uVar19,&local_68);
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_600 != '\0') && (local_608 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar8 = local_258 - this_ptr[9];
        iVar6 = (int)this_ptr[6];
        uVar7 = *(uint *)((int64_t)this_ptr + 0x34);
        uVar15 = (uint64_t)uVar7;
        iVar16 = (int)this_ptr[7] + 7;
        if (-1 < iVar16) {
          iVar16 = (int)this_ptr[7];
        }
        iVar16 = iVar16 + 7 >> 3;
        if ((uVar8 < (uint64_t)(int64_t)(int)(iVar6 * uVar7 * iVar16)) || (uVar7 == 0)) {
          uVar8 = (int64_t)((uint64_t)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) /
                  (int64_t)iVar16;
          uVar8 = (uint64_t)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff;
          uVar15 = (int64_t)uVar8 % (int64_t)iVar6 & 0xffffffff;
          *(int *)((int64_t)this_ptr + 0x34) = (int)((int64_t)uVar8 / (int64_t)iVar6);
        }
        if (((char)local_120 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20(iVar6,uVar15);
        }
        if (local_130 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_d0 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
          return;
        }
                            ___stack_chk_fail();
      }
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_5f8 = lVar2;
      local_5f0 = '\x01';
      uVar19 = FUN_00cc78b0();
      if ((local_5f0 != '\0') && (local_5f8 != 0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    iVar6 = FUN_00e7de00(uVar19,4);
    if (iVar6 != 0) {
      iVar6 = FUN_00e7de00(extraout_XMM0_Da_01,4);
      if (iVar6 == 0) {
        (**(code **)(*(int64_t *)*plVar1 + 0x390))(extraout_XMM0_Da_02,&local_250);
        if ((local_850 != '\0') && (local_858 != 0)) {
          FUN_00d50b20();
        }
        FUN_00ccd540(&local_6c,&local_264);
        bVar17 = local_68 != (int64_t *)0x0;
        bVar18 = local_6c != 4;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar2 = g_02765700;
        if (bVar17 || bVar18) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          local_548 = lVar2;
          local_540 = '\x01';
          FUN_00cc78b0();
          if ((local_540 != '\0') && (local_548 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar19 = FUN_00ccd540(&local_6c,local_6d4);
        bVar17 = local_68 != (int64_t *)0x0;
        bVar18 = local_6c != 4;
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
        lVar2 = g_02765700;
        if (bVar17 || bVar18) {
          if (g_02765700 != 0) {
            FUN_00d50b00();
          }
          local_538 = lVar2;
          local_530 = '\x01';
          uVar19 = FUN_00cc78b0();
          if ((local_530 != '\0') && (local_538 != 0)) {
            uVar19 = FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)*plVar1 + 0x390))(uVar19,local_6b0);
        if ((local_840 != '\0') && (local_848 != 0)) {
          FUN_00d50b20();
        }
        *local_6b0 = *local_6b0 + (int64_t)local_264;
        uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x398))(local_6b0,&local_258);
        if ((local_830 != '\0') && (local_838 != 0)) {
          uVar19 = FUN_00d50b20();
        }
        if (local_110 + 8 < local_258) {
          local_258 = (uint64_t)(int)(local_110 + 8);
        }
        uVar9 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_c8 + local_250);
        local_6b8 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
        uVar19 = extraout_XMM0_Da_16;
        if ((local_820 != '\0') && (local_828 != 0)) {
          uVar19 = FUN_00d50b20();
        }
      }
      else {
        iVar6 = FUN_00e7de00(extraout_XMM0_Da_02,4);
        if (iVar6 == 0) {
          uVar19 = extraout_XMM0_Da_03;
          if (local_c8 != 0) {
            uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
            if (local_68 == (int64_t *)0x0) {
              if (local_b0 == 0) goto LAB_00b91bfe;
            }
            else {
              if (local_60[0] != '\0') {
                FUN_00d50b20();
              }
LAB_00b91bfe:
              lVar2 = g_02765700;
              if (g_02765700 != 0) {
                FUN_00d50b00();
              }
              local_528 = lVar2;
              local_520 = '\x01';
              uVar19 = FUN_00cc78b0();
              if ((local_520 != '\0') && (local_528 != 0)) {
                uVar19 = FUN_00d50b20();
              }
            }
            local_518 = local_b0;
            local_510 = '\0';
            uVar19 = FUN_00d93320(uVar19,4);
            plVar11 = local_80;
            local_218 = 0;
            plVar10 = g_02729550;
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                uVar19 = FUN_00d50b00();
                plVar10 = g_02729550;
              }
            }
            else {
              local_78 = '\0';
            }
            local_218 = '\x01';
            local_220 = plVar11;
            g_02729550 = plVar10;
            if (plVar10 != (int64_t *)0x0) {
              local_218 = '\x01';
              uVar19 = FUN_00d50b00();
            }
            local_60[0] = '\0';
            local_68 = plVar10;
            uVar19 = FUN_00ca0840(uVar19,&local_68);
            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            if (plVar10 != (int64_t *)0x0) {
              uVar19 = FUN_00d50b20();
            }
            if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            if ((local_510 != '\0') && (local_518 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
        }
        else {
          iVar6 = FUN_00e7de00(extraout_XMM0_Da_03,4);
          if (iVar6 == 0) {
            uVar19 = extraout_XMM0_Da_04;
            if (local_c8 != 0) {
              uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
              if (local_68 == (int64_t *)0x0) {
                if (local_b0 == 0) goto LAB_00b91d6e;
              }
              else {
                if (local_60[0] != '\0') {
                  FUN_00d50b20();
                }
LAB_00b91d6e:
                lVar2 = g_02765700;
                if (g_02765700 != 0) {
                  FUN_00d50b00();
                }
                local_508 = lVar2;
                local_500 = '\x01';
                uVar19 = FUN_00cc78b0();
                if ((local_500 != '\0') && (local_508 != 0)) {
                  uVar19 = FUN_00d50b20();
                }
              }
              local_4f8 = local_b0;
              local_4f0 = '\0';
              uVar19 = FUN_00d93320(uVar19,4);
              plVar11 = local_80;
              local_208 = 0;
              plVar10 = g_027648a0;
              if (local_78 == '\0') {
                if (local_80 != (int64_t *)0x0) {
                  uVar19 = FUN_00d50b00();
                  plVar10 = g_027648a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_208 = '\x01';
              local_210 = plVar11;
              g_027648a0 = plVar10;
              if (plVar10 != (int64_t *)0x0) {
                local_208 = '\x01';
                uVar19 = FUN_00d50b00();
              }
              local_60[0] = '\0';
              local_68 = plVar10;
              uVar19 = FUN_00ca0840(uVar19,&local_68);
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                uVar19 = FUN_00d50b20();
              }
              if (plVar10 != (int64_t *)0x0) {
                uVar19 = FUN_00d50b20();
              }
              if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
                uVar19 = FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                uVar19 = FUN_00d50b20();
              }
              if ((local_4f0 != '\0') && (local_4f8 != 0)) {
                uVar19 = FUN_00d50b20();
              }
            }
          }
          else {
            iVar6 = FUN_00e7de00(extraout_XMM0_Da_04,4);
            if (iVar6 == 0) {
              uVar19 = extraout_XMM0_Da_05;
              if (local_c8 != 0) {
                uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
                if (local_68 == (int64_t *)0x0) {
                  if (local_b0 == 0) goto LAB_00b91ede;
                }
                else {
                  if (local_60[0] != '\0') {
                    FUN_00d50b20();
                  }
LAB_00b91ede:
                  lVar2 = g_02765700;
                  if (g_02765700 != 0) {
                    FUN_00d50b00();
                  }
                  local_4e8 = lVar2;
                  local_4e0 = '\x01';
                  uVar19 = FUN_00cc78b0();
                  if ((local_4e0 != '\0') && (local_4e8 != 0)) {
                    uVar19 = FUN_00d50b20();
                  }
                }
                local_4d8 = local_b0;
                local_4d0 = '\0';
                uVar19 = FUN_00d93320(uVar19,4);
                plVar11 = local_80;
                local_1f8 = 0;
                plVar10 = g_027648a8;
                if (local_78 == '\0') {
                  if (local_80 != (int64_t *)0x0) {
                    uVar19 = FUN_00d50b00();
                    plVar10 = g_027648a8;
                  }
                }
                else {
                  local_78 = '\0';
                }
                local_1f8 = '\x01';
                local_200 = plVar11;
                g_027648a8 = plVar10;
                if (plVar10 != (int64_t *)0x0) {
                  local_1f8 = '\x01';
                  uVar19 = FUN_00d50b00();
                }
                local_60[0] = '\0';
                local_68 = plVar10;
                uVar19 = FUN_00ca0840(uVar19,&local_68);
                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                  uVar19 = FUN_00d50b20();
                }
                if (plVar10 != (int64_t *)0x0) {
                  uVar19 = FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                  uVar19 = FUN_00d50b20();
                }
                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                  uVar19 = FUN_00d50b20();
                }
                if ((local_4d0 != '\0') && (local_4d8 != 0)) {
                  uVar19 = FUN_00d50b20();
                }
              }
            }
            else {
              iVar6 = FUN_00e7de00(extraout_XMM0_Da_05,4);
              if (iVar6 == 0) {
                uVar19 = extraout_XMM0_Da_06;
                if (local_c8 != 0) {
                  uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
                  if (local_68 == (int64_t *)0x0) {
                    if (local_b0 == 0) goto LAB_00b9218c;
                  }
                  else {
                    if (local_60[0] != '\0') {
                      FUN_00d50b20();
                    }
LAB_00b9218c:
                    lVar2 = g_02765700;
                    if (g_02765700 != 0) {
                      FUN_00d50b00();
                    }
                    local_4c8 = lVar2;
                    local_4c0 = '\x01';
                    uVar19 = FUN_00cc78b0();
                    if ((local_4c0 != '\0') && (local_4c8 != 0)) {
                      uVar19 = FUN_00d50b20();
                    }
                  }
                  local_4b8 = local_b0;
                  local_4b0 = '\0';
                  uVar19 = FUN_00d93320(uVar19,4);
                  plVar11 = local_80;
                  local_1e8 = 0;
                  plVar10 = g_027648b0;
                  if (local_78 == '\0') {
                    if (local_80 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b00();
                      plVar10 = g_027648b0;
                    }
                  }
                  else {
                    local_78 = '\0';
                  }
                  local_1e8 = '\x01';
                  local_1f0 = plVar11;
                  g_027648b0 = plVar10;
                  if (plVar10 != (int64_t *)0x0) {
                    local_1e8 = '\x01';
                    uVar19 = FUN_00d50b00();
                  }
                  local_60[0] = '\0';
                  local_68 = plVar10;
                  uVar19 = FUN_00ca0840(uVar19,&local_68);
                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                    uVar19 = FUN_00d50b20();
                  }
                  if (plVar10 != (int64_t *)0x0) {
                    uVar19 = FUN_00d50b20();
                  }
                  if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
                    uVar19 = FUN_00d50b20();
                  }
                  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                    uVar19 = FUN_00d50b20();
                  }
                  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
                    uVar19 = FUN_00d50b20();
                  }
                }
              }
              else {
                iVar6 = FUN_00e7de00(extraout_XMM0_Da_06,4);
                uVar19 = extraout_XMM0_Da_07;
                if ((iVar6 == 0) ||
                   (iVar6 = FUN_00e7de00(extraout_XMM0_Da_07,4), plVar10 = g_027648c0,
                   uVar19 = extraout_XMM0_Da_08, iVar6 == 0)) {
                  if (local_c8 != 0) {
                    uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
                    if (local_68 == (int64_t *)0x0) {
                      if (local_b0 == 0) goto LAB_00b920aa;
                    }
                    else {
                      if (local_60[0] != '\0') {
                        FUN_00d50b20();
                      }
LAB_00b920aa:
                      lVar2 = g_02765700;
                      if (g_02765700 != 0) {
                        FUN_00d50b00();
                      }
                      local_4a8 = lVar2;
                      local_4a0 = '\x01';
                      uVar19 = FUN_00cc78b0();
                      if ((local_4a0 != '\0') && (local_4a8 != 0)) {
                        uVar19 = FUN_00d50b20();
                      }
                    }
                    plVar10 = g_027630a0;
                    local_498 = local_b0;
                    local_490 = '\0';
                    if (g_027630a0 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b00();
                    }
                    local_68 = plVar10;
                    local_60[0] = '\0';
                    uVar19 = FUN_00ca0840(uVar19,&local_68);
                    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    if (plVar10 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b20();
                    }
                    if ((local_490 != '\0') && (local_498 != 0)) {
                      uVar19 = FUN_00d50b20();
                    }
                  }
                }
                else {
                  if (g_027648c0 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  uVar19 = FUN_00d8b910();
                  iVar6 = FUN_00e7de00(uVar19,4);
                  uVar19 = extraout_XMM0_Da_09;
                  if (plVar10 != (int64_t *)0x0) {
                    uVar19 = FUN_00d50b20();
                  }
                  if (iVar6 == 0) {
                    plVar11 = (int64_t *)FUN_00e8fc40();
                    FUN_00022d50();
                    (**(code **)(*plVar11 + 0x18))();
                    uVar8 = local_120;
                    if (plVar11 == local_f8) {
                      if ((char)local_120 == '\0') {
                        uVar8 = CONCAT71((int7)(local_120 >> 8),1);
                        plVar11 = local_f8;
                      }
                      else {
                        FUN_00d50b20();
                        plVar11 = local_f8;
                      }
                    }
                    else {
                      uVar8 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
                      if (((char)local_120 != '\0') && (local_f8 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    local_f8 = plVar11;
                    FUN_00ccd540(&local_6c,&local_108);
                    bVar17 = local_68 != (int64_t *)0x0;
                    bVar18 = local_6c != 4;
                    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    lVar2 = g_02765700;
                    if (bVar17 || bVar18) {
                      if (g_02765700 != 0) {
                        FUN_00d50b00();
                      }
                      local_488 = lVar2;
                      local_480 = '\x01';
                      FUN_00cc78b0();
                      if ((local_480 != '\0') && (local_488 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (local_b0 != 0) {
                      local_b0 = 0;
                      if (local_a8 != '\0') {
                        FUN_00d50b20();
                      }
                      local_a8 = '\0';
                    }
                    if (local_c8 != 4) {
                      FUN_00ccd8f0((int)local_c8 + -4,&local_b0);
                      if (local_68 == (int64_t *)0x0) {
                        if (local_b0 != 0) goto LAB_00b94177;
                      }
                      else if (local_60[0] != '\0') {
                        FUN_00d50b20();
                      }
                      lVar2 = g_02765700;
                      if (g_02765700 != 0) {
                        FUN_00d50b00();
                      }
                      local_478 = lVar2;
                      local_470 = '\x01';
                      FUN_00cc78b0();
                      if ((local_470 != '\0') && (local_478 != 0)) {
                        FUN_00d50b20();
                      }
                    }
LAB_00b94177:
                    uVar19 = FUN_00d93440(4,4);
                    plVar11 = local_80;
                    local_1d8 = 0;
                    plVar10 = g_027d2af8;
                    if (local_78 == '\0') {
                      if (local_80 != (int64_t *)0x0) {
                        uVar19 = FUN_00d50b00();
                        plVar10 = g_027d2af8;
                      }
                    }
                    else {
                      local_78 = '\0';
                    }
                    local_1d8 = '\x01';
                    local_1e0 = plVar11;
                    g_027d2af8 = plVar10;
                    if (plVar10 != (int64_t *)0x0) {
                      local_1d8 = '\x01';
                      uVar19 = FUN_00d50b00();
                    }
                    local_60[0] = '\0';
                    local_68 = plVar10;
                    uVar19 = FUN_00ca0840(uVar19,&local_68);
                    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    if (plVar10 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b20();
                    }
                    if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    plVar10 = g_027648d0;
                    if (local_b0 != 0) {
                      local_468 = local_b0;
                      local_460 = '\0';
                      if (g_027648d0 != (int64_t *)0x0) {
                        uVar19 = FUN_00d50b00();
                      }
                      local_68 = plVar10;
                      local_60[0] = '\0';
                      uVar19 = FUN_00ca0840(uVar19,&local_68);
                      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                        uVar19 = FUN_00d50b20();
                      }
                      if (plVar10 != (int64_t *)0x0) {
                        uVar19 = FUN_00d50b20();
                      }
                      if ((local_460 != '\0') && (local_468 != 0)) {
                        uVar19 = FUN_00d50b20();
                      }
                    }
                    plVar10 = g_027648c0;
                    local_458 = local_f8;
                    local_450 = '\0';
                    if (g_027648c0 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b00();
                    }
                    local_68 = plVar10;
                    local_60[0] = '\0';
                    uVar19 = FUN_00ca0840(uVar19,&local_68);
                    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    if (plVar10 != (int64_t *)0x0) {
                      uVar19 = FUN_00d50b20();
                    }
                    if ((local_450 != '\0') && (local_458 != (int64_t *)0x0)) {
                      uVar19 = FUN_00d50b20();
                    }
                    local_120 = uVar8 & 0xffffffff;
                  }
                  else {
                    iVar6 = FUN_00e7de00(uVar19,4);
                    if (iVar6 == 0) {
                      uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x390))
                                         (extraout_XMM0_Da_10,&local_d8);
                      if ((local_810 != '\0') && (local_818 != 0)) {
                        uVar19 = FUN_00d50b20();
                      }
                      local_d8 = (int64_t *)((int64_t)local_d8 + local_c8);
                      if (local_c8 != 0) {
                        local_78 = '\0';
                        local_80 = (int64_t *)0x0;
                        uVar19 = FUN_00ccd8f0(local_c8,&local_80);
                        if ((local_800 != '\0') && (local_808 != 0)) {
                          uVar19 = FUN_00d50b20();
                        }
                        if (local_80 != (int64_t *)0x0) {
                          (**(code **)(*this_ptr + 0x380))();
                          local_448 = local_80;
                          local_440 = '\0';
                          uVar19 = FUN_00bc2a40(local_80,&local_448);
                          plVar10 = local_68;
                          if (local_60[0] == '\0') {
                            if (((local_68 != (int64_t *)0x0) &&
                                (uVar19 = FUN_00d50b00(), local_60[0] != '\0')) &&
                               (local_68 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                          }
                          else {
                            local_60[0] = '\0';
                          }
                          if ((local_440 != '\0') && (local_448 != (int64_t *)0x0)) {
                            uVar19 = FUN_00d50b20();
                          }
                          if (plVar10 != (int64_t *)0x0) {
                            local_438 = plVar10;
                            local_430 = '\0';
                            uVar19 = (**(code **)(*plVar10 + 0x368))();
                            plVar10 = (int64_t *)
                                      CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                            if (local_100 == '\0') {
                              if (plVar10 != (int64_t *)0x0) {
                                uVar19 = FUN_00d50b00();
                              }
                            }
                            else {
                              local_100 = '\0';
                            }
                            local_60[0] = '\0';
                            local_68 = plVar10;
                            FUN_00ca0840(uVar19,&local_68);
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar10 != (int64_t *)0x0) {
                              FUN_00d50b20();
                            }
                            if ((local_100 != '\0') &&
                               (CONCAT44(uStack_104,CONCAT22(uStack_106,local_108)) != 0)) {
                              FUN_00d50b20();
                            }
                            if ((local_430 != '\0') && (local_438 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            uVar19 = FUN_00d50b20();
                          }
                        }
                        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                          uVar19 = FUN_00d50b20();
                        }
                      }
                      uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_d8);
                      if ((local_7f0 != '\0') && (local_7f8 != 0)) {
                        uVar19 = FUN_00d50b20();
                      }
                    }
                    else {
                      iVar6 = FUN_00e7de00(extraout_XMM0_Da_10,4);
                      if (iVar6 == 0) {
                        (**(code **)(*(int64_t *)*plVar1 + 0x390))(extraout_XMM0_Da_11,&local_d8);
                        if ((local_7e0 != '\0') && (local_7e8 != 0)) {
                          FUN_00d50b20();
                        }
                        local_d8 = (int64_t *)((int64_t)local_d8 + local_c8);
                        FUN_00ccd330(&local_6c,&local_82);
                        bVar17 = local_68 != (int64_t *)0x0;
                        bVar18 = local_6c != 2;
                        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        lVar2 = g_02765700;
                        if (bVar17 || bVar18) {
                          if (g_02765700 != 0) {
                            FUN_00d50b00();
                          }
                          local_428 = lVar2;
                          local_420 = '\x01';
                          FUN_00cc78b0();
                          if ((local_420 != '\0') && (local_428 != 0)) {
                            FUN_00d50b20();
                          }
                        }
                        puVar12 = (void*)FUN_00e8fc40();
                        FUN_00d4ff40();
                        *puVar12 = &g_02572358;
                        uVar19 = (*local_248)();
                        iVar6 = 0;
                        local_e8 = puVar12;
                        if (local_82 < 1) {
                          local_90 = (int64_t *)0x0;
                          local_c0 = (void*)0x0;
LAB_00b93f48:
                          plVar10 = g_027648f0;
                          local_3b0 = '\0';
                          local_3b8 = local_e8;
                          if (g_027648f0 != (int64_t *)0x0) {
                            uVar19 = FUN_00d50b00();
                          }
                          local_68 = plVar10;
                          local_60[0] = '\0';
                          uVar19 = FUN_00ca0840(uVar19,&local_68);
                          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                            uVar19 = FUN_00d50b20();
                          }
                          if (plVar10 != (int64_t *)0x0) {
                            uVar19 = FUN_00d50b20();
                          }
                          bVar17 = false;
                          if ((local_3b0 != '\0') &&
                             (bVar17 = false, local_3b8 != (void*)0x0)) {
                            uVar19 = FUN_00d50b20();
                            bVar17 = false;
                          }
                        }
                        else {
                          local_90 = (int64_t *)0x0;
                          local_c0 = (void*)0x0;
                          do {
                            FUN_00ccd330(&local_6c,&local_ea);
                            bVar17 = local_68 != (int64_t *)0x0;
                            bVar18 = local_6c != 2;
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar2 = g_02765700;
                            if (bVar17 || bVar18) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_418 = lVar2;
                              local_410 = '\x01';
                              FUN_00cc78b0();
                              if ((local_410 != '\0') && (local_418 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            FUN_00ccd540(&local_6c,&local_108);
                            bVar17 = local_68 != (int64_t *)0x0;
                            bVar18 = local_6c != 4;
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar2 = g_02765700;
                            if (bVar17 || bVar18) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_408 = lVar2;
                              local_400 = '\x01';
                              FUN_00cc78b0();
                              if ((local_400 != '\0') && (local_408 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            FUN_00ccd300(&local_6c,&local_b3);
                            bVar17 = local_68 != (int64_t *)0x0;
                            bVar18 = local_6c != 1;
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar2 = g_02765700;
                            if (bVar17 || bVar18) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_3f8 = lVar2;
                              local_3f0 = '\x01';
                              FUN_00cc78b0();
                              if ((local_3f0 != '\0') && (local_3f8 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            if (local_b0 != 0) {
                              local_b0 = 0;
                              if (local_a8 != '\0') {
                                FUN_00d50b20();
                              }
                              local_a8 = '\0';
                            }
                            if (local_b3 != 0) {
                              FUN_00ccd8f0(local_b3,&local_b0);
                              if (local_68 == (int64_t *)0x0) {
                                if (local_b0 != 0) goto LAB_00b927b8;
                              }
                              else if (local_60[0] != '\0') {
                                FUN_00d50b20();
                              }
                              lVar2 = g_02765700;
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_3e8 = lVar2;
                              local_3e0 = '\x01';
                              FUN_00cc78b0();
                              if ((local_3e0 != '\0') && (local_3e8 != 0)) {
                                FUN_00d50b20();
                              }
                            }
LAB_00b927b8:
                            if ((local_b3 & 1) == 0) {
                              FUN_00ccd300(&local_6c,&local_eb);
                              bVar17 = local_68 != (int64_t *)0x0;
                              bVar18 = local_6c != 1;
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              lVar2 = g_02765700;
                              if (bVar17 || bVar18) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_3d8 = lVar2;
                                local_3d0 = '\x01';
                                FUN_00cc78b0();
                                if ((local_3d0 != '\0') && (local_3d8 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                            }
                            plVar10 = (int64_t *)FUN_00e8fc40();
                            FUN_00022d50();
                            uVar9 = (**(code **)(*plVar10 + 0x18))();
                            uVar14 = (undefined7)((uint64_t)uVar9 >> 8);
                            if (plVar10 == local_90) {
                              if ((char)local_c0 == '\0') {
                                local_c0 = (void*)CONCAT71(uVar14,1);
                                plVar10 = local_90;
                              }
                              else {
                                FUN_00d50b20();
                                plVar10 = local_90;
                              }
                            }
                            else {
                              bVar17 = (char)local_c0 != '\0';
                              local_c0 = (void*)CONCAT71(uVar14,1);
                              if ((bVar17) && (local_90 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                            }
                            local_90 = plVar10;
                            uVar19 = FUN_00d46530();
                            plVar11 = local_80;
                            local_1c8 = 0;
                            plVar10 = g_027648d8;
                            if (local_78 == '\0') {
                              if (local_80 != (int64_t *)0x0) {
                                uVar19 = FUN_00d50b00();
                                plVar10 = g_027648d8;
                              }
                            }
                            else {
                              local_78 = '\0';
                            }
                            local_1c8 = '\x01';
                            local_1d0 = plVar11;
                            g_027648d8 = plVar10;
                            if (plVar10 != (int64_t *)0x0) {
                              local_1c8 = '\x01';
                              uVar19 = FUN_00d50b00();
                            }
                            local_60[0] = '\0';
                            local_68 = plVar10;
                            FUN_00ca0840(uVar19,&local_68);
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if (plVar10 != (int64_t *)0x0) {
                              FUN_00d50b20();
                            }
                            if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            uVar19 = FUN_00d46530();
                            plVar11 = local_80;
                            local_1b8 = 0;
                            plVar10 = g_027648e0;
                            if (local_78 == '\0') {
                              if (local_80 != (int64_t *)0x0) {
                                uVar19 = FUN_00d50b00();
                                plVar10 = g_027648e0;
                              }
                            }
                            else {
                              local_78 = '\0';
                            }
                            local_1b8 = '\x01';
                            local_1c0 = plVar11;
                            g_027648e0 = plVar10;
                            if (plVar10 != (int64_t *)0x0) {
                              local_1b8 = '\x01';
                              uVar19 = FUN_00d50b00();
                            }
                            local_60[0] = '\0';
                            local_68 = plVar10;
                            uVar19 = FUN_00ca0840(uVar19,&local_68);
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (plVar10 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b20();
                            }
                            if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (local_b0 != 0) {
                              local_3c8 = local_b0;
                              local_3c0 = '\0';
                              uVar19 = FUN_00d93320(uVar19,4);
                              plVar11 = local_80;
                              local_1a8 = 0;
                              plVar10 = g_027648e8;
                              if (local_78 == '\0') {
                                if (local_80 != (int64_t *)0x0) {
                                  uVar19 = FUN_00d50b00();
                                  plVar10 = g_027648e8;
                                }
                              }
                              else {
                                local_78 = '\0';
                              }
                              local_1a8 = '\x01';
                              local_1b0 = plVar11;
                              g_027648e8 = plVar10;
                              if (plVar10 != (int64_t *)0x0) {
                                local_1a8 = '\x01';
                                uVar19 = FUN_00d50b00();
                              }
                              local_60[0] = '\0';
                              local_68 = plVar10;
                              FUN_00ca0840(uVar19,&local_68);
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if (plVar10 != (int64_t *)0x0) {
                                FUN_00d50b20();
                              }
                              if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              if ((local_3c0 != '\0') && (local_3c8 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            local_68 = local_90;
                            local_60[0] = '\0';
                            uVar19 = FUN_00d21140();
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            iVar6 = iVar6 + 1;
                          } while (iVar6 < local_82);
                          if (local_e8 != (void*)0x0) goto LAB_00b93f48;
                          bVar17 = true;
                        }
                        uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_d8);
                        if ((local_7d0 != '\0') && (local_7d8 != 0)) {
                          uVar19 = FUN_00d50b20();
                        }
                        if (((char)local_c0 != '\0') && (local_90 != (int64_t *)0x0)) {
                          uVar19 = FUN_00d50b20();
                        }
                        if (!bVar17) {
                          uVar19 = FUN_00d50b20();
                        }
                      }
                      else {
                        iVar6 = FUN_00e7de00(extraout_XMM0_Da_11,4);
                        if (iVar6 == 0) {
                          (**(code **)(*(int64_t *)*plVar1 + 0x390))(extraout_XMM0_Da_12,&local_d8)
                          ;
                          if ((local_7c0 != '\0') && (local_7c8 != 0)) {
                            FUN_00d50b20();
                          }
                          local_d8 = (int64_t *)((int64_t)local_d8 + local_c8);
                          FUN_00ccd330(&local_6c,&local_82);
                          bVar17 = local_68 != (int64_t *)0x0;
                          bVar18 = local_6c != 2;
                          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          lVar2 = g_02765700;
                          if (bVar17 || bVar18) {
                            if (g_02765700 != 0) {
                              FUN_00d50b00();
                            }
                            local_3a8 = lVar2;
                            local_3a0 = '\x01';
                            FUN_00cc78b0();
                            if ((local_3a0 != '\0') && (local_3a8 != 0)) {
                              FUN_00d50b20();
                            }
                          }
                          plVar10 = (int64_t *)FUN_00e8fc40();
                          FUN_00d4ff40();
                          *plVar10 = (int64_t)&g_02572358;
                          uVar19 = (*local_248)();
                          local_c0 = (void*)0x0;
                          local_118 = plVar10;
                          if (local_82 < 1) {
                            local_e8 = (void*)0x0;
                            local_90 = (int64_t *)0x0;
LAB_00b944f7:
                            plVar11 = g_02764900;
                            local_330 = '\0';
                            local_338 = plVar10;
                            if (g_02764900 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b00();
                            }
                            local_68 = plVar11;
                            local_60[0] = '\0';
                            uVar19 = FUN_00ca0840(uVar19,&local_68);
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (plVar11 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b20();
                            }
                            bVar17 = false;
                            if ((local_330 != '\0') &&
                               (bVar17 = false, local_338 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                              bVar17 = false;
                            }
                          }
                          else {
                            local_e8 = (void*)0x0;
                            local_90 = (int64_t *)0x0;
                            do {
                              FUN_00ccd540(&local_6c,&local_108);
                              bVar17 = local_68 != (int64_t *)0x0;
                              bVar18 = local_6c != 4;
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              lVar2 = g_02765700;
                              if (bVar17 || bVar18) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_398 = lVar2;
                                local_390 = '\x01';
                                FUN_00cc78b0();
                                if ((local_390 != '\0') && (local_398 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              FUN_00ccd330(&local_6c,&local_ea);
                              bVar17 = local_68 != (int64_t *)0x0;
                              bVar18 = local_6c != 2;
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                FUN_00d50b20();
                              }
                              lVar2 = g_02765700;
                              if (bVar17 || bVar18) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_388 = lVar2;
                                local_380 = '\x01';
                                FUN_00cc78b0();
                                if ((local_380 != '\0') && (local_388 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              uVar19 = FUN_00ccd330(&local_6c,&local_b2);
                              bVar17 = local_68 != (int64_t *)0x0;
                              bVar18 = local_6c != 2;
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                uVar19 = FUN_00d50b20();
                              }
                              plVar10 = local_118;
                              lVar2 = g_02765700;
                              if (bVar17 || bVar18) {
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_378 = lVar2;
                                local_370 = '\x01';
                                uVar19 = FUN_00cc78b0();
                                if ((local_370 != '\0') && (local_378 != 0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                              }
                              if ((((local_b2 == 0) && ((int)local_c0 == 0)) && (local_82 == 1)) &&
                                 (local_c8 != 10)) {
                                uVar19 = FUN_00ccd300(&local_6c,&local_80);
                                if ((local_68 == (int64_t *)0x0) && (local_6c == 1)) {
                                  if (((uint64_t)local_80 & 0xff) < local_c8 - 10U) {
                                    local_b2 = (ushort)(byte)local_80;
                                  }
                                }
                                else if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                              }
                              if (local_b2 == 0) {
                                uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))
                                                   (uVar19,local_d8);
                                if ((local_7b0 != '\0') && (local_7b8 != 0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                                break;
                              }
                              if (local_b0 == 0) {
LAB_00b92ff7:
                                FUN_00ccd8f0((int)(short)local_b2,&local_b0);
                                if (local_68 == (int64_t *)0x0) {
                                  if (local_b0 != 0) goto LAB_00b93088;
                                }
                                else if (local_60[0] != '\0') {
                                  FUN_00d50b20();
                                }
                                lVar2 = g_02765700;
                                if (g_02765700 != 0) {
                                  FUN_00d50b00();
                                }
                                local_368 = lVar2;
                                local_360 = '\x01';
                                FUN_00cc78b0();
                                if ((local_360 != '\0') && (local_368 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              else {
                                local_b0 = 0;
                                if (local_a8 == '\0') {
                                  local_a8 = '\0';
                                  goto LAB_00b92ff7;
                                }
                                FUN_00d50b20();
                                local_a8 = '\0';
                                if (local_b2 != 0) goto LAB_00b92ff7;
                              }
LAB_00b93088:
                              if ((local_b2 & 1) != 0) {
                                FUN_00ccd300(&local_6c,&local_eb);
                                bVar17 = local_68 != (int64_t *)0x0;
                                bVar18 = local_6c != 1;
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                plVar10 = local_118;
                                lVar2 = g_02765700;
                                if (bVar17 || bVar18) {
                                  if (g_02765700 != 0) {
                                    FUN_00d50b00();
                                  }
                                  local_358 = lVar2;
                                  local_350 = '\x01';
                                  FUN_00cc78b0();
                                  if ((local_350 != '\0') && (local_358 != 0)) {
                                    FUN_00d50b20();
                                  }
                                }
                              }
                              plVar11 = (int64_t *)FUN_00e8fc40();
                              FUN_00022d50();
                              uVar9 = (**(code **)(*plVar11 + 0x18))();
                              uVar14 = (undefined7)((uint64_t)uVar9 >> 8);
                              uVar19 = extraout_XMM0_Da_17;
                              if (plVar11 == local_90) {
                                if ((char)local_e8 == '\0') {
                                  local_e8 = (void*)CONCAT71(uVar14,1);
                                  plVar11 = local_90;
                                }
                                else {
                                  uVar19 = FUN_00d50b20();
                                  plVar11 = local_90;
                                }
                              }
                              else {
                                bVar17 = (char)local_e8 != '\0';
                                local_e8 = (void*)CONCAT71(uVar14,1);
                                if ((bVar17) && (local_90 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                              }
                              local_90 = plVar11;
                              if (local_ea != 0) {
                                uVar19 = FUN_00d46530();
                                plVar4 = local_80;
                                local_198 = 0;
                                plVar11 = g_027648d8;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar11 = g_027648d8;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_198 = '\x01';
                                local_1a0 = plVar4;
                                g_027648d8 = plVar11;
                                if (plVar11 != (int64_t *)0x0) {
                                  local_198 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar11;
                                uVar19 = FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                                if (plVar11 != (int64_t *)0x0) {
                                  uVar19 = FUN_00d50b20();
                                }
                                if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                              }
                              if (local_b0 != 0) {
                                local_348 = local_b0;
                                local_340 = '\0';
                                uVar19 = FUN_00d93320(uVar19,4);
                                plVar4 = local_80;
                                local_188 = 0;
                                plVar11 = g_027648f8;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar11 = g_027648f8;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_188 = '\x01';
                                local_190 = plVar4;
                                g_027648f8 = plVar11;
                                if (plVar11 != (int64_t *)0x0) {
                                  local_188 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar11;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar11 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_340 != '\0') && (local_348 != 0)) {
                                  FUN_00d50b20();
                                }
                              }
                              local_68 = local_90;
                              local_60[0] = '\0';
                              uVar19 = FUN_00d21140();
                              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                uVar19 = FUN_00d50b20();
                              }
                              uVar7 = (int)local_c0 + 1;
                              local_c0 = (void*)(uint64_t)uVar7;
                            } while ((int)uVar7 < (int)local_82);
                            if (plVar10 != (int64_t *)0x0) goto LAB_00b944f7;
                            bVar17 = true;
                          }
                          uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_d8);
                          if ((local_7a0 != '\0') && (local_7a8 != 0)) {
                            uVar19 = FUN_00d50b20();
                          }
                          if (((char)local_e8 != '\0') && (local_90 != (int64_t *)0x0)) {
                            uVar19 = FUN_00d50b20();
                          }
                          if (!bVar17) {
                            uVar19 = FUN_00d50b20();
                          }
                        }
                        else {
                          iVar6 = FUN_00e7de00(extraout_XMM0_Da_12,4);
                          if (iVar6 == 0) {
                            (**(code **)(*(int64_t *)*plVar1 + 0x390))
                                      (extraout_XMM0_Da_13,&local_d8);
                            if ((local_790 != '\0') && (local_798 != 0)) {
                              FUN_00d50b20();
                            }
                            local_d8 = (int64_t *)((int64_t)local_d8 + local_c8);
                            FUN_00ccd540(&local_6c,&local_108);
                            bVar17 = local_68 != (int64_t *)0x0;
                            bVar18 = local_6c != 4;
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              FUN_00d50b20();
                            }
                            lVar2 = g_02765700;
                            if (bVar17 || bVar18) {
                              if (g_02765700 != 0) {
                                FUN_00d50b00();
                              }
                              local_328 = lVar2;
                              local_320 = '\x01';
                              FUN_00cc78b0();
                              if ((local_320 != '\0') && (local_328 != 0)) {
                                FUN_00d50b20();
                              }
                            }
                            plVar10 = (int64_t *)FUN_00e8fc40();
                            FUN_00022d50();
                            uVar19 = (**(code **)(*plVar10 + 0x18))();
                            local_e8 = (void*)0x0;
                            local_118 = plVar10;
                            if (CONCAT22(uStack_106,local_108) < 1) {
                              local_c0 = (void*)0x0;
                              local_128 = 0;
                            }
                            else {
                              local_128 = 0;
                              local_c0 = (void*)0x0;
                              do {
                                plVar10 = (int64_t *)FUN_00e8fc40();
                                FUN_00022d50();
                                (**(code **)(*plVar10 + 0x18))();
                                local_90 = plVar10;
                                if (local_c0 == (void*)0x0) {
                                  puVar12 = (void*)FUN_00e8fc40();
                                  FUN_00d4ff40();
                                  *puVar12 = &g_02572358;
                                  uVar19 = (*local_248)();
                                  plVar10 = g_02765310;
                                  local_310 = '\0';
                                  local_318 = puVar12;
                                  local_c0 = puVar12;
                                  if (g_02765310 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                  }
                                  local_68 = plVar10;
                                  local_60[0] = '\0';
                                  uVar9 = FUN_00ca0840(uVar19,&local_68);
                                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                    uVar9 = FUN_00d50b20();
                                  }
                                  if (plVar10 != (int64_t *)0x0) {
                                    uVar9 = FUN_00d50b20();
                                  }
                                  local_128 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
                                  if ((local_310 != '\0') && (local_318 != (void*)0x0)) {
                                    FUN_00d50b20();
                                  }
                                }
                                uVar19 = FUN_00ccd8f0(0x10,&local_b0);
                                if (local_68 == (int64_t *)0x0) {
                                  if (local_b0 == 0) goto LAB_00b936c0;
                                }
                                else {
                                  if (local_60[0] != '\0') {
                                    FUN_00d50b20();
                                  }
LAB_00b936c0:
                                  lVar2 = g_02765700;
                                  if (g_02765700 != 0) {
                                    FUN_00d50b00();
                                  }
                                  local_308 = lVar2;
                                  local_300 = '\x01';
                                  uVar19 = FUN_00cc78b0();
                                  if ((local_300 != '\0') && (local_308 != 0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                }
                                plVar10 = g_02764910;
                                local_2f8 = local_b0;
                                local_2f0 = '\0';
                                if (g_02764910 != (int64_t *)0x0) {
                                  uVar19 = FUN_00d50b00();
                                }
                                local_68 = plVar10;
                                local_60[0] = '\0';
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_2f0 != '\0') && (local_2f8 != 0)) {
                                  FUN_00d50b20();
                                }
                                lVar2 = *plVar1;
                                if (lVar2 != 0) {
                                  FUN_00d50b00();
                                }
                                uVar19 = FUN_00b90e90();
                                plVar11 = local_80;
                                local_178 = 0;
                                plVar10 = g_02765320;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar10 = g_02765320;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_178 = '\x01';
                                local_180 = plVar11;
                                g_02765320 = plVar10;
                                if (plVar10 != (int64_t *)0x0) {
                                  local_178 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar10;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (lVar2 != 0) {
                                  FUN_00d50b20();
                                }
                                lVar2 = *plVar1;
                                if (lVar2 != 0) {
                                  FUN_00d50b00();
                                }
                                uVar19 = FUN_00b90e90();
                                plVar11 = local_80;
                                local_168 = 0;
                                plVar10 = g_02764920;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar10 = g_02764920;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_168 = '\x01';
                                local_170 = plVar11;
                                g_02764920 = plVar10;
                                if (plVar10 != (int64_t *)0x0) {
                                  local_168 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar10;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (lVar2 != 0) {
                                  FUN_00d50b20();
                                }
                                lVar2 = *plVar1;
                                if (lVar2 != 0) {
                                  FUN_00d50b00();
                                }
                                uVar19 = FUN_00b90e90();
                                plVar11 = local_80;
                                local_158 = 0;
                                plVar10 = g_02765330;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar10 = g_02765330;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_158 = '\x01';
                                local_160 = plVar11;
                                g_02765330 = plVar10;
                                if (plVar10 != (int64_t *)0x0) {
                                  local_158 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar10;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (lVar2 != 0) {
                                  FUN_00d50b20();
                                }
                                lVar2 = *plVar1;
                                if (lVar2 != 0) {
                                  FUN_00d50b00();
                                }
                                uVar19 = FUN_00b90e90();
                                plVar11 = local_80;
                                local_148 = 0;
                                plVar10 = g_02764930;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar10 = g_02764930;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_148 = '\x01';
                                local_150 = plVar11;
                                g_02764930 = plVar10;
                                if (plVar10 != (int64_t *)0x0) {
                                  local_148 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar10;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (lVar2 != 0) {
                                  FUN_00d50b20();
                                }
                                lVar2 = *plVar1;
                                if (lVar2 != 0) {
                                  FUN_00d50b00();
                                }
                                uVar19 = FUN_00b90e90();
                                plVar11 = local_80;
                                local_138 = 0;
                                plVar10 = g_02765340;
                                if (local_78 == '\0') {
                                  if (local_80 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b00();
                                    plVar10 = g_02765340;
                                  }
                                }
                                else {
                                  local_78 = '\0';
                                }
                                local_138 = '\x01';
                                local_140 = plVar11;
                                g_02765340 = plVar10;
                                if (plVar10 != (int64_t *)0x0) {
                                  local_138 = '\x01';
                                  uVar19 = FUN_00d50b00();
                                }
                                local_60[0] = '\0';
                                local_68 = plVar10;
                                FUN_00ca0840(uVar19,&local_68);
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (plVar10 != (int64_t *)0x0) {
                                  FUN_00d50b20();
                                }
                                if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  FUN_00d50b20();
                                }
                                if (lVar2 != 0) {
                                  FUN_00d50b20();
                                }
                                FUN_00ccd300(&local_6c,&local_82);
                                if ((local_730 != '\0') && (local_738 != 0)) {
                                  FUN_00d50b20();
                                }
                                if ((byte)local_82 == '\0') {
LAB_00b93e56:
                                  iVar6 = 0;
                                  do {
                                    FUN_00ccd300(&local_6c,&local_68);
                                    if ((local_720 != '\0') && (local_728 != 0)) {
                                      FUN_00d50b20();
                                    }
                                    iVar6 = iVar6 + 1;
                                  } while (iVar6 < (int)(0x1f - (uint)(byte)local_82));
                                }
                                else {
                                  uVar19 = FUN_00ccd8f0((byte)local_82,&local_b0);
                                  if (local_68 == (int64_t *)0x0) {
                                    if (local_b0 != 0) {
                                      local_2e8 = local_b0;
                                      local_2e0 = '\0';
                                      uVar19 = FUN_00d93320(uVar19,4);
                                      plVar10 = local_68;
                                      if (local_60[0] == '\0') {
                                        if (((local_68 != (int64_t *)0x0) &&
                                            (uVar19 = FUN_00d50b00(), local_60[0] != '\0')) &&
                                           (local_68 != (int64_t *)0x0)) {
                                          uVar19 = FUN_00d50b20();
                                        }
                                      }
                                      else {
                                        local_60[0] = '\0';
                                      }
                                      if ((local_2e0 != '\0') && (local_2e8 != 0)) {
                                        uVar19 = FUN_00d50b20();
                                      }
                                      plVar11 = g_02729550;
                                      if (plVar10 != (int64_t *)0x0) {
                                        local_2d8 = plVar10;
                                        local_2d0 = '\0';
                                        if (g_02729550 != (int64_t *)0x0) {
                                          uVar19 = FUN_00d50b00();
                                        }
                                        local_68 = plVar11;
                                        local_60[0] = '\0';
                                        FUN_00ca0840(uVar19,&local_68);
                                        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0))
                                        {
                                          FUN_00d50b20();
                                        }
                                        if (plVar11 != (int64_t *)0x0) {
                                          FUN_00d50b20();
                                        }
                                        if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
                                          FUN_00d50b20();
                                        }
                                        FUN_00d50b20();
                                      }
                                    }
                                  }
                                  else if (local_60[0] != '\0') {
                                    FUN_00d50b20();
                                  }
                                  if ((byte)local_82 < 0x1f) goto LAB_00b93e56;
                                }
                                local_68 = local_90;
                                local_60[0] = '\0';
                                uVar19 = FUN_00d21140();
                                if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                                if (local_90 != (int64_t *)0x0) {
                                  uVar19 = FUN_00d50b20();
                                }
                                uVar7 = (int)local_e8 + 1;
                                local_e8 = (void*)(uint64_t)uVar7;
                              } while ((int)uVar7 < CONCAT22(uStack_106,local_108));
                            }
                            plVar10 = g_02764940;
                            local_2c8 = local_118;
                            local_2c0 = '\0';
                            if (g_02764940 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b00();
                            }
                            local_68 = plVar10;
                            local_60[0] = '\0';
                            uVar19 = FUN_00ca0840(uVar19,&local_68);
                            if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (plVar10 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b20();
                            }
                            if ((local_2c0 != '\0') && (local_2c8 != (int64_t *)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_d8);
                            if ((local_710 != '\0') && (local_718 != 0)) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (local_118 != (int64_t *)0x0) {
                              uVar19 = FUN_00d50b20();
                            }
                            if (((char)local_128 != '\0') && (local_c0 != (void*)0x0)) {
                              uVar19 = FUN_00d50b20();
                            }
                          }
                          else {
                            iVar6 = FUN_00e7de00(extraout_XMM0_Da_13,4);
                            if (iVar6 == 0) {
                              uVar19 = extraout_XMM0_Da_14;
                              if (local_c8 != 0) {
                                local_78 = '\0';
                                local_80 = (int64_t *)0x0;
                                uVar19 = FUN_00ccd8f0(local_c8,&local_80);
                                if ((local_700 != '\0') && (local_708 != 0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                                if (local_80 != (int64_t *)0x0) {
                                  (**(code **)(*this_ptr + 0x380))();
                                  local_2b8 = local_80;
                                  local_2b0 = '\0';
                                  uVar19 = FUN_00bc0e10(local_80,&local_2b8);
                                  plVar10 = local_68;
                                  if (local_60[0] == '\0') {
                                    if (((local_68 != (int64_t *)0x0) &&
                                        (uVar19 = FUN_00d50b00(), local_60[0] != '\0')) &&
                                       (local_68 != (int64_t *)0x0)) {
                                      uVar19 = FUN_00d50b20();
                                    }
                                  }
                                  else {
                                    local_60[0] = '\0';
                                  }
                                  if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                  if (plVar10 != (int64_t *)0x0) {
                                    local_2a8 = plVar10;
                                    local_2a0 = '\0';
                                    uVar19 = (**(code **)(*plVar10 + 0x368))();
                                    plVar10 = (int64_t *)
                                              CONCAT44(uStack_104,CONCAT22(uStack_106,local_108));
                                    if (local_100 == '\0') {
                                      if (plVar10 != (int64_t *)0x0) {
                                        uVar19 = FUN_00d50b00();
                                      }
                                    }
                                    else {
                                      local_100 = '\0';
                                    }
                                    local_60[0] = '\0';
                                    local_68 = plVar10;
                                    FUN_00ca0840(uVar19,&local_68);
                                    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                    if (plVar10 != (int64_t *)0x0) {
                                      FUN_00d50b20();
                                    }
                                    if ((local_100 != '\0') &&
                                       (CONCAT44(uStack_104,CONCAT22(uStack_106,local_108)) != 0)) {
                                      FUN_00d50b20();
                                    }
                                    if ((local_2a0 != '\0') && (local_2a8 != (int64_t *)0x0)) {
                                      FUN_00d50b20();
                                    }
                                    uVar19 = FUN_00d50b20();
                                  }
                                }
                                if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                  uVar19 = FUN_00d50b20();
                                }
                              }
                            }
                            else {
                              iVar6 = FUN_00e7de00(extraout_XMM0_Da_14,4);
                              uVar19 = extraout_XMM0_Da_15;
                              if (iVar6 == 0) {
                                if (local_c8 != 0) {
                                  (**(code **)(*(int64_t *)*plVar1 + 0x390))
                                            (extraout_XMM0_Da_15,&local_d8);
                                  if ((local_6f0 != '\0') && (local_6f8 != 0)) {
                                    FUN_00d50b20();
                                  }
                                  lVar2 = local_c8;
                                  if (local_c8 != 0) {
                                    local_90 = local_d8;
                                    local_228 = 0;
                                    lVar3 = *plVar1;
                                    if (lVar3 != 0) {
                                      FUN_00d50b00();
                                    }
                                    local_228 = '\x01';
                                    local_230 = lVar3;
                                    FUN_00be1550(&local_230,lVar2);
                                    plVar10 = local_68;
                                    if (local_60[0] == '\0') {
                                      if (((local_68 != (int64_t *)0x0) &&
                                          (FUN_00d50b00(), local_60[0] != '\0')) &&
                                         (local_68 != (int64_t *)0x0)) {
                                        FUN_00d50b20();
                                      }
                                    }
                                    else {
                                      local_60[0] = '\0';
                                    }
                                    if ((local_228 != '\0') && (local_230 != 0)) {
                                      FUN_00d50b20();
                                    }
                                    if (plVar10 != (int64_t *)0x0) {
                                      local_298 = plVar10;
                                      local_290 = '\0';
                                      uVar19 = (**(code **)(*plVar10 + 0x368))();
                                      plVar10 = local_80;
                                      if (local_78 == '\0') {
                                        if (local_80 != (int64_t *)0x0) {
                                          uVar19 = FUN_00d50b00();
                                        }
                                      }
                                      else {
                                        local_78 = '\0';
                                      }
                                      local_68 = plVar10;
                                      local_60[0] = '\0';
                                      FUN_00ca0840(uVar19,&local_68);
                                      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                        FUN_00d50b20();
                                      }
                                      if (plVar10 != (int64_t *)0x0) {
                                        FUN_00d50b20();
                                      }
                                      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                        FUN_00d50b20();
                                      }
                                      if ((local_290 != '\0') && (local_298 != (int64_t *)0x0)) {
                                        FUN_00d50b20();
                                      }
                                      FUN_00d50b20();
                                    }
                                  }
                                  local_d8 = (int64_t *)((int64_t)local_d8 + local_c8);
                                  uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))();
                                  if ((local_6e0 != '\0') && (local_6e8 != 0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                }
                              }
                              else {
                                if (local_b0 != 0) {
                                  local_b0 = 0;
                                  if (local_a8 != '\0') {
                                    uVar19 = FUN_00d50b20();
                                  }
                                  local_a8 = '\0';
                                }
                                if (local_c8 != 0) {
                                  uVar19 = FUN_00ccd8f0(local_c8,&local_b0);
                                  if (local_68 == (int64_t *)0x0) {
                                    if (local_b0 != 0) goto LAB_00b9493a;
                                  }
                                  else if (local_60[0] != '\0') {
                                    FUN_00d50b20();
                                  }
                                  lVar2 = g_02765700;
                                  if (g_02765700 != 0) {
                                    FUN_00d50b00();
                                  }
                                  local_288 = lVar2;
                                  local_280 = '\x01';
                                  uVar19 = FUN_00cc78b0();
                                  if ((local_280 != '\0') && (local_288 != 0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                }
LAB_00b9493a:
                                if (local_b0 != 0) {
                                  local_278 = local_b0;
                                  local_270 = '\0';
                                  uVar19 = FUN_00d93440(4,4);
                                  plVar10 = local_80;
                                  if (local_78 == '\0') {
                                    if (local_80 != (int64_t *)0x0) {
                                      uVar19 = FUN_00d50b00();
                                    }
                                  }
                                  else {
                                    local_78 = '\0';
                                  }
                                  local_68 = plVar10;
                                  local_60[0] = '\0';
                                  uVar19 = FUN_00ca0840(uVar19,&local_68);
                                  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                  if (plVar10 != (int64_t *)0x0) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                  if ((local_270 != '\0') && (local_278 != 0)) {
                                    uVar19 = FUN_00d50b20();
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_00b914b9;
    }
    (**(code **)(*(int64_t *)*plVar1 + 0x390))(extraout_XMM0_Da_01,&local_250);
    if ((local_870 != '\0') && (local_878 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ccd330(&local_6c,&local_108);
    bVar17 = local_68 != (int64_t *)0x0;
    bVar18 = local_6c != 2;
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (bVar17 || bVar18) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_5e8 = lVar2;
      local_5e0 = '\x01';
      FUN_00cc78b0();
      if ((local_5e0 != '\0') && (local_5e8 != 0)) {
        FUN_00d50b20();
      }
    }
    *(int *)(this_ptr + 6) = (int)local_108;
    lVar2 = g_02764880;
    if (local_108 < 1) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_5d8 = lVar2;
      local_5d0 = '\x01';
      FUN_00cc78b0();
      if ((local_5d0 != '\0') && (local_5d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd540(&local_6c,&local_80);
    bVar17 = local_68 != (int64_t *)0x0;
    bVar18 = local_6c != 4;
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (bVar17 || bVar18) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_5c8 = lVar2;
      local_5c0 = '\x01';
      FUN_00cc78b0();
      if ((local_5c0 != '\0') && (local_5c8 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)((int64_t)this_ptr + 0x34) = local_80._0_4_;
    FUN_00ccd330(&local_6c,&local_82);
    bVar17 = local_68 != (int64_t *)0x0;
    bVar18 = local_6c != 2;
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (bVar17 || bVar18) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_5b8 = lVar2;
      local_5b0 = '\x01';
      FUN_00cc78b0();
      if ((local_5b0 != '\0') && (local_5b8 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar6 = (int)local_82;
    *(int *)(this_ptr + 7) = iVar6;
    lVar2 = g_02764880;
    if (3 < (iVar6 << 0x1d | iVar6 - 8U >> 3)) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_5a8 = lVar2;
      local_5a0 = '\x01';
      FUN_00cc78b0();
      if ((local_5a0 != '\0') && (local_5a8 != 0)) {
        FUN_00d50b20();
      }
    }
    local_9c = 10;
    uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x380))(&local_9c,local_6c0);
    bVar17 = local_68 != (int64_t *)0x0;
    bVar18 = local_9c != 10;
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar19 = FUN_00d50b20();
    }
    lVar2 = g_02765700;
    if (bVar17 || bVar18) {
      if (g_02765700 != 0) {
        FUN_00d50b00();
      }
      local_598 = lVar2;
      local_590 = '\x01';
      uVar19 = FUN_00cc78b0();
      if ((local_590 != '\0') && (local_598 != 0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    lVar2 = g_02764880;
    if (((*local_6c0 != '@') || (0x1c < *(byte *)((int64_t)this_ptr + 0x3d))) ||
       (0x2c308 < (((uint)(*(byte *)((int64_t)this_ptr + 0x41) >> 1) |
                   (uint)*(byte *)(this_ptr + 8) << 7 |
                   (uint)*(byte *)((int64_t)this_ptr + 0x3f) << 0xf |
                   (uint)*(byte *)((int64_t)this_ptr + 0x3e) << 0x17) >>
                  (0x1d - *(byte *)((int64_t)this_ptr + 0x3d) & 0x1f)) - 11000)) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_588 = lVar2;
      local_580 = '\x01';
      uVar19 = FUN_00cc78b0();
      if ((local_580 != '\0') && (local_588 != 0)) {
        uVar19 = FUN_00d50b20();
      }
    }
    if ((char)local_10c != '\0') {
      local_9c = 4;
      (**(code **)(*(int64_t *)*plVar1 + 0x380))(&local_9c,&local_e0);
      bVar17 = local_68 != (int64_t *)0x0;
      bVar18 = local_9c != 4;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = g_02765700;
      if (bVar17 || bVar18) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        local_578 = lVar2;
        local_570 = '\x01';
        FUN_00cc78b0();
        if ((local_570 != '\0') && (local_578 != 0)) {
          FUN_00d50b20();
        }
      }
      local_9c = 0x10;
      uVar19 = (**(code **)(*(int64_t *)*plVar1 + 0x380))(&local_9c,&local_58);
      bVar17 = local_68 != (int64_t *)0x0;
      bVar18 = local_9c != 0x10;
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      lVar2 = g_02765700;
      if (bVar17 || bVar18) {
        if (g_02765700 != 0) {
          FUN_00d50b00();
        }
        local_568 = lVar2;
        local_560 = '\x01';
        uVar19 = FUN_00cc78b0();
        if ((local_560 != '\0') && (local_568 != 0)) {
          uVar19 = FUN_00d50b20();
        }
      }
      iVar6 = FUN_00e7de00(uVar19,4);
      uVar19 = extraout_XMM0_Da_18;
      if (iVar6 != 0) {
        iVar6 = FUN_00e7de00(extraout_XMM0_Da_18,4);
        plVar10 = local_6a8;
        uVar19 = extraout_XMM0_Da_19;
        if (((iVar6 == 0) ||
            (iVar6 = FUN_00e7de00(local_6a8,4), plVar10 = local_6a8, uVar19 = extraout_XMM0_Da_20,
            iVar6 == 0)) ||
           (iVar6 = FUN_00e7de00(local_6a8,4), plVar10 = local_6a0, uVar19 = extraout_XMM0_Da_21,
           iVar6 == 0)) {
LAB_00b95260:
          *(void*)plVar10 = 1;
        }
        else {
          iVar6 = FUN_00e7de00(local_6a0,4);
          uVar19 = extraout_XMM0_Da_22;
          if (((iVar6 != 0) &&
              (iVar6 = FUN_00e7de00(extraout_XMM0_Da_22,4), uVar19 = extraout_XMM0_Da_23, iVar6 != 0
              )) && (iVar6 = FUN_00e7de00(extraout_XMM0_Da_23,4), uVar19 = extraout_XMM0_Da_24,
                    iVar6 != 0)) {
            iVar6 = FUN_00e7de00(extraout_XMM0_Da_24,4);
            lVar2 = g_02764880;
            plVar10 = local_6a0;
            uVar19 = extraout_XMM0_Da_25;
            if (iVar6 == 0) goto LAB_00b95260;
            if (g_02764880 != 0) {
              FUN_00d50b00();
            }
            local_558 = lVar2;
            local_550 = '\x01';
            uVar19 = FUN_00cc78b0();
            if ((local_550 != '\0') && (local_558 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
        }
      }
    }
    uVar9 = (**(code **)(*(int64_t *)*plVar1 + 0x3a0))(uVar19,local_c8 + local_250);
    uVar19 = extraout_XMM0_Da_26;
    if ((local_860 != '\0') && (local_868 != 0)) {
      uVar9 = FUN_00d50b20();
      uVar19 = extraout_XMM0_Da_27;
    }
    local_6c8 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  } while( true );
}

