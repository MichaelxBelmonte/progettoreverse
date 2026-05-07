// ===================================================================
// GNTableView — Complete reconstructed pseudocode
// 21 functions
// ===================================================================

// Registered properties (9):
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


// ============================================================
// 01dd9800
// ============================================================
// Function: FUN_01dd9800
// Address: 01dd9800
// Size: 11637 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01dd9800(void)

{
  char cVar1;
  uint uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint uVar5;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  bool bVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t uVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  uint64_t in_RAX;
  uint64_t uVar22;
  int64_t *plVar23;
  uint64_t uVar24;
  int64_t lVar25;
  int64_t *plVar26;
  int iVar27;
  int64_t *plVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  byte bVar31;
  uint uVar32;
  int64_t lVar33;
  int64_t *arg1;
  int64_t *this_ptr;
  undefined7 uVar34;
  bool bVar35;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar36;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar37;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  uint32_t extraout_XMM0_Dc_06;
  uint32_t extraout_XMM0_Dc_07;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar38;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  uint32_t extraout_XMM0_Dd_07;
  uint32_t extraout_XMM0_Dd_08;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint64_t local_2c8;
  uint8_t local_2c0;
  uint64_t local_2b8;
  uint8_t local_2b0;
  int64_t local_2a8;
  uint8_t local_2a0;
  int64_t local_298;
  uint8_t local_290;
  uint8_t local_288 [16];
  uint8_t local_278 [16];
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  uint64_t local_168;
  uint64_t uStack_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint64_t local_128;
  uint64_t local_120;
  uint8_t local_118 [16];
  uint local_fc;
  uint64_t local_f8;
  float fStack_f0;
  float fStack_ec;
  int local_dc;
  int64_t local_d8;
  uint64_t local_d0;
  uint32_t local_c4;
  uint64_t local_c0;
  uint64_t local_b8;
  float fStack_b0;
  float fStack_ac;
  uint64_t local_a8;
  uint32_t local_a0;
  uint local_9c;
  uint8_t local_98 [16];
  int64_t *local_88;
  int64_t *local_80;
  uint8_t local_78 [4];
  uint8_t auStack_74 [4];
  uint64_t uStack_70;
  uint64_t local_60;
  int64_t local_58;
  int64_t *local_50;
  char local_48;
  char local_31;
  
  lVar33 = *arg1;
  local_a0 = (uint32_t)CONCAT71((int7)((uint64_t)in_RAX >> 8),(char)arg1[1]);
  if (((char)arg1[1] != '\0') && (lVar33 != 0)) {
    FUN_00d50b00();
  }
  local_d8 = lVar33;
  FUN_01e40eb0();
  plVar26 = local_50;
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar26 == (int64_t *)0x0) goto LAB_01dd9e49;
  (**(code **)(*this_ptr + 0x7b0))();
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_01dd98c4;
    FUN_00d50b00();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01dd98af:
    uVar32 = FUN_01cf7680();
    uVar24 = (uint64_t)uVar32;
    FUN_00d50b20();
  }
  else {
    if (local_50 != (int64_t *)0x0) goto LAB_01dd98af;
LAB_01dd98c4:
    uVar24 = 0;
  }
  iVar20 = FUN_01d3a5a0();
  if ((iVar20 == 2) || (iVar20 = FUN_01d3a5a0(), iVar20 == 8)) {
    if ((int)this_ptr[0x29] == -1) {
LAB_01dd9bfb:
      iVar20 = FUN_01d3b590();
      if (iVar20 == 0x800) {
        if (((int)this_ptr[0x30] != 0) &&
           (((int)this_ptr[0x36] == -1 || ((int)this_ptr[0x36] < (int)this_ptr[0x30] + -1)))) {
          FUN_01dd3d20(extraout_XMM0_Da_02,0);
        }
        (**(code **)(*this_ptr + 0x990))();
      }
      else {
        iVar20 = FUN_01d3b590();
        if (iVar20 == 0x400) {
          if (((int)this_ptr[0x36] == -1) || (0 < (int)this_ptr[0x36])) {
            FUN_01dd3d20(extraout_XMM0_Da_03,0);
          }
          (**(code **)(*this_ptr + 0x990))();
        }
        else {
          local_248 = *arg1;
          local_240 = '\0';
          FUN_01e459c0();
          if ((local_240 == '\0') || (local_248 == 0)) {
            local_58 = 0;
            local_60 = 0;
            goto LAB_01dd9e55;
          }
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d3b5d0();
      iVar20 = FUN_00d8c7a0();
      if (iVar20 == 1) {
        FUN_01d3b5d0();
        cVar18 = FUN_00d8ca70();
        bVar35 = cVar18 == '\x1b';
        uVar36 = extraout_XMM0_Da_00;
        if ((local_260 != '\0') && (local_268 != 0)) {
          uVar36 = FUN_00d50b20();
        }
      }
      else {
        bVar35 = false;
        uVar36 = extraout_XMM0_Da;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar36 = FUN_00d50b20();
      }
      if (bVar35) {
        local_2c0 = 0;
        local_2c8 = 0;
        FUN_01dd96d0(uVar36,&local_2c8);
      }
      else {
        FUN_01d3b5d0();
        plVar26 = local_50;
        local_258 = g_027f3310;
        if (g_027f3310 != 0) {
          FUN_00d50b00();
        }
        local_250 = '\x01';
        cVar18 = (**(code **)(*plVar26 + 0x50))();
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar18 != '\0') goto LAB_01dd9bfb;
        if ((int)this_ptr[0x29] != -1) {
          local_50 = (int64_t *)*arg1;
          local_48 = '\0';
          FUN_01dd5630(*(void*)((int64_t)this_ptr + 0x254));
        }
      }
    }
LAB_01dd9e49:
    local_60 = 0;
    local_58 = 0;
    goto LAB_01dd9e55;
  }
  iVar20 = FUN_01d3a5a0();
  if ((iVar20 == 1) &&
     (((char)this_ptr[0x4f] == '\0' || (char)uVar24 != '\0' ||
      (*(char *)((int64_t)this_ptr + 0x27a) != '\0')))) {
    local_c0 = 0;
    local_88 = (int64_t *)0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_01d3abf0();
    local_c0 = 0;
    local_88 = (int64_t *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_f8 = FUN_01e466c0();
    local_c0 = 0;
    local_88 = (int64_t *)0x0;
    local_60 = 0;
    local_58 = 0;
    fStack_f0 = extraout_XMM0_Dc;
    fStack_ec = extraout_XMM0_Dd;
    local_9c = FUN_01d3b590();
    if ((int)this_ptr[0x29] != -1) {
      local_2b0 = 0;
      local_2b8 = 0;
      FUN_01dd96d0(extraout_XMM0_Da_01,&local_2b8);
    }
    local_c0 = 0;
    local_88 = (int64_t *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_dc = FUN_01d3b620();
    plVar26 = (int64_t *)CONCAT71((int7)(uVar24 >> 8),1);
    if (local_dc == 2) {
      local_c0 = 0;
      local_88 = (int64_t *)0x0;
      local_60 = 0;
      local_58 = 0;
      iVar20 = FUN_01d3b630();
      if (iVar20 != 1) goto LAB_01dd9d73;
      iVar20 = FUN_01dd3800((float)local_f8);
      if (iVar20 == -1) goto LAB_01dd9d73;
      uVar24 = *(uint64_t *)(this_ptr[0x2c] + 0x10);
      lVar33 = *(int64_t *)(uVar24 + (int64_t)iVar20 * 8);
      if (lVar33 == 0) goto LAB_01dd9d73;
      uVar22 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
      local_c0 = 0;
      local_88 = (int64_t *)0x0;
      local_58 = lVar33;
      cVar18 = FUN_01db9af0();
      if (cVar18 != '\0') {
        local_2a8 = *arg1;
        local_2a0 = 0;
        local_60 = CONCAT71((int7)((uint64_t)local_2a8 >> 8),1);
        FUN_01ddd120();
        goto LAB_01dd9e55;
      }
      local_c0 = 0;
      local_88 = (int64_t *)0x0;
      uVar22 = FUN_01db9ae0();
      uVar34 = (undefined7)((uint64_t)uVar22 >> 8);
      if ((char)uVar22 == '\0') {
        local_60 = CONCAT71(uVar34,1);
        local_c0 = 0;
        local_88 = (int64_t *)0x0;
        iVar20 = FUN_01d3a5a0();
        cVar18 = *(char *)((int64_t)this_ptr + 0x279);
        if (iVar20 == 1) {
          if (cVar18 == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
            uVar32 = 0xffffffff;
            if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
              uVar32 = (uint)fVar37;
            }
          }
          else {
            uVar32 = 0xffffffff;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
              iVar20 = *(int *)(lVar33 + 0x18);
              iVar21 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar21 = iVar20;
              }
              uVar24 = 0;
              uVar29 = (uint64_t)(uint)(iVar21 >> 2);
              if (iVar21 >> 2 < 1) {
                uVar29 = 0;
              }
              do {
                if (uVar29 == uVar24) goto LAB_01ddc38c;
                lVar25 = uVar24 * 4;
                uVar24 = uVar24 + 1;
              } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
              uVar32 = (int)uVar24 - 1;
              uVar24 = (uint64_t)uVar32;
            }
          }
LAB_01ddc38c:
          if (*(uint *)(this_ptr + 0x36) != uVar32) {
            lVar33 = this_ptr[0x34];
            if (lVar33 != 0) {
              uVar2 = *(uint *)(lVar33 + 0x18);
              uVar24 = (uint64_t)uVar2;
              uVar5 = uVar2 + 3;
              if (-1 < (int)uVar2) {
                uVar5 = uVar2;
              }
              if (3 < (int)uVar2) {
                uVar24 = 0;
                do {
                  if (*(uint *)(*(int64_t *)(lVar33 + 0x10) + uVar24 * 4) == uVar32)
                  goto LAB_01ddc394;
                  uVar24 = uVar24 + 1;
                } while ((int)uVar5 >> 2 != (int)uVar24);
              }
            }
            goto LAB_01ddc441;
          }
LAB_01ddc394:
          if ((local_9c & 2) == 0) goto LAB_01ddc441;
          if (((cVar18 != '\0') && (0.0 <= local_f8._4_4_)) &&
             (lVar33 = this_ptr[0x52], lVar33 != 0)) {
            iVar20 = *(int *)(lVar33 + 0x18);
            iVar21 = iVar20 + 3;
            if (-1 < iVar20) {
              iVar21 = iVar20;
            }
            uVar29 = 0;
            uVar24 = (uint64_t)(uint)(iVar21 >> 2);
            if (iVar21 >> 2 < 1) {
              uVar24 = uVar29;
            }
            do {
              if (uVar24 == uVar29) break;
              lVar25 = uVar29 * 4;
              uVar29 = uVar29 + 1;
            } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          }
          local_c0 = 0;
          local_88 = (int64_t *)0x0;
          FUN_01dd4720();
        }
        else {
LAB_01ddc441:
          if (cVar18 == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
          }
          else {
            fVar37 = local_f8._4_4_;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
              iVar20 = *(int *)(lVar33 + 0x18);
              iVar21 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar21 = iVar20;
              }
              uVar29 = 0;
              uVar24 = (uint64_t)(uint)(iVar21 >> 2);
              if (iVar21 >> 2 < 1) {
                uVar24 = uVar29;
              }
              do {
                if (uVar24 == uVar29) break;
                lVar25 = uVar29 * 4;
                uVar29 = uVar29 + 1;
              } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
            }
          }
          local_c0 = 0;
          local_88 = (int64_t *)0x0;
          FUN_01dd3d20(fVar37,(local_9c & 2) >> 1);
        }
        local_60 = CONCAT71((int7)(uVar24 >> 8),1);
        local_c0 = 0;
        local_88 = (int64_t *)0x0;
        (**(code **)(*this_ptr + 0x990))();
        goto LAB_01dd9e55;
      }
      bVar31 = 1;
      plVar26 = (int64_t *)0x0;
      local_60 = CONCAT71(uVar34,1);
    }
    else {
LAB_01dd9d73:
      bVar31 = 0;
      local_60 = 0;
      local_58 = 0;
    }
    FUN_01e42030();
    local_88 = local_50;
    if (local_50 == (int64_t *)0x0) {
      local_c4 = 1;
      local_c0 = 0;
      local_88 = (int64_t *)0x0;
    }
    else {
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d8b200();
      if (local_50 == this_ptr) {
        bVar35 = false;
        plVar23 = this_ptr;
      }
      else {
        plVar23 = (int64_t *)FUN_01d3b630();
        bVar35 = (int)plVar23 == 1;
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        plVar23 = (int64_t *)FUN_00d50b20();
      }
      local_c0 = CONCAT71((int7)((uint64_t)plVar23 >> 8),1);
      if (bVar35) {
        FUN_01e42250();
      }
      local_c4 = 0;
    }
    if (*(char *)((int64_t)this_ptr + 0x1b6) != '\0') {
      uVar24 = FUN_01d3b590();
      if ((uVar24 & 4) != 0) {
        if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
          fVar37 = local_f8._4_4_ /
                   (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
          if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
            iVar20 = (int)fVar37;
            goto LAB_01dda068;
          }
        }
        else if ((0.0 <= local_f8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
          iVar20 = *(int *)(lVar33 + 0x18);
          iVar21 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar21 = iVar20;
          }
          uVar29 = 0;
          uVar24 = (uint64_t)(uint)(iVar21 >> 2);
          if (iVar21 >> 2 < 1) {
            uVar24 = uVar29;
          }
          do {
            if (uVar24 == uVar29) goto LAB_01dda088;
            lVar25 = uVar29 * 4;
            uVar29 = uVar29 + 1;
          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          iVar20 = (int)uVar29 + -1;
LAB_01dda068:
          if (-1 < iVar20) {
            FUN_01dd4110();
            lVar33 = *arg1;
            while (lVar33 != 0) {
              iVar20 = FUN_01d3a5a0();
              if (iVar20 == 6) break;
              (**(code **)(*this_ptr + 0x658))();
              plVar23 = local_50;
              plVar26 = (int64_t *)*arg1;
              if (plVar26 == local_50) {
                if (((char)arg1[1] == '\0') && (local_50 != (int64_t *)0x0)) {
                  if (local_48 != '\0') goto LAB_01dda0a3;
                  FUN_00d50b00();
                  goto LAB_01dda145;
                }
LAB_01dda14b:
                if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                lVar33 = arg1[1];
                if (local_48 == '\0') {
                  if (local_50 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  *arg1 = (int64_t)plVar23;
                  if (((char)lVar33 != '\0') && (plVar26 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01dda145:
                  *(void*)(arg1 + 1) = 1;
                  goto LAB_01dda14b;
                }
                *arg1 = (int64_t)local_50;
                if (((char)lVar33 != '\0') && (plVar26 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dda0a3:
                *(void*)(arg1 + 1) = 1;
              }
              lVar33 = *arg1;
            }
            (**(code **)(*this_ptr + 0x990))();
            if ((char)local_c4 == '\0') {
              FUN_00d50b20();
            }
            goto LAB_01dd9e55;
          }
        }
LAB_01dda088:
        if ((char)local_c4 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_01dd9e55;
      }
    }
    iVar20 = FUN_01d3b630();
    local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8);
    if (iVar20 == 1) {
      iVar20 = FUN_01dd3800((float)local_f8);
      if (iVar20 == -1) {
        uVar24 = 1;
        if (local_58 == 0) {
          uVar24 = local_60 & 0xff;
        }
        local_60 = uVar24;
        if (local_58 != 0 && (byte)plVar26 == 0) {
          uVar22 = FUN_00d50b20();
          local_60 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
        }
LAB_01dda021:
        local_58 = 0;
        lVar33 = local_58;
        uVar22 = local_f8;
      }
      else {
        lVar25 = (int64_t)iVar20;
        lVar33 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + lVar25 * 8);
        if (lVar33 != 0) {
          lVar25 = FUN_00d50b00();
        }
        uVar34 = (undefined7)((uint64_t)lVar25 >> 8);
        uVar22 = local_f8;
        if (local_58 == lVar33) {
          if (((byte)plVar26 & local_58 != 0) == 0) {
            if (local_58 == 0) goto LAB_01dda021;
            FUN_00d50b20();
            lVar33 = local_58;
            uVar22 = local_f8;
          }
          else {
            local_60 = CONCAT71(uVar34,1);
            lVar33 = local_58;
          }
        }
        else {
          local_60 = CONCAT71(uVar34,1);
          if ((bool)(bVar31 & local_58 != 0)) {
            FUN_00d50b20();
            uVar22 = local_f8;
          }
        }
      }
      local_58 = lVar33;
      local_f8._4_4_ = (float)((uint64_t)uVar22 >> 0x20);
      local_f8._0_4_ = (float)uVar22;
      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
        local_f8._4_4_ =
             local_f8._4_4_ /
             (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
        iVar20 = -1;
        if ((0.0 <= local_f8._4_4_) && (local_f8._4_4_ < (float)(int)this_ptr[0x30])) {
          iVar20 = (int)local_f8._4_4_;
        }
      }
      else {
        iVar20 = -1;
        if ((0.0 <= local_f8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
          iVar21 = *(int *)(lVar33 + 0x18);
          iVar27 = iVar21 + 3;
          if (-1 < iVar21) {
            iVar27 = iVar21;
          }
          uVar29 = 0;
          uVar24 = (uint64_t)(uint)(iVar27 >> 2);
          if (iVar27 >> 2 < 1) {
            uVar24 = uVar29;
          }
          do {
            if (uVar24 == uVar29) goto LAB_01dda268;
            lVar25 = uVar29 * 4;
            uVar29 = uVar29 + 1;
          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          iVar20 = (int)uVar29 + -1;
        }
      }
LAB_01dda268:
      iVar21 = FUN_01dd3800((float)local_f8);
      local_f8 = uVar22;
      if ((((local_9c & 2) == 0) && (local_58 != 0)) && (iVar20 != -1)) {
        cVar18 = FUN_01db9ae0();
        if (cVar18 == '\0') goto LAB_01dda394;
        plVar26 = (int64_t *)this_ptr[0x3e];
        if (plVar26 != (int64_t *)0x0) {
          local_150 = 0;
          FUN_00d50b00();
          local_150 = '\x01';
          local_238 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + (int64_t)iVar21 * 8);
          local_158 = this_ptr;
          if (local_238 != 0) {
            FUN_00d50b00();
          }
          local_230 = '\x01';
          cVar18 = (**(code **)(*plVar26 + 0x40))(&local_238,iVar20);
          if ((local_230 != '\0') && (local_238 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar18 == '\0') goto LAB_01dda394;
        }
        local_298 = *arg1;
        local_290 = 0;
        cVar18 = FUN_01dd5630(iVar21,iVar20);
        uVar22 = local_f8;
        local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8);
        if (cVar18 == '\0') goto LAB_01dda394;
      }
      else {
LAB_01dda394:
        if (*arg1 == 0) {
          plVar26 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
          local_80 = (int64_t *)0x0;
          fStack_b0 = fStack_f0;
          fStack_ac = fStack_ec;
          local_120 = 0;
          local_128 = 0;
          uVar17 = local_f8;
        }
        else {
          local_d0 = 0xffffffff;
          local_78 = (uint8_t  [4])0xffffff01;
          fStack_b0 = fStack_f0;
          fStack_ac = fStack_ec;
          plVar26 = (int64_t *)CONCAT71((int7)((uint64_t)plVar26 >> 8),1);
          local_128 = 0;
          local_120 = 0;
          local_a8 = 0xffffffff;
          local_fc = 0;
          local_80 = (int64_t *)0x0;
          local_b8 = local_f8;
          do {
            iVar20 = FUN_01d3a5a0();
            uVar17 = local_b8;
            if ((iVar20 == 6) || ((local_128 & 1) != 0)) break;
            if ((int)local_d0 == -1) {
              if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                fVar37 = local_b8._4_4_ /
                         (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
                local_a8 = 0xffffffff;
                if (fVar37 < 0.0) goto LAB_01dda8e5;
                local_d0 = 0xffffffff;
                if (fVar37 < (float)(int)this_ptr[0x30]) {
                  local_d0 = (uint64_t)(uint)(int)fVar37;
                  local_a8 = local_d0;
                }
              }
              else if ((local_b8._4_4_ < g_0239424c) || (lVar33 = this_ptr[0x52], lVar33 == 0)) {
LAB_01dda8e5:
                local_a8 = 0xffffffff;
                local_d0 = local_a8;
              }
              else {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar24 = 0;
                }
                uVar29 = 0;
                do {
                  if (uVar24 == uVar29) goto LAB_01dda8e5;
                  lVar25 = uVar29 * 4;
                  uVar29 = uVar29 + 1;
                } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                local_d0 = (uint64_t)((int)uVar29 - 1);
                local_a8 = local_d0;
              }
            }
            cVar19 = (char)plVar26;
            plVar23 = (int64_t *)*arg1;
            cVar18 = (char)arg1[1];
            if (plVar23 == local_80) {
              if (((cVar18 != '\0') && (cVar19 == '\0')) && (plVar23 != (int64_t *)0x0)) {
                cVar18 = '\x01';
                FUN_00d50b00();
                plVar23 = local_80;
                goto LAB_01dda958;
              }
              cVar1 = *(char *)((int64_t)this_ptr + 0x1b5);
              cVar18 = cVar19;
              uVar22 = local_b8;
            }
            else {
              if ((cVar18 != '\0') && (plVar23 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              if ((cVar19 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01dda958:
              local_80 = plVar23;
              cVar1 = *(char *)((int64_t)this_ptr + 0x1b5);
              uVar22 = local_b8;
            }
            plVar23 = this_ptr;
            if (cVar1 != '\0') {
              local_b8._4_4_ = (float)((uint64_t)uVar22 >> 0x20);
              plVar23 = (int64_t *)(local_120 & 0xffffffffffffff01);
              if ((local_120 & 1) == 0) {
                if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                  local_b8._4_4_ =
                       local_b8._4_4_ /
                       (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
                  plVar23 = (int64_t *)0xffffffff;
                  if ((0.0 <= local_b8._4_4_) && (local_b8._4_4_ < (float)(int)this_ptr[0x30])) {
                    plVar23 = (int64_t *)(uint64_t)(uint)(int)local_b8._4_4_;
                  }
                }
                else {
                  plVar23 = (int64_t *)0xffffffff;
                  if ((g_0239424c <= local_b8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                    iVar20 = *(int *)(lVar33 + 0x18);
                    iVar21 = iVar20 + 3;
                    if (-1 < iVar20) {
                      iVar21 = iVar20;
                    }
                    uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                    if (iVar21 >> 2 < 1) {
                      uVar24 = 0;
                    }
                    uVar29 = 0;
                    do {
                      if (uVar24 == uVar29) goto LAB_01ddaa39;
                      lVar25 = uVar29 * 4;
                      uVar29 = uVar29 + 1;
                    } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                    plVar23 = (int64_t *)(uint64_t)((int)uVar29 - 1);
                  }
                }
LAB_01ddaa39:
                plVar28 = (int64_t *)this_ptr[0x34];
                if ((int)this_ptr[0x36] == (int)plVar23) {
LAB_01ddaa4c:
                  if ((plVar28 == (int64_t *)0x0) || ((int)plVar28[3] < 8)) goto LAB_01ddb393;
                }
                else if (plVar28 != (int64_t *)0x0) {
                  iVar20 = (int)plVar28[3];
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  if (3 < iVar20) {
                    lVar33 = 0;
                    do {
                      if (*(int *)(plVar28[2] + lVar33 * 4) == (int)plVar23) goto LAB_01ddaa4c;
                      lVar33 = lVar33 + 1;
                    } while (iVar21 >> 2 != (int)lVar33);
                  }
                }
                local_b8 = uVar22;
                iVar20 = FUN_01d3a5a0();
                if (iVar20 == 1) {
                  cVar19 = *(char *)((int64_t)this_ptr + 0x279);
                  if (cVar19 == '\0') {
                    fVar37 = local_b8._4_4_ /
                             (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174)
                             );
                    plVar28 = (int64_t *)0xffffffff;
                    if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                      plVar28 = (int64_t *)(uint64_t)(uint)(int)fVar37;
                    }
                  }
                  else {
                    plVar28 = (int64_t *)0xffffffff;
                    if ((g_0239424c <= local_b8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0))
                    {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                      if (iVar21 >> 2 < 1) {
                        uVar24 = 0;
                      }
                      uVar29 = 0;
                      do {
                        if (uVar24 == uVar29) goto LAB_01ddab88;
                        lVar25 = uVar29 * 4;
                        uVar29 = uVar29 + 1;
                      } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                      plVar28 = (int64_t *)(uint64_t)((int)uVar29 - 1);
                    }
                  }
LAB_01ddab88:
                  plVar23 = this_ptr;
                  if ((int)this_ptr[0x36] != (int)plVar28) {
                    lVar33 = this_ptr[0x34];
                    if (lVar33 != 0) {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      if (3 < iVar20) {
                        plVar23 = *(int64_t **)(lVar33 + 0x10);
                        lVar33 = 0;
                        do {
                          if (*(int *)((int64_t)plVar23 + lVar33 * 4) == (int)plVar28)
                          goto LAB_01ddab98;
                          lVar33 = lVar33 + 1;
                        } while (iVar21 >> 2 != (int)lVar33);
                      }
                    }
                    goto LAB_01ddac56;
                  }
LAB_01ddab98:
                  if ((local_9c & 2) == 0) goto LAB_01ddac6d;
                  if (((cVar19 != '\0') && (g_0239424c <= local_b8._4_4_)) &&
                     (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                    iVar20 = *(int *)(lVar33 + 0x18);
                    iVar21 = iVar20 + 3;
                    if (-1 < iVar20) {
                      iVar21 = iVar20;
                    }
                    plVar28 = (int64_t *)(uint64_t)(uint)(iVar21 >> 2);
                    if (iVar21 >> 2 < 1) {
                      plVar28 = (int64_t *)0x0;
                    }
                    plVar23 = (int64_t *)0x0;
                    do {
                      if (plVar28 == plVar23) goto LAB_01ddb263;
                      lVar25 = (int64_t)plVar23 * 4;
                      plVar23 = (int64_t *)((int64_t)plVar23 + 1);
                    } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                    plVar23 = (int64_t *)(uint64_t)((int)plVar23 - 1);
                  }
LAB_01ddb263:
                  FUN_01dd4720(plVar28,plVar23);
                }
                else {
LAB_01ddac56:
                  if ((local_9c & 2) == 0) {
                    cVar19 = *(char *)((int64_t)this_ptr + 0x279);
LAB_01ddac6d:
                    if (cVar19 == '\0') {
                      fVar37 = local_b8._4_4_ /
                               (*(float *)(this_ptr + 0x2d) +
                               *(float *)((int64_t)this_ptr + 0x174));
                      iVar20 = -1;
                      if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                        iVar20 = (int)fVar37;
                      }
                    }
                    else {
                      iVar20 = -1;
                      if ((g_0239424c <= local_b8._4_4_) &&
                         (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                        iVar21 = *(int *)(lVar33 + 0x18);
                        iVar27 = iVar21 + 3;
                        if (-1 < iVar21) {
                          iVar27 = iVar21;
                        }
                        uVar24 = (uint64_t)(uint)(iVar27 >> 2);
                        if (iVar27 >> 2 < 1) {
                          uVar24 = 0;
                        }
                        uVar29 = 0;
                        do {
                          if (uVar24 == uVar29) goto LAB_01ddad14;
                          lVar25 = uVar29 * 4;
                          uVar29 = uVar29 + 1;
                        } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_
                                );
                        iVar20 = (int)uVar29 + -1;
                      }
                    }
LAB_01ddad14:
                    plVar28 = this_ptr;
                    if ((int)this_ptr[0x36] != iVar20) {
                      lVar33 = this_ptr[0x34];
                      if (lVar33 != 0) {
                        iVar21 = *(int *)(lVar33 + 0x18);
                        iVar27 = iVar21 + 3;
                        if (-1 < iVar21) {
                          iVar27 = iVar21;
                        }
                        if (3 < iVar21) {
                          plVar28 = *(int64_t **)(lVar33 + 0x10);
                          lVar33 = 0;
                          do {
                            if (*(int *)((int64_t)plVar28 + lVar33 * 4) == iVar20)
                            goto LAB_01ddad72;
                            lVar33 = lVar33 + 1;
                          } while (iVar27 >> 2 != (int)lVar33);
                        }
                      }
                      iVar20 = FUN_01d3a5a0();
                      local_fc = local_fc & 0xff;
                      if (iVar20 == 1) {
                        local_fc = 1;
                      }
                      plVar28 = (int64_t *)0x0;
                    }
                  }
LAB_01ddad72:
                  if (local_80 != (int64_t *)0x0) {
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 != 5) {
                      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(this_ptr + 0x2d) +
                                 *(float *)((int64_t)this_ptr + 0x174));
                        plVar28 = (int64_t *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                          plVar28 = (int64_t *)(uint64_t)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (int64_t *)0xffffffff;
                        if ((g_0239424c <= local_b8._4_4_) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddae3a;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (int64_t *)(uint64_t)((int)uVar29 - 1);
                        }
                      }
LAB_01ddae3a:
                      if ((int)this_ptr[0x36] != (int)plVar28) {
                        lVar33 = this_ptr[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(int64_t *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddae4a;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                        if (((*(char *)((int64_t)this_ptr + 0x279) != '\0') &&
                            (g_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (int64_t *)(uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (int64_t *)0x0;
                          }
                          plVar23 = (int64_t *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (int64_t)plVar23 * 4;
                            plVar23 = (int64_t *)((int64_t)plVar23 + 1);
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                        goto LAB_01ddb377;
                      }
                    }
LAB_01ddae4a:
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 == 5) {
                      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(this_ptr + 0x2d) +
                                 *(float *)((int64_t)this_ptr + 0x174));
                        plVar28 = (int64_t *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                          plVar28 = (int64_t *)(uint64_t)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (int64_t *)0xffffffff;
                        if ((g_0239424c <= local_b8._4_4_) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddafc9;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (int64_t *)(uint64_t)((int)uVar29 - 1);
                        }
                      }
LAB_01ddafc9:
                      if ((int)this_ptr[0x36] != (int)plVar28) {
                        lVar33 = this_ptr[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(int64_t *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddafd9;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                        if (((*(char *)((int64_t)this_ptr + 0x279) != '\0') &&
                            (g_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (int64_t *)(uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (int64_t *)0x0;
                          }
                          plVar23 = (int64_t *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (int64_t)plVar23 * 4;
                            plVar23 = (int64_t *)((int64_t)plVar23 + 1);
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                        goto LAB_01ddb377;
                      }
                    }
LAB_01ddafd9:
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 == 6) {
                      if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(this_ptr + 0x2d) +
                                 *(float *)((int64_t)this_ptr + 0x174));
                        plVar28 = (int64_t *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                          plVar28 = (int64_t *)(uint64_t)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (int64_t *)0xffffffff;
                        if ((g_0239424c <= local_b8._4_4_) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddb158;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (int64_t *)(uint64_t)((int)uVar29 - 1);
                        }
                      }
LAB_01ddb158:
                      if ((int)this_ptr[0x36] == (int)plVar28) {
LAB_01ddb164:
                        if (((*(char *)((int64_t)this_ptr + 0x279) != '\0') &&
                            (g_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (int64_t *)(uint64_t)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (int64_t *)0x0;
                          }
                          plVar23 = (int64_t *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (int64_t)plVar23 * 4;
                            plVar23 = (int64_t *)((int64_t)plVar23 + 1);
                          } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                      }
                      else {
                        lVar33 = this_ptr[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(int64_t *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddb164;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                      }
                    }
                  }
                }
LAB_01ddb377:
                local_120 = CONCAT71((int7)((uint64_t)plVar28 >> 8),1);
                plVar23 = (int64_t *)(**(code **)(*this_ptr + 0x990))();
                uVar22 = local_b8;
              }
            }
LAB_01ddb393:
            lVar33 = *arg1;
            cVar19 = (char)arg1[1];
            local_b8 = uVar22;
            if (local_d8 == lVar33) {
              if (((cVar19 != '\0') && ((char)local_a0 == '\0')) && (local_d8 != 0)) {
                local_a0 = (uint32_t)CONCAT71((int7)((uint64_t)plVar23 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if ((cVar19 != '\0') && (lVar33 != 0)) {
                FUN_00d50b00();
              }
              if (((char)local_a0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_a0 = (uint32_t)CONCAT71((int7)((uint64_t)plVar26 >> 8),cVar19);
              local_d8 = lVar33;
            }
            (**(code **)(*this_ptr + 0x658))();
            plVar26 = local_50;
            if (local_50 == local_80) {
              plVar26 = local_80;
              local_31 = cVar18;
              if ((cVar18 == '\0') && (local_50 != (int64_t *)0x0)) {
                if (local_48 != '\0') goto LAB_01ddb454;
                local_31 = '\x01';
                FUN_00d50b00();
                plVar26 = local_80;
              }
            }
            else {
              if (local_48 == '\0') {
                if (local_50 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_31 = '\x01';
                if ((cVar18 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  goto LAB_01ddb4a4;
                }
              }
              else {
                if ((cVar18 != '\0') && (local_80 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01ddb454:
                local_48 = '\0';
              }
              local_31 = '\x01';
            }
LAB_01ddb4a4:
            plVar23 = (int64_t *)*arg1;
            local_80 = plVar26;
            if (plVar23 == plVar26) {
              if (((local_31 != '\0') && ((char)arg1[1] == '\0')) &&
                 (plVar26 != (int64_t *)0x0)) {
                cVar18 = '\x01';
                plVar23 = (int64_t *)((uint64_t)plVar23 & 0xffffffffffffff00);
                FUN_00d50b00(plVar26);
                goto LAB_01ddb518;
              }
            }
            else {
              lVar33 = arg1[1];
              if ((local_31 != '\0') && (plVar26 != (int64_t *)0x0)) {
                FUN_00d50b00(plVar26);
              }
              *arg1 = (int64_t)plVar26;
              cVar18 = local_31;
              if (((char)lVar33 != '\0') && (plVar23 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ddb518:
              *(char *)(arg1 + 1) = cVar18;
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar34 = (undefined7)((uint64_t)plVar23 >> 8);
            plVar26 = (int64_t *)CONCAT71(uVar34,local_31);
            uVar17 = local_b8;
            if (*arg1 == 0) break;
            iVar20 = FUN_01d3a5a0();
            if (iVar20 == 5) {
              plVar26 = (int64_t *)CONCAT71(uVar34,local_31);
              FUN_01d3abf0();
              uVar22 = FUN_01e466c0();
              fStack_b0 = extraout_XMM0_Dc_00;
              fStack_ac = extraout_XMM0_Dd_00;
              local_b8 = uVar22;
              if (((local_78[0] & 1) != 0) &&
                 (((char)this_ptr[0x3d] != '\0' || ((char)this_ptr[0x46] != '\0')))) {
                if (*(char *)((int64_t)this_ptr + 0x1b5) != '\0') {
                  local_228 = local_d8;
                  local_220 = '\0';
                  local_218 = *arg1;
                  local_210 = '\0';
                  cVar18 = (**(code **)(*this_ptr + 0x9e0))((byte)local_fc & 1,&local_218);
                  if ((local_210 != '\0') && (local_218 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_220 != '\0') && (local_228 != 0)) {
                    FUN_00d50b20();
                  }
                  uVar22 = local_b8;
                  if (cVar18 == '\0') goto LAB_01ddb78f;
                }
                local_b8._4_4_ = (float)((uint64_t)uVar22 >> 0x20);
                local_168 = g_023dccec;
                uStack_160 = 0;
                local_278._8_8_ = 0;
                local_278._0_8_ = g_023dccf4;
                if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                  local_b8._4_4_ =
                       local_b8._4_4_ /
                       (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
                  if ((0.0 <= local_b8._4_4_) &&
                     (fVar37 = (float)(int)this_ptr[0x30], local_b8._4_4_ < fVar37)) {
                    iVar20 = (int)local_b8._4_4_;
                    goto LAB_01ddb6ee;
                  }
LAB_01ddb740:
                  plVar23 = (int64_t *)0x0;
                  bVar35 = false;
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = uStack_70;
                  _local_78 = auVar40 << 0x40;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = local_98._8_8_;
                  local_98 = auVar8 << 0x40;
LAB_01ddb754:
                  uVar34 = (undefined7)((uint64_t)plVar26 >> 8);
                  bVar9 = true;
                  local_b8 = uVar22;
                }
                else {
                  if ((local_b8._4_4_ < g_0239424c) || (lVar33 = this_ptr[0x52], lVar33 == 0))
                  goto LAB_01ddb740;
                  iVar20 = *(int *)(lVar33 + 0x18);
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                  if (iVar21 >> 2 < 1) {
                    uVar24 = 0;
                  }
                  uVar29 = 0;
                  do {
                    if (uVar24 == uVar29) goto LAB_01ddb740;
                    fVar37 = *(float *)(*(int64_t *)(lVar33 + 0x10) + uVar29 * 4);
                    uVar29 = uVar29 + 1;
                  } while (fVar37 <= local_b8._4_4_);
                  iVar20 = (int)uVar29 + -1;
LAB_01ddb6ee:
                  auVar40 = ZEXT416((uint)fVar37);
                  if (iVar20 == -1) goto LAB_01ddb740;
                  local_b8 = uVar22;
                  FUN_01dd4960();
                  plVar26 = local_50;
                  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                  }
                  _local_78 = FUN_01e436c0();
                  uStack_70._0_4_ = extraout_XMM0_Dc_01;
                  uStack_70._4_4_ = extraout_XMM0_Dd_01;
                  local_98 = auVar40;
                  if ((int)plVar26[3] < 4) {
LAB_01ddbc76:
                    bVar35 = false;
                    plVar23 = (int64_t *)0x0;
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ = uStack_70;
                    _local_78 = auVar14 << 0x40;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = local_98._8_8_;
                    local_98 = auVar15 << 0x40;
                  }
                  else {
                    bVar35 = true;
                    lVar33 = 0;
                    do {
                      local_288._0_8_ = FUN_01dcf710();
                      local_288._8_4_ = extraout_XMM0_Dc_05;
                      local_288._12_4_ = extraout_XMM0_Dd_06;
                      local_118 = auVar40;
                      cVar18 = FUN_00d054a0();
                      if (cVar18 != '\0') {
                        auVar40 = local_118;
                        if (bVar35) {
                          local_168 = FUN_00d05360(local_288._0_4_);
                          uStack_160 = CONCAT44(extraout_XMM0_Dd_05,extraout_XMM0_Dc_04);
                          bVar35 = false;
                          local_278 = auVar40;
                        }
                        else {
                          FUN_00d05360(local_288._0_4_);
                          local_168 = FUN_00d052e0();
                          uStack_160 = CONCAT44(extraout_XMM0_Dd_07,extraout_XMM0_Dc_06);
                          local_278 = auVar40;
                        }
                      }
                      lVar33 = lVar33 + 1;
                      iVar20 = (int)plVar26[3];
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                    } while (lVar33 < iVar21 >> 2);
                    if (bVar35) goto LAB_01ddbc76;
                    plVar23 = (int64_t *)FUN_00e8fc40();
                    FUN_00152930();
                    (**(code **)(*plVar23 + 0x18))();
                    local_200 = '\0';
                    local_208 = 0;
                    FUN_01d4eaa0(local_278._0_4_);
                    if ((local_200 != '\0') && (local_208 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52700();
                    FUN_01d52740();
                    (**(code **)(*local_50 + 0x368))(0.0 - (float)local_168);
                    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (3 < (int)plVar26[3]) {
                      lVar33 = 0;
                      do {
                        local_118._0_8_ = FUN_01dcf710();
                        local_118._8_4_ = extraout_XMM0_Dc_07;
                        local_118._12_4_ = extraout_XMM0_Dd_08;
                        local_288 = auVar40;
                        cVar18 = FUN_00d054a0();
                        if (cVar18 != '\0') {
                          FUN_01d52740();
                          local_138 = local_50;
                          local_130 = 0;
                          if (local_48 == '\0') {
                            if (local_50 != (int64_t *)0x0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_48 = '\0';
                          }
                          local_130 = '\x01';
                          auVar40 = local_288;
                          (**(code **)(*this_ptr + 0x610))(local_118._0_4_);
                          if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        lVar33 = lVar33 + 1;
                        iVar20 = (int)plVar26[3];
                        iVar21 = iVar20 + 3;
                        if (-1 < iVar20) {
                          iVar21 = iVar20;
                        }
                      } while (lVar33 < iVar21 >> 2);
                    }
                    FUN_01d52740();
                    (**(code **)(*local_50 + 0x368))((float)local_168);
                    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52770();
                    plVar26 = (int64_t *)FUN_00e8fc40();
                    FUN_00152930();
                    (**(code **)(*plVar26 + 0x18))();
                    local_118._0_8_ = plVar26;
                    FUN_01d526f0();
                    local_1f0 = '\0';
                    local_1f8 = 0;
                    FUN_01d4eaa0();
                    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52700();
                    FUN_01d52740();
                    local_1e0 = '\0';
                    local_1e8 = plVar23;
                    FUN_01d49110(0,3);
                    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    auVar40 = local_118;
                    uVar22 = local_118._0_8_;
                    FUN_01d52770();
                    if (plVar23 != (int64_t *)uVar22) {
                      FUN_00d50b00();
                      if (plVar23 == (int64_t *)0x0) {
                        plVar23 = (int64_t *)local_118._0_8_;
                      }
                      else {
                        FUN_00d50b20();
                        plVar23 = (int64_t *)local_118._0_8_;
                      }
                    }
                    FUN_01ca6a90();
                    _local_78 = (int64_t)local_50;
                    if (local_50 == (int64_t *)0x0) {
                      uVar22 = 0;
                      auVar16._8_8_ = 0;
                      auVar16._0_8_ = uStack_70;
                      _local_78 = auVar16 << 0x40;
                    }
                    else {
                      uVar22 = CONCAT71(auVar40._1_7_,1);
                      if (local_48 == '\0') {
                        FUN_00d50b00();
                        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    local_98._0_8_ = uVar22;
                    FUN_01ca5d90();
                    if ((char)this_ptr[0x46] != '\0') {
                      local_1d8 = _local_78;
                      local_1d0 = '\0';
                      (**(code **)(*this_ptr + 0x9c0))();
                      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (((char)this_ptr[0x3d] == '\0') ||
                       (plVar26 = (int64_t *)this_ptr[0x3e], plVar26 == (int64_t *)0x0)) {
                      if ((char)this_ptr[0x46] != '\0') goto LAB_01ddbfa5;
                    }
                    else {
                      local_140 = 0;
                      uVar36 = FUN_00d50b00();
                      local_140 = '\x01';
                      local_1c8 = _local_78;
                      local_1c0 = '\0';
                      local_148 = this_ptr;
                      cVar18 = (**(code **)(*plVar26 + 0x18))(uVar36,&local_1c8);
                      bVar35 = true;
                      if (cVar18 == '\0') {
                        bVar35 = (char)this_ptr[0x46] != '\0';
                      }
                      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (bVar35) {
LAB_01ddbfa5:
                        FUN_01e42030();
                        plVar26 = local_50;
                        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar26 != (int64_t *)0x0) {
                          FUN_01e42030();
                          plVar26 = local_50;
                          local_1b0 = '\0';
                          local_1a8 = 0;
                          local_1a0 = '\0';
                          local_1b8 = plVar23;
                          FUN_01e48f80(((float)local_b8 - (float)local_f8) + (float)local_168);
                          local_190 = '\0';
                          local_198 = 0;
                          local_188 = _local_78;
                          local_180 = '\0';
                          uVar22 = (**(code **)(*plVar26 + 0x738))(&local_188,&local_198,4);
                          if ((local_180 != '\0') && (local_188 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_190 != '\0') && (local_198 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          local_128 = CONCAT71((int7)((uint64_t)uVar22 >> 8),1);
                        }
                      }
                    }
                    bVar35 = true;
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  plVar26 = plVar23;
                  uVar22 = local_b8;
                  if (bVar35) goto LAB_01ddb754;
                  bVar9 = false;
                  uVar34 = 0;
                }
                if ((local_98[0] != '\0') && (_local_78 != 0)) {
                  FUN_00d50b20();
                }
                if ((bVar35) && (plVar23 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                plVar26 = (int64_t *)CONCAT71(uVar34,local_31);
                if (!bVar9) {
                  bVar31 = 1;
                  uVar17 = local_b8;
                  goto LAB_01ddc19e;
                }
              }
LAB_01ddb78f:
              if (*(char *)((int64_t)this_ptr + 0x1b5) == '\0') {
LAB_01ddb9d7:
                auVar11._12_4_ = 0;
                auVar11._0_12_ = _auStack_74;
                _local_78 = auVar11 << 0x20;
                uVar24 = local_a8;
              }
              else {
                auVar10._12_4_ = 0;
                auVar10._0_12_ = _auStack_74;
                _local_78 = auVar10 << 0x20;
                uVar24 = local_a8;
                if ((*(char *)((int64_t)this_ptr + 0x1b6) != '\0') && ((int)local_d0 != -1)) {
                  FUN_01e3f820();
                  auVar39._4_4_ = -(uint)(fStack_b0 < extraout_XMM0_Dc_02);
                  auVar39._0_4_ = -(uint)(local_b8._4_4_ < extraout_XMM0_Db);
                  auVar39._8_4_ = -(uint)(fStack_ac < extraout_XMM0_Dd_02);
                  auVar39._12_4_ = 0;
                  auVar39 = auVar39 << 0x20;
                  uStack_70._0_4_ = fStack_b0;
                  _local_78 = local_b8;
                  uStack_70._4_4_ = fStack_ac;
                  if ((-(uint)(local_b8._4_4_ < extraout_XMM0_Db) & 1) != 0) {
                    uVar22 = FUN_01e3f820();
                    auVar6._8_4_ = fStack_b0;
                    auVar6._0_8_ = local_b8;
                    auVar6._12_4_ = fStack_ac;
                    auVar3._8_4_ = extraout_XMM0_Dc_03;
                    auVar3._0_8_ = uVar22;
                    auVar3._12_4_ = extraout_XMM0_Dd_03;
                    auVar39 = blendps(auVar6,auVar3,2);
                    _local_78 = auVar39;
                  }
                  FUN_01e3f820();
                  auVar40 = _local_78;
                  if (extraout_XMM0_Db_00 + auVar39._4_4_ + g_02390d00 < (float)auStack_74) {
                    FUN_01e3f820();
                    fVar37 = extraout_XMM0_Db_01 + auVar39._4_4_;
                    fVar38 = extraout_XMM0_Dd_04 + auVar39._12_4_;
                    auVar4._4_4_ = fVar37;
                    auVar4._0_4_ = fVar37 + g_02390d00;
                    auVar4._8_4_ = fVar38;
                    auVar4._12_4_ = fVar38;
                    auVar40 = insertps(_local_78,auVar4,0x10);
                  }
                  fVar37 = auVar40._4_4_;
                  if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                    fVar37 = fVar37 / (*(float *)(this_ptr + 0x2d) +
                                      *(float *)((int64_t)this_ptr + 0x174));
                    uVar24 = 0xffffffff;
                    if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                      uVar24 = (uint64_t)(uint)(int)fVar37;
                    }
                  }
                  else {
                    uVar24 = 0xffffffff;
                    if ((g_0239424c <= fVar37) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      uVar29 = (uint64_t)(uint)(iVar21 >> 2);
                      if (iVar21 >> 2 < 1) {
                        uVar29 = 0;
                      }
                      uVar30 = 0;
                      do {
                        if (uVar29 == uVar30) goto LAB_01ddb9cb;
                        lVar25 = uVar30 * 4;
                        uVar30 = uVar30 + 1;
                      } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= fVar37);
                      uVar24 = (uint64_t)((int)uVar30 - 1);
                    }
                  }
LAB_01ddb9cb:
                  iVar20 = (int)local_a8;
                  iVar21 = (int)uVar24;
                  if (iVar20 == iVar21) goto LAB_01ddb9d7;
                  if (((int)local_d0 < iVar20) ||
                     ((iVar20 == (int)local_d0 && ((int)local_d0 < iVar21)))) {
                    uVar29 = local_a8;
                    if (iVar20 < iVar21) {
                      do {
                        fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        uVar32 = (int)uVar29 + 1;
                        uVar29 = (uint64_t)uVar32;
                      } while (iVar21 + 1U != uVar32);
                    }
                    else {
                      while (iVar20 = (int)uVar29, iVar21 < iVar20) {
                        if ((int)local_d0 < iVar20) {
                          fVar37 = (float)FUN_01dd4720();
                        }
                        else {
                          fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        }
                        uVar29 = (uint64_t)(iVar20 - 1);
                      }
                    }
                  }
                  else {
                    if ((int)local_d0 <= iVar20) {
                      auVar12._12_4_ = 0;
                      auVar12._0_12_ = _auStack_74;
                      _local_78 = auVar12 << 0x20;
                      if ((iVar20 != (int)local_d0) || ((int)local_d0 <= iVar21)) goto LAB_01dda7f8;
                    }
                    uVar29 = local_a8;
                    if (iVar20 <= iVar21) {
                      plVar26 = (int64_t *)(uint64_t)(iVar21 + 1U);
                      do {
                        if ((int)uVar29 < (int)local_d0) {
                          fVar37 = (float)FUN_01dd4720();
                        }
                        else {
                          fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        }
                        uVar32 = (int)uVar29 + 1;
                        uVar29 = (uint64_t)uVar32;
                      } while (iVar21 + 1U != uVar32);
                      auVar7._12_4_ = 0;
                      auVar7._0_12_ = _auStack_74;
                      _local_78 = auVar7 << 0x20;
                      local_a8 = uVar24;
                      goto LAB_01dda7f4;
                    }
                    do {
                      iVar20 = (int)uVar29;
                      fVar37 = (float)FUN_01dd3d20(fVar37,1);
                      uVar29 = (uint64_t)(iVar20 - 1);
                    } while (iVar21 < iVar20);
                  }
                  auVar13._12_4_ = 0;
                  auVar13._0_12_ = _auStack_74;
                  _local_78 = auVar13 << 0x20;
                }
              }
            }
            else {
LAB_01dda7f4:
              plVar26 = (int64_t *)CONCAT71((int7)((uint64_t)plVar26 >> 8),local_31);
              uVar24 = local_a8;
            }
LAB_01dda7f8:
            local_a8 = uVar24;
            uVar17 = local_b8;
          } while (*arg1 != 0);
        }
        local_b8._4_4_ = (float)((uint64_t)uVar17 >> 0x20);
        bVar31 = (byte)local_128 & 1;
        local_b8 = uVar17;
        if (((*(char *)((int64_t)this_ptr + 0x1b6) == '\0') || ((local_128 & 1) != 0)) ||
           ((local_120 & 1) != 0)) {
          if ((((byte)local_128 | (byte)local_120) & 1) == 0) {
            if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
              fVar37 = local_b8._4_4_ /
                       (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
              uVar24 = 0xffffffff;
              if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
                uVar24 = (uint64_t)(uint)(int)fVar37;
              }
            }
            else {
              uVar24 = 0xffffffff;
              if ((0.0 <= local_b8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar30 = 0;
                uVar29 = (uint64_t)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar29 = uVar30;
                }
                do {
                  if (uVar29 == uVar30) goto LAB_01dda62b;
                  lVar25 = uVar30 * 4;
                  uVar30 = uVar30 + 1;
                } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                uVar24 = (uint64_t)((int)uVar30 - 1);
              }
            }
LAB_01dda62b:
            lVar33 = this_ptr[0x34];
            if ((int)this_ptr[0x36] == (int)uVar24) {
LAB_01dda63e:
              if ((lVar33 != 0) && ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) != 4))
              goto LAB_01dda684;
            }
            else {
              if (lVar33 != 0) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                if (3 < iVar20) {
                  lVar25 = 0;
                  do {
                    if (*(int *)(*(int64_t *)(lVar33 + 0x10) + lVar25 * 4) == (int)uVar24)
                    goto LAB_01dda63e;
                    lVar25 = lVar25 + 1;
                  } while (iVar21 >> 2 != (int)lVar25);
                }
              }
LAB_01dda684:
              if ((*(char *)((int64_t)this_ptr + 0x279) != '\0') &&
                 ((0.0 <= local_b8._4_4_ && (lVar33 = this_ptr[0x52], lVar33 != 0)))) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar29 = 0;
                uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar24 = uVar29;
                }
                do {
                  if (uVar24 == uVar29) break;
                  lVar25 = uVar29 * 4;
                  uVar29 = uVar29 + 1;
                } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
              }
              FUN_01dd3d20(uVar24,0);
              uVar17 = local_b8;
            }
            local_b8 = uVar17;
            (**(code **)(*this_ptr + 0x990))();
            uVar17 = local_b8;
          }
        }
        else if ((this_ptr[0x34] != 0) && (7 < *(int *)(this_ptr[0x34] + 0x18))) {
          if (*arg1 != 0) {
            FUN_01d3abf0();
            uVar22 = FUN_01e466c0();
            if (((((float)local_f8 == (float)uVar22) &&
                 (!NAN((float)local_f8) && !NAN((float)uVar22))) &&
                (local_f8._4_4_ == (float)((uint64_t)uVar22 >> 0x20))) &&
               (local_9c = local_9c & 2, local_9c == 0)) {
              if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
                fVar37 = local_b8._4_4_ /
                         (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
              }
              else {
                fVar37 = local_b8._4_4_;
                if ((0.0 <= local_b8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
                  iVar20 = *(int *)(lVar33 + 0x18);
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  uVar29 = 0;
                  uVar24 = (uint64_t)(uint)(iVar21 >> 2);
                  if (iVar21 >> 2 < 1) {
                    uVar24 = uVar29;
                  }
                  do {
                    if (uVar24 == uVar29) break;
                    lVar25 = uVar29 * 4;
                    uVar29 = uVar29 + 1;
                  } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                }
              }
              FUN_01dd3d20(fVar37,0);
            }
          }
          (**(code **)(*this_ptr + 0x990))();
          uVar17 = local_b8;
        }
LAB_01ddc19e:
        uVar22 = local_f8;
        if (((char)plVar26 != '\0') && (local_80 != (int64_t *)0x0)) {
          local_b8 = uVar17;
          FUN_00d50b20();
          uVar22 = local_f8;
          uVar17 = local_b8;
        }
        local_f8 = uVar17;
        local_b8 = local_f8;
        if (bVar31 == 0) {
          fStack_f0 = fStack_b0;
          fStack_ec = fStack_ac;
          goto LAB_01ddc1e0;
        }
      }
      local_f8 = uVar22;
      if ((char)local_c4 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_01dd9e55;
    }
LAB_01ddc1e0:
    if (*arg1 != 0) {
      iVar20 = FUN_01d3b630();
      if (iVar20 == 1) {
        if ((char)local_c4 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_01dd9e55;
      }
      if (*arg1 != 0) {
        iVar20 = FUN_01d3b630();
        if (iVar20 == 2) {
          if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174));
            iVar20 = -1;
            if ((0.0 <= fVar37) && (fVar37 < (float)(int)this_ptr[0x30])) {
              iVar20 = (int)fVar37;
            }
          }
          else {
            iVar20 = -1;
            fVar37 = local_f8._4_4_;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = this_ptr[0x52], lVar33 != 0)) {
              iVar21 = *(int *)(lVar33 + 0x18);
              iVar27 = iVar21 + 3;
              if (-1 < iVar21) {
                iVar27 = iVar21;
              }
              uVar29 = 0;
              uVar24 = (uint64_t)(uint)(iVar27 >> 2);
              if (iVar27 >> 2 < 1) {
                uVar24 = uVar29;
              }
              do {
                if (uVar24 == uVar29) goto LAB_01ddc2d3;
                lVar25 = uVar29 * 4;
                uVar29 = uVar29 + 1;
              } while (*(float *)(*(int64_t *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
              iVar20 = (int)uVar29 + -1;
            }
          }
LAB_01ddc2d3:
          if ((int)this_ptr[0x36] != iVar20) {
            lVar33 = this_ptr[0x34];
            if (lVar33 != 0) {
              iVar21 = *(int *)(lVar33 + 0x18);
              iVar27 = iVar21 + 3;
              if (-1 < iVar21) {
                iVar27 = iVar21;
              }
              if (3 < iVar21) {
                lVar25 = 0;
                do {
                  if (*(int *)(*(int64_t *)(lVar33 + 0x10) + lVar25 * 4) == iVar20)
                  goto LAB_01ddc334;
                  lVar25 = lVar25 + 1;
                } while (iVar27 >> 2 != (int)lVar25);
              }
            }
            FUN_01dd3d20(fVar37,0);
            (**(code **)(*this_ptr + 0x990))();
          }
        }
      }
    }
LAB_01ddc334:
    if ((char)local_c4 == '\0') {
      FUN_00d50b20();
    }
  }
  else {
    iVar20 = FUN_01d3a5a0();
    if ((iVar20 == 1) && ((char)this_ptr[0x4f] != '\0')) {
      *(void*)((int64_t)this_ptr + 0x14c) = 1;
      goto LAB_01dd9e49;
    }
    local_60 = 0;
    local_58 = 0;
  }
  local_178 = *arg1;
  local_170 = '\0';
  FUN_01e459c0();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
LAB_01dd9e55:
  if (((char)local_a0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c59970
// ============================================================
// Function: FUN_01c59970
// Address: 01c59970
// Size: 3055 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c59970(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  char *pcVar7;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  float fVar9;
  uint64_t uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar11;
  float fVar12;
  uint32_t in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  float local_f8;
  float fStack_f4;
  uint32_t uStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_dc;
  uint64_t local_d8;
  uint64_t local_c8;
  uint32_t uStack_c0;
  float fStack_bc;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  fStack_f4 = (float)((uint64_t)param_2 >> 0x20);
  local_f8 = (float)param_2;
  fStack_e4 = (float)((uint64_t)param_1 >> 0x20);
  local_e8 = (float)param_1;
  uStack_f0 = in_XMM1_Dc;
  fStack_ec = in_XMM1_Dd;
  fStack_dc = in_XMM0_Dd;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  pcVar7 = local_48;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = plVar1;
  if (((char)this_ptr[0x5c] == '\0') && (this_ptr[0x2e] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    uVar8 = (**(code **)(*plVar1 + 0x390))((int)this_ptr[0x4b]);
    *(void*)((int64_t)this_ptr + 0x254) = uVar8;
    FUN_00d50b20();
  }
  if (local_f8 < g_023908d8) {
    local_e8 = local_e8 + g_023b1614;
    local_f8 = local_f8 + g_023b36b0;
  }
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01e3f820();
  if ((int)this_ptr[0x39] == 1) {
    local_d8 = FUN_01e3f820();
    lVar4 = this_ptr[0x39];
    local_c8._0_4_ = fVar11;
    local_c8._4_4_ = fVar12;
    uStack_c0 = uVar8;
    fStack_bc = fVar13;
    FUN_01d48370();
    auVar3._4_4_ = local_c8._4_4_;
    auVar3._0_4_ = (float)local_c8;
    auVar3._8_4_ = uStack_c0;
    auVar3._12_4_ = fStack_bc;
    if ((int)lVar4 == 1) {
      auVar2._4_4_ = local_c8._4_4_;
      auVar2._0_4_ = local_c8._4_4_ + g_0241c6e4;
      auVar2._8_4_ = fStack_bc;
      auVar2._12_4_ = fStack_bc;
      insertps(auVar3,auVar2,0x10);
    }
    plVar1 = (int64_t *)*arg1;
    FUN_00d05360(local_e8,local_f8,(uint32_t)local_d8);
    (**(code **)(*plVar1 + 0x390))();
  }
  FUN_01c532f0(local_e8,local_f8);
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01c54470(local_e8);
  if (((((*(float *)((int64_t)this_ptr + 0x21c) != (float)g_023dccec) ||
        (NAN(*(float *)((int64_t)this_ptr + 0x21c)) || NAN((float)g_023dccec))) ||
       (*(float *)(this_ptr + 0x44) != g_023dccec._4_4_)) ||
      ((NAN(*(float *)(this_ptr + 0x44)) || NAN(g_023dccec._4_4_) ||
       (*(float *)((int64_t)this_ptr + 0x224) != (float)g_023dccf4)))) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x224)) || NAN((float)g_023dccf4))) {
LAB_01c59bbf:
    FUN_01d39800((int)*(void*)((int64_t)this_ptr + 0x21c),
                 (int)*(void*)((int64_t)this_ptr + 0x224),g_02390124);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d488d0();
    FUN_01d48b40(g_02390124);
    fVar11 = (float)*(void*)((int64_t)this_ptr + 0x21c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              (fVar11,(float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20) +
                      g_02394248,*(float *)((int64_t)this_ptr + 0x224) + fVar11 + g_02390d00);
    uVar8 = (uint32_t)*(void*)((int64_t)this_ptr + 0x21c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              (uVar8,(float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20) +
                     g_02394248,uVar8);
    fVar12 = (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20);
    fVar9 = *(float *)((int64_t)this_ptr + 0x224) +
            (float)*(void*)((int64_t)this_ptr + 0x21c) + g_02390d00;
    uVar8 = 0;
    fVar13 = 0.0;
    fVar11 = fVar12 + g_02394248;
    fVar9 = (float)(**(code **)(*(int64_t *)*arg1 + 0x3e0))(fVar9,fVar11,fVar9);
    if (plVar5 != (int64_t *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
  }
  else {
    fVar9 = *(float *)(this_ptr + 0x45);
    if ((fVar9 != g_023dccf4._4_4_) || (NAN(fVar9) || NAN(g_023dccf4._4_4_))) goto LAB_01c59bbf;
  }
  if ((int)this_ptr[0x39] == 1) {
    FUN_01d48390();
    fVar11 = local_f8;
    fVar9 = (float)FUN_01c5ab50(local_e8);
    fVar12 = fStack_f4;
    uVar8 = uStack_f0;
    fVar13 = fStack_ec;
  }
  lVar4 = g_026e41f0;
  if ((*(char *)((int64_t)this_ptr + 0x22d) != '\0') ||
     (*(char *)((int64_t)this_ptr + 0x22e) != '\0')) {
    if (g_026e41f0 != 0) {
      fVar9 = (float)FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    (**(code **)(*local_58 + 0x3b0))(fVar9,&local_128);
    local_98 = local_40;
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)((int64_t)this_ptr + 0x22e) != '\0') {
      plVar1 = (int64_t *)*arg1;
      fVar9 = (float)FUN_01e3f820();
      fVar9 = fVar9 + fVar11;
      fVar11 = 0.0;
      fVar12 = 0.0;
      uVar8 = 0;
      fVar13 = 0.0;
      (**(code **)(*plVar1 + 0x3e0))(0,0,fVar9 + g_02390d00);
    }
    if (*(char *)((int64_t)this_ptr + 0x22d) != '\0') {
      plVar1 = (int64_t *)*arg1;
      uVar10 = FUN_01e3f820();
      local_c8._0_4_ = fVar11;
      local_c8._4_4_ = fVar12;
      uStack_c0 = uVar8;
      fStack_bc = fVar13;
      local_d8 = uVar10;
      fVar9 = (float)FUN_01e3f820();
      FUN_01e3f820();
      fVar12 = extraout_XMM0_Db + fVar12;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = extraout_XMM0_Dd + fVar13;
      auVar14._12_4_ = extraout_XMM0_Dd + fVar13;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fVar12 + g_02390d00;
      (**(code **)(*plVar1 + 0x3e0))
                (0,local_d8._4_4_ + local_c8._4_4_ + g_02390d00,fVar9 + fVar11 + g_02390d00,
                 auVar15._0_8_);
    }
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  if ((*(float *)((int64_t)this_ptr + 0x23c) != 0.0) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x23c)))) {
    uVar8 = FUN_01d48a00();
    local_d8._0_4_ = uVar8;
    FUN_01d489d0(*(void*)((int64_t)this_ptr + 0x23c));
    FUN_01d48b40(g_02390124);
    FUN_01c4b410();
    local_b8 = local_40;
    local_b0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_c8._0_4_ = (float)this_ptr[0x49];
    local_c8._4_4_ = (float)((uint64_t)this_ptr[0x49] >> 0x20);
    uStack_c0 = 0;
    fStack_bc = 0.0;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_00 + fVar11;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar11;
    auVar16._8_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar16._12_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar11 + g_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((float)local_c8,0,(float)local_c8,auVar17._0_8_);
    FUN_01d489d0((uint32_t)local_d8);
  }
  lVar4 = this_ptr[0x5b];
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d48b40(g_02390124);
    FUN_01c4b410();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    uVar10 = FUN_00dd6bf0();
    local_d8 = uVar10;
    local_c8 = FUN_00dd6bf0();
    uStack_c0 = extraout_XMM0_Dc;
    fStack_bc = extraout_XMM0_Dd_01;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3e0))((uint32_t)local_d8,0,(float)local_c8);
  }
  if ((((char)this_ptr[0x4a] != '\0') && (local_e8 <= *(float *)((int64_t)this_ptr + 0x254))) &&
     (*(float *)((int64_t)this_ptr + 0x254) <= local_e8 + local_f8 + g_02390d00)) {
    FUN_01d48b40(g_02390124);
    (**(code **)(*local_58 + 0x390))();
    local_88 = local_40;
    local_80 = 0;
    fVar11 = fStack_e4;
    fVar12 = fStack_dc;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        fVar11 = fStack_e4;
        fVar12 = fStack_dc;
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    uVar10 = local_d8;
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar10 = local_d8;
    }
    local_d8._4_4_ = (float)((uint64_t)uVar10 >> 0x20);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      local_d8 = uVar10;
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_d8._0_4_ = *(void*)((int64_t)this_ptr + 0x254);
    uVar10 = FUN_01e3f820();
    uVar8 = *(void*)((int64_t)this_ptr + 0x254);
    uStack_c0 = extraout_XMM0_Dc_00;
    fStack_bc = extraout_XMM0_Dd_02;
    local_c8 = uVar10;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_01 + fVar11;
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar11;
    auVar18._8_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar18._12_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar11 + g_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((uint32_t)local_d8,local_c8._4_4_,uVar8,auVar19._0_8_);
  }
  if ((*(float *)(this_ptr + 0x52) == (float)g_023dccec) &&
     (!NAN(*(float *)(this_ptr + 0x52)) && !NAN((float)g_023dccec))) {
    if ((*(float *)((int64_t)this_ptr + 0x294) == g_023dccec._4_4_) &&
       (!NAN(*(float *)((int64_t)this_ptr + 0x294)) && !NAN(g_023dccec._4_4_))) {
      if ((*(float *)(this_ptr + 0x53) == (float)g_023dccf4) &&
         (!NAN(*(float *)(this_ptr + 0x53)) && !NAN((float)g_023dccf4))) {
        if ((*(float *)((int64_t)this_ptr + 0x29c) == g_023dccf4._4_4_) &&
           (!NAN(*(float *)((int64_t)this_ptr + 0x29c)) && !NAN(g_023dccf4._4_4_)))
        goto LAB_01c5a52a;
      }
    }
  }
  cVar6 = FUN_00d054a0((int)this_ptr[0x52],(int)this_ptr[0x53],local_e8);
  if (cVar6 != '\0') {
    FUN_01d39800((int)this_ptr[0x52],(int)this_ptr[0x53],g_02390d34);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfcdc0((int)plVar5[2],*(void*)((int64_t)plVar5 + 0x14),(int)plVar5[3],
                 *(float *)((int64_t)plVar5 + 0x1c) * g_023b1610);
    local_78 = local_40;
    local_70 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_118 = plVar1;
    local_110 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_58 + 0x390))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(g_02390124);
    local_108 = plVar1;
    local_100 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01c5a52a:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00194050
// ============================================================
// Function: FUN_00194050
// Address: 00194050
// Size: 9938 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_00194050(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_02698620;
  this_ptr[2] = &g_02699060;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00196b10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00196c80();
    FUN_00e87980();
  }
  FUN_00196df0();
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_001970e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00197250();
    FUN_00e87980();
  }
  FUN_001973c0();
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_001976b0();
    FUN_00e87980();
  }
  FUN_00197820();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00197b30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00197ca0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00197e10();
    FUN_00e87980();
  }
  this_ptr[0x2e] = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00197f80();
    FUN_00e87980();
  }
  FUN_001980f0();
  *(void*)(this_ptr + 0x30) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00198370();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_001984e0();
    FUN_00e87980();
  }
  this_ptr[0x31] = *(void*)(arg1 + 0x188);
  FUN_00198650();
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00198940();
    FUN_00e87980();
  }
  FUN_00198ab0();
  FUN_00198d30();
  *(void*)(this_ptr + 0x36) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00198fb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199120();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199290();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199400();
    FUN_00e87980();
  }
  FUN_00199570();
  FUN_001997f0();
  *(void*)(this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199ae0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199c50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_00199dc0();
    FUN_00e87980();
  }
  FUN_00199f30();
  *(void*)(this_ptr + 0x3d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019a220();
    FUN_00e87980();
  }
  FUN_0019a390();
  FUN_0019a6d0();
  FUN_0019aa10();
  *(void*)(this_ptr + 0x41) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019ad00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x20c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019ae70();
    FUN_00e87980();
  }
  FUN_0019afe0();
  FUN_0019b2d0();
  *(void*)(this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019b550();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x221) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019b6c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019b830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019b9a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019bb10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019bc80();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22f) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019bdf0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x46) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019bf60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x231) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019c0d0();
    FUN_00e87980();
  }
  FUN_0019c240();
  *(void*)(this_ptr + 0x48) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019c530();
    FUN_00e87980();
  }
  FUN_0019c760();
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019ca50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x254) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019cbc0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x4b) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019cd30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x25c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019cea0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019d010();
    FUN_00e87980();
  }
  FUN_0019d180();
  FUN_0019d470();
  *(void*)(this_ptr + 0x4f) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019d760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x279) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019d8d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x27a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019da40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x27c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019dbb0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x50) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fd53b == '\0') {
    FUN_0019dd20();
    FUN_00e87980();
  }
  FUN_0019de90();
  FUN_0019e110();
  FUN_0019e390();
  return;
}



// ============================================================
// 01dc6c10
// ============================================================
// Function: FUN_01dc6c10
// Address: 01dc6c10
// Size: 1911 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


int64_t * FUN_01dc6c10(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar8;
  bool bVar9;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_40;
  lVar4 = g_027f27a8;
  lVar1 = g_027f27a0;
  if ((char)arg1[0x29] == '\0') {
    if (param_2 == 1) {
      if (g_027f27a8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else if (param_2 == 0) {
      if (g_027f27a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
  }
  else {
    if ((g_028b8a68 == (void*)0x0) || (g_028b8a71 == '\0')) {
      FUN_00e8cb50();
      if (g_028b8a68 == (void*)0x0) {
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02572358;
        (*g_02572370)();
        if (g_028b8a68 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = g_028b8a68 != (void*)0x0;
          g_028b8a68 = puVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (g_028b8a70 == '\0') {
          g_028b8a70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        (**(code **)(*arg1 + 0x640))();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        iVar8 = 0;
        do {
          plVar7 = (int64_t *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar7 + 0x18))();
          FUN_01d4eaa0(g_0241f410);
          FUN_01d52700();
          FUN_01d52740();
          FUN_01d48b40(g_02390124);
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*plVar5 + 0x390))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_01d488d0();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar8 == 0) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_023b36b0,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_02390d30,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_023908ec,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_02390d2c,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 1) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_02390d2c,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_02390d30,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_023b36b0,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_023908ec,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 2) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d34,g_023908ec,g_02390d34);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d2c,g_023b36b0,g_02390d2c);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_02390d30,g_02390d30,g_02390d30);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(g_02390d34,g_023b36b0,g_02390d2c,g_023b36b0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01d52770();
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + 1;
          local_40 = plVar7;
        } while (iVar8 != 3);
        FUN_00d50b20();
        g_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((param_2 < -1) || (*(int *)((int64_t)g_028b8a68 + 0xc) <= (int)(param_2 + 1U))) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      lVar1 = *(int64_t *)(g_028b8a68[2] + (uint64_t)(param_2 + 1U) * 8);
      *(void*)(this_ptr + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar1;
      *(void*)(this_ptr + 1) = 1;
    }
  }
  return this_ptr;
}



// ============================================================
// 01dc82c0
// ============================================================
// Function: FUN_01dc82c0
// Address: 01dc82c0
// Size: 4560 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
//   "_editNumberOfColumns"
//   "_editShowsHeaderView"
//   "_editColumnResizingAllowed"
//   "_editColumnReorderingAllowed"
//   "_editColumnHidingAllowed"
//   "_editAssciiExportEnabled"
//   "_editDropFeedback"
//   "_editRowReorderingAllowed"
//   "_editUsesSubviewsForCells"
//   "getNumberOfColumns"
//   "showsHeaderView"
//   "setMultipleSelectionAllowed"
//   "isMultipleSelectionAllowed"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01dc82c0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87cb0();
  // [STATIC_INIT: property registration]
      g_028b8a98 = "_editNumberOfColumns";
      g_028b8aa0 = &g_026fd480;
      g_028b8aa8 = 0;
      g_028b8ab0 = &g_027f2b40;
      g_028b8ab8 = FUN_01de6810;
      g_028b8ac0 = FUN_01dc94d0;
      g_028b8ac8 = 0;
      ram_00000000028b8ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8ae0 = "_editShowsHeaderView";
      g_028b8ae8 = &g_026fd480;
      g_028b8af0 = 0;
      g_028b8af8 = &g_027f2b43;
      g_028b8b00 = FUN_01de6830;
      g_028b8b08 = FUN_01dc9aa0;
      g_028b8b10 = 0;
      ram_00000000028b8b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8b28 = "_editColumnResizingAllowed";
      g_028b8b30 = &g_026fd480;
      g_028b8b38 = 0;
      g_028b8b40 = &g_027f2b43;
      g_028b8b48 = FUN_01de6830;
      g_028b8b50 = FUN_01dc9b70;
      g_028b8b58 = 0;
      ram_00000000028b8b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8b70 = "_editColumnReorderingAllowed";
      g_028b8b78 = &g_026fd480;
      g_028b8b80 = 0;
      g_028b8b88 = &g_027f2b43;
      g_028b8b90 = FUN_01de6830;
      g_028b8b98 = FUN_01dc9bb0;
      g_028b8ba0 = 0;
      ram_00000000028b8ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8bb8 = "_editColumnHidingAllowed";
      g_028b8bc0 = &g_026fd480;
      g_028b8bc8 = 0;
      g_028b8bd0 = &g_027f2b43;
      g_028b8bd8 = FUN_01de6830;
      g_028b8be0 = FUN_01dc9bf0;
      g_028b8be8 = 0;
      ram_00000000028b8bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8c00 = "_editAssciiExportEnabled";
      g_028b8c08 = &g_026fd480;
      g_028b8c10 = 0;
      g_028b8c18 = &g_027f2b43;
      g_028b8c20 = FUN_01de6830;
      g_028b8c28 = FUN_01dc9c30;
      g_028b8c30 = 0;
      ram_00000000028b8c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8c48 = "_editDropFeedback";
      g_028b8c50 = &g_026fd480;
      g_028b8c58 = 0;
      g_028b8c60 = &g_027f2b40;
      g_028b8c68 = FUN_01de6810;
      g_028b8c70 = FUN_01dc9c70;
      g_028b8c78 = 0;
      ram_00000000028b8c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8c90 = "_editRowReorderingAllowed";
      g_028b8c98 = &g_026fd480;
      g_028b8ca0 = 0;
      g_028b8ca8 = &g_027f2b43;
      g_028b8cb0 = FUN_01de6830;
      g_028b8cb8 = FUN_01dc9cb0;
      g_028b8cc0 = 0;
      ram_00000000028b8cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8cd8 = "_editUsesSubviewsForCells";
      g_028b8ce0 = &g_026fd480;
      g_028b8ce8 = 0;
      g_028b8cf0 = &g_027f2b43;
      g_028b8cf8 = FUN_01de6830;
      g_028b8d00 = FUN_01dc9cf0;
      g_028b8d08 = 0;
      ram_00000000028b8d10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8d20 = "getNumberOfColumns";
      g_028b8d28 = &g_026fd480;
      g_028b8d30 = 0;
      g_028b8d38 = &g_027f2b46;
      g_028b8d40 = FUN_01de6850;
      g_028b8d48 = FUN_01dca080;
      g_028b8d50 = 0;
      ram_00000000028b8d58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8d68 = "showsHeaderView";
      g_028b8d70 = &g_026fd480;
      g_028b8d78 = 0;
      g_028b8d80 = &g_027f2b48;
      g_028b8d88 = FUN_01de6880;
      g_028b8d90 = FUN_01dca090;
      g_028b8d98 = 0;
      ram_00000000028b8da0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8db0 = "setMultipleSelectionAllowed";
      g_028b8db8 = &g_026fd480;
      g_028b8dc0 = 0;
      g_028b8dc8 = &g_027f2b43;
      g_028b8dd0 = FUN_01de6830;
      g_028b8dd8 = FUN_01dca0e0;
      g_028b8de0 = 0;
      ram_00000000028b8de8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8df8 = "isMultipleSelectionAllowed";
      g_028b8e00 = &g_026fd480;
      g_028b8e08 = 0;
      g_028b8e10 = &g_027f2b48;
      g_028b8e18 = FUN_01de6880;
      g_028b8e20 = FUN_01dca100;
      g_028b8e28 = 0;
      ram_00000000028b8e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 01dca1a0
// ============================================================
// Function: FUN_01dca1a0
// Address: 01dca1a0
// Size: 1243 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01dca1a0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  void*puVar6;
  void*puVar7;
  int64_t *plVar8;
  int64_t *this_ptr;
  bool bVar9;
  float fVar10;
  int64_t *local_38;
  char local_30;
  
  FUN_01e3b710();
  if ((g_028b8a78 == (void*)0x0) || (g_028b8a81 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8a78 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025795a8;
      (*g_025795c0)();
      if (g_028b8a78 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = g_028b8a78 != (void*)0x0;
        g_028b8a78 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (g_028b8a80 == '\0') {
        g_028b8a80 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b8a88 == (void*)0x0) || (g_028b8a91 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8a88 == (void*)0x0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *puVar7 = &g_0267ba68;
      puVar7[2] = &g_0267c530;
      *(void*)(puVar7 + 0x27) = 0;
      puVar7[0x2e] = 0;
      *(void*)(puVar7 + 0x2f) = 0;
      puVar7[0x30] = 0;
      *(void*)(puVar7 + 0x31) = 0;
      puVar7[0x28] = 0;
      puVar7[0x29] = 0;
      *(void*)(puVar7 + 0x2a) = 0;
      puVar7[0x2b] = 0;
      puVar7[0x2c] = 0;
      *(void*)((int64_t)puVar7 + 0x165) = 0;
      *(void*)((int64_t)puVar7 + 0x18c) = 0;
      *(void*)((int64_t)puVar7 + 0x194) = 0;
      *(void*)((int64_t)puVar7 + 0x199) = 0;
      puVar7[0x35] = 0;
      puVar7[0x36] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      (*g_0267ba80)();
      if (g_028b8a88 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = g_028b8a88 != (void*)0x0;
        g_028b8a88 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (g_028b8a90 == '\0') {
        g_028b8a90 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      g_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
  }
  fVar10 = g_028b8e40;
  if ((g_028b8e40 == 0.0) && (!NAN(g_028b8e40))) {
    g_028b8e40 = 18.0;
    fVar10 = g_02392fd8;
  }
  *(float *)(this_ptr + 0x2d) = fVar10;
  *(void*)((int64_t)this_ptr + 0x16c) = 1;
  this_ptr[0x2e] = 0x3f80000000000000;
  *(void*)((int64_t)this_ptr + 0x184) = 1;
  *(void*)(this_ptr + 0x33) = 1;
  *(void*)(this_ptr + 0x36) = 0xffffffff;
  *(void*)((int64_t)this_ptr + 0x1b4) = 0x101;
  this_ptr[0x27] = -1;
  *(void*)((int64_t)this_ptr + 0x22c) = 0x101;
  g_028b8e44 = 0;
  *(void*)(this_ptr + 0x48) = 1;
  *(void*)(this_ptr + 0x29) = 0xffffffff;
  *(void*)((int64_t)this_ptr + 0x254) = 0xffffffff;
  this_ptr[0x31] = 0;
  (**(code **)(*this_ptr + 0x640))();
  cVar5 = (**(code **)(*local_38 + 0x638))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    g_028b8e44 = 1;
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_38 + 0x648))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  puVar7 = (void*)this_ptr[0x2f];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2f] = (int64_t)puVar6;
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar4)();
  lVar1 = this_ptr[0x51];
  this_ptr[0x51] = (int64_t)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = this_ptr[0x52];
  this_ptr[0x52] = (int64_t)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar8 = (int64_t)&g_026990a0;
  plVar8[2] = (int64_t)&g_026999c8;
  FUN_00d500e0();
  lVar1 = this_ptr[0x53];
  this_ptr[0x53] = (int64_t)plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
    plVar8 = (int64_t *)this_ptr[0x53];
  }
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x4d0))();
  lVar1 = this_ptr[0x53];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c365c0
// ============================================================
// Function: FUN_01c365c0
// Address: 01c365c0
// Size: 1144 bytes
// Class: GNTableView
// String references:
//   "%lld"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c365c0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  void* pVar7;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  uint32_t uVar9;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  plVar8 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_01c33700();
  if (cVar2 == '\0') {
    bVar3 = (**(code **)(*this_ptr + 0x9a0))();
    pVar7 = (void*)bVar3;
    (**(code **)(*plVar8 + 0x490))(bVar3,0x17,0);
    local_90 = local_50;
    local_88 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_88 = '\x01';
    FUN_01d488d0();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    plVar1 = local_60;
    bVar3 = (**(code **)(*this_ptr + 0x9a0))();
    pVar7 = (void*)bVar3;
    (**(code **)(*plVar1 + 0x4a8))(bVar3,0x17);
    local_a0 = local_50;
    local_98 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_98 = '\x01';
    FUN_01d488d0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar9 = (**(code **)(*this_ptr + 0xb28))();
  if ((char)local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_01c36829;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01c367e3:
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_017cac30();
    uVar9 = FUN_00d50b20();
  }
  else {
    if (local_50 != (int64_t *)0x0) goto LAB_01c367e3;
LAB_01c36829:
    uVar6 = 0;
  }
  local_48 = 1;
  local_50 = (int64_t *)&g_024da828;
  local_40 = uVar6;
  FUN_00d8cb40(uVar9,&local_50);
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) goto LAB_01c36a19;
    FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (int64_t *)0x0) goto LAB_01c36a19;
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0) {
    local_38 = plVar8;
    (**(code **)(*this_ptr + 0x9e8))();
    local_80 = local_50;
    local_78 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_78 = '\x01';
    FUN_01d48a10();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = (int64_t *)*arg1;
    local_c0 = plVar1;
    local_b8 = '\0';
    local_a8 = '\0';
    local_b0 = plVar8;
    (**(code **)(*this_ptr + 0xa00))(param_2,&local_c0);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    (**(code **)(*plVar8 + 0x3f8))(param_1,param_2);
    plVar8 = local_38;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36a19:
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01de8580
// ============================================================
// Function: FUN_01de8580
// Address: 01de8580
// Size: 1078 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


uint64_t FUN_01de8580(uint64_t param_1,char param_2)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  char cVar7;
  uint32_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  undefined7 uVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  int64_t *local_c0;
  char local_b8;
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
  
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = g_027f2e58;
  if (g_027f2e58 != 0) {
    FUN_00d50b00();
  }
  uVar8 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 != '\0') {
      (**(code **)(*this_ptr + 0x540))();
    }
    goto LAB_01de899b;
  }
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = g_027ef970;
  if (g_027ef970 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = g_02800140;
  if (cVar6 == '\0') {
    FUN_01cae990();
    plVar12 = local_40;
    local_80 = g_027ef978;
    if (g_027ef978 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    cVar6 = (**(code **)(*plVar12 + 0x50))();
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      FUN_01cae990();
      local_70 = g_02725a10;
      if (g_02725a10 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      cVar7 = (**(code **)(*local_c0 + 0x50))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_02800140;
    if (cVar7 == '\0') {
      local_50 = *arg1;
      local_48 = '\0';
      uVar9 = FUN_01d827c0(param_1,param_2);
      uVar10 = (uint64_t)uVar9;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01de899b;
    }
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar4;
    local_58 = '\x01';
    FUN_01ccaae0(param_1,&local_60);
    plVar12 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar12 = (int64_t *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (int64_t *)0x0) {
      uVar10 = 0;
      goto LAB_01de899b;
    }
    (**(code **)(*plVar12 + 0x3f8))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      uVar10 = 0;
    }
    else {
      (**(code **)(*plVar12 + 0x3f8))();
      iVar1 = *(int *)((int64_t)local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      uVar2 = (uint3)((uint)iVar1 >> 8);
      uVar10 = (uint64_t)CONCAT31(uVar2,iVar1 != 0);
      if ((iVar1 != 0) && (param_2 != '\0')) {
        uVar10 = CONCAT71((uint7)uVar2,1);
        FUN_01d25b00();
      }
    }
  }
  else {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    local_88 = '\x01';
    FUN_01ccaae0(param_1,&local_90);
    plVar12 = local_40;
    if (local_40 == (int64_t *)0x0) {
      plVar12 = (int64_t *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    uVar11 = (undefined7)((uint64_t)lVar4 >> 8);
    uVar10 = CONCAT71(uVar11,plVar12 != (int64_t *)0x0);
    if ((plVar12 != (int64_t *)0x0) && (param_2 != '\0')) {
      uVar10 = CONCAT71(uVar11,1);
      FUN_01d25910();
    }
  }
  if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01de899b:
  return uVar10 & 0xffffffff;
}



// ============================================================
// 01c35eb0
// ============================================================
// Function: FUN_01c35eb0
// Address: 01c35eb0
// Size: 960 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c35eb0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint8_t uVar4;
  int iVar5;
  void*arg1;
  int64_t *this_ptr;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01c33700();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*local_48 + 0x490))(uVar4,0x17,0);
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
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    uVar4 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*local_b8 + 0x4a8))(uVar4,0x17);
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
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01c36250;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01c36250;
  iVar5 = FUN_00d8c7a0();
  if (iVar5 != 0) {
    (**(code **)(*this_ptr + 0x9e8))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01d48a10();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_a8 = plVar2;
    local_a0 = '\0';
    local_90 = '\0';
    local_98 = plVar1;
    (**(code **)(*this_ptr + 0xa00))(param_2,&local_a8);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x3f8))(param_1,param_2);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36250:
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c35730
// ============================================================
// Function: FUN_01c35730
// Address: 01c35730
// Size: 974 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c35730(uint64_t param_1,float param_2,float param_3)

