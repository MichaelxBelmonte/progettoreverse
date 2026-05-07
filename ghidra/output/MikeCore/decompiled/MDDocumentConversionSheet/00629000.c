// Function: FUN_00629000
// Address: 00629000
// Size: 2624 bytes
// Class: MDDocumentConversionSheet


void FUN_00629000(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RDI;
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
  longlong *local_30;
  char local_28;
  
  FUN_00d50100();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_1d0 = lVar3;
  local_1c8 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = lVar2;
  local_1b8 = '\x01';
  local_1b0 = 0;
  local_1a8 = '\0';
  FUN_000bf690(&local_1c0,&local_1d0,&local_1b0);
  plVar1 = *(longlong **)(unaff_RDI + 0x110);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_006290c9;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x110);
      *(longlong **)(unaff_RDI + 0x110) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006290c9:
      *(longlong **)(unaff_RDI + 0x110) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d50b00();
    local_1a0 = DAT_02725770;
    if (DAT_02725770 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02726c30;
    local_198 = '\x01';
    if (DAT_02726c30 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    local_180 = 0;
    local_178 = '\0';
    FUN_000bf690(&local_190,&local_1a0,&local_180);
    plVar1 = *(longlong **)(unaff_RDI + 0x118);
    plVar5 = plVar1;
    if (plVar1 != local_30) {
      plVar5 = local_30;
      if (local_28 == '\0') {
        if (local_30 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_00629263;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x118);
        *(longlong **)(unaff_RDI + 0x118) = local_30;
      }
      else {
        local_28 = '\0';
LAB_00629263:
        *(longlong **)(unaff_RDI + 0x118) = plVar5;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_30;
      }
    }
    if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_170 = DAT_02725780;
  if (DAT_02725780 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fbd00;
  local_168 = '\x01';
  if (DAT_026fbd00 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar3;
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_000bf690(&local_160,&local_170,&local_150);
  plVar1 = *(longlong **)(unaff_RDI + 0x120);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_006293c6;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x120);
      *(longlong **)(unaff_RDI + 0x120) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006293c6:
      *(longlong **)(unaff_RDI + 0x120) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_140 = DAT_02725790;
  if (DAT_02725790 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6d60;
  local_138 = '\x01';
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_000bf690(&local_130,&local_140,&local_120);
  plVar1 = *(longlong **)(unaff_RDI + 0x128);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_00629529;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x128);
      *(longlong **)(unaff_RDI + 0x128) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00629529:
      *(longlong **)(unaff_RDI + 0x128) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = DAT_027257a0;
  if (DAT_027257a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6e70;
  local_108 = '\x01';
  if (DAT_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar3;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  plVar1 = *(longlong **)(unaff_RDI + 0x138);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0062968c;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x138);
      *(longlong **)(unaff_RDI + 0x138) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0062968c:
      *(longlong **)(unaff_RDI + 0x138) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026fe410;
  if (DAT_026fe410 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_000bf780();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c0 = DAT_027257a8;
  if (DAT_027257a8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027257b0;
  local_b8 = '\x01';
  if (DAT_027257b0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_000bf690(&local_b0,&local_c0,&local_a0);
  plVar1 = *(longlong **)(unaff_RDI + 0x130);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_00629874;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x130);
      *(longlong **)(unaff_RDI + 0x130) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00629874:
      *(longlong **)(unaff_RDI + 0x130) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xa8) = 0;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    *(byte *)(unaff_RDI + 0x150) = DAT_0280b8c8 ^ 1;
    DAT_0280b8c8 = 1;
  }
  *(undefined1 *)(unaff_RDI + 0x179) = 1;
  FUN_00093470();
  plVar1 = *(longlong **)(unaff_RDI + 0x180);
  plVar5 = plVar1;
  if (plVar1 == local_30) goto LAB_006299f1;
  plVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_006299aa;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x180);
    *(longlong **)(unaff_RDI + 0x180) = local_30;
  }
  else {
    local_28 = '\0';
LAB_006299aa:
    *(longlong **)(unaff_RDI + 0x180) = plVar5;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_30;
  }
LAB_006299f1:
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


