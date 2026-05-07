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

