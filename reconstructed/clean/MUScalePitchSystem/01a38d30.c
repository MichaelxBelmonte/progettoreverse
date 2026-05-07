// Function: FUN_01a38d30
// Address: 01a38d30
// Size: 9880 bytes
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


void FUN_01a38d30(void)

{
  void*puVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  code *pcVar15;
  int64_t *plVar16;
  char cVar17;
  uint8_t uVar18;
  char cVar19;
  int iVar20;
  uint32_t uVar21;
  int64_t **pplVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  int64_t *plVar25;
  void*puVar26;
  void *pvVar27;
  int64_t lVar28;
  void* pVar29;
  byte bVar30;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar31;
  float fVar32;
  float extraout_XMM0_Da;
  double dVar33;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  double dVar34;
  uint64_t uVar35;
  float fVar53;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qa_00;
  double dVar36;
  double dVar37;
  int64_t *plVar38;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  uint64_t extraout_XMM0_Qb_09;
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  float fVar57;
  uint8_t in_XMM1 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  int64_t local_300;
  uint8_t local_2f8 [16];
  float local_2e8;
  float fStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t *local_260;
  char local_258;
  int64_t *local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8 [8];
  uint64_t uStack_1c0;
  uint8_t local_1b8 [12];
  float fStack_1ac;
  uint64_t local_1a8;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e0;
  uint64_t local_d8;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  int64_t *local_b8;
  uint8_t local_98 [16];
  int64_t *local_80;
  int64_t *local_78;
  double local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_10;
  uint64_t extraout_XMM0_Qb_11;
  
  fVar32 = (float)FUN_01e3f820();
  auVar55 = in_XMM1;
  auVar39._0_8_ = FUN_01a34a00();
  auVar39._8_8_ = extraout_XMM0_Qb;
  auVar40._4_12_ = auVar39._4_12_;
  auVar40._0_4_ = (float)auVar39._0_8_ + fVar32 + in_XMM1._0_4_;
  dVar33 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(auVar40._0_8_);
  auVar41._0_8_ = FUN_01a34a00();
  auVar41._8_8_ = extraout_XMM0_Qb_00;
  auVar42._4_12_ = auVar41._4_12_;
  auVar42._0_4_ = (float)auVar41._0_8_ + fVar32;
  dVar34 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(auVar42._0_8_);
  (**(code **)(*this_ptr + 0x980))();
  local_e0 = local_60;
  local_1d0 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_1d0 = (int64_t *)0x0;
      local_e0 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_e0 = local_1d0;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
  }
  FUN_00083c20();
  if (local_e0 == (int64_t *)0x0) {
LAB_01a38e42:
    pplVar22 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*local_e0 + 0x360))();
    cVar17 = FUN_00e85ea0();
    if (cVar17 == '\0') goto LAB_01a38e42;
    pplVar22 = &local_1d0;
  }
  plVar38 = *pplVar22;
  (**(code **)(*this_ptr + 0x930))();
  local_b8 = local_60;
  plVar25 = local_60;
  if (local_60 == (int64_t *)0x0) {
    bVar14 = true;
    local_b8 = (int64_t *)0x0;
    lVar28 = this_ptr[0x28];
  }
  else {
    if (local_58 == '\0') {
      FUN_00d50b00();
      if ((local_58 == '\0') || (local_60 == (int64_t *)0x0)) {
        bVar14 = false;
        lVar28 = this_ptr[0x28];
        goto joined_r0x01a38f60;
      }
      FUN_00d50b20();
    }
    bVar14 = false;
    lVar28 = this_ptr[0x28];
  }
