// Function: FUN_01c532f0
// Address: 01c532f0
// Size: 2871 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Removing unreachable block (ram,0x01c53d6a) */
/* WARNING: Removing unreachable block (ram,0x01c53da0) */
/* WARNING: Removing unreachable block (ram,0x01c53da5) */
/* WARNING: Removing unreachable block (ram,0x01c53dad) */
/* WARNING: Removing unreachable block (ram,0x01c53db2) */
/* WARNING: Removing unreachable block (ram,0x01c53d70) */
/* WARNING: Removing unreachable block (ram,0x01c53d79) */
/* WARNING: Removing unreachable block (ram,0x01c5367f) */
/* WARNING: Removing unreachable block (ram,0x01c5368c) */
/* WARNING: Removing unreachable block (ram,0x01c5336b) */
/* WARNING: Removing unreachable block (ram,0x01c53374) */
/* WARNING: Removing unreachable block (ram,0x01c53629) */
/* WARNING: Removing unreachable block (ram,0x01c53636) */
/* WARNING: Removing unreachable block (ram,0x01c539fd) */
/* WARNING: Removing unreachable block (ram,0x01c53a06) */
/* WARNING: Removing unreachable block (ram,0x01c5379b) */
/* WARNING: Removing unreachable block (ram,0x01c537c0) */
/* WARNING: Removing unreachable block (ram,0x01c5379d) */
/* WARNING: Removing unreachable block (ram,0x01c537c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c532f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong **pplVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  bool bVar11;
  undefined8 uVar12;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_180;
  char local_178;
  undefined8 local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  undefined1 local_128 [16];
  undefined8 local_110;
  undefined1 local_108 [8];
  undefined8 uStack_100;
  longlong *local_f8;
  char local_f0;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_58;
  char local_50;
  int local_40;
  
  uStack_100 = in_XMM1_Qb;
  local_108 = (undefined1  [8])param_2;
  local_98 = (float)param_1;
  fStack_94 = (float)((ulonglong)param_1 >> 0x20);
  fStack_90 = (float)in_XMM0_Qb;
  fStack_8c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = unaff_RDI[0x3c];
  local_68 = local_58;
  if (lVar1 == 0) {
    local_70 = 0;
    uVar12 = (**(code **)(*local_58 + 0x398))();
    local_dc = (undefined4)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_110 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d50b00();
    local_110 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    local_dc = 0;
    local_70 = lVar1;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  pVar7 = 1;
  (**(code **)(*local_f8 + 0x480))(1,0x11,0);
  local_d0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = '\x01';
  local_d8 = local_58;
  FUN_01d488d0();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = local_70;
  local_140 = '\0';
  FUN_01d488d0();
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)*unaff_RSI;
  FUN_00d05530();
  (**(code **)(*plVar10 + 0x3b0))();
  FUN_01d48b40();
  plVar10 = (longlong *)unaff_RDI[0x3d];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x3a0))();
    local_78 = local_58;
    if ((local_58 != (longlong *)0x0) && (plVar10 = local_78, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_78;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_78 = plVar10;
  plVar10 = (longlong *)unaff_RDI[0x3e];
  if (plVar10 == (longlong *)0x0) {
    (**(code **)(*local_68 + 0x3a8))();
    local_80 = local_58;
    if ((local_58 != (longlong *)0x0) && (plVar10 = local_80, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_80;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_80 = plVar10;
  lVar2 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  local_130 = '\x01';
  (**(code **)(*local_68 + 0x3b0))();
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  plVar10 = local_68;
  local_c0 = '\x01';
  local_c8 = local_58;
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c41970();
  auVar16._4_4_ = (float)local_108._4_4_ + fStack_94;
  auVar16._12_4_ = uStack_100._4_4_ + fStack_8c;
  local_108._4_4_ = auVar16._4_4_;
  local_108._0_4_ = (float)local_108._0_4_ + local_98;
  uStack_100._0_4_ = (float)uStack_100 + fStack_90;
  uStack_100._4_4_ = auVar16._12_4_;
  auVar16._0_4_ = auVar16._4_4_;
  auVar16._8_4_ = auVar16._12_4_;
  local_128._4_12_ = auVar16._4_12_;
  local_128._0_4_ = auVar16._4_4_ + DAT_02390d00;
  lVar2 = unaff_RDI[0x40];
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_40 = -1;
    iVar9 = 0;
    while( true ) {
      pVar7 = 0;
      lVar5 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_58 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8 + lVar5 * 8);
      bVar11 = iVar9 != 0;
      iVar9 = iVar9 + -1;
      if (bVar11) {
        uVar12 = FUN_01c82bc0();
        auVar17._0_4_ = (uint)(float)uVar12 & _DAT_023945e0;
        auVar17._4_4_ = (uint)((ulonglong)uVar12 >> 0x20) & _UNK_023945e4;
        auVar17._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar17._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | _DAT_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | _DAT_023945f0,0) + (float)uVar12;
        roundss(ZEXT816(0),auVar18,0xb);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
      }
    }
    FUN_01c79df0();
    FUN_00d50b20();
    plVar10 = local_68;
  }
  lVar2 = unaff_RDI[0x31];
  if (lVar2 != 0) {
    FUN_00d50b00();
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_016c2ea0();
    if (0 < iVar9) {
      if ((int)unaff_RDI[0x39] == 1) {
        local_128._0_4_ = (float)local_128._0_4_ + DAT_0241c6e8;
      }
      local_e4 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        plVar10 = (longlong *)unaff_RDI[0x2e];
      }
      else {
        plVar10 = (longlong *)unaff_RDI[0x2e];
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = local_98;
      auVar3._8_4_ = fStack_90;
      auVar3._12_4_ = fStack_8c;
      auVar13._4_12_ = auVar3._4_12_;
      auVar13._0_4_ = local_98 + DAT_02390d00;
      uVar12 = (**(code **)(*plVar10 + 0x388))(auVar13._0_8_);
      local_98 = (float)uVar12;
      fStack_94 = (float)((ulonglong)uVar12 >> 0x20);
      FUN_0123fd00();
      pVar7 = (pthread_key_t)&local_e4;
      uVar12 = FUN_016cb9d0(CONCAT44(fStack_94,local_98),1);
      FUN_00d50b20();
      local_e0 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar8 = &local_f8;
      FUN_016ca840(pplVar8,uVar12,&local_150,&local_e0);
      if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_108._0_4_ = local_108._0_4_ + DAT_02390d00 + DAT_02390124;
      while( true ) {
        pVar7 = (pthread_key_t)pplVar8;
        plVar10 = (longlong *)unaff_RDI[0x2e];
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        uVar12 = (**(code **)(*plVar10 + 0x390))();
        local_98 = (float)uVar12;
        fStack_94 = (float)((ulonglong)uVar12 >> 0x20);
        fStack_90 = (float)extraout_XMM0_Qb_00;
        fStack_8c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        FUN_00d50b20();
        auVar14._0_4_ = (uint)local_98 & _DAT_023945e0;
        auVar14._4_4_ = (uint)fStack_94 & _UNK_023945e4;
        auVar14._8_4_ = (uint)fStack_90 & _UNK_023945e8;
        auVar14._12_4_ = (uint)fStack_8c & _UNK_023945ec;
        auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
        auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + local_98;
        auVar16 = roundss(auVar15,auVar15,0xb);
        local_98 = auVar16._0_4_;
        if ((float)local_108._0_4_ < local_98) break;
        (**(code **)(*local_68 + 0x398))();
        local_b0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = local_58;
        FUN_01d488d0();
        if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        (**(code **)(*local_68 + 0x3a0))();
        local_a0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_58;
        FUN_01d488d0();
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          local_98 = local_98 + DAT_02390d00;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        }
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        if (local_150._4_4_ == 0) break;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar8 = (longlong **)&local_150;
        FUN_016ca9d0(pplVar8,&local_f8,&local_e0);
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar10 = local_68;
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar10 = local_68;
      }
    }
  }
  FUN_01d48390();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0 && (char)local_dc == '\0') {
    FUN_00d50b20();
  }
  return;
}


