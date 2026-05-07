// Reconstructed implementation of MUScaleRulerView
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScaleRulerView.h"

// ============================================================
// @01add020 — 25206 bytes
// str: ""%.1f""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ae0a4a) */
/* WARNING: Removing unreachable block (ram,0x01ae0a56) */
/* WARNING: Removing unreachable block (ram,0x01ae0bf2) */
/* WARNING: Removing unreachable block (ram,0x01ae0c02) */
/* WARNING: Removing unreachable block (ram,0x01ae0c0f) */
/* WARNING: Removing unreachable block (ram,0x01ae0c18) */
/* WARNING: Removing unreachable block (ram,0x01ae0dfe) */
/* WARNING: Removing unreachable block (ram,0x01ae0e03) */
/* WARNING: Removing unreachable block (ram,0x01ae0e0b) */
/* WARNING: Removing unreachable block (ram,0x01ae0e18) */
/* WARNING: Removing unreachable block (ram,0x01ae0e21) */
/* WARNING: Removing unreachable block (ram,0x01ae095f) */
/* WARNING: Removing unreachable block (ram,0x01ae0964) */
/* WARNING: Removing unreachable block (ram,0x01ae0ec4) */
/* WARNING: Removing unreachable block (ram,0x01ae0b50) */
/* WARNING: Removing unreachable block (ram,0x01ae0b5d) */
/* WARNING: Removing unreachable block (ram,0x01ae0b66) */
/* WARNING: Removing unreachable block (ram,0x01adff80) */
/* WARNING: Removing unreachable block (ram,0x01adff8c) */
/* WARNING: Removing unreachable block (ram,0x01ae0627) */
/* WARNING: Removing unreachable block (ram,0x01ae0633) */
/* WARNING: Removing unreachable block (ram,0x01ae012c) */
/* WARNING: Removing unreachable block (ram,0x01ae0309) */
/* WARNING: Removing unreachable block (ram,0x01ae0315) */
/* WARNING: Removing unreachable block (ram,0x01ae0b40) */
/* WARNING: Removing unreachable block (ram,0x01ae0dcb) */
/* WARNING: Removing unreachable block (ram,0x01ae0dd0) */
/* WARNING: Removing unreachable block (ram,0x01ae0dd8) */
/* WARNING: Removing unreachable block (ram,0x01ae0de5) */
/* WARNING: Removing unreachable block (ram,0x01ae0dee) */
/* WARNING: Removing unreachable block (ram,0x01ae0fc3) */
/* WARNING: Removing unreachable block (ram,0x01ae0fd3) */
/* WARNING: Removing unreachable block (ram,0x01ae0f89) */
/* WARNING: Removing unreachable block (ram,0x01ae0f99) */
/* WARNING: Removing unreachable block (ram,0x01ae0097) */
/* WARNING: Removing unreachable block (ram,0x01ae07d2) */
/* WARNING: Removing unreachable block (ram,0x01ae07de) */
/* WARNING: Removing unreachable block (ram,0x01ae0ba4) */
/* WARNING: Removing unreachable block (ram,0x01ae0bb4) */
/* WARNING: Removing unreachable block (ram,0x01ae052a) */
/* WARNING: Removing unreachable block (ram,0x01ae0f47) */
/* WARNING: Removing unreachable block (ram,0x01adf85a) */
/* WARNING: Removing unreachable block (ram,0x01adf866) */
/* WARNING: Removing unreachable block (ram,0x01add566) */
/* WARNING: Removing unreachable block (ram,0x01add572) */
/* WARNING: Removing unreachable block (ram,0x01add34b) */
/* WARNING: Removing unreachable block (ram,0x01add357) */
/* WARNING: Removing unreachable block (ram,0x01add3d8) */
/* WARNING: Removing unreachable block (ram,0x01add3e4) */
/* WARNING: Removing unreachable block (ram,0x01add617) */
/* WARNING: Removing unreachable block (ram,0x01add623) */
/* WARNING: Removing unreachable block (ram,0x01ae0277) */
/* WARNING: Removing unreachable block (ram,0x01ae0283) */
/* WARNING: Removing unreachable block (ram,0x01ae18f3) */
/* WARNING: Removing unreachable block (ram,0x01ae18f8) */
/* WARNING: Removing unreachable block (ram,0x01ae1375) */
/* WARNING: Removing unreachable block (ram,0x01ae05ac) */
/* WARNING: Removing unreachable block (ram,0x01ae05bc) */
/* WARNING: Removing unreachable block (ram,0x01ae1132) */
/* WARNING: Removing unreachable block (ram,0x01ae1137) */
/* WARNING: Removing unreachable block (ram,0x01ae3012) */
/* WARNING: Removing unreachable block (ram,0x01ae301e) */
/* WARNING: Removing unreachable block (ram,0x01ae13fe) */
/* WARNING: Removing unreachable block (ram,0x01ae1403) */
/* WARNING: Removing unreachable block (ram,0x01ae104b) */
/* WARNING: Removing unreachable block (ram,0x01ae1050) */
/* WARNING: Removing unreachable block (ram,0x01ae1aad) */
/* WARNING: Removing unreachable block (ram,0x01ae1ab9) */
/* WARNING: Removing unreachable block (ram,0x01ae083b) */
/* WARNING: Removing unreachable block (ram,0x01ae0847) */
/* WARNING: Removing unreachable block (ram,0x01ae0adf) */
/* WARNING: Removing unreachable block (ram,0x01ae0aeb) */
/* WARNING: Removing unreachable block (ram,0x01ae1272) */
/* WARNING: Removing unreachable block (ram,0x01ae1282) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01add020(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  void *pvVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong **pplVar19;
  undefined7 uVar24;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  pthread_key_t pVar25;
  pthread_key_t pVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar29;
  longlong **pplVar30;
  undefined1 auVar31 [8];
  bool bVar32;
  undefined4 uVar33;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 extraout_XMM0_Qb_15;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar58 [16];
  undefined8 extraout_XMM0_Qb_17;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 extraout_XMM0_Qb_21;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 extraout_XMM0_Qb_22;
  undefined1 auVar67 [16];
  undefined8 extraout_XMM0_Qb_23;
  undefined8 extraout_XMM0_Qb_24;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  longlong lVar75;
  float fVar123;
  undefined1 in_XMM1 [16];
  undefined1 auVar76 [16];
  float fVar122;
  float fVar124;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar74 [4];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  longlong **local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  undefined1 local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0;
  undefined8 *local_4b8;
  undefined1 local_4b0;
  float local_4a8;
  uint uStack_4a4;
  uint uStack_4a0;
  uint uStack_49c;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  longlong local_478;
  char local_470;
  longlong local_468;
  char local_460;
  longlong **local_458;
  char local_450;
  longlong *local_448;
  char local_440;
  longlong local_438;
  char local_430;
  longlong **local_428;
  char local_420;
  longlong local_418;
  char local_410;
  longlong *local_408;
  char local_400;
  longlong **local_3f8;
  char local_3f0;
  longlong **local_3e8;
  char local_3e0;
  undefined1 local_3d8 [16];
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined8 *local_3b0;
  char local_3a8;
  longlong **local_3a0;
  undefined1 local_398 [16];
  longlong local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  code *local_358;
  longlong **local_350;
  undefined1 local_348 [16];
  uint local_334;
  float local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  int local_31c;
  undefined4 local_318;
  float local_314;
  longlong *local_310;
  char local_308;
  longlong *local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong **local_2d0;
  char local_2c8;
  longlong **local_2c0;
  char local_2b8;
  longlong **local_2b0;
  char local_2a8;
  longlong *local_2a0;
  char local_298;
  undefined8 *local_290;
  char local_288;
  undefined8 *local_280;
  char local_278;
  longlong **local_270;
  char local_268;
  longlong **local_260;
  char local_258;
  undefined8 local_250;
  undefined1 local_248 [16];
  int local_22c;
  undefined1 local_228 [16];
  undefined8 local_210;
  undefined8 local_208;
  longlong **local_200;
  float local_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  longlong **local_1e0;
  float local_1d4;
  longlong **local_1d0;
  undefined1 local_1c8 [16];
  longlong **local_1b0;
  longlong **local_1a8;
  undefined4 local_1a0;
  char local_199;
  undefined1 local_198 [4];
  undefined1 auStack_194 [4];
  undefined8 uStack_190;
  longlong **local_180;
  longlong **local_178;
  longlong **local_170;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined1 local_158 [8];
  ulonglong uStack_150;
  int local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  longlong **local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong **local_b8;
  longlong **local_b0;
  uint local_a8;
  undefined4 local_a4;
  longlong **local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  uint local_6c;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_58;
  char local_50;
  float local_44;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_14;
  
  pplVar30 = local_128;
  FUN_01ad3cb0();
  if (local_120 == '\0') {
    if (local_128 == (longlong **)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_128 == (longlong **)0x0) {
    return;
  }
  pplVar19 = (longlong **)((longlong)unaff_RDI + 0x284);
  local_a0 = pplVar19;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 1) {
    auVar38._4_4_ = DAT_023dccec._4_4_;
    auVar38._0_4_ = (float)DAT_023dccec;
    auVar38._8_8_ = 0;
    local_248._4_4_ = DAT_023dccf4._4_4_;
    local_248._0_4_ = (float)DAT_023dccf4;
    local_248._8_8_ = 0;
LAB_01add14d:
    local_348 = auVar38;
    FUN_01e3f820();
    uVar12 = *(uint *)local_a0;
    if (uVar12 == 3) {
      FUN_01e3f820();
      uVar12 = *(uint *)local_a0;
    }
    if (1 < uVar12) {
      FUN_01e3f820();
      uVar12 = *(uint *)local_a0;
      if (uVar12 == 3) {
        FUN_01e3f820();
        uVar12 = *(uint *)local_a0;
      }
    }
    local_3d8 = ZEXT416((uint)(DAT_023942a8 + (float)local_348._0_4_));
    if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01add221;
    local_68 = (undefined1  [8])FUN_01e3f820();
    uStack_60 = extraout_XMM0_Qb_00;
    local_398 = auVar38;
    if (*(uint *)local_a0 == 3) {
      FUN_01e3f820();
      auVar76 = blendps(auVar38,_DAT_0241c700,0xd);
    }
    else {
      auVar76._4_4_ = DAT_023dccf4._4_4_;
      auVar76._0_4_ = (float)DAT_023dccf4;
      auVar76._8_8_ = 0;
    }
    auVar109._0_4_ = auVar76._0_4_ + local_68._0_4_;
    auVar109._4_4_ = auVar76._4_4_ + local_68._4_4_;
    auVar109._8_4_ = auVar76._8_4_ + local_68._8_4_;
    auVar109._12_4_ = auVar76._12_4_ + local_68._12_4_;
    auVar110 = blendps(auVar109,_local_68,2);
    auVar134 = blendps(local_398,_DAT_0241c710,0xd);
  }
  else {
    if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
      auVar38._4_4_ = DAT_023dccec._4_4_;
      auVar38._0_4_ = (float)DAT_023dccec;
      auVar38._8_8_ = 0;
      local_248._4_4_ = DAT_023dccf4._4_4_;
      local_248._0_4_ = (float)DAT_023dccf4;
      local_248._8_8_ = 0;
    }
    else {
      local_68 = (undefined1  [8])FUN_01e3f820();
      uStack_60 = extraout_XMM0_Qb;
      uVar12 = *(uint *)local_a0;
      local_248 = in_XMM1;
      if (uVar12 == 3) {
        FUN_01e3f820();
        auVar79 = blendps(in_XMM1,_DAT_0241c700,0xd);
        uVar12 = *(uint *)local_a0;
      }
      else {
        pplVar19 = (longlong **)&DAT_023dccec;
        auVar79._4_4_ = DAT_023dccf4._4_4_;
        auVar79._0_4_ = (float)DAT_023dccf4;
        auVar79._8_8_ = 0;
      }
      auVar121._0_4_ = auVar79._0_4_ + local_68._0_4_;
      auVar121._4_4_ = auVar79._4_4_ + local_68._4_4_;
      auVar121._8_4_ = auVar79._8_4_ + local_68._8_4_;
      auVar121._12_4_ = auVar79._12_4_ + local_68._12_4_;
      auVar38 = blendps(auVar121,_local_68,2);
      local_248 = blendps(local_248,_DAT_0241c710,0xd);
      if (uVar12 != 0) goto LAB_01add14d;
    }
    local_3d8 = ZEXT416((uint)(DAT_023942a8 + auVar38._0_4_));
    local_348 = auVar38;
LAB_01add221:
    auVar110._4_4_ = DAT_023dccec._4_4_;
    auVar110._0_4_ = (float)DAT_023dccec;
    auVar110._8_8_ = 0;
    auVar134._4_4_ = DAT_023dccf4._4_4_;
    auVar134._0_4_ = (float)DAT_023dccf4;
    auVar134._8_8_ = 0;
  }
  fVar73 = auVar134._0_4_;
  local_398._4_12_ = auVar134._4_12_;
  local_398._0_4_ = fVar73 * DAT_0239011c + auVar110._0_4_;
  if ((fVar73 == 0.0) && (!NAN(fVar73))) {
    local_398 = auVar110;
  }
  local_68 = (undefined1  [8])FUN_01e436c0();
  uStack_60 = extraout_XMM0_Qb_01;
  fVar73 = auVar110._0_4_ + SUB84(local_68,0);
  fVar122 = auVar110._4_4_ + (float)((ulonglong)local_68 >> 0x20);
  fVar123 = auVar110._8_4_ + (float)extraout_XMM0_Qb_01;
  fVar124 = auVar110._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  auVar34._4_4_ = fVar122;
  auVar34._0_4_ = fVar122;
  auVar34._8_4_ = fVar124;
  auVar34._12_4_ = fVar124;
  local_1c8._4_12_ = auVar34._4_12_;
  local_1c8._0_4_ = fVar122 + DAT_0241c3ec;
  local_318 = (**(code **)(*unaff_RDI + 0x920))();
  auVar35._4_4_ = local_68._4_4_;
  auVar35._0_4_ = local_68._4_4_;
  auVar35._8_4_ = uStack_60._4_4_;
  auVar35._12_4_ = uStack_60._4_4_;
  local_498._4_12_ = auVar35._4_12_;
  local_498._0_4_ = (float)local_68._4_4_ + DAT_0241f374;
  uVar33 = (**(code **)(*unaff_RDI + 0x920))();
  local_68._0_4_ = uVar33;
  local_98._0_8_ = FUN_01a1da00();
  local_98._8_8_ = extraout_XMM0_Qb_02;
  local_88._0_8_ = FUN_01a1da00();
  local_88._8_8_ = extraout_XMM0_Qb_03;
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_128;
  }
  FUN_0173b790();
  local_1a8 = local_128;
  if ((local_120 == '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b00();
  }
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_128;
  }
  FUN_0173b6f0();
  local_200 = local_128;
  if ((local_120 == '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b00();
  }
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  pplVar29 = local_128;
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_128;
    pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
  }
  local_140 = (*(code *)(*pplVar29)[0x75])();
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  pplVar29 = local_128;
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_128;
    pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
  }
  local_22c = (*(code *)(*pplVar29)[0x75])();
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_1a8;
  }
  local_199 = FUN_01770870();
  pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
  if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
    pplVar19 = local_1a8;
  }
  local_31c = FUN_01770ea0();
  FUN_0173ba80();
  local_350 = local_128;
  if ((local_120 == '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b00();
  }
  uVar18 = FUN_01ad3320();
  local_3a0 = local_128;
  if (local_120 == '\0') {
    if (local_128 != (longlong **)0x0) {
      FUN_00d50b00();
      goto LAB_01add5bb;
    }
LAB_01add62a:
    local_1a0 = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
    local_250 = 0;
    local_1e0 = (longlong **)0x0;
    uVar12 = *(uint *)local_a0;
    if (uVar12 == 1) goto LAB_01add686;
LAB_01add67e:
    if (uVar12 == 0) goto LAB_01add686;
    FUN_01e3f820();
    uVar12 = *(uint *)local_a0;
    if (uVar12 == 3) {
      FUN_01e3f820();
      uVar12 = *(uint *)local_a0;
    }
    _local_68 = ZEXT416((uint)(DAT_023b5d7c + (float)local_3d8._0_4_ + DAT_023b1698 + DAT_02390d00))
    ;
    if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01add6c7;
    FUN_01e3f820();
    local_168._4_4_ = fVar122;
    local_168._0_4_ = fVar73;
    uStack_160._0_4_ = fVar123;
    uStack_160._4_4_ = fVar124;
    if (*(uint *)local_a0 == 3) {
      FUN_01e3f820();
    }
    auVar142 = blendps(_local_168,_DAT_0241c710,0xd);
  }
  else {
    if (local_128 == (longlong **)0x0) goto LAB_01add62a;
LAB_01add5bb:
    auVar36._0_8_ = FUN_01d43b70();
    auVar36._8_8_ = extraout_XMM0_Qb_04;
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = (float)auVar36._0_8_ + DAT_02390d00;
    FUN_01d44d80(auVar37._0_8_);
    local_1e0 = local_128;
    if (local_128 == (longlong **)0x0) {
      local_1e0 = (longlong **)0x0;
      local_250 = 0;
      pplVar19 = local_128;
    }
    else {
      local_250 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
      pplVar19 = local_128;
      if (local_120 == '\0') {
        FUN_00d50b00();
      }
    }
    local_1a0 = 0;
    uVar12 = *(uint *)local_a0;
    if (uVar12 != 1) goto LAB_01add67e;
LAB_01add686:
    fVar73 = DAT_0239011c * (float)DAT_023dccf4;
    local_68._4_4_ = 0.0;
    if (((float)DAT_023dccf4 == 0.0) && (!NAN((float)DAT_023dccf4))) {
      fVar73 = (float)DAT_023dccf4;
      local_68._4_4_ = DAT_023dccf4._4_4_;
    }
    local_68._0_4_ = fVar73 + (float)local_3d8._0_4_ + DAT_023b1698 + DAT_02390d00;
    uStack_60 = 0;
LAB_01add6c7:
    auVar142._4_4_ = DAT_023dccf4._4_4_;
    auVar142._0_4_ = (float)DAT_023dccf4;
    auVar142._8_8_ = 0;
  }
  local_398._0_4_ = (float)local_398._0_4_ + DAT_023942a8;
  auVar77._0_4_ = (uint)((float)local_98._0_4_ * DAT_02390438) & _DAT_023945e0;
  auVar77._4_4_ = local_98._4_4_ & _UNK_023945e4;
  auVar77._8_4_ = local_98._8_4_ & _UNK_023945e8;
  auVar77._12_4_ = local_98._12_4_ & _UNK_023945ec;
  auVar38 = ZEXT416(DAT_02394dc8);
  auVar78._4_12_ = SUB1612(auVar77 | auVar38,4);
  auVar78._0_4_ = SUB164(auVar77 | auVar38,0) + (float)local_98._0_4_ * DAT_02390438;
  auVar79 = roundss(auVar78,auVar78,0xb);
  fVar73 = DAT_02392fd8;
  if (auVar79._0_4_ <= DAT_02392fd8) {
    fVar73 = auVar79._0_4_;
  }
  auVar79 = ZEXT416((uint)((float)((uint)(fVar73 * DAT_0239011c) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar73 * DAT_0239011c));
  auVar79 = roundss(auVar79,auVar79,0xb);
  local_314 = auVar79._0_4_;
  auVar80._0_4_ = _DAT_023945e0 & (uint)((float)local_88._0_4_ * DAT_02390438);
  auVar80._4_4_ = _UNK_023945e4 & local_88._4_4_;
  auVar80._8_4_ = _UNK_023945e8 & local_88._8_4_;
  auVar80._12_4_ = _UNK_023945ec & local_88._12_4_;
  auVar81._4_12_ = SUB1612(auVar80 | _DAT_023945f0,4);
  auVar81._0_4_ = SUB164(auVar80 | _DAT_023945f0,0) + (float)local_88._0_4_ * DAT_02390438;
  auVar79 = roundss(auVar81,auVar81,0xb);
  fVar73 = DAT_02392fd8;
  if (auVar79._0_4_ <= DAT_02392fd8) {
    fVar73 = auVar79._0_4_;
  }
  local_488 = ZEXT416((uint)fVar73);
  fVar122 = auVar142._0_4_;
  auVar82._4_12_ = auVar142._4_12_;
  auVar82._0_4_ = fVar122 * DAT_0239011c;
  if ((fVar122 == 0.0) && (!NAN(fVar122))) {
    auVar82 = auVar142;
  }
  local_4a8 = fVar73 * DAT_0239011c + DAT_023b1608;
  uStack_4a4 = 0;
  uStack_4a0 = 0;
  uStack_49c = 0;
  fVar122 = local_4a8 * DAT_0239011c;
  auVar140._0_4_ = (uint)((float)local_398._0_4_ - fVar122) & _DAT_023945e0;
  auVar140._4_4_ = local_398._4_4_ & _UNK_023945e4;
  auVar140._8_4_ = local_398._8_4_ & _UNK_023945e8;
  auVar140._12_4_ = local_398._12_4_ & _UNK_023945ec;
  auVar141._4_12_ = SUB1612(auVar140 | auVar38,4);
  auVar141._0_4_ = SUB164(auVar140 | auVar38,0) + ((float)local_398._0_4_ - fVar122);
  auVar125._0_12_ = ZEXT812(0);
  auVar125._12_4_ = 0;
  auVar79 = roundss(auVar125,auVar141,0xb);
  local_32c = auVar79._0_4_;
  fVar73 = ((auVar82._0_4_ + (float)local_398._0_4_ + DAT_023b1698 + DAT_02390d00) - fVar122) +
           DAT_02390d00;
  auVar126._0_4_ = (uint)fVar73 & _DAT_023945e0;
  auVar126._4_4_ = auVar82._4_4_ & _UNK_023945e4;
  auVar126._8_4_ = auVar82._8_4_ & _UNK_023945e8;
  auVar126._12_4_ = auVar82._12_4_ & _UNK_023945ec;
  auVar127._4_12_ = SUB1612(auVar126 | auVar38,4);
  auVar127._0_4_ = SUB164(auVar126 | auVar38,0) + fVar73;
  auVar83._0_12_ = ZEXT812(0);
  auVar83._12_4_ = 0;
  auVar79 = roundss(auVar83,auVar127,0xb);
  local_328 = auVar79._0_4_;
  local_358 = DAT_02680418;
  auVar128._0_4_ = (uint)((float)local_3d8._0_4_ - fVar122) & _DAT_023945e0;
  auVar128._4_4_ = local_3d8._4_4_ & _UNK_023945e4;
  auVar128._8_4_ = local_3d8._8_4_ & _UNK_023945e8;
  auVar128._12_4_ = local_3d8._12_4_ & _UNK_023945ec;
  auVar129._4_12_ = SUB1612(auVar128 | auVar38,4);
  auVar129._0_4_ = SUB164(auVar128 | auVar38,0) + ((float)local_3d8._0_4_ - fVar122);
  auVar84._0_12_ = ZEXT812(0);
  auVar84._12_4_ = 0;
  auVar79 = roundss(auVar84,auVar129,0xb);
  local_324 = auVar79._0_4_;
  fVar73 = (local_68._0_4_ - fVar122) + DAT_02390d00;
  auVar85._0_4_ = (uint)fVar73 & _DAT_023945e0;
  auVar85._4_4_ = local_68._4_4_ & _UNK_023945e4;
  auVar85._8_4_ = local_68._8_4_ & _UNK_023945e8;
  auVar85._12_4_ = local_68._12_4_ & _UNK_023945ec;
  auVar97._4_12_ = SUB1612(auVar85 | auVar38,4);
  auVar97._0_4_ = SUB164(auVar85 | auVar38,0) + fVar73;
  auVar38 = roundss(auVar38,auVar97,0xb);
  local_320 = auVar38._0_4_;
  local_88 = ZEXT416((uint)fVar122);
  local_168._0_4_ = DAT_023b1608 - fVar122;
  local_330 = 0.0 - local_314;
  pplVar19 = (longlong **)CONCAT71((int7)((ulonglong)pplVar19 >> 8),1);
  local_1d0 = (longlong **)0x0;
  local_208 = 0;
  local_1b0 = (longlong **)0x0;
  local_210 = 0;
  local_170 = (longlong **)0x0;
  local_138 = 0;
  local_178 = (longlong **)0x0;
  local_13c = 0;
  local_b8 = (longlong **)0x0;
  local_6c = 0;
  local_180 = (longlong **)0x0;
  local_134 = 0;
  do {
    uVar12 = *(uint *)local_a0;
    local_334 = (uint)pplVar19;
    if ((char)pplVar19 == '\0') {
      if ((uVar12 == 1) || (uVar12 == 0)) {
        local_98._4_4_ = DAT_023dccec._4_4_;
        local_98._0_4_ = (float)DAT_023dccec;
        auVar38 = ZEXT416((uint)((float)DAT_023dccf4 * DAT_0239011c + (float)DAT_023dccec));
        if (((float)DAT_023dccf4 == 0.0) && (!NAN((float)DAT_023dccf4))) {
          local_98._8_8_ = 0;
          auVar38 = local_98;
        }
LAB_01addbe0:
        local_98 = auVar38;
        local_228._4_4_ = DAT_023dccec._4_4_;
        local_228._0_4_ = (float)DAT_023dccec;
        auVar38 = ZEXT416((uint)((float)DAT_023dccf4 * DAT_0239011c + (float)DAT_023dccec));
        if (((float)DAT_023dccf4 == 0.0) && (!NAN((float)DAT_023dccf4))) {
          local_228._8_8_ = 0;
          auVar38 = local_228;
        }
LAB_01addc14:
        local_228 = auVar38;
        auVar42._4_4_ = DAT_023dccf4._4_4_;
        auVar42._0_4_ = (float)DAT_023dccf4;
        auVar42._8_8_ = 0;
      }
      else {
        local_98._0_8_ = FUN_01e3f820();
        local_98._8_8_ = extraout_XMM0_Qb_06;
        uVar12 = *(uint *)local_a0;
        if (uVar12 == 3) {
          FUN_01e3f820();
          auVar87 = blendps(auVar97,_DAT_0241c700,0xd);
          uVar12 = *(uint *)local_a0;
        }
        else {
          auVar87._4_4_ = DAT_023dccf4._4_4_;
          auVar87._0_4_ = (float)DAT_023dccf4;
          auVar87._8_8_ = 0;
        }
        local_98._0_4_ = local_98._0_4_ + auVar87._0_4_ + DAT_023b5d7c;
        auVar38 = local_98;
        if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01addbe0;
        local_228._0_8_ = FUN_01e3f820();
        local_228._8_8_ = extraout_XMM0_Qb_08;
        uVar12 = *(uint *)local_a0;
        if (uVar12 == 3) {
          FUN_01e3f820();
          auVar93 = blendps(auVar87,_DAT_0241c700,0xd);
          uVar12 = *(uint *)local_a0;
        }
        else {
          auVar93._4_4_ = DAT_023dccf4._4_4_;
          auVar93._0_4_ = (float)DAT_023dccf4;
          auVar93._8_8_ = 0;
        }
        local_228._0_4_ = local_228._0_4_ + auVar93._0_4_ + DAT_023b5d7c;
        auVar38 = local_228;
        if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01addc14;
        FUN_01e3f820();
        _local_68 = auVar93;
        if (*(uint *)local_a0 == 3) {
          FUN_01e3f820();
        }
        auVar42 = blendps(_local_68,_DAT_0241c710,0xd);
      }
      fVar73 = auVar42._0_4_;
      register0x00001204 = auVar42._4_12_;
      local_158._0_4_ = fVar73 * DAT_0239011c;
      if ((fVar73 == DAT_0239424c) && (!NAN(fVar73) && !NAN(DAT_0239424c))) {
        _local_158 = auVar42;
      }
      pplVar19 = (longlong **)FUN_00e8fc40();
      FUN_00d4ff40();
      *pplVar19 = (longlong *)&DAT_02680400;
      *(undefined4 *)((longlong)pplVar19 + 0xc) = 0;
      pplVar19[6] = (longlong *)0x0;
      pplVar19[7] = (longlong *)0x0;
      *(undefined8 *)((longlong)pplVar19 + 0x39) = 0;
      *(undefined8 *)((longlong)pplVar19 + 0x41) = 0;
      uVar18 = (*local_358)();
      local_228._0_4_ = local_228._0_4_ + (float)local_158._0_4_;
      uVar24 = (undefined7)((ulonglong)uVar18 >> 8);
      if (local_1b0 == pplVar19) {
        if ((char)local_210 == '\0') {
          local_210 = CONCAT71(uVar24,1);
          uVar33 = local_32c;
        }
        else {
          FUN_00d50b20();
          uVar33 = local_32c;
        }
        local_32c = uVar33;
        if (local_1b0 != (longlong **)0x0) {
          local_68 = (undefined1  [8])local_1b0;
          goto LAB_01addcf3;
        }
        local_1b0 = (longlong **)0x0;
        local_198 = (undefined1  [4])local_328;
LAB_01adddd5:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_60;
        _local_68 = auVar2 << 0x40;
        fStack_1f4 = 0.0;
        local_1f8 = 0.0;
        local_158._0_4_ = uVar33;
      }
      else {
        bVar32 = (char)local_210 != '\0';
        local_210 = CONCAT71(uVar24,1);
        local_68 = (undefined1  [8])pplVar19;
        if ((bVar32) && (local_1b0 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
LAB_01addcf3:
        local_1b0 = (longlong **)local_68;
        FUN_00d50b00();
        local_1f8 = (float)local_210;
        fStack_1f4 = (float)((ulonglong)local_210 >> 0x20);
        local_198 = (undefined1  [4])local_328;
        local_158._0_4_ = local_32c;
      }
    }
    else {
      if ((uVar12 == 1) || (uVar12 == 0)) {
        local_98 = ZEXT416((uint)(float)DAT_023dccec);
LAB_01adda7b:
        local_228._4_4_ = DAT_023dccec._4_4_;
        local_228._0_4_ = (float)DAT_023dccec;
        local_228._8_8_ = 0;
LAB_01adda86:
        auVar43._4_4_ = DAT_023dccf4._4_4_;
        auVar43._0_4_ = (float)DAT_023dccf4;
        auVar43._8_8_ = 0;
      }
      else {
        local_98._0_8_ = FUN_01e3f820();
        local_98._8_8_ = extraout_XMM0_Qb_05;
        uVar12 = *(uint *)local_a0;
        if (uVar12 == 3) {
          FUN_01e3f820();
          auVar86 = blendps(auVar97,_DAT_0241c700,0xd);
          uVar12 = *(uint *)local_a0;
        }
        else {
          auVar86._4_4_ = DAT_023dccf4._4_4_;
          auVar86._0_4_ = (float)DAT_023dccf4;
          auVar86._8_8_ = 0;
        }
        local_98._0_4_ = local_98._0_4_ + auVar86._0_4_;
        if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01adda7b;
        local_68 = (undefined1  [8])FUN_01e3f820();
        uStack_60 = extraout_XMM0_Qb_07;
        uVar12 = *(uint *)local_a0;
        if (uVar12 == 3) {
          FUN_01e3f820();
          auVar92 = blendps(auVar86,_DAT_0241c700,0xd);
          uVar12 = *(uint *)local_a0;
        }
        else {
          auVar92._4_4_ = DAT_023dccf4._4_4_;
          auVar92._0_4_ = (float)DAT_023dccf4;
          auVar92._8_8_ = 0;
        }
        auVar94._0_4_ = auVar92._0_4_ + local_68._0_4_;
        auVar94._4_4_ = auVar92._4_4_ + local_68._4_4_;
        auVar94._8_4_ = auVar92._8_4_ + local_68._8_4_;
        auVar94._12_4_ = auVar92._12_4_ + local_68._12_4_;
        auVar38 = blendps(auVar94,_local_68,2);
        local_228 = auVar38;
        if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01adda86;
        FUN_01e3f820();
        _local_68 = auVar38;
        if (*(uint *)local_a0 == 3) {
          FUN_01e3f820();
        }
        auVar43 = blendps(_local_68,_DAT_0241c710,0xd);
      }
      fVar73 = auVar43._0_4_;
      register0x00001204 = auVar43._4_12_;
      local_158._0_4_ = fVar73 * DAT_0239011c;
      if ((fVar73 == DAT_0239424c) && (!NAN(fVar73) && !NAN(DAT_0239424c))) {
        _local_158 = auVar43;
      }
      pplVar19 = (longlong **)FUN_00e8fc40();
      FUN_00d4ff40();
      *pplVar19 = (longlong *)&DAT_02680400;
      *(undefined4 *)((longlong)pplVar19 + 0xc) = 0;
      pplVar19[6] = (longlong *)0x0;
      pplVar19[7] = (longlong *)0x0;
      *(undefined8 *)((longlong)pplVar19 + 0x39) = 0;
      *(undefined8 *)((longlong)pplVar19 + 0x41) = 0;
      uVar18 = (*local_358)();
      local_228._0_4_ = local_228._0_4_ + (float)local_158._0_4_;
      uVar24 = (undefined7)((ulonglong)uVar18 >> 8);
      if (local_1d0 == pplVar19) {
        if ((char)local_208 == '\0') {
          local_208 = CONCAT71(uVar24,1);
          uVar33 = local_324;
        }
        else {
          FUN_00d50b20();
          uVar33 = local_324;
        }
        local_324 = uVar33;
        if (local_1d0 == (longlong **)0x0) {
          local_1d0 = (longlong **)0x0;
          local_198 = (undefined1  [4])local_320;
          goto LAB_01adddd5;
        }
        local_68 = (undefined1  [8])local_1d0;
      }
      else {
        bVar32 = (char)local_208 != '\0';
        local_208 = CONCAT71(uVar24,1);
        local_68 = (undefined1  [8])pplVar19;
        if ((bVar32) && (local_1d0 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
      local_1d0 = (longlong **)local_68;
      FUN_00d50b00();
      local_1f8 = (float)local_208;
      fStack_1f4 = (float)((ulonglong)local_208 >> 0x20);
      local_198 = (undefined1  [4])local_320;
      local_158._0_4_ = local_324;
    }
    local_228._0_4_ = (float)local_228._0_4_ + DAT_023b1d84;
    auVar39._4_12_ = local_98._4_12_;
    auVar39._0_4_ = local_98._0_4_ + DAT_02394298;
    FUN_01d38ba0(auVar39._0_8_);
    if ((char)local_1a0 == '\0') {
      FUN_01d38ba0((float)local_158._0_4_ + DAT_02390d00);
      auVar88._0_4_ = (uint)(local_4a8 + (float)local_158._0_4_) & _DAT_023945e0;
      auVar88._4_4_ = uStack_4a4 & _UNK_023945e4;
      auVar88._8_4_ = uStack_4a0 & _UNK_023945e8;
      auVar88._12_4_ = uStack_49c & _UNK_023945ec;
      auVar89._4_12_ = SUB1612(auVar88 | _DAT_023945f0,4);
      auVar89._0_4_ = SUB164(auVar88 | _DAT_023945f0,0) + local_4a8 + (float)local_158._0_4_;
      auVar40._0_12_ = ZEXT812(0);
      auVar40._12_4_ = 0;
      auVar38 = roundss(auVar40,auVar89,0xb);
      local_44 = auVar38._0_4_;
      if ((float)local_158._0_4_ <= local_44) {
        local_1d4 = local_44 - (float)local_158._0_4_;
        fVar73 = (float)local_158._0_4_;
        do {
          local_98._0_4_ = fVar73;
          _sinf(((fVar73 - (float)local_158._0_4_) / local_1d4) * DAT_02410f88 + DAT_024204d0);
          FUN_01d38ba0();
          fVar73 = (float)local_98._0_4_ + DAT_02390124;
        } while (fVar73 <= local_44);
      }
      FUN_01d38ba0(local_44 + DAT_02390124);
      FUN_01d38ba0((float)local_198 + DAT_02390d00);
      auVar90._0_4_ = (uint)(local_4a8 + (float)local_198) & _DAT_023945e0;
      auVar90._4_4_ = uStack_4a4 & _UNK_023945e4;
      auVar90._8_4_ = uStack_4a0 & _UNK_023945e8;
      auVar90._12_4_ = uStack_49c & _UNK_023945ec;
      auVar91._4_12_ = SUB1612(auVar90 | _DAT_023945f0,4);
      auVar91._0_4_ = SUB164(auVar90 | _DAT_023945f0,0) + local_4a8 + (float)local_198;
      auVar41._0_12_ = ZEXT812(0);
      auVar41._12_4_ = 0;
      auVar38 = roundss(auVar41,auVar91,0xb);
      fVar73 = auVar38._0_4_;
      local_158._0_4_ = fVar73;
      if ((float)local_198 <= fVar73) {
        local_44 = fVar73 - (float)local_198;
        auVar74 = local_198;
        do {
          local_98._0_4_ = auVar74;
          _sinf((((float)auVar74 - (float)local_198) / local_44) * DAT_02410f88 + DAT_02394294);
          FUN_01d38ba0();
          auVar74 = (undefined1  [4])((float)local_98._0_4_ + DAT_02390124);
        } while ((float)auVar74 <= (float)local_158._0_4_);
      }
      FUN_01d38ba0((float)local_158._0_4_ + DAT_02390124);
    }
    uVar18 = CONCAT44(fStack_1f4,local_1f8);
    auVar97 = ZEXT416((uint)DAT_023b1608);
    FUN_01d38ba0();
    auVar38 = _local_68;
    if ((local_334 & 1) == 0) {
      FUN_01d38ce0();
      pplVar19 = local_180;
      uVar24 = (undefined7)((ulonglong)uVar18 >> 8);
      if (local_180 == local_128) {
        if (((char)local_134 != '\0') || (local_180 == (longlong **)0x0)) {
          uVar27 = (ulonglong)local_134;
          goto joined_r0x01ade2bb;
        }
        uVar27 = CONCAT71(uVar24,1);
        if (local_120 == '\0') {
          local_134 = 0;
          FUN_00d50b00();
          goto LAB_01ade490;
        }
      }
      else {
        pplVar19 = local_128;
        if (local_120 == '\0') {
          if (local_128 != (longlong **)0x0) {
            FUN_00d50b00();
          }
          if (((char)local_134 != '\0') && (local_180 != (longlong **)0x0)) {
            local_180 = local_128;
            FUN_00d50b20();
          }
LAB_01ade490:
          uVar27 = CONCAT71(uVar24,1);
joined_r0x01ade2bb:
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar27 = CONCAT71(uVar24,1);
          if (((char)local_134 != '\0') && (local_180 != (longlong **)0x0)) {
            local_180 = local_128;
            FUN_00d50b20();
          }
        }
      }
      FUN_01d38ce0();
      pplVar29 = local_178;
      uVar24 = auVar38._1_7_;
      if (local_178 == local_128) {
        if (((char)local_13c != '\0') || (local_178 == (longlong **)0x0)) {
          uVar20 = (ulonglong)local_13c;
          goto joined_r0x01ade587;
        }
        uVar20 = CONCAT71(uVar24,1);
        if (local_120 == '\0') {
          local_13c = 0;
          FUN_00d50b00();
          goto LAB_01ade750;
        }
      }
      else if (local_120 == '\0') {
        if (local_128 != (longlong **)0x0) {
          FUN_00d50b00();
        }
        pplVar29 = local_128;
        if (((char)local_13c != '\0') && (local_178 != (longlong **)0x0)) {
          local_178 = local_128;
          FUN_00d50b20();
        }
LAB_01ade750:
        uVar20 = CONCAT71(uVar24,1);
joined_r0x01ade587:
        if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar20 = CONCAT71(uVar24,1);
        pplVar29 = local_128;
        if (((char)local_13c != '\0') && (local_178 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
      local_13c = (uint)uVar20;
      local_180 = pplVar19;
      local_134 = (uint)uVar27;
      if (pplVar19 == (longlong **)0x0) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_98._8_8_;
        local_98 = auVar5 << 0x40;
        pplVar19 = (longlong **)0x0;
      }
      else {
        uVar21 = uVar27 & 0xffffffff;
        uVar20 = uVar20 & 0xffffffff;
        if ((char)uVar27 != '\0') {
          local_198[0] = (char)uVar21;
          local_158 = (undefined1  [8])pplVar19;
          local_44 = (float)CONCAT31(local_44._1_3_,(char)uVar20);
          local_178 = pplVar29;
          uVar18 = FUN_00d50b00();
          uVar21 = CONCAT71((int7)((ulonglong)uVar18 >> 8),local_198[0]);
          local_13c = (uint)CONCAT71((int7)(uVar20 >> 8),local_44._0_1_);
          local_180 = (longlong **)local_158;
        }
        uVar27 = uVar21 & 0xffffffff;
        local_134 = (uint)uVar21;
        local_98._0_8_ = uVar21;
        uVar20 = (ulonglong)local_13c;
        pplVar19 = local_180;
      }
      if (pplVar29 == (longlong **)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_150;
        _local_158 = auVar6 << 0x40;
        pplVar29 = (longlong **)0x0;
        local_178 = (longlong **)0x0;
      }
      else {
        uVar21 = uVar27 & 0xffffffff;
        local_134 = (uint)uVar27;
        local_13c = (uint)uVar20;
        uVar27 = uVar20 & 0xffffffff;
        if ((char)uVar20 != '\0') {
          local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
          local_44 = (float)CONCAT31(local_44._1_3_,(char)uVar27);
          local_158 = (undefined1  [8])local_180;
          local_198[0] = (char)uVar21;
          local_178 = pplVar29;
          FUN_00d50b00();
          local_134 = (uint)CONCAT71((int7)(uVar21 >> 8),local_198[0]);
          uVar27 = CONCAT71((int7)(uVar27 >> 8),local_44._0_1_);
          local_180 = (longlong **)local_158;
        }
        local_13c = (uint)uVar27;
        local_158 = (undefined1  [8])(uVar27 & 0xffffffff);
        local_178 = pplVar29;
      }
    }
    else {
      FUN_01d38ce0();
      if (local_b8 == local_128) {
        pplVar19 = local_b8;
        uVar12 = local_6c;
        if (((char)local_6c != '\0') || (local_b8 == (longlong **)0x0)) goto joined_r0x01ade299;
        uVar12 = 1;
        if (local_120 == '\0') {
          local_6c = 0;
          FUN_00d50b00();
          goto LAB_01ade370;
        }
      }
      else {
        pplVar19 = local_128;
        if (local_120 == '\0') {
          if (local_128 != (longlong **)0x0) {
            FUN_00d50b00();
          }
          if (((char)local_6c != '\0') && (local_b8 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
LAB_01ade370:
          uVar12 = 1;
joined_r0x01ade299:
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar12 = 1;
          if (((char)local_6c != '\0') && (local_b8 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01d38ce0();
      pplVar29 = local_170;
      if (local_170 == local_128) {
        if (((char)local_138 != '\0') || (local_170 == (longlong **)0x0)) {
          uVar27 = (ulonglong)local_138;
          goto joined_r0x01ade463;
        }
        uVar27 = 1;
        if (local_120 == '\0') {
          local_138 = 0;
          FUN_00d50b00();
          goto LAB_01ade5b0;
        }
      }
      else if (local_120 == '\0') {
        if (local_128 != (longlong **)0x0) {
          FUN_00d50b00();
        }
        pplVar29 = local_128;
        if (((char)local_138 != '\0') && (local_170 != (longlong **)0x0)) {
          local_170 = local_128;
          FUN_00d50b20();
        }
LAB_01ade5b0:
        uVar27 = 1;
joined_r0x01ade463:
        if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar27 = 1;
        pplVar29 = local_128;
        if (((char)local_138 != '\0') && (local_170 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
      }
      local_138 = (uint)uVar27;
      local_b8 = pplVar19;
      local_6c = uVar12;
      if (pplVar19 == (longlong **)0x0) {
        uVar27 = (ulonglong)uVar12;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_98._8_8_;
        local_98 = auVar3 << 0x40;
        pplVar19 = (longlong **)0x0;
      }
      else {
        uVar20 = (ulonglong)uVar12;
        if ((char)uVar12 != '\0') {
          local_198[0] = (char)uVar12;
          local_158 = (undefined1  [8])pplVar19;
          local_44 = (float)CONCAT31(local_44._1_3_,(char)uVar27);
          local_170 = pplVar29;
          uVar18 = FUN_00d50b00();
          uVar20 = CONCAT71((int7)((ulonglong)uVar18 >> 8),local_198[0]);
          local_138 = (uint)CONCAT71((int7)(uVar27 >> 8),local_44._0_1_);
          local_b8 = (longlong **)local_158;
        }
        uVar27 = uVar20 & 0xffffffff;
        local_6c = (uint)uVar20;
        local_98._0_8_ = uVar20;
        pplVar19 = local_b8;
      }
      if (pplVar29 == (longlong **)0x0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uStack_150;
        _local_158 = auVar4 << 0x40;
        pplVar29 = (longlong **)0x0;
        local_170 = (longlong **)0x0;
      }
      else {
        local_6c = (uint)uVar27;
        uVar20 = (ulonglong)local_138;
        if ((char)local_138 != '\0') {
          local_44._1_3_ = (undefined3)((uint)local_44 >> 8);
          local_44 = (float)CONCAT31(local_44._1_3_,(char)local_138);
          local_158 = (undefined1  [8])local_b8;
          local_198[0] = (char)uVar27;
          local_170 = pplVar29;
          FUN_00d50b00();
          local_6c = (uint)CONCAT71((int7)(uVar27 >> 8),local_198[0]);
          uVar20 = CONCAT71((int7)(uVar20 >> 8),local_44._0_1_);
          local_b8 = (longlong **)local_158;
        }
        local_138 = (uint)uVar20;
        local_158 = (undefined1  [8])(uVar20 & 0xffffffff);
        local_170 = pplVar29;
      }
    }
    auVar31 = local_68;
    FUN_01d38ea0();
    uVar12 = *(uint *)(local_128 + 3);
    plVar28 = (longlong *)(ulonglong)uVar12;
    if (local_120 != '\0') {
      FUN_00d50b20();
    }
    if (0x36 < uVar12 + 0x1b) {
      iVar13 = (int)uVar12 / 0x1c;
      plVar28 = (longlong *)((longlong)iVar13 * 0x1c + -0x14);
      do {
        FUN_01d38ea0();
        plVar23 = local_128[2];
        if (local_120 != '\0') {
          FUN_00d50b20();
        }
        auVar97 = ZEXT416((uint)((0.0 - *(float *)((longlong)plVar23 + (longlong)plVar28)) +
                                 DAT_0239424c + DAT_02390d00));
        FUN_01d38ba0();
        FUN_01d38ea0();
        plVar23 = local_128[2];
        if (local_120 != '\0') {
          FUN_00d50b20();
        }
        *(float *)((longlong)plVar23 + (longlong)plVar28) =
             (0.0 - *(float *)((longlong)plVar23 + (longlong)plVar28)) + DAT_0239424c + DAT_02390d00
        ;
        plVar28 = (longlong *)((longlong)plVar28 + -0x1c);
        iVar13 = iVar13 + -1;
        auVar31 = local_68;
      } while (iVar13 != 0);
    }
    FUN_01d38b10();
    if ((local_98[0] != '\0') && (pplVar19 != (longlong **)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158[0] != '\0') && (pplVar29 != (longlong **)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f8._0_1_ != '\0') && (auVar31 != (undefined1  [8])0x0)) {
      FUN_00d50b20();
    }
    pplVar19 = (longlong **)0x0;
  } while ((local_334 & 1) != 0);
  pVar26 = (pthread_key_t)local_128;
  if (((ulonglong)*local_a0 & 0xfffffffe) == 2) {
    pvVar16 = _pthread_getspecific(0);
    if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
      pplVar19 = local_128;
    }
    FUN_0173b790();
    pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
    if (pvVar16 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar10 = FUN_01770870();
    if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
      FUN_00d50b20();
    }
    pVar25 = (pthread_key_t)pplVar19;
    plVar28 = unaff_RDI;
    if (cVar10 == '\0') {
      pvVar16 = _pthread_getspecific(pVar25);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = local_128;
      }
      FUN_0173b790();
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770ea0();
      if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = local_128;
      }
      FUN_0173b790();
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01770f00();
      if (local_120 != '\0') {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      pplVar29 = local_128;
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = local_128;
        pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
      }
      uVar33 = (*(code *)(*pplVar29)[0x74])();
      local_68._0_4_ = uVar33;
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      pplVar29 = local_128;
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = local_128;
        pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
      }
      uVar33 = (*(code *)(*pplVar29)[0x74])();
      local_98._0_4_ = uVar33;
      local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
      uStack_60 = extraout_XMM0_Qb_12;
      uVar33 = FUN_01a1da00();
      local_88._0_4_ = uVar33;
      local_98._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
      local_98._8_8_ = extraout_XMM0_Qb_13;
      fVar73 = (float)FUN_01a1da00();
      fVar122 = (float)local_68._0_4_ + (float)local_88._0_4_ * DAT_023908e0;
      auVar99._0_4_ = _DAT_023945e0 & (uint)fVar122;
      auVar99._4_4_ = _UNK_023945e4 & local_68._4_4_;
      auVar99._8_4_ = _UNK_023945e8 & (uint)uStack_60;
      auVar99._12_4_ = _UNK_023945ec & uStack_60._4_4_;
      auVar100._4_12_ = SUB1612(auVar99 | _DAT_023945f0,4);
      auVar100._0_4_ = SUB164(auVar99 | _DAT_023945f0,0) + fVar122;
      auVar130._0_12_ = ZEXT812(0);
      auVar130._12_4_ = 0;
      auVar79 = roundss(auVar130,auVar100,0xb);
      fVar73 = (float)local_98._0_4_ + fVar73 * DAT_0241b664;
      auVar48._0_4_ = _DAT_023945e0 & (uint)fVar73;
      auVar48._4_4_ = _UNK_023945e4 & local_98._4_4_;
      auVar48._8_4_ = _UNK_023945e8 & local_98._8_4_;
      auVar48._12_4_ = _UNK_023945ec & local_98._12_4_;
      auVar49._4_12_ = SUB1612(auVar48 | _DAT_023945f0,4);
      auVar49._0_4_ = SUB164(auVar48 | _DAT_023945f0,0) + fVar73;
      auVar101._0_12_ = ZEXT812(0);
      auVar101._12_4_ = 0;
      auVar38 = roundss(auVar101,auVar49,0xb);
      auVar131._4_12_ = auVar79._4_12_;
      auVar131._0_4_ = auVar79._0_4_ - auVar38._0_4_;
      auVar38 = insertps(local_348,auVar38,0x10);
      auVar79 = insertps(local_248,auVar131,0x10);
      auVar50._0_8_ = FUN_00d05530(auVar38._0_8_);
      auVar50._8_8_ = extraout_XMM0_Qb_14;
      auVar51._4_12_ = auVar50._4_12_;
      auVar51._0_4_ = (float)auVar50._0_8_ + DAT_02390124;
      auVar97._4_12_ = auVar79._4_12_;
      auVar97._0_4_ = auVar79._0_4_ + DAT_02390d00;
      FUN_01ada2c0(auVar51._0_8_);
    }
    else {
      pvVar16 = _pthread_getspecific(pVar25);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pVar25 = pVar26;
      }
      FUN_0173b6f0();
      pvVar16 = _pthread_getspecific(pVar25);
      if (pvVar16 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_01736840();
      if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
      local_1f8 = (float)(2 - (uVar12 & 0xff));
      pplVar19 = (longlong **)(ulonglong)(uint)local_1f8;
      local_198 = (undefined1  [4])(DAT_0239011c * (float)local_248._0_4_);
      local_1d4 = (float)local_348._0_4_ + DAT_0239011c * (float)local_248._0_4_;
      fVar73 = 0.0;
      do {
        if (fVar73 == 1.4013e-45) {
LAB_01adee8c:
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pplVar19 = local_128;
          }
          FUN_0173b6f0();
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar13 = FUN_01736c50();
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pplVar19 = local_128;
          }
          FUN_0173b6f0();
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_01736840();
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
          iVar13 = 0;
          if (cVar10 != '\0') goto LAB_01adee8c;
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pplVar19 = local_128;
        }
        FUN_0173b790();
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar14 = FUN_01770c70();
        if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        pplVar29 = local_128;
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pplVar19 = local_128;
          pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
        }
        iVar15 = (*(code *)(*pplVar29)[0x75])();
        iVar13 = iVar13 + iVar14;
        do {
          iVar13 = iVar13 - iVar14;
        } while (iVar15 <= iVar13);
        _local_158 = ZEXT416((uint)local_1d4);
        local_44 = fVar73;
        if (fVar73 != 1.4013e-45) {
          _local_158 = local_348;
        }
        while( true ) {
          do {
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = local_128;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = local_128;
              pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_98._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = local_128;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = local_128;
              pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_88._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = local_128;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = local_128;
              pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_68._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = local_128;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = local_128;
              pplVar29 = (longlong **)local_128[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_168._0_4_ = uVar33;
            local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
            uStack_60 = extraout_XMM0_Qb_09;
            fVar73 = (float)(**(code **)(*unaff_RDI + 0x918))();
            local_68._0_4_ = (local_68._0_4_ + fVar73) * DAT_0239011c;
            local_98._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
            local_98._8_8_ = extraout_XMM0_Qb_10;
            fVar73 = (float)(**(code **)(*unaff_RDI + 0x918))();
            auVar95._0_4_ = local_68._0_4_ & _DAT_023945e0;
            auVar95._4_4_ = local_68._4_4_ & _UNK_023945e4;
            auVar95._8_4_ = (uint)uStack_60 & _UNK_023945e8;
            auVar95._12_4_ = uStack_60._4_4_ & _UNK_023945ec;
            auVar96._4_12_ = SUB1612(auVar95 | _DAT_023945f0,4);
            auVar96._0_4_ = SUB164(auVar95 | _DAT_023945f0,0) + (float)local_68._0_4_;
            _local_68 = roundss(auVar96,auVar96,0xb);
            fVar73 = (local_98._0_4_ + fVar73) * DAT_0239011c;
          } while ((float)local_1c8._0_4_ < local_68._0_4_);
          auVar44._0_4_ = (uint)fVar73 & _DAT_023945e0;
          auVar44._4_4_ = local_98._4_4_ & _UNK_023945e4;
          auVar44._8_4_ = local_98._8_4_ & _UNK_023945e8;
          auVar44._12_4_ = local_98._12_4_ & _UNK_023945ec;
          auVar45._4_12_ = SUB1612(auVar44 | _DAT_023945f0,4);
          auVar45._0_4_ = SUB164(auVar44 | _DAT_023945f0,0) + fVar73;
          auVar97 = roundss(ZEXT816(0),auVar45,0xb);
          local_98 = auVar97;
          if (auVar97._0_4_ < (float)local_498._0_4_) break;
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pplVar19 = local_128;
          }
          FUN_0173b6f0();
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_01736840();
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
          local_98._0_4_ = (float)local_98._0_4_ - (float)local_68._0_4_;
          auVar38 = local_248;
          if (cVar10 == '\0') {
            auVar38 = ZEXT416((uint)local_198);
          }
          auVar79 = insertps(auVar38,local_98._0_4_,0x10);
          auVar38 = insertps(_local_158,local_68._0_4_,0x10);
          auVar46._0_8_ = FUN_00d05530(auVar38._0_8_,auVar79._0_8_);
          auVar46._8_8_ = extraout_XMM0_Qb_11;
          auVar47._4_12_ = auVar46._4_12_;
          auVar47._0_4_ = (float)auVar46._0_8_ + DAT_02390124;
          auVar98._4_12_ = auVar79._4_12_;
          auVar98._0_4_ = auVar79._0_4_ + DAT_02390d00;
          FUN_01ada2c0(auVar47._0_8_,auVar98._0_8_);
        }
        fVar73 = (float)((int)local_44 + 1);
      } while (fVar73 != local_1f8);
    }
  }
  if (local_140 <= local_22c) {
    local_22c = local_22c + 1;
    do {
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      pplVar29 = pplVar30;
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = pplVar30;
        pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
      }
      (*(code *)(*pplVar29)[0x74])();
      local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
      uStack_60 = extraout_XMM0_Qb_15;
      pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = pplVar30;
      }
      FUN_01740240();
      uVar24 = (undefined7)((ulonglong)plVar28 >> 8);
      if (local_120 == '\0') {
        if (local_128 != (longlong **)0x0) {
          FUN_00d50b00();
          goto LAB_01adf870;
        }
LAB_01adf980:
        if (local_199 != '\0') {
          plVar28 = (longlong *)CONCAT71(uVar24,1);
          cVar10 = '\0';
          auVar7._12_4_ = 0;
          auVar7._0_12_ = stack0xfffffffffffffeac;
          _local_158 = auVar7 << 0x20;
          fVar73 = 0.0;
          goto LAB_01adf99f;
        }
      }
      else {
        if (local_128 == (longlong **)0x0) goto LAB_01adf980;
LAB_01adf870:
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
          pplVar19 = local_200;
        }
        FUN_01736e30();
        if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
          FUN_00d50b20();
        }
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar73 = (float)FUN_01739620();
        pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
        if (pvVar16 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar10 = FUN_01739960();
        local_158._0_4_ = (int)CONCAT71(uVar24,1);
        plVar28 = (longlong *)0x0;
LAB_01adf99f:
        if (((ulonglong)*local_a0 & 0xfffffffe) == 2) {
          local_44 = SUB84(plVar28,0);
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar13 = FUN_0174a9c0();
          if ((*(uint *)local_a0 == 1) || (*(uint *)local_a0 == 0)) {
            auVar53._4_4_ = DAT_023dccf4._4_4_;
            auVar53._0_4_ = (float)DAT_023dccf4;
            bVar32 = NAN((float)DAT_023dccf4) || NAN(DAT_0239424c);
            auVar53._8_8_ = 0;
            auVar52._0_4_ = (float)DAT_023dccf4 * DAT_0239011c;
            auVar52._4_4_ = DAT_023dccf4._4_4_;
            auVar52._8_8_ = 0;
            if ((float)DAT_023dccf4 == DAT_0239424c) goto LAB_01adfa90;
          }
          else {
            FUN_01e3f820();
            local_98 = auVar97;
            if (*(uint *)local_a0 == 3) {
              FUN_01e3f820();
            }
            auVar53 = blendps(local_98,_DAT_0241c710,0xd);
            fVar122 = auVar53._0_4_;
            bVar32 = NAN(fVar122) || NAN(DAT_0239424c);
            auVar52._4_12_ = auVar53._4_12_;
            auVar52._0_4_ = fVar122 * DAT_0239011c;
            if (fVar122 == DAT_0239424c) {
LAB_01adfa90:
              if (!bVar32) {
                auVar52 = auVar53;
              }
            }
          }
          local_498._4_12_ = auVar52._4_12_;
          local_498._0_4_ = auVar52._0_4_ + DAT_023b1698;
          (**(code **)(*unaff_RDI + 0x640))();
          plVar28 = local_128[0x21];
          local_1c8._0_8_ = local_128;
          if (plVar28 == (longlong *)0x0) {
            uVar27 = 0;
          }
          else {
            FUN_00d50b00();
            uVar27 = CONCAT71((int7)((ulonglong)local_128 >> 8),1);
          }
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
          local_1d4 = fVar73;
          if (local_140 == (int)unaff_RDI[0x32]) {
            (**(code **)(*unaff_RDI + 0x640))();
            plVar23 = local_128[0x24];
            if (plVar28 == plVar23) {
              local_88._0_8_ = uVar27 & 0xffffffff;
            }
            else {
              uVar18 = 0;
              if (plVar23 != (longlong *)0x0) {
                uVar18 = FUN_00d50b00();
              }
              auVar38 = local_88;
              local_88._1_7_ = (int7)((ulonglong)uVar18 >> 8);
              local_88[0] = 1;
              local_88._8_8_ = auVar38._8_8_;
              bVar32 = plVar28 != (longlong *)0x0;
              plVar28 = plVar23;
              if (bVar32) {
                FUN_00d50b20();
              }
            }
            if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_88._0_8_ = uVar27 & 0xffffffff;
          }
          auVar54._0_4_ = local_68._0_4_ & _DAT_023945e0;
          auVar54._4_4_ = local_68._4_4_ & _UNK_023945e4;
          auVar54._8_4_ = (uint)uStack_60 & _UNK_023945e8;
          auVar54._12_4_ = uStack_60._4_4_ & _UNK_023945ec;
          auVar55._4_12_ = SUB1612(auVar54 | _DAT_023945f0,4);
          auVar55._0_4_ = SUB164(auVar54 | _DAT_023945f0,0) + (float)local_68._0_4_;
          _local_68 = roundss(ZEXT816(0),auVar55,0xb);
          plVar23 = (longlong *)*unaff_RSI;
          (**(code **)(*plVar23 + 0x370))();
          local_50 = 0;
          local_b0 = local_b8;
          local_a8 = local_a8 & 0xffffff00;
          local_58 = plVar28;
          FUN_01ad9840(0,0,&local_b0);
          local_98._4_4_ = local_68._4_4_ ^ _UNK_023945e4;
          local_98._0_4_ = local_68._0_4_ ^ _DAT_023945e0;
          local_98._8_4_ = (uint)uStack_60 ^ _UNK_023945e8;
          local_98._12_4_ = uStack_60._4_4_ ^ _UNK_023945ec;
          (**(code **)(*plVar23 + 0x370))();
          plVar23 = (longlong *)*unaff_RSI;
          if (iVar13 == local_31c) {
            (**(code **)(*plVar23 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = 0;
            local_b0 = local_1d0;
            local_a8 = local_a8 & 0xffffff00;
            FUN_01ad9840(1,1,&local_b0);
            (**(code **)(*plVar23 + 0x370))();
            local_128 = (longlong **)*unaff_RSI;
            (**(code **)((longlong)*local_128 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = '\0';
            local_b0 = local_170;
            local_a8 = local_a8 & 0xffffff00;
            pVar25 = 1;
            FUN_01ad9840(1,1,&local_b0);
            auVar38 = local_98;
            (**(code **)((longlong)*local_128 + 0x370))();
          }
          else {
            (**(code **)(*plVar23 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = 0;
            local_b0 = local_1d0;
            local_a8 = local_a8 & 0xffffff00;
            FUN_01ad9840(0,1,&local_b0);
            (**(code **)(*plVar23 + 0x370))();
            local_128 = (longlong **)*unaff_RSI;
            (**(code **)((longlong)*local_128 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = '\0';
            local_b0 = local_170;
            local_a8 = local_a8 & 0xffffff00;
            pVar25 = 0;
            FUN_01ad9840(0,1,&local_b0);
            auVar38 = local_98;
            (**(code **)((longlong)*local_128 + 0x370))();
          }
          pvVar16 = _pthread_getspecific(pVar25);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pVar25 = pVar26;
          }
          FUN_0173b6f0();
          pvVar16 = _pthread_getspecific(pVar25);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar11 = FUN_01736840();
          if (cVar11 != '\0') {
            if ((*(uint *)local_a0 == 1) || (*(uint *)local_a0 == 0)) {
              auVar133._4_4_ = DAT_023dccec._4_4_;
              auVar133._0_4_ = (float)DAT_023dccec;
              auVar133._8_8_ = 0;
LAB_01adffba:
              auVar57._4_4_ = DAT_023dccf4._4_4_;
              auVar57._0_4_ = (float)DAT_023dccf4;
              auVar56._0_4_ = (float)DAT_023dccf4 * DAT_0239011c;
              auVar56._4_4_ = DAT_023dccf4._4_4_;
              auVar56._8_8_ = 0;
              if (((float)DAT_023dccf4 == DAT_0239424c) &&
                 (!NAN((float)DAT_023dccf4) && !NAN(DAT_0239424c))) {
                auVar57._8_8_ = 0;
                auVar56 = auVar57;
              }
              auVar132._0_4_ = auVar133._0_4_ + auVar56._0_4_;
              auVar132._4_4_ = auVar133._4_4_ + auVar56._4_4_;
              auVar132._8_4_ = auVar133._8_4_ + auVar56._8_4_;
              auVar132._12_4_ = auVar133._12_4_ + auVar56._12_4_;
              auVar38 = insertps(auVar132,local_68._0_4_,0x10);
              auStack_194 = (undefined1  [4])(auVar38._4_4_ + _UNK_0241c754);
              local_198 = (undefined1  [4])(auVar38._0_4_ + _DAT_0241c750);
              uStack_190._0_4_ = auVar38._8_4_ + _UNK_0241c758;
              uStack_190._4_4_ = auVar38._12_4_ + _UNK_0241c75c;
LAB_01adfff0:
              auVar108._4_4_ = DAT_023dccec._4_4_;
              auVar108._0_4_ = (float)DAT_023dccec;
              auVar108._8_8_ = 0;
              auVar61._4_4_ = DAT_023dccf4._4_4_;
              auVar61._0_4_ = (float)DAT_023dccf4;
              auVar61._8_8_ = 0;
            }
            else {
              _local_198 = FUN_01e3f820();
              uStack_190 = extraout_XMM0_Qb_16;
              uVar12 = *(uint *)local_a0;
              if (uVar12 == 3) {
                FUN_01e3f820();
                auVar102 = blendps(auVar38,_DAT_0241c700,0xd);
                uVar12 = *(uint *)local_a0;
              }
              else {
                auVar102._4_4_ = DAT_023dccf4._4_4_;
                auVar102._0_4_ = (float)DAT_023dccf4;
                auVar102._8_8_ = 0;
              }
              auVar103._0_4_ = auVar102._0_4_ + local_198;
              auVar103._4_4_ = auVar102._4_4_ + local_198._4_4_;
              auVar103._8_4_ = auVar102._8_4_ + local_198._8_4_;
              auVar103._12_4_ = auVar102._12_4_ + local_198._12_4_;
              auVar133 = blendps(_local_198,auVar103,0xd);
              if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01adffba;
              _local_168 = auVar103;
              FUN_01e3f820();
              uVar12 = *(uint *)local_a0;
              if (uVar12 == 3) {
                FUN_01e3f820();
                uVar12 = *(uint *)local_a0;
              }
              auVar58._4_12_ = local_168._4_12_;
              auVar58._0_4_ = local_168._0_4_ + DAT_023b5d7c;
              auVar38 = insertps(auVar58,local_68._0_4_,0x10);
              auStack_194 = (undefined1  [4])(auVar38._4_4_ + _UNK_0241c754);
              local_198 = (undefined1  [4])(auVar38._0_4_ + _DAT_0241c750);
              uStack_190._0_4_ = auVar38._8_4_ + _UNK_0241c758;
              uStack_190._4_4_ = auVar38._12_4_ + _UNK_0241c75c;
              if ((uVar12 == 1) || (uVar12 == 0)) goto LAB_01adfff0;
              uVar18 = FUN_01e3f820();
              local_1f8 = (float)uVar18;
              fStack_1f4 = (float)((ulonglong)uVar18 >> 0x20);
              uStack_1f0 = extraout_XMM0_Qb_17;
              _local_168 = auVar103;
              if (*(uint *)local_a0 == 3) {
                FUN_01e3f820();
                auVar104 = blendps(auVar103,_DAT_0241c700,0xd);
              }
              else {
                auVar104._4_4_ = DAT_023dccf4._4_4_;
                auVar104._0_4_ = (float)DAT_023dccf4;
                auVar104._8_8_ = 0;
              }
              auVar1._4_4_ = fStack_1f4;
              auVar1._0_4_ = local_1f8;
              auVar1._8_8_ = uStack_1f0;
              auVar107._0_4_ = auVar104._0_4_ + local_1f8;
              auVar107._4_4_ = auVar104._4_4_ + fStack_1f4;
              auVar107._8_4_ = auVar104._8_4_ + (float)uStack_1f0;
              auVar107._12_4_ = auVar104._12_4_ + (float)((ulonglong)uStack_1f0 >> 0x20);
              auVar108 = blendps(auVar107,auVar1,2);
              auVar61 = blendps(_local_168,_DAT_0241c710,0xd);
            }
            fVar73 = auVar61._0_4_;
            register0x00001204 = auVar61._4_12_;
            local_168._0_4_ = fVar73 * DAT_0239011c + auVar108._0_4_;
            if ((fVar73 == DAT_0239424c) && (!NAN(fVar73) && !NAN(DAT_0239424c))) {
              _local_168 = auVar108;
            }
            local_168._0_4_ = local_168._0_4_ + DAT_02394298;
            if (local_140 == (int)unaff_RDI[0x32]) {
              cVar11 = FUN_01ad9100();
              if (cVar11 == '\0') {
                FUN_01cfbee0();
                local_2f8 = 0;
                if (local_128 != (longlong **)0x0) {
                  FUN_00d50b00();
                }
                local_2f8 = '\x01';
                local_300 = (longlong *)local_128;
                FUN_01d488d0();
                if ((local_2f8 != '\0') && (local_300 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                auVar106._4_12_ = local_168._4_12_;
                auVar106._0_4_ = (local_168._0_4_ - local_198) + DAT_02390d00;
                auVar38 = blendps(auVar106,_DAT_0241f3a0,0xe);
                auVar59._4_12_ = local_198._4_12_;
                auVar59._0_4_ = local_198 + DAT_02390124;
                (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar59._0_8_,auVar38._0_8_);
              }
              else {
                FUN_01cfc6a0();
                local_308 = 0;
                if (local_128 != (longlong **)0x0) {
                  FUN_00d50b00();
                }
                local_308 = '\x01';
                local_310 = (longlong *)local_128;
                FUN_01d488d0();
                if ((local_308 != '\0') && (local_310 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                auVar105._4_12_ = local_168._4_12_;
                auVar105._0_4_ = local_168._0_4_ - (float)local_198;
                blendps(auVar105,_DAT_0241f3a0,0xe);
                (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
              }
            }
            if (iVar13 == local_31c) {
              FUN_01ad93a0();
              auVar141._4_12_ = local_68._4_12_;
              auVar141._0_4_ = local_68._0_4_ + DAT_02390d34 + DAT_02390d00;
              auVar38 = ZEXT416(DAT_0241f36c);
              FUN_01ad93a0();
            }
            else {
              FUN_01ad93a0();
              auVar141._4_12_ = local_68._4_12_;
              auVar141._0_4_ = local_68._0_4_ + DAT_02390d34 + DAT_02390d00;
              auVar38 = ZEXT416(DAT_0241c6c8);
              FUN_01ad93a0();
            }
          }
          _auStack_194 = local_68._4_12_;
          local_198 = (undefined1  [4])(local_68._0_4_ - local_314);
          if ((char)local_1a0 == '\0') {
            uVar33 = FUN_01ae51a0();
            local_168._0_4_ = uVar33;
            (**(code **)(*unaff_RDI + 0x640))();
            FUN_01cc4940();
            if (local_128 != (longlong **)0x0) {
              FUN_00d50b00();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x640))();
            FUN_01cfc6a0();
            plVar23 = local_58;
            local_2e8 = 0;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_2e8 = '\x01';
            local_2f0 = (longlong)plVar23;
            FUN_01cc48f0();
            if ((local_2e8 != '\0') && (local_2f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x640))();
            local_468 = *unaff_RSI;
            local_460 = '\0';
            local_a8 = 1;
            local_b0 = (longlong **)&DAT_024d0b28;
            local_a4 = local_168._0_4_;
            FUN_00d8cb40();
            plVar23 = local_58;
            local_2d8 = 0;
            if (local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = '\0';
            }
            local_2d8 = '\x01';
            local_2e0 = (longlong)plVar23;
            auVar79 = insertps(local_3d8,local_198,0x10);
            auVar38 = insertps(local_498,local_488._0_4_,0x10);
            local_458 = local_3a0;
            local_450 = '\0';
            (**(code **)((longlong)*local_128 + 0x400))(auVar79._0_8_,0x11,&local_458,2);
            if ((local_450 != '\0') && (local_458 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2d8 != '\0') && (local_2e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_460 != '\0') && (local_468 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*unaff_RDI + 0x640))();
            local_448 = (longlong *)local_128;
            local_440 = '\0';
            FUN_01cc48f0();
            if ((local_440 != '\0') && (local_448 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_128 != (longlong **)0x0) {
              FUN_00d50b20();
            }
          }
          if ((*(uint *)local_a0 == 1) || (*(uint *)local_a0 == 0)) {
            auVar60._4_4_ = DAT_023dccf4._4_4_;
            auVar60._0_4_ = (float)DAT_023dccf4;
            auVar60._8_8_ = 0;
          }
          else {
            FUN_01e3f820();
            _local_168 = auVar38;
            if (*(uint *)local_a0 == 3) {
              FUN_01e3f820();
            }
            auVar60 = blendps(_local_168,_DAT_0241c710,0xd);
          }
          fVar73 = auVar60._0_4_;
          register0x00001204 = auVar60._4_12_;
          local_168._0_4_ = fVar73 * DAT_0239011c;
          if ((fVar73 == DAT_0239424c) && (!NAN(fVar73) && !NAN(DAT_0239424c))) {
            _local_168 = auVar60;
          }
          local_168._0_4_ = local_168._0_4_ + DAT_023b1698;
          if (plVar28 == (longlong *)0x0) {
LAB_01ae090b:
            cVar11 = SUB41(local_1d4,0);
            if (cVar10 != '\0') goto LAB_01ae091a;
LAB_01ae09fc:
            pplVar29 = local_128;
            if (cVar11 == '\0') {
              auVar141 = ZEXT816(0);
              uVar18 = FUN_01cfcdc0();
              auVar38 = local_88;
              if (local_128 != (longlong **)0x0) {
                local_88._1_7_ = (int7)((ulonglong)uVar18 >> 8);
                local_88[0] = 1;
                local_88._8_8_ = auVar38._8_8_;
                FUN_00d50b00();
              }
              if (local_140 == (int)unaff_RDI[0x32]) {
                cVar10 = FUN_01ad9100();
                if (cVar10 == '\0') {
                  FUN_01cfbee0();
                  cVar11 = local_88[0];
                  if ((local_88[0] == '\0') && (local_128 != (longlong **)0x0)) {
                    FUN_00d50b00();
                    cVar11 = '\x01';
                  }
                }
                else {
                  FUN_01cfc6a0();
                  cVar11 = local_88[0];
                  if ((local_88[0] == '\0') && (local_128 != (longlong **)0x0)) {
                    FUN_00d50b00();
                    cVar11 = '\x01';
                  }
                }
              }
              else {
LAB_01ae155b:
                pplVar29 = local_128;
                cVar11 = local_88[0];
              }
            }
            else {
              uVar18 = FUN_01cfbee0();
              auVar38 = local_88;
              if (local_128 != (longlong **)0x0) {
                local_88._1_7_ = (int7)((ulonglong)uVar18 >> 8);
                local_88[0] = 1;
                local_88._8_8_ = auVar38._8_8_;
                FUN_00d50b00();
              }
              if ((DAT_028b3f60 == (longlong *)0x0) || (DAT_028b3f69 == '\0')) {
                FUN_00e8cb50();
                if (DAT_028b3f60 == (longlong *)0x0) {
                  cVar10 = FUN_01ad9100();
                  if (cVar10 == '\0') {
                    (**(code **)(*unaff_RDI + 0x640))();
                    local_370 = 0;
                    lVar17 = *(longlong *)((longlong)local_58 + 0x108);
                    if (lVar17 != 0) {
                      FUN_00d50b00();
                    }
                    local_370 = '\x01';
                    local_378 = lVar17;
                    FUN_01cfc6a0();
                    pplVar19 = local_b0;
                    local_2b8 = 0;
                    if ((char)local_a8 == '\0') {
                      if (local_b0 != (longlong **)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_a8 = local_a8 & 0xffffff00;
                    }
                    local_2b8 = '\x01';
                    local_2c0 = pplVar19;
                    FUN_01cfd290();
                    pplVar19 = (longlong **)DAT_028b3f60;
                    if ((longlong **)DAT_028b3f60 != local_128) {
                      if (local_128 == (longlong **)0x0) {
                        pplVar19 = (longlong **)(longlong *)0x0;
                      }
                      else {
                        FUN_00d50b00();
                        pplVar19 = local_128;
                      }
                      bVar32 = DAT_028b3f60 != (longlong *)0x0;
                      DAT_028b3f60 = (longlong *)pplVar19;
                      if (bVar32) {
                        FUN_00d50b20();
                        pplVar19 = local_128;
                      }
                    }
                    if ((pplVar19 != (longlong **)0x0) && (DAT_028b3f68 == '\0')) {
                      DAT_028b3f68 = '\x01';
                      FUN_00e8cb90();
                    }
                    if ((local_2b8 != '\0') && (local_2c0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_a8 != '\0') && (local_b0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_370 != '\0') && (local_378 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    (**(code **)(*unaff_RDI + 0x640))();
                    local_380 = 0;
                    lVar17 = *(longlong *)((longlong)local_58 + 0x108);
                    if (lVar17 != 0) {
                      FUN_00d50b00();
                    }
                    local_380 = '\x01';
                    local_388 = lVar17;
                    FUN_01cfc6a0();
                    pplVar19 = local_b0;
                    local_2c8 = 0;
                    if ((char)local_a8 == '\0') {
                      if (local_b0 != (longlong **)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_a8 = local_a8 & 0xffffff00;
                    }
                    local_2c8 = '\x01';
                    local_2d0 = pplVar19;
                    FUN_01cfd290();
                    pplVar19 = (longlong **)DAT_028b3f60;
                    if ((longlong **)DAT_028b3f60 != local_128) {
                      if (local_128 == (longlong **)0x0) {
                        pplVar19 = (longlong **)(longlong *)0x0;
                      }
                      else {
                        FUN_00d50b00();
                        pplVar19 = local_128;
                      }
                      bVar32 = DAT_028b3f60 != (longlong *)0x0;
                      DAT_028b3f60 = (longlong *)pplVar19;
                      if (bVar32) {
                        FUN_00d50b20();
                        pplVar19 = local_128;
                      }
                    }
                    if ((pplVar19 != (longlong **)0x0) && (DAT_028b3f68 == '\0')) {
                      DAT_028b3f68 = '\x01';
                      FUN_00e8cb90();
                    }
                    if ((local_2c8 != '\0') && (local_2d0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_a8 != '\0') && (local_b0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_380 != '\0') && (local_388 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  DAT_028b3f69 = '\x01';
                  FUN_00e8cb70();
                }
                else {
                  DAT_028b3f69 = '\x01';
                  FUN_00e8cb70();
                }
              }
              if ((DAT_028b3f70 == (longlong *)0x0) || (DAT_028b3f79 == '\0')) {
                FUN_00e8cb50();
                if (DAT_028b3f70 == (longlong *)0x0) {
                  cVar10 = FUN_01ad9100();
                  if (cVar10 == '\0') {
                    (**(code **)(*unaff_RDI + 0x640))();
                    local_360 = 0;
                    lVar17 = *(longlong *)((longlong)local_58 + 0x120);
                    if (lVar17 != 0) {
                      FUN_00d50b00();
                    }
                    local_360 = '\x01';
                    local_368 = lVar17;
                    FUN_01cfbee0();
                    pplVar19 = local_b0;
                    local_2a8 = 0;
                    if ((char)local_a8 == '\0') {
                      if (local_b0 != (longlong **)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_a8 = local_a8 & 0xffffff00;
                    }
                    local_2a8 = '\x01';
                    local_2b0 = pplVar19;
                    FUN_01cfd290();
                    pplVar19 = (longlong **)DAT_028b3f70;
                    if ((longlong **)DAT_028b3f70 != local_128) {
                      if (local_128 == (longlong **)0x0) {
                        pplVar19 = (longlong **)(longlong *)0x0;
                      }
                      else {
                        FUN_00d50b00();
                        pplVar19 = local_128;
                      }
                      bVar32 = DAT_028b3f70 != (longlong *)0x0;
                      DAT_028b3f70 = (longlong *)pplVar19;
                      if (bVar32) {
                        FUN_00d50b20();
                        pplVar19 = local_128;
                      }
                    }
                    if ((pplVar19 != (longlong **)0x0) && (DAT_028b3f78 == '\0')) {
                      DAT_028b3f78 = '\x01';
                      FUN_00e8cb90();
                    }
                    if ((local_2a8 != '\0') && (local_2b0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if (((char)local_a8 != '\0') && (local_b0 != (longlong **)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_360 != '\0') && (local_368 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    (**(code **)(*unaff_RDI + 0x640))();
                    plVar23 = DAT_028b3f70;
                    plVar28 = local_128[0x24];
                    if (DAT_028b3f70 != plVar28) {
                      if (plVar28 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      DAT_028b3f70 = plVar28;
                      if (plVar23 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      plVar28 = local_128[0x24];
                    }
                    if ((plVar28 != (longlong *)0x0) && (DAT_028b3f78 == '\0')) {
                      DAT_028b3f78 = '\x01';
                      FUN_00e8cb90();
                    }
                  }
                  DAT_028b3f79 = '\x01';
                  FUN_00e8cb70();
                }
                else {
                  DAT_028b3f79 = '\x01';
                  FUN_00e8cb70();
                }
              }
              plVar28 = DAT_028b3f70;
              pplVar29 = (longlong **)DAT_028b3f60;
              if (local_140 == (int)unaff_RDI[0x32]) {
                if (local_128 == (longlong **)DAT_028b3f70) {
                  if ((local_88[0] != '\0') || (local_128 == (longlong **)0x0)) goto LAB_01ae155b;
                  FUN_00d50b00();
                  pplVar29 = local_128;
                  cVar11 = '\x01';
                }
                else {
                  if (DAT_028b3f70 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  pplVar29 = (longlong **)plVar28;
                  cVar11 = '\x01';
                  if ((local_88[0] != '\0') && (local_128 != (longlong **)0x0)) {
                    FUN_00d50b20();
                    cVar11 = '\x01';
                  }
                }
              }
              else if (local_128 == (longlong **)DAT_028b3f60) {
                if ((local_88[0] != '\0') || (local_128 == (longlong **)0x0)) goto LAB_01ae155b;
                FUN_00d50b00();
                pplVar29 = local_128;
                cVar11 = '\x01';
              }
              else {
                if (DAT_028b3f60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                cVar11 = '\x01';
                if ((local_88[0] != '\0') && (local_128 != (longlong **)0x0)) {
                  FUN_00d50b20();
                  cVar11 = '\x01';
                }
              }
            }
          }
          else {
            if (local_88[0] != '\0') {
              FUN_00d50b20();
              auVar8._8_8_ = 0;
              auVar8._0_8_ = local_88._8_8_;
              local_88 = auVar8 << 0x40;
              goto LAB_01ae090b;
            }
            auVar9._8_8_ = 0;
            auVar9._0_8_ = local_88._8_8_;
            local_88 = auVar9 << 0x40;
            cVar11 = SUB41(local_1d4,0);
            if (cVar10 == '\0') goto LAB_01ae09fc;
LAB_01ae091a:
            (**(code **)(*unaff_RDI + 0x640))();
            pplVar29 = (longlong **)local_128[0x21];
            if (pplVar29 != (longlong **)0x0) {
              uVar18 = FUN_00d50b00();
              auVar38 = local_88;
              local_88._1_7_ = (int7)((ulonglong)uVar18 >> 8);
              local_88[0] = 1;
              local_88._8_8_ = auVar38._8_8_;
            }
            if (local_140 == (int)unaff_RDI[0x32]) {
              (**(code **)(*unaff_RDI + 0x640))();
              plVar28 = local_128[0x24];
              if (pplVar29 == (longlong **)plVar28) {
                cVar11 = local_88[0];
                if ((local_88[0] != '\0') || (pplVar29 == (longlong **)0x0)) goto LAB_01ae1570;
                FUN_00d50b00();
                plVar28 = (longlong *)pplVar29;
              }
              else {
                if (plVar28 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                if ((local_88[0] != '\0') && (pplVar29 != (longlong **)0x0)) {
                  FUN_00d50b20();
                }
              }
              pplVar29 = (longlong **)plVar28;
              cVar11 = '\x01';
            }
            else {
              cVar11 = local_88[0];
            }
          }
LAB_01ae1570:
          plVar28 = (longlong *)*unaff_RSI;
          (**(code **)(*plVar28 + 0x370))();
          local_50 = 0;
          local_b0 = local_180;
          local_a8 = local_a8 & 0xffffff00;
          local_58 = (longlong *)pplVar29;
          FUN_01ad9840(0,0,&local_b0);
          (**(code **)(*plVar28 + 0x370))();
          plVar28 = (longlong *)*unaff_RSI;
          if (local_158[0] == '\0') {
            (**(code **)(*plVar28 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = 0;
            local_b0 = local_1b0;
            local_a8 = local_a8 & 0xffffff00;
            FUN_01ad9840(0,1,&local_b0);
            (**(code **)(*plVar28 + 0x370))();
            local_128 = (longlong **)*unaff_RSI;
            (*(code *)(*local_128)[0x6e])();
            local_58 = (longlong *)0x0;
            local_50 = '\0';
            local_b0 = local_178;
            local_a8 = local_a8 & 0xffffff00;
            pplVar19 = (longlong **)0x0;
            FUN_01ad9840(0,1,&local_b0);
            auVar97 = local_98;
            (*(code *)(*local_128)[0x6e])();
          }
          else {
            (**(code **)(*plVar28 + 0x370))();
            local_58 = (longlong *)0x0;
            local_50 = 0;
            local_b0 = local_1b0;
            local_a8 = local_a8 & 0xffffff00;
            FUN_01ad9840(1,1,&local_b0);
            (**(code **)(*plVar28 + 0x370))();
            local_128 = (longlong **)*unaff_RSI;
            (*(code *)(*local_128)[0x6e])();
            local_58 = (longlong *)0x0;
            local_50 = '\0';
            local_b0 = local_178;
            local_a8 = local_a8 & 0xffffff00;
            pplVar19 = (longlong **)((longlong)&MACH_HEADER.magic + 1);
            FUN_01ad9840(1,1,&local_b0);
            auVar97 = local_98;
            (*(code *)(*local_128)[0x6e])();
          }
          local_120 = '\0';
          plVar28 = (longlong *)CONCAT71((int7)((ulonglong)local_128 >> 8),1);
          if (local_44._0_1_ == '\0') {
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = (longlong **)local_1c8._0_8_;
            }
            FUN_017394e0();
            pVar25 = (pthread_key_t)pplVar19;
            if (local_128 != (longlong **)0x0 && local_1e0 != (longlong **)0x0) {
              (**(code **)(*unaff_RDI + 0x640))();
              local_438 = *unaff_RSI;
              local_430 = '\0';
              pvVar16 = _pthread_getspecific(pVar25);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017394e0();
              plVar28 = local_58;
              local_298 = 0;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_298 = '\x01';
              local_2a0 = plVar28;
              auVar38 = insertps(local_398,local_198,0x10);
              auVar97 = insertps(_local_168,local_488._0_4_,0x10);
              local_428 = local_1e0;
              local_420 = '\0';
              pplVar19 = &local_2a0;
              (*(code *)(*local_128)[0x80])(auVar38._0_8_,0x11,&local_428,2);
              if ((local_420 != '\0') && (local_428 != (longlong **)0x0)) {
                FUN_00d50b20();
              }
              if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_430 != '\0') && (local_438 != 0)) {
                FUN_00d50b20();
              }
            }
            plVar28 = (longlong *)0x0;
          }
          cVar10 = (char)plVar28;
          if ((cVar11 != '\0') && (pplVar29 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar10 = (char)plVar28;
        }
        if (cVar10 == '\0') {
          FUN_00d50b20();
        }
      }
      local_140 = local_140 + 1;
    } while (local_22c != local_140);
  }
  if (*(uint *)(unaff_RDI + 0x32) != 0xfff0bdc0) {
    uVar12 = *(uint *)((longlong)unaff_RDI + 0x184);
    pplVar19 = (longlong **)(ulonglong)uVar12;
    if ((uVar12 != 0xfff0bdc0) && (uVar12 != *(uint *)(unaff_RDI + 0x32))) {
      pvVar16 = _pthread_getspecific(uVar12);
      pplVar29 = pplVar30;
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = pplVar30;
        pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
      }
      pVar25 = (pthread_key_t)pplVar19;
      uVar33 = (*(code *)(*pplVar29)[0x74])();
      local_68._0_4_ = uVar33;
      pvVar16 = _pthread_getspecific(pVar25);
      pplVar19 = pplVar30;
      if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
        pplVar19 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
      }
      uVar33 = (*(code *)(*pplVar19)[0x74])();
      local_98._0_4_ = uVar33;
      local_88._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
      local_88._8_8_ = extraout_XMM0_Qb_18;
      local_98._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
      local_98._8_8_ = extraout_XMM0_Qb_19;
      if ((*(uint *)local_a0 == 1) || (*(uint *)local_a0 == 0)) {
        local_68._4_4_ = DAT_023dccec._4_4_;
        local_68._0_4_ = (float)DAT_023dccec;
        uStack_60 = 0;
      }
      else {
        local_68 = (undefined1  [8])FUN_01e3f820();
        uStack_60 = extraout_XMM0_Qb_20;
        if (*(uint *)local_a0 == 3) {
          FUN_01e3f820();
          auVar111 = blendps(auVar97,_DAT_0241c700,0xd);
        }
        else {
          auVar111._4_4_ = DAT_023dccf4._4_4_;
          auVar111._0_4_ = (float)DAT_023dccf4;
          auVar111._8_8_ = 0;
        }
        auVar112._0_4_ = auVar111._0_4_ + local_68._0_4_;
        auVar112._4_4_ = auVar111._4_4_ + local_68._4_4_;
        auVar112._8_4_ = auVar111._8_4_ + local_68._8_4_;
        auVar112._12_4_ = auVar111._12_4_ + local_68._12_4_;
        _local_68 = blendps(auVar112,_local_68,2);
      }
      auVar62._0_4_ = _DAT_023945e0 & local_88._0_4_;
      auVar62._4_4_ = _UNK_023945e4 & local_88._4_4_;
      auVar62._8_4_ = _UNK_023945e8 & local_88._8_4_;
      auVar62._12_4_ = _UNK_023945ec & local_88._12_4_;
      auVar63._4_12_ = SUB1612(auVar62 | _DAT_023945f0,4);
      auVar63._0_4_ = SUB164(auVar62 | _DAT_023945f0,0) + (float)local_88._0_4_;
      auVar38 = roundss(auVar63,auVar63,0xb);
      auVar113._0_4_ = _DAT_023945e0 & local_98._0_4_;
      auVar113._4_4_ = _UNK_023945e4 & local_98._4_4_;
      auVar113._8_4_ = _UNK_023945e8 & local_98._8_4_;
      auVar113._12_4_ = _UNK_023945ec & local_98._12_4_;
      auVar114._4_12_ = SUB1612(auVar113 | _DAT_023945f0,4);
      auVar114._0_4_ = SUB164(auVar113 | _DAT_023945f0,0) + (float)local_98._0_4_;
      auVar79 = roundss(auVar114,auVar114,0xb);
      if ((int)unaff_RDI[0x32] < *(int *)((longlong)unaff_RDI + 0x184)) {
        local_88._0_4_ = auVar38._0_4_;
        local_98 = auVar79;
      }
      else {
        local_88._0_4_ = auVar79._0_4_;
        local_98 = auVar38;
      }
      FUN_01d48370();
      plVar28 = (longlong *)*unaff_RSI;
      if ((*(uint *)local_a0 == 1) || (*(uint *)local_a0 == 0)) {
        auVar66._4_4_ = DAT_023dccec._4_4_;
        auVar66._0_4_ = (float)DAT_023dccec;
        auVar66._8_8_ = 0;
      }
      else {
        local_168 = (undefined1  [8])FUN_01e3f820();
        uStack_160 = extraout_XMM0_Qb_21;
        if (*(uint *)local_a0 == 3) {
          FUN_01e3f820();
          auVar64 = blendps(auVar79,_DAT_0241c700,0xd);
        }
        else {
          auVar64._4_4_ = DAT_023dccf4._4_4_;
          auVar64._0_4_ = (float)DAT_023dccf4;
          auVar64._8_8_ = 0;
        }
        auVar65._0_4_ = auVar64._0_4_ + local_168._0_4_;
        auVar65._4_4_ = auVar64._4_4_ + local_168._4_4_;
        auVar65._8_4_ = auVar64._8_4_ + local_168._8_4_;
        auVar65._12_4_ = auVar64._12_4_ + local_168._12_4_;
        auVar66 = blendps(auVar65,_local_168,2);
      }
      fVar73 = (float)local_88._0_4_ + DAT_02390d34 + DAT_02390d00;
      local_98._0_4_ = local_98._0_4_ + DAT_023b1608;
      local_88._0_4_ = fVar73;
      auVar38 = insertps(auVar66,local_98,0x10);
      auVar79 = insertps(_DAT_0241c760,
                         ZEXT416((uint)((fVar73 - (float)local_98._0_4_) + DAT_02390124)),0x10);
      (**(code **)(*plVar28 + 0x390))(auVar38._0_8_,auVar79._0_8_);
      pplVar19 = (longlong **)FUN_00e8fc40();
      FUN_00d4ff40();
      *pplVar19 = (longlong *)&DAT_02680400;
      *(uint *)((longlong)pplVar19 + 0xc) = 0;
      pplVar19[6] = (longlong *)0x0;
      pplVar19[7] = (longlong *)0x0;
      *(undefined8 *)((longlong)pplVar19 + 0x39) = 0;
      *(undefined8 *)((longlong)pplVar19 + 0x41) = 0;
      (*local_358)();
      local_68._0_4_ = (float)local_68._0_4_ + DAT_02390d30;
      local_1c8._0_4_ = DAT_023908ec + (float)local_68._0_4_;
      FUN_01d39400();
      local_168._0_4_ = DAT_02390d30 + (float)local_68._0_4_;
      FUN_01d38ba0();
      register0x00001244 = local_98._4_12_;
      local_158._0_4_ = local_98._0_4_ + DAT_02390d30;
      FUN_01d39310();
      FUN_01d38ba0();
      local_198 = (undefined1  [4])(DAT_023b8b2c + (float)local_88._0_4_);
      FUN_01d38ba0();
      FUN_01d39310();
      FUN_01d38ba0();
      puVar22 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar22 + 0xc) = 0;
      puVar22[6] = 0;
      puVar22[7] = 0;
      *(undefined8 *)((longlong)puVar22 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar22 + 0x41) = 0;
      (*local_358)();
      FUN_01d39400();
      FUN_01d39310();
      FUN_01d38ba0(DAT_02394298 + (float)local_68._0_4_);
      auVar141 = ZEXT416(DAT_023b5d84);
      FUN_01d39310();
      auVar115._4_12_ = local_98._4_12_;
      auVar115._0_4_ = local_98._0_4_ + DAT_02394298;
      FUN_01d38ba0();
      local_3b0 = puVar22;
      local_b0 = pplVar19;
      FUN_00083ea0(2,&local_3b0);
      FUN_01d39530();
      plVar28 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      local_128 = (longlong **)&DAT_024c5048;
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      local_168 = (undefined1  [8])FUN_01d39d70();
      uStack_160 = extraout_XMM0_Qb_22;
      local_88 = auVar115;
      plVar23 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar23 + 0x18))();
      local_98._0_8_ = plVar23;
      FUN_01cfc9f0();
      local_3c0 = 0;
      FUN_01cfc9f0();
      local_3bc = 0x3e99999a;
      FUN_01cfc9f0();
      local_3b8 = 0x3f333333;
      FUN_01cfc9f0();
      local_3b4 = 0x3f800000;
      FUN_01ae52c0(&local_b0,&local_3c0,&local_3bc,&local_3b0);
      FUN_01f7ba60();
      FUN_019fe220();
      if ((local_470 != '\0') && (local_478 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3a8 != '\0') && (local_3b0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_a8 != '\0') && (local_b0 != (longlong **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_418 = local_98._0_8_;
      local_410 = '\0';
      FUN_01d488d0();
      if ((local_410 != '\0') && (local_418 != 0)) {
        FUN_00d50b20();
      }
      auVar67._4_12_ = local_68._4_12_;
      auVar67._0_4_ = local_68._0_4_ + DAT_023b1614;
      auVar38 = blendps(auVar67,_local_168,0xe);
      auVar79 = blendps(local_88,_DAT_02421590,0xd);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar38._0_8_,auVar79._0_8_);
      cVar10 = FUN_01ad9100();
      if (cVar10 == '\0') {
        FUN_01cfbee0();
        local_278 = 0;
        if (local_120 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_120 = '\0';
        }
        local_278 = '\x01';
        local_280 = &DAT_024c5048;
        FUN_01d488d0();
        if ((local_278 != '\0') && (local_280 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_120 != '\0') {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01cfc6a0();
        local_288 = 0;
        if (local_120 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_120 = '\0';
        }
        local_288 = '\x01';
        local_290 = &DAT_024c5048;
        FUN_01d488d0();
        if ((local_288 != '\0') && (local_290 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (local_120 != '\0') {
          FUN_00d50b20();
        }
      }
      local_408 = plVar28;
      local_400 = '\0';
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      if ((local_400 != '\0') && (local_408 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_4e0 = 0;
      local_4e8 = pplVar19;
      FUN_01ad9840(1,1,&local_4e8);
      local_4d8 = *unaff_RSI;
      local_4d0 = 0;
      local_4c8 = 0;
      local_4c0 = 0;
      local_4b0 = 0;
      pplVar19 = (longlong **)((longlong)&MACH_HEADER.magic + 1);
      local_4b8 = puVar22;
      FUN_01ad9840(1,1,&local_4b8);
      FUN_01d48390();
      FUN_00d50b20();
      if (plVar28 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  if ((((char)unaff_RDI[0x41] == '\0') && (*(char *)((longlong)unaff_RDI + 0x209) == '\0')) ||
     (0.0 < (double)unaff_RDI[0x40])) goto LAB_01ae323b;
  if ((*(float *)(unaff_RDI + 0x42) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(unaff_RDI + 0x42)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)unaff_RDI + 0x214) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x214)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(unaff_RDI + 0x43) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(unaff_RDI + 0x43)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)unaff_RDI + 0x21c) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x21c)) && !NAN(DAT_023dccf4._4_4_))) {
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pplVar19 = pplVar30;
          }
          FUN_0173b790();
          pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
          if (pvVar16 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar10 = FUN_01770870();
          if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
            FUN_00d50b20();
          }
          if (cVar10 == '\0') {
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
            }
            FUN_0173b790();
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01770ea0();
            if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
            }
            FUN_0173b790();
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01770f00();
            if (local_120 != '\0') {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = pplVar30;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
              pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            pVar26 = (pthread_key_t)pplVar19;
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_68._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific(pVar26);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar30 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar30)[0x74])();
            local_98._0_4_ = uVar33;
            local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
            uStack_60 = extraout_XMM0_Qb_23;
            uVar33 = FUN_01a1da00();
            local_88._0_4_ = uVar33;
            local_98._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
            local_98._8_8_ = extraout_XMM0_Qb_24;
            fVar73 = (float)FUN_01a1da00();
            fVar122 = (float)local_68._0_4_ + (float)local_88._0_4_ * DAT_023908e0;
            auVar116._0_4_ = _DAT_023945e0 & (uint)fVar122;
            auVar116._4_4_ = _UNK_023945e4 & local_68._4_4_;
            auVar116._8_4_ = _UNK_023945e8 & (uint)uStack_60;
            auVar116._12_4_ = _UNK_023945ec & uStack_60._4_4_;
            auVar117._4_12_ = SUB1612(auVar116 | _DAT_023945f0,4);
            auVar117._0_4_ = SUB164(auVar116 | _DAT_023945f0,0) + fVar122;
            fVar73 = local_98._0_4_ + fVar73 * DAT_0241b664;
            auVar68._0_4_ = _DAT_023945e0 & (uint)fVar73;
            auVar68._4_4_ = _UNK_023945e4 & local_98._4_4_;
            auVar68._8_4_ = _UNK_023945e8 & local_98._8_4_;
            auVar68._12_4_ = _UNK_023945ec & local_98._12_4_;
            auVar135._0_12_ = ZEXT812(0);
            auVar135._12_4_ = 0;
            auVar79 = roundss(auVar135,auVar117,0xb);
            auVar69._4_12_ = SUB1612(auVar68 | _DAT_023945f0,4);
            auVar69._0_4_ = SUB164(auVar68 | _DAT_023945f0,0) + fVar73;
            auVar118._0_12_ = ZEXT812(0);
            auVar118._12_4_ = 0;
            auVar38 = roundss(auVar118,auVar69,0xb);
            auVar136._4_12_ = auVar79._4_12_;
            auVar136._0_4_ = auVar79._0_4_ - auVar38._0_4_;
            auVar38 = insertps(local_348,auVar38,0x10);
            auVar79 = insertps(local_248,auVar136,0x10);
            unaff_RDI[0x42] = auVar38._0_8_;
            unaff_RDI[0x43] = auVar79._0_8_;
            lVar17 = FUN_00d05530();
            lVar75 = auVar79._0_8_;
          }
          else {
            if (*(char *)((longlong)unaff_RDI + 0x209) == '\0') {
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pplVar19 = pplVar30;
              }
              FUN_0173b6f0();
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar10 = FUN_01736840();
              if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
                FUN_00d50b20();
              }
              if (cVar10 != '\0') goto LAB_01ae2a7a;
            }
            else {
LAB_01ae2a7a:
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pplVar19 = pplVar30;
              }
              FUN_0173b6f0();
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              if (pvVar16 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01736c50();
              if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
                FUN_00d50b20();
              }
            }
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
            }
            FUN_0173b790();
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01770c70();
            if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
            do {
              local_68._0_4_ = (int)unaff_RDI[0x33];
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              pplVar29 = pplVar30;
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pplVar19 = pplVar30;
                pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
              }
              fVar73 = (float)(*(code *)(*pplVar29)[0x74])();
            } while (fVar73 < (float)local_68._0_4_);
            do {
              local_68._0_4_ = (int)unaff_RDI[0x33];
              pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
              pplVar29 = pplVar30;
              if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                pplVar19 = pplVar30;
                pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
              }
              fVar73 = (float)(*(code *)(*pplVar29)[0x74])();
            } while ((float)local_68._0_4_ < fVar73);
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = pplVar30;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
              pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_68._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = pplVar30;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
              pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_88._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            pplVar29 = pplVar30;
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
              pplVar29 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            uVar33 = (*(code *)(*pplVar29)[0x74])();
            local_98._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific((pthread_key_t)pplVar19);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pplVar19 = pplVar30;
              pplVar30 = (longlong **)pplVar30[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
            }
            pVar25 = (pthread_key_t)pplVar19;
            uVar33 = (*(code *)(*pplVar30)[0x74])();
            local_168._0_4_ = uVar33;
            local_98._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
            local_98._8_8_ = extraout_XMM0_Qb_25;
            local_168._0_4_ = (**(code **)(*unaff_RDI + 0x918))();
            local_68 = (undefined1  [8])(**(code **)(*unaff_RDI + 0x918))();
            uStack_60 = extraout_XMM0_Qb_26;
            uVar33 = (**(code **)(*unaff_RDI + 0x918))();
            local_88._0_4_ = uVar33;
            pvVar16 = _pthread_getspecific(pVar25);
            if ((pvVar16 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              pVar25 = pVar26;
            }
            FUN_0173b6f0();
            pvVar16 = _pthread_getspecific(pVar25);
            if (pvVar16 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar10 = FUN_01736840();
            if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
              FUN_00d50b20();
            }
            fVar73 = ((float)local_98._0_4_ + (float)local_168._0_4_) * DAT_0239011c;
            auVar70._0_4_ = _DAT_023945e0 & (uint)fVar73;
            auVar70._4_4_ = _UNK_023945e4 & local_98._4_4_;
            auVar70._8_4_ = _UNK_023945e8 & local_98._8_4_;
            auVar70._12_4_ = _UNK_023945ec & local_98._12_4_;
            auVar71._4_12_ = SUB1612(auVar70 | _DAT_023945f0,4);
            auVar71._0_4_ = SUB164(auVar70 | _DAT_023945f0,0) + fVar73;
            auVar79 = roundss(auVar141,auVar71,0xb);
            fVar73 = ((float)local_68._0_4_ + (float)local_88._0_4_) * DAT_0239011c;
            auVar119._0_4_ = _DAT_023945e0 & (uint)fVar73;
            auVar119._4_4_ = _UNK_023945e4 & local_68._4_4_;
            auVar119._8_4_ = _UNK_023945e8 & (uint)uStack_60;
            auVar119._12_4_ = _UNK_023945ec & uStack_60._4_4_;
            auVar120._4_12_ = SUB1612(auVar119 | _DAT_023945f0,4);
            auVar120._0_4_ = SUB164(auVar119 | _DAT_023945f0,0) + fVar73;
            auVar137._0_12_ = ZEXT812(0);
            auVar137._12_4_ = 0;
            auVar38 = roundss(auVar137,auVar120,0xb);
            auVar138._4_12_ = auVar38._4_12_;
            auVar138._0_4_ = auVar38._0_4_ - auVar79._0_4_;
            if (cVar10 == '\0') {
              local_248._0_4_ = (float)local_248._0_4_ * DAT_0239011c;
              if (*(char *)((longlong)unaff_RDI + 0x209) != '\0') {
                local_348._0_4_ = (float)local_348._0_4_ + (float)local_248._0_4_;
              }
            }
            auVar121 = insertps(local_248,auVar138,0x10);
            auVar38 = insertps(local_348,auVar79,0x10);
            unaff_RDI[0x42] = auVar38._0_8_;
            unaff_RDI[0x43] = auVar121._0_8_;
            lVar17 = FUN_00d05530();
            lVar75 = auVar121._0_8_;
          }
          unaff_RDI[0x42] = lVar17;
          unaff_RDI[0x43] = lVar75;
        }
      }
    }
  }
  auVar72._8_8_ = 0;
  auVar72._0_8_ = unaff_RDI[0x42];
  fVar73 = (float)((ulonglong)unaff_RDI[0x42] >> 0x20);
  auVar139._0_4_ = fVar73 + *(float *)((longlong)unaff_RDI + 0x20c);
  auVar139._4_4_ = fVar73;
  auVar139._8_8_ = 0;
  auVar38 = insertps(auVar72,auVar139,0x10);
  FUN_01d39800(auVar38._0_8_,unaff_RDI[0x43]);
  if ((local_120 == '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cfcdc0();
  local_268 = 0;
  if (local_120 == '\0') {
    if (local_128 != (longlong **)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_120 = '\0';
  }
  local_268 = '\x01';
  local_270 = local_128;
  FUN_01d488d0();
  if ((local_268 != '\0') && (local_270 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  local_3f8 = local_128;
  local_3f0 = '\0';
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  if ((local_3f0 != '\0') && (local_3f8 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_58 + 0x390))();
  local_258 = 0;
  if (local_120 == '\0') {
    if (local_128 != (longlong **)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_120 = '\0';
  }
  local_258 = '\x01';
  local_260 = local_128;
  FUN_01d488d0();
  if ((local_258 != '\0') && (local_260 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_3e8 = local_128;
  local_3e0 = '\0';
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  if ((local_3e0 != '\0') && (local_3e8 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (local_128 != (longlong **)0x0) {
    FUN_00d50b20();
  }
LAB_01ae323b:
  if (((char)local_134 != '\0') && (local_180 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_6c != '\0') && (local_b8 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_13c != '\0') && (local_178 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_138 != '\0') && (local_170 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_210 != '\0') && (local_1b0 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_208 != '\0') && (local_1d0 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_250 != '\0') && (local_1e0 != (longlong **)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_1a0 == '\0') {
    FUN_00d50b20();
  }
  if (local_350 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  if (local_200 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  if (local_1a8 != (longlong **)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01adaf60 — 6337 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01adc749) */
