// ===================================================================
// GNScrollView — Complete reconstructed pseudocode
// 42 functions
// ===================================================================

// Registered properties (2):
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


// ============================================================
// 01dd11e0
// ============================================================
// Function: FUN_01dd11e0
// Address: 01dd11e0
// Size: 5267 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dd11e0(uint64_t param_1,uint64_t param_2)

{
  float *pfVar1;
  int iVar2;
  int64_t *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint64_t uVar7;
  int64_t lVar8;
  char cVar9;
  uint uVar10;
  int64_t lVar11;
  uint uVar12;
  int iVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar16;
  int64_t *plVar17;
  uint uVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  float fVar23;
  float fVar25;
  uint64_t uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  uint32_t in_XMM1_Dc;
  uint32_t uVar29;
  uint32_t in_XMM1_Dd;
  uint32_t uVar30;
  float local_268;
  int64_t *local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  uint64_t local_1b8;
  float local_1a8;
  float fStack_1a4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  int64_t local_190;
  char local_188;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  uint64_t local_b8;
  float local_98;
  int64_t *local_88;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  
  fVar27 = (float)((uint64_t)param_2 >> 0x20);
  fVar26 = (float)param_2;
  fVar25 = (float)((uint64_t)param_1 >> 0x20);
  uVar21 = (uint32_t)param_1;
  fVar23 = fVar26;
  fVar28 = fVar27;
  uVar29 = in_XMM1_Dc;
  uVar30 = in_XMM1_Dd;
  (**(code **)(*this_ptr + 0x640))();
  local_c0 = local_48;
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar3 = (int64_t *)*arg1;
  lVar8 = arg1[1];
  if (((char)lVar8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((int)this_ptr[0x30] == 0) {
    bVar16 = false;
    local_88 = (int64_t *)0x0;
    bVar5 = false;
    local_58 = (int64_t *)0x0;
    bVar6 = false;
    local_50 = (int64_t *)0x0;
  }
  else {
    FUN_01d48370();
    cVar9 = (**(code **)(*plVar3 + 1000))();
    local_268 = fVar23;
    if (cVar9 == '\0') {
      uVar22 = FUN_01e436c0();
      local_268 = fVar26;
      fVar28 = fVar27;
      uVar29 = in_XMM1_Dc;
      uVar30 = in_XMM1_Dd;
      FUN_00d05360(uVar21,fVar26,uVar22,fVar23);
      (**(code **)(*plVar3 + 0x390))();
    }
    (**(code **)(*this_ptr + 0x970))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*this_ptr + 0x970))();
      local_178 = 0;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_178 = '\x01';
      local_180 = local_48;
      FUN_01d488d0();
      if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_268 = fVar26;
      fVar28 = fVar27;
      (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar21);
      uVar29 = in_XMM1_Dc;
      uVar30 = in_XMM1_Dd;
    }
    if (g_028b8e44 == '\x01') {
      (**(code **)(*this_ptr + 0x970))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        local_b8 = FUN_01e3f820();
        local_1a8 = local_268;
        fStack_1a4 = fVar28;
        uStack_1a0 = uVar29;
        uStack_19c = uVar30;
        uVar22 = FUN_01e436c0();
        local_1b8._0_4_ = local_268;
        local_1b8._4_4_ = fVar28;
        (**(code **)(*this_ptr + 0x970))();
        local_168 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_168 = '\x01';
        local_170 = local_48;
        local_268 = local_1a8;
        fVar28 = fStack_1a4;
        uVar29 = uStack_1a0;
        uVar30 = uStack_19c;
        (**(code **)(*local_c0 + 0x640))((uint32_t)local_b8,&local_170,uVar22,(float)local_1b8);
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01cfbc00();
    local_158 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_158 = '\x01';
    local_160 = local_48;
    FUN_01d488d0();
    if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(char *)((int64_t)this_ptr + 0x279) == '\0') {
      fVar28 = 0.0;
      uVar29 = 0;
      uVar30 = 0;
      local_268 = *(float *)(this_ptr + 0x2d) + *(float *)((int64_t)this_ptr + 0x174);
      fVar23 = fVar25 / local_268;
      uVar18 = (uint)fVar23;
      uVar12 = (uint)((fVar25 + fVar27 + g_02390d00) / local_268);
      uVar10 = *(uint *)(this_ptr + 0x30);
    }
    else {
      uVar10 = *(uint *)(this_ptr + 0x30);
      uVar14 = (uint64_t)uVar10;
      if ((int)uVar10 < 1) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        do {
          pfVar1 = (float *)(*(int64_t *)(this_ptr[0x52] + 0x10) + uVar19 * 4);
          if (fVar25 < *pfVar1 || fVar25 == *pfVar1) goto LAB_01dd16d7;
          uVar19 = uVar19 + 1;
        } while (uVar14 != uVar19);
        uVar19 = (uint64_t)uVar10;
      }
LAB_01dd16d7:
      uVar18 = (int)uVar19 - 1;
      fVar23 = fVar25 + fVar27 + g_02390d00;
      uVar12 = 0;
      if ((int)uVar10 < 0) {
        uVar12 = uVar10;
      }
      do {
        if ((int)uVar14 < 1) goto LAB_01dd1723;
        local_268 = *(float *)(*(int64_t *)(this_ptr[0x52] + 0x10) + -4 + uVar14 * 4);
        fVar28 = 0.0;
        uVar29 = 0;
        uVar30 = 0;
        uVar14 = uVar14 - 1;
      } while (fVar23 < local_268);
      uVar12 = (int)uVar14 + 1;
    }
