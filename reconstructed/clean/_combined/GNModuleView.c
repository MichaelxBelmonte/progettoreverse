// ===================================================================
// GNModuleView — Complete reconstructed pseudocode
// 12 functions
// ===================================================================

// Registered properties (7):
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


// ============================================================
// 01eb7cc0
// ============================================================
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



// ============================================================
// 01eba210
// ============================================================
// Function: FUN_01eba210
// Address: 01eba210
// Size: 2210 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_01eba210(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  void*arg1;
  int64_t this_ptr;
  bool bVar5;
  uint32_t uVar6;
  int64_t local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  void*local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_60 + 0x6c0))();
  if (cVar3 == '\0') {
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = FUN_00cafdf0();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01cb4790();
      local_68 = local_60;
      if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48370();
      plVar1 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x390))();
      FUN_00d403d0();
      local_170 = g_027fe478;
      if (g_027fe478 != 0) {
        FUN_00d50b00();
      }
      local_168 = '\x01';
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      local_160 = 0;
      local_158 = '\0';
      FUN_00d40470(&local_160,&stack0xfffffffffffffed0,3,3);
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_68 + 0x3a0))();
      lVar4 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      (**(code **)(*local_68 + 0x3a8))();
      local_e8 = local_78;
      local_e0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_e0 = '\x01';
      FUN_01cfd290(g_0239011c,&local_e8);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b0))();
      (**(code **)(*local_68 + 0x3a0))();
      local_d8 = local_60;
      local_d0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_d0 = '\x01';
      FUN_01d488d0();
      if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_150 = g_027fe480;
      if (g_027fe480 != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      if (this_ptr != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027fe488;
      if (g_027fe488 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      FUN_00083ea0(2,&local_178);
      FUN_000b4da0();
      local_c8 = local_78;
      local_c0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_c0 = '\x01';
      FUN_00d40470(&local_c8,&stack0xfffffffffffffee0,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(g_02390124);
      plVar1 = (int64_t *)*arg1;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b8))();
      (**(code **)(*local_68 + 0x370))();
      local_b8 = local_60;
      local_b0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_b0 = '\x01';
      FUN_01d48a10();
      if ((local_b0 != '\0') && (local_b8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027fe490;
      lVar4 = *(int64_t *)(this_ptr + 0x138);
      if (lVar4 == 0) {
        if (g_027fe490 != 0) {
          FUN_00d50b00();
        }
        bVar5 = lVar2 != 0;
        lVar4 = lVar2;
      }
      else {
        FUN_00d50b00();
        bVar5 = true;
      }
      if (lVar4 != 0) {
        (**(code **)(*local_68 + 0x370))();
        local_a8 = local_60;
        local_a0 = 0;
        if (local_58 == '\0') {
          if (local_60 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_a0 = '\x01';
        FUN_01d48a10();
        if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_68 + 0x390))();
        local_98 = local_60;
        local_90 = 0;
        if (local_58 == '\0') {
          if (local_60 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_90 = '\x01';
        FUN_01d488d0();
        if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (int64_t *)*arg1;
        local_138 = '\0';
        local_140 = lVar4;
        FUN_01e3f820();
        uVar6 = FUN_00d05530();
        (**(code **)(*plVar1 + 0x3f8))(uVar6,2);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48390();
      if ((bVar5) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00331550
// ============================================================
// Function: FUN_00331550
// Address: 00331550
// Size: 1389 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_00331550(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t **pplVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  (**(code **)(*local_68 + 0x4a0))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar6) break;
      plVar1 = *(int64_t **)(local_48[2] + 8 + lVar3 * 8);
      local_58 = plVar1;
      if ((g_026e5340 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_027e7718 = FUN_0006d940();
        g_027e7700 = "GNModuleView";
        g_027e7708 = 0x178;
        g_027e7710 = FUN_00191170;
        g_027e7720 = 0;
        ram_00000000027e7728 = 0;
        g_027e7730 = 0;
        ram_00000000027e7738 = 0;
        g_027e7740 = 0;
        ram_00000000027e7748 = 0;
        g_027e7750 = 0;
        ram_00000000027e7758 = 0;
        g_027e7760 = 0;
        ram_00000000027e7768 = 0;
        g_027e7770 = 0;
        ram_00000000027e7778 = 0;
        g_027e7780 = 0;
        ram_00000000027e7788 = 0;
        g_027e7790 = 0;
        ram_00000000027e7798 = 0;
        g_027e77a0 = 0;
        ram_00000000027e77a8 = 0;
        g_027e77b0 = 0;
        ram_00000000027e77b8 = 0;
        g_027e77c0 = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_003316c1;
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
        if (*pplVar5 != (int64_t *)0x0) {
LAB_003316c1:
          FUN_01ebbf20();
          plVar1 = local_d8;
          FUN_00335590();
          pplVar5 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_d8;
            if (cVar2 == '\0') {
              pplVar5 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar5;
          if (*(char *)(pplVar5 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar5 + 1) = 0;
          }
          local_60 = '\0';
          local_68 = plVar1;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x1d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x998))();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  plVar1 = local_58;
  local_c8 = g_026e3e50;
  if (g_026e3e50 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    local_b0 = '\0';
    local_b8 = 0;
    (**(code **)(*this_ptr + 0x5e0))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = 0;
  FUN_00d50b00();
  local_a8 = g_026d88e0;
  local_70 = '\x01';
  local_78 = this_ptr;
  if (g_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6cf0;
  local_a0 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar3;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  plVar1 = (int64_t *)this_ptr[0x29];
  plVar4 = plVar1;
  if (plVar1 == local_58) goto LAB_00331a4d;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      plVar4 = (int64_t *)0x0;
      goto LAB_003319d0;
    }
    FUN_00d50b00();
    plVar1 = (int64_t *)this_ptr[0x29];
    this_ptr[0x29] = (int64_t)local_58;
    plVar4 = local_58;
  }
  else {
    local_50 = '\0';
    plVar4 = local_58;
LAB_003319d0:
    this_ptr[0x29] = (int64_t)plVar4;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar4 = local_58;
  }
LAB_00331a4d:
  if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00331e40();
  return;
}



// ============================================================
// 007eb9c0
// ============================================================
// Function: FUN_007eb9c0
// Address: 007eb9c0
// Size: 790 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_007eb9c0(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t **pplVar4;
  int iVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  uVar6 = (**(code **)(*local_40 + 0x4a0))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar5 = 0;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar5);
          uVar6 = FUN_00d23690(uVar6,iVar5);
          local_48 = local_48 + iVar5;
          iVar5 = 0;
        }
        local_50 = CONCAT44(iVar5,(int)local_50);
      }
      lVar3 = (int64_t)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar5) break;
      plVar1 = *(int64_t **)(local_58[2] + 8 + lVar3 * 8);
      local_68 = plVar1;
      if ((g_026e5340 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar5 != 0)) {
        g_027e7718 = FUN_0006d940();
        g_027e7700 = "GNModuleView";
        g_027e7708 = 0x178;
        g_027e7710 = FUN_00191170;
        g_027e7720 = 0;
        ram_00000000027e7728 = 0;
        g_027e7730 = 0;
        ram_00000000027e7738 = 0;
        g_027e7740 = 0;
        ram_00000000027e7748 = 0;
        g_027e7750 = 0;
        ram_00000000027e7758 = 0;
        g_027e7760 = 0;
        ram_00000000027e7768 = 0;
        g_027e7770 = 0;
        ram_00000000027e7778 = 0;
        g_027e7780 = 0;
        ram_00000000027e7788 = 0;
        g_027e7790 = 0;
        ram_00000000027e7798 = 0;
        g_027e77a0 = 0;
        ram_00000000027e77a8 = 0;
        g_027e77b0 = 0;
        ram_00000000027e77b8 = 0;
        g_027e77c0 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_68;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (*pplVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_007ebb21;
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
        if (*pplVar4 != (int64_t *)0x0) {
LAB_007ebb21:
          FUN_01ebbf20();
          plVar1 = local_78;
          FUN_00335590();
          pplVar4 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar4 = &local_78;
            if (cVar2 == '\0') {
              pplVar4 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar4;
          if (*(char *)(pplVar4 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar4 + 1) = 0;
          }
          local_38 = '\0';
          local_40 = plVar1;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00d50b20();
        }
      }
      iVar5 = local_50._4_4_;
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_007ebe20();
  return;
}



// ============================================================
// 01e02540
// ============================================================
// Function: FUN_01e02540
// Address: 01e02540
// Size: 833 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_01e02540(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t arg1;
  void*this_ptr;
  bool bVar6;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x140);
  if (plVar1 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
LAB_01e025a4:
    FUN_01e4b940();
LAB_01e02681:
    if (local_48 != (int64_t *)0x0) goto LAB_01e02686;
  }
  else {
    FUN_00d50b00();
    local_48 = (int64_t *)0x0;
    (**(code **)(*plVar1 + 0x370))();
    if (local_40 == (int64_t *)0x0) {
      if (local_38 != '\0') {
        local_48 = (int64_t *)0x0;
      }
LAB_01e025df:
      if (local_48 != (int64_t *)0x0) goto LAB_01e025e8;
      goto LAB_01e02725;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e025df;
    }
    local_48 = local_40;
LAB_01e025e8:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == local_48) {
      FUN_01e4b940();
      goto LAB_01e02681;
    }
    if ((g_026e5340 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027e7718 = FUN_0006d940();
      g_027e7700 = "GNModuleView";
      g_027e7708 = 0x178;
      g_027e7710 = FUN_00191170;
      g_027e7720 = 0;
      ram_00000000027e7728 = 0;
      g_027e7730 = 0;
      ram_00000000027e7738 = 0;
      g_027e7740 = 0;
      ram_00000000027e7748 = 0;
      g_027e7750 = 0;
      ram_00000000027e7758 = 0;
      g_027e7760 = 0;
      ram_00000000027e7768 = 0;
      g_027e7770 = 0;
      ram_00000000027e7778 = 0;
      g_027e7780 = 0;
      ram_00000000027e7788 = 0;
      g_027e7790 = 0;
      ram_00000000027e7798 = 0;
      g_027e77a0 = 0;
      ram_00000000027e77a8 = 0;
      g_027e77b0 = 0;
      ram_00000000027e77b8 = 0;
      g_027e77c0 = 0;
      ___cxa_guard_release();
    }
    plVar2 = g_02802688;
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar2 = g_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_48;
      }
    }
    if (plVar2 == (int64_t *)0x0) {
LAB_01e02725:
      (**(code **)(*plVar1 + 0x398))();
      if (local_40 == local_48) {
LAB_01e02788:
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = (int64_t *)0x0;
        plVar2 = local_48;
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = local_48 != (int64_t *)0x0;
          local_48 = local_40;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_01e02788;
        }
        plVar3 = local_40;
        plVar2 = local_40;
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar3 = local_40;
        }
      }
      local_48 = plVar3;
      if (plVar2 != (int64_t *)0x0) {
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        goto LAB_01e027ad;
      }
      goto LAB_01e025a4;
    }
    (**(code **)(*local_48 + 0x978))();
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != local_58) goto LAB_01e02725;
    FUN_01e4b940();
LAB_01e02686:
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01e027ad:
  FUN_00d50b20();
  return;
}



