// Function: FUN_01aecf20
// Address: 01aecf20
// Size: 6707 bytes
// Class: MUScalePitchSystem
// String references:
//   "%I"
//   "%.1f"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aecf20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong *in_RCX;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Db;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 in_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar22 [16];
  undefined4 uVar16;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  undefined8 in_XMM1_Qb;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float local_338;
  uint uStack_334;
  uint uStack_330;
  uint uStack_32c;
  float local_328;
  uint uStack_324;
  uint uStack_320;
  uint uStack_31c;
  float local_298;
  longlong *local_248;
  char local_240;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  undefined4 local_180;
  float local_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [8];
  undefined8 uStack_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  undefined1 local_128 [16];
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  undefined1 local_88 [16];
  undefined8 uStack_80;
  longlong *local_68;
  undefined4 local_60;
  float local_5c;
  undefined1 local_58 [4];
  undefined1 auStack_54 [12];
  longlong *local_48;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_10;
  
  local_298 = (float)param_1;
  FUN_01ad3cb0();
  plVar14 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  local_17c = *(float *)((longlong)unaff_RDI + 0x1e4);
  *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
  FUN_01e436c0();
  auStack_54._4_8_ = in_XMM1_Qb;
  _local_58 = param_2;
  pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
  plVar12 = plVar14;
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar12 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  local_180 = (**(code **)(*plVar12 + 0x3a0))();
  uVar19 = FUN_01a1da00();
  uVar20 = FUN_01a1da00();
  FUN_0173ba80();
  plVar12 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar23._4_4_ = (float)auStack_54._0_4_ + extraout_XMM0_Db;
  auVar23._12_4_ = (float)auStack_54._8_4_ + extraout_XMM0_Dd;
  auVar23._0_4_ = auVar23._4_4_;
  auVar23._8_4_ = auVar23._12_4_;
  auStack_54 = auVar23._4_12_;
  local_58 = (undefined1  [4])(auVar23._4_4_ + DAT_0241c3ec);
  fVar15 = (float)(**(code **)(*unaff_RDI + 0x920))();
  auVar48._4_4_ = extraout_XMM0_Db;
  auVar48._0_4_ = extraout_XMM0_Db;
  auVar48._8_4_ = extraout_XMM0_Dd;
  auVar48._12_4_ = extraout_XMM0_Dd;
  auVar22._4_12_ = auVar48._4_12_;
  auVar22._0_4_ = extraout_XMM0_Db + DAT_0241f374;
  uVar16 = (**(code **)(*unaff_RDI + 0x920))();
  local_178._0_4_ = uVar16;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_150 = 0;
    local_158 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    FUN_01e3f820();
    uStack_150 = in_XMM1_Qb;
    local_158 = (undefined1  [8])param_2;
    uVar5 = *(uint *)((longlong)unaff_RDI + 0x284);
    if (uVar5 == 3) {
      FUN_01e3f820();
      uVar5 = *(uint *)((longlong)unaff_RDI + 0x284);
    }
    if ((1 < uVar5) && (FUN_01e3f820(), *(int *)((longlong)unaff_RDI + 0x284) == 3)) {
      FUN_01e3f820();
    }
    _local_158 = blendps(_local_158,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  uStack_b0 = in_XMM1_Qb;
  local_b8 = (undefined1  [8])param_2;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    fVar47 = (float)DAT_023dccf4;
  }
  else {
    FUN_01e3f820();
    uStack_80 = in_XMM1_Qb;
    local_88._0_8_ = param_2;
    uVar5 = *(uint *)((longlong)unaff_RDI + 0x284);
    if (uVar5 == 3) {
      FUN_01e3f820();
      uVar5 = *(uint *)((longlong)unaff_RDI + 0x284);
    }
    if ((1 < uVar5) && (FUN_01e3f820(), *(int *)((longlong)unaff_RDI + 0x284) == 3)) {
      FUN_01e3f820();
    }
    auVar23 = blendps(local_88,_DAT_0241c720,0xd);
    fVar47 = auVar23._0_4_;
  }
  FUN_01adad50();
  local_128._8_8_ = in_XMM1_Qb;
  local_128._0_8_ = param_2;
  local_48 = plVar12;
  FUN_01cfbee0();
  local_118 = local_40;
  local_110 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_110 = '\x01';
  FUN_01d488d0();
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_158._0_4_ = (float)local_158._0_4_ + (float)local_b8._0_4_;
  local_158._4_4_ = (float)local_158._4_4_ + (float)local_b8._4_4_;
  uStack_150._0_4_ = (float)uStack_150 + (float)uStack_b0;
  uStack_150._4_4_ = uStack_150._4_4_ + uStack_b0._4_4_;
  auVar58._4_12_ = local_58._4_12_;
  auVar58._0_4_ = local_58 - auVar22._0_4_;
  auVar1._8_8_ = in_XMM0_Qb;
  auVar1._0_8_ = param_1;
  auVar23 = insertps(auVar1,auVar22,0x10);
  auVar48 = insertps(_local_158,auVar58,0x10);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar23._0_8_,auVar48._0_8_);
  fVar47 = (float)local_128._0_4_ * DAT_0239011c + fVar47 + local_298;
  auVar24._0_4_ = _DAT_023945e0 & (uint)fVar47;
  auVar24._4_4_ = _UNK_023945e4 & local_128._4_4_;
  auVar24._8_4_ = _UNK_023945e8 & local_128._8_4_;
  auVar24._12_4_ = _UNK_023945ec & local_128._12_4_;
  auVar25._4_12_ = SUB1612(auVar24 | _DAT_023945f0,4);
  auVar25._0_4_ = SUB164(auVar24 | _DAT_023945f0,0) + fVar47;
  auVar49._0_12_ = ZEXT812(0);
  auVar49._12_4_ = 0;
  local_168 = roundss(auVar49,auVar25,0xb);
  FUN_01ad8e90();
  auVar26._0_8_ = _exp2f(DAT_023941f4 * fVar15);
  auVar26._8_8_ = extraout_XMM0_Qb_01;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_ * DAT_023941f8;
  fVar47 = (float)FUN_00e7d780(auVar27._0_8_);
  auVar28._0_8_ = _exp2f(DAT_023941f4 * (float)local_178._0_4_);
  auVar28._8_8_ = extraout_XMM0_Qb_02;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = (float)auVar28._0_8_ * DAT_023941f8;
  iVar6 = FUN_00e7d780(auVar29._0_8_);
  for (fVar15 = fVar47; (int)fVar15 <= iVar6; fVar15 = (float)((int)fVar15 + iVar7)) {
    iVar7 = 5;
    if ((((99 < (int)fVar15) && (iVar7 = 10, 999 < (int)fVar15)) &&
        (iVar7 = 0x32, 1999 < (int)fVar15)) &&
       ((iVar7 = 100, 9999 < (int)fVar15 && (iVar7 = 500, 19999 < (int)fVar15)))) {
      iVar7 = 1000;
    }
    if ((fVar15 == fVar47) &&
       (fVar15 = (float)((int)fVar47 - (int)fVar47 % iVar7), (int)fVar15 < 0xb)) {
      fVar15 = 1.4013e-44;
    }
    in_RCX = (longlong *)((longlong)(int)fVar15 * 0x51eb851f);
    if (((((int)fVar15 < 1000) && (fVar15 == (float)(((int)fVar15 / 0x32) * 0x32))) ||
        (((int)fVar15 < 2000 &&
         (in_RCX = (longlong *)(ulonglong)(uint)(((int)fVar15 / 100) * 100), (int)fVar15 % 100 == 0)
         ))) || ((uVar16 = DAT_02394298, (int)fVar15 < 10000 &&
                 (in_RCX = (longlong *)(ulonglong)(uint)((int)fVar15 % 500), (int)fVar15 % 500 == 0)
                 ))) {
      uVar16 = DAT_023908d8;
    }
    local_58 = (undefined1  [4])uVar16;
    auVar30._0_8_ = _logf((float)(int)fVar15 * DAT_02394204);
    auVar30._8_8_ = extraout_XMM0_Qb_03;
    auVar31._4_12_ = auVar30._4_12_;
    auVar31._0_4_ = (float)auVar30._0_8_ * DAT_02394208;
    uVar21 = (**(code **)(*unaff_RDI + 0x918))(auVar31._0_8_);
    auVar50._0_4_ = (uint)(float)uVar21 & _DAT_023945e0;
    auVar50._4_4_ = (uint)((ulonglong)uVar21 >> 0x20) & _UNK_023945e4;
    auVar50._8_4_ = (uint)extraout_XMM0_Qb_04 & _UNK_023945e8;
    auVar50._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_04 >> 0x20) & _UNK_023945ec;
    auVar51._4_12_ = SUB1612(auVar50 | _DAT_023945f0,4);
    auVar51._0_4_ = SUB164(auVar50 | _DAT_023945f0,0) + (float)uVar21;
    roundss(ZEXT816(0),auVar51,0xb);
    FUN_01ad8e90();
  }
  _local_58 = (**(code **)(*unaff_RDI + 0x918))();
  auStack_54._4_8_ = extraout_XMM0_Qb_05;
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_248 + 0x370))();
  FUN_01d44d80();
  local_108 = local_40;
  local_100 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_100 = '\x01';
  FUN_01d48a10();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar32._0_4_ = _DAT_023945e0 & (uint)local_58;
  auVar32._4_4_ = _UNK_023945e4 & auStack_54._0_4_;
  auVar32._8_4_ = _UNK_023945e8 & auStack_54._4_4_;
  auVar32._12_4_ = _UNK_023945ec & auStack_54._8_4_;
  auVar33._4_12_ = SUB1612(auVar32 | _DAT_023945f0,4);
  auVar33._0_4_ = SUB164(auVar32 | _DAT_023945f0,0) + (float)local_58;
  auVar23 = roundss(auVar33,auVar33,0xb);
  fVar15 = auVar23._0_4_ + DAT_02394210;
  if ((int)fVar47 <= iVar6) {
    local_128 = ZEXT416((uint)(DAT_023908ec + (float)local_168._0_4_));
    fVar57 = fVar47;
    do {
      iVar7 = 10;
      if ((((99 < (int)fVar57) && (iVar7 = 0x32, 499 < (int)fVar57)) &&
          (iVar7 = 100, 999 < (int)fVar57)) &&
         ((iVar7 = 200, 1999 < (int)fVar57 && (iVar7 = 500, 3999 < (int)fVar57)))) {
        iVar7 = 1000;
      }
      if ((fVar57 == fVar47) &&
         (fVar57 = (float)((int)fVar47 - (int)fVar47 % iVar7), (int)fVar57 < 0xb)) {
        fVar57 = 1.4013e-44;
      }
      auVar34._0_8_ = _logf((float)(int)fVar57 * DAT_02394204);
      auVar34._8_8_ = extraout_XMM0_Qb_06;
      auVar35._4_12_ = auVar34._4_12_;
      auVar35._0_4_ = (float)auVar34._0_8_ * DAT_02394208;
      uVar21 = (**(code **)(*unaff_RDI + 0x918))(auVar35._0_8_);
      auVar52._0_4_ = (uint)(float)uVar21 & _DAT_023945e0;
      auVar52._4_4_ = (uint)((ulonglong)uVar21 >> 0x20) & _UNK_023945e4;
      auVar52._8_4_ = (uint)extraout_XMM0_Qb_07 & _UNK_023945e8;
      auVar52._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_07 >> 0x20) & _UNK_023945ec;
      auVar53._4_12_ = SUB1612(auVar52 | _DAT_023945f0,4);
      auVar53._0_4_ = SUB164(auVar52 | _DAT_023945f0,0) + (float)uVar21;
      auVar23 = roundss(auVar53,auVar53,0xb);
      auStack_54 = auVar23._4_12_;
      local_58 = (undefined1  [4])(auVar23._0_4_ + DAT_02394210);
      fVar17 = (float)((uint)(fVar15 - auVar23._0_4_) & _DAT_02390140);
      fVar18 = DAT_02390124;
      if (fVar17 < DAT_023b16a0) {
        fVar18 = fVar17 / DAT_023b16a0;
      }
      local_b8._0_4_ = fVar18;
      local_60 = 1;
      local_68 = &DAT_024cc6f0;
      local_5c = fVar57;
      FUN_00d8cb40();
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      insertps(local_128,local_58,0x10);
      FUN_01ad9f80();
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar57 = (float)((int)fVar57 + iVar7);
    } while ((int)fVar57 <= iVar6);
  }
  plVar12 = local_48;
  pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar6 = FUN_01742490();
  pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar7 = FUN_01742490();
  pVar11 = (pthread_key_t)in_RCX;
  if (iVar6 <= iVar7) {
    local_128._0_4_ = DAT_02390d00 + (float)local_168._0_4_;
    local_178 = ZEXT416((uint)(DAT_023941fc + (float)local_168._0_4_));
    do {
      pVar11 = (pthread_key_t)in_RCX;
      pvVar8 = _pthread_getspecific(pVar11);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01742280();
      uVar21 = (**(code **)(*unaff_RDI + 0x918))();
      auVar54._0_4_ = (uint)(float)uVar21 & _DAT_023945e0;
      auVar54._4_4_ = (uint)((ulonglong)uVar21 >> 0x20) & _UNK_023945e4;
      auVar54._8_4_ = (uint)extraout_XMM0_Qb_08 & _UNK_023945e8;
      auVar54._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_08 >> 0x20) & _UNK_023945ec;
      auVar55._4_12_ = SUB1612(auVar54 | _DAT_023945f0,4);
      auVar55._0_4_ = SUB164(auVar54 | _DAT_023945f0,0) + (float)uVar21;
      _local_58 = roundss(ZEXT816(0),auVar55,0xb);
      FUN_01ad8e90();
      fVar57 = fVar15 - (float)local_58;
      local_58 = (undefined1  [4])((float)local_58 + DAT_02394210);
      fVar57 = (float)((uint)fVar57 & _DAT_02390140);
      fVar47 = DAT_02390124;
      if (fVar57 < DAT_023b16a0) {
        fVar47 = fVar57 / DAT_023b16a0;
      }
      local_b8._0_4_ = fVar47;
      pvVar8 = _pthread_getspecific(pVar11);
      lVar9 = DAT_026e3bc8;
      plVar13 = plVar12;
      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar9 = DAT_026e3bc8, lVar10 != 0)) {
        plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      DAT_026e3bc8 = lVar9;
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      local_228 = '\x01';
      local_220 = 0;
      local_218 = '\0';
      in_RCX = &local_230;
      local_230 = lVar9;
      (**(code **)(*plVar13 + 0x3c0))(in_RCX,iVar6,&local_220);
      plVar13 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      insertps(local_178,local_58,0x10);
      FUN_01ad9f80();
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_218 != '\0') && (local_220 != 0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      pVar11 = (pthread_key_t)in_RCX;
      iVar6 = iVar6 + 1;
    } while (iVar7 + 1 != iVar6);
  }
  if (*(int *)((longlong)unaff_RDI + 0x194) == -1000000) {
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01773ed0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(float *)((longlong)unaff_RDI + 0x1e4) = local_17c;
  if ((((char)unaff_RDI[0x3c] != '\0') || (local_17c != 0.0)) || (NAN(local_17c))) {
    pvVar8 = _pthread_getspecific(pVar11);
    plVar13 = plVar14;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar13 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    fVar15 = (float)(**(code **)(*plVar13 + 0x3a0))();
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar11);
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      plVar14 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar14 + 0x370))();
    fVar47 = (float)FUN_01742280();
    local_128 = ZEXT416((uint)((fVar15 - fVar47) + *(float *)((longlong)unaff_RDI + 0x1e4)));
    _local_58 = (**(code **)(*unaff_RDI + 0x918))();
    auStack_54._4_8_ = extraout_XMM0_Qb_09;
    cVar4 = FUN_01ad9100();
    local_338 = (float)uVar19;
    uStack_334 = (uint)((ulonglong)uVar19 >> 0x20);
    uStack_330 = (uint)extraout_XMM0_Qb;
    uStack_32c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar36._0_4_ = (uint)(local_338 * DAT_02390438) & _DAT_023945e0;
    auVar36._4_4_ = uStack_334 & _UNK_023945e4;
    auVar36._8_4_ = uStack_330 & _UNK_023945e8;
    auVar36._12_4_ = uStack_32c & _UNK_023945ec;
    auVar37._4_12_ = SUB1612(auVar36 | ZEXT416(DAT_02394dc8),4);
    auVar37._0_4_ = SUB164(auVar36 | ZEXT416(DAT_02394dc8),0) + local_338 * DAT_02390438;
    auVar23 = roundss(auVar37,auVar37,0xb);
    fVar47 = DAT_02392fd8;
    if (auVar23._0_4_ <= DAT_02392fd8) {
      fVar47 = auVar23._0_4_;
    }
    local_328 = (float)uVar20;
    uStack_324 = (uint)((ulonglong)uVar20 >> 0x20);
    uStack_320 = (uint)extraout_XMM0_Qb_00;
    uStack_31c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    auVar38._0_4_ = _DAT_023945e0 & (uint)(local_328 * DAT_02390438);
    auVar38._4_4_ = _UNK_023945e4 & uStack_324;
    auVar38._8_4_ = _UNK_023945e8 & uStack_320;
    auVar38._12_4_ = _UNK_023945ec & uStack_31c;
    auVar48 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(fVar47 * DAT_0239011c) |
                                            DAT_02394dc8) + fVar47 * DAT_0239011c)),0xb);
    auVar39._4_12_ = SUB1612(auVar38 | _DAT_023945f0,4);
    auVar39._0_4_ = SUB164(auVar38 | _DAT_023945f0,0) + local_328 * DAT_02390438;
    auVar23 = roundss(auVar39,auVar39,0xb);
    fVar47 = DAT_02392fd8;
    if (auVar23._0_4_ <= DAT_02392fd8) {
      fVar47 = auVar23._0_4_;
    }
    auVar59._4_12_ = local_158._4_12_;
    fVar57 = local_158._0_4_ + DAT_02390d00;
    auVar40._0_4_ = _DAT_023945e0 & (uint)local_58;
    auVar40._4_4_ = _UNK_023945e4 & auStack_54._0_4_;
    auVar40._8_4_ = _UNK_023945e8 & auStack_54._4_4_;
    auVar40._12_4_ = _UNK_023945ec & auStack_54._8_4_;
    auVar41._4_12_ = SUB1612(auVar40 | _DAT_023945f0,4);
    auVar41._0_4_ = SUB164(auVar40 | _DAT_023945f0,0) + (float)local_58;
    _local_58 = roundss(ZEXT816(0),auVar41,0xb);
    local_178._4_12_ = local_58._4_12_;
    local_178._0_4_ = local_58 - auVar48._0_4_;
    auVar2._8_8_ = in_XMM0_Qb;
    auVar2._0_8_ = param_1;
    auVar23 = insertps(auVar2,local_178,0x10);
    auVar61._4_4_ = local_158._4_4_;
    auVar61._0_4_ = fVar57;
    auVar61._8_4_ = local_158._8_4_;
    auVar61._12_4_ = local_158._12_4_;
    _local_158 = ZEXT416((uint)fVar47);
    _local_b8 = insertps(auVar61,ZEXT416((uint)fVar47),0x10);
    if (cVar4 != '\0') {
      auVar42._4_12_ = auVar2._4_12_;
      auVar42._0_4_ = local_298 + DAT_023942a8;
      blendps(auVar23,auVar42,1);
      auVar59._0_4_ = fVar57 + DAT_0241c6e8;
      _local_b8 = blendps(_local_b8,auVar59,1);
    }
    FUN_01cfbee0();
    local_f8 = local_40;
    local_f0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f0 = '\x01';
    FUN_01d488d0();
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ad9600();
    local_210 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar9 = DAT_027e3b80;
    local_208 = '\x01';
    if (DAT_027e3b80 != 0) {
      FUN_00d50b00();
    }
    local_200 = lVar9;
    local_1f8 = '\x01';
    local_1f0 = 0;
    local_1e8 = '\0';
    FUN_00d31230(&local_1f0,&local_200);
    plVar14 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    _local_b8 = ZEXT416((uint)(DAT_023942a8 + (float)local_168._0_4_ + DAT_023941fc));
    local_58 = (undefined1  [4])((local_58 - local_158._0_4_) + DAT_023b8b2c);
    insertps(_local_b8,_local_58,0x10);
    insertps(_DAT_023b16c0,_local_158,0x10);
    FUN_01ad9f80();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    lVar9 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar10 = DAT_027e3b88;
    local_1e0 = lVar9;
    local_1d8 = '\x01';
    if (DAT_027e3b88 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = lVar10;
    local_1c8 = '\x01';
    local_1c0 = 0;
    local_1b8 = '\0';
    FUN_00d31230(&local_1c0,&local_1d0);
    plVar14 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_168._0_4_ = (float)local_168._0_4_ + DAT_023b5d74;
    insertps(ZEXT416((uint)(DAT_023b5d70 + (float)local_168._0_4_)),local_58,0x10);
    FUN_01ad9f80();
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_68 + 0x390))();
    local_e8 = local_40;
    local_e0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    _local_b8 = insertps(_local_b8,local_178._0_4_,0x10);
    auVar43._0_8_ = _exp2f(fVar15 * DAT_023941f4);
    auVar43._8_8_ = extraout_XMM0_Qb_10;
    auVar44._4_12_ = auVar43._4_12_;
    auVar44._0_4_ = (float)auVar43._0_8_ * DAT_023941f8;
    plVar14 = (longlong *)*unaff_RSI;
    if (DAT_02394264 <= auVar44._0_4_) {
      local_5c = (float)FUN_00e7d780();
      local_60 = 1;
      local_68 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_68);
      local_d8 = local_40;
      local_d0 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_d0 = '\x01';
      (**(code **)(*plVar14 + 0x3f8))();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = 1;
      local_68 = &DAT_024d0b28;
      local_5c = auVar44._0_4_;
      FUN_00d8cb40(auVar44._0_8_,&local_68);
      local_c8 = local_40;
      local_c0 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c0 = '\x01';
      (**(code **)(*plVar14 + 0x3f8))();
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_027259e0;
    lVar10 = DAT_0270b790;
    lVar9 = DAT_026fce10;
    auVar56._4_12_ = local_168._4_12_;
    fVar47 = local_168._0_4_ + _DAT_02390440;
    auVar60._4_4_ = local_168._4_4_;
    auVar60._0_4_ = fVar47;
    auVar60._8_4_ = local_168._8_4_;
    auVar60._12_4_ = local_168._12_4_;
    _local_58 = insertps(auVar60,local_178._0_4_,0x10);
    fVar15 = (float)(_DAT_02390140 & local_128._0_4_);
    if (DAT_023908ec <= fVar15) {
      auVar56._0_4_ = fVar47 + DAT_02394210;
      _local_58 = blendps(_local_58,auVar56,1);
    }
    if (DAT_023908e0 <= fVar15) {
      local_58 = (undefined1  [4])((float)local_58 + DAT_02394210);
    }
    if ((double)fVar15 <= DAT_02390108) {
      plVar14 = (longlong *)*unaff_RSI;
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar3;
      local_1a8 = '\x01';
      (**(code **)(*plVar14 + 0x3f8))();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      local_58 = (undefined1  [4])((float)local_58 + DAT_02390d30);
    }
    else {
      if ((float)local_128._0_4_ <= 0.0) {
        if ((float)local_128._0_4_ < 0.0) {
          plVar14 = (longlong *)*unaff_RSI;
          if (DAT_026fce10 != 0) {
            FUN_00d50b00();
          }
          local_190 = lVar9;
          local_188 = '\x01';
          (**(code **)(*plVar14 + 0x3f8))();
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar14 = (longlong *)*unaff_RSI;
        if (DAT_0270b790 != 0) {
          FUN_00d50b00();
        }
        local_1a0 = lVar10;
        local_198 = '\x01';
        (**(code **)(*plVar14 + 0x3f8))();
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_58 = (undefined1  [4])((float)local_58 + DAT_02390d30);
      if (fVar15 < DAT_02393944) {
        plVar14 = (longlong *)*unaff_RSI;
        local_60 = 1;
        local_68 = &DAT_024d0b28;
        local_5c = fVar15;
        FUN_00d8cb40();
        local_138 = local_40;
        local_130 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_130 = '\x01';
        (**(code **)(*plVar14 + 0x3f8))();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01aee964;
      }
    }
    plVar14 = (longlong *)*unaff_RSI;
    auVar45._0_4_ = _DAT_023945e0 & local_128._0_4_;
    auVar45._4_4_ = _UNK_023945e4 & local_128._4_4_;
    auVar45._8_4_ = _UNK_023945e8 & local_128._8_4_;
    auVar45._12_4_ = _UNK_023945ec & local_128._12_4_;
    auVar46._4_12_ = SUB1612(auVar45 | _DAT_023945f0,4);
    auVar46._0_4_ = SUB164(auVar45 | _DAT_023945f0,0) + (float)local_128._0_4_;
    auVar23 = roundss(auVar46,auVar46,0xb);
    local_5c = (float)(int)(float)(auVar23._0_4_ & _DAT_02390140);
    local_60 = 1;
    local_68 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_68);
    local_148 = local_40;
    local_140 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_140 = '\x01';
    (**(code **)(*plVar14 + 0x3f8))();
    if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01aee964:
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


