// Reconstructed implementation of MUDataPointFunction
// From MikeCore binary — reverse-engineered pseudocode

#include "MUDataPointFunction.h"

// ============================================================
// @01400f40 — 15147 bytes
// str: ""%@1""
// str: ""%@3""
// str: ""%@5""
// str: ""1%@""
// str: ""3%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01401ebb) */
/* WARNING: Removing unreachable block (ram,0x01401ec5) */
/* WARNING: Removing unreachable block (ram,0x01401eca) */
/* WARNING: Removing unreachable block (ram,0x01401ed2) */
/* WARNING: Removing unreachable block (ram,0x01401eda) */
/* WARNING: Removing unreachable block (ram,0x01401edf) */
/* WARNING: Removing unreachable block (ram,0x014017bf) */
/* WARNING: Removing unreachable block (ram,0x014017c4) */
/* WARNING: Removing unreachable block (ram,0x014017cc) */
/* WARNING: Removing unreachable block (ram,0x014017d4) */
/* WARNING: Removing unreachable block (ram,0x014017d9) */
/* WARNING: Removing unreachable block (ram,0x014015ad) */
/* WARNING: Removing unreachable block (ram,0x014015b7) */
/* WARNING: Removing unreachable block (ram,0x014015bc) */
/* WARNING: Removing unreachable block (ram,0x014015c4) */
/* WARNING: Removing unreachable block (ram,0x014015cc) */
/* WARNING: Removing unreachable block (ram,0x014015d1) */
/* WARNING: Removing unreachable block (ram,0x014013a5) */
/* WARNING: Removing unreachable block (ram,0x014013af) */
/* WARNING: Removing unreachable block (ram,0x014013b4) */
/* WARNING: Removing unreachable block (ram,0x014013bc) */
/* WARNING: Removing unreachable block (ram,0x014013c4) */
/* WARNING: Removing unreachable block (ram,0x014013c9) */
/* WARNING: Removing unreachable block (ram,0x014012ab) */
/* WARNING: Removing unreachable block (ram,0x014012b0) */
/* WARNING: Removing unreachable block (ram,0x014012b8) */
/* WARNING: Removing unreachable block (ram,0x014012c0) */
/* WARNING: Removing unreachable block (ram,0x014012c5) */
/* WARNING: Removing unreachable block (ram,0x014012a1) */
/* WARNING: Removing unreachable block (ram,0x014014b3) */
/* WARNING: Removing unreachable block (ram,0x014014b8) */
/* WARNING: Removing unreachable block (ram,0x014014c0) */
/* WARNING: Removing unreachable block (ram,0x014014c8) */
/* WARNING: Removing unreachable block (ram,0x014014cd) */
/* WARNING: Removing unreachable block (ram,0x014014a9) */
/* WARNING: Removing unreachable block (ram,0x014016bb) */
/* WARNING: Removing unreachable block (ram,0x014016c0) */
/* WARNING: Removing unreachable block (ram,0x014016c8) */
/* WARNING: Removing unreachable block (ram,0x014016d0) */
/* WARNING: Removing unreachable block (ram,0x014016d5) */
/* WARNING: Removing unreachable block (ram,0x014016b1) */
/* WARNING: Removing unreachable block (ram,0x014017b5) */
/* WARNING: Removing unreachable block (ram,0x01401fa7) */
/* WARNING: Removing unreachable block (ram,0x01401fac) */
/* WARNING: Removing unreachable block (ram,0x01401fb4) */
/* WARNING: Removing unreachable block (ram,0x01401fbc) */
/* WARNING: Removing unreachable block (ram,0x01401fc1) */
/* WARNING: Removing unreachable block (ram,0x01401fe9) */
/* WARNING: Removing unreachable block (ram,0x01401ff1) */
/* WARNING: Removing unreachable block (ram,0x01401231) */
/* WARNING: Removing unreachable block (ram,0x0140123e) */
/* WARNING: Removing unreachable block (ram,0x01400f9d) */
/* WARNING: Removing unreachable block (ram,0x01400fa6) */
/* WARNING: Removing unreachable block (ram,0x014011fb) */
/* WARNING: Removing unreachable block (ram,0x01401208) */
/* WARNING: Removing unreachable block (ram,0x01401267) */
/* WARNING: Removing unreachable block (ram,0x01401274) */
/* WARNING: Removing unreachable block (ram,0x01403120) */
/* WARNING: Removing unreachable block (ram,0x014025cc) */
/* WARNING: Removing unreachable block (ram,0x0140257c) */
/* WARNING: Removing unreachable block (ram,0x01402585) */
/* WARNING: Removing unreachable block (ram,0x01402707) */
/* WARNING: Removing unreachable block (ram,0x01402710) */
/* WARNING: Removing unreachable block (ram,0x0140325b) */
/* WARNING: Removing unreachable block (ram,0x01403264) */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_01400f40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_780;
  undefined1 local_778;
  longlong local_770;
  undefined1 local_768;
  longlong local_760;
  undefined1 local_758;
  longlong local_750;
  undefined1 local_748;
  longlong local_740;
  undefined1 local_738;
  longlong local_730;
  undefined1 local_728;
  longlong local_720;
  undefined1 local_718;
  longlong local_710;
  undefined1 local_708;
  longlong local_700;
  undefined1 local_6f8;
  longlong local_6f0;
  undefined1 local_6e8;
  longlong local_6e0;
  undefined1 local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  longlong local_6c0;
  undefined1 local_6b8;
  longlong local_6b0;
  undefined1 local_6a8;
  longlong local_6a0;
  undefined1 local_698;
  longlong local_690;
  undefined1 local_688;
  longlong local_680;
  undefined1 local_678;
  longlong local_670;
  undefined1 local_668;
  longlong local_660;
  undefined1 local_658;
  longlong local_650;
  undefined1 local_648;
  longlong local_640;
  undefined1 local_638;
  longlong local_630;
  undefined1 local_628;
  longlong local_620;
  undefined1 local_618;
  longlong local_610;
  undefined1 local_608;
  longlong local_600;
  undefined1 local_5f8;
  longlong local_5f0;
  undefined1 local_5e8;
  longlong local_5e0;
  undefined1 local_5d8;
  longlong local_5d0;
  undefined1 local_5c8;
  longlong local_5c0;
  undefined1 local_5b8;
  longlong local_5b0;
  undefined1 local_5a8;
  longlong local_5a0;
  undefined1 local_598;
  longlong local_590;
  undefined1 local_588;
  longlong local_580;
  undefined1 local_578;
  longlong local_570;
  undefined1 local_568;
  longlong local_560;
  undefined1 local_558;
  longlong local_550;
  undefined1 local_548;
  longlong local_540;
  undefined1 local_538;
  longlong local_530;
  undefined1 local_528;
  longlong local_520;
  undefined1 local_518;
  longlong local_510;
  undefined1 local_508;
  longlong local_500;
  undefined1 local_4f8;
  longlong local_4f0;
  undefined1 local_4e8;
  longlong local_4e0;
  undefined1 local_4d8;
  longlong local_4d0;
  undefined1 local_4c8;
  longlong local_4c0;
  undefined1 local_4b8;
  longlong local_4b0;
  undefined1 local_4a8;
  longlong local_4a0;
  undefined1 local_498;
  longlong local_490;
  undefined1 local_488;
  longlong local_480;
  undefined1 local_478;
  longlong local_470;
  undefined1 local_468;
  longlong local_460;
  undefined1 local_458;
  longlong local_450;
  undefined1 local_448;
  longlong local_440;
  undefined1 local_438;
  longlong local_430;
  undefined1 local_428;
  longlong local_420;
  undefined1 local_418;
  longlong local_410;
  undefined1 local_408;
  longlong local_400;
  undefined1 local_3f8;
  longlong local_3f0;
  undefined1 local_3e8;
  longlong local_3e0;
  undefined1 local_3d8;
  undefined1 local_3c8;
  undefined1 local_3c0 [8];
  undefined1 local_3b8;
  undefined1 local_3b0 [8];
  undefined1 local_3a8;
  undefined1 local_3a0 [8];
  undefined1 local_398;
  longlong local_390;
  char local_388;
  longlong local_380;
  char local_378;
  longlong local_370;
  char local_368;
  longlong local_360;
  char local_358;
  longlong local_350;
  char local_348;
  longlong local_340;
  char local_338;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  longlong local_310;
  char local_308;
  longlong local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
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
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
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
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_80;
  char local_78;
  longlong *local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  
  FUN_00d933c0();
  local_98 = local_50;
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_a0 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_90 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x60);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_a8 = local_68;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c09e0;
  if (DAT_027c09e0 != 0) {
    FUN_00d50b00();
  }
  local_780 = lVar1;
  local_778 = 1;
  local_770 = local_a0;
  local_768 = 0;
  FUN_014004b0(&local_770,&local_780,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014012cd;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014012cd:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c09e8;
  local_760 = *param_2;
  local_758 = 0;
  if (DAT_027c09e8 != 0) {
    FUN_00d50b00();
  }
  local_750 = lVar1;
  local_748 = 1;
  local_740 = local_90;
  local_738 = 0;
  FUN_014004b0(&local_740,&local_750,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014013d1;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014013d1:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c09f0;
  local_730 = *param_2;
  local_728 = 0;
  if (DAT_027c09f0 != 0) {
    FUN_00d50b00();
  }
  local_720 = lVar1;
  local_718 = 1;
  local_710 = local_a8;
  local_708 = 0;
  FUN_014004b0(&local_710,&local_720,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014014d5;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014014d5:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c09f8;
  local_700 = *param_2;
  local_6f8 = 0;
  if (DAT_027c09f8 != 0) {
    FUN_00d50b00();
  }
  local_6f0 = lVar1;
  local_6e8 = 1;
  local_6e0 = local_a0;
  local_6d8 = 0;
  FUN_014004b0(&local_6e0,&local_6f0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014015d9;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014015d9:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a00;
  local_6d0 = *param_2;
  local_6c8 = 0;
  if (DAT_027c0a00 != 0) {
    FUN_00d50b00();
  }
  local_6c0 = lVar1;
  local_6b8 = 1;
  local_6b0 = local_90;
  local_6a8 = 0;
  FUN_014004b0(&local_6b0,&local_6c0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014016dd;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014016dd:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a08;
  local_6a0 = *param_2;
  local_698 = 0;
  if (DAT_027c0a08 != 0) {
    FUN_00d50b00();
  }
  local_690 = lVar1;
  local_688 = 1;
  local_680 = local_a8;
  local_678 = 0;
  FUN_014004b0(&local_680,&local_690,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_014017e1;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014017e1:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_e0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_e0 = '\x01';
  local_e8 = local_80;
  local_390 = local_a0;
  local_388 = '\0';
  FUN_00d98db0(&local_390,&local_e8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401906;
      FUN_00d50b00();
      goto LAB_014019ff;
    }
LAB_01401a04:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_014019ff:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01401a04;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401906:
    *(undefined1 *)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_388 != '\0') && (local_390 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_d0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_d0 = '\x01';
  local_d8 = local_80;
  local_380 = local_90;
  local_378 = '\0';
  FUN_00d98db0(&local_380,&local_d8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401b84;
      FUN_00d50b00();
      goto LAB_01401bbb;
    }
LAB_01401bc0:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01401bbb:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01401bc0;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401b84:
    *(undefined1 *)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_378 != '\0') && (local_380 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = local_98;
  bVar4 = true;
  if (local_98 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  local_c0 = 0;
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_c0 = '\x01';
  local_c8 = local_80;
  local_370 = local_a8;
  local_368 = '\0';
  FUN_00d98db0(&local_370,&local_c8,1);
  lVar3 = *param_2;
  if (lVar3 == local_68) {
    if (((char)param_2[1] == '\0') && (local_68 != 0)) {
      if (local_60 != '\0') goto LAB_01401d40;
      FUN_00d50b00();
      goto LAB_01401d77;
    }
LAB_01401d7c:
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      *param_2 = local_68;
      if (((char)lVar5 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01401d77:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01401d7c;
    }
    *param_2 = local_68;
    if (((char)lVar5 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01401d40:
    *(undefined1 *)(param_2 + 1) = 1;
    local_60 = '\0';
  }
  if ((local_368 != '\0') && (local_370 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a10;
  local_670 = *param_2;
  local_668 = 0;
  if (DAT_027c0a10 != 0) {
    FUN_00d50b00();
  }
  local_660 = lVar1;
  local_658 = 1;
  local_650 = local_90;
  local_648 = 0;
  FUN_014004b0(&local_650,&local_660,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_01401ee7;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01401ee7:
    local_58 = param_2 + 1;
    *(undefined1 *)local_58 = 1;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a18;
  if (DAT_027c0a18 != 0) {
    FUN_00d50b00();
  }
  local_360 = lVar1;
  local_358 = '\x01';
  local_350 = local_90;
  local_348 = '\0';
  FUN_00d98db0(&local_350,&local_360,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') goto LAB_01401f9c;
    FUN_00d50b20();
  }
  else {
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)param_2[1] != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01401f9c:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_348 != '\0') && (local_350 != 0)) {
    FUN_00d50b20();
  }
  if ((local_358 != '\0') && (local_360 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027df9a8;
  if (DAT_027df9a8 != 0) {
    FUN_00d50b00();
  }
  local_340 = lVar1;
  local_338 = '\x01';
  FUN_00d8ede0();
  local_b0 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_b0 = '\x01';
  local_b8 = local_68;
  FUN_00d98db0(&local_b8,&local_340,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402113;
      FUN_00d50b00();
      goto LAB_0140214a;
    }
LAB_0140214f:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_0140214a:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0140214f;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402113:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_338 != '\0') && (local_340 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a20;
  if (DAT_027c0a20 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a28;
  local_330 = lVar1;
  local_328 = '\x01';
  if (DAT_027c0a28 != 0) {
    FUN_00d50b00();
  }
  local_320 = lVar3;
  local_318 = '\x01';
  FUN_00d98db0(&local_320,&local_330,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402259;
      FUN_00d50b00();
      goto LAB_01402290;
    }
LAB_01402295:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402290:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01402295;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402259:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  local_310 = *param_2;
  local_308 = '\0';
  FUN_01729150();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_3c8 = 1;
  FUN_014009a0();
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014023c1;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014023c1:
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    FUN_00d50b20();
  }
  local_300 = *param_2;
  local_2f8 = '\0';
  FUN_017297a0();
  lVar1 = DAT_027c0a30;
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
    lVar1 = DAT_027c0a30;
  }
  local_3b8 = 1;
  DAT_027c0a30 = lVar1;
  if (lVar1 != 0) {
    local_3b8 = 1;
    FUN_00d50b00();
  }
  local_638 = 1;
  local_640 = lVar1;
  FUN_01400c50(&local_640,local_3c0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_01402556;
      }
      goto LAB_01402502;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402502:
      *(undefined1 *)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402556:
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != 0)) {
    FUN_00d50b20();
  }
  local_2f0 = *param_2;
  local_2e8 = '\0';
  FUN_0172a090();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027cc900;
  local_3a8 = 1;
  if (DAT_027cc900 != 0) {
    local_3a8 = 1;
    FUN_00d50b00();
  }
  local_628 = 1;
  local_630 = lVar1;
  FUN_01400c50(&local_630,local_3b0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_014026e1;
      }
      goto LAB_0140268d;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_0140268d:
      *(undefined1 *)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014026e1:
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc900;
  if (DAT_027cc900 == 0) {
LAB_01402778:
    local_f0 = '\x01';
    local_f8 = lVar1;
    local_2e0 = 0;
  }
  else {
    FUN_00d50b00();
    local_2e0 = DAT_027cc900;
    local_f8 = lVar1;
    local_f0 = '\x01';
    if (DAT_027cc900 == 0) goto LAB_01402778;
    FUN_00d50b00();
  }
  local_2d8 = '\x01';
  FUN_00d98db0(&local_2e0,&local_f8,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014027f0;
      FUN_00d50b00();
      goto LAB_01402827;
    }
LAB_0140282c:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402827:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0140282c;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014027f0:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_2d8 != '\0') && (local_2e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a38;
  local_620 = *param_2;
  local_618 = 0;
  if (DAT_027c0a38 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a40;
  local_610 = lVar1;
  local_608 = 1;
  if (DAT_027c0a40 != 0) {
    FUN_00d50b00();
  }
  local_600 = lVar3;
  local_5f8 = 1;
  FUN_014004b0(&local_600,&local_610,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01402975;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01402975:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a48;
  local_5f0 = *param_2;
  local_5e8 = 0;
  if (DAT_027c0a48 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a50;
  local_5e0 = lVar1;
  local_5d8 = 1;
  if (DAT_027c0a50 != 0) {
    FUN_00d50b00();
  }
  local_5d0 = lVar3;
  local_5c8 = 1;
  FUN_014004b0(&local_5d0,&local_5e0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01402a98;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01402a98:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c7e08;
  if (DAT_027c7e08 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a50;
  local_2d0 = lVar1;
  local_2c8 = '\x01';
  if (DAT_027c0a50 != 0) {
    FUN_00d50b00();
  }
  local_2c0 = lVar3;
  local_2b8 = '\x01';
  FUN_00d98db0(&local_2c0,&local_2d0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402b70;
      FUN_00d50b00();
      goto LAB_01402be6;
    }
LAB_01402beb:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402be6:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01402beb;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402b70:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc8c0;
  if (DAT_027cc8c0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a58;
  local_2b0 = lVar1;
  local_2a8 = '\x01';
  if (DAT_027c0a58 != 0) {
    FUN_00d50b00();
  }
  local_2a0 = lVar3;
  local_298 = '\x01';
  FUN_00d98db0(&local_2a0,&local_2b0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402ce1;
      FUN_00d50b00();
      goto LAB_01402d18;
    }
LAB_01402d1d:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402d18:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01402d1d;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402ce1:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_298 != '\0') && (local_2a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027df510;
  if (DAT_027df510 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a60;
  local_290 = lVar1;
  local_288 = '\x01';
  if (DAT_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_280 = lVar3;
  local_278 = '\x01';
  FUN_00d98db0(&local_280,&local_290,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402e13;
      FUN_00d50b00();
      goto LAB_01402e4a;
    }
LAB_01402e4f:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402e4a:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01402e4f;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402e13:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a68;
  if (DAT_027c0a68 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a60;
  local_270 = lVar1;
  local_268 = '\x01';
  if (DAT_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_260 = lVar3;
  local_258 = '\x01';
  FUN_00d98db0(&local_260,&local_270,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01402f45;
      FUN_00d50b00();
      goto LAB_01402f7c;
    }
LAB_01402f81:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01402f7c:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01402f81;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01402f45:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a60;
  local_250 = lVar1;
  local_248 = '\x01';
  if (DAT_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_240 = lVar3;
  local_238 = '\x01';
  FUN_00d98db0(&local_240,&local_250,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403074;
      FUN_00d50b00();
      goto LAB_014030ab;
    }
LAB_014030b0:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014030ab:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_014030b0;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01403074:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  local_230 = *param_2;
  local_228 = '\0';
  FUN_017281b0();
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027c0a70;
  local_398 = 1;
  if (DAT_027c0a70 != 0) {
    local_398 = 1;
    FUN_00d50b00();
  }
  local_5b8 = 1;
  local_5c0 = lVar1;
  FUN_01400c50(&local_5c0,local_3a0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
        goto LAB_01403235;
      }
      goto LAB_014031e1;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar3 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014031e1:
      *(undefined1 *)(param_2 + 1) = 1;
      bVar4 = false;
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar3 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403235:
      *(undefined1 *)(param_2 + 1) = 1;
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027be638;
  if (DAT_027be638 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a70;
  local_220 = lVar1;
  local_218 = '\x01';
  if (DAT_027c0a70 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar3;
  local_208 = '\x01';
  FUN_00d98db0(&local_210,&local_220,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140332e;
      FUN_00d50b00();
      goto LAB_01403365;
    }
LAB_0140336a:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403365:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_0140336a;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_0140332e:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027be640;
  if (DAT_027be640 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a60;
  local_200 = lVar1;
  local_1f8 = '\x01';
  if (DAT_027c0a60 != 0) {
    FUN_00d50b00();
  }
  local_1f0 = lVar3;
  local_1e8 = '\x01';
  FUN_00d98db0(&local_1f0,&local_200,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140345d;
      FUN_00d50b00();
      goto LAB_01403494;
    }
LAB_01403499:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403494:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403499;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_0140345d:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a60;
  if (DAT_027c0a60 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df510;
  local_1e0 = lVar1;
  local_1d8 = '\x01';
  if (DAT_027df510 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar3;
  local_1c8 = '\x01';
  FUN_00d98db0(&local_1d0,&local_1e0,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_0140358c;
      FUN_00d50b00();
      goto LAB_014035c3;
    }
LAB_014035c8:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014035c3:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_014035c8;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_0140358c:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a70;
  if (DAT_027c0a70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027cc8f0;
  local_1c0 = lVar1;
  local_1b8 = '\x01';
  if (DAT_027cc8f0 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar3;
  local_1a8 = '\x01';
  FUN_00d98db0(&local_1b0,&local_1c0,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014036bb;
      FUN_00d50b00();
      goto LAB_014036f2;
    }
LAB_014036f7:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_014036f2:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_014036f7;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014036bb:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a30;
  if (DAT_027c0a30 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df560;
  local_1a0 = lVar1;
  local_198 = '\x01';
  if (DAT_027df560 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar3;
  local_188 = '\x01';
  FUN_00d98db0(&local_190,&local_1a0,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_014037ea;
      FUN_00d50b00();
      goto LAB_01403821;
    }
LAB_01403826:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403821:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403826;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_014037ea:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a40;
  if (DAT_027c0a40 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a78;
  local_180 = lVar1;
  local_178 = '\x01';
  if (DAT_027c0a78 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar3;
  local_168 = '\x01';
  FUN_00d98db0(&local_170,&local_180,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403919;
      FUN_00d50b00();
      goto LAB_01403950;
    }
LAB_01403955:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403950:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403955;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01403919:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a50;
  if (DAT_027c0a50 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df620;
  local_160 = lVar1;
  local_158 = '\x01';
  if (DAT_027df620 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  FUN_00d98db0(&local_150,&local_160,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403a48;
      FUN_00d50b00();
      goto LAB_01403a7f;
    }
LAB_01403a84:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403a7f:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403a84;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01403a48:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a28;
  if (DAT_027c0a28 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0a20;
  local_140 = lVar1;
  local_138 = '\x01';
  if (DAT_027c0a20 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  FUN_00d98db0(&local_130,&local_140,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403b77;
      FUN_00d50b00();
      goto LAB_01403bae;
    }
LAB_01403bb3:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403bae:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403bb3;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01403b77:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a58;
  if (DAT_027c0a58 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027cc8c0;
  local_120 = lVar1;
  local_118 = '\x01';
  if (DAT_027cc8c0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar3;
  local_108 = '\x01';
  FUN_00d98db0(&local_110,&local_120,0);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (bVar4) goto LAB_01403ca6;
      FUN_00d50b00();
      goto LAB_01403cdd;
    }
LAB_01403ce2:
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = param_2[1];
    if (!bVar4) {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_01403cdd:
      *(undefined1 *)(param_2 + 1) = 1;
      goto LAB_01403ce2;
    }
    *param_2 = (longlong)&DAT_024c5048;
    if (((char)lVar1 != '\0') && (puVar2 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_01403ca6:
    *(undefined1 *)(param_2 + 1) = 1;
    bVar4 = false;
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a80;
  local_5b0 = *param_2;
  local_5a8 = 0;
  if (DAT_027c0a80 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df8e0;
  local_5a0 = lVar1;
  local_598 = 1;
  if (DAT_027df8e0 != 0) {
    FUN_00d50b00();
  }
  local_590 = lVar3;
  local_588 = 1;
  FUN_014004b0(&local_590,&local_5a0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01403e2b;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01403e2b:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a88;
  local_580 = *param_2;
  local_578 = 0;
  if (DAT_027c0a88 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df8e0;
  local_570 = lVar1;
  local_568 = 1;
  if (DAT_027df8e0 != 0) {
    FUN_00d50b00();
  }
  local_560 = lVar3;
  local_558 = 1;
  FUN_014004b0(&local_560,&local_570,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01403f4e;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01403f4e:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a90;
  local_550 = *param_2;
  local_548 = 0;
  if (DAT_027c0a90 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df8e8;
  local_540 = lVar1;
  local_538 = 1;
  if (DAT_027df8e8 != 0) {
    FUN_00d50b00();
  }
  local_530 = lVar3;
  local_528 = 1;
  FUN_014004b0(&local_530,&local_540,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404071;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404071:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0a98;
  local_520 = *param_2;
  local_518 = 0;
  if (DAT_027c0a98 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027df8e8;
  local_510 = lVar1;
  local_508 = 1;
  if (DAT_027df8e8 != 0) {
    FUN_00d50b00();
  }
  local_500 = lVar3;
  local_4f8 = 1;
  FUN_014004b0(&local_500,&local_510,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404194;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404194:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0aa0;
  local_4f0 = *param_2;
  local_4e8 = 0;
  if (DAT_027c0aa0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0aa8;
  local_4e0 = lVar1;
  local_4d8 = 1;
  if (DAT_027c0aa8 != 0) {
    FUN_00d50b00();
  }
  local_4d0 = lVar3;
  local_4c8 = 1;
  FUN_014004b0(&local_4d0,&local_4e0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014042b7;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014042b7:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0ab0;
  local_4c0 = *param_2;
  local_4b8 = 0;
  if (DAT_027c0ab0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027c0ab8;
  local_4b0 = lVar1;
  local_4a8 = 1;
  if (DAT_027c0ab8 != 0) {
    FUN_00d50b00();
  }
  local_4a0 = lVar3;
  local_498 = 1;
  FUN_014004b0(&local_4a0,&local_4b0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014043da;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014043da:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0ac0;
  local_490 = *param_2;
  local_488 = 0;
  if (DAT_027c0ac0 != 0) {
    FUN_00d50b00();
  }
  local_480 = lVar1;
  local_478 = 1;
  lVar3 = *(longlong *)(unaff_RSI + 0x78);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_468 = 1;
  local_470 = lVar3;
  FUN_014004b0(&local_470,&local_480,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_014044fe;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_014044fe:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0ac8;
  local_460 = *param_2;
  local_458 = 0;
  if (DAT_027c0ac8 != 0) {
    FUN_00d50b00();
  }
  local_450 = lVar1;
  local_448 = 1;
  lVar3 = *(longlong *)(unaff_RSI + 0x80);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_438 = 1;
  local_440 = lVar3;
  FUN_014004b0(&local_440,&local_450,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_01404625;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01404625:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0ad0;
  local_430 = *param_2;
  local_428 = 0;
  if (DAT_027c0ad0 != 0) {
    FUN_00d50b00();
  }
  local_420 = lVar1;
  local_418 = 1;
  lVar3 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_408 = 1;
  local_410 = lVar3;
  FUN_014004b0(&local_410,&local_420,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] == '\0') {
      if (!bVar4) {
        FUN_00d50b00();
      }
      goto LAB_0140474c;
    }
    if (bVar4) {
      FUN_00d50b20();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_0140474c:
    local_70 = param_2 + 1;
    *(undefined1 *)local_70 = 1;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027c0ad8;
  local_400 = *param_2;
  local_3f8 = 0;
  if (DAT_027c0ad8 != 0) {
    FUN_00d50b00();
  }
  local_3f0 = lVar1;
  local_3e8 = 1;
  lVar3 = *(longlong *)(unaff_RSI + 0x90);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  local_3d8 = 1;
  local_3e0 = lVar3;
  FUN_014004b0(&local_3e0,&local_3f0,1);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == &DAT_024c5048) {
    if ((char)param_2[1] != '\0') {
      if (bVar4) {
        FUN_00d50b20();
      }
      goto LAB_0140487a;
    }
    if (!bVar4) {
      FUN_00d50b00();
    }
  }
  else {
    lVar5 = param_2[1];
    if (bVar4) {
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      *param_2 = (longlong)&DAT_024c5048;
      if (((char)lVar5 != '\0') && (puVar2 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(param_2 + 1) = 1;
LAB_0140487a:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @013f70b0 — 4590 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_013f70b0(double param_1,double param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte in_CL;
  pthread_key_t pVar13;
  pthread_key_t pVar14;
  pthread_key_t pVar15;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  uint *in_RDX;
  longlong lVar20;
  pthread_key_t *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar21;
  ulonglong uVar22;
  bool bVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double local_b8;
  pthread_key_t local_ac;
  int iVar16;
  
  pVar14 = *(pthread_key_t *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
  lVar17 = (longlong)(int)pVar14;
  pVar13 = *unaff_RSI;
  pVar15 = 1;
  if (0 < (int)pVar13) {
    pVar15 = pVar13;
  }
  lVar8 = **(longlong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
  pvVar6 = _pthread_getspecific(pVar13);
  if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
  }
  plVar1 = (longlong *)(unaff_RDI + 0x48);
  dVar28 = (double)(int)pVar15 * param_2;
  if (*(double *)(lVar8 + 0x38) <= param_1) {
    lVar8 = lVar17 + -1;
    lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pVar13 = (pthread_key_t)lVar8;
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar7 + 0x38) || param_1 == *(double *)(lVar7 + 0x38)) {
      uVar5 = *in_RDX;
      uVar22 = (ulonglong)uVar5;
      if (((int)uVar5 < 0) || ((int)pVar14 <= (int)uVar5)) {
        *in_RDX = 0xffffffff;
        pVar21 = uVar5;
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + uVar22 * 8);
        uVar18 = uVar22;
        pvVar6 = _pthread_getspecific(uVar5);
        if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
        }
        pVar21 = (pthread_key_t)uVar18;
        if (*(double *)(lVar7 + 0x38) <= param_1) {
          if ((int)uVar5 < (int)pVar13) {
            lVar7 = 0;
            do {
              lVar9 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + uVar22 * 8 + lVar7 * 8);
              pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
              if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar9 + 0x38) <= param_1) {
                lVar9 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + uVar22 * 8 + 8 + lVar7 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar9 + 0x38)) {
                  uVar22 = uVar22 + lVar7;
                  pVar21 = (pthread_key_t)uVar18;
                  if ((int)uVar22 != -1) goto LAB_013f7621;
                  break;
                }
              }
              pVar21 = (pthread_key_t)uVar18;
              if ((lVar8 <= (longlong)(uVar22 + lVar7 + 1)) ||
                 (iVar4 = (int)lVar7, lVar7 = lVar7 + 1, iVar4 == 2)) break;
            } while( true );
          }
        }
        else if (0 < (int)uVar5) {
          iVar4 = -1;
          do {
            lVar7 = *(longlong *)(*plVar1 + 0x10);
            lVar9 = *(longlong *)(lVar7 + (ulonglong)(uVar5 + iVar4) * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar21 = (pthread_key_t)lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            if (*(double *)(lVar9 + 0x38) <= param_1) {
              lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + uVar22 * 8);
              pvVar6 = _pthread_getspecific(pVar21);
              if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
              }
              if (param_1 < *(double *)(lVar7 + 0x38)) {
                uVar22 = (ulonglong)(uVar5 + iVar4);
                goto LAB_013f7621;
              }
            }
            if ((longlong)uVar22 < 2) break;
            uVar22 = uVar22 - 1;
            bVar23 = iVar4 != -3;
            iVar4 = iVar4 + -1;
          } while (bVar23);
        }
      }
      lVar7 = **(longlong **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar21);
      if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
      }
      uVar22 = 0;
      if ((*(double *)(lVar7 + 0x38) != param_1) || (NAN(*(double *)(lVar7 + 0x38)) || NAN(param_1))
         ) {
        uVar5 = FUN_013f3690(param_1);
        uVar22 = 0;
        if (uVar5 != 0xffffffff) {
          uVar22 = (ulonglong)uVar5;
        }
      }
LAB_013f7621:
      uVar5 = (uint)uVar22;
      lVar9 = (longlong)(int)uVar5;
      lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar9 * 8);
      uVar18 = uVar22;
      pvVar6 = _pthread_getspecific(uVar5);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_ac = uVar5 + 1;
      dVar29 = *(double *)(lVar7 + 0x38);
      lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar9 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
      }
      local_b8 = *(double *)(lVar7 + 0x40);
      lVar10 = (longlong)(int)local_ac;
      lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar24 = *(double *)(lVar7 + 0x38);
      lVar7 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar10 * 8);
      pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
      if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
      }
      dVar25 = *(double *)(lVar7 + 0x40);
      if ((param_2 == 0.0) && (!NAN(param_2))) {
        *unaff_RSI = pVar15;
        *in_RDX = uVar5;
        return (param_1 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
      }
      dVar28 = dVar28 + param_1;
      dVar3 = param_1 + param_2;
      if (param_2 <= 0.0) {
        iVar4 = 0;
        if (dVar3 < dVar29) {
          uVar22 = uVar22 & 0xffffffff;
          lVar8 = (uVar22 << 0x20) + 0x100000000;
          lVar17 = uVar22 * 8;
          lVar7 = 0;
          do {
            if ((int)(uVar5 + (int)lVar7) < 1) {
              if (in_CL == 0) {
                lVar17 = **(longlong **)(*plVar1 + 0x10);
                pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar9 = lVar9 * 8;
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar9 + lVar7 * 8);
                lVar10 = lVar9;
                pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
                pVar13 = (pthread_key_t)lVar10;
                if ((pvVar6 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar17 + 0x38);
                lVar17 = *(longlong *)(lVar9 + *(longlong *)(*plVar1 + 0x10) + lVar7 * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + (lVar8 >> 0x1d));
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + (lVar8 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar13);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *unaff_RSI = 1;
              *in_RDX = 0;
              return dVar28;
            }
            lVar10 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar17 + -8 + lVar7 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8)
              ;
            }
            dVar29 = *(double *)(lVar10 + 0x38);
            lVar7 = lVar7 + -1;
            lVar8 = lVar8 + -0x100000000;
          } while (dVar3 < dVar29);
          lVar8 = *(longlong *)(*plVar1 + 0x10);
          lVar9 = *(longlong *)(lVar8 + (uVar22 + lVar7 & 0xffffffff) * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar8);
          pVar13 = (pthread_key_t)lVar8;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar9 + 0x40);
          lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar17 + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          dVar24 = *(double *)(lVar8 + 0x38);
          lVar17 = *(longlong *)(lVar17 + *(longlong *)(*plVar1 + 0x10) + 8 + lVar7 * 8);
          pvVar6 = _pthread_getspecific(pVar13);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
          uVar5 = (uint)(uVar22 + lVar7);
        }
        if (dVar29 <= dVar28) goto LAB_013f8197;
        iVar19 = (uint)(uVar5 == 0 & in_CL) +
                 (int)((param_1 - dVar29) / (double)(_DAT_023945b0 ^ (ulonglong)param_2));
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      else {
        iVar4 = 0;
        if (dVar24 < dVar3) {
          lVar7 = lVar10 << 0x20;
          do {
            lVar11 = lVar7 >> 0x1d;
            lVar9 = lVar7 >> 0x20;
            if (lVar8 <= lVar10) {
              if (in_CL == 0) {
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
              }
              else {
                lVar17 = *(longlong *)(*plVar1 + 0x10);
                lVar8 = *(longlong *)(lVar17 + (lVar7 + -0x100000000 >> 0x1d));
                pvVar6 = _pthread_getspecific((pthread_key_t)lVar17);
                pVar14 = (pthread_key_t)lVar17;
                if ((pvVar6 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                  lVar8 = *(longlong *)
                           (lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
                }
                dVar29 = *(double *)(lVar8 + 0x38);
                lVar17 = *(longlong *)
                          (*(longlong *)(*plVar1 + 0x10) + (lVar7 + -0x100000000 >> 0x20) * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = *(double *)(lVar17 + 0x40);
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar11);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar24 = *(double *)(lVar17 + 0x38);
                lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar9 * 8);
                pvVar6 = _pthread_getspecific(pVar14);
                if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                dVar28 = (dVar3 - dVar29) *
                         ((*(double *)(lVar17 + 0x40) - dVar28) / (dVar24 - dVar29)) + dVar28;
              }
              *unaff_RSI = 1;
              *in_RDX = pVar13;
              return dVar28;
            }
            lVar20 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + 8 + lVar10 * 8);
            pvVar6 = _pthread_getspecific((pthread_key_t)uVar18);
            if ((pvVar6 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
              lVar20 = *(longlong *)(lVar20 + 0x20 + (ulonglong)(*(uint *)(lVar12 + 0x154) & 1) * 8)
              ;
            }
            pVar21 = (pthread_key_t)uVar18;
            dVar24 = *(double *)(lVar20 + 0x38);
            lVar7 = lVar7 + 0x100000000;
            iVar4 = (int)uVar22;
            uVar5 = iVar4 + 1;
            uVar22 = (ulonglong)uVar5;
            lVar10 = lVar10 + 1;
          } while (dVar24 < dVar3);
          lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar11);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          dVar29 = *(double *)(lVar17 + 0x38);
          lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar9 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_b8 = *(double *)(lVar17 + 0x40);
          lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + lVar10 * 8);
          pvVar6 = _pthread_getspecific(pVar21);
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
          }
          local_ac = iVar4 + 2;
          dVar25 = *(double *)(lVar17 + 0x40);
          iVar4 = 1;
        }
        if (dVar28 <= dVar24) goto LAB_013f8197;
        iVar19 = (uint)(local_ac == pVar13 & in_CL) + (int)((dVar24 - param_1) / param_2);
        iVar16 = 1;
        if (0 < iVar19) {
          iVar16 = iVar19;
        }
      }
      dVar28 = (double)iVar16 * param_2 + param_1;
      pVar15 = iVar16 + iVar4;
LAB_013f8197:
      *unaff_RSI = pVar15;
      *in_RDX = uVar5;
      return (dVar28 - dVar29) * ((dVar25 - local_b8) / (dVar24 - dVar29)) + local_b8;
    }
    *in_RDX = pVar13;
    pVar21 = 1;
    if (0.0 <= param_2) {
LAB_013f72d1:
      if (in_CL != 0) goto LAB_013f78bd;
      lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
      pvVar6 = _pthread_getspecific(pVar14);
      goto joined_r0x013f72f8;
    }
    lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    pVar21 = pVar15;
    if (*(double *)(lVar8 + 0x38) <= dVar28 + param_1 &&
        dVar28 + param_1 != *(double *)(lVar8 + 0x38)) goto LAB_013f72d1;
    lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    iVar4 = (int)((param_1 - *(double *)(lVar8 + 0x38)) /
                 (double)(_DAT_023945b0 ^ (ulonglong)param_2));
    pVar21 = 1;
    if (-1 < iVar4) {
      pVar21 = iVar4 + 1;
    }
LAB_013f78bd:
    lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar8 + 0x38);
    lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -0x10 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar8 + 0x40);
    lVar8 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
    }
    uVar2 = *(undefined8 *)(lVar8 + 0x38);
    lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + -8 + lVar17 * 8);
    pvVar6 = _pthread_getspecific(pVar14);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (undefined4)uVar2;
    uVar27 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    *in_RDX = 0;
    pVar21 = 1;
    if (0.0 < param_2) {
      lVar17 = **(longlong **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      pVar21 = pVar15;
      if (dVar28 + param_1 < *(double *)(lVar17 + 0x38)) goto LAB_013f71d3;
      lVar17 = **(longlong **)(*plVar1 + 0x10);
      pvVar6 = _pthread_getspecific(pVar13);
      if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      iVar4 = (int)((*(double *)(lVar17 + 0x38) - param_1) / param_2);
      pVar13 = iVar4 + 1;
      pVar21 = 1;
      if (-1 < iVar4) {
        pVar21 = pVar13;
      }
    }
    else {
LAB_013f71d3:
      if (in_CL == 0) {
        lVar17 = **(longlong **)(*plVar1 + 0x10);
        pvVar6 = _pthread_getspecific(pVar13);
joined_r0x013f72f8:
        if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        dVar29 = *(double *)(lVar17 + 0x40);
        goto LAB_013f7a0a;
      }
    }
    lVar17 = **(longlong **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar28 = *(double *)(lVar17 + 0x38);
    lVar17 = **(longlong **)(*plVar1 + 0x10);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar29 = *(double *)(lVar17 + 0x40);
    lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    uVar2 = *(undefined8 *)(lVar17 + 0x38);
    lVar17 = *(longlong *)(*(longlong *)(*plVar1 + 0x10) + 8);
    pvVar6 = _pthread_getspecific(pVar13);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar24 = *(double *)(lVar17 + 0x40) - dVar29;
    uVar26 = (undefined4)uVar2;
    uVar27 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  dVar29 = (((double)(int)pVar21 * param_2 + param_1) - dVar28) *
           (dVar24 / ((double)CONCAT44(uVar27,uVar26) - dVar28)) + dVar29;
LAB_013f7a0a:
  *unaff_RSI = pVar21;
  return dVar29;
}




// ============================================================
// @013f9470 — 2707 bytes
// ============================================================

int * FUN_013f9470(float param_1,longlong *param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 in_CL;
  int iVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *unaff_RSI;
  int *unaff_RDI;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  longlong local_b8;
  char local_b0;
  undefined4 local_88;
  undefined4 uStack_84;
  char local_80;
  longlong local_58;
  code *local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(uStack_84,local_88) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(uStack_84,local_88) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f98d7;
      }
    }
    else if (local_58 != 0) {
LAB_013f98d7:
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (longlong)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (pthread_key_t)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f9cef;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f9cef;
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (longlong)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9bff;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f9bff:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f9cef;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f9762;
    }
  }
  else if (local_58 != 0) {
LAB_013f9762:
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (pthread_key_t)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f9cef;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f9cef;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (longlong)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (longlong)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar15 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar15 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar15) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f9a9f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f9a9f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f9cef:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,unaff_RDI);
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    fVar14 = DAT_02390124 - param_1;
    lVar13 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (longlong *)*unaff_RSI;
      pVar8 = (pthread_key_t)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (longlong *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,in_CL);
      plVar9 = (longlong *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (longlong *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar16 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,in_CL);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar16 * (double)param_1 + dVar15 * (double)fVar14);
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (longlong *)(ulonglong)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *(longlong **)unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 2) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @013f8740 — 2626 bytes
// ============================================================

undefined8 * FUN_013f8740(undefined1 param_1,longlong *param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  longlong local_a8;
  char local_a0;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  char local_80;
  longlong local_58;
  code *local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25683c0;
  *puVar2 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  FUN_00c8e7d0();
  if ((local_80 != '\0') && (CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar11 = *(int *)(local_58 + 0xc);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  iVar7 = *(int *)(CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78) + 0xc);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (iVar7 <= iVar11) {
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f8ba7;
      }
    }
    else if (local_58 != 0) {
LAB_013f8ba7:
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = lVar13;
      local_40 = 0xffffffff;
      local_38 = 0;
      while( true ) {
        lVar13 = (longlong)(int)local_40;
        iVar11 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        if (*(int *)(local_48 + 0xc) <= iVar11) break;
        lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
        local_58 = lVar13;
        pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
        lVar6 = local_58;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
          lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        iVar11 = *(int *)(puVar2 + 3);
        FUN_00c8e340();
        *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar11 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar11 = 0;
          }
          local_40 = CONCAT44(iVar11,(int)local_40);
        }
      }
      lVar13 = local_48;
      FUN_01a81420();
      pVar8 = (pthread_key_t)lVar13;
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar8);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    lVar13 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 == 0) goto LAB_013f8fbf;
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_58 == 0) goto LAB_013f8fbf;
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar11 = -local_40._4_4_;
        }
        else {
          iVar11 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar11);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      lVar6 = (longlong)iVar11;
      iVar7 = iVar11 + 7;
      if (-1 < lVar6) {
        iVar7 = iVar11;
      }
      if (7 < lVar6) {
        iVar7 = iVar7 >> 3;
        lVar4 = 0;
        do {
          dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
          if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
             (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8ecf;
          lVar4 = lVar4 + 1;
        } while (iVar7 != (int)lVar4);
      }
      FUN_00c8e340(iVar7,1);
      *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f8ecf:
    }
    FUN_01a81420();
    FUN_00d50b20();
    goto LAB_013f8fbf;
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_013f8a27;
    }
  }
  else if (local_58 != 0) {
LAB_013f8a27:
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = lVar13;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar13 = (longlong)(int)local_40;
      iVar11 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar11);
      if (*(int *)(local_48 + 0xc) <= iVar11) break;
      lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
      local_58 = lVar13;
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
      lVar6 = local_58;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
        lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      iVar11 = *(int *)(puVar2 + 3);
      FUN_00c8e340();
      *(undefined8 *)(puVar2[2] + (longlong)iVar11) = *(undefined8 *)(lVar13 + 0x38);
      if (local_40._4_4_ != 0) {
        if (local_40 < 0) {
          iVar11 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar11 = 0;
        }
        local_40 = CONCAT44(iVar11,(int)local_40);
      }
    }
    lVar13 = local_48;
    FUN_01a81420();
    pVar8 = (pthread_key_t)lVar13;
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  lVar13 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 == 0) goto LAB_013f8fbf;
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_013f8fbf;
  local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = lVar13;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar11 = -local_40._4_4_;
      }
      else {
        iVar11 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar11);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar11 = 0;
      }
      local_40 = CONCAT44(iVar11,(int)local_40);
    }
    lVar13 = (longlong)(int)local_40;
    iVar11 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar11);
    if (*(int *)(local_48 + 0xc) <= iVar11) break;
    lVar13 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar13 * 8);
    local_58 = lVar13;
    pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_48 + 0x10));
    lVar6 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar13 = lVar6, lVar4 != 0)) {
      lVar13 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    iVar11 = *(int *)(puVar2 + 3);
    lVar6 = (longlong)iVar11;
    iVar7 = iVar11 + 7;
    if (-1 < lVar6) {
      iVar7 = iVar11;
    }
    if (7 < lVar6) {
      iVar7 = iVar7 >> 3;
      lVar4 = 0;
      do {
        dVar14 = *(double *)(puVar2[2] + lVar4 * 8);
        if ((dVar14 == *(double *)(lVar13 + 0x38)) &&
           (!NAN(dVar14) && !NAN(*(double *)(lVar13 + 0x38)))) goto LAB_013f8d6f;
        lVar4 = lVar4 + 1;
      } while (iVar7 != (int)lVar4);
    }
    FUN_00c8e340(iVar7,1);
    *(undefined8 *)(puVar2[2] + lVar6) = *(undefined8 *)(lVar13 + 0x38);
LAB_013f8d6f:
  }
  FUN_01a81420();
  FUN_00d50b20();
LAB_013f8fbf:
  local_58 = 0;
  local_50 = FUN_00e8b590;
  plVar9 = &local_58;
  _qsort_r(plVar9,8,0x1708ec0,param_4,
           (int *)CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78));
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  plVar5 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar5 + 0x18))();
  if (7 < *(int *)(puVar2 + 3)) {
    lVar13 = 0;
    do {
      uVar1 = *(undefined8 *)(puVar2[2] + lVar13 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)plVar9);
      plVar12 = plVar5;
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = plVar5;
        plVar12 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      plVar10 = (longlong *)*unaff_RSI;
      pVar8 = (pthread_key_t)plVar9;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar10 = (longlong *)*unaff_RSI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar10 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar14 = (double)(**(code **)(*plVar10 + 0x3d8))(uVar1,param_1);
      plVar9 = (longlong *)*param_2;
      pvVar3 = _pthread_getspecific(pVar8);
      if (pvVar3 != (void *)0x0) {
        plVar9 = (longlong *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      dVar15 = (double)(**(code **)(*plVar9 + 0x3d8))(uVar1,param_1);
      (**(code **)(*plVar12 + 0x418))(uVar1,dVar14 * dVar15);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = *(int *)(puVar2 + 3);
      iVar7 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      plVar9 = (longlong *)(ulonglong)(uint)(iVar7 >> 3);
      lVar13 = lVar13 + 1;
    } while ((int)lVar13 < iVar7 >> 3);
  }
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @013f07a0 — 2389 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013f07a0(double param_1,double param_2,double param_3,double param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t in_ECX;
  longlong *plVar7;
  int unaff_ESI;
  longlong *unaff_RDI;
  bool bVar8;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_res8;
  double local_res10;
  longlong local_128;
  char local_120;
  longlong local_f8;
  char local_f0;
  longlong local_d8;
  char local_d0;
  undefined4 local_a8;
  undefined4 local_48;
  
  dVar14 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) - param_1;
  dVar11 = param_3 - param_1;
  dVar13 = in_XMM4_Qa - (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  dVar16 = param_4 - param_2;
  dVar17 = in_XMM5_Qa - (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  if ((dVar14 != 0.0) || (NAN(dVar14))) {
    dVar14 = ((double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) - param_2) / dVar14;
    dVar19 = dVar14 * dVar14;
    dVar9 = (double)((ulonglong)(dVar14 * dVar16 - dVar19 * dVar11) & _DAT_023908f0);
    dVar10 = (double)((ulonglong)(dVar14 * dVar17 - dVar19 * dVar13) & _UNK_023908f8);
    dVar15 = (double)((ulonglong)(dVar11 * dVar14 - dVar16) & _DAT_023908f0);
    dVar14 = (double)((ulonglong)(dVar13 * dVar14 - dVar17) & _UNK_023908f8);
    dVar18 = local_res8 * (dVar19 + DAT_0238fee8);
    dVar19 = local_res10 * (dVar19 + DAT_0238fee8);
    auVar1._4_4_ = (uint)(dVar18 < dVar10) * -0x80000000;
    auVar1._0_4_ = (uint)(dVar18 < dVar9) * -0x80000000;
    auVar1._8_4_ = (uint)(dVar19 < dVar15) * -0x80000000;
    auVar1._12_4_ = (uint)(dVar19 < dVar14) * -0x80000000;
    iVar3 = movmskps(in_EAX,auVar1);
    if (iVar3 == 0) {
      return;
    }
    auVar2._4_4_ = (uint)(dVar10 <= dVar18 + dVar18) * -0x80000000;
    auVar2._0_4_ = (uint)(dVar9 <= dVar18 + dVar18) * -0x80000000;
    auVar2._8_4_ = (uint)(dVar15 <= dVar19 + dVar19) * -0x80000000;
    auVar2._12_4_ = (uint)(dVar14 <= dVar19 + dVar19) * -0x80000000;
    uVar4 = movmskps(iVar3,auVar2);
    bVar8 = (char)uVar4 == '\x0f';
  }
  else {
    if ((dVar11 <= local_res8) && (dVar13 <= local_res8)) {
      return;
    }
    dVar14 = local_res8 + local_res8;
    in_ECX = CONCAT31((int3)(in_ECX >> 8),dVar11 <= dVar14);
    bVar8 = dVar13 <= dVar14 && dVar11 <= dVar14;
  }
  if (unaff_ESI < 0x19) {
    dVar14 = (in_XMM5_Qa - param_4) * (in_XMM5_Qa - param_4) +
             (in_XMM4_Qa - param_3) * (in_XMM4_Qa - param_3);
    dVar11 = dVar16 * dVar16 + dVar11 * dVar11;
    dVar13 = dVar17 * dVar17 + dVar13 * dVar13;
    if (((((bVar8) || (dVar14 <= DAT_0240e9b8 * (dVar11 + dVar13))) ||
         ((dVar11 + dVar13) * DAT_0241c3f0 <= dVar14)) ||
        ((dVar11 <= dVar14 * DAT_0240d7d0 || (dVar11 <= dVar13 * DAT_0240d7d0)))) ||
       ((dVar13 <= dVar14 * DAT_0240d7d0 || (dVar13 <= DAT_0240d7d0 * dVar11)))) {
      dVar14 = (DAT_023942d0 * dVar14 + dVar11) / (dVar14 + dVar11 + dVar13);
      dVar10 = DAT_0238fee8 - dVar14;
      dVar16 = param_3 * dVar14 + param_1 * dVar10;
      dVar17 = in_XMM4_Qa * dVar14 + param_3 * dVar10;
      dVar19 = param_4 * dVar14 + param_2 * dVar10;
      dVar13 = in_XMM5_Qa * dVar14 + param_4 * dVar10;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) +
                        in_XMM4_Qa * dVar10) + dVar17 * dVar10;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar10
                       ) + dVar13 * dVar10;
      dVar13 = dVar14 * dVar9 + dVar10 * (dVar14 * dVar13 + dVar10 * dVar19);
      FUN_013f07a0(SUB84(param_1,0),param_2,dVar16,dVar19,*unaff_RDI,0);
      plVar7 = (longlong *)*unaff_RDI;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (longlong *)*unaff_RDI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar10 * (dVar14 * dVar17 + dVar10 * dVar16),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      dVar11 = dVar11 / (dVar11 + dVar14 + dVar13);
      dVar18 = DAT_0238fee8 - dVar11;
      dVar17 = in_XMM4_Qa * dVar11 + param_3 * dVar18;
      dVar19 = in_XMM5_Qa * dVar11 + param_4 * dVar18;
      dVar9 = dVar11 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + in_XMM4_Qa * dVar18;
      dVar10 = dVar11 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + in_XMM5_Qa * dVar18;
      dVar15 = dVar11 * dVar9 + dVar17 * dVar18;
      dVar16 = dVar11 * dVar10 + dVar19 * dVar18;
      dVar17 = dVar11 * dVar15 +
               dVar18 * (dVar11 * dVar17 + dVar18 * (param_3 * dVar11 + param_1 * dVar18));
      dVar19 = dVar11 * dVar16 +
               dVar18 * (dVar11 * dVar19 + dVar18 * (param_4 * dVar11 + param_2 * dVar18));
      FUN_013f07a0(SUB84(param_1,0),param_2);
      plVar7 = (longlong *)*unaff_RDI;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (longlong *)*unaff_RDI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_a8 = SUB84(dVar17,0);
      (**(code **)(*plVar7 + 0x418))(local_a8,dVar19);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      dVar14 = dVar14 / (dVar13 + dVar14);
      dVar12 = DAT_0238fee8 - dVar14;
      dVar18 = dVar9 * dVar14 + dVar15 * dVar12;
      dVar17 = dVar15 * dVar14 + dVar17 * dVar12;
      dVar13 = dVar10 * dVar14 + dVar16 * dVar12;
      dVar16 = dVar16 * dVar14 + dVar19 * dVar12;
      dVar11 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da) + dVar12 * dVar9) +
               dVar12 * dVar18;
      dVar9 = dVar14 * (dVar14 * (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da) + dVar12 * dVar10) +
              dVar12 * dVar13;
      dVar13 = dVar14 * dVar9 + dVar12 * (dVar12 * dVar16 + dVar14 * dVar13);
      FUN_013f07a0(local_a8,dVar19,dVar17,dVar16);
      plVar7 = (longlong *)*unaff_RDI;
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        plVar7 = (longlong *)*unaff_RDI;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      local_48 = SUB84(dVar14 * dVar11 + dVar12 * (dVar12 * dVar17 + dVar14 * dVar18),0);
      (**(code **)(*plVar7 + 0x418))(local_48,dVar13);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_013f07a0(local_48,dVar13,dVar11,dVar9);
  }
  return;
}




// ============================================================
// @013fa1f0 — 2202 bytes
// ============================================================

void FUN_013fa1f0(void)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  pthread_key_t pVar11;
  char *pcVar12;
  longlong unaff_RSI;
  longlong *plVar13;
  undefined8 *unaff_RDI;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  double local_a8;
  double local_98;
  double dStack_90;
  undefined1 local_78 [16];
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  int local_48;
  int iStack_44;
  int local_40;
  char local_38 [8];
  
  local_50 = *(longlong *)(unaff_RSI + 0x48);
  iVar14 = *(int *)(local_50 + 0xc);
  local_58[0] = '\0';
  local_60 = 0;
  local_48 = -1;
  iStack_44 = 0;
  local_40 = 0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_a8 = 0.0;
  local_78 = ZEXT816(0);
LAB_013fa25e:
  iVar15 = -1;
  do {
    if (iStack_44 != 0) {
      if (iStack_44 < 1) {
        iStack_44 = -iStack_44;
      }
      else {
        local_48 = local_48 - iStack_44;
        FUN_00d23690();
        local_40 = local_40 + iStack_44;
        iStack_44 = 0;
      }
    }
    lVar6 = (longlong)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(local_50 + 0xc) <= local_48) {
      lVar6 = local_50;
      FUN_01a81420();
      pVar11 = (pthread_key_t)lVar6;
      if (iVar14 == 0) {
        plVar10 = (longlong *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))(0,DAT_0238fee8);
        if ((local_118 != '\0') && (local_120 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar11);
        plVar13 = plVar10;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x418))((int)DAT_0238fee8,DAT_0238fee8);
        if ((local_108 != '\0') && (local_110 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        dVar17 = (double)iVar14;
        uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
        auVar18._8_4_ = SUB84(dVar17,0);
        auVar18._0_8_ = dVar17;
        auVar18._12_4_ = uVar16;
        auVar18 = divpd(local_78,auVar18);
        auVar5._8_8_ = dStack_90;
        auVar5._0_8_ = local_98;
        auVar20._8_4_ = SUB84(dVar17,0);
        auVar20._0_8_ = dVar17;
        auVar20._12_4_ = uVar16;
        auVar20 = divpd(auVar5,auVar20);
        dVar17 = auVar18._8_8_;
        dVar19 = (auVar20._0_8_ - dVar17 * auVar18._0_8_) / (auVar20._8_8_ - dVar17 * dVar17);
        dVar17 = auVar18._0_8_ - dVar17 * dVar19;
        plVar10 = (longlong *)FUN_000bea40();
        (**(code **)(*plVar10 + 0x18))();
        if ((NAN(dVar17)) || (NAN(dVar19))) {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,DAT_0238fee8);
          if ((local_f8 != '\0') && (local_100 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          FUN_00d23340();
          pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),local_58[0]);
          pcVar12 = local_38;
          if (local_58[0] != '\0') {
            pcVar12 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar12 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar11);
          lVar6 = local_60;
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          (**(code **)(*plVar13 + 0x418))((int)*(undefined8 *)(lVar6 + 0x38),DAT_0238fee8);
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar7 = _pthread_getspecific(pVar11);
          plVar13 = plVar10;
          if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar13 + 0x418))(0,dVar17);
          if ((local_d8 != '\0') && (local_e0 != 0)) {
            FUN_00d50b20();
          }
          if (iVar15 != -1) {
            pvVar7 = _pthread_getspecific(pVar11);
            plVar13 = plVar10;
            if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            lVar6 = *(longlong *)(*(longlong *)(unaff_RSI + 0x48) + 0x10);
            lVar9 = *(longlong *)(lVar6 + (longlong)iVar15 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)lVar6);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            (**(code **)(*plVar13 + 0x418))((int)*(undefined8 *)(lVar9 + 0x38),dVar17);
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if (iVar15 != *(int *)(*(longlong *)(unaff_RSI + 0x48) + 0xc) + -1) {
              FUN_00d23340();
              pVar11 = (pthread_key_t)CONCAT71((int7)((ulonglong)lVar6 >> 8),local_58[0]);
              pcVar12 = local_38;
              if (local_58[0] != '\0') {
                pcVar12 = local_58;
              }
              local_38[0] = local_58[0];
              *pcVar12 = '\0';
              if ((local_58[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              if ((pvVar7 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
                dVar4 = *(double *)(local_60 + 0x38);
              }
              else {
                dVar4 = *(double *)
                         (*(longlong *)
                           (local_60 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) + 0x38)
                ;
              }
              if ((local_38[0] != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific(pVar11);
              plVar13 = plVar10;
              if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar13 = (longlong *)plVar10[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              dVar17 = dVar17 + dVar19 * dVar4;
              dVar19 = DAT_0240e410;
              if (DAT_0240e410 <= dVar17) {
                dVar19 = dVar17;
              }
              (**(code **)(*plVar13 + 0x418))(SUB84(dVar4,0),dVar19);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      *unaff_RDI = plVar10;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    lVar9 = *(longlong *)(local_50 + 0x10);
    local_60 = *(longlong *)(lVar9 + 8 + lVar6 * 8);
    if (iVar15 == -1) {
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
      lVar6 = local_60;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      if (local_a8 <= *(double *)(lVar6 + 0x40)) break;
      iVar15 = local_40 + local_48;
    }
    pVar11 = (pthread_key_t)lVar9;
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar17 = local_78._8_8_ + *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar4 = local_78._0_8_;
    dVar19 = *(double *)(lVar6 + 0x40);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar6 + 0x38);
    pvVar7 = _pthread_getspecific(pVar11);
    lVar6 = local_60;
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    local_98 = dVar3 * *(double *)(lVar6 + 0x40) + local_98;
    dStack_90 = dStack_90 + dVar1 * dVar2;
    local_78._8_4_ = SUB84(dVar17,0);
    local_78._0_8_ = dVar4 + dVar19;
    local_78._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  } while( true );
  pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
  lVar6 = local_60;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    lVar6 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
  }
  iVar14 = iVar14 + -1;
  local_a8 = *(double *)(lVar6 + 0x40);
  goto LAB_013fa25e;
}




// ============================================================
// @013f18d0 — 2201 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013f195c) */

ulonglong FUN_013f18d0(undefined8 param_1)

{
  double dVar1;
  char *pcVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong unaff_RDI;
  longlong lVar10;
  longlong local_60;
  char local_58 [8];
  double local_50;
  double local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_38[0] = '\0';
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_013f21f6;
  }
  FUN_00d23310();
  lVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_58[0]);
  local_40[0] = local_58[0];
  pcVar8 = local_40;
  pcVar2 = local_58;
  if (local_58[0] == '\0') {
    pcVar2 = pcVar8;
  }
  *pcVar2 = '\0';
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 == 0) {
    local_60 = 0;
  }
  else if (local_40[0] == '\0') {
    pcVar8 = local_38;
    local_38[0] = '\0';
  }
  else {
    local_38[0] = '\x01';
    local_40[0] = '\0';
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (!NAN(*(double *)(local_60 + 0x38))) goto LAB_013f19b6;
LAB_013f21e1:
    uVar7 = 0;
  }
  else {
    if (NAN(*(double *)
             (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x38)
           )) goto LAB_013f21e1;
LAB_013f19b6:
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar5);
    if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
      if (!NAN(*(double *)(local_60 + 0x40))) goto LAB_013f1a01;
      goto LAB_013f21e1;
    }
    if (NAN(*(double *)
             (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8) + 0x40)
           )) goto LAB_013f21e1;
LAB_013f1a01:
    lVar4 = *(longlong *)(unaff_RDI + 0x48);
    uVar7 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar10 = 1;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar10 * 8);
        pVar6 = (pthread_key_t)lVar5;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (NAN(dVar1)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (DAT_02390448 <= *(double *)(local_60 + 0x60)) goto LAB_013f21e1;
        }
        else if (DAT_02390448 <=
                 *(double *)
                  (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (DAT_02390448 <= *(double *)(local_60 + 0x68)) goto LAB_013f21e1;
        }
        else if (DAT_02390448 <=
                 *(double *)
                  (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(local_60 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (DAT_02390448 <= *(double *)(lVar9 + 0x60)) goto LAB_013f21e1;
        }
        else if (DAT_02390448 <=
                 *(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x60)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (DAT_02390448 <= *(double *)(lVar9 + 0x68)) goto LAB_013f21e1;
        }
        else if (DAT_02390448 <=
                 *(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x68)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x70);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x70);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          dVar1 = *(double *)(lVar9 + 0x78);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                   0x78);
        }
        if (dVar1 <= 0.0) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x70);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x38) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x38) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x78);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
          if (*(double *)(lVar9 + 0x40) <= local_48 + local_50) goto LAB_013f21e1;
        }
        else if (*(double *)
                  (*(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) +
                  0x40) <= local_48 + local_50) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x38);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar5 + 0x60);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x38)) goto LAB_013f21e1;
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = lVar9;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        local_48 = *(double *)(lVar5 + 0x40);
        pvVar3 = _pthread_getspecific(pVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar9 = *(longlong *)(lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        local_50 = *(double *)(lVar9 + 0x68);
        pvVar3 = _pthread_getspecific(pVar6);
        lVar5 = local_60;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        if (local_48 + local_50 <= *(double *)(lVar5 + 0x40)) goto LAB_013f21e1;
        lVar10 = lVar10 + 1;
        lVar4 = *(longlong *)(unaff_RDI + 0x48);
        lVar5 = (longlong)*(int *)(lVar4 + 0xc);
      } while (lVar10 < lVar5);
      uVar7 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
    }
  }
  if ((local_38[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_013f21f6:
  return uVar7 & 0xffffffff;
}




// ============================================================
// @013f3ad0 — 1610 bytes
// ============================================================

void FUN_013f3ad0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong *in_RCX;
  longlong *plVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong *local_60;
  longlong local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  local_40 = (longlong *)CONCAT44(local_40._4_4_,(int)in_RCX);
  if (*(int *)(unaff_RDI[9] + 0xc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x013f3b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x3e0))(0,0);
    return;
  }
  if (*unaff_RSI == 0) {
    param_1 = FUN_00d23310();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3be4;
      }
      in_RCX = unaff_RSI + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_60 = 1;
  }
LAB_013f3be4:
  if (*param_2 == 0) {
    param_1 = FUN_00d23340();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          param_1 = FUN_00d50b20();
        }
        goto LAB_013f3cb4;
      }
      in_RCX = param_2 + 1;
      local_60 = in_RCX;
      if (local_38[0] == '\0') {
        param_1 = FUN_00d50b00();
      }
    }
    else {
      local_60 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          param_1 = FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          param_1 = FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_60 = 1;
  }