LAB_01dd1723:
    uVar24 = CONCAT44(local_1b8._4_4_,fVar23);
    bVar16 = false;
    uVar14 = (uint64_t)uVar18;
    if ((int)uVar18 < 0) {
      uVar14 = 0;
    }
    uVar18 = uVar10 - 1;
    if ((int)uVar12 < (int)uVar10) {
      uVar18 = uVar12;
    }
    lVar11 = this_ptr[0x2c];
    if (*(int *)(lVar11 + 0xc) < 1) {
      local_88 = (int64_t *)0x0;
      bVar5 = false;
      local_58 = (int64_t *)0x0;
      bVar6 = false;
      local_50 = (int64_t *)0x0;
    }
    else {
      uVar19 = 0;
      local_50 = (int64_t *)0x0;
      bVar6 = false;
      local_58 = (int64_t *)0x0;
      bVar5 = false;
      local_88 = (int64_t *)0x0;
      bVar16 = false;
      do {
        local_1b8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
        plVar17 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + uVar19 * 8);
        local_b8 = uVar19;
        if (plVar17 != (int64_t *)0x0) {
          uVar22 = FUN_00d50b00();
          uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
        }
        uVar19 = local_b8;
        local_1b8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
        uVar7 = CONCAT44(local_1b8._4_4_,(float)local_1b8);
        if (local_58 == plVar17) {
          if ((bVar5) || (local_58 == (int64_t *)0x0)) {
            if (local_58 == (int64_t *)0x0) {
              local_58 = (int64_t *)0x0;
            }
            else {
              uVar22 = FUN_00d50b20();
              uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
            }
            uVar7 = CONCAT44((int)((uint64_t)uVar24 >> 0x20),(float)local_1b8);
          }
          else {
            bVar5 = true;
          }
        }
        else {
          if ((bVar5) && (local_58 != (int64_t *)0x0)) {
            uVar22 = FUN_00d50b20();
            uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
          }
          local_1b8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
          uVar7 = CONCAT44(local_1b8._4_4_,(float)local_1b8);
          uVar19 = local_b8;
          local_58 = plVar17;
          bVar5 = true;
        }
        uVar20 = uVar14;
        if ((int)uVar14 <= (int)uVar18) {
          do {
            local_1b8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
            local_1b8 = (**(code **)(*this_ptr + 0x950))((int)uVar24,uVar19 & 0xffffffff);
            local_1a8 = local_268;
            fStack_1a4 = fVar28;
            uStack_1a0 = uVar29;
            uStack_19c = uVar30;
            if (uVar19 == 0) {
              if (uVar20 == *(uint *)(this_ptr + 0x36)) {
LAB_01dd1abc:
                if ((this_ptr[0x40] == 0) && ((int)this_ptr[0x29] == -1)) {
                  cVar9 = (**(code **)(*plVar3 + 1000))();
                  if (cVar9 == '\0') {
                    FUN_01dce800();
                    local_148 = 0;
                    if (local_40 == '\0') {
                      if (local_48 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    local_148 = '\x01';
                    local_150 = local_48;
                    FUN_01d488d0();
                    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_98 = (float)FUN_01dcf710();
                    if (g_028b8e44 != '\0') {
                      local_98 = local_98 + g_02390124;
                      local_268 = local_268 + g_023b1608;
                    }
                    (**(code **)(*this_ptr + 0x878))();
                    (**(code **)(*this_ptr + 0x640))();
                    (**(code **)(*local_130 + 0x670))(local_98);
                    local_138 = 0;
                    if (local_40 == '\0') {
                      if (local_48 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    local_138 = '\x01';
                    local_140 = local_48;
                    (**(code **)(*plVar3 + 0x3a0))();
                    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                }
              }
              else {
                lVar11 = this_ptr[0x34];
                if (lVar11 != 0) {
                  iVar2 = *(int *)(lVar11 + 0x18);
                  iVar13 = iVar2 + 3;
                  if (-1 < iVar2) {
                    iVar13 = iVar2;
                  }
                  if (3 < iVar2) {
                    lVar15 = 0;
                    do {
                      if (uVar20 == *(uint *)(*(int64_t *)(lVar11 + 0x10) + lVar15 * 4))
                      goto LAB_01dd1abc;
                      lVar15 = lVar15 + 1;
                    } while (iVar13 >> 2 != (int)lVar15);
                  }
                }
              }
            }
            FUN_01d48370();
            (**(code **)(*plVar3 + 0x368))((float)local_1b8);
            lVar11 = this_ptr[0x4d];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            cVar9 = FUN_00d24090();
            uVar19 = local_b8;
            if (cVar9 == '\0') {
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
            }
            else if (this_ptr[0x40] == 0) {
              cVar9 = (**(code **)(*plVar3 + 1000))();
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
              uVar19 = local_b8;
              if (cVar9 == '\0') {
                FUN_01dce800();
                local_118 = 0;
                if (local_58 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_118 = '\x01';
                local_120 = local_58;
                FUN_01d488d0();
                uVar19 = local_b8;
                if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_268 = local_1a8;
                fVar28 = fStack_1a4;
                uVar29 = uStack_1a0;
                uVar30 = uStack_19c;
                (**(code **)(*plVar3 + 0x3b0))(0);
              }
            }
            else if (lVar11 != 0) {
              FUN_00d50b20();
            }
            if ((char)this_ptr[0x4f] == '\0') {
              (**(code **)(*this_ptr + 0xa08))(uVar19 & 0xffffffff,uVar20 & 0xffffffff);
              if (local_50 == local_58) {
                if ((!bVar6) && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  uVar19 = local_b8;
                  plVar17 = local_50;
                  goto LAB_01dd1e0c;
                }
              }
              else {
                if (local_58 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                plVar17 = local_58;
                if ((bVar6) && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dd1e0c:
                bVar6 = true;
                local_50 = plVar17;
              }
              if ((((this_ptr[0x28] == 0) || (uVar20 != *(uint *)(this_ptr + 0x27))) ||
                  (uVar19 != *(uint *)((int64_t)this_ptr + 0x13c))) ||
                 (*(char *)((int64_t)this_ptr + 0x22c) != '\0')) {
                FUN_01db9a00();
                if (local_58 == local_88) {
                  plVar17 = local_88;
                  bVar4 = bVar16;
                  if ((!bVar16) && (local_58 != (int64_t *)0x0)) {
                    FUN_00d50b00();
                    goto LAB_01dd1edb;
                  }
                }
                else {
                  if (local_58 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  bVar4 = true;
                  plVar17 = local_58;
                  if ((bVar16) && (local_88 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                    local_88 = local_58;
LAB_01dd1edb:
                    plVar17 = local_88;
                    bVar4 = true;
                  }
                }
                local_88 = plVar17;
                (**(code **)(*local_88 + 0x978))();
                if (uVar20 == *(uint *)(this_ptr + 0x36)) {
LAB_01dd1f83:
                  if (this_ptr[0x40] != 0) goto LAB_01dd2000;
                  FUN_01dce940();
                  local_108 = 0;
                  if (local_58 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_108 = '\x01';
                  local_110 = local_58;
                  FUN_01d488d0();
                  uVar19 = local_b8;
                  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  lVar11 = this_ptr[0x34];
                  if (lVar11 != 0) {
                    iVar2 = *(int *)(lVar11 + 0x18);
                    iVar13 = iVar2 + 3;
                    if (-1 < iVar2) {
                      iVar13 = iVar2;
                    }
                    if (3 < iVar2) {
                      lVar15 = 0;
                      do {
                        if (uVar20 == *(uint *)(*(int64_t *)(lVar11 + 0x10) + lVar15 * 4))
                        goto LAB_01dd1f83;
                        lVar15 = lVar15 + 1;
                      } while (iVar13 >> 2 != (int)lVar15);
                    }
                  }
LAB_01dd2000:
                  FUN_01dce9c0();
                  local_f8 = 0;
                  if (local_58 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                  local_f8 = '\x01';
                  local_100 = local_58;
                  FUN_01d488d0();
                  uVar19 = local_b8;
                  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                (**(code **)(*this_ptr + 0x948))(uVar19 & 0xffffffff,uVar20 & 0xffffffff);
                local_e8 = 0;
                if (local_58 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                local_e8 = '\x01';
                local_f0 = local_58;
                (**(code **)(*local_88 + 0x9d8))();
                uVar19 = local_b8;
                if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_200 = '\0';
                local_268 = local_1a8;
                fVar28 = fStack_1a4;
                uVar29 = uStack_1a0;
                uVar30 = uStack_19c;
                local_208 = local_88;
                (**(code **)(*this_ptr + 0x998))(0,&local_208,uVar20 & 0xffffffff);
                if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_1f0 = '\0';
                local_1f8 = 0;
                (**(code **)(*local_88 + 0x978))();
                bVar16 = bVar4;
                if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if ((local_88 == (int64_t *)0x0) || (bVar4 = !bVar16, bVar16 = false, bVar4)) {
                local_88 = (int64_t *)0x0;
              }
              else {
                local_88 = (int64_t *)0x0;
                FUN_00d50b20();
              }
            }
            else {
              local_1e8 = *arg1;
              local_1e0 = '\0';
              lVar11 = *(int64_t *)
                        (*(int64_t *)
                          (*(int64_t *)(*(int64_t *)(this_ptr[0x51] + 0x10) + uVar19 * 8) + 0x10)
                        + uVar20 * 8);
              local_188 = 0;
              if (lVar11 != 0) {
                FUN_00d50b00();
              }
              uVar19 = local_b8;
              local_188 = '\x01';
              local_268 = local_1a8;
              fVar28 = fStack_1a4;
              uVar29 = uStack_1a0;
              uVar30 = uStack_19c;
              local_190 = lVar11;
              (**(code **)(*this_ptr + 0x9b0))(0,&local_190,uVar20 & 0xffffffff);
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1e0 != '\0') && (local_1e8 != 0)) {
                FUN_00d50b20();
              }
            }
            local_40 = '\0';
            FUN_01d48390();
            uVar22 = FUN_01d48b40(g_02390124);
            uVar7 = local_1b8;
            if ((*(char *)((int64_t)this_ptr + 0x16c) != '\0') &&
               (uVar19 == *(int *)(this_ptr[0x2c] + 0xc) - 1)) {
              local_1d8 = *arg1;
              local_1d0 = '\0';
              uVar22 = (**(code **)(*this_ptr + 0x988))
                                 (local_1b8._4_4_ + fStack_1a4,uVar20 & 0xffffffff);
              uVar7 = local_1b8;
              if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                uVar22 = FUN_00d50b20();
                uVar7 = local_1b8;
              }
            }
            local_1b8._4_4_ = (float)((uint64_t)uVar7 >> 0x20);
            local_1b8._0_4_ = (float)uVar7;
            uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
            uVar20 = uVar20 + 1;
            local_48 = local_58;
          } while (uVar20 != uVar18 + 1);
        }
        local_1b8 = uVar7;
        uVar24 = FUN_01dd0120();
        local_1b8._0_4_ = (float)uVar24;
        local_1a8 = local_268;
        fStack_1a4 = fVar28;
        uStack_1a0 = uVar29;
        uStack_19c = uVar30;
        if (*(char *)((int64_t)this_ptr + 0x16d) != '\0') {
          local_1b8 = uVar24;
          (**(code **)(*this_ptr + 0x640))();
          (**(code **)(*local_130 + 0x4b0))();
          local_d8 = 0;
          fVar23 = fVar28;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
              fVar23 = fVar28;
            }
          }
          else {
            local_40 = '\0';
          }
          local_d8 = '\x01';
          local_e0 = local_48;
          FUN_01d488d0();
          uVar19 = local_b8;
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d48b40(g_02390124);
          FUN_01e3f820();
          local_268 = 0.0;
          fVar28 = 0.0;
          uVar29 = 0;
          uVar30 = 0;
          uVar22 = (**(code **)(*plVar3 + 0x3e0))
                             (local_1a8 + (float)local_1b8,0,local_1a8 + (float)local_1b8,fVar23);
          uVar24 = CONCAT44(local_1b8._4_4_,uVar22);
        }
        local_1b8._4_4_ = (float)((uint64_t)uVar24 >> 0x20);
        uVar19 = uVar19 + 1;
        lVar11 = this_ptr[0x2c];
      } while ((int64_t)uVar19 < (int64_t)*(int *)(lVar11 + 0xc));
    }
    if (*(char *)((int64_t)this_ptr + 0x221) != '\0') {
      local_1c8 = *arg1;
      local_1c0 = '\0';
      (**(code **)(*this_ptr + 0x9a8))(uVar21,fVar26);
      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d48390();
    if (this_ptr[0x28] != 0) {
      FUN_01dce940();
      local_c8 = 0;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_48;
      FUN_01d488d0();
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)lVar8 != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar16) && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002b59d0
// ============================================================
// Function: FUN_002b59d0
// Address: 002b59d0
// Size: 5585 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002b59d0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar11 [16];
  float fVar12;
  uint32_t uVar13;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t auVar14 [16];
  float local_378;
  uint32_t uStack_374;
  uint32_t uStack_370;
  uint32_t uStack_36c;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t *local_310;
  char local_308;
  int64_t *local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t *local_2e0;
  char local_2d8;
  int64_t *local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t *local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t *local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t *local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
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
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar13 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar12 = (float)param_2;
  (**(code **)(*arg1 + 0x20))();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_002b6f81;
    }
  }
  else if (local_40 != (int64_t *)0x0) goto LAB_002b6f81;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar6 = (int64_t)&g_024dbaf0;
  plVar6[2] = (int64_t)&g_024dc430;
  plVar6[0x27] = 0;
  plVar6[0x28] = 0;
  *(void*)(plVar6 + 0x29) = 0;
  FUN_00d500e0();
  plVar6[0x27] = (int64_t)arg1;
  plVar7 = (int64_t *)(**(code **)(*arg1 + 0x10))();
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_60 = plVar7;
  (**(code **)(*plVar6 + 0x640))();
  uVar9 = (**(code **)(*local_40 + 0x580))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*arg1 + 0x48))();
  local_378 = (float)uVar9;
  if (cVar5 == '\0') {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar11._4_4_ = uVar13;
    auVar11._0_4_ = fVar12 + g_023b1698;
    auVar11._8_4_ = in_XMM1_Dc;
    auVar11._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar11,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,g_023b16b0);
  }
  else {
    (**(code **)(*plVar7 + 0x4d8))();
    auVar14 = insertps(g_023b16c0,ZEXT416((uint)(g_02390d00 + local_378 + g_023b169c)),0x10);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = fVar12 + g_023b1698;
    auVar1._8_4_ = in_XMM1_Dc;
    auVar1._12_4_ = in_XMM1_Dd;
    auVar11 = blendps(ZEXT816(0),auVar1,1);
    (**(code **)(*plVar6 + 0x4d0))(auVar11._0_8_,auVar14._0_4_);
  }
  (**(code **)(*plVar6 + 0x570))();
  (**(code **)(*plVar6 + 0x558))();
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(void*)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(void*)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(void*)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(void*)((int64_t)plVar7 + 0x165) = 0;
  *(void*)((int64_t)plVar7 + 0x18c) = 0;
  *(void*)((int64_t)plVar7 + 0x194) = 0;
  *(void*)((int64_t)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *(void*)((int64_t)plVar7 + 500) = 0;
  *(void*)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(void*)(plVar7 + 0x3e) = 0;
  *(void*)((int64_t)plVar7 + 0x1fc) = 0;
  *(void*)((int64_t)plVar7 + 0x204) = 0;
  *(void*)((int64_t)plVar7 + 0x20c) = 0;
  *plVar7 = (int64_t)&g_02687f80;
  plVar7[2] = (int64_t)&g_02688a68;
  plVar7[0x39] = (int64_t)&g_02688aa8;
  plVar7[0x44] = 0;
  *(void*)(plVar7 + 0x45) = 0;
  plVar7[0x46] = 0;
  *(void*)(plVar7 + 0x47) = 0;
  plVar7[0x48] = 0;
  *(void*)(plVar7 + 0x49) = 0;
  *(void*)((int64_t)plVar7 + 0x24c) = 0;
  *(void*)(plVar7 + 0x4a) = 0;
  (*g_02687f98)();
  FUN_01cef4c0();
  FUN_01cef490();
  (**(code **)(*plVar7 + 0x558))();
  (**(code **)(*plVar7 + 0x4d0))();
  lVar3 = g_026deab0;
  if (g_026deab0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar7 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar7 + 0xa20))();
  FUN_01d7ac40();
  FUN_01cef4e0();
  lVar3 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_026fc528;
  if (g_026fc528 != 0) {
    FUN_00d50b00();
  }
  local_330 = lVar4;
  local_328 = '\x01';
  local_320 = 0;
  local_318 = '\0';
  FUN_00d31230(&local_320,&local_330);
  local_c0 = local_40;
  local_b8 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_318 != '\0') && (local_320 != 0)) {
    FUN_00d50b20();
  }
  if ((local_328 != '\0') && (local_330 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  local_58 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_002b8a90();
  (**(code **)(*plVar8 + 0x18))();
  local_308 = '\x01';
  local_310 = plVar8;
  FUN_01d779a0();
  if ((local_308 != '\0') && (local_310 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2f0 = g_026fc520;
  local_2f8 = '\0';
  local_300 = plVar6;
  if (g_026fc520 != 0) {
    FUN_00d50b00();
  }
  local_2e8 = '\x01';
  local_2d8 = '\0';
  local_2e0 = plVar7;
  FUN_00d41430(&local_2e0,&local_2f0);
  if ((local_2d8 != '\0') && (local_2e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e8 != '\0') && (local_2f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2f8 != '\0') && (local_300 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_2c0 = g_027f0f20;
  local_2c8 = '\0';
  local_2d0 = plVar6;
  if (g_027f0f20 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_2b0 = 0;
  local_2a8 = '\0';
  FUN_00d41430(&local_2b0,&local_2c0);
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c8 != '\0') && (local_2d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_290 = g_027ebc60;
  local_298 = '\0';
  local_2a0 = plVar6;
  if (g_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_280 = 0;
  local_278 = '\0';
  FUN_00d41430(&local_280,&local_290);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_260 = g_026f6e90;
  local_268 = '\0';
  local_270 = plVar6;
  if (g_026f6e90 != 0) {
    FUN_00d50b00();
  }
  local_258 = '\x01';
  local_250 = 0;
  local_248 = '\0';
  FUN_00d41430(&local_250,&local_260);
  if ((local_248 != '\0') && (local_250 != 0)) {
    FUN_00d50b20();
  }
  if ((local_258 != '\0') && (local_260 != 0)) {
    FUN_00d50b20();
  }
  if ((local_268 != '\0') && (local_270 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_230 = g_026fce70;
  local_238 = '\0';
  local_240 = plVar6;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_228 = '\x01';
  local_220 = 0;
  local_218 = '\0';
  FUN_00d41430(&local_220,&local_230);
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_238 != '\0') && (local_240 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_200 = g_026d7d88;
  local_208 = '\0';
  local_210 = plVar6;
  if (g_026d7d88 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  local_1f0 = 0;
  local_1e8 = '\0';
  FUN_00d41430(&local_1f0,&local_200);
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_1d0 = g_026f6d10;
  local_1d8 = '\0';
  local_1e0 = plVar6;
  if (g_026f6d10 != 0) {
    FUN_00d50b00();
  }
  local_1c8 = '\x01';
  local_1c0 = 0;
  local_1b8 = '\0';
  FUN_00d41430(&local_1c0,&local_1d0);
  plVar8 = local_60;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1a8 = '\0';
  local_1b0 = plVar7;
  (**(code **)(*plVar6 + 0x450))();
  if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*arg1 + 0x48))();
  if (cVar5 == '\0') {
    local_50 = 0;
    local_48 = (int64_t *)0x0;
  }
  else {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(plVar7 + 0x27) = 0;
    plVar7[0x2e] = 0;
    *(void*)(plVar7 + 0x2f) = 0;
    plVar7[0x30] = 0;
    *(void*)(plVar7 + 0x31) = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    *(void*)(plVar7 + 0x2a) = 0;
    plVar7[0x2b] = 0;
    plVar7[0x2c] = 0;
    *(void*)((int64_t)plVar7 + 0x165) = 0;
    *(void*)((int64_t)plVar7 + 0x18c) = 0;
    *(void*)((int64_t)plVar7 + 0x194) = 0;
    *(void*)((int64_t)plVar7 + 0x199) = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    *plVar7 = (int64_t)&g_02677e10;
    plVar7[2] = (int64_t)&g_026788e8;
    plVar7[0x39] = (int64_t)&g_02678928;
    *(void*)((int64_t)plVar7 + 500) = 0;
    *(void*)(plVar7 + 0x3f) = 0;
    plVar7[0x43] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x3d] = 0;
    plVar7[0x3a] = 0;
    plVar7[0x3b] = 0;
    *(void*)(plVar7 + 0x3e) = 0;
    *(void*)((int64_t)plVar7 + 0x1fc) = 0;
    *(void*)((int64_t)plVar7 + 0x204) = 0;
    *(void*)((int64_t)plVar7 + 0x20c) = 0;
    (*g_02677e28)();
    FUN_01cef4c0();
    (**(code **)(*plVar7 + 0x558))();
    auVar11 = blendps(ZEXT416((uint)(g_023b16a0 - local_378)),g_023b16e0,0xe);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
    local_1a0 = plVar8;
    local_198 = '\0';
    (**(code **)(*plVar7 + 0xa20))();
    if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = g_026fb888;
    if (g_026fb888 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    (**(code **)(*plVar7 + 0xa10))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d0fe80();
    uVar10 = (**(code **)(*plVar7 + 0xa18))();
    local_b0 = local_d0;
    local_a8 = 0;
    if (local_c8 == '\0') {
      if (local_d0 != 0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      local_c8 = '\0';
    }
    local_a8 = '\x01';
    FUN_01d5e6e0(uVar10,&local_b0);
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
      local_50 = 0;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      local_50 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_50 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_01d65230();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar7 + 0x6a8))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar3 = g_026fc530;
    if (g_026fc530 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar3;
    local_178 = '\x01';
    FUN_01d51a40();
    local_90 = local_40;
    local_88 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_88 = '\x01';
    FUN_01cef3b0();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_168 = '\0';
    local_170 = plVar7;
    (**(code **)(*plVar6 + 0x450))();
    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar7 + 0x27) = 0;
  plVar7[0x2e] = 0;
  *(void*)(plVar7 + 0x2f) = 0;
  plVar7[0x30] = 0;
  *(void*)(plVar7 + 0x31) = 0;
  plVar7[0x28] = 0;
  plVar7[0x29] = 0;
  *(void*)(plVar7 + 0x2a) = 0;
  plVar7[0x2b] = 0;
  plVar7[0x2c] = 0;
  *(void*)((int64_t)plVar7 + 0x165) = 0;
  *(void*)((int64_t)plVar7 + 0x18c) = 0;
  *(void*)((int64_t)plVar7 + 0x194) = 0;
  *(void*)((int64_t)plVar7 + 0x199) = 0;
  plVar7[0x35] = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  *plVar7 = (int64_t)&g_02677e10;
  plVar7[2] = (int64_t)&g_026788e8;
  plVar7[0x39] = (int64_t)&g_02678928;
  *(void*)((int64_t)plVar7 + 500) = 0;
  *(void*)(plVar7 + 0x3f) = 0;
  plVar7[0x43] = 0;
  plVar7[0x3c] = 0;
  plVar7[0x3d] = 0;
  plVar7[0x3a] = 0;
  plVar7[0x3b] = 0;
  *(void*)(plVar7 + 0x3e) = 0;
  *(void*)((int64_t)plVar7 + 0x1fc) = 0;
  *(void*)((int64_t)plVar7 + 0x204) = 0;
  *(void*)((int64_t)plVar7 + 0x20c) = 0;
  (*g_02677e28)();
  FUN_01cef4c0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_60;
  uStack_374 = (uint32_t)((uint64_t)uVar9 >> 0x20);
  uStack_370 = (uint32_t)extraout_XMM0_Qb;
  uStack_36c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if (cVar5 == '\0') {
    auVar14._4_4_ = uStack_374;
    auVar14._0_4_ = local_378 + g_023b169c + g_023b1608;
    auVar14._8_4_ = uStack_370;
    auVar14._12_4_ = uStack_36c;
    auVar11 = insertps(ZEXT416((uint)(g_023b16a0 - local_378)),auVar14,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  else {
    auVar2._4_4_ = uStack_374;
    auVar2._0_4_ = local_378 + g_023b169c + g_023b1608;
    auVar2._8_4_ = uStack_370;
    auVar2._12_4_ = uStack_36c;
    auVar11 = insertps(g_023b16c0,auVar2,0x10);
    (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_,local_378);
  }
  local_160 = plVar8;
  local_158 = '\0';
  (**(code **)(*plVar7 + 0xa20))();
  if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026fc538;
  if (g_026fc538 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148 = '\x01';
  (**(code **)(*plVar7 + 0xa10))();
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026f6f90;
  if (g_026f6f90 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar3;
  local_138 = '\x01';
  FUN_01d51a40();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  FUN_01cef3b0();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d0fe80();
  local_130 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026fe490;
  local_128 = '\x01';
  if (g_026fe490 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar3;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d31230(&local_110,&local_120);
  local_70 = local_40;
  local_68 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  plVar8 = local_60;
  local_68 = '\x01';
  (**(code **)(*plVar7 + 0x6a8))();
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d9a650();
  local_f8 = '\0';
  local_100 = plVar7;
  FUN_01d9ad20();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  plVar6[0x28] = (int64_t)plVar7;
  local_e8 = '\0';
  local_f0 = plVar6;
  (**(code **)(*plVar8 + 0x450))();
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = plVar6;
  (**(code **)(*arg1 + 0x28))();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x38))();
  FUN_00d50b00();
  FUN_00d50b20();
  if (((char)local_50 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_002b6f81:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 002cf230
// ============================================================
// Function: FUN_002cf230
// Address: 002cf230
// Size: 4507 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cf230(uint64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  char *pcVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  void* pVar15;
  char *pcVar16;
  uint uVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int iVar20;
  int64_t *plVar21;
  int64_t this_ptr;
  uint64_t uVar22;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int local_15c;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  int64_t *local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  int64_t local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  int64_t *local_f0;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  uint local_a8 [2];
  int64_t *local_a0;
  uint local_98;
  int iStack_94;
  int iStack_90;
  uint32_t local_5c;
  int64_t *local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  plVar19 = *(int64_t **)(this_ptr + 0xe0);
  uVar18 = 0;
  if (plVar19 == (int64_t *)0x0) {
    uVar22 = 0;
  }
  else {
    FUN_00d50b00();
    local_a8[0] = local_a8[0] & 0xffffff00;
    local_b0 = (int64_t *)0x0;
    iStack_94 = 0;
    iStack_90 = 0;
    uVar17 = *(uint *)((int64_t)plVar19 + 0xc);
    if ((int)uVar17 < 1) {
      uVar22 = 0;
    }
    else {
      lVar8 = plVar19[2];
      uVar14 = uVar17 & 3;
      if (uVar17 - 1 < 3) {
        uVar18 = 0;
        uVar22 = 0;
      }
      else {
        uVar18 = 0;
        uVar22 = 0;
        do {
          if (*(int *)(*(int64_t *)(lVar8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)(*(int64_t *)(lVar8 + 8 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          local_b0 = *(int64_t **)(lVar8 + 0x18 + uVar18 * 8);
          if (*(int *)(*(int64_t *)(lVar8 + 0x10 + uVar18 * 8) + 0x24) == 2) {
            uVar22 = 1;
          }
          if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 4;
        } while ((uVar17 & 0xfffffffc) != (uint)uVar18);
      }
      if (uVar14 != 0) {
        uVar18 = uVar18 & 0xffffffff;
        do {
          local_b0 = *(int64_t **)(lVar8 + uVar18 * 8);
          if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
            uVar22 = 1;
          }
          uVar18 = uVar18 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    local_98 = (uint)uVar18;
    local_a0 = plVar19;
    FUN_002d7300();
    FUN_00d50b20();
  }
  if (param_2 != '\0') {
    FUN_002cd490();
    local_130 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_002d0ef0();
    local_40 = local_b0;
    if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    iVar6 = *(int *)((int64_t)local_40 + 0xc);
    iVar4 = iVar6;
    iVar20 = local_15c;
    while (local_15c = iVar4, iVar6 != 0) {
      local_c8 = (int64_t *)((int64_t)local_40 + 0xc);
      uVar18 = (uint64_t)local_f0 >> 8;
      local_f0 = (int64_t *)CONCAT71((int7)uVar18,iVar6 != 1);
      FUN_00d23310();
      plVar19 = local_b0;
      local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
      puVar13 = (uint *)&local_e0;
      puVar12 = local_a8;
      if ((char)local_a8[0] == '\0') {
        puVar12 = puVar13;
      }
      *(void*)puVar12 = 0;
      if (((char)local_a8[0] != '\0') && (plVar19 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar15 = (void*)puVar13;
      plVar19 = (int64_t *)plVar19[2];
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(pVar15);
      plVar21 = plVar19;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar21 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar21 + 0x478))();
      (**(code **)(*local_c0 + 0x3f0))();
      local_f8 = CONCAT71(uStack_4f,local_50);
      if (local_48[0] == '\0') {
        if (((local_f8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48[0] = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_e0 != '\0') {
        FUN_00d50b20();
      }
      lVar10 = g_026fced8;
      lVar8 = g_026fced0;
      if (iVar6 == 1) {
        if (g_026fced0 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        lVar10 = local_e0;
        local_100 = 0;
        if (local_d8 == '\0') {
          if (local_e0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_d8 = '\0';
        }
        local_100 = '\x01';
        local_108 = lVar10;
        FUN_00d23310();
        local_38[0] = local_48[0];
        pcVar16 = local_38;
        pcVar9 = local_48;
        if (local_48[0] == '\0') {
          pcVar9 = pcVar16;
        }
        lVar10 = CONCAT71(uStack_4f,local_50);
        *pcVar9 = '\0';
        if ((local_48[0] != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
        pVar15 = (void*)pcVar16;
        plVar21 = *(int64_t **)(lVar10 + 0x10);
        if (plVar21 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar15);
        plVar19 = plVar21;
        if ((pvVar7 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar19 = (int64_t *)plVar21[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar19 + 0x478))();
        (**(code **)(*local_148 + 0x468))();
        plVar19 = local_158;
        local_a8[0] = 1;
        local_b0 = &g_024c5048;
        local_98 = local_98 & 0xffffff00;
        if (local_158 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_a0 = plVar19;
        local_98 = CONCAT31(local_98._1_3_,1);
        FUN_00d93690();
        plVar19 = local_40;
        local_d0 = local_c0;
        if (local_c0 == (int64_t *)0x0) {
          local_5c = 0;
        }
        else if (local_b8 == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_b8 = '\0';
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)local_c0 >> 8),1);
        }
        local_b0 = &g_024c5048;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar21 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if ((local_100 != '\0') && (local_108 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        if (g_026fced8 != 0) {
          FUN_00d50b00();
        }
        FUN_01e57260();
        plVar19 = local_40;
        local_d0 = local_b0;
        if (local_b0 == (int64_t *)0x0) {
          local_5c = 0;
        }
        else if ((char)local_a8[0] == '\0') {
          uVar11 = FUN_00d50b00();
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_5c = (uint32_t)CONCAT71((int7)((uint64_t)local_b0 >> 8),1);
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00b7ace0();
      plVar21 = local_b0;
      if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_1e0 = plVar21;
      local_1d8 = '\0';
      local_1d0 = local_d0;
      local_1c8 = '\0';
      FUN_01f4f940((uint64_t)local_f0 & 0xff,&local_1e0,0,&local_1d0);
      local_f0 = local_b0;
      if ((char)local_a8[0] == '\0') {
        if (local_b0 != (int64_t *)0x0) {
          FUN_00d50b00();
          if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_a8[0] = local_a8[0] & 0xffffff00;
      }
      if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_f0 == (int64_t *)0x0) || (*(int *)((int64_t)local_f0 + 0xc) == 0)) {
        uVar17 = 1;
        if (local_15c != (int)*local_c8) {
          (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
        }
      }
      else {
        FUN_00d23310();
        plVar3 = local_b0;
        local_50 = (char)local_a8[0];
        puVar13 = local_a8;
        if ((char)local_a8[0] == '\0') {
          puVar13 = (uint *)&local_50;
        }
        *(void*)puVar13 = 0;
        if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 == '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        cVar5 = (**(code **)(*plVar3 + 0x398))();
        if (cVar5 == '\0') {
          local_a8[0] = local_a8[0] & 0xffffff00;
          local_b0 = (int64_t *)0x0;
          local_98 = 0xffffffff;
          iStack_94 = 0;
          iStack_90 = 0;
          local_a0 = plVar19;
          iVar6 = 0;
          while( true ) {
            iVar20 = 0;
            if (iVar6 != 0) {
              if (iVar6 < 1) {
                iVar20 = -iVar6;
                iStack_94 = iVar20;
              }
              else {
                local_98 = local_98 - iVar6;
                FUN_00d23690(iVar6,iVar6);
                iStack_90 = iStack_90 + iStack_94;
                iVar20 = 0;
                iStack_94 = iVar20;
              }
            }
            lVar8 = (int64_t)(int)local_98;
            local_98 = local_98 + 1;
            if (*(int *)((int64_t)local_a0 + 0xc) <= (int)local_98) break;
            local_b0 = *(int64_t **)(local_a0[2] + 8 + lVar8 * 8);
            iVar6 = iVar20;
            if (*(int *)((int64_t)local_b0 + 0x24) == 2) {
              FUN_002c3060();
              iVar6 = iStack_94;
            }
          }
          FUN_002d7300();
LAB_002d00a5:
          FUN_002d0ef0();
          plVar19 = local_b0;
          if (local_b0 == local_40) {
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((char)local_a8[0] == '\0') {
            if (local_b0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (local_40 == (int64_t *)0x0) goto LAB_002d014f;
            FUN_00d50b20();
            local_40 = plVar19;
          }
          else if (local_40 == (int64_t *)0x0) {
LAB_002d014f:
            local_40 = plVar19;
          }
          else {
            FUN_00d50b20();
            local_40 = plVar19;
          }
          uVar17 = 0;
        }
        else {
          local_58 = plVar21;
          FUN_00d23310();
          plVar19 = local_b0;
          local_e0 = CONCAT71(local_e0._1_7_,(char)local_a8[0]);
          puVar13 = (uint *)&local_e0;
          puVar12 = local_a8;
          if ((char)local_a8[0] == '\0') {
            puVar12 = puVar13;
          }
          *(void*)puVar12 = 0;
          if (((char)local_a8[0] != '\0') && (plVar19 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar15 = (void*)puVar13;
          plVar19 = (int64_t *)plVar19[2];
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar7 = _pthread_getspecific(pVar15);
          plVar21 = plVar19;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar21 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x478))();
          (**(code **)(*local_c0 + 0x388))();
          local_c8 = (int64_t *)CONCAT71(uStack_4f,local_50);
          if (local_48[0] == '\0') {
            if (((local_c8 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
               (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48[0] = '\0';
          }
          if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((char)local_e0 != '\0') {
            FUN_00d50b20();
          }
          (**(code **)(*plVar3 + 0x388))();
          plVar21 = local_b0;
          plVar19 = local_c8;
          if (((char)local_a8[0] == '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b00();
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_118 = plVar21;
          local_1c0 = plVar21;
          local_1b8 = '\0';
          cVar5 = (**(code **)(*plVar19 + 0x50))();
          if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          lVar8 = g_026f6fb0;
          if (cVar5 == '\0') {
            if (g_026f6fb0 != 0) {
              FUN_00d50b00();
            }
            lVar10 = g_026fcee8;
            local_1b0 = lVar8;
            local_1a8 = '\x01';
            if (g_026fcee8 != 0) {
              FUN_00d50b00();
            }
            local_1a0 = lVar10;
            local_198 = '\x01';
            FUN_01f6ca30();
            plVar19 = local_b0;
            if ((char)local_a8[0] == '\0') {
              if (local_b0 != (int64_t *)0x0) {
                FUN_00d50b00();
                if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_a8[0] = local_a8[0] & 0xffffff00;
            }
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            local_138 = plVar19;
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = g_026fcef0;
            if (g_026fcef0 != 0) {
              FUN_00d50b00();
            }
            plVar19 = g_026fcef8;
            local_110 = lVar8;
            if (g_026fcef8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_c0 = local_c8;
            local_e0 = local_110;
            local_158 = local_118;
            local_148 = plVar19;
            FUN_002d73e0(&local_158,&local_e0,&local_148,4);
            FUN_000b4da0();
            lVar8 = CONCAT71(uStack_4f,local_50);
            if (local_48[0] == '\0') {
              if (((lVar8 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
                 (CONCAT71(uStack_4f,local_50) != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            FUN_002d10d0();
            if (plVar19 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if (local_110 != 0) {
              FUN_00d50b20();
            }
            local_188 = '\0';
            local_190 = lVar8;
            iVar6 = (**(code **)(*local_138 + 0x5d8))();
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (iVar6 == 0) goto LAB_002cfffc;
            uVar17 = 4;
            bVar2 = false;
            bVar1 = false;
          }
          else {
LAB_002cfffc:
            FUN_00d23310();
            plVar19 = local_b0;
            local_50 = (char)local_a8[0];
            puVar13 = local_a8;
            if ((char)local_a8[0] == '\0') {
              puVar13 = (uint *)&local_50;
            }
            *(void*)puVar13 = 0;
            if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_002c3060();
            if ((local_50 != '\0') && (plVar19 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar17 = 0;
            bVar2 = true;
            bVar1 = true;
          }
          if (local_118 != (int64_t *)0x0) {
            FUN_00d50b20();
            bVar1 = bVar2;
          }
          FUN_00d50b20();
          plVar21 = local_58;
          if (bVar1) goto LAB_002d00a5;
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_f0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar21 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (((char)local_5c != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_f8 != 0) {
        FUN_00d50b20();
      }
      if ((uVar17 & 3) != 0) {
        if (local_40 == (int64_t *)0x0) goto LAB_002d03bb;
        goto LAB_002d03b2;
      }
      iVar4 = local_15c;
      iVar20 = local_15c;
      iVar6 = *(int *)((int64_t)local_40 + 0xc);
    }
    local_15c = iVar20;
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x498))();
    FUN_00cb1f10();
    FUN_00db3760();
    if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xf0) + 0x578))();
    FUN_00d403d0();
    local_180 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    local_120 = 0;
    FUN_00d50b00();
    local_120 = '\x01';
    local_170 = 0;
    local_168 = '\0';
    local_128 = this_ptr;
    FUN_00d40470(&local_170,&local_128,1,3);
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_a8[0] != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar17 = 0;
LAB_002d03b2:
    FUN_00d50b20();
LAB_002d03bb:
    if (local_130 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (uVar17 != 0) {
      uVar22 = 0;
    }
  }
  return uVar22;
}



// ============================================================
// 0197a540
// ============================================================
// Function: FUN_0197a540
// Address: 0197a540
// Size: 2938 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_0197a540(void)

{
  void*puVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint64_t unaff_RBX;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint32_t uVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar13 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fStack_1a4;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  uint32_t local_f0;
  uint32_t local_ec;
  uint8_t local_e8 [16];
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint32_t local_ac;
  int64_t *local_a8;
  uint64_t local_a0;
  uint32_t local_94;
  int64_t *local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_02;
  
  if (*(char *)((int64_t)this_ptr + 0x1c1) != '\0') {
    FUN_01d9af20();
  }
  FUN_01d9af20();
  (**(code **)(*this_ptr + 0x990))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x980))();
  local_90 = local_78;
  if (local_78 == (int64_t *)0x0) {
    local_170 = local_a8;
    local_168 = '\0';
    FUN_01d98a70();
    local_90 = (int64_t *)0x0;
    uVar12 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    local_a0 = 0;
    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
      FUN_00d50b20();
      local_a0 = 0;
      local_90 = (int64_t *)0x0;
    }
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = local_90;
    (**(code **)(*local_90 + 0x4d8))();
    blendps(in_XMM1,g_023b4a40,0xd);
    (**(code **)(*plVar7 + 0x4d0))();
    local_180 = local_a8;
    local_178 = '\0';
    FUN_01d98360(&local_180);
    if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = 0;
    local_a0 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  }
  (**(code **)(*this_ptr + 0x988))();
  local_80 = local_78;
  local_f0 = (uint32_t)uVar12;
  if (local_78 == (int64_t *)0x0) {
    local_94 = 1;
    local_88 = 0;
    local_80 = (int64_t *)0x0;
  }
  else {
    plVar7 = local_78;
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_88 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
    local_50 = 0;
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    uVar11 = (**(code **)(*local_80 + 0x938))();
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar11;
    auVar14._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    local_50 = 0;
    auVar14 = blendps(auVar14,g_023b4a30,0xe);
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    (**(code **)(*local_80 + 0x4d0))(0,auVar14._0_8_);
    local_160 = local_80;
    local_158 = '\0';
    uVar11 = FUN_01d980f0();
    if ((local_158 == '\0') || (local_160 == (int64_t *)0x0)) {
      local_94 = 0;
      local_88 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
    }
    else {
      uVar11 = FUN_00d50b20();
      local_88 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      local_94 = 0;
    }
  }
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d9a650();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d94ee0();
  (**(code **)(*this_ptr + 0x998))();
  local_40 = local_78;
  if (local_78 == (int64_t *)0x0) {
    uVar9 = 1;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_40 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_150 = local_40;
    local_148 = '\0';
    uVar11 = FUN_01d97bd0();
    uVar9 = 0;
    local_48 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar9 = 0;
    }
  }
  (**(code **)(*this_ptr + 0x9a0))();
  local_38 = local_78;
  if (local_78 == (int64_t *)0x0) {
    local_ac = 1;
    uVar12 = 0;
    local_38 = (int64_t *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97e80();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_38 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_140 = local_38;
    local_138 = '\0';
    FUN_01d97920();
    local_ac = 0;
    uVar12 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      FUN_00d50b20();
      local_ac = 0;
    }
  }
  local_ec = uVar9;
  local_50 = uVar12;
  (**(code **)(*this_ptr + 0x640))();
  plVar7 = local_78;
  if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x580))();
  local_e8._8_8_ = extraout_XMM0_Qb_00;
  (**(code **)(*plVar7 + 0x578))();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  *(void*)(puVar4 + 0x3b) = 0;
  *puVar4 = &g_02623d28;
  puVar4[2] = &g_02624858;
  FUN_00d500e0();
  puVar1 = (void*)this_ptr[0x3a];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x3a] = (int64_t)puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  blendps(g_0241b3e0,local_e8,1);
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x4d0))();
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0xab8))();
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0xac8))();
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_0197b900();
  local_130 = 0;
  local_128 = '\0';
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *local_78 + 0x18))();
  (**(code **)(*plVar5 + 0x928))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != '\0') {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_00d46dc0();
  local_c0 = local_78;
  local_b8 = 0;
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar5 + 0x988))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_0197b900();
  local_d0 = local_78;
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  (**(code **)(*plVar5 + 0xa20))();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027e0b78;
  plVar5 = (int64_t *)this_ptr[0x3a];
  if (g_027e0b78 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar6;
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0xa10))();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar5 + 0x18))();
  auVar15 = blendps(local_e8,ZEXT816(0),2);
  (**(code **)(*plVar5 + 0x4d0))();
  local_108 = '\0';
  local_110 = plVar5;
  (**(code **)(*this_ptr + 0x970))();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x598))();
  local_e8._8_8_ = extraout_XMM0_Qb_01;
  (**(code **)(*plVar5 + 0x4a0))();
  plVar3 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_0197afdd;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_0197afdd;
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_68 = plVar3;
  local_60 = 0xffffffff;
  local_58 = 0;
  while( true ) {
    lVar6 = (int64_t)(int)local_60;
    iVar8 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar8) break;
    local_78 = *(int64_t **)(local_68[2] + 8 + lVar6 * 8);
    fVar10 = (float)(**(code **)(*plVar7 + 0x598))();
    auVar13._0_8_ = (**(code **)(*local_78 + 0x4d8))();
    auVar13._8_8_ = extraout_XMM0_Qb_02;
    local_e8._0_4_ = (float)local_e8._0_4_ - fVar10;
    auVar2._4_4_ = local_e8._4_4_;
    auVar2._0_4_ = local_e8._0_4_;
    auVar2._8_4_ = local_e8._8_4_;
    auVar2._12_4_ = local_e8._12_4_;
    auVar14 = insertps(auVar13,auVar2,0x10);
    (**(code **)(*local_78 + 0x4d0))(auVar14._0_8_);
    fStack_1a4 = auVar15._4_4_;
    auVar15._4_12_ = local_e8._4_12_;
    auVar15._0_4_ = local_e8._0_4_ + fStack_1a4;
    local_e8 = auVar15;
    if (local_60._4_4_ != 0) {
      if (local_60 < 0) {
        iVar8 = -local_60._4_4_;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar8 = 0;
      }
      local_60 = CONCAT44(iVar8,(int)local_60);
    }
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_0197afdd:
  uVar12 = (**(code **)(*plVar5 + 0x4d8))();
  auVar14 = insertps(auVar15,local_e8._0_4_,0x10);
  (**(code **)(*plVar5 + 0x4d0))(uVar12,auVar14._0_8_);
  local_f8 = '\0';
  local_100 = plVar5;
  FUN_01d9ab80();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  (**(code **)(*this_ptr + 0x928))();
  FUN_00d50b20();
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_ac == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_ec == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_94 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_f0 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01cfd750
// ============================================================
// Function: FUN_01cfd750
// Address: 01cfd750
// Size: 2969 bytes
// Class: GNScrollView
// String references:
//   "color format mismatch"
//   "color format mismatch %@"
//   "color range mismatch %@"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01cfd750(uint32_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  void*puVar8;
  int64_t *arg1;
  void*this_ptr;
  void*puVar9;
  bool bVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int64_t local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_90;
  char local_88;
  void*local_80;
  char local_78;
  void*local_70;
  char local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  void*local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  
  lVar3 = g_027ef220;
  local_60 = 0xff;
  local_5c = 0xff;
  local_58 = 0xff;
  local_54 = 0xff;
  if (*arg1 == 0) {
    if (g_027ef220 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,g_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 == 7) || (iVar5 = FUN_00d8c7a0(), iVar5 == 9)) {
    lVar3 = g_027cd570;
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00d90870();
    uVar11 = extraout_XMM0_Da;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d8f140(uVar11,1);
      puVar8 = local_50;
      puVar9 = (void*)*arg1;
      if (puVar9 == local_50) {
        if (((char)arg1[1] != '\0') || (local_50 == (void*)0x0)) goto LAB_01cfd91c;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01cfd917;
        }
      }
      else {
        lVar3 = arg1[1];
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)puVar8;
          if (((char)lVar3 != '\0') && (puVar9 != (void*)0x0)) {
            FUN_00d50b20();
          }
LAB_01cfd917:
          *(void*)(arg1 + 1) = 1;
LAB_01cfd91c:
          if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01cfd930;
        }
        *arg1 = (int64_t)local_50;
        if (((char)lVar3 != '\0') && (puVar9 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(arg1 + 1) = 1;
    }
  }
LAB_01cfd930:
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 != 6) && (iVar5 = FUN_00d8c7a0(), lVar3 = g_0276cc80, iVar5 != 8)) {
    if (g_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar3;
    local_a8 = '\x01';
    uVar11 = FUN_00d91000(1,&local_b0);
    puVar9 = local_50;
    if (local_50 == (void*)0x0) {
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      puVar9 = (void*)0x0;
      bVar2 = false;
      lVar3 = g_027ef220;
    }
    else {
      if ((char)local_48 == '\0') {
        uVar11 = FUN_00d50b00();
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      iVar5 = *(int *)((int64_t)puVar9 + 0xc);
      if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if (2 < iVar5) {
        fVar12 = (float)FUN_00d8d7b0();
        local_60 = (uint)(fVar12 * g_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        local_5c = (int)(fVar12 * g_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        fVar12 = fVar12 * g_02394220;
        local_58 = (int)fVar12;
        bVar2 = true;
        if (*(int *)((int64_t)puVar9 + 0xc) == 4) {
          fVar12 = (float)FUN_00d8d7b0();
          fVar12 = fVar12 * g_02394220;
          local_54 = (int)fVar12;
        }
        goto LAB_01cfe119;
      }
      bVar2 = true;
      lVar3 = g_027ef220;
    }
    g_027ef220 = lVar3;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b00();
    }
    lVar1 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    fVar12 = (float)FUN_00cc7b40(uVar11,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (lVar3 != 0) {
      fVar12 = (float)FUN_00d50b20();
    }
    goto LAB_01cfe119;
  }
  FUN_00da5ad0();
  cVar4 = *(char *)(local_50 + 3);
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar6 = (int64_t)&g_0257ef30;
    plVar6[5] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(void*)(plVar6 + 4) = 0;
    (*g_0257ef48)();
    bVar2 = false;
  }
  else {
    if ((g_028b7938 == (int64_t *)0x0) || (g_028b7941 == '\0')) {
      FUN_00e8cb50();
      if (g_028b7938 == (int64_t *)0x0) {
        plVar6 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (int64_t)&g_0257ef30;
        plVar6[5] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        *(void*)(plVar6 + 4) = 0;
        (*g_0257ef48)();
        if (g_028b7938 == plVar6) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          bVar10 = g_028b7938 != (int64_t *)0x0;
          g_028b7938 = plVar6;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if (g_028b7940 == '\0') {
          g_028b7940 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        g_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      if (g_028b7938 == (int64_t *)0x0) {
        bVar2 = true;
        plVar6 = (int64_t *)0x0;
        goto LAB_01cfdcdc;
      }
    }
    plVar6 = g_028b7938;
    FUN_00d50b00();
    bVar2 = false;
  }
LAB_01cfdcdc:
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_00,uVar7);
  local_a0 = local_50;
  local_98 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_98 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = g_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_01;
    if (g_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,g_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_02,uVar7);
  local_90 = local_50;
  local_88 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_88 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = g_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_03;
    if (g_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,g_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_04,uVar7);
  local_80 = local_50;
  local_78 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_78 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = g_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_05;
    if (g_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,g_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  fVar12 = extraout_XMM0_Da_06;
  if (iVar5 == 8) {
    uVar7 = FUN_00e7b4e0();
    FUN_00d8e3d0(extraout_XMM0_Da_07,uVar7);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    uVar11 = (**(code **)(*plVar6 + 0x368))();
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
    lVar3 = g_027ef220;
    fVar12 = extraout_XMM0_Da_08;
    if (cVar4 == '\0') {
      if (g_027ef220 != 0) {
        fVar12 = (float)FUN_00d50b00();
      }
      fVar12 = (float)FUN_00cc7b40(fVar12,g_025908a0);
      if (lVar3 != 0) {
        fVar12 = (float)FUN_00d50b20();
      }
    }
  }
  if (!bVar2) {
    fVar12 = (float)FUN_00d50b20();
  }
  bVar2 = false;
  puVar9 = (void*)0x0;
LAB_01cfe119:
  lVar3 = g_027ef220;
  if (((((0xff < local_60) || (local_5c < 0)) || (0xff < local_5c)) ||
      ((local_58 < 0 || (0xff < local_58)))) || ((local_54 < 0 || (0xff < local_54)))) {
    if (g_027ef220 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    lVar1 = *arg1;
    local_48 = 1;
    local_50 = &g_024c5048;
    if (lVar1 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40(fVar12,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  fVar12 = (float)(int)local_60;
  fVar13 = (float)local_5c;
  fVar14 = (float)local_58;
  fVar15 = (float)local_54;
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_026792c0;
  puVar8[5] = 0;
  *(void*)((int64_t)puVar8 + 0xc) = 0;
  *(void*)((int64_t)puVar8 + 0x14) = 0;
  *(void*)((int64_t)puVar8 + 0x19) = 0;
  FUN_00d500e0();
  FUN_01cfce50(fVar12 / g_02394220,fVar13 / g_02394220,fVar14 / g_02394220,
               fVar15 / g_02394220);
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (puVar9 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 002b4e40
// ============================================================
// Function: FUN_002b4e40
// Address: 002b4e40
// Size: 1994 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "MDScrollViewAddsView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002b4e40(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t **pplVar11;
  int64_t *this_ptr;
  bool bVar12;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint32_t uVar18;
  uint8_t auVar17 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar19 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  
  cVar7 = (**(code **)(*this_ptr + 0x40))();
  if (cVar7 != '\0') {
    plVar9 = (int64_t *)(**(code **)(*this_ptr + 0x10))();
    bVar12 = plVar9 != (int64_t *)0x0;
    if (bVar12) {
      FUN_00d50b00();
    }
    FUN_01d99a50();
    FUN_00d23310();
    plVar1 = local_48;
    local_38[0] = local_40[0];
    pcVar10 = local_40;
    if (local_40[0] == '\0') {
      pcVar10 = local_38;
    }
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) goto LAB_002b5491;
    (**(code **)(*plVar1 + 0x7b0))();
    plVar5 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_01d97ec0();
      plVar5 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x58))();
      plVar6 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x4d8))();
      local_78 = (uint8_t  [8])param_2;
      uStack_70 = in_XMM1_Qb;
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = (float)param_2;
      fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
      fStack_bc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      if (plVar5 == (int64_t *)0x0) {
        fStack_c0 = (float)in_XMM1_Qb;
        auVar17._0_4_ = SUB84(local_78,0) - local_c8;
        auVar17._4_4_ = (float)((uint64_t)local_78 >> 0x20) - fStack_c4;
        auVar17._8_4_ = (float)uStack_70 - fStack_c0;
        auVar17._12_4_ = (float)((uint64_t)uStack_70 >> 0x20) - fStack_bc;
        auVar19 = blendps(_local_78,auVar17,0xd);
      }
      else {
        (**(code **)(*plVar9 + 0x640))();
        fVar13 = (float)(**(code **)(*local_48 + 0x580))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar19._4_12_ = local_78._4_12_;
        auVar19._0_4_ = SUB84(local_78,0) - (local_c8 - fVar13);
      }
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d0))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_01d9ad00();
        plVar1 = local_48;
        auVar14._4_4_ = extraout_XMM0_Db + fStack_c4;
        auVar14._12_4_ = extraout_XMM0_Dd + fStack_bc;
        auVar14._0_4_ = auVar14._4_4_;
        auVar14._8_4_ = auVar14._12_4_;
        register0x00001204 = auVar14._4_12_;
        local_78._0_4_ = auVar14._4_4_ + g_02390d00;
        if (local_40[0] == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_002b535a;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_002b530a:
          auVar15._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
          auVar15._8_8_ = extraout_XMM0_Qb;
          fVar13 = (float)((uint64_t)auVar15._0_8_ >> 0x20);
          if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
            auVar17 = insertps(auVar15,_local_78,0x10);
            (**(code **)(*plVar1 + 0x4d0))(auVar17._0_8_);
          }
          local_78._4_4_ = auVar14._4_4_;
          local_78._0_4_ = (float)local_78._0_4_ + auVar19._4_4_;
          uStack_70._0_4_ = auVar14._12_4_;
          uStack_70._4_4_ = auVar14._12_4_;
          bVar4 = false;
        }
        else {
          if (local_48 != (int64_t *)0x0) goto LAB_002b530a;
LAB_002b535a:
          bVar4 = true;
        }
        auVar16._0_8_ = (**(code **)(*plVar5 + 0x4d8))();
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        fVar13 = (float)((uint64_t)auVar16._0_8_ >> 0x20);
        uVar18 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
          auVar2._4_4_ = fVar13;
          auVar2._0_4_ = fVar13 + ((float)local_78._0_4_ - fVar13);
          auVar2._8_4_ = uVar18;
          auVar2._12_4_ = uVar18;
          auVar17 = insertps(auVar16,auVar2,0x10);
          auVar3._4_4_ = auVar19._4_4_;
          auVar3._0_4_ = auVar19._4_4_ - ((float)local_78._0_4_ - fVar13);
          auVar3._8_4_ = auVar19._12_4_;
          auVar3._12_4_ = auVar19._12_4_;
          auVar19 = insertps(auVar19,auVar3,0x10);
          (**(code **)(*plVar5 + 0x4d0))(auVar17._0_8_,auVar19._0_8_);
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x4a0))();
      FUN_00d23340();
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != plVar6) {
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar9 + 0x450))();
      }
      FUN_00d50b20();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_002b5491;
  }
  pplVar11 = &local_48;
  (**(code **)(*this_ptr + 0x20))();
  plVar1 = local_48;
  if ((g_026fc540 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_02710b58 = FUN_0006d940();
    g_02710b40 = "MDScrollViewAddsView";
    g_02710b48 = 0x150;
    g_02710b50 = FUN_002b8980;
    g_02710b60 = 0;
    ram_0000000002710b68 = 0;
    g_02710b70 = 0;
    ram_0000000002710b78 = 0;
    g_02710b80 = 0;
    ram_0000000002710b88 = 0;
    g_02710b90 = 0;
    ram_0000000002710b98 = 0;
    g_02710ba0 = 0;
    ram_0000000002710ba8 = 0;
    g_02710bb0 = 0;
    ram_0000000002710bb8 = 0;
    g_02710bc0 = 0;
    ram_0000000002710bc8 = 0;
    g_02710bd0 = 0;
    ram_0000000002710bd8 = 0;
    g_02710be0 = 0;
    ram_0000000002710be8 = 0;
    g_02710bf0 = 0;
    ram_0000000002710bf8 = 0;
    g_02710c00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002b4ec6:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b4ec6;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  plVar9 = (int64_t *)(**(code **)(*this_ptr + 0x10))();
  if ((g_026f0e00 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_002b515f:
    bVar12 = false;
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b515f;
    bVar12 = true;
    FUN_00d50b00();
  }
  FUN_01d9a650();
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x478))();
  }
  plVar1[0x27] = 0;
  if (plVar1[0x28] != 0) {
    FUN_01d9ad20();
  }
  FUN_00d50130();
  (**(code **)(*this_ptr + 0x28))();
  FUN_01d9a660();
  FUN_00d50b20();
LAB_002b5491:
  if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 002ccab0
// ============================================================
// Function: FUN_002ccab0
// Address: 002ccab0
// Size: 1796 bytes
// Class: GNScrollView
// String references:
//   "%d sec"
//   "%.1f kHz"
//   "%@, %@, %@"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002ccab0(uint64_t param_1,double *param_2)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  double *arg1;
  void*this_ptr;
  int64_t *plVar10;
  void* pVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_90;
  uint32_t local_88;
  void* local_84;
  double *local_80;
  int64_t *local_78;
  uint local_70;
  double local_68;
  uint64_t local_60;
  int local_58;
  uint32_t uStack_54;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  dVar14 = *arg1;
  if ((dVar14 == 0.0) || (*(int *)((int64_t)dVar14 + 0xc) == 0)) {
    if ((*param_2 == 0.0) || (*(int *)((int64_t)*param_2 + 0xc) == 0)) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    if (dVar14 != 0.0) goto LAB_002ccaee;
    uVar15 = 0;
    local_38 = 0.0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    dVar14 = *param_2;
    if (dVar14 == 0.0) {
      uVar5 = 0;
      goto LAB_002ccef1;
    }
  }
  else {
LAB_002ccaee:
    local_70 = local_70 & 0xffffff00;
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    local_38 = 0.0;
    local_80 = param_2;
    local_68 = dVar14;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar9 = -local_60._4_4_;
        }
        else {
          iVar9 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar9 = 0;
        }
        local_60 = CONCAT44(iVar9,(int)local_60);
      }
      lVar2 = (int64_t)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
      local_78 = *(int64_t **)(*(int64_t *)((int64_t)local_68 + 0x10) + 8 + lVar2 * 8);
      if (iVar1 == 0) {
        iVar1 = FUN_00b86c20();
        bVar13 = true;
      }
      else {
        iVar9 = FUN_00b86c20();
        if (iVar1 != iVar9) {
          bVar13 = false;
        }
      }
      lVar2 = FUN_00b7a710();
      dVar14 = (double)FUN_00b7a6d0();
      pVar6 = pVar11;
      if (pVar11 != (int)((double)lVar2 / dVar14)) {
        pVar6 = 0xffffffff;
      }
      bVar12 = pVar11 == 0;
      pVar11 = pVar6;
      if (bVar12) {
        pVar11 = (int)((double)lVar2 / dVar14);
      }
      if ((local_38 != g_02390448) || (NAN(local_38) || NAN(g_02390448))) {
        dVar14 = (double)FUN_00b7a6d0();
        if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
          local_38 = g_023b19a0;
        }
      }
      else {
        local_38 = (double)FUN_00b7a6d0();
      }
    }
    uVar15 = FUN_002d7370();
    dVar14 = *local_80;
    uVar5 = 0;
    if (dVar14 == 0.0) goto LAB_002ccef1;
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = (int64_t *)0x0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_60._4_4_ = 0;
  local_68 = dVar14;
  while( true ) {
    if (local_60._4_4_ != 0) {
      if (local_60._4_4_ < 1) {
        iVar9 = -local_60._4_4_;
      }
      else {
        iVar9 = (int)local_60 - local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar9 = 0;
      }
      local_60 = CONCAT44(iVar9,(int)local_60);
    }
    lVar2 = (int64_t)(int)local_60;
    iVar9 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar9);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
    lVar4 = *(int64_t *)((int64_t)local_68 + 0x10);
    plVar7 = *(int64_t **)(lVar4 + 8 + lVar2 * 8);
    local_78 = plVar7;
    if (iVar1 == 0) {
      pvVar3 = _pthread_getspecific((void*)lVar4);
      plVar10 = local_78;
      pVar6 = (void*)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar1 = (**(code **)(*plVar7 + 0x380))();
      bVar13 = true;
    }
    else {
      pvVar3 = _pthread_getspecific((void*)lVar4);
      plVar10 = local_78;
      pVar6 = (void*)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar9 = (**(code **)(*plVar7 + 0x380))();
      if (iVar1 != iVar9) {
        bVar13 = false;
      }
    }
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
      plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    lVar2 = (**(code **)(*plVar7 + 0x378))();
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar10, lVar4 != 0)) {
      plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
    plVar7 = local_78;
    pVar6 = 0xffffffff;
    if (pVar11 == (int)((double)lVar2 / dVar14)) {
      pVar6 = pVar11;
    }
    bVar12 = pVar11 == 0;
    pVar11 = pVar6;
    if (bVar12) {
      pVar11 = (int)((double)lVar2 / dVar14);
    }
    if ((local_38 != g_02390448) || (NAN(local_38) || NAN(g_02390448))) {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
      if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
        local_38 = g_023b19a0;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      local_38 = (double)(**(code **)(*plVar7 + 0x370))();
    }
  }
  uVar5 = FUN_002d7290();
  uVar15 = extraout_XMM0_Qa;
LAB_002ccef1:
  plVar7 = g_02726ce0;
  if (bVar13) {
    uVar5 = FUN_00ae6870();
    plVar7 = local_78;
    uVar15 = extraout_XMM0_Qa_01;
    if (local_78 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      local_80 = (double *)0x0;
    }
    else {
      local_80 = (double *)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((char)local_70 == '\0') {
        uVar15 = FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (g_02726ce0 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Qa_00;
    }
    local_80 = (double *)CONCAT71((int7)((uint64_t)uVar5 >> 8),plVar7 != (int64_t *)0x0);
  }
  plVar10 = g_02726ce0;
  if ((int)pVar11 < 1) {
    if (g_02726ce0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar13 = plVar10 != (int64_t *)0x0;
    plVar8 = g_02726ce0;
  }
  else {
    local_88 = 1;
    local_90 = &g_024cc6f0;
    local_84 = pVar11;
    FUN_00d8cb40(uVar15,&local_90);
    plVar10 = local_78;
    plVar8 = g_02726ce0;
    if (local_78 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      bVar13 = false;
    }
    else {
      bVar13 = true;
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        plVar8 = g_02726ce0;
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar8 = g_02726ce0;
        }
      }
    }
  }
  g_02726ce0 = plVar8;
  if (local_38 <= 0.0) {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar12 = plVar8 != (int64_t *)0x0;
  }
  else {
    local_68 = local_38 / g_023907c0;
    local_70 = 1;
    local_78 = (int64_t *)&g_024de5e0;
    FUN_00d8cb40(0,&local_78);
    plVar8 = local_90;
    if (local_90 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      if ((char)local_88 == '\0') {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_a8 = plVar8;
  local_a0 = plVar10;
  local_90 = plVar7;
  uVar15 = FUN_002bd7b0(&local_a0,&local_a8,3);
  FUN_00d8cb40(uVar15,&local_78);
  local_78 = (int64_t *)&g_025df260;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (int64_t *)&g_0253d630;
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if (((char)local_60 != '\0') && (local_68 != 0.0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dceb30
// ============================================================
// Function: FUN_01dceb30
// Address: 01dceb30
// Size: 2004 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dceb30(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t **pplVar5;
  int unaff_ESI;
  int64_t *this_ptr;
  int iVar6;
  int iVar7;
  uint64_t uVar8;
  bool bVar9;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int local_34;
  
  local_34 = unaff_ESI;
  if ((int)this_ptr[0x30] != unaff_ESI) {
    FUN_01e40eb0();
    if (local_60 == (int64_t *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01e42030();
      bVar9 = local_90 != (int64_t *)0x0;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar9) {
      FUN_01e42030();
      (**(code **)(*local_60 + 0x620))();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (((char)this_ptr[0x4f] == '\0') || ((int)this_ptr[0x30] != local_34)) {
    bVar9 = (int)this_ptr[0x30] != local_34 || (char)this_ptr[0x4f] != '\0';
  }
  else {
    bVar9 = true;
    if (*(int *)(this_ptr[0x51] + 0xc) == *(int *)(this_ptr[0x2c] + 0xc)) {
      if (*(int *)(this_ptr[0x51] + 0xc) == 0) {
        bVar9 = false;
      }
      else {
        FUN_00d23310();
        pplVar5 = &local_90;
        if (local_58[0] != '\0') {
          pplVar5 = (int64_t **)local_58;
        }
        local_90 = (int64_t *)CONCAT71(local_90._1_7_,local_58[0]);
        *(char *)pplVar5 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar9 = *(int *)((int64_t)local_60 + 0xc) != (int)this_ptr[0x30];
        if (((char)local_90 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(int *)(this_ptr + 0x30) = local_34;
  FUN_00d216c0();
  if (0 < *(int *)(this_ptr[0x2c] + 0xc)) {
    if (local_34 < 1) {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
    }
    else {
      iVar7 = 0;
      do {
        FUN_00d7a7b0();
        iVar6 = local_34;
        if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' && (local_60 != (int64_t *)0x0))
           )) {
          FUN_00d50b20();
          iVar6 = local_34;
        }
        do {
          lVar3 = g_028b8a78;
          if (g_028b8a78 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        local_58[0] = '\0';
        FUN_00d21140();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
    }
  }
  if ((bVar9) && ((char)this_ptr[0x4f] != '\0')) {
    if (this_ptr[0x51] != 0) {
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = this_ptr[0x51];
      iVar7 = 0;
      while( true ) {
        iVar6 = 0;
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar6 = -iVar7;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar7);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar6 = 0;
          }
          local_48 = CONCAT44(iVar6,(int)local_48);
        }
        lVar3 = (int64_t)(int)local_48;
        iVar7 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar7);
        if (*(int *)(local_50 + 0xc) <= iVar7) break;
        local_60 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
        iVar7 = iVar6;
        if (local_60 != (int64_t *)0x0) {
          local_88 = '\0';
          local_90 = (int64_t *)0x0;
          local_78 = 0xffffffff;
          local_70 = 0;
          local_80 = local_60;
          while( true ) {
            lVar3 = (int64_t)(int)local_78;
            iVar7 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,iVar7);
            if (*(int *)((int64_t)local_80 + 0xc) <= iVar7) break;
            local_90 = *(int64_t **)(local_80[2] + 8 + lVar3 * 8);
            if (local_90 != g_028b8a88) {
              (**(code **)(*local_90 + 0x978))();
              (**(code **)(*local_90 + 0x478))();
            }
            FUN_00d50130();
            if (local_78._4_4_ != 0) {
              if (local_78._4_4_ < 1) {
                iVar7 = -local_78._4_4_;
              }
              else {
                local_78 = CONCAT44(local_78._4_4_,(int)local_78 - local_78._4_4_);
                FUN_00d23690();
                local_70 = local_70 + local_78._4_4_;
                iVar7 = 0;
              }
              local_78 = CONCAT44(iVar7,(int)local_78);
            }
          }
          FUN_01de69a0();
          iVar7 = local_48._4_4_;
        }
      }
      FUN_01de6930();
    }
    FUN_00d216c0();
    if (0 < *(int *)(this_ptr[0x2c] + 0xc)) {
      if (local_34 < 1) {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
              (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
      }
      else {
        iVar7 = 0;
        do {
          FUN_01dcf670();
          iVar6 = local_34;
          if (((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), iVar6 = local_34, local_58[0] != '\0' &&
              (local_60 != (int64_t *)0x0)))) {
            FUN_00d50b20();
            iVar6 = local_34;
          }
          do {
            plVar1 = g_028b8a88;
            if (g_028b8a88 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            local_58[0] = '\0';
            FUN_00d21140();
            if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          local_58[0] = '\0';
          FUN_00d21140();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this_ptr[0x2c] + 0xc));
      }
    }
  }
  (**(code **)(*this_ptr + 0xa20))();
  if (local_34 <= (int)this_ptr[0x36]) {
    *(void*)(this_ptr + 0x36) = 0xffffffff;
  }
  (**(code **)(*this_ptr + 0x928))();
  lVar3 = this_ptr[0x34];
  if (lVar3 != 0) {
    iVar7 = *(int *)(lVar3 + 0x18);
    iVar6 = iVar7 + 3;
    if (-1 < iVar7) {
      iVar6 = iVar7;
    }
    if (3 < iVar7) {
      uVar2 = iVar6 >> 2;
      uVar8 = (uint64_t)uVar2;
      bVar9 = false;
      while( true ) {
        uVar2 = uVar2 - 1;
        pvVar4 = (void *)(uint64_t)uVar2;
        if (local_34 <= *(int *)(*(int64_t *)(lVar3 + 0x10) + (int64_t)pvVar4 * 4)) {
          FUN_00e7b4e0();
          FUN_00c921e0();
          bVar9 = true;
        }
        if ((int64_t)uVar8 < 2) break;
        uVar8 = uVar8 - 1;
        lVar3 = this_ptr[0x34];
      }
      if (bVar9) {
        lVar3 = this_ptr[0x34];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e340();
        _memcpy(pvVar4,(void *)(int64_t)*(int *)(lVar3 + 0x18),param_3);
        FUN_00d50b20();
        (**(code **)(*this_ptr + 0x400))();
      }
    }
  }
  (**(code **)(*this_ptr + 0x930))();
  (**(code **)(*this_ptr + 0x620))();
  return;
}



// ============================================================
// 002ce760
// ============================================================
// Function: FUN_002ce760
// Address: 002ce760
// Size: 1748 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002ce760(uint64_t param_1,char param_2)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  int64_t local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  int local_48;
  int iStack_44;
  int iStack_40;
  int64_t local_38;
  
  lVar7 = *(int64_t *)(this_ptr + 0xe0);
  iVar8 = 0;
  if (lVar7 == 0) {
    bVar4 = false;
  }
  else {
    FUN_00d50b00();
    local_58[0] = '\0';
    local_60 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < 1) {
      bVar4 = false;
    }
    else {
      lVar2 = *(int64_t *)(lVar7 + 0x10);
      if (uVar1 == 1) {
        uVar9 = 0;
        bVar4 = false;
      }
      else {
        uVar9 = 0;
        bVar4 = false;
        bVar10 = false;
        do {
          while (lVar3 = *(int64_t *)(lVar2 + uVar9 * 8), *(int *)(lVar3 + 0x20) != 0) {
            local_60 = *(int64_t *)(lVar2 + 8 + uVar9 * 8);
            if (*(int *)(local_60 + 0x20) == 0) goto LAB_002ce830;
LAB_002ce80b:
            uVar9 = uVar9 + 2;
            if ((uVar1 & 0xfffffffe) == (uint)uVar9) goto LAB_002ce844;
          }
          bVar4 = bVar10;
          if (*(int *)(lVar3 + 0x24) != 2) {
            bVar4 = true;
          }
          local_60 = *(int64_t *)(lVar2 + 8 + uVar9 * 8);
          bVar10 = bVar4;
          if (*(int *)(local_60 + 0x20) != 0) goto LAB_002ce80b;
LAB_002ce830:
          if (*(int *)(local_60 + 0x24) != 2) {
            bVar4 = true;
          }
          uVar9 = uVar9 + 2;
          bVar10 = bVar4;
        } while ((uVar1 & 0xfffffffe) != (uint)uVar9);
      }
LAB_002ce844:
      iVar8 = (int)uVar9;
      if ((uVar1 & 1) != 0) {
        local_60 = *(int64_t *)(lVar2 + (uVar9 & 0xffffffff) * 8);
        bVar10 = bVar4;
        if ((*(int *)(local_60 + 0x20) == 0) && (bVar10 = true, *(int *)(local_60 + 0x24) == 2)) {
          bVar10 = bVar4;
        }
        bVar4 = bVar10;
        iVar8 = iVar8 + 1;
      }
    }
    local_50 = lVar7;
    local_48 = iVar8;
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_002cd490();
  lVar2 = local_60;
  local_a0 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 == 0) {
      bVar10 = true;
    }
    else {
      FUN_00d50b00();
      bVar10 = lVar2 == 0;
      if (param_2 != '\0') goto LAB_002ce8d8;
    }
joined_r0x002ce9e3:
    if ((!bVar4) || (bVar10)) {
      uVar9 = 0;
      if (bVar10) goto LAB_002cee39;
    }
    else {
      FUN_002cc5d0();
      uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),local_60 != 0);
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    bVar10 = local_60 == 0;
    if (param_2 == '\0') goto joined_r0x002ce9e3;
LAB_002ce8d8:
    bVar10 = true;
    if (lVar2 == 0) goto joined_r0x002ce9e3;
    FUN_0075c8d0();
    lVar7 = local_60;
    if (local_58[0] != '\0') {
      if (local_60 == 0) goto LAB_002ce95d;
LAB_002ce923:
      FUN_01d3a560();
      iVar8 = FUN_01d3b590();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_38 = lVar7;
      if (iVar8 == 8) {
        bVar10 = false;
        goto LAB_002ce960;
      }
LAB_002cebc2:
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*g_02572370)();
      lVar7 = *(int64_t *)(this_ptr + 0xe0);
      if (lVar7 != 0) {
        FUN_00d50b00();
        local_58[0] = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        iStack_40 = 0;
        local_50 = lVar7;
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              iStack_40 = iStack_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar7 = (int64_t)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar7 * 8);
          if (*(int64_t *)(local_60 + 0x10) != 0) {
            FUN_00d50b00();
            iVar8 = *(int *)(local_60 + 0x20);
            FUN_00d50b20();
            if (iVar8 == 0) {
              lVar7 = *(int64_t *)(local_60 + 0x10);
              if (lVar7 != 0) {
                FUN_00d50b00();
              }
              local_68 = '\0';
              local_70 = lVar7;
              FUN_00d21140();
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if (lVar7 != 0) {
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_002d7300();
        FUN_00d50b20();
      }
      lVar7 = *(int64_t *)(this_ptr + 0xf0);
      local_a8 = '\0';
      local_b0 = puVar6;
      FUN_002cc5d0();
      local_80 = local_60;
      local_78 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      lVar2 = local_38;
      local_78 = '\x01';
      FUN_00761a80();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar6 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) {
        bVar10 = false;
      }
      else {
        FUN_00d50b20();
        bVar10 = false;
      }
      goto joined_r0x002ce9e3;
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_002ce923;
    }
LAB_002ce95d:
    bVar10 = true;
LAB_002ce960:
    lVar2 = g_026fcec8;
    local_d0 = 0;
    local_c8 = '\0';
    if (g_026fcec8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_01e57260();
    local_90 = local_70;
    local_88 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_88 = '\x01';
    FUN_01f4f940(1,&local_d0,0,&local_90);
    lVar2 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) == 1) {
      FUN_00d23310();
      lVar2 = local_60;
      plVar5 = (int64_t *)local_58;
      if (local_58[0] == '\0') {
        plVar5 = &local_70;
      }
      local_70 = CONCAT71(local_70._1_7_,local_58[0]);
      *(char *)plVar5 = '\0';
      if ((local_58[0] != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 == lVar2) {
        if ((char)local_70 == '\0') {
          local_38 = lVar7;
        }
        else {
          local_38 = lVar7;
          if (lVar2 != 0) {
            FUN_00d50b20();
            local_38 = lVar7;
          }
        }
      }
      else if ((char)local_70 == '\0') {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      else {
        local_38 = lVar2;
        if (!bVar10) {
          FUN_00d50b20();
          local_38 = lVar2;
        }
      }
      FUN_00d50b20();
      goto LAB_002cebc2;
    }
    FUN_00d50b20();
    if (!bVar10) {
      FUN_00d50b20();
    }
    uVar9 = 0;
  }
  FUN_00d50b20();
LAB_002cee39:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 01d924f0
// ============================================================
// Function: FUN_01d924f0
// Address: 01d924f0
// Size: 1475 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01d924f0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  void*puVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar14;
  float fVar15;
  float fVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 7) &&
     (((cVar6 = (**(code **)(*this_ptr + 0xae8))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 0)) ||
      ((cVar6 = (**(code **)(*this_ptr + 0xae0))(), cVar6 != '\0' &&
       (iVar8 = FUN_01d3b650(), iVar8 == 1)))))) {
    if ((int64_t *)this_ptr[0x3d] == (int64_t *)0x0) {
      return;
    }
    (**(code **)(*(int64_t *)this_ptr[0x3d] + 0x3c0))();
    return;
  }
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 != 1) || (iVar8 = FUN_01d3b630(), iVar8 != 1)) {
    local_88 = *arg1;
    local_80 = '\0';
    FUN_01daee00();
    if (local_80 == '\0') {
      return;
    }
    if (local_88 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  cVar6 = FUN_01d91c50();
  if (cVar6 == '\0') {
    return;
  }
  FUN_01d3abf0();
  local_78 = FUN_01e466c0();
  (**(code **)(*this_ptr + 0x640))();
  cVar6 = (**(code **)(*local_40 + 0x588))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
LAB_01d92702:
    (**(code **)(*this_ptr + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92764;
    uVar11 = FUN_01d91f30();
    cVar6 = FUN_00d05410((uint32_t)local_78,(int)uVar11,CONCAT44(fVar15,fVar14));
    if (cVar6 == '\0') goto LAB_01d92764;
    puVar9 = (void*)((int64_t)this_ptr + 0x1f5);
  }
  else {
    (**(code **)(*this_ptr + 0x640))();
    cVar6 = (**(code **)(*local_40 + 0x588))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = g_023dccf4;
    uVar12 = g_023dccec;
    if (cVar6 != '\0') {
      uVar11 = FUN_01e3f820();
      fVar16 = (float)((uint64_t)uVar11 >> 0x20);
      auVar20._8_4_ = extraout_XMM0_Dc;
      auVar20._0_8_ = uVar11;
      auVar20._12_4_ = extraout_XMM0_Dd;
      if (fVar14 <= fVar15) {
        auVar3._4_4_ = fVar16;
        auVar3._0_4_ = fVar16 + (fVar15 - fVar14);
        auVar3._8_4_ = extraout_XMM0_Dd;
        auVar3._12_4_ = extraout_XMM0_Dd;
        auVar20 = insertps(auVar20,auVar3,0x10);
        uVar11 = CONCAT44(fVar14,fVar14);
        uVar12 = auVar20._0_8_;
      }
      else {
        auVar17._4_12_ = auVar20._4_12_;
        auVar17._0_4_ = (float)uVar11 + (fVar14 - fVar15);
        uVar11 = CONCAT44(fVar15,fVar15);
        uVar12 = auVar17._0_8_;
      }
    }
    fVar14 = (float)uVar12;
    fVar15 = (float)((uint64_t)uVar12 >> 0x20);
    cVar6 = FUN_00d05410((uint32_t)local_78,fVar14,uVar11);
    uVar11 = CONCAT44(fVar15,fVar14);
    if (cVar6 == '\0') goto LAB_01d92702;
    puVar9 = (void*)((int64_t)this_ptr + 500);
  }
  *puVar9 = 1;
LAB_01d92764:
  if ((*(char *)((int64_t)this_ptr + 500) == '\0') &&
     (*(char *)((int64_t)this_ptr + 0x1f5) == '\0')) {
    local_98 = *arg1;
    local_90 = '\0';
    FUN_01daee00();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    g_028b86e8 = FUN_00e7d6f0();
    FUN_01f27fe0();
    local_58 = this_ptr + 0x3c;
    local_48 = 0;
    (**(code **)(this_ptr[0x3c] + 0x10))();
    uVar10 = FUN_00d50b00();
    local_50 = local_58;
    local_48 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_01f47190(uVar10,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d92330();
    do {
      do {
        FUN_01d3abf0();
        uVar12 = FUN_01e466c0();
        if (*(char *)((int64_t)this_ptr + 500) == '\0') {
          if (*(char *)((int64_t)this_ptr + 0x1f5) != '\0') {
            local_78 = uVar12;
            uVar13 = FUN_01d91f30();
            uVar12 = uVar11;
            uVar11 = uVar13;
            goto LAB_01d9291f;
          }
          g_028b86e0 = 1;
        }
        else {
          local_78 = uVar12;
          (**(code **)(*this_ptr + 0x640))();
          cVar6 = (**(code **)(*local_40 + 0x588))();
          uVar13 = uVar11;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar12 = g_023dccf4;
          uVar11 = g_023dccec;
          if (cVar6 != '\0') {
            uVar11 = FUN_01e3f820();
            fVar16 = (float)((uint64_t)uVar13 >> 0x20);
            fVar15 = (float)uVar13;
            fVar14 = (float)((uint64_t)uVar11 >> 0x20);
            auVar18._8_4_ = extraout_XMM0_Dc_00;
            auVar18._0_8_ = uVar11;
            auVar18._12_4_ = extraout_XMM0_Dd_00;
            if (fVar15 <= fVar16) {
              auVar2._4_4_ = fVar14;
              auVar2._0_4_ = fVar14 + (fVar16 - fVar15);
              auVar2._8_4_ = extraout_XMM0_Dd_00;
              auVar2._12_4_ = extraout_XMM0_Dd_00;
              auVar20 = insertps(auVar18,auVar2,0x10);
              uVar12 = CONCAT44(fVar15,fVar15);
              uVar11 = auVar20._0_8_;
            }
            else {
              auVar19._4_12_ = auVar18._4_12_;
              auVar19._0_4_ = (float)uVar11 + (fVar15 - fVar16);
              uVar12 = CONCAT44(fVar16,fVar16);
              uVar11 = auVar19._0_8_;
            }
          }
LAB_01d9291f:
          bVar7 = FUN_00d05410((uint32_t)local_78,(int)uVar11,uVar12);
          g_028b86e0 = bVar7 ^ 1;
        }
        (**(code **)(*this_ptr + 0x658))();
        plVar5 = local_40;
        plVar1 = (int64_t *)*arg1;
        if (plVar1 == local_40) {
          if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01d929c9;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01d929c4;
          }
LAB_01d92982:
          *(void*)(arg1 + 1) = 1;
        }
        else {
          lVar4 = arg1[1];
          if (local_38 != '\0') {
            *arg1 = (int64_t)local_40;
            if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d92982;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar5;
          if (((char)lVar4 != '\0') && (plVar1 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d929c4:
          *(void*)(arg1 + 1) = 1;
LAB_01d929c9:
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (*arg1 == 0) goto LAB_01d92a06;
        iVar8 = FUN_01d3a5a0();
      } while (iVar8 != 6);
      iVar8 = FUN_01d3b630();
    } while (iVar8 != 1);
LAB_01d92a06:
    FUN_01f27fe0();
    local_60 = 0;
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b00();
    local_68 = local_58;
    local_60 = '\x01';
    FUN_01f474f0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 500) = 0;
  }
  return;
}



// ============================================================
// 01db3040
// ============================================================
// Function: FUN_01db3040
// Address: 01db3040
// Size: 1814 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_01db3040(float param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t lVar7;
  bool bVar8;
  bool bVar9;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint64_t local_a0;
  float local_58 [2];
  int64_t *local_50;
  int64_t *local_48;
  int64_t local_40;
  char local_38;
  
  fVar11 = (float)((uint64_t)param_2 >> 0x20);
  fVar15 = (float)param_2;
  plVar1 = *(int64_t **)(*arg1 + 0x20);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = (**(code **)(*plVar1 + 0x4d8))();
  local_58[0] = fVar15;
  local_58[1] = fVar11;
  FUN_00d50b20();
  cVar3 = *(char *)(this_ptr + 0x138);
  bVar8 = cVar3 == '\0';
  if (!bVar8) {
    fVar11 = fVar15;
  }
  local_58[bVar8] = param_1 + fVar11;
  if (bVar8) {
    lVar7 = *arg1;
    fVar15 = (float)((uint64_t)*(void*)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[1];
    fVar14 = fVar15;
    if (local_58[1] <= fVar15) goto LAB_01db310d;
LAB_01db311b:
    local_58[bVar8] = fVar15;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  else {
    lVar7 = *arg1;
    fVar15 = (float)*(void*)(lVar7 + 0x18);
    fVar14 = (float)((uint64_t)*(void*)(lVar7 + 0x18) >> 0x20);
    fVar12 = local_58[0];
    if (fVar15 < local_58[0]) goto LAB_01db311b;
LAB_01db310d:
    fVar14 = (float)((uint64_t)*(void*)(lVar7 + 0x10) >> 0x20);
    fVar15 = fVar14;
    if (cVar3 != '\0') {
      fVar15 = (float)*(void*)(lVar7 + 0x10);
    }
    if (fVar12 < fVar15) goto LAB_01db311b;
    iVar4 = *(int *)(lVar7 + 0x38);
  }
  if (iVar4 == 0) goto LAB_01db3614;
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  plVar1 = *(int64_t **)(lVar7 + 0x20);
  bVar8 = plVar1 != (int64_t *)0x0;
  if (bVar8) {
    FUN_00d50b00();
    local_50 = plVar1;
  }
  plVar2 = local_50;
  if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01db31ba:
    if (g_02802688 != 0) goto LAB_01db31c7;
LAB_01db3242:
    lVar7 = 0;
    bVar9 = true;
    while( true ) {
      plVar2 = local_50;
      (**(code **)(*local_50 + 0x4a0))();
      iVar4 = *(int *)(local_40 + 0xc);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = local_48;
      bVar8 = bVar9;
      if (iVar4 <= lVar7) break;
      (**(code **)(*plVar2 + 0x4a0))();
      plVar6 = local_48;
      plVar2 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + lVar7 * 8);
      if (local_48 == plVar2) {
        if ((!bVar9) && (plVar2 != (int64_t *)0x0)) {
          bVar8 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_48 = plVar2;
        bVar8 = true;
        if ((bVar9) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026f8e78 = FUN_0006d940();
        g_026f8e60 = "GNScrollView";
        g_026f8e68 = 0x1c0;
        g_026f8e70 = FUN_00074e80;
        g_026f8e80 = 0;
        ram_00000000026f8e88 = 0;
        g_026f8e90 = 0;
        ram_00000000026f8e98 = 0;
        g_026f8ea0 = 0;
        ram_00000000026f8ea8 = 0;
        g_026f8eb0 = 0;
        ram_00000000026f8eb8 = 0;
        g_026f8ec0 = 0;
        ram_00000000026f8ec8 = 0;
        g_026f8ed0 = 0;
        ram_00000000026f8ed8 = 0;
        g_026f8ee0 = 0;
        ram_00000000026f8ee8 = 0;
        g_026f8ef0 = 0;
        ram_00000000026f8ef8 = 0;
        g_026f8f00 = 0;
        ram_00000000026f8f08 = 0;
        g_026f8f10 = 0;
        ram_00000000026f8f18 = 0;
        g_026f8f20 = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar5 = &local_48;
        if (cVar3 == '\0') {
          pplVar5 = (int64_t **)&g_02802688;
        }
      }
      plVar6 = local_48;
      if (*pplVar5 != (int64_t *)0x0) break;
      if (local_48 != (int64_t *)0x0) {
        local_48 = (int64_t *)0x0;
        if (bVar8) {
          FUN_00d50b20();
        }
        bVar8 = false;
      }
      lVar7 = lVar7 + 1;
      bVar9 = bVar8;
    }
joined_r0x01db3544:
    if (plVar6 != (int64_t *)0x0) {
LAB_01db3214:
      if (bVar8) goto LAB_01db3449;
      bVar8 = false;
      cVar3 = *(char *)(this_ptr + 0x138);
      goto joined_r0x01db345e;
    }
joined_r0x01db35f1:
    plVar6 = (int64_t *)0x0;
joined_r0x01db35d0:
    bVar9 = true;
    bVar8 = true;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01db31ba;
    if (local_50 == (int64_t *)0x0) goto LAB_01db3242;
LAB_01db31c7:
    plVar2 = local_48;
    plVar6 = local_50;
    if (local_48 != local_50) {
      if (plVar1 != (int64_t *)0x0 && local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = plVar6;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
        goto joined_r0x01db3544;
      }
      if (plVar6 == (int64_t *)0x0) goto joined_r0x01db35f1;
      goto LAB_01db3214;
    }
    if (local_50 == (int64_t *)0x0) goto joined_r0x01db35f1;
LAB_01db3449:
    bVar8 = true;
    FUN_00d50b00();
    cVar3 = *(char *)(this_ptr + 0x138);
joined_r0x01db345e:
    fVar12 = local_58[0];
    if (cVar3 == '\0') {
      fVar12 = local_58[1];
    }
    plVar2 = *(int64_t **)(*arg1 + 0x20);
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x4d8))();
    if (*(char *)(this_ptr + 0x138) == '\0') {
      fVar15 = fVar14;
    }
    FUN_00d50b20();
    FUN_01d97870();
    local_a0 = FUN_01cf5cf0();
    fVar14 = (float)((uint64_t)local_a0 >> 0x20);
    fVar13 = (float)local_a0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(*arg1 + 0x38) == 2) {
      bVar9 = *(char *)(this_ptr + 0x138) == '\0';
      if (!bVar9) {
        fVar14 = fVar13;
      }
      *(float *)((int64_t)&local_a0 + (uint64_t)bVar9 * 4) = fVar14 - (fVar12 - fVar15);
      FUN_01d97870();
      FUN_01cf5c80((int)local_a0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (!bVar8) goto joined_r0x01db35d0;
    FUN_00d50b20();
    bVar9 = false;
    bVar8 = false;
  }
  if ((plVar1 != (int64_t *)0x0) && (bVar8 = bVar9, local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar8 && plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01db3614:
  cVar3 = FUN_01e4ce30();
  plVar1 = *(int64_t **)(*arg1 + 0x20);
  if (cVar3 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    (**(code **)(*plVar1 + 0x4d0))(uVar10);
    FUN_00d50b20();
  }
  else {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    fVar15 = local_58[0];
    FUN_01e3b180(uVar10);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar14 = local_58[1];
  if (*(char *)(this_ptr + 0x138) != '\0') {
    fVar14 = fVar15;
  }
  return CONCAT44(local_58[1],fVar14 - fVar11);
}



// ============================================================
// 01db4190
// ============================================================
// Function: FUN_01db4190
// Address: 01db4190
// Size: 2036 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db4190(void)

{
  dword dVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  bool bVar10;
  float fVar11;
  uint64_t uVar12;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  int64_t local_128;
  char local_120;
  float local_f8;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  void*local_58;
  int64_t local_50;
  int64_t local_40;
  char local_38;
  
  iVar6 = FUN_01d3a5a0();
  if ((iVar6 == 1) && (iVar6 = FUN_01d3b630(), iVar6 == 1)) {
    FUN_01d3abf0();
    local_68 = FUN_01e466c0();
    fVar11 = (float)local_68;
    if ((char)this_ptr[0x27] == '\0') {
      fVar11 = (float)((uint64_t)local_68 >> 0x20);
    }
    uStack_60 = extraout_XMM0_Dc;
    uStack_5c = extraout_XMM0_Dd;
    FUN_01db2340();
    if (local_40 == 0) {
      local_50 = 0;
      dVar1 = MACH_HEADER.filetype;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      dVar1 = *(dword *)(local_40 + 0xc);
      local_50 = local_40;
    }
    if ((int)dVar1 < 2) goto LAB_01db4229;
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar9 * 8);
      if (lVar8 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        bVar10 = lVar8 != 0;
        lVar8 = lVar2;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      local_f8 = (float)*(void*)(lVar8 + 0x28);
      fVar14 = (float)((uint64_t)*(void*)(lVar8 + 0x28) >> 0x20);
      uVar16 = 0;
      uVar17 = 0;
      cVar5 = FUN_00d05410((float)local_68,local_f8,*(void*)(lVar8 + 0x30));
      if (cVar5 != '\0') {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        local_58 = puVar7;
        FUN_00d21140();
        plVar3 = *(int64_t **)(lVar8 + 0x20);
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)this_ptr[0x27] == '\0';
        local_68._0_4_ = local_f8;
        uStack_60 = uVar16;
        if (bVar10) {
          local_68._0_4_ = fVar14;
          uStack_60 = uVar17;
        }
        fVar13 = (float)*(void*)(lVar8 + 0x10);
        if (bVar10) {
          fVar13 = (float)((uint64_t)*(void*)(lVar8 + 0x10) >> 0x20);
        }
        local_68._4_4_ = fVar14;
        uStack_5c = uVar17;
        FUN_00d50b20();
        lVar2 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar8 == lVar2) {
          plVar3 = *(int64_t **)(lVar8 + 0x20);
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          lVar8 = lVar2;
        }
        if (plVar3 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x4d8))();
        bVar10 = (char)this_ptr[0x27] == '\0';
        if (bVar10) {
          local_f8 = fVar14;
        }
        fVar14 = (float)*(void*)(lVar8 + 0x10);
        if (bVar10) {
          fVar14 = (float)((uint64_t)*(void*)(lVar8 + 0x10) >> 0x20);
        }
        FUN_00d50b20();
        lVar9 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar9 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        fVar13 = (fVar11 - (float)local_68) + fVar13;
        fVar14 = (local_f8 + fVar11) - fVar14;
        bVar10 = true;
        goto LAB_01db451e;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int64_t)*(int *)(local_50 + 0xc) + -1);
  }
  else {
    local_50 = 0;
LAB_01db4229:
    lVar8 = 0;
  }
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01db4267:
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_01db451e:
  local_68._0_4_ = fVar11;
  (**(code **)(*this_ptr + 0x658))();
  lVar2 = *arg1;
  if (lVar2 == lVar9) {
    if (((char)arg1[1] == '\0') && (lVar9 != 0)) {
      FUN_00d50b00();
      goto LAB_01db45cc;
    }
    lVar2 = *arg1;
  }
  else {
    lVar4 = arg1[1];
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    *arg1 = lVar9;
    if (((char)lVar4 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
LAB_01db45cc:
    *(void*)(arg1 + 1) = 1;
    lVar2 = *arg1;
  }
  if ((lVar2 == 0) || (iVar6 = FUN_01d3a5a0(), iVar6 == 6)) goto LAB_01db4820;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  fVar11 = (float)uVar12;
  if ((char)this_ptr[0x27] == '\0') {
    fVar11 = (float)((uint64_t)uVar12 >> 0x20);
  }
  fVar15 = fVar14;
  if (fVar11 <= fVar14) {
    fVar15 = fVar11;
  }
  fVar11 = fVar13;
  if (fVar13 <= fVar15) {
    fVar11 = fVar15;
  }
  local_68._0_4_ = fVar11 - (float)local_68;
  if (((float)local_68 != g_0239424c) || (NAN((float)local_68) || NAN(g_0239424c))) {
    lVar2 = *(int64_t *)local_58[2];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = FUN_01db3040((float)local_68);
    uStack_60 = extraout_XMM0_Dc_00;
    uStack_5c = extraout_XMM0_Dd_00;
    uVar12 = local_68;
    if (lVar2 != 0) {
      FUN_00d50b20();
      uVar12 = local_68;
    }
    local_68._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
    local_68._0_4_ = (float)uVar12;
    if (((float)local_68 != g_0239424c) || (NAN((float)local_68) || NAN(g_0239424c))) {
      lVar2 = *(int64_t *)(local_58[2] + 8);
      local_68 = uVar12;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01db3040((uint)(float)local_68 ^ g_023945e0);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01db28c0();
      (**(code **)(*this_ptr + 0x620))();
      FUN_00d403d0();
      lVar2 = g_027f22b8;
      if (g_027f22b8 != 0) {
        FUN_00d50b00();
      }
      local_80 = 0;
      FUN_00d50b00();
      local_80 = '\x01';
      local_c8 = 0;
      local_c0 = '\0';
      local_88 = this_ptr;
      FUN_00d40470(&local_c8,&local_88,1,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      uVar12 = local_68;
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar12 = local_68;
      }
      local_68._4_4_ = (float)((uint64_t)uVar12 >> 0x20);
      if (lVar2 != 0) {
        local_68 = uVar12;
        FUN_00d50b20();
      }
      bVar10 = false;
    }
  }
  goto LAB_01db451e;
LAB_01db4820:
  if (!bVar10) {
    FUN_00d403d0();
    local_b8 = g_027f22c0;
    if (g_027f22c0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_70 = 0;
    FUN_00d50b00();
    local_70 = '\x01';
    local_a8 = 0;
    local_a0 = '\0';
    local_78 = this_ptr;
    FUN_00d40470(&local_a8,&local_78,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    if (lVar9 == 0) {
      bVar10 = false;
    }
    else {
      FUN_01e4c160();
      bVar10 = local_128 != 0;
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
    }
    if (bVar10) {
      FUN_01e42030();
      FUN_01d86b20();
    }
  }
  if (local_58 != (void*)0x0) {
    FUN_00d50b20();
  }
  goto LAB_01db4267;
}



// ============================================================
// 01cfe8d0
// ============================================================
// Function: FUN_01cfe8d0
// Address: 01cfe8d0
// Size: 1433 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfe8d0(void)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int64_t *plVar6;
  char *pcVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  bool bVar9;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
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
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    if ((g_028b7948 == (int64_t *)0x0) || (g_028b7951 == '\0')) {
      FUN_00e8cb50();
      if (g_028b7948 == (int64_t *)0x0) {
        plVar6 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar6 + 0x18))();
        if (g_028b7948 == plVar6) {
          bVar5 = false;
          bVar4 = false;
        }
        else {
          bVar5 = true;
          bVar4 = true;
          bVar9 = g_028b7948 != (int64_t *)0x0;
          g_028b7948 = plVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (g_028b7950 == '\0') {
          g_028b7950 = '\x01';
          FUN_00e8cb90();
          bVar4 = bVar5;
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        local_e8 = g_027ef228;
        plVar6 = (int64_t *)CONCAT71(uStack_4f,local_50);
        if (g_027ef228 != 0) {
          FUN_00d50b00();
        }
        local_e0 = '\x01';
        FUN_00cac150();
        local_68 = local_98;
        local_60 = 0;
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        local_60 = '\x01';
        (**(code **)(*plVar6 + 0x5f0))(&local_68,&local_e8);
        lVar8 = local_40;
        if (local_38[0] == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38[0] = '\0';
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          local_d8 = lVar8;
          local_d0 = '\0';
          FUN_00ca94c0();
          lVar8 = local_40;
          if (local_38[0] == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38[0] = '\0';
          }
          local_58 = lVar8;
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = 0;
          while( true ) {
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            iVar1 = *(int *)(lVar2 + 0xc);
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            if (iVar1 <= lVar8) break;
            FUN_00c9fe20();
            lVar2 = local_40;
            local_50 = local_38[0];
            pcVar7 = local_38;
            if (local_38[0] == '\0') {
              pcVar7 = &local_50;
            }
            *pcVar7 = '\0';
            if ((local_38[0] != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 8);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            if (local_50 != '\0') {
              FUN_00d50b20();
            }
            local_c0 = '\0';
            local_c8 = lVar2;
            FUN_000175c0();
            lVar3 = CONCAT71(uStack_4f,local_50);
            if (local_48 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_80 = '\x01';
            local_88 = lVar3;
            FUN_01cfd750();
            lVar3 = local_40;
            if ((local_38[0] == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            FUN_01cff270();
            local_b8 = lVar3;
            local_b0 = '\0';
            local_38[0] = '\0';
            local_40 = lVar2;
            FUN_00ca0840();
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        g_028b7951 = '\x01';
        FUN_00e8cb70();
      }
      else {
        g_028b7951 = '\x01';
        FUN_00e8cb70();
      }
    }
    local_a8 = *arg1;
    local_a0 = '\0';
    FUN_000175c0();
    lVar8 = local_40;
    *(void*)(this_ptr + 1) = 0;
    if (local_38[0] == '\0') {
      if (local_40 == 0) {
        *this_ptr = 0;
        *(void*)(this_ptr + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *this_ptr = lVar8;
        *(void*)(this_ptr + 1) = 1;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      *this_ptr = local_40;
      *(void*)(this_ptr + 1) = 1;
      local_38[0] = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01dcd6e0
// ============================================================
// Function: FUN_01dcd6e0
// Address: 01dcd6e0
// Size: 1404 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01dcd6e0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  int iVar9;
  int64_t *plVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  bool bVar14;
  int64_t *local_68;
  char local_60;
  int64_t *local_48;
  int64_t *local_40;
  int64_t *local_38;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  lVar8 = *(int64_t *)(arg1 + 0x160);
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar3 = false;
    local_48 = (int64_t *)0x0;
    bVar4 = false;
    local_40 = (int64_t *)0x0;
    bVar1 = false;
    lVar13 = 0;
    bVar2 = false;
    plVar10 = (int64_t *)0x0;
  }
  else {
    lVar11 = 0;
    plVar10 = (int64_t *)0x0;
    bVar2 = false;
    bVar1 = false;
    local_40 = (int64_t *)0x0;
    bVar4 = false;
    local_48 = (int64_t *)0x0;
    bVar3 = false;
    lVar12 = 0;
    do {
      lVar13 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      if (lVar12 == lVar13) {
        lVar13 = lVar12;
        if ((bVar1) || (lVar12 == 0)) {
          bVar14 = bVar1;
          if (lVar12 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          bVar14 = true;
        }
      }
      else {
        bVar14 = true;
        if ((bVar1) && (lVar12 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = bVar14;
      cVar5 = FUN_01db9b00();
      if ((cVar5 != '\0') && (cVar5 = FUN_01db9d40(), cVar5 != '\0')) {
        FUN_01dcdf40();
        local_38 = local_68;
        if (local_68 == plVar10) {
          local_38 = plVar10;
          bVar14 = bVar2;
          if ((!bVar2) && (local_68 != (int64_t *)0x0)) {
            if (local_60 != '\0') goto LAB_01dcd8a5;
            FUN_00d50b00();
            bVar14 = true;
          }
        }
        else if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar14 = true;
          if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01dcd8a5:
          local_60 = '\0';
          bVar14 = true;
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar2 = bVar14;
        if (local_38 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
        }
        else {
          iVar6 = FUN_01db9f80();
          iVar9 = 2;
          if (iVar6 != 0) {
            iVar9 = iVar6;
          }
          iVar6 = 3;
          if (iVar9 != 1) {
            iVar6 = iVar9;
          }
          FUN_00d7af80(iVar9,iVar6);
          if (local_68 == local_40) {
            if ((!bVar3) && (local_68 != (int64_t *)0x0)) {
              plVar10 = local_40;
              if (local_60 == '\0') {
                FUN_00d50b00();
LAB_01dcda21:
                bVar14 = local_60 != '\0';
                goto joined_r0x01dcda25;
              }
              goto LAB_01dcd9b1;
            }
            if (local_60 != '\0') {
LAB_01dcda2b:
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (bVar3) {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b20();
                local_40 = local_68;
                goto LAB_01dcda21;
              }
              bVar14 = false;
              local_40 = local_68;
joined_r0x01dcda25:
              bVar3 = true;
              if (bVar14) goto LAB_01dcda2b;
            }
            else {
              local_40 = local_68;
              bVar3 = true;
            }
          }
          else {
            plVar10 = local_68;
            if ((bVar3) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01dcd9b1:
            local_60 = '\0';
            local_40 = plVar10;
            bVar3 = true;
          }
          cVar5 = FUN_01db9f90();
          if (cVar5 != '\0') {
            FUN_01db9fb0();
            if (local_68 == local_48) {
              if ((!bVar4) && (local_68 != (int64_t *)0x0)) {
                plVar10 = local_48;
                if (local_60 != '\0') goto LAB_01dcdaba;
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              plVar10 = local_68;
              if (local_60 == '\0') {
                if (local_68 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  local_48 = local_68;
                  bVar4 = true;
                  goto LAB_01dcdb37;
                }
              }
              else {
                if ((bVar4) && (local_48 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dcdaba:
                local_60 = '\0';
              }
              local_48 = plVar10;
              bVar4 = true;
            }
LAB_01dcdb37:
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 == (int64_t *)0x0) {
              local_48 = (int64_t *)0x0;
            }
            else {
              (**(code **)(*local_40 + 0x388))();
            }
          }
          local_68 = local_40;
          local_60 = '\0';
          FUN_00d21140();
          plVar10 = local_38;
        }
      }
      lVar11 = lVar11 + 1;
      lVar8 = *(int64_t *)(arg1 + 0x160);
      lVar12 = lVar13;
    } while (lVar11 < *(int *)(lVar8 + 0xc));
  }
  *this_ptr = puVar7;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar4) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar1) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 002d1180
// ============================================================
// Function: FUN_002d1180
// Address: 002d1180
// Size: 1454 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002d1180(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t this_ptr;
  int64_t lVar11;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68 [8];
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0xf0) == 0) {
    uVar9 = 0;
    goto LAB_002d172b;
  }
  uVar3 = FUN_00788ea0();
  local_100 = g_026fcf00;
  uVar9 = (uint64_t)uVar3;
  if (((char)uVar3 == '\0') || (param_2 == '\0')) goto LAB_002d172b;
  local_110 = 0;
  local_108 = '\0';
  if (g_026fcf00 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_01e57260();
  local_88 = 0;
  lVar7 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_88 = '\x01';
  local_90 = lVar7;
  FUN_01f4f940(1,&local_110,0,&local_90);
  lVar11 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != 0) && (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar11 + 0xc) == 1) {
    FUN_00d23310();
    lVar7 = local_70;
    pcVar5 = local_68;
    if (local_68[0] == '\0') {
      pcVar5 = &local_48;
    }
    local_48 = local_68[0];
    *pcVar5 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 == '\0') && (lVar7 != 0)) {
      FUN_00d50b00();
    }
    FUN_00788ba0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    FUN_002d0ef0();
    lVar7 = local_70;
    if (local_68[0] == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
        goto LAB_002d1413;
      }
LAB_002d161a:
      bVar2 = true;
    }
    else {
      if (local_70 == 0) goto LAB_002d161a;
LAB_002d1413:
      local_38 = lVar11;
      local_68[0] = '\0';
      local_70 = 0;
      local_60 = lVar7;
      local_58 = 0xffffffff;
      local_50 = 0;
      iVar10 = 0;
      while( true ) {
        iVar4 = 0;
        if (iVar10 != 0) {
          if (iVar10 < 1) {
            iVar4 = -iVar10;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar10);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar4 = 0;
          }
          local_58 = CONCAT44(iVar4,(int)local_58);
        }
        lVar7 = (int64_t)(int)local_58;
        iVar10 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar10);
        if (*(int *)(local_60 + 0xc) <= iVar10) break;
        lVar7 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8 + lVar7 * 8);
        local_70 = lVar7;
        iVar10 = iVar4;
        if (*(int *)(lVar7 + 0x24) == 2) {
          plVar1 = *(int64_t **)(lVar7 + 0x10);
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar6 = _pthread_getspecific((void*)lVar7);
          plVar8 = plVar1;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            plVar8 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
          }
          FUN_0075c8d0();
          local_78 = 0;
          lVar7 = CONCAT71(uStack_47,local_48);
          if (local_40 == '\0') {
            if (lVar7 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_78 = '\x01';
          local_e8 = '\0';
          local_f0 = (int64_t *)0x0;
          local_e0 = (int64_t *)0x0;
          local_d8 = '\0';
          local_80 = lVar7;
          (**(code **)(*plVar8 + 0x488))(&local_e0,&local_f0,1,0);
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            (**(code **)(*local_e0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            (**(code **)(*local_f0 + 0x10))();
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_002c2560();
          iVar10 = local_58._4_4_;
        }
      }
      FUN_002d7300();
      bVar2 = false;
      lVar11 = local_38;
    }
    FUN_00d403d0();
    lVar7 = g_026fce60;
    if (g_026fce60 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar7;
    local_c8 = '\x01';
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    local_c0 = 0;
    local_b8 = '\0';
    FUN_00d40470(&local_c0,&stack0xffffffffffffff50,1,3);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar2) {
      FUN_00d50b20();
    }
    if (lVar11 == 0) {
      uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
      goto LAB_002d172b;
    }
  }
  uVar9 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
  FUN_00d50b20();
LAB_002d172b:
  return uVar9 & 0xffffffff;
}



// ============================================================
// 01e01e50
// ============================================================
// Function: FUN_01e01e50
// Address: 01e01e50
// Size: 1293 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNModuleView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01e01e50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t arg1;
  void*this_ptr;
  bool bVar6;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = *(int64_t **)(arg1 + 0x140);
  if (plVar1 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
LAB_01e01eb4:
    FUN_01e4b8e0();
LAB_01e02054:
    if (local_48 != (int64_t *)0x0) goto LAB_01e02059;
  }
  else {
    FUN_00d50b00();
    local_48 = (int64_t *)0x0;
    (**(code **)(*plVar1 + 0x380))();
    if (local_40 == (int64_t *)0x0) {
      if (local_38 != '\0') {
        local_48 = (int64_t *)0x0;
      }
LAB_01e01eee:
      if (local_48 != (int64_t *)0x0) goto LAB_01e01ef7;
LAB_01e02157:
      (**(code **)(*plVar1 + 0x390))();
      if (local_40 == local_48) {
LAB_01e021ba:
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
          goto LAB_01e021ba;
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
        goto LAB_01e021df;
      }
      goto LAB_01e01eb4;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e01eee;
    }
    local_48 = local_40;
LAB_01e01ef7:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == local_40) {
      FUN_01e4b8e0();
      goto LAB_01e02054;
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
    if (local_48 != (int64_t *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01e01f7f;
      if (local_48 != (int64_t *)0x0) goto LAB_01e01f90;
LAB_01e02081:
      if ((g_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
        g_026f8e78 = FUN_0006d940();
        g_026f8e60 = "GNScrollView";
        g_026f8e68 = 0x1c0;
        g_026f8e70 = FUN_00074e80;
        g_026f8e80 = 0;
        ram_00000000026f8e88 = 0;
        g_026f8e90 = 0;
        ram_00000000026f8e98 = 0;
        g_026f8ea0 = 0;
        ram_00000000026f8ea8 = 0;
        g_026f8eb0 = 0;
        ram_00000000026f8eb8 = 0;
        g_026f8ec0 = 0;
        ram_00000000026f8ec8 = 0;
        g_026f8ed0 = 0;
        ram_00000000026f8ed8 = 0;
        g_026f8ee0 = 0;
        ram_00000000026f8ee8 = 0;
        g_026f8ef0 = 0;
        ram_00000000026f8ef8 = 0;
        g_026f8f00 = 0;
        ram_00000000026f8f08 = 0;
        g_026f8f10 = 0;
        ram_00000000026f8f18 = 0;
        g_026f8f20 = 0;
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
      if (plVar2 != (int64_t *)0x0) {
        FUN_01d97850();
        FUN_01e42030();
        FUN_01d8b200();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == local_68) {
          FUN_01e4b8e0();
          goto LAB_01e02054;
        }
      }
      goto LAB_01e02157;
    }
LAB_01e01f7f:
    if (g_02802688 == (int64_t *)0x0) goto LAB_01e02081;
LAB_01e01f90:
    (**(code **)(*local_48 + 0x980))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (int64_t *)0x0) {
      FUN_01e4b8e0();
    }
    else {
      (**(code **)(*local_48 + 0x980))();
      FUN_01e42030();
      FUN_01d8b200();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != local_68) goto LAB_01e02081;
      FUN_01e4b8e0();
    }
LAB_01e02059:
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
LAB_01e021df:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d934f0
// ============================================================
// Function: FUN_01d934f0
// Address: 01d934f0
// Size: 1221 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01d934f0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
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
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  FUN_00c939b0();
  iVar4 = FUN_00003070();
  FUN_00c948d0((double)(iVar4 * 0x15180));
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar6 = FUN_00003040();
  uVar6 = FUN_00d91a70(uVar6,1);
  local_a0 = local_40;
  local_98 = 0;
  lVar2 = g_026e13a0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
      lVar2 = g_026e13a0;
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = '\x01';
  g_026e13a0 = lVar2;
  if (lVar2 != 0) {
    local_98 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_48 = '\0';
  local_50 = lVar2;
  FUN_00ca0840(uVar6,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  uVar6 = FUN_00d30ec0();
  local_80 = local_b0;
  local_78 = 0;
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_a8 = '\0';
  }
  local_78 = '\x01';
  local_d8 = '\0';
  local_e0 = 0;
  uVar6 = FUN_00ddfeb0(uVar6,&local_e0);
  local_d0 = lVar3;
  local_c8 = '\0';
  uVar6 = (**(code **)(*local_100 + 0x388))(uVar6,&local_d0);
  local_90 = local_40;
  local_88 = 0;
  lVar2 = g_02784aa8;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
      lVar2 = g_02784aa8;
    }
  }
  else {
    local_38 = '\0';
  }
  local_88 = '\x01';
  g_02784aa8 = lVar2;
  if (lVar2 != 0) {
    local_88 = '\x01';
    uVar6 = FUN_00d50b00();
  }
  local_48 = '\0';
  local_50 = lVar2;
  FUN_00ca0840(uVar6,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x70);
  uVar6 = (**(code **)(*plVar1 + 0x960))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  local_b8 = '\0';
  local_c0 = plVar5;
  FUN_00e0e2a0(uVar6,&local_c0);
  local_70 = local_50;
  local_68 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_68 = '\x01';
  (**(code **)(*plVar1 + 0x958))();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e534b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01dcf7e0
// ============================================================
// Function: FUN_01dcf7e0
// Address: 01dcf7e0
// Size: 994 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


int64_t * FUN_01dcf7e0(int param_1,int param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  lVar5 = *(int64_t *)
           (*(int64_t *)
             (*(int64_t *)
               (*(int64_t *)(*(int64_t *)(arg1 + 0x178) + 0x10) + (int64_t)param_1 * 8) +
             0x10) + (int64_t)param_2 * 8);
  if (lVar5 == 0) {
    bVar3 = false;
    bVar6 = false;
    if (g_028b8a78 == 0) goto LAB_01dcf887;
  }
  else {
    FUN_00d50b00();
    bVar3 = true;
    bVar6 = true;
    if (g_028b8a78 == lVar5) {
LAB_01dcf887:
      bVar3 = bVar6;
      plVar1 = *(int64_t **)(arg1 + 0x1f8);
      if (plVar1 == (int64_t *)0x0) {
        pcVar2 = *(code **)(arg1 + 0x188);
        if (pcVar2 != 0x0) {
          FUN_00d50b00();
          local_68 = 0;
          local_70 = *(int64_t *)(arg1 + 400);
          if (local_70 != 0) {
            FUN_00d50b00();
          }
          local_68 = '\x01';
          (*pcVar2)(param_1,param_2,&local_70);
          if (local_50 == lVar5) {
LAB_01dcfab7:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              bVar6 = lVar5 != 0;
              lVar5 = local_50;
              if (bVar6) {
                FUN_00d50b20();
              }
              goto LAB_01dcfab7;
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            bVar3 = true;
            lVar5 = local_50;
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (arg1 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00d50b00();
        local_b0 = *(int64_t *)
                    (*(int64_t *)(*(int64_t *)(arg1 + 0x160) + 0x10) + (int64_t)param_1 * 8)
        ;
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x20))(param_2,&stack0xffffffffffffff70,&local_b0);
        if (local_50 == lVar5) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          bVar6 = lVar5 != 0;
          lVar5 = local_50;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          bVar3 = true;
          lVar5 = local_50;
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (arg1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar4 = g_028b8a78;
      if (lVar5 == 0) {
        if (g_028b8a78 != 0) {
          FUN_00d50b00();
          lVar5 = lVar4;
LAB_01dcfb9a:
          *(void*)(this_ptr + 1) = 0;
          goto LAB_01dcfba3;
        }
        lVar5 = 0;
      }
      else if (g_028b8a78 == lVar5) {
        if (!bVar3) {
          FUN_00d50b00();
          goto LAB_01dcfb9a;
        }
        bVar3 = true;
      }
      else {
        local_98 = '\0';
        local_a0 = lVar5;
        FUN_00d233f0();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar3) && (lVar5 != 0)) {
    FUN_00d50b00();
  }
LAB_01dcfba3:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 002cdbd0
// ============================================================
// Function: FUN_002cdbd0
// Address: 002cdbd0
// Size: 1108 bytes
// Class: GNScrollView
// String references:
//   "\r\n%@"
//   "%@"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cdbd0(uint64_t param_1,char param_2)

{
  int iVar1;
  uint64_t uVar2;
  void* pVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar8;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  char local_50;
  void* local_40;
  
  uVar2 = local_58;
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) {
    uVar8 = 0;
    goto LAB_002ce03a;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_58 + 0xc);
  uVar8 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),0 < iVar1);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 < 1)) goto LAB_002ce03a;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  FUN_002cd3f0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002cdc93;
    }
  }
  else if (local_58 != 0) {
LAB_002cdc93:
    local_50 = '\0';
    local_58 = 0;
    local_40 = 0xffffffff;
    while( true ) {
      pVar3 = local_40 + 1;
      if (*(int *)(uVar2 + 0xc) <= (int)pVar3) break;
      uVar8 = *(uint64_t *)(*(int64_t *)(uVar2 + 0x10) + 8 + (int64_t)(int)local_40 * 8);
      local_58 = uVar8;
      if (pVar3 == 0) {
        if (*(int64_t *)(uVar8 + 0x18) == 0) {
          plVar7 = *(int64_t **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(int64_t **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (*(int64_t *)(uVar8 + 0x18) == 0) {
          plVar7 = *(int64_t **)(uVar8 + 0x10);
          pvVar5 = _pthread_getspecific(local_40);
          if (pvVar5 != (void *)0x0) {
            plVar7 = *(int64_t **)(uVar8 + 0x10);
            lVar6 = FUN_00e8b990();
            if (lVar6 != 0) {
              plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar7 + 0x478))();
        }
        else {
          FUN_00b88600();
        }
        (**(code **)(*local_68 + 0x470))();
        if (local_78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d94d80();
        if (local_78 != 0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        local_40 = pVar3;
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  lVar6 = g_026fceb8;
  if (g_026fceb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01ca93d0();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002ce03a:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 002ce2a0
// ============================================================
// Function: FUN_002ce2a0
// Address: 002ce2a0
// Size: 756 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002ce2a0(uint64_t param_1,char param_2)

{
  void*puVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t this_ptr;
  uint64_t unaff_R13;
  int64_t *plVar6;
  int64_t local_98;
  char local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
    goto LAB_002ce5a6;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x3f8))();
  iVar5 = *(int *)(local_58 + 0xc);
  plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),0 < iVar5);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar5 < 1)) goto LAB_002ce5a6;
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  FUN_002cd3f0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_002ce360;
    }
  }
  else if (local_58 != 0) {
LAB_002ce360:
    local_50 = '\0';
    local_58 = 0;
    local_48 = lVar2;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    plVar6 = &local_98;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar2 = (int64_t)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)(local_48 + 0xc) <= iVar5) break;
      lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar2 * 8);
      local_58 = lVar2;
      if (*(int64_t *)(lVar2 + 0x18) == 0) {
        plVar4 = *(int64_t **)(lVar2 + 0x10);
        pvVar3 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
        if (pvVar3 != (void *)0x0) {
          plVar4 = *(int64_t **)(lVar2 + 0x10);
          lVar2 = FUN_00e8b990();
          if (lVar2 != 0) {
            plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x478))();
      }
      else {
        FUN_00b88600();
      }
      lVar2 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_98 = lVar2;
      local_90 = '\0';
      FUN_00d21140();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_01ca6970();
  FUN_01ca5d90();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca6970();
  local_78 = g_026fcec0;
  local_80 = '\0';
  local_88 = puVar1;
  if (g_026fcec0 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01cac7f0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002ce5a6:
  return (uint64_t)plVar6 & 0xffffffff;
}



// ============================================================
// 01dccc70
// ============================================================
// Function: FUN_01dccc70
// Address: 01dccc70
// Size: 743 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01dccc70(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  void*this_ptr;
  int64_t *plVar6;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_58 = plVar6;
      local_50 = '\x01';
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dccc9f;
    }
    local_58 = (int64_t *)0x0;
    local_50 = '\x01';
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_58 = local_48;
    local_50 = '\x01';
LAB_01dccc9f:
    if (plVar6 != (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar2 = local_48;
      plVar1 = plVar6;
      if (plVar6 != local_48) {
        plVar6 = plVar2;
        if (local_40 != '\0') {
          local_58 = local_48;
          FUN_00d50b20();
          local_50 = '\x01';
          goto LAB_01dccd54;
        }
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_58 = plVar2;
        FUN_00d50b20();
        local_50 = '\x01';
        plVar1 = local_48;
      }
      if ((local_40 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dccd54:
  if ((g_026f0e00 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01dccd86:
    pplVar5 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01dccd86;
    pplVar5 = &local_58;
  }
  local_31 = *(char *)(pplVar5 + 1);
  if ((local_31 == '\0') || (*pplVar5 == (int64_t *)0x0)) {
    if (*pplVar5 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01dccea9;
    }
  }
  else {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_01d982e0();
  plVar6 = local_48;
  FUN_001f33a0();
  if (plVar6 == (int64_t *)0x0) {
    pplVar5 = &g_02802688;
    *(void*)(this_ptr + 1) = 0;
    plVar6 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01dcce0c;
LAB_01dcce3c:
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      pplVar5 = &g_02802688;
    }
    *(void*)(this_ptr + 1) = 0;
    plVar6 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') goto LAB_01dcce3c;
LAB_01dcce0c:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
joined_r0x01dccea9:
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01cf9ae0
// ============================================================
// Function: FUN_01cf9ae0
// Address: 01cf9ae0
// Size: 664 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cf9ae0(uint64_t param_1)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *this_ptr;
  float fVar7;
  uint64_t in_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t *local_38;
  char local_30;
  
  uStack_40 = in_XMM0_Qb;
  local_48 = (uint8_t  [8])param_1;
  plVar1 = (int64_t *)this_ptr[6];
  if ((g_026f0e00 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar4 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    lVar4 = g_02802688;
    if (cVar5 != '\0') {
      lVar4 = this_ptr[6];
    }
  }
  if (lVar4 == 0) {
    cVar5 = '\0';
    bVar3 = false;
  }
  else {
    FUN_00d50b00();
    cVar5 = FUN_01d951e0();
    if (cVar5 == '\0') {
      bVar3 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x580))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar9._4_12_ = local_48._4_12_;
      auVar9._0_4_ = (float)param_1 - fVar7;
      _local_48 = blendps(auVar9,g_0241fd60,0xe);
      bVar3 = true;
    }
    cVar5 = FUN_01d95200();
    if (cVar5 != '\0') {
      blendps(_local_48,ZEXT416(g_02391078),1);
    }
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x27] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x5c0))();
    local_48 = (uint8_t  [8])(**(code **)(*(int64_t *)this_ptr[0x27] + 0x5c8))();
    uStack_40 = extraout_XMM0_Qb;
    if (bVar3) {
      if (cVar5 == '\0') {
        (**(code **)(*this_ptr + 0x640))();
        uVar8 = (**(code **)(*local_38 + 0x580))();
        if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb_00;
        auVar2._0_8_ = uVar8;
        auVar12._4_12_ = auVar2._4_12_;
        auVar12._0_4_ = (float)uVar8 + 0.0;
        insertps(_local_48,auVar12,0x10);
      }
    }
    else if (cVar5 != '\0') {
      (**(code **)(*this_ptr + 0x640))();
      fVar7 = (float)(**(code **)(*local_38 + 0x578))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_48._4_4_ = (uint32_t)((uint64_t)local_48 >> 0x20);
      uStack_40._4_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      auVar10._4_4_ = local_48._4_4_;
      auVar10._0_4_ = local_48._4_4_;
      auVar10._8_4_ = uStack_40._4_4_;
      auVar10._12_4_ = uStack_40._4_4_;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)local_48._4_4_ + fVar7;
      insertps(auVar11,auVar11,0x1d);
    }
  }
  return;
}



// ============================================================
// 01cfb0d0
// ============================================================
// Function: FUN_01cfb0d0
// Address: 01cfb0d0
// Size: 563 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfb0d0(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  
  lVar1 = *arg1;
  lVar2 = *param_2;
  fVar3 = (*(float *)(lVar2 + 0x10) - *(float *)(lVar1 + 0x10)) * param_1 + *(float *)(lVar1 + 0x10)
  ;
  if ((*(float *)(this_ptr + 0x10) != fVar3) || (NAN(*(float *)(this_ptr + 0x10)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(this_ptr + 0x10) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(this_ptr + 0x10) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(this_ptr + 0x10) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar4._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar4,auVar4,0xb);
    *(uint *)(this_ptr + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 0x10 | *(uint *)(this_ptr + 0xc) & 0xff00ffff;
  }
  fVar3 = (*(float *)(lVar2 + 0x14) - *(float *)(lVar1 + 0x14)) * param_1 + *(float *)(lVar1 + 0x14)
  ;
  if ((*(float *)(this_ptr + 0x14) != fVar3) || (NAN(*(float *)(this_ptr + 0x14)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(this_ptr + 0x14) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(this_ptr + 0x14) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(this_ptr + 0x14) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar5._4_12_ = auVar4._4_12_;
    auVar5._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar5,auVar5,0xb);
    *(uint *)(this_ptr + 0xc) =
         (int)(int64_t)auVar4._0_4_ << 8 | *(uint *)(this_ptr + 0xc) & 0xffff00ff;
  }
  fVar3 = (*(float *)(lVar2 + 0x18) - *(float *)(lVar1 + 0x18)) * param_1 + *(float *)(lVar1 + 0x18)
  ;
  if ((*(float *)(this_ptr + 0x18) != fVar3) || (NAN(*(float *)(this_ptr + 0x18)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(this_ptr + 0x18) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(this_ptr + 0x18) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(this_ptr + 0x18) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar6._4_12_ = auVar4._4_12_;
    auVar6._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(auVar6,auVar6,0xb);
    *(uint *)(this_ptr + 0xc) =
         (uint)(int64_t)auVar4._0_4_ | *(uint *)(this_ptr + 0xc) & 0xffffff00;
  }
  fVar3 = (*(float *)(lVar2 + 0x1c) - *(float *)(lVar1 + 0x1c)) * param_1 + *(float *)(lVar1 + 0x1c)
  ;
  if ((*(float *)(this_ptr + 0x1c) != fVar3) || (NAN(*(float *)(this_ptr + 0x1c)) || NAN(fVar3)))
  {
    if (0.0 <= fVar3) {
      if (fVar3 <= g_02390124) {
        *(float *)(this_ptr + 0x1c) = fVar3;
        fVar3 = fVar3 * g_02394220;
      }
      else {
        *(void*)(this_ptr + 0x1c) = 0x3f800000;
        fVar3 = g_02394220;
      }
    }
    else {
      *(void*)(this_ptr + 0x1c) = 0;
      fVar3 = 0.0;
    }
    auVar4 = ZEXT416(g_023945e0 & (uint)fVar3) | g_023945f0;
    auVar7._4_12_ = auVar4._4_12_;
    auVar7._0_4_ = auVar4._0_4_ + fVar3;
    auVar4 = roundss(ZEXT816(0),auVar7,0xb);
    *(char *)(this_ptr + 0xf) = (char)(int64_t)auVar4._0_4_;
  }
  return;
}



// ============================================================
// 01cfb480
// ============================================================
// Function: FUN_01cfb480
// Address: 01cfb480
// Size: 760 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfb480(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cff350();
  plVar6 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cb4790();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01cfb4f9;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01cfb4f9:
    local_70 = *arg1;
    local_68 = '\0';
    (**(code **)(*plVar3 + 0x3b0))(param_1,&local_70);
    plVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_01cff270();
      if ((plVar6 != plVar3) &&
         (FUN_00d50b00(), bVar7 = plVar6 != (int64_t *)0x0, plVar6 = plVar3, bVar7)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01cff350();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027cd570;
  if (plVar3 == plVar6) {
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    cVar4 = FUN_00d90870();
    if (cVar4 == '\0') {
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar5 = FUN_00d8c7a0();
      if (iVar5 == 7) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        iVar5 = FUN_00d8c7a0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 != 9) goto LAB_01cfb742;
      }
      local_60 = *arg1;
      local_58 = '\0';
      FUN_01cfd750();
      if (local_40 == plVar6) {
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar6 != (int64_t *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      else {
        bVar7 = plVar6 != (int64_t *)0x0;
        plVar6 = local_40;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        lVar1 = *arg1;
        lVar2 = plVar6[5];
        if (lVar2 != lVar1) {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          plVar6[5] = lVar1;
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_01cfb5d7;
      }
      plVar6 = (int64_t *)0x0;
    }
LAB_01cfb742:
    FUN_01cfe8d0();
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
LAB_01cfb5d7:
    *this_ptr = plVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  return;
}



// ============================================================
// 01d942e0
// ============================================================
// Function: FUN_01d942e0
// Address: 01d942e0
// Size: 2739 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "_editHasVerticalScroller"
//   "_editHasHorizontalScroller"
//   "_editBorderStyle"
//   "_editKeepsSpaceForWindowResizeButton"
//   "setHasHorizontalScroller"
//   "setHasVerticalScroller"
//   "hasVerticalScroller"
//   "hasHorizontalScroller"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01d942e0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b8738 = "_editHasVerticalScroller";
      g_028b8740 = &g_026f8e60;
      g_028b8748 = 0;
      g_028b8750 = &g_027f1768;
      g_028b8758 = FUN_01da1550;
      g_028b8760 = FUN_01d94dc0;
      g_028b8768 = 0;
      ram_00000000028b8770 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8780 = "_editHasHorizontalScroller";
      g_028b8788 = &g_026f8e60;
      g_028b8790 = 0;
      g_028b8798 = &g_027f1768;
      g_028b87a0 = FUN_01da1550;
      g_028b87a8 = FUN_01d94e00;
      g_028b87b0 = 0;
      ram_00000000028b87b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b87c8 = "_editBorderStyle";
      g_028b87d0 = &g_026f8e60;
      g_028b87d8 = 0;
      g_028b87e0 = &g_027f176b;
      g_028b87e8 = FUN_01da1570;
      g_028b87f0 = FUN_01d94e40;
      g_028b87f8 = 0;
      ram_00000000028b8800 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8810 = "_editKeepsSpaceForWindowResizeButton";
      g_028b8818 = &g_026f8e60;
      g_028b8820 = 0;
      g_028b8828 = &g_027f1768;
      g_028b8830 = FUN_01da1550;
      g_028b8838 = FUN_01d94e90;
      g_028b8840 = 0;
      ram_00000000028b8848 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8858 = "setHasHorizontalScroller";
      g_028b8860 = &g_026f8e60;
      g_028b8868 = 0;
      g_028b8870 = &g_027f1768;
      g_028b8878 = FUN_01da1550;
      g_028b8880 = FUN_01d94ee0;
      g_028b8888 = 0;
      ram_00000000028b8890 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b88a0 = "setHasVerticalScroller";
      g_028b88a8 = &g_026f8e60;
      g_028b88b0 = 0;
      g_028b88b8 = &g_027f1768;
      g_028b88c0 = FUN_01da1550;
      g_028b88c8 = FUN_01d95060;
      g_028b88d0 = 0;
      ram_00000000028b88d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b88e8 = "hasVerticalScroller";
      g_028b88f0 = &g_026f8e60;
      g_028b88f8 = 0;
      g_028b8900 = &g_027f176e;
      g_028b8908 = FUN_01da1590;
      g_028b8910 = FUN_01d951e0;
      g_028b8918 = 0;
      ram_00000000028b8920 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8930 = "hasHorizontalScroller";
      g_028b8938 = &g_026f8e60;
      g_028b8940 = 0;
      g_028b8948 = &g_027f176e;
      g_028b8950 = FUN_01da1590;
      g_028b8958 = FUN_01d95200;
      g_028b8960 = 0;
      ram_00000000028b8968 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 002cd6f0
// ============================================================
// Function: FUN_002cd6f0
// Address: 002cd6f0
// Size: 792 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


uint64_t FUN_002cd6f0(uint64_t param_1,char param_2)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void*puVar5;
  int64_t this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t local_88;
  char local_80;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t **)(this_ptr + 0xf8) == (int64_t *)0x0) {
    uVar6 = 0;
    goto LAB_002cda08;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xf8) + 0x3f8))();
  iVar1 = *(int *)(local_88 + 0xc);
  uVar6 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),iVar1 != 0);
  if (local_80 != '\0') {
    FUN_00d50b20();
  }
  if ((param_2 == '\0') || (iVar1 == 0)) goto LAB_002cda08;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_002cd3f0();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
      goto LAB_002cd7af;
    }
  }
  else if (local_88 != 0) {
LAB_002cd7af:
    if (0 < *(int *)(local_88 + 0xc)) {
      uVar6 = 0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + uVar6 * 8);
        if (*(int64_t *)(lVar4 + 0x10) == 0) {
          if (*(int64_t *)(lVar4 + 0x18) == 0) {
            pvVar3 = _pthread_getspecific((void*)puVar5);
            plVar7 = (int64_t *)0x0;
            if (pvVar3 != (void *)0x0) {
              plVar7 = *(int64_t **)(lVar4 + 0x10);
              lVar4 = FUN_00e8b990();
              if (lVar4 != 0) {
                plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar7 + 0x478))();
          }
          else {
            FUN_00b88600();
          }
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_00d50b00();
          FUN_00d50b20();
          lVar4 = *(int64_t *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            FUN_00d50b00();
          }
          pvVar3 = _pthread_getspecific((void*)puVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123abe0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < *(int *)(local_88 + 0xc));
    }
    FUN_002d7300();
    FUN_00d50b20();
  }
  FUN_00ceb350();
  uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_002cda08:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01db5400
// ============================================================
// Function: FUN_01db5400
// Address: 01db5400
// Size: 1084 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01db5400(void)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int64_t *plVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  int64_t local_88;
  char local_80;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar6 + 0x18))();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  lVar8 = g_027f22c8;
  if (g_027f22c8 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  pcVar5 = g_02575d98;
  lVar8 = arg1[0x28];
  if (*(int *)(lVar8 + 0xc) < 1) {
    bVar2 = false;
    lVar11 = 0;
    bVar3 = false;
    puVar12 = (void*)0x0;
  }
  else {
    lVar10 = 0;
    puVar12 = (void*)0x0;
    bVar3 = false;
    lVar11 = 0;
    bVar2 = false;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar10 * 8);
      if (lVar11 == lVar8) {
        if ((!bVar2) && (lVar11 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (lVar11 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          lVar11 = lVar8;
        }
        else {
          bVar2 = true;
          lVar11 = lVar8;
        }
      }
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_02575d80;
      (*pcVar5)();
      if (puVar9 == puVar12) {
        if (bVar3) {
          FUN_00d50b20();
LAB_01db562e:
          cVar1 = *(char *)(lVar11 + 0xd);
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          bVar3 = true;
        }
      }
      else {
        bVar4 = true;
        if (bVar3) {
          if (puVar12 != (void*)0x0) {
            FUN_00d50b20();
            puVar12 = puVar9;
            bVar3 = bVar4;
            goto LAB_01db562e;
          }
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
        else {
          cVar1 = *(char *)(lVar11 + 0xd);
          puVar12 = puVar9;
          bVar3 = bVar4;
        }
      }
      if (cVar1 == '\0') {
        (**(code **)(**(int64_t **)(lVar11 + 0x20) + 0x4d8))();
      }
      FUN_00d46080();
      FUN_00d21140();
      lVar10 = lVar10 + 1;
      lVar8 = arg1[0x28];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  lVar8 = g_027f22d0;
  if (g_027f22d0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*arg1 + 0x88))();
  lVar10 = g_027f22d0;
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
    lVar10 = g_027f22d0;
  }
  g_027f22d0 = lVar10;
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (puVar12 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01cfd290
// ============================================================
// Function: FUN_01cfd290
// Address: 01cfd290
// Size: 805 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_01cfd290(float param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  void*puVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  char local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  plVar6 = (int64_t *)*arg1;
  FUN_001b9d20();
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01cfd2e8;
  }
  arg1 = &g_02802688;
LAB_01cfd2e8:
  lVar1 = *arg1;
  lVar3 = arg1[1];
  if (((char)lVar3 == '\0') || (lVar1 == 0)) {
    if (lVar1 == 0) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_026792c0;
      puVar7[5] = 0;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      *(void*)((int64_t)puVar7 + 0x19) = 0;
      FUN_00d500e0();
      local_a8 = *param_2;
      local_a0 = 0;
      FUN_01cfb0d0(param_1,&local_a8);
      *this_ptr = puVar7;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_98 = lVar1;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar6 + 0x18))();
  local_88 = '\0';
  local_90 = lVar1;
  FUN_01f7bcc0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  for (iVar8 = 0; iVar5 = FUN_01f7c6f0(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01f7c770(extraout_XMM0_Da,iVar8);
    lVar1 = local_80;
    if ((((local_78 == '\0') && (local_80 != 0)) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = *param_2;
    local_44 = *(float *)(lVar1 + 0x10);
    local_48 = *(float *)(lVar1 + 0x14);
    local_60 = *(float *)(lVar2 + 0x10);
    local_5c = *(float *)(lVar2 + 0x14);
    local_4c = *(float *)(lVar1 + 0x18);
    local_58 = *(float *)(lVar2 + 0x18);
    local_50 = *(float *)(lVar1 + 0x1c);
    local_54 = *(float *)(lVar2 + 0x1c);
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar7 = &g_026792c0;
    puVar7[5] = 0;
    *(void*)((int64_t)puVar7 + 0xc) = 0;
    *(void*)((int64_t)puVar7 + 0x14) = 0;
    *(void*)((int64_t)puVar7 + 0x19) = 0;
    FUN_00d500e0();
    uVar9 = FUN_01cfce50((local_60 - local_44) * param_1 + local_44,
                         (local_5c - local_48) * param_1 + local_48,
                         (local_58 - local_4c) * param_1 + local_4c,
                         (local_54 - local_50) * param_1 + local_50);
    local_68 = '\x01';
    local_70 = puVar7;
    FUN_01f7c700(uVar9,iVar8);
    if ((local_68 != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  if ((char)lVar3 != '\0') {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01cfb920
// ============================================================
// Function: FUN_01cfb920
// Address: 01cfb920
// Size: 570 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfb920(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b78f8;
  if ((g_028b78f8 == (void*)0x0) || (g_028b7901 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef200;
    if (g_028b78f8 == (void*)0x0) {
      if (g_027ef200 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b78f8 != local_38) {
        puVar4 = g_028b78f8;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b78f8;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b78f8 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7900 == '\0')) {
        g_028b7900 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b78f8 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if (g_028b78f8 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b78f8 != (void*)0x0;
          g_028b78f8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7900 == '\0') {
          g_028b7900 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        puVar4 = g_028b78f8;
        if ((*(float *)(g_028b78f8 + 2) != g_02390124) ||
           (NAN(*(float *)(g_028b78f8 + 2)) || NAN(g_02390124))) {
          *(void*)(g_028b78f8 + 2) = 0x3f800000;
          *(void*)((int64_t)puVar4 + 0xe) = 0xff;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != g_02390124) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)) || NAN(g_02390124))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0x3f800000;
          *(void*)((int64_t)puVar4 + 0xd) = 0xff;
        }
        if ((*(float *)(puVar4 + 3) != g_02390124) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(g_02390124))) {
          *(void*)(puVar4 + 3) = 0x3f800000;
          *(void*)((int64_t)puVar4 + 0xc) = 0xff;
        }
      }
      g_028b7901 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7901 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b78f8;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfbb3c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfbb3c:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01cfc0e0
// ============================================================
// Function: FUN_01cfc0e0
// Address: 01cfc0e0
// Size: 572 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfc0e0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b7918;
  if ((g_028b7918 == (void*)0x0) || (g_028b7921 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef210;
    if (g_028b7918 == (void*)0x0) {
      if (g_027ef210 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b7918 != local_38) {
        puVar4 = g_028b7918;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b7918;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b7918 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7920 == '\0')) {
        g_028b7920 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b7918 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != g_0241febc) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(g_0241febc))) {
          *(void*)(puVar4 + 2) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xe) = 0xaa;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != g_0241febc) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)) || NAN(g_0241febc))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xd) = 0xaa;
        }
        if ((*(float *)(puVar4 + 3) != g_0241febc) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(g_0241febc))) {
          *(void*)(puVar4 + 3) = 0x3f2aaa3b;
          *(void*)((int64_t)puVar4 + 0xc) = 0xaa;
        }
        if (g_028b7918 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b7918 != (void*)0x0;
          g_028b7918 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7920 == '\0') {
          g_028b7920 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7921 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b7918;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfc2fe;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc2fe:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01cfc3c0
// ============================================================
// Function: FUN_01cfc3c0
// Address: 01cfc3c0
// Size: 572 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfc3c0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b7928;
  if ((g_028b7928 == (void*)0x0) || (g_028b7931 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef218;
    if (g_028b7928 == (void*)0x0) {
      if (g_027ef218 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b7928 != local_38) {
        puVar4 = g_028b7928;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b7928;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b7928 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7930 == '\0')) {
        g_028b7930 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b7928 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != g_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 2)) || NAN(g_0241b3d0))) {
          *(void*)(puVar4 + 2) = 0x3eaaaa9f;
          *(void*)((int64_t)puVar4 + 0xe) = 0x55;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != g_0241b3d0) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)) || NAN(g_0241b3d0))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0x3eaaaa9f;
          *(void*)((int64_t)puVar4 + 0xd) = 0x55;
        }
        if ((*(float *)(puVar4 + 3) != g_0241b3d0) ||
           (NAN(*(float *)(puVar4 + 3)) || NAN(g_0241b3d0))) {
          *(void*)(puVar4 + 3) = 0x3eaaaa9f;
          *(void*)((int64_t)puVar4 + 0xc) = 0x55;
        }
        if (g_028b7928 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b7928 != (void*)0x0;
          g_028b7928 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7930 == '\0') {
          g_028b7930 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7931 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b7928;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfc5de;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfc5de:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01cf9e30
// ============================================================
// Function: FUN_01cf9e30
// Address: 01cf9e30
// Size: 518 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cf9e30(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  float local_48;
  float fStack_44;
  uint8_t local_28 [8];
  uint64_t uStack_20;
  
  fVar10 = (float)((uint64_t)param_2 >> 0x20);
  fVar8 = (float)param_2;
  if ((*(int64_t *)(this_ptr + 0x138) == 0) || (cVar4 = FUN_01e3f2b0(), cVar4 == '\0')) {
    return;
  }
  uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x4d8))();
  fVar9 = fVar8;
  fVar11 = fVar10;
  local_28 = (uint8_t  [8])(**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x5c8))();
  uStack_20 = extraout_XMM0_Qb;
  plVar1 = *(int64_t **)(this_ptr + 0x30);
  if ((g_026f0e00 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  lVar3 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    lVar3 = g_02802688;
    if (cVar4 != '\0') {
      lVar3 = *(int64_t *)(this_ptr + 0x30);
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
    cVar4 = FUN_01d951e0();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar7._4_4_ = fVar11;
      auVar7._0_4_ = fVar9;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._12_4_ = in_XMM1_Dd;
      _local_28 = blendps(_local_28,auVar7,2);
    }
    cVar4 = FUN_01d95200();
    if (cVar4 == '\0') {
      FUN_01e3f820();
      auVar2._4_4_ = fVar11;
      auVar2._0_4_ = fVar9;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar7 = blendps(_local_28,auVar2,0xd);
      local_28 = auVar7._0_8_;
    }
    FUN_00d50b20();
  }
  local_48 = (float)uVar6;
  fStack_44 = (float)((uint64_t)uVar6 >> 0x20);
  if ((!NAN(local_48)) && (!NAN(fStack_44))) {
    if (((float)local_28._0_4_ == fVar8) &&
       ((!NAN((float)local_28._0_4_) && !NAN(fVar8) && (fVar10 == (float)local_28._4_4_)))) {
      return;
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x5d8))();
  FUN_01cf5a00();
  return;
}



// ============================================================
// 01cfbc00
// ============================================================
// Function: FUN_01cfbc00
// Address: 01cfbc00
// Size: 566 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01cfbc00(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  void*local_38;
  char local_30;
  
  puVar4 = g_028b7908;
  if ((g_028b7908 == (void*)0x0) || (g_028b7911 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027ef208;
    if (g_028b7908 == (void*)0x0) {
      if (g_027ef208 != 0) {
        FUN_00d50b00();
      }
      FUN_01cfb480();
      if (g_028b7908 != local_38) {
        puVar4 = g_028b7908;
        if (local_30 == '\0') {
          if (local_38 != (void*)0x0) {
            FUN_00d50b00();
            puVar4 = g_028b7908;
          }
        }
        else {
          local_30 = '\0';
        }
        g_028b7908 = local_38;
        if (puVar4 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != (void*)0x0) && (g_028b7910 == '\0')) {
        g_028b7910 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (g_028b7908 == (void*)0x0) {
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_026792c0;
        puVar4[5] = 0;
        *(void*)((int64_t)puVar4 + 0xc) = 0;
        *(void*)((int64_t)puVar4 + 0x14) = 0;
        *(void*)((int64_t)puVar4 + 0x19) = 0;
        FUN_00d500e0();
        if ((*(float *)(puVar4 + 2) != 0.0) || (NAN(*(float *)(puVar4 + 2)))) {
          *(void*)(puVar4 + 2) = 0;
          *(void*)((int64_t)puVar4 + 0xe) = 0;
        }
        if ((*(float *)((int64_t)puVar4 + 0x14) != 0.0) ||
           (NAN(*(float *)((int64_t)puVar4 + 0x14)))) {
          *(void*)((int64_t)puVar4 + 0x14) = 0;
          *(void*)((int64_t)puVar4 + 0xd) = 0;
        }
        if ((*(float *)(puVar4 + 3) != 0.0) || (NAN(*(float *)(puVar4 + 3)))) {
          *(void*)(puVar4 + 3) = 0;
          *(void*)((int64_t)puVar4 + 0xc) = 0;
        }
        if (g_028b7908 == puVar4) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          bVar2 = true;
          bVar1 = true;
          bVar5 = g_028b7908 != (void*)0x0;
          g_028b7908 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (g_028b7910 == '\0') {
          g_028b7910 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7911 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028b7908;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_01cfbe18;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cfbe18:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 002cc690
// ============================================================
// Function: FUN_002cc690
// Address: 002cc690
// Size: 847 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNClipView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002cc690(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  int iVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t this_ptr;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  int64_t *local_40;
  char local_38;
  
  fVar14 = (float)((uint64_t)param_2 >> 0x20);
  uVar9 = (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x528))();
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar1 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_002cc701:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_002cc701;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar8 = &local_40;
  FUN_01e40eb0();
  plVar2 = local_40;
  // [STATIC_INIT: property registration]
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') goto LAB_002cc785;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_002cc785:
  plVar2 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x4d8))();
  fVar11 = fVar14;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar12 = fVar11;
  (**(code **)(*plVar2 + 0x4d8))();
  fVar13 = fVar12;
  (**(code **)(*plVar1 + 0x4d8))();
  iVar6 = FUN_01dcea80();
  uVar10 = FUN_01dce510();
  iVar7 = 1;
  if (iVar6 != 0) {
    iVar7 = iVar6;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  local_58 = (float)uVar10;
  uStack_54 = (uint32_t)((uint64_t)uVar10 >> 0x20);
  uStack_50 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_4c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  fVar14 = local_58 * (float)iVar7 + (fVar12 - fVar13) + (fVar14 - fVar11);
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar9;
  if ((float)((uint64_t)uVar9 >> 0x20) < fVar14) {
    auVar3._4_4_ = uStack_54;
    auVar3._0_4_ = fVar14;
    auVar3._8_4_ = uStack_50;
    auVar3._12_4_ = uStack_4c;
    insertps(auVar4,auVar3,0x10);
  }
  return;
}



// ============================================================
// 01db3c20
// ============================================================
// Function: FUN_01db3c20
// Address: 01db3c20
// Size: 968 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db3c20(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t lVar3;
  float fVar4;
  int64_t local_80;
  char local_78;
  float local_6c;
  float local_58;
  float local_44;
  int64_t local_40;
  char local_38;
  
  fVar4 = (float)((uint64_t)param_2 >> 0x20);
  local_58 = (float)param_2;
  FUN_01db3950();
  FUN_01db2340();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3fd4;
    FUN_00d50b00();
    iVar1 = *(int *)(local_40 + 0xc);
  }
  else {
    if (local_40 == 0) goto LAB_01db3fd4;
    iVar1 = *(int *)(local_40 + 0xc);
  }
  if (iVar1 == 0) goto LAB_01db3fd4;
  FUN_01e3f820();
  if (*(char *)(this_ptr + 0x138) == '\0') {
    local_58 = fVar4;
  }
  local_6c = (float)FUN_01db1e30();
  FUN_01db2340();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_01db3d24;
    FUN_00d50b00();
LAB_01db3cf1:
    local_44 = 0.0;
    if (*(int *)(local_40 + 0xc) != 0) {
      local_44 = (float)(*(int *)(local_40 + 0xc) + -1) * g_023b36b0;
    }
    FUN_00d50b20();
  }
  else {
    if (local_40 != 0) goto LAB_01db3cf1;
LAB_01db3d24:
    local_44 = 0.0;
  }
  local_58 = (local_58 - local_6c) - local_44;
  if ((local_58 != 0.0) || (NAN(local_58))) {
    FUN_01db1f60();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      local_58 = (float)FUN_01db2dc0(local_58);
    }
    if ((local_58 != 0.0) || (NAN(local_58))) {
      FUN_01db24f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        lVar3 = 0;
      }
      else {
        do {
          local_58 = (float)FUN_01db2dc0(local_58);
          if ((((local_58 != g_0239424c) || (NAN(local_58) || NAN(g_0239424c))) &&
              (FUN_01db24f0(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        } while (((local_58 != g_0239424c) || (NAN(local_58) || NAN(g_0239424c))) &&
                (local_40 != 0));
      }
    }
  }
  FUN_01db2b50();
  FUN_01db28c0();
  FUN_00d403d0();
  lVar2 = g_027f22b8;
  if (g_027f22b8 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff98,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_01db3fd4:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01db5150
// ============================================================
// Function: FUN_01db5150
// Address: 01db5150
// Size: 533 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01db5150(uint64_t param_1,uint64_t param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t local_68;
  char local_60;
  uint64_t local_40;
  float local_38;
  float local_34;
  
  fVar7 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_01db2340();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_01db2340();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_01db51e8;
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
LAB_01db51e8:
    local_34 = 0.0;
    goto joined_r0x01db51e1;
  }
  local_34 = 0.0;
  if (*(int *)(local_68 + 0xc) != 0) {
    local_34 = (float)(*(int *)(local_68 + 0xc) + -1) * g_023b36b0;
  }
  FUN_00d50b20();
joined_r0x01db51e1:
  if (local_68 != 0) {
    if (*(int *)(local_68 + 0xc) != 0) {
      if (*(int *)(local_68 + 0xc) < 1) {
        fVar8 = 0.0;
      }
      else {
        local_38 = 0.0;
        lVar4 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x10) + lVar4 * 8);
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4e8))(*(void*)(lVar2 + 0x10));
          FUN_00d50b20();
          plVar3 = *(int64_t **)(lVar2 + 0x20);
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar3 + 0x4d8))();
          FUN_00d50b20();
          fVar8 = fVar6;
          fVar5 = fVar7;
          if ((char)this_ptr[0x27] != '\0') {
            fVar8 = fVar7;
            fVar5 = fVar6;
          }
          fVar7 = 0.0;
          fVar6 = local_34 + fVar5;
          if (fVar8 <= local_38) {
            fVar8 = local_38;
          }
          lVar4 = lVar4 + 1;
          local_38 = fVar8;
          local_34 = fVar6;
        } while ((int)lVar4 < *(int *)(local_68 + 0xc));
      }
      FUN_01db88f0();
      (**(code **)(*this_ptr + 0x4d8))();
      local_40 = CONCAT44(fVar7,fVar6);
      bVar1 = *(byte *)(this_ptr + 0x27);
      *(float *)((int64_t)&local_40 + (uint64_t)((uint64_t)bVar1 == 0) * 4) = local_34;
      *(float *)((uint64_t)&local_40 | (uint64_t)bVar1 << 2) = fVar8;
      (**(code **)(*this_ptr + 0x4e8))(local_40);
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dcc4e0
// ============================================================
// Function: FUN_01dcc4e0
// Address: 01dcc4e0
// Size: 706 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dcc4e0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  char unaff_SIL;
  int64_t *local_38;
  char local_30;
  int64_t *local_28;
  
  FUN_01dccc70();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != (int64_t *)0x0) == (bool)unaff_SIL) {
    return;
  }
  FUN_01e40eb0();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01dcc53f;
    }
    local_28 = (int64_t *)0x0;
  }
  else {
LAB_01dcc53f:
    local_28 = local_38;
    if (local_38 != (int64_t *)0x0) {
      FUN_01e40eb0();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01dcc5d6;
    }
  }
  local_38 = (int64_t *)0x0;
LAB_01dcc5d6:
  if ((g_026f0e00 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  plVar1 = g_02802688;
  if (local_38 != (int64_t *)0x0) {
    (**(code **)(*local_38 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar1 = g_02802688;
    if (cVar2 != '\0') {
      plVar1 = local_28;
    }
  }
  if (plVar1 != (int64_t *)0x0) {
    if (unaff_SIL == '\0') {
      FUN_01d97f00();
    }
    else {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_0006daf0();
      *(void*)(puVar4 + 0x27) = 0;
      *puVar4 = &g_02697bb0;
      puVar4[2] = &g_026984e8;
      puVar4[0x28] = 0;
      *(void*)(puVar4 + 0x29) = 0;
      (*g_02697bc8)();
      FUN_01d97f00();
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_28 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dd0960
// ============================================================
// Function: FUN_01dd0960
// Address: 01dd0960
// Size: 894 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dd0960(uint32_t param_1,uint32_t param_2,int param_3)

{
  int64_t *plVar1;
  int in_ECX;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  if (((this_ptr[0x40] != 0) && ((int)this_ptr[0x41] == param_3)) &&
     (*(int *)((int64_t)this_ptr + 0x20c) == in_ECX)) {
    return;
  }
  if (((this_ptr[0x28] != 0) && ((int)this_ptr[0x27] == param_3)) &&
     (*(int *)((int64_t)this_ptr + 0x13c) == in_ECX)) {
    return;
  }
  (**(code **)(*this_ptr + 0x938))(in_ECX,param_3);
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dd0aae;
    FUN_00d50b00();
  }
  else if (local_48 == 0) goto LAB_01dd0aae;
  (**(code **)(*this_ptr + 0x9a0))(param_1,param_2);
LAB_01dd0aae:
  (**(code **)(*(int64_t *)*in_RDX + 0x4d0))(param_1,param_2);
  FUN_01d48370();
  (**(code **)(*this_ptr + 0x940))(in_ECX,param_3);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_01d488d0();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))(param_1,param_2);
  plVar1 = (int64_t *)this_ptr[0x3e];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_90 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + (int64_t)in_ECX * 8);
    if (local_90 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = *in_RDX;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x30))(&local_90,param_3,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_70 = *arg1;
  local_68 = '\0';
  (**(code **)(*(int64_t *)*in_RDX + 0x610))(0,param_2);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dce080
// ============================================================
// Function: FUN_01dce080
// Address: 01dce080
// Size: 676 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_01dce080(uint64_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int unaff_ESI;
  int64_t *this_ptr;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int64_t local_78;
  char local_70;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  
  lVar2 = (int64_t)unaff_ESI;
  lVar1 = *(int64_t *)(*(int64_t *)(this_ptr[0x2c] + 0x10) + lVar2 * 8);
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    FUN_00d50b00();
    local_58 = lVar1;
  }
  FUN_00d23620();
  local_40 = local_58;
  FUN_00d23370(param_1,param_2);
  if (*(int *)(this_ptr[0x2f] + 0xc) == 0) {
    bVar3 = false;
    local_50 = 0;
  }
  else {
    local_50 = *(int64_t *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + lVar2 * 8);
    bVar3 = local_50 == 0;
    if (bVar3) {
      local_50 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar3 = !bVar3;
    FUN_00d23620();
    local_40 = local_50;
    FUN_00d23370(param_1,param_2);
  }
  if (((char)this_ptr[0x4f] == '\0') || (*(int *)(this_ptr[0x51] + 0xc) == 0)) {
    bVar4 = false;
    local_48 = 0;
  }
  else {
    local_48 = *(int64_t *)(*(int64_t *)(this_ptr[0x51] + 0x10) + lVar2 * 8);
    bVar4 = local_48 == 0;
    if (bVar4) {
      local_48 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar4 = !bVar4;
    FUN_00d23620();
    local_40 = local_48;
    FUN_00d23370(param_1,param_2);
  }
  (**(code **)(*this_ptr + 0xa20))(param_1,0);
  (**(code **)(*this_ptr + 0x620))();
  FUN_01e42030();
  if (local_40 == 0) {
    bVar5 = false;
  }
  else {
    FUN_01e4c160();
    bVar5 = local_78 != 0;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar5) {
    FUN_01e42030();
    FUN_01d86b20();
  }
  if ((bVar4) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 001e9800
// ============================================================
// Function: FUN_001e9800
// Address: 001e9800
// Size: 1513 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_001e9800(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0268e548;
  this_ptr[2] = &g_0268eea0;
  FUN_001e9f60();
  FUN_001ea250();
  FUN_001ea540();
  FUN_001ea830();
  FUN_001eab20();
  FUN_001eae10();
  FUN_001eb100();
  FUN_001eb3f0();
  FUN_001eb6e0();
  FUN_001eb9c0();
  FUN_001ebca0();
  FUN_001ebf80();
  *(void*)(this_ptr + 0x33) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8f1b == '\0') {
    FUN_001ec260();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8f1b == '\0') {
    FUN_001ec4b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8f1b == '\0') {
    FUN_001ec620();
    FUN_00e87980();
  }
  FUN_001ec790();
  *(void*)(this_ptr + 0x35) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8f1b == '\0') {
    FUN_001eca10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ac) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f8f1b == '\0') {
    FUN_001ecb80();
    FUN_00e87980();
  }
  FUN_001ecdc0();
  FUN_001ed0b0();
  return;
}



// ============================================================
// 001ecb80
// ============================================================
// Function: FUN_001ecb80
// Address: 001ecb80
// Size: 532 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNRulerHeaderLocation"
//   "_rulerHeaderLocation"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_001ecb80(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026f10f0 = "_rulerHeaderLocation";
      g_026f10f8 = &g_026f8e60;
      g_026f1100 = 0;
      g_026f1108 = 0x6500;
      g_026f1110 = "GNRulerHeaderLocation";
      g_026f1118 = &g_026f1178;
      g_026f1120 = 0;
      ram_00000000026f1128 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026f10f0;
}



// ============================================================
// 001ec260
// ============================================================
// Function: FUN_001ec260
// Address: 001ec260
// Size: 544 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "GNBorderStyle"
//   "_borderStyle"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void* FUN_001ec260(void)

{
  int iVar1;
  uint32_t extraout_XMM0_Da;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027e59a0 = "_borderStyle";
      g_027e59a8 = &g_026f8e60;
      g_027e59b0 = 0;
      g_027e59b8 = 0x6500;
      g_027e59c0 = "GNBorderStyle";
      g_027e59c8 = &g_026daa28;
      g_027e59d0 = 0;
      ram_00000000027e59d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027e59a0;
}

