// Reconstructed implementation of MDVolumeSlider
// From MikeCore binary — reverse-engineered pseudocode

#include "MDVolumeSlider.h"

// ============================================================
// @00886470 — 2899 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00886470(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
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
  float extraout_XMM0_Db_07;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
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
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  undefined1 local_98 [16];
  undefined1 local_88 [8];
  undefined8 uStack_80;
  float local_74;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  uVar20 = param_2;
  uVar30 = in_XMM1_Qb;
  cVar5 = (**(code **)(*unaff_RDI + 0x3a8))();
  uVar17 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa08))();
  uVar18 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x938))();
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar3 = DAT_02572370;
  (*DAT_02572370)();
  fStack_114 = (float)((ulonglong)uVar18 >> 0x20);
  local_38 = plVar14;
  local_f8 = (float)uVar17;
  if (plVar14 == (longlong *)0x0) {
    bVar2 = false;
    local_74 = 0.0;
    if ((DAT_0239424c == 0.0) && (!NAN(DAT_0239424c))) goto LAB_00886776;
  }
  else {
    fVar26 = DAT_02390d00 + fStack_114;
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar14;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar2 = false;
    local_74 = 0.0;
    local_48._4_4_ = 0;
    while( true ) {
      auVar28 = ZEXT416((uint)fVar26);
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          iVar13 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
      lVar8 = (longlong)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar13) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
      uVar19 = (**(code **)(*local_60 + 0x4d8))();
      (**(code **)(*local_60 + 0x528))();
      (**(code **)(*local_60 + 0x530))();
      local_88._4_4_ = auVar28._4_4_;
      if (((extraout_XMM0_Db != extraout_XMM0_Db_00) ||
          (cVar6 = (**(code **)(*local_60 + 0x978))(), cVar6 != '\0')) &&
         ((**(code **)(*local_60 + 0x528))(), (float)local_88._4_4_ < extraout_XMM0_Db_01)) {
        local_70 = local_60;
        local_68 = '\0';
        FUN_00d21140();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_60 + 0x528))();
        local_74 = local_74 + (extraout_XMM0_Db_02 - (float)local_88._4_4_);
      }
      local_d8._0_4_ = (undefined4)uVar19;
      local_d8._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
      if ((float)local_d8._0_4_ < 0.0) {
        bVar2 = true;
      }
      if ((float)local_d8._4_4_ <= fVar26) {
        bVar2 = true;
      }
      fVar26 = fVar26 + (float)local_88._4_4_ + local_f8;
    }
    FUN_00318710();
    if ((local_74 == DAT_0239424c) && (!NAN(local_74) && !NAN(DAT_0239424c))) {
LAB_00886776:
      if ((!bVar2) && (plVar14 = local_38, cVar5 == '\x01')) goto LAB_00886fd0;
    }
  }
  local_108 = (float)param_2;
  fStack_104 = (float)((ulonglong)param_2 >> 0x20);
  fStack_100 = (float)in_XMM1_Qb;
  fStack_fc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  local_118 = (float)uVar18;
  fStack_110 = (float)extraout_XMM0_Qb_00;
  fStack_10c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_138 = (float)uVar20;
  fStack_134 = (float)((ulonglong)uVar20 >> 0x20);
  fStack_130 = (float)uVar30;
  fStack_12c = (float)((ulonglong)uVar30 >> 0x20);
  fVar15 = (local_108 - local_118) - local_138;
  fVar25 = (fStack_104 - fStack_114) - fStack_134;
  uStack_f4 = (uint)((ulonglong)uVar17 >> 0x20);
  uStack_f0 = (uint)extraout_XMM0_Qb;
  uStack_ec = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  uVar27 = _DAT_023945e0 ^ (uint)local_f8;
  fVar29 = (float)(_UNK_023945e4 ^ uStack_f4);
  uStack_f0 = _UNK_023945e8 ^ uStack_f0;
  uStack_ec = _UNK_023945ec ^ uStack_ec;
  fVar26 = fVar29;
