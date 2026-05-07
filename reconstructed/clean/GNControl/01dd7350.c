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

