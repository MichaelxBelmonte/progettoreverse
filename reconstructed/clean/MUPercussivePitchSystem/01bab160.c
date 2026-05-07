// Function: FUN_01bab160
// Address: 01bab160
// Size: 5703 bytes
// Class: MUPercussivePitchSystem
// String references:
//   "MUPercussivePitchSystem"

void FUN_01bab160(uint64_t param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t lVar6;
  uint64_t uVar7;
  undefined7 uVar8;
  void* pVar9;
  int64_t **pplVar10;
  int64_t *plVar11;
  int iVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  int64_t *plVar14;
  uint uVar15;
  uint64_t uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int64_t *local_res8;
  uint32_t local_res10;
  int64_t *local_res18;
  int64_t *local_res20;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  int64_t *local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  int64_t *local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  float local_1c4;
  int64_t *local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  int64_t *local_e8;
  int local_dc;
  int64_t *local_d8;
  char local_d0;
  float local_c8;
  float local_c4;
  uint64_t local_c0;
  int64_t *local_b8;
  char local_b0 [8];
  int64_t *local_a8;
  uint64_t local_a0;
  int local_98;
  int local_8c;
  int64_t *local_88;
  uint64_t local_80;
  float local_78;
  float local_74;
  int64_t *local_70;
  uint local_64;
  int64_t *local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  local_248 = *this_ptr;
  local_240 = 0;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_01ba9e60(param_1,&local_248);
  plVar11 = local_60;
  if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_70 = plVar11;
  if ((*(int *)(*this_ptr + 0xc) == 0) || (plVar11 == (int64_t *)0x0)) {
    if ((int64_t *)*local_f0 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_f0 + 0x998))();
      plVar1 = (int64_t *)*local_f0;
      FUN_00e9aaa0();
      local_1a8 = local_60;
      local_1a0 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1a0 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((int64_t *)*local_e8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_e8 + 0x998))();
      plVar1 = (int64_t *)*local_e8;
      FUN_00e9aaa0();
      local_198 = local_60;
      local_190 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_190 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((int64_t *)*local_res8 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*local_res8 + 0x998))();
      plVar1 = (int64_t *)*local_res8;
      FUN_00e9aaa0();
      local_1c0 = local_60;
      local_1b8 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_1b8 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_01bac7ab;
  }
  local_230 = 0;
  local_238 = *this_ptr;
  FUN_01baad70();
  if ((int64_t *)*local_f0 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*local_f0 + 0x998))();
  }
  if ((int64_t *)*local_e8 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*local_e8 + 0x998))();
  }
  if (((int64_t *)*local_res8 != (int64_t *)0x0) && (*local_res18 != 0)) {
    (**(code **)(*(int64_t *)*local_res8 + 0x998))();
    plVar11 = (int64_t *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
    pplVar10 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar10 = &local_d8;
    }
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_38 = plVar11;
    FUN_00d23310();
    plVar11 = local_60;
    local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_58[0]);
    pplVar10 = &local_b8;
    pplVar4 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)pplVar10);
    plVar13 = plVar11;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar13 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar13 + 0x390))();
    fVar18 = (float)_exp2f(fVar18 * g_023941f4);
    (**(code **)(*local_38 + 0x3c8))(fVar18 * g_023941f8);
    if (((char)local_b8 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*local_res18;
    FUN_00c9fe20();
    plVar1 = local_60;
    pplVar10 = &local_d8;
    if (local_58[0] != '\0') {
      pplVar10 = (int64_t **)local_58;
    }
    local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_58[0]);
    *(char *)pplVar10 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    plVar13 = local_60;
    pplVar10 = &local_b8;
    pplVar4 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar4 = pplVar10;
    }
    local_b8 = (int64_t *)CONCAT71(local_b8._1_7_,local_58[0]);
    *(char *)pplVar4 = '\0';
    if ((local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific((void*)pplVar10);
    plVar14 = plVar13;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar14 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    fVar18 = (float)(**(code **)(*plVar14 + 0x398))();
    fVar18 = (float)_exp2f(fVar18 * g_023941f4);
    (**(code **)(*plVar11 + 0x3d8))(fVar18 * g_023941f8);
    if (((char)local_b8 != '\0') && (plVar13 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_d8 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar11 = local_70;
  if (*this_ptr == 0) {
    local_c0 = 0;
    local_c8 = g_02391074;
    local_c4 = g_02391074;
    local_78 = g_02391078;
    local_74 = g_02391078;
    local_38 = (int64_t *)0x0;
    local_80 = 0;
    local_88 = (int64_t *)0x0;
    cVar3 = '\0';
LAB_01bac0e2:
    plVar1 = (int64_t *)*local_f0;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00e99dd0();
      local_168 = local_60;
      local_160 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_160 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_dc = -0x80000000;
    local_8c = 0x7fffffff;
    local_74 = g_02391078;
    local_78 = g_02391078;
    local_c4 = g_02391074;
    local_c8 = g_02391074;
    local_48._4_4_ = 0;
    uVar15 = 0;
    local_88 = (int64_t *)0x0;
    local_80 = 0;
    local_38 = (int64_t *)0x0;
    local_c0 = 0;
    local_50 = *this_ptr;
    while( true ) {
      cVar3 = (char)uVar15;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar12 = -local_48._4_4_;
        }
        else {
          iVar12 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar12);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar12 = 0;
        }
        local_48 = CONCAT44(iVar12,(int)local_48);
      }
      lVar6 = (int64_t)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)(local_50 + 0xc) <= iVar12) break;
      plVar1 = *(int64_t **)(*(int64_t *)(local_50 + 0x10) + 8 + lVar6 * 8);
      local_b8 = plVar1;
      local_60 = plVar1;
      FUN_0006e1c0();
      pplVar10 = &g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar10 = &local_b8;
        if (cVar3 == '\0') {
          pplVar10 = &g_02802688;
        }
      }
      if (*pplVar10 != (int64_t *)0x0) {
        local_1b0 = (int64_t *)0x0;
        FUN_00c9fe20();
        plVar1 = local_b8;
        local_d8 = (int64_t *)CONCAT71(local_d8._1_7_,local_b0[0]);
        pplVar10 = (int64_t **)local_b0;
        if (local_b0[0] == '\0') {
          pplVar10 = &local_d8;
        }
        *(void*)pplVar10 = 0;
        if ((local_b0[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((char)local_d8 == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_01bab8b1;
          }
        }
        else if (plVar1 != (int64_t *)0x0) {
LAB_01bab8b1:
          local_b0[0] = '\0';
          local_b8 = (int64_t *)0x0;
          local_a8 = plVar1;
          local_a0 = 0xffffffff;
          local_98 = 0;
          while( true ) {
            lVar6 = (int64_t)(int)local_a0;
            iVar12 = (int)local_a0 + 1;
            local_a0 = CONCAT44(local_a0._4_4_,iVar12);
            bVar2 = true;
            if (*(int *)((int64_t)local_a8 + 0xc) <= iVar12) break;
            local_1d8 = *(int64_t **)(local_a8[2] + 8 + lVar6 * 8);
            local_1d0 = '\0';
            local_b8 = local_1d8;
            FUN_01baacc0(local_a8[2],&local_1d8);
            local_d8 = local_60;
            local_d0 = '\0';
            uVar7 = FUN_00d23d70();
            cVar3 = (char)uVar7;
            if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              uVar7 = FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            plVar13 = local_b8;
            if (cVar3 != '\0') {
              if (local_b8 != (int64_t *)0x0) {
                if (local_b0[0] == '\0') {
                  uVar7 = FUN_00d50b00();
                }
                else {
                  local_b0[0] = '\0';
                }
                local_1b0 = plVar13;
                local_f8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
                bVar2 = false;
                FUN_01bb3e20();
                if (plVar1 == (int64_t *)0x0) goto LAB_01baba93;
                goto LAB_01baba8b;
              }
              break;
            }
            if (local_a0._4_4_ != 0) {
              if (local_a0._4_4_ < 1) {
                iVar12 = -local_a0._4_4_;
              }
              else {
                local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_a0._4_4_);
                FUN_00d23690();
                local_98 = local_98 + local_a0._4_4_;
                iVar12 = 0;
              }
              local_a0 = CONCAT44(iVar12,(int)local_a0);
            }
          }
          plVar13 = (int64_t *)0x0;
          local_f8 = 0;
          FUN_01bb3e20();
          if (plVar1 != (int64_t *)0x0) {
LAB_01baba8b:
            FUN_00d50b20();
          }
LAB_01baba93:
          plVar11 = local_70;
          if (plVar13 != (int64_t *)0x0) {
            bVar17 = local_88 != (int64_t *)0x0;
            if (!bVar17) {
              local_88 = plVar13;
            }
            local_64 = uVar15 & 0xff;
            pVar9 = 0;
            if (!bVar17) {
              local_64 = 0;
            }
            if (!(bool)(bVar17 | bVar2)) {
              local_64 = (uint)CONCAT71((int7)((uint64_t)local_88 >> 8),1);
              pVar9 = 0;
              FUN_00d50b00();
              local_88 = plVar13;
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar7 = FUN_0125e930();
            plVar11 = local_38;
            uVar8 = (undefined7)((uint64_t)plVar1 >> 8);
            if (local_b8 == local_38) {
              if (((char)local_80 == '\0') && (local_b8 != (int64_t *)0x0)) {
                if (local_b0[0] != '\0') {
                  uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
                  goto joined_r0x01babb82;
                }
                uVar16 = CONCAT71(uVar8,1);
                FUN_00d50b00();
              }
              else {
                uVar16 = local_80 & 0xffffffff;
              }
LAB_01babbcb:
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_80 = uVar16 & 0xffffffff;
              if (plVar11 == (int64_t *)0x0) goto LAB_01babce5;
LAB_01babbf5:
              local_38 = plVar11;
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              plVar11 = local_b8;
              if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar11 == (int64_t *)0x0) goto LAB_01babceb;
              if ((g_027c0150 == '\0') && (iVar12 = ___cxa_guard_acquire(), iVar12 != 0)) {
                g_0270acc8 = FUN_0015ea50();
                g_0270acb0 = "MUPercussivePitchSystem";
                g_0270acb8 = 0x58;
                g_0270acc0 = FUN_0015eca0;
                g_0270acd0 = 0;
                ram_000000000270acd8 = 0;
                g_0270ace0 = 0;
                ram_000000000270ace8 = 0;
                g_0270acf0 = 0;
                ram_000000000270acf8 = 0;
                g_0270ad00 = 0;
                ram_000000000270ad08 = 0;
                g_0270ad10 = 0;
                ram_000000000270ad18 = 0;
                g_0270ad20 = 0;
                ram_000000000270ad28 = 0;
                g_0270ad30 = 0;
                ram_000000000270ad38 = 0;
                g_0270ad40 = 0;
                ram_000000000270ad48 = 0;
                g_0270ad50 = 0;
                ram_000000000270ad58 = 0;
                g_0270ad60 = 0;
                ram_000000000270ad68 = 0;
                g_0270ad70 = 0;
                ___cxa_guard_release();
              }
              (**(code **)(*plVar13 + 0x360))();
              cVar3 = FUN_00e85ea0();
              plVar1 = local_1b0;
              plVar11 = local_1b0;
              if (cVar3 == '\0') {
                plVar11 = g_02802688;
              }
              if (plVar11 == (int64_t *)0x0) {
                pvVar5 = _pthread_getspecific(0);
                pVar9 = (void*)plVar11;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  pVar9 = (void*)local_38;
                }
                FUN_0152ebe0();
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar12 = FUN_01507f00();
                if ((local_b0[0] != '\0') && (local_b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                pvVar5 = _pthread_getspecific((void*)plVar11);
                pVar9 = (void*)plVar11;
                plVar11 = plVar1;
                if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                  plVar11 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125dfa0();
                iVar12 = (**(code **)(*plVar11 + 0x3a8))();
              }
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1c4 = (float)FUN_0125a2c0();
              pvVar5 = _pthread_getspecific(pVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar18 = (float)FUN_0152e000();
              local_c0 = (uint64_t)((int)local_c0 + 1);
              if (iVar12 < local_8c) {
                local_8c = iVar12;
              }
              fVar18 = local_1c4 - fVar18;
              if (local_dc < iVar12) {
                local_dc = iVar12;
              }
              fVar19 = local_1c4;
              if (local_74 <= local_1c4) {
                fVar19 = local_74;
              }
              fVar21 = local_1c4;
              if (local_1c4 <= local_c4) {
                fVar21 = local_c4;
              }
              fVar20 = fVar18;
              if (local_78 <= fVar18) {
                fVar20 = local_78;
              }
              if (fVar18 <= local_c8) {
                fVar18 = local_c8;
              }
              plVar11 = local_70;
              local_c8 = fVar18;
              local_c4 = fVar21;
              local_78 = fVar20;
              local_74 = fVar19;
              uVar15 = local_64;
              if (bVar2 || plVar1 == (int64_t *)0x0) goto LAB_01bab796;
            }
            else {
              plVar11 = local_b8;
              if (local_b0[0] == '\0') {
                if (local_b8 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                uVar16 = CONCAT71(uVar8,1);
                if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01babbcb;
              }
              if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
                uVar7 = FUN_00d50b20();
              }
              uVar8 = (undefined7)((uint64_t)uVar7 >> 8);
joined_r0x01babb82:
              local_80 = CONCAT71(uVar8,1);
              if (plVar11 != (int64_t *)0x0) goto LAB_01babbf5;
LAB_01babce5:
              local_38 = (int64_t *)0x0;
LAB_01babceb:
              plVar11 = local_70;
              uVar15 = local_64;
              if ((bool)(bVar2 | plVar13 == (int64_t *)0x0)) goto LAB_01bab796;
            }
            FUN_00d50b20();
            plVar11 = local_70;
            uVar15 = local_64;
          }
        }
      }
LAB_01bab796:
    }
    FUN_002d7220();
    lVar6 = g_027e1380;
    if (local_8c != local_dc) goto LAB_01bac0e2;
    plVar1 = (int64_t *)*local_f0;
    if ((int)local_c0 == 1) {
      if (plVar1 != (int64_t *)0x0) {
        local_228 = local_88;
        local_220 = 0;
        if (g_027e1380 != 0) {
          FUN_00d50b00();
        }
        local_218 = lVar6;
        local_210 = 1;
        FUN_01ba9920(&local_218,local_8c,1,local_res10);
        local_188 = local_60;
        local_180 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        plVar11 = local_70;
        local_180 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
      }
      local_c0 = 1;
    }
    else if (plVar1 != (int64_t *)0x0) {
      local_208 = local_88;
      local_200 = 0;
      if (g_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar6;
      local_1f0 = 1;
      FUN_01ba9920(&local_1f8,local_8c,1,local_res10);
      local_178 = local_60;
      local_170 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      plVar11 = local_70;
      local_170 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_78 != local_c8) || (NAN(local_78) || NAN(local_c8))) {
    plVar1 = (int64_t *)*local_e8;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00e99dd0();
      local_138 = local_60;
      local_130 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_130 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    plVar1 = (int64_t *)*local_e8;
    if ((int)local_c0 == 1) {
      local_c0 = 1;
      if ((plVar1 != (int64_t *)0x0) && ((int64_t *)*local_res20 != (int64_t *)0x0)) {
        (**(code **)(*(int64_t *)*local_res20 + 0x378))(local_78);
        local_158 = local_60;
        local_150 = 0;
        if (local_58[0] == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58[0] = '\0';
        }
        local_150 = '\x01';
        (**(code **)(*plVar1 + 0x958))();
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((plVar1 != (int64_t *)0x0) && ((int64_t *)*local_res20 != (int64_t *)0x0)) {
      (**(code **)(*(int64_t *)*local_res20 + 0x378))(local_78);
      local_148 = local_60;
      local_140 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_140 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  plVar1 = (int64_t *)*local_res8;
  if ((plVar1 != (int64_t *)0x0) &&
     (plVar13 = (int64_t *)*local_res18, plVar13 != (int64_t *)0x0)) {
    if ((local_74 != local_c4) || (NAN(local_74) || NAN(local_c4))) {
      FUN_00e99dd0();
      local_108 = local_60;
      local_100 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_100 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if ((int)local_c0 == 1) {
      fVar18 = (float)_exp2f(local_74 * g_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * g_023941f8);
      local_128 = local_60;
      local_120 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_120 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      fVar18 = (float)_exp2f(local_74 * g_023941f4);
      (**(code **)(*plVar13 + 0x378))(fVar18 * g_023941f8);
      local_118 = local_60;
      local_110 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_110 = '\x01';
      (**(code **)(*plVar1 + 0x958))();
      if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((cVar3 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01bac7ab:
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