{
  bool bVar1;
  int64_t lVar2;
  void*this_ptr;
  float fVar3;
  float fVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_30;
  char local_28;
  
  if ((g_028b6550 == 0) || (g_028b6559 == '\0')) {
    FUN_00e8cb50();
    if (g_028b6550 == 0) {
      FUN_01cfcdc0(0,0,0,g_02390124);
      lVar2 = g_028b6550;
      if (g_028b6550 != local_30) {
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
        bVar1 = g_028b6550 != 0;
        g_028b6550 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6558 == '\0')) {
        g_028b6558 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(g_0239011c,g_0239011c,g_0239011c,g_0239011c);
      lVar2 = g_028b6540;
      if (g_028b6540 != local_30) {
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
        bVar1 = g_028b6540 != 0;
        g_028b6540 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6548 == '\0')) {
        g_028b6548 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cb4790();
      (**(code **)(*local_68 + 0x4c0))();
      lVar2 = g_028b6560;
      if (g_028b6560 != local_30) {
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
        bVar1 = g_028b6560 != 0;
        g_028b6560 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6568 == '\0')) {
        g_028b6568 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b6559 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b6559 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar2 = g_028b6560;
  if (g_028b6560 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  fVar4 = (g_023b1608 + param_3) * g_0239011c + g_02390d00;
  fVar3 = g_023945d0 * param_3 + param_2;
  (**(code **)(*(int64_t *)*this_ptr + 0x3c0))(fVar3,g_02390118 + fVar4);
  lVar2 = g_028b6550;
  if (g_028b6550 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*this_ptr + 0x3c8))(fVar3,fVar4);
  FUN_01c35c30(param_2,param_3);
  return;
}



// ============================================================
// 01c34010
// ============================================================
// Function: FUN_01c34010
// Address: 01c34010
// Size: 882 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c34010(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_00d654d0();
  FUN_00d4efa0();
  plVar1 = this_ptr + 0x3c;
  FUN_00c88450(plVar1);
  plVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != arg1) {
    return;
  }
  if ((int64_t *)*plVar1 != (int64_t *)0x0) {
    pplVar4 = &local_40;
    (**(code **)(*(int64_t *)*plVar1 + 0x388))();
    plVar2 = local_40;
    FUN_01152ba0();
    if (plVar2 == (int64_t *)0x0) {
LAB_01c340de:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c340de;
    }
    plVar2 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_c0 = g_027eb298;
      if (g_027eb298 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_a8 = '\0';
      local_b0 = plVar2;
      FUN_00d41430(&local_b0,&local_c0);
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a0 = g_027eb2a0;
      if (g_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      local_88 = '\0';
      local_90 = plVar2;
      FUN_00d41430(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if ((int64_t *)*plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar1 + 0x368))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*this_ptr + 0x968))();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c34363;
    }
  }
  local_78 = '\0';
  local_80 = 0;
  (**(code **)(*this_ptr + 0x968))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01c34363:
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 01dc94d0
// ============================================================
// Function: FUN_01dc94d0
// Address: 01dc94d0
// Size: 925 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01dc94d0(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  char *pcVar4;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t local_d8;
  code *local_d0;
  void*local_c8;
  void*local_c0;
  char local_b8 [8];
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_40;
  char local_38;
  
  if (0 < unaff_ESI) {
    iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
    if (iVar1 < unaff_ESI) {
      local_d0 = g_02692480;
      local_c8 = &g_02692468;
      do {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = local_c8;
        puVar3[2] = &g_026927f8;
        puVar3[0xc] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(void*)((int64_t)puVar3 + 0x24) = 0;
        *(void*)((int64_t)puVar3 + 0x2c) = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *(void*)(puVar3 + 0xb) = 0;
        (*local_d0)();
        lVar2 = g_027f29e0;
        if (g_027f29e0 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar2;
        local_88 = '\x01';
        FUN_01db9840();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_01db96b0(g_02394240);
        FUN_01dcc2f0();
        FUN_00d50b20();
        iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
      } while (iVar1 < unaff_ESI);
    }
    while (unaff_ESI < iVar1) {
      FUN_00d23340();
      puVar3 = local_c0;
      local_60 = local_b8[0];
      pcVar4 = local_b8;
      if (local_b8[0] == '\0') {
        pcVar4 = &local_60;
      }
      *pcVar4 = '\0';
      if ((local_b8[0] != '\0') && (local_c0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 == '\0') && (puVar3 != (void*)0x0)) {
        FUN_00d50b00();
      }
      FUN_01dcc3e0();
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x160) + 0xc);
    }
    FUN_00d403d0();
    local_80 = g_027f29e8;
    if (g_027f29e8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    lVar2 = g_027f29f0;
    if (g_027f29f0 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    FUN_00083ea0(2,&local_d8);
    FUN_000b4da0();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    FUN_00d40470(&local_40,&stack0xffffffffffffffb0,1,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = (void*)&g_0253d630;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = &g_024c5048;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 002a6470
// ============================================================
// Function: FUN_002a6470
// Address: 002a6470
// Size: 862 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_002a6470(void)

{
  int64_t *plVar1;
  uint uVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar5 [16];
  float fVar7;
  uint8_t auVar6 [16];
  uint8_t local_c8 [16];
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01e44a80();
  local_c8._0_8_ = (**(code **)(*this_ptr + 0xaf8))();
  local_c8._8_8_ = extraout_XMM0_Qb;
  cVar3 = (**(code **)(*this_ptr + 0x9a0))();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*this_ptr + 0x640))();
    plVar1 = local_60;
    local_a0 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_60 + 0x390))();
    local_70 = local_40;
    local_68 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = '\x01';
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_90 = *arg1;
  local_88 = '\0';
  (**(code **)(*this_ptr + 0xb20))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar7 = (float)((uint64_t)local_c8._0_8_ >> 0x20);
  auVar5._0_4_ = g_023945e0 & (uint)fVar7;
  auVar5._4_4_ = _UNK_023945e4 & (uint)fVar7;
  auVar5._8_4_ = _UNK_023945e8 & uVar2;
  auVar5._12_4_ = _UNK_023945ec & uVar2;
  auVar6._4_12_ = SUB1612(auVar5 | g_023945f0,4);
  auVar6._0_4_ = SUB164(auVar5 | g_023945f0,0) + fVar7;
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  insertps(local_c8,auVar5,0x10);
  FUN_01d48b40();
  plVar1 = (int64_t *)*arg1;
  FUN_00d05530();
  FUN_01d39800();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  return;
}



