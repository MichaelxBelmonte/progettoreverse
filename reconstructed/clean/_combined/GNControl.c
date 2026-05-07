// ===================================================================
// GNControl — Complete reconstructed pseudocode
// 18 functions
// ===================================================================

// Registered properties (2):
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


// ============================================================
// 01dd7350
// ============================================================
// Function: FUN_01dd7350
// Address: 01dd7350
// Size: 6499 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01dd7350(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint64_t uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint32_t uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint64_t uVar13;
  void*puVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  int iVar17;
  int iVar18;
  int64_t lVar19;
  byte bVar20;
  int64_t lVar21;
  int64_t *arg1;
  uint64_t uVar22;
  int64_t *this_ptr;
  bool bVar23;
  uint64_t unaff_R14;
  byte bVar24;
  byte bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint64_t uVar29;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar30;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  uint32_t extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar31;
  uint32_t extraout_XMM0_Dd_04;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  uint32_t extraout_XMM0_Dd_07;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  int64_t *local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t *local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  uint64_t local_150;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  uint8_t local_138 [16];
  uint64_t local_128;
  float fStack_120;
  float fStack_11c;
  uint64_t local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  uint8_t local_f8 [16];
  uint8_t local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  int64_t *local_d8;
  int64_t *local_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  int64_t *local_a8;
  int local_98;
  int64_t local_80;
  int64_t *local_78;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  char local_31;
  
  plVar1 = (int64_t *)this_ptr[6];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_80 = *arg1;
  local_31 = (char)arg1[1];
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01dd8c7b;
  FUN_01e40eb0();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) goto LAB_01dd8c7b;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 5) && ((char)plVar1[0x4f] != '\0')) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar1 + 0xa28))();
    if (local_50 != (int64_t *)0x0) {
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*local_50 + 0x490))();
      if (local_50 != (int64_t *)0x0) {
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
        (**(code **)(*local_50 + 0x3c0))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    goto LAB_01dd8c7b;
  }
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && ((char)plVar1[0x4f] != '\0')) {
    if ((plVar1[0x2a] != 0) && (FUN_01e1e360(), plVar1[0x2a] != 0)) {
      plVar1[0x2a] = 0;
      FUN_00d50b20();
    }
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar1 + 0xa28))();
    local_d8 = local_50;
    if (local_50 == (int64_t *)0x0) {
      local_150 = 0;
      local_100 = (int64_t *)0x0;
      local_118 = 0;
      local_a8 = (int64_t *)0x0;
    }
    else {
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
      plVar15 = local_d8;
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*plVar15 + 0x490))();
      local_a8 = local_50;
      if (local_50 == (int64_t *)0x0) {
        local_a8 = (int64_t *)0x0;
        local_118 = 0;
      }
      else {
        local_118 = CONCAT71((int7)((uint64_t)local_50 >> 8),1);
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
      }
      local_150 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
      local_100 = local_d8;
    }
    uVar9 = FUN_01d3b620();
    local_f8._0_4_ = uVar9;
    FUN_01e42030();
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_d0 = local_50;
    FUN_01d3abf0();
    local_148 = FUN_01e466c0();
    fVar30 = (float)((uint64_t)local_148 >> 0x20);
    if (*(char *)((int64_t)plVar1 + 0x279) == '\0') {
      auVar32._4_4_ = fVar30;
      auVar32._0_4_ = fVar30;
      auVar32._8_4_ = extraout_XMM0_Dd;
      auVar32._12_4_ = extraout_XMM0_Dd;
      auVar34._4_12_ = auVar32._4_12_;
      auVar34._0_4_ = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((int64_t)plVar1 + 0x174));
      local_98 = -1;
      if ((0.0 <= auVar34._0_4_) && (auVar34._0_4_ < (float)(int)plVar1[0x30])) {
        local_98 = (int)auVar34._0_4_;
      }
    }
    else {
      local_98 = -1;
      auVar34 = ZEXT816(0);
      if ((0.0 <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
        iVar8 = *(int *)(lVar21 + 0x18);
        iVar10 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        uVar22 = 0;
        uVar13 = (uint64_t)(uint)(iVar10 >> 2);
        if (iVar10 >> 2 < 1) {
          uVar13 = uVar22;
        }
        do {
          if (uVar13 == uVar22) goto LAB_01dd78a7;
          fVar31 = *(float *)(*(int64_t *)(lVar21 + 0x10) + uVar22 * 4);
          auVar34 = ZEXT416((uint)fVar31);
          uVar22 = uVar22 + 1;
        } while (fVar31 <= fVar30);
        local_98 = (int)uVar22 + -1;
      }
    }
LAB_01dd78a7:
    plVar15 = (int64_t *)plVar1[0x3e];
    fStack_140 = extraout_XMM0_Dc;
    fStack_13c = extraout_XMM0_Dd;
    if (plVar15 == (int64_t *)0x0) {
      uVar11 = 1;
    }
    else {
      if (*(char *)((int64_t)plVar1 + 0x279) == '\0') {
        fVar30 = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((int64_t)plVar1 + 0x174));
        iVar8 = -1;
        auVar34 = ZEXT816(0);
        if ((0.0 <= fVar30) &&
           (auVar34 = ZEXT416((uint)(float)(int)plVar1[0x30]), fVar30 < (float)(int)plVar1[0x30])) {
          iVar8 = (int)fVar30;
        }
      }
      else {
        iVar8 = -1;
        auVar34 = ZEXT816(0);
        if ((0.0 <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
          iVar10 = *(int *)(lVar21 + 0x18);
          iVar17 = iVar10 + 3;
          if (-1 < iVar10) {
            iVar17 = iVar10;
          }
          uVar22 = 0;
          uVar13 = (uint64_t)(uint)(iVar17 >> 2);
          if (iVar17 >> 2 < 1) {
            uVar13 = uVar22;
          }
          do {
            if (uVar13 == uVar22) goto LAB_01dd7967;
            fVar31 = *(float *)(*(int64_t *)(lVar21 + 0x10) + uVar22 * 4);
            auVar34 = ZEXT416((uint)fVar31);
            uVar22 = uVar22 + 1;
          } while (fVar31 <= fVar30);
          iVar8 = (int)uVar22 + -1;
        }
      }
LAB_01dd7967:
      iVar10 = FUN_01dd3800((int)local_148);
      if (iVar10 == -1) {
        local_160 = 0;
      }
      else {
        local_160 = *(int64_t *)(*(int64_t *)(plVar1[0x2c] + 0x10) + (int64_t)iVar10 * 8);
        if (local_160 != 0) {
          FUN_00d50b00();
        }
      }
      local_158 = '\x01';
      local_260 = local_a8;
      local_258 = '\0';
      uVar11 = (**(code **)(*plVar15 + 0x48))(&local_160,iVar8,&local_260);
      if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    local_138[0] = local_98 != -1;
    bVar25 = uVar11 < 2;
    uVar12 = FUN_01d3b590();
    uVar22 = (uint64_t)uVar12;
    uVar13 = FUN_01d3b590();
    bVar24 = uVar11 - 1 < 2 & local_138[0];
    bVar26 = false;
    if (((bVar24 != 0) && (bVar26 = false, (uVar12 & 2) == 0)) && ((uVar13 & 4) == 0)) {
      iVar8 = FUN_01d3b630();
      bVar26 = iVar8 == 1;
    }
    if ((int)plVar1[0x29] != -1) {
      FUN_01dd96d0();
    }
    if ((local_f8._0_4_ == 1) && (local_d0 != (int64_t *)0x0)) {
      local_c8 = CONCAT44(local_c8._4_4_,uVar12);
      FUN_01d8b200();
      local_e8[0] = bVar25;
      if (local_50 == plVar1) {
        bVar20 = 0;
      }
      else {
        iVar8 = FUN_01d3b630();
        bVar20 = iVar8 == 1 & bVar24;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar25 = local_e8[0];
      uVar22 = local_c8 & 0xffffffff;
      if (bVar20 != 0) {
        FUN_01e42250();
      }
    }
    uVar5 = local_c8 >> 0x20;
    local_c8 = uVar5 << 0x20;
    if (bVar24 == 0) {
LAB_01dd7c5f:
      local_c8 = uVar5 << 0x20;
      bVar28 = false;
    }
    else {
      if ((uVar22 & 2) == 0) {
        if (((uVar13 & 4) == 0) || (local_f8._0_4_ != 1)) {
          if ((local_f8._0_4_ != 1) || (local_c8 = uVar5 << 0x20, (int)plVar1[0x36] == local_98))
          goto LAB_01dd7c5f;
          lVar21 = plVar1[0x34];
          if (lVar21 != 0) {
            iVar8 = *(int *)(lVar21 + 0x18);
            iVar10 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar10 = iVar8;
            }
            if (3 < iVar8) {
              lVar19 = 0;
              do {
                if (*(int *)(*(int64_t *)(lVar21 + 0x10) + lVar19 * 4) == local_98) {
                  local_c8 = uVar5 << 0x20;
                  bVar28 = false;
                  goto LAB_01dd7c61;
                }
                lVar19 = lVar19 + 1;
              } while (iVar10 >> 2 != (int)lVar19);
            }
          }
          bVar26 = false;
          uVar29 = FUN_01dd3d20();
          local_c8 = CONCAT44(local_c8._4_4_,(int)CONCAT71((int7)((uint64_t)uVar29 >> 8),1));
          bVar28 = true;
          goto LAB_01dd7c61;
        }
        FUN_01dd4110();
      }
      else if ((int)plVar1[0x36] == local_98) {
LAB_01dd7b99:
        FUN_01dd4720();
      }
      else {
        lVar21 = plVar1[0x34];
        if (lVar21 != 0) {
          iVar8 = *(int *)(lVar21 + 0x18);
          iVar10 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
          if (3 < iVar8) {
            lVar19 = 0;
            do {
              if (*(int *)(*(int64_t *)(lVar21 + 0x10) + lVar19 * 4) == local_98)
              goto LAB_01dd7b99;
              lVar19 = lVar19 + 1;
            } while (iVar10 >> 2 != (int)lVar19);
          }
        }
        FUN_01dd3d20();
      }
      bVar28 = true;
      local_c8 = local_c8 & 0xffffffff00000000;
      bVar26 = false;
    }
LAB_01dd7c61:
    bVar23 = true;
    if ((int)local_f8._0_4_ < 2) {
      bVar23 = bVar28;
    }
    bVar26 = (bool)((int)local_f8._0_4_ < 2 & bVar26);
    if ((bVar25 & local_138[0] & local_a8 != (int64_t *)0x0) == 0) {
      bVar28 = true;
      if (local_a8 == (int64_t *)0x0) {
        bVar27 = false;
        goto LAB_01dd833d;
      }
LAB_01dd7d44:
      bVar27 = false;
      if (*arg1 == 0) goto LAB_01dd833d;
      local_78._0_4_ = -1;
      fStack_120 = fStack_140;
      fStack_11c = fStack_13c;
      iVar8 = -1;
      local_128 = local_148;
      do {
        (**(code **)(*this_ptr + 0x658))();
        plVar15 = (int64_t *)*arg1;
        if (plVar15 == local_50) {
          if (((char)arg1[1] != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_01dd7ded;
          if (local_48 != '\0') goto LAB_01dd7de1;
          FUN_00d50b00();
LAB_01dd7e38:
          *(void*)(arg1 + 1) = 1;
          if (*arg1 != 0) goto LAB_01dd7df5;
LAB_01dd7e48:
          bVar27 = false;
        }
        else {
          lVar21 = arg1[1];
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *arg1 = (int64_t)local_50;
            if (((char)lVar21 != '\0') && (plVar15 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01dd7e38;
          }
          *arg1 = (int64_t)local_50;
          if (((char)lVar21 != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01dd7de1:
          *(void*)(arg1 + 1) = 1;
          local_48 = '\0';
LAB_01dd7ded:
          if (*arg1 == 0) goto LAB_01dd7e48;
LAB_01dd7df5:
          iVar10 = FUN_01d3a5a0();
          bVar27 = iVar10 != 6;
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar27) break;
        iVar10 = FUN_01d3a5a0();
        if (iVar10 == 5) {
          FUN_01d3abf0();
          uVar29 = FUN_01e466c0();
          iVar10 = iVar8;
          if ((int)local_78 == -1) {
            local_78._0_4_ = local_98;
            iVar10 = local_98;
          }
          fStack_120 = extraout_XMM0_Dc_00;
          fStack_11c = extraout_XMM0_Dd_00;
          local_128 = uVar29;
          if (((char)plVar1[0x3d] != '\0') || ((char)plVar1[0x46] != '\0')) {
            bVar25 = local_138[0];
            if (*(char *)((int64_t)plVar1 + 0x1b5) != '\0') {
              local_240 = local_80;
              local_238 = '\0';
              local_230 = *arg1;
              local_228 = '\0';
              bVar25 = (**(code **)(*plVar1 + 0x9e0))(local_c8 & 0xff,&local_230);
              if ((local_228 != '\0') && (local_230 != 0)) {
                FUN_00d50b20();
              }
              bVar25 = bVar25 & local_98 != -1;
              if ((local_238 != '\0') && (local_240 != 0)) {
                FUN_00d50b20();
              }
            }
            if (bVar25 != 0) {
              bVar26 = false;
              bVar27 = false;
              bVar6 = false;
              if (!bVar23) goto LAB_01dd83cb;
              goto LAB_01dd83b8;
            }
          }
          iVar8 = iVar10;
          if (*(char *)((int64_t)plVar1 + 0x1b5) == '\0') {
LAB_01dd80ee:
            bVar26 = false;
            iVar8 = iVar10;
          }
          else {
            bVar26 = false;
            if ((*(char *)((int64_t)plVar1 + 0x1b6) != '\0') && ((int)local_78 != -1)) {
              FUN_01e3f820();
              auVar33._4_4_ = -(uint)(fStack_120 < extraout_XMM0_Dc_01);
              auVar33._0_4_ = -(uint)(local_128._4_4_ < extraout_XMM0_Db);
              auVar33._8_4_ = -(uint)(fStack_11c < extraout_XMM0_Dd_01);
              auVar33._12_4_ = 0;
              auVar33 = auVar33 << 0x20;
              fStack_e0 = fStack_120;
              local_e8 = (uint8_t  [8])local_128;
              fStack_dc = fStack_11c;
              if ((-(uint)(local_128._4_4_ < extraout_XMM0_Db) & 1) != 0) {
                uVar29 = FUN_01e3f820();
                auVar4._8_4_ = fStack_120;
                auVar4._0_8_ = local_128;
                auVar4._12_4_ = fStack_11c;
                auVar2._8_4_ = extraout_XMM0_Dc_02;
                auVar2._0_8_ = uVar29;
                auVar2._12_4_ = extraout_XMM0_Dd_02;
                auVar33 = blendps(auVar4,auVar2,2);
                _local_e8 = auVar33;
              }
              FUN_01e3f820();
              auVar34 = _local_e8;
              if (extraout_XMM0_Db_00 + auVar33._4_4_ + g_02390d00 < (float)local_e8._4_4_) {
                FUN_01e3f820();
                fVar30 = extraout_XMM0_Db_01 + auVar33._4_4_;
                fVar31 = extraout_XMM0_Dd_03 + auVar33._12_4_;
                auVar3._4_4_ = fVar30;
                auVar3._0_4_ = fVar30 + g_02390d00;
                auVar3._8_4_ = fVar31;
                auVar3._12_4_ = fVar31;
                auVar34 = insertps(_local_e8,auVar3,0x10);
              }
              fVar30 = auVar34._4_4_;
              if (*(char *)((int64_t)plVar1 + 0x279) == '\0') {
                fVar30 = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((int64_t)plVar1 + 0x174))
                ;
                iVar8 = -1;
                auVar34 = ZEXT816(0);
                if ((0.0 <= fVar30) &&
                   (auVar34 = ZEXT416((uint)(float)(int)plVar1[0x30]),
                   fVar30 < (float)(int)plVar1[0x30])) {
                  iVar8 = (int)fVar30;
                }
              }
              else {
                iVar8 = -1;
                if ((g_0239424c <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
                  iVar17 = *(int *)(lVar21 + 0x18);
                  iVar18 = iVar17 + 3;
                  if (-1 < iVar17) {
                    iVar18 = iVar17;
                  }
                  uVar13 = (uint64_t)(uint)(iVar18 >> 2);
                  if (iVar18 >> 2 < 1) {
                    uVar13 = 0;
                  }
                  uVar22 = 0;
                  do {
                    if (uVar13 == uVar22) goto LAB_01dd80e9;
                    fVar31 = *(float *)(*(int64_t *)(lVar21 + 0x10) + uVar22 * 4);
                    auVar34 = ZEXT416((uint)fVar31);
                    uVar22 = uVar22 + 1;
                  } while (fVar31 <= fVar30);
                  iVar8 = (int)uVar22 + -1;
                }
              }
LAB_01dd80e9:
              if (iVar10 == iVar8) goto LAB_01dd80ee;
              if (((int)local_78 < iVar10) || ((iVar10 == (int)local_78 && ((int)local_78 < iVar8)))
                 ) {
                if (iVar10 < iVar8) {
                  do {
                    fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    iVar10 = iVar10 + 1;
                  } while (iVar8 + 1 != iVar10);
                }
                else {
                  for (; iVar8 < iVar10; iVar10 = iVar10 + -1) {
                    if ((int)local_78 < iVar10) {
                      fVar30 = (float)FUN_01dd4720();
                    }
                    else {
                      fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    }
                  }
                }
              }
              else if ((iVar10 < (int)local_78) ||
                      ((iVar10 == (int)local_78 && (iVar8 < (int)local_78)))) {
                if (iVar8 < iVar10) {
                  do {
                    fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    bVar27 = iVar8 < iVar10;
                    iVar10 = iVar10 + -1;
                  } while (bVar27);
                }
                else {
                  do {
                    if (iVar10 < (int)local_78) {
                      fVar30 = (float)FUN_01dd4720();
                    }
                    else {
                      fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar8 + 1 != iVar10);
                }
              }
              bVar23 = true;
              bVar26 = false;
            }
          }
        }
        lVar21 = *arg1;
        cVar7 = (char)arg1[1];
        if (local_80 == lVar21) {
          lVar21 = local_80;
          if (((cVar7 != '\0') && (local_31 == '\0')) && (local_80 != 0)) {
            local_31 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if ((cVar7 != '\0') && (lVar21 != 0)) {
            FUN_00d50b00();
          }
          bVar27 = local_31 != '\0';
          local_31 = cVar7;
          if ((bVar27) && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        local_80 = lVar21;
      } while (*arg1 != 0);
      bVar27 = false;
      if (!bVar26) goto LAB_01dd8358;
LAB_01dd8298:
      bVar26 = true;
      uVar9 = FUN_01d428c0();
      if (plVar1[0x2a] != 0) {
        FUN_01e1e360();
      }
      *(int *)(plVar1 + 0x2b) = local_98;
      puVar14 = (void*)FUN_00e83010();
      *puVar14 = FUN_01de6a10;
      puVar14[1] = FUN_01dd9790;
      puVar14[2] = 0;
      FUN_01e1ec30(uVar9,puVar14);
      plVar15 = (int64_t *)plVar1[0x2a];
      plVar16 = plVar15;
      if (plVar15 != local_50) {
        plVar16 = local_50;
        if (local_48 == '\0') {
          if (local_50 == (int64_t *)0x0) {
            plVar16 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar15 = (int64_t *)plVar1[0x2a];
          }
        }
        else {
          local_48 = '\0';
        }
        plVar1[0x2a] = (int64_t)plVar16;
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar16 = local_50;
        }
      }
      if ((local_48 != '\0') && (plVar16 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar6 = true;
      if (bVar23) {
LAB_01dd83b8:
        bVar26 = bVar6;
        (**(code **)(*plVar1 + 0x990))();
      }
    }
    else {
      *(void*)((int64_t)plVar1 + 0x14c) = 0;
      local_250 = *arg1;
      local_248 = '\0';
      (**(code **)(*local_a8 + 0x3c0))();
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      bVar6 = bVar23;
      if (bVar23) {
        bVar6 = false;
      }
      if ((int)local_f8._0_4_ < 2) {
        bVar6 = bVar23;
      }
      if (*(char *)((int64_t)plVar1 + 0x14c) == '\0') {
        bVar28 = false;
        bVar27 = false;
        bVar23 = bVar6;
      }
      else {
        iVar8 = FUN_01d3b630();
        bVar27 = true;
        bVar28 = false;
        if (iVar8 == 1) goto LAB_01dd7d44;
      }
LAB_01dd833d:
      fStack_120 = fStack_140;
      fStack_11c = fStack_13c;
      local_128 = local_148;
      if (bVar26) goto LAB_01dd8298;
LAB_01dd8358:
      bVar26 = true;
      bVar6 = true;
      if (bVar23) goto LAB_01dd83b8;
    }
LAB_01dd83cb:
    if (bVar26) {
      bVar26 = true;
    }
    else {
      local_c8 = g_023dccec;
      uStack_c0 = 0;
      _fStack_e0 = 0;
      local_e8 = (uint8_t  [8])g_023dccf4;
      FUN_01dd4960();
      if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      if ((int)local_50[3] < 4) {
LAB_01dd86fd:
        bVar23 = true;
        bVar6 = false;
        local_58 = (int64_t *)0x0;
        local_78 = (int64_t *)0x0;
        bVar26 = false;
      }
      else {
        bVar26 = true;
        lVar21 = 0;
        do {
          local_f8._0_8_ = FUN_01dcf710();
          local_f8._8_4_ = extraout_XMM0_Dc_03;
          local_f8._12_4_ = extraout_XMM0_Dd_04;
          local_138 = auVar34;
          cVar7 = FUN_00d054a0();
          if (cVar7 != '\0') {
            auVar34 = local_138;
            if (bVar26) {
              local_c8 = FUN_00d05360(local_f8._0_4_);
              uStack_c0 = CONCAT44(extraout_XMM0_Dd_06,extraout_XMM0_Dc_05);
              bVar26 = false;
              _local_e8 = auVar34;
            }
            else {
              FUN_00d05360(local_f8._0_4_);
              local_c8 = FUN_00d052e0();
              uStack_c0 = CONCAT44(extraout_XMM0_Dd_05,extraout_XMM0_Dc_04);
              _local_e8 = auVar34;
            }
          }
          lVar21 = lVar21 + 1;
          iVar8 = (int)local_50[3];
          iVar10 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
        } while (lVar21 < iVar10 >> 2);
        if (bVar26) goto LAB_01dd86fd;
        plVar15 = (int64_t *)FUN_00e8fc40();
        FUN_00152930();
        (**(code **)(*plVar15 + 0x18))();
        local_218 = '\0';
        local_220 = 0;
        FUN_01d4eaa0(local_e8._0_4_);
        if ((local_218 != '\0') && (local_220 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d52700();
        FUN_01d52740();
        (**(code **)(*local_50 + 0x368))(0.0 - (float)local_c8);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (3 < (int)local_50[3]) {
          lVar21 = 0;
          do {
            local_138._0_8_ = FUN_01dcf710();
            local_138._8_4_ = extraout_XMM0_Dc_06;
            local_138._12_4_ = extraout_XMM0_Dd_07;
            local_f8 = auVar34;
            cVar7 = FUN_00d054a0();
            if (cVar7 != '\0') {
              FUN_01d52740();
              local_108 = 0;
              if (local_48 == '\0') {
                if (local_50 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_108 = '\x01';
              local_110 = local_50;
              auVar34 = local_f8;
              (**(code **)(*plVar1 + 0x610))(local_138._0_4_);
              if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar21 = lVar21 + 1;
            iVar8 = (int)local_50[3];
            iVar10 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar10 = iVar8;
            }
          } while (lVar21 < iVar10 >> 2);
        }
        FUN_01d52740();
        (**(code **)(*local_50 + 0x368))((float)local_c8);
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d52770();
        plVar16 = (int64_t *)FUN_00e8fc40();
        FUN_00152930();
        (**(code **)(*plVar16 + 0x18))();
        FUN_01d526f0();
        local_208 = '\0';
        local_210 = 0;
        FUN_01d4eaa0();
        if ((local_208 != '\0') && (local_210 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d52700();
        FUN_01d52740();
        local_1f8 = '\0';
        local_200 = plVar15;
        FUN_01d49110(0,3);
        if ((local_1f8 != '\0') && (local_200 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d52770();
        local_58 = plVar15;
        if (plVar15 != plVar16) {
          FUN_00d50b00();
          local_58 = plVar16;
          if (plVar15 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_01ca6a90();
        if (local_50 == (int64_t *)0x0) {
          bVar26 = false;
          local_78 = (int64_t *)0x0;
        }
        else {
          bVar26 = true;
          local_78 = local_50;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
        uVar9 = FUN_01ca5d90();
        if ((char)plVar1[0x46] != '\0') {
          local_1e8 = '\0';
          local_1f0 = local_78;
          uVar9 = (**(code **)(*plVar1 + 0x9c0))();
          if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
        }
        if (((char)plVar1[0x3d] == '\0') || ((int64_t *)plVar1[0x3e] == (int64_t *)0x0)) {
          if ((char)plVar1[0x46] != '\0') goto LAB_01dd8a70;
        }
        else {
          local_1d8 = '\0';
          local_1c8 = '\0';
          local_1e0 = plVar1;
          local_1d0 = local_78;
          cVar7 = (**(code **)(*(int64_t *)plVar1[0x3e] + 0x18))(uVar9,&local_1d0);
          bVar28 = true;
          if (cVar7 == '\0') {
            bVar28 = (char)plVar1[0x46] != '\0';
          }
          if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar28) {
LAB_01dd8a70:
            FUN_01e42030();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_50 != (int64_t *)0x0) {
              FUN_01e42030();
              local_1c0 = local_58;
              local_1b8 = '\0';
              local_1b0 = 0;
              local_1a8 = '\0';
              FUN_01e48f80(((float)local_128 - (float)local_148) + (float)local_c8);
              local_198 = '\0';
              local_1a0 = 0;
              local_188 = '\0';
              local_190 = local_78;
              (**(code **)(*local_50 + 0x738))(&local_190,&local_1a0,4);
              if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_00d50b20();
        bVar6 = true;
        bVar23 = false;
        bVar28 = false;
      }
      FUN_00d50b20();
      if ((bVar26) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar23 && local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (bVar6) {
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
    }
    if (local_d0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_118 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_d8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar26) goto LAB_01dd8c7b;
  }
  else {
    bVar28 = true;
    bVar27 = false;
  }
  FUN_01e42030();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    if ((bVar28) && (*arg1 != 0)) {
      local_178 = '\0';
      local_180 = *arg1;
      (**(code **)(*plVar1 + 0x3c0))();
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar27) && (*arg1 != 0)) {
      local_168 = '\0';
      local_170 = *arg1;
      FUN_01e459c0();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dd8c7b:
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d17670
// ============================================================
// Function: FUN_01d17670
// Address: 01d17670
// Size: 5114 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d17670(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  undefined7 extraout_var;
  int64_t **pplVar11;
  int64_t *plVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t **pplVar14;
  uint uVar15;
  uint64_t unaff_R14;
  undefined7 uVar16;
  bool bVar17;
  int64_t local_98;
  char local_90;
  char local_78;
  char local_74;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_49;
  int64_t *local_48;
  char local_40;
  uint local_34;
  
  local_60 = '\0';
  local_68 = (int64_t *)0x0;
  FUN_01ccad60();
  plVar12 = local_48;
  cVar5 = local_60;
  plVar13 = local_68;
  if (local_68 == local_48) {
    if ((local_60 != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01d17717;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_01d17713;
    }
LAB_01d176e0:
    local_60 = '\x01';
  }
  else {
    unaff_R14 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),local_60);
    if (local_40 != '\0') {
      local_68 = local_48;
      if ((local_60 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d176e0;
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_68 = plVar12;
    if ((cVar5 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01d17713:
    local_60 = '\x01';
LAB_01d17717:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_027057d0;
  if (local_68 == (int64_t *)0x0) goto LAB_01d18968;
  if (g_027057d0 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  if (local_48 == (int64_t *)0x0) {
    pplVar11 = (int64_t **)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    plVar13 = (int64_t *)0x0;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar9 = FUN_00d50b00();
      pplVar11 = (int64_t **)0x0;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01d177bc;
      uVar9 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
    pplVar11 = (int64_t **)0x0;
  }
LAB_01d177bc:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027057d0;
  if (plVar13 == (int64_t *)0x0) {
    local_74 = '\x01';
    lVar2 = g_027ef7f0;
  }
  else {
    if (g_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (int64_t *)0x0) {
LAB_01d17848:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17848;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) {
      local_74 = '\0';
      lVar2 = g_027ef7f0;
    }
    else {
      local_74 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = g_027ef7f0;
    }
  }
  g_027ef7f0 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((uint64_t)uVar9 >> 8);
  uVar16 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar13) {
    bVar8 = (byte)pplVar11 & local_48 != (int64_t *)0x0;
    pplVar11 = (int64_t **)CONCAT71(uVar16,bVar8);
    plVar12 = plVar13;
    if (bVar8 == 1) {
      if (local_40 != '\0') goto LAB_01d17945;
      pplVar11 = (int64_t **)CONCAT71(uVar16,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d179c4:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar16,1);
      if (((byte)local_34 & plVar13 != (int64_t *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01d179c4;
    }
    bVar17 = plVar13 != (int64_t *)0x0;
    plVar13 = plVar12;
    if (((byte)local_34 & bVar17) == 1) {
      FUN_00d50b20();
      uVar10 = extraout_var;
    }
LAB_01d17945:
    local_40 = '\0';
    plVar12 = plVar13;
    uVar15 = (uint)CONCAT71(uVar10,1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar13 = local_68;
  lVar2 = g_027ef7f0;
  if (plVar12 == (int64_t *)0x0) {
    FUN_001f8a30();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d17acb:
      if (g_02802688 != (int64_t *)0x0) goto LAB_01d17adc;
LAB_01d17c57:
      pplVar11 = (int64_t **)0x0;
      cVar5 = '\x01';
      lVar2 = g_027ef7f8;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17acb;
      if (local_68 == (int64_t *)0x0) goto LAB_01d17c57;
LAB_01d17adc:
      pplVar11 = (int64_t **)0x0;
      lVar2 = g_027ef7f8;
      cVar5 = (char)this_ptr[0xb];
    }
  }
  else {
    if (g_027ef7f0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d17a72:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17a72;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar13 == (int64_t *)0x0) {
      local_78 = '\0';
      lVar2 = g_027ef7f8;
      cVar5 = local_78;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = g_027ef7f8;
    }
  }
  g_027ef7f8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17bdf;
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d17c81:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17c81;
    }
    if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17bdf:
    local_40 = '\0';
    uVar15 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027ef7f8;
  if (plVar13 != (int64_t *)0x0) {
    if (g_027ef7f8 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (int64_t *)0x0) {
LAB_01d17d2f:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d17d2f;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar12 != (int64_t *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d17dd0:
        if (g_02802688 != (int64_t *)0x0) goto LAB_01d17ddd;
LAB_01d17e04:
        plVar12 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
        if (plVar12 == (int64_t *)0x0) {
LAB_01d17e30:
          pplVar11 = (int64_t **)CONCAT71(uVar10,g_02802690);
          plVar12 = g_02802688;
          if (g_02802690 == '\0') goto LAB_01d17e64;
LAB_01d17e55:
          if (plVar12 == (int64_t *)0x0) goto LAB_01d17e64;
          FUN_00d50b00();
LAB_01d17e6d:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar12;
          FUN_01e05950();
          plVar12 = local_48;
          FUN_00037f20();
          if (plVar12 == (int64_t *)0x0) {
LAB_01d17eb1:
            pplVar11 = &g_02802688;
          }
          else {
            (**(code **)(*plVar12 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d17eb1;
          }
          plVar12 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (int64_t *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48ae0();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar12 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d17e30;
          pplVar11 = (int64_t **)CONCAT71(uVar10,local_60);
          plVar12 = local_68;
          if (local_60 != '\0') goto LAB_01d17e55;
LAB_01d17e64:
          if (plVar12 != (int64_t *)0x0) goto LAB_01d17e6d;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d17dd0;
        if (local_68 == (int64_t *)0x0) goto LAB_01d17e04;
LAB_01d17ddd:
        plVar12 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar12 + 0xab8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027ef800;
  if (g_027ef800 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar13) {
    plVar12 = plVar13;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17f93;
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (int64_t **)(uint64_t)local_34;
    }
LAB_01d17fea:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (int64_t **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17fea;
    }
    if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17f93:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027ef800;
  if (plVar12 != (int64_t *)0x0) {
    if (g_027ef800 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (int64_t *)0x0) {
LAB_01d18098:
      pplVar14 = &g_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d18098;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar13 != (int64_t *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d18139:
        if (g_02802688 != (int64_t *)0x0) goto LAB_01d18146;
LAB_01d1816d:
        plVar13 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
        if (plVar13 == (int64_t *)0x0) {
LAB_01d18199:
          pplVar11 = (int64_t **)CONCAT71(uVar10,g_02802690);
          plVar13 = g_02802688;
          if (g_02802690 == '\0') goto LAB_01d181cd;
LAB_01d181be:
          if (plVar13 == (int64_t *)0x0) goto LAB_01d181cd;
          FUN_00d50b00();
LAB_01d181d6:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar13;
          FUN_01e05950();
          plVar13 = local_48;
          FUN_00037f20();
          if (plVar13 == (int64_t *)0x0) {
LAB_01d1821a:
            pplVar11 = &g_02802688;
          }
          else {
            (**(code **)(*plVar13 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d1821a;
          }
          plVar13 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (int64_t *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d18199;
          pplVar11 = (int64_t **)CONCAT71(uVar10,local_60);
          plVar13 = local_68;
          if (local_60 != '\0') goto LAB_01d181be;
LAB_01d181cd:
          if (plVar13 != (int64_t *)0x0) goto LAB_01d181d6;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d18139;
        if (local_68 == (int64_t *)0x0) goto LAB_01d1816d;
LAB_01d18146:
        plVar13 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar13 + 0xac8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((uint64_t)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    uVar15 = local_34;
    if (((char)local_34 == '\0') && (local_48 != (int64_t *)0x0)) {
      if (local_40 != '\0') goto LAB_01d18301;
      local_34 = 0;
      FUN_00d50b00();
      uVar15 = (int)CONCAT71(uVar10,1);
    }
LAB_01d1836f:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      uVar15 = (uint)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
        local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
        FUN_00d50b20();
        uVar15 = (int)CONCAT71(uVar10,1);
      }
      goto LAB_01d1836f;
    }
    if (((char)local_34 != '\0') && (plVar12 != (int64_t *)0x0)) {
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      uVar9 = FUN_00d50b20();
    }
LAB_01d18301:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_78 = cVar5;
  if (plVar13 == (int64_t *)0x0) {
LAB_01d187ae:
    cVar5 = local_78;
    if (local_74 != '\0') goto LAB_01d187b8;
LAB_01d1889e:
    local_78 = cVar5;
    cVar5 = '\0';
  }
  else {
    cVar7 = FUN_01ccd010();
    cVar6 = local_74;
    if (cVar7 == '\0') {
      cVar7 = FUN_01d26970();
      cVar6 = '\0';
      if (cVar7 == '\0') {
        cVar6 = local_74;
      }
    }
    local_74 = cVar6;
    (**(code **)(*plVar13 + 0x3f8))();
    if (local_48 == (int64_t *)0x0) {
      bVar17 = true;
    }
    else {
      (**(code **)(*plVar13 + 0x3f8))();
      bVar17 = *(int *)(local_98 + 0xc) == 0;
      if (local_90 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027e7c20;
    if (bVar17) {
      (**(code **)(*local_68 + 0x978))();
      local_74 = '\0';
    }
    else {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4c8))();
      plVar12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar1 = local_68;
      FUN_001f8a30();
      if (plVar1 == (int64_t *)0x0) {
LAB_01d1853f:
        if (g_02802688 == (int64_t *)0x0) goto LAB_01d1860b;
LAB_01d18582:
        cVar6 = (**(code **)(*local_68 + 0xac8))();
        if (cVar6 == '\0') goto LAB_01d1860b;
        if ((char)this_ptr[6] != '\0') {
          FUN_01e04c20();
        }
        if (plVar12 == (int64_t *)0x0) {
LAB_01d18a18:
          (**(code **)(*local_68 + 0x978))();
          *(void*)(this_ptr + 6) = 0;
          goto joined_r0x01d18a5f;
        }
        (**(code **)(*local_68 + 0x980))();
        if (local_48 == (int64_t *)0x0) {
          cVar6 = '\0';
        }
        else {
          (**(code **)(*local_68 + 0x980))();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          cVar6 = (**(code **)(*plVar12 + 0x50))();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') goto LAB_01d18a18;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d1853f;
        if (local_68 != (int64_t *)0x0) goto LAB_01d18582;
LAB_01d1860b:
        (**(code **)(*local_68 + 0x980))();
        plVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d18626;
          }
          bVar17 = true;
LAB_01d186a4:
          local_58 = plVar12;
          (**(code **)(*local_68 + 0x978))();
          plVar4 = local_68;
          FUN_001f8a30();
          plVar12 = local_58;
          plVar1 = g_02802688;
          if (plVar4 != (int64_t *)0x0) {
            (**(code **)(*plVar4 + 0x360))();
            cVar6 = FUN_00e85ea0();
            plVar12 = local_58;
            plVar1 = g_02802688;
            if (cVar6 != '\0') {
              plVar1 = local_68;
            }
          }
          if (plVar1 != (int64_t *)0x0) {
            *(void*)(this_ptr + 6) = 0;
          }
          local_58 = plVar12;
          if (!bVar17) goto LAB_01d18733;
        }
        else {
LAB_01d18626:
          bVar17 = plVar1 == (int64_t *)0x0;
          if ((plVar12 == (int64_t *)0x0) || (plVar1 == (int64_t *)0x0)) goto LAB_01d186a4;
          cVar6 = (**(code **)(*plVar1 + 0x50))();
          if (cVar6 == '\0') {
            bVar17 = false;
            goto LAB_01d186a4;
          }
LAB_01d18733:
          FUN_00d50b20();
        }
joined_r0x01d18a5f:
        if (plVar12 == (int64_t *)0x0) goto LAB_01d18748;
      }
      FUN_00d50b20();
    }
LAB_01d18748:
    lVar2 = g_027e7c20;
    if (cVar5 != '\0') {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar6 = FUN_01ccca20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      if (cVar6 != '\0') {
        local_78 = cVar5;
      }
      goto LAB_01d187ae;
    }
    local_78 = '\0';
    cVar5 = local_78;
    local_78 = '\0';
    if (local_74 == '\0') goto LAB_01d1889e;
LAB_01d187b8:
    lVar2 = g_027edfc8;
    if (g_027edfc8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    lVar3 = g_027edfc8;
    if (local_48 == (int64_t *)0x0) {
      bVar8 = 0;
    }
    else {
      if (g_027edfc8 != 0) {
        FUN_00d50b00();
      }
      bVar8 = FUN_01cccb90();
      bVar8 = bVar8 ^ 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    cVar5 = '\0';
    if (bVar8 == 0) {
      cVar5 = local_74;
    }
  }
  plVar12 = local_68;
  FUN_001f8a30();
  if (plVar12 == (int64_t *)0x0) {
LAB_01d188d6:
    pplVar11 = &g_02802688;
    if (g_02802688 != (int64_t *)0x0) goto LAB_01d188e3;
LAB_01d18913:
    (**(code **)(*local_68 + 0x998))
              (CONCAT71((int7)((uint64_t)pplVar11 >> 8),local_78 != '\0' && cVar5 != '\0'));
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01d188d6;
    pplVar11 = &local_68;
    if (local_68 == (int64_t *)0x0) goto LAB_01d18913;
LAB_01d188e3:
    (**(code **)(*local_68 + 0x998))();
    FUN_01e058a0();
  }
  cVar5 = (**(code **)(*this_ptr + 0x4a0))();
  if (cVar5 == '\0') {
    FUN_01d13bc0();
  }
  if (((char)local_34 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d18968:
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dd5630
// ============================================================
// Function: FUN_01dd5630
// Address: 01dd5630
// Size: 2475 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


bool FUN_01dd5630(int param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint32_t in_EDX;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  bool bVar10;
  float fVar11;
  uint32_t uVar12;
  float extraout_XMM0_Db;
  uint64_t uVar13;
  float fVar14;
  uint32_t uVar15;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint32_t local_64;
  int64_t local_60;
  char local_51;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  lVar2 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + (int64_t)param_1 * 8);
  local_64 = in_EDX;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_51 = *(char *)((int64_t)this_ptr + 0x1dc);
  local_60 = lVar2;
  if (local_51 != '\0') {
    lVar2 = this_ptr[0x28];
    if (lVar2 != 0) {
      local_e8 = 0;
      FUN_00d50b00();
      local_e8 = '\x01';
      local_f0 = lVar2;
      (**(code **)(*this_ptr + 0x470))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr[0x28] != 0) {
        this_ptr[0x28] = 0;
        FUN_00d50b20();
      }
    }
    goto LAB_01dd5fb4;
  }
  if ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) {
    FUN_01d3b620();
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
      fVar11 = extraout_XMM0_Db /
               (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
      iVar5 = -1;
      fVar14 = 0.0;
      if ((0.0 <= fVar11) && (fVar14 = (float)(int)this_ptr[0x30], fVar11 < fVar14)) {
        iVar5 = (int)fVar11;
      }
    }
    else {
      iVar5 = -1;
      fVar14 = 0.0;
      fVar11 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar2 = this_ptr[0x52], lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar8 = 0;
        uVar7 = (uint64_t)(uint)(iVar6 >> 2);
        if (iVar6 >> 2 < 1) {
          uVar7 = uVar8;
        }
        do {
          if (uVar7 == uVar8) goto LAB_01dd57da;
          fVar14 = *(float *)(*(int64_t *)(lVar2 + 0x10) + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (fVar14 <= extraout_XMM0_Db);
        iVar5 = (int)uVar8 + -1;
      }
    }
LAB_01dd57da:
    uVar15 = 0;
    if ((int)this_ptr[0x36] != iVar5) {
      FUN_01dd3d20(fVar11,0);
    }
  }
  FUN_01db9a00();
  FUN_00d51d20();
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        this_ptr[0x28] = 0;
      }
      else {
        FUN_00d50b00();
        plVar3 = (int64_t *)this_ptr[0x28];
        this_ptr[0x28] = (int64_t)local_40;
      }
    }
    else {
      local_38 = '\0';
      this_ptr[0x28] = (int64_t)local_40;
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] == 0) goto LAB_01dd5fb4;
  *(void*)((int64_t)this_ptr + 0x1dc) = 1;
  (**(code **)(*this_ptr + 0x990))();
  FUN_01db9a00();
  (**(code **)(*local_50 + 0xa18))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027f2a00;
  plVar9 = (int64_t *)this_ptr[0x28];
  if (plVar3 == (int64_t *)0x0) {
    if (g_027f2a00 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)this_ptr[0x28];
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa18))();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    (**(code **)(*plVar9 + 0xa10))();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)this_ptr[0x28];
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa28))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar3 + 0xa20))();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  FUN_01db9a00();
  (**(code **)(*local_50 + 0x9e0))();
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x9d8))();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x27) = local_64;
  *(int *)((int64_t)this_ptr + 0x13c) = param_1;
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0xa08))(param_1,local_64);
  plVar9 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = plVar9;
  local_38 = '\0';
  (**(code **)(*plVar3 + 0x978))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d50b20();
  uVar13 = (**(code **)(*this_ptr + 0x950))(uVar12,param_1);
  *(void*)((int64_t)this_ptr + 0x1cc) = uVar13;
  *(float *)((int64_t)this_ptr + 0x1d4) = fVar14;
  *(void*)(this_ptr + 0x3b) = uVar15;
  (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
  plVar3 = (int64_t *)this_ptr[0x3e];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_120 = local_60;
    local_118 = '\0';
    local_b0 = 0;
    local_b8 = this_ptr[0x28];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*plVar3 + 0x30))(&local_120,local_64,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_a0 = 0;
  lVar2 = this_ptr[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  (**(code **)(*this_ptr + 0x450))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)this_ptr[0x28];
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  if (local_40 == (int64_t *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*plVar3 + 0x4a0))();
    bVar10 = *(int *)((int64_t)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar3;
  if (bVar10) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar3 + 0x490))();
    plVar9 = local_40;
    plVar4 = plVar3;
    if (plVar3 != local_40) {
      if (local_38 != '\0') {
        FUN_00d50b20();
        goto LAB_01dd5ece;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar4 = plVar9;
      plVar3 = local_40;
    }
    plVar9 = plVar4;
    if ((local_38 != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01dd5ece:
  local_110 = *arg1;
  local_108 = '\0';
  (**(code **)(*plVar9 + 0x3c0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = this_ptr[0x28];
  if (lVar2 != 0) {
    local_f8 = 0;
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = lVar2;
    (**(code **)(*this_ptr + 0x470))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x28] != 0) {
      this_ptr[0x28] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x618))((int)uVar13,fVar14);
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  FUN_00d50b20();
LAB_01dd5fb4:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return local_51 == '\0';
}



// ============================================================
// 01d16950
// ============================================================
// Function: FUN_01d16950
// Address: 01d16950
// Size: 1741 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01d16950(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  uint32_t uVar4;
  uint uVar5;
  int iVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  uint64_t uVar8;
  bool bVar9;
  bool bVar10;
  int64_t *local_108;
  char local_100;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x9a0))();
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = g_02802688;
  }
  if (plVar7 != (int64_t *)0x0) {
    uVar4 = FUN_01e05890();
  }
  FUN_01cae990();
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & (byte)uVar4) == 0) {
    uVar5 = FUN_01d827c0();
    uVar8 = (uint64_t)uVar5;
    goto LAB_01d17000;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  if (param_2 == '\0') goto LAB_01d17000;
  *(void*)(this_ptr + 6) = 0;
  (**(code **)(*local_40 + 0x980))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = g_02802688;
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_01e05950();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_01e05950();
      (**(code **)(*local_108 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x970))();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01d16bd1;
        }
        bVar10 = true;
        bVar9 = true;
LAB_01d16cfc:
        (**(code **)(*local_40 + 0x968))();
      }
      else {
LAB_01d16bd1:
        bVar9 = local_40 == (int64_t *)0x0;
        bVar10 = local_40 == (int64_t *)0x0;
        if ((bVar10) || (local_40 == (int64_t *)0x0)) goto LAB_01d16cfc;
        cVar2 = (**(code **)(*local_40 + 0x50))();
        bVar9 = false;
        bVar10 = false;
        if (cVar2 == '\0') goto LAB_01d16cfc;
      }
      if (!bVar9) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x4d0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (*(char *)((int64_t)this_ptr + 0x5c) != '\0') {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      bVar10 = false;
    }
    else {
      FUN_01d28610();
      if (local_40 == (int64_t *)0x0) {
        bVar10 = false;
        plVar7 = (int64_t *)0x0;
      }
      else {
        bVar10 = true;
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    iVar6 = FUN_01caecd0();
    if (iVar6 == 3) {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01d16f92;
      }
    }
    else {
      if (iVar6 == 1) {
        if (plVar7 == (int64_t *)0x0) goto LAB_01d16fa4;
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (int64_t *)0x0) {
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01d16f92:
      if ((bVar10) && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01d16fa4:
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027edfc8;
  if (g_027edfc8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x500))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01d17000:
  FUN_00d50b20();
  return uVar8;
}



// ============================================================
// 01d0d660
// ============================================================
// Function: FUN_01d0d660
// Address: 01d0d660
// Size: 3738 bytes
// Class: GNControl
// String references:
//   "GNControl"
//   "getTag"
//   "setTag"
//   "_editTag"
//   "setIsAutoenabling"
//   "setToolTipFormatter"
//   "getFrame"
//   "setEnabled"
//   "_editTitle"
//   "setObjectValue"
//   "_editObjectValue"
//   "setFrame"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d0d660(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b7c28 = "getTag";
      g_028b7c30 = &g_026df880;
      g_028b7c38 = 0;
      g_028b7c40 = &g_027ef688;
      g_028b7c48 = FUN_01d12ee0;
      g_028b7c50 = 0xa89;
      g_028b7c58 = 0;
      ram_00000000028b7c60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7c70 = "setTag";
      g_028b7c78 = &g_026df880;
      g_028b7c80 = 0;
      g_028b7c88 = &g_027ef68a;
      g_028b7c90 = FUN_01d12f10;
      g_028b7c98 = 0xa81;
      g_028b7ca0 = 0;
      ram_00000000028b7ca8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7cb8 = "_editTag";
      g_028b7cc0 = &g_026df880;
      g_028b7cc8 = 0;
      g_028b7cd0 = &g_027ef68a;
      g_028b7cd8 = FUN_01d12f10;
      g_028b7ce0 = FUN_01d0e530;
      g_028b7ce8 = 0;
      ram_00000000028b7cf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7d00 = "_editObjectValue";
      g_028b7d08 = &g_026df880;
      g_028b7d10 = 0;
      g_028b7d18 = &g_027ef68d;
      g_028b7d20 = FUN_01d12f30;
      g_028b7d28 = FUN_01d0e580;
      g_028b7d30 = 0;
      ram_00000000028b7d38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7d48 = "_editTitle";
      g_028b7d50 = &g_026df880;
      g_028b7d58 = 0;
      g_028b7d60 = &g_027ef690;
      g_028b7d68 = FUN_01d12fb0;
      g_028b7d70 = FUN_01d0e940;
      g_028b7d78 = 0;
      ram_00000000028b7d80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7d90 = "setObjectValue";
      g_028b7d98 = &g_026df880;
      g_028b7da0 = 0;
      g_028b7da8 = &g_027ef68d;
      g_028b7db0 = FUN_01d12f30;
      g_028b7db8 = 0x979;
      g_028b7dc0 = 0;
      ram_00000000028b7dc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7dd8 = "setIsAutoenabling";
      g_028b7de0 = &g_026df880;
      g_028b7de8 = 0;
      g_028b7df0 = &g_027ef693;
      g_028b7df8 = FUN_01d13030;
      g_028b7e00 = 0x9a9;
      g_028b7e08 = 0;
      ram_00000000028b7e10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7e20 = "setToolTipFormatter";
      g_028b7e28 = &g_026df880;
      g_028b7e30 = 0;
      g_028b7e38 = &g_027ef696;
      g_028b7e40 = FUN_01d13050;
      g_028b7e48 = 0x9b9;
      g_028b7e50 = 0;
      ram_00000000028b7e58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7e68 = "getFrame";
      g_028b7e70 = &g_026df880;
      g_028b7e78 = 0;
      g_028b7e80 = &g_027ef699;
      g_028b7e88 = FUN_01d130d0;
      g_028b7e90 = 0x4d9;
      g_028b7e98 = 0;
      ram_00000000028b7ea0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7eb0 = "setFrame";
      g_028b7eb8 = &g_026df880;
      g_028b7ec0 = 0;
      g_028b7ec8 = &g_027f3ce3;
      g_028b7ed0 = FUN_01e4ee70;
      g_028b7ed8 = 0x4d1;
      g_028b7ee0 = 0;
      ram_00000000028b7ee8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b7ef8 = "setEnabled";
      g_028b7f00 = &g_026df880;
      g_028b7f08 = 0;
      g_028b7f10 = &g_027ef693;
      g_028b7f18 = FUN_01d13030;
      g_028b7f20 = 0x999;
      g_028b7f28 = 0;
      ram_00000000028b7f30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 000f9300
// ============================================================
// Function: FUN_000f9300
// Address: 000f9300
// Size: 678 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint32_t
FUN_000f9300(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void*arg1;
  int *this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  uint32_t in_stack_00000088;
  uint32_t in_stack_00000090;
  uint32_t in_stack_00000098;
  uint32_t in_stack_000000a0;
  uint32_t in_stack_000000a8;
  uint32_t in_stack_000000b0;
  uint32_t in_stack_000000b8;
  uint32_t in_stack_000000c0;
  uint32_t in_stack_000000c8;
  uint32_t in_stack_000000d0;
  uint32_t in_stack_000000d8;
  uint32_t in_stack_000000e0;
  uint32_t in_stack_000000e8;
  uint32_t in_stack_000000f0;
  uint32_t in_stack_000000f8;
  uint32_t in_stack_00000100;
  uint32_t in_stack_00000108;
  uint32_t in_stack_00000110;
  uint32_t in_stack_00000118;
  uint32_t in_stack_00000120;
  uint32_t in_stack_00000128;
  uint32_t in_stack_00000130;
  uint32_t in_stack_00000138;
  uint32_t in_stack_00000140;
  uint32_t in_stack_00000148;
  uint32_t in_stack_00000150;
  uint32_t in_stack_00000158;
  
  if (*(char *)*arg1 == '=') {
    param_2 = param_1;
  }
  *this_ptr = param_2;
  param_2 = param_2 + 1;
  if (*(char *)arg1[1] != '=') {
    param_3 = param_2;
  }
  this_ptr[1] = param_3;
  if (*(char *)arg1[2] != '=') {
    param_4 = param_3 + 1;
  }
  this_ptr[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)arg1[3] == '=') {
    iVar7 = local_res8;
  }
  this_ptr[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)arg1[4] == '=') {
    iVar5 = local_res10;
  }
  this_ptr[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)arg1[5] == '=') {
    iVar3 = local_res18;
  }
  this_ptr[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)arg1[6] == '=') {
    iVar4 = local_res20;
  }
  this_ptr[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)arg1[7] == '=') {
    iVar9 = param_5;
  }
  this_ptr[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)arg1[8] == '=') {
    iVar10 = param_6;
  }
  this_ptr[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)arg1[9] == '=') {
    iVar8 = param_7;
  }
  this_ptr[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)arg1[10] == '=') {
    iVar11 = param_8;
  }
  this_ptr[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)arg1[0xb] == '=') {
    iVar6 = param_9;
  }
  this_ptr[0xb] = iVar6;
  cVar1 = FUN_000f95b0(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8,in_stack_00000100,in_stack_00000108,in_stack_00000110,
                       in_stack_00000118,in_stack_00000120,in_stack_00000128,in_stack_00000130,
                       in_stack_00000138,in_stack_00000140,in_stack_00000148,in_stack_00000150,
                       in_stack_00000158);
  if (((((cVar1 == '\0') || (this_ptr[0xc] != iVar6 + 1)) || (this_ptr[0xb] != iVar11 + 1)) ||
      ((((this_ptr[10] != iVar8 + 1 || (this_ptr[9] != iVar10 + 1)) ||
        ((this_ptr[8] != iVar9 + 1 || ((this_ptr[7] != iVar4 + 1 || (this_ptr[6] != iVar3 + 1))))
        )) || (this_ptr[5] != iVar5 + 1)))) ||
     (((this_ptr[4] != iVar7 + 1 || (this_ptr[3] != param_4 + 1)) || (this_ptr[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),this_ptr[1] == param_2);
  }
  return uVar2;
}



// ============================================================
// 01dd66d0
// ============================================================
// Function: FUN_01dd66d0
// Address: 01dd66d0
// Size: 551 bytes
// Class: GNControl
// String references:
//   "GNControl"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01dd66d0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int iVar6;
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar8;
  int64_t *local_58;
  uint8_t local_50;
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_48 = *(int64_t *)(arg1 + 0x38);
  if (local_48 == 0) {
LAB_01dd68c9:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    uVar7 = param_1;
    iVar3 = 0;
    do {
      while( true ) {
        do {
          do {
            iVar6 = 0;
            uVar8 = param_2;
            if (iVar3 != 0) {
              if (iVar3 < 1) {
                iVar6 = -iVar3;
                iStack_3c = iVar6;
              }
              else {
                local_40 = local_40 - iVar3;
                uVar7 = FUN_00d23690(uVar7,iVar3);
                local_38 = local_38 + iVar3;
                iVar6 = 0;
                uVar8 = param_2;
                iStack_3c = iVar6;
              }
            }
            lVar4 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(local_48 + 0xc) <= local_40) {
              FUN_000a9680();
              goto LAB_01dd68c9;
            }
            plVar1 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
            param_2 = uVar8;
            iVar3 = iVar6;
            local_58 = plVar1;
          } while (plVar1 == *(int64_t **)(arg1 + 0x298));
          param_2 = (**(code **)(*plVar1 + 0x4d8))();
          cVar2 = FUN_00d05410(param_1,param_2,uVar8);
          uVar7 = extraout_XMM0_Da;
        } while (cVar2 == '\0');
        if ((g_026e43b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_026df898 = FUN_0006d940();
          g_026df880 = "GNControl";
          g_026df888 = 0x1c8;
          g_026df890 = FUN_000858d0;
          g_026df8a0 = 0;
          ram_00000000026df8a8 = 0;
          g_026df8b0 = 0;
          ram_00000000026df8b8 = 0;
          g_026df8c0 = 0;
          ram_00000000026df8c8 = 0;
          g_026df8d0 = 0;
          ram_00000000026df8d8 = 0;
          g_026df8e0 = 0;
          ram_00000000026df8e8 = 0;
          g_026df8f0 = 0;
          ram_00000000026df8f8 = 0;
          g_026df900 = 0;
          ram_00000000026df908 = 0;
          g_026df910 = 0;
          ram_00000000026df918 = 0;
          g_026df920 = 0;
          ram_00000000026df928 = 0;
          g_026df930 = 0;
          ram_00000000026df938 = 0;
          g_026df940 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
        plVar1 = *pplVar5;
        uVar7 = extraout_XMM0_Da_00;
        if (*(char *)(pplVar5 + 1) == '\0') break;
        *(void*)(pplVar5 + 1) = 0;
        iVar3 = iStack_3c;
        if (plVar1 != (int64_t *)0x0) goto LAB_01dd68ef;
      }
      iVar3 = iStack_3c;
    } while (plVar1 == (int64_t *)0x0);
    FUN_00d50b00();
LAB_01dd68ef:
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    FUN_000a9680();
  }
  return;
}



// ============================================================
// 01dd5240
// ============================================================
// Function: FUN_01dd5240
// Address: 01dd5240
// Size: 694 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void* FUN_01dd5240(void)

{
  int iVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  int iVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  int64_t local_50;
  char local_48;
  
  FUN_01dd4960();
  if (local_50 == 0) {
    bVar3 = true;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((6 < *(int *)(local_50 + 0x18) + 3U) && (*(int64_t *)(arg1 + 0x1f8) != 0)) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02572358;
      (*g_02572370)();
      if (*(int *)(local_50 + 0x18) < 4) {
        lVar7 = 0;
        bVar4 = false;
      }
      else {
        lVar9 = 0;
        bVar4 = false;
        lVar8 = 0;
        do {
          plVar2 = *(int64_t **)(arg1 + 0x1f8);
          FUN_00d50b00();
          (**(code **)(*plVar2 + 0x40))
                    (*(void*)(*(int64_t *)(local_50 + 0x10) + lVar9 * 4),
                     &stack0xffffffffffffff98);
          if (local_50 == lVar8) {
            lVar7 = lVar8;
            if ((!bVar4) && (local_50 != 0)) {
              if (local_48 == '\0') {
                FUN_00d50b00();
LAB_01dd5400:
                bVar10 = local_48 != '\0';
                goto joined_r0x01dd5404;
              }
              goto LAB_01dd5394;
            }
            bVar3 = bVar4;
            if (local_48 != '\0') {
LAB_01dd540a:
              lVar7 = lVar8;
              bVar3 = bVar4;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar4) {
                if (lVar8 != 0) {
                  FUN_00d50b20();
                  lVar8 = local_50;
                  goto LAB_01dd5400;
                }
                bVar10 = false;
                lVar8 = local_50;
joined_r0x01dd5404:
                bVar4 = true;
                lVar7 = lVar8;
                bVar3 = bVar4;
                if (bVar10) goto LAB_01dd540a;
              }
            }
            else {
              if ((bVar4) && (lVar8 != 0)) {
                FUN_00d50b20();
              }
LAB_01dd5394:
              local_48 = '\0';
              bVar3 = true;
            }
          }
          bVar4 = bVar3;
          if (arg1 != 0) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d21140();
          }
          lVar9 = lVar9 + 1;
          iVar1 = *(int *)(local_50 + 0x18);
          iVar6 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar6 = iVar1;
          }
          lVar8 = lVar7;
        } while (lVar9 < iVar6 >> 2);
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      bVar3 = false;
      if ((bVar4) && (lVar7 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01dd54b5;
    }
    bVar3 = false;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01dd54b5:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 000f95b0
// ============================================================
// Function: FUN_000f95b0
// Address: 000f95b0
// Size: 594 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint32_t
FUN_000f95b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,uint32_t param_10,uint32_t param_11,uint32_t param_12)

{
  char cVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void*arg1;
  int *this_ptr;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  uint32_t in_stack_00000088;
  uint32_t in_stack_00000090;
  uint32_t in_stack_00000098;
  uint32_t in_stack_000000a0;
  uint32_t in_stack_000000a8;
  uint32_t in_stack_000000b0;
  uint32_t in_stack_000000b8;
  uint32_t in_stack_000000c0;
  uint32_t in_stack_000000c8;
  uint32_t in_stack_000000d0;
  uint32_t in_stack_000000d8;
  uint32_t in_stack_000000e0;
  uint32_t in_stack_000000e8;
  uint32_t in_stack_000000f0;
  uint32_t in_stack_000000f8;
  
  if (*(char *)*arg1 == '=') {
    param_2 = param_1;
  }
  *this_ptr = param_2;
  param_2 = param_2 + 1;
  if (*(char *)arg1[1] != '=') {
    param_3 = param_2;
  }
  this_ptr[1] = param_3;
  if (*(char *)arg1[2] != '=') {
    param_4 = param_3 + 1;
  }
  this_ptr[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)arg1[3] == '=') {
    iVar7 = local_res8;
  }
  this_ptr[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)arg1[4] == '=') {
    iVar5 = local_res10;
  }
  this_ptr[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)arg1[5] == '=') {
    iVar3 = local_res18;
  }
  this_ptr[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)arg1[6] == '=') {
    iVar4 = local_res20;
  }
  this_ptr[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)arg1[7] == '=') {
    iVar9 = param_5;
  }
  this_ptr[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)arg1[8] == '=') {
    iVar10 = param_6;
  }
  this_ptr[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)arg1[9] == '=') {
    iVar8 = param_7;
  }
  this_ptr[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)arg1[10] == '=') {
    iVar11 = param_8;
  }
  this_ptr[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)arg1[0xb] == '=') {
    iVar6 = param_9;
  }
  this_ptr[0xb] = iVar6;
  cVar1 = FUN_000f9810(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8);
  if (((((cVar1 == '\0') || (this_ptr[0xc] != iVar6 + 1)) || (this_ptr[0xb] != iVar11 + 1)) ||
      ((((this_ptr[10] != iVar8 + 1 || (this_ptr[9] != iVar10 + 1)) ||
        ((this_ptr[8] != iVar9 + 1 || ((this_ptr[7] != iVar4 + 1 || (this_ptr[6] != iVar3 + 1))))
        )) || (this_ptr[5] != iVar5 + 1)))) ||
     (((this_ptr[4] != iVar7 + 1 || (this_ptr[3] != param_4 + 1)) || (this_ptr[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),this_ptr[1] == param_2);
  }
  return uVar2;
}



// ============================================================
// 01d15bc0
// ============================================================
// Function: FUN_01d15bc0
// Address: 01d15bc0
// Size: 771 bytes
// Class: GNControl
// String references:
//   "GNControl"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d15bc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  bool bVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  FUN_01d15ab0();
  FUN_01cc9cf0();
  pplVar6 = &local_30;
  uVar8 = FUN_01ccad60();
  plVar1 = local_30;
  // [STATIC_INIT: property registration]
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_01d15c29;
  }
  pplVar6 = &g_02802688;
LAB_01d15c29:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (plVar1 != (int64_t *)0x0) {
    if (g_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar8 = FUN_01ccaae0(uVar8,&local_80);
    lVar2 = g_027edfc8;
    bVar7 = true;
    if (local_30 == (int64_t *)0x0) {
      if (g_027edfc8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      FUN_01ccaae0(uVar8,&local_70);
      bVar7 = local_90 != 0;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_58 = '\0';
      local_60 = 0;
      (**(code **)(*plVar1 + 0xa20))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_50 = 0;
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = plVar1;
      if (cVar3 == '\0') {
        plVar5 = g_02802688;
      }
      if (plVar5 != (int64_t *)0x0) {
        local_38 = '\0';
        local_40 = (int64_t *)0x0;
        (**(code **)(*plVar1 + 0xae0))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          (**(code **)(*local_40 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d0ec70
// ============================================================
// Function: FUN_01d0ec70
// Address: 01d0ec70
// Size: 623 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d0ec70(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_28;
  char local_20;
  
  FUN_01e3b960();
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x138) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x140) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x140);
        *(int64_t *)(this_ptr + 0x140) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x140) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x148) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x14c) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x150) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x158) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x158);
        *(int64_t *)(this_ptr + 0x158) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x158) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x160);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x160) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x160);
        *(int64_t *)(this_ptr + 0x160) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x160) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x168) = uVar2;
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x16a) = uVar2;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x430))();
  *(void*)(this_ptr + 0x170) = uVar3;
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x174) = uVar3;
  (**(code **)(*(int64_t *)*arg1 + 0x418))();
  return;
}



// ============================================================
// 000f62d0
// ============================================================
// Function: FUN_000f62d0
// Address: 000f62d0
// Size: 3635 bytes
// Class: GNControl
// String references:
//   "GNControl"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_000f62d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0267ba68;
  this_ptr[2] = &g_0267c530;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f72a0();
    FUN_00e87980();
  }
  FUN_000f7410();
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f7690();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f7800();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f7970();
    FUN_00e87980();
  }
  FUN_000f7ae0();
  FUN_000f7d60();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8050();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x169) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f81c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8330();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16b) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f84a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8610();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8780();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f88f0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2f) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8a60();
    FUN_00e87980();
  }
  FUN_000f8c90();
  *(void*)(this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f8f10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f9080();
    FUN_00e87980();
  }
  FUN_000f99a0();
  FUN_000f9c90();
  *(void*)(this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_026df93b == '\0') {
    FUN_000f9f80();
    FUN_00e87980();
  }
  FUN_000fa0f0();
  FUN_000fa370();
  FUN_000fa5f0();
  FUN_000fa8e0();
  return;
}



