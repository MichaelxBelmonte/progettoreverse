// Function: FUN_0199c1c0
// Address: 0199c1c0
// Size: 5772 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_0199c1c0(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  char cVar3;
  char cVar4;
  uint8_t uVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint64_t uVar9;
  void*puVar10;
  int64_t lVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar14;
  float fVar15;
  bool bVar16;
  uint32_t uVar17;
  uint64_t uVar18;
  double dVar19;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t in_XMM1 [16];
  uint8_t auVar22 [16];
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  void*local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  int64_t local_e8;
  char local_e0;
  double local_d8;
  uint64_t local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  double local_98;
  void*local_90;
  uint8_t local_88 [16];
  int64_t *local_70;
  char local_68 [8];
  int64_t *local_60;
  int local_58;
  int iStack_54;
  int local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_01;
  
  FUN_01d3abf0();
  uVar18 = FUN_01e466c0();
  local_48 = (float)uVar18;
  fStack_44 = (float)((uint64_t)uVar18 >> 0x20);
  fStack_40 = (float)extraout_XMM0_Qb;
  fStack_3c = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 0xf) {
    uVar17 = FUN_01d3b660();
    local_88._0_4_ = uVar17;
    uVar17 = FUN_01d3b660();
    local_38 = (int64_t *)CONCAT44(local_38._4_4_,uVar17);
    local_90 = (void*)(**(code **)(*this_ptr + 0x930))(CONCAT44(fStack_44,local_48));
    (**(code **)(*this_ptr + 0xc00))();
    (**(code **)(*this_ptr + 0xc50))();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 7) && (uVar7 = FUN_01d3b590(), (~uVar7 & 10) == 0)) {
    uVar18 = FUN_01e436c0();
    local_48 = (float)uVar18;
    fStack_44 = (float)((uint64_t)uVar18 >> 0x20);
    fStack_40 = (float)extraout_XMM0_Qb_00;
    fStack_3c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    local_88 = in_XMM1;
    auVar20._0_8_ = FUN_01e436c0();
    auVar20._8_8_ = extraout_XMM0_Qb_01;
    auVar22 = blendps(in_XMM1,local_88,0xd);
    auVar21._4_4_ = fStack_44;
    auVar21._0_4_ = local_48;
    auVar21._8_4_ = fStack_40;
    auVar21._12_4_ = fStack_3c;
    auVar21 = blendps(auVar20,auVar21,0xd);
    local_48 = auVar22._0_4_ * g_023945d0 + auVar21._0_4_;
    fStack_44 = auVar22._4_4_ * _UNK_023945d4 + auVar21._4_4_;
    fStack_40 = auVar22._8_4_ * _UNK_023945d8 + auVar21._8_4_;
    fStack_3c = auVar22._12_4_ * _UNK_023945dc + auVar21._12_4_;
    local_88._0_8_ = FUN_01d3b640();
    local_88._8_8_ = extraout_XMM0_Qb_02;
    auVar22._0_8_ = FUN_01d3b640();
    auVar22._8_8_ = extraout_XMM0_Qb_03;
    insertps(local_88,auVar22,0x10);
                                            (**(code **)(*this_ptr + 0xc58))();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 2)) {
    if ((this_ptr[0x7f] == 0) && ((**(code **)(*this_ptr + 0xec0))(), this_ptr[0x7f] == 0)) {
      return;
    }
    local_1f8 = *arg1;
    local_1f0 = '\0';
    FUN_01e23740(1,&local_1f8);
    if (local_1f0 == '\0') {
      return;
    }
    if (local_1f8 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 4) {
    FUN_01d3b590();
    (**(code **)(*this_ptr + 0xd98))(CONCAT44(fStack_44,local_48));
    return;
  }
  iVar6 = FUN_01d3a5a0();
  if (iVar6 == 5) {
    cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                        *this_ptr))();
    if (cVar3 == '\0') {
      (**(code **)(*this_ptr + 0xe20))();
      iVar6 = *(int *)((int64_t)local_70 + 0xc);
      if (local_68[0] != '\0') {
        FUN_00d50b20();
      }
      if (iVar6 != 0) goto LAB_0199c49c;
    }
    FUN_01d3b590();
    (**(code **)(*this_ptr + 0xd98))(CONCAT44(fStack_44,local_48));
    (**(code **)(*this_ptr + 0xb18))(CONCAT44(fStack_44,local_48));
    if (local_70 == (int64_t *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_88._8_8_;
      local_88 = auVar2 << 0x40;
      fVar15 = 0.0;
    }
    else {
      local_88._0_8_ = local_70;
      fVar15 = 1.4013e-45;
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar3 = (**(code **)(&g_00001478 + *this_ptr))();
    if ((cVar3 == '\0') && (*(char *)((int64_t)this_ptr + 0x357) == '\0')) {
      local_1c0 = '\0';
      local_1c8 = 0;
      (**(code **)(&g_00001440 + *this_ptr))();
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
      local_1b0 = '\0';
      local_1b8 = 0;
      (**(code **)(&g_00001458 + *this_ptr))();
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_1e8 = local_88._0_8_;
      local_1e0 = '\0';
      (**(code **)(&g_00001440 + *this_ptr))();
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((int64_t *)local_88._0_8_ != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)local_88._0_8_ + 0x928))();
        plVar14 = local_70;
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)local_88._0_8_ + 0x928))();
          local_b8 = local_70;
          local_b0 = 0;
          if (local_68[0] == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68[0] = '\0';
          }
          local_b0 = '\x01';
          (**(code **)(&g_00001458 + *this_ptr))();
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0199c4a5;
        }
      }
      local_1d0 = '\0';
      local_1d8 = 0;
      (**(code **)(&g_00001458 + *this_ptr))();
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_0199c49c:
    fVar15 = 0.0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_88._8_8_;
    local_88 = auVar1 << 0x40;
  }
