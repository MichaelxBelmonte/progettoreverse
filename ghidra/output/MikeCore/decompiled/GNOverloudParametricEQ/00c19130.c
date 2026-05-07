// Function: FUN_00c19130
// Address: 00c19130
// Size: 2772 bytes
// Class: GNOverloudParametricEQ


void FUN_00c19130(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
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
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x10;
  lVar4 = DAT_0276c4a0;
  if (DAT_0276c4a0 == 0) {
    lVar3 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar3 != 0) goto LAB_00c19185;
  }
  else {
    FUN_00d50b00();
    lVar3 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar3 == lVar4) {
      FUN_00d50b20();
    }
    else {
LAB_00c19185:
      *(longlong *)(unaff_RDI + 0x90) = lVar4;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined4 *)(unaff_RDI + 0xa8) = 6;
  if ((DAT_028a5e00 != (undefined8 *)0x0) && (DAT_028a5e09 != '\0')) {
    puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar2 == DAT_028a5e00) {
      return;
    }
    goto LAB_00c19bc4;
  }
  FUN_00e8cb50();
  if (DAT_028a5e00 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_0254ed40;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_00d500e0();
    bVar5 = DAT_028a5e00 == (undefined8 *)0x0;
    DAT_028a5e00 = puVar2;
    if (((bVar5) || (FUN_00d50b20(), DAT_028a5e00 != (undefined8 *)0x0)) && (DAT_028a5e08 == '\0'))
    {
      DAT_028a5e08 = '\x01';
      FUN_00e8cb90();
      lVar4 = DAT_0276c380;
      if (DAT_0276c380 == 0) goto LAB_00c192ad;
LAB_00c19259:
      lVar4 = DAT_0276c380;
      FUN_00d50b00();
      lVar3 = DAT_0276c380;
      local_38 = lVar4;
      local_30 = 1;
      if (DAT_0276c380 == 0) goto LAB_00c192ad;
      FUN_00d50b00();
    }
    else {
      lVar4 = DAT_0276c380;
      if (DAT_0276c380 != 0) goto LAB_00c19259;
LAB_00c192ad:
      local_30 = 1;
      lVar3 = 0;
      local_38 = lVar4;
    }
    local_280 = 1;
    local_288 = lVar3;
    FUN_00bf1030(&local_288,&local_38);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276bcc0;
    if (DAT_0276bcc0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276bcc8;
    local_278 = lVar4;
    local_270 = 1;
    if (DAT_0276bcc8 != 0) {
      FUN_00d50b00();
    }
    local_268 = lVar3;
    local_260 = 1;
    FUN_00bf1030(&local_268,&local_278);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276bcd0;
    if (DAT_0276bcd0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276bcd8;
    local_258 = lVar4;
    local_250 = 1;
    if (DAT_0276bcd8 != 0) {
      FUN_00d50b00();
    }
    local_248 = lVar3;
    local_240 = 1;
    FUN_00bf1030(&local_248,&local_258);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4a8;
    if (DAT_0276c4a8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c4b0;
    local_238 = lVar4;
    local_230 = 1;
    if (DAT_0276c4b0 != 0) {
      FUN_00d50b00();
    }
    local_228 = lVar3;
    local_220 = 1;
    FUN_00bf1030(&local_228,&local_238);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4b8;
    if (DAT_0276c4b8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c4c0;
    local_218 = lVar4;
    local_210 = 1;
    if (DAT_0276c4c0 != 0) {
      FUN_00d50b00();
    }
    local_208 = lVar3;
    local_200 = 1;
    FUN_00bf1030(&local_208,&local_218);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4c8;
    if (DAT_0276c4c8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c4d0;
    local_1f8 = lVar4;
    local_1f0 = 1;
    if (DAT_0276c4d0 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = lVar3;
    local_1e0 = 1;
    FUN_00bf1030(&local_1e8,&local_1f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4d8;
    if (DAT_0276c4d8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c4e0;
    local_1d8 = lVar4;
    local_1d0 = 1;
    if (DAT_0276c4e0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar3;
    local_1c0 = 1;
    FUN_00bf1030(&local_1c8,&local_1d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4e8;
    if (DAT_0276c4e8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c4f0;
    local_1b8 = lVar4;
    local_1b0 = 1;
    if (DAT_0276c4f0 != 0) {
      FUN_00d50b00();
    }
    local_1a8 = lVar3;
    local_1a0 = 1;
    FUN_00bf1030(&local_1a8,&local_1b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02765370;
    if (DAT_02765370 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_026fb990;
    local_198 = lVar4;
    local_190 = 1;
    if (DAT_026fb990 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar3;
    local_180 = 1;
    FUN_00bf1030(&local_188,&local_198);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c4f8;
    if (DAT_0276c4f8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c500;
    local_178 = lVar4;
    local_170 = 1;
    if (DAT_0276c500 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar3;
    local_160 = 1;
    FUN_00bf1030(&local_168,&local_178);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c3f0;
    if (DAT_0276c3f0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c508;
    local_158 = lVar4;
    local_150 = 1;
    if (DAT_0276c508 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar3;
    local_140 = 1;
    FUN_00bf1030(&local_148,&local_158);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c510;
    if (DAT_0276c510 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c518;
    local_138 = lVar4;
    local_130 = 1;
    if (DAT_0276c518 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = 1;
    FUN_00bf1030(&local_128,&local_138);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c520;
    if (DAT_0276c520 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c528;
    local_118 = lVar4;
    local_110 = 1;
    if (DAT_0276c528 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = 1;
    FUN_00bf1030(&local_108,&local_118);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c530;
    if (DAT_0276c530 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c538;
    local_f8 = lVar4;
    local_f0 = 1;
    if (DAT_0276c538 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar3;
    local_e0 = 1;
    FUN_00bf1030(&local_e8,&local_f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c540;
    if (DAT_0276c540 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c548;
    local_d8 = lVar4;
    local_d0 = 1;
    if (DAT_0276c548 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = 1;
    FUN_00bf1030(&local_c8,&local_d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c550;
    if (DAT_0276c550 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c558;
    local_b8 = lVar4;
    local_b0 = 1;
    if (DAT_0276c558 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar3;
    local_a0 = 1;
    FUN_00bf1030(&local_a8,&local_b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c560;
    if (DAT_0276c560 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c568;
    local_98 = lVar4;
    local_90 = 1;
    if (DAT_0276c568 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = 1;
    FUN_00bf1030(&local_88,&local_98);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c570;
    if (DAT_0276c570 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c578;
    local_78 = lVar4;
    local_70 = 1;
    if (DAT_0276c578 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = 1;
    FUN_00bf1030(&local_68,&local_78);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = DAT_0276c580;
    if (DAT_0276c580 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_0276c588;
    local_58 = lVar4;
    local_50 = 1;
    if (DAT_0276c588 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar3;
    local_40 = 1;
    FUN_00bf1030(&local_48,&local_58);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    DAT_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  else {
    DAT_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  puVar2 = *(undefined8 **)(unaff_RDI + 0xb0);
  if (puVar2 == DAT_028a5e00) {
    return;
  }
LAB_00c19bc4:
  puVar1 = DAT_028a5e00;
  if (DAT_028a5e00 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar1;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