LAB_013f3cb4:
  if ((char)local_40 != '\0') {
    local_80 = *unaff_RSI;
    local_78 = 0;
    uVar8 = FUN_013f37e0(param_1,&local_80);
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] == '\0') && (local_50 != 0)) {
        in_RCX = unaff_RSI + 1;
        local_40 = in_RCX;
        if (local_48[0] == '\0') {
          uVar8 = FUN_00d50b00();
        }
        goto LAB_013f3d62;
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_40 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          uVar8 = FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
LAB_013f3d62:
      *(undefined1 *)local_40 = 1;
    }
    local_70 = *param_2;
    local_68 = 0;
    FUN_013f38b0(uVar8,&local_70);
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3e10;
      }
      in_RCX = param_2 + 1;
      local_40 = in_RCX;
      if (local_48[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_48[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3e10:
  if (*unaff_RSI == 0) {
    FUN_00d23310();
    in_RCX = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    if (lVar1 == local_50) {
      if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3f2f;
      }
      in_RCX = unaff_RSI + 1;
      local_40 = in_RCX;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = unaff_RSI + 1;
      lVar2 = unaff_RSI[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3f2f:
  pVar4 = (pthread_key_t)in_RCX;
  if (*param_2 == 0) {
    FUN_00d23340();
    plVar5 = (longlong *)CONCAT71((int7)((ulonglong)in_RCX >> 8),local_48[0]);
    pcVar6 = local_38;
    if (local_48[0] != '\0') {
      pcVar6 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar6 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar4 = (pthread_key_t)plVar5;
    lVar1 = *param_2;
    if (lVar1 == local_50) {
      if (((char)param_2[1] != '\0') || (local_50 == 0)) {
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_013f3fff;
      }
      plVar5 = param_2 + 1;
      local_40 = plVar5;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = param_2 + 1;
      lVar2 = param_2[1];
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_2 = local_50;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    pVar4 = (pthread_key_t)plVar5;
    *(undefined1 *)local_40 = 1;
  }
LAB_013f3fff:
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (longlong *)FUN_013faed0();
  pvVar3 = _pthread_getspecific(pVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar7 = FUN_013faed0();
  (**(code **)(*unaff_RDI + 0x3e0))(local_40,uVar7);
  return;
}




// ============================================================
// @013f6a80 — 1560 bytes
// ============================================================

double FUN_013f6a80(double param_1,pthread_key_t param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  pthread_key_t in_ECX;
  pthread_key_t pVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *unaff_RSI;
  longlong unaff_RDI;
  pthread_key_t pVar15;
  int iVar16;
  ulonglong uVar17;
  bool bVar18;
  char local_50;
  
  iVar5 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
  pVar15 = iVar5 - 1;
  if (iVar5 == 0) {
    return 0.0;
  }
  lVar10 = **(longlong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
  pvVar7 = _pthread_getspecific(in_ECX);
  local_50 = (char)param_2;
  if ((pVar15 == 0) && (local_50 != '\0')) {
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = **(longlong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
    pvVar7 = _pthread_getspecific(in_ECX);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    return (param_1 - dVar1) + *(double *)(lVar10 + 0x40);
  }
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
  }
  if (param_1 <= *(double *)(lVar10 + 0x38)) {
    if (unaff_RSI != (uint *)0x0) {
      *unaff_RSI = 0;
    }
    if (local_50 == '\0') {
      lVar10 = **(longlong **)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
      pvVar7 = _pthread_getspecific(param_2);
joined_r0x013f6d6e:
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
      }
      return *(double *)(lVar10 + 0x40);
    }
    pVar15 = 1;
    uVar14 = 0;
  }
  else {
    lVar8 = (longlong)(int)pVar15;
    lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar8 * 8);
    pvVar7 = _pthread_getspecific(pVar15);
    if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    if (param_1 < *(double *)(lVar10 + 0x38) || param_1 == *(double *)(lVar10 + 0x38)) {
      if (unaff_RSI != (uint *)0x0) {
        uVar6 = *unaff_RSI;
        uVar17 = (ulonglong)uVar6;
        if (((int)uVar6 < 0) || (iVar5 <= (int)uVar6)) {
          *unaff_RSI = 0xffffffff;
        }
        else {
          lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar17 * 8)
          ;
          uVar13 = uVar17;
          pvVar7 = _pthread_getspecific(uVar6);
          if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          }
          if (*(double *)(lVar10 + 0x38) <= param_1) {
            if ((int)uVar6 < (int)pVar15) {
              lVar10 = 0;
              do {
                lVar9 = *(longlong *)
                         (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar17 * 8 +
                         lVar10 * 8);
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
                if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                  lVar9 = *(longlong *)
                           (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                }
                iVar16 = (int)lVar10;
                if (*(double *)(lVar9 + 0x38) <= param_1) {
                  lVar9 = *(longlong *)
                           (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar17 * 8 + 8 +
                           lVar10 * 8);
                  pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
                  if ((pvVar7 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
                    lVar9 = *(longlong *)
                             (lVar9 + 0x20 + (ulonglong)(*(uint *)(lVar11 + 0x154) & 1) * 8);
                  }
                  if (param_1 < *(double *)(lVar9 + 0x38)) {
                    uVar6 = uVar6 + iVar16;
                    if (uVar6 != 0xffffffff) goto LAB_013f6ebb;
                    break;
                  }
                }
                if ((lVar8 <= (longlong)(uVar17 + lVar10 + 1)) || (lVar10 = lVar10 + 1, iVar16 == 2)
                   ) break;
              } while( true );
            }
          }
          else if (0 < (int)uVar6) {
            iVar16 = -1;
            do {
              lVar10 = *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
              lVar8 = *(longlong *)(lVar10 + (ulonglong)(uVar6 + iVar16) * 8);
              pvVar7 = _pthread_getspecific((pthread_key_t)lVar10);
              pVar15 = (pthread_key_t)lVar10;
              if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
                lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8)
                ;
              }
              if (*(double *)(lVar8 + 0x38) <= param_1) {
                lVar10 = *(longlong *)
                          (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar17 * 8);
                pvVar7 = _pthread_getspecific(pVar15);
                if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                  lVar10 = *(longlong *)
                            (lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
                }
                if (param_1 < *(double *)(lVar10 + 0x38)) {
                  uVar6 = uVar6 + iVar16;
                  goto LAB_013f6ebb;
                }
              }
              if ((longlong)uVar17 < 2) break;
              uVar17 = uVar17 - 1;
              bVar18 = iVar16 != -3;
              iVar16 = iVar16 + -1;
            } while (bVar18);
          }
        }
      }
      uVar6 = FUN_013f3690(param_1);
LAB_013f6ebb:
      uVar14 = 0;
      if (uVar6 != 0xffffffff) {
        uVar14 = uVar6;
      }
      pVar15 = uVar14 + 1;
      if (unaff_RSI != (uint *)0x0) {
        *unaff_RSI = uVar14;
      }
    }
    else {
      if (unaff_RSI != (uint *)0x0) {
        *unaff_RSI = pVar15;
      }
      if (local_50 == '\0') {
        lVar10 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar8 * 8);
        pvVar7 = _pthread_getspecific(pVar15);
        goto joined_r0x013f6d6e;
      }
      uVar14 = iVar5 - 2;
    }
    if ((int)uVar14 < 0) goto LAB_013f7063;
  }
  if ((((int)uVar14 < iVar5) && (-1 < (int)pVar15)) && ((int)pVar15 < iVar5)) {
    pVar12 = 0x2802558;
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)uVar14 * 8);
    pvVar7 = _pthread_getspecific(0x2802558);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar1 = *(double *)(lVar10 + 0x38);
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)uVar14 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar2 = *(double *)(lVar10 + 0x40);
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    dVar3 = *(double *)(lVar10 + 0x38);
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + (ulonglong)pVar15 * 8);
    pvVar7 = _pthread_getspecific(pVar12);
    if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      lVar10 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
    if ((dVar1 == dVar3) && (!NAN(dVar1) && !NAN(dVar3))) {
      return dVar2;
    }
    dVar4 = *(double *)(lVar10 + 0x40);
    if ((dVar1 + dVar3) * DAT_023942d0 < param_1) {
      return ((dVar4 - dVar2) * (param_1 - dVar3)) / (dVar3 - dVar1) + dVar4;
    }
    return dVar2 + ((dVar4 - dVar2) * (param_1 - dVar1)) / (dVar3 - dVar1);
  }