LAB_0199c4a5:
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 != 1) || (iVar6 = FUN_01d3b630(), iVar6 != 1)) {
    iVar6 = FUN_01d3a5a0();
    if (iVar6 == 6) {
      plVar14 = (int64_t *)this_ptr[0x99];
      if (plVar14 != (int64_t *)0x0) {
        fStack_44 = 0.0;
        local_68[0] = '\0';
        local_70 = (int64_t *)0x0;
        iStack_54 = 0;
        local_50 = 0;
        local_60 = plVar14;
        local_48 = fVar15;
        for (lVar11 = 0; local_58 = (int)lVar11, lVar11 < *(int *)((int64_t)plVar14 + 0xc);
            lVar11 = lVar11 + 1) {
          plVar13 = *(int64_t **)(plVar14[2] + lVar11 * 8);
          local_70 = plVar13;
          (**(code **)(*plVar13 + 0x9c0))();
          (**(code **)(*plVar13 + 0x620))();
        }
        FUN_01a02090();
        fVar15 = local_48;
      }
      FUN_00d216c0();
    }
    cVar3 = SUB41(fVar15,0);
    local_118 = *arg1;
    local_110 = '\0';
    FUN_01e459c0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_0199d55d;
  }
  cVar3 = FUN_01e420b0();
  if (cVar3 == '\0') {
    FUN_01e42250();
  }
  if (this_ptr[0x94] != 0) {
    this_ptr[0x94] = 0;
    FUN_00d50b20();
  }
  if (this_ptr[0x95] != 0) {
    this_ptr[0x95] = 0;
    FUN_00d50b20();
  }
  local_e0 = 0;
  lVar11 = this_ptr[0x59];
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_e8 = lVar11;
  (**(code **)(*this_ptr + 0xb08))(CONCAT44(fStack_44,local_48));
  plVar14 = local_70;
  cVar3 = SUB41(fVar15,0);
  if (local_70 == (int64_t *)local_88._0_8_) {
    if ((cVar3 == '\0') && (local_70 != (int64_t *)0x0)) {
      plVar14 = (int64_t *)local_88._0_8_;
      if (local_68[0] != '\0') goto LAB_0199c855;
      fVar15 = 1.4013e-45;
      FUN_00d50b00();
    }
LAB_0199c9a3:
    cVar3 = SUB41(fVar15,0);
    if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_68[0] == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      fVar15 = 1.4013e-45;
      if ((cVar3 == '\0') || (local_88._0_8_ == 0)) {
        local_88._0_8_ = plVar14;
      }
      else {
        local_88._0_8_ = plVar14;
        FUN_00d50b20();
      }
      goto LAB_0199c9a3;
    }
    if ((cVar3 != '\0') && ((int64_t *)local_88._0_8_ != (int64_t *)0x0)) {
      local_88._0_8_ = local_70;
      FUN_00d50b20();
    }
