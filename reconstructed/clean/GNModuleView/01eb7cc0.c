// Function: FUN_01eb7cc0
// Address: 01eb7cc0
// Size: 3706 bytes
// Class: GNModuleView
// String references:
//   "%@ not found."
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_01eb7cc0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  char cVar10;
  int64_t *plVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t lVar14;
  char cVar15;
  uint64_t uVar16;
  int64_t *arg1;
  int64_t *this_ptr;
  char cVar17;
  int64_t lVar18;
  int64_t *plVar19;
  uint8_t auVar20 [8];
  bool bVar21;
  uint64_t uVar22;
  uint8_t auVar23 [16];
  float fVar24;
  float fVar25;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  void*local_238;
  char local_230;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  void*local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  int64_t local_138;
  char local_130;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  void*local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t *local_80;
  uint8_t local_78 [16];
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  
  fVar25 = (float)((uint64_t)param_2 >> 0x20);
  fVar24 = (float)param_2;
  if (this_ptr[0x27] == 0) {
    return;
  }
  if (this_ptr[0x2a] != 0) {
    return;
  }
  plVar11 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar22 = (**(code **)(*plVar11 + 0x18))();
  plVar19 = g_027fe460;
  local_b8 = plVar11;
  if (*arg1 != 0) {
    if (g_027fe460 != (int64_t *)0x0) {
      uVar22 = FUN_00d50b00();
    }
    local_58 = plVar19;
    local_50 = local_50 & 0xffffff00;
    FUN_00ca0840(uVar22,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar19 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_02572358;
  (*g_02572370)();
  local_d8 = puVar12;
  FUN_01e5b340();
  uVar22 = FUN_01e5b320();
  local_130 = 0;
  local_138 = this_ptr[0x27];
  lVar18 = 0;
  if (local_138 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_130 = '\x01';
  local_238 = local_d8;
  local_230 = '\0';
  cVar10 = FUN_01e2af10(uVar22,&local_238);
  if ((local_230 != '\0') && (local_238 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  uVar22 = FUN_01e5b320();
  lVar14 = g_027fe468;
  if (cVar10 == '\0') {
    if (g_027fe468 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_218 = lVar14;
    local_210 = '\x01';
    lVar14 = this_ptr[0x27];
    local_50 = 1;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (lVar14 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar14;
    uVar22 = FUN_00cc7b40(uVar22,&local_58);
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar22 = FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  plVar19 = (int64_t *)this_ptr[0x2b];
  if (plVar19 != local_b8) {
    uVar22 = FUN_00d50b00();
    this_ptr[0x2b] = (int64_t)local_b8;
    if (plVar19 != (int64_t *)0x0) {
      uVar22 = FUN_00d50b20();
    }
  }
  if (*arg1 != 0) {
    local_200 = '\0';
    local_208 = *arg1;
    uVar22 = (**(code **)(*this_ptr + 0x960))();
    if ((local_200 != '\0') && (local_208 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  lVar14 = g_027f3818;
  if (g_027f3818 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_1f8 = lVar14;
  local_1f0 = '\x01';
  FUN_000175c0(uVar22,&local_1f8);
  plVar19 = this_ptr + 0x2a;
  plVar11 = (int64_t *)*plVar19;
  plVar13 = plVar11;
  if (plVar11 != local_58) {
    if ((char)local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
        goto LAB_01eb8022;
      }
      FUN_00d50b00();
      plVar11 = (int64_t *)*plVar19;
      *plVar19 = (int64_t)local_58;
      plVar13 = local_58;
    }
    else {
      local_50 = local_50 & 0xffffff00;
      plVar13 = local_58;
LAB_01eb8022:
      *plVar19 = (int64_t)plVar13;
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar13 = local_58;
    }
  }
  if (((char)local_50 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if (*plVar19 == 0) {
    local_80 = (int64_t *)0x0;
    cVar17 = '\0';
    auVar20 = (uint8_t  [8])0x0;
    cVar10 = '\0';
    plVar19 = (int64_t *)0x0;
    cVar15 = '\0';
  }
  else {
    local_c0 = plVar19;
    FUN_01eb9990();
    plVar19 = local_58;
    if (local_58 == (int64_t *)0x0) {
      uVar22 = 0;
      local_80 = (int64_t *)0x0;
LAB_01eb815b:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_78._8_8_;
      local_78 = auVar4 << 0x40;
      plVar19 = (int64_t *)0x0;
      local_98 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uStack_60;
      _local_68 = auVar5 << 0x40;
    }
    else {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      local_80 = plVar19;
      if (*(char *)((int64_t)this_ptr + 0xab) == '\0') {
        _local_68 = ZEXT416(*(uint *)(this_ptr + 0x2d));
        local_78 = ZEXT416(*(uint *)((int64_t)this_ptr + 0x16c));
        FUN_01e3f820();
        auVar27 = ZEXT816(0);
        if (fVar24 < (float)local_68._0_4_) {
          auVar3._4_4_ = local_68._4_4_;
          auVar3._0_4_ = (float)local_68._0_4_ - fVar24;
          auVar3._8_4_ = (float)uStack_60;
          auVar3._12_4_ = uStack_60._4_4_;
          auVar27 = blendps(auVar27,auVar3,1);
          if ((float)local_78._0_4_ <= fVar25) goto LAB_01eb8113;
LAB_01eb8192:
          auVar2._4_4_ = local_78._4_4_;
          auVar2._0_4_ = (float)local_78._0_4_ - fVar25;
          auVar2._8_4_ = local_78._8_4_;
          auVar2._12_4_ = local_78._12_4_;
          auVar27 = insertps(auVar27,auVar2,0x10);
          cVar10 = *(char *)((int64_t)this_ptr + 0x14d);
        }
        else {
          if (fVar25 < (float)local_78._0_4_) goto LAB_01eb8192;
LAB_01eb8113:
          cVar10 = *(char *)((int64_t)this_ptr + 0x14d);
        }
        local_78._4_4_ = fVar25;
        local_78._0_4_ = fVar25;
        local_78._8_4_ = in_XMM1_Dd;
        local_78._12_4_ = in_XMM1_Dd;
        local_148 = (int64_t *)CONCAT44(fVar25,fVar24);
        if (cVar10 != '\0') {
          local_148 = (int64_t *)CONCAT44(fVar25,fVar24);
          fStack_140 = in_XMM1_Dc;
          fStack_13c = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          local_68._4_4_ = fVar25;
          local_68._0_4_ = fVar24;
          uStack_60._0_4_ = in_XMM1_Dc;
          uStack_60._4_4_ = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          auVar27._0_4_ = (float)local_68._0_4_ - (float)local_148;
          auVar27._4_4_ = (float)local_68._4_4_ - local_148._4_4_;
          auVar27._8_4_ = (float)uStack_60 - fStack_140;
          auVar27._12_4_ = uStack_60._4_4_ - fStack_13c;
          auVar26._0_4_ = fVar24 - (float)local_148;
          auVar26._4_4_ = fVar25 - local_148._4_4_;
          auVar26._8_4_ = in_XMM1_Dc - fStack_140;
          auVar26._12_4_ = in_XMM1_Dd - fStack_13c;
          auVar27 = blendps(auVar26,auVar27,0xd);
        }
        fVar24 = auVar27._4_4_;
        if (((auVar27._0_4_ != 0.0) || (fVar24 != 0.0)) || (NAN(fVar24))) {
          local_98 = CONCAT44(fVar24,fVar24);
          uStack_90 = auVar27._12_4_;
          uStack_8c = auVar27._12_4_;
          _local_68 = auVar27;
          cVar10 = (**(code **)(*this_ptr + 0x598))();
          if (cVar10 == '\0') {
            uVar22 = 1;
            goto LAB_01eb815b;
          }
          (**(code **)(*this_ptr + 0x580))();
          auVar23._4_12_ = local_68._4_12_;
          auVar23._0_4_ = local_68._0_4_ + (float)local_148;
          auVar1._4_4_ = local_78._4_4_;
          auVar1._0_4_ = (float)local_78._0_4_ + (float)local_98;
          auVar1._8_4_ = local_78._8_4_;
          auVar1._12_4_ = local_78._12_4_;
          _local_68 = insertps(auVar23,auVar1,0x10);
          (**(code **)(*this_ptr + 0x4e8))();
          (**(code **)(*this_ptr + 0x580))();
          (**(code **)(*plVar19 + 0x4e8))();
        }
        else {
          (**(code **)(*plVar19 + 0x4e8))();
        }
      }
      local_1e8 = plVar19;
      local_1e0 = '\0';
      (**(code **)(*this_ptr + 0x450))();
      if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01eb7b40();
      plVar19 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 == (int64_t *)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_78._8_8_;
        local_78 = auVar6 << 0x40;
        plVar19 = (int64_t *)0x0;
        local_98 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uStack_60;
        _local_68 = auVar7 << 0x40;
      }
      else {
        FUN_01eb7b40();
        uVar22 = FUN_01eb9dd0();
        local_118 = local_d0;
        local_110 = 0;
        if (local_c8 == '\0') {
          if (local_d0 != 0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_110 = '\x01';
        FUN_01d26420(uVar22,&local_118);
        local_68 = (uint8_t  [8])local_58;
        if (local_58 == (int64_t *)0x0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uStack_60;
          _local_68 = auVar9 << 0x40;
          local_98 = 0;
        }
        else if ((char)local_50 == '\0') {
          uVar22 = FUN_00d50b00();
          local_98 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
          if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
          local_98 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((int64_t)local_68 + 0xc) < 1) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_78._8_8_;
          local_78 = auVar8 << 0x40;
          plVar19 = (int64_t *)0x0;
        }
        else {
          lVar18 = 0;
          uVar16 = 0;
          plVar11 = (int64_t *)0x0;
          do {
            lVar14 = *(int64_t *)((int64_t)local_68 + 0x10);
            plVar19 = *(int64_t **)(lVar14 + lVar18 * 8);
            if (plVar11 == plVar19) {
              plVar19 = plVar11;
              if (((char)uVar16 == '\0') && (plVar11 != (int64_t *)0x0)) {
                local_78._1_7_ = (int7)((uint64_t)lVar14 >> 8);
                local_78[0] = 1;
                FUN_00d50b00();
              }
              else {
                local_78._0_8_ = uVar16;
              }
            }
            else {
              if (plVar19 != (int64_t *)0x0) {
                lVar14 = FUN_00d50b00();
              }
              auVar27 = local_78;
              local_78._1_7_ = (int7)((uint64_t)lVar14 >> 8);
              local_78[0] = 1;
              local_78._8_8_ = auVar27._8_8_;
              if (((char)uVar16 != '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            (**(code **)(*plVar19 + 0x480))();
            FUN_01e42030();
            FUN_01d8c6e0();
            plVar11 = local_58;
            local_100 = 0;
            if ((char)local_50 == '\0') {
              if (local_58 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = local_50 & 0xffffff00;
            }
            local_100 = '\x01';
            local_108 = plVar11;
            FUN_01ccad10();
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar19 + 0x478))();
            lVar18 = lVar18 + 1;
            uVar16 = local_78._0_8_ & 0xffffffff;
            plVar11 = plVar19;
          } while (lVar18 < *(int *)((int64_t)local_68 + 0xc));
        }
      }
      plVar11 = (int64_t *)*local_c0;
      FUN_00015ff0();
      if (plVar11 == (int64_t *)0x0) {
        plVar11 = &g_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar10 = FUN_00e85ea0();
        plVar11 = local_c0;
        if (cVar10 == '\0') {
          plVar11 = &g_02802688;
        }
      }
      plVar13 = local_c0;
      uVar22 = CONCAT71((int7)((uint64_t)lVar18 >> 8),1);
      if (*plVar11 != 0) {
        local_1d8 = local_d8;
        local_1d0 = '\0';
        FUN_01e511c0();
        if ((local_1d0 != '\0') && (local_1d8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_1c8 = local_b8;
        local_1c0 = '\0';
        FUN_01e51330();
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_1b8 = local_80;
        local_1b0 = '\0';
        FUN_01e55ee0();
        if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*plVar13 + 0x518))();
        (**(code **)(*(int64_t *)*local_c0 + 0x4e8))();
      }
    }
    plVar11 = local_c0;
    FUN_00d6f370();
    local_148 = local_58;
    if (local_58 != (int64_t *)0x0) {
      local_a0 = uVar22;
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01e42030();
      if (local_58 == (int64_t *)0x0) {
        bVar21 = false;
      }
      else {
        FUN_01e42030();
        FUN_01e4c160();
        bVar21 = local_b0 != 0;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar21) {
        FUN_01e42030();
        FUN_01e4c160();
        local_f8 = local_b0;
        local_f0 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_f0 = '\x01';
        local_1a0 = '\0';
        local_1a8 = 0;
        FUN_00d704d0(&local_1a8,&local_f8);
        plVar13 = local_58;
        if (local_58 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
LAB_01eb89da:
          bVar21 = plVar13 == (int64_t *)0x0;
          if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01eb89da;
          }
          local_50 = local_50 & 0xffffff00;
          bVar21 = false;
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar21) {
          local_190 = '\0';
          local_198 = plVar13;
          (**(code **)(*this_ptr + 0x868))();
          if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01eb8813;
        }
      }
      else {
        plVar13 = (int64_t *)0x0;
LAB_01eb8813:
        plVar11 = (int64_t *)*plVar11;
        FUN_00015ff0();
        if (plVar11 == (int64_t *)0x0) {
LAB_01eb8845:
          plVar11 = &g_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar10 = FUN_00e85ea0();
          plVar11 = local_c0;
          if (cVar10 == '\0') goto LAB_01eb8845;
        }
        plVar11 = (int64_t *)*plVar11;
        if (plVar11 == (int64_t *)0x0) {
          FUN_00d50b00();
        }
        else {
          FUN_00d50b00();
          this_ptr = plVar11;
        }
        FUN_00d403d0();
        local_178 = g_027fe470;
        if (g_027fe470 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_160 = '\0';
        local_158 = 0;
        local_150 = '\0';
        local_168 = this_ptr;
        FUN_00d40470(&local_158,&local_168,1,1);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      uVar22 = local_a0;
    }
    cVar17 = (char)uVar22;
    cVar10 = (char)local_98;
    cVar15 = local_78[0];
    auVar20 = local_68;
    if (local_d8 == (void*)0x0) goto LAB_01eb8a9a;
  }
  FUN_00d50b20();
LAB_01eb8a9a:
  if ((cVar15 != '\0') && (plVar19 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (auVar20 != (uint8_t  [8])0x0)) {
    FUN_00d50b20();
  }
  if ((cVar17 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