// ============================================================
// 01d16560
// ============================================================
// Function: FUN_01d16560
// Address: 01d16560
// Size: 612 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01d16560(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_40;
  int64_t local_38;
  
  lVar2 = g_027ef820;
  if (g_027ef820 == 0) {
LAB_01d16626:
    local_38 = 0;
LAB_01d16638:
    local_40 = 0;
LAB_01d16641:
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    local_38 = g_027ef820;
    if (g_027ef820 == 0) goto LAB_01d16626;
    FUN_00d50b00();
    local_40 = g_027ef820;
    if (g_027ef820 == 0) goto LAB_01d16638;
    FUN_00d50b00();
    lVar5 = g_027ef820;
    if (g_027ef820 == 0) goto LAB_01d16641;
    FUN_00d50b00();
    lVar3 = g_027ef820;
    if (g_027ef820 != 0) {
      FUN_00d50b00();
      lVar4 = g_027ef820;
      if (g_027ef820 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
      goto LAB_01d16646;
    }
  }
  bVar1 = true;
  lVar3 = 0;
  lVar4 = 0;
LAB_01d16646:
  local_88 = local_38;
  local_80 = local_40;
  local_78 = lVar5;
  local_70 = lVar3;
  local_68 = lVar4;
  FUN_007f7950(&local_80,&local_88,&local_78,&local_70);
  FUN_000b6830();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01d0e580
// ============================================================
// Function: FUN_01d0e580
// Address: 01d0e580
// Size: 526 bytes
// Class: GNControl
// String references:
//   "_editObjectValue"
//   "v@"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void FUN_01d0e580(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  void*local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  
  plVar4 = (int64_t *)FUN_00cafdf0();
  bVar1 = true;
  if (plVar4 == (int64_t *)0x0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x458))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    if (local_70 != (void*)0x0) {
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x980))();
      local_68 = 1;
      local_70 = &g_024c5048;
      local_58 = 0;
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = local_a0;
      local_58 = '\x01';
      (**(code **)(*this_ptr + 0x278))(&local_70,"v@");
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef680;
      if (g_027ef680 != 0) {
        FUN_00d50b00();
      }
      FUN_00db3140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    bVar2 = false;
  }
  (**(code **)(*this_ptr + 0x978))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dd6cc0
