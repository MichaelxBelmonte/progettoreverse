// Reconstructed implementation of GNSerialNumber
// From MikeCore binary — reverse-engineered pseudocode

#include "GNSerialNumber.h"

// ============================================================
// @00d2a650 — 5151 bytes
// str: ""%I""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d2a650(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  bool bVar7;
  undefined4 uVar8;
  longlong local_b8;
  char local_b0;
  undefined *local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  uint local_38;
  
  if (DAT_028a76c8 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    if (DAT_028a76c8 == plVar6) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      bVar7 = DAT_028a76c8 != (longlong *)0x0;
      DAT_028a76c8 = plVar6;
      if (bVar7) {
        FUN_00d50b20();
      }
    }
    if (DAT_028a76d0 == '\0') {
      DAT_028a76d0 = '\x01';
      FUN_00e8cb90();
      bVar1 = bVar2;
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd170;
    uStack_98 = _UNK_023dd178;
    local_90 = _DAT_023dd180;
    uStack_88 = _UNK_023dd188;
    local_80 = _DAT_023dd190;
    uStack_78 = _UNK_023dd198;
    local_70 = _DAT_023dd1a0;
    uStack_68 = _UNK_023dd1a8;
    local_60 = _DAT_023dd1b0;
    uStack_5c = _UNK_023dd1b4;
    uStack_58 = _UNK_023dd1b8;
    uStack_54 = _UNK_023dd1bc;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_0276ce70;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_0276ce70;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_0276ce70 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd1c0;
    uStack_98 = _UNK_023dd1c8;
    local_90 = _DAT_023dd1d0;
    uStack_88 = _UNK_023dd1d8;
    local_80 = _DAT_023dd1e0;
    uStack_78 = _UNK_023dd1e8;
    local_70 = _DAT_023dd1f0;
    uStack_68 = _UNK_023dd1f8;
    local_60 = _DAT_023dd200;
    uStack_5c = _UNK_023dd204;
    uStack_58 = _UNK_023dd208;
    uStack_54 = _UNK_023dd20c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_0276c080;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_0276c080;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_0276c080 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd210;
    uStack_98 = _UNK_023dd218;
    local_90 = _DAT_023dd220;
    uStack_88 = _UNK_023dd228;
    local_80 = _DAT_023dd230;
    uStack_78 = _UNK_023dd238;
    local_70 = _DAT_023dd240;
    uStack_68 = _UNK_023dd248;
    local_60 = _DAT_023dd250;
    uStack_5c = _UNK_023dd254;
    uStack_58 = _UNK_023dd258;
    uStack_54 = _UNK_023dd25c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_027816f0;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_027816f0;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_027816f0 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd260;
    uStack_98 = _UNK_023dd268;
    local_90 = _DAT_023dd270;
    uStack_88 = _UNK_023dd278;
    local_80 = _DAT_023dd280;
    uStack_78 = _UNK_023dd288;
    local_70 = _DAT_023dd290;
    uStack_68 = _UNK_023dd298;
    local_60 = _DAT_023dd2a0;
    uStack_5c = _UNK_023dd2a4;
    uStack_58 = _UNK_023dd2a8;
    uStack_54 = _UNK_023dd2ac;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_027816f8;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_027816f8;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_027816f8 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd2b0;
    uStack_98 = _UNK_023dd2b8;
    local_90 = _DAT_023dd2c0;
    uStack_88 = _UNK_023dd2c8;
    local_80 = _DAT_023dd2d0;
    uStack_78 = _UNK_023dd2d8;
    local_70 = _DAT_023dd2e0;
    uStack_68 = _UNK_023dd2e8;
    local_60 = _DAT_023dd2f0;
    uStack_5c = _UNK_023dd2f4;
    uStack_58 = _UNK_023dd2f8;
    uStack_54 = _UNK_023dd2fc;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781700;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781700;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781700 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd300;
    uStack_98 = _UNK_023dd308;
    local_90 = _DAT_023dd310;
    uStack_88 = _UNK_023dd318;
    local_80 = _DAT_023dd320;
    uStack_78 = _UNK_023dd328;
    local_70 = _DAT_023dd330;
    uStack_68 = _UNK_023dd338;
    local_60 = _DAT_023dd340;
    uStack_5c = _UNK_023dd344;
    uStack_58 = _UNK_023dd348;
    uStack_54 = _UNK_023dd34c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781708;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781708;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781708 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd350;
    uStack_98 = _UNK_023dd358;
    local_90 = _DAT_023dd360;
    uStack_88 = _UNK_023dd368;
    local_80 = _DAT_023dd370;
    uStack_78 = _UNK_023dd378;
    local_70 = _DAT_023dd380;
    uStack_68 = _UNK_023dd388;
    local_60 = _DAT_023dd390;
    uStack_5c = _UNK_023dd394;
    uStack_58 = _UNK_023dd398;
    uStack_54 = _UNK_023dd39c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781710;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781710;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781710 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd3a0;
    uStack_98 = _UNK_023dd3a8;
    local_90 = _DAT_023dd3b0;
    uStack_88 = _UNK_023dd3b8;
    local_80 = _DAT_023dd3c0;
    uStack_78 = _UNK_023dd3c8;
    local_70 = _DAT_023dd3d0;
    uStack_68 = _UNK_023dd3d8;
    local_60 = _DAT_023dd3e0;
    uStack_5c = _UNK_023dd3e4;
    uStack_58 = _UNK_023dd3e8;
    uStack_54 = _UNK_023dd3ec;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_027cc8a0;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_027cc8a0;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_027cc8a0 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd3f0;
    uStack_98 = _UNK_023dd3f8;
    local_90 = _DAT_023dd400;
    uStack_88 = _UNK_023dd408;
    local_80 = _DAT_023dd410;
    uStack_78 = _UNK_023dd418;
    local_70 = _DAT_023dd420;
    uStack_68 = _UNK_023dd428;
    local_60 = _DAT_023dd430;
    uStack_5c = _UNK_023dd434;
    uStack_58 = _UNK_023dd438;
    uStack_54 = _UNK_023dd43c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781718;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781718;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781718 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd440;
    uStack_98 = _UNK_023dd448;
    local_90 = _DAT_023dd450;
    uStack_88 = _UNK_023dd458;
    local_80 = _DAT_023dd460;
    uStack_78 = _UNK_023dd468;
    local_70 = _DAT_023dd470;
    uStack_68 = _UNK_023dd478;
    local_60 = _DAT_023dd480;
    uStack_5c = _UNK_023dd484;
    uStack_58 = _UNK_023dd488;
    uStack_54 = _UNK_023dd48c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781720;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781720;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781720 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd490;
    uStack_98 = _UNK_023dd498;
    local_90 = _DAT_023dd4a0;
    uStack_88 = _UNK_023dd4a8;
    local_80 = _DAT_023dd4b0;
    uStack_78 = _UNK_023dd4b8;
    local_70 = _DAT_023dd4c0;
    uStack_68 = _UNK_023dd4c8;
    local_60 = _DAT_023dd4d0;
    uStack_5c = _UNK_023dd4d4;
    uStack_58 = _UNK_023dd4d8;
    uStack_54 = _UNK_023dd4dc;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781728;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781728;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781728 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd4e0;
    uStack_98 = _UNK_023dd4e8;
    local_90 = _DAT_023dd4f0;
    uStack_88 = _UNK_023dd4f8;
    local_80 = _DAT_023dd500;
    uStack_78 = _UNK_023dd508;
    local_70 = _DAT_023dd510;
    uStack_68 = _UNK_023dd518;
    local_60 = _DAT_023dd520;
    uStack_5c = _UNK_023dd524;
    uStack_58 = _UNK_023dd528;
    uStack_54 = _UNK_023dd52c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_027cc890;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_027cc890;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_027cc890 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd530;
    uStack_98 = _UNK_023dd538;
    local_90 = _DAT_023dd540;
    uStack_88 = _UNK_023dd548;
    local_80 = _DAT_023dd550;
    uStack_78 = _UNK_023dd558;
    local_70 = _DAT_023dd560;
    uStack_68 = _UNK_023dd568;
    local_60 = _DAT_023dd570;
    uStack_5c = _UNK_023dd574;
    uStack_58 = _UNK_023dd578;
    uStack_54 = _UNK_023dd57c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781730;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781730;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781730 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd580;
    uStack_98 = _UNK_023dd588;
    local_90 = _DAT_023dd590;
    uStack_88 = _UNK_023dd598;
    local_80 = _DAT_023dd5a0;
    uStack_78 = _UNK_023dd5a8;
    local_70 = _DAT_023dd5b0;
    uStack_68 = _UNK_023dd5b8;
    local_60 = _DAT_023dd5c0;
    uStack_5c = _UNK_023dd5c4;
    uStack_58 = _UNK_023dd5c8;
    uStack_54 = _UNK_023dd5cc;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781738;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781738;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781738 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd5d0;
    uStack_98 = _UNK_023dd5d8;
    local_90 = _DAT_023dd5e0;
    uStack_88 = _UNK_023dd5e8;
    local_80 = _DAT_023dd5f0;
    uStack_78 = _UNK_023dd5f8;
    local_70 = _DAT_023dd600;
    uStack_68 = _UNK_023dd608;
    local_60 = _DAT_023dd610;
    uStack_5c = _UNK_023dd614;
    uStack_58 = _UNK_023dd618;
    uStack_54 = _UNK_023dd61c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781740;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781740;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781740 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = _DAT_023dd620;
    uStack_98 = _UNK_023dd628;
    local_90 = _DAT_023dd630;
    uStack_88 = _UNK_023dd638;
    local_80 = _DAT_023dd640;
    uStack_78 = _UNK_023dd648;
    local_70 = _DAT_023dd650;
    uStack_68 = _UNK_023dd658;
    local_60 = _DAT_023dd660;
    uStack_5c = _UNK_023dd664;
    uStack_58 = _UNK_023dd668;
    uStack_54 = _UNK_023dd66c;
    local_a8 = &DAT_02572af0;
    uVar8 = FUN_00295b80();
    puVar5 = local_40;
    lVar3 = DAT_02781748;
    if ((char)local_38 == '\0') {
      if (local_40 != (undefined8 *)0x0) {
        uVar8 = FUN_00d50b00();
        lVar3 = DAT_02781748;
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    DAT_02781748 = lVar3;
    if (lVar3 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = lVar3;
    param_1 = FUN_00ca0840(uVar8,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      param_1 = FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      param_1 = FUN_00d50b20();
    }
    if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      param_1 = FUN_00d50b20();
    }
  }
  local_38 = 1;
  local_40 = &DAT_024cc6f0;
  uVar8 = FUN_00d8cb40(param_1,&local_40);
  local_b8 = local_50;
  local_b0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_b0 = '\x01';
  FUN_000175c0(uVar8,&local_b8);
  puVar4 = local_a8;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((char)local_a0 == '\0') {
    if (local_a8 == (undefined *)0x0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = puVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (((char)local_a0 != '\0') && (local_a8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_a8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_a0 = local_a0 & 0xffffffffffffff00;
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d292b0 — 2360 bytes
// str: ""%@""
// str: ""%@-""
// ============================================================

void FUN_00d292b0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
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
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  FUN_00d8ede0();
  local_70 = local_60;
  local_68 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_100,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29394;
      FUN_00d50b00();
      goto LAB_00d293cc;
    }
LAB_00d293d1:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d293cc:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d293d1;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29394:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276ce70;
  if (DAT_0276ce70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d260;
  local_f0 = lVar1;
  local_e8 = '\x01';
  if (DAT_0277d260 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar2;
  local_d8 = '\x01';
  FUN_00d98db0(&local_e0,&local_f0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d294d9;
      FUN_00d50b00();
      goto LAB_00d29511;
    }
LAB_00d29516:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29511:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d29516;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d294d9:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276c080;
  if (DAT_0276c080 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d268;
  local_d0 = lVar1;
  local_c8 = '\x01';
  if (DAT_0277d268 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  FUN_00d98db0(&local_c0,&local_d0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29610;
      FUN_00d50b00();
      goto LAB_00d29648;
    }
LAB_00d2964d:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d29648:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d2964d;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29610:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02781718;
  if (DAT_02781718 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d270;
  local_b0 = lVar1;
  local_a8 = '\x01';
  if (DAT_0277d270 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d98db0(&local_a0,&local_b0,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] == '\0') && (local_50 != (undefined8 *)0x0)) {
      if ((char)local_48 != '\0') goto LAB_00d29747;
      FUN_00d50b00();
      goto LAB_00d2977f;
    }
LAB_00d29784:
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d2977f:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d29784;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d29747:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d278;
  if (DAT_0277d278 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277d280;
  local_90 = lVar1;
  local_88 = '\x01';
  if (DAT_0277d280 != 0) {
    FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00d98db0(&local_80,&local_90,0);
  puVar3 = local_50;
  lVar1 = *unaff_RSI;
  if ((undefined8 *)lVar1 == local_50) {
    if (((char)unaff_RSI[1] != '\0') || (local_50 == (undefined8 *)0x0)) goto LAB_00d298af;
    if ((char)local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_00d298aa;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d298aa:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d298af:
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d298c3;
    }
    *unaff_RSI = (longlong)local_50;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_48 = local_48 & 0xffffff00;
LAB_00d298c3:
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  local_40 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  lVar1 = local_60;
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = lVar1;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00d25fa0 — 1624 bytes
// str: ""serial number format mistmatch""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d25fe6) */
/* WARNING: Removing unreachable block (ram,0x00d25ff2) */
/* WARNING: Removing unreachable block (ram,0x00d260bd) */
/* WARNING: Removing unreachable block (ram,0x00d260c9) */

undefined8 *
FUN_00d25fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined1 uVar7;
  undefined8 local_e0;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  cVar4 = FUN_00d268e0();
  if (cVar4 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_00d26d10();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d260af;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d260af:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  FUN_00d276b0();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d2616b;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d2616b:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  uVar7 = 0;
  uVar6 = FUN_00d27c30();
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        uVar6 = FUN_00d50b00();
      }
      goto LAB_00d2620d;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
    else {
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
    }
LAB_00d2620d:
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
  lVar2 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_b0 = lVar2;
  local_a8 = '\x01';
  FUN_00d97fb0(uVar6,&local_b0,param_3,param_4,uVar7);
  plVar3 = local_40;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_00d26336;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d26331;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)plVar3;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00d26331:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d26336:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2634a;
    }
    *unaff_RSI = (longlong)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_00d2634a:
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *unaff_RSI;
  local_98 = '\0';
  uVar6 = FUN_00ddb860();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar1 + 0x430))(uVar6,1);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,6);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da_00;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x428))(uVar6,3);
  lVar2 = DAT_0277d248;
  uVar6 = extraout_XMM0_Da_01;
  if (cVar4 == '\0') {
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    uVar6 = FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  cVar4 = (**(code **)(*plVar1 + 0x418))(uVar6,9);
  lVar2 = DAT_0277d248;
  if (cVar4 == '\0') {
    uVar6 = extraout_XMM0_Da_02;
    if (DAT_0277d248 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc7b40(uVar6,DAT_025908a0);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025726d0;
  *(undefined1 *)((longlong)puVar5 + 0xc) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  FUN_00d500e0();
  *(undefined1 *)((longlong)puVar5 + 0xc) = local_4c;
  *(undefined4 *)(puVar5 + 2) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x14) = local_44;
  puVar5[3] = local_e0;
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @00d26d10 — 1624 bytes
// ============================================================

void FUN_00d26d10(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = DAT_026fce10;
  if (DAT_026fce10 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  FUN_00d8ede0();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  FUN_00d98db0(&local_50,&local_f0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d26dee;
      FUN_00d50b00();
      goto LAB_00d26e25;
    }
LAB_00d26e2a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d26e25:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d26e2a;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d26dee:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d260;
  if (DAT_0277d260 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276ce70;
  local_e0 = lVar1;
  local_d8 = '\x01';
  if (DAT_0276ce70 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar3;
  local_c8 = '\x01';
  FUN_00d98db0(&local_d0,&local_e0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d26f2b;
      FUN_00d50b00();
      goto LAB_00d26f62;
    }
LAB_00d26f67:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d26f62:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d26f67;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d26f2b:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d268;
  if (DAT_0277d268 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0276c080;
  local_c0 = lVar1;
  local_b8 = '\x01';
  if (DAT_0276c080 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  FUN_00d98db0(&local_b0,&local_c0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d2705a;
      FUN_00d50b00();
      goto LAB_00d27091;
    }
LAB_00d27096:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d27091:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d27096;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2705a:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d270;
  if (DAT_0277d270 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02781718;
  local_a0 = lVar1;
  local_98 = '\x01';
  if (DAT_02781718 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  FUN_00d98db0(&local_90,&local_a0,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] == '\0') && (local_40 != 0)) {
      if (local_38 != '\0') goto LAB_00d27186;
      FUN_00d50b00();
      goto LAB_00d271bd;
    }
LAB_00d271c2:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d271bd:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      goto LAB_00d271c2;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_00d27186:
    *(undefined1 *)(unaff_RSI + 1) = 1;
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0277d280;
  if (DAT_0277d280 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0277d278;
  local_80 = lVar1;
  local_78 = '\x01';
  if (DAT_0277d278 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar3;
  local_68 = '\x01';
  FUN_00d98db0(&local_70,&local_80,0);
  lVar3 = local_40;
  lVar1 = *unaff_RSI;
  if (lVar1 == local_40) {
    if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00d272dc;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d272d7;
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = lVar3;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_00d272d7:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d272dc:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d272f0;
    }
    *unaff_RSI = local_40;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RSI + 1) = 1;
  local_38 = '\0';
LAB_00d272f0:
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
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
  return;
}




// ============================================================
// @00d24b60 — 1507 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d2503c) */
/* WARNING: Removing unreachable block (ram,0x00d25048) */
/* WARNING: Removing unreachable block (ram,0x00d24e3d) */
/* WARNING: Removing unreachable block (ram,0x00d24e49) */
/* WARNING: Removing unreachable block (ram,0x00d24c6c) */
/* WARNING: Removing unreachable block (ram,0x00d24c78) */
/* WARNING: Removing unreachable block (ram,0x00d24f9f) */
/* WARNING: Removing unreachable block (ram,0x00d24fab) */
/* WARNING: Removing unreachable block (ram,0x00d24fb9) */
/* WARNING: Removing unreachable block (ram,0x00d24fc5) */
/* WARNING: Removing unreachable block (ram,0x00d25056) */
/* WARNING: Removing unreachable block (ram,0x00d25062) */

void FUN_00d24b60(longlong *param_1,code *param_2,size_t param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  size_t sVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  longlong lVar14;
  int local_7c;
  
  plVar6 = param_1;
  if ((param_3 != 0) &&
     (((*unaff_RSI != 0 || (*(char *)(unaff_RDI + 0x1d) != '\0')) &&
      (plVar6 = (longlong *)(ulonglong)*(uint *)(unaff_RDI + 0xc),
      0 < (int)*(uint *)(unaff_RDI + 0xc))))) {
    plVar8 = (longlong *)0x0;
    do {
      if (*unaff_RSI == *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)plVar8 * 8)) {
        if ((int)plVar8 != -1) {
          return;
        }
        break;
      }
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (plVar6 != plVar8);
  }
  iVar5 = *(int *)(unaff_RDI + 0xc);
  if (iVar5 == 0) {
    *(undefined4 *)(unaff_RDI + 0xc) = 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) == '\0') {
      if ((char)unaff_RSI[1] == '\0') {
        if (*unaff_RSI != 0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(unaff_RSI + 1) = 0;
      }
    }
    **(longlong **)(unaff_RDI + 0x10) = *unaff_RSI;
    return;
  }
  sVar10 = param_3;
  if (iVar5 < 1) {
LAB_00d24c34:
    lVar14 = 0;
  }
  else {
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    lVar14 = plVar6[iVar5 - 1];
    if (lVar14 == 0) goto LAB_00d24c34;
    FUN_00d50b00();
  }
  iVar4 = (*param_2)();
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  bVar12 = (byte)param_3;
  if ((iVar4 != 0) || ((bVar12 ^ 1) != 0)) {
    if (iVar5 == 1) {
      if (iVar4 != 1) goto LAB_00d24d74;
      iVar5 = *(int *)(unaff_RDI + 0xc);
      *(int *)(unaff_RDI + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(longlong **)(unaff_RDI + 0x10);
      if ((longlong)iVar5 != 0) {
        _memmove(plVar6,(void *)((longlong)iVar5 << 3),sVar10);
      }
      if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)unaff_RSI[1];
    }
    else {
      if (iVar4 != 1) goto LAB_00d24da8;
      if ((*(int *)(unaff_RDI + 0xc) < 1) ||
         (lVar14 = **(longlong **)(unaff_RDI + 0x10), lVar14 == 0)) {
        lVar14 = 0;
      }
      else {
        FUN_00d50b00();
      }
      iVar5 = (*param_2)();
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      if (iVar5 == 0 && (bVar12 ^ 1) == 0) {
        if (*(int *)(unaff_RDI + 0xc) < 1) {
          lVar14 = 0;
        }
        else {
          lVar14 = **(longlong **)(unaff_RDI + 0x10);
        }
        plVar6 = unaff_RSI;
        if (*unaff_RSI == lVar14) {
          return;
        }
LAB_00d24eee:
        uVar11 = *(uint *)(unaff_RDI + 0xc);
        uVar9 = (int)uVar11 / 2;
        if (1 < (int)uVar11) {
          plVar6 = (longlong *)0x0;
          do {
            lVar14 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + -8 + (longlong)(int)uVar9 * 8);
            if (lVar14 != 0) {
              FUN_00d50b00();
            }
            iVar5 = (*param_2)();
            lVar7 = *unaff_RSI;
            if (((iVar5 != 0) || (bVar12 == 0)) || (bVar13 = 1, lVar7 != lVar14)) {
              lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)(int)uVar9 * 8);
              if (lVar2 != 0) {
                FUN_00d50b00();
                lVar7 = *unaff_RSI;
              }
              local_7c = (*param_2)(lVar7,param_1);
              bVar13 = *unaff_RSI == lVar2 & local_7c == 0 & bVar12;
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar14 != 0) {
              FUN_00d50b20();
            }
            if (bVar13 != 0) {
              return;
            }
            uVar3 = uVar9;
          } while (((iVar5 == 1) ||
                   (plVar6 = (longlong *)(ulonglong)uVar9, uVar3 = uVar11, local_7c != -1)) &&
                  (uVar11 = uVar3, iVar5 = uVar11 + (int)plVar6, uVar9 = iVar5 / 2, 1 < iVar5));
          uVar11 = *(uint *)(unaff_RDI + 0xc);
        }
        *(uint *)(unaff_RDI + 0xc) = uVar11 + 1;
        FUN_00d23090();
        lVar14 = *(longlong *)(unaff_RDI + 0x10);
        if (uVar11 - uVar9 != 0) {
          _memmove(plVar6,(void *)(longlong)(int)((uVar11 - uVar9) * 8),sVar10);
        }
        if (*(char *)(unaff_RDI + 0x1c) == '\0') {
          if ((char)unaff_RSI[1] == '\0') {
            if (*unaff_RSI != 0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(unaff_RSI + 1) = 0;
          }
        }
        *(longlong *)((longlong)(int)uVar9 * 8 + lVar14) = *unaff_RSI;
        return;
      }
      if (iVar5 != 1) goto LAB_00d24eee;
      iVar5 = *(int *)(unaff_RDI + 0xc);
      *(int *)(unaff_RDI + 0xc) = iVar5 + 1;
      FUN_00d23090();
      plVar8 = *(longlong **)(unaff_RDI + 0x10);
      if ((longlong)iVar5 != 0) {
        _memmove(plVar6,(void *)((longlong)iVar5 << 3),sVar10);
      }
      if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24ec3;
      cVar1 = (char)unaff_RSI[1];
    }
    if (cVar1 == '\0') {
      if (*unaff_RSI != 0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(unaff_RSI + 1) = 0;
    }
LAB_00d24ec3:
    *plVar8 = *unaff_RSI;
    return;
  }
  if (*(int *)(unaff_RDI + 0xc) < 1) {
    if (*unaff_RSI == 0) {
      return;
    }
  }
  else if (*(longlong *)
            (*(longlong *)(unaff_RDI + 0x10) + (ulonglong)(*(int *)(unaff_RDI + 0xc) - 1) * 8) ==
           *unaff_RSI) {
    return;
  }
  if (iVar5 == 1) {
LAB_00d24d74:
    lVar14 = (longlong)*(int *)(unaff_RDI + 0xc);
    *(int *)(unaff_RDI + 0xc) = *(int *)(unaff_RDI + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)unaff_RSI[1];
  }
  else {
LAB_00d24da8:
    lVar14 = (longlong)*(int *)(unaff_RDI + 0xc);
    *(int *)(unaff_RDI + 0xc) = *(int *)(unaff_RDI + 0xc) + 1;
    FUN_00d23090();
    if (*(char *)(unaff_RDI + 0x1c) != '\0') goto LAB_00d24dd1;
    cVar1 = (char)unaff_RSI[1];
  }
  if (cVar1 == '\0') {
    if (*unaff_RSI != 0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(unaff_RSI + 1) = 0;
  }
LAB_00d24dd1:
  *(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar14 * 8) = *unaff_RSI;
  return;
}




// ============================================================
// @00d27c30 — 1219 bytes
// str: ""serial number format mistmatch""
// str: ""%01X""
// str: ""serial number key format mistmatch""
// str: ""serial number version mismatch""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d27faf) */
/* WARNING: Removing unreachable block (ram,0x00d27eb2) */
/* WARNING: Removing unreachable block (ram,0x00d27ebe) */
/* WARNING: Removing unreachable block (ram,0x00d27dc3) */
/* WARNING: Removing unreachable block (ram,0x00d27d28) */
/* WARNING: Removing unreachable block (ram,0x00d27d34) */
/* WARNING: Removing unreachable block (ram,0x00d2807a) */

undefined8 * FUN_00d27c30(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RDI;
  int iVar8;
  longlong *plVar9;
  int local_7c;
  int local_6c;
  longlong *local_40;
  uint local_38;
  int local_34;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar2 = DAT_0277d258;
  if (DAT_0277d258 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ddb860();
  plVar4 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  cVar5 = (**(code **)(*plVar4 + 0x430))(0,1);
  lVar2 = DAT_0277d248;
  if (cVar5 == '\0') {
    if (DAT_0277d248 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7b40();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00ddb860();
  plVar9 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if (((char)local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_00d27ea5;
      FUN_00d50b20();
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    bVar1 = false;
  }
LAB_00d27ea5:
  iVar6 = FUN_00d8c7a0();
  if (iVar6 < 1) {
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    iVar8 = 0;
    do {
      cVar5 = (**(code **)(*plVar9 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar5 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*plVar3 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar5 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar5 = (**(code **)(*plVar3 + 0x388))();
      if (cVar5 != '\0') {
        (**(code **)(*plVar3 + 0x378))();
      }
      local_34 = local_6c - local_7c;
      if (local_34 < 0) {
        local_34 = local_34 + 0xf;
      }
      local_38 = 1;
      local_40 = &DAT_024cc6f0;
      FUN_00d94d80(&DAT_024cc6f0,&local_40);
      iVar8 = iVar8 + 1;
    } while (iVar6 != iVar8);
    *unaff_RDI = puVar7;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (plVar4 == (longlong *)0x0) goto LAB_00d280c0;
  }
  FUN_00d50b20();
LAB_00d280c0:
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d287a0 — 1205 bytes
// str: ""serial number format mistmatch""
// str: ""%01X""
// str: ""serial number key format mistmatch""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d288eb) */
/* WARNING: Removing unreachable block (ram,0x00d288f7) */

undefined8 * FUN_00d287a0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *unaff_RDI;
  int iVar7;
  int local_5c;
  longlong *local_50;
  int local_44;
  longlong *local_40;
  uint local_38;
  int local_34;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025795a8;
  (*DAT_025795c0)();
  lVar2 = DAT_0277d258;
  if (DAT_0277d258 != 0) {
    FUN_00d50b00();
  }
  FUN_00ddb860();
  plVar3 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00ddb860();
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    local_50 = (longlong *)0x0;
  }
  else {
    if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if (((char)local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_00d288d5;
      FUN_00d50b20();
    }
    else {
      local_38 = local_38 & 0xffffff00;
    }
    bVar1 = false;
  }
LAB_00d288d5:
  iVar5 = FUN_00d8c7a0();
  if (iVar5 < 1) {
LAB_00d28ad1:
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (plVar3 == (longlong *)0x0) goto LAB_00d28c3e;
  }
  else {
    if (0 < param_2) {
      iVar7 = 0;
      do {
        cVar4 = (**(code **)(*local_50 + 0x430))();
        lVar2 = DAT_0277d248;
        if (cVar4 == '\0') {
          if (DAT_0277d248 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc7b40();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        if (iVar7 == 0) {
          local_38 = 1;
          local_40 = &DAT_024cc6f0;
          local_34 = local_44;
          FUN_00d94d80();
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x430))();
          lVar2 = DAT_0277d248;
          if (cVar4 == '\0') {
            if (DAT_0277d248 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc7b40();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          cVar4 = (**(code **)(*plVar3 + 0x388))();
          if (cVar4 != '\0') {
            (**(code **)(*plVar3 + 0x378))();
          }
          local_34 = local_5c + -0x10 + local_44;
          if (local_5c + local_44 < 0x10) {
            local_34 = local_5c + local_44;
          }
          local_38 = 1;
          local_40 = &DAT_024cc6f0;
          FUN_00d94d80(&DAT_024cc6f0,&local_40);
        }
        iVar7 = iVar7 + 1;
      } while (iVar5 != iVar7);
      goto LAB_00d28ad1;
    }
    do {
      cVar4 = (**(code **)(*local_50 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar4 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(*plVar3 + 0x430))();
      lVar2 = DAT_0277d248;
      if (cVar4 == '\0') {
        if (DAT_0277d248 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(*plVar3 + 0x388))();
      if (cVar4 != '\0') {
        (**(code **)(*plVar3 + 0x378))();
      }
      local_34 = local_5c + -0xf + local_44;
      if (local_5c + local_44 < 0x10) {
        local_34 = local_5c + local_44;
      }
      local_38 = 1;
      local_40 = &DAT_024cc6f0;
      FUN_00d94d80(local_5c,&local_40);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  FUN_00d50b20();
LAB_00d28c3e:
  if (!bVar1 && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d25690 — 1160 bytes
// str: ""GNSerialNumber""
// str: ""getStringValue""
// str: ""getProductDescription""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d25690(void)

{
  int iVar1;
  
  if (DAT_028a7668 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270d5f8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270d548 = FUN_00d4fe50();
          _DAT_0270d530 = "GNSerialNumber";
          _DAT_0270d538 = 0x20;
          _DAT_0270d540 = FUN_00568100;
          _DAT_0270d550 = 0;
          uRam000000000270d558 = 0;
          _DAT_0270d560 = 0;
          _DAT_0270d5d8 = 0;
          uRam000000000270d5e0 = 0;
          _DAT_0270d5e8 = 0;
          DAT_0270d5ea = 1;
          _DAT_0270d568 = 0;
          uRam000000000270d570 = 0;
          _DAT_0270d578 = 0;
          uRam000000000270d580 = 0;
          _DAT_0270d588 = 0;
          uRam000000000270d590 = 0;
          _DAT_0270d598 = 0;
          uRam000000000270d5a0 = 0;
          _DAT_0270d5a8 = 0;
          uRam000000000270d5b0 = 0;
          _DAT_0270d5b8 = 0;
          uRam000000000270d5c0 = 0;
          _DAT_0270d5c8 = 0;
          uRam000000000270d5d0 = 0;
          DAT_0270d5f3 = 0;
          _DAT_0270d5eb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7628 = "getStringValue";
      _DAT_028a7630 = &DAT_0270d530;
      _DAT_028a7638 = 0;
      _DAT_028a7640 = &DAT_0277d2f8;
      _DAT_028a7648 = FUN_00d2cc80;
      _DAT_028a7650 = FUN_00d25b40;
      _DAT_028a7658 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7660 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a76b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270d5f8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0270d548 = FUN_00d4fe50();
          _DAT_0270d530 = "GNSerialNumber";
          _DAT_0270d538 = 0x20;
          _DAT_0270d540 = FUN_00568100;
          _DAT_0270d550 = 0;
          uRam000000000270d558 = 0;
          _DAT_0270d560 = 0;
          _DAT_0270d5d8 = 0;
          uRam000000000270d5e0 = 0;
          _DAT_0270d5e8 = 0;
          DAT_0270d5ea = 1;
          _DAT_0270d568 = 0;
          uRam000000000270d570 = 0;
          _DAT_0270d578 = 0;
          uRam000000000270d580 = 0;
          _DAT_0270d588 = 0;
          uRam000000000270d590 = 0;
          _DAT_0270d598 = 0;
          uRam000000000270d5a0 = 0;
          _DAT_0270d5a8 = 0;
          uRam000000000270d5b0 = 0;
          _DAT_0270d5b8 = 0;
          uRam000000000270d5c0 = 0;
          _DAT_0270d5c8 = 0;
          uRam000000000270d5d0 = 0;
          DAT_0270d5f3 = 0;
          _DAT_0270d5eb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a7670 = "getProductDescription";
      _DAT_028a7678 = &DAT_0270d530;
      _DAT_028a7680 = 0;
      _DAT_028a7688 = &DAT_0277d2f8;
      _DAT_028a7690 = FUN_00d2cc80;
      _DAT_028a7698 = FUN_00d25e80;
      _DAT_028a76a0 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a76a8 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00568140 — 1012 bytes
// str: ""GNSerialNumber""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00568140(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025726d0;
  *(undefined1 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_0270d5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d548 = FUN_00d4fe50();
      _DAT_0270d530 = "GNSerialNumber";
      _DAT_0270d538 = 0x20;
      _DAT_0270d540 = FUN_00568100;
      _DAT_0270d550 = 0;
      uRam000000000270d558 = 0;
      _DAT_0270d560 = 0;
      _DAT_0270d5d8 = 0;
      uRam000000000270d5e0 = 0;
      _DAT_0270d5e8 = 0;
      DAT_0270d5ea = 1;
      _DAT_0270d568 = 0;
      uRam000000000270d570 = 0;
      _DAT_0270d578 = 0;
      uRam000000000270d580 = 0;
      _DAT_0270d588 = 0;
      uRam000000000270d590 = 0;
      _DAT_0270d598 = 0;
      uRam000000000270d5a0 = 0;
      _DAT_0270d5a8 = 0;
      uRam000000000270d5b0 = 0;
      _DAT_0270d5b8 = 0;
      uRam000000000270d5c0 = 0;
      _DAT_0270d5c8 = 0;
      uRam000000000270d5d0 = 0;
      DAT_0270d5f3 = 0;
      _DAT_0270d5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d5eb == '\0') {
    FUN_00568560();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  if (DAT_0270d5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d548 = FUN_00d4fe50();
      _DAT_0270d530 = "GNSerialNumber";
      _DAT_0270d538 = 0x20;
      _DAT_0270d540 = FUN_00568100;
      _DAT_0270d550 = 0;
      uRam000000000270d558 = 0;
      _DAT_0270d560 = 0;
      _DAT_0270d5d8 = 0;
      uRam000000000270d5e0 = 0;
      _DAT_0270d5e8 = 0;
      DAT_0270d5ea = 1;
      _DAT_0270d568 = 0;
      uRam000000000270d570 = 0;
      _DAT_0270d578 = 0;
      uRam000000000270d580 = 0;
      _DAT_0270d588 = 0;
      uRam000000000270d590 = 0;
      _DAT_0270d598 = 0;
      uRam000000000270d5a0 = 0;
      _DAT_0270d5a8 = 0;
      uRam000000000270d5b0 = 0;
      _DAT_0270d5b8 = 0;
      uRam000000000270d5c0 = 0;
      _DAT_0270d5c8 = 0;
      uRam000000000270d5d0 = 0;
      DAT_0270d5f3 = 0;
      _DAT_0270d5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d5eb == '\0') {
    FUN_005686f0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  if (DAT_0270d5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d548 = FUN_00d4fe50();
      _DAT_0270d530 = "GNSerialNumber";
      _DAT_0270d538 = 0x20;
      _DAT_0270d540 = FUN_00568100;
      _DAT_0270d550 = 0;
      uRam000000000270d558 = 0;
      _DAT_0270d560 = 0;
      _DAT_0270d5d8 = 0;
      uRam000000000270d5e0 = 0;
      _DAT_0270d5e8 = 0;
      DAT_0270d5ea = 1;
      _DAT_0270d568 = 0;
      uRam000000000270d570 = 0;
      _DAT_0270d578 = 0;
      uRam000000000270d580 = 0;
      _DAT_0270d588 = 0;
      uRam000000000270d590 = 0;
      _DAT_0270d598 = 0;
      uRam000000000270d5a0 = 0;
      _DAT_0270d5a8 = 0;
      uRam000000000270d5b0 = 0;
      _DAT_0270d5b8 = 0;
      uRam000000000270d5c0 = 0;
      _DAT_0270d5c8 = 0;
      uRam000000000270d5d0 = 0;
      DAT_0270d5f3 = 0;
      _DAT_0270d5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d5eb == '\0') {
    FUN_00568880();
    FUN_00e87980();
  }
  unaff_RDI[3] = 0;
  if (DAT_0270d5f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270d548 = FUN_00d4fe50();
      _DAT_0270d530 = "GNSerialNumber";
      _DAT_0270d538 = 0x20;
      _DAT_0270d540 = FUN_00568100;
      _DAT_0270d550 = 0;
      uRam000000000270d558 = 0;
      _DAT_0270d560 = 0;
      _DAT_0270d5d8 = 0;
      uRam000000000270d5e0 = 0;
      _DAT_0270d5e8 = 0;
      DAT_0270d5ea = 1;
      _DAT_0270d568 = 0;
      uRam000000000270d570 = 0;
      _DAT_0270d578 = 0;
      uRam000000000270d580 = 0;
      _DAT_0270d588 = 0;
      uRam000000000270d590 = 0;
      _DAT_0270d598 = 0;
      uRam000000000270d5a0 = 0;
      _DAT_0270d5a8 = 0;
      uRam000000000270d5b0 = 0;
      _DAT_0270d5b8 = 0;
      uRam000000000270d5c0 = 0;
      _DAT_0270d5c8 = 0;
      uRam000000000270d5d0 = 0;
      DAT_0270d5f3 = 0;
      _DAT_0270d5eb = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270d5eb == '\0') {
    FUN_00568a10();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00d276b0 — 832 bytes
// str: ""0123456789012345678""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d2792e) */
/* WARNING: Removing unreachable block (ram,0x00d27833) */
/* WARNING: Removing unreachable block (ram,0x00d2783c) */
/* WARNING: Removing unreachable block (ram,0x00d27786) */
/* WARNING: Removing unreachable block (ram,0x00d2778f) */
/* WARNING: Removing unreachable block (ram,0x00d2798d) */
/* WARNING: Removing unreachable block (ram,0x00d2799a) */

undefined8 * FUN_00d276b0(void)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *unaff_RDI;
  longlong lVar5;
  longlong *local_50;
  char local_48;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  iVar4 = 0;
  do {
    FUN_00d46530();
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_00d7a410();
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x13);
  FUN_00d8f140();
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00ddb860();
  cVar1 = (**(code **)(*local_50 + 0x430))();
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d94d80();
    FUN_00d2a650();
    if (local_50 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_00d50b00();
      lVar5 = 0;
      do {
        FUN_00d45870();
        FUN_00e7b4e0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d8e100();
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x13);
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      if (local_50 != (longlong *)0x0) goto LAB_00d279ef;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_00d279ef:
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d268e0 — 710 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d269b4) */
/* WARNING: Removing unreachable block (ram,0x00d269bd) */
/* WARNING: Removing unreachable block (ram,0x00d26b6d) */
/* WARNING: Removing unreachable block (ram,0x00d26b76) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00d268e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  int local_64;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  if (*unaff_RDI == 0) {
    return false;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x18) {
    return false;
  }
  FUN_00d26d10();
  plVar1 = (longlong *)*unaff_RDI;
  if (plVar1 == local_40) {
    if (((char)unaff_RDI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d269aa;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RDI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00d269aa:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0x14) {
    return false;
  }
  FUN_00d8f140(param_1,0x13);
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00ddb860();
  cVar3 = (**(code **)(*local_40 + 0x430))(param_1,1);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    return false;
  }
  FUN_00d276b0();
  plVar1 = (longlong *)*unaff_RDI;
  if (plVar1 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == (longlong *)0x0)) {
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto joined_r0x00d26b15;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar2 = unaff_RDI[1];
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RDI = (longlong)local_40;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
        local_40 = (longlong *)*unaff_RDI;
      }
      *(undefined1 *)(unaff_RDI + 1) = 1;
      plVar1 = local_40;
      goto joined_r0x00d26b15;
    }
    *unaff_RDI = (longlong)local_40;
    if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  plVar1 = (longlong *)*unaff_RDI;
joined_r0x00d26b15:
  if (plVar1 == (longlong *)0x0) {
    return false;
  }
  iVar4 = FUN_00d2a2e0();
  return local_64 == iVar4;
}




// ============================================================
// @00d2a2e0 — 707 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d2a484) */
/* WARNING: Removing unreachable block (ram,0x00d2a48d) */
/* WARNING: Removing unreachable block (ram,0x00d2a5a1) */

uint FUN_00d2a2e0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM3 [16];
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  iVar1 = FUN_00d8c7a0();
  if (iVar1 < 0x13) {
    return 0xffffffff;
  }
  FUN_00d97ce0(0xffffffff,0x13);
  lVar3 = *unaff_RDI;
  if (lVar3 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == 0)) goto LAB_00d2a39a;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a395;
    }
LAB_00d2a362:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = unaff_RDI[1];
    if (local_38 != '\0') {
      *unaff_RDI = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a362;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a395:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d2a39a:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00debaf0();
  FUN_00d99d60();
  lVar3 = *unaff_RDI;
  if (lVar3 == local_40) {
    if (((char)unaff_RDI[1] != '\0') || (local_40 == 0)) goto LAB_00d2a456;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_00d2a451;
    }
LAB_00d2a41a:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = unaff_RDI[1];
    if (local_38 != '\0') {
      *unaff_RDI = local_40;
      if (((char)lVar6 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2a41a;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = local_40;
    if (((char)lVar6 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_00d2a451:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00d2a456:
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = FUN_00d8b910();
  uVar2 = FUN_00e7dde0();
  if ((int)uVar2 < 1) {
    return 0;
  }
  if (uVar2 < 8) {
    uVar7 = 0;
    uVar5 = 0;
    goto LAB_00d2a570;
  }
  uVar7 = (ulonglong)(uVar2 & 0xfffffff8);
  uVar4 = (uVar7 - 8 >> 3) + 1;
  if (uVar7 - 8 == 0) {
    auVar9 = (undefined1  [16])0x0;
    lVar6 = 0;
    auVar10 = (undefined1  [16])0x0;
  }
  else {
    lVar8 = -(uVar4 & 0xfffffffffffffffe);
    auVar9 = (undefined1  [16])0x0;
    lVar6 = 0;
    auVar10 = (undefined1  [16])0x0;
    do {
      auVar12 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + lVar6));
      in_XMM2._0_4_ = auVar12._0_4_ + auVar9._0_4_;
      in_XMM2._4_4_ = auVar12._4_4_ + auVar9._4_4_;
      in_XMM2._8_4_ = auVar12._8_4_ + auVar9._8_4_;
      in_XMM2._12_4_ = auVar12._12_4_ + auVar9._12_4_;
      auVar12 = pmovzxbd(in_XMM3,*(undefined4 *)(lVar3 + 4 + lVar6));
      in_XMM3._0_4_ = auVar12._0_4_ + auVar10._0_4_;
      in_XMM3._4_4_ = auVar12._4_4_ + auVar10._4_4_;
      in_XMM3._8_4_ = auVar12._8_4_ + auVar10._8_4_;
      in_XMM3._12_4_ = auVar12._12_4_ + auVar10._12_4_;
      auVar12 = pmovzxbd(auVar9,*(undefined4 *)(lVar3 + 8 + lVar6));
      auVar11 = pmovzxbd(auVar10,*(undefined4 *)(lVar3 + 0xc + lVar6));
      auVar9._0_4_ = auVar12._0_4_ + in_XMM2._0_4_;
      auVar9._4_4_ = auVar12._4_4_ + in_XMM2._4_4_;
      auVar9._8_4_ = auVar12._8_4_ + in_XMM2._8_4_;
      auVar9._12_4_ = auVar12._12_4_ + in_XMM2._12_4_;
      auVar10._0_4_ = auVar11._0_4_ + in_XMM3._0_4_;
      auVar10._4_4_ = auVar11._4_4_ + in_XMM3._4_4_;
      auVar10._8_4_ = auVar11._8_4_ + in_XMM3._8_4_;
      auVar10._12_4_ = auVar11._12_4_ + in_XMM3._12_4_;
      lVar6 = lVar6 + 0x10;
      lVar8 = lVar8 + 2;
    } while (lVar8 != 0);
    auVar12 = auVar9;
    auVar11 = auVar10;
    if ((uVar4 & 1) == 0) goto LAB_00d2a54e;
  }
  auVar12 = pmovzxbd(in_XMM2,*(undefined4 *)(lVar3 + 4 + lVar6));
  auVar11._0_4_ = auVar10._0_4_ + auVar12._0_4_;
  auVar11._4_4_ = auVar10._4_4_ + auVar12._4_4_;
  auVar11._8_4_ = auVar10._8_4_ + auVar12._8_4_;
  auVar11._12_4_ = auVar10._12_4_ + auVar12._12_4_;
  auVar10 = pmovzxbd(auVar12,*(undefined4 *)(lVar3 + lVar6));
  auVar12._0_4_ = auVar9._0_4_ + auVar10._0_4_;
  auVar12._4_4_ = auVar9._4_4_ + auVar10._4_4_;
  auVar12._8_4_ = auVar9._8_4_ + auVar10._8_4_;
  auVar12._12_4_ = auVar9._12_4_ + auVar10._12_4_;
LAB_00d2a54e:
  uVar5 = auVar12._12_4_ + auVar11._12_4_ + auVar12._4_4_ + auVar11._4_4_ +
          auVar12._8_4_ + auVar11._8_4_ + auVar12._0_4_ + auVar11._0_4_;
  for (; uVar7 != uVar2; uVar7 = uVar7 + 1) {
LAB_00d2a570:
    uVar5 = uVar5 + *(byte *)(lVar3 + uVar7);
  }
  return uVar5 & 0xf;
}




// ============================================================
// @00d28e50 — 673 bytes
// str: ""%01X""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d28f36) */
/* WARNING: Removing unreachable block (ram,0x00d28f3f) */
/* WARNING: Removing unreachable block (ram,0x00d28f8d) */
/* WARNING: Removing unreachable block (ram,0x00d28f96) */
/* WARNING: Removing unreachable block (ram,0x00d2902e) */
/* WARNING: Removing unreachable block (ram,0x00d2907f) */
/* WARNING: Removing unreachable block (ram,0x00d2908c) */

undefined8 * FUN_00d28e50(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong local_70;
  char local_68;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025795a8;
  (*DAT_025795c0)();
  iVar3 = 0;
  do {
    FUN_00d46530();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d7a410();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x13);
  FUN_00d2a2e0();
  FUN_00d2a650();
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = 0;
  do {
    FUN_00d45870();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x13);
  FUN_00d94d80();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d283b0 — 648 bytes
// str: ""GNSerialNumber""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00d283b0(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  ulonglong uVar5;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == unaff_RDI) {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    goto LAB_00d28560;
  }
  if ((DAT_0270d5f8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270d548 = FUN_00d4fe50();
    _DAT_0270d530 = "GNSerialNumber";
    _DAT_0270d538 = 0x20;
    _DAT_0270d540 = FUN_00568100;
    _DAT_0270d550 = 0;
    uRam000000000270d558 = 0;
    _DAT_0270d560 = 0;
    _DAT_0270d5d8 = 0;
    uRam000000000270d5e0 = 0;
    _DAT_0270d5e8 = 0;
    DAT_0270d5ea = 1;
    _DAT_0270d568 = 0;
    uRam000000000270d570 = 0;
    _DAT_0270d578 = 0;
    uRam000000000270d580 = 0;
    _DAT_0270d588 = 0;
    uRam000000000270d590 = 0;
    _DAT_0270d598 = 0;
    uRam000000000270d5a0 = 0;
    _DAT_0270d5a8 = 0;
    uRam000000000270d5b0 = 0;
    _DAT_0270d5b8 = 0;
    uRam000000000270d5c0 = 0;
    _DAT_0270d5c8 = 0;
    uRam000000000270d5d0 = 0;
    DAT_0270d5f3 = 0;
    _DAT_0270d5eb = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00d28405:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_00d28405;
  }
  if (*unaff_RSI == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00d25b40();
    FUN_00d25b40();
    if (local_58 == local_98) {
      uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    }
    else {
      FUN_00d25b40();
      if (local_88 == 0) {
        uVar5 = 0;
      }
      else {
        FUN_00d25b40();
        if (local_78 == 0) {
          uVar5 = 0;
        }
        else {
          FUN_00d25b40();
          FUN_00d25b40();
          if ((local_a0 == '\0') && (local_a8 != 0)) {
            FUN_00d50b00();
          }
          uVar3 = (**(code **)(*local_68 + 0x50))();
          uVar5 = (ulonglong)uVar3;
          if (local_a8 != 0) {
            FUN_00d50b20();
          }
          if (local_60 != '\0') {
            FUN_00d50b20();
          }
          if (local_70 != '\0') {
            FUN_00d50b20();
          }
        }
        if (local_80 != '\0') {
          FUN_00d50b20();
        }
      }
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00d28560:
  return uVar5 & 0xffffffff;
}




// ============================================================
// @00d25b40 — 606 bytes
// str: ""%01X""
// str: ""%06X""
// str: ""%03X""
// str: ""%09llX""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d25d64) */
/* WARNING: Removing unreachable block (ram,0x00d25d6d) */

void FUN_00d25b40(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_025732e0;
  local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(unaff_RSI + 0xc));
  FUN_00d94d80(&DAT_025732e0,&local_38);
  local_2c = *(undefined4 *)(unaff_RSI + 0x10);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572a48;
  FUN_00d94d80(&DAT_02572a48,&local_38);
  local_2c = *(undefined4 *)(unaff_RSI + 0x14);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572a80;
  FUN_00d94d80(&DAT_02572a80,&local_38);
  local_28 = *(undefined8 *)(unaff_RSI + 0x18);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572ab8;
  FUN_00d94d80(&DAT_02572ab8,&local_38);
  FUN_00d287a0();
  if (puVar1 == local_38) {
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar1 = local_38;
    if ((char)local_30 == '\0') {
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
  }
  FUN_00d28e50();
  puVar2 = local_38;
  if (local_38 == puVar1) {
    puVar2 = puVar1;
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d292b0();
  puVar1 = local_38;
  if (local_38 == puVar2) {
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    bVar3 = puVar2 != (undefined8 *)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else {
    bVar3 = puVar2 != (undefined8 *)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00d2a010 — 507 bytes
// str: "" %@""
// str: ""%@""
// str: "" version:%01X""
// str: "" flags:%06X""
// str: "" product:%03X""
// ============================================================

void FUN_00d2a010(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d4ffd0();
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_025732e0;
  local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(unaff_RSI + 0xc));
  FUN_00d94d80(&DAT_025732e0,&local_50);
  local_44 = *(undefined4 *)(unaff_RSI + 0x10);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572a48;
  FUN_00d94d80(&DAT_02572a48,&local_50);
  local_44 = *(undefined4 *)(unaff_RSI + 0x14);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572a80;
  FUN_00d94d80(&DAT_02572a80,&local_50);
  local_40 = *(undefined8 *)(unaff_RSI + 0x18);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572ab8;
  FUN_00d94d80(&DAT_02572ab8,&local_50);
  FUN_00d25b40();
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



