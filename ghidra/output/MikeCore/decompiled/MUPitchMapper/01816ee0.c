// Function: FUN_01816ee0
// Address: 01816ee0
// Size: 6624 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x0181828e) */
/* WARNING: Removing unreachable block (ram,0x018182ed) */
/* WARNING: Removing unreachable block (ram,0x018182f2) */
/* WARNING: Removing unreachable block (ram,0x018182fa) */
/* WARNING: Removing unreachable block (ram,0x01818294) */
/* WARNING: Removing unreachable block (ram,0x018176c5) */
/* WARNING: Removing unreachable block (ram,0x01817ff3) */
/* WARNING: Removing unreachable block (ram,0x01818009) */
/* WARNING: Removing unreachable block (ram,0x01817ff7) */
/* WARNING: Removing unreachable block (ram,0x018176de) */
/* WARNING: Removing unreachable block (ram,0x018176e2) */
/* WARNING: Removing unreachable block (ram,0x018176ea) */
/* WARNING: Removing unreachable block (ram,0x018185ed) */
/* WARNING: Removing unreachable block (ram,0x0181861d) */
/* WARNING: Removing unreachable block (ram,0x01818622) */
/* WARNING: Removing unreachable block (ram,0x0181862d) */
/* WARNING: Removing unreachable block (ram,0x018185f3) */
/* WARNING: Removing unreachable block (ram,0x0181727d) */
/* WARNING: Removing unreachable block (ram,0x01817a98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01816ee0(undefined4 param_1,longlong *param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  char *pcVar9;
  void *pvVar10;
  int iVar11;
  pthread_key_t pVar12;
  int iVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char local_res8;
  undefined1 local_1b0 [8];
  undefined1 local_1a8;
  undefined1 local_198;
  undefined1 local_190 [8];
  undefined1 local_188;
  longlong *local_180;
  ulonglong local_178;
  char local_170;
  ulonglong local_168;
  char local_160;
  ulonglong local_158;
  char local_150;
  ulonglong local_148;
  char local_140;
  ulonglong local_138;
  char local_130;
  ulonglong local_128;
  char local_120;
  ulonglong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  ulonglong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  ulonglong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  char local_80 [9];
  undefined7 uStack_77;
  char local_70;
  ulonglong local_68;
  ulonglong local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_180 = param_2;
  FUN_017e1dd0();
  local_80[0] = local_50[0];
  pcVar9 = local_80;
  if (local_50[0] != '\0') {
    pcVar9 = local_50;
  }
  *pcVar9 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = *(uint *)((longlong)unaff_RDI + 0x4c) & 0xfffffffe;
  local_68 = (ulonglong)uVar5;
  iVar15 = 7;
  if (uVar5 == 6) {
    FUN_017e1bf0();
    uVar8 = FUN_01717260();
    local_68 = uVar8;
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      local_68 = FUN_00d50b20();
    }
    iVar15 = 7;
    if ((int)uVar8 != -1) {
      iVar15 = (int)uVar8;
    }
  }
  switch(param_1) {
  case 0:
    FUN_017e1a30();
    local_68 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    FUN_017e1a60();
    local_68 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    FUN_017e1a60();
    local_68 = FUN_017154c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    local_68 = FUN_01815fa0();
    break;
  case 4:
    FUN_017e1a90();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_017e1a60();
      local_68 = FUN_01715480();
    }
    else {
      FUN_017e1a90();
      local_68 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a90();
      local_e0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_e0 = '\x01';
      local_e8 = local_58;
      FUN_017e1cd0();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 5:
  case 6:
    FUN_017e1a60();
    cVar4 = FUN_01717530();
    cVar3 = '\x01';
    if (cVar4 == '\0') {
      FUN_017e1a60();
      cVar3 = FUN_017176e0();
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017e1a30();
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      uVar18 = FUN_017e1a60();
      lVar1 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (lVar1 != 0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_1a8 = 1;
      local_68 = FUN_01815dc0(uVar18,local_1b0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1a60();
      local_d0 = 0;
      local_d8 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_d0 = '\x01';
      FUN_01716260();
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      iVar11 = (int)local_68 * 7;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      cVar4 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_178 = local_58;
      local_170 = '\0';
      FUN_017e1cd0();
      if ((local_170 != '\0') && (local_178 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_017e1a60();
      local_68 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  switch(param_3) {
  case 0:
    FUN_017e1bc0();
    iVar15 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 1:
    FUN_017e1bf0();
    iVar15 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 2:
    FUN_017e1bf0();
    iVar15 = FUN_017154c0();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    break;
  case 3:
    FUN_017e1bf0();
    if (local_50[0] == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    uVar5 = 0xffffffff;
    iVar15 = 0x18;
    uVar8 = local_68;
    do {
      cVar4 = FUN_01716980();
      uVar16 = (uint)uVar8;
      uVar18 = extraout_XMM0_Qa;
      if (cVar4 != '\0') {
        iVar11 = FUN_01715480();
        iVar11 = uVar16 - iVar11;
        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
        uVar6 = (uint)(*(ulonglong *)(local_58 + 0x18) >>
                      ((((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11) * '\x04' & 0x3f)) & 0xf;
        uVar18 = extraout_XMM0_Qa_00;
        if ((uVar6 < 0x10) && ((0x801fU >> uVar6 & 1) != 0)) goto LAB_01817a3c;
      }
      uVar16 = uVar16 + uVar5;
      uVar8 = (ulonglong)uVar16;
      uVar6 = 1 - uVar5;
      bVar17 = (int)uVar5 < 1;
      uVar5 = ~uVar5;
      if (bVar17) {
        uVar5 = uVar6;
      }
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    if (local_58 != 0) {
LAB_01817a3c:
      uVar18 = FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    goto LAB_01818096;
  case 4:
    uVar18 = FUN_017e1bc0();
    local_80[8] = local_50[0];
    pcVar9 = local_50;
    if (local_50[0] == '\0') {
      pcVar9 = local_80 + 8;
    }
    *pcVar9 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    uVar5 = *(uint *)(local_58 + 0x80);
    if ((uVar5 & 1) == 0) {
      uVar18 = FUN_017e1bf0();
      if (((local_80[8] == '\0') && (local_58 != 0)) && (local_50[0] != '\0')) {
        local_80[8] = '\x01';
        local_50[0] = '\0';
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      uVar5 = *(uint *)(local_58 + 0x80);
    }
    iVar15 = (int)-*(char *)(local_58 + 0x84);
    if ((uVar5 & 3) == 0) {
      iVar15 = 0;
    }
    uVar16 = iVar15 + *(int *)(*unaff_RSI + 0x84);
    if ((*(char *)(local_58 + 0x84) != '\0') || (uVar5 == 0)) {
      while (cVar4 = FUN_01716980(), uVar18 = extraout_XMM0_Qa_02, cVar4 == '\0') {
        uVar16 = uVar16 - 1;
      }
    }
    if ((local_80[8] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
LAB_01818096:
    iVar15 = uVar16 - (int)local_68;
    if (param_3 != 4) goto LAB_01817d53;
    goto LAB_018180a4;
  case 5:
    FUN_017e1d70();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_017e1bf0();
      iVar15 = FUN_01715480();
    }
    else {
      FUN_017e1d70();
      iVar15 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1d70();
      local_c0 = 0;
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_c0 = '\x01';
      local_c8 = local_58;
      FUN_017e1c50();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    break;
  case 6:
    FUN_017e1bc0();
    iVar11 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bc0();
    iVar7 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_018178dc;
  case 7:
    FUN_017e1bf0();
    iVar11 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bf0();
    iVar7 = FUN_01715480();
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_018178dc:
    iVar7 = iVar7 + iVar15;
    iVar7 = iVar7 + (((uint)(iVar7 / 6 + (iVar7 >> 0x1f)) >> 1) - (iVar7 >> 0x1f)) * -0xc;
    iVar15 = (iVar7 >> 0x1f & 0xcU) + iVar7;
    auVar19._0_4_ = iVar15 - (int)local_68;
    auVar19._4_4_ = iVar11 - (int)local_68;
    auVar19._8_8_ = 0;
    auVar19 = pabsd(auVar19,auVar19);
    auVar21._0_4_ = _DAT_023d92f0 - auVar19._0_4_;
    auVar21._4_4_ = _UNK_023d92f4 - auVar19._4_4_;
    auVar21._8_4_ = _UNK_023d92f8 - auVar19._8_4_;
    auVar21._12_4_ = _UNK_023d92fc - auVar19._12_4_;
    auVar19 = pabsd(auVar19,auVar21);
    auVar20._0_4_ = auVar19._0_4_ + _DAT_02416d20;
    auVar20._4_4_ = auVar19._4_4_ + _UNK_02416d24;
    auVar20._8_4_ = auVar19._8_4_ + _UNK_02416d28;
    auVar20._12_4_ = auVar19._12_4_ + _UNK_02416d2c;
    auVar19 = pabsd(auVar20,auVar20);
    uVar5 = auVar19._0_4_;
    uVar16 = auVar19._4_4_;
    if (!(bool)(~(((uVar16 < uVar5) * uVar5 | (uVar16 >= uVar5) * uVar16) == uVar5) & 1)) {
      iVar15 = iVar11;
    }
    break;
  case 8:
  case 9:
    FUN_017e1bf0();
    cVar4 = FUN_01717530();
    cVar3 = '\x01';
    if (cVar4 == '\0') {
      FUN_017e1bf0();
      cVar3 = FUN_017176e0();
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_017e1bc0();
      if (local_50[0] == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      local_198 = 1;
      uVar18 = FUN_017e1bf0();
      lVar1 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (lVar1 != 0) {
          uVar18 = FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_188 = 1;
      iVar15 = FUN_01815dc0(uVar18,local_190);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1bf0();
      local_b0 = 0;
      local_b8 = CONCAT71(uStack_77,local_80[8]);
      if (local_70 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_b0 = '\x01';
      FUN_01716260();
      if (local_50[0] == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
        FUN_00d50b20();
      }
      iVar11 = iVar15 * 7;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      cVar4 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_168 = local_58;
      local_160 = '\0';
      FUN_017e1c50();
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_017e1bf0();
      iVar15 = FUN_01715480();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  iVar15 = iVar15 - (int)local_68;
LAB_01817d53:
  iVar7 = (**(code **)(*unaff_RDI + 0x370))();
  iVar11 = 6;
  if (iVar15 < 6) {
    iVar11 = iVar15;
  }
  uVar5 = (iVar15 - iVar11) + 0xb;
  iVar15 = (uVar5 % 0xc - uVar5) + iVar15;
  iVar11 = -6;
  if (-6 < iVar15) {
    iVar11 = iVar15;
  }
  uVar5 = (uint)(iVar11 - iVar15 != 0);
  iVar11 = ((iVar11 - iVar15) - uVar5) / 0xc + uVar5;
  pVar12 = iVar11 * 3;
  iVar15 = iVar15 + iVar11 * 0xc;
  uVar18 = extraout_XMM0_Qa_01;
  if ((iVar7 != 0) && (local_res8 != '\0')) {
    FUN_017e1dd0();
    lVar1 = *(longlong *)(local_58 + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar18 = FUN_017e1dd0();
    lVar14 = *(longlong *)(local_58 + 0xb0);
    if (lVar14 != 0) {
      uVar18 = FUN_00d50b00();
    }
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      uVar18 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      pvVar10 = _pthread_getspecific(pVar12);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar18 = FUN_01531cc0();
      bVar17 = false;
      if (((*(uint *)(local_58 + 0x18) & 0xfffffffc) == 4) && (bVar17 = false, lVar14 != 0)) {
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar18 = FUN_01531cc0();
        bVar17 = (*(uint *)(CONCAT71(uStack_77,local_80[8]) + 0x18) & 0xfffffffc) == 4;
        if (local_70 != '\0') {
          uVar18 = FUN_00d50b20();
        }
      }
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (bVar17) {
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531cc0();
        iVar15 = **(int **)(local_58 + 0x10);
        pvVar10 = _pthread_getspecific(pVar12);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar18 = FUN_01531cc0();
        iVar15 = iVar15 - **(int **)(CONCAT71(uStack_77,local_80[8]) + 0x10);
        if (local_70 != '\0') {
          uVar18 = FUN_00d50b20();
        }
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
    }
    if (lVar14 != 0) {
      uVar18 = FUN_00d50b20();
    }
    if (lVar1 != 0) {
      uVar18 = FUN_00d50b20();
    }
  }
LAB_018180a4:
  if (*(char *)(local_58 + 0xc2) == '\0') {
    lVar1 = unaff_RDI[0xb];
    iVar11 = *(int *)((longlong)unaff_RDI + 0x5c);
    iVar7 = *(int *)(*unaff_RSI + 0x80);
    iVar13 = *(int *)(*unaff_RSI + 0x84);
    if ((*(int *)(local_58 + 0x44) + *(int *)(local_58 + 0x48)) / 2 < (iVar7 + iVar13) / 2) {
      while (cVar4 = FUN_017e4340(uVar18,*(int *)(*unaff_RSI + 0x84) + iVar15), cVar4 == '\0') {
        iVar15 = iVar15 + 0xc;
        uVar18 = extraout_XMM0_Qa_03;
      }
    }
    else {
      while (cVar4 = FUN_017e4340(iVar7 + iVar15,iVar13 + iVar15), cVar4 == '\0') {
        iVar15 = iVar15 + -0xc;
        iVar7 = *(int *)(*unaff_RSI + 0x80);
        iVar13 = *(int *)(*unaff_RSI + 0x84);
      }
    }
    iVar7 = *(int *)((longlong)unaff_RDI + 0x54);
    if (iVar15 < *(int *)((longlong)unaff_RDI + 0x54)) {
      iVar7 = iVar15;
    }
    uVar5 = (iVar15 - iVar7) + 0xb;
    iVar15 = (uVar5 % 0xc - uVar5) + iVar15;
    iVar7 = (int)unaff_RDI[10];
    if ((int)unaff_RDI[10] < iVar15) {
      iVar7 = iVar15;
    }
    uVar5 = (uint)(iVar7 - iVar15 != 0);
    iVar15 = iVar15 + (((iVar7 - iVar15) - uVar5) / 0xc + uVar5) * 0xc;
    do {
      iVar7 = iVar15 + -0xc;
      iVar13 = iVar15 + *(int *)(*unaff_RSI + 0x84);
      iVar15 = iVar7;
    } while (iVar11 < iVar13);
    do {
      iVar15 = iVar7 + 0xc;
      iVar11 = iVar7 + *(int *)(*unaff_RSI + 0x80);
      iVar7 = iVar15;
    } while (iVar11 + 0xc < (int)lVar1);
  }
  if (iVar15 == 0) goto LAB_01818879;
  FUN_017e1ac0();
  if ((((local_50[0] == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50[0] != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_017e1b40();
  if (local_50[0] == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01818258;
    }
    if (-1 < param_4) goto LAB_018185bd;
LAB_018182d5:
    local_68 = local_58;
  }
  else {
LAB_01818258:
    if (param_4 < 0) goto LAB_018182d5;
    if (local_58 != 0) {
      local_158 = local_58;
      local_150 = '\0';
      FUN_01716260();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      iVar11 = FUN_01715480();
      iVar11 = iVar11 + iVar15;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      iVar11 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
      iVar11 = iVar11 + ((int)(short)iVar11 / 0xc) * -0xc;
      cVar4 = ((byte)((uint)(int)(short)iVar11 >> 0xf) & 0xc) + (char)iVar11 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_148 = local_58;
      local_140 = '\0';
      FUN_017e1b70();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1ca0();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_017e1ca0();
        local_a0 = 0;
        local_a8 = CONCAT71(uStack_77,local_80[8]);
        if (local_70 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_a0 = '\x01';
        FUN_01716260();
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_80[8]) != 0)) {
          FUN_00d50b20();
        }
        iVar11 = FUN_01715480();
        iVar11 = iVar11 + iVar15;
        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
        iVar11 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
        iVar11 = iVar11 + ((int)(short)iVar11 / 0xc) * -0xc;
        cVar4 = ((byte)((uint)(int)(short)iVar11 >> 0xf) & 0xc) + (char)iVar11 + '\x06';
        uVar5 = cVar4 * 0x2b;
        FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) *
                                         -0xc + -6));
        local_138 = local_58;
        local_130 = '\0';
        FUN_017e1cd0();
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
    }
LAB_018185bd:
    if (local_58 == 0) {
      local_68 = local_58;
    }
    else {
      local_128 = local_58;
      local_120 = '\0';
      FUN_01716260();
      local_68 = local_58;
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = local_68;
      iVar11 = FUN_01715480();
      iVar11 = iVar11 + iVar15;
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      iVar15 = ((iVar11 >> 0x1f & 0xcU) + iVar11) * 7;
      iVar15 = iVar15 + ((int)(short)iVar15 / 0xc) * -0xc;
      cVar4 = ((byte)((uint)(int)(short)iVar15 >> 0xf) & 0xc) + (char)iVar15 + '\x06';
      uVar5 = cVar4 * 0x2b;
      FUN_01715d30((int)(char)(cVar4 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              + -6));
      local_118 = uVar8;
      local_110 = '\0';
      FUN_017e1af0();
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = *local_180;
  if (lVar1 != 0) {
    local_50[0] = '\0';
    local_38 = 0;
    local_40 = 0;
    local_48 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar14 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar14 * 8);
        local_100 = '\0';
        local_108 = lVar2;
        uVar18 = FUN_017e4480();
        if ((local_100 != '\0') && (local_108 != 0)) {
          uVar18 = FUN_00d50b20();
        }
        local_f0 = '\0';
        local_f8 = lVar2;
        FUN_017e4370(uVar18,&local_f8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((char)unaff_RDI[7] != '\0') {
          FUN_017e4290();
        }
        lVar14 = lVar14 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar14);
      } while ((int)lVar14 < *(int *)(lVar1 + 0xc));
    }
    FUN_01916320();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_00d50b20();
  }
LAB_01818879:
  if ((local_80[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}


