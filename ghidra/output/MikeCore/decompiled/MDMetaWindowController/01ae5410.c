// Function: FUN_01ae5410
// Address: 01ae5410
// Size: 12103 bytes
// Class: MDMetaWindowController


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ae5410(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 **ppuVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 **ppuVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  pthread_key_t pVar17;
  undefined8 **in_RCX;
  undefined1 auVar18 [8];
  longlong lVar19;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 **ppuVar20;
  bool bVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 in_XMM1 [16];
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 uVar45;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 unaff_XMM6 [16];
  undefined8 **local_418;
  undefined1 local_410;
  float local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  float local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined *local_3e8;
  undefined8 **local_3e0;
  float local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  longlong local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong local_388;
  char local_380;
  undefined8 **local_378;
  char local_370;
  undefined8 **local_368;
  char local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined1 local_348 [16];
  int local_32c;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  longlong *local_300;
  char local_2f8;
  longlong *local_2f0;
  char local_2e8;
  longlong *local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  undefined8 **local_290;
  undefined1 local_288 [16];
  undefined1 local_278 [20];
  int local_264;
  int local_260;
  float local_25c;
  undefined8 **local_258;
  char local_250;
  undefined8 **local_248;
  char local_240;
  undefined8 **local_238;
  char local_230;
  undefined8 **local_228;
  char local_220;
  undefined8 **local_218;
  char local_210;
  undefined8 **local_208;
  char local_200;
  undefined8 **local_1f8;
  char local_1f0;
  undefined8 **local_1e8;
  char local_1e0;
  undefined8 **local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  undefined8 **local_1b8;
  char local_1b0;
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 local_194;
  undefined8 **local_190;
  undefined1 local_188 [8];
  undefined8 uStack_180;
  undefined8 **local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 **local_160;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined4 local_12c;
  undefined8 **local_128;
  undefined8 *local_120 [13];
  longlong local_b8;
  char local_b0;
  undefined1 local_a8 [16];
  char local_89;
  char local_88;
  undefined7 uStack_87;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 *local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  uStack_180 = in_XMM0_Qb;
  local_188 = (undefined1  [8])param_1;
  local_148 = in_XMM1;
  FUN_01ad3cb0();
  ppuVar5 = local_128;
  if ((char)local_120[0] == '\0') {
    if (local_128 == (undefined8 **)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_128 == (undefined8 **)0x0) {
    return;
  }
  FUN_01ad3320();
  local_190 = local_128;
  if (((char)local_120[0] == '\0') && (local_128 != (undefined8 **)0x0)) {
    FUN_00d50b00();
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_70 = 0;
    local_78 = (undefined1  [8])DAT_023dccec;
    local_348._8_8_ = 0;
    local_348._0_8_ = DAT_023dccf4;
  }
  else {
    local_a8._0_8_ = FUN_01e3f820();
    local_a8._8_8_ = extraout_XMM0_Qb;
    iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
    local_348 = in_XMM1;
    if (iVar8 == 3) {
      FUN_01e3f820();
      _local_78 = blendps(in_XMM1,_DAT_0241c700,0xd);
      iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar8 == 1) goto LAB_01ae5538;
LAB_01ae5534:
      if (iVar8 == 0) goto LAB_01ae5538;
      FUN_01e3f820();
      _local_158 = in_XMM1;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar40 = blendps(_local_158,_DAT_0241c710,0xd);
    }
    else {
      in_RCX = (undefined8 **)&DAT_023dccec;
      uStack_70 = 0;
      local_78 = (undefined1  [8])DAT_023dccf4;
      if (iVar8 != 1) goto LAB_01ae5534;
LAB_01ae5538:
      auVar40._8_8_ = 0;
      auVar40._0_8_ = DAT_023dccf4;
    }
    auVar37._0_4_ = (float)local_78._0_4_ + local_a8._0_4_ + auVar40._0_4_;
    auVar37._4_4_ = (float)local_78._4_4_ + local_a8._4_4_ + auVar40._4_4_;
    auVar37._8_4_ = (float)uStack_70 + local_a8._8_4_ + auVar40._8_4_;
    auVar37._12_4_ = uStack_70._4_4_ + local_a8._12_4_ + auVar40._12_4_;
    _local_78 = blendps(auVar37,local_a8,2);
    local_348 = blendps(local_348,_DAT_0241c720,0xd);
    in_XMM1 = local_a8;
  }
  uVar24 = FUN_01adad50();
  fVar44 = in_XMM1._0_4_;
  auVar47._8_4_ = (int)extraout_XMM0_Qb_00;
  auVar47._0_8_ = uVar24;
  auVar47._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_328._4_12_ = auVar47._4_12_;
  local_328._0_4_ = (float)uVar24 + DAT_02390d00;
  if ((fVar44 == 0.0) && (!NAN(fVar44))) {
    local_328._8_8_ = extraout_XMM0_Qb_00;
    local_328._0_8_ = uVar24;
  }
  local_318._4_12_ = in_XMM1._4_12_;
  local_318._0_4_ = fVar44 + DAT_02390124;
  if ((fVar44 == 0.0) && (!NAN(fVar44))) {
    local_318 = in_XMM1;
  }
  local_288._0_8_ = FUN_01adabe0();
  local_288._8_8_ = extraout_XMM0_Qb_01;
  local_a8 = in_XMM1;
  local_158 = (undefined1  [8])FUN_01e436c0();
  uStack_150 = extraout_XMM0_Qb_02;
  fVar44 = in_XMM1._4_4_ + (float)((ulonglong)local_158 >> 0x20);
  fVar46 = in_XMM1._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
  auVar25._4_4_ = fVar44;
  auVar25._0_4_ = fVar44;
  auVar25._8_4_ = fVar46;
  auVar25._12_4_ = fVar46;
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = fVar44 + DAT_0241c3ec;
  uVar23 = (**(code **)(*unaff_RDI + 0x920))(auVar26._0_8_);
  local_278._0_4_ = uVar23;
  auVar27._4_4_ = local_158._4_4_;
  auVar27._0_4_ = local_158._4_4_;
  auVar27._8_4_ = uStack_150._4_4_;
  auVar27._12_4_ = uStack_150._4_4_;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = (float)local_158._4_4_ + DAT_0241f374;
  uVar23 = (**(code **)(*unaff_RDI + 0x920))(auVar28._0_8_);
  local_158._0_4_ = uVar23;
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    in_RCX = ppuVar5;
  }
  FUN_0173b790();
  local_160 = local_128;
  if (((((char)local_120[0] == '\0') && (local_128 != (undefined8 **)0x0)) &&
      (FUN_00d50b00(), (char)local_120[0] != '\0')) && (local_128 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    in_RCX = ppuVar5;
  }
  FUN_0173b6f0();
  local_170 = local_128;
  if ((((char)local_120[0] == '\0') && (local_128 != (undefined8 **)0x0)) &&
     ((FUN_00d50b00(), (char)local_120[0] != '\0' && (local_128 != (undefined8 **)0x0)))) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  ppuVar20 = ppuVar5;
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    in_RCX = ppuVar5;
    ppuVar20 = (undefined8 **)ppuVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
  }
  iVar8 = (*(code *)(*ppuVar20)[0x75])();
  pvVar10 = _pthread_getspecific((pthread_key_t)in_RCX);
  ppuVar20 = ppuVar5;
  if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
    in_RCX = ppuVar5;
    ppuVar20 = (undefined8 **)ppuVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
  }
  pVar17 = (pthread_key_t)in_RCX;
  local_264 = (*(code *)(*ppuVar20)[0x75])();
  FUN_0173ba80();
  local_290 = local_128;
  if (((((char)local_120[0] == '\0') && (local_128 != (undefined8 **)0x0)) &&
      (FUN_00d50b00(), (char)local_120[0] != '\0')) && (local_128 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific(pVar17);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_89 = FUN_01770870();
  local_1b0 = '\0';
  local_1b8 = (undefined8 **)0x0;
  FUN_01a1d6e0();
  local_32c = (*(code *)(*local_128)[0x1a1])();
  if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  _local_158 = ZEXT416((uint)(DAT_02390124 + local_78._0_4_));
  local_260 = (int)unaff_RDI[0x29];
  blendps(_local_78,_local_158,1);
  FUN_01ada2c0();
  if (((float)local_a8._0_4_ != 0.0) || (NAN((float)local_a8._0_4_))) {
    FUN_01a1d6e0();
    iVar9 = (**(code **)(&UNK_000015a0 + (longlong)*local_128))();
    if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
      FUN_00d50b20();
    }
    lVar19 = DAT_027e3b70;
    lVar11 = DAT_027e1380;
    uVar24 = 1;
    if (iVar9 == 0) {
      if (((((char)unaff_RDI[0x3c] != '\0') || (*(char *)((longlong)unaff_RDI + 0x1e1) != '\0')) ||
          (*(float *)((longlong)unaff_RDI + 0x1e4) != 0.0)) ||
         ((NAN(*(float *)((longlong)unaff_RDI + 0x1e4)) || (local_190 == (undefined8 **)0x0)))) {
        if (DAT_027e1380 != 0) {
          FUN_00d50b00();
        }
        bVar22 = lVar11 != 0;
        lVar19 = lVar11;
      }
      else {
        if (DAT_027e3b70 != 0) {
          FUN_00d50b00();
        }
        bVar22 = lVar19 != 0;
        uVar24 = 0;
      }
    }
    else {
      bVar22 = false;
      lVar19 = 0;
    }
    if (((float)local_318._0_4_ == 0.0) && (!NAN((float)local_318._0_4_))) {
      bVar3 = (bool)(lVar19 == 0 & bVar22);
      uVar24 = 1;
      if ((lVar19 != 0) && (bVar22)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      bVar22 = bVar3;
      lVar19 = 0;
    }
    local_3a8 = *unaff_RSI;
    local_3a0 = '\0';
    local_390 = '\0';
    local_398 = lVar19;
    FUN_01a1e750(&local_398,uVar24);
    if ((local_390 != '\0') && (local_398 != 0)) {
      FUN_00d50b20();
    }
    if ((local_3a0 != '\0') && (local_3a8 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar22) && (lVar19 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((float)local_318._0_4_ == 0.0) && (!NAN((float)local_318._0_4_))) goto LAB_01ae82f9;
  if (iVar8 <= local_264) {
    local_3d8 = (float)local_318._0_4_ + (float)local_328._0_4_;
    local_25c = DAT_02390d34 + local_158._0_4_;
    local_3f8 = (float)local_348._0_4_ * DAT_0239011c + local_158._0_4_;
    uStack_3f4 = local_348._4_4_;
    uStack_3f0 = local_348._8_4_;
    uStack_3ec = local_348._12_4_;
    uStack_3d4 = local_318._4_4_;
    uStack_3d0 = local_318._8_4_;
    uStack_3cc = local_318._12_4_;
    fVar44 = DAT_02390d00 + local_3d8 + DAT_02394248;
    local_3e0 = DAT_02680418;
    local_3e8 = &DAT_02680400;
    auVar18 = (undefined1  [8])DAT_02680418;
    iVar8 = iVar8 + -1;
    do {
      pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
      ppuVar20 = ppuVar5;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        auVar18 = (undefined1  [8])ppuVar5;
        ppuVar20 = (undefined8 **)ppuVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      local_a8._0_4_ = iVar8 + 1;
      (*(code *)(*ppuVar20)[0x74])();
      local_158 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
      uStack_150 = extraout_XMM0_Qb_04;
      pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
      ppuVar20 = ppuVar5;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        auVar18 = (undefined1  [8])ppuVar5;
        ppuVar20 = (undefined8 **)ppuVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      (*(code *)(*ppuVar20)[0x74])();
      local_288._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
      local_288._8_8_ = extraout_XMM0_Qb_05;
      pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
      ppuVar20 = ppuVar5;
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        auVar18 = (undefined1  [8])ppuVar5;
        ppuVar20 = (undefined8 **)ppuVar5[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
      }
      (*(code *)(*ppuVar20)[0x74])();
      local_358 = (**(code **)(*unaff_RDI + 0x918))();
      uStack_350 = extraout_XMM0_Qb_06;
      pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
      if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        auVar18 = (undefined1  [8])ppuVar5;
      }
      uVar24 = FUN_01740240();
      local_78 = (undefined1  [8])local_128;
      if ((char)local_120[0] == '\0') {
        if (local_128 == (undefined8 **)0x0) goto LAB_01ae5f40;
        FUN_00d50b00();
        if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
LAB_01ae5e10:
        pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          auVar18 = (undefined1  [8])local_170;
        }
        uVar24 = FUN_01736e30();
        local_278._0_4_ =
             (int)CONCAT71((int7)((ulonglong)uVar24 >> 8),local_78 == (undefined1  [8])local_128);
        if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          auVar18 = local_78;
        }
        uVar23 = FUN_01739620();
        local_188._0_4_ = uVar23;
        pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
        if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          auVar18 = local_78;
        }
        bVar6 = FUN_01739960();
        local_12c = 0;
        iVar8 = (int)unaff_RDI[0x28];
joined_r0x01ae5f32:
        if (iVar8 != -1000000) {
          FUN_00e7b510();
        }
        pVar17 = SUB84(auVar18,0);
        if (((local_32c == 2) && (local_260 != 2)) && (local_260 != 4)) {
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar17 = (pthread_key_t)ppuVar5;
          }
          FUN_0173b6f0();
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e70();
          FUN_00d23310();
          ppuVar20 = local_128;
          local_88 = (char)local_120[0];
          auVar18 = (undefined1  [8])&local_88;
          ppuVar12 = local_120;
          if ((char)local_120[0] == '\0') {
            ppuVar12 = (undefined8 **)auVar18;
          }
          *(undefined1 *)ppuVar12 = 0;
          if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific(SUB84(auVar18,0));
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            auVar18 = (undefined1  [8])ppuVar5;
          }
          FUN_01740240();
          if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (ppuVar20 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01cfbee0();
        ppuVar20 = local_128;
        if (((((char)local_120[0] == '\0') && (local_128 != (undefined8 **)0x0)) &&
            (FUN_00d50b00(), (char)local_120[0] != '\0')) && (local_128 != (undefined8 **)0x0)) {
          FUN_00d50b20();
        }
        if (bVar6 == 0) {
          if (local_188[0] == '\0') {
            local_148._0_8_ = ppuVar20;
          }
          else {
            FUN_01a1e050();
            local_148._0_8_ = local_128;
            if (ppuVar20 == local_128) {
              local_148._0_8_ = ppuVar20;
            }
            else {
              if ((char)local_120[0] != '\0') {
                if (ppuVar20 != (undefined8 **)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_01ae62d0;
              }
              if (local_128 != (undefined8 **)0x0) {
                FUN_00d50b00();
              }
              if (ppuVar20 != (undefined8 **)0x0) {
                FUN_00d50b20();
              }
            }
            if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          (**(code **)(*unaff_RDI + 0x640))();
          ppuVar12 = (undefined8 **)local_128[0x21];
          if (ppuVar20 == ppuVar12) {
            local_148._0_8_ = ppuVar20;
          }
          else {
            local_148._0_8_ = ppuVar12;
            if (ppuVar12 != (undefined8 **)0x0) {
              FUN_00d50b00();
            }
            if (ppuVar20 != (undefined8 **)0x0) {
              FUN_00d50b20();
            }
          }
          if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_01ae62d0:
        local_388 = local_148._0_8_;
        local_380 = '\0';
        FUN_01d488d0();
        if ((local_380 != '\0') && (local_388 != 0)) {
          FUN_00d50b20();
        }
        local_168 = 0x3cf5c28f;
        local_164 = 0x3f7851ec;
        if ((DAT_028b3f80 == (longlong *)0x0) || (DAT_028b3f89 == '\0')) {
          FUN_00e8cb50();
          if (DAT_028b3f80 == (longlong *)0x0) {
            plVar13 = (longlong *)FUN_00e8fc40();
            FUN_001b9f00();
            (**(code **)(*plVar13 + 0x18))();
            if (DAT_028b3f80 == plVar13) {
              bVar3 = false;
              bVar22 = false;
            }
            else {
              bVar3 = true;
              bVar22 = true;
              bVar21 = DAT_028b3f80 != (longlong *)0x0;
              DAT_028b3f80 = plVar13;
              if (bVar21) {
                FUN_00d50b20();
              }
            }
            if (DAT_028b3f88 == '\0') {
              DAT_028b3f88 = '\x01';
              FUN_00e8cb90();
              bVar22 = bVar3;
            }
            if (!bVar22) {
              FUN_00d50b20();
            }
            cVar7 = FUN_01ad9100();
            if (cVar7 == '\0') {
              FUN_01cfc9f0();
              local_68 = 0;
              FUN_01cfc9f0();
              local_64 = 0x3e4ccccd;
              FUN_01cfc9f0();
              local_198 = 0x3f4ccccd;
              FUN_01cfc9f0();
              local_194 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_64,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfc9f0();
              local_68 = 0;
              FUN_01cfc9f0();
              local_64 = 0x3e4ccccd;
              FUN_01cfc9f0();
              local_198 = 0x3f4ccccd;
              FUN_01cfc9f0();
              local_194 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_64,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            DAT_028b3f89 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028b3f89 = '\x01';
            FUN_00e8cb70();
          }
        }
        if ((DAT_028b3f90 == (longlong *)0x0) || (DAT_028b3f99 == '\0')) {
          FUN_00e8cb50();
          if (DAT_028b3f90 == (longlong *)0x0) {
            plVar13 = (longlong *)FUN_00e8fc40();
            FUN_001b9f00();
            (**(code **)(*plVar13 + 0x18))();
            if (DAT_028b3f90 == plVar13) {
              bVar3 = false;
              bVar22 = false;
            }
            else {
              bVar3 = true;
              bVar22 = true;
              bVar21 = DAT_028b3f90 != (longlong *)0x0;
              DAT_028b3f90 = plVar13;
              if (bVar21) {
                FUN_00d50b20();
              }
            }
            if (DAT_028b3f98 == '\0') {
              DAT_028b3f98 = '\x01';
              FUN_00e8cb90();
              bVar22 = bVar3;
            }
            if (!bVar22) {
              FUN_00d50b20();
            }
            cVar7 = FUN_01ad9100();
            if (cVar7 == '\0') {
              FUN_01cfc6a0();
              local_68 = 0;
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              local_64 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_168,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfc6a0();
              local_68 = 0;
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              local_64 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_168,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            DAT_028b3f99 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028b3f99 = '\x01';
            FUN_00e8cb70();
          }
        }
        if ((DAT_028b3fa0 == (longlong *)0x0) || (DAT_028b3fa9 == '\0')) {
          FUN_00e8cb50();
          if (DAT_028b3fa0 == (longlong *)0x0) {
            plVar13 = (longlong *)FUN_00e8fc40();
            FUN_001b9f00();
            (**(code **)(*plVar13 + 0x18))();
            if (DAT_028b3fa0 == plVar13) {
              bVar3 = false;
              bVar22 = false;
            }
            else {
              bVar3 = true;
              bVar22 = true;
              bVar21 = DAT_028b3fa0 != (longlong *)0x0;
              DAT_028b3fa0 = plVar13;
              if (bVar21) {
                FUN_00d50b20();
              }
            }
            if (DAT_028b3fa8 == '\0') {
              DAT_028b3fa8 = '\x01';
              FUN_00e8cb90();
              bVar22 = bVar3;
            }
            if (!bVar22) {
              FUN_00d50b20();
            }
            cVar7 = FUN_01ad9100();
            if (cVar7 == '\0') {
              FUN_01cfc6a0();
              local_68 = 0;
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              local_64 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_168,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfc6a0();
              local_68 = 0;
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              FUN_01cfc6a0();
              local_64 = 0x3f800000;
              auVar18 = (undefined1  [8])&local_60;
              FUN_01ae52c0(auVar18,&local_68,&local_168,&local_88);
              FUN_01f7ba60();
              FUN_019fe220();
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (CONCAT71(uStack_87,local_88) != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            DAT_028b3fa9 = '\x01';
            FUN_00e8cb70();
          }
          else {
            DAT_028b3fa9 = '\x01';
            FUN_00e8cb70();
          }
        }
        plVar13 = DAT_028b3f90;
        local_2f8 = 0;
        if (DAT_028b3f90 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_300 = plVar13;
        local_2f8 = '\x01';
        FUN_01d488d0();
        if ((local_2f8 != '\0') && (local_300 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar13 = DAT_028b3fa0;
        bVar6 = local_188[0] ^ 1 | bVar6;
        uVar14 = (ulonglong)CONCAT31(local_188._1_3_,bVar6);
        if (bVar6 == 1) {
          local_2e8 = 0;
          if (DAT_028b3fa0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_2f0 = plVar13;
          local_2e8 = '\x01';
          uVar14 = FUN_01d488d0();
          if ((local_2e8 != '\0') && (local_2f0 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        auVar29._0_4_ = local_158._0_4_ & _DAT_023945e0;
        auVar29._4_4_ = local_158._4_4_ & _UNK_023945e4;
        auVar29._8_4_ = (uint)uStack_150 & _UNK_023945e8;
        auVar29._12_4_ = uStack_150._4_4_ & _UNK_023945ec;
        auVar30._4_12_ = SUB1612(auVar29 | _DAT_023945f0,4);
        auVar30._0_4_ = SUB164(auVar29 | _DAT_023945f0,0) + (float)local_158._0_4_;
        unaff_XMM6 = roundss(unaff_XMM6,auVar30,0xb);
        auVar31._0_4_ = local_288._0_4_ & _DAT_023945e0;
        auVar31._4_4_ = local_288._4_4_ & _UNK_023945e4;
        auVar31._8_4_ = local_288._8_4_ & _UNK_023945e8;
        auVar31._12_4_ = local_288._12_4_ & _UNK_023945ec;
        auVar32._4_12_ = SUB1612(auVar31 | _DAT_023945f0,4);
        auVar32._0_4_ = SUB164(auVar31 | _DAT_023945f0,0) + (float)local_288._0_4_;
        auVar40 = roundss(auVar32,auVar32,0xb);
        auVar41._0_4_ = (uint)(float)local_358 & _DAT_023945e0;
        auVar41._4_4_ = local_358._4_4_ & _UNK_023945e4;
        auVar41._8_4_ = (uint)uStack_350 & _UNK_023945e8;
        auVar41._12_4_ = uStack_350._4_4_ & _UNK_023945ec;
        auVar42._4_12_ = SUB1612(auVar41 | ZEXT416(DAT_02394dc8),4);
        auVar42._0_4_ = SUB164(auVar41 | ZEXT416(DAT_02394dc8),0) + (float)local_358;
        auVar37 = roundss(auVar42,auVar42,0xb);
        fVar46 = (auVar40._0_4_ + unaff_XMM6._0_4_) * DAT_0239011c;
        auVar48._0_4_ = (uint)fVar46 & _DAT_023945e0;
        auVar48._4_4_ = auVar40._4_4_ & _UNK_023945e4;
        auVar48._8_4_ = auVar40._8_4_ & _UNK_023945e8;
        auVar48._12_4_ = auVar40._12_4_ & _UNK_023945ec;
        auVar49._4_12_ = SUB1612(auVar48 | ZEXT416(DAT_02394dc8),4);
        auVar49._0_4_ = SUB164(auVar48 | ZEXT416(DAT_02394dc8),0) + fVar46;
        auVar33._0_12_ = ZEXT812(0);
        auVar33._12_4_ = 0;
        local_288 = roundss(auVar33,auVar49,0xb);
        fVar46 = (auVar37._0_4_ + unaff_XMM6._0_4_) * DAT_0239011c;
        auVar34._0_4_ = (uint)fVar46 & _DAT_023945e0;
        auVar34._4_4_ = auVar37._4_4_ & _UNK_023945e4;
        auVar34._8_4_ = auVar37._8_4_ & _UNK_023945e8;
        auVar34._12_4_ = auVar37._12_4_ & _UNK_023945ec;
        auVar35._4_12_ = SUB1612(auVar34 | ZEXT416(DAT_02394dc8),4);
        auVar35._0_4_ = SUB164(auVar34 | ZEXT416(DAT_02394dc8),0) + fVar46;
        _local_158 = roundss(auVar35,auVar35,0xb);
        local_358 = CONCAT44(local_358._4_4_,(int)CONCAT71((int7)(uVar14 >> 8),1));
        if (((char)unaff_RDI[0x3c] == '\0') && (*(char *)((longlong)unaff_RDI + 0x1e1) == '\0')) {
          local_358 = CONCAT44(local_358._4_4_,
                               -(uint)(*(float *)((longlong)unaff_RDI + 0x1e4) != DAT_0239424c)) &
                      0xffffffff00000001;
        }
        local_408 = (float)local_288._0_4_ - (float)local_158._0_4_;
        uStack_404 = local_288._4_4_;
        uStack_400 = local_288._8_4_;
        uStack_3fc = local_288._12_4_;
        local_3b8 = unaff_XMM6;
        if (*(float *)(unaff_RDI + 0x3f) == DAT_0239424c) {
          if ((*(float *)((longlong)unaff_RDI + 0x1fc) == DAT_0239424c) &&
             (!NAN(*(float *)((longlong)unaff_RDI + 0x1fc)) && !NAN(DAT_0239424c))) {
            if ((char)local_358 == '\0') {
              local_1a8 = insertps(local_328,local_158._0_4_,0x10);
              local_3c8 = insertps(local_318,local_408,0x10);
              (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
              plVar13 = DAT_028b3f80;
              local_2d8 = 0;
              if (DAT_028b3f80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_2e0 = plVar13;
              local_2d8 = '\x01';
              FUN_01d488d0();
              if ((local_2d8 != '\0') && (local_2e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
            }
            (**(code **)(*unaff_RDI + 0x640))();
            (**(code **)(*local_48 + 0x3a0))();
            ppuVar20 = local_128;
            local_250 = 0;
            if ((char)local_120[0] == '\0') {
              if (local_128 != (undefined8 **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120[0]._0_1_ = '\0';
            }
            local_250 = '\x01';
            local_258 = ppuVar20;
            FUN_01d488d0();
            if ((local_250 != '\0') && (local_258 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_278[0] != '\0') {
              FUN_01cfc6a0();
              ppuVar20 = local_128;
              local_240 = 0;
              if ((char)local_120[0] == '\0') {
                if (local_128 != (undefined8 **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_120[0]._0_1_ = '\0';
              }
              local_240 = '\x01';
              local_248 = ppuVar20;
              FUN_01d488d0();
              if ((local_240 != '\0') && (local_248 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((char)local_358 == '\0') {
              (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
              (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
              if (local_278[0] != '\0') {
                (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
              }
              (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
            }
            pVar17 = SUB84(auVar18,0);
            if (((float)local_348._0_4_ != DAT_0239424c) ||
               (NAN((float)local_348._0_4_) || NAN(DAT_0239424c))) {
              pvVar10 = _pthread_getspecific(pVar17);
              if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                pVar17 = (pthread_key_t)ppuVar5;
              }
              FUN_0173b790();
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar8 = FUN_01773ed0();
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              bVar22 = local_a8._0_4_ == iVar8;
              puVar15 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar15 = local_3e8;
              *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
              puVar15[6] = 0;
              puVar15[7] = 0;
              *(undefined8 *)((longlong)puVar15 + 0x39) = 0;
              *(undefined8 *)((longlong)puVar15 + 0x41) = 0;
              (*(code *)local_3e0)();
              FUN_01d39400();
              local_1a8._0_4_ = *(float *)(&DAT_0241c7b8 + (ulonglong)bVar22 * 4);
              local_3c8._0_4_ =
                   *(float *)(&DAT_0241c7b8 + (ulonglong)bVar22 * 4) * DAT_02390118 + local_3f8 +
                   DAT_02390d00;
              FUN_01d38ba0();
              FUN_01d39310();
              FUN_01d38ba0();
              FUN_01d38ba0();
              if (local_a8._0_4_ == (int)unaff_RDI[0x32]) {
                cVar7 = FUN_01ad9100();
                if (cVar7 == '\0') {
                  FUN_01cfbee0();
                  local_1a8._0_8_ = local_128;
                  if (local_128 == (undefined8 **)0x0) goto LAB_01ae7399;
                  bVar22 = true;
                  if ((((char)local_120[0] == '\0') && (FUN_00d50b00(), (char)local_120[0] != '\0'))
                     && (local_128 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  FUN_01cfc6a0();
                  local_1a8._0_8_ = local_128;
                  if (local_128 == (undefined8 **)0x0) goto LAB_01ae7399;
                  bVar22 = true;
                  if ((((char)local_120[0] == '\0') && (FUN_00d50b00(), (char)local_120[0] != '\0'))
                     && (local_128 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = local_1a8._8_8_;
                local_1a8 = auVar4 << 0x40;
LAB_01ae7399:
                bVar22 = false;
              }
              ppuVar20 = (undefined8 **)*unaff_RSI;
              if (local_278[0] == '\0') {
                (*(code *)(*ppuVar20)[0x6e])();
                local_120[0]._0_1_ = '\0';
                local_48 = (longlong *)local_1a8._0_8_;
                local_58 = '\0';
                auVar18 = (undefined1  [8])((longlong)&MACH_HEADER.magic + 1);
                local_128 = ppuVar20;
                local_60 = puVar15;
                FUN_01ad9840(1,1,&local_60);
                (*(code *)(*ppuVar20)[0x6e])();
              }
              else {
                (*(code *)(*ppuVar20)[0x6e])();
                local_120[0]._0_1_ = '\0';
                local_48 = (longlong *)local_1a8._0_8_;
                local_58 = '\0';
                auVar18 = (undefined1  [8])((longlong)&MACH_HEADER.magic + 1);
                local_128 = ppuVar20;
                local_60 = puVar15;
                FUN_01ad9840(1,1,&local_60);
                (*(code *)(*ppuVar20)[0x6e])();
              }
              local_40 = '\0';
              if ((bVar22) && (local_1a8._0_8_ != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
        }
        if (local_190 != (undefined8 **)0x0) {
          local_378 = local_190;
          local_370 = '\0';
          FUN_01d48a10();
          if ((local_370 != '\0') && (local_378 != (undefined8 **)0x0)) {
            FUN_00d50b20();
          }
          if (local_278[0] == '\0') {
            if (local_188[0] == '\0') {
              FUN_01cfc6a0();
              ppuVar20 = local_128;
              local_210 = 0;
              if ((char)local_120[0] == '\0') {
                if (local_128 != (undefined8 **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_120[0]._0_1_ = '\0';
              }
              local_210 = '\x01';
              local_218 = ppuVar20;
              FUN_01d488d0();
              if ((local_210 != '\0') && (local_218 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfc6a0();
              ppuVar20 = local_128;
              local_220 = 0;
              if ((char)local_120[0] == '\0') {
                if (local_128 != (undefined8 **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_120[0]._0_1_ = '\0';
              }
              local_220 = '\x01';
              local_228 = ppuVar20;
              FUN_01d488d0();
              if ((local_220 != '\0') && (local_228 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            FUN_01cfc6a0();
            ppuVar20 = local_128;
            local_230 = 0;
            if ((char)local_120[0] == '\0') {
              if (local_128 != (undefined8 **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120[0]._0_1_ = '\0';
            }
            local_230 = '\x01';
            local_238 = ppuVar20;
            FUN_01d488d0();
            if ((local_230 != '\0') && (local_238 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((char)local_358 == '\0') {
            auVar18 = (undefined1  [8])0x0;
            FUN_01ae9a50(0,local_a8._0_4_);
            auVar43._4_12_ = local_288._4_12_;
            auVar43._0_4_ = (local_288._0_4_ + (float)local_158._0_4_) * DAT_0239011c;
            auVar40 = insertps(ZEXT416((uint)fVar44),auVar43,0x10);
            FUN_01ada880(auVar40._0_8_);
            if ((char)local_120[0] != '\0') {
              FUN_00d50b20();
            }
          }
          if (local_278[0] == '\0') {
            if (local_188[0] == '\0') {
              FUN_01cfc6a0();
              ppuVar20 = local_128;
              local_1e0 = 0;
              if ((char)local_120[0] == '\0') {
                if (local_128 != (undefined8 **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_120[0]._0_1_ = '\0';
              }
              local_1e0 = '\x01';
              local_1e8 = ppuVar20;
              FUN_01d488d0();
              if ((local_1e0 != '\0') && (local_1e8 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_01cfc6a0();
              ppuVar20 = local_128;
              local_1f0 = 0;
              if ((char)local_120[0] == '\0') {
                if (local_128 != (undefined8 **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_120[0]._0_1_ = '\0';
              }
              local_1f0 = '\x01';
              local_1f8 = ppuVar20;
              FUN_01d488d0();
              if ((local_1f0 != '\0') && (local_1f8 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            (**(code **)(*unaff_RDI + 0x640))();
            (**(code **)(*local_48 + 0x390))();
            ppuVar20 = local_128;
            local_200 = 0;
            if ((char)local_120[0] == '\0') {
              if (local_128 != (undefined8 **)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_120[0]._0_1_ = '\0';
            }
            local_200 = '\x01';
            local_208 = ppuVar20;
            FUN_01d488d0();
            if ((local_200 != '\0') && (local_208 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (*(float *)(unaff_RDI + 0x3f) == DAT_0239424c) {
            if ((((*(float *)((longlong)unaff_RDI + 0x1fc) == DAT_0239424c) &&
                 (!NAN(*(float *)((longlong)unaff_RDI + 0x1fc)) && !NAN(DAT_0239424c))) &&
                ((char)unaff_RDI[0x3c] == '\0')) && (*(char *)((longlong)unaff_RDI + 0x1e1) == '\0')
               ) {
              if ((*(float *)((longlong)unaff_RDI + 0x1e4) == DAT_0239424c) &&
                 (!NAN(*(float *)((longlong)unaff_RDI + 0x1e4)) && !NAN(DAT_0239424c))) {
                FUN_01aeb7b0();
                ppuVar12 = local_128;
                cVar7 = local_1b0;
                ppuVar20 = local_1b8;
                if (local_1b8 == local_128) {
                  if ((local_1b0 == '\0') && (local_128 != (undefined8 **)0x0)) {
                    if ((char)local_120[0] != '\0') goto LAB_01ae7bd4;
                    FUN_00d50b00();
                    goto LAB_01ae7c0d;
                  }
LAB_01ae7c14:
                  if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if ((char)local_120[0] == '\0') {
                    if (local_128 != (undefined8 **)0x0) {
                      FUN_00d50b00();
                    }
                    local_1b8 = ppuVar12;
                    if ((cVar7 != '\0') && (ppuVar20 != (undefined8 **)0x0)) {
                      FUN_00d50b20();
                    }
LAB_01ae7c0d:
                    local_1b0 = '\x01';
                    goto LAB_01ae7c14;
                  }
                  local_1b8 = local_128;
                  if ((local_1b0 != '\0') && (ppuVar20 != (undefined8 **)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01ae7bd4:
                  local_1b0 = '\x01';
                }
                _local_188 = insertps(local_328,local_158._0_4_,0x10);
                local_278._0_16_ = insertps(local_318,local_408,0x10);
                local_418 = local_190;
                local_410 = 0;
                local_158 = (undefined1  [8])FUN_01aebff0(local_188,&local_418);
                uStack_150 = extraout_XMM0_Qb_07;
                if (unaff_RDI[0x59] == 0) {
                  plVar16 = (longlong *)FUN_00e8fc40();
                  FUN_00022d50();
                  (**(code **)(*plVar16 + 0x18))();
                  plVar13 = (longlong *)unaff_RDI[0x59];
                  if (plVar13 == plVar16) {
                    FUN_00d50b20();
                  }
                  else {
                    unaff_RDI[0x59] = (longlong)plVar16;
                    if (plVar13 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                }
                _local_188 = blendps(_local_188,_local_158,1);
                FUN_01e46ed0();
                FUN_00d46dc0();
                ppuVar20 = local_128;
                local_1d0 = 0;
                if ((char)local_120[0] == '\0') {
                  if (local_128 != (undefined8 **)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_120[0]._0_1_ = '\0';
                }
                local_1d0 = '\x01';
                local_1d8 = ppuVar20;
                uVar24 = FUN_00d46530();
                local_1c0 = 0;
                if (local_40 == '\0') {
                  if (local_48 != (longlong *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                local_1c0 = '\x01';
                local_1c8 = local_48;
                FUN_00cbd380(uVar24,&local_1c8);
                if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1d0 != '\0') && (local_1d8 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
                if (((char)local_120[0] != '\0') && (local_128 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
                local_368 = local_1b8;
                local_360 = '\0';
                (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
                if ((local_360 != '\0') && (local_368 != (undefined8 **)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        if (local_148._0_8_ != 0) {
          FUN_00d50b20();
        }
        if ((char)local_12c == '\0') {
          FUN_00d50b20();
        }
      }
      else {
        if (local_128 != (undefined8 **)0x0) goto LAB_01ae5e10;
LAB_01ae5f40:
        if (local_89 != '\0') {
          local_12c = (undefined4)CONCAT71((int7)((ulonglong)uVar24 >> 8),1);
          bVar6 = 0;
          auVar1._12_4_ = 0;
          auVar1._0_12_ = local_278._4_12_;
          local_278._0_16_ = auVar1 << 0x20;
          auVar2._12_4_ = 0;
          auVar2._0_12_ = stack0xfffffffffffffe7c;
          _local_188 = auVar2 << 0x20;
          iVar8 = (int)unaff_RDI[0x28];
          goto joined_r0x01ae5f32;
        }
      }
      iVar8 = local_a8._0_4_;
    } while (local_264 != local_a8._0_4_);
  }
  auVar40 = ZEXT816(0);
  if ((*(float *)(unaff_RDI + 0x3f) != 0.0) || (NAN(*(float *)(unaff_RDI + 0x3f)))) {
    FUN_01d48370();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
      uStack_70 = 0;
      local_78 = (undefined1  [8])DAT_023dccec;
      local_a8._8_8_ = 0;
      local_a8._0_8_ = DAT_023dccf4;
    }
    else {
      local_148._0_8_ = FUN_01e3f820();
      local_148._8_8_ = extraout_XMM0_Qb_03;
      iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
      local_a8 = auVar40;
      if (iVar8 == 3) {
        FUN_01e3f820();
        _local_78 = blendps(auVar40,_DAT_0241c700,0xd);
        iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
        if (iVar8 == 1) goto LAB_01ae7eeb;
LAB_01ae7ee7:
        if (iVar8 == 0) goto LAB_01ae7eeb;
        FUN_01e3f820();
        _local_188 = auVar40;
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar50 = blendps(_local_188,_DAT_0241c710,0xd);
      }
      else {
        uStack_70 = 0;
        local_78 = (undefined1  [8])DAT_023dccf4;
        if (iVar8 != 1) goto LAB_01ae7ee7;
LAB_01ae7eeb:
        auVar50._8_8_ = 0;
        auVar50._0_8_ = DAT_023dccf4;
      }
      auVar36._0_4_ = (float)local_78._0_4_ + local_148._0_4_ + auVar50._0_4_;
      auVar36._4_4_ = (float)local_78._4_4_ + local_148._4_4_ + auVar50._4_4_;
      auVar36._8_4_ = (float)uStack_70 + local_148._8_4_ + auVar50._8_4_;
      auVar36._12_4_ = uStack_70._4_4_ + local_148._12_4_ + auVar50._12_4_;
      _local_78 = blendps(auVar36,local_148,2);
      local_a8 = blendps(local_a8,_DAT_0241c720,0xd);
    }
    FUN_01adad50();
    uVar24 = local_a8._0_8_;
    uVar45 = local_a8._8_8_;
    local_a8._0_8_ = FUN_00d052e0();
    local_a8._8_8_ = extraout_XMM0_Qb_08;
    uStack_70 = uVar45;
    local_78 = (undefined1  [8])uVar24;
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    local_2c8 = 0;
    local_2d0 = unaff_RDI[0x3e];
    if (local_2d0 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = '\x01';
    FUN_01d49070();
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    local_148._0_4_ = (int)unaff_RDI[0x3f];
    local_2b8 = 0;
    lVar11 = unaff_RDI[0x3d];
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    local_2b8 = '\x01';
    auVar37 = blendps(ZEXT416((uint)((DAT_02390124 - (float)local_148._0_4_) * local_78._0_4_ +
                                    local_a8._0_4_)),local_a8,0xe);
    auVar40 = _local_78;
    local_2c0 = lVar11;
    FUN_01d49070(auVar37._0_8_);
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48390();
  }
  if ((*(float *)((longlong)unaff_RDI + 0x1fc) == DAT_0239424c) &&
     (!NAN(*(float *)((longlong)unaff_RDI + 0x1fc)) && !NAN(DAT_0239424c))) goto LAB_01ae82f9;
  FUN_01d48370();
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_70 = 0;
    local_78 = (undefined1  [8])DAT_023dccec;
    local_a8._8_8_ = 0;
    local_a8._0_8_ = DAT_023dccf4;
  }
  else {
    local_148._0_8_ = FUN_01e3f820();
    local_148._8_8_ = extraout_XMM0_Qb_09;
    iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
    local_a8 = auVar40;
    if (iVar8 == 3) {
      FUN_01e3f820();
      _local_78 = blendps(auVar40,_DAT_0241c700,0xd);
      iVar8 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar8 == 1) goto LAB_01ae8150;
LAB_01ae814c:
      if (iVar8 == 0) goto LAB_01ae8150;
      FUN_01e3f820();
      _local_188 = auVar40;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar51 = blendps(_local_188,_DAT_0241c710,0xd);
    }
    else {
      uStack_70 = 0;
      local_78 = (undefined1  [8])DAT_023dccf4;
      if (iVar8 != 1) goto LAB_01ae814c;
LAB_01ae8150:
      auVar51._8_8_ = 0;
      auVar51._0_8_ = DAT_023dccf4;
    }
    auVar38._0_4_ = (float)local_78._0_4_ + local_148._0_4_ + auVar51._0_4_;
    auVar38._4_4_ = (float)local_78._4_4_ + local_148._4_4_ + auVar51._4_4_;
    auVar38._8_4_ = (float)uStack_70 + local_148._8_4_ + auVar51._8_4_;
    auVar38._12_4_ = uStack_70._4_4_ + local_148._12_4_ + auVar51._12_4_;
    _local_78 = blendps(auVar38,local_148,2);
    local_a8 = blendps(local_a8,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  uVar24 = local_a8._0_8_;
  uVar45 = local_a8._8_8_;
  local_a8._0_8_ = FUN_00d052e0();
  local_a8._8_8_ = extraout_XMM0_Qb_10;
  uStack_70 = uVar45;
  local_78 = (undefined1  [8])uVar24;
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  local_2a8 = 0;
  local_2b0 = unaff_RDI[0x3e];
  if (local_2b0 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = '\x01';
  FUN_01d49070();
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  local_148 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0x1fc));
  local_298 = 0;
  lVar11 = unaff_RDI[0x3d];
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  local_298 = '\x01';
  auVar39._4_12_ = local_148._4_12_;
  auVar39._0_4_ = local_148._0_4_ * (float)local_78._0_4_ + local_a8._0_4_;
  auVar40 = blendps(auVar39,local_a8,0xe);
  local_2a0 = lVar11;
  FUN_01d49070(auVar40._0_8_);
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
LAB_01ae82f9:
  if ((local_1b0 != '\0') && (local_1b8 != (undefined8 **)0x0)) {
    FUN_00d50b20();
  }
  if (local_290 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (local_170 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (local_160 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  if (local_190 != (undefined8 **)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