/* WARNING: Removing unreachable block (ram,0x01adc755) */
/* WARNING: Removing unreachable block (ram,0x01adbad9) */
/* WARNING: Removing unreachable block (ram,0x01adbae2) */
/* WARNING: Removing unreachable block (ram,0x01adc0ce) */
/* WARNING: Removing unreachable block (ram,0x01adc0da) */
/* WARNING: Removing unreachable block (ram,0x01adb959) */
/* WARNING: Removing unreachable block (ram,0x01adb965) */
/* WARNING: Removing unreachable block (ram,0x01adc84f) */
/* WARNING: Removing unreachable block (ram,0x01adc85b) */
/* WARNING: Removing unreachable block (ram,0x01adb90e) */
/* WARNING: Removing unreachable block (ram,0x01adb917) */
/* WARNING: Removing unreachable block (ram,0x01adc66a) */
/* WARNING: Removing unreachable block (ram,0x01adc673) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01adaf60(dword *param_1,undefined8 param_2)

{
  float fVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  pthread_key_t pVar11;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  dword *pdVar12;
  dword *pdVar13;
  dword *pdVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float extraout_XMM0_Db;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar23 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  dword *local_130;
  char local_128;
  longlong *local_118;
  char local_110;
  uint local_90;
  float local_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  dword *local_48;
  char local_40;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  FUN_01e436c0();
  fVar15 = fVar15 + extraout_XMM0_Db + DAT_0241c3ec;
  (**(code **)(*unaff_RDI + 0x920))();
  pdVar14 = (dword *)unaff_RDI[0x36];
  if (pdVar14 == (dword *)0x0) {
    FUN_01ad8590();
    pdVar14 = (dword *)unaff_RDI[0x36];
  }
  if (pdVar14 == (dword *)0x0) {
    FUN_01ad3cb0();
    if ((local_48 != (dword *)0x0) && (pdVar14 = local_48, local_40 == '\0')) {
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b00();
  }
  if (pdVar14 != (dword *)0x0) {
    iVar4 = 0;
    local_90 = 0;
    if (unaff_RDI[0x39] != 0) {
      iVar6 = *(int *)(unaff_RDI[0x39] + 0x18);
      iVar10 = iVar6 + 3;
      if (-1 < iVar6) {
        iVar10 = iVar6;
      }
      local_90 = iVar10 >> 2;
      param_1 = (dword *)(ulonglong)local_90;
    }
    if ((dword *)unaff_RDI[0x36] != pdVar14) {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
      }
      FUN_0173b6f0();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_01736840();
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b6f0();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01736c50();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pdVar14;
    }
    FUN_0173b790();
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_01770c70();
    if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      param_1 = pdVar14;
    }
    FUN_0173b790();
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_01770870();
    if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar13 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      iVar6 = (**(code **)(*(longlong *)pdVar13 + 0x3a8))();
      param_1 = (dword *)(ulonglong)uVar5;
      iVar4 = iVar4 + uVar5;
      do {
        iVar4 = iVar4 - uVar5;
      } while (iVar6 <= iVar4);
    }
    pcVar2 = DAT_02680418;
    fVar16 = extraout_XMM0_Db + DAT_0241f374;
    do {
      while( true ) {
        pdVar13 = local_48;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') break;
        uVar19 = (**(code **)(*unaff_RDI + 0x918))((float)*(int *)((longlong)unaff_RDI + 0x1c4));
        uVar20 = (**(code **)(*unaff_RDI + 0x918))((float)(int)unaff_RDI[0x38]);
        auVar27._0_4_ = (uint)(float)uVar19 & _DAT_023945e0;
        auVar27._4_4_ = (uint)((ulonglong)uVar19 >> 0x20) & _UNK_023945e4;
        auVar27._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar27._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar28._4_12_ = SUB1612(auVar27 | _DAT_023945f0,4);
        auVar28._0_4_ = SUB164(auVar27 | _DAT_023945f0,0) + (float)uVar19;
        auVar21 = roundss(auVar28,auVar28,0xb);
        if ((fVar15 < auVar21._0_4_) ||
           (auVar29._0_4_ = (uint)(float)uVar20 & _DAT_023945e0,
           auVar29._4_4_ = (uint)((ulonglong)uVar20 >> 0x20) & _UNK_023945e4,
           auVar29._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8,
           auVar29._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec,
           auVar30._4_12_ = SUB1612(auVar29 | _DAT_023945f0,4),
           auVar30._0_4_ = SUB164(auVar29 | _DAT_023945f0,0) + (float)uVar20,
           auVar38 = roundss(auVar30,auVar30,0xb), auVar38._0_4_ < fVar16)) goto LAB_01adc1af;
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
        auVar34 = auVar38;
joined_r0x01adb741:
        if (iVar4 == 3) {
          FUN_01e3f820();
          auVar31 = blendps(auVar34,_DAT_0241c700,0xd);
        }
        else {
          auVar31._4_4_ = DAT_023dccf4._4_4_;
          auVar31._0_4_ = (float)DAT_023dccf4;
          auVar31._8_8_ = 0;
        }
        auVar22._4_12_ = auVar38._4_12_;
        auVar22._0_4_ = auVar38._0_4_ - auVar21._0_4_;
        auVar33._4_12_ = auVar31._4_12_;
        auVar33._0_4_ = auVar31._0_4_ + DAT_023b1608;
        auVar34 = insertps(auVar33,auVar22,0x10);
        auVar38 = insertps(_DAT_0241c740,auVar21,0x10);
        FUN_00d05530(auVar38._0_8_);
        FUN_01ada2c0();
        if ((dword *)unaff_RDI[0x36] == pdVar14) {
          local_88 = auVar34._0_4_;
          fStack_84 = auVar34._4_4_;
          uVar19 = FUN_00d05530();
          fVar17 = (float)((ulonglong)uVar19 >> 0x20);
          fStack_84 = fVar17 + fStack_84;
          (**(code **)(*unaff_RDI + 0x920))();
          (**(code **)(*unaff_RDI + 0x920))();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = pdVar14;
          }
          iVar4 = FUN_017423e0();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = pdVar14;
          }
          iVar6 = FUN_017423e0();
          FUN_01d39800();
          if ((local_40 == '\0') && (local_48 != (dword *)0x0)) {
            FUN_00d50b00();
          }
          FUN_01d48370();
          (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
          if (iVar4 <= iVar6) {
            do {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar12 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
              }
              FUN_01740240();
              if (local_118 != (longlong *)0x0) {
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                }
                FUN_01740240();
                if (local_128 == '\0') {
                  if (local_130 != (dword *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_128 = '\0';
                }
                local_40 = '\0';
                FUN_00d23d70();
                if (local_130 != (dword *)0x0) {
                  FUN_00d50b20();
                }
                local_48 = local_130;
                if ((local_128 != '\0') && (local_130 != (dword *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar20 = (**(code **)(*unaff_RDI + 0x918))();
              auVar35._0_4_ = (uint)(float)uVar20 & _DAT_023945e0;
              auVar35._4_4_ = (uint)((ulonglong)uVar20 >> 0x20) & _UNK_023945e4;
              auVar35._8_4_ = (uint)extraout_XMM0_Qb_03 & _UNK_023945e8;
              auVar35._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) & _UNK_023945ec;
              auVar36._4_12_ = SUB1612(auVar35 | _DAT_023945f0,4);
              auVar36._0_4_ = SUB164(auVar35 | _DAT_023945f0,0) + (float)uVar20;
              auVar38 = roundss(in_XMM3,auVar36,0xb);
              FUN_01ad93a0();
              in_XMM3 = ZEXT416((uint)(auVar38._0_4_ + DAT_02390d34 + DAT_02390d00));
              FUN_01ad93a0();
              iVar4 = iVar4 + 1;
            } while (iVar6 + 1 != iVar4);
          }
          fVar18 = local_88 * DAT_02390120;
          for (fVar26 = fVar17; fVar26 < fStack_84; fVar26 = fVar26 + DAT_02390124) {
            (**(code **)(*unaff_RDI + 0x920))();
            iVar4 = FUN_00e7d780();
            if ((char)unaff_RDI[0x37] == '\0') {
              uVar5 = iVar4 - (int)unaff_RDI[0x38];
            }
            else {
              uVar5 = iVar4 % *(int *)((longlong)unaff_RDI + 0x1bc);
            }
            local_88 = 0.0;
            if ((-1 < (int)uVar5) && (local_88 = 0.0, (int)uVar5 < (int)local_90)) {
              param_1 = *(dword **)(unaff_RDI[0x39] + 0x10);
              local_88 = (float)param_1[uVar5];
            }
            if ((char)unaff_RDI[0x3b] == '\0') {
              FUN_01cfbee0();
              if (local_40 == '\0') {
                if (local_48 != (dword *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != (dword *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              fVar1 = (float)(~-(uint)(local_88 <= DAT_02394270) &
                              (uint)SQRT(local_88) & _DAT_02390140 |
                             -(uint)(local_88 <= DAT_02394270) & DAT_023b3e04);
              FUN_01cfbee0(fVar1 * 0.0 + DAT_02390124,fVar1 * DAT_0241c6d4 + DAT_0239011c,
                           fVar1 * DAT_02390120 + 0.0);
              if (local_40 == '\0') {
                if (local_48 != (dword *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != (dword *)0x0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            in_XMM3 = ZEXT416((uint)fVar26);
            (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          }
          puVar9 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar9 = &DAT_02680400;
          *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          puVar9[6] = 0;
          puVar9[7] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x39) = 0;
          *(undefined8 *)((longlong)puVar9 + 0x41) = 0;
          (*pcVar2)();
          for (; fVar17 < fStack_84; fVar17 = fVar17 + DAT_02390124) {
            (**(code **)(*unaff_RDI + 0x920))();
            iVar4 = FUN_00e7d780();
            if ((char)unaff_RDI[0x37] == '\0') {
              uVar5 = iVar4 - (int)unaff_RDI[0x38];
            }
            else {
              uVar5 = iVar4 % *(int *)((longlong)unaff_RDI + 0x1bc);
            }
            auVar38 = ZEXT816(0);
            if ((-1 < (int)uVar5) && (auVar38 = ZEXT816(0), (int)uVar5 < (int)local_90)) {
              param_1 = *(dword **)(unaff_RDI[0x39] + 0x10);
              auVar38 = ZEXT416(param_1[uVar5]);
            }
            auVar23._4_12_ = auVar38._4_12_;
            auVar23._0_4_ = auVar38._0_4_ * fVar18 + (float)uVar19;
            FUN_01d38ba0(auVar23._0_8_);
          }
          FUN_01cfbee0();
          if (local_40 == '\0') {
            if (local_48 != (dword *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_01d488d0();
          if (local_48 != (dword *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
          FUN_01d48390();
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (pdVar13 != (dword *)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = pdVar14;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_01770870();
        if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_01adc1af;
      }
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = pdVar14;
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      pVar11 = (pthread_key_t)param_1;
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      pvVar7 = _pthread_getspecific(pVar11);
      pdVar12 = pdVar14;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pdVar12 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
      }
      (**(code **)(*(longlong *)pdVar12 + 0x3a0))();
      uVar19 = (**(code **)(*unaff_RDI + 0x918))();
      fVar17 = (float)(**(code **)(*unaff_RDI + 0x918))();
      fVar26 = ((float)uVar19 + fVar17) * DAT_0239011c;
      uVar20 = (**(code **)(*unaff_RDI + 0x918))();
      fVar17 = (float)(**(code **)(*unaff_RDI + 0x918))();
      uStack_64 = (uint)((ulonglong)uVar19 >> 0x20);
      uStack_60 = (uint)extraout_XMM0_Qb_01;
      uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      auVar32._0_4_ = (uint)fVar26 & _DAT_023945e0;
      auVar32._4_4_ = uStack_64 & _UNK_023945e4;
      auVar32._8_4_ = uStack_60 & _UNK_023945e8;
      auVar32._12_4_ = uStack_5c & _UNK_023945ec;
      auVar34._4_12_ = SUB1612(auVar32 | _DAT_023945f0,4);
      auVar34._0_4_ = SUB164(auVar32 | _DAT_023945f0,0) + fVar26;
      local_88 = (float)uVar20;
      fStack_84 = (float)((ulonglong)uVar20 >> 0x20);
      uStack_80 = (uint)extraout_XMM0_Qb_02;
      uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
      fVar17 = (local_88 + fVar17) * DAT_0239011c;
      auVar38._0_4_ = (uint)fVar17 & _DAT_023945e0;
      auVar38._4_4_ = (uint)fStack_84 & _UNK_023945e4;
      auVar38._8_4_ = uStack_80 & _UNK_023945e8;
      auVar38._12_4_ = uStack_7c & _UNK_023945ec;
      auVar21._4_12_ = SUB1612(auVar38 | _DAT_023945f0,4);
      auVar21._0_4_ = SUB164(auVar38 | _DAT_023945f0,0) + fVar17;
      auVar38 = roundss(ZEXT816(0),auVar21,0xb);
      auVar21 = roundss(ZEXT816(0),auVar34,0xb);
      cVar3 = (auVar38._0_4_ < fVar16) * '\x05';
      param_1 = &MACH_HEADER.cputype;
      if (fVar15 < auVar21._0_4_) {
        cVar3 = '\x04';
      }
      in_XMM3 = _DAT_023945f0;
      if (cVar3 == '\0') {
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
        goto joined_r0x01adb741;
      }
    } while (cVar3 == '\x04');
LAB_01adc1af:
    if ((((dword *)unaff_RDI[0x36] == pdVar14) && (*(char *)((longlong)unaff_RDI + 0x20a) != '\0'))
       && ((double)unaff_RDI[0x40] <= 0.0)) {
      if ((*(float *)(unaff_RDI + 0x42) == (float)DAT_023dccec) &&
         (!NAN(*(float *)(unaff_RDI + 0x42)) && !NAN((float)DAT_023dccec))) {
        if ((*(float *)((longlong)unaff_RDI + 0x214) == DAT_023dccec._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x214)) && !NAN(DAT_023dccec._4_4_))) {
          if ((*(float *)(unaff_RDI + 0x43) == (float)DAT_023dccf4) &&
             (!NAN(*(float *)(unaff_RDI + 0x43)) && !NAN((float)DAT_023dccf4))) {
            if ((*(float *)((longlong)unaff_RDI + 0x21c) == DAT_023dccf4._4_4_) &&
               (!NAN(*(float *)((longlong)unaff_RDI + 0x21c)) && !NAN(DAT_023dccf4._4_4_))) {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
              }
              FUN_0173b790();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01770c70();
              if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              do {
                fVar15 = *(float *)(unaff_RDI + 0x33);
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                pdVar13 = pdVar14;
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                  pdVar13 = *(dword **)
                             (pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
                }
                fVar16 = (float)(**(code **)(*(longlong *)pdVar13 + 0x3a0))();
                auVar38 = ZEXT416((uint)fVar15);
              } while (fVar16 < fVar15);
              do {
                fVar15 = *(float *)(unaff_RDI + 0x33);
                pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
                pdVar13 = pdVar14;
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  param_1 = pdVar14;
                  pdVar13 = *(dword **)
                             (pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2);
                }
                fVar16 = (float)(**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              } while (fVar15 < fVar16);
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              pdVar13 = pdVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = pdVar14;
                pdVar13 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              pVar11 = (pthread_key_t)param_1;
              (**(code **)(*(longlong *)pdVar13 + 0x3a0))();
              pvVar7 = _pthread_getspecific(pVar11);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                pdVar14 = *(dword **)(pdVar14 + ((ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4) * 2)
                ;
              }
              (**(code **)(*(longlong *)pdVar14 + 0x3a0))();
              uVar19 = (**(code **)(*unaff_RDI + 0x918))();
              fVar15 = (float)(**(code **)(*unaff_RDI + 0x918))();
              uVar20 = (**(code **)(*unaff_RDI + 0x918))();
              fVar16 = (float)(**(code **)(*unaff_RDI + 0x918))();
              if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
                auVar24._0_8_ = FUN_01e3f820();
                auVar24._8_8_ = extraout_XMM0_Qb_06;
                auVar37 = blendps(auVar38,_DAT_0241c700,0xd);
              }
              else {
                auVar24._4_4_ = DAT_023dccec._4_4_;
                auVar24._0_4_ = (float)DAT_023dccec;
                auVar24._8_8_ = 0;
                auVar37._4_4_ = DAT_023dccf4._4_4_;
                auVar37._0_4_ = (float)DAT_023dccf4;
                auVar37._8_8_ = 0;
              }
              local_88 = (float)uVar19;
              fStack_84 = (float)((ulonglong)uVar19 >> 0x20);
              uStack_80 = (uint)extraout_XMM0_Qb_04;
              uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
              fVar15 = (local_88 + fVar15) * DAT_0239011c;
              auVar39._0_4_ = _DAT_023945e0 & (uint)fVar15;
              auVar39._4_4_ = _UNK_023945e4 & (uint)fStack_84;
              auVar39._8_4_ = _UNK_023945e8 & uStack_80;
              auVar39._12_4_ = _UNK_023945ec & uStack_7c;
              auVar40._4_12_ = SUB1612(auVar39 | _DAT_023945f0,4);
              auVar40._0_4_ = SUB164(auVar39 | _DAT_023945f0,0) + fVar15;
              local_68 = (float)uVar20;
              uStack_64 = (uint)((ulonglong)uVar20 >> 0x20);
              uStack_60 = (uint)extraout_XMM0_Qb_05;
              uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb_05 >> 0x20);
              fVar15 = (local_68 + fVar16) * DAT_0239011c;
              auVar42._0_4_ = _DAT_023945e0 & (uint)fVar15;
              auVar42._4_4_ = _UNK_023945e4 & uStack_64;
              auVar42._8_4_ = _UNK_023945e8 & uStack_60;
              auVar42._12_4_ = _UNK_023945ec & uStack_5c;
              auVar38 = roundss(auVar40,auVar40,0xb);
              auVar43._4_12_ = SUB1612(auVar42 | _DAT_023945f0,4);
              auVar43._0_4_ = SUB164(auVar42 | _DAT_023945f0,0) + fVar15;
              auVar21 = roundss(auVar43,auVar43,0xb);
              auVar44._4_12_ = auVar21._4_12_;
              auVar44._0_4_ = auVar21._0_4_ - auVar38._0_4_;
              auVar21 = insertps(auVar37,auVar44,0x10);
              auVar38 = insertps(auVar24,auVar38,0x10);
              unaff_RDI[0x42] = auVar38._0_8_;
              unaff_RDI[0x43] = auVar21._0_8_;
              lVar8 = FUN_00d05530();
              unaff_RDI[0x42] = lVar8;
              unaff_RDI[0x43] = auVar21._0_8_;
            }
          }
        }
      }
      auVar25._8_8_ = 0;
      auVar25._0_8_ = unaff_RDI[0x42];
      fVar15 = (float)((ulonglong)unaff_RDI[0x42] >> 0x20);
      auVar41._0_4_ = fVar15 + *(float *)((longlong)unaff_RDI + 0x20c);
      auVar41._4_4_ = fVar15;
      auVar41._8_8_ = 0;
      auVar38 = insertps(auVar25,auVar41,0x10);
      FUN_01d39800(auVar38._0_8_,unaff_RDI[0x43]);
      if ((local_40 == '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (dword *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_118 + 0x390))();
      if (local_40 == '\0') {
        if (local_48 != (dword *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      if (local_48 != (dword *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ad71a0 — 3181 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad75e7) */