LAB_013f7063:
  if (local_50 == '\0') {
    param_1 = 0.0;
  }
  return param_1;
}




// ============================================================
// @013f4fc0 — 1539 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013f54dd) */
/* WARNING: Removing unreachable block (ram,0x013f54e9) */
/* WARNING: Removing unreachable block (ram,0x013f553d) */
/* WARNING: Removing unreachable block (ram,0x013f5549) */

void FUN_013f4fc0(double param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  uint uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double local_80;
  ulonglong local_78;
  double local_70;
  double local_68;
  longlong local_38;
  
  lVar7 = *unaff_RSI;
  if (*(int *)(lVar7 + 0xc) < 2) {
    return;
  }
  local_68 = 0.0;
  lVar13 = 1;
  local_38 = 0;
  bVar2 = false;
  lVar12 = 0;
  lVar10 = 0;
  bVar3 = false;
  do {
    pVar9 = (pthread_key_t)lVar10;
    lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar13 * 8);
    if (local_38 == lVar7) {
      if ((!bVar2) && (local_38 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        local_38 = lVar7;
      }
      else {
        bVar2 = true;
        local_38 = lVar7;
      }
    }
    lVar7 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + -8 + lVar13 * 8);
    if (lVar12 == lVar7) {
      if ((!bVar3) && (lVar12 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar12 = lVar7;
      }
      else {
        bVar3 = true;
        lVar12 = lVar7;
      }
    }
    pvVar6 = _pthread_getspecific(pVar9);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar5 = FUN_013faf30();
    if (cVar5 == '\0') {
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = (pthread_key_t)local_38;
      }
      dVar15 = (double)FUN_013faed0();
      pvVar6 = _pthread_getspecific(pVar9);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_013faed0();
      local_68 = local_68 + (dVar15 - dVar14);
    }
    lVar13 = lVar13 + 1;
    lVar7 = *unaff_RSI;
    lVar10 = (longlong)*(int *)(lVar7 + 0xc);
  } while (lVar13 < lVar10);
  if ((local_68 != 0.0) || (NAN(local_68))) {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    lVar7 = *unaff_RSI;
    uVar1 = *(uint *)(lVar7 + 0xc);
    local_78 = (ulonglong)uVar1;
    if (1 < (int)uVar1) {
      local_70 = 0.0;
      local_80 = local_68;
      lVar10 = lVar12;
      while( true ) {
        uVar11 = uVar1 - 1;
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + (ulonglong)uVar11 * 8);
        if (local_38 == lVar7) {
          lVar7 = local_38;
          bVar4 = bVar2;
          if ((!bVar2) && (local_38 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00(lVar7);
          }
          bVar4 = true;
          if ((bVar2) && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar2 = bVar4;
        local_38 = lVar7;
        pVar9 = uVar1 - 2;
        lVar12 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + (ulonglong)pVar9 * 8);
        if (lVar10 == lVar12) {
          lVar12 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if (cVar5 == '\0') {
          pvVar6 = _pthread_getspecific(pVar9);
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pVar9 = (pthread_key_t)local_38;
          }
          local_70 = (double)FUN_013faed0();
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar15 = (double)FUN_013faed0();
          local_70 = local_70 - dVar15;
        }
        lVar7 = *(longlong *)(*(longlong *)(unaff_RDI[9] + 0x10) + (ulonglong)uVar11 * 8);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x428))((local_80 * param_1) / local_68,0);
        FUN_00d23740();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar5 = FUN_013faf30();
        if ((longlong)local_78 < 3) break;
        if (cVar5 == '\0') {
          local_80 = local_80 - local_70;
        }
        local_78 = local_78 - 1;
        lVar7 = *unaff_RSI;
        lVar10 = lVar12;
        uVar1 = uVar11;
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_013f55d9;
    }
    FUN_00d50b20();
  }
