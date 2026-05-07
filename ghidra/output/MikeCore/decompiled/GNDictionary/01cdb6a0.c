// Function: FUN_01cdb6a0
// Address: 01cdb6a0
// Size: 6355 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"
//   "type mismatch: 'sub' should be a dictionary"
//   "type mismatch: 'margins' should a dictionaries"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01cdb6a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar15;
  longlong *plVar16;
  longlong **pplVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  longlong *local_2e8;
  undefined1 local_2e0;
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
  longlong *local_240;
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
  longlong *local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
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
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar21 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  lVar1 = *unaff_RSI;
  *(undefined1 *)(lVar1 + 0x50) = 1;
  *(undefined4 *)(lVar1 + 0x54) = 0x12;
  lVar1 = DAT_027dbf08;
  if (DAT_027dbf08 != 0) {
    FUN_00d50b00();
  }
  uVar18 = FUN_000175c0();
  local_e8 = local_50;
  local_e0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_e0 = '\x01';
  uVar18 = (**(code **)(*unaff_RDI + 0x3b8))(uVar18,&local_e8);
  lVar2 = *unaff_RSI;
  plVar16 = *(longlong **)(lVar2 + 0x10);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01cdb775;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(longlong **)(lVar2 + 0x10);
      *(longlong **)(lVar2 + 0x10) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdb775:
      *(longlong **)(lVar2 + 0x10) = plVar13;
    }
    if (plVar16 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = DAT_027dbf08;
  if (*(longlong *)(*unaff_RSI + 0x10) == 0) {
    if (DAT_027dbf08 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_2c0 = lVar1;
    local_2b8 = '\x01';
    FUN_000175c0(uVar18,&local_2c0);
    local_d8 = local_50;
    local_d0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_d0 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *unaff_RSI;
    plVar16 = *(longlong **)(lVar1 + 0x10);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          goto LAB_01cdc509;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(longlong **)(lVar1 + 0x10);
        *(longlong **)(lVar1 + 0x10) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc509:
        *(longlong **)(lVar1 + 0x10) = plVar13;
      }
      if (plVar16 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_2b8 != '\0') && (local_2c0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027eec98;
  if (DAT_027eec98 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_2b0 = lVar1;
  local_2a8 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_2b0);
  local_c8 = local_50;
  local_c0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_c0 = '\x01';
  uVar18 = (**(code **)(*unaff_RDI + 0x3b8))(uVar18,&local_c8);
  lVar1 = *unaff_RSI;
  plVar16 = *(longlong **)(lVar1 + 0x18);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01cdb927;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(longlong **)(lVar1 + 0x18);
      *(longlong **)(lVar1 + 0x18) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdb927:
      *(longlong **)(lVar1 + 0x18) = plVar13;
    }
    if (plVar16 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = DAT_027eec98;
  if (*(longlong *)(*unaff_RSI + 0x18) == 0) {
    if (DAT_027eec98 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_2a0 = lVar1;
    local_298 = '\x01';
    FUN_000175c0(uVar18,&local_2a0);
    local_b8 = local_50;
    local_b0 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_b0 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *unaff_RSI;
    plVar16 = *(longlong **)(lVar1 + 0x18);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          goto LAB_01cdc56e;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(longlong **)(lVar1 + 0x18);
        *(longlong **)(lVar1 + 0x18) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc56e:
        *(longlong **)(lVar1 + 0x18) = plVar13;
      }
      if (plVar16 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_298 != '\0') && (local_2a0 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027eeca0;
  if (DAT_027eeca0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_290 = lVar1;
  local_288 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_290);
  local_a8 = local_50;
  local_a0 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_a0 = '\x01';
  uVar18 = (**(code **)(*unaff_RDI + 0x3b8))(uVar18,&local_a8);
  lVar1 = *unaff_RSI;
  plVar16 = *(longlong **)(lVar1 + 0x28);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01cdbad9;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(longlong **)(lVar1 + 0x28);
      *(longlong **)(lVar1 + 0x28) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdbad9:
      *(longlong **)(lVar1 + 0x28) = plVar13;
    }
    if (plVar16 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = DAT_027eeca0;
  if (*(longlong *)(*unaff_RSI + 0x28) == 0) {
    if (DAT_027eeca0 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_280 = lVar1;
    local_278 = '\x01';
    FUN_000175c0(uVar18,&local_280);
    local_98 = local_50;
    local_90 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_90 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *unaff_RSI;
    plVar16 = *(longlong **)(lVar1 + 0x28);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          goto LAB_01cdc5d3;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(longlong **)(lVar1 + 0x28);
        *(longlong **)(lVar1 + 0x28) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc5d3:
        *(longlong **)(lVar1 + 0x28) = plVar13;
      }
      if (plVar16 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_278 != '\0') && (local_280 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027eeca8;
  if (DAT_027eeca8 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_270 = lVar1;
  local_268 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_270);
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  uVar18 = (**(code **)(*unaff_RDI + 0x3b8))(uVar18,&local_88);
  lVar1 = *unaff_RSI;
  plVar16 = *(longlong **)(lVar1 + 0x20);
  plVar13 = plVar16;
  if (plVar16 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01cdbc79;
      }
      uVar18 = FUN_00d50b00();
      plVar16 = *(longlong **)(lVar1 + 0x20);
      *(longlong **)(lVar1 + 0x20) = local_40;
      plVar13 = local_40;
    }
    else {
      local_38 = '\0';
      plVar13 = local_40;
LAB_01cdbc79:
      *(longlong **)(lVar1 + 0x20) = plVar13;
    }
    if (plVar16 != (longlong *)0x0) {
      uVar18 = FUN_00d50b20();
      plVar13 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = DAT_027eeca8;
  if (*(longlong *)(*unaff_RSI + 0x20) == 0) {
    if (DAT_027eeca8 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_260 = lVar1;
    local_258 = '\x01';
    FUN_000175c0(uVar18,&local_260);
    local_78 = local_50;
    local_70 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    uVar18 = FUN_01d4f450();
    lVar1 = *unaff_RSI;
    plVar16 = *(longlong **)(lVar1 + 0x20);
    plVar13 = plVar16;
    if (plVar16 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
          goto LAB_01cdc62f;
        }
        uVar18 = FUN_00d50b00();
        plVar16 = *(longlong **)(lVar1 + 0x20);
        *(longlong **)(lVar1 + 0x20) = local_40;
        plVar13 = local_40;
      }
      else {
        local_38 = '\0';
        plVar13 = local_40;
LAB_01cdc62f:
        *(longlong **)(lVar1 + 0x20) = plVar13;
      }
      if (plVar16 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
        plVar13 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_258 != '\0') && (local_260 != 0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027eecb0;
  if (DAT_027eecb0 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_250 = lVar1;
  local_248 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_250);
  plVar16 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_248 != '\0') && (local_250 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_f0 = plVar16;
  if (plVar16 == (longlong *)0x0) {
    if (*(longlong *)(*unaff_RSI + 0x10) != 0) {
      local_68 = (longlong *)FUN_01d526f0();
      uStack_60 = extraout_XMM0_Qb;
      auVar19._0_8_ = FUN_01d526f0();
      auVar19._8_8_ = extraout_XMM0_Qb_00;
      auVar20._8_8_ = uStack_60;
      auVar20._0_8_ = local_68;
      auVar20 = blendps(auVar19,auVar20,0xd);
      lVar1 = *unaff_RSI;
      uVar18 = auVar20._0_8_;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = uVar18;
    }
  }
  else {
    local_240 = plVar16;
    local_238 = '\0';
    uVar18 = FUN_00d96410();
    lVar1 = *unaff_RSI;
    *(undefined8 *)(lVar1 + 0x30) = uVar18;
    *(ulonglong *)(lVar1 + 0x38) = CONCAT44(uVar21,uVar10);
    if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  lVar1 = DAT_027cd550;
  if (DAT_027cd550 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_230 = lVar1;
  local_228 = '\x01';
  FUN_000175c0(uVar18,&local_230);
  plVar16 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027eecb8;
  local_68 = plVar16;
  if (plVar16 != (longlong *)0x0) {
    if (DAT_027eecb8 != 0) {
      FUN_00d50b00();
    }
    local_220 = lVar1;
    local_218 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eecc0;
    uVar9 = 1;
    if (cVar7 == '\0') {
      if (DAT_027eecc0 != 0) {
        FUN_00d50b00();
      }
      local_210 = lVar1;
      local_208 = '\x01';
      uVar9 = FUN_00d90eb0();
      if ((local_208 != '\0') && (local_210 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027eecc8;
    if (DAT_027eecc8 != 0) {
      FUN_00d50b00();
    }
    local_200 = lVar1;
    local_1f8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eecd0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (DAT_027eecd0 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar1;
      local_1e8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027eecd8;
    uVar15 = (uVar9 & 0xff) + 4;
    if (cVar8 == '\0') {
      uVar15 = uVar9 & 0xff;
    }
    if (DAT_027eecd8 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar1;
    local_1d8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eece0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (DAT_027eece0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar1;
      local_1c8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027eece8;
    if (cVar8 != '\0') {
      uVar15 = uVar15 + 8;
    }
    if (DAT_027eece8 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = lVar1;
    local_1b8 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eecf0;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (DAT_027eecf0 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar1;
      local_1a8 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027eecf8;
    if (cVar8 != '\0') {
      uVar15 = uVar15 + 0x20;
    }
    if (DAT_027eecf8 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar1;
    local_198 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eed00;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (DAT_027eed00 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027eed08;
    uVar9 = uVar15 | 2;
    if (cVar8 == '\0') {
      uVar9 = uVar15;
    }
    if (DAT_027eed08 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar1;
    local_178 = '\x01';
    cVar7 = FUN_00d90eb0();
    lVar1 = DAT_027eed10;
    cVar8 = '\x01';
    if (cVar7 == '\0') {
      if (DAT_027eed10 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar1;
      local_168 = '\x01';
      cVar8 = FUN_00d90eb0();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    uVar15 = uVar9 | 0x10;
    if (cVar8 == '\0') {
      uVar15 = uVar9;
    }
    *(uint *)(*unaff_RSI + 0x54) = uVar15;
  }
  plVar16 = DAT_027eed18;
  if (DAT_027eed18 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar16;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    puVar12 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar12 = &DAT_024d6a08;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    *(undefined1 *)(puVar12 + 10) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x5c) = 0;
    *(undefined4 *)((longlong)puVar12 + 100) = 0;
    uVar18 = FUN_00d500e0();
    puVar3 = *(undefined8 **)(*unaff_RSI + 0x60);
    if (puVar3 == puVar12) {
      uVar18 = FUN_00d50b20();
    }
    else {
      *(undefined8 **)(*unaff_RSI + 0x60) = puVar12;
      if (puVar3 != (undefined8 *)0x0) {
        uVar18 = FUN_00d50b20();
      }
    }
    plVar16 = DAT_027eed18;
    if (DAT_027eed18 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_160 = plVar16;
    local_158 = '\x01';
    pplVar17 = &local_40;
    uVar18 = FUN_000175c0(uVar18,&local_160);
    plVar16 = local_40;
    if ((DAT_026fdd40 == '\0') &&
       (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Qa_04, iVar11 != 0)) {
      _DAT_026cd0e8 = FUN_00d4fe50();
      DAT_026cd0d0 = "GNDictionary";
      _DAT_026cd0d8 = 0x28;
      _DAT_026cd0e0 = FUN_00022d20;
      _DAT_026cd0f0 = 0;
      uRam00000000026cd0f8 = 0;
      _DAT_026cd100 = 0;
      _DAT_026cd178 = 0;
      uRam00000000026cd180 = 0;
      _DAT_026cd188 = 0;
      DAT_026cd18a = 6;
      _DAT_026cd108 = 0;
      uRam00000000026cd110 = 0;
      _DAT_026cd118 = 0;
      uRam00000000026cd120 = 0;
      _DAT_026cd128 = 0;
      uRam00000000026cd130 = 0;
      _DAT_026cd138 = 0;
      uRam00000000026cd140 = 0;
      _DAT_026cd148 = 0;
      uRam00000000026cd150 = 0;
      _DAT_026cd158 = 0;
      uRam00000000026cd160 = 0;
      _DAT_026cd168 = 0;
      uRam00000000026cd170 = 0;
      DAT_026cd193 = 0;
      _DAT_026cd18b = 0;
      uVar18 = ___cxa_guard_release();
    }
    if (plVar16 == (longlong *)0x0) {
LAB_01cdc482:
      pplVar17 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar16 + 0x360))();
      cVar7 = FUN_00e85ea0();
      uVar18 = extraout_XMM0_Qa;
      if (cVar7 == '\0') goto LAB_01cdc482;
    }
    plVar16 = *pplVar17;
    if (plVar16 == (longlong *)0x0) {
      bVar5 = true;
      bVar4 = true;
      plVar16 = (longlong *)0x0;
    }
    else {
      if (*(char *)(pplVar17 + 1) == '\0') {
        uVar18 = FUN_00d50b00();
      }
      else {
        *(undefined1 *)(pplVar17 + 1) = 0;
      }
      bVar5 = false;
      bVar4 = false;
    }
    if ((local_38 != '\0') && (bVar4 = bVar5, local_40 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    lVar1 = DAT_027eec90;
    if (plVar16 == (longlong *)0x0) {
      if (DAT_027eec90 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_150 = lVar1;
      local_148 = '\x01';
      uVar18 = FUN_00cc7b40(uVar18,DAT_025908a0);
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    local_f8 = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x60);
    if (lVar1 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_2e0 = 0;
    local_2e8 = plVar16;
    local_100 = lVar1;
    FUN_01cdb6a0(uVar18,&local_2e8);
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar4 && plVar16 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar16 = DAT_027f3348;
  if (DAT_027f3348 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar16;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_00;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar16 != (longlong *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar16 = DAT_027f3348;
  plVar14 = local_68;
  plVar13 = local_f0;
  if (cVar7 == '\0') goto LAB_01cdcb31;
  if (DAT_027f3348 != (longlong *)0x0) {
    uVar18 = FUN_00d50b00();
  }
  local_140 = plVar16;
  local_138 = '\x01';
  pplVar17 = &local_40;
  uVar18 = FUN_000175c0(uVar18,&local_140);
  plVar16 = local_40;
  if ((DAT_026fdd40 == '\0') &&
     (iVar11 = ___cxa_guard_acquire(), uVar18 = extraout_XMM0_Qa_05, iVar11 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    uVar18 = ___cxa_guard_release();
  }
  if (plVar16 == (longlong *)0x0) {
LAB_01cdc7db:
    pplVar17 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar16 + 0x360))();
    cVar7 = FUN_00e85ea0();
    uVar18 = extraout_XMM0_Qa_01;
    if (cVar7 == '\0') goto LAB_01cdc7db;
  }
  plVar16 = *pplVar17;
  if (*(char *)(pplVar17 + 1) == '\0') {
    if (plVar16 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar17 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  lVar1 = DAT_027eec90;
  if (plVar16 == (longlong *)0x0) {
    if (DAT_027eec90 != 0) {
      uVar18 = FUN_00d50b00();
    }
    local_130 = lVar1;
    local_128 = '\x01';
    FUN_00cc7b40(uVar18,DAT_025908a0);
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  plVar13 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  plVar14 = *(longlong **)(*unaff_RSI + 0x58);
  if (plVar14 == plVar13) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(*unaff_RSI + 0x58) = plVar13;
    if (plVar14 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar13 = DAT_027e1428;
  if (DAT_027e1428 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar13;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_02;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar13 = DAT_027e1428;
  if (cVar7 != '\0') {
    if (DAT_027e1428 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_120 = plVar13;
    local_118 = '\x01';
    FUN_01cde020(uVar18,&local_120);
    uVar10 = FUN_00d45870();
    **(undefined4 **)(*(longlong *)(*unaff_RSI + 0x58) + 0x10) = uVar10;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar13 = DAT_027e7c70;
  if (DAT_027e7c70 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = plVar13;
  local_38 = '\0';
  cVar7 = FUN_00c9ff50();
  uVar18 = extraout_XMM0_Qa_03;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    uVar18 = FUN_00d50b20();
  }
  plVar14 = local_68;
  plVar13 = local_f0;
  plVar6 = DAT_027e7c70;
  if (cVar7 != '\0') {
    if (DAT_027e7c70 != (longlong *)0x0) {
      uVar18 = FUN_00d50b00();
    }
    local_110 = plVar6;
    local_108 = '\x01';
    FUN_01cde020(uVar18,&local_110);
    uVar10 = FUN_00d45870();
    *(undefined4 *)(*(longlong *)(*(longlong *)(*unaff_RSI + 0x58) + 0x10) + 8) = uVar10;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01cdcb31:
  if (plVar14 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