/* WARNING: Removing unreachable block (ram,0x01ad75f3) */
/* WARNING: Removing unreachable block (ram,0x01ad7700) */
/* WARNING: Removing unreachable block (ram,0x01ad770c) */
/* WARNING: Removing unreachable block (ram,0x01ad7e2d) */
/* WARNING: Removing unreachable block (ram,0x01ad7e3a) */
/* WARNING: Removing unreachable block (ram,0x01ad72bc) */
/* WARNING: Removing unreachable block (ram,0x01ad72c5) */
/* WARNING: Removing unreachable block (ram,0x01ad74d2) */
/* WARNING: Removing unreachable block (ram,0x01ad74db) */
/* WARNING: Removing unreachable block (ram,0x01ad7800) */
/* WARNING: Removing unreachable block (ram,0x01ad7809) */
/* WARNING: Removing unreachable block (ram,0x01ad79ca) */
/* WARNING: Removing unreachable block (ram,0x01ad79cf) */

void FUN_01ad71a0(void)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  float fVar14;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  char local_c0;
  int local_b8;
  undefined4 uStack_b4;
  char local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  int local_88;
  float local_84;
  char local_70;
  longlong *local_60;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    bVar5 = false;
    local_40 = (longlong *)0x0;
    local_a0 = 0;
    local_90 = 0;
    local_48 = (longlong *)0x0;
    local_70 = '\0';
    goto LAB_01ad7437;
  }
  FUN_01a1d6e0();
  uVar7 = (**(code **)(*(longlong *)CONCAT44(uStack_b4,local_b8) + 0xe70))();
  if (local_40 == (longlong *)0x0) {
    bVar3 = true;
    local_a0 = 0;
  }
  else if (local_38 == '\0') {
    uVar7 = FUN_00d50b00();
    bVar3 = false;
    local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  else {
    local_a0 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    local_38 = '\0';
    bVar3 = false;
  }
  uVar7 = local_a0;
  if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
    uVar7 = FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0 || bVar3) {
    local_90 = 0;
  }
  else {
    local_90 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  iVar6 = (**(code **)(*local_40 + 0xd20))();
  if (iVar6 == 0) {
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01ad73d0:
    local_70 = '\0';
    local_48 = (longlong *)0x0;
    bVar5 = false;
    local_58 = (longlong *)0x0;
  }
  else {
    cVar1 = *(char *)(unaff_RDI + 0x1da);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') goto LAB_01ad73d0;
    FUN_01a1d6e0();
    (**(code **)(*(longlong *)CONCAT44(uStack_b4,local_b8) + 0xe30))();
    local_58 = local_40;
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar4 = true;
      local_58 = (longlong *)0x0;
      bVar5 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
      bVar5 = true;
    }
    else {
      local_38 = '\0';
      bVar5 = true;
      bVar4 = false;
    }
    pVar10 = (pthread_key_t)plVar11;
    if ((local_b0 != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 == (longlong *)0x0) || (*(int *)((longlong)local_58 + 0xc) == 0)) {
      if (local_40 == (longlong *)0x0) {
        local_70 = '\0';
        local_48 = (longlong *)0x0;
      }
      else {
        if (!bVar3) {
          FUN_00d50b00();
        }
        local_70 = (char)local_a0;
        local_48 = local_40;
      }
    }
    else if (bVar4) {
      local_70 = '\0';
      local_48 = local_58;
    }
    else {
      FUN_00d50b00();
      local_70 = '\x01';
      local_48 = local_58;
    }
    uVar13 = FUN_01a1d6e0();
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = local_40;
    FUN_01a296f0(uVar13,0);
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = *(longlong *)(unaff_RDI + 0x2a0);
    if (((local_d0 != 0) && (local_48 != (longlong *)0x0)) &&
       (*(int *)((longlong)local_48 + 0xc) != 0)) {
      FUN_00d50b00();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017402f0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_d8 = local_40;
      FUN_01a1d6e0();
      local_dc = (**(code **)(*local_40 + 0xd20))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)local_48 + 0xc)) {
        lVar12 = 0;
        do {
          local_88 = 0;
          lVar2 = *(longlong *)(local_48[2] + lVar12 * 8);
          plVar11 = local_48;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          pVar10 = (pthread_key_t)plVar11;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar13 = FUN_0125e930();
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b00();
          }
          bVar3 = true;
          if (*unaff_RSI == 0) {
LAB_01ad78e0:
            local_a8 = 0;
LAB_01ad78f2:
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar14 = (float)FUN_0125a2c0();
            bVar4 = true;
            local_84 = fVar14;
            if (!bVar3) goto LAB_01ad7ae1;
            if (local_40 != (longlong *)0x0) {
              bVar4 = true;
              pvVar8 = _pthread_getspecific(pVar10);
              if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar10 = (pthread_key_t)local_40;
              }
              local_88 = FUN_0152e220();
            }
          }
          else {
            local_158 = '\0';
            local_160 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_160);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            if (local_40 == (longlong *)0x0) goto LAB_01ad78e0;
            local_148 = '\0';
            local_150 = lVar2;
            uVar13 = FUN_007a2fc0(uVar13,&local_150);
            local_60 = local_40;
            plVar11 = local_40;
            if (local_40 == (longlong *)0x0) {
              local_a8 = 0;
              local_60 = (longlong *)0x0;
            }
            else if (local_38 == '\0') {
              uVar7 = FUN_00d50b00();
              local_a8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              uVar13 = extraout_XMM0_Da;
            }
            else {
              local_38 = '\0';
              local_a8 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
            }
            pVar10 = (pthread_key_t)plVar11;
            if ((local_148 != '\0') && (local_150 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3ba0;
            if (local_60 == (longlong *)0x0) goto LAB_01ad78f2;
            if (DAT_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_140 = lVar9;
            local_138 = '\x01';
            uVar13 = FUN_000175c0(uVar13,&local_140);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3ba0;
            if (local_40 == (longlong *)0x0) {
              bVar3 = false;
              goto LAB_01ad78f2;
            }
            if (DAT_027e3ba0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_130 = lVar9;
            local_128 = '\x01';
            FUN_000175c0(uVar13,&local_130);
            fVar14 = (float)FUN_00d459e0();
            local_84 = fVar14;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              fVar14 = (float)FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              fVar14 = (float)FUN_00d50b20();
            }
LAB_01ad7ae1:
            lVar9 = DAT_027e3bb8;
            if (DAT_027e3bb8 != 0) {
              fVar14 = (float)FUN_00d50b00();
            }
            local_120 = lVar9;
            local_118 = '\x01';
            uVar13 = FUN_000175c0(fVar14,&local_120);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              uVar13 = FUN_00d50b20();
            }
            lVar9 = DAT_027e3bb8;
            if (local_40 == (longlong *)0x0) {
              bVar4 = false;
            }
            else {
              if (DAT_027e3bb8 != 0) {
                uVar13 = FUN_00d50b00();
              }
              local_110 = lVar9;
              local_108 = '\x01';
              FUN_000175c0(uVar13,&local_110);
              local_88 = FUN_00d45870();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              bVar4 = false;
            }
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e0 = FUN_0173fd40(local_84);
          iVar6 = local_88;
          local_b8 = local_b8 - local_88;
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_100 = local_d8;
          local_f8 = '\0';
          pVar10 = 0;
          local_84 = (float)FUN_0173fdf0(local_84 - (float)(iVar6 * 100),local_e0,DAT_02390d00,
                                         local_b8);
          if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (longlong *)0x0) {
            pvVar8 = _pthread_getspecific(pVar10);
            if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pVar10 = (pthread_key_t)local_40;
            }
            FUN_0152df60();
          }
          pvVar8 = _pthread_getspecific(pVar10);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a580(local_84);
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_a8 != '\0' && !bVar4) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)((longlong)local_48 + 0xc));
      }
      if (local_d8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_f0 = local_40;
  local_e8 = '\0';
  FUN_012879b0();
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0x1da) == '\0') {
    *(undefined1 *)(unaff_RDI + 0x1d8) = 0;
  }
  *(undefined1 *)(unaff_RDI + 0x1da) = 0;