LAB_013f55d9:
  if ((bVar3) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @013ffd40 — 1287 bytes
// str: ""b#%@""
// str: ""%@11""
// str: ""%@9""
// str: ""%@13""
// str: ""%@7""
// ============================================================

void FUN_013ffd40(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  FUN_00d933c0();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  lVar2 = lVar1;
  if (lVar1 != local_50) {
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar2 = 0;
        goto LAB_013ffd7a;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x60);
      *(longlong *)(unaff_RDI + 0x60) = local_50;
    }
    else {
      local_48 = '\0';
LAB_013ffd7a:
      *(longlong *)(unaff_RDI + 0x60) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d933c0();
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  lVar2 = lVar1;
  if (lVar1 != local_50) {
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 == 0) {
        lVar2 = 0;
        goto LAB_013ffdf1;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x68);
      *(longlong *)(unaff_RDI + 0x68) = local_50;
    }
    else {
      local_48 = '\0';
LAB_013ffdf1:
      *(longlong *)(unaff_RDI + 0x68) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_50;
    }
  }
  if ((local_48 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_013ffe99;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x70);
      *(longlong *)(unaff_RDI + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_013ffe99:
      *(longlong *)(unaff_RDI + 0x70) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(longlong *)(unaff_RDI + 0x78);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_013fff52;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x78);
      *(longlong *)(unaff_RDI + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_013fff52:
      *(longlong *)(unaff_RDI + 0x78) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(longlong *)(unaff_RDI + 0x80);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_0140000e;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0140000e:
      *(longlong *)(unaff_RDI + 0x80) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  lVar3 = lVar2;
  if (lVar2 != local_30) {
    lVar3 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar3 = 0;
        goto LAB_014000d3;
      }
      FUN_00d50b00();
      lVar2 = *(longlong *)(unaff_RDI + 0x88);
      *(longlong *)(unaff_RDI + 0x88) = local_30;
    }
    else {
      local_28 = '\0';
LAB_014000d3:
      *(longlong *)(unaff_RDI + 0x88) = lVar3;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  lVar2 = *(longlong *)(unaff_RDI + 0x90);
  lVar3 = lVar2;
  if (lVar2 == local_30) goto LAB_014001e3;
  lVar3 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar3 = 0;
      goto LAB_01400198;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x90);
    *(longlong *)(unaff_RDI + 0x90) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01400198:
    *(longlong *)(unaff_RDI + 0x90) = lVar3;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar3 = local_30;
  }
