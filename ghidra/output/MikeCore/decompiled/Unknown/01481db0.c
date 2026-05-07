// Function: FUN_01481db0
// Address: 01481db0
// Size: 4729 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01481db0(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  undefined *puVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined8 *puVar36;
  undefined4 uVar37;
  undefined *puVar38;
  longlong lVar39;
  uint uVar40;
  uint uVar41;
  undefined *puVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  undefined *puVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  longlong lVar50;
  uint uVar51;
  dword *pdVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  size_t sVar56;
  uint uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  uint uVar61;
  int iVar62;
  float fVar63;
  double dVar64;
  float fVar79;
  int iVar80;
  float fVar82;
  int iVar83;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar85;
  int iVar86;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar81;
  int iVar84;
  int iVar87;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar65;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar78 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  int iVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  longlong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  char local_a8;
  longlong local_a0;
  longlong local_90;
  int local_88;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  longlong lVar107;
  
  DAT_02802ed0 = FUN_00e83010();
  DAT_02802ed8 = FUN_00e83010();
  DAT_02802ee0 = FUN_00e83010();
  DAT_02802ee8 = FUN_00e83010();
  uVar58 = DAT_02802ed0;
  lVar47 = 0;
  iVar80 = _UNK_0238fcc4;
  iVar83 = _UNK_0238fcc8;
  iVar86 = _UNK_0238fccc;
  do {
    fVar79 = (float)iVar80 * _UNK_0240e0e4 * _UNK_0240e0f4;
    auVar89._8_4_ = (float)iVar83 * _UNK_0240e0e8 * _UNK_0240e0f8;
    auVar89._12_4_ = (float)iVar86 * _UNK_0240e0ec * _UNK_0240e0fc;
    auVar88._4_4_ = auVar89._8_4_;
    auVar88._0_4_ = fVar79;
    auVar88._8_4_ = auVar89._12_4_;
    auVar88._12_4_ = 0;
    local_58 = auVar88 << 0x20;
    local_48._0_8_ = _exp2f();
    local_48._8_8_ = extraout_XMM0_Qb;
    auVar113._0_8_ = _exp2f();
    auVar113._8_8_ = extraout_XMM0_Qb_00;
    auVar88 = insertps(local_48,auVar113,0x10);
    auVar10._4_8_ = extraout_XMM0_Qb_00;
    auVar10._0_4_ = fVar79;
    auVar89._0_8_ = auVar10._0_8_ << 0x20;
    auVar95._0_8_ = _exp2f(auVar89._8_8_);
    auVar95._8_8_ = extraout_XMM0_Qb_01;
    auVar88 = insertps(auVar88,auVar95,0x20);
    auVar108._0_8_ = _exp2f();
    iVar25 = _UNK_0239418c;
    iVar24 = _UNK_02394188;
    iVar101 = _UNK_02394184;
    auVar108._8_8_ = extraout_XMM0_Qb_02;
    auVar88 = insertps(auVar88,auVar108,0x30);
    auVar88 = divps(_DAT_0240e100,auVar88);
    fVar79 = auVar88._4_4_ + _UNK_02411e14;
    fVar82 = auVar88._8_4_ + _UNK_02411e18;
    fVar85 = auVar88._12_4_ + _UNK_02411e1c;
    piVar4 = (int *)(uVar58 + lVar47 * 4);
    *piVar4 = (int)(auVar88._0_4_ + _DAT_02411e10);
    piVar4[1] = (int)fVar79;
    piVar4[2] = (int)fVar82;
    piVar4[3] = (int)fVar85;
    uVar53 = DAT_02802ee8;
    uVar59 = DAT_02802ee0;
    uVar44 = DAT_02802ed8;
    auVar113 = _DAT_0240e140;
    iVar34 = _UNK_0240e13c;
    iVar33 = _UNK_0240e138;
    iVar32 = _UNK_0240e134;
    iVar31 = _DAT_0240e130;
    iVar30 = _UNK_0240e12c;
    iVar29 = _UNK_0240e128;
    iVar87 = _UNK_0240e124;
    iVar84 = _DAT_0240e120;
    iVar81 = _UNK_0240e11c;
    iVar62 = _UNK_0240e118;
    iVar28 = _UNK_0240e114;
    iVar27 = _DAT_0240e110;
    lVar48 = _UNK_0240dfb8;
    lVar45 = _DAT_0240dfb0;
    auVar88 = _DAT_023945e0;
    fVar82 = DAT_023941f0;
    fVar79 = DAT_02390124;
    lVar47 = lVar47 + 4;
    iVar80 = iVar80 + iVar101;
    iVar83 = iVar83 + iVar24;
    iVar86 = iVar86 + iVar25;
  } while (lVar47 != 0x78);
  uVar49 = DAT_02802ed8 + 0x1e0;
  uVar1 = DAT_02802ee0 + 0x1e0;
  uVar2 = DAT_02802ee8 + 0x1e0;
  uVar3 = uVar58 + 0x1e0;
  local_58[0] = uVar58 < uVar49;
  if (((((DAT_02802ed8 < uVar1 && DAT_02802ee0 < uVar49) ||
        (DAT_02802ed8 < uVar2 && DAT_02802ee8 < uVar49)) ||
       (DAT_02802ed8 < uVar3 && uVar58 < uVar49)) ||
      ((DAT_02802ee0 < uVar2 && DAT_02802ee8 < uVar1 || (DAT_02802ee0 < uVar3 && uVar58 < uVar1))))
     || (DAT_02802ee8 < uVar3 && uVar58 < uVar2)) {
    iVar80 = 0x78;
    uVar49 = 0;
    do {
      fVar85 = fVar79 / (float)(0x100 - *(int *)(uVar58 + uVar49 * 4));
      if (uVar49 < 0x3d) {
        fVar63 = ((float)(int)uVar49 / fVar82) * fVar85;
        fVar12 = fVar85;
        fVar85 = fVar63;
      }
      else {
        fVar63 = ((float)iVar80 / fVar82) * fVar85;
        fVar12 = fVar63;
      }
      *(float *)(uVar44 + uVar49 * 4) = fVar12;
      *(float *)(uVar59 + uVar49 * 4) = fVar63;
      *(float *)(uVar53 + uVar49 * 4) = fVar85;
      uVar49 = uVar49 + 1;
      iVar80 = iVar80 + -1;
    } while (uVar49 != 0x78);
  }
  else {
    lVar47 = 0;
    auVar20._4_4_ = _UNK_023b2d54;
    auVar20._0_4_ = _DAT_023b2d50;
    auVar20._8_4_ = _UNK_023b2d58;
    auVar20._12_4_ = _UNK_023b2d5c;
    auVar104 = _DAT_0240df90;
    auVar114 = _DAT_0240df80;
    iVar80 = _DAT_0238fcc0;
    iVar83 = _UNK_0238fcc4;
    iVar86 = _UNK_0238fcc8;
    iVar101 = _UNK_0238fccc;
    do {
      piVar4 = (int *)(uVar58 + lVar47 * 4);
      auVar112._0_4_ = (float)(iVar27 - *piVar4);
      auVar112._4_4_ = (float)(iVar28 - piVar4[1]);
      auVar112._8_4_ = (float)(iVar62 - piVar4[2]);
      auVar112._12_4_ = (float)(iVar81 - piVar4[3]);
      auVar108 = divps(auVar20,auVar112);
      auVar95 = auVar104 ^ auVar88;
      auVar89 = auVar114 ^ auVar88;
      auVar96._0_4_ = -(uint)(auVar95._4_4_ == iVar87 && iVar84 < auVar95._0_4_);
      auVar96._4_4_ = -(uint)(auVar95._12_4_ == iVar30 && iVar29 < auVar95._8_4_);
      auVar96._8_4_ = -(uint)(auVar89._4_4_ == iVar87 && iVar84 < auVar89._0_4_);
      auVar96._12_4_ = -(uint)(auVar89._12_4_ == iVar30 && iVar29 < auVar89._8_4_);
      auVar66._4_4_ = -(uint)(iVar30 < auVar95._12_4_);
      auVar66._0_4_ = -(uint)(iVar87 < auVar95._4_4_);
      auVar66._8_4_ = -(uint)(iVar87 < auVar89._4_4_);
      auVar66._12_4_ = -(uint)(iVar30 < auVar89._12_4_);
      auVar66 = auVar66 | auVar96;
      auVar90._0_4_ = (float)(iVar31 - iVar80);
      auVar90._4_4_ = (float)(iVar32 - iVar83);
      auVar90._8_4_ = (float)(iVar33 - iVar86);
      auVar90._12_4_ = (float)(iVar34 - iVar101);
      auVar89 = divps(auVar90,auVar113);
      auVar91._0_4_ = auVar89._0_4_ * auVar108._0_4_;
      auVar91._4_4_ = auVar89._4_4_ * auVar108._4_4_;
      auVar91._8_4_ = auVar89._8_4_ * auVar108._8_4_;
      auVar91._12_4_ = auVar89._12_4_ * auVar108._12_4_;
      auVar97._0_4_ = (float)iVar80;
      auVar97._4_4_ = (float)iVar83;
      auVar97._8_4_ = (float)iVar86;
      auVar97._12_4_ = (float)iVar101;
      auVar89 = divps(auVar97,auVar113);
      auVar98._0_8_ = CONCAT44(auVar89._4_4_ * auVar108._4_4_,auVar89._0_4_ * auVar108._0_4_);
      auVar98._8_4_ = auVar89._8_4_ * auVar108._8_4_;
      auVar98._12_4_ = auVar89._12_4_ * auVar108._12_4_;
      auVar95 = blendvps(auVar108,auVar91,auVar66);
      auVar111._8_4_ = auVar98._8_4_;
      auVar111._0_8_ = auVar98._0_8_;
      auVar111._12_4_ = auVar98._12_4_;
      auVar112 = blendvps(auVar111,auVar91,auVar66);
      auVar89 = blendvps(auVar98,auVar108,auVar66);
      *(undefined1 (*) [16])(uVar44 + lVar47 * 4) = auVar95;
      *(undefined1 (*) [16])(uVar59 + lVar47 * 4) = auVar112;
      *(undefined1 (*) [16])(uVar53 + lVar47 * 4) = auVar89;
      lVar47 = lVar47 + 4;
      lVar107 = auVar104._8_8_;
      auVar104._0_8_ = auVar104._0_8_ + lVar45;
      auVar104._8_8_ = lVar107 + lVar48;
      lVar107 = auVar114._8_8_;
      auVar114._0_8_ = auVar114._0_8_ + lVar45;
      auVar114._8_8_ = lVar107 + lVar48;
      iVar80 = iVar80 + _DAT_02394180;
      iVar83 = iVar83 + _UNK_02394184;
      iVar86 = iVar86 + _UNK_02394188;
      iVar101 = iVar101 + _UNK_0239418c;
    } while (lVar47 != 0x78);
  }
  DAT_02802ef8 = FUN_00e83010();
  DAT_02802ef0 = (undefined *)FUN_00e83010();
  DAT_02802f00 = (undefined4 *)FUN_00e83010();
  DAT_02802f08 = (undefined *)FUN_00e83010();
  DAT_02802f10 = (undefined8 *)FUN_00e83010();
  FUN_014832d0();
  lVar47 = CONCAT44(uStack_ac,local_b0);
  if ((local_a8 == '\0') && (lVar47 != 0)) {
    FUN_00d50b00();
  }
  puVar38 = DAT_02802ef0;
  fVar13 = _UNK_0240e16c;
  fVar8 = _UNK_0240e168;
  fVar26 = _UNK_0240e164;
  fVar12 = _DAT_0240e160;
  fVar63 = _UNK_0240e15c;
  fVar85 = _UNK_0240e158;
  fVar82 = _UNK_0240e154;
  fVar79 = _DAT_0240e150;
  iVar101 = _UNK_0239418c;
  iVar86 = _UNK_02394188;
  iVar83 = _UNK_02394184;
  iVar80 = _DAT_02394180;
  puVar9 = *(undefined **)(lVar47 + 0x10);
  if ((DAT_02802ef0 < &DAT_00001f90 + (longlong)puVar9) &&
     (puVar9 < &DAT_00001f90 + (longlong)DAT_02802ef0)) {
    lVar45 = 0;
    fVar79 = DAT_0240e2e0;
    fVar82 = DAT_023b5d84;
    fVar85 = DAT_02390124;
  }
  else {
    lVar45 = 0xc;
    auVar22._4_4_ = _UNK_023b2d54;
    auVar22._0_4_ = _DAT_023b2d50;
    auVar22._8_4_ = _UNK_023b2d58;
    auVar22._12_4_ = _UNK_023b2d5c;
    do {
      pfVar6 = (float *)(puVar9 + lVar45 * 4 + -0x30);
      pfVar7 = (float *)(puVar9 + lVar45 * 4 + -0x20);
      auVar67._4_4_ = -(uint)(pfVar6[1] < fVar82);
      auVar67._0_4_ = -(uint)(*pfVar6 < fVar79);
      auVar67._8_4_ = -(uint)(pfVar6[2] < fVar85);
      auVar67._12_4_ = -(uint)(pfVar6[3] < fVar63);
      auVar68._4_4_ = -(uint)(pfVar7[1] < fVar82);
      auVar68._0_4_ = -(uint)(*pfVar7 < fVar79);
      auVar105._0_4_ = *pfVar6 * fVar12;
      auVar105._4_4_ = pfVar6[1] * fVar26;
      auVar105._8_4_ = pfVar6[2] * fVar8;
      auVar105._12_4_ = pfVar6[3] * fVar13;
      auVar109._0_4_ = *pfVar7 * fVar12;
      auVar109._4_4_ = pfVar7[1] * fVar26;
      auVar109._8_4_ = pfVar7[2] * fVar8;
      auVar109._12_4_ = pfVar7[3] * fVar13;
      auVar113 = blendvps(auVar22,auVar105,auVar67);
      auVar68._8_4_ = -(uint)(pfVar7[2] < fVar85);
      auVar68._12_4_ = -(uint)(pfVar7[3] < fVar63);
      auVar88 = blendvps(auVar22,auVar109,auVar68);
      *(undefined1 (*) [16])(puVar38 + lVar45 * 4 + -0x30) = auVar113;
      *(undefined1 (*) [16])(puVar38 + lVar45 * 4 + -0x20) = auVar88;
      pfVar7 = (float *)(puVar9 + lVar45 * 4 + -0x10);
      pfVar6 = (float *)(puVar9 + lVar45 * 4);
      auVar69._4_4_ = -(uint)(pfVar7[1] < fVar82);
      auVar69._0_4_ = -(uint)(*pfVar7 < fVar79);
      auVar69._8_4_ = -(uint)(pfVar7[2] < fVar85);
      auVar69._12_4_ = -(uint)(pfVar7[3] < fVar63);
      auVar70._4_4_ = -(uint)(pfVar6[1] < fVar82);
      auVar70._0_4_ = -(uint)(*pfVar6 < fVar79);
      auVar106._0_4_ = *pfVar7 * fVar12;
      auVar106._4_4_ = pfVar7[1] * fVar26;
      auVar106._8_4_ = pfVar7[2] * fVar8;
      auVar106._12_4_ = pfVar7[3] * fVar13;
      auVar110._0_4_ = *pfVar6 * fVar12;
      auVar110._4_4_ = pfVar6[1] * fVar26;
      auVar110._8_4_ = pfVar6[2] * fVar8;
      auVar110._12_4_ = pfVar6[3] * fVar13;
      auVar113 = blendvps(auVar22,auVar106,auVar69);
      auVar70._8_4_ = -(uint)(pfVar6[2] < fVar85);
      auVar70._12_4_ = -(uint)(pfVar6[3] < fVar63);
      auVar88 = blendvps(auVar22,auVar110,auVar70);
      *(undefined1 (*) [16])(puVar38 + lVar45 * 4 + -0x10) = auVar113;
      *(undefined1 (*) [16])(puVar38 + lVar45 * 4) = auVar88;
      lVar45 = lVar45 + 0x10;
    } while (lVar45 != 0x7ec);
    lVar45 = 0x7e0;
    fVar79 = DAT_0240e2e0;
    fVar82 = DAT_023b5d84;
    fVar85 = DAT_02390124;
  }
  do {
    uVar61 = -(uint)(*(float *)(puVar9 + lVar45 * 4) < fVar82);
    *(uint *)(puVar38 + lVar45 * 4) =
         ~uVar61 & (uint)fVar85 | (uint)(*(float *)(puVar9 + lVar45 * 4) * fVar79) & uVar61;
    uVar61 = -(uint)(*(float *)(puVar9 + lVar45 * 4 + 4) < fVar82);
    *(uint *)(puVar38 + lVar45 * 4 + 4) =
         ~uVar61 & (uint)fVar85 | (uint)(*(float *)(puVar9 + lVar45 * 4 + 4) * fVar79) & uVar61;
    lVar48 = DAT_02802ef8;
    auVar113 = _DAT_0240e180;
    auVar88 = _DAT_0240e170;
    iVar28 = _UNK_023de2bc;
    iVar27 = _UNK_023de2b8;
    iVar25 = _UNK_023de2b4;
    iVar24 = _DAT_023de2b0;
    fVar8 = _UNK_023b2d5c;
    fVar26 = _UNK_023b2d58;
    fVar12 = _UNK_023b2d54;
    fVar63 = _DAT_023b2d50;
    lVar45 = lVar45 + 2;
  } while (lVar45 != 0x7e4);
  lVar45 = 4;
  fVar79 = DAT_0240e180._12_4_;
  iVar62 = _DAT_0238fcc0;
  iVar81 = _UNK_0238fcc4;
  iVar84 = _UNK_0238fcc8;
  iVar87 = _UNK_0238fccc;
  while( true ) {
    auVar102._0_4_ = (float)iVar62;
    auVar102._4_4_ = (float)iVar81;
    auVar102._8_4_ = (float)iVar84;
    auVar102._12_4_ = (float)iVar87;
    auVar89 = divps(auVar102,auVar88);
    pfVar6 = (float *)(lVar48 + -0x10 + lVar45 * 4);
    *pfVar6 = auVar89._0_4_ * auVar113._0_4_ + fVar63;
    pfVar6[1] = auVar89._4_4_ * auVar113._4_4_ + fVar12;
    pfVar6[2] = auVar89._8_4_ * auVar113._8_4_ + fVar26;
    pfVar6[3] = auVar89._12_4_ * fVar79 + fVar8;
    if (lVar45 == 0x7e4) break;
    auVar103._0_4_ = (float)(iVar62 + iVar80);
    auVar103._4_4_ = (float)(iVar81 + iVar83);
    auVar103._8_4_ = (float)(iVar84 + iVar86);
    auVar103._12_4_ = (float)(iVar87 + iVar101);
    auVar89 = divps(auVar103,auVar88);
    pfVar6 = (float *)(lVar48 + lVar45 * 4);
    *pfVar6 = auVar89._0_4_ * auVar113._0_4_ + fVar63;
    pfVar6[1] = auVar89._4_4_ * auVar113._4_4_ + fVar12;
    pfVar6[2] = auVar89._8_4_ * auVar113._8_4_ + fVar26;
    pfVar6[3] = auVar89._12_4_ * fVar79 + fVar8;
    iVar62 = iVar62 + iVar24;
    iVar81 = iVar81 + iVar25;
    iVar84 = iVar84 + iVar27;
    iVar87 = iVar87 + iVar28;
    lVar45 = lVar45 + 8;
  }
  *DAT_02802f00 = 0;
  lVar45 = 1;
  do {
    auVar71._0_8_ = _logf((float)(int)lVar45);
    auVar71._8_8_ = extraout_XMM0_Qb_03;
    auVar72._4_12_ = auVar71._4_12_;
    auVar72._0_4_ = (float)auVar71._0_8_ * DAT_02394208 * DAT_02391094;
    uVar37 = FUN_00e7d780(auVar72._0_8_);
    DAT_02802f00[lVar45] = uVar37;
    puVar36 = DAT_02802f10;
    uVar65 = _UNK_0240e198;
    lVar45 = lVar45 + 1;
  } while (lVar45 != 0x7e4);
  *DAT_02802f10 = _DAT_0240e190;
  puVar36[1] = uVar65;
  uVar65 = _UNK_0240e1a8;
  puVar36[2] = _DAT_0240e1a0;
  puVar36[3] = uVar65;
  *(undefined4 *)(puVar36 + 4) = 0x3df67510;
  uVar61 = FUN_00e7d780();
  puVar38 = (undefined *)FUN_00e83010();
  puVar9 = DAT_02802f08;
  if ((DAT_02802f08 < &DAT_00001f90 + (longlong)puVar38) &&
     (puVar38 < &DAT_00001f90 + (longlong)DAT_02802f08)) {
    lVar45 = 0;
  }
  else {
    lVar45 = 0x1c;
    do {
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x70) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x70) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x60) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x60) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x70) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x70) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x60) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x60) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x50) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x50) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x40) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x40) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x50) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x50) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x40) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x40) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x30) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x30) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x20) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x20) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x30) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x30) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x20) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x20) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4 + -0x10) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4 + -0x10) + 8) = 0;
      *(undefined8 *)(puVar9 + lVar45 * 4) = 0;
      *(undefined8 *)((longlong)(puVar9 + lVar45 * 4) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4 + -0x10) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4 + -0x10) + 8) = 0;
      *(undefined8 *)(puVar38 + lVar45 * 4) = 0;
      *(undefined8 *)((longlong)(puVar38 + lVar45 * 4) + 8) = 0;
      lVar45 = lVar45 + 0x20;
    } while (lVar45 != 0x7fc);
    lVar45 = 0x7e0;
  }
  do {
    *(undefined4 *)(puVar9 + lVar45 * 4) = 0;
    *(undefined4 *)(puVar38 + lVar45 * 4) = 0;
    *(undefined4 *)(puVar9 + lVar45 * 4 + 4) = 0;
    *(undefined4 *)(puVar38 + lVar45 * 4 + 4) = 0;
    *(undefined4 *)(puVar9 + lVar45 * 4 + 8) = 0;
    *(undefined4 *)(puVar38 + lVar45 * 4 + 8) = 0;
    *(undefined4 *)(puVar9 + lVar45 * 4 + 0xc) = 0;
    *(undefined4 *)(puVar38 + lVar45 * 4 + 0xc) = 0;
    puVar42 = DAT_02802f08;
    puVar35 = DAT_02802f00;
    lVar45 = lVar45 + 4;
  } while (lVar45 != 0x7e4);
  iVar80 = DAT_02802f00[1];
  if (iVar80 < 0x7e4) {
    lVar45 = 2;
    do {
      lVar48 = (longlong)iVar80;
      *(int *)(puVar42 + lVar48 * 4) = *(int *)(puVar42 + lVar48 * 4) + (int)lVar45 + -1;
      *(int *)(puVar38 + lVar48 * 4) = *(int *)(puVar38 + lVar48 * 4) + 1;
      iVar80 = puVar35[lVar45];
      lVar45 = lVar45 + 1;
    } while (iVar80 < 0x7e4);
  }
  lVar45 = 0;
  do {
    if ((0 < *(int *)(DAT_02802f08 + lVar45 * 4)) && (0 < *(int *)(puVar38 + lVar45 * 4))) {
      uVar37 = FUN_00e7d780((float)*(int *)(DAT_02802f08 + lVar45 * 4) /
                            (float)*(int *)(puVar38 + lVar45 * 4));
      *(undefined4 *)(DAT_02802f08 + lVar45 * 4) = uVar37;
    }
    puVar9 = DAT_02802f08;
    lVar45 = lVar45 + 1;
  } while (lVar45 != 0x7e4);
  puVar38 = DAT_02802f08 + 4;
  uVar57 = 0;
  do {
    lVar45 = (longlong)(int)uVar57;
    iVar80 = *(int *)(puVar9 + lVar45 * 4);
    do {
    } while (iVar80 < 1);
    if (0 < (int)uVar57) {
      uVar40 = 0;
      uVar51 = uVar57;
      do {
        uVar51 = uVar51 - 1;
        uVar41 = uVar40;
        if (0 < *(int *)(puVar9 + (ulonglong)uVar51 * 4)) break;
        uVar40 = uVar40 + 1;
        uVar41 = uVar57;
      } while (uVar51 != 0);
      if ((int)uVar61 <= (int)uVar41) {
        uVar41 = uVar61;
      }
      puVar42 = (undefined *)(ulonglong)uVar41;
      if ((0 < (int)uVar41) && (0 < (int)uVar57)) {
        uVar51 = uVar57 - 1;
        pdVar52 = &MACH_HEADER.magic;
        do {
          pdVar52 = (dword *)((longlong)pdVar52 + 1);
          *(int *)(puVar9 + (ulonglong)uVar51 * 4) = iVar80;
          if (puVar42 <= pdVar52) break;
          uVar51 = uVar51 - 1;
        } while (-1 < (int)uVar51);
      }
      if (0x7e2 < (int)uVar57) break;
    }
    uVar51 = 0x7e3 - uVar57;
    puVar42 = puVar38 + lVar45 * 4;
    lVar48 = 0;
    do {
      if (0 < *(int *)(puVar42 + lVar48 * 4)) {
        uVar51 = (uint)lVar48;
        uVar40 = uVar57 + uVar51;
        break;
      }
      lVar48 = lVar48 + 1;
      uVar40 = uVar57;
    } while (0x7e3 - lVar45 != lVar48);
    uVar41 = uVar51 >> 1;
    if ((int)uVar61 <= (int)(uVar51 >> 1)) {
      uVar41 = uVar61;
    }
    if ((0 < (int)uVar41) && ((int)uVar57 < 0x7e3)) {
      puVar42 = (undefined *)((longlong)&MACH_HEADER.magic + 1);
      do {
        *(int *)(puVar9 + (longlong)puVar42 * 4 + lVar45 * 4) = iVar80;
        if ((undefined *)(ulonglong)uVar41 <= puVar42) break;
        puVar46 = puVar42 + lVar45 + 1;
        puVar42 = puVar42 + 1;
      } while ((longlong)puVar46 < 0x7e4);
    }
    uVar57 = uVar40 + 1;
  } while ((int)(uVar40 + 1) < 0x7e4);
  FUN_00e83070();
  DAT_02802f18 = FUN_00e83010();
  DAT_02802f20 = FUN_00e83010();
  fVar79 = (*(float **)(lVar47 + 0x10))[0x7e3] * DAT_0240e2e4;
  iVar80 = (int)(fVar79 / **(float **)(lVar47 + 0x10));
  lVar45 = FUN_00e83010();
  sVar56 = (size_t)puVar38;
  if (-2 < iVar80) {
    uVar61 = iVar80 + 2;
    uVar58 = 1;
    if (1 < (int)uVar61) {
      uVar58 = (ulonglong)uVar61;
    }
    if ((uint)uVar58 < 4) {
      uVar59 = 0;
    }
    else {
      uVar59 = (ulonglong)((uint)uVar58 & 0x7ffffffc);
      auVar92._4_4_ = _UNK_0238fcc4;
      auVar92._0_4_ = _DAT_0238fcc0;
      auVar92._8_4_ = _UNK_0238fcc8;
      auVar92._12_4_ = _UNK_0238fccc;
      uVar44 = 0;
      do {
        auVar73._0_4_ = (float)auVar92._0_4_;
        iVar80 = auVar92._4_4_;
        auVar73._4_4_ = (float)iVar80;
        iVar83 = auVar92._8_4_;
        auVar73._8_4_ = (float)iVar83;
        iVar86 = auVar92._12_4_;
        auVar73._12_4_ = (float)iVar86;
        auVar21._4_4_ = _UNK_023b2d54;
        auVar21._0_4_ = _DAT_023b2d50;
        auVar21._8_4_ = _UNK_023b2d58;
        auVar21._12_4_ = _UNK_023b2d5c;
        local_58 = divps(auVar21,auVar73);
        local_48._0_8_ = _powf();
        local_48._8_8_ = extraout_XMM0_Qb_04;
        auVar74._0_8_ = _powf();
        auVar74._8_8_ = extraout_XMM0_Qb_05;
        auVar88 = insertps(local_48,auVar74,0x10);
        auVar11._4_8_ = extraout_XMM0_Qb_05;
        auVar11._0_4_ = local_58._4_4_;
        auVar75._0_8_ = auVar11._0_8_ << 0x20;
        auVar75._8_4_ = local_58._8_4_;
        auVar75._12_4_ = local_58._12_4_;
        auVar76._0_8_ = _powf(auVar75._8_8_);
        auVar76._8_8_ = extraout_XMM0_Qb_06;
        auVar88 = insertps(auVar88,auVar76,0x20);
        auVar77._0_8_ = _powf();
        sVar56 = (size_t)puVar38;
        auVar77._8_8_ = extraout_XMM0_Qb_07;
        auVar88 = insertps(auVar88,auVar77,0x30);
        auVar99._0_4_ = auVar88._0_4_ * _DAT_02411e10;
        auVar99._4_4_ = auVar88._4_4_ * _UNK_02411e14;
        auVar99._8_4_ = auVar88._8_4_ * _UNK_02411e18;
        auVar99._12_4_ = auVar88._12_4_ * _UNK_02411e1c;
        *(undefined1 (*) [16])(lVar45 + uVar44 * 4) = auVar99;
        uVar44 = uVar44 + 4;
        auVar92._0_4_ = auVar92._0_4_ + _DAT_02394180;
        auVar92._4_4_ = iVar80 + _UNK_02394184;
        auVar92._8_4_ = iVar83 + _UNK_02394188;
        auVar92._12_4_ = iVar86 + _UNK_0239418c;
      } while (uVar59 != uVar44);
      if (uVar59 == uVar58) goto LAB_01482868;
    }
    do {
      fVar82 = (float)_powf(DAT_02390124 / (float)(int)uVar59);
      sVar56 = (size_t)puVar38;
      *(float *)(lVar45 + uVar59 * 4) = fVar82 * DAT_0239011c;
      uVar59 = uVar59 + 1;
    } while (uVar58 != uVar59);
  }