LAB_01ad7437:
  FUN_00d50b20();
  if ((local_70 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ad48c0 — 2515 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad4b24) */
/* WARNING: Removing unreachable block (ram,0x01ad4b30) */
/* WARNING: Removing unreachable block (ram,0x01ad4aa6) */
/* WARNING: Removing unreachable block (ram,0x01ad4ab2) */
/* WARNING: Removing unreachable block (ram,0x01ad4a28) */
/* WARNING: Removing unreachable block (ram,0x01ad4a34) */
/* WARNING: Removing unreachable block (ram,0x01ad49aa) */
/* WARNING: Removing unreachable block (ram,0x01ad49b6) */
/* WARNING: Removing unreachable block (ram,0x01ad49e9) */
/* WARNING: Removing unreachable block (ram,0x01ad49f5) */
/* WARNING: Removing unreachable block (ram,0x01ad4a67) */
/* WARNING: Removing unreachable block (ram,0x01ad4a73) */
/* WARNING: Removing unreachable block (ram,0x01ad4ae5) */
/* WARNING: Removing unreachable block (ram,0x01ad4af1) */
/* WARNING: Removing unreachable block (ram,0x01ad4b63) */
/* WARNING: Removing unreachable block (ram,0x01ad4b6f) */

void FUN_01ad48c0(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01cb4790();
  (**(code **)(*local_58 + 0x370))();
  FUN_01d44d80(DAT_023b160c);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 600) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x9d8))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x9d8))();
  plVar1 = *(longlong **)(unaff_RDI + 0x228);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01770c90();
  local_b8 = local_58;
  local_b0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_b0 = '\x01';
  FUN_016ac280(uVar5,&local_b8);
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar1 + 0x958))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x250);
  FUN_016ab300();
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = (pthread_key_t)local_48;
  }
  FUN_0173b6f0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01736d70();
  local_98 = local_58;
  local_90 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_90 = '\x01';
  FUN_016ac280(uVar5,&local_98);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x238);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01768510();
  local_88 = local_40;
  local_80 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_80 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d77960();
  lVar4 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_01d77960();
    FUN_00d50b00();
    FUN_01d62b10();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b14f90();
  (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 600) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x270) + 0x998))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ad6540 — 2130 bytes