// ============================================================
// 01de7760
// ============================================================
// Function: FUN_01de7760
// Address: 01de7760
// Size: 709 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01de7760(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t this_ptr;
  int64_t *local_60;
  char local_58;
  
  FUN_01ccad60();
  plVar1 = local_60;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01de7968;
  pplVar5 = &local_60;
  FUN_01ccad60();
  plVar1 = local_60;
  if ((g_026e56b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026fd498 = FUN_0006d940();
    g_026fd480 = "GNTableView";
    g_026fd488 = 0x2a0;
    g_026fd490 = FUN_00193920;
    g_026fd4a0 = 0;
    ram_00000000026fd4a8 = 0;
    g_026fd4b0 = 0;
    ram_00000000026fd4b8 = 0;
    g_026fd4c0 = 0;
    ram_00000000026fd4c8 = 0;
    g_026fd4d0 = 0;
    ram_00000000026fd4d8 = 0;
    g_026fd4e0 = 0;
    ram_00000000026fd4e8 = 0;
    g_026fd4f0 = 0;
    ram_00000000026fd4f8 = 0;
    g_026fd500 = 0;
    ram_00000000026fd508 = 0;
    g_026fd510 = 0;
    ram_00000000026fd518 = 0;
    g_026fd520 = 0;
    ram_00000000026fd528 = 0;
    g_026fd530 = 0;
    ram_00000000026fd538 = 0;
    g_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01de77e1:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01de77e1;
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
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf190();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027f2e58;
  if (g_027f2e58 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf130();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x7f8))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((int64_t *)(this_ptr + 0x48) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x50) + 0x10))();
  FUN_00d50b00();
  FUN_01de09c0();
  if ((int64_t *)(this_ptr + 0x50) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x50) + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01de7968:
  FUN_01cc9ce0();
  return;
}



