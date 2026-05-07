// Function: FUN_00c34960
// Address: 00c34960
// Size: 3130 bytes
// Class: GNOverloudTapedesk


void FUN_00c34960(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
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
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x13;
  lVar1 = DAT_0276cc88;
  if (DAT_0276cc88 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c349c9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c349c9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c349c9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 2;
  if ((DAT_028a5f68 == (undefined8 *)0x0) || (DAT_028a5f71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5f68 == (undefined8 *)0x0;
      DAT_028a5f68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276cc90, DAT_028a5f68 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276cc90, DAT_028a5f70 == '\0')) {
        DAT_028a5f70 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276cc90;
      }
      DAT_0276cc90 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c70a8;
      local_2e0 = 1;
      local_2e8 = lVar1;
      if (DAT_027c70a8 != 0) {
        FUN_00d50b00();
      }
      local_2d8 = lVar4;
      local_2d0 = 1;
      FUN_00bf1030(&local_2d8,&local_2e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cca0;
      if (DAT_0276cca0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cca8;
      local_2c8 = lVar1;
      local_2c0 = 1;
      if (DAT_0276cca8 != 0) {
        FUN_00d50b00();
      }
      local_2b8 = lVar4;
      local_2b0 = 1;
      FUN_00bf1030(&local_2b8,&local_2c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be18;
      if (DAT_0276be18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be20;
      local_2a8 = lVar1;
      local_2a0 = 1;
      if (DAT_0276be20 != 0) {
        FUN_00d50b00();
      }
      local_298 = lVar4;
      local_290 = 1;
      FUN_00bf1030(&local_298,&local_2a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccb0;
      if (DAT_0276ccb0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccb8;
      local_288 = lVar1;
      local_280 = 1;
      if (DAT_0276ccb8 != 0) {
        FUN_00d50b00();
      }
      local_278 = lVar4;
      local_270 = 1;
      FUN_00bf1030(&local_278,&local_288);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccc0;
      if (DAT_0276ccc0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccc8;
      local_268 = lVar1;
      local_260 = 1;
      if (DAT_0276ccc8 != 0) {
        FUN_00d50b00();
      }
      local_258 = lVar4;
      local_250 = 1;
      FUN_00bf1030(&local_258,&local_268);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd78;
      if (DAT_0276bd78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd80;
      local_248 = lVar1;
      local_240 = 1;
      if (DAT_0276bd80 != 0) {
        FUN_00d50b00();
      }
      local_238 = lVar4;
      local_230 = 1;
      FUN_00bf1030(&local_238,&local_248);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd98;
      if (DAT_0276bd98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bda0;
      local_228 = lVar1;
      local_220 = 1;
      if (DAT_0276bda0 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar4;
      local_210 = 1;
      FUN_00bf1030(&local_218,&local_228);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccd0;
      if (DAT_0276ccd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccd8;
      local_208 = lVar1;
      local_200 = 1;
      if (DAT_0276ccd8 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cce0;
      if (DAT_0276cce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cce8;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (DAT_0276cce8 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bda8;
      if (DAT_0276bda8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bdb0;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (DAT_0276bdb0 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bdc8;
      if (DAT_0276bdc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bdd0;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276bdd0 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccf0;
      if (DAT_0276ccf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccf8;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276ccf8 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd00;
      if (DAT_0276cd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd08;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276cd08 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd48;
      if (DAT_0276bd48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd50;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276bd50 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd10;
      if (DAT_0276cd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd18;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276cd18 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd20;
      if (DAT_0276cd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd28;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276cd28 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd30;
      if (DAT_0276cd30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd38;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276cd38 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd40;
      if (DAT_0276cd40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd48;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276cd48 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd50;
      if (DAT_0276cd50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd58;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276cd58 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd60;
      if (DAT_0276cd60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd68;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276cd68 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd70;
      if (DAT_0276cd70 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd78;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276cd78 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f68) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f68) {
      return;
    }
  }
  puVar2 = DAT_028a5f68;
  if (DAT_028a5f68 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