// ============================================================

void FUN_01ad6540(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  FUN_01ad46e0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_0173f680();
  if (cVar2 == '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c00();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar2 = FUN_017708d0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    lVar1 = **(longlong **)(*(longlong *)(unaff_RDI + 0x2b8) + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (*(int *)(lVar1 + 0xc) == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d8ede0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735c40();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = DAT_027e3c28;
      if (DAT_027e3c28 != 0) {
        FUN_00d50b00();
      }
      FUN_01735120();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735c40();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017aa5e0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736da0();
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_01735120();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017551c0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174bd90();
  FUN_01ad48c0();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ad8590 — 1565 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad8892) */
/* WARNING: Removing unreachable block (ram,0x01ad889e) */

void FUN_01ad8590(void)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  char unaff_SIL;
  longlong *unaff_RDI;
  bool bVar11;
  float fVar12;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  FUN_01a1d6e0();
  lVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (lVar8 == 0) {
    return;
  }
  FUN_01a1d6e0();
  (**(code **)(*local_58 + 0xe30))();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (lVar9 = lVar8, *(int *)(lVar8 + 0xc) == 0)) {
    FUN_01a1d6e0();
    (**(code **)(*local_58 + 0xe70))();
    lVar9 = local_40;
    if (lVar8 == local_40) {
LAB_01ad86b5:
      lVar9 = lVar8;
      if (local_38 != '\0') {
LAB_01ad86bb:
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
          lVar8 = lVar9;
          goto LAB_01ad86b5;
        }
        if (local_38 == '\0') goto LAB_01ad86c9;
        goto LAB_01ad86bb;
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_01ad86c9:
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
      return;
    }
  }
  if (*(int *)(lVar9 + 0xc) == 0) goto LAB_01ad8b6a;
  local_48 = CONCAT44(local_48._4_4_,(int)unaff_RDI[0x30]);
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  puVar2 = (undefined8 *)unaff_RDI[0x3a];
  if (puVar2 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3a] = (longlong)puVar6;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  bVar1 = *(byte *)((longlong)unaff_RDI + 0x1d9);
  local_70 = 0;
  lVar8 = unaff_RDI[0x3a];
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  pVar10 = (pthread_key_t)bVar1;
  local_78 = lVar8;
  FUN_01759fb0(*(undefined4 *)((longlong)unaff_RDI + 0x1dc),(float)local_48 * DAT_02420c90,&local_78
               ,(char)unaff_RDI[0x37]);
  lVar8 = unaff_RDI[0x36];
  lVar9 = lVar8;
  if (lVar8 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar9 = 0;
        goto LAB_01ad8817;
      }
      FUN_00d50b00();
      lVar8 = unaff_RDI[0x36];
      unaff_RDI[0x36] = local_40;
      lVar9 = local_40;
    }
    else {
      local_38 = '\0';
      lVar9 = local_40;
LAB_01ad8817:
      unaff_RDI[0x36] = lVar9;
    }
    pVar10 = (pthread_key_t)lVar8;
    if (lVar8 != 0) {
      FUN_00d50b20();
      lVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_58;
  plVar3 = (longlong *)unaff_RDI[0x39];
  if (plVar3 != local_58) {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x39] = (longlong)plVar4;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  lVar8 = local_40;
  local_48 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01ad8901;
    }
    bVar11 = true;
  }
  else {
LAB_01ad8901:
    bVar11 = lVar8 == 0;
    if ((unaff_RDI[0x36] != 0) && (lVar8 != 0)) {
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pVar10 = (pthread_key_t)local_48;
      }
      fVar12 = (float)FUN_0173e3a0();
      iVar5 = FUN_00e7d780(fVar12 / DAT_023908e0);
      if (iVar5 == 0) {
        bVar11 = false;
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174dc60();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ecc0((float)iVar5 * DAT_023908e0);
        bVar11 = false;
      }
    }
  }
  if (unaff_SIL != '\0') {
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((int)unaff_RDI[0x32] != -1000000) {
      *(undefined4 *)(unaff_RDI + 0x32) = 0xfff0bdc0;
      (**(code **)(*unaff_RDI + 0x620))();
    }
    *(undefined1 *)((longlong)unaff_RDI + 0x1da) = 1;
    local_60 = 0;
    lVar8 = unaff_RDI[0x36];
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar8;
    FUN_0173b120();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_40 = local_88;
    local_38 = '\0';
    FUN_01ad60d0(1,1);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ad8b6a:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01ad5a70 — 1510 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad5a70(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong unaff_RDI;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar21;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 extraout_XMM0_Qb_13;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  
  uVar7 = FUN_01adad50();
  local_38._0_4_ = in_XMM1._0_4_;
  local_28._0_4_ = (undefined4)uVar7;
  auVar22 = in_XMM1;
  if (*(longlong **)(unaff_RDI + 0x238) != (longlong *)0x0) {
    auVar8._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x4d8))();
    auVar8._8_8_ = extraout_XMM0_Qb_00;
    auVar8 = blendps(auVar8,ZEXT416((uint)((float)local_28._0_4_ + 0.0 + DAT_02390d00)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390d34 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x4d0))(auVar8._0_8_);
    (**(code **)(**(longlong **)(unaff_RDI + 0x238) + 0x998))();
    FUN_01e058a0();
  }
  if (*(longlong **)(unaff_RDI + 0x240) != (longlong *)0x0) {
    auVar9._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x4d8))();
    auVar9._8_8_ = extraout_XMM0_Qb_01;
    auVar34._4_12_ = in_XMM1._4_12_;
    auVar34._0_4_ = (float)local_38._0_4_ + DAT_02390d34;
    local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    local_28._8_4_ = (undefined4)extraout_XMM0_Qb;
    local_28._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar2._4_4_ = local_28._4_4_;
    auVar2._0_4_ = (float)local_28._0_4_ + 0.0 + DAT_02390d00;
    auVar2._8_4_ = local_28._8_4_;
    auVar2._12_4_ = local_28._12_4_;
    auVar8 = blendps(auVar9,auVar2,1);
    auVar22 = blendps(auVar22,auVar34,1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x240) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(unaff_RDI + 0x284) == 0) {
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccec;
    local_38._8_8_ = 0;
    local_38._0_8_ = DAT_023dccf4;
    plVar1 = *(longlong **)(unaff_RDI + 0x270);
    auVar8 = auVar22;
    goto joined_r0x01ad5bb3;
  }
  auVar10._0_8_ = FUN_01e3f820();
  auVar10._8_8_ = extraout_XMM0_Qb_02;
  iVar6 = *(int *)(unaff_RDI + 0x284);
  fVar30 = (float)((ulonglong)auVar10._0_8_ >> 0x20);
  fVar21 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
  if (iVar6 == 3) {
    auVar8 = auVar22;
    FUN_01e3f820();
    auVar8 = blendps(auVar8,_DAT_0241c700,0xd);
    iVar6 = *(int *)(unaff_RDI + 0x284);
    auVar23._0_4_ = auVar8._0_4_ + (float)auVar10._0_8_;
    auVar23._4_4_ = auVar8._4_4_ + fVar30;
    auVar23._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar23._12_4_ = auVar8._12_4_ + fVar21;
    if (iVar6 == 1) goto LAB_01ad5bd6;
LAB_01ad5bd2:
    if (iVar6 == 0) goto LAB_01ad5bd6;
    auVar8 = auVar23;
    FUN_01e3f820();
    if (*(int *)(unaff_RDI + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar31 = blendps(auVar8,_DAT_0241c710,0xd);
  }
  else {
    auVar23._0_4_ = (float)DAT_023dccf4 + (float)auVar10._0_8_;
    auVar23._4_4_ = (float)(DAT_023dccf4 >> 0x20) + fVar30;
    auVar23._8_4_ = (float)extraout_XMM0_Qb_02 + 0.0;
    auVar23._12_4_ = fVar21 + 0.0;
    if (iVar6 != 1) goto LAB_01ad5bd2;
LAB_01ad5bd6:
    auVar31._8_8_ = 0;
    auVar31._0_8_ = DAT_023dccf4;
  }
  auVar24._0_4_ = auVar23._0_4_ + auVar31._0_4_;
  auVar24._4_4_ = auVar23._4_4_ + auVar31._4_4_;
  auVar24._8_4_ = auVar23._8_4_ + auVar31._8_4_;
  auVar24._12_4_ = auVar23._12_4_ + auVar31._12_4_;
  auVar8 = blendps(auVar24,auVar10,2);
  local_38 = blendps(auVar22,_DAT_0241c720,0xd);
  plVar1 = *(longlong **)(unaff_RDI + 0x270);
  local_28 = auVar8;
joined_r0x01ad5bb3:
  if (plVar1 != (longlong *)0x0) {
    auVar22._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar22._8_8_ = extraout_XMM0_Qb_03;
    auVar8 = blendps(auVar8,local_38,0xd);
    auVar22 = blendps(auVar22,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x270) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong **)(unaff_RDI + 0x278) != (longlong *)0x0) {
    auVar11._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x4d8))();
    auVar11._8_8_ = extraout_XMM0_Qb_04;
    auVar35._4_12_ = local_38._4_12_;
    auVar35._0_4_ = local_38._0_4_ + DAT_02390124;
    auVar3._4_4_ = local_28._4_4_;
    auVar3._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar3._8_4_ = local_28._8_4_;
    auVar3._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar11,auVar3,1);
    auVar8 = blendps(auVar8,auVar35,1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x278) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong *)(unaff_RDI + 0x230) != 0) {
    local_38._0_8_ = FUN_01adabe0();
    local_38._8_8_ = extraout_XMM0_Qb_05;
    auVar22 = auVar8;
    auVar12._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x230) + 0x4d8))();
    auVar12._8_8_ = extraout_XMM0_Qb_06;
    auVar8 = blendps(auVar22,auVar8,0xd);
    auVar22 = blendps(auVar12,local_38,0xd);
    (**(code **)(**(longlong **)(unaff_RDI + 0x230) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(unaff_RDI + 0x284) == 1) || (*(int *)(unaff_RDI + 0x284) == 0)) {
    auVar27._8_8_ = 0;
    auVar27._0_8_ = DAT_023dccec;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = DAT_023dccf4;
  }
  else {
    auVar13._0_8_ = FUN_01e3f820();
    auVar13._8_8_ = extraout_XMM0_Qb_07;
    if (*(int *)(unaff_RDI + 0x284) == 3) {
      auVar22 = auVar8;
      FUN_01e3f820();
      auVar25 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = DAT_023dccf4;
    }
    auVar26._0_4_ = auVar25._0_4_ + (float)auVar13._0_8_;
    auVar26._4_4_ = auVar25._4_4_ + (float)((ulonglong)auVar13._0_8_ >> 0x20);
    auVar26._8_4_ = auVar25._8_4_ + (float)extraout_XMM0_Qb_07;
    auVar26._12_4_ = auVar25._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
    auVar27 = blendps(auVar26,auVar13,2);
    auVar36 = blendps(auVar8,_DAT_0241c710,0xd);
  }
  fVar30 = auVar36._0_4_;
  local_38 = ZEXT416((uint)(DAT_0239011c * fVar30));
  local_28._4_12_ = auVar27._4_12_;
  local_28._0_4_ = auVar27._0_4_ + DAT_0239011c * fVar30;
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_28 = auVar27;
  }
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar36;
  }
  if (*(longlong **)(unaff_RDI + 0x248) != (longlong *)0x0) {
    auVar14._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x4d8))();
    auVar14._8_8_ = extraout_XMM0_Qb_08;
    auVar22 = blendps(auVar14,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar27 = blendps(auVar27,ZEXT416((uint)(DAT_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x248) + 0x4d0))(auVar22._0_8_);
  }
  if (*(longlong **)(unaff_RDI + 0x250) != (longlong *)0x0) {
    auVar15._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x4d8))();
    auVar15._8_8_ = extraout_XMM0_Qb_09;
    auVar37._4_12_ = local_38._4_12_;
    auVar37._0_4_ = (float)local_38._0_4_ + DAT_02390124;
    auVar4._4_4_ = local_28._4_4_;
    auVar4._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar4._8_4_ = local_28._8_4_;
    auVar4._12_4_ = local_28._12_4_;
    auVar22 = blendps(auVar15,auVar4,1);
    auVar27 = blendps(auVar27,auVar37,1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x250) + 0x4d0))(auVar22._0_8_);
  }
  if ((*(int *)(unaff_RDI + 0x284) == 1) || (*(int *)(unaff_RDI + 0x284) == 0)) {
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccec;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = DAT_023dccf4;
    auVar22 = auVar27;
  }
  else {
    auVar16._0_8_ = FUN_01e3f820();
    auVar16._8_8_ = extraout_XMM0_Qb_10;
    if (*(int *)(unaff_RDI + 0x284) == 3) {
      auVar22 = auVar27;
      FUN_01e3f820();
      auVar28 = blendps(auVar22,_DAT_0241c700,0xd);
    }
    else {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = DAT_023dccf4;
    }
    auVar29._0_4_ = auVar28._0_4_ + (float)auVar16._0_8_;
    auVar29._4_4_ = auVar28._4_4_ + (float)((ulonglong)auVar16._0_8_ >> 0x20);
    auVar29._8_4_ = auVar28._8_4_ + (float)extraout_XMM0_Qb_10;
    auVar29._12_4_ = auVar28._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_10 >> 0x20);
    auVar22 = blendps(auVar29,auVar16,2);
    auVar32 = blendps(auVar27,_DAT_0241c710,0xd);
    local_28 = auVar22;
  }
  fVar30 = auVar32._0_4_;
  local_38 = ZEXT416((uint)(DAT_0239011c * fVar30));
  if ((fVar30 == 0.0) && (!NAN(fVar30))) {
    local_38 = auVar32;
  }
  if (*(longlong **)(unaff_RDI + 0x260) != (longlong *)0x0) {
    auVar17._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x4d8))();
    auVar17._8_8_ = extraout_XMM0_Qb_11;
    auVar8 = blendps(auVar17,ZEXT416((uint)((float)local_28._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390124 + (float)local_38._0_4_)),1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x260) + 0x4d0))(auVar8._0_8_);
  }
  if (*(longlong **)(unaff_RDI + 0x228) != (longlong *)0x0) {
    auVar18._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x4d8))();
    auVar18._8_8_ = extraout_XMM0_Qb_12;
    auVar38._4_12_ = local_28._4_12_;
    auVar38._0_4_ = (float)local_28._0_4_ + 0.0;
    auVar8 = blendps(auVar18,auVar38,1);
    auVar5._4_4_ = local_38._4_4_;
    auVar5._0_4_ = (float)local_38._0_4_ + DAT_02390124;
    auVar5._8_4_ = local_38._8_4_;
    auVar5._12_4_ = local_38._12_4_;
    auVar22 = blendps(auVar22,auVar5,1);
    (**(code **)(**(longlong **)(unaff_RDI + 0x228) + 0x4d0))(auVar8._0_8_);
  }
  if (*(int *)(unaff_RDI + 0x284) == 3) {
    local_38._0_8_ = FUN_01e3f820();
    local_38._8_8_ = extraout_XMM0_Qb_13;
    auVar22 = blendps(auVar22,_DAT_0241c700,0xd);
    plVar1 = *(longlong **)(unaff_RDI + 600);
    local_28 = auVar22;
  }
  else {
    local_38._8_8_ = 0;
    local_38._0_8_ = DAT_023dccec;
    local_28._8_8_ = 0;
    local_28._0_8_ = DAT_023dccf4;
    plVar1 = *(longlong **)(unaff_RDI + 600);
  }
  if (plVar1 != (longlong *)0x0) {
    auVar19._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
    auVar19._8_8_ = extraout_XMM0_Qb_14;
    auVar8 = blendps(auVar19,ZEXT416((uint)((float)local_38._0_4_ + 0.0)),1);
    auVar22 = blendps(auVar22,ZEXT416((uint)(DAT_02390124 + (float)local_28._0_4_)),1);
    (**(code **)(**(longlong **)(unaff_RDI + 600) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
  }
  if (*(longlong **)(unaff_RDI + 0x268) != (longlong *)0x0) {
    auVar20._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x268) + 0x4d8))();
    auVar20._8_8_ = extraout_XMM0_Qb_15;
    auVar39._4_12_ = local_28._4_12_;
    auVar39._0_4_ = (float)local_28._0_4_ + DAT_023b36a8;
    auVar33._4_12_ = local_38._4_12_;
    auVar33._0_4_ = (float)local_38._0_4_ + DAT_02390d04;
    auVar8 = blendps(auVar20,auVar33,1);
    auVar22 = blendps(auVar22,auVar39,1);
                    /* WARNING: Could not recover jumptable at 0x01ad604d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(unaff_RDI + 0x268) + 0x4d0))(auVar8._0_8_,auVar22._0_8_);
    return;
  }
  return;
}




// ============================================================
// @01ad3e60 — 1471 bytes
// str: ""MUScaleRulerView::setPitchSystem(): PitchSystem must be MUScalePitchSystem!""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad3eab) */
/* WARNING: Removing unreachable block (ram,0x01ad3eb7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad3e60(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Dc;
  undefined4 uVar18;
  undefined4 in_XMM1_Dd;
  undefined4 uVar19;
  float fVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  lVar1 = *unaff_RSI;
  lVar7 = unaff_RDI[0x2a];
  FUN_01a1dca0();
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ad3ef6;
    FUN_00d50b00();
    local_34 = 0;
  }
  else if (local_48 == 0) {
LAB_01ad3ef6:
    local_34 = 0x2590801;
    FUN_00e828a0();
  }
  else {
    local_34 = 0;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar6 = FUN_00e8b990();
  if (lVar6 != 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    FUN_00cb1f10();
    lVar6 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = DAT_027e3b30;
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      plVar9 = &local_a8;
      FUN_00d41040(plVar9,&local_b8);
      pVar8 = (pthread_key_t)plVar9;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_98 = DAT_027e3b30;
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      local_58 = local_88;
      local_50 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_50 = '\x01';
      plVar9 = &local_58;
      FUN_00d41430(plVar9,&local_98);
      param_1 = (pthread_key_t)plVar9;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (lVar1 == lVar7) goto LAB_01ad43e2;
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b6f0();
  lVar1 = unaff_RDI[0x58];
  lVar7 = lVar1;
  if (lVar1 != local_48) {
    if (local_40 == '\0') {
      if (local_48 == 0) {
        lVar7 = 0;
        goto LAB_01ad4222;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x58];
      unaff_RDI[0x58] = local_48;
      lVar7 = local_48;
    }
    else {
      local_40 = '\0';
      lVar7 = local_48;
LAB_01ad4222:
      unaff_RDI[0x58] = lVar7;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_48;
    }
  }
  if ((local_40 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ad46e0();
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_01743090();
  if (*(int *)((longlong)unaff_RDI + 0x184) != iVar4) {
    *(int *)((longlong)unaff_RDI + 0x184) = iVar4;
    uVar21 = DAT_023dccf4;
    uVar10 = DAT_023dccec;
    if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0)
       ) {
      uVar10 = FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        uVar14 = uVar13;
        uVar17 = uVar16;
        uVar18 = in_XMM1_Dc;
        uVar19 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar22._4_4_ = uVar17;
        auVar22._0_4_ = uVar14;
        auVar22._8_4_ = uVar18;
        auVar22._12_4_ = uVar19;
        auVar11 = blendps(auVar22,_DAT_0241c700,0xd);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_023dccf4;
      }
      auVar2._8_8_ = extraout_XMM0_Qb;
      auVar2._0_8_ = uVar10;
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar10;
      auVar12._4_4_ = auVar11._4_4_ + (float)((ulonglong)uVar10 >> 0x20);
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb;
      auVar12._12_4_ = auVar11._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar11 = blendps(auVar12,auVar2,2);
      auVar3._4_4_ = uVar16;
      auVar3._0_4_ = uVar13;
      auVar3._8_4_ = in_XMM1_Dc;
      auVar3._12_4_ = in_XMM1_Dd;
      auVar22 = blendps(auVar3,_DAT_0241c710,0xd);
      uVar21 = auVar22._0_8_;
      uVar10 = auVar11._0_8_;
    }
    fVar20 = (float)uVar21;
    fVar15 = fVar20 * DAT_0239011c;
    if ((fVar20 == 0.0) && (!NAN(fVar20))) {
      fVar15 = fVar20;
    }
    (**(code **)(*unaff_RDI + 0x618))(uVar10,fVar15);
  }
  FUN_01ad3320();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((int)unaff_RDI[0x32] != -1000000) {
    *(undefined4 *)(unaff_RDI + 0x32) = 0xfff0bdc0;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0xfff0bdc0;
LAB_01ad43e2:
  FUN_01ad48c0();
  FUN_01ad5a70();
  (**(code **)(*unaff_RDI + 0x620))();
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01ad9840 — 1076 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ad99f8) */
/* WARNING: Removing unreachable block (ram,0x01ad9a04) */
/* WARNING: Removing unreachable block (ram,0x01ad9bb2) */
/* WARNING: Removing unreachable block (ram,0x01ad9bc2) */
/* WARNING: Removing unreachable block (ram,0x01ad9add) */
/* WARNING: Removing unreachable block (ram,0x01ad9ae9) */
/* WARNING: Removing unreachable block (ram,0x01ad98d3) */
/* WARNING: Removing unreachable block (ram,0x01ad98df) */
/* WARNING: Removing unreachable block (ram,0x01ad9895) */
/* WARNING: Removing unreachable block (ram,0x01ad98a1) */
/* WARNING: Removing unreachable block (ram,0x01ad9c3c) */
/* WARNING: Removing unreachable block (ram,0x01ad9c48) */