LAB_0199c855:
    local_68[0] = '\0';
    cVar3 = '\x01';
    local_88._0_8_ = plVar14;
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)local_88._0_8_ == (int64_t *)0x0) {
    local_d0 = 0;
    local_38 = (int64_t *)0x0;
    local_f8 = 0;
  }
  else {
    uVar18 = (**(code **)(*(int64_t *)local_88._0_8_ + 0x928))();
    plVar14 = local_70;
    if (local_70 == (int64_t *)0x0) {
      plVar14 = (int64_t *)0x0;
      local_d0 = 0;
    }
    else {
      local_d0 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_f8 = (**(code **)(*(int64_t *)local_88._0_8_ + 0x930))();
    local_38 = plVar14;
  }
  if (((int64_t *)this_ptr[0x59] == (int64_t *)0x0) ||
     (cVar4 = (**(code **)(*(int64_t *)this_ptr[0x59] + 0x398))(), cVar4 != '\0')) {
    if (this_ptr[0x70] != 0) {
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 0x18))();
    }
    if (((int64_t *)this_ptr[0x59] == (int64_t *)0x0) ||
       (cVar4 = (**(code **)(*(int64_t *)this_ptr[0x59] + 0x3a0))(), cVar4 != '\0')) {
      this_ptr[0x72] = (int64_t)local_38;
      if (local_38 == (int64_t *)0x0) goto LAB_0199cb35;
      if (this_ptr[0x73] != 0) {
        FUN_01e1e360();
      }
      plVar13 = (int64_t *)0x0;
      FUN_01e1eb80(g_023934c8);
      plVar14 = (int64_t *)this_ptr[0x73];
      if (plVar14 != local_70) {
        plVar13 = plVar14;
        if (local_68[0] == '\0') {
          if (local_70 == (int64_t *)0x0) {
            plVar14 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar14 = local_70;
            plVar13 = (int64_t *)this_ptr[0x73];
          }
        }
        else {
          local_68[0] = '\0';
          plVar14 = local_70;
        }
        this_ptr[0x73] = (int64_t)plVar14;
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar14 = local_70;
        }
      }
      pVar12 = (void*)plVar13;
      if ((local_68[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      local_90 = (void*)(**(code **)(*this_ptr + 0x930))();
      pvVar8 = _pthread_getspecific(pVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar19 = (double)FUN_0125a280();
      this_ptr[0x74] = (int64_t)((double)local_90 - dVar19);
    }
    else if (local_38 == (int64_t *)0x0) {
LAB_0199cb35:
      uVar9 = FUN_01d3b590();
      if ((uVar9 & 6) != 0) goto LAB_0199d461;
      (**(code **)(*this_ptr + 0xe10))();
      if (local_70 == (int64_t *)0x0) {
        bVar16 = false;
      }
      else {
        (**(code **)(*this_ptr + 0xe10))();
        bVar16 = *(int *)(local_a8 + 0xc) != 0;
        if (local_a0 != '\0') {
          FUN_00d50b20();
        }
      }
      if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = 1;
      if (bVar16) {
LAB_0199d041:
        *(void*)((int64_t)this_ptr + 0x4f9) = uVar5;
      }
      else {
        iVar6 = FUN_01d3b620();
        if (iVar6 != 2) {
          uVar5 = 0;
          goto LAB_0199d041;
        }
      }
      (**(code **)(*this_ptr + 0xda0))();
      FUN_0199e1b0();
      goto LAB_0199d461;
    }
    *(void*)((int64_t)this_ptr + 0x4f9) = 0;
    if ((char)local_f8 != '\0') {
      uVar9 = FUN_01d3b590();
      if ((uVar9 & 4) == 0) {
        local_70 = local_38;
        local_68[0] = '\0';
        cVar4 = FUN_00d24090();
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          uVar9 = FUN_01d3b590();
          uVar18 = extraout_XMM0_Qa_00;
          if ((uVar9 & 2) == 0) {
            uVar18 = (**(code **)(*this_ptr + 0xda0))();
          }
          local_198 = local_38;
          local_190 = '\0';
          (**(code **)(*this_ptr + 0xda8))(uVar18,1);
          if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar14 = (int64_t *)this_ptr[0x92];
          if (plVar14 != local_38) {
            FUN_00d50b00();
            this_ptr[0x92] = (int64_t)local_38;
            if (plVar14 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_0199e1b0();
        }
        else {
          uVar9 = FUN_01d3b590();
          if ((uVar9 & 2) != 0) {
            local_188 = local_38;
            local_180 = '\0';
            (**(code **)(*this_ptr + 0xdb0))(extraout_XMM0_Qa,1);
            if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_0199e1b0();
          }
        }
      }
      else {
        puVar10 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar14 = (int64_t *)&g_02572358;
        *puVar10 = &g_02572358;
        (*g_02572370)();
        local_90 = puVar10;
        if (this_ptr[0x92] == 0) {
          local_70 = local_38;
          local_68[0] = '\0';
          FUN_00d21140();
          if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar14 = (int64_t *)this_ptr[0x92];
          if (plVar14 != local_38) {
            FUN_00d50b00();
            this_ptr[0x92] = (int64_t)local_38;
            if (plVar14 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          pvVar8 = _pthread_getspecific((void*)plVar14);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_98 = (double)FUN_0125a280();
          pvVar8 = _pthread_getspecific((void*)plVar14);
          if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            plVar14 = local_38;
          }
          dVar19 = (double)FUN_0125a280();
          pVar12 = (void*)plVar14;
          if (local_98 <= dVar19) {
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_98 = (double)FUN_0125a280();
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_d8 = (double)FUN_0125a280();
          }
          else {
            pvVar8 = _pthread_getspecific(pVar12);
            if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              plVar14 = local_38;
            }
            pVar12 = (void*)plVar14;
            local_98 = (double)FUN_0125a280();
            pvVar8 = _pthread_getspecific(pVar12);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_d8 = (double)FUN_0125a280();
          }
          local_d8 = local_d8 - local_98;
          (**(code **)(*this_ptr + 0x988))();
          plVar14 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_0199d137;
            }
          }
          else if (local_70 != (int64_t *)0x0) {
LAB_0199d137:
            local_68[0] = '\0';
            local_70 = (int64_t *)0x0;
            local_60 = plVar14;
            local_58 = -1;
            iStack_54 = 0;
            local_98 = local_98 + g_0241b678;
            local_d8 = local_d8 + g_02420c40;
            local_50 = 0;
            local_f0 = plVar14;
            while( true ) {
              if (iStack_54 != 0) {
                if (iStack_54 < 1) {
                  iStack_54 = -iStack_54;
                }
                else {
                  local_58 = local_58 - iStack_54;
                  FUN_00d23690();
                  local_50 = local_50 + iStack_54;
                  iStack_54 = 0;
                }
              }
              lVar11 = (int64_t)local_58;
              local_58 = local_58 + 1;
              if (*(int *)((int64_t)local_60 + 0xc) <= local_58) break;
              local_70 = *(int64_t **)(local_60[2] + 8 + lVar11 * 8);
              pvVar8 = _pthread_getspecific((void*)local_60[2]);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar18 = FUN_012ea6f0(local_98,local_d8);
              lVar11 = local_108;
              if (local_100 == '\0') {
                if (local_108 != 0) {
                  uVar18 = FUN_00d50b00();
                }
              }
              else {
                local_100 = '\0';
              }
              local_a8 = lVar11;
              local_a0 = '\0';
              FUN_00d214d0(uVar18,*(void*)((int64_t)local_90 + 0xc));
              if ((local_a0 != '\0') && (local_a8 != 0)) {
                FUN_00d50b20();
              }
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
            }
            FUN_000be170();
            FUN_00d50b20();
          }
        }
        plVar14 = (int64_t *)this_ptr[0x93];
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_68[0] = '\0';
        local_70 = plVar14;
        FUN_00d23480();
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        uVar18 = (**(code **)(*this_ptr + 0xda0))();
        local_1a8 = local_90;
        local_1a0 = '\0';
        (**(code **)(*this_ptr + 0xdc8))(uVar18,0);
        if ((local_1a0 != '\0') && (local_1a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_0199e1b0();
        FUN_00d50b20();
      }
    }
    uVar9 = FUN_01d3b590();
    if (((uVar9 & 4) == 0) || ((char)local_f8 == '\0')) goto LAB_0199d461;
    local_170 = '\0';
    local_178 = 0;
    (**(code **)(&g_00001458 + *this_ptr))();
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 0x18))();
    local_168 = *arg1;
    local_160 = '\0';
    (**(code **)(*this_ptr + 0xd88))();
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
LAB_0199d461:
    if (this_ptr[0x59] != 0) {
      FUN_0199e390();
      uVar18 = FUN_0199e1b0();
      local_158 = *arg1;
      local_150 = '\0';
      local_148 = local_38;
      local_140 = '\0';
      cVar4 = (**(code **)(*(int64_t *)this_ptr[0x59] + 0x380))(uVar18,&local_148);
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 0x18))();
        goto LAB_0199d546;
      }
    }
    if (local_38 == (int64_t *)0x0) {
      iVar6 = FUN_01d3b620();
      if (((iVar6 == 2) && ((int64_t *)this_ptr[0x69] != (int64_t *)0x0)) &&
         (cVar4 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x18))(), cVar4 != '\0')) {
        if (*(char *)((int64_t)this_ptr + 0x4f9) != '\0') {
          FUN_00d23740();
          uVar18 = FUN_00d23340();
          plVar14 = local_70;
          plVar13 = &local_a8;
          if (local_68[0] != '\0') {
            plVar13 = (int64_t *)local_68;
          }
          local_a8 = CONCAT71(local_a8._1_7_,local_68[0]);
          *(char *)plVar13 = '\0';
          if ((local_68[0] != '\0') && (plVar14 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
          local_c0 = 0;
          if (((char)local_a8 == '\0') && (plVar14 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b00();
          }
          local_c8 = plVar14;
          local_c0 = '\x01';
          (**(code **)(*this_ptr + 0xe98))(uVar18,0);
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d23740();
          *(void*)((int64_t)this_ptr + 0x4f9) = 0;
        }
        FUN_01c40ab0();
        plVar14 = local_70;
        local_138 = *arg1;
        local_130 = '\0';
        uVar5 = (**(code **)(*(int64_t *)this_ptr[0x69] + 0x50))();
        iVar6 = (**(code **)(*plVar14 + 0x370))(*plVar14,uVar5);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68[0] != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar6 == 2) {
          uVar9 = FUN_01d3b590();
          if (((uVar9 & 8) == 0) ||
             (dVar19 = (double)(**(code **)(&g_000015f0 + *this_ptr))(), NAN(dVar19))) {
            plVar14 = (int64_t *)this_ptr[0x69];
            (**(code **)(*this_ptr + 0x930))(CONCAT44(fStack_44,local_48));
            (**(code **)(*plVar14 + 0x30))();
          }
          else {
            plVar14 = (int64_t *)this_ptr[0x69];
            uVar18 = (**(code **)(&g_000015f0 + *this_ptr))();
            local_48 = (float)uVar18;
            fStack_44 = (float)((uint64_t)uVar18 >> 0x20);
            (**(code **)(&g_000015f0 + *this_ptr))();
            (**(code **)(*plVar14 + 0x40))(CONCAT44(fStack_44,local_48));
          }
        }
        else if (iVar6 == 3) {
          (**(code **)(*(int64_t *)this_ptr[0x69] + 0x48))();
          plVar14 = (int64_t *)this_ptr[0x69];
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x388))(CONCAT44(fStack_44,local_48));
          (**(code **)(*plVar14 + 0x60))();
        }
        else if (iVar6 == 4) {
          (**(code **)(*(int64_t *)this_ptr[0x69] + 0x48))();
        }
      }
      else {
        local_128 = *arg1;
        local_120 = '\0';
        (**(code **)(*this_ptr + 0xd90))();
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0199d55d;
    }
    (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr + 0x18))();
  }
LAB_0199d546:
  if (((char)local_d0 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0199d55d:
  if ((cVar3 != '\0') && (local_88._0_8_ != 0)) {
    FUN_00d50b20();
  }
  return;
}

