// ===== MUChord — Annotated small functions =====
// 9 readable functions

// ==================================================
// @01a6cf00 (2239 bytes) — math_loop

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong **pplVar8;
  char *pcVar9;
  longlong *plVar10;
  longlong *this;
  longlong *plVar11;
  bool bVar12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 uVar13;
  float fVar14;
  float extraout_XMM0_Db;
  undefined8 uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar16 [16];
  float extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar17;
  float in_XMM1_Dd;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 local_148;
  longlong *local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  ulonglong local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  undefined1 local_b8 [16];
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  local_d8 = FUN_00e7bdb0();
  local_148 = FUN_00e7bdb0();
  local_b8._0_8_ = FUN_01e436c0();
  local_b8._8_8_ = extraout_XMM0_Qb;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    FUN_01d3abf0();
    local_b8._0_8_ = FUN_01e466c0();
    local_b8._8_8_ = extraout_XMM0_Qb_00;
    FUN_01a66e80();
    plVar1 = local_90;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*this + 0xa70))();
    FUN_012523c0(&local_d8,0,&local_148,0);
    plVar11 = local_60;
    pcVar9 = &local_c8;
    if (local_58[0] != '\0') {
      pcVar9 = local_58;
    }
    local_c8 = local_58[0];
    *pcVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)0x0;
      uVar13 = 0;
    }
    else {
      uVar13 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
      if (local_c8 == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_88 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0x6f8))();
    plVar10 = local_60;
    if (local_60 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      uVar15 = 0;
    }
    else {
      uVar15 = CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    cVar3 = (**(code **)(*this + 0x9d0))();
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*this + 0x9d8))();
      local_d8 = uVar6;
      local_148 = (**(code **)(*this + 0x9e0))();
      if (uVar6 >> 0x20 != 0) {
        auVar20._0_8_ = (**(code **)(*this + 0xa68))();
        auVar20._8_8_ = extraout_XMM0_Qb_01;
        auVar16._4_12_ = auVar20._4_12_;
        auVar16._0_4_ = (float)auVar20._0_8_ + DAT_02390124;
        auVar20 = blendps(auVar16,_DAT_023b1620,0xe);
        (**(code **)(*this + 0x6f8))(auVar20._0_8_);
        plVar10 = local_60;
        if (local_60 == (longlong *)0x0) {
          plVar10 = (longlong *)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
          if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar13 = 0;
        plVar11 = (longlong *)0x0;
        goto LAB_01a6d196;
      }
    }
    uVar13 = 0;
    plVar11 = (longlong *)0x0;
    uVar15 = 0;
    plVar10 = (longlong *)0x0;
  }
LAB_01a6d196:
  local_d0 = uVar15;
  local_70 = plVar11;
  local_68 = plVar10;
  (**(code **)(*this + 0x640))();
  plVar10 = local_60;
  local_138 = DAT_027e2710;
  if (DAT_027e2710 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_128 = 0;
  local_120 = '\0';
  (**(code **)(*plVar10 + 0x5d0))(0);
  plVar10 = local_68;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 >> 0x20 != 0) {
    local_b8._0_8_ = (**(code **)(*this + 0xa68))();
    local_b8._8_8_ = extraout_XMM0_Qb_02;
  }
  FUN_01e3f820();
  fVar14 = (float)FUN_01e436c0();
  if ((float)local_b8._0_4_ < fVar14) {
    local_b8._0_8_ = FUN_01e436c0();
    local_b8._8_8_ = extraout_XMM0_Qb_03;
  }
  if (plVar10 == (longlong *)0x0) goto LAB_01a6d796;
  iVar4 = -1;
  local_38 = uVar13;
  if (plVar11 == (longlong *)0x0) {
LAB_01a6d693:
    local_78 = 0;
    FUN_00d50b00();
    bVar12 = false;
  }
  else {
    FUN_01d5e2b0();
    plVar1 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a6d311;
      }
      goto LAB_01a6d693;
    }
    if (local_60 == (longlong *)0x0) goto LAB_01a6d693;
