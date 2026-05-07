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

