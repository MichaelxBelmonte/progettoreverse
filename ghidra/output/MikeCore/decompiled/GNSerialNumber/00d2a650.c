// Function: FUN_00d2a650
// Address: 00d2a650
// Size: 5151 bytes
// Class: GNSerialNumber
// String references:
//   "%I"


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