// ============================================================
// 01c33b70
// ============================================================
// Function: FUN_01c33b70
// Address: 01c33b70
// Size: 646 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c33b70(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t **pplVar3;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  FUN_00d652e0();
  FUN_00d4efa0();
  FUN_00c88450((int64_t *)(this_ptr + 0x1e0));
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != arg1) {
    return;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x1e0);
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pplVar3 = &local_38;
  (**(code **)(*plVar1 + 0x388))();
  plVar1 = local_38;
  FUN_01152ba0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01c33c4a;
  }
  pplVar3 = (int64_t **)&g_02802688;
LAB_01c33c4a:
  plVar1 = *pplVar3;
  if (*(char *)(pplVar3 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar3 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = g_027eb298;
    if (g_027eb298 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_80 = '\0';
    local_88 = plVar1;
    FUN_00d41040(&local_88,&local_98);
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_78 = g_027eb2a0;
    if (g_027eb2a0 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_60 = '\0';
    local_68 = plVar1;
    FUN_00d41040(&local_68,&local_78);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01de8070
// ============================================================
// Function: FUN_01de8070
// Address: 01de8070
// Size: 668 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01de8070(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  FUN_01ccad60();
  if (local_50 == 0) {
    lVar8 = 0;
    if (local_48 != '\0') {
      lVar8 = 0;
    }
  }
  else {
    lVar8 = local_50;
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar1 = g_02800140;
  if (lVar8 != 0) {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_50 == 0) {
      bVar4 = true;
      lVar8 = 0;
    }
    else {
      lVar8 = local_50;
      if (local_48 == '\0') {
        FUN_00d50b00();
        bVar4 = false;
      }
      else {
        local_48 = '\0';
        bVar4 = false;
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      puVar7 = (void*)0x0;
      local_40 = 0;
      bVar2 = false;
    }
    else {
      FUN_01d25cb0();
      if (local_50 == 0) {
        local_40 = 0;
        bVar3 = false;
        bVar2 = false;
        puVar7 = (void*)0x0;
      }
      else {
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        for (lVar8 = 0; iVar6 = FUN_01dcea80(), lVar8 < iVar6; lVar8 = lVar8 + 1) {
          cVar5 = FUN_01dd3250();
          if (cVar5 != '\0') {
            lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar8 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
        *(void*)(this_ptr + 0x59) = 1;
        FUN_01d2c5c0();
        *(void*)(this_ptr + 0x59) = 0;
        bVar3 = true;
        bVar2 = true;
        local_40 = local_50;
      }
      if (!bVar4) {
        FUN_00d50b20();
        bVar2 = bVar3;
      }
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (puVar7 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01c33700
// ============================================================
// Function: FUN_01c33700
// Address: 01c33700
// Size: 507 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


uint32_t FUN_01c33700(void)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *plVar5;
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
LAB_01c337ac:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01c337ac;
      }
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      return 0;
    }
    if ((g_026e56b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_026fd498 = FUN_0006d940();
      g_026fd480 = "GNTableView";
      g_026fd488 = 0x2a0;
      g_026fd490 = FUN_00193920;
      g_026fd4a0 = 0;
      ram_00000000026fd4a8 = 0;
      g_026fd4b0 = 0;
      ram_00000000026fd4b8 = 0;
      g_026fd4c0 = 0;
      ram_00000000026fd4c8 = 0;
      g_026fd4d0 = 0;
      ram_00000000026fd4d8 = 0;
      g_026fd4e0 = 0;
      ram_00000000026fd4e8 = 0;
      g_026fd4f0 = 0;
      ram_00000000026fd4f8 = 0;
      g_026fd500 = 0;
      ram_00000000026fd508 = 0;
      g_026fd510 = 0;
      ram_00000000026fd518 = 0;
      g_026fd520 = 0;
      ram_00000000026fd528 = 0;
      g_026fd530 = 0;
      ram_00000000026fd538 = 0;
      g_026fd540 = 0;
      ___cxa_guard_release();
    }
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffc8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d8))();
      FUN_01dcea90();
      uVar3 = FUN_01dd3250();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return uVar3;
    }
  } while( true );
}



// ============================================================
// 01c35270
// ============================================================
// Function: FUN_01c35270
// Address: 01c35270
// Size: 819 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c35270(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  char cVar2;
  void*puVar3;
  void*arg1;
  int64_t *this_ptr;
  float fVar4;
  uint32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t *local_40;
  char local_38;
  
  fVar6 = (float)param_2;
  fVar4 = (float)param_1;
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*this_ptr + 0xb18))();
    fVar8 = (float)((uint64_t)param_2 >> 0x20) * _UNK_023945d4;
    fVar7 = fVar6 * g_023945d0 + fVar4;
    if (cVar2 == '\0') {
      FUN_00d05530(fVar4,fVar6,g_02390d00);
      (**(code **)(*local_40 + 0x3f0))(5,1,0,1);
      (**(code **)(*local_40 + 0x490))(1,1,0);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00d05570(fVar7,g_023b1608);
      FUN_01cb3a30(uVar5,g_02390d2c);
    }
    else {
      FUN_01c35c30();
    }
    cVar2 = (**(code **)(*this_ptr + 0xb18))();
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*this_ptr + 0xb20))();
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02680400;
      *(void*)((int64_t)puVar3 + 0xc) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(void*)((int64_t)puVar3 + 0x39) = 0;
      *(void*)((int64_t)puVar3 + 0x41) = 0;
      (*g_02680418)();
      FUN_01d39310(fVar7,fVar8 + (float)((uint64_t)param_1 >> 0x20),g_02390d30,
                   (float)dVar1 * g_0241e850 + g_0241e854);
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = (**(code **)(*this_ptr + 0xaf8))();
    FUN_01c35730(uVar5,fVar4,fVar6);
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0198a0a0
// ============================================================
// Function: FUN_0198a0a0
// Address: 0198a0a0
// Size: 588 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_0198a0a0(double param_1)

