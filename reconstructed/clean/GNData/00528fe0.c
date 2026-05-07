// Function: FUN_00528fe0
// Address: 00528fe0
// Size: 8031 bytes
// Class: GNData
// String references:
//   "GNData"
//   "MDPluginDocument"
//   "GNDictionary"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_00528fe0(void* param_1)

{
  code cVar1;
  char cVar2;
  int64_t **pplVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  byte bVar13;
  void* pVar14;
  code *pcVar15;
  int iVar16;
  int64_t **arg1;
  int64_t **this_ptr;
  int64_t **pplVar17;
  bool bVar18;
  int64_t ***ppplVar19;
  bool bVar20;
  uint32_t uVar21;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t **local_330;
  uint8_t local_328;
  int64_t *local_320;
  uint8_t local_318;
  int64_t **local_310;
  uint8_t local_308;
  int64_t *local_300;
  int64_t *local_2e8;
  char local_2e0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t **local_298;
  char local_290;
  int64_t local_278;
  char local_270;
  int64_t **local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t **local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t **local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t **local_1e8;
  char local_1e0;
  int64_t **local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t **local_1b8;
  char local_1b0;
  int64_t **local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t **local_188;
  char local_180;
  int64_t **local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  int64_t *local_130;
  char local_128;
  int64_t **local_f0;
  char local_e8;
  int64_t **local_e0;
  char local_d8;
  int64_t **local_d0;
  char local_c8;
  uint64_t local_c0;
  int64_t *local_b8;
  int64_t **local_b0;
  uint32_t local_a4;
  int64_t **local_90;
  int64_t **local_80;
  char local_78;
  int64_t **local_70;
  char local_68;
  int64_t **local_60;
  char local_58;
  int64_t **local_50;
  uint64_t local_48;
  int local_40;
  
  FUN_00da5ad0();
  cVar1 = *(local_60 + 3);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((cVar1 != (code)0x0) && (this_ptr[0x60] != (int64_t *)0x0)) {
    FUN_0063f230();
    if (local_60 == (int64_t **)0x0) {
      cVar5 = '\0';
    }
    else {
      FUN_0063f230();
      cVar5 = FUN_00212c70();
      if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 != '\0') {
      FUN_0063f230();
      FUN_002218f0();
      if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (this_ptr[0x6c] != (int64_t *)0x0) {
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    if (this_ptr[0x6c] != (int64_t *)0x0) {
      this_ptr[0x6c] = (int64_t *)0x0;
      FUN_00d50b20();
    }
  }
  if ((this_ptr[0x6d] != (int64_t *)0x0) &&
     ((**(code **)(*this_ptr[0x6d] + 0x408))(), this_ptr[0x6d] != (int64_t *)0x0)) {
    this_ptr[0x6d] = (int64_t *)0x0;
    FUN_00d50b20();
  }
  if (this_ptr[0x5b] != (int64_t *)0x0) {
    this_ptr[0x5b] = (int64_t *)0x0;
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_000649c0();
  uVar21 = (**(code **)(*plVar8 + 0x18))();
  local_2e8 = *arg1;
  local_2e0 = '\0';
  ppplVar19 = &local_60;
  local_138 = plVar8;
  (**(code **)(*plVar8 + 0x5f8))(uVar21,&local_2e8);
  pplVar9 = local_60;
  if ((g_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  if (pplVar9 == (int64_t **)0x0) {
LAB_005291ff:
    ppplVar19 = &g_02802688;
  }
  else {
    (*(*pplVar9)[0x6c])();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_005291ff;
  }
  local_90 = *ppplVar19;
  pcVar15 = local_90;
  if (local_90 == (int64_t **)0x0) {
    local_c0 = 0;
    local_90 = (int64_t **)0x0;
  }
  else {
    if (*(char *)(ppplVar19 + 1) == '\0') {
      pplVar9 = (int64_t **)FUN_00d50b00();
    }
    else {
      *(void*)(ppplVar19 + 1) = 0;
      pplVar9 = local_90;
    }
    local_c0 = CONCAT71((int7)((uint64_t)pplVar9 >> 8),1);
  }
  if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar9 = g_0270b838;
  if (local_90 == (int64_t **)0x0) {
    bVar20 = true;
    local_b8 = (int64_t *)0x0;
    local_90 = (int64_t **)0x0;
  }
  else {
    if (g_0270b838 != (int64_t **)0x0) {
      FUN_00d50b00();
    }
    local_60 = pplVar9;
    local_58 = '\0';
    cVar5 = FUN_00c9ff50();
    uVar21 = extraout_XMM0_Da;
    if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if (pplVar9 != (int64_t **)0x0) {
      uVar21 = FUN_00d50b20();
    }
    lVar12 = g_0270b808;
    if (cVar5 != '\0') {
      if (*((int64_t)this_ptr + 0x24e) != (code)0x0) {
        if (g_0270b808 != 0) {
          uVar21 = FUN_00d50b00();
        }
        local_2c8 = lVar12;
        local_2c0 = '\x01';
        ppplVar19 = &local_60;
        (*(*local_90)[0x11])(uVar21,&local_2c8);
        pplVar9 = local_60;
        uVar21 = FUN_00053ac0();
        if (pplVar9 == (int64_t **)0x0) {
LAB_00529366:
          ppplVar19 = &g_02802688;
        }
        else {
          (*(*pplVar9)[0x6c])();
          cVar5 = FUN_00e85ea0();
          uVar21 = extraout_XMM0_Da_00;
          if (cVar5 == '\0') goto LAB_00529366;
        }
        lVar12 = g_0270b808;
        if (*ppplVar19 == (int64_t **)0x0) {
          bVar20 = false;
        }
        else {
          if (g_0270b808 != 0) {
            uVar21 = FUN_00d50b00();
          }
          local_2b8 = lVar12;
          local_2b0 = '\x01';
          (*(*local_90)[0x11])(uVar21,&local_2b8);
          iVar6 = FUN_00d45870();
          bVar20 = iVar6 == 0xd;
          if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2b0 != '\0') && (local_2b8 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2c0 != '\0') && (local_2c8 != 0)) {
          FUN_00d50b20();
        }
        pplVar9 = g_0270b838;
        if (bVar20) {
          if (g_0270b838 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          local_60 = pplVar9;
          local_58 = '\0';
          uVar10 = FUN_00ca13a0();
          if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
            uVar10 = FUN_00d50b20();
          }
          local_b8 = (int64_t *)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
          if (pplVar9 != (int64_t **)0x0) {
            FUN_00d50b20();
          }
          bVar20 = false;
          goto LAB_005294f0;
        }
      }
      FUN_01f27fe0();
      (*(*local_60)[0xac])();
      if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar20 = false;
    local_b8 = (int64_t *)0x0;
  }
LAB_005294f0:
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  uVar21 = (**(code **)(*plVar8 + 0x18))();
  local_68 = '\0';
  local_70 = (int64_t **)0x0;
  local_330 = local_90;
  local_328 = 0;
  cVar5 = FUN_00527740(uVar21,&local_330);
  lVar12 = g_0270b850;
  if (cVar5 != '\0') {
    if (!bVar20) {
      uVar21 = extraout_XMM0_Da_01;
      if (g_0270b850 != 0) {
        uVar21 = FUN_00d50b00();
      }
      local_2a8 = lVar12;
      local_2a0 = '\x01';
      ppplVar19 = &local_60;
      FUN_000175c0(uVar21,&local_2a8);
      pplVar9 = local_60;
      if ((g_026d0220 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        g_02789148 = FUN_00d4fe50();
        g_02789130 = "GNData";
        g_02789138 = 0x28;
        g_02789140 = FUN_000378a0;
        g_02789150 = 0;
        ram_0000000002789158 = 0;
        g_02789160 = 0;
        ram_0000000002789168 = 0;
        g_02789170 = 0;
        ram_0000000002789178 = 0;
        g_02789180 = 0;
        ram_0000000002789188 = 0;
        g_02789190 = 0;
        ram_0000000002789198 = 0;
        g_027891a0 = 0;
        ram_00000000027891a8 = 0;
        g_027891b0 = 0;
        ram_00000000027891b8 = 0;
        g_027891c0 = 0;
        ram_00000000027891c8 = 0;
        g_027891d0 = 0;
        ram_00000000027891d8 = 0;
        g_027891e0 = 0;
        ram_00000000027891e8 = 0;
        g_027891f0 = 0;
        ___cxa_guard_release();
      }
      if (pplVar9 == (int64_t **)0x0) {
LAB_005295d7:
        ppplVar19 = &g_02802688;
      }
      else {
        (*(*pplVar9)[0x6c])();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_005295d7;
      }
      pcVar15 = *ppplVar19;
      if ((int64_t **)pcVar15 == (int64_t **)0x0) {
        local_a4 = 1;
        local_b0 = (int64_t **)0x0;
      }
      else {
        local_b0 = (int64_t **)pcVar15;
        if (*(char *)(ppplVar19 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(ppplVar19 + 1) = 0;
        }
        local_a4 = 0;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_b0 != (int64_t **)0x0) {
        plVar11 = (int64_t *)FUN_00e8fc40();
        FUN_0002cb50();
        uVar21 = (**(code **)(*plVar11 + 0x18))();
        local_298 = local_b0;
        local_290 = '\0';
        ppplVar19 = &local_60;
        local_300 = plVar11;
        FUN_00e549d0(uVar21,&local_298);
        pplVar9 = local_60;
        if ((g_026e3d90 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
          g_0270bae8 = FUN_0015e380();
          g_0270bad0 = "MDPluginDocument";
          g_0270bad8 = 0x80;
          pcVar15 = FUN_0015e980;
          g_0270bae0 = FUN_0015e980;
          g_0270baf0 = 0;
          ram_000000000270baf8 = 0;
          g_0270bb00 = 0;
          g_0270bb78 = 0;
          ram_000000000270bb80 = 0;
          g_0270bb88 = 0;
          g_0270bb8a = 2;
          g_0270bb08 = 0;
          ram_000000000270bb10 = 0;
          g_0270bb18 = 0;
          ram_000000000270bb20 = 0;
          g_0270bb28 = 0;
          ram_000000000270bb30 = 0;
          g_0270bb38 = 0;
          ram_000000000270bb40 = 0;
          g_0270bb48 = 0;
          ram_000000000270bb50 = 0;
          g_0270bb58 = 0;
          ram_000000000270bb60 = 0;
          g_0270bb68 = 0;
          ram_000000000270bb70 = 0;
          g_0270bb93 = 0;
          g_0270bb8b = 0;
          ___cxa_guard_release();
        }
        if (pplVar9 == (int64_t **)0x0) {
LAB_005296ef:
          ppplVar19 = &g_02802688;
        }
        else {
          (*(*pplVar9)[0x6c])();
          cVar5 = FUN_00e85ea0();
          if (cVar5 == '\0') goto LAB_005296ef;
        }
        cVar5 = local_68;
        pplVar17 = local_70;
        pplVar9 = *ppplVar19;
        if (local_70 == pplVar9) {
          if ((local_68 == '\0') && (pplVar9 != (int64_t **)0x0)) {
            pplVar9 = local_70;
            if (*(char *)(ppplVar19 + 1) == '\0') {
              FUN_00d50b00();
              goto LAB_00529e97;
            }
            goto LAB_00529b0a;
          }
        }
        else if (*(char *)(ppplVar19 + 1) == '\0') {
          if (pplVar9 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          local_70 = pplVar9;
          if ((cVar5 != '\0') && (pplVar17 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
LAB_00529e97:
          local_68 = '\x01';
        }
        else {
          if ((local_68 != '\0') && (local_70 != (int64_t **)0x0)) {
            local_70 = pplVar9;
            FUN_00d50b20();
            pplVar9 = local_70;
          }
LAB_00529b0a:
          local_70 = pplVar9;
          local_68 = '\x01';
          *(void*)(ppplVar19 + 1) = 0;
        }
        if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_290 != '\0') && (local_298 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        pplVar9 = local_70;
        if (local_70 != (int64_t **)0x0) {
          if (this_ptr[0x61] == (int64_t *)0x0) {
            FUN_0015e5d0();
            (*(*pplVar9)[0x6c])();
            cVar5 = FUN_00e85ea0();
            pplVar9 = local_70;
            lVar12 = g_0270b808;
            if (cVar5 == '\0') {
              ppplVar19 = &g_02802688;
            }
            else {
              ppplVar19 = &local_70;
            }
            if (*ppplVar19 == (int64_t **)0x0) {
              FUN_002d8200();
              if (pplVar9 == (int64_t **)0x0) {
LAB_0052a06c:
                ppplVar19 = &g_02802688;
              }
              else {
                (*(*pplVar9)[0x6c])();
                cVar5 = FUN_00e85ea0();
                if (cVar5 == '\0') goto LAB_0052a06c;
                ppplVar19 = &local_70;
              }
              pplVar9 = *ppplVar19;
              pplVar17 = (int64_t **)this_ptr[0x6c];
              if (pplVar17 != pplVar9) {
                if (pplVar9 != (int64_t **)0x0) {
                  FUN_00d50b00();
                }
                this_ptr[0x6c] = (int64_t *)pplVar9;
                if (pplVar17 != (int64_t **)0x0) {
                  FUN_00d50b20();
                }
              }
              pplVar9 = (int64_t **)0x0;
              cVar5 = local_68;
              if (local_70 != (int64_t **)0x0) {
                local_70 = (int64_t **)0x0;
                if (local_68 != '\0') {
                  FUN_00d50b20();
                }
                local_68 = '\0';
                pplVar9 = local_70;
                cVar5 = local_68;
              }
            }
            else {
              uVar21 = extraout_XMM0_Da_03;
              if (g_0270b808 != 0) {
                uVar21 = FUN_00d50b00();
              }
              local_278 = lVar12;
              local_270 = '\x01';
              ppplVar19 = &local_60;
              FUN_000175c0(uVar21,&local_278);
              pplVar9 = local_60;
              FUN_00053ac0();
              if (pplVar9 == (int64_t **)0x0) {
LAB_0052a024:
                ppplVar19 = &g_02802688;
              }
              else {
                (*(*pplVar9)[0x6c])();
                cVar5 = FUN_00e85ea0();
                if (cVar5 == '\0') goto LAB_0052a024;
              }
              pplVar17 = *ppplVar19;
              if (*(char *)(ppplVar19 + 1) == '\0') {
                if (pplVar17 != (int64_t **)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(ppplVar19 + 1) = 0;
              }
              if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
              if ((local_270 != '\0') && (local_278 != 0)) {
                FUN_00d50b20();
              }
              pplVar9 = local_70;
              cVar5 = local_68;
              if (pplVar17 != (int64_t **)0x0) {
                iVar6 = FUN_00d45870();
                if (iVar6 < 0xd) {
                  FUN_00793190();
                }
                FUN_00d50b20();
                pplVar9 = local_70;
                cVar5 = local_68;
              }
            }
          }
          else {
            FUN_002d8200();
            (*(*pplVar9)[0x6c])();
            cVar5 = FUN_00e85ea0();
            cVar4 = local_68;
            pplVar17 = local_70;
            if (cVar5 == '\0') {
              ppplVar19 = &g_02802688;
            }
            else {
              ppplVar19 = &local_70;
            }
            pplVar3 = *ppplVar19;
            cVar2 = *(char *)(ppplVar19 + 1);
            pplVar9 = pplVar3;
            if (local_70 == pplVar3) {
              cVar5 = local_68;
              if (((cVar2 != '\0') && (pplVar9 = local_70, local_68 == '\0')) &&
                 (pplVar3 != (int64_t **)0x0)) {
                FUN_00d50b00();
                local_68 = '\x01';
                pplVar9 = local_70;
                cVar5 = local_68;
              }
            }
            else {
              if ((cVar2 != '\0') && (pplVar3 != (int64_t **)0x0)) {
                FUN_00d50b00();
              }
              local_70 = pplVar3;
              cVar5 = cVar2;
              if ((cVar4 != '\0') && (pplVar17 != (int64_t **)0x0)) {
                FUN_00d50b20();
                pplVar9 = local_70;
              }
            }
          }
          local_68 = cVar5;
          if ((pplVar9 != (int64_t **)0x0) &&
             (bVar13 = (byte)local_b8 | this_ptr[0x61] != (int64_t *)0x0,
             pcVar15 = CONCAT71((int7)((uint64_t)local_b8 >> 8),bVar13), bVar13 == 0)) {
            local_320 = *arg1;
            local_318 = 0;
            FUN_00526a80();
          }
        }
        FUN_00d50b20();
        if ((char)local_a4 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_0052a2a3;
      }
    }
    pplVar9 = g_0270b810;
    if (g_0270b810 != (int64_t **)0x0) {
      FUN_00d50b00();
    }
    local_60 = pplVar9;
    local_58 = '\0';
    cVar5 = FUN_00c9ff50();
    uVar21 = extraout_XMM0_Da_02;
    if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    pplVar17 = g_0270b810;
    if (cVar5 == '\0') {
      cVar5 = '\0';
    }
    else {
      if (g_0270b810 != (int64_t **)0x0) {
        uVar21 = FUN_00d50b00();
      }
      local_268 = pplVar17;
      local_260 = '\x01';
      FUN_000175c0(uVar21,&local_268);
      pplVar17 = local_60;
      local_258 = g_0270b878;
      if (g_0270b878 != 0) {
        FUN_00d50b00();
      }
      local_250 = '\x01';
      cVar5 = (*(*pplVar17)[10])();
      if ((local_250 != '\0') && (local_258 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    if (pplVar9 != (int64_t **)0x0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      local_218 = *arg1;
      local_210 = '\0';
      local_208 = local_90;
      local_200 = '\0';
      local_1f0 = '\0';
      pcVar15 = &local_1f8;
      local_1f8 = plVar8;
      FUN_007dd720(pcVar15,&local_208);
      pplVar9 = local_60;
      if (local_58 == '\0') {
        if (((local_60 != (int64_t **)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
           (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_200 != '\0') && (local_208 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (pplVar9 == (int64_t **)0x0) goto LAB_0052a2a3;
      if (this_ptr[0x61] == (int64_t *)0x0) {
        local_1b8 = pplVar9;
        local_1b0 = '\0';
        local_1a8 = local_90;
        local_1a0 = '\0';
        local_190 = '\0';
        local_198 = plVar8;
        FUN_006efa70(&local_198,&local_1a8);
        pplVar3 = local_60;
        cVar5 = local_68;
        pplVar17 = local_70;
        if (local_70 == local_60) {
          if ((local_68 != '\0') || (local_60 == (int64_t **)0x0)) goto LAB_0052aa79;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_0052aa75;
          }
LAB_00529c91:
          local_68 = '\x01';
          local_58 = '\0';
        }
        else {
          if (local_58 != '\0') {
            local_70 = local_60;
            if ((local_68 != '\0') && (pplVar17 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00529c91;
          }
          if (local_60 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          local_70 = pplVar3;
          if ((cVar5 != '\0') && (pplVar17 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
LAB_0052aa75:
          local_68 = '\x01';
LAB_0052aa79:
          if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1b0 != '\0') && (local_1b8 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if (local_70 == (int64_t **)0x0) {
          local_188 = pplVar9;
          local_180 = '\0';
          local_178 = local_90;
          local_170 = '\0';
          local_160 = '\0';
          pcVar15 = &local_168;
          local_168 = plVar8;
          FUN_006efd50(pcVar15,&local_178);
          pplVar9 = (int64_t **)this_ptr[0x6c];
          if (pplVar9 != local_60) {
            pcVar15 = pplVar9;
            if (local_58 == '\0') {
              if (local_60 == (int64_t **)0x0) {
                pplVar9 = (int64_t **)0x0;
              }
              else {
                FUN_00d50b00();
                pplVar9 = local_60;
                pcVar15 = this_ptr[0x6c];
              }
            }
            else {
              local_58 = '\0';
              pplVar9 = local_60;
            }
            this_ptr[0x6c] = (int64_t *)pplVar9;
            if ((int64_t **)pcVar15 != (int64_t **)0x0) {
              FUN_00d50b20();
              pplVar9 = local_60;
            }
          }
          if ((local_58 != '\0') && (pplVar9 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          cVar5 = FUN_00c92180();
          pplVar9 = (int64_t **)*arg1;
          if (cVar5 == '\0') {
            pplVar17 = (int64_t **)this_ptr[0x5b];
            pcVar15 = arg1;
            if (pplVar17 != pplVar9) {
              if (pplVar9 != (int64_t **)0x0) {
                FUN_00d50b00();
              }
              this_ptr[0x5b] = (int64_t *)pplVar9;
              if (pplVar17 != (int64_t **)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_78 = '\0';
            pcVar15 = arg1;
            FUN_00c8e4f0();
            pplVar17 = local_60;
            if (local_58 == '\0') {
              if (((local_60 != (int64_t **)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
                 (local_60 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00c92170();
            pplVar3 = (int64_t **)this_ptr[0x5b];
            local_80 = pplVar9;
            if (pplVar3 == pplVar17) {
              if (pplVar17 != (int64_t **)0x0) {
                FUN_00d50b20();
              }
            }
            else {
              this_ptr[0x5b] = (int64_t *)pplVar17;
              if (pplVar3 != (int64_t **)0x0) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
      else {
        local_1e8 = pplVar9;
        local_1e0 = '\0';
        local_1d8 = local_90;
        local_1d0 = '\0';
        local_1c0 = '\0';
        pcVar15 = &local_1c8;
        local_1c8 = plVar8;
        FUN_006efd50(pcVar15,&local_1d8);
        pplVar17 = local_60;
        cVar5 = local_68;
        pplVar9 = local_70;
        if (local_70 == local_60) {
          if ((local_68 != '\0') || (local_60 == (int64_t **)0x0)) goto LAB_0052a123;
          if (local_58 == '\0') {
            FUN_00d50b00();
            goto LAB_0052a11f;
          }
LAB_00529c37:
          local_68 = '\x01';
          local_58 = '\0';
        }
        else {
          if (local_58 != '\0') {
            local_70 = local_60;
            if ((local_68 != '\0') && (pplVar9 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00529c37;
          }
          if (local_60 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          local_70 = pplVar17;
          if ((cVar5 != '\0') && (pplVar9 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
LAB_0052a11f:
          local_68 = '\x01';
LAB_0052a123:
          if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1e0 != '\0') && (local_1e8 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      local_150 = '\0';
      local_158 = plVar8;
      FUN_007931a0();
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00793190();
      FUN_00d50b20();
    }
    else {
      local_248 = local_90;
      local_240 = '\0';
      local_230 = '\0';
      local_238 = plVar8;
      FUN_00788660();
      local_e8 = 0;
      if (local_78 == '\0') {
        if (local_80 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_e8 = '\x01';
      local_f0 = local_80;
      pcVar15 = 0x0;
      FUN_007f3f10(0,&local_238,&local_f0);
      pplVar17 = local_60;
      cVar5 = local_68;
      pplVar9 = local_70;
      if (local_70 == local_60) {
        if ((local_68 != '\0') || (local_60 == (int64_t **)0x0)) goto LAB_00529caa;
        if (local_58 == '\0') {
          FUN_00d50b00();
          goto LAB_00529ca6;
        }
LAB_00529ae7:
        local_68 = '\x01';
        local_58 = '\0';
      }
      else {
        if (local_58 != '\0') {
          local_70 = local_60;
          if ((local_68 != '\0') && (pplVar9 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00529ae7;
        }
        if (local_60 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        local_70 = pplVar17;
        if ((cVar5 != '\0') && (pplVar9 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
LAB_00529ca6:
        local_68 = '\x01';
LAB_00529caa:
        if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != (int64_t **)0x0) {
        local_220 = '\0';
        local_228 = plVar8;
        FUN_007931a0();
        if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00793190();
        cVar5 = FUN_00c92180();
        pplVar9 = (int64_t **)*arg1;
        if (cVar5 == '\0') {
          pplVar17 = (int64_t **)this_ptr[0x5b];
          pcVar15 = arg1;
          if (pplVar17 != pplVar9) {
            if (pplVar9 != (int64_t **)0x0) {
              FUN_00d50b00();
            }
            this_ptr[0x5b] = (int64_t *)pplVar9;
            if (pplVar17 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = '\0';
          pcVar15 = arg1;
          FUN_00c8e4f0();
          pplVar17 = local_60;
          if (local_58 == '\0') {
            if (((local_60 != (int64_t **)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
               (local_60 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_58 = '\0';
          }
          FUN_00c92170();
          pplVar3 = (int64_t **)this_ptr[0x5b];
          local_80 = pplVar9;
          if (pplVar3 == pplVar17) {
            if (pplVar17 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
          }
          else {
            this_ptr[0x5b] = (int64_t *)pplVar17;
            if (pplVar3 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
    }
  }
LAB_0052a2a3:
  pVar14 = (void*)pcVar15;
  if ((local_70 == (int64_t **)0x0) && (this_ptr[0x6c] == (int64_t *)0x0)) {
    if (this_ptr[0x61] == (int64_t *)0x0) {
      FUN_0015ae00();
      pplVar17 = local_60;
      cVar5 = local_68;
      pplVar9 = local_70;
      if (local_70 == local_60) {
        if ((local_68 != '\0') || (local_60 == (int64_t **)0x0)) goto LAB_0052a917;
        if (local_58 == '\0') {
          FUN_00d50b00();
          goto LAB_0052a913;
        }
LAB_0052a898:
        local_68 = '\x01';
      }
      else {
        if (local_58 != '\0') {
          local_70 = local_60;
          if ((local_68 != '\0') && (pplVar9 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0052a898;
        }
        if (local_60 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        local_70 = pplVar17;
        if ((cVar5 != '\0') && (pplVar9 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
LAB_0052a913:
        local_68 = '\x01';
LAB_0052a917:
        if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar5 = FUN_00c92180();
      pplVar9 = (int64_t **)*arg1;
      if (cVar5 == '\0') {
        pplVar17 = (int64_t **)this_ptr[0x5b];
        if (pplVar17 != pplVar9) {
          if (pplVar9 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
          this_ptr[0x5b] = (int64_t *)pplVar9;
          if (pplVar17 != (int64_t **)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_78 = '\0';
        FUN_00c8e4f0();
        pplVar17 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t **)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_00c92170();
        pplVar3 = (int64_t **)this_ptr[0x5b];
        local_80 = pplVar9;
        if (pplVar3 == pplVar17) {
          if (pplVar17 != (int64_t **)0x0) {
            FUN_00d50b20();
          }
        }
        else {
          this_ptr[0x5b] = (int64_t *)pplVar17;
          if (pplVar3 != (int64_t **)0x0) {
            FUN_00d50b20();
          }
        }
      }
      local_140 = '\0';
      local_148 = plVar8;
      FUN_007931a0();
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00793170();
      pplVar9 = (int64_t **)((int64_t)this_ptr + 0x2d2);
      goto LAB_0052a2c3;
    }
    FUN_002d8020();
    pplVar17 = local_60;
    cVar5 = local_68;
    pplVar9 = local_70;
    if (local_70 == local_60) {
      if ((local_68 != '\0') || (local_60 == (int64_t **)0x0)) goto LAB_0052a8d2;
      if (local_58 == '\0') {
        FUN_00d50b00();
        goto LAB_0052a8ce;
      }
LAB_0052a743:
      local_68 = '\x01';
    }
    else {
      if (local_58 != '\0') {
        local_70 = local_60;
        if ((local_68 != '\0') && (pplVar9 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0052a743;
      }
      if (local_60 != (int64_t **)0x0) {
        FUN_00d50b00();
      }
      local_70 = pplVar17;
      if ((cVar5 != '\0') && (pplVar9 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
LAB_0052a8ce:
      local_68 = '\x01';
LAB_0052a8d2:
      if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x5b] != (int64_t *)0x0) {
      this_ptr[0x5b] = (int64_t *)0x0;
      FUN_00d50b20();
    }
  }
  else {
    *((int64_t)this_ptr + 0x2d2) = (code)0x0;
    pplVar9 = this_ptr + 0x14;
LAB_0052a2c3:
    *pplVar9 = (code)0x1;
  }
  pplVar9 = local_70;
  if ((this_ptr[0x61] != (int64_t *)0x0) || (this_ptr[0x6c] != (int64_t *)0x0))
  goto LAB_0052a7b5;
  FUN_0015e5d0();
  if (pplVar9 == (int64_t **)0x0) {
LAB_0052a312:
    pplVar9 = g_02802688;
    pplVar17 = g_02802688;
    cVar5 = g_02802690;
    if (g_02802690 == '\0') goto LAB_0052a3ed;
LAB_0052a3de:
    pplVar17 = (int64_t **)0x0;
    if (pplVar9 == (int64_t **)0x0) goto LAB_0052a3ed;
    FUN_00d50b00();
  }
  else {
    (*(*pplVar9)[0x6c])();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0052a312;
    pplVar9 = local_70;
    pplVar17 = local_70;
    cVar5 = local_68;
    if (local_68 != '\0') goto LAB_0052a3de;
LAB_0052a3ed:
    if (pplVar17 == (int64_t **)0x0) goto LAB_0052a7b5;
  }
  FUN_01f27fe0();
  local_128 = 0;
  local_130 = this_ptr[0x21];
  if (local_130 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_000c4290();
  pplVar9 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t **)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (pplVar9 != (int64_t **)0x0) {
    local_58 = '\0';
    local_60 = (int64_t **)0x0;
    local_50 = pplVar9;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar18 = true;
    iVar6 = 0;
LAB_0052a4c0:
    do {
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        if (iVar6 < 1) {
          iVar6 = -iVar6;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - iVar6);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar6 = 0;
        }
        local_48 = CONCAT44(iVar6,(int)local_48);
      }
      lVar12 = (int64_t)(int)local_48;
      iVar16 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar16);
      pplVar9 = local_50;
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar16) goto LAB_0052a66d;
      pplVar9 = (int64_t **)local_50[2];
      local_60 = (int64_t **)pplVar9[lVar12 + 1];
    } while ((local_60 == this_ptr) || (local_60[0x61] != (int64_t *)0x0));
    if (local_60[0x22] != (int64_t *)0x0) {
      local_b8 = local_60[0x22];
      FUN_00d50b00();
      FUN_00788b60();
      if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = local_80;
      if (local_80 != (int64_t **)0x0) {
        pvVar7 = _pthread_getspecific((void*)pplVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00788b60();
        local_d8 = 0;
        if (local_78 == '\0') {
          if (local_80 != (int64_t **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_d8 = '\x01';
        local_e0 = local_80;
        FUN_0015d5d0();
        if ((local_d8 != '\0') && (local_e0 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
        bVar18 = false;
      }
      FUN_00d50b20();
      if (local_b0 != (int64_t **)0x0) goto LAB_0052a66d;
    }
    iVar6 = local_48._4_4_;
    goto LAB_0052a4c0;
  }
LAB_0052a688:
  pvVar7 = _pthread_getspecific(pVar14);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0015d590();
  local_d0 = local_60;
  local_c8 = 0;
  if (local_58 == '\0') {
    if (local_60 != (int64_t **)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_c8 = '\x01';
  FUN_00788f50();
  if ((local_c8 != '\0') && (local_d0 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
LAB_0052a7a4:
  if (cVar5 != '\0') {
    FUN_00d50b20();
  }
LAB_0052a7b5:
  if (local_70 != (int64_t **)0x0) {
    local_310 = local_70;
    local_308 = 0;
    FUN_0051a2b0();
  }
  if ((this_ptr[0x61] == (int64_t *)0x0) && (this_ptr[0x6c] == (int64_t *)0x0)) {
    FUN_0052c680();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_c0 != '\0' && !bVar20) {
    FUN_00d50b20();
  }
  if (local_138 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
LAB_0052a66d:
  pVar14 = (void*)pplVar9;
  FUN_0015ee90();
  FUN_00d50b20();
  if (bVar18) goto LAB_0052a688;
  goto LAB_0052a7a4;
}