LAB_014001e3:
  if ((local_28 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @013f23b0 — 1212 bytes
// str: ""MUDataPointFunction""
// str: ""addPoint""
// str: ""removePoint""
// str: ""insertPointAtIndex""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013f23b0(void)

{
  int iVar1;
  
  if (DAT_02794220 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02794170 = FUN_001016a0();
      _DAT_02794158 = "MUDataPointFunction";
      _DAT_02794160 = 0x50;
      _DAT_02794168 = FUN_011115b0;
      _DAT_02794178 = 0;
      uRam0000000002794180 = 0;
      _DAT_02794188 = 0;
      uRam0000000002794190 = 0;
      _DAT_02794198 = 0;
      uRam00000000027941a0 = 0;
      _DAT_027941a8 = 0;
      uRam00000000027941b0 = 0;
      _DAT_027941b8 = 0;
      uRam00000000027941c0 = 0;
      _DAT_027941c8 = 0;
      uRam00000000027941d0 = 0;
      _DAT_027941d8 = 0;
      uRam00000000027941e0 = 0;
      _DAT_027941e8 = 0;
      uRam00000000027941f0 = 0;
      _DAT_027941f8 = 0;
      uRam0000000002794200 = 0;
      _DAT_02794208 = 0;
      uRam0000000002794210 = 0;
      _DAT_02794218 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87cb0();
  if (DAT_028acd90 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02794220 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02794170 = FUN_001016a0();
          _DAT_02794158 = "MUDataPointFunction";
          _DAT_02794160 = 0x50;
          _DAT_02794168 = FUN_011115b0;
          _DAT_02794178 = 0;
          uRam0000000002794180 = 0;
          _DAT_02794188 = 0;
          uRam0000000002794190 = 0;
          _DAT_02794198 = 0;
          uRam00000000027941a0 = 0;
          _DAT_027941a8 = 0;
          uRam00000000027941b0 = 0;
          _DAT_027941b8 = 0;
          uRam00000000027941c0 = 0;
          _DAT_027941c8 = 0;
          uRam00000000027941d0 = 0;
          _DAT_027941d8 = 0;
          uRam00000000027941e0 = 0;
          _DAT_027941e8 = 0;
          uRam00000000027941f0 = 0;
          _DAT_027941f8 = 0;
          uRam0000000002794200 = 0;
          _DAT_02794208 = 0;
          uRam0000000002794210 = 0;
          _DAT_02794218 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028acd50 = "addPoint";
      _DAT_028acd58 = &DAT_02794158;
      _DAT_028acd60 = 0;
      _DAT_028acd68 = &DAT_027c0228;
      _DAT_028acd70 = FUN_013f5e10;
      _DAT_028acd78 = FUN_013f2b30;
      _DAT_028acd80 = 0;
      uRam00000000028acd88 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028acdd8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02794220 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02794170 = FUN_001016a0();
          _DAT_02794158 = "MUDataPointFunction";
          _DAT_02794160 = 0x50;
          _DAT_02794168 = FUN_011115b0;
          _DAT_02794178 = 0;
          uRam0000000002794180 = 0;
          _DAT_02794188 = 0;
          uRam0000000002794190 = 0;
          _DAT_02794198 = 0;
          uRam00000000027941a0 = 0;
          _DAT_027941a8 = 0;
          uRam00000000027941b0 = 0;
          _DAT_027941b8 = 0;
          uRam00000000027941c0 = 0;
          _DAT_027941c8 = 0;
          uRam00000000027941d0 = 0;
          _DAT_027941d8 = 0;
          uRam00000000027941e0 = 0;
          _DAT_027941e8 = 0;
          uRam00000000027941f0 = 0;
          _DAT_027941f8 = 0;
          uRam0000000002794200 = 0;
          _DAT_02794208 = 0;
          uRam0000000002794210 = 0;
          _DAT_02794218 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028acd98 = "removePoint";
      _DAT_028acda0 = &DAT_02794158;
      _DAT_028acda8 = 0;
      _DAT_028acdb0 = &DAT_027c0228;
      _DAT_028acdb8 = FUN_013f5e10;
      _DAT_028acdc0 = FUN_013f2ec0;
      _DAT_028acdc8 = 0;
      uRam00000000028acdd0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ace20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02794220 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02794170 = FUN_001016a0();
          _DAT_02794158 = "MUDataPointFunction";
          _DAT_02794160 = 0x50;
          _DAT_02794168 = FUN_011115b0;
          _DAT_02794178 = 0;
          uRam0000000002794180 = 0;
          _DAT_02794188 = 0;
          uRam0000000002794190 = 0;
          _DAT_02794198 = 0;
          uRam00000000027941a0 = 0;
          _DAT_027941a8 = 0;
          uRam00000000027941b0 = 0;
          _DAT_027941b8 = 0;
          uRam00000000027941c0 = 0;
          _DAT_027941c8 = 0;
          uRam00000000027941d0 = 0;
          _DAT_027941d8 = 0;
          uRam00000000027941e0 = 0;
          _DAT_027941e8 = 0;
          uRam00000000027941f0 = 0;
          _DAT_027941f8 = 0;
          uRam0000000002794200 = 0;
          _DAT_02794208 = 0;
          uRam0000000002794210 = 0;
          _DAT_02794218 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028acde0 = "insertPointAtIndex";
      _DAT_028acde8 = &DAT_02794158;
      _DAT_028acdf0 = 0;
      _DAT_028acdf8 = &DAT_027c022b;
      _DAT_028ace00 = FUN_013f5e90;
      _DAT_028ace08 = FUN_013f2cf0;
      _DAT_028ace10 = 0;
      uRam00000000028ace18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @013f82a0 — 925 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013f8434) */
/* WARNING: Removing unreachable block (ram,0x013f843d) */
/* WARNING: Removing unreachable block (ram,0x013f8600) */
/* WARNING: Removing unreachable block (ram,0x013f8609) */
/* WARNING: Removing unreachable block (ram,0x013f8344) */
/* WARNING: Removing unreachable block (ram,0x013f834d) */

undefined8 * FUN_013f82a0(double param_1,double param_2)

{
  bool bVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  pthread_key_t in_ECX;
  longlong *plVar7;
  undefined8 *unaff_RDI;
  undefined8 unaff_R15;
  undefined7 uVar8;
  longlong local_40;
  char local_38;
  
  plVar2 = (longlong *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  lVar4 = local_40;
  if (local_40 == 0) {
    bVar6 = 1;
    lVar4 = 0;
    uVar8 = 0;
    bVar1 = false;
  }
  else {
    uVar8 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar6 = 0;
      bVar1 = true;
    }
    else {
      bVar6 = 0;
      bVar1 = true;
    }
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(0);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar7 = plVar2;
  if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x408))();
  if (local_40 == lVar4) {
    if ((bool)(bVar6 & lVar4 != 0)) {
      bVar1 = true;
      if (local_38 != '\0') goto LAB_013f8534;
      FUN_00d50b00();
      goto LAB_013f8505;
    }
  }
  else {
    if (local_38 != '\0') {
      bVar6 = bVar1 & lVar4 != 0;
      in_ECX = (pthread_key_t)CONCAT71(uVar8,bVar6);
      bVar1 = true;
      lVar4 = local_40;
      if (bVar6 == 1) {
        FUN_00d50b20();
      }
      goto LAB_013f8534;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar6 = bVar1 & lVar4 != 0;
    in_ECX = (pthread_key_t)CONCAT71(uVar8,bVar6);
    bVar1 = true;
    lVar4 = local_40;
    if (bVar6 != 1) goto LAB_013f8534;
    FUN_00d50b20();
LAB_013f8505:
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_013f8534:
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013fae90(param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013faee0(param_1 * param_2);
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b30();
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @013f5f90 — 820 bytes
// ============================================================

undefined8 FUN_013f5f90(pthread_key_t param_1)

{
  longlong lVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  longlong unaff_RDI;
  double dVar5;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  double local_48;
  double local_40;
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) != 0) {
    FUN_00d23310();
    local_38[0] = local_68[0];
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar2 = local_68;
    if (local_68[0] == '\0') {
      pcVar2 = local_38;
    }
    local_38[0] = local_68[0];
    *pcVar2 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_013faf20();
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      local_68[0] = '\0';
      local_50 = 0;
      local_58 = 0;
      local_60 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          if (iVar4 != 0) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar5 = (double)FUN_013faed0();
            if ((local_40 != dVar5) || (NAN(local_40) || NAN(dVar5))) {
LAB_013f61a9:
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faed0();
              if (dVar5 <= local_40) goto LAB_013f62c2;
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if (dVar5 <= local_48) goto LAB_013f62c2;
            }
            else {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar5 = (double)FUN_013faf20();
              if ((local_48 != dVar5) || (NAN(local_48) || NAN(dVar5))) goto LAB_013f61a9;
            }
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_40 = (double)FUN_013faed0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_48 = (double)FUN_013faf20();
            if (NAN(local_40)) {
LAB_013f62c2:
              FUN_01a81420();
              return 0;
            }
          }
          iVar4 = iVar4 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_01a81420();
    }
  }
  return 1;
}




// ============================================================
// @013fea10 — 767 bytes
// ============================================================

void FUN_013fea10(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012cbe00();
  lVar2 = *(longlong *)(unaff_RDI + 0x70);
  lVar4 = lVar2;
  if (lVar2 == local_38) goto LAB_013feb28;
  lVar4 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar4 = 0;
      goto LAB_013feae6;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x70);
    *(longlong *)(unaff_RDI + 0x70) = local_38;
  }
  else {
    local_30 = '\0';
LAB_013feae6:
    *(longlong *)(unaff_RDI + 0x70) = lVar4;
  }
  param_1 = (pthread_key_t)lVar2;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar4 = local_38;
  }
LAB_013feb28:
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_0124c640();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012642b0(*(undefined8 *)(unaff_RDI + 0x60));
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01259540(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_012e6a70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @014004b0 — 734 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01400577) */
/* WARNING: Removing unreachable block (ram,0x01400583) */
/* WARNING: Removing unreachable block (ram,0x01400530) */
/* WARNING: Removing unreachable block (ram,0x0140053c) */
/* WARNING: Removing unreachable block (ram,0x014005ba) */
/* WARNING: Removing unreachable block (ram,0x014005c6) */

void FUN_014004b0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  undefined4 local_44;
  undefined8 *local_40;
  char local_38;
  
  local_50 = param_2;
  local_44 = param_3;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db80();
  if ((char)local_44 == '\0') {
    iVar2 = FUN_00d90910();
  }
  else {
    iVar2 = FUN_00d90c30();
  }
  do {
    if (iVar2 == -1) {
      FUN_00d8c7d0();
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    FUN_00d8e3d0();
    puVar1 = local_40;
    if ((((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) &&
        (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_90 = puVar1;
    local_88 = '\0';
    local_80 = *param_1;
    local_78 = '\0';
    FUN_00d98db0(&local_80,&local_90,0);
    puVar4 = local_40;
    if (local_40 == puVar3) {
LAB_014006a1:
      puVar4 = puVar3;
      if (local_38 != '\0') {
LAB_014006a7:
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
          puVar3 = puVar4;
          goto LAB_014006a1;
        }
        if (local_38 == '\0') goto LAB_014006b5;
        goto LAB_014006a7;
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_014006b5:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_44 == '\0') {
      local_58 = '\0';
      local_60 = *local_50;
      iVar2 = FUN_00d90910();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
      local_70 = *local_50;
      iVar2 = FUN_00d90c30();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar3 = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  } while( true );
}




// ============================================================
// @013f63e0 — 689 bytes
// ============================================================

void FUN_013f63e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong local_58;
  char local_50;
  
  if ((unaff_RDI[0xb] == 0) && (cVar2 = (**(code **)(*unaff_RDI + 0x370))(), cVar2 != '\0')) {
    plVar3 = (longlong *)FUN_000bea40();
    (**(code **)(*plVar3 + 0x18))();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb6d0();
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb720();
    lVar5 = unaff_RDI[9];
    if (*(int *)(lVar5 + 0xc) < 1) {
      lVar8 = 0;
      bVar1 = false;
    }
    else {
      lVar9 = 0;
      bVar1 = false;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar1) && (lVar8 != 0)) {
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar1) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar1 = true;
            lVar8 = lVar5;
          }
          else {
            bVar1 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar3;
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = plVar3;
          plVar7 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
        }
        pVar6 = (pthread_key_t)param_1;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_013faf20();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_013faed0();
        (**(code **)(*plVar7 + 0x418))(uVar11,uVar10);
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
        lVar5 = unaff_RDI[9];
        param_1 = (longlong *)(longlong)*(int *)(lVar5 + 0xc);
      } while (lVar9 < (longlong)param_1);
    }
    FUN_00d64850();
    plVar7 = (longlong *)unaff_RDI[0xb];
    if (plVar7 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      unaff_RDI[0xb] = (longlong)plVar3;
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @013f4430 — 667 bytes
// ============================================================

void FUN_013f4430(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RDI;
  double dVar4;
  double dVar5;
  double extraout_XMM0_Qa;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
LAB_013f464c:
    FUN_013f2b30();
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar4 = (double)FUN_013faed0();
    FUN_00d23310();
    local_38[0] = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_013faed0();
    if ((local_38[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (dVar4 <= dVar5) {
      iVar1 = 0;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar4 = (double)FUN_013faed0();
      FUN_00d23340();
      pcVar3 = local_40;
      if (local_40[0] == '\0') {
        pcVar3 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar3 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar5 = (double)FUN_013faed0();
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (dVar5 < dVar4) goto LAB_013f464c;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      iVar1 = FUN_013f3690();
      if (iVar1 == -1) {
        return;
      }
      iVar1 = iVar1 + 1;
      dVar5 = extraout_XMM0_Qa;
    }
    FUN_013f2cf0(dVar5,iVar1);
  }
  return;
}




// ============================================================
// @013fdaf0 — 661 bytes
// ============================================================

void FUN_013fdaf0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar4;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong **)(unaff_RSI + 0x38) == (longlong *)0x0) {
    bVar1 = false;
  }
  else {
    local_88 = *param_2;
    local_80 = '\0';
    (**(code **)(**(longlong **)(unaff_RSI + 0x38) + 0x18))(param_1,&local_88);
    plVar4 = local_38;
    if (local_38 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
      bVar1 = true;
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) goto LAB_013fdd47;
  }
  FUN_00ce7000();
  local_78 = DAT_027c0250;
  if (DAT_027c0250 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  (**(code **)(*local_98 + 0x400))();
  plVar4 = local_38;
  if (local_38 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else if (local_30 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
    bVar1 = true;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar4 + 0x398))();
  if ((cVar3 == '\0') && (cVar3 = (**(code **)(*plVar4 + 0x3a0))(), cVar3 == '\0'))
  goto LAB_013fdd47;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  local_48 = 0;
  local_40 = '\0';
  local_68 = plVar4;
  FUN_00b8a050(&local_48,&local_58,0,1);
  plVar2 = local_38;
  if (local_38 == plVar4) {
    if (!bVar1) {
      if (local_30 != '\0') goto LAB_013fdd04;
      FUN_00d50b00();
    }
joined_r0x013fdcef:
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar4 = plVar2;
      if (bVar1) {
        FUN_00d50b20();
      }
      goto joined_r0x013fdcef;
    }
    plVar4 = local_38;
    if (bVar1) {
      FUN_00d50b20();
    }
LAB_013fdd04:
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_013fdd47:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar1) && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @013f5760 — 653 bytes
// ============================================================

double FUN_013f5760(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  longlong lVar11;
  double dVar12;
  double dVar13;
  ulonglong local_58;
  longlong local_48;
  double local_40;
  
  lVar6 = *(longlong *)(unaff_RDI + 0x48);
  uVar1 = *(uint *)(lVar6 + 0xc);
  local_58 = (ulonglong)uVar1;
  local_40 = 0.0;
  if (1 < (int)uVar1) {
    uVar10 = (ulonglong)(uVar1 - 1);
    local_40 = 0.0;
    local_48 = 0;
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    while( true ) {
      pVar9 = (pthread_key_t)uVar10;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar10 * 8);
      pVar8 = pVar9;
      if (local_48 == lVar6) {
        lVar6 = local_48;
        bVar4 = bVar2;
        if ((!bVar2) && (local_48 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar2) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar2 = bVar4;
      local_48 = lVar6;
      uVar10 = (ulonglong)(pVar9 - 1);
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + uVar10 * 8);
      if (lVar11 == lVar6) {
        lVar6 = lVar11;
        bVar4 = bVar3;
        if ((!bVar3) && (lVar11 != 0)) {
          FUN_00d50b00();
          bVar4 = true;
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar4 = true;
        if ((bVar3) && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar6;
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_013faf30();
      dVar12 = DAT_02391030;
      if (cVar5 != '\0') {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar12 = (double)FUN_013faed0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_013faed0();
        dVar12 = dVar12 - dVar13;
      }
      local_40 = local_40 + dVar12;
      if ((longlong)local_58 < 3) break;
      local_58 = local_58 - 1;
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      bVar3 = bVar4;
    }
    if ((bVar4) && (lVar11 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_40;
}




// ============================================================
// @013f1180 — 625 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013f1302) */
/* WARNING: Removing unreachable block (ram,0x013f130b) */

void FUN_013f1180(pthread_key_t param_1)

{
  bool bVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0xd] == 0) {
    if (unaff_RDI[0xc] == 0) {
      FUN_013ef520();
    }
    (**(code **)(*unaff_RDI + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f63e0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x3f8))();
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_013f6360();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      bVar1 = false;
      local_40 = 0;
    }
    else {
      (**(code **)(*unaff_RDI + 0x3f8))();
      pvVar3 = _pthread_getspecific(param_1);
      plVar5 = local_50;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar5 + 0x378))();
      if (local_40 == 0) {
        local_40 = 0;
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        bVar1 = true;
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb6d0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013eb720();
    }
    FUN_00d64850();
    lVar4 = unaff_RDI[0xd];
    if (lVar4 != local_40) {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      unaff_RDI[0xd] = local_40;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if ((bVar1) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @013fc010 — 623 bytes
// ============================================================

void FUN_013fc010(undefined8 param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong unaff_RSI;
  ulonglong uVar16;
  longlong unaff_RDI;
  longlong lVar17;
  int iVar8;
  
  if (*(longlong *)(unaff_RDI + 0x20) == 0) {
    if (*(longlong *)(unaff_RDI + 0x50) == 0) {
      return;
    }
LAB_013fc06c:
    uVar10 = FUN_011ede20();
    uVar7 = (uint)uVar10;
    lVar17 = *(longlong *)(unaff_RDI + 0x20);
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x50) != 0) {
      iVar6 = FUN_011ede20();
      lVar17 = *(longlong *)(unaff_RDI + 0x20);
      iVar9 = *(int *)(lVar17 + 0x18);
      iVar8 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      uVar7 = iVar8 >> 2;
      if ((int)uVar7 <= iVar6) goto LAB_013fc07f;
      goto LAB_013fc06c;
    }
    iVar9 = *(int *)(*(longlong *)(unaff_RDI + 0x20) + 0x18);
    iVar8 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar8 = iVar9;
    }
    uVar7 = iVar8 >> 2;
    uVar10 = (ulonglong)uVar7;
    lVar17 = *(longlong *)(unaff_RDI + 0x20);
  }
  if (lVar17 == 0) {
    uVar7 = (uint)uVar10;
    if ((int)uVar7 < 1) {
      return;
    }
    uVar12 = uVar10 & 0xffffffff;
    if ((uVar7 < 4) || ((param_2 < unaff_RSI + uVar12 * 8 && (unaff_RSI < param_2 + uVar12 * 8)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)(uVar7 & 0xfffffffc);
      uVar16 = (uVar11 - 4 >> 2) + 1;
      uVar13 = (ulonglong)((uint)uVar16 & 3);
      if (uVar11 - 4 < 0xc) {
        lVar14 = 0;
      }
      else {
        lVar17 = -(uVar16 & 0xfffffffffffffffc);
        lVar14 = 0;
        do {
          puVar1 = (undefined8 *)(unaff_RSI + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x10 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_2 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_2 + 0x10 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x20 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x30 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_2 + 0x20 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_2 + 0x30 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x40 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x50 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_2 + 0x40 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_2 + 0x50 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(unaff_RSI + 0x60 + lVar14 * 8);
          uVar3 = puVar1[1];
          puVar2 = (undefined8 *)(unaff_RSI + 0x70 + lVar14 * 8);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(param_2 + 0x60 + lVar14 * 8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar3;
          puVar1 = (undefined8 *)(param_2 + 0x70 + lVar14 * 8);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x10;
          lVar17 = lVar17 + 4;
        } while (lVar17 != 0);
      }
      if (uVar13 != 0) {
        lVar17 = param_2 + lVar14 * 8;
        lVar14 = unaff_RSI + lVar14 * 8;
        lVar15 = 0;
        do {
          puVar2 = (undefined8 *)(lVar14 + lVar15);
          uVar3 = puVar2[1];
          puVar1 = (undefined8 *)(lVar14 + 0x10 + lVar15);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar17 + lVar15);
          *puVar1 = *puVar2;
          puVar1[1] = uVar3;
          puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar15);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar15 = lVar15 + 0x20;
        } while (uVar13 << 5 != lVar15);
      }
      if (uVar11 == uVar12) {
        return;
      }
    }
    uVar13 = ~uVar11;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined8 *)(param_2 + uVar11 * 8) = *(undefined8 *)(unaff_RSI + uVar11 * 8);
      uVar11 = uVar11 + 1;
    }
    if (uVar13 + uVar12 < 3) {
      return;
    }
    do {
      *(undefined8 *)(param_2 + uVar11 * 8) = *(undefined8 *)(unaff_RSI + uVar11 * 8);
      *(undefined8 *)(param_2 + 8 + uVar11 * 8) = *(undefined8 *)(unaff_RSI + 8 + uVar11 * 8);
      *(undefined8 *)(param_2 + 0x10 + uVar11 * 8) = *(undefined8 *)(unaff_RSI + 0x10 + uVar11 * 8);
      *(undefined8 *)(param_2 + 0x18 + uVar11 * 8) = *(undefined8 *)(unaff_RSI + 0x18 + uVar11 * 8);
      uVar11 = uVar11 + 4;
    } while (uVar12 != uVar11);
    return;
  }
LAB_013fc07f:
  if (0 < (int)uVar7) {
    lVar14 = 0;
    lVar17 = (longlong)**(int **)(lVar17 + 0x10);
    if (lVar17 != -1) goto LAB_013fc0b7;
LAB_013fc0e0:
    *(undefined8 *)(param_2 + lVar14 * 8) = 0;
    if ((ulonglong)uVar7 - 1 != lVar14) {
      while( true ) {
        lVar14 = lVar14 + 1;
        lVar17 = (longlong)
                 *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 0x10) + lVar14 * 4);
        if (lVar17 == -1) break;
LAB_013fc0b7:
        iVar9 = FUN_011ede20();
        if (iVar9 <= (int)lVar17) break;
        *(undefined8 *)(param_2 + lVar14 * 8) = *(undefined8 *)(unaff_RSI + lVar17 * 8);
        if ((ulonglong)uVar7 - 1 == lVar14) {
          return;
        }
      }
      goto LAB_013fc0e0;
    }
  }
  return;
}




// ============================================================
// @013fc290 — 617 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fc290(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_1850;
  int local_184c [5];
  undefined1 local_1838 [2048];
  undefined1 local_1038 [4096];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((longlong)unaff_RDI + 0x39) == '\0') && (unaff_RDI[2] != -1)) {
    iVar1 = FUN_011edec0();
    lVar3 = FUN_011edcb0();
    lVar5 = unaff_RDI[3];
    lVar8 = 0;
    if (lVar5 == -1) {
      lVar8 = (longlong)iVar1;
    }
    lVar8 = lVar3 - lVar8;
    if ((unaff_RDI[2] < lVar8) && (lVar6 = unaff_RDI[6], lVar6 < lVar8)) {
      if (unaff_RDI[9] == 0) {
        FUN_013fb700();
        (**(code **)(*unaff_RDI + 0x3a8))();
        lVar5 = unaff_RDI[3];
        lVar6 = unaff_RDI[6];
      }
      plVar4 = unaff_RDI + 2;
      if (lVar6 != 0) {
        plVar4 = unaff_RDI + 6;
      }
      lVar3 = *plVar4;
      lVar6 = lVar8;
      if (lVar5 < lVar8) {
        lVar6 = lVar5;
      }
      if (lVar5 == -1) {
        lVar6 = lVar8;
      }
      iVar7 = (int)lVar6 - (int)lVar3;
      if (0 < iVar7) {
        iVar2 = FUN_011edd80();
        if (iVar2 < iVar7) {
          FUN_011edd80();
          FUN_00b87ec0();
          FUN_011edd80();
        }
        uVar9 = FUN_011ee140(local_1038,&local_1850,local_184c,lVar3);
        uVar9 = FUN_013fc010(uVar9,local_1838);
        uVar9 = FUN_00b87ba0(uVar9,local_1850);
        if (local_184c[0] != 0) {
          uVar9 = FUN_013fc010(uVar9,local_1838);
          FUN_00b87ba0(uVar9,local_184c[0]);
        }
        (**(code **)(*unaff_RDI + 0x3b0))();
        lVar5 = unaff_RDI[3];
      }
      if ((lVar5 != -1) && (lVar5 < lVar8)) {
        FUN_00b881a0();
        if (0 < iVar1) {
          FUN_00da6b00(((double)iVar1 / (double)unaff_RDI[5]) * _DAT_0240d7f8);
        }
        (**(code **)(*unaff_RDI + 0x3b8))();
      }
      unaff_RDI[6] = lVar6;
    }
    else if ((lVar5 != -1) && (lVar5 < lVar3)) {
      FUN_00b881a0();
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x013fc4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_RDI + 0x3b8))();
        return;
      }
      goto LAB_013fc4f4;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_013fc4f4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ============================================================
// @013ff8e0 — 580 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013ffb05) */
/* WARNING: Removing unreachable block (ram,0x013ff947) */
/* WARNING: Removing unreachable block (ram,0x013ff953) */
/* WARNING: Removing unreachable block (ram,0x013ffb0e) */
/* WARNING: Removing unreachable block (ram,0x013ff997) */
/* WARNING: Removing unreachable block (ram,0x013ff9a0) */

undefined4 FUN_013ff8e0(int *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int local_84;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    uVar2 = 0;
  }
  else {
    FUN_00ddb860();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d95590();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*local_40 + 0x3e0))();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar2 = (**(code **)(*local_40 + 0x410))();
    if ((char)uVar2 != '\0') {
      *param_1 = local_84 + -1;
      uVar3 = FUN_013ff630();
      *param_2 = uVar3;
    }
    FUN_00d50b20();
  }
  return uVar2;
}