LAB_01a6d311:
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_140 = plVar1;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar12 = false;
    while( true ) {
      lVar7 = (longlong)(int)local_48;
      iVar4 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar4);
      if (*(int *)((longlong)local_50 + 0xc) <= iVar4) break;
      local_60 = *(longlong **)(local_50[2] + 8 + lVar7 * 8);
      uVar15 = FUN_01d66da0();
      lVar7 = DAT_027e2688;
      if (DAT_027e2688 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_118 = lVar7;
      local_110 = '\x01';
      FUN_000175c0(uVar15,&local_118);
      plVar10 = local_90;
      if ((DAT_02794b40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_02794a90 = FUN_00d4fe50();
        _DAT_02794a78 = "MUChord";
        _DAT_02794a80 = 0x20;
        _DAT_02794a88 = FUN_01113770;
        _DAT_02794a98 = 0;
        uRam0000000002794aa0 = 0;
        _DAT_02794aa8 = 0;
        _DAT_02794b20 = 0;
        uRam0000000002794b28 = 0;
        _DAT_02794b30 = 0;
        DAT_02794b32 = 2;
        _DAT_02794ab0 = 0;
        uRam0000000002794ab8 = 0;
        _DAT_02794ac0 = 0;
        uRam0000000002794ac8 = 0;
        _DAT_02794ad0 = 0;
        uRam0000000002794ad8 = 0;
        _DAT_02794ae0 = 0;
        uRam0000000002794ae8 = 0;
        _DAT_02794af0 = 0;
        uRam0000000002794af8 = 0;
        _DAT_02794b00 = 0;
        uRam0000000002794b08 = 0;
        _DAT_02794b10 = 0;
        uRam0000000002794b18 = 0;
        DAT_02794b3b = 0;
        _DAT_02794b33 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar10 != (longlong *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar10 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        local_108 = local_70;
        local_100 = '\0';
        cVar3 = (**(code **)(*plVar10 + 0x50))();
        if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar4 = local_40;
        iVar2 = (int)local_48;
        FUN_00d50b20();
        if (cVar3 != '\0') {
          iVar4 = iVar4 + iVar2;
          goto LAB_01a6d60b;
        }
      }
      cVar3 = FUN_01d65e30();
      if (cVar3 != '\0') {
        bVar12 = true;
      }
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar4 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar4 = 0;
        }
        local_48 = CONCAT44(iVar4,(int)local_48);
      }
    }
    iVar4 = -1;
LAB_01a6d60b:
    FUN_002a0a30();
    FUN_00d50b20();
    plVar10 = local_68;
    plVar11 = local_70;
    if (bVar12) {
      (**(code **)(*this + 0x640))();
      fVar14 = (float)(**(code **)(*local_60 + 0x5c8))();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_b8._0_4_ = local_b8._0_4_ - fVar14;
      goto LAB_01a6d693;
    }
    if (this != (longlong *)0x0) goto LAB_01a6d693;
    bVar12 = true;
  }
  local_78 = '\x01';
  local_80 = this;
  FUN_01d62b10();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  if (!bVar12) {
    FUN_00d50b00();
  }
  fVar14 = (fVar17 - extraout_XMM0_Db) * DAT_0239011c;
  auVar18._0_4_ = _DAT_023945e0 & (uint)fVar14;
  auVar18._4_4_ = _UNK_023945e4 & (uint)(fVar17 - extraout_XMM0_Db);
  auVar18._8_4_ = _UNK_023945e8 & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar18._12_4_ = _UNK_023945ec & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar19._4_12_ = SUB1612(auVar18 | _DAT_023945f0,4);
  auVar19._0_4_ = SUB164(auVar18 | _DAT_023945f0,0) + fVar14;
  auVar20 = roundss(auVar19,auVar19,0xb);
  auVar20 = insertps(local_b8,auVar20,0x10);
  local_98 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  local_a0 = this;
  FUN_01d5ef60(auVar20._0_8_,iVar4);
  uVar13 = local_38;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