// ============================================================
// 007ebe20
// ============================================================
// Function: FUN_007ebe20
// Address: 007ebe20
// Size: 1648 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_007ebe20(int64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  void *pvVar3;
  void* pVar4;
  int64_t this_ptr;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t local_a0;
  char local_98;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t local_48;
  char local_40;
  
  FUN_007ec8d0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_007ec180;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_007ec180:
    bVar2 = true;
    plVar1 = *(int64_t **)(this_ptr + 0xe8);
    goto joined_r0x007ec17c;
  }
  local_60 = -1;
  while (local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
    pVar4 = (void*)*(void*)(local_78 + 0x10);
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01367820();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  param_1 = local_78;
  FUN_001159b0();
  bVar2 = false;
  plVar1 = *(int64_t **)(this_ptr + 0xe8);
joined_r0x007ec17c:
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x998))();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xe0) + 0x918))();
  if (!bVar2) {
    if (*(int *)(local_78 + 0xc) < 1) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar5 = 0;
      iVar7 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268710();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 != 0) break;
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar3 = _pthread_getspecific((void*)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb7a0();
          if (local_40 != '\0') {
            local_40 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          iVar7 = (iVar7 + 1) - (uint)(MACH_HEADER.filetype == 0);
          FUN_00d50b20();
          iVar5 = iVar5 + 1;
          if (*(int *)(local_78 + 0xc) <= iVar5) goto LAB_007ec453;
        }
        (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x918))();
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_78 + 0xc));
    }
