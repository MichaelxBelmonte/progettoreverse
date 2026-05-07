// ===== MUAdvancedTempoDetectionDialog — Annotated small functions =====
// 18 readable functions

// ==================================================
// @01c532f0 (2871 bytes) — math_loop

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
  undefined8 *arg1;
  longlong *this;
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
  (**(code **)(*(longlong *)*arg1 + 0x390))();
  (**(code **)(*this + 0x640))();
  if ((local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = this[0x3c];
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
  (**(code **)(*this + 0x640))();
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
  plVar10 = (longlong *)*arg1;
  FUN_00d05530();
  (**(code **)(*plVar10 + 0x3b0))();
  FUN_01d48b40();
  plVar10 = (longlong *)this[0x3d];
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
  plVar10 = (longlong *)this[0x3e];
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
  lVar2 = this[0x40];
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
        (**(code **)(*(longlong *)*arg1 + 0x3e0))();
      }
    }
    FUN_01c79df0();
    FUN_00d50b20();
    plVar10 = local_68;
  }
  lVar2 = this[0x31];
  if (lVar2 != 0) {
    FUN_00d50b00();
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_016c2ea0();
    if (0 < iVar9) {
      if ((int)this[0x39] == 1) {
        local_128._0_4_ = (float)local_128._0_4_ + DAT_0241c6e8;
      }
      local_e4 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        plVar10 = (longlong *)this[0x2e];
      }
      else {
        plVar10 = (longlong *)this[0x2e];
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
        plVar10 = (longlong *)this[0x2e];
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
        (**(code **)(*(longlong *)*arg1 + 0x3e0))();
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
          (**(code **)(*(longlong *)*arg1 + 0x3e0))();
        }
        (**(code **)(*(longlong *)*arg1 + 0x3e0))();
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




// ==================================================
// @01c41970 (2514 bytes) — math_loop

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  ulonglong uVar9;
  pthread_key_t pVar10;
  longlong lVar11;
  longlong this;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  float extraout_XMM0_Db_00;
  float fVar19;
  double dVar18;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float fVar20;
  float fVar21;
  undefined1 in_XMM1 [16];
  undefined1 auVar22 [16];
  undefined4 local_118;
  undefined8 local_c0;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  lVar5 = local_70;
  if (*(char *)(this + 0x1d0) != '\0') {
    *(undefined1 *)(this + 0x1d0) = 0;
    FUN_00d216c0();
    FUN_00d216c0();
    plVar1 = *(longlong **)(this + 0x170);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(this + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
      if (plVar1 != (longlong *)0x0) {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = lVar2;
        }
        FUN_016c2660();
        if ((local_68 == '\0') && (local_70 != 0)) {
          FUN_00d50b00();
        }
        if (*(int *)(local_70 + 0xc) != 0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = lVar2;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          local_c0 = FUN_017048a0();
        }
        local_70 = 0;
        local_58 = -1;
        while( true ) {
          lVar8 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_58) break;
          lVar11 = *(longlong *)(lVar5 + 0x10);
          local_70 = *(longlong *)(lVar11 + 8 + lVar8 * 8);
          FUN_01c82a20();
          pVar10 = (pthread_key_t)lVar11;
          if ((local_40 == '\0') && (local_48 != 0)) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar9 = FUN_019079b0();
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_01907950();
          pvVar7 = _pthread_getspecific(pVar10);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            pVar10 = (pthread_key_t)lVar2;
          }
          dVar16 = (double)FUN_016d2000();
          uVar12 = (**(code **)(*plVar1 + 0x390))(uVar14);
          FUN_01e3f820();
          fVar13 = extraout_XMM0_Db + in_XMM1._4_4_ + DAT_02390d00;
          fVar21 = fVar13 + DAT_0241c6e8;
          if (*(int *)(this + 0x1c8) != 1) {
            fVar21 = fVar13;
          }
          dVar18 = dVar16 / *(double *)(this + 0x1c0);
          fVar13 = (float)_logf(CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)dVar18));
          fVar21 = fVar21 - (fVar13 / *(float *)(this + 0x2a8)) * fVar21;
          in_XMM1 = ZEXT416((uint)fVar21);
          *(undefined8 *)(local_48 + 0x38) = uVar14;
          *(undefined4 *)(local_48 + 0xc) = uVar12;
          *(float *)(local_48 + 0x10) = fVar21;
          *(double *)(local_48 + 0x30) = dVar16;
          *(ulonglong *)(local_48 + 0x40) = uVar9;
          *(undefined1 *)(local_48 + 0x48) = 0;
          if (((local_c0._4_4_ != 0) && (uVar9 >> 0x20 != 0)) &&
             (cVar6 = FUN_00e7c000(), cVar6 != '\0')) {
            *(undefined1 *)(local_48 + 0x48) = 1;
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = FUN_017048a0();
          }
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
        }
        lVar8 = lVar5;
        FUN_000beb10();
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016d8130();
        if (local_70 == 0) {
          bVar4 = true;
        }
        else {
          FUN_00d50b00();
          local_58 = -1;
          while (local_58 = local_58 + 1, local_58 < *(int *)(local_70 + 0xc)) {
            pVar10 = (pthread_key_t)*(undefined8 *)(local_70 + 0x10);
            FUN_01c829a0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            uVar14 = DAT_023dccf4;
            FUN_01c82aa0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01909dc0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar7 = _pthread_getspecific(pVar10);
            if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar10 = (pthread_key_t)lVar2;
            }
            uVar15 = FUN_016c98e0();
            pvVar7 = _pthread_getspecific(pVar10);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar16 = (double)FUN_016c9410();
            uVar17 = (**(code **)(*plVar1 + 0x390))(uVar15);
            local_118 = (undefined4)uVar17;
            FUN_01e3f820();
            fVar19 = extraout_XMM0_Db_00 + in_XMM1._4_4_;
            fVar20 = extraout_XMM0_Dd + in_XMM1._12_4_;
            fVar13 = fVar19 + DAT_02390d00;
            fVar21 = fVar13 + DAT_0241c6e8;
            if (*(int *)(this + 0x1c8) != 1) {
              fVar21 = fVar13;
            }
            dVar18 = dVar16 / *(double *)(this + 0x1c0);
            fVar13 = (float)_logf(CONCAT44((int)((ulonglong)dVar18 >> 0x20),(float)dVar18));
            fVar21 = fVar21 - (fVar13 / *(float *)(this + 0x2a8)) * fVar21;
            *(undefined8 *)(local_48 + 0x38) = uVar15;
            auVar3._8_8_ = extraout_XMM0_Qb;
            auVar3._0_8_ = uVar17;
            *(undefined4 *)(local_48 + 0xc) = local_118;
            *(float *)(local_48 + 0x10) = fVar21;
            *(double *)(local_48 + 0x30) = dVar16;
            in_XMM1 = ZEXT416((uint)((ulonglong)uVar14 >> 0x20));
            auVar22._4_4_ = fVar19;
            auVar22._0_4_ = fVar21;
            auVar22._8_4_ = fVar20;
            auVar22._12_4_ = fVar20;
            auVar22 = insertps(auVar3,auVar22,0x10);
            auVar22 = insertps(auVar22,ZEXT416((uint)uVar14),0x20);
            auVar22 = insertps(auVar22,in_XMM1,0x30);
            fVar21 = auVar22._4_4_ + _UNK_0241e9b4;
            fVar13 = auVar22._8_4_ + _UNK_0241e9b8;
            fVar19 = auVar22._12_4_ + _UNK_0241e9bc;
            *(float *)(local_48 + 0x1c) = auVar22._0_4_ + _DAT_0241e9b0;
            *(float *)(local_48 + 0x20) = fVar21;
            *(float *)(local_48 + 0x24) = fVar13;
            *(float *)(local_48 + 0x28) = fVar19;
            FUN_01c82aa0();
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            cVar6 = FUN_00d23d70();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 != '\0') {
              FUN_01c82ae0();
            }
            local_40 = '\0';
            FUN_00d21140();
            FUN_00d50b20();
          }
          FUN_01708ee0();
          bVar4 = false;
        }
        FUN_01c45dc0();
        FUN_01e436c0();
        FUN_01c4d670();
        if (!bVar4) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c4e530 (1926 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  char *pcVar8;
  longlong *arg1;
  longlong *this;
  undefined4 uVar9;
  longlong local_130;
  char local_128;
  undefined1 local_100 [8];
  undefined1 local_f8;
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
  int local_54;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  local_f0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_40;
    local_e0 = DAT_027ebc50;
    if (DAT_027ebc50 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_40;
      local_d0 = DAT_026fce70;
      if (DAT_026fce70 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      cVar5 = '\x01';
      if (cVar4 == '\0') {
        FUN_00d3ecc0();
        local_c0 = DAT_027ebc60;
        plVar1 = (longlong *)CONCAT71(uStack_4f,local_50);
        if (DAT_027ebc60 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        cVar5 = (**(code **)(*plVar1 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') {
        FUN_00d3ecc0();
        plVar1 = local_40;
        local_b0 = DAT_027f0ae0;
        if (DAT_027f0ae0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          FUN_00d3ecc0();
          plVar1 = local_40;
          local_a0 = DAT_027e3b30;
          if (DAT_027e3b30 != 0) {
            FUN_00d50b00();
          }
          local_98 = '\x01';
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_00d3ecc0();
            plVar1 = local_40;
            local_90 = DAT_027295a0;
            if (DAT_027295a0 != 0) {
              FUN_00d50b00();
            }
            local_88 = '\x01';
            cVar4 = (**(code **)(*plVar1 + 0x50))();
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              FUN_00d3ecc0();
              plVar1 = local_40;
              local_80 = DAT_027ebc70;
              if (DAT_027ebc70 != 0) {
                FUN_00d50b00();
              }
              local_78 = '\x01';
              cVar4 = (**(code **)(*plVar1 + 0x50))();
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar4 != '\0') {
                cVar4 = FUN_00e34d40();
                if (cVar4 != '\0') {
                  FUN_013fb420();
                  pvVar7 = _pthread_getspecific(param_1);
                  if (pvVar7 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0132d610();
                  plVar1 = local_40;
                  if (local_38[0] == '\0') {
                    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    local_38[0] = '\0';
                  }
                  if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
                    FUN_00d50b20();
                  }
                  if (plVar1 != (longlong *)0x0) {
                    FUN_01c4f180(0,1,param_3,param_4,0);
                    FUN_00d50b20();
                  }
                }
                FUN_01c4f640();
              }
            }
            else if ((this[0x59] != 0) && (this[0x5a] != 0)) {
              plVar1 = *(longlong **)(this[0x5a] + 0x78);
              FUN_00e340b0();
              (**(code **)(*plVar1 + 0x928))();
              (**(code **)(*this + 0x620))();
            }
          }
          else {
            FUN_016bf0c0();
            *(undefined1 *)(this + 0x43) = 0;
          }
        }
        else {
          FUN_00d3ecf0();
          plVar1 = local_40;
          if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01e40eb0();
          plVar3 = local_40;
          pcVar8 = &local_50;
          if (local_38[0] != '\0') {
            pcVar8 = local_38;
          }
          local_50 = local_38[0];
          *pcVar8 = '\0';
          if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_01e40eb0();
            plVar3 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((plVar3 == this) && (iVar6 = (**(code **)(*plVar1 + 0xa88))(), -1 < iVar6)) {
              local_54 = iVar6;
              FUN_01c41970();
              lVar2 = this[0x40];
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(lVar2 + 0xc));
              FUN_00d50b20();
              if (local_54 < (int)local_60) {
                FUN_01c41970();
                lVar2 = this[0x40];
                if (lVar2 != 0) {
                  FUN_00d50b00();
                }
                local_60 = lVar2;
                uVar9 = FUN_01c82aa0();
                plVar3 = local_40;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    uVar9 = FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_f8 = 1;
                FUN_01c45890(uVar9,local_100);
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        (**(code **)(*this + 0x620))();
        *(undefined1 *)(this + 0x3a) = 1;
      }
    }
    else {
      *(undefined1 *)((longlong)this + 0x2e1) = 0;
    }
  }
  else {
    *(undefined1 *)((longlong)this + 0x2e1) = 1;
  }
  local_70 = *arg1;
  local_68 = '\0';
  FUN_00d530a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c522e0 (1674 bytes) — calculation

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong this;
  ulonglong uVar11;
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
  longlong *local_90;
  char local_88;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_0266ddf0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_00d500e0();
  lVar1 = *(longlong *)(this + 0x2a0);
  *(undefined8 **)(this + 0x2a0) = puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 400) = 1;
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  lVar1 = *(longlong *)(this + 0x1d8);
  *(longlong **)(this + 0x1d8) = plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(this + 0x22f) = 1;
  *(undefined1 *)(this + 0x1d0) = 1;
  uVar6 = _UNK_0241ea08;
  *(undefined8 *)(this + 0x1b8) = _DAT_0241ea00;
  *(undefined8 *)(this + 0x1c0) = uVar6;
  uVar5 = DAT_023dccf4._4_4_;
  uVar4 = (undefined4)DAT_023dccf4;
  uVar3 = DAT_023dccec._4_4_;
  *(undefined4 *)(this + 0x21c) = (undefined4)DAT_023dccec;
  *(undefined4 *)(this + 0x220) = uVar3;
  *(undefined4 *)(this + 0x224) = uVar4;
  *(undefined4 *)(this + 0x228) = uVar5;
  FUN_016bf040();
  lVar1 = *(longlong *)(this + 0x210);
  lVar10 = lVar1;
  if (lVar1 == local_30) goto LAB_01c52423;
  lVar10 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar10 = 0;
      goto LAB_01c523d8;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(this + 0x210);
    *(longlong *)(this + 0x210) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01c523d8:
    *(longlong *)(this + 0x210) = lVar10;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar10 = local_30;
  }
LAB_01c52423:
  if ((local_28 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025823b0;
  puVar9[4] = 0;
  *(undefined8 *)((longlong)puVar9 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar9 + 0x12) = 0;
  (*DAT_025823c8)();
  puVar7 = *(undefined8 **)(this + 0x150);
  if (puVar7 == puVar9) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(this + 0x150) = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_88 = 0;
  (**(code **)(*(longlong *)(this + 0x140) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (longlong *)(this + 0x140);
  FUN_00df2b40();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = DAT_027e3b30;
  if (DAT_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = DAT_027f0ae0;
  if (DAT_027f0ae0 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = DAT_02702300;
  if (DAT_02702300 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = DAT_027ebc50;
  if (DAT_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = -(ulonglong)(*(double *)(this + 0x1c0) == 0.0);
  dVar2 = (double)_log(SUB84(*(double *)(this + 0x1b8) /
                             (double)(~uVar11 & (ulonglong)*(double *)(this + 0x1c0) |
                                     DAT_0238fee8 & uVar11),0));
  *(float *)(this + 0x2a8) = (float)dVar2;
  return;
}




// ==================================================
// @01c4f640 (1582 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *arg1;
  longlong this;
  bool bVar8;
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
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar7 = *arg1;
  if (*(longlong *)(this + 0x2c8) != lVar7) {
    if (*(longlong *)(this + 0x2c8) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_128 = DAT_027295a0;
      if (DAT_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_120 = '\x01';
      local_a0 = 0;
      lVar7 = *(longlong *)(this + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_a0 = '\x01';
      local_a8 = lVar7;
      FUN_00d41040(&local_a8,&local_128);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (this != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_118 = DAT_027ebc70;
      if (DAT_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_80 = 0;
      lVar7 = *(longlong *)(this + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      plVar6 = &local_88;
      local_88 = lVar7;
      FUN_00d41040(plVar6,&local_118);
      pVar5 = (pthread_key_t)plVar6;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (this != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_013fb420();
      if (local_38 == 0) {
        bVar8 = false;
      }
      else {
        FUN_013fb420();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        bVar8 = local_138 != 0;
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar8) {
        local_f0 = '\0';
        local_f8 = 0;
        FUN_013fb3d0();
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(this + 0x2d0) != 0) {
        FUN_00d50b00();
        if (*(longlong *)(this + 0x2d0) != 0) {
          *(undefined8 *)(this + 0x2d0) = 0;
          FUN_00d50b20();
        }
        FUN_01e54790();
        FUN_00d50b20();
      }
      lVar7 = *arg1;
    }
    lVar1 = *(longlong *)(this + 0x2c8);
    lVar2 = lVar1;
    if (lVar1 != lVar7) {
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x2c8) = lVar7;
      lVar2 = lVar7;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(this + 0x2c8);
      }
    }
    if (lVar2 != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_e8 = DAT_027295a0;
      if (DAT_027295a0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_60 = 0;
      lVar7 = *(longlong *)(this + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar7;
      FUN_00d41430(&local_68,&local_e8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (this != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_d8 = DAT_027ebc70;
      if (DAT_027ebc70 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      local_40 = 0;
      lVar7 = *(longlong *)(this + 0x2c8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar7;
      FUN_00d41430(&local_48,&local_d8);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if (this != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_000161a0();
      *puVar4 = &DAT_0266e168;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      FUN_00d500e0();
      lVar7 = *(longlong *)(this + 0x2d0);
      *(undefined8 **)(this + 0x2d0) = puVar4;
      if (lVar7 != 0) {
        FUN_00d50b20();
        puVar4 = *(undefined8 **)(this + 0x2d0);
      }
      lVar7 = puVar4[0xe];
      if (lVar7 != this) {
        FUN_00d50b00();
        puVar4[0xe] = this;
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      lVar7 = *(longlong *)(this + 0x2d0);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      local_c8 = lVar7;
      FUN_01d83990();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01c4d670 (1225 bytes) — math_loop

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong this;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_d0;
  undefined1 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  int local_58;
  undefined8 local_54;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  longlong local_38;
  
  if (*(int *)(this + 0x1c8) == 1) {
    lVar7 = *(longlong *)(this + 0x1d8);
    if (lVar7 == 0) {
      local_78 = 0;
      lVar7 = 0;
    }
    else {
      local_78 = 0;
      uVar2 = FUN_00d50b00();
      local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar3 + 0x18))();
    lVar5 = *(longlong *)(this + 0x1d8);
    *(longlong **)(this + 0x1d8) = plVar3;
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    lVar5 = *(longlong *)(this + 0x200);
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0xc);
    local_38 = lVar7;
    if (0 < (int)*(uint *)(lVar5 + 0xc)) {
      uVar8 = 0;
      do {
        local_c0 = uVar8 + 1;
        if ((longlong)local_c0 < (longlong)(int)uVar4) {
          local_b8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 8 + uVar8 * 8);
        }
        else {
          local_b8 = 0;
        }
        uVar9 = FUN_01c82aa0();
        local_90 = 0;
        local_98 = CONCAT71(uStack_47,local_48);
        if (local_40 == '\0') {
          if (local_98 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = '\x01';
        FUN_01c4de00(uVar9,&local_98);
        plVar3 = local_70;
        if (local_68[0] == '\0') {
          if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
             (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68[0] = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
          FUN_00d50b20();
        }
        if (plVar3 == (longlong *)0x0) {
          plVar3 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *plVar3 = (longlong)&DAT_0266d110;
          plVar3[2] = (longlong)&DAT_0266da38;
          FUN_00d500e0();
        }
        else {
          FUN_01c82aa0();
          plVar1 = (longlong *)CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_68[0] = '\0';
          local_70 = plVar1;
          FUN_00ca13a0();
          if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
        }
        local_d0 = local_b8;
        local_c8 = 0;
        FUN_01c4c1c0(param_1,param_2,&local_d0,uVar8 & 0xffffffff);
        local_a8 = '\0';
        local_b0 = plVar3;
        uVar9 = FUN_01c82aa0();
        local_88 = local_70;
        local_80 = 0;
        if (local_68[0] == '\0') {
          if (local_70 != (longlong *)0x0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_68[0] = '\0';
        }
        local_80 = '\x01';
        FUN_01c4deb0(uVar9,&local_88);
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = *(longlong *)(this + 0x200);
        uVar4 = (ulonglong)*(int *)(lVar5 + 0xc);
        uVar8 = local_c0;
      } while ((longlong)local_c0 < (longlong)uVar4);
    }
    lVar7 = local_38;
    FUN_01c464b0();
  }
  else {
    lVar7 = *(longlong *)(this + 0x1d8);
    if (lVar7 == 0) {
      return;
    }
    local_78 = 0;
    uVar2 = FUN_00d50b00();
    local_78 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  if (lVar7 == 0) {
    return;
  }
  FUN_00ca1380();
  plVar3 = local_70;
  pcVar6 = &local_48;
  if (local_68[0] != '\0') {
    pcVar6 = local_68;
  }
  local_48 = local_68[0];
  *pcVar6 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == '\0') {
    if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
    FUN_00d50b00();
  }
  else if (plVar3 == (longlong *)0x0) goto LAB_01c4db45;
  local_68[0] = '\0';
  local_70 = (longlong *)0x0;
  local_60 = plVar3;
  local_54 = 0;
  for (lVar7 = 0; local_58 = (int)lVar7, local_58 < *(int *)((longlong)plVar3 + 0xc);
      lVar7 = lVar7 + 1) {
    local_70 = *(longlong **)(plVar3[2] + lVar7 * 8);
    (**(code **)(*local_70 + 0x478))();
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_01c4db45:
  FUN_00ca1340();
  if ((char)local_78 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c508b0 (1118 bytes) — calculation

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *arg1;
  undefined8 *this;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined8 local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0266c9c0;
  puVar2[2] = &DAT_0266cd48;
  puVar2[3] = 0;
  FUN_00d500e0();
  lVar1 = *arg1;
  puVar2[3] = lVar1;
  if (*(longlong *)(lVar1 + 0x1a8) == 0) {
    if (*(longlong *)(lVar1 + 0x198) == 0) goto LAB_01c50af2;
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x198);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(longlong *)(puVar2[3] + 0x1a8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar4 = FUN_00e8b990();
    if (lVar4 == 0) {
      local_50 = 0;
      lVar4 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    local_c0 = 0;
    local_b8 = '\0';
    local_38 = puVar2;
    FUN_000be210();
    FUN_00e86210();
    local_b0 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00c841b0();
    local_70 = local_48;
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    FUN_00cbad30(&local_70,&local_c0,0x20);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = puVar2 + 2;
    FUN_002771e0();
    FUN_00e86210();
    local_80 = DAT_026dc288;
    if (DAT_026dc288 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00c841b0();
    puVar2 = local_38;
    local_60 = local_48;
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    FUN_00cbad30(&local_60,&local_90,0x20);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    *this = puVar2;
    *(undefined1 *)(this + 1) = 1;
    if ((char)local_50 == '\0') {
      return;
    }
    FUN_00d50b20();
    return;
  }
LAB_01c50af2:
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  FUN_00d50b20();
  return;
}




// ==================================================
// @01c51df0 (778 bytes) — calculation

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *arg1;
  longlong this;
  longlong lVar5;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar5 = *(longlong *)(this + 0x178);
  lVar1 = *arg1;
  if (lVar5 == lVar1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(this + 0x178) = lVar1;
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong **)(this + 0x180) == (longlong *)0x0) goto LAB_01c51f1e;
  (**(code **)(**(longlong **)(this + 0x180) + 0x3a0))();
  plVar3 = local_38;
  plVar2 = *(longlong **)(this + 0x170);
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == plVar2) {
LAB_01c51f0d:
    lVar5 = *(longlong *)(this + 0x180);
  }
  else {
    (**(code **)(**(longlong **)(this + 0x180) + 0x3a0))();
    plVar2 = local_38;
    local_50 = 0;
    local_58 = *(longlong *)(this + 0x180);
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x3e0))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = 0;
    if (*(longlong *)(this + 0x180) != 0) {
      *(undefined8 *)(this + 0x180) = 0;
      FUN_00d50b20();
      goto LAB_01c51f0d;
    }
  }
  if (lVar5 != 0) {
    return;
  }
LAB_01c51f1e:
  if (*(longlong *)(this + 0x170) != 0) {
    FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    FUN_01cb4790();
    (**(code **)(*local_98 + 0x370))();
    local_48 = local_68;
    local_40 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
      lVar5 = *(longlong *)(this + 0x188);
    }
    else {
      local_60 = '\0';
      lVar5 = *(longlong *)(this + 0x188);
    }
    local_40 = '\x01';
    if (lVar5 != 0) {
      local_40 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_01a8bca0(1,uVar4 >> 0x20,&local_48,&local_88);
    plVar2 = local_38;
    if (local_30 == '\0') {
      if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
         (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_78 = plVar2;
    local_70 = '\0';
    (**(code **)(**(longlong **)(this + 0x170) + 0x3d8))();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(this + 0x180);
    if (plVar3 != plVar2) {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(this + 0x180) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c4f180 (765 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t in_ECX;
  longlong *arg1;
  longlong this;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_70 [8];
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  local_60 = *arg1;
  local_58 = '\0';
  FUN_016cbba0();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(this + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar1;
  FUN_016cbba0();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea7c0(param_1);
  FUN_01c67800();
  if ((param_2 == '\0') && (*(int *)(this + 0x1c8) != 1)) {
    FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = 1;
    uVar5 = FUN_00e7bdb0();
    FUN_01c45410(uVar5,local_70);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar7 = 0;
    lVar6 = lVar2;
    uVar5 = FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        uVar5 = FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = 1;
    FUN_01c44700(uVar5,local_80,param_3,param_4,lVar6,uVar7);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c62c70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01c4ae30 (706 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *this;
  longlong local_30;
  char local_28;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b6618;
    if (DAT_028b6618 == 0) {
      FUN_01cfcdc0(DAT_023b3888,_DAT_023b294c,DAT_023945a0,DAT_02394214);
      lVar2 = DAT_028b6618;
      if (DAT_028b6618 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6618 != 0;
        DAT_028b6618 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6620 == '\0')) {
        DAT_028b6620 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6618;
      *(undefined1 *)(this + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  else {
    lVar2 = DAT_028b6628;
    if (DAT_028b6628 == 0) {
      FUN_01c4b180();
      if (DAT_028b6628 != local_30) {
        lVar2 = DAT_028b6628;
        if (local_28 == '\0') {
          if (local_30 != 0) {
            FUN_00d50b00();
            lVar2 = DAT_028b6628;
          }
        }
        else {
          local_28 = '\0';
        }
        DAT_028b6628 = local_30;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(*(float *)(DAT_028b6628 + 0x10) * DAT_02390120,
                   *(float *)(DAT_028b6628 + 0x14) * DAT_02390120,
                   DAT_02390120 * *(float *)(DAT_028b6628 + 0x18),
                   *(undefined4 *)(DAT_028b6628 + 0x1c));
      lVar2 = DAT_028b6628;
      if (DAT_028b6628 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6628 != 0;
        DAT_028b6628 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6630 == '\0')) {
        DAT_028b6630 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6628;
      *(undefined1 *)(this + 1) = 0;
      goto joined_r0x01c4b0d9;
    }
  }
  *(undefined1 *)(this + 1) = 0;
joined_r0x01c4b0d9:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this = lVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01c51220 (656 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *arg1;
  longlong this;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x1a8) == *arg1) {
    return;
  }
  if (*(longlong *)(this + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(longlong *)(this + 0x148) != 0) {
    *(undefined8 *)(this + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  lVar3 = *(longlong *)(this + 0x1a8);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x1a8) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*arg1 != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(longlong *)(this + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c51304;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(this + 0x148);
        *(longlong *)(this + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c51304:
        *(longlong *)(this + 0x148) = lVar3;
      }
      param_1 = (pthread_key_t)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      if (*(longlong *)(this + 0x198) != 0) {
        *(undefined8 *)(this + 0x198) = 0;
        FUN_00d50b20();
      }
      if (*(longlong *)(this + 0x1a0) != 0) {
        *(undefined8 *)(this + 0x1a0) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c51471;
    }
  }
  FUN_01c51000();
LAB_01c51471:
  FUN_01c4df60();
  FUN_016bf0c0();
  *(undefined1 *)(this + 0x218) = 0;
  FUN_01c4e390();
  return;
}




// ==================================================
// @01c50580 (617 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *arg1;
  longlong this;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x198) == *arg1) {
    return;
  }
  if (*(longlong *)(this + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(longlong *)(this + 0x148) != 0) {
    *(undefined8 *)(this + 0x148) = 0;
    FUN_00d50b20();
  }
  lVar1 = *arg1;
  lVar3 = *(longlong *)(this + 0x198);
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(this + 0x198) = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (*arg1 != 0) {
    FUN_00d50b00();
    FUN_01c508b0();
    lVar1 = *(longlong *)(this + 0x148);
    lVar3 = lVar1;
    if (lVar1 != local_38) {
      lVar3 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar3 = 0;
          goto LAB_01c50664;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(this + 0x148);
        *(longlong *)(this + 0x148) = local_38;
      }
      else {
        local_30 = '\0';
LAB_01c50664:
        *(longlong *)(this + 0x148) = lVar3;
      }
      param_1 = (pthread_key_t)lVar1;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar3 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if (*arg1 != 0) {
      FUN_01c4e0b0();
      if (*(longlong *)(this + 0x1a8) != 0) {
        *(undefined8 *)(this + 0x1a8) = 0;
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01c51000();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c507c0;
    }
  }
  FUN_01c51000();
LAB_01c507c0:
  FUN_01c4df60();
  FUN_01c4e390();
  return;
}




// ==================================================
// @01c4e0b0 (564 bytes) — calculation

{
  longlong lVar1;
  void *pvVar2;
  int unaff_ESI;
  longlong *this;
  longlong local_38;
  char local_30;
  
  if ((int)this[0x39] != unaff_ESI) {
    if ((int)this[0x4d] != 0) {
      *(undefined4 *)(this + 0x4d) = 0;
      (**(code **)(*(longlong *)this[0x2b] + 0x478))();
      if (this[0x2b] != 0) {
        this[0x2b] = 0;
        FUN_00d50b20();
      }
      if (this[0x4e] != 0) {
        this[0x4e] = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    *(int *)(this + 0x39) = unaff_ESI;
    if (this[0x31] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = this[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016efaf0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c4df60();
    FUN_016bf0c0();
    *(undefined1 *)(this + 0x43) = 0;
    FUN_01c4e390();
    if ((longlong *)this[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)this[0x46] + 0x40))();
    }
    FUN_01e42030();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*this + 0x7b0))();
      if (local_30 == '\0') {
        if (local_38 == 0) goto LAB_01c4e28d;
        FUN_00d50b00();
      }
      else if (local_38 == 0) goto LAB_01c4e28d;
      FUN_01cf9ad0();
      FUN_00d50b20();
    }
  }
LAB_01c4e28d:
  if (this[0x2c] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = this[0x2c];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c8da90();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c50170 (560 bytes) — calculation

{
  longlong lVar1;
  longlong lVar2;
  longlong *arg1;
  longlong this;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = *arg1;
  if (*(longlong *)(this + 0x170) == lVar2) {
    return;
  }
  if (*(longlong *)(this + 0x170) == 0) {
    lVar3 = 0;
    lVar1 = lVar3;
    if (lVar2 == 0) goto joined_r0x01c502bd;
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_60 = 0;
    lVar2 = *(longlong *)(this + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_60 = '\x01';
    local_68 = lVar2;
    FUN_00d41040(&local_68,&local_98);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *arg1;
    lVar3 = *(longlong *)(this + 0x170);
    lVar1 = lVar3;
    if (lVar3 == lVar2) goto joined_r0x01c502bd;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(this + 0x170) = lVar2;
  lVar1 = lVar2;
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar1 = *(longlong *)(this + 0x170);
  }
joined_r0x01c502bd:
  if (lVar1 != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = DAT_027ebc60;
    if (DAT_027ebc60 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_40 = 0;
    lVar2 = *(longlong *)(this + 0x170);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar2;
    FUN_00d41430(&local_48,&local_88);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01c4b180 (557 bytes) — calculation

{
  bool bVar1;
  longlong lVar2;
  int unaff_ESI;
  longlong *this;
  longlong local_28;
  char local_20;
  
  if (unaff_ESI == 1) {
    lVar2 = DAT_028b65f8;
    if (DAT_028b65f8 == 0) {
      FUN_01cfcdc0(DAT_0241f36c,DAT_023b3888,DAT_02394250,DAT_02394214);
      lVar2 = DAT_028b65f8;
      if (DAT_028b65f8 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028b65f8 != 0;
        DAT_028b65f8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6600 == '\0')) {
        DAT_028b6600 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b65f8;
      *(undefined1 *)(this + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  else {
    lVar2 = DAT_028b6608;
    if (DAT_028b6608 == 0) {
      FUN_01cfc9f0(DAT_02390120,DAT_0239011c);
      lVar2 = DAT_028b6608;
      if (DAT_028b6608 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar2 = local_28;
        }
        bVar1 = DAT_028b6608 != 0;
        DAT_028b6608 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_28;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6610 == '\0')) {
        DAT_028b6610 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_28;
      }
      if ((local_20 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_028b6608;
      *(undefined1 *)(this + 1) = 0;
      goto joined_r0x01c4b383;
    }
  }
  *(undefined1 *)(this + 1) = 0;
joined_r0x01c4b383:
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00d50b00();
  }
  *this = lVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01c51a50 (534 bytes) — calculation

{
  longlong lVar1;
  double dVar2;
  void *pvVar3;
  longlong *this;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  
  if (*(char *)((longlong)this + 0x2e1) == '\0') {
    if (*(char *)((longlong)this + 0x2e2) == '\0') {
      dVar5 = DAT_02395720;
      if (this[0x31] != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar1 = this[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_016cd860();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      dVar6 = _DAT_0241eeb8;
      if (_DAT_0241eeb8 <= DAT_0241ea50 * dVar5) {
        dVar6 = DAT_0241ea50 * dVar5;
      }
      dVar2 = DAT_0241ea58;
      if (dVar5 * DAT_023b3bc0 <= DAT_0241ea58) {
        dVar2 = dVar5 * DAT_023b3bc0;
      }
      if (((double)this[0x38] != dVar6) || (NAN((double)this[0x38]) || NAN(dVar6))) {
        this[0x38] = (longlong)dVar6;
        dVar5 = (double)_log((double)this[0x37] /
                             (double)(~-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6 |
                                     DAT_0238fee8 & -(ulonglong)(dVar6 == 0.0)));
        *(float *)(this + 0x55) = (float)dVar5;
        (**(code **)(*this + 0x620))();
        *(undefined1 *)(this + 0x3a) = 1;
        if ((longlong *)this[0x46] != (longlong *)0x0) {
          (**(code **)(*(longlong *)this[0x46] + 0x40))();
        }
      }
      if (((double)this[0x37] != dVar2) || (NAN((double)this[0x37]) || NAN(dVar2))) {
        this[0x37] = (longlong)dVar2;
        uVar4 = -(ulonglong)((double)this[0x38] == 0.0);
        dVar5 = (double)_log(dVar2 / (double)(~uVar4 & this[0x38] | DAT_0238fee8 & uVar4));
        *(float *)(this + 0x55) = (float)dVar5;
        (**(code **)(*this + 0x620))();
        *(undefined1 *)(this + 0x3a) = 1;
        if ((longlong *)this[0x46] != (longlong *)0x0) {
          (**(code **)(*(longlong *)this[0x46] + 0x40))();
        }
      }
    }
    else {
      *(undefined1 *)((longlong)this + 0x2e2) = 0;
    }
    if ((longlong *)this[0x36] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01c51a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this[0x36] + 0x620))();
      return;
    }
  }
  else {
    *(undefined1 *)((longlong)this + 0x2e1) = 0;
  }
  return;
}




// ==================================================
// @01c4a8b0 (518 bytes) — calculation

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  longlong local_20;
  
  if ((DAT_027ecad0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027eca20 = FUN_00015ff0();
    _DAT_027eca08 = "MUAdvancedTempoDetectionDialog";
    _DAT_027eca10 = 0x80;
    _DAT_027eca18 = FUN_01c7f5d0;
    _DAT_027eca28 = 0;
    uRam00000000027eca30 = 0;
    _DAT_027eca38 = 0;
    _DAT_027ecab0 = 0;
    uRam00000000027ecab8 = 0;
    _DAT_027ecac0 = 0;
    DAT_027ecac2 = 1;
    _DAT_027eca40 = 0;
    uRam00000000027eca48 = 0;
    _DAT_027eca50 = 0;
    uRam00000000027eca58 = 0;
    _DAT_027eca60 = 0;
    uRam00000000027eca68 = 0;
    _DAT_027eca70 = 0;
    uRam00000000027eca78 = 0;
    _DAT_027eca80 = 0;
    uRam00000000027eca88 = 0;
    _DAT_027eca90 = 0;
    uRam00000000027eca98 = 0;
    _DAT_027ecaa0 = 0;
    uRam00000000027ecaa8 = 0;
    DAT_027ecacb = 0;
    _DAT_027ecac3 = 0;
    ___cxa_guard_release();
  }
  if (DAT_027ecac3 == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_01c7f940();
    FUN_01c7fc70();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01c7f3f0();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}




// ==================================================
// @01c52e30 (508 bytes) — calculation

{
  longlong this;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(int *)(this + 0x268) != 0) {
    *(undefined4 *)(this + 0x268) = 0;
    (**(code **)(**(longlong **)(this + 0x158) + 0x478))();
    if (*(longlong *)(this + 0x158) != 0) {
      *(undefined8 *)(this + 0x158) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x270) != 0) {
      *(undefined8 *)(this + 0x270) = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    FUN_01c4d670();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = 0;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41040(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x150) != 0) {
    FUN_00df2a30();
  }
  if (*(longlong *)(this + 0x148) != 0) {
    *(undefined8 *)(this + 0x148) = 0;
    FUN_00d50b20();
  }
  if ((*(longlong *)(this + 0x188) != 0) &&
     (FUN_01c51580(), *(longlong *)(this + 0x188) != 0)) {
    *(undefined8 *)(this + 0x188) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(this + 0x160) != 0) {
    local_40 = '\0';
    local_48 = 0;
    FUN_01c8dab0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(this + 0x160) != 0) {
      *(undefined8 *)(this + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  FUN_01e3b870();
  return;
}



