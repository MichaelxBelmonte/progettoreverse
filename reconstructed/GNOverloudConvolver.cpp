// Reconstructed implementation of GNOverloudConvolver
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOverloudConvolver.h"

// ============================================================
// @00c1aae0 — 9593 bytes
// ============================================================

void FUN_00c1aae0(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_898;
  undefined1 local_890;
  longlong local_888;
  undefined1 local_880;
  longlong local_878;
  undefined1 local_870;
  longlong local_868;
  undefined1 local_860;
  longlong local_858;
  undefined1 local_850;
  longlong local_848;
  undefined1 local_840;
  longlong local_838;
  undefined1 local_830;
  longlong local_828;
  undefined1 local_820;
  longlong local_818;
  undefined1 local_810;
  longlong local_808;
  undefined1 local_800;
  longlong local_7f8;
  undefined1 local_7f0;
  longlong local_7e8;
  undefined1 local_7e0;
  longlong local_7d8;
  undefined1 local_7d0;
  longlong local_7c8;
  undefined1 local_7c0;
  longlong local_7b8;
  undefined1 local_7b0;
  longlong local_7a8;
  undefined1 local_7a0;
  longlong local_798;
  undefined1 local_790;
  longlong local_788;
  undefined1 local_780;
  longlong local_778;
  undefined1 local_770;
  longlong local_768;
  undefined1 local_760;
  longlong local_758;
  undefined1 local_750;
  longlong local_748;
  undefined1 local_740;
  longlong local_738;
  undefined1 local_730;
  longlong local_728;
  undefined1 local_720;
  longlong local_718;
  undefined1 local_710;
  longlong local_708;
  undefined1 local_700;
  longlong local_6f8;
  undefined1 local_6f0;
  longlong local_6e8;
  undefined1 local_6e0;
  longlong local_6d8;
  undefined1 local_6d0;
  longlong local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined1 local_6b0;
  longlong local_6a8;
  undefined1 local_6a0;
  longlong local_698;
  undefined1 local_690;
  longlong local_688;
  undefined1 local_680;
  longlong local_678;
  undefined1 local_670;
  longlong local_668;
  undefined1 local_660;
  longlong local_658;
  undefined1 local_650;
  longlong local_648;
  undefined1 local_640;
  longlong local_638;
  undefined1 local_630;
  longlong local_628;
  undefined1 local_620;
  longlong local_618;
  undefined1 local_610;
  longlong local_608;
  undefined1 local_600;
  longlong local_5f8;
  undefined1 local_5f0;
  longlong local_5e8;
  undefined1 local_5e0;
  longlong local_5d8;
  undefined1 local_5d0;
  longlong local_5c8;
  undefined1 local_5c0;
  longlong local_5b8;
  undefined1 local_5b0;
  longlong local_5a8;
  undefined1 local_5a0;
  longlong local_598;
  undefined1 local_590;
  longlong local_588;
  undefined1 local_580;
  longlong local_578;
  undefined1 local_570;
  longlong local_568;
  undefined1 local_560;
  longlong local_558;
  undefined1 local_550;
  longlong local_548;
  undefined1 local_540;
  longlong local_538;
  undefined1 local_530;
  longlong local_528;
  undefined1 local_520;
  longlong local_518;
  undefined1 local_510;
  longlong local_508;
  undefined1 local_500;
  longlong local_4f8;
  undefined1 local_4f0;
  longlong local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  undefined1 local_4d0;
  longlong local_4c8;
  undefined1 local_4c0;
  longlong local_4b8;
  undefined1 local_4b0;
  longlong local_4a8;
  undefined1 local_4a0;
  longlong local_498;
  undefined1 local_490;
  longlong local_488;
  undefined1 local_480;
  longlong local_478;
  undefined1 local_470;
  longlong local_468;
  undefined1 local_460;
  longlong local_458;
  undefined1 local_450;
  longlong local_448;
  undefined1 local_440;
  longlong local_438;
  undefined1 local_430;
  longlong local_428;
  undefined1 local_420;
  longlong local_418;
  undefined1 local_410;
  longlong local_408;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  longlong local_3e8;
  undefined1 local_3e0;
  longlong local_3d8;
  undefined1 local_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  longlong local_3b8;
  undefined1 local_3b0;
  longlong local_3a8;
  undefined1 local_3a0;
  longlong local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_380;
  longlong local_378;
  undefined1 local_370;
  longlong local_368;
  undefined1 local_360;
  longlong local_358;
  undefined1 local_350;
  longlong local_348;
  undefined1 local_340;
  longlong local_338;
  undefined1 local_330;
  longlong local_328;
  undefined1 local_320;
  longlong local_318;
  undefined1 local_310;
  longlong local_308;
  undefined1 local_300;
  longlong local_2f8;
  undefined1 local_2f0;
  longlong local_2e8;
  undefined1 local_2e0;
  longlong local_2d8;
  undefined1 local_2d0;
  longlong local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  undefined1 local_290;
  longlong local_288;
  undefined1 local_280;
  longlong local_278;
  undefined1 local_270;
  longlong local_268;
  undefined1 local_260;
  longlong local_258;
  undefined1 local_250;
  longlong local_248;
  undefined1 local_240;
  longlong local_238;
  undefined1 local_230;
  longlong local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 *local_38;
  char local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x11;
  lVar2 = DAT_0276c5c0;
  if (DAT_0276c5c0 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c1ab49;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar2) {
      FUN_00d50b20();
      goto LAB_00c1ab49;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar2;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c1ab49:
  *(undefined4 *)(unaff_RDI + 0xa8) = 6;
  if ((DAT_028a5e68 == (undefined8 *)0x0) || (DAT_028a5e71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5e68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5e68 == (undefined8 *)0x0;
      DAT_028a5e68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar2 = DAT_0276bcc0, DAT_028a5e68 != (undefined8 *)0x0)) &&
         (lVar2 = DAT_0276bcc0, DAT_028a5e70 == '\0')) {
        DAT_028a5e70 = '\x01';
        FUN_00e8cb90();
        lVar2 = DAT_0276bcc0;
      }
      DAT_0276bcc0 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcc8;
      local_890 = 1;
      local_898 = lVar2;
      if (DAT_0276bcc8 != 0) {
        FUN_00d50b00();
      }
      local_888 = lVar4;
      local_880 = 1;
      FUN_00bf1030(&local_888,&local_898);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276bcd0;
      if (DAT_0276bcd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bcd8;
      local_878 = lVar2;
      local_870 = 1;
      if (DAT_0276bcd8 != 0) {
        FUN_00d50b00();
      }
      local_868 = lVar4;
      local_860 = 1;
      FUN_00bf1030(&local_868,&local_878);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c5c8;
      if (DAT_0276c5c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c5d0;
      local_858 = lVar2;
      local_850 = 1;
      if (DAT_0276c5d0 != 0) {
        FUN_00d50b00();
      }
      local_848 = lVar4;
      local_840 = 1;
      FUN_00bf1030(&local_848,&local_858);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c5d8;
      if (DAT_0276c5d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c5e0;
      local_838 = lVar2;
      local_830 = 1;
      if (DAT_0276c5e0 != 0) {
        FUN_00d50b00();
      }
      local_828 = lVar4;
      local_820 = 1;
      FUN_00bf1030(&local_828,&local_838);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c5e8;
      if (DAT_0276c5e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c5f0;
      local_818 = lVar2;
      local_810 = 1;
      if (DAT_0276c5f0 != 0) {
        FUN_00d50b00();
      }
      local_808 = lVar4;
      local_800 = 1;
      FUN_00bf1030(&local_808,&local_818);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c5f8;
      if (DAT_0276c5f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c600;
      local_7f8 = lVar2;
      local_7f0 = 1;
      if (DAT_0276c600 != 0) {
        FUN_00d50b00();
      }
      local_7e8 = lVar4;
      local_7e0 = 1;
      FUN_00bf1030(&local_7e8,&local_7f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c608;
      if (DAT_0276c608 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c610;
      local_7d8 = lVar2;
      local_7d0 = 1;
      if (DAT_0276c610 != 0) {
        FUN_00d50b00();
      }
      local_7c8 = lVar4;
      local_7c0 = 1;
      FUN_00bf1030(&local_7c8,&local_7d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c618;
      if (DAT_0276c618 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c620;
      local_7b8 = lVar2;
      local_7b0 = 1;
      if (DAT_0276c620 != 0) {
        FUN_00d50b00();
      }
      local_7a8 = lVar4;
      local_7a0 = 1;
      FUN_00bf1030(&local_7a8,&local_7b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c628;
      if (DAT_0276c628 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c630;
      local_798 = lVar2;
      local_790 = 1;
      if (DAT_0276c630 != 0) {
        FUN_00d50b00();
      }
      local_788 = lVar4;
      local_780 = 1;
      FUN_00bf1030(&local_788,&local_798);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c638;
      if (DAT_0276c638 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c640;
      local_778 = lVar2;
      local_770 = 1;
      if (DAT_0276c640 != 0) {
        FUN_00d50b00();
      }
      local_768 = lVar4;
      local_760 = 1;
      FUN_00bf1030(&local_768,&local_778);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c648;
      if (DAT_0276c648 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c650;
      local_758 = lVar2;
      local_750 = 1;
      if (DAT_0276c650 != 0) {
        FUN_00d50b00();
      }
      local_748 = lVar4;
      local_740 = 1;
      FUN_00bf1030(&local_748,&local_758);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c658;
      if (DAT_0276c658 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c660;
      local_738 = lVar2;
      local_730 = 1;
      if (DAT_0276c660 != 0) {
        FUN_00d50b00();
      }
      local_728 = lVar4;
      local_720 = 1;
      FUN_00bf1030(&local_728,&local_738);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c668;
      if (DAT_0276c668 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c670;
      local_718 = lVar2;
      local_710 = 1;
      if (DAT_0276c670 != 0) {
        FUN_00d50b00();
      }
      local_708 = lVar4;
      local_700 = 1;
      FUN_00bf1030(&local_708,&local_718);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c678;
      if (DAT_0276c678 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c680;
      local_6f8 = lVar2;
      local_6f0 = 1;
      if (DAT_0276c680 != 0) {
        FUN_00d50b00();
      }
      local_6e8 = lVar4;
      local_6e0 = 1;
      FUN_00bf1030(&local_6e8,&local_6f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c688;
      if (DAT_0276c688 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c690;
      local_6d8 = lVar2;
      local_6d0 = 1;
      if (DAT_0276c690 != 0) {
        FUN_00d50b00();
      }
      local_6c8 = lVar4;
      local_6c0 = 1;
      FUN_00bf1030(&local_6c8,&local_6d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c698;
      if (DAT_0276c698 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6a0;
      local_6b8 = lVar2;
      local_6b0 = 1;
      if (DAT_0276c6a0 != 0) {
        FUN_00d50b00();
      }
      local_6a8 = lVar4;
      local_6a0 = 1;
      FUN_00bf1030(&local_6a8,&local_6b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6a8;
      if (DAT_0276c6a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6b0;
      local_698 = lVar2;
      local_690 = 1;
      if (DAT_0276c6b0 != 0) {
        FUN_00d50b00();
      }
      local_688 = lVar4;
      local_680 = 1;
      FUN_00bf1030(&local_688,&local_698);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6b8;
      if (DAT_0276c6b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6c0;
      local_678 = lVar2;
      local_670 = 1;
      if (DAT_0276c6c0 != 0) {
        FUN_00d50b00();
      }
      local_668 = lVar4;
      local_660 = 1;
      FUN_00bf1030(&local_668,&local_678);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6c8;
      if (DAT_0276c6c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6d0;
      local_658 = lVar2;
      local_650 = 1;
      if (DAT_0276c6d0 != 0) {
        FUN_00d50b00();
      }
      local_648 = lVar4;
      local_640 = 1;
      FUN_00bf1030(&local_648,&local_658);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6d8;
      if (DAT_0276c6d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6e0;
      local_638 = lVar2;
      local_630 = 1;
      if (DAT_0276c6e0 != 0) {
        FUN_00d50b00();
      }
      local_628 = lVar4;
      local_620 = 1;
      FUN_00bf1030(&local_628,&local_638);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6e8;
      if (DAT_0276c6e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c6f0;
      local_618 = lVar2;
      local_610 = 1;
      if (DAT_0276c6f0 != 0) {
        FUN_00d50b00();
      }
      local_608 = lVar4;
      local_600 = 1;
      FUN_00bf1030(&local_608,&local_618);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c6f8;
      if (DAT_0276c6f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c700;
      local_5f8 = lVar2;
      local_5f0 = 1;
      if (DAT_0276c700 != 0) {
        FUN_00d50b00();
      }
      local_5e8 = lVar4;
      local_5e0 = 1;
      FUN_00bf1030(&local_5e8,&local_5f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c708;
      if (DAT_0276c708 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c710;
      local_5d8 = lVar2;
      local_5d0 = 1;
      if (DAT_0276c710 != 0) {
        FUN_00d50b00();
      }
      local_5c8 = lVar4;
      local_5c0 = 1;
      FUN_00bf1030(&local_5c8,&local_5d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c718;
      if (DAT_0276c718 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c720;
      local_5b8 = lVar2;
      local_5b0 = 1;
      if (DAT_0276c720 != 0) {
        FUN_00d50b00();
      }
      local_5a8 = lVar4;
      local_5a0 = 1;
      FUN_00bf1030(&local_5a8,&local_5b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c728;
      if (DAT_0276c728 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c730;
      local_598 = lVar2;
      local_590 = 1;
      if (DAT_0276c730 != 0) {
        FUN_00d50b00();
      }
      local_588 = lVar4;
      local_580 = 1;
      FUN_00bf1030(&local_588,&local_598);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c738;
      if (DAT_0276c738 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c740;
      local_578 = lVar2;
      local_570 = 1;
      if (DAT_0276c740 != 0) {
        FUN_00d50b00();
      }
      local_568 = lVar4;
      local_560 = 1;
      FUN_00bf1030(&local_568,&local_578);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c748;
      if (DAT_0276c748 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c750;
      local_558 = lVar2;
      local_550 = 1;
      if (DAT_0276c750 != 0) {
        FUN_00d50b00();
      }
      local_548 = lVar4;
      local_540 = 1;
      FUN_00bf1030(&local_548,&local_558);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c758;
      if (DAT_0276c758 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c760;
      local_538 = lVar2;
      local_530 = 1;
      if (DAT_0276c760 != 0) {
        FUN_00d50b00();
      }
      local_528 = lVar4;
      local_520 = 1;
      FUN_00bf1030(&local_528,&local_538);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c768;
      if (DAT_0276c768 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c770;
      local_518 = lVar2;
      local_510 = 1;
      if (DAT_0276c770 != 0) {
        FUN_00d50b00();
      }
      local_508 = lVar4;
      local_500 = 1;
      FUN_00bf1030(&local_508,&local_518);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c778;
      if (DAT_0276c778 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c780;
      local_4f8 = lVar2;
      local_4f0 = 1;
      if (DAT_0276c780 != 0) {
        FUN_00d50b00();
      }
      local_4e8 = lVar4;
      local_4e0 = 1;
      FUN_00bf1030(&local_4e8,&local_4f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c788;
      if (DAT_0276c788 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c790;
      local_4d8 = lVar2;
      local_4d0 = 1;
      if (DAT_0276c790 != 0) {
        FUN_00d50b00();
      }
      local_4c8 = lVar4;
      local_4c0 = 1;
      FUN_00bf1030(&local_4c8,&local_4d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c798;
      if (DAT_0276c798 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7a0;
      local_4b8 = lVar2;
      local_4b0 = 1;
      if (DAT_0276c7a0 != 0) {
        FUN_00d50b00();
      }
      local_4a8 = lVar4;
      local_4a0 = 1;
      FUN_00bf1030(&local_4a8,&local_4b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7a8;
      if (DAT_0276c7a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7b0;
      local_498 = lVar2;
      local_490 = 1;
      if (DAT_0276c7b0 != 0) {
        FUN_00d50b00();
      }
      local_488 = lVar4;
      local_480 = 1;
      FUN_00bf1030(&local_488,&local_498);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7b8;
      if (DAT_0276c7b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7c0;
      local_478 = lVar2;
      local_470 = 1;
      if (DAT_0276c7c0 != 0) {
        FUN_00d50b00();
      }
      local_468 = lVar4;
      local_460 = 1;
      FUN_00bf1030(&local_468,&local_478);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7c8;
      if (DAT_0276c7c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7d0;
      local_458 = lVar2;
      local_450 = 1;
      if (DAT_0276c7d0 != 0) {
        FUN_00d50b00();
      }
      local_448 = lVar4;
      local_440 = 1;
      FUN_00bf1030(&local_448,&local_458);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7d8;
      if (DAT_0276c7d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7e0;
      local_438 = lVar2;
      local_430 = 1;
      if (DAT_0276c7e0 != 0) {
        FUN_00d50b00();
      }
      local_428 = lVar4;
      local_420 = 1;
      FUN_00bf1030(&local_428,&local_438);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7e8;
      if (DAT_0276c7e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c7f0;
      local_418 = lVar2;
      local_410 = 1;
      if (DAT_0276c7f0 != 0) {
        FUN_00d50b00();
      }
      local_408 = lVar4;
      local_400 = 1;
      FUN_00bf1030(&local_408,&local_418);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c7f8;
      if (DAT_0276c7f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c800;
      local_3f8 = lVar2;
      local_3f0 = 1;
      if (DAT_0276c800 != 0) {
        FUN_00d50b00();
      }
      local_3e8 = lVar4;
      local_3e0 = 1;
      FUN_00bf1030(&local_3e8,&local_3f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c808;
      if (DAT_0276c808 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c810;
      local_3d8 = lVar2;
      local_3d0 = 1;
      if (DAT_0276c810 != 0) {
        FUN_00d50b00();
      }
      local_3c8 = lVar4;
      local_3c0 = 1;
      FUN_00bf1030(&local_3c8,&local_3d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c818;
      if (DAT_0276c818 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c820;
      local_3b8 = lVar2;
      local_3b0 = 1;
      if (DAT_0276c820 != 0) {
        FUN_00d50b00();
      }
      local_3a8 = lVar4;
      local_3a0 = 1;
      FUN_00bf1030(&local_3a8,&local_3b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c828;
      if (DAT_0276c828 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c830;
      local_398 = lVar2;
      local_390 = 1;
      if (DAT_0276c830 != 0) {
        FUN_00d50b00();
      }
      local_388 = lVar4;
      local_380 = 1;
      FUN_00bf1030(&local_388,&local_398);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c838;
      if (DAT_0276c838 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c840;
      local_378 = lVar2;
      local_370 = 1;
      if (DAT_0276c840 != 0) {
        FUN_00d50b00();
      }
      local_368 = lVar4;
      local_360 = 1;
      FUN_00bf1030(&local_368,&local_378);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c848;
      if (DAT_0276c848 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c850;
      local_358 = lVar2;
      local_350 = 1;
      if (DAT_0276c850 != 0) {
        FUN_00d50b00();
      }
      local_348 = lVar4;
      local_340 = 1;
      FUN_00bf1030(&local_348,&local_358);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c858;
      if (DAT_0276c858 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c860;
      local_338 = lVar2;
      local_330 = 1;
      if (DAT_0276c860 != 0) {
        FUN_00d50b00();
      }
      local_328 = lVar4;
      local_320 = 1;
      FUN_00bf1030(&local_328,&local_338);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c868;
      if (DAT_0276c868 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c870;
      local_318 = lVar2;
      local_310 = 1;
      if (DAT_0276c870 != 0) {
        FUN_00d50b00();
      }
      local_308 = lVar4;
      local_300 = 1;
      FUN_00bf1030(&local_308,&local_318);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c878;
      if (DAT_0276c878 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c880;
      local_2f8 = lVar2;
      local_2f0 = 1;
      if (DAT_0276c880 != 0) {
        FUN_00d50b00();
      }
      local_2e8 = lVar4;
      local_2e0 = 1;
      FUN_00bf1030(&local_2e8,&local_2f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c888;
      if (DAT_0276c888 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c890;
      local_2d8 = lVar2;
      local_2d0 = 1;
      if (DAT_0276c890 != 0) {
        FUN_00d50b00();
      }
      local_2c8 = lVar4;
      local_2c0 = 1;
      FUN_00bf1030(&local_2c8,&local_2d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c898;
      if (DAT_0276c898 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8a0;
      local_2b8 = lVar2;
      local_2b0 = 1;
      if (DAT_0276c8a0 != 0) {
        FUN_00d50b00();
      }
      local_2a8 = lVar4;
      local_2a0 = 1;
      FUN_00bf1030(&local_2a8,&local_2b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8a8;
      if (DAT_0276c8a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8b0;
      local_298 = lVar2;
      local_290 = 1;
      if (DAT_0276c8b0 != 0) {
        FUN_00d50b00();
      }
      local_288 = lVar4;
      local_280 = 1;
      FUN_00bf1030(&local_288,&local_298);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8b8;
      if (DAT_0276c8b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8c0;
      local_278 = lVar2;
      local_270 = 1;
      if (DAT_0276c8c0 != 0) {
        FUN_00d50b00();
      }
      local_268 = lVar4;
      local_260 = 1;
      FUN_00bf1030(&local_268,&local_278);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8c8;
      if (DAT_0276c8c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8d0;
      local_258 = lVar2;
      local_250 = 1;
      if (DAT_0276c8d0 != 0) {
        FUN_00d50b00();
      }
      local_248 = lVar4;
      local_240 = 1;
      FUN_00bf1030(&local_248,&local_258);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8d8;
      if (DAT_0276c8d8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8e0;
      local_238 = lVar2;
      local_230 = 1;
      if (DAT_0276c8e0 != 0) {
        FUN_00d50b00();
      }
      local_228 = lVar4;
      local_220 = 1;
      FUN_00bf1030(&local_228,&local_238);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8e8;
      if (DAT_0276c8e8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c8f0;
      local_218 = lVar2;
      local_210 = 1;
      if (DAT_0276c8f0 != 0) {
        FUN_00d50b00();
      }
      local_208 = lVar4;
      local_200 = 1;
      FUN_00bf1030(&local_208,&local_218);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c8f8;
      if (DAT_0276c8f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c900;
      local_1f8 = lVar2;
      local_1f0 = 1;
      if (DAT_0276c900 != 0) {
        FUN_00d50b00();
      }
      local_1e8 = lVar4;
      local_1e0 = 1;
      FUN_00bf1030(&local_1e8,&local_1f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c908;
      if (DAT_0276c908 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c910;
      local_1d8 = lVar2;
      local_1d0 = 1;
      if (DAT_0276c910 != 0) {
        FUN_00d50b00();
      }
      local_1c8 = lVar4;
      local_1c0 = 1;
      FUN_00bf1030(&local_1c8,&local_1d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c918;
      if (DAT_0276c918 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c920;
      local_1b8 = lVar2;
      local_1b0 = 1;
      if (DAT_0276c920 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = lVar4;
      local_1a0 = 1;
      FUN_00bf1030(&local_1a8,&local_1b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c928;
      if (DAT_0276c928 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c930;
      local_198 = lVar2;
      local_190 = 1;
      if (DAT_0276c930 != 0) {
        FUN_00d50b00();
      }
      local_188 = lVar4;
      local_180 = 1;
      FUN_00bf1030(&local_188,&local_198);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c938;
      if (DAT_0276c938 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c940;
      local_178 = lVar2;
      local_170 = 1;
      if (DAT_0276c940 != 0) {
        FUN_00d50b00();
      }
      local_168 = lVar4;
      local_160 = 1;
      FUN_00bf1030(&local_168,&local_178);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c948;
      if (DAT_0276c948 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c950;
      local_158 = lVar2;
      local_150 = 1;
      if (DAT_0276c950 != 0) {
        FUN_00d50b00();
      }
      local_148 = lVar4;
      local_140 = 1;
      FUN_00bf1030(&local_148,&local_158);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c958;
      if (DAT_0276c958 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c960;
      local_138 = lVar2;
      local_130 = 1;
      if (DAT_0276c960 != 0) {
        FUN_00d50b00();
      }
      local_128 = lVar4;
      local_120 = 1;
      FUN_00bf1030(&local_128,&local_138);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c968;
      if (DAT_0276c968 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c970;
      local_118 = lVar2;
      local_110 = 1;
      if (DAT_0276c970 != 0) {
        FUN_00d50b00();
      }
      local_108 = lVar4;
      local_100 = 1;
      FUN_00bf1030(&local_108,&local_118);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c978;
      if (DAT_0276c978 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c980;
      local_f8 = lVar2;
      local_f0 = 1;
      if (DAT_0276c980 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar4;
      local_e0 = 1;
      FUN_00bf1030(&local_e8,&local_f8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c988;
      if (DAT_0276c988 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c990;
      local_d8 = lVar2;
      local_d0 = 1;
      if (DAT_0276c990 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar4;
      local_c0 = 1;
      FUN_00bf1030(&local_c8,&local_d8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c998;
      if (DAT_0276c998 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c9a0;
      local_b8 = lVar2;
      local_b0 = 1;
      if (DAT_0276c9a0 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = 1;
      FUN_00bf1030(&local_a8,&local_b8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c9a8;
      if (DAT_0276c9a8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c9b0;
      local_98 = lVar2;
      local_90 = 1;
      if (DAT_0276c9b0 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar4;
      local_80 = 1;
      FUN_00bf1030(&local_88,&local_98);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c9b8;
      if (DAT_0276c9b8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c9c0;
      local_78 = lVar2;
      local_70 = 1;
      if (DAT_0276c9c0 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar4;
      local_60 = 1;
      FUN_00bf1030(&local_68,&local_78);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_0276c9c8;
      if (DAT_0276c9c8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276c9d0;
      local_58 = lVar2;
      local_50 = 1;
      if (DAT_0276c9d0 != 0) {
        FUN_00d50b00();
      }
      local_48 = lVar4;
      local_40 = 1;
      FUN_00bf1030(&local_48,&local_58);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5e71 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar1 = DAT_028a5e68;
  puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
  if (puVar3 != DAT_028a5e68) {
    if (DAT_028a5e68 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    *(undefined8 **)(unaff_RDI + 0xb0) = puVar1;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025571d8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined4 *)(puVar3 + 6) = 0;
  FUN_00d500e0();
  local_30 = '\0';
  local_38 = puVar3;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00c8e690();
  puVar3 = local_38;
  if ((((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_30 != '\0')
      ) && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xd0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd0) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  puVar3 = local_38;
  if (((local_30 == '\0') && (local_38 != (undefined8 *)0x0)) &&
     ((FUN_00d50b00(), local_30 != '\0' && (local_38 != (undefined8 *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  ___bzero();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xd8);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd8) = puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00c27bd0 — 5114 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c286eb) */
/* WARNING: Removing unreachable block (ram,0x00c28703) */
/* WARNING: Removing unreachable block (ram,0x00c2836b) */
/* WARNING: Removing unreachable block (ram,0x00c28374) */
/* WARNING: Removing unreachable block (ram,0x00c28863) */
/* WARNING: Removing unreachable block (ram,0x00c2886c) */
/* WARNING: Removing unreachable block (ram,0x00c27c2a) */
/* WARNING: Removing unreachable block (ram,0x00c27c33) */
/* WARNING: Removing unreachable block (ram,0x00c27f1b) */
/* WARNING: Removing unreachable block (ram,0x00c27f24) */
/* WARNING: Removing unreachable block (ram,0x00c2893a) */
/* WARNING: Removing unreachable block (ram,0x00c28943) */
/* WARNING: Removing unreachable block (ram,0x00c2829e) */
/* WARNING: Removing unreachable block (ram,0x00c282a7) */
/* WARNING: Removing unreachable block (ram,0x00c281e7) */
/* WARNING: Removing unreachable block (ram,0x00c28210) */
/* WARNING: Removing unreachable block (ram,0x00c28ca3) */
/* WARNING: Removing unreachable block (ram,0x00c28cac) */
/* WARNING: Removing unreachable block (ram,0x00c287a7) */
/* WARNING: Removing unreachable block (ram,0x00c287c3) */
/* WARNING: Removing unreachable block (ram,0x00c287a9) */
/* WARNING: Removing unreachable block (ram,0x00c287c5) */
/* WARNING: Removing unreachable block (ram,0x00c28d64) */
/* WARNING: Removing unreachable block (ram,0x00c28d6d) */
/* WARNING: Removing unreachable block (ram,0x00c27e87) */
/* WARNING: Removing unreachable block (ram,0x00c27eb0) */
/* WARNING: Removing unreachable block (ram,0x00c27e89) */
/* WARNING: Removing unreachable block (ram,0x00c27eb2) */
/* WARNING: Removing unreachable block (ram,0x00c281e9) */
/* WARNING: Removing unreachable block (ram,0x00c28212) */

void FUN_00c27bd0(undefined8 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM3 [16];
  longlong local_68;
  char local_60;
  int local_50;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5d0))();
  if (local_60 == '\0') {
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
    return;
  }
  lVar7 = *unaff_RSI;
  if (lVar7 != 0) {
    if (param_2 == 0) {
      lVar9 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar7 + 0x18);
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 2 <= (int)lVar9) break;
        iVar4 = *(int *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 4);
        lVar8 = *(longlong *)(local_68 + 0xd8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *(undefined1 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar4) = 0;
        lVar9 = lVar9 + 1;
        FUN_00d50b20();
      }
    }
    else {
      lVar9 = 0;
      while( true ) {
        iVar4 = *(int *)(lVar7 + 0x18);
        iVar6 = iVar4 + 3;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 2 <= (int)lVar9) break;
        iVar4 = *(int *)(*(longlong *)(lVar7 + 0x10) + lVar9 * 4);
        lVar8 = *(longlong *)(local_68 + 0xd8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *(undefined1 *)(*(longlong *)(lVar8 + 0x10) + (longlong)iVar4) = 1;
        lVar9 = lVar9 + 1;
        FUN_00d50b20();
      }
    }
  }
  lVar7 = *(longlong *)(local_68 + 0xd8);
  if ((*(uint *)(*unaff_RSI + 0x18) & 0xfffffffc) == 4) {
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar3) {
        lVar9 = *(longlong *)(lVar7 + 0x10);
        if (7 < uVar3) {
          uVar11 = (ulonglong)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            auVar15 = (undefined1  [16])0x0;
            lVar8 = 0;
            auVar19 = (undefined1  [16])0x0;
          }
          else {
            lVar13 = -(uVar10 & 0xfffffffffffffffe);
            auVar15 = (undefined1  [16])0x0;
            lVar8 = 0;
            auVar19 = (undefined1  [16])0x0;
            do {
              auVar24 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar9 + lVar8));
              in_XMM2._0_4_ = auVar24._0_4_ + auVar15._0_4_;
              in_XMM2._4_4_ = auVar24._4_4_ + auVar15._4_4_;
              in_XMM2._8_4_ = auVar24._8_4_ + auVar15._8_4_;
              in_XMM2._12_4_ = auVar24._12_4_ + auVar15._12_4_;
              auVar24 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar9 + 4 + lVar8));
              in_XMM3._0_4_ = auVar24._0_4_ + auVar19._0_4_;
              in_XMM3._4_4_ = auVar24._4_4_ + auVar19._4_4_;
              in_XMM3._8_4_ = auVar24._8_4_ + auVar19._8_4_;
              in_XMM3._12_4_ = auVar24._12_4_ + auVar19._12_4_;
              auVar24 = pmovzxbd(auVar15,*(undefined4 *)(lVar9 + 8 + lVar8));
              auVar22 = pmovzxbd(auVar19,*(undefined4 *)(lVar9 + 0xc + lVar8));
              auVar15._0_4_ = auVar24._0_4_ + in_XMM2._0_4_;
              auVar15._4_4_ = auVar24._4_4_ + in_XMM2._4_4_;
              auVar15._8_4_ = auVar24._8_4_ + in_XMM2._8_4_;
              auVar15._12_4_ = auVar24._12_4_ + in_XMM2._12_4_;
              auVar19._0_4_ = auVar22._0_4_ + in_XMM3._0_4_;
              auVar19._4_4_ = auVar22._4_4_ + in_XMM3._4_4_;
              auVar19._8_4_ = auVar22._8_4_ + in_XMM3._8_4_;
              auVar19._12_4_ = auVar22._12_4_ + in_XMM3._12_4_;
              lVar8 = lVar8 + 0x10;
              lVar13 = lVar13 + 2;
            } while (lVar13 != 0);
            auVar16 = auVar15;
            auVar20 = auVar19;
            if ((uVar10 & 1) == 0) goto LAB_00c27df0;
          }
          auVar24 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar9 + 4 + lVar8));
          auVar20._0_4_ = auVar19._0_4_ + auVar24._0_4_;
          auVar20._4_4_ = auVar19._4_4_ + auVar24._4_4_;
          auVar20._8_4_ = auVar19._8_4_ + auVar24._8_4_;
          auVar20._12_4_ = auVar19._12_4_ + auVar24._12_4_;
          in_XMM2 = pmovzxbd(auVar24,*(undefined4 *)(lVar9 + lVar8));
          auVar16._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
          auVar16._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
          auVar16._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
          auVar16._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
LAB_00c27df0:
          iVar4 = auVar16._12_4_ + auVar20._12_4_ + auVar16._4_4_ + auVar20._4_4_ +
                  auVar16._8_4_ + auVar20._8_4_ + auVar16._0_4_ + auVar20._0_4_;
          goto joined_r0x00c27e0d;
        }
        uVar11 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + (uint)*(byte *)(lVar9 + uVar11);
          uVar11 = uVar11 + 1;
joined_r0x00c27e0d:
        } while (uVar11 != uVar3);
        if (iVar4 == 0) goto LAB_00c27e39;
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (7 < uVar3) {
          uVar11 = (ulonglong)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            auVar17 = (undefined1  [16])0x0;
            lVar9 = 0;
            auVar21 = (undefined1  [16])0x0;
          }
          else {
            lVar8 = -(uVar10 & 0xfffffffffffffffe);
            auVar17 = (undefined1  [16])0x0;
            lVar9 = 0;
            auVar21 = (undefined1  [16])0x0;
            do {
              auVar24 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar7 + lVar9));
              in_XMM2._0_4_ = auVar24._0_4_ + auVar17._0_4_;
              in_XMM2._4_4_ = auVar24._4_4_ + auVar17._4_4_;
              in_XMM2._8_4_ = auVar24._8_4_ + auVar17._8_4_;
              in_XMM2._12_4_ = auVar24._12_4_ + auVar17._12_4_;
              auVar24 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar7 + 4 + lVar9));
              in_XMM3._0_4_ = auVar24._0_4_ + auVar21._0_4_;
              in_XMM3._4_4_ = auVar24._4_4_ + auVar21._4_4_;
              in_XMM3._8_4_ = auVar24._8_4_ + auVar21._8_4_;
              in_XMM3._12_4_ = auVar24._12_4_ + auVar21._12_4_;
              auVar24 = pmovzxbd(auVar17,*(undefined4 *)(lVar7 + 8 + lVar9));
              auVar22 = pmovzxbd(auVar21,*(undefined4 *)(lVar7 + 0xc + lVar9));
              auVar17._0_4_ = auVar24._0_4_ + in_XMM2._0_4_;
              auVar17._4_4_ = auVar24._4_4_ + in_XMM2._4_4_;
              auVar17._8_4_ = auVar24._8_4_ + in_XMM2._8_4_;
              auVar17._12_4_ = auVar24._12_4_ + in_XMM2._12_4_;
              auVar21._0_4_ = auVar22._0_4_ + in_XMM3._0_4_;
              auVar21._4_4_ = auVar22._4_4_ + in_XMM3._4_4_;
              auVar21._8_4_ = auVar22._8_4_ + in_XMM3._8_4_;
              auVar21._12_4_ = auVar22._12_4_ + in_XMM3._12_4_;
              lVar9 = lVar9 + 0x10;
              lVar8 = lVar8 + 2;
            } while (lVar8 != 0);
          }
          auVar18 = auVar17;
          auVar23 = auVar21;
          if ((uVar10 & 1) != 0) {
            auVar24 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar7 + 4 + lVar9));
            auVar23._0_4_ = auVar21._0_4_ + auVar24._0_4_;
            auVar23._4_4_ = auVar21._4_4_ + auVar24._4_4_;
            auVar23._8_4_ = auVar21._8_4_ + auVar24._8_4_;
            auVar23._12_4_ = auVar21._12_4_ + auVar24._12_4_;
            auVar24 = pmovzxbd(auVar24,*(undefined4 *)(lVar7 + lVar9));
            auVar18._0_4_ = auVar17._0_4_ + auVar24._0_4_;
            auVar18._4_4_ = auVar17._4_4_ + auVar24._4_4_;
            auVar18._8_4_ = auVar17._8_4_ + auVar24._8_4_;
            auVar18._12_4_ = auVar17._12_4_ + auVar24._12_4_;
          }
          iVar4 = auVar18._12_4_ + auVar23._12_4_ + auVar18._4_4_ + auVar23._4_4_ +
                  auVar18._8_4_ + auVar23._8_4_ + auVar18._0_4_ + auVar23._0_4_;
          goto joined_r0x00c28749;
        }
        uVar11 = 0;
        iVar4 = 0;
        do {
          iVar4 = iVar4 + (uint)*(byte *)(lVar7 + uVar11);
          uVar11 = uVar11 + 1;
joined_r0x00c28749:
        } while (uVar11 != uVar3);
        if (iVar4 != 1) {
          iVar4 = **(int **)(*unaff_RSI + 0x10);
          if (param_2 == 0) {
            FUN_00c8e690();
            if ((local_60 == '\0') && (local_68 != 0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            FUN_00c92160();
            if (iVar4 == 0) {
              ___bzero();
            }
            else {
              iVar6 = *(int *)(local_68 + 0x18);
              iVar5 = iVar6 + 3;
              if (-1 < iVar6) {
                iVar5 = iVar6;
              }
              if (3 < iVar6) {
                lVar7 = *(longlong *)(local_68 + 0x10);
                uVar3 = (iVar5 >> 2) - 1;
                uVar11 = 0;
                if (6 < uVar3) {
                  uVar14 = (ulonglong)uVar3 + 1;
                  uVar11 = uVar14 & 0xfffffffffffffff8;
                  uVar12 = (uVar11 - 8 >> 3) + 1;
                  uVar10 = (ulonglong)((uint)uVar12 & 7);
                  if (uVar11 - 8 < 0x38) {
                    lVar9 = 0;
                  }
                  else {
                    lVar8 = -(uVar12 & 0xfffffffffffffff8);
                    lVar9 = 0;
                    do {
                      piVar1 = (int *)(lVar7 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x10 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x20 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x30 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x40 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x50 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x60 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x70 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x80 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0x90 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xa0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xb0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xc0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xd0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xe0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar7 + 0xf0 + lVar9 * 4);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      lVar9 = lVar9 + 0x40;
                      lVar8 = lVar8 + 8;
                    } while (lVar8 != 0);
                  }
                  if (uVar10 != 0) {
                    lVar9 = lVar7 + lVar9 * 4;
                    lVar8 = 0;
                    do {
                      piVar1 = (int *)(lVar9 + lVar8);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      piVar1 = (int *)(lVar9 + 0x10 + lVar8);
                      *piVar1 = iVar4;
                      piVar1[1] = iVar4;
                      piVar1[2] = iVar4;
                      piVar1[3] = iVar4;
                      lVar8 = lVar8 + 0x20;
                    } while (uVar10 << 5 != lVar8);
                  }
                  if (uVar14 == uVar11) goto LAB_00c28fec;
                  lVar7 = lVar7 + uVar11 * 4;
                }
                lVar9 = 0;
                do {
                  *(int *)(lVar7 + lVar9 * 4) = iVar4;
                  lVar9 = lVar9 + 1;
                } while ((iVar5 >> 2) - (int)uVar11 != (int)lVar9);
              }
            }
LAB_00c28fec:
            FUN_00c29420();
            if (local_68 != 0) {
              FUN_00d50b20();
            }
            goto LAB_00c28c4e;
          }
          FUN_00c8e690();
          if ((local_60 == '\0') && (local_68 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          if (iVar4 == 0) {
            ___bzero();
          }
          else {
            iVar6 = *(int *)(local_68 + 0x18);
            iVar5 = iVar6 + 3;
            if (-1 < iVar6) {
              iVar5 = iVar6;
            }
            if (3 < iVar6) {
              lVar7 = *(longlong *)(local_68 + 0x10);
              uVar3 = (iVar5 >> 2) - 1;
              uVar11 = 0;
              if (6 < uVar3) {
                uVar14 = (ulonglong)uVar3 + 1;
                uVar11 = uVar14 & 0xfffffffffffffff8;
                uVar12 = (uVar11 - 8 >> 3) + 1;
                uVar10 = (ulonglong)((uint)uVar12 & 7);
                if (uVar11 - 8 < 0x38) {
                  lVar9 = 0;
                }
                else {
                  lVar8 = -(uVar12 & 0xfffffffffffffff8);
                  lVar9 = 0;
                  do {
                    piVar1 = (int *)(lVar7 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x10 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x20 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x30 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x40 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x50 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x60 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x70 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x80 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0x90 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xa0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xb0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xc0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xd0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xe0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar7 + 0xf0 + lVar9 * 4);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    lVar9 = lVar9 + 0x40;
                    lVar8 = lVar8 + 8;
                  } while (lVar8 != 0);
                }
                if (uVar10 != 0) {
                  lVar9 = lVar7 + lVar9 * 4;
                  lVar8 = 0;
                  do {
                    piVar1 = (int *)(lVar9 + lVar8);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    piVar1 = (int *)(lVar9 + 0x10 + lVar8);
                    *piVar1 = iVar4;
                    piVar1[1] = iVar4;
                    piVar1[2] = iVar4;
                    piVar1[3] = iVar4;
                    lVar8 = lVar8 + 0x20;
                  } while (uVar10 << 5 != lVar8);
                }
                if (uVar14 == uVar11) goto LAB_00c28ee8;
                lVar7 = lVar7 + uVar11 * 4;
              }
              lVar9 = 0;
              do {
                *(int *)(lVar7 + lVar9 * 4) = iVar4;
                lVar9 = lVar9 + 1;
              } while ((iVar5 >> 2) - (int)uVar11 != (int)lVar9);
            }
          }
LAB_00c28ee8:
          FUN_00c29420();
          if (local_68 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00c28c4e;
        }
        lVar7 = *(longlong *)(local_68 + 200);
        if (lVar7 == 0) goto LAB_00c28c4e;
        local_50 = -1;
        while( true ) {
          lVar9 = (longlong)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(lVar7 + 0xc) <= local_50) break;
          if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar9 * 8) + 0x28) != 2) ||
             (local_50 == **(int **)(*unaff_RSI + 0x10))) {
            lVar9 = *(longlong *)(local_68 + 0xd8);
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            cVar2 = *(char *)(*(longlong *)(lVar9 + 0x10) + (longlong)local_50);
            FUN_00d50b20();
            if (cVar2 == '\0') {
              FUN_00c8e690();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              if (local_50 == 0) {
                ___bzero();
              }
              else {
                iVar4 = *(int *)(local_40 + 0x18);
                iVar6 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar6 = iVar4;
                }
                if (3 < iVar4) {
                  lVar9 = *(longlong *)(local_40 + 0x10);
                  uVar3 = (iVar6 >> 2) - 1;
                  uVar11 = 0;
                  if (6 < uVar3) {
                    uVar14 = (ulonglong)uVar3 + 1;
                    uVar11 = uVar14 & 0x1fffffff8;
                    uVar12 = (uVar11 - 8 >> 3) + 1;
                    uVar10 = (ulonglong)((uint)uVar12 & 7);
                    if (uVar11 - 8 < 0x38) {
                      lVar8 = 0;
                    }
                    else {
                      lVar13 = -(uVar12 & 0xfffffffffffffff8);
                      lVar8 = 0;
                      do {
                        piVar1 = (int *)(lVar9 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar8 = lVar8 + 0x40;
                        lVar13 = lVar13 + 8;
                      } while (lVar13 != 0);
                    }
                    if (uVar10 != 0) {
                      lVar8 = lVar9 + lVar8 * 4;
                      lVar13 = 0;
                      do {
                        piVar1 = (int *)(lVar8 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar13 = lVar13 + 0x20;
                      } while (uVar10 << 5 != lVar13);
                    }
                    if (uVar14 == uVar11) goto LAB_00c28c0c;
                    lVar9 = lVar9 + uVar11 * 4;
                  }
                  lVar8 = 0;
                  do {
                    *(int *)(lVar9 + lVar8 * 4) = local_50;
                    lVar8 = lVar8 + 1;
                  } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
                }
              }
LAB_00c28c0c:
              FUN_00c29420();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              FUN_00c8e690();
              if ((local_38 == '\0') && (local_40 != 0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              FUN_00c92160();
              if (local_50 == 0) {
                ___bzero();
              }
              else {
                iVar4 = *(int *)(local_40 + 0x18);
                iVar6 = iVar4 + 3;
                if (-1 < iVar4) {
                  iVar6 = iVar4;
                }
                if (3 < iVar4) {
                  lVar9 = *(longlong *)(local_40 + 0x10);
                  uVar3 = (iVar6 >> 2) - 1;
                  uVar11 = 0;
                  if (6 < uVar3) {
                    uVar14 = (ulonglong)uVar3 + 1;
                    uVar11 = uVar14 & 0x1fffffff8;
                    uVar12 = (uVar11 - 8 >> 3) + 1;
                    uVar10 = (ulonglong)((uint)uVar12 & 7);
                    if (uVar11 - 8 < 0x38) {
                      lVar8 = 0;
                    }
                    else {
                      lVar13 = -(uVar12 & 0xfffffffffffffff8);
                      lVar8 = 0;
                      do {
                        piVar1 = (int *)(lVar9 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar8 = lVar8 + 0x40;
                        lVar13 = lVar13 + 8;
                      } while (lVar13 != 0);
                    }
                    if (uVar10 != 0) {
                      lVar8 = lVar9 + lVar8 * 4;
                      lVar13 = 0;
                      do {
                        piVar1 = (int *)(lVar8 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                        *piVar1 = local_50;
                        piVar1[1] = local_50;
                        piVar1[2] = local_50;
                        piVar1[3] = local_50;
                        lVar13 = lVar13 + 0x20;
                      } while (uVar10 << 5 != lVar13);
                    }
                    if (uVar14 == uVar11) goto LAB_00c28aec;
                    lVar9 = lVar9 + uVar11 * 4;
                  }
                  lVar8 = 0;
                  do {
                    *(int *)(lVar9 + lVar8 * 4) = local_50;
                    lVar8 = lVar8 + 1;
                  } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
                }
              }
LAB_00c28aec:
              FUN_00c29420();
              if (local_40 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        goto LAB_00c28c45;
      }
    }
LAB_00c27e39:
    lVar7 = *(longlong *)(local_68 + 200);
    if (lVar7 == 0) goto LAB_00c28c4e;
    local_50 = -1;
    while( true ) {
      lVar9 = (longlong)local_50;
      local_50 = local_50 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_50) break;
      if ((*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar9 * 8) + 0x28) != 2) ||
         (local_50 == **(int **)(*unaff_RSI + 0x10))) {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(longlong *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (ulonglong)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (ulonglong)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c280bb;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c280bb:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (lVar7 != 0) {
      uVar3 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar3) {
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if (uVar3 < 8) {
          uVar11 = 0;
        }
        else {
          uVar11 = (ulonglong)(uVar3 & 0xfffffff8);
          uVar10 = (uVar11 - 8 >> 3) + 1;
          if (uVar11 - 8 == 0) {
            lVar9 = 0;
LAB_00c2815a:
            auVar24 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar7 + 4 + lVar9));
            pmovzxbd(auVar24,*(undefined4 *)(lVar7 + lVar9));
          }
          else {
            lVar8 = -(uVar10 & 0xfffffffffffffffe);
            auVar24 = (undefined1  [16])0x0;
            lVar9 = 0;
            auVar22 = (undefined1  [16])0x0;
            do {
              auVar15 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar7 + lVar9));
              in_XMM2._0_4_ = auVar15._0_4_ + auVar24._0_4_;
              in_XMM2._4_4_ = auVar15._4_4_ + auVar24._4_4_;
              in_XMM2._8_4_ = auVar15._8_4_ + auVar24._8_4_;
              in_XMM2._12_4_ = auVar15._12_4_ + auVar24._12_4_;
              auVar15 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar7 + 4 + lVar9));
              in_XMM3._0_4_ = auVar15._0_4_ + auVar22._0_4_;
              in_XMM3._4_4_ = auVar15._4_4_ + auVar22._4_4_;
              in_XMM3._8_4_ = auVar15._8_4_ + auVar22._8_4_;
              in_XMM3._12_4_ = auVar15._12_4_ + auVar22._12_4_;
              auVar15 = pmovzxbd(auVar24,*(undefined4 *)(lVar7 + 8 + lVar9));
              auVar19 = pmovzxbd(auVar22,*(undefined4 *)(lVar7 + 0xc + lVar9));
              auVar24._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
              auVar24._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
              auVar24._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
              auVar24._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
              auVar22._0_4_ = auVar19._0_4_ + in_XMM3._0_4_;
              auVar22._4_4_ = auVar19._4_4_ + in_XMM3._4_4_;
              auVar22._8_4_ = auVar19._8_4_ + in_XMM3._8_4_;
              auVar22._12_4_ = auVar19._12_4_ + in_XMM3._12_4_;
              lVar9 = lVar9 + 0x10;
              lVar8 = lVar8 + 2;
            } while (lVar8 != 0);
            if ((uVar10 & 1) != 0) goto LAB_00c2815a;
          }
          if (uVar11 == uVar3) goto LAB_00c2819f;
        }
        do {
          uVar11 = uVar11 + 1;
        } while (uVar3 != uVar11);
      }
    }
LAB_00c2819f:
    lVar7 = *(longlong *)(local_68 + 200);
    if (lVar7 == 0) goto LAB_00c28c4e;
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar7 + 0xc)) {
      lVar9 = *(longlong *)(local_68 + 0xd8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      cVar2 = *(char *)(*(longlong *)(lVar9 + 0x10) + (longlong)local_50);
      FUN_00d50b20();
      if (cVar2 == '\0') {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(longlong *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (ulonglong)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (ulonglong)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c2863c;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c2863c:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_50 == 0) {
          ___bzero();
        }
        else {
          iVar4 = *(int *)(local_40 + 0x18);
          iVar6 = iVar4 + 3;
          if (-1 < iVar4) {
            iVar6 = iVar4;
          }
          if (3 < iVar4) {
            lVar9 = *(longlong *)(local_40 + 0x10);
            uVar3 = (iVar6 >> 2) - 1;
            uVar11 = 0;
            if (6 < uVar3) {
              uVar14 = (ulonglong)uVar3 + 1;
              uVar11 = uVar14 & 0x1fffffff8;
              uVar12 = (uVar11 - 8 >> 3) + 1;
              uVar10 = (ulonglong)((uint)uVar12 & 7);
              if (uVar11 - 8 < 0x38) {
                lVar8 = 0;
              }
              else {
                lVar13 = -(uVar12 & 0xfffffffffffffff8);
                lVar8 = 0;
                do {
                  piVar1 = (int *)(lVar9 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x10 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x20 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x30 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x40 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x50 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x60 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x70 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x80 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0x90 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xa0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xb0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xc0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xd0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xe0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar9 + 0xf0 + lVar8 * 4);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar8 = lVar8 + 0x40;
                  lVar13 = lVar13 + 8;
                } while (lVar13 != 0);
              }
              if (uVar10 != 0) {
                lVar8 = lVar9 + lVar8 * 4;
                lVar13 = 0;
                do {
                  piVar1 = (int *)(lVar8 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  piVar1 = (int *)(lVar8 + 0x10 + lVar13);
                  *piVar1 = local_50;
                  piVar1[1] = local_50;
                  piVar1[2] = local_50;
                  piVar1[3] = local_50;
                  lVar13 = lVar13 + 0x20;
                } while (uVar10 << 5 != lVar13);
              }
              if (uVar14 == uVar11) goto LAB_00c2851c;
              lVar9 = lVar9 + uVar11 * 4;
            }
            lVar8 = 0;
            do {
              *(int *)(lVar9 + lVar8 * 4) = local_50;
              lVar8 = lVar8 + 1;
            } while ((iVar6 >> 2) - (int)uVar11 != (int)lVar8);
          }
        }
LAB_00c2851c:
        FUN_00c29420();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_00c28c45:
  FUN_00c4d4e0();
LAB_00c28c4e:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c251f0 — 3521 bytes
// str: ""ir%I_%@""
// str: ""GNOverloudConvolver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c251f0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong *plVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  longlong local_180;
  char local_178;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_68;
  uint local_60;
  undefined4 local_5c;
  longlong local_58;
  char local_50;
  char local_41;
  longlong *local_40;
  char local_31;
  
  lVar2 = DAT_0276ca70;
  if (DAT_0276ca70 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_0276ca78;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,6);
    local_b0 = local_68;
    local_a8 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_a8 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 200) + 0x10) + (longlong)iVar4 * 8) + 0x20);
    if (((dVar1 != 0.0) || (NAN(dVar1))) &&
       (param_3 = *(undefined8 **)(*param_1 + 0xd8), param_3 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (longlong *)0x0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = (longlong)plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = (longlong)local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (DAT_0276ca78 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_00;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_0276ca60;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,7);
    local_a0 = local_68;
    local_98 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_98 = '\x01';
    iVar4 = FUN_00c716c0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    dVar1 = *(double *)
             (*(longlong *)
               (*(longlong *)(*(longlong *)(*param_1 + 200) + 0x10) + (longlong)iVar4 * 8) + 0x20);
    if ((dVar1 != 0.0) || (NAN(dVar1))) {
      FUN_00d50b00();
    }
    FUN_00d46300();
    plVar6 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 == (longlong *)0x0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = (longlong)plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *unaff_RDI = (longlong)local_68;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_60 = local_60 & 0xffffff00;
    }
    if ((dVar1 == 0.0) && (!NAN(dVar1))) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (DAT_0276ca60 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    FUN_00d46530();
    plVar6 = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = (longlong)plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((char)local_60 == '\0') {
          return;
        }
        if (local_68 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      local_68 = (longlong *)0x0;
    }
    *unaff_RDI = (longlong)local_68;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  plVar6 = (longlong *)*param_1;
  if ((DAT_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0276e070 = FUN_00b10020();
    _DAT_0276e058 = "GNOverloudConvolver";
    _DAT_0276e060 = 0xe0;
    _DAT_0276e068 = FUN_00c41070;
    _DAT_0276e078 = 0;
    uRam000000000276e080 = 0;
    _DAT_0276e088 = 0;
    uRam000000000276e090 = 0;
    _DAT_0276e098 = 0;
    uRam000000000276e0a0 = 0;
    _DAT_0276e0a8 = 0;
    uRam000000000276e0b0 = 0;
    _DAT_0276e0b8 = 0;
    uRam000000000276e0c0 = 0;
    _DAT_0276e0c8 = 0;
    uRam000000000276e0d0 = 0;
    _DAT_0276e0d8 = 0;
    uRam000000000276e0e0 = 0;
    _DAT_0276e0e8 = 0;
    uRam000000000276e0f0 = 0;
    _DAT_0276e0f8 = 0;
    uRam000000000276e100 = 0;
    _DAT_0276e108 = 0;
    uRam000000000276e110 = 0;
    _DAT_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c2551c:
    param_1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2551c;
  }
  plVar6 = (longlong *)*param_1;
  local_41 = (char)param_1[1];
  if ((local_41 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pplVar5 = &local_68;
  local_78 = plVar6;
  FUN_00b37610();
  plVar6 = local_68;
  if ((DAT_0276e120 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0276e070 = FUN_00b10020();
    _DAT_0276e058 = "GNOverloudConvolver";
    _DAT_0276e060 = 0xe0;
    _DAT_0276e068 = FUN_00c41070;
    _DAT_0276e078 = 0;
    uRam000000000276e080 = 0;
    _DAT_0276e088 = 0;
    uRam000000000276e090 = 0;
    _DAT_0276e098 = 0;
    uRam000000000276e0a0 = 0;
    _DAT_0276e0a8 = 0;
    uRam000000000276e0b0 = 0;
    _DAT_0276e0b8 = 0;
    uRam000000000276e0c0 = 0;
    _DAT_0276e0c8 = 0;
    uRam000000000276e0d0 = 0;
    _DAT_0276e0d8 = 0;
    uRam000000000276e0e0 = 0;
    _DAT_0276e0e8 = 0;
    uRam000000000276e0f0 = 0;
    _DAT_0276e0f8 = 0;
    uRam000000000276e100 = 0;
    _DAT_0276e108 = 0;
    uRam000000000276e110 = 0;
    _DAT_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c2558a:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c2558a;
  }
  local_80 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar5 + 1) = 0;
  }
  if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (longlong *)*param_3;
  local_31 = *(char *)(param_3 + 1);
  bVar8 = local_31 == '\0';
  bVar9 = local_40 == (longlong *)0x0;
  if (!bVar9 && !bVar8) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0276ca68;
  if (DAT_0276ca68 != 0) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  plVar6 = local_40;
  lVar2 = DAT_0276ca80;
  if (cVar3 == '\0') {
    if (DAT_0276ca80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = FUN_00d90870();
    plVar6 = local_40;
    uVar10 = extraout_XMM0_Qa_02;
    if (lVar2 != 0) {
      uVar10 = FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d8f140(uVar10,9);
      plVar7 = local_68;
      if (plVar6 == local_68) {
        plVar7 = plVar6;
        cVar3 = local_31;
        if ((local_31 == '\0') && (plVar6 != (longlong *)0x0)) {
          if ((char)local_60 != '\0') goto LAB_00c25917;
          FUN_00d50b00();
          cVar3 = '\x01';
        }
      }
      else {
        if ((char)local_60 != '\0') {
          cVar3 = '\x01';
          if (bVar9 || bVar8) goto LAB_00c258cf;
          FUN_00d50b20();
          goto LAB_00c25981;
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar3 = '\x01';
        if (!bVar9 && !bVar8) {
          FUN_00d50b20();
        }
      }
      if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00c25981;
    }
    bVar9 = false;
    bVar8 = false;
    lVar2 = DAT_0276ca88;
  }
  else {
    FUN_00d8f140(uVar10,8);
    plVar7 = local_68;
    if (plVar6 == local_68) {
      plVar7 = plVar6;
      cVar3 = local_31;
      if ((local_31 == '\0') && (plVar6 != (longlong *)0x0)) {
        if ((char)local_60 != '\0') {
LAB_00c25917:
          cVar3 = '\x01';
          goto LAB_00c25981;
        }
        FUN_00d50b00();
        cVar3 = '\x01';
      }
    }
    else {
      if ((char)local_60 != '\0') {
        cVar3 = '\x01';
        if (bVar9 || bVar8) {
LAB_00c258cf:
          cVar3 = '\x01';
          plVar7 = local_68;
        }
        else {
          FUN_00d50b20();
        }
        goto LAB_00c25981;
      }
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      cVar3 = '\x01';
      if (!bVar9 && !bVar8) {
        FUN_00d50b20();
      }
    }
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00c25981:
    bVar9 = true;
    bVar8 = true;
    lVar2 = DAT_0276ca88;
    local_40 = plVar7;
    local_31 = cVar3;
  }
  DAT_0276ca88 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
    bVar8 = bVar9;
  }
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_03;
  if (lVar2 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = DAT_0276ca90;
  if (cVar3 != '\0') {
    FUN_00d8f140(uVar10,8);
    local_90 = local_68;
    plVar6 = local_78;
    local_88 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_88 = '\x01';
    iVar4 = FUN_00c716c0();
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(plVar6[0x19] + 0x10) + (longlong)iVar4 * 8) + 0x10);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = local_31;
    if (((char)local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
      cVar3 = local_31;
    }
    goto LAB_00c25c36;
  }
  if (DAT_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  cVar3 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_04;
  if (cVar3 == '\0') {
    cVar3 = local_31;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
      cVar3 = local_31;
    }
  }
  else {
    iVar4 = *(int *)(unaff_RSI + 0xb0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    cVar3 = local_31;
    if (iVar4 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_60 = 2;
      local_5c = *(undefined4 *)(unaff_RSI + 0xb0);
      local_68 = &DAT_0263cdb0;
      local_50 = 0;
      if (local_180 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_58 = local_180;
      local_50 = '\x01';
      uVar10 = FUN_00d8cb40(uVar10,&local_68);
      plVar6 = local_c0;
      if (local_c0 == local_40) {
        cVar3 = local_31;
        if ((local_31 == '\0') && (local_c0 != (longlong *)0x0)) {
          plVar6 = local_40;
          if (local_b8 != '\0') goto LAB_00c25d9c;
          uVar10 = FUN_00d50b00();
          cVar3 = '\x01';
        }
LAB_00c25dee:
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
      }
      else {
        if (local_b8 == '\0') {
          if (local_c0 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          cVar3 = '\x01';
          if ((local_31 == '\0') || (local_40 == (longlong *)0x0)) {
            local_40 = plVar6;
          }
          else {
            local_40 = plVar6;
            uVar10 = FUN_00d50b20();
          }
          goto LAB_00c25dee;
        }
        if ((local_31 != '\0') && (local_40 != (longlong *)0x0)) {
          local_40 = local_c0;
          uVar10 = FUN_00d50b20();
        }
LAB_00c25d9c:
        local_b8 = '\0';
        cVar3 = '\x01';
        local_40 = plVar6;
      }
      local_68 = &DAT_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        uVar10 = FUN_00d50b20();
      }
    }
  }
  plVar6 = local_78;
  if (local_80 == (longlong *)0x0) {
    if (bVar8) {
      local_f0 = local_40;
      local_e8 = '\0';
      (**(code **)(*local_78 + 0x608))(uVar10,&local_f0);
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_e0 = local_40;
      local_d8 = '\0';
      (**(code **)(*local_78 + 0x88))(uVar10,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else if (bVar8) {
    local_110 = local_40;
    local_108 = '\0';
    (**(code **)(*local_80 + 0x608))(uVar10,&local_110);
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_100 = local_40;
    local_f8 = '\0';
    (**(code **)(*local_80 + 0x88))(uVar10,&local_100);
    if ((local_f8 != '\0') && (local_100 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00c25c36:
  if ((cVar3 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_41 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c271c0 — 1723 bytes
// str: ""ir%I_%@""
// ============================================================

ulonglong FUN_00c271c0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_1b8;
  undefined1 local_1b0;
  undefined8 *local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  undefined8 *local_168;
  undefined1 local_160;
  undefined8 *local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
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
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  
  lVar1 = DAT_0276ca68;
  local_48 = param_3;
  if (DAT_0276ca68 != 0) {
    FUN_00d50b00();
  }
  local_128 = lVar1;
  local_120 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276ca70;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (cVar5 != '\0') goto LAB_00c27866;
  if (DAT_0276ca70 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar1;
  local_110 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa;
  if ((local_110 != '\0') && (local_118 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = DAT_0276ca78;
  if (cVar5 != '\0') {
    local_1b8 = *param_1;
    local_1b0 = 0;
    FUN_00c26750(uVar10,&local_1b8);
    if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_108 = *local_48;
    local_100 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_00;
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_198 = local_68;
      local_190 = 0;
      FUN_00c27bd0(uVar10,0);
    }
    else {
      local_1a8 = local_68;
      local_1a0 = 0;
      FUN_00c27bd0(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (DAT_0276ca78 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  cVar5 = FUN_00d90870();
  uVar10 = extraout_XMM0_Qa_01;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = DAT_0276ca60;
  if (cVar5 != '\0') {
    local_188 = *param_2;
    local_180 = 0;
    local_178 = *param_1;
    local_170 = 0;
    FUN_00c26750(uVar10,&local_178);
    if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    local_e8 = *local_48;
    local_e0 = '\0';
    iVar6 = FUN_00c716c0();
    uVar10 = extraout_XMM0_Qa_02;
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 == 0) {
      local_158 = local_68;
      local_150 = 0;
      FUN_00c29420(uVar10,0);
    }
    else {
      local_168 = local_68;
      local_160 = 0;
      FUN_00c29420(uVar10,2);
    }
    FUN_01d243a0();
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00c27866;
  }
  if (DAT_0276ca60 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  cVar5 = FUN_00d90870();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = local_48;
  lVar1 = DAT_0276ca90;
  if (cVar5 != '\0') {
    lVar1 = *param_2;
    local_c8 = *local_48;
    local_c0 = '\0';
    iVar6 = FUN_00c716c0();
    local_40 = *(longlong **)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar1 + 200) + 0x10) + (longlong)iVar6 * 8) + 0x20);
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (((double)local_40 != 0.0) || (NAN((double)local_40))) {
      local_b8 = *plVar4;
      local_b0 = '\0';
      uVar7 = FUN_00c716c0();
      *(undefined4 *)(unaff_RDI + 0xb0) = uVar7;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d243a0();
    }
    goto LAB_00c27866;
  }
  if (DAT_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar1;
  local_80 = '\x01';
  cVar5 = FUN_00d90870();
  if (cVar5 == '\0') {
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar6 = *(int *)(unaff_RDI + 0xb0);
    uVar10 = extraout_XMM0_Qa_03;
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    if (iVar6 != 0) {
      uVar10 = FUN_00d8f140(uVar10,4);
      local_58 = local_138;
      local_60 = 2;
      local_5c = *(undefined4 *)(unaff_RDI + 0xb0);
      local_68 = &DAT_0263cdb0;
      local_50 = 0;
      if (local_138 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_50 = '\x01';
      FUN_00d8cb40(uVar10,&local_68);
      lVar3 = local_78;
      lVar1 = *param_1;
      if (lVar1 == local_78) {
        if (((char)param_1[1] != '\0') || (local_78 == 0)) goto LAB_00c2778c;
        local_40 = param_1 + 1;
        if (local_70 == '\0') {
          FUN_00d50b00();
          goto LAB_00c27785;
        }
LAB_00c2774c:
        *(undefined1 *)local_40 = 1;
        local_70 = '\0';
      }
      else {
        local_40 = param_1 + 1;
        lVar2 = param_1[1];
        if (local_70 != '\0') {
          *param_1 = local_78;
          if (((char)lVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2774c;
        }
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar3;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_00c27785:
        *(undefined1 *)local_40 = 1;
LAB_00c2778c:
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      local_68 = &DAT_0263cdb0;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_148 = *param_2;
  local_140 = 0;
  local_a8 = *param_1;
  local_a0 = '\0';
  local_98 = *local_48;
  local_90 = '\0';
  uVar8 = FUN_00c17aa0(&local_a8,&local_148,&local_98);
  uVar9 = (ulonglong)uVar8;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_00c27866:
  return uVar9 & 0xffffffff;
}




// ============================================================
// @00c29bd0 — 1663 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c2a0b6) */
/* WARNING: Removing unreachable block (ram,0x00c2a0bf) */
/* WARNING: Removing unreachable block (ram,0x00c2a14f) */
/* WARNING: Removing unreachable block (ram,0x00c2a15c) */
/* WARNING: Removing unreachable block (ram,0x00c29fa9) */
/* WARNING: Removing unreachable block (ram,0x00c29fb2) */
/* WARNING: Removing unreachable block (ram,0x00c29f5b) */
/* WARNING: Removing unreachable block (ram,0x00c29f29) */
/* WARNING: Removing unreachable block (ram,0x00c29f32) */
/* WARNING: Removing unreachable block (ram,0x00c29d5c) */
/* WARNING: Removing unreachable block (ram,0x00c29d65) */
/* WARNING: Removing unreachable block (ram,0x00c29c9c) */
/* WARNING: Removing unreachable block (ram,0x00c29ca5) */
/* WARNING: Removing unreachable block (ram,0x00c29e78) */
/* WARNING: Removing unreachable block (ram,0x00c29e81) */
/* WARNING: Removing unreachable block (ram,0x00c29ecc) */
/* WARNING: Removing unreachable block (ram,0x00c29ed5) */
/* WARNING: Removing unreachable block (ram,0x00c29fff) */
/* WARNING: Removing unreachable block (ram,0x00c2a008) */
/* WARNING: Removing unreachable block (ram,0x00c2a044) */
/* WARNING: Removing unreachable block (ram,0x00c2a1d3) */
/* WARNING: Removing unreachable block (ram,0x00c2a1dc) */
/* WARNING: Removing unreachable block (ram,0x00c2a11f) */
/* WARNING: Removing unreachable block (ram,0x00c29cfb) */
/* WARNING: Removing unreachable block (ram,0x00c29cd4) */
/* WARNING: Removing unreachable block (ram,0x00c29cdd) */
/* WARNING: Removing unreachable block (ram,0x00c29d91) */
/* WARNING: Removing unreachable block (ram,0x00c29d9a) */
/* WARNING: Removing unreachable block (ram,0x00c2a1bf) */
/* WARNING: Removing unreachable block (ram,0x00c2a1c8) */

undefined8 FUN_00c29bd0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  undefined1 local_108 [8];
  undefined1 local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  int local_b4;
  longlong local_58;
  char local_50;
  
  if (param_2 != 0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    FUN_01caea40();
    FUN_00d46530();
    lVar1 = DAT_0276cab0;
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      lVar1 = DAT_0276cab0;
    }
    DAT_0276cab0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    plVar2 = DAT_0276cab8;
    if (DAT_0276cab8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    FUN_00ca0840();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_f8 = DAT_0276cac0;
    if (DAT_0276cac0 != 0) {
      FUN_00d50b00();
    }
    local_f0 = '\x01';
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_e0 = '\0';
    local_e8 = plVar6;
    FUN_00d40470(&local_e8,&stack0xffffffffffffff60,3,0);
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    plVar6 = DAT_0276cab8;
    if (DAT_0276cab8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_d8 = plVar6;
    local_d0 = '\x01';
    FUN_000175c0();
    cVar3 = FUN_00d45ad0();
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_01f4e930();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x388))();
      FUN_00b7ace0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x368))();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      iVar4 = FUN_01f4eb70();
      if (iVar4 == 0) {
        (**(code **)(*plVar2 + 0x380))();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_c0 = '\0';
        local_c8 = plVar2;
        FUN_00b810f0();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x5d0))();
        iVar4 = FUN_01caea40();
        lVar1 = *(longlong *)(*(longlong *)(plVar2[0x19] + 0x10) + (longlong)iVar4 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        iVar4 = *(int *)(lVar1 + 0x28);
        FUN_00d50b20();
        local_b4 = iVar4;
        (**(code **)(*unaff_RDI + 0x5d0))();
        uVar5 = FUN_01caea40();
        (**(code **)(*unaff_RDI + 0x608))();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_100 = 1;
        FUN_00c1f910(local_108,uVar5,local_b4 != 0);
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01caea40();
        FUN_00c29780();
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x600))();
      FUN_01d114f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}




// ============================================================
// @00c26b60 — 998 bytes
// str: ""ir%I_%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c26f2f) */
/* WARNING: Removing unreachable block (ram,0x00c26f3c) */

void FUN_00c26b60(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong unaff_RDI;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  char local_d0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_0276ca90;
  local_f0 = param_2;
  if (DAT_0276ca90 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  cVar4 = FUN_00d90870();
  if (cVar4 == '\0') {
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_00c26d52;
  }
  iVar1 = *(int *)(unaff_RDI + 0xb0);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 == 0) goto LAB_00c26d52;
  FUN_00d8f140();
  local_d8 = local_78;
  local_e0 = 2;
  local_dc = *(undefined4 *)(unaff_RDI + 0xb0);
  local_e8 = &DAT_0263cdb0;
  local_d0 = 0;
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  local_d0 = '\x01';
  FUN_00d8cb40();
  lVar2 = *param_1;
  if (lVar2 == local_40) {
    if (((char)param_1[1] == '\0') && (local_40 != 0)) {
      local_68 = param_1 + 1;
      if (local_38 != '\0') goto LAB_00c26cc1;
      FUN_00d50b00();
      goto LAB_00c26cfb;
    }
LAB_00c26d02:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = param_1 + 1;
    lVar3 = param_1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_40;
      if (((char)lVar3 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00c26cfb:
      *(undefined1 *)local_68 = 1;
      goto LAB_00c26d02;
    }
    *param_1 = local_40;
    if (((char)lVar3 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_00c26cc1:
    *(undefined1 *)local_68 = 1;
    local_38 = '\0';
  }
  local_e8 = &DAT_0263cdb0;
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00c26d52:
  lVar2 = DAT_0276ca98;
  if (DAT_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276caa0;
  if (DAT_0276caa0 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar2;
  local_108 = *param_1;
  local_100 = lVar3;
  local_f8 = *local_f0;
  FUN_002d73e0(&local_100,&local_108,&local_f8,4);
  FUN_0036bfe0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_002d10d0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_98 = DAT_0276caa8;
  if (DAT_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_88 = local_40;
  local_80 = '\0';
  FUN_00d40470(&local_88,&stack0xffffffffffffffb0,3,3);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d243a0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c26750 — 817 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c267de) */
/* WARNING: Removing unreachable block (ram,0x00c267e7) */

void FUN_00c26750(void)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  longlong local_50;
  char local_48;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  FUN_01d3a560();
  if (local_48 == '\0') {
    if (local_50 == 0) goto LAB_00c26801;
    FUN_00d50b00();
LAB_00c267ec:
    uVar6 = FUN_01d3b590();
    if ((uVar6 & 8) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
      dVar1 = *(double *)(*plVar7 + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(*plVar7,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar4) = 0;
        plVar7 = *(longlong **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[1] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[1],1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar4) = 1;
        plVar7 = *(longlong **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[2] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[2],1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar4) = 2;
        plVar7 = *(longlong **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[3] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(plVar7[3],1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar4) = 3;
        plVar7 = *(longlong **)(*(longlong *)(*unaff_RSI + 200) + 0x10);
      }
      dVar1 = *(double *)(plVar7[4] + 0x20);
      if ((dVar1 != 0.0) || (NAN(dVar1))) {
        iVar4 = *(int *)(puVar5 + 3);
        FUN_00c8e340(dVar1,1);
        *(undefined4 *)(puVar5[2] + (longlong)iVar4) = 4;
      }
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_00c26a67;
    }
    bVar3 = false;
  }
  else {
    if (local_50 != 0) goto LAB_00c267ec;
LAB_00c26801:
    bVar3 = true;
  }
  iVar4 = FUN_00d8c7a0();
  FUN_00d8f140(extraout_XMM0_Qa,iVar4 + -1);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  iVar4 = FUN_00c716c0();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  dVar1 = *(double *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*unaff_RSI + 200) + 0x10) + (longlong)iVar4 * 8) + 0x20);
  if ((dVar1 != 0.0) || (NAN(dVar1))) {
    iVar2 = *(int *)(puVar5 + 3);
    FUN_00c8e340((longlong)iVar4,1);
    *(int *)(puVar5[2] + (longlong)iVar2) = iVar4;
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (bVar3) {
    return;
  }
LAB_00c26a67:
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c29420 — 704 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c296ce) */
/* WARNING: Removing unreachable block (ram,0x00c29476) */
/* WARNING: Removing unreachable block (ram,0x00c2947f) */

void FUN_00c29420(undefined8 param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x5d0))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar2 = *unaff_RSI;
  if (lVar2 != 0) {
    lVar11 = 0;
    while( true ) {
      iVar10 = *(int *)(lVar2 + 0x18);
      iVar5 = iVar10 + 3;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      if (iVar5 >> 2 <= (int)lVar11) break;
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(local_40 + 200) + 0x10) +
               (longlong)*(int *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 4) * 8);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar3 + 0x28) != param_2) {
        *(int *)(lVar3 + 0x28) = param_2;
        *(int *)(lVar3 + 0x2c) = *(int *)(lVar3 + 0x2c) + 1;
      }
      lVar11 = lVar11 + 1;
      FUN_00d50b20();
    }
    lVar2 = *unaff_RSI;
    if (lVar2 != 0) {
      if (param_2 == 0) {
        iVar10 = -1;
        while( true ) {
          iVar10 = iVar10 + 1;
          iVar5 = *(int *)(lVar2 + 0x18);
          iVar7 = iVar5 + 3;
          if (-1 < iVar5) {
            iVar7 = iVar5;
          }
          if (iVar7 >> 2 <= iVar10) break;
          iVar5 = *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar10 * 4);
          lVar11 = *(longlong *)(local_40 + 0xd8);
          if (lVar11 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar1) {
              lVar3 = *(longlong *)(lVar11 + 0x10);
              if (7 < uVar1) {
                uVar8 = (ulonglong)(uVar1 & 0xfffffff8);
                uVar9 = (uVar8 - 8 >> 3) + 1;
                if (uVar8 - 8 == 0) {
                  auVar12 = (undefined1  [16])0x0;
                  lVar6 = 0;
                  auVar13 = (undefined1  [16])0x0;
                  goto LAB_00c2963e;
                }
                lVar4 = -(uVar9 & 0xfffffffffffffffe);
                auVar12 = (undefined1  [16])0x0;
                lVar6 = 0;
                auVar13 = (undefined1  [16])0x0;
                do {
                  auVar15 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + lVar6));
                  in_XMM2._0_4_ = auVar15._0_4_ + auVar12._0_4_;
                  in_XMM2._4_4_ = auVar15._4_4_ + auVar12._4_4_;
                  in_XMM2._8_4_ = auVar15._8_4_ + auVar12._8_4_;
                  in_XMM2._12_4_ = auVar15._12_4_ + auVar12._12_4_;
                  auVar15 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar3 + 4 + lVar6));
                  in_XMM3._0_4_ = auVar15._0_4_ + auVar13._0_4_;
                  in_XMM3._4_4_ = auVar15._4_4_ + auVar13._4_4_;
                  in_XMM3._8_4_ = auVar15._8_4_ + auVar13._8_4_;
                  in_XMM3._12_4_ = auVar15._12_4_ + auVar13._12_4_;
                  auVar15 = pmovzxbd(auVar12,*(undefined4 *)(lVar3 + 8 + lVar6));
                  auVar14 = pmovzxbd(auVar13,*(undefined4 *)(lVar3 + 0xc + lVar6));
                  auVar12._0_4_ = auVar15._0_4_ + in_XMM2._0_4_;
                  auVar12._4_4_ = auVar15._4_4_ + in_XMM2._4_4_;
                  auVar12._8_4_ = auVar15._8_4_ + in_XMM2._8_4_;
                  auVar12._12_4_ = auVar15._12_4_ + in_XMM2._12_4_;
                  auVar13._0_4_ = auVar14._0_4_ + in_XMM3._0_4_;
                  auVar13._4_4_ = auVar14._4_4_ + in_XMM3._4_4_;
                  auVar13._8_4_ = auVar14._8_4_ + in_XMM3._8_4_;
                  auVar13._12_4_ = auVar14._12_4_ + in_XMM3._12_4_;
                  lVar6 = lVar6 + 0x10;
                  lVar4 = lVar4 + 2;
                } while (lVar4 != 0);
                auVar15 = auVar12;
                auVar14 = auVar13;
                if ((uVar9 & 1) != 0) {
LAB_00c2963e:
                  auVar15 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + 4 + lVar6));
                  auVar14._0_4_ = auVar13._0_4_ + auVar15._0_4_;
                  auVar14._4_4_ = auVar13._4_4_ + auVar15._4_4_;
                  auVar14._8_4_ = auVar13._8_4_ + auVar15._8_4_;
                  auVar14._12_4_ = auVar13._12_4_ + auVar15._12_4_;
                  in_XMM2 = pmovzxbd(auVar15,*(undefined4 *)(lVar3 + lVar6));
                  auVar15._0_4_ = auVar12._0_4_ + in_XMM2._0_4_;
                  auVar15._4_4_ = auVar12._4_4_ + in_XMM2._4_4_;
                  auVar15._8_4_ = auVar12._8_4_ + in_XMM2._8_4_;
                  auVar15._12_4_ = auVar12._12_4_ + in_XMM2._12_4_;
                }
                iVar7 = auVar15._12_4_ + auVar14._12_4_ + auVar15._4_4_ + auVar14._4_4_ +
                        auVar15._8_4_ + auVar14._8_4_ + auVar15._0_4_ + auVar14._0_4_;
                goto joined_r0x00c29670;
              }
              uVar8 = 0;
              iVar7 = 0;
              do {
                iVar7 = iVar7 + (uint)*(byte *)(lVar3 + uVar8);
                uVar8 = uVar8 + 1;
joined_r0x00c29670:
              } while (uVar8 != uVar1);
              if (iVar7 != 0) {
                FUN_00d50b00();
                *(undefined1 *)(*(longlong *)(lVar11 + 0x10) + (longlong)iVar5) = 1;
                FUN_00d50b20();
              }
            }
          }
          FUN_00c29780();
        }
      }
      else {
        lVar11 = 0;
        while( true ) {
          iVar10 = *(int *)(lVar2 + 0x18);
          iVar5 = iVar10 + 3;
          if (-1 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar5 >> 2 <= (int)lVar11) break;
          iVar10 = *(int *)(*(longlong *)(lVar2 + 0x10) + lVar11 * 4);
          lVar3 = *(longlong *)(local_40 + 0xd8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          *(undefined1 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar10) = 0;
          FUN_00d50b20();
          lVar11 = lVar11 + 1;
          FUN_00c29780();
        }
      }
    }
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00bf3f50 — 635 bytes
// str: ""GNOverloudConvolver""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00bf40e8) */
/* WARNING: Removing unreachable block (ram,0x00bf40f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf3f50(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined8 *puStack_30;
  
  if ((DAT_0276e120 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0276e070 = FUN_00b10020();
    _DAT_0276e058 = "GNOverloudConvolver";
    _DAT_0276e060 = 0xe0;
    _DAT_0276e068 = FUN_00c41070;
    _DAT_0276e078 = 0;
    uRam000000000276e080 = 0;
    _DAT_0276e088 = 0;
    uRam000000000276e090 = 0;
    _DAT_0276e098 = 0;
    uRam000000000276e0a0 = 0;
    _DAT_0276e0a8 = 0;
    uRam000000000276e0b0 = 0;
    _DAT_0276e0b8 = 0;
    uRam000000000276e0c0 = 0;
    _DAT_0276e0c8 = 0;
    uRam000000000276e0d0 = 0;
    _DAT_0276e0d8 = 0;
    uRam000000000276e0e0 = 0;
    _DAT_0276e0e8 = 0;
    uRam000000000276e0f0 = 0;
    _DAT_0276e0f8 = 0;
    uRam000000000276e100 = 0;
    _DAT_0276e108 = 0;
    _uRam000000000276e110 = 0;
    _DAT_0276e118 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0276e113 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    puStack_30 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      puStack_30 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puStack_30 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_00c46990();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00c1a890();
    FUN_00e87920(uVar2,0);
    FUN_00c226d0();
    FUN_00c228b0();
    FUN_00c22b10();
    if (local_100 != 0) {
      FUN_00d50b20();
    }
    if (local_108 != 0) {
      FUN_00d50b20();
    }
    if (local_110 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    if (puStack_30 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
  }
  return;
}




// ============================================================
// @00c29780 — 629 bytes
// ============================================================

void FUN_00c29780(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_f8;
  char local_f0;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  (**(code **)(*unaff_RDI + 0x5d0))();
  piVar1 = (int *)(*(longlong *)
                    (*(longlong *)(*(longlong *)(local_f8 + 200) + 0x10) + (longlong)unaff_ESI * 8)
                  + 0x2c);
  *piVar1 = *piVar1 + 1;
  if (local_f0 != '\0') {
    FUN_00d50b20();
  }
  lVar2 = DAT_0276ca98;
  if (DAT_0276ca98 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_0276cac8;
  if (DAT_0276cac8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276caa0;
  if (DAT_0276caa0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x5d0))();
  local_a0 = lVar4;
  local_98 = lVar3;
  local_90 = local_88;
  FUN_002d73e0(&local_98,&local_a0,&local_90,4);
  FUN_0036bfe0();
  lVar5 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_002d10d0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_78 = DAT_0276caa8;
  if (DAT_0276caa8 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_00d50b00();
  local_68 = lVar5;
  local_60 = '\0';
  FUN_00d40470(&local_68,&stack0xffffffffffffffb8,3,3);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c1a890 — 536 bytes
// str: ""_updateIR""
// str: ""GNOverloudConvolver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1a890(void)

{
  int iVar1;
  
  if (DAT_0276e120 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e070 = FUN_00b10020();
      _DAT_0276e058 = "GNOverloudConvolver";
      _DAT_0276e060 = 0xe0;
      _DAT_0276e068 = FUN_00c41070;
      _DAT_0276e078 = 0;
      uRam000000000276e080 = 0;
      _DAT_0276e088 = 0;
      uRam000000000276e090 = 0;
      _DAT_0276e098 = 0;
      uRam000000000276e0a0 = 0;
      _DAT_0276e0a8 = 0;
      uRam000000000276e0b0 = 0;
      _DAT_0276e0b8 = 0;
      uRam000000000276e0c0 = 0;
      _DAT_0276e0c8 = 0;
      uRam000000000276e0d0 = 0;
      _DAT_0276e0d8 = 0;
      uRam000000000276e0e0 = 0;
      _DAT_0276e0e8 = 0;
      uRam000000000276e0f0 = 0;
      _DAT_0276e0f8 = 0;
      uRam000000000276e100 = 0;
      _DAT_0276e108 = 0;
      uRam000000000276e110 = 0;
      _DAT_0276e118 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87cb0();
  if (DAT_028a5e60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0276e120 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0276e070 = FUN_00b10020();
          _DAT_0276e058 = "GNOverloudConvolver";
          _DAT_0276e060 = 0xe0;
          _DAT_0276e068 = FUN_00c41070;
          _DAT_0276e078 = 0;
          uRam000000000276e080 = 0;
          _DAT_0276e088 = 0;
          uRam000000000276e090 = 0;
          _DAT_0276e098 = 0;
          uRam000000000276e0a0 = 0;
          _DAT_0276e0a8 = 0;
          uRam000000000276e0b0 = 0;
          _DAT_0276e0b8 = 0;
          uRam000000000276e0c0 = 0;
          _DAT_0276e0c8 = 0;
          uRam000000000276e0d0 = 0;
          _DAT_0276e0d8 = 0;
          uRam000000000276e0e0 = 0;
          _DAT_0276e0e8 = 0;
          uRam000000000276e0f0 = 0;
          _DAT_0276e0f8 = 0;
          uRam000000000276e100 = 0;
          _DAT_0276e108 = 0;
          uRam000000000276e110 = 0;
          _DAT_0276e118 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5e20 = "_updateIR";
      _DAT_028a5e28 = &DAT_0276e058;
      _DAT_028a5e30 = 0;
      _DAT_028a5e38 = &DAT_02771018;
      _DAT_028a5e40 = FUN_00c4d4c0;
      _DAT_028a5e48 = FUN_00c1aad0;
      _DAT_028a5e50 = 0;
      uRam00000000028a5e58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