LAB_01482868:
  lVar48 = DAT_02802f18;
  _memset_pattern16(puVar42,(void *)0xf90c40,sVar56);
  local_b8 = 0x1c;
  local_90 = 0;
  local_a0 = 0;
  do {
    lVar107 = lVar48 + local_a0 * 0x1f90;
    fVar82 = *(float *)(*(longlong *)(lVar47 + 0x10) + local_a0 * 4);
    if (fVar82 <= fVar79) {
      lVar55 = lVar48 + local_90 * 4;
      lVar60 = 1;
      lVar54 = 0;
      fVar85 = fVar82;
      do {
        fVar63 = (float)FUN_010ec770();
        dVar64 = (double)_pow(DAT_0238fee8 / (double)fVar63,DAT_023b1e88);
        fVar63 = DAT_023908e0;
        if (DAT_023908e0 <= (float)(dVar64 * DAT_024119d0)) {
          fVar63 = (float)(dVar64 * DAT_024119d0);
        }
        iVar80 = (int)(fVar63 * DAT_02391094 + fVar63 * DAT_02391094 + DAT_0239011c);
        if (iVar80 < 0x101) {
          lVar39 = FUN_00e84250();
          auVar23._8_8_ = 0;
          auVar23._0_8_ = local_58._8_8_;
          local_58 = auVar23 << 0x40;
        }
        else {
          lVar39 = FUN_00e83da0();
          local_58._0_8_ = lVar39;
        }
        fVar85 = (float)_logf(fVar85 * DAT_02394204);
        iVar83 = (int)((double)((fVar85 * DAT_02394208 + _DAT_0239420c) * DAT_02391094) +
                      DAT_023942d0);
        if (iVar83 < 0) {
          iVar83 = 0;
        }
        if (0x7e2 < iVar83) {
          iVar83 = 0x7e3;
        }
        uVar61 = iVar83 - iVar80 / 2;
        uVar58 = (ulonglong)uVar61;
        if ((int)uVar61 < 0) {
          uVar58 = 0;
        }
        uVar57 = iVar80 + uVar61;
        if (0x7e3 < (int)(iVar80 + uVar61)) {
          uVar57 = 0x7e4;
        }
        uVar44 = (ulonglong)uVar57;
        iVar80 = (int)uVar58;
        if (lVar60 == 1) {
          *(int *)(DAT_02802f20 + local_a0 * 4) = iVar80;
        }
        fVar26 = _UNK_023b2d5c;
        fVar12 = _UNK_023b2d58;
        fVar63 = _UNK_023b2d54;
        fVar85 = _DAT_023b2d50;
        if (iVar80 < (int)uVar57) {
          lVar43 = (longlong)(int)((int)uVar61 >> 0x1f & -uVar61);
          uVar59 = uVar44 - uVar58;
          if (7 < uVar59) {
            uVar53 = lVar48 + (local_a0 * 0x7e4 + uVar58) * 4;
            uVar49 = lVar48 + (local_a0 * 0x7e4 + uVar44) * 4;
            if ((lVar39 + ((lVar43 + uVar44) - uVar58) * 4 <= uVar53 ||
                 uVar49 <= (ulonglong)(lVar39 + lVar43 * 4)) &&
               ((ulonglong)(lVar45 + 8 + lVar54 * 4) <= uVar53 || uVar49 <= lVar45 + lVar54 * 4 + 4U
               )) {
              uVar49 = uVar59 & 0xfffffffffffffff8;
              fVar8 = *(float *)(lVar45 + lVar60 * 4);
              lVar50 = lVar55 + uVar58 * 4;
              lVar5 = lVar39 + lVar43 * 4;
              uVar53 = 0;
              do {
                pfVar7 = (float *)(lVar5 + uVar53 * 4);
                pfVar6 = (float *)(lVar5 + 0x10 + uVar53 * 4);
                fVar13 = *pfVar6;
                fVar14 = pfVar6[1];
                fVar15 = pfVar6[2];
                fVar16 = pfVar6[3];
                pfVar6 = (float *)(lVar50 + uVar53 * 4);
                auVar100._0_4_ = *pfVar6 * (fVar85 - *pfVar7 * fVar8);
                auVar100._4_4_ = pfVar6[1] * (fVar63 - pfVar7[1] * fVar8);
                auVar100._8_4_ = pfVar6[2] * (fVar12 - pfVar7[2] * fVar8);
                auVar100._12_4_ = pfVar6[3] * (fVar26 - pfVar7[3] * fVar8);
                pfVar6 = (float *)(lVar50 + 0x10 + uVar53 * 4);
                fVar17 = pfVar6[1];
                fVar18 = pfVar6[2];
                fVar19 = pfVar6[3];
                *(undefined1 (*) [16])(lVar50 + uVar53 * 4) = auVar100;
                pfVar7 = (float *)(lVar50 + 0x10 + uVar53 * 4);
                *pfVar7 = *pfVar6 * (fVar85 - fVar13 * fVar8);
                pfVar7[1] = fVar17 * (fVar63 - fVar14 * fVar8);
                pfVar7[2] = fVar18 * (fVar12 - fVar15 * fVar8);
                pfVar7[3] = fVar19 * (fVar26 - fVar16 * fVar8);
                uVar53 = uVar53 + 8;
              } while (uVar49 != uVar53);
              if (uVar59 == uVar49) goto LAB_01482d14;
              iVar80 = (int)(uVar49 + uVar58);
              lVar43 = uVar49 + lVar43;
              uVar58 = uVar49 + uVar58;
            }
          }
          uVar59 = uVar58;
          fVar85 = DAT_02390124;
          if ((uVar57 - iVar80 & 1) != 0) {
            lVar50 = lVar43 * 4;
            lVar43 = lVar43 + 1;
            *(float *)(lVar107 + uVar58 * 4) =
                 (DAT_02390124 - *(float *)(lVar39 + lVar50) * *(float *)(lVar45 + lVar60 * 4)) *
                 *(float *)(lVar107 + uVar58 * 4);
            uVar59 = uVar58 + 1;
            fVar85 = DAT_02390124;
          }
          DAT_02390124 = fVar85;
          if (~uVar58 + uVar44 != 0) {
            lVar39 = lVar39 + lVar43 * 4;
            lVar43 = lVar55 + uVar59 * 4;
            lVar50 = 0;
            do {
              *(float *)(lVar43 + lVar50 * 4) =
                   (fVar85 - *(float *)(lVar39 + lVar50 * 4) * *(float *)(lVar45 + lVar60 * 4)) *
                   *(float *)(lVar43 + lVar50 * 4);
              *(float *)(lVar43 + 4 + lVar50 * 4) =
                   (fVar85 - *(float *)(lVar39 + 4 + lVar50 * 4) * *(float *)(lVar45 + lVar60 * 4))
                   * *(float *)(lVar43 + 4 + lVar50 * 4);
              lVar50 = lVar50 + 2;
            } while (uVar44 - uVar59 != lVar50);
          }
        }
LAB_01482d14:
        if (local_58._0_8_ != 0) {
          FUN_00e83070();
        }
        lVar60 = lVar60 + 1;
        fVar85 = (float)(int)lVar60 * fVar82;
        lVar54 = lVar54 + 1;
      } while (fVar85 <= fVar79);
    }
    fVar82 = (float)_logf(fVar82 * _DAT_0240e2e8 * DAT_02394204);
    uVar61 = (uint)((double)((fVar82 * DAT_02394208 + _DAT_0239420c) * DAT_02391094) + DAT_023942d0)
    ;
    if ((int)uVar61 < 0) {
      uVar61 = 0;
    }
    uVar58 = (ulonglong)uVar61;
    if (0x7e2 < (int)uVar61) {
      uVar58 = 0x7e3;
    }
    uVar37 = *(undefined4 *)(lVar107 + uVar58 * 4);
    if ((uint)uVar58 < 0x7dd) {
      uVar44 = 0x7e4 - uVar58 & 0xfffffffffffffff8;
      auVar93._4_4_ = uVar37;
      auVar93._0_4_ = uVar37;
      auVar93._8_4_ = uVar37;
      auVar93._12_4_ = uVar37;
      uVar53 = (uVar44 - 8 >> 3) + 1;
      uVar59 = (ulonglong)((uint)uVar53 & 3);
      if (uVar44 - 8 < 0x18) {
        lVar55 = 0;
      }
      else {
        lVar54 = -(uVar53 & 0xfffffffffffffffc);
        lVar107 = lVar48 + (local_b8 + uVar58) * 4;
        lVar55 = 0;
        do {
          *(undefined1 (*) [16])(lVar107 + -0x70 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x60 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x50 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x40 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x30 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x20 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + -0x10 + lVar55 * 4) = auVar93;
          *(undefined1 (*) [16])(lVar107 + lVar55 * 4) = auVar93;
          lVar55 = lVar55 + 0x20;
          lVar54 = lVar54 + 4;
        } while (lVar54 != 0);
      }
      if (uVar59 != 0) {
        lVar107 = lVar48 + (lVar55 + local_90 + uVar58) * 4;
        lVar55 = 0;
        do {
          *(undefined1 (*) [16])(lVar107 + lVar55) = auVar93;
          *(undefined1 (*) [16])(lVar107 + 0x10 + lVar55) = auVar93;
          lVar55 = lVar55 + 0x20;
        } while (uVar59 << 5 != lVar55);
      }
      if (0x7e4 - uVar58 != uVar44) {
        uVar58 = uVar58 + uVar44;
        goto LAB_01482e0f;
      }
    }
    else {
LAB_01482e0f:
      do {
        *(undefined4 *)(lVar48 + local_90 * 4 + uVar58 * 4) = uVar37;
        uVar58 = uVar58 + 1;
      } while (uVar58 != 0x7e4);
    }
    local_a0 = local_a0 + 1;
    if (local_a0 == 0x7e4) {
      FUN_00e83070();
      DAT_02802f28 = 0x10;
      DAT_02802f2c = 0x3c5;
      DAT_02802f30 = FUN_00e83010();
      DAT_02802f38 = FUN_00e83010();
      DAT_02802f40 = FUN_00e83010();
      lVar45 = FUN_00e84250();
      if (0 < DAT_02802f2c) {
        lVar48 = 0;
        do {
          fVar82 = (float)(int)lVar48 / DAT_02391094;
          fVar79 = (float)_exp2f(fVar82 * DAT_023941f4);
          FUN_015c24c0((double)fVar79,DAT_02802f28);
          uVar65 = _logf((float)local_88);
          auVar94._8_4_ = (int)extraout_XMM0_Qb_08;
          auVar94._0_8_ = uVar65;
          auVar94._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_08 >> 0x20);
          fVar85 = (float)uVar65 * DAT_02394208;
          fVar79 = (float)_logf((float)local_b0);
          auVar78._0_4_ = fVar85 * DAT_02391094;
          auVar78._4_12_ = auVar94._4_12_;
          uVar37 = FUN_00e7d780(auVar78._0_8_);
          fVar79 = fVar79 * DAT_02394208;
          *(undefined4 *)(DAT_02802f38 + lVar48 * 4) = uVar37;
          uVar37 = FUN_00e7d780(fVar79 * DAT_02391094);
          lVar107 = DAT_02802f40;
          *(undefined4 *)(DAT_02802f40 + lVar48 * 4) = uVar37;
          iVar80 = FUN_00e7d780(lVar107,fVar82 - fVar79);
          fVar79 = 0.0;
          if (iVar80 < 0x14) {
            fVar79 = *(float *)(lVar45 + 0x50 + (longlong)iVar80 * 4);
          }
          fVar85 = (float)_powf(DAT_02390124 / ((float)(local_88 + local_b0) * DAT_0239011c));
          fVar82 = fVar85 * DAT_02391094;
          if (local_b0 != 1) {
            fVar82 = fVar85;
          }
          *(float *)(DAT_02802f30 + lVar48 * 4) = fVar79 * fVar82;
          lVar48 = lVar48 + 1;
        } while (lVar48 < DAT_02802f2c);
      }
      if (lVar47 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    local_90 = local_90 + 0x7e4;
    local_b8 = local_b8 + 0x7e4;
    lVar48 = DAT_02802f18;
  } while( true );
}