LAB_007ec453:
    FUN_001159b0();
    if ((0 < iVar6) && (0 < iVar7)) {
      bVar2 = false;
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
  (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x918))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00331e40
// ============================================================
// Function: FUN_00331e40
// Address: 00331e40
// Size: 672 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_00331e40(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026e1810;
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    if (g_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar1;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (int64_t *)0x0 & bVar3) == 1) {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar4 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x140) + 0x478))();
        FUN_0032d440();
      }
    }
    else {
      FUN_01e40eb0();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        FUN_01e53c20();
        plVar2 = local_40;
        local_48 = 0;
        local_50 = *(int64_t *)(this_ptr + 0x140);
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        (**(code **)(*plVar2 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}



// ============================================================
// 01eb9990
// ============================================================
// Function: FUN_01eb9990
// Address: 01eb9990
// Size: 711 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void* FUN_01eb9990(void)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int iVar7;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  FUN_01eb9dd0();
  if (local_48 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    FUN_01e5ca90();
    local_38 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = true;
      local_38 = (int64_t *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar5 + 0x18))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(*plVar5 + 0x570))();
    cVar4 = FUN_01e3f2b0();
    if (cVar4 != '\0') {
      FUN_01e3f240();
    }
    (**(code **)(*local_38 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    (**(code **)(*local_38 + 0x4a0))();
    iVar7 = *(int *)((int64_t)local_48 + 0xc);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (iVar7 < 1) {
      plVar6 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      bVar2 = false;
      plVar6 = (int64_t *)0x0;
      do {
        (**(code **)(*local_38 + 0x4a0))();
        plVar1 = *(int64_t **)local_48[2];
        if (plVar6 == plVar1) {
          if ((!bVar2) && (plVar6 != (int64_t *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
            plVar6 = plVar1;
          }
          else {
            bVar2 = true;
            plVar6 = plVar1;
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar5 + 0x450))();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(char *)(arg1 + 0x140) != '\0') {
      FUN_01e41810(*(void*)(arg1 + 0x144));
    }
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 001932c0
// ============================================================
// Function: FUN_001932c0
// Address: 001932c0
// Size: 578 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_001932c0(void)

{
  int iVar1;
  void*puVar2;
  void*this_ptr;
  
  FUN_0006daf0();
  *this_ptr = &g_02698620;
  this_ptr[2] = &g_02699060;
  this_ptr[0x2a] = 0;
  *(void*)(this_ptr + 0x2b) = 0;
  this_ptr[0x2c] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x28] = 0;
  *(void*)((int64_t)this_ptr + 0x145) = 0;
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x2c] = puVar2;
  }
  iVar1 = g_02802630;
  *(void*)(this_ptr + 0x2d) = 0;
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  this_ptr[0x32] = 0;
  *(void*)(this_ptr + 0x33) = 0;
  this_ptr[0x3c] = 0;
  *(void*)(this_ptr + 0x3d) = 0;
  this_ptr[0x47] = 0;
  this_ptr[0x2e] = 0;
  this_ptr[0x2f] = 0;
  *(void*)((int64_t)this_ptr + 0x17d) = 0;
  this_ptr[0x34] = 0;
  this_ptr[0x35] = 0;
  *(void*)((int64_t)this_ptr + 0x1af) = 0;
  this_ptr[0x37] = 0;
  this_ptr[0x38] = 0;
  this_ptr[0x39] = 0;
  this_ptr[0x3a] = 0;
  *(void*)((int64_t)this_ptr + 0x1d5) = 0;
  this_ptr[0x3e] = 0;
  this_ptr[0x3f] = 0;
  this_ptr[0x40] = 0;
  this_ptr[0x41] = 0;
  this_ptr[0x42] = 0;
  this_ptr[0x43] = 0;
  *(void*)(this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x22a) = 0;
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x47] = puVar2;
    iVar1 = g_02802630;
  }
  *(void*)(this_ptr + 0x48) = 0;
  *(void*)((int64_t)this_ptr + 0x25c) = 0;
  *(void*)(this_ptr + 0x4c) = 0;
  this_ptr[0x4d] = 0;
  this_ptr[0x49] = 0;
  this_ptr[0x4a] = 0;
  *(void*)(this_ptr + 0x4b) = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x4d] = puVar2;
  }
  *(void*)((int64_t)this_ptr + 0x27c) = 0;
  this_ptr[0x4e] = 0;
  *(void*)((int64_t)this_ptr + 0x277) = 0;
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  this_ptr[0x53] = 0;
  return;
}