// ============================================================
// @013fe1d0 — 572 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x013fe27b) */
/* WARNING: Removing unreachable block (ram,0x013fe288) */
/* WARNING: Removing unreachable block (ram,0x013fe31b) */
/* WARNING: Removing unreachable block (ram,0x013fe328) */
/* WARNING: Removing unreachable block (ram,0x013fe243) */
/* WARNING: Removing unreachable block (ram,0x013fe24c) */
/* WARNING: Removing unreachable block (ram,0x013fe2e3) */
/* WARNING: Removing unreachable block (ram,0x013fe2ec) */

void FUN_013fe1d0(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong *local_50;
  char local_48;
  
  cVar1 = *(char *)(unaff_RDI + 0xc);
joined_r0x013fe1e6:
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar2 != 0) {
      for (lVar3 = 0; (int)lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
        (**(code **)(**(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar3 * 8) + 0x3c0))();
      }
      FUN_013fe7c0();
    }
    *(undefined1 *)(unaff_RDI + 0xd) = 1;
    return;
  }
  do {
    FUN_013fe550();
    if (local_48 == '\0') {
      if (local_50 == (longlong *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_50 == (longlong *)0x0) break;
    local_48 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  } while( true );
LAB_013fe2a8:
  FUN_013fe550();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_013fe340;
    FUN_00d50b00();
  }
  else if (local_50 == (longlong *)0x0) goto LAB_013fe340;
  local_48 = '\0';
  FUN_00d23f50();
  FUN_00d50b20();
  goto LAB_013fe2a8;
LAB_013fe340:
  (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x368))();
  lVar2 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar2 != 0) {
    local_48 = '\0';
    local_50 = (longlong *)0x0;
    for (lVar3 = 0; lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
      local_50 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + lVar3 * 8);
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_013fe7c0();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x378))();
  FUN_00da68a0(DAT_02390108);
  cVar1 = *(char *)(unaff_RDI + 0xc);
  goto joined_r0x013fe1e6;
}