joined_r0x01a38f60:
  if (lVar28 != 0) {
    iVar20 = FUN_01d3a5a0();
    if (iVar20 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*this_ptr + 0x960))();
    }
    iVar20 = FUN_01d3a5a0();
    if ((iVar20 == 1) && (iVar20 = FUN_01d3b630(), iVar20 == 2)) {
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*this_ptr + 0x6f8))();
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01a3900f;
        }
      }
      else if (local_60 != (int64_t *)0x0) {
LAB_01a3900f:
        (**(code **)(*this_ptr + 0x7b8))();
        FUN_01d97850();
        plVar25 = local_60;
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_01d62b10();
        if (plVar25 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b00();
        local_2d0 = 0;
        local_2c8 = '\0';
        FUN_01d5ef60(&local_2d0,0xffffffff);
        if ((local_2c8 != '\0') && (local_2d0 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01d62b80();
        FUN_00d50b20();
        goto LAB_01a3b1dd;
      }
    }
    iVar20 = FUN_01d3a5a0();
    if ((iVar20 == 1) && (iVar20 = FUN_01d3b630(), iVar20 == 1)) {
      iVar20 = FUN_01d3b620();
      if (iVar20 == 1) {
        FUN_00d403d0();
        local_2c0 = g_026f6d40;
        if (g_026f6d40 != 0) {
          FUN_00d50b00();
        }
        local_2b8 = '\x01';
        FUN_00d50b00();
        local_2b0 = 0;
        local_2a8 = '\0';
        plVar25 = &local_2b0;
        FUN_00d40470(plVar25,&stack0xfffffffffffffe80,1,3);
        if ((local_2a8 != '\0') && (local_2b0 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_2b8 != '\0') && (local_2c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar20 = FUN_01d3b620();
      FUN_01d3abf0();
      uVar35 = FUN_01e466c0();
      local_2a0 = *arg1;
      local_298 = '\0';
      local_118 = (float)uVar35;
      fStack_114 = (float)((uint64_t)uVar35 >> 0x20);
      fStack_110 = (float)extraout_XMM0_Qb_01;
      fStack_10c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      cVar17 = (**(code **)(*this_ptr + 0xa00))();
      if ((local_298 != '\0') && (local_2a0 != 0)) {
        FUN_00d50b20();
      }
      local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
      if (cVar17 != '\0') goto LAB_01a3b1dd;
      FUN_01e3f820();
      plVar2 = this_ptr + 0x28;
      local_98._8_8_ = in_XMM1._8_8_;
      if (fStack_114 < auVar55._4_4_ * g_0239011c) {
        FUN_01d3b620();
        FUN_01c40ab0();
        plVar25 = local_60;
        local_290 = *arg1;
        local_288 = '\0';
        uVar18 = (**(code **)(*(int64_t *)*plVar2 + 0x50))();
        iVar20 = (**(code **)(*plVar25 + 0x368))(*plVar25,uVar18);
        if ((local_288 != '\0') && (local_290 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar20 == 1) {
          (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
          (**(code **)(*this_ptr + 0x9f0))();
        }
        else if (iVar20 == 2) {
          cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0x18))();
          if (cVar17 != '\0') {
            uVar35 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(uVar35);
            lVar28 = g_027e1fc0;
            if (g_027e1fc0 != 0) {
              FUN_00d50b00();
            }
            local_300 = lVar28;
            FUN_00083ea0(2,&local_300);
            FUN_000b4da0();
            if ((local_f0 == '\0') && (local_f8 != 0)) {
              FUN_00d50b00();
            }
            local_60 = (int64_t *)&g_0253d630;
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            local_60 = &g_024c5048;
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (lVar28 != 0) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            local_280 = g_027e1fc8;
            if (g_027e1fc8 != 0) {
              FUN_00d50b00();
            }
            local_278 = '\x01';
            FUN_00d50b00();
            local_270 = local_f8;
            local_268 = '\0';
            FUN_00d40470(&local_270,&stack0xfffffffffffffe90,1,3);
            if ((local_268 != '\0') && (local_270 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            dVar33 = (double)(**(code **)(*this_ptr + 0x9a0))();
            uVar23 = FUN_01d3b590();
            if ((((uVar23 & 8) == 0) ||
                (cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0x50))(), cVar17 != '\0')) ||
               (NAN(dVar33))) {
              (**(code **)(*(int64_t *)*plVar2 + 0x28))(uVar35);
            }
            else {
              (**(code **)(*(int64_t *)*plVar2 + 0x38))(dVar33,auVar55._0_8_);
            }
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
            if (local_f8 != 0) {
              FUN_00d50b20();
              local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
            }
            goto LAB_01a3b1dd;
          }
        }
        else if ((iVar20 == 3) &&
                (cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0x18))(), cVar17 != '\0')) {
          (**(code **)(*(int64_t *)*plVar2 + 0x48))();
          (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
          (**(code **)(*this_ptr + 0x9f0))();
        }
        local_1c8 = (uint8_t  [8])FUN_01e3f820();
        uStack_1c0 = extraout_XMM0_Qb_03;
        _local_1b8 = auVar55;
        (**(code **)(*this_ptr + 0x7b0))();
        cVar17 = FUN_01cf74d0();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar7 = false;
        local_68 = (int64_t *)0x0;
        bVar9 = false;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = local_98._8_8_;
        local_98 = auVar5 << 0x40;
        bVar12 = false;
        local_80 = (int64_t *)0x0;
        bVar10 = false;
        local_78 = (int64_t *)0x0;
        bVar8 = false;
        bVar31 = false;
        uVar24 = 0;
        do {
          local_1a8._0_4_ = (uint32_t)uVar24;
          local_1a8._4_4_ = (uint32_t)((uint64_t)uVar24 >> 0x20);
LAB_01a39810:
          do {
            do {
              (**(code **)(*this_ptr + 0x658))();
              plVar38 = local_60;
              plVar25 = (int64_t *)*arg1;
              if (plVar25 == local_60) {
                if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
                  if (local_58 == '\0') {
                    FUN_00d50b00();
                    goto LAB_01a398a9;
                  }
                  goto LAB_01a39864;
                }
LAB_01a3986e:
                if (*arg1 != 0) goto LAB_01a398bc;
LAB_01a3a375:
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a3a389:
                (**(code **)(*this_ptr + 0x7b0))();
                cVar19 = FUN_01cf74d0();
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar19 != cVar17) {
                  (**(code **)(*this_ptr + 0x7b0))();
                  FUN_01cf74c0();
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (bVar8) {
                  cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0x50))();
                  if (cVar17 != '\0') {
                    (**(code **)(*(int64_t *)*plVar2 + 0x48))();
                  }
                  (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
                  (**(code **)(*this_ptr + 0x9f0))();
                }
                if ((bVar7) && (local_68 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((bVar9) && (local_98._0_8_ != 0)) {
                  FUN_00d50b20();
                }
                if ((bVar12) && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
                if ((bVar10) &&
                   (local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8),
                   local_78 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01a3b1b3;
              }
              lVar28 = arg1[1];
              if (local_58 != '\0') {
                *arg1 = (int64_t)local_60;
                if (((char)lVar28 != '\0') && (plVar25 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01a39864:
                *(void*)(arg1 + 1) = 1;
                local_58 = '\0';
                goto LAB_01a3986e;
              }
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)plVar38;
              if (((char)lVar28 != '\0') && (plVar25 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01a398a9:
              *(void*)(arg1 + 1) = 1;
              if (*arg1 == 0) goto LAB_01a3a375;
LAB_01a398bc:
              iVar20 = FUN_01d3a5a0();
              if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar20 == 6) goto LAB_01a3a389;
              iVar20 = FUN_01d3a5a0();
            } while (iVar20 != 5);
            FUN_01d3abf0();
            uVar24 = FUN_01e466c0();
            local_d8._0_4_ = (float)uVar24;
            local_d8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
            fStack_cc = (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
            if (local_98._0_8_ == 0) {
              (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
              FUN_00d470c0();
              local_98._0_8_ = local_60;
              if (local_60 == (int64_t *)0x0) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = local_98._8_8_;
                local_98 = auVar6 << 0x40;
              }
              else if (((local_58 == '\0') && (FUN_00d50b00(), local_58 != '\0')) &&
                      (local_60 != (int64_t *)0x0)) {
                FUN_00d50b20();
                bVar9 = true;
              }
              else {
                bVar9 = true;
              }
              fVar32 = (float)FUN_01e436c0();
              auVar4._8_4_ = fStack_110;
              auVar4._0_8_ = uVar35;
              auVar4._12_4_ = fStack_10c;
              auVar56._4_12_ = auVar4._4_12_;
              auVar56._0_4_ = local_118 - fVar32;
              FUN_00d46dc0();
              plVar25 = local_60;
              if (local_68 == local_60) {
                plVar25 = local_68;
                bVar8 = bVar7;
                if ((!bVar7) && (local_68 != (int64_t *)0x0)) {
                  bVar8 = true;
                  if (local_58 != '\0') goto LAB_01a39c91;
                  FUN_00d50b00();
                  bVar8 = true;
                }
LAB_01a39c5f:
                local_68 = plVar25;
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar8 = true;
                  if ((bVar7) && (local_68 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a39c5f;
                }
                if ((bVar7) && (local_68 != (int64_t *)0x0)) {
                  local_68 = local_60;
                  FUN_00d50b20();
                  bVar8 = true;
                }
                else {
                  local_68 = local_60;
                  bVar8 = true;
                }
              }
LAB_01a39c91:
              plVar25 = (int64_t *)this_ptr[0x2d];
              FUN_01e436c0();
              (**(code **)(*plVar25 + 0x388))();
              FUN_00d470c0();
              plVar25 = local_60;
              if (local_78 == local_60) {
                plVar25 = local_78;
                bVar11 = bVar10;
                if ((!bVar10) && (local_78 != (int64_t *)0x0)) {
                  bVar11 = true;
                  if (local_58 != '\0') goto LAB_01a39d9b;
                  FUN_00d50b00();
                  bVar11 = true;
                }
LAB_01a39d6f:
                local_78 = plVar25;
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar11 = true;
                  if ((bVar10) && (local_78 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a39d6f;
                }
                if ((bVar10) && (local_78 != (int64_t *)0x0)) {
                  local_78 = local_60;
                  FUN_00d50b20();
                  bVar11 = true;
                }
                else {
                  local_78 = local_60;
                  bVar11 = true;
                }
              }
LAB_01a39d9b:
              plVar25 = (int64_t *)this_ptr[0x2d];
              auVar43._0_8_ = FUN_01e436c0();
              auVar43._8_8_ = extraout_XMM0_Qb_05;
              auVar44._4_12_ = auVar43._4_12_;
              auVar44._0_4_ = (float)auVar43._0_8_ + auVar56._0_4_ + g_02390d00;
              (**(code **)(*plVar25 + 0x388))(auVar44._0_8_);
              FUN_00d470c0();
              plVar25 = local_60;
              if (local_80 == local_60) {
                plVar25 = local_80;
                bVar13 = bVar12;
                if ((!bVar12) && (local_80 != (int64_t *)0x0)) {
                  bVar13 = true;
                  if (local_58 != '\0') goto LAB_01a39e89;
                  FUN_00d50b00();
                  bVar13 = true;
                }
LAB_01a39e75:
                if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_58 == '\0') {
                  if (local_60 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar13 = true;
                  if ((bVar12) && (local_80 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a39e75;
                }
                bVar13 = true;
                if ((bVar12) && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_01a39e89:
              local_80 = plVar25;
              auVar55 = g_02390140;
              bVar7 = bVar8;
              bVar10 = bVar11;
              bVar12 = bVar13;
            }
            else {
              auVar56 = auVar55;
              auVar55 = g_02390140;
            }
            g_02390140 = auVar55;
            if ((char)local_1a8 != '\0') {
              if (bVar31) {
                cVar19 = (**(code **)(*(int64_t *)*plVar2 + 0xa0))();
                plVar25 = (int64_t *)this_ptr[0x28];
                if (cVar19 == '\0') {
                  dVar33 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(uVar24);
                  bVar8 = true;
                  (**(code **)(*plVar25 + 0x88))(dVar33 + g_02390448);
                  auVar55 = auVar56;
                }
                else {
                  dVar33 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(uVar24);
                  bVar8 = true;
                  (**(code **)(*plVar25 + 0x98))(dVar33 + g_02390448);
                  auVar55 = auVar56;
                }
              }
              else {
                fVar32 = (float)FUN_01e436c0();
                auVar55._4_4_ = local_d8._4_4_;
                auVar55._0_4_ = local_d8._4_4_;
                auVar55._8_4_ = fStack_cc;
                auVar55._12_4_ = fStack_cc;
                if (((((float)local_1c8._4_4_ + (float)local_1b8._4_4_ + g_02390d00 <
                       local_d8._4_4_) || (local_d8._4_4_ < (float)local_1c8._4_4_)) &&
                    (fVar32 <= (float)local_d8)) &&
                   ((float)local_d8 <= fVar32 + auVar56._0_4_ + g_02390d00)) {
                  auVar54._0_4_ =
                       -(uint)(local_d8._4_4_ < fStack_114) & ((uint)local_d8._4_4_ ^ g_023945e0)
                  ;
                  auVar54._4_4_ = 0;
                  auVar54._8_4_ = (uint)fStack_cc & ((uint)fStack_cc ^ _UNK_023945e8);
                  auVar54._12_4_ = (uint)fStack_cc & ((uint)fStack_cc ^ _UNK_023945ec);
                  auVar3._4_4_ = 0;
                  auVar3._0_4_ = ~-(uint)(local_d8._4_4_ < fStack_114) &
                                 (uint)(local_d8._4_4_ - (float)local_1b8._4_4_);
                  auVar3._8_4_ = ~(uint)fStack_cc & (uint)(fStack_cc - fStack_1ac);
                  auVar3._12_4_ = ~(uint)fStack_cc & (uint)(fStack_cc - fStack_1ac);
                  auVar55 = auVar54 | auVar3;
                  _powf();
                  plVar25 = (int64_t *)FUN_00e8fc40();
                  FUN_00022d50();
                  (**(code **)(*plVar25 + 0x18))();
                  uVar24 = FUN_00d46dc0();
                  if (local_f0 == '\0') {
                    if (local_f8 != 0) {
                      uVar24 = FUN_00d50b00();
                    }
                  }
                  else {
                    local_f0 = '\0';
                  }
                  plVar38 = g_027e1420;
                  if (g_027e1420 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                  local_60 = plVar38;
                  local_58 = '\0';
                  uVar24 = FUN_00ca0840(uVar24,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  if (plVar38 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b20();
                  }
                  if (local_f8 != 0) {
                    uVar24 = FUN_00d50b20();
                  }
                  if ((local_f0 != '\0') && (local_f8 != 0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  plVar38 = g_027e1428;
                  local_258 = '\0';
                  local_260 = local_78;
                  if (g_027e1428 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                  local_60 = plVar38;
                  local_58 = '\0';
                  uVar24 = FUN_00ca0840(uVar24,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  if (plVar38 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b20();
                  }
                  if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  plVar38 = g_027e7c70;
                  local_248 = '\0';
                  local_250 = local_80;
                  if (g_027e7c70 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                  local_60 = plVar38;
                  local_58 = '\0';
                  uVar24 = FUN_00ca0840(uVar24,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  if (plVar38 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b20();
                  }
                  if ((local_248 != '\0') && (local_250 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  plVar38 = g_027e7c60;
                  local_240 = local_98._0_8_;
                  local_238 = '\0';
                  if (g_027e7c60 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                  local_60 = plVar38;
                  local_58 = '\0';
                  uVar24 = FUN_00ca0840(uVar24,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  if (plVar38 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b20();
                  }
                  if ((local_238 != '\0') && (local_240 != 0)) {
                    uVar24 = FUN_00d50b20();
                  }
                  plVar38 = g_027e1430;
                  local_228 = '\0';
                  local_230 = local_68;
                  if (g_027e1430 != (int64_t *)0x0) {
                    uVar24 = FUN_00d50b00();
                  }
                  local_60 = plVar38;
                  local_58 = '\0';
                  FUN_00ca0840(uVar24,&local_60);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (plVar38 != (int64_t *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d403d0();
                  lVar28 = g_027ebc60;
                  if (g_027ebc60 != 0) {
                    FUN_00d50b00();
                  }
                  local_220 = lVar28;
                  local_218 = '\x01';
                  local_210 = this_ptr[0x2d];
                  local_208 = '\0';
                  local_1f8 = '\0';
                  local_200 = plVar25;
                  FUN_00d40470(&local_200,&local_210,1,3);
                  if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_208 != '\0') && (local_210 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_218 != '\0') && (local_220 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                cVar19 = (**(code **)(*(int64_t *)*plVar2 + 0xa0))();
                bVar8 = false;
                if (cVar19 != '\0') {
                  bVar8 = false;
                  (**(code **)(*(int64_t *)*plVar2 + 0x90))();
                }
              }
              goto LAB_01a39810;
            }
            fStack_d0 = (float)extraout_XMM0_Qb_04;
            local_2f8._0_4_ = (uint)(local_118 - (float)local_d8) & auVar55._0_4_;
            local_2f8._4_4_ = (float)((uint)(fStack_114 - local_d8._4_4_) & auVar55._4_4_);
            local_2f8._8_4_ = (uint)(fStack_110 - fStack_d0) & auVar55._8_4_;
            local_2f8._12_4_ = (uint)(fStack_10c - fStack_cc) & auVar55._12_4_;
            bVar8 = true;
            local_2e8 = local_2f8._4_4_;
            fStack_2e4 = local_2f8._4_4_;
            uStack_2e0 = local_2f8._12_4_;
            uStack_2dc = local_2f8._12_4_;
          } while ((float)((uint)((float)local_2f8._0_4_ - local_2f8._4_4_) & auVar55._0_4_) <=
                   g_02390d34);
          uVar24 = FUN_01e3f820();
          uStack_1c0 = extraout_XMM0_Qb_06;
          local_1c8 = (uint8_t  [8])extraout_XMM0_Qa;
          if ((float)local_2f8._0_4_ <= local_2e8) {
            _local_1b8 = auVar55;
            (**(code **)(*this_ptr + 0x7b0))();
            uVar24 = FUN_01cf74c0();
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              uVar24 = FUN_00d50b20();
            }
            bVar8 = true;
            bVar31 = false;
            uVar24 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
          }
          else {
            uVar21 = (uint32_t)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
            fVar32 = (float)((uint64_t)extraout_XMM0_Qa >> 0x20);
            auVar45._4_4_ = fVar32;
            auVar45._0_4_ = fVar32;
            auVar45._8_4_ = uVar21;
            auVar45._12_4_ = uVar21;
            auVar46._4_12_ = auVar45._4_12_;
            auVar46._0_4_ = fVar32 + g_02394210;
            _local_1c8 = insertps(_local_1c8,auVar46,0x10);
            fVar32 = auVar55._4_4_;
            auVar47._4_4_ = fVar32;
            auVar47._0_4_ = fVar32;
            auVar47._8_4_ = auVar55._12_4_;
            auVar47._12_4_ = auVar55._12_4_;
            auVar48._4_12_ = auVar47._4_12_;
            auVar48._0_4_ = fVar32 + g_023908ec;
            auVar55 = insertps(auVar55,auVar48,0x10);
            bVar8 = true;
            bVar31 = true;
            uVar24 = CONCAT71((int7)((uint64_t)uVar24 >> 8),1);
            _local_1b8 = auVar55;
          }
        } while( true );
      }
      cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0xa8))();
      if (cVar17 != '\0') {
        cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0xb0))();
        if (cVar17 == '\0') {
LAB_01a3a574:
          uVar21 = 0;
LAB_01a3a576:
          pVar29 = 0;
LAB_01a3a578:
          bVar30 = 0;
        }
        else {
          uVar35 = FUN_01a362b0();
          fVar32 = (float)uVar35;
          fVar53 = (float)((uint64_t)uVar35 >> 0x20);
          auVar58._8_4_ = (int)extraout_XMM0_Qb_02;
          auVar58._0_8_ = uVar35;
          auVar58._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
          if ((((fVar32 != (float)g_023dccec) || (NAN(fVar32) || NAN((float)g_023dccec))) ||
              (fVar53 != g_023dccec._4_4_)) ||
             (((NAN(fVar53) || NAN(g_023dccec._4_4_) || (auVar55._0_4_ != (float)g_023dccf4)) ||
              (NAN(auVar55._0_4_) || NAN((float)g_023dccf4))))) {
LAB_01a394e1:
            auVar55 = blendps(auVar58,ZEXT416((uint)(g_02394248 + fVar32)),1);
          }
          else {
            if ((auVar55._4_4_ != g_023dccf4._4_4_) ||
               (NAN(auVar55._4_4_) || NAN(g_023dccf4._4_4_))) goto LAB_01a394e1;
            auVar55._4_4_ = g_023dccec._4_4_;
            auVar55._0_4_ = (float)g_023dccec;
            auVar55._8_8_ = 0;
          }
          cVar17 = FUN_00d05410();
          if (cVar17 == '\0') {
            uVar35 = FUN_01a36510();
            fVar32 = (float)((uint64_t)uVar35 >> 0x20);
            auVar59._8_4_ = (int)extraout_XMM0_Qb_07;
            auVar59._0_8_ = uVar35;
            auVar59._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
            fVar53 = auVar55._0_4_;
            fVar57 = auVar55._4_4_;
            auVar55 = auVar59;
            if (((float)uVar35 == (float)g_023dccec) &&
               (!NAN((float)uVar35) && !NAN((float)g_023dccec))) {
              if ((fVar32 == g_023dccec._4_4_) && (!NAN(fVar32) && !NAN(g_023dccec._4_4_))) {
                if ((fVar53 == (float)g_023dccf4) && (!NAN(fVar53) && !NAN((float)g_023dccf4)))
                {
                  if ((fVar57 == g_023dccf4._4_4_) && (!NAN(fVar57) && !NAN(g_023dccf4._4_4_)))
                  {
                    auVar55._4_4_ = g_023dccec._4_4_;
                    auVar55._0_4_ = (float)g_023dccec;
                    auVar55._8_8_ = 0;
                  }
                }
              }
            }
            cVar17 = FUN_00d05410();
            if (cVar17 == '\0') {
              uVar35 = (**(code **)(*this_ptr + 0x938))();
              auVar60._8_4_ = (int)extraout_XMM0_Qb_08;
              auVar60._0_8_ = uVar35;
              auVar60._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_08 >> 0x20);
              fVar32 = auVar55._0_4_;
              fVar53 = auVar55._4_4_;
              auVar55 = auVar60;
              if (fVar53 <= 0.0 || fVar32 <= 0.0) {
                auVar55._4_4_ = g_023dccec._4_4_;
                auVar55._0_4_ = (float)g_023dccec;
                auVar55._8_8_ = 0;
              }
              cVar17 = FUN_00d05410();
              if (cVar17 == '\0') goto LAB_01a3a574;
              uVar21 = (**(code **)(*(int64_t *)*plVar2 + 0xb0))();
              goto LAB_01a3a576;
            }
            pVar29 = (void*)CONCAT71((int7)((uint64_t)plVar25 >> 8),1);
            uVar21 = 0;
            goto LAB_01a3a578;
          }
          bVar30 = 1;
          uVar21 = 0;
          pVar29 = 0;
        }
        local_2f8._0_4_ = uVar21;
        local_1c8._0_4_ = pVar29;
        local_1b8[0] = (bVar30 | (byte)uVar21 | (byte)pVar29) ^ 1;
        if (((local_1b8[0] == 0) && (iVar20 != 2)) && (uVar23 = FUN_01d3b590(), (uVar23 & 4) == 0))
        {
          puVar26 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar29 = 0x25d84d8;
          *puVar26 = &g_025d84d8;
          puVar26[7] = 0;
          puVar26[8] = 0;
          (*g_025d84f0)();
          puVar1 = (void*)this_ptr[0x2a];
          if (puVar1 == puVar26) {
            FUN_00d50b20();
          }
          else {
            this_ptr[0x2a] = (int64_t)puVar26;
            if (puVar1 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          (**(code **)(*this_ptr + 0xa30))();
          FUN_01a3c1e0();
          (**(code **)(*this_ptr + 0xa38))();
          FUN_01a3c3c0();
        }
        if (this_ptr[0x2a] == 0) {
          local_d8 = (double)(**(code **)(*this_ptr + 0xa30))();
          local_68 = (int64_t *)(**(code **)(*this_ptr + 0xa38))();
        }
        else {
          pvVar27 = _pthread_getspecific(pVar29);
          if (pvVar27 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_d8 = (double)FUN_013201a0();
          pvVar27 = _pthread_getspecific(pVar29);
          if (pvVar27 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_68 = (int64_t *)FUN_01320130();
        }
        if (iVar20 == 2) {
          (**(code **)(*this_ptr + 0x938))();
          FUN_00d05530();
          fVar32 = extraout_XMM0_Da;
          fVar53 = extraout_XMM0_Db;
          cVar17 = FUN_00d05410();
          if ((cVar17 != '\0') && (uVar23 = FUN_01d3b590(), (uVar23 & 4) != 0)) {
            local_1e8 = '\0';
            local_1f0 = 0;
            (**(code **)(*this_ptr + 0x918))(extraout_XMM0_Qa_00,1);
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
            if ((local_1e8 != '\0') &&
               (local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8), local_1f0 != 0)
               ) {
              FUN_00d50b20();
            }
            goto LAB_01a3b1dd;
          }
          uVar35 = (**(code **)(*this_ptr + 0x938))();
          auVar55._8_4_ = (int)extraout_XMM0_Qb_09;
          auVar55._0_8_ = uVar35;
          auVar55._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_09 >> 0x20);
          if (fVar53 <= 0.0 || fVar32 <= 0.0) {
            auVar55._4_4_ = g_023dccec._4_4_;
            auVar55._0_4_ = (float)g_023dccec;
            auVar55._8_8_ = 0;
          }
          cVar17 = FUN_00d05410();
          if (cVar17 != '\0') {
            plVar2 = (int64_t *)*plVar2;
            (**(code **)(*plVar2 + 0xb0))();
            (**(code **)(*plVar2 + 0xb8))();
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
            goto LAB_01a3b1dd;
          }
        }
        uVar23 = FUN_01d3b590();
        if ((uVar23 & 4) != 0) {
          iVar20 = FUN_01d3b620();
          if (iVar20 == 1) {
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
            if (*plVar2 != 0) {
              cVar17 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x3c8))();
              if (cVar17 == '\0') {
                bVar31 = false;
              }
              else {
                uVar23 = FUN_01d3b590();
                bVar31 = (uVar23 & 8) == 0;
              }
              auVar51._0_8_ = FUN_01a34a00();
              auVar51._8_8_ = extraout_XMM0_Qb_11;
              auVar52._4_12_ = auVar51._4_12_;
              auVar52._0_4_ = (float)auVar51._0_8_ + local_118;
              local_98._0_8_ = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))(auVar52._0_8_);
              if ((double)local_98._0_8_ <= ((double)local_68 + local_d8) * g_023942d0) {
                if (bVar31) {
                  (**(code **)(*this_ptr + 0x980))();
                  local_98._0_8_ = (**(code **)(*local_60 + 0x370))(local_98._0_8_);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                (**(code **)(*this_ptr + 0xa10))(local_98._0_8_);
                local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
              }
              else {
                if (bVar31) {
                  (**(code **)(*this_ptr + 0x980))();
                  local_98._0_8_ = (**(code **)(*local_60 + 0x370))(local_98._0_8_);
                  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                (**(code **)(*this_ptr + 0xa18))(local_98._0_8_);
                local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
              }
            }
            goto LAB_01a3b1dd;
          }
        }
        uVar35 = FUN_01e3f820();
        local_1a8._0_4_ = (uint32_t)uVar35;
        local_1a8._4_4_ = (uint32_t)((uint64_t)uVar35 >> 0x20);
        FUN_01a34a00();
        dVar36 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
        FUN_01a34a00();
        dVar37 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))();
        pcVar15 = g_025d84f0;
        local_1a8 = (double)in_XMM1._0_4_ / (dVar33 - dVar34);
        local_c8 = auVar55._0_4_;
        dVar33 = g_0238fee8 / (((double)local_c8 / (dVar36 - dVar37)) / g_0241eeb8);
        bVar31 = local_b8 == (int64_t *)0x0 || plVar38 == (int64_t *)0x0;
        plVar25 = (int64_t *)CONCAT71((int7)((uint64_t)g_025d84f0 >> 8),bVar31);
        local_2e8 = (float)CONCAT31(local_2e8._1_3_,bVar31);
        local_80 = (int64_t *)0x0;
        local_70 = 0.0;
        local_98 = in_XMM1;
LAB_01a3a999:
        (**(code **)(*this_ptr + 0x658))();
        plVar16 = local_60;
        plVar38 = (int64_t *)*arg1;
        if (plVar38 != local_60) {
          lVar28 = arg1[1];
          if (local_58 != '\0') {
            *arg1 = (int64_t)local_60;
            if (((char)lVar28 != '\0') && (plVar38 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01a3a9ed;
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar16;
          if (((char)lVar28 != '\0') && (plVar38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a3aa32:
          pVar29 = (void*)plVar25;
          *(void*)(arg1 + 1) = 1;
          if (*arg1 == 0) goto LAB_01a3b06e;
LAB_01a3aa45:
          iVar20 = FUN_01d3a5a0();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar29 = (void*)plVar25;
          if (iVar20 == 6) goto LAB_01a3b082;
          iVar20 = FUN_01d3a5a0();
          if (iVar20 == 5) {
            FUN_01d3abf0();
            fVar32 = (float)FUN_01e466c0();
            dVar34 = (double)(fVar32 - local_118) / local_1a8;
            local_98._0_8_ = dVar34;
            if ((char)local_80 == '\0') {
              if (bVar30 == 0) {
                if (local_1c8[0] == '\0') {
                  if (local_2f8[0] == '\0') {
                    FUN_01e436c0();
                    (**(code **)(*this_ptr + 0x618))();
                    auVar49._0_8_ = FUN_01a34a00();
                    auVar49._8_8_ = extraout_XMM0_Qb_10;
                    auVar50._4_12_ = auVar49._4_12_;
                    auVar50._0_4_ = (float)auVar49._0_8_ + local_118;
                    local_80 = (int64_t *)CONCAT71((int7)((uint64_t)plVar25 >> 8),1);
                    plVar25 = local_80;
                    local_d8 = (double)(**(code **)(*(int64_t *)this_ptr[0x2d] + 0x388))
                                                 (auVar50._0_8_);
                    local_70 = local_d8;
                    local_68 = (int64_t *)local_d8;
                  }
                  else {
                    uVar23 = FUN_01d3b590();
                    local_98._0_8_ = dVar34 + local_d8;
                    if ((uVar23 & 8) == 0) {
                      cVar17 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x3c8))();
                      if (cVar17 != '\0') {
                        local_98._0_8_ = (**(code **)(*local_e0 + 0x370))(dVar34 + local_d8);
                      }
                    }
                    FUN_01a3c1e0(local_98._0_8_);
                    if (local_2e8._0_1_ == '\0') {
                      pvVar27 = _pthread_getspecific((void*)plVar25);
                      if (pvVar27 != (void *)0x0) {
                        lVar28 = FUN_00e8b990();
                        if (lVar28 != 0) {
                          plVar25 = local_b8;
                        }
                      }
                      pvVar27 = _pthread_getspecific((void*)plVar25);
                      if (pvVar27 != (void *)0x0) {
                        lVar28 = FUN_00e8b990();
                        if (lVar28 != 0) {
                          plVar25 = local_b8;
                        }
                      }
                      dVar34 = (double)FUN_016c25f0(local_98._0_8_);
                      local_98._0_8_ = dVar34;
                      pvVar27 = _pthread_getspecific((void*)plVar25);
                      if (pvVar27 != (void *)0x0) {
                        lVar28 = FUN_00e8b990();
                        if (lVar28 != 0) {
                          plVar25 = local_b8;
                        }
                      }
                      dVar36 = (double)FUN_016c25f0(local_68);
                      pvVar27 = _pthread_getspecific((void*)plVar25);
                      if (pvVar27 != (void *)0x0) {
                        lVar28 = FUN_00e8b990();
                        if (lVar28 != 0) {
                          plVar25 = local_b8;
                        }
                      }
                      dVar37 = (double)FUN_016c25f0(local_d8);
                      FUN_016c26c0((dVar34 + dVar36) - dVar37);
                      FUN_01a3c3c0();
                    }
                    else {
                      FUN_01a3c3c0(((double)local_68 - local_d8) + (double)local_98._0_8_);
                    }
                  }
                }
                else {
                  uVar23 = FUN_01d3b590();
                  local_98._0_8_ = dVar34 + (double)local_68;
                  if ((uVar23 & 8) == 0) {
                    cVar17 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x3c8))();
                    if (cVar17 != '\0') {
                      local_98._0_8_ = (**(code **)(*local_e0 + 0x370))(dVar34 + (double)local_68);
                    }
                  }
                  if (this_ptr[0x2a] != 0) {
                    pvVar27 = _pthread_getspecific((void*)plVar25);
                    if (pvVar27 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    dVar34 = (double)FUN_013201a0();
                    if (dVar33 <= (double)local_98._0_8_ - dVar34) {
                      FUN_01a3c3c0(local_98._0_8_);
                    }
                  }
                }
              }
              else {
                uVar23 = FUN_01d3b590();
                local_98._0_8_ = dVar34 + local_d8;
                if ((uVar23 & 8) == 0) {
                  cVar17 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x3c8))();
                  if (cVar17 != '\0') {
                    local_98._0_8_ = (**(code **)(*local_e0 + 0x370))(dVar34 + local_d8);
                  }
                }
                if (this_ptr[0x2a] != 0) {
                  pvVar27 = _pthread_getspecific((void*)plVar25);
                  if (pvVar27 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  dVar34 = (double)FUN_01320130();
                  if (dVar33 <= dVar34 - (double)local_98._0_8_) {
                    FUN_01a3c1e0(local_98._0_8_);
                  }
                }
              }
            }
            else {
              plVar38 = (int64_t *)(local_70 + dVar34);
              if (dVar34 <= g_02390448) {
                plVar38 = local_68;
              }
              uVar23 = FUN_01d3b590();
              local_d8 = (double)(-(uint64_t)(0.0 < dVar34) & (uint64_t)local_d8 |
                                 ~-(uint64_t)(0.0 < dVar34) & (uint64_t)(local_70 + dVar34));
              if ((uVar23 & 8) == 0) {
                cVar17 = (**(code **)(*(int64_t *)this_ptr[0x2d] + 0x3c8))();
                if (cVar17 != '\0') {
                  local_d8 = (double)(**(code **)(*local_e0 + 0x370))();
                  plVar38 = (int64_t *)(**(code **)(*local_e0 + 0x370))(plVar38);
                }
              }
              local_68 = plVar38;
              if (dVar33 <= (double)plVar38 - local_d8) {
                puVar26 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar26 = &g_025d84d8;
                puVar26[7] = 0;
                puVar26[8] = 0;
                (*pcVar15)();
                puVar1 = (void*)this_ptr[0x2a];
                if (puVar1 == puVar26) {
                  FUN_00d50b20();
                }
                else {
                  this_ptr[0x2a] = (int64_t)puVar26;
                  if (puVar1 != (void*)0x0) {
                    FUN_00d50b20();
                  }
                }
                FUN_01a3c1e0();
                FUN_01a3c3c0(plVar38);
                cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0xb0))();
                if (cVar17 == '\0') {
                  (**(code **)(*(int64_t *)*plVar2 + 0xb8))();
                }
                (**(code **)(*this_ptr + 0x620))();
              }
            }
          }
          goto LAB_01a3a999;
        }
        if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_01a3aa32;
          }
LAB_01a3a9ed:
          *(void*)(arg1 + 1) = 1;
          local_58 = '\0';
        }
        pVar29 = (void*)plVar25;
        if (*arg1 != 0) goto LAB_01a3aa45;
LAB_01a3b06e:
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01a3b082:
        if (((local_1b8[0] & (char)local_80 == '\0') == 0) && (*arg1 != 0)) {
          iVar20 = FUN_01d3a5a0();
          if ((iVar20 == 6) && (this_ptr[0x2a] != 0)) {
            pvVar27 = _pthread_getspecific(pVar29);
            if (pvVar27 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar35 = FUN_013201a0();
            pvVar27 = _pthread_getspecific(pVar29);
            if (pvVar27 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01320130();
            (**(code **)(*this_ptr + 0xa08))(uVar35);
            if ((char)local_80 != '\0') {
              cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0xb0))();
              if (cVar17 == '\0') {
                (**(code **)(*(int64_t *)*plVar2 + 0xb8))();
              }
            }
            if (this_ptr[0x2a] != 0) {
              this_ptr[0x2a] = 0;
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01a3b1b3:
      cVar17 = (**(code **)(*(int64_t *)*plVar2 + 0xa0))();
      if (cVar17 != '\0') {
        (**(code **)(*(int64_t *)*plVar2 + 0x90))();
      }
      goto LAB_01a3b1dd;
    }
  }
  local_1e0 = *arg1;
  local_1d8 = '\0';
  FUN_01e459c0();
  local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
  if ((local_1d8 != '\0') &&
     (local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8), local_1e0 != 0)) {
    FUN_00d50b20();
    local_1a8 = (double)CONCAT44(local_1a8._4_4_,(uint32_t)local_1a8);
  }
LAB_01a3b1dd:
  if (local_e0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar14 && local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