LAB_008867d0:
  FUN_006c6060();
  cVar5 = (**(code **)(*(longlong *)unaff_RDI[2] + 0x9f8))();
  local_d8._4_4_ = fVar25;
  local_d8._0_4_ = fVar15;
  uStack_d0._4_4_ = (fStack_fc - fStack_10c) - fStack_12c;
  uStack_d0._0_4_ = (fStack_100 - fStack_110) - fStack_130;
  if (cVar5 == '\0') {
    fVar16 = *(float *)(unaff_RDI + 4);
    if (fVar15 <= *(float *)(unaff_RDI + 4)) {
      fVar16 = fVar15;
    }
    _local_d8 = ZEXT416((uint)fVar16);
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*pcVar3)();
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &DAT_02572358;
  (*pcVar3)();
  puVar11 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &DAT_02572358;
  (*pcVar3)();
  local_88._4_4_ = fVar29;
  local_88._0_4_ = uVar27;
  uStack_80._4_4_ = uStack_ec;
  uStack_80._0_4_ = uStack_f0;
  if (local_38 != (longlong *)0x0) {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = local_38;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          iVar13 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
      lVar8 = (longlong)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar13) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
      (**(code **)(*local_60 + 0x4d8))();
      cVar5 = (**(code **)(*local_60 + 0x978))();
      if (cVar5 != '\0') {
        local_70 = local_60;
        local_68 = '\0';
        FUN_00d21140();
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*local_60 + 0x528))();
      (**(code **)(*local_60 + 0x530))();
      if (extraout_XMM0_Db_03 != extraout_XMM0_Db_04) {
        (**(code **)(*local_60 + 0x528))();
        if (extraout_XMM0_Db_05 < fVar26) {
          local_70 = local_60;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_60 + 0x530))();
        if (fVar26 < extraout_XMM0_Db_06) {
          local_70 = local_60;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_88._0_4_ = (float)local_88._0_4_ + fVar26 + local_f8;
    }
    FUN_00318710();
  }
  FUN_006c6060();
  auVar28._0_4_ = local_88._0_4_ & _DAT_023945e0;
  auVar28._4_4_ = local_88._4_4_ & _UNK_023945e4;
  auVar28._8_4_ = (uint)uStack_80 & _UNK_023945e8;
  auVar28._12_4_ = uStack_80._4_4_ & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar28 | _DAT_023945f0,4);
  auVar21._0_4_ = SUB164(auVar28 | _DAT_023945f0,0) + (float)local_88._0_4_;
  auVar28 = roundss(ZEXT816(0),auVar21,0xb);
  fVar26 = fVar25 - auVar28._0_4_;
  if ((local_74 != DAT_0239424c) || (fVar16 = fVar26, NAN(local_74) || NAN(DAT_0239424c))) {
    fVar16 = (float)FUN_00885a30();
    fVar16 = fVar26 - (local_74 - fVar16);
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
  local_88._0_4_ = auVar28._0_4_ + (fVar26 - fVar16);
  local_88._4_4_ = 0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  uVar20 = FUN_0065f040();
  local_98._8_8_ = extraout_XMM0_Qb_01;
  local_98._0_8_ = uVar20;
  (**(code **)(*(longlong *)unaff_RDI[2] + 0x4a0))();
  plVar14 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00886c70;
    }
  }
  else if (local_60 != (longlong *)0x0) {
LAB_00886c70:
    local_98._0_4_ = (float)uVar20 + fStack_114;
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_50 = plVar14;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar8 = (longlong)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar13) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar8 * 8);
      FUN_01e3f820();
      FUN_006c6060();
      cVar5 = (**(code **)(*local_60 + 0x980))();
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*local_60 + 0x950))(), cVar5 == '\0')) {
        if ((float)local_88._0_4_ < (float)local_d8._0_4_) {
          auVar24._0_8_ = (**(code **)(*local_60 + 0x528))();
          auVar24._8_8_ = extraout_XMM0_Qb_03;
          if ((float)local_d8._0_4_ < (float)auVar24._0_8_) {
            _local_88 = blendps(_local_88,_local_d8,1);
          }
          else {
            _local_88 = blendps(_local_88,auVar24,0xd);
          }
        }
      }
      else {
        _local_88 = blendps(_local_88,_local_d8,1);
      }
      auVar22._0_8_ = FUN_0065f040();
      auVar22._8_8_ = extraout_XMM0_Qb_02;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ + local_118;
      auVar28 = insertps(auVar23,local_98._0_4_,0x10);
      (**(code **)(*local_60 + 0x4d0))(auVar28._0_8_);
      FUN_006c6060();
      local_88._0_4_ = (float)local_98._0_4_ + (float)local_88._4_4_ + local_f8;
      local_98._0_4_ = local_88._0_4_;
      local_88._4_4_ = local_98._4_4_;
      uStack_80._0_4_ = local_98._8_4_;
      uStack_80._4_4_ = local_98._12_4_;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_006c6060();
  local_e8 = (float)param_1;
  fStack_e4 = (float)((ulonglong)param_1 >> 0x20);
  fStack_e0 = (float)in_XMM0_Qb;
  fStack_dc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  fVar26 = fStack_e4;
  cVar5 = (**(code **)(*(longlong *)unaff_RDI[2] + 0xa18))();
  if (cVar5 != '\0') {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_008867d0;
  }
  auVar28 = ZEXT416((uint)fVar16);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    FUN_00d23340();
    plVar4 = local_60;
    pplVar12 = (longlong **)local_58;
    if (local_58[0] == '\0') {
      pplVar12 = &local_70;
    }
    local_70 = (longlong *)CONCAT71(local_70._1_7_,local_58[0]);
    *(undefined1 *)pplVar12 = 0;
    if ((local_58[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar14 = local_38;
    if ((char)local_70 == '\0') {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00886f1b;
      }
    }
    else if (plVar4 != (longlong *)0x0) {
LAB_00886f1b:
      (**(code **)(*plVar4 + 0x4d8))();
      (**(code **)(*plVar4 + 0x4d8))();
      fStack_134 = (fStack_e4 + fStack_104) - fStack_134;
      if (fStack_134 < extraout_XMM0_Db_07 + auVar28._4_4_) {
        uVar20 = (**(code **)(*plVar4 + 0x4d8))();
        auVar1._4_4_ = fStack_134 - (float)((ulonglong)uVar20 >> 0x20);
        auVar1._0_4_ = ((local_e8 + local_108) - local_138) - (float)uVar20;
        auVar1._8_4_ = ((fStack_e0 + fStack_100) - fStack_130) - (float)extraout_XMM0_Qb_04;
        auVar1._12_4_ =
             ((fStack_dc + fStack_fc) - fStack_12c) -
             (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
        auVar28 = blendps(auVar28,auVar1,2);
        (**(code **)(*plVar4 + 0x4d0))(uVar20,auVar28._0_8_);
      }
      FUN_00d50b20();
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    plVar14 = local_38;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
LAB_00886fd0:
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002f9750 — 1214 bytes
// str: ""MDVolumeSlider""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002f9750(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_001b40a0();
  *unaff_RDI = &DAT_024ecae8;
  unaff_RDI[2] = &DAT_024ed620;
  FUN_002f9d30();
  *(undefined4 *)(unaff_RDI + 0x3d) = 0;
  if (DAT_026fec18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026feb68 = FUN_001b37d0();
      _DAT_026feb50 = "MDVolumeSlider";
      _DAT_026feb58 = 0x220;
      _DAT_026feb60 = FUN_002f9670;
      _DAT_026feb70 = 0;
      uRam00000000026feb78 = 0;
      _DAT_026feb80 = 0;
      _DAT_026febf8 = 0;
      uRam00000000026fec00 = 0;
      _DAT_026fec08 = 0;
      DAT_026fec0a = 1;
      _DAT_026feb88 = 0;
      uRam00000000026feb90 = 0;
      _DAT_026feb98 = 0;
      uRam00000000026feba0 = 0;
      _DAT_026feba8 = 0;
      uRam00000000026febb0 = 0;
      _DAT_026febb8 = 0;
      uRam00000000026febc0 = 0;
      _DAT_026febc8 = 0;
      uRam00000000026febd0 = 0;
      _DAT_026febd8 = 0;
      uRam00000000026febe0 = 0;
      _DAT_026febe8 = 0;
      uRam00000000026febf0 = 0;
      DAT_026fec13 = 0;
      _DAT_026fec0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fec0b == '\0') {
    FUN_002f9ff0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = 0;
  if (DAT_026fec18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026feb68 = FUN_001b37d0();
      _DAT_026feb50 = "MDVolumeSlider";
      _DAT_026feb58 = 0x220;
      _DAT_026feb60 = FUN_002f9670;
      _DAT_026feb70 = 0;
      uRam00000000026feb78 = 0;
      _DAT_026feb80 = 0;
      _DAT_026febf8 = 0;
      uRam00000000026fec00 = 0;
      _DAT_026fec08 = 0;
      DAT_026fec0a = 1;
      _DAT_026feb88 = 0;
      uRam00000000026feb90 = 0;
      _DAT_026feb98 = 0;
      uRam00000000026feba0 = 0;
      _DAT_026feba8 = 0;
      uRam00000000026febb0 = 0;
      _DAT_026febb8 = 0;
      uRam00000000026febc0 = 0;
      _DAT_026febc8 = 0;
      uRam00000000026febd0 = 0;
      _DAT_026febd8 = 0;
      uRam00000000026febe0 = 0;
      _DAT_026febe8 = 0;
      uRam00000000026febf0 = 0;
      DAT_026fec13 = 0;
      _DAT_026fec0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fec0b == '\0') {
    FUN_002fa180();
    FUN_00e87980();
  }
  FUN_002fa3e0();
  FUN_002fa710();
  FUN_002faa40();
  FUN_002fad70();
  FUN_002fb0a0();
  *(undefined1 *)(unaff_RDI + 0x43) = 0;
  if (DAT_026fec18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026feb68 = FUN_001b37d0();
      _DAT_026feb50 = "MDVolumeSlider";
      _DAT_026feb58 = 0x220;
      _DAT_026feb60 = FUN_002f9670;
      _DAT_026feb70 = 0;
      uRam00000000026feb78 = 0;
      _DAT_026feb80 = 0;
      _DAT_026febf8 = 0;
      uRam00000000026fec00 = 0;
      _DAT_026fec08 = 0;
      DAT_026fec0a = 1;
      _DAT_026feb88 = 0;
      uRam00000000026feb90 = 0;
      _DAT_026feb98 = 0;
      uRam00000000026feba0 = 0;
      _DAT_026feba8 = 0;
      uRam00000000026febb0 = 0;
      _DAT_026febb8 = 0;
      uRam00000000026febc0 = 0;
      _DAT_026febc8 = 0;
      uRam00000000026febd0 = 0;
      _DAT_026febd8 = 0;
      uRam00000000026febe0 = 0;
      _DAT_026febe8 = 0;
      uRam00000000026febf0 = 0;
      DAT_026fec13 = 0;
      _DAT_026fec0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fec0b == '\0') {
    FUN_002fb3d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x219) = 0;
  if (DAT_026fec18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026feb68 = FUN_001b37d0();
      _DAT_026feb50 = "MDVolumeSlider";
      _DAT_026feb58 = 0x220;
      _DAT_026feb60 = FUN_002f9670;
      _DAT_026feb70 = 0;
      uRam00000000026feb78 = 0;
      _DAT_026feb80 = 0;
      _DAT_026febf8 = 0;
      uRam00000000026fec00 = 0;
      _DAT_026fec08 = 0;
      DAT_026fec0a = 1;
      _DAT_026feb88 = 0;
      uRam00000000026feb90 = 0;
      _DAT_026feb98 = 0;
      uRam00000000026feba0 = 0;
      _DAT_026feba8 = 0;
      uRam00000000026febb0 = 0;
      _DAT_026febb8 = 0;
      uRam00000000026febc0 = 0;
      _DAT_026febc8 = 0;
      uRam00000000026febd0 = 0;
      _DAT_026febd8 = 0;
      uRam00000000026febe0 = 0;
      _DAT_026febe8 = 0;
      uRam00000000026febf0 = 0;
      DAT_026fec13 = 0;
      _DAT_026fec0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fec0b == '\0') {
    FUN_002fb560();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00885a30 — 1107 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00885ac3) */
/* WARNING: Removing unreachable block (ram,0x00885acf) */
/* WARNING: Removing unreachable block (ram,0x00885c12) */
/* WARNING: Removing unreachable block (ram,0x00885c1e) */
/* WARNING: Removing unreachable block (ram,0x00885aaf) */
/* WARNING: Removing unreachable block (ram,0x00885ab8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885a30(float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float extraout_XMM0_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float extraout_XMM0_Db_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  float fStack_c4;
  uint uStack_bc;
  longlong local_80;
  char local_78;
  float local_34;
  
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 2) {
    bVar3 = false;
    local_80 = 0;
  }
  else {
    FUN_003167d0();
    if (local_80 == 0) {
      local_80 = 0;
      bVar3 = false;
    }
    else if (local_78 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    lVar6 = *unaff_RSI;
  }
  local_34 = param_1;
  if (lVar6 != 0) {
    if (local_80 == 0) {
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar4 = 0;
        iVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
          iVar1 = *(int *)(*unaff_RSI + 0xc);
          (**(code **)(*plVar2 + 0x4d8))();
          (**(code **)(*plVar2 + 0x530))();
          unaff_XMM7 = roundss(unaff_XMM7,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar13 = in_XMM1._4_4_;
          fVar12 = unaff_XMM7._0_4_ + fVar13;
          auVar20._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar20._4_4_ = unaff_XMM7._4_4_ & _UNK_023945e4;
          auVar20._8_4_ = unaff_XMM7._8_4_ & _UNK_023945e8;
          auVar20._12_4_ = unaff_XMM7._12_4_ & _UNK_023945ec;
          auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(DAT_02394dc8),4);
          auVar21._0_4_ = SUB164(auVar20 | ZEXT416(DAT_02394dc8),0) + fVar12;
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          auVar17 = roundss(auVar17,auVar21,0xb);
          fVar12 = 0.0;
          if (0.0 <= extraout_XMM0_Db_00 - fVar13) {
            fVar12 = extraout_XMM0_Db_00 - fVar13;
          }
          uVar7 = -(uint)(extraout_XMM0_Db_00 < auVar17._0_4_);
          fVar12 = (float)(~uVar7 & (uint)unaff_XMM7._0_4_ | (uint)fVar12 & uVar7);
          fVar14 = fVar13 + fVar12;
          auVar10._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar10._4_4_ = (uint)fVar13 & _UNK_023945e4;
          auVar10._8_4_ = in_XMM1._12_4_ & _UNK_023945e8;
          auVar10._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar11._4_12_ = SUB1612(auVar10 | ZEXT416(DAT_02394dc8),4);
          auVar11._0_4_ = SUB164(auVar10 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar17 = roundss(auVar11,auVar11,0xb);
          in_XMM1 = insertps(in_XMM1,auVar17,0x10);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar12;
          lVar4 = lVar4 + 1;
          iVar5 = iVar5 + -1;
        } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar6 + 0xc)) {
      lVar4 = 0;
      iVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
        iVar1 = *(int *)(*unaff_RSI + 0xc);
        (**(code **)(*plVar2 + 0x4d8))();
        (**(code **)(*plVar2 + 0x530))();
        auVar19 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fStack_c4 = in_XMM1._4_4_;
        uStack_bc = in_XMM1._12_4_;
        fVar12 = auVar19._0_4_ + fStack_c4;
        auVar15._0_4_ = (uint)fVar12 & _DAT_023945e0;
        auVar15._4_4_ = auVar19._4_4_ & _UNK_023945e4;
        auVar15._8_4_ = auVar19._8_4_ & _UNK_023945e8;
        auVar15._12_4_ = auVar19._12_4_ & _UNK_023945ec;
        auVar16._4_12_ = SUB1612(auVar15 | _DAT_023945f0,4);
        auVar16._0_4_ = SUB164(auVar15 | _DAT_023945f0,0) + fVar12;
        auVar17 = roundss(auVar16,auVar16,0xb);
        if (extraout_XMM0_Db < auVar17._0_4_) {
          FUN_00d23f50();
          auVar18 = ZEXT812(0);
          if (0.0 <= extraout_XMM0_Db - fStack_c4) {
            auVar18._4_8_ = 0;
            auVar18._0_4_ = extraout_XMM0_Db - fStack_c4;
          }
          auVar19._12_4_ = 0;
          auVar19._0_12_ = auVar18;
          fVar12 = fStack_c4 + auVar18._0_4_;
          auVar8._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar8._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
          auVar8._8_4_ = uStack_bc & _UNK_023945e8;
          auVar8._12_4_ = uStack_bc & _UNK_023945ec;
          auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
          auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + fVar12;
          auVar17 = roundss(ZEXT816(0),auVar9,0xb);
        }
        in_XMM1 = insertps(in_XMM1,auVar17,0x10);
        (**(code **)(*plVar2 + 0x4d0))();
        local_34 = local_34 - auVar19._0_4_;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        FUN_00885a30();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00885f50 — 1098 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00885fe3) */
/* WARNING: Removing unreachable block (ram,0x00885fef) */
/* WARNING: Removing unreachable block (ram,0x00886132) */
/* WARNING: Removing unreachable block (ram,0x0088613e) */
/* WARNING: Removing unreachable block (ram,0x00885fcf) */
/* WARNING: Removing unreachable block (ram,0x00885fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885f50(float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float extraout_XMM0_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float extraout_XMM0_Db_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 unaff_XMM7 [16];
  float fStack_c4;
  uint uStack_bc;
  longlong local_80;
  char local_78;
  float local_34;
  
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 2) {
    bVar3 = false;
    local_80 = 0;
  }
  else {
    FUN_003167d0();
    if (local_80 == 0) {
      local_80 = 0;
      bVar3 = false;
    }
    else if (local_78 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    lVar6 = *unaff_RSI;
  }
  local_34 = param_1;
  if (lVar6 != 0) {
    if (local_80 == 0) {
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar4 = 0;
        iVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
          iVar1 = *(int *)(*unaff_RSI + 0xc);
          (**(code **)(*plVar2 + 0x4d8))();
          (**(code **)(*plVar2 + 0x530))();
          unaff_XMM7 = roundss(unaff_XMM7,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar13 = in_XMM1._4_4_;
          fVar12 = unaff_XMM7._0_4_ + fVar13;
          auVar16._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar16._4_4_ = unaff_XMM7._4_4_ & _UNK_023945e4;
          auVar16._8_4_ = unaff_XMM7._8_4_ & _UNK_023945e8;
          auVar16._12_4_ = unaff_XMM7._12_4_ & _UNK_023945ec;
          auVar20._4_12_ = SUB1612(auVar16 | ZEXT416(DAT_02394dc8),4);
          auVar20._0_4_ = SUB164(auVar16 | ZEXT416(DAT_02394dc8),0) + fVar12;
          auVar16 = roundss(auVar20,auVar20,0xb);
          uVar7 = -(uint)(auVar16._0_4_ < extraout_XMM0_Db_00);
          fVar12 = 0.0;
          if (extraout_XMM0_Db_00 - fVar13 <= 0.0) {
            fVar12 = extraout_XMM0_Db_00 - fVar13;
          }
          fVar19 = (float)(~uVar7 & (uint)unaff_XMM7._0_4_ | (uint)fVar12 & uVar7);
          fVar12 = fVar13 + fVar19;
          auVar10._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar10._4_4_ = (uint)fVar13 & _UNK_023945e4;
          auVar10._8_4_ = in_XMM1._12_4_ & _UNK_023945e8;
          auVar10._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar11._4_12_ = SUB1612(auVar10 | ZEXT416(DAT_02394dc8),4);
          auVar11._0_4_ = SUB164(auVar10 | ZEXT416(DAT_02394dc8),0) + fVar12;
          auVar16 = roundss(auVar11,auVar11,0xb);
          in_XMM1 = insertps(in_XMM1,auVar16,0x10);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar19;
          lVar4 = lVar4 + 1;
          iVar5 = iVar5 + -1;
        } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar6 + 0xc)) {
      lVar4 = 0;
      iVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
        iVar1 = *(int *)(*unaff_RSI + 0xc);
        (**(code **)(*plVar2 + 0x4d8))();
        (**(code **)(*plVar2 + 0x530))();
        auVar18 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fStack_c4 = in_XMM1._4_4_;
        uStack_bc = in_XMM1._12_4_;
        fVar12 = auVar18._0_4_ + fStack_c4;
        auVar14._0_4_ = (uint)fVar12 & _DAT_023945e0;
        auVar14._4_4_ = auVar18._4_4_ & _UNK_023945e4;
        auVar14._8_4_ = auVar18._8_4_ & _UNK_023945e8;
        auVar14._12_4_ = auVar18._12_4_ & _UNK_023945ec;
        auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
        auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + fVar12;
        auVar16 = roundss(auVar15,auVar15,0xb);
        if (auVar16._0_4_ < extraout_XMM0_Db) {
          FUN_00d23f50();
          auVar17 = ZEXT812(0);
          if (extraout_XMM0_Db - fStack_c4 <= 0.0) {
            auVar17._4_8_ = 0;
            auVar17._0_4_ = extraout_XMM0_Db - fStack_c4;
          }
          auVar18._12_4_ = 0;
          auVar18._0_12_ = auVar17;
          fVar12 = fStack_c4 + auVar17._0_4_;
          auVar8._0_4_ = (uint)fVar12 & _DAT_023945e0;
          auVar8._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
          auVar8._8_4_ = uStack_bc & _UNK_023945e8;
          auVar8._12_4_ = uStack_bc & _UNK_023945ec;
          auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
          auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + fVar12;
          auVar16 = roundss(ZEXT816(0),auVar9,0xb);
        }
        in_XMM1 = insertps(in_XMM1,auVar16,0x10);
        (**(code **)(*plVar2 + 0x4d0))();
        local_34 = local_34 - auVar18._0_4_;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        FUN_00885f50();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00885520 — 1078 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x008855b3) */
/* WARNING: Removing unreachable block (ram,0x008855bf) */
/* WARNING: Removing unreachable block (ram,0x00885702) */
/* WARNING: Removing unreachable block (ram,0x0088570e) */
/* WARNING: Removing unreachable block (ram,0x0088559f) */
/* WARNING: Removing unreachable block (ram,0x008855a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00885520(float param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  float extraout_XMM0_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float extraout_XMM0_Db_00;
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  float fStack_c4;
  uint uStack_bc;
  longlong local_80;
  char local_78;
  float local_34;
  
  lVar6 = *unaff_RSI;
  if (*(int *)(lVar6 + 0xc) < 2) {
    bVar3 = false;
    local_80 = 0;
  }
  else {
    FUN_003167d0();
    if (local_80 == 0) {
      local_80 = 0;
      bVar3 = false;
    }
    else if (local_78 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    lVar6 = *unaff_RSI;
  }
  local_34 = param_1;
  if (lVar6 != 0) {
    if (local_80 == 0) {
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar4 = 0;
        iVar5 = 0;
        do {
          plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
          iVar1 = *(int *)(*unaff_RSI + 0xc);
          (**(code **)(*plVar2 + 0x4d8))();
          (**(code **)(*plVar2 + 0x528))();
          unaff_XMM7 = roundss(unaff_XMM7,ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
          fVar13 = in_XMM1._4_4_;
          fVar14 = unaff_XMM7._0_4_ + fVar13;
          auVar18._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar18._4_4_ = unaff_XMM7._4_4_ & _UNK_023945e4;
          auVar18._8_4_ = unaff_XMM7._8_4_ & _UNK_023945e8;
          auVar18._12_4_ = unaff_XMM7._12_4_ & _UNK_023945ec;
          auVar19._4_12_ = SUB1612(auVar18 | ZEXT416(DAT_02394dc8),4);
          auVar19._0_4_ = SUB164(auVar18 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar17._0_12_ = ZEXT812(0);
          auVar17._12_4_ = 0;
          auVar16 = roundss(auVar17,auVar19,0xb);
          uVar7 = -(uint)(auVar16._0_4_ < extraout_XMM0_Db_00);
          fVar15 = (float)(~uVar7 & (uint)unaff_XMM7._0_4_ |
                          (uint)(extraout_XMM0_Db_00 - fVar13) & uVar7);
          fVar14 = fVar13 + fVar15;
          auVar16._0_4_ = (uint)fVar14 & _DAT_023945e0;
          auVar16._4_4_ = (uint)fVar13 & _UNK_023945e4;
          auVar16._8_4_ = in_XMM1._12_4_ & _UNK_023945e8;
          auVar16._12_4_ = in_XMM1._12_4_ & _UNK_023945ec;
          auVar10._4_12_ = SUB1612(auVar16 | ZEXT416(DAT_02394dc8),4);
          auVar10._0_4_ = SUB164(auVar16 | ZEXT416(DAT_02394dc8),0) + fVar14;
          auVar16 = roundss(auVar10,auVar10,0xb);
          in_XMM1 = insertps(in_XMM1,auVar16,0x10);
          (**(code **)(*plVar2 + 0x4d0))();
          local_34 = local_34 - fVar15;
          lVar4 = lVar4 + 1;
          iVar5 = iVar5 + -1;
        } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar6 + 0xc)) {
      lVar4 = 0;
      iVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar4 * 8);
        iVar1 = *(int *)(*unaff_RSI + 0xc);
        (**(code **)(*plVar2 + 0x4d8))();
        (**(code **)(*plVar2 + 0x528))();
        auVar16 = roundss(ZEXT816(0),ZEXT416((uint)(local_34 / (float)(iVar1 + iVar5))),0xb);
        fStack_c4 = in_XMM1._4_4_;
        uStack_bc = in_XMM1._12_4_;
        fVar13 = auVar16._0_4_;
        auVar11._0_4_ = (uint)(fVar13 + fStack_c4) & _DAT_023945e0;
        auVar11._4_4_ = auVar16._4_4_ & _UNK_023945e4;
        auVar11._8_4_ = auVar16._8_4_ & _UNK_023945e8;
        auVar11._12_4_ = auVar16._12_4_ & _UNK_023945ec;
        auVar12._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
        auVar12._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + fVar13 + fStack_c4;
        auVar16 = roundss(auVar12,auVar12,0xb);
        if (auVar16._0_4_ < extraout_XMM0_Db) {
          FUN_00d23f50();
          fVar13 = extraout_XMM0_Db - fStack_c4;
          auVar8._0_4_ = (uint)(fStack_c4 + fVar13) & _DAT_023945e0;
          auVar8._4_4_ = (uint)fStack_c4 & _UNK_023945e4;
          auVar8._8_4_ = uStack_bc & _UNK_023945e8;
          auVar8._12_4_ = uStack_bc & _UNK_023945ec;
          auVar9._4_12_ = SUB1612(auVar8 | _DAT_023945f0,4);
          auVar9._0_4_ = SUB164(auVar8 | _DAT_023945f0,0) + fStack_c4 + fVar13;
          auVar16 = roundss(ZEXT816(0),auVar9,0xb);
        }
        in_XMM1 = insertps(in_XMM1,auVar16,0x10);
        (**(code **)(*plVar2 + 0x4d0))();
        local_34 = local_34 - fVar13;
        lVar4 = lVar4 + 1;
        iVar5 = iVar5 + -1;
      } while ((int)lVar4 < *(int *)(lVar6 + 0xc));
    }
    FUN_00318710();
  }
  if (local_80 != 0) {
    if ((*(int *)(local_80 + 0xc) != 0) && ((local_34 != 0.0 || (NAN(local_34))))) {
      if ((local_34 != param_1) || (NAN(local_34) || NAN(param_1))) {
        FUN_00885520();
      }
    }
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @008844d0 — 844 bytes
// str: ""MDVolumeSlider""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008844d0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong unaff_RDI;
  longlong local_30;
  char local_28;
  
  FUN_01e534b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x70);
  if ((DAT_026fec18 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026feb68 = FUN_001b37d0();
    _DAT_026feb50 = "MDVolumeSlider";
    _DAT_026feb58 = 0x220;
    _DAT_026feb60 = FUN_002f9670;
    _DAT_026feb70 = 0;
    uRam00000000026feb78 = 0;
    _DAT_026feb80 = 0;
    _DAT_026febf8 = 0;
    uRam00000000026fec00 = 0;
    _DAT_026fec08 = 0;
    DAT_026fec0a = 1;
    _DAT_026feb88 = 0;
    uRam00000000026feb90 = 0;
    _DAT_026feb98 = 0;
    uRam00000000026feba0 = 0;
    _DAT_026feba8 = 0;
    uRam00000000026febb0 = 0;
    _DAT_026febb8 = 0;
    uRam00000000026febc0 = 0;
    _DAT_026febc8 = 0;
    uRam00000000026febd0 = 0;
    _DAT_026febd8 = 0;
    uRam00000000026febe0 = 0;
    _DAT_026febe8 = 0;
    uRam00000000026febf0 = 0;
    DAT_026fec13 = 0;
    _DAT_026fec0b = 0;
    ___cxa_guard_release();
  }
  lVar2 = DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    lVar2 = DAT_02802688;
    if (cVar3 != '\0') {
      lVar2 = *(longlong *)(unaff_RDI + 0x70);
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_0038f7f0();
    lVar2 = DAT_02741638;
    if (DAT_02741638 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f6b0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02741640;
    if (DAT_02741640 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f710();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_02741648;
    if (DAT_02741648 != 0) {
      FUN_00d50b00();
    }
    FUN_01d51a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_0038f770();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @008851c0 — 707 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0088542f) */
/* WARNING: Removing unreachable block (ram,0x0088543c) */
/* WARNING: Removing unreachable block (ram,0x00885289) */
/* WARNING: Removing unreachable block (ram,0x00885292) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008851c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong unaff_RDI;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar9;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  longlong local_78;
  char local_70;
  float local_38;
  float local_34;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar10 = (float)param_2;
  FUN_006c6060();
  fVar4 = (float)(**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0xa08))();
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  uVar6 = (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x938))();
  fVar9 = (float)((ulonglong)uVar6 >> 0x20);
  fVar5 = (float)uVar6 + fVar10;
  *(float *)(unaff_RDI + 0x18) = fVar5;
  fVar16 = (fVar9 - fVar4) + fVar12;
  *(float *)(unaff_RDI + 0x1c) = fVar16;
  *(float *)(unaff_RDI + 0x20) = fVar5;
  *(float *)(unaff_RDI + 0x24) = fVar16;
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4a0))();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_00885468;
    FUN_00d50b00();
LAB_00885297:
    local_34 = 0.0;
    local_38 = 0.0;
    for (lVar3 = 0; (int)lVar3 < *(int *)(local_78 + 0xc); lVar3 = lVar3 + 1) {
      plVar1 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar3 * 8);
      (**(code **)(*plVar1 + 0x4d8))();
      uVar7 = (**(code **)(*plVar1 + 0x528))();
      fVar16 = fVar5 + (float)uVar7;
      if (*(float *)(unaff_RDI + 0x18) <= fVar16 && fVar16 != *(float *)(unaff_RDI + 0x18)) {
        *(float *)(unaff_RDI + 0x18) = fVar16;
      }
      *(float *)(unaff_RDI + 0x1c) =
           (float)((ulonglong)uVar7 >> 0x20) + fVar4 + *(float *)(unaff_RDI + 0x1c);
      uVar7 = (**(code **)(*plVar1 + 0x530))();
      fVar16 = (float)uVar6 + (float)uVar7 + fVar10;
      auVar11._0_4_ = (uint)fVar16 & _DAT_023945e0;
      auVar11._4_4_ = (uint)fVar9 & _UNK_023945e4;
      auVar11._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
      auVar11._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
      auVar13._4_12_ = SUB1612(auVar11 | ZEXT416(DAT_02394dc8),4);
      auVar13._0_4_ = SUB164(auVar11 | ZEXT416(DAT_02394dc8),0) + fVar16;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar11 = roundss(auVar8,auVar13,0xb);
      fVar16 = (float)((ulonglong)uVar7 >> 0x20);
      auVar14._0_4_ = (uint)fVar16 & _DAT_023945e0;
      auVar14._4_4_ = (uint)fVar16 & _UNK_023945e4;
      auVar14._8_4_ = extraout_XMM0_Dd & _UNK_023945e8;
      auVar14._12_4_ = extraout_XMM0_Dd & _UNK_023945ec;
      auVar15._4_12_ = SUB1612(auVar14 | ZEXT416(DAT_02394dc8),4);
      auVar15._0_4_ = SUB164(auVar14 | ZEXT416(DAT_02394dc8),0) + fVar16;
      auVar8 = roundss(ZEXT816(0),auVar15,0xb);
      fVar16 = auVar11._0_4_;
      if (*(float *)(unaff_RDI + 0x20) <= fVar16 && fVar16 != *(float *)(unaff_RDI + 0x20)) {
        *(float *)(unaff_RDI + 0x20) = fVar16;
      }
      fVar16 = auVar8._0_4_;
      if (fVar12 <= fVar16) {
        if (fVar12 < fVar16) {
          local_34 = local_34 + (fVar16 - fVar12);
          fVar12 = 0.0;
        }
      }
      else {
        local_38 = local_38 + (fVar12 - fVar16);
      }
      *(float *)(unaff_RDI + 0x24) = fVar16 + fVar4 + *(float *)(unaff_RDI + 0x24);
      uVar2 = FUN_0065f4c0();
      *(uint *)(unaff_RDI + 0x30) = *(uint *)(unaff_RDI + 0x30) | uVar2;
      FUN_006c6060();
    }
    FUN_000a9680();
    FUN_00d50b20();
    fVar4 = local_38;
    if (local_34 < local_38) goto LAB_0088546e;
  }
  else {
    if (local_78 != 0) goto LAB_00885297;
LAB_00885468:
    fVar4 = 0.0;
  }
  local_34 = fVar4;
LAB_0088546e:
  *(float *)(unaff_RDI + 0x24) = local_34 + *(float *)(unaff_RDI + 0x24);
  FUN_006c6060();
  return;
}




// ============================================================
// @002e2b40 — 544 bytes
// str: ""MDVolumeSlider""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e2b40(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_026fec18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026feb68 = FUN_001b37d0();
      _DAT_026feb50 = "MDVolumeSlider";
      _DAT_026feb58 = 0x220;
      _DAT_026feb60 = FUN_002f9670;
      _DAT_026feb70 = 0;
      uRam00000000026feb78 = 0;
      _DAT_026feb80 = 0;
      _DAT_026febf8 = 0;
      uRam00000000026fec00 = 0;
      _DAT_026fec08 = 0;
      DAT_026fec0a = 1;
      _DAT_026feb88 = 0;
      uRam00000000026feb90 = 0;
      _DAT_026feb98 = 0;
      uRam00000000026feba0 = 0;
      _DAT_026feba8 = 0;
      uRam00000000026febb0 = 0;
      _DAT_026febb8 = 0;
      uRam00000000026febc0 = 0;
      _DAT_026febc8 = 0;
      uRam00000000026febd0 = 0;
      _DAT_026febd8 = 0;
      uRam00000000026febe0 = 0;
      _DAT_026febe8 = 0;
      uRam00000000026febf0 = 0;
      DAT_026fec13 = 0;
      _DAT_026fec0b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fec0b != '\0') {
    return;
  }
  FUN_001e95f0();
  FUN_00e87760();
  FUN_0006daf0();
  FUN_00d50c00();
  FUN_002f9750();
  FUN_00d50c00();
  uVar2 = FUN_00e87770();
  FUN_00e87920(uVar2,0);
  FUN_002fb6f0();
  FUN_002fb6f0();
  return;
}