// ============================================================
// @01400c50 — 558 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01400d1b) */
/* WARNING: Removing unreachable block (ram,0x01400d24) */

longlong * FUN_01400c50(longlong *param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  uint local_4c;
  longlong local_48;
  char local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      local_4c = (uint)param_3;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
        cVar5 = (**(code **)(*(longlong *)*param_1 + 0x50))();
        if (cVar5 == '\0') {
          local_68 = '\0';
          local_60 = *param_1;
          local_58 = '\0';
          local_70 = lVar2;
          FUN_00d98db0(&local_60,&local_70,local_4c);
          lVar4 = local_48;
          lVar2 = *unaff_RSI;
          if (lVar2 == local_48) {
            if (((char)unaff_RSI[1] == '\0') && (local_48 != 0)) {
              if (local_40 != '\0') goto LAB_01400da0;
              FUN_00d50b00();
              goto LAB_01400ddd;
            }
LAB_01400de5:
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar3 = unaff_RSI[1];
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
              *unaff_RSI = lVar4;
              if (((char)lVar3 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01400ddd:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              goto LAB_01400de5;
            }
            *unaff_RSI = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400da0:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_40 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
  return unaff_RDI;
}




// ============================================================
// @013fee70 — 525 bytes
// ============================================================

void FUN_013fee70(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0126ef70();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    FUN_00cb1f10();
    cVar3 = FUN_00db3690();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      bVar1 = true;
      bVar2 = false;
      goto LAB_013fefc4;
    }
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = false;
  }
  bVar1 = false;
LAB_013fefc4:
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_01289e80();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (!bVar1 && !bVar2) {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar5 != 0 && !bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @014009a0 — 504 bytes
// ============================================================

longlong * FUN_014009a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0xc))) {
    uVar7 = 0;
    uVar6 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + uVar5 * 8);
        if ((int)uVar5 != 0) {
          local_58 = '\0';
          lVar3 = **(longlong **)(*param_2 + 0x10);
          local_38 = 0;
          local_60 = lVar2;
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\x01';
          local_40 = lVar3;
          FUN_00d98db0(&local_40,&local_60,0,param_4,uVar6,uVar7);
          lVar3 = local_50;
          lVar2 = *unaff_RSI;
          if (lVar2 == local_50) {
            if (((char)unaff_RSI[1] != '\0') || (local_50 == 0)) goto LAB_01400afd;
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_01400af8;
            }
LAB_01400ac2:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_48 = '\0';
          }
          else {
            lVar4 = unaff_RSI[1];
            if (local_48 != '\0') {
              *unaff_RSI = local_50;
              if (((char)lVar4 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01400ac2;
            }
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            *unaff_RSI = lVar3;
            if (((char)lVar4 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
LAB_01400af8:
            *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01400afd:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar5 = uVar5 + 1;
        uVar6 = uVar5 & 0xffffffff;
      } while ((int)uVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
  return unaff_RDI;
}