LAB_01a6d796:
  if (((char)uVar13 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a763e0 (1799 bytes) — calculation

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *arg1;
  longlong *this;
  longlong *plVar5;
  float fVar6;
  ulonglong uVar7;
  float fVar15;
  double dVar8;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 uVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 in_XMM4 [16];
  float fVar20;
  undefined1 in_XMM5 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 local_88 [16];
  float local_78;
  undefined4 local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float fStack_50;
  float fStack_4c;
  longlong *local_48;
  undefined1 local_40;
  longlong *local_38;
  char local_30;
  
  fVar19 = (float)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined4)param_2;
  (**(code **)(*this + 0x640))();
  plVar5 = local_38;
  if (local_38 == (longlong *)0x0) {
    bVar3 = true;
    plVar5 = (longlong *)0x0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_30 == '\0') || (bVar3 = false, local_38 == (longlong *)0x0)) goto LAB_01a76441;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
LAB_01a76441:
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3f0))(8,0x11,1,1);
  FUN_01e3f820();
  uVar7 = (**(code **)(*plVar5 + 0x3d0))();
  fVar15 = (float)(uVar7 >> 0x20);
  local_88._8_4_ = uVar17;
  local_88._0_8_ = uVar7;
  local_88._12_4_ = fVar19;
  if ((int)this[0x40] == 1) {
    uVar7 = FUN_00d05530();
    fVar15 = (float)(uVar7 >> 0x20);
    uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    local_88._12_4_ = fVar19;
    local_88._8_4_ = uVar17;
    local_88._0_8_ = uVar7;
    uVar22 = extraout_XMM0_Qb_00;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  else {
    uVar16 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    uVar22 = extraout_XMM0_Qb;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  local_78 = fStack_64;
  dVar8 = (double)FUN_00e7d6f0();
  fVar19 = fStack_64;
  uVar17 = local_68;
  auVar21._4_4_ = fStack_64;
  auVar21._0_4_ = local_68;
  auVar21._8_4_ = uStack_60;
  auVar21._12_4_ = uStack_5c;
  uVar4 = extractps(auVar21,0);
  fVar18 = (float)uVar4;
  local_68 = SUB84(dVar8,0);
  fStack_64 = (float)((ulonglong)dVar8 >> 0x20);
  if (*(float *)(this + 0x23) < *(float *)((longlong)this + 0x114) ||
      *(float *)(this + 0x23) == *(float *)((longlong)this + 0x114)) {
    *(float *)(this + 0x3c) = fVar18;
    if (*(char *)((longlong)this + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this[0x3d];
      if (dVar8 < (double)this[0x3f]) {
        dVar8 = dVar8 / (double)this[0x3f];
        fVar18 = (DAT_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar12._4_12_ = auVar21._4_12_;
        auVar12._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar12,auVar12,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (longlong *)*arg1;
        FUN_01a76200(1,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (longlong *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM4,ZEXT416((uint)(DAT_0239011c * local_78)),9);
      fVar6 = auVar21._0_4_;
      _fStack_50 = CONCAT44(fVar6,local_88._8_4_);
      dVar2 = dVar8 - (double)this[0x3d];
      fVar18 = SUB84(dVar2,0);
      dVar1 = (double)this[0x3f];
      if (dVar2 < dVar1) {
        fVar18 = (DAT_02390124 - (float)(dVar2 / dVar1) * (float)(dVar2 / dVar1)) *
                 *(float *)(this + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar10._4_12_ = auVar21._4_12_;
        auVar10._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar10,auVar10,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        uVar7 = (ulonglong)(uint)fVar6;
        local_38 = (longlong *)*arg1;
        FUN_01a76200(1,&local_58,SUB84(dVar1,0),dVar8,uVar7);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        uVar7 = (ulonglong)(uint)fVar6;
        local_48 = (longlong *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar18,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44((local_78 + fVar15) - fVar6,(undefined4)local_58);
      dVar8 = dVar8 - (double)this[0x3e];
      if (dVar8 < (double)this[0x3f]) {
        dVar8 = dVar8 / (double)this[0x3f];
        fVar19 = (DAT_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((longlong)this + 0x1dc);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar19) | _DAT_023945f0;
        auVar14._4_12_ = auVar21._4_12_;
        auVar14._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar14,auVar14,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        local_38 = (longlong *)*arg1;
        FUN_01a76200(1,&local_58);
      }
      else if ((int)this[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (longlong *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  else {
    *(float *)(this + 0x3c) = local_78;
    if (*(char *)((longlong)this + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this[0x3d];
      if (dVar8 < (double)this[0x3f]) {
        dVar8 = dVar8 / (double)this[0x3f];
        fVar18 = (DAT_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar18) | _DAT_023945f0;
        auVar11._4_12_ = auVar21._4_12_;
        auVar11._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar11,auVar11,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (longlong *)*arg1;
        FUN_01a76200(0,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (longlong *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM5,ZEXT416((uint)(DAT_0239011c * fVar18)),9);
      fVar20 = auVar21._0_4_;
      _fStack_50 = CONCAT44(local_88._12_4_,fVar20);
      dVar1 = dVar8 - (double)this[0x3d];
      fVar6 = SUB84(dVar1,0);
      if (dVar1 < (double)this[0x3f]) {
        fVar6 = (float)(dVar1 / (double)this[0x3f]);
        fVar6 = (DAT_02390124 - fVar6 * fVar6) * *(float *)(this + 0x3b);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar6) | _DAT_023945f0;
        auVar9._4_12_ = auVar21._4_12_;
        auVar9._0_4_ = auVar21._0_4_ + fVar6;
        roundss(auVar9,auVar9,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        local_78 = fVar18;
        local_38 = (longlong *)*arg1;
        FUN_01a76200(0,&local_58);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_78 = fVar18;
        local_48 = (longlong *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar6,0,dVar8,uVar7,uVar22,fVar20,uVar16);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44(local_58._4_4_,((float)uVar7 + fVar18) - fVar20);
      dVar8 = dVar8 - (double)this[0x3e];
      if (dVar8 < (double)this[0x3f]) {
        dVar8 = dVar8 / (double)this[0x3f];
        fVar19 = (DAT_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((longlong)this + 0x1dc);
        auVar21 = ZEXT416(_DAT_023945e0 & (uint)fVar19) | _DAT_023945f0;
        auVar13._4_12_ = auVar21._4_12_;
        auVar13._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar13,auVar13,0xb);
      }
      if ((int)this[0x40] == 0) {
        local_30 = '\0';
        local_38 = (longlong *)*arg1;
        FUN_01a76200(0,&local_58);
      }
      else if ((int)this[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (longlong *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a6c2e0 (1541 bytes) — calculation

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *arg1;
  undefined8 *this;
  undefined8 *local_98;
  char local_90;
  undefined4 local_84;
  longlong local_80;
  char local_78;
  ulonglong local_70;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_84 = param_3;
  local_70 = param_2;
  (**(code **)(*arg1 + 0x988))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6c350;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_01a6c350:
    if (*(int *)((longlong)local_48 + 0xc) == 0) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (local_70 >> 0x20 == 0) {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = 0;
        FUN_01252670(0,0,0,0);
        pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = local_70;
        FUN_012521f0(local_70,0,0,0);
        pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01787610();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_48 + 0x370))();
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cc80();
      FUN_017873f0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cd50();
      FUN_01787450();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6ce30();
      FUN_01787510();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = '\0';
      local_98 = puVar3;
      (**(code **)(*local_48 + 0x388))(param_1,local_70,&local_98,(longlong)arg1 + 0x204);
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_50 != (longlong *)0x0) && ((char)local_84 != '\0')) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *this = puVar3;
      *(undefined1 *)(this + 1) = 1;
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((bVar1) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    return this;
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return this;
}




// ==================================================
// @01a75080 (1427 bytes) — calculation

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined7 uVar5;
  undefined8 uVar4;
  longlong arg1;
  undefined8 *this;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined *local_c8;
  char local_c0;
  undefined4 local_78;
  undefined *local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  
  uVar5 = (undefined7)((ulonglong)this >> 8);
  local_34 = param_2;
  if (*(int *)(arg1 + 0x1d0) == 1) {
    FUN_01cfbee0(_DAT_023b294c,_DAT_023b294c,_DAT_023b294c);
    local_48 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390128,DAT_02390128,DAT_02390128);
    local_40 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_40 = (undefined *)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(DAT_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (undefined *)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  else {
    if (*(int *)(arg1 + 0x1d0) != 0) {
      puVar7 = (undefined *)0x0;
      local_d0 = 0;
      puVar6 = (undefined *)0x0;
      local_50 = 0;
      local_40 = (undefined *)0x0;
      local_58 = 0;
      local_48 = (undefined *)0x0;
      bVar1 = false;
      goto LAB_01a7549f;
    }
    FUN_01cfbee0(0,DAT_02394214,0);
    local_48 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_48 = (undefined *)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(0,DAT_02390124,0);
    local_40 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      local_40 = (undefined *)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((ulonglong)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(DAT_02390124,DAT_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(DAT_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (undefined *)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  bVar1 = false;
  puVar7 = (undefined *)0x0;
  param_2 = local_34;
LAB_01a7549f:
  local_34 = 0;
  if ((char)param_2 == '\0') {
    local_34 = DAT_02394290;
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar3 + 0x18))();
  local_d8 = 0;
  local_d4 = 0x3f19999a;
  local_e8 = local_40;
  local_e0 = puVar6;
  FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_e0);
  local_78 = 0x3f4ccccd;
  local_c8 = &DAT_02628b00;
  local_68 = 0;
  if (puVar7 != (undefined *)0x0) {
    FUN_00d50b00();
  }
  local_68 = 1;
  local_c8 = &DAT_02645f38;
  local_60 = 0x3f800000;
  local_70 = puVar7;
  FUN_01f7ba60(local_34,&local_c8);
  FUN_019fe220();
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar1) && (puVar7 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (puVar6 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_40 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01a759a0 (1227 bytes) — math_loop

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong arg1;
  undefined8 *this;
  int iVar8;
  char cVar9;
  bool bVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 in_register_00001244 [12];
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  undefined4 local_6c;
  longlong *local_68;
  char local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  local_6c = param_1;
  iVar3 = FUN_00e7d780();
  iVar4 = FUN_00e7d780();
  if ((DAT_028b2ff8 == (longlong *)0x0) || (uVar11 = extraout_XMM0_Qa, DAT_028b3001 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2ff8 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028b2ff8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = DAT_028b2ff8 != (longlong *)0x0;
        DAT_028b2ff8 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b3000 == '\0') {
        DAT_028b3000 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      DAT_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
    else {
      DAT_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
  }
  local_3c = *(undefined4 *)(arg1 + 0x1d0);
  local_40 = 3;
  local_48 = &DAT_0253a1a8;
  local_38 = iVar3;
  local_34 = iVar4;
  uVar11 = FUN_00d8cb40(uVar11,&local_48);
  if ((local_b0 == '\0') && (local_b8 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b00();
  }
  local_78 = local_b8;
  local_a8 = local_b8;
  local_a0 = '\0';
  uVar11 = FUN_000175c0(uVar11,&local_a8);
  plVar5 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      uVar11 = FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
    FUN_01a75080(uVar11,(char)local_6c);
    local_50 = local_48;
    if (local_48 == (longlong *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar5 + 0x18))();
    FUN_01cfbc00();
    local_68 = local_48;
    local_60 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_60 = '\x01';
    auVar12._4_12_ = in_register_00001244;
    auVar12._0_4_ = (float)iVar4;
    auVar12 = insertps(ZEXT416((uint)(float)iVar3),auVar12,0x10);
    FUN_01d4eaa0(auVar12._0_8_);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52700();
    uVar11 = FUN_01d52740();
    local_98 = local_50;
    local_90 = '\0';
    (**(code **)(*local_48 + 0x420))(uVar11,&local_98);
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_01d52770();
    local_80 = '\0';
    local_48 = local_78;
    local_40 = local_40 & 0xffffff00;
    local_88 = plVar5;
    FUN_00ca0840(uVar11,&local_48);
    if (((char)local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_6c == '\0') {
      if ((1 < iVar4) && (0 < iVar3)) {
        do {
          iVar8 = 0;
          do {
            FUN_01d53270(0,0,0,iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
          bVar1 = 3 < iVar4;
          iVar4 = iVar4 + -2;
        } while (bVar1);
      }
    }
    else if ((1 < iVar3) && (0 < iVar4)) {
      iVar8 = 1;
      do {
        iVar6 = 0;
        do {
          FUN_01d53270(0,0,0,iVar8);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
        iVar8 = iVar8 + 2;
      } while (iVar8 < iVar3);
    }
    cVar9 = (char)local_58;
    plVar7 = local_50;
  }
  else {
    cVar9 = '\0';
    plVar7 = (longlong *)0x0;
  }
  *this = plVar5;
  *(undefined1 *)(this + 1) = 1;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01a6e330 (970 bytes) — calculation

{
  longlong *plVar1;
  void *pvVar2;
  ulonglong arg1;
  longlong *this;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = local_40;
  (**(code **)(*this + 0x988))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  if (*(int *)((longlong)local_40 + 0xc) != 0) {
    FUN_01787610();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x370))();
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cc80();
    FUN_017873f0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cd50();
    FUN_01787450();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6ce30();
    FUN_01787510();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0xa48))();
    if ((arg1 >> 0x20 == 0) && (param_2 >> 0x20 == 0)) {
      FUN_01a66e80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = '\0';
      local_40 = (longlong *)0x0;
      FUN_0124f820();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a66e80();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*plVar1 + 0x390))(param_2,arg1,&local_70,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01a6e170(param_2,arg1);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*this + 0xa50))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @011137c0 (766 bytes) — calculation

{
  int iVar1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_025fbbb0;
  *(undefined4 *)((longlong)this + 0xc) = 0;
  if (DAT_02794b40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02794a90 = FUN_00d4fe50();
      _DAT_02794a78 = "MUChord";
      _DAT_02794a80 = 0x20;
      _DAT_02794a88 = FUN_01113770;
      _DAT_02794a98 = 0;
      uRam0000000002794aa0 = 0;
      _DAT_02794aa8 = 0;
      _DAT_02794b20 = 0;
      uRam0000000002794b28 = 0;
      _DAT_02794b30 = 0;
      DAT_02794b32 = 2;
      _DAT_02794ab0 = 0;
      uRam0000000002794ab8 = 0;
      _DAT_02794ac0 = 0;
      uRam0000000002794ac8 = 0;
      _DAT_02794ad0 = 0;
      uRam0000000002794ad8 = 0;
      _DAT_02794ae0 = 0;
      uRam0000000002794ae8 = 0;
      _DAT_02794af0 = 0;
      uRam0000000002794af8 = 0;
      _DAT_02794b00 = 0;
      uRam0000000002794b08 = 0;
      _DAT_02794b10 = 0;
      uRam0000000002794b18 = 0;
      DAT_02794b3b = 0;
      _DAT_02794b33 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02794b33 == '\0') {
    FUN_01113af0();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 2) = 0;
  if (DAT_02794b40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02794a90 = FUN_00d4fe50();
      _DAT_02794a78 = "MUChord";
      _DAT_02794a80 = 0x20;
      _DAT_02794a88 = FUN_01113770;
      _DAT_02794a98 = 0;
      uRam0000000002794aa0 = 0;
      _DAT_02794aa8 = 0;
      _DAT_02794b20 = 0;
      uRam0000000002794b28 = 0;
      _DAT_02794b30 = 0;
      DAT_02794b32 = 2;
      _DAT_02794ab0 = 0;
      uRam0000000002794ab8 = 0;
      _DAT_02794ac0 = 0;
      uRam0000000002794ac8 = 0;
      _DAT_02794ad0 = 0;
      uRam0000000002794ad8 = 0;
      _DAT_02794ae0 = 0;
      uRam0000000002794ae8 = 0;
      _DAT_02794af0 = 0;
      uRam0000000002794af8 = 0;
      _DAT_02794b00 = 0;
      uRam0000000002794b08 = 0;
      _DAT_02794b10 = 0;
      uRam0000000002794b18 = 0;
      DAT_02794b3b = 0;
      _DAT_02794b33 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02794b33 == '\0') {
    FUN_01113c80();
    FUN_00e87980();
  }
  this[3] = 0;
  if (DAT_02794b40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02794a90 = FUN_00d4fe50();
      _DAT_02794a78 = "MUChord";
      _DAT_02794a80 = 0x20;
      _DAT_02794a88 = FUN_01113770;
      _DAT_02794a98 = 0;
      uRam0000000002794aa0 = 0;
      _DAT_02794aa8 = 0;
      _DAT_02794b20 = 0;
      uRam0000000002794b28 = 0;
      _DAT_02794b30 = 0;
      DAT_02794b32 = 2;
      _DAT_02794ab0 = 0;
      uRam0000000002794ab8 = 0;
      _DAT_02794ac0 = 0;
      uRam0000000002794ac8 = 0;
      _DAT_02794ad0 = 0;
      uRam0000000002794ad8 = 0;
      _DAT_02794ae0 = 0;
      uRam0000000002794ae8 = 0;
      _DAT_02794af0 = 0;
      uRam0000000002794af8 = 0;
      _DAT_02794b00 = 0;
      uRam0000000002794b08 = 0;
      _DAT_02794b10 = 0;
      uRam0000000002794b18 = 0;
      DAT_02794b3b = 0;
      _DAT_02794b33 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02794b33 == '\0') {
    FUN_01113e10();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @01a735b0 (647 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *arg1;
  longlong this;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar6 = FUN_01b7c2c0();
  if (*(char *)(this + 0x201) == '\0') {
    return;
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    _DAT_02794a90 = FUN_00d4fe50();
    _DAT_02794a78 = "MUChord";
    _DAT_02794a80 = 0x20;
    param_1 = 0x1113770;
    _DAT_02794a88 = FUN_01113770;
    _DAT_02794a98 = 0;
    uRam0000000002794aa0 = 0;
    _DAT_02794aa8 = 0;
    _DAT_02794b20 = 0;
    uRam0000000002794b28 = 0;
    _DAT_02794b30 = 0;
    DAT_02794b32 = 2;
    _DAT_02794ab0 = 0;
    uRam0000000002794ab8 = 0;
    _DAT_02794ac0 = 0;
    uRam0000000002794ac8 = 0;
    _DAT_02794ad0 = 0;
    uRam0000000002794ad8 = 0;
    _DAT_02794ae0 = 0;
    uRam0000000002794ae8 = 0;
    _DAT_02794af0 = 0;
    uRam0000000002794af8 = 0;
    _DAT_02794b00 = 0;
    uRam0000000002794b08 = 0;
    _DAT_02794b10 = 0;
    uRam0000000002794b18 = 0;
    DAT_02794b3b = 0;
    _DAT_02794b33 = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01a73636:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a73636;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(longlong *)(this + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73709;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73709;
    }
  }
  local_40 = 0;
LAB_01a73709:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a73920 (647 bytes) — calculation

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong *arg1;
  longlong this;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar6 = FUN_01b7c310();
  if (*(char *)(this + 0x201) == '\0') {
    return;
  }
  plVar1 = (longlong *)*arg1;
  if ((DAT_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    _DAT_02794a90 = FUN_00d4fe50();
    _DAT_02794a78 = "MUChord";
    _DAT_02794a80 = 0x20;
    param_1 = 0x1113770;
    _DAT_02794a88 = FUN_01113770;
    _DAT_02794a98 = 0;
    uRam0000000002794aa0 = 0;
    _DAT_02794aa8 = 0;
    _DAT_02794b20 = 0;
    uRam0000000002794b28 = 0;
    _DAT_02794b30 = 0;
    DAT_02794b32 = 2;
    _DAT_02794ab0 = 0;
    uRam0000000002794ab8 = 0;
    _DAT_02794ac0 = 0;
    uRam0000000002794ac8 = 0;
    _DAT_02794ad0 = 0;
    uRam0000000002794ad8 = 0;
    _DAT_02794ae0 = 0;
    uRam0000000002794ae8 = 0;
    _DAT_02794af0 = 0;
    uRam0000000002794af8 = 0;
    _DAT_02794b00 = 0;
    uRam0000000002794b08 = 0;
    _DAT_02794b10 = 0;
    uRam0000000002794b18 = 0;
    DAT_02794b3b = 0;
    _DAT_02794b33 = 0;
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01a739a6:
    arg1 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a739a6;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(longlong *)(this + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73a79;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73a79;
    }
  }
  local_40 = 0;
LAB_01a73a79:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}