// ============================================================
// 01eb6770
// ============================================================
// Function: FUN_01eb6770
// Address: 01eb6770
// Size: 1938 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
//   "GNString"
//   "getUIName"
//   "setUIName"
//   "_editUiName"
//   "_editTrimsLoadedView"
//   "_editTrimMargins"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_01eb6770(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028ba430 = "getUIName";
      g_028ba438 = &g_027e7700;
      g_028ba440 = 0;
      g_028ba448 = &g_027fe4a0;
      g_028ba450 = FUN_01ebc0d0;
      g_028ba458 = FUN_01eb6f30;
      g_028ba460 = 0;
      // [STATIC_INIT: property registration]
      g_028ba468 = g_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba478 = "setUIName";
      g_028ba480 = &g_027e7700;
      g_028ba488 = 0;
      g_028ba490 = &g_027fe4a8;
      g_028ba498 = FUN_01ebc170;
      g_028ba4a0 = FUN_01eb6f70;
      g_028ba4a8 = 0;
      ram_00000000028ba4b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba4c0 = "_editUiName";
      g_028ba4c8 = &g_027e7700;
      g_028ba4d0 = 0;
      g_028ba4d8 = &g_027fe4a8;
      g_028ba4e0 = FUN_01ebc170;
      g_028ba4e8 = FUN_01eb7050;
      g_028ba4f0 = 0;
      ram_00000000028ba4f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba508 = "_editTrimsLoadedView";
      g_028ba510 = &g_027e7700;
      g_028ba518 = 0;
      g_028ba520 = &g_027fe4ab;
      g_028ba528 = FUN_01ebc1f0;
      g_028ba530 = FUN_01eb70a0;
      g_028ba538 = 0;
      ram_00000000028ba540 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028ba550 = "_editTrimMargins";
      g_028ba558 = &g_027e7700;
      g_028ba560 = 0;
      g_028ba568 = &g_027fe4ae;
      g_028ba570 = FUN_01ebc210;
      g_028ba578 = FUN_01eb70e0;
      g_028ba580 = 0;
      ram_00000000028ba588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 00332340
