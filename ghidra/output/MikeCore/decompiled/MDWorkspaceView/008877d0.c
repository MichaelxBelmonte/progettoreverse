// Function: FUN_008877d0
// Address: 008877d0
// Size: 3588 bytes
// Class: MDWorkspaceView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008877d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong **pplVar12;
  int iVar13;
  longlong *unaff_RDI;
  longlong *plVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float fVar25;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float extraout_XMM0_Db_08;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
  float extraout_XMM0_Db_07;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_04;
  float fVar26;
  uint uVar27;
  float fVar29;
  undefined8 in_XMM1_Qb;
  undefined8 uVar30;
  undefined1 auVar28 [16];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  float fStack_c4;
  undefined1 local_b8 [16];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  float local_84;
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  iVar13 = *(int *)((longlong)local_68 + 0xc);
  if (local_60[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar13 != 3) {
    FUN_00886470();
    return;
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar1 = *(longlong **)local_68[2];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  local_38 = *(longlong **)(local_68[2] + 0x10);
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar20 = param_2;
  uVar30 = in_XMM1_Qb;
  cVar6 = (**(code **)(*unaff_RDI + 0x3a8))();
  uVar17 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa08))();
  uVar18 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x938))();
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_68;
  if ((((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_60[0] != '\0')) && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  fStack_134 = (float)((ulonglong)uVar18 >> 0x20);
  local_40 = plVar14;
  local_128 = (float)uVar17;
  local_70 = puVar8;
  if (plVar14 == (longlong *)0x0) {
    bVar3 = false;
    local_84 = 0.0;
    if ((DAT_0239424c == 0.0) && (!NAN(DAT_0239424c))) goto LAB_00887bbe;
  }
  else {
    fVar26 = DAT_02390d00 + fStack_134;
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar14;
    local_50 = 0xffffffff;
    local_48 = 0;
    bVar3 = false;
    local_84 = 0.0;
    local_50._4_4_ = 0;
    while( true ) {
      auVar28 = ZEXT416((uint)fVar26);
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          iVar13 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      uVar19 = (**(code **)(*local_68 + 0x4d8))();
      (**(code **)(*local_68 + 0x528))();
      (**(code **)(*local_68 + 0x530))();
      local_98._4_4_ = auVar28._4_4_;
      local_d8._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
      if (((extraout_XMM0_Db != extraout_XMM0_Db_00) ||
          (cVar7 = (**(code **)(*local_68 + 0x978))(), cVar7 != '\0')) &&
         ((**(code **)(*local_68 + 0x528))(), (float)local_98._4_4_ < extraout_XMM0_Db_01)) {
        local_80 = local_68;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_68 + 0x528))();
        local_84 = local_84 + (extraout_XMM0_Db_02 - (float)local_98._4_4_);
      }
      if ((float)uVar19 < 0.0) {
        bVar3 = true;
      }
      if ((float)local_d8._4_4_ <= fVar26) {
        bVar3 = true;
      }
      fVar26 = fVar26 + (float)local_98._4_4_ + local_128;
    }
    FUN_00318710();
    if ((local_84 == DAT_0239424c) && (!NAN(local_84) && !NAN(DAT_0239424c))) {
LAB_00887bbe:
      if ((!bVar3) && (plVar14 = local_40, cVar6 == '\x01')) goto LAB_008885d6;
    }
  }
  local_118 = (float)param_2;
  fStack_114 = (float)((ulonglong)param_2 >> 0x20);
  fStack_110 = (float)in_XMM1_Qb;
  fStack_10c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  local_138 = (float)uVar18;
  fStack_130 = (float)extraout_XMM0_Qb_00;
  fStack_12c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_158 = (float)uVar20;
  fStack_154 = (float)((ulonglong)uVar20 >> 0x20);
  fStack_150 = (float)uVar30;
  fStack_14c = (float)((ulonglong)uVar30 >> 0x20);
  fVar15 = (local_118 - local_138) - local_158;
  fVar25 = (fStack_114 - fStack_134) - fStack_154;
  uStack_124 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_120 = (uint)extraout_XMM0_Qb;
  uStack_11c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar27 = _DAT_023945e0 ^ (uint)local_128;
  fVar29 = (float)(_UNK_023945e4 ^ uStack_124);
  uStack_120 = _UNK_023945e8 ^ uStack_120;
  uStack_11c = _UNK_023945ec ^ uStack_11c;
  fVar26 = fVar29;