void FUN_01ad9840(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char in_CL;
  char in_DL;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (*unaff_RSI != 0) {
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
  }
  if (in_DL != '\0') {
    if (in_CL == '\0') {
      FUN_01cfbee0(param_1,param_1,param_1);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390d00);
      }
    }
    else {
      cVar1 = FUN_01ad9100();
      if (cVar1 == '\0') {
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390124);
        FUN_01cfbee0(param_2,param_2,param_2);
        if (local_30 == '\0') {
          if (local_38 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30 = '\0';
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
        (**(code **)(*(longlong *)*unaff_RDI + 0x370))(0,DAT_02390d00);
      }
      FUN_01cfbee0(param_1,param_1,param_1);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RDI + 0x3a8))();
    }
  }
  return;
}




// ============================================================
// @01ada2c0 — 798 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ada488) */
/* WARNING: Removing unreachable block (ram,0x01ada494) */

void FUN_01ada2c0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong *local_c0;
  char local_b8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  cVar2 = FUN_01ad9100();
  if (cVar2 == '\0') {
    (**(code **)(*unaff_RDI + 0x640))();
    local_80 = *unaff_RSI;
    local_78 = '\0';
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*local_40 + 0x528))(param_1,param_2);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d39800(param_1,param_2,DAT_023908d8);
    plVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfbee0(DAT_02390120,DAT_02390120,DAT_02390120);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    uVar3 = (**(code **)(*unaff_RDI + 0x640))();
    local_a0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*local_c0 + 0x3b0))(uVar3,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = plVar1;
    local_88 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01ad9f80 — 514 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01ada088) */