{
  int64_t *plVar1;
  int64_t *this_ptr;
  float fVar2;
  int64_t local_30;
  char local_28;
  
  fVar2 = *(float *)((int64_t)this_ptr + 0x14c);
  if ((char)this_ptr[0x29] == '\0') {
    if (0.0 < fVar2) {
      fVar2 = fVar2 + (float)(param_1 / g_0241b6b8);
      *(float *)((int64_t)this_ptr + 0x14c) = fVar2;
      if (fVar2 < 0.0) {
        *(void*)((int64_t)this_ptr + 0x14c) = 0;
        FUN_01f27fe0();
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b00();
        FUN_01f474f0();
        if (this_ptr + 0x27 != (int64_t *)0x0) {
          (**(code **)(this_ptr[0x27] + 0x10))();
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)this_ptr + 0x149) = 0;
      }
      (**(code **)(*this_ptr + 0x620))();
      plVar1 = (int64_t *)this_ptr[6];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
        (**(code **)(&UNK_000014a0 + *plVar1))(*(void*)((int64_t)this_ptr + 0x14c));
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (fVar2 < g_02390124) {
    fVar2 = fVar2 + (float)(param_1 / g_023b3490);
    *(float *)((int64_t)this_ptr + 0x14c) = fVar2;
    if (g_02390124 < fVar2) {
      *(void*)((int64_t)this_ptr + 0x14c) = 0x3f800000;
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x27 != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(void*)((int64_t)this_ptr + 0x149) = 0;
    }
    (**(code **)(*this_ptr + 0x620))();
    plVar1 = (int64_t *)this_ptr[6];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(&UNK_000014a0 + *plVar1))(*(void*)((int64_t)this_ptr + 0x14c));
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01de7c30
// ============================================================
// Function: FUN_01de7c30
// Address: 01de7c30
// Size: 523 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01de7c30(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *local_38;
  char local_30;
  
  FUN_01cc9cf0();
  FUN_01ccad60();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01ccad60();
  plVar1 = local_38;
  if ((g_026e56b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026fd498 = FUN_0006d940();
    g_026fd480 = "GNTableView";
    g_026fd488 = 0x2a0;
    g_026fd490 = FUN_00193920;
    g_026fd4a0 = 0;
    ram_00000000026fd4a8 = 0;
    g_026fd4b0 = 0;
    ram_00000000026fd4b8 = 0;
    g_026fd4c0 = 0;
    ram_00000000026fd4c8 = 0;
    g_026fd4d0 = 0;
    ram_00000000026fd4d8 = 0;
    g_026fd4e0 = 0;
    ram_00000000026fd4e8 = 0;
    g_026fd4f0 = 0;
    ram_00000000026fd4f8 = 0;
    g_026fd500 = 0;
    ram_00000000026fd508 = 0;
    g_026fd510 = 0;
    ram_00000000026fd518 = 0;
    g_026fd520 = 0;
    ram_00000000026fd528 = 0;
    g_026fd530 = 0;
    ram_00000000026fd538 = 0;
    g_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01de7cbf;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01de7cbf:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ddf190();
  FUN_01ddf130();
  (**(code **)(*plVar1 + 0x7f8))();
  FUN_00d50b20();
  return;
}



// ============================================================
// 0019c530
// ============================================================
// Function: FUN_0019c530
// Address: 0019c530
// Size: 519 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
//   "GNTableViewDropFeedback"
//   "_dropFeedback"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void* FUN_0019c530(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e5e60 = "_dropFeedback";
      g_026e5e68 = &g_026fd480;
      g_026e5e70 = 0;
      g_026e5e78 = 0x6500;
      g_026e5e80 = "GNTableViewDropFeedback";
      g_026e5e88 = &g_026e5f00;
      g_026e5e90 = 0;
      ram_00000000026e5e98 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e5e60;
}

