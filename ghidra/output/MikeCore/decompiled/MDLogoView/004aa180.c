// Function: FUN_004aa180
// Address: 004aa180
// Size: 5150 bytes
// Class: MDLogoView


/* WARNING: Removing unreachable block (ram,0x004aa2dc) */
/* WARNING: Removing unreachable block (ram,0x004aa2e5) */
/* WARNING: Removing unreachable block (ram,0x004aa3e7) */
/* WARNING: Removing unreachable block (ram,0x004aa3f0) */
/* WARNING: Removing unreachable block (ram,0x004aaae6) */
/* WARNING: Removing unreachable block (ram,0x004aaaef) */
/* WARNING: Removing unreachable block (ram,0x004aa44f) */
/* WARNING: Removing unreachable block (ram,0x004aa45c) */
/* WARNING: Removing unreachable block (ram,0x004aa59c) */
/* WARNING: Removing unreachable block (ram,0x004aa5a5) */
/* WARNING: Removing unreachable block (ram,0x004aa25e) */
/* WARNING: Removing unreachable block (ram,0x004aa267) */
/* WARNING: Removing unreachable block (ram,0x004aa1cb) */
/* WARNING: Removing unreachable block (ram,0x004aa1d4) */
/* WARNING: Removing unreachable block (ram,0x004aa41d) */
/* WARNING: Removing unreachable block (ram,0x004aa42a) */
/* WARNING: Removing unreachable block (ram,0x004aa369) */
/* WARNING: Removing unreachable block (ram,0x004aa372) */
/* WARNING: Removing unreachable block (ram,0x004aa6b7) */
/* WARNING: Removing unreachable block (ram,0x004aa6c0) */
/* WARNING: Removing unreachable block (ram,0x004aab5b) */
/* WARNING: Removing unreachable block (ram,0x004aab64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004aa180(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *plVar12;
  undefined7 uVar13;
  longlong unaff_R15;
  uint7 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
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
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  ulonglong local_50;
  longlong *local_40;
  char local_38;
  
  FUN_0027c9f0();
  local_58 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = DAT_02708e90;
  plVar11 = local_40;
  if (unaff_SIL == '\0') {
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar15 = (double)FUN_00e7d6f0();
    uVar7 = (ulonglong)(dVar15 * DAT_023907c0);
    dVar15 = dVar15 * DAT_023907c0 - _DAT_023907c8;
    uVar16 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b00();
    }
    uVar7 = ((longlong)dVar15 & (longlong)uVar7 >> 0x3f | uVar7) / 3;
    local_68 = lVar2;
    local_60 = '\0';
    FUN_000175c0(uVar16,&local_68);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_38 = '\0';
      uVar5 = FUN_00c70bc0();
      uVar7 = (ulonglong)uVar5;
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
    if (lVar2 != 0) {
      uVar16 = FUN_00d50b20();
    }
    lVar2 = DAT_026de5e8;
    if ((local_40 != (longlong *)0x0 & (byte)uVar7) == 0) {
      local_50 = 0;
      plVar12 = (longlong *)0x0;
    }
    else {
      if (DAT_026de5e8 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_198 = lVar2;
      local_190 = '\x01';
      uVar8 = FUN_01d5e6e0(uVar16,&local_198);
      uVar16 = extraout_XMM0_Qa;
      if (local_40 == (longlong *)0x0) {
        bVar1 = true;
        local_50 = 0;
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = local_40;
        if (local_38 == '\0') {
          uVar16 = FUN_00d50b00();
          bVar1 = false;
          local_50 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
          uVar16 = extraout_XMM0_Qa_00;
        }
        else {
          local_50 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          local_38 = '\0';
          bVar1 = false;
        }
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      lVar2 = DAT_027296a0;
      if (!bVar1) {
        if (DAT_027296a0 != 0) {
          FUN_00d50b00();
        }
        lVar3 = DAT_02708eb0;
        local_188 = lVar2;
        local_180 = '\x01';
        if (DAT_02708eb0 != 0) {
          FUN_00d50b00();
        }
        local_178 = lVar3;
        local_170 = '\x01';
        local_168 = 0;
        local_160 = '\0';
        FUN_00d31230(&local_168,&local_178);
        local_70 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70 = '\x01';
        local_78 = local_40;
        uVar16 = FUN_01d64eb0();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          uVar16 = FUN_00d50b20();
        }
      }
    }
    lVar2 = DAT_02708eb8;
    if (DAT_02708eb8 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_158 = lVar2;
    local_150 = '\x01';
    uVar8 = FUN_01d5e6e0(uVar16,&local_158);
    uVar13 = (undefined7)(uVar7 >> 8);
    uVar16 = extraout_XMM0_Qa_01;
    if (local_40 == plVar12) {
      plVar9 = plVar12;
      if (((char)local_50 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aa88d;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = local_50 & 0xffffffff;
      }
LAB_004aa93f:
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) {
        local_50 = uVar7 & 0xffffffff;
      }
      else {
        uVar16 = FUN_00d50b20();
        local_50 = uVar7 & 0xffffffff;
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        goto LAB_004aa93f;
      }
      if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
        uVar16 = extraout_XMM0_Qa_02;
      }
LAB_004aa88d:
      local_38 = '\0';
      local_50 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_02708ec0;
    if (DAT_02708ec0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_148 = lVar2;
    local_140 = '\x01';
    uVar8 = FUN_01d5e6e0(uVar16,&local_148);
    uVar13 = (undefined7)(uVar7 >> 8);
    uVar16 = extraout_XMM0_Qa_03;
    if (local_40 == plVar9) {
      plVar12 = plVar9;
      if (((char)local_50 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aa9fe;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = local_50 & 0xffffffff;
      }
LAB_004aaa77:
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) {
        local_50 = uVar7 & 0xffffffff;
      }
      else {
        uVar16 = FUN_00d50b20();
        local_50 = uVar7 & 0xffffffff;
      }
    }
    else {
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if (((char)local_50 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        goto LAB_004aaa77;
      }
      if (((char)local_50 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar8 = FUN_00d50b20();
        uVar16 = extraout_XMM0_Qa_04;
      }
LAB_004aa9fe:
      local_38 = '\0';
      local_50 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_01d65ea0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_130 = '\0';
      local_138 = plVar12;
      iVar6 = FUN_01d5e2e0();
      uVar16 = extraout_XMM0_Qa_05;
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
      FUN_01d5b240(uVar16,iVar6 + -1);
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d65460();
      unaff_R15 = DAT_02708ec8;
      if (DAT_02708ec8 != 0) {
        FUN_00d50b00();
      }
      local_128 = unaff_R15;
      local_120 = '\x01';
      cVar4 = (**(code **)(*local_40 + 0x50))();
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01d66e50();
      }
      uVar16 = FUN_01d66e50();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
        uVar16 = FUN_00d50b20();
      }
    }
    lVar2 = DAT_02708ed0;
    if (DAT_02708ed0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_118 = lVar2;
    local_110 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_118);
    cVar4 = (char)local_50;
    uVar13 = (undefined7)((ulonglong)unaff_R15 >> 8);
    if (local_40 == plVar12) {
      plVar9 = plVar12;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aac7c;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = local_50 & 0xffffffff;
      }
LAB_004aace1:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
          uVar7 = CONCAT71(uVar13,1);
        }
        goto LAB_004aace1;
      }
      if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
LAB_004aac7c:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar13,1);
    }
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_026fb888;
    if (DAT_026fb888 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_108 = lVar2;
    local_100 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_108);
    cVar4 = (char)uVar7;
    uVar13 = (undefined7)((ulonglong)lVar2 >> 8);
    if (local_40 == plVar9) {
      plVar12 = plVar9;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aad94;
        uVar10 = CONCAT71(uVar13,1);
        uVar7 = 0;
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar10 = uVar7 & 0xffffffff;
      }
LAB_004aaddf:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      uVar14 = (uint7)(uVar7 >> 8);
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar7 = (ulonglong)uVar14 << 8;
          uVar16 = FUN_00d50b20();
          uVar10 = CONCAT71(uVar13,1);
        }
        goto LAB_004aaddf;
      }
      if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar7 = (ulonglong)uVar14 << 8;
        uVar16 = FUN_00d50b20();
      }
LAB_004aad94:
      local_38 = '\0';
      uVar10 = CONCAT71(uVar13,1);
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_02708ee0;
    local_50 = uVar10;
    if (DAT_02708ee0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_f8 = lVar2;
    local_f0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_f8);
    cVar4 = (char)local_50;
    uVar13 = (undefined7)(uVar7 >> 8);
    if (local_40 == plVar12) {
      plVar9 = plVar12;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aae91;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = local_50 & 0xffffffff;
      }
LAB_004aaedd:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
          uVar7 = CONCAT71(uVar13,1);
        }
        goto LAB_004aaedd;
      }
      if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
LAB_004aae91:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar13,1);
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_026de5c8;
    if (DAT_026de5c8 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_e8 = lVar2;
    local_e0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_e8);
    cVar4 = (char)uVar7;
    uVar13 = (undefined7)((ulonglong)lVar2 >> 8);
    if (local_40 == plVar9) {
      plVar12 = plVar9;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aaf90;
        uVar10 = CONCAT71(uVar13,1);
        uVar7 = 0;
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar10 = uVar7 & 0xffffffff;
      }
LAB_004aafdb:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      uVar14 = (uint7)(uVar7 >> 8);
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar7 = (ulonglong)uVar14 << 8;
          uVar16 = FUN_00d50b20();
          uVar10 = CONCAT71(uVar13,1);
        }
        goto LAB_004aafdb;
      }
      if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar7 = (ulonglong)uVar14 << 8;
        uVar16 = FUN_00d50b20();
      }
LAB_004aaf90:
      local_38 = '\0';
      uVar10 = CONCAT71(uVar13,1);
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_02708ef0;
    local_50 = uVar10;
    if (DAT_02708ef0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_d8 = lVar2;
    local_d0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_d8);
    cVar4 = (char)local_50;
    uVar13 = (undefined7)(uVar7 >> 8);
    if (local_40 == plVar12) {
      plVar9 = plVar12;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004ab08d;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = local_50 & 0xffffffff;
      }
LAB_004ab0d9:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
          uVar7 = CONCAT71(uVar13,1);
        }
        goto LAB_004ab0d9;
      }
      if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
LAB_004ab08d:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar13,1);
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_026fb8f8;
    if (DAT_026fb8f8 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_c8 = lVar2;
    local_c0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_c8);
    cVar4 = (char)uVar7;
    uVar13 = (undefined7)((ulonglong)lVar2 >> 8);
    if (local_40 == plVar9) {
      plVar12 = plVar9;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004ab18c;
        uVar10 = CONCAT71(uVar13,1);
        uVar7 = 0;
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar10 = uVar7 & 0xffffffff;
      }
LAB_004ab1d7:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      uVar14 = (uint7)(uVar7 >> 8);
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar10 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar7 = (ulonglong)uVar14 << 8;
          uVar16 = FUN_00d50b20();
          uVar10 = CONCAT71(uVar13,1);
        }
        goto LAB_004ab1d7;
      }
      if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar7 = (ulonglong)uVar14 << 8;
        uVar16 = FUN_00d50b20();
      }
LAB_004ab18c:
      local_38 = '\0';
      uVar10 = CONCAT71(uVar13,1);
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_02708f00;
    local_50 = uVar10;
    if (DAT_02708f00 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_b8);
    cVar4 = (char)local_50;
    uVar13 = (undefined7)(uVar7 >> 8);
    if (local_40 == plVar12) {
      plVar9 = plVar12;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004ab289;
        uVar5 = (uint)CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar5 = (uint)local_50;
      }
LAB_004ab2d5:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar5 = (uint)CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
          uVar5 = (uint)CONCAT71(uVar13,1);
        }
        goto LAB_004ab2d5;
      }
      if ((cVar4 != '\0') && (plVar12 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
LAB_004ab289:
      local_38 = '\0';
      uVar5 = (uint)CONCAT71(uVar13,1);
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_026de660;
    if (DAT_026de660 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_a8);
    cVar4 = (char)uVar5;
    uVar13 = (undefined7)((ulonglong)lVar2 >> 8);
    if (local_40 == plVar9) {
      plVar12 = plVar9;
      if ((cVar4 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004ab388;
        uVar7 = CONCAT71(uVar13,1);
        uVar16 = FUN_00d50b00();
      }
      else {
        uVar7 = (ulonglong)uVar5;
      }
LAB_004ab3d3:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
    }
    else {
      plVar12 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        uVar7 = CONCAT71(uVar13,1);
        if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
          uVar7 = CONCAT71(uVar13,1);
        }
        goto LAB_004ab3d3;
      }
      if ((cVar4 != '\0') && (plVar9 != (longlong *)0x0)) {
        uVar16 = FUN_00d50b20();
      }
LAB_004ab388:
      local_38 = '\0';
      uVar7 = CONCAT71(uVar13,1);
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar16 = FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      uVar16 = FUN_01d66e50();
    }
    lVar2 = DAT_02708f10;
    local_50 = uVar7;
    if (DAT_02708f10 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_98 = lVar2;
    local_90 = '\x01';
    uVar16 = FUN_01d5e6e0(uVar16,&local_98);
    if (local_40 == plVar12) {
      plVar11 = plVar12;
      cVar4 = (char)local_50;
      if (((char)local_50 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004ab489;
        local_50 = 0;
        FUN_00d50b00();
        cVar4 = '\x01';
      }
LAB_004ab4e3:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          uVar16 = FUN_00d50b00();
        }
        cVar4 = '\x01';
        if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
          local_50 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
          FUN_00d50b20();
          cVar4 = '\x01';
        }
        goto LAB_004ab4e3;
      }
      if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
        local_50 = CONCAT71((int7)((ulonglong)uVar16 >> 8),1);
        FUN_00d50b20();
      }
LAB_004ab489:
      cVar4 = '\x01';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_01d66e50();
      goto LAB_004ab52f;
    }
  }
  else {
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar15 = (double)FUN_00e7d6f0();
    uVar7 = (ulonglong)(dVar15 * DAT_023907c0);
    dVar15 = dVar15 * DAT_023907c0 - _DAT_023907c8;
    uVar16 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      uVar16 = FUN_00d50b00();
    }
    uVar7 = ((longlong)dVar15 & (longlong)uVar7 >> 0x3f | uVar7) / 3;
    local_68 = lVar2;
    local_60 = '\0';
    FUN_000175c0(uVar16,&local_68);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_38 = '\0';
      uVar5 = FUN_00c70bc0();
      uVar7 = (ulonglong)uVar5;
      FUN_00d50b20();
    }
    uVar16 = FUN_00d50b20();
    if (lVar2 != 0) {
      uVar16 = FUN_00d50b20();
    }
    lVar2 = DAT_026de5e8;
    if ((local_40 != (longlong *)0x0 & (byte)uVar7) == 0) {
      uVar7 = 0;
      plVar12 = (longlong *)0x0;
    }
    else {
      if (DAT_026de5e8 != 0) {
        uVar16 = FUN_00d50b00();
      }
      local_1b8 = lVar2;
      local_1b0 = '\x01';
      uVar16 = FUN_01d5e6e0(uVar16,&local_1b8);
      if (local_40 == (longlong *)0x0) {
        bVar1 = true;
        uVar7 = 0;
        plVar12 = (longlong *)0x0;
      }
      else {
        uVar13 = (undefined7)(uVar7 >> 8);
        plVar12 = local_40;
        if (local_38 == '\0') {
          uVar16 = FUN_00d50b00();
          bVar1 = false;
          uVar7 = CONCAT71(uVar13,1);
        }
        else {
          local_38 = '\0';
          uVar7 = CONCAT71(uVar13,1);
          bVar1 = false;
        }
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        uVar16 = FUN_00d50b20();
      }
      if (!bVar1) {
        uVar16 = FUN_01d66e50();
      }
    }
    lVar2 = DAT_02708ea0;
    local_50 = uVar7;
    if (DAT_02708ea0 != 0) {
      uVar16 = FUN_00d50b00();
    }
    local_1a8 = lVar2;
    local_1a0 = '\x01';
    FUN_01d5e6e0(uVar16,&local_1a8);
    if (local_40 == plVar12) {
      plVar11 = plVar12;
      cVar4 = (char)local_50;
      if (((char)local_50 == '\0') && (local_40 != (longlong *)0x0)) {
        if (local_38 != '\0') goto LAB_004aa653;
        FUN_00d50b00();
        cVar4 = '\x01';
      }
LAB_004aa8ed:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        cVar4 = '\x01';
        if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_004aa8ed;
      }
      if (((char)local_50 != '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_004aa653:
      cVar4 = '\x01';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_01d66e50();
      goto LAB_004ab52f;
    }
  }
  plVar11 = (longlong *)0x0;
LAB_004ab52f:
  FUN_01d62660();
  local_88 = local_58;
  local_80 = '\0';
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x918))();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar4 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