/* WARNING: Removing unreachable block (ram,0x01ada091) */
/* WARNING: Removing unreachable block (ram,0x01ada165) */
/* WARNING: Removing unreachable block (ram,0x01ada16e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ad9f80(float param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *unaff_RDI;
  float local_98;
  longlong local_40;
  char local_38;
  
  cVar1 = FUN_01ad9100();
  local_98 = param_3;
  if (cVar1 == '\0') {
    FUN_01cfc9f0(DAT_02391090 + param_1,param_2);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_3 = param_3 + _DAT_023b1620;
    (**(code **)(*(longlong *)*unaff_RDI + 0x3f8))(param_3,param_4);
    local_98 = param_3 + _DAT_0241c730;
  }
  FUN_01cfc9f0(param_1 + _DAT_0241c6c4,param_2);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x3f8))(local_98,param_4);
  return;
}




// ============================================================
// @019e84b0 — 511 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019e864b) */
/* WARNING: Removing unreachable block (ram,0x019e8654) */

void FUN_019e84b0(void)

{
  undefined4 uVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(unaff_RDI + 0x278) != 0) &&
     (FUN_01e1e360(), *(longlong *)(unaff_RDI + 0x278) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x278) = 0;
    FUN_00d50b20();
  }
  lVar5 = *unaff_RSI;
  if (lVar5 == *(longlong *)(unaff_RDI + 0x260)) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x260) != 0) {
    *(undefined8 *)(unaff_RDI + 0x260) = 0;
    FUN_00d50b20();
    lVar5 = *unaff_RSI;
  }
  if (lVar5 == 0) {
    return;
  }
  lVar3 = *(longlong *)(unaff_RDI + 0x268);
  if (lVar3 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x268) = lVar5;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  pVar4 = 0;
  FUN_01e1eb80(DAT_023942d0);
  lVar5 = *(longlong *)(unaff_RDI + 0x278);
  lVar3 = lVar5;
  if (lVar5 == local_38) goto LAB_019e85d5;
  lVar3 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar3 = 0;
      goto LAB_019e858a;
    }
    FUN_00d50b00();
    lVar5 = *(longlong *)(unaff_RDI + 0x278);
    *(longlong *)(unaff_RDI + 0x278) = local_38;
  }
  else {
    local_30 = '\0';
LAB_019e858a:
    *(longlong *)(unaff_RDI + 0x278) = lVar3;
  }
  pVar4 = (pthread_key_t)lVar5;
  if (lVar5 != 0) {
    FUN_00d50b20();
    lVar3 = local_38;
  }
LAB_019e85d5:
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == 0) {
    return;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar1 = FUN_01326de0();
  *(undefined4 *)(unaff_RDI + 0x270) = uVar1;
  FUN_00d50b20();
  return;
}