// ============================================================
// Function: FUN_00332340
// Address: 00332340
// Size: 560 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


int64_t * FUN_00332340(void)

{
  bool bVar1;
  void*puVar2;
  void *pvVar3;
  void*puVar4;
  int64_t *this_ptr;
  int iVar5;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_003322a0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00332562;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_00332562:
    bVar1 = true;
    iVar5 = *(int *)((int64_t)puVar2 + 0xc);
    goto joined_r0x00332568;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((void*)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        pvVar3 = _pthread_getspecific((void*)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40 = '\0';
        FUN_00d235a0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_001159b0();
  bVar1 = false;
  iVar5 = *(int *)((int64_t)puVar2 + 0xc);
joined_r0x00332568:
  if (iVar5 == 0) {
    *this_ptr = local_80;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  else {
    *this_ptr = (int64_t)puVar2;
    *(void*)(this_ptr + 1) = 1;
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 001912f0
// ============================================================
// Function: FUN_001912f0
// Address: 001912f0
// Size: 1306 bytes
// Class: GNModuleView
// String references:
//   "GNModuleView"
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_001912f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026abbb8;
  this_ptr[2] = &g_026ac560;
  FUN_001918c0();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191b40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191cb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_00191f90();
    FUN_00e87980();
  }
  FUN_00192100();
  FUN_001923f0();
  FUN_001926e0();
  this_ptr[0x2d] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e77bb == '\0') {
    FUN_001929d0();
    FUN_00e87980();
  }
  FUN_00192b40();
  return;
}