LAB_00887c10:
  FUN_006c6060();
  cVar6 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x9f8))();
  local_d8._4_4_ = fVar25;
  local_d8._0_4_ = fVar15;
  uStack_d0._4_4_ = (fStack_10c - fStack_12c) - fStack_14c;
  uStack_d0._0_4_ = (fStack_110 - fStack_130) - fStack_150;
  if (cVar6 == '\0') {
    fVar16 = *(float *)(unaff_RDI + 4);
    if (fVar15 <= *(float *)(unaff_RDI + 4)) {
      fVar16 = fVar15;
    }
    _local_d8 = ZEXT416((uint)fVar16);
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar4)();
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  (*pcVar4)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar4)();
  local_98._4_4_ = fVar29;
  local_98._0_4_ = uVar27;
  uStack_90._4_4_ = uStack_11c;
  uStack_90._0_4_ = uStack_120;
  if (local_40 != (longlong *)0x0) {
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = local_40;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          iVar13 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      (**(code **)(*local_68 + 0x4d8))();
      cVar6 = (**(code **)(*local_68 + 0x978))();
      if (cVar6 != '\0') {
        local_80 = local_68;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*local_68 + 0x528))();
      (**(code **)(*local_68 + 0x530))();
      if (extraout_XMM0_Db_03 != extraout_XMM0_Db_04) {
        (**(code **)(*local_68 + 0x528))();
        if (extraout_XMM0_Db_05 < fVar26) {
          local_80 = local_68;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_68 + 0x530))();
        if (fVar26 < extraout_XMM0_Db_06) {
          local_80 = local_68;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_98._0_4_ = (float)local_98._0_4_ + fVar26 + local_128;
    }
    FUN_00318710();
  }
  FUN_006c6060();
  auVar28._0_4_ = local_98._0_4_ & _DAT_023945e0;
  auVar28._4_4_ = local_98._4_4_ & _UNK_023945e4;
  auVar28._8_4_ = (uint)uStack_90 & _UNK_023945e8;
  auVar28._12_4_ = uStack_90._4_4_ & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar28 | _DAT_023945f0,4);
  auVar21._0_4_ = SUB164(auVar28 | _DAT_023945f0,0) + (float)local_98._0_4_;
  auVar28 = roundss(ZEXT816(0),auVar21,0xb);
  local_98._0_4_ = auVar28._0_4_;
  fVar26 = fVar25 - (float)local_98._0_4_;
  if (fVar26 <= 0.0) {
    if (fVar26 < 0.0) {
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x528))();
      fStack_c4 = auVar28._4_4_;
      if (extraout_XMM0_Db_07 < fStack_c4 + fVar26) {
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_38;
        local_60[0] = '\0';
        FUN_00d23f50();
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    local_68 = local_38;
    local_60[0] = '\0';
    FUN_00d23f50();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = local_38;
    local_60[0] = '\0';
    FUN_00d23f50();
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_84 != DAT_0239424c) || (fVar16 = fVar26, NAN(local_84) || NAN(DAT_0239424c))) {
    fVar16 = (float)FUN_00885a30();
    fVar16 = fVar26 - (local_84 - fVar16);
  }
  if (fVar16 <= 0.0) {
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00885f50();
      if ((fVar16 != DAT_0239424c) || (NAN(fVar16) || NAN(DAT_0239424c))) {
        fVar16 = (float)FUN_00885520();
      }
    }
  }
  else {
    fVar16 = (float)FUN_00885a30();
    if ((fVar16 != DAT_0239424c) || (NAN(fVar16) || NAN(DAT_0239424c))) {
      fVar16 = (float)FUN_00885520();
    }
  }
  local_98._0_4_ = (float)local_98._0_4_ + (fVar26 - fVar16);
  local_98._4_4_ = 0;
  uStack_90._0_4_ = 0;
  uStack_90._4_4_ = 0;
  uVar20 = FUN_0065f040();
  local_b8._8_8_ = extraout_XMM0_Qb_01;
  local_b8._0_8_ = uVar20;
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_68;
  if (local_60[0] == '\0') {
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00888240;
    }
  }
  else if (local_68 != (longlong *)0x0) {
LAB_00888240:
    local_b8._0_4_ = (float)uVar20 + fStack_134;
    local_60[0] = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar14;
    local_50 = 0xffffffff;
    local_48 = 0;
    while( true ) {
      lVar9 = (longlong)(int)local_50;
      iVar13 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar13);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar13) break;
      local_68 = *(longlong **)(local_58[2] + 8 + lVar9 * 8);
      FUN_01e3f820();
      FUN_006c6060();
      cVar6 = (**(code **)(*local_68 + 0x980))();
      if ((cVar6 == '\0') && (cVar6 = (**(code **)(*local_68 + 0x950))(), cVar6 == '\0')) {
        if ((float)local_98._0_4_ < (float)local_d8._0_4_) {
          auVar24._0_8_ = (**(code **)(*local_68 + 0x528))();
          auVar24._8_8_ = extraout_XMM0_Qb_03;
          if ((float)local_d8._0_4_ < (float)auVar24._0_8_) {
            _local_98 = blendps(_local_98,_local_d8,1);
          }
          else {
            _local_98 = blendps(_local_98,auVar24,0xd);
          }
        }
      }
      else {
        _local_98 = blendps(_local_98,_local_d8,1);
      }
      auVar22._0_8_ = FUN_0065f040();
      auVar22._8_8_ = extraout_XMM0_Qb_02;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ + local_138;
      auVar28 = insertps(auVar23,local_b8._0_4_,0x10);
      (**(code **)(*local_68 + 0x4d0))(auVar28._0_8_);
      FUN_006c6060();
      local_98._0_4_ = (float)local_b8._0_4_ + (float)local_98._4_4_ + local_128;
      local_b8._0_4_ = local_98._0_4_;
      local_98._4_4_ = local_b8._4_4_;
      uStack_90._0_4_ = local_b8._8_4_;
      uStack_90._4_4_ = local_b8._12_4_;
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar13 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar13 = 0;
        }
        local_50 = CONCAT44(iVar13,(int)local_50);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_006c6060();
  local_108 = (float)param_1;
  fStack_104 = (float)((ulonglong)param_1 >> 0x20);
  fStack_100 = (float)in_XMM0_Qb;
  fStack_fc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  fVar26 = fStack_104;
  cVar6 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa18))();
  if (cVar6 != '\0') {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00887c10;
  }
  auVar28 = ZEXT416((uint)fVar16);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    FUN_00d23340();
    plVar5 = local_68;
    pplVar12 = (longlong **)local_60;
    if (local_60[0] == '\0') {
      pplVar12 = &local_80;
    }
    local_80 = (longlong *)CONCAT71(local_80._1_7_,local_60[0]);
    *(undefined1 *)pplVar12 = 0;
    if ((local_60[0] != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar14 = local_40;
    if ((char)local_80 == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00888517;
      }
    }
    else if (plVar5 != (longlong *)0x0) {
LAB_00888517:
      (**(code **)(*plVar5 + 0x4d8))();
      (**(code **)(*plVar5 + 0x4d8))();
      fStack_154 = (fStack_104 + fStack_114) - fStack_154;
      if (fStack_154 < extraout_XMM0_Db_08 + auVar28._4_4_) {
        uVar20 = (**(code **)(*plVar5 + 0x4d8))();
        auVar2._4_4_ = fStack_154 - (float)((ulonglong)uVar20 >> 0x20);
        auVar2._0_4_ = ((local_108 + local_118) - local_158) - (float)uVar20;
        auVar2._8_4_ = ((fStack_100 + fStack_110) - fStack_150) - (float)extraout_XMM0_Qb_04;
        auVar2._12_4_ =
             ((fStack_fc + fStack_10c) - fStack_14c) -
             (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        auVar28 = blendps(auVar28,auVar2,2);
        (**(code **)(*plVar5 + 0x4d0))(uVar20,auVar28._0_8_);
      }
      FUN_00d50b20();
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    plVar14 = local_40;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar8 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
LAB_008885d6:
  if (local_70 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = local_38;
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