// ============================================================
// Function: FUN_01dd6cc0
// Address: 01dd6cc0
// Size: 569 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01dd6cc0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t this_ptr;
  uint64_t uVar2;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(this_ptr + 0x30);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = FUN_01e4ae70();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01e48f80(param_1);
      uVar2 = (**(code **)(*plVar1 + 0x6d0))();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x6d0))(param_1);
      uVar2 = FUN_01e437f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}



// ============================================================
// 01dd6930
// ============================================================
// Function: FUN_01dd6930
// Address: 01dd6930
// Size: 567 bytes
// Class: GNControl
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


uint64_t FUN_01dd6930(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t arg1;
  uint64_t this_ptr;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x30);
  if (plVar1 == (int64_t *)0x0) {
    FUN_01e4ae50();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01e48f80(param_1);
      (**(code **)(*plVar1 + 0x6c8))();
      FUN_00d50b20();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x6c8))();
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 000f9080
// ============================================================
// Function: FUN_000f9080
// Address: 000f9080
// Size: 599 bytes
// Class: GNControl
// String references:
//   "GNControl"
//   "GNControlType"
//   "_controlType"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void* FUN_000f9080(void)

{
  byte bVar1;
  int iVar2;
  uint32_t extraout_XMM0_Da;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026dfd58 = "_controlType";
      g_026dfd60 = &g_026df880;
      g_026dfd68 = 0;
      g_026dfd70 = 0x6500;
      g_026dfd78 = "GNControlType";
      g_026dfd80 = &g_026e0000;
      g_026dfd88 = 0;
      ram_00000000026dfd90 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026dfd58;
}



// ============================================================
// 000f8a60
// ============================================================
// Function: FUN_000f8a60
// Address: 000f8a60
// Size: 519 bytes
// Class: GNControl
// String references:
//   "GNControl"
//   "GNTextCropping"
//   "_textCropping"
// === GNControl properties ===
//   GNControlType   _controlType
//   GNTextCropping  _textCropping


void* FUN_000f8a60(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026dfbf0 = "_textCropping";
      g_026dfbf8 = &g_026df880;
      g_026dfc00 = 0;
      g_026dfc08 = 0x6500;
      g_026dfc10 = "GNTextCropping";
      g_026dfc18 = &g_026dfc90;
      g_026dfc20 = 0;
      ram_00000000026dfc28 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026dfbf0;
}

