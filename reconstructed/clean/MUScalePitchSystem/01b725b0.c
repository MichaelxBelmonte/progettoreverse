// Function: FUN_01b725b0
// Address: 01b725b0
// Size: 5782 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b725b0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  void* pVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  void*puVar12;
  int64_t **pplVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar14;
  int64_t *plVar15;
  bool bVar16;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  int64_t local_2b8;
  uint8_t local_2b0;
  int64_t *local_2a8;
  uint8_t local_2a0;
  int64_t local_298;
  char local_290;
  int64_t *local_288;
  uint8_t local_280;
  uint64_t local_278;
  uint8_t local_270;
  int64_t *local_268;
  uint8_t local_260;
  uint64_t local_258;
  uint8_t local_250;
  int64_t *local_248;
  uint8_t local_240;
  uint8_t local_238 [8];
  uint8_t local_230 [8];
  uint8_t local_228 [8];
  uint8_t local_220 [8];
  uint64_t local_218;
  int64_t local_210;
  uint8_t local_208;
  uint8_t local_200 [4];
  int local_1fc;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint32_t local_e8;
  uint32_t local_e4;
  int64_t *local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  uint32_t local_b8;
  uint local_b4;
  uint32_t local_b0;
  int iStack_ac;
  char local_a8;
  int64_t *local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint local_74;
  uint64_t local_70;
  int64_t *local_68;
  uint64_t local_60;
  int64_t *local_58;
  char local_50;
  char local_48 [4];
  uint32_t local_44;
  int64_t *local_40;
  int64_t *local_38;
  
  local_74 = 3;
  if (this_ptr[0x2b] == 0) {
LAB_01b72788:
    local_1f8 = *arg1;
    local_1f0 = '\0';
    FUN_01e459c0();
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  FUN_00d50b00();
  cVar3 = (**(code **)(*this_ptr + 0xa78))();
  uVar17 = FUN_00d50b20();
  if (cVar3 == '\0') goto LAB_01b72788;
  local_2b8 = *arg1;
  local_2b0 = 0;
  FUN_01b74680(uVar17,&local_2b8);
  local_a0 = local_40;
  if (((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 5) {
    FUN_01d3abf0();
    FUN_01e466c0();
    local_2a8 = local_a0;
    local_2a0 = 0;
    (**(code **)(*local_a0 + 0x3c8))();
    FUN_01b753d0();
    FUN_01b74770();
  }
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 1) && ((iVar4 = FUN_01d3b630(), iVar4 == 1 || (iVar4 = FUN_01d3b630(), iVar4 == 2)))
     ) {
    (**(code **)(*this_ptr + 0xa60))();
    plVar15 = local_40;
    if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar15 != (int64_t *)0x0) {
      FUN_01d3abf0();
      local_c8 = (int64_t *)FUN_01e466c0();
      local_68 = (int64_t *)(**(code **)(*this_ptr + 0xa70))();
      local_b8 = 0xffffffff;
      lVar1 = this_ptr[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012523c0((int)local_68,0,&local_98,&local_b8);
      plVar15 = local_40;
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
      pplVar7 = &local_58;
      if ((char)local_38 != '\0') {
        pplVar7 = &local_38;
      }
      *(void*)pplVar7 = 0;
      if (((char)local_38 != '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_58 == '\0') && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      cVar3 = (**(code **)(*this_ptr + 0x9a0))();
      if (((cVar3 != '\0') || (cVar3 = (**(code **)(*this_ptr + 0x998))(), cVar3 != '\0')) &&
         (cVar3 = FUN_01e420b0(), cVar3 == '\0')) {
        FUN_01e42250();
      }
      iVar4 = FUN_01d3b620();
      if (((iVar4 == 2) && (this_ptr[0x3a] != 0)) && (FUN_01e1e360(), this_ptr[0x3a] != 0)) {
        this_ptr[0x3a] = 0;
        FUN_00d50b20();
      }
      local_b4 = FUN_01d3b590();
      cVar3 = (**(code **)(*this_ptr + 0x9a0))();
      local_60 = (int64_t *)((uint64_t)local_60._4_4_ << 0x20);
      local_70 = (uint64_t)local_70._4_4_ << 0x20;
      local_44 = 0;
      if (cVar3 != '\0') {
        uVar10 = 0;
        FUN_01b6e930(local_c8._0_4_,&local_74,0);
        if (local_40 != (int64_t *)0x0) {
          if ((local_74 & 0xfffffffd) == 0) {
            iVar4 = FUN_01d3b630();
            uVar10 = CONCAT71((int7)((uint64_t)uVar10 >> 8),(char)local_38);
            if (iVar4 == 1) {
              if ((char)local_38 != '\0') {
                FUN_00d50b20();
              }
              if ((local_b4 & 6) == 0) {
                local_60 = (int64_t *)((uint64_t)local_60 & 0xffffffff00000000);
                (**(code **)(*this_ptr + 0xa10))();
                local_70 = local_70 & 0xffffffff00000000;
                local_44 = 0;
                goto LAB_01b72db2;
              }
            }
            else if ((char)local_38 != '\0') {
              FUN_00d50b20();
            }
          }
          else if ((char)local_38 != '\0') {
            FUN_00d50b20();
          }
        }
        iVar4 = FUN_01d3b630();
        if (iVar4 == 1) {
          if ((local_b4 & 6) == 0) {
            cVar3 = (**(code **)(*this_ptr + 0xa00))();
            if (cVar3 == '\0') {
              (**(code **)(*this_ptr + 0x9f0))(extraout_XMM0_Da_01,local_98);
              FUN_01b754b0((int)g_023908d0);
              goto LAB_01b72d5d;
            }
            uVar17 = (**(code **)(*this_ptr + 0xa08))();
            local_70 = CONCAT44(local_70._4_4_,uVar17);
            local_60 = (int64_t *)(CONCAT44(local_60._4_4_,uVar17) ^ 1);
          }
          else {
            (**(code **)(*this_ptr + 0x9f8))();
LAB_01b72d5d:
            local_60 = (int64_t *)((uint64_t)local_60 & 0xffffffff00000000);
            local_70 = local_70 & 0xffffffff00000000;
          }
          iVar4 = FUN_01d3b620();
          local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
          if (iVar4 != 1) {
            if ((this_ptr[0x3a] != 0) && (FUN_01e1e360(), this_ptr[0x3a] != 0)) {
              this_ptr[0x3a] = 0;
              FUN_00d50b20();
            }
            local_44 = 0;
          }
        }
        else {
          cVar3 = (**(code **)(*this_ptr + 0xa00))(extraout_XMM0_Da,local_98);
          uVar8 = (uint64_t)local_60 >> 0x20;
          local_60 = (int64_t *)(uVar8 << 0x20);
          local_70 = local_70 & 0xffffffff00000000;
          local_44 = 0;
          if (cVar3 == '\0') {
            local_60 = (int64_t *)(uVar8 << 0x20);
            (**(code **)(*this_ptr + 0x9f0))(extraout_XMM0_Da_00,local_98);
            local_70 = local_70 & 0xffffffff00000000;
            local_44 = 0;
          }
        }
      }
LAB_01b72db2:
      cVar3 = (**(code **)(*this_ptr + 0x998))();
      if (cVar3 != '\0') {
        if (plVar15 == (int64_t *)0x0) {
          local_1e0 = '\0';
          local_1e8 = 0;
          (**(code **)(*this_ptr + 0x9a8))();
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          plVar15 = (int64_t *)0x0;
        }
        else {
          iVar4 = FUN_01d3b630();
          if (iVar4 == 1) {
            uVar8 = FUN_01d3b590();
            if ((uVar8 & 2) == 0) {
              uVar8 = FUN_01d3b590();
              if ((uVar8 & 4) == 0) {
                local_198 = plVar15;
                local_190 = '\0';
                cVar3 = (**(code **)(*this_ptr + 0x9c8))();
                if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar3 == '\0') {
                  local_178 = plVar15;
                  local_170 = '\0';
                  (**(code **)(*this_ptr + 0x9a8))();
                  if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_180 = '\0';
                  local_188 = 0;
                  (**(code **)(*this_ptr + 0x9a8))();
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                FUN_01d836c0();
                if ((char)local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01b73338;
                  }
                }
                else if (local_40 != (int64_t *)0x0) {
LAB_01b73338:
                  FUN_00d50b20();
                  goto LAB_01b7338d;
                }
                cVar3 = (**(code **)(*this_ptr + 0x9c0))();
                if (cVar3 == '\0') {
                  local_1a8 = plVar15;
                  local_1a0 = '\0';
                  (**(code **)(*this_ptr + 0x9a8))();
                  if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
            else {
              local_1d8 = plVar15;
              local_1d0 = '\0';
              cVar3 = (**(code **)(*this_ptr + 0x9c8))();
              if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar3 == '\0') {
                local_1b8 = plVar15;
                local_1b0 = '\0';
                (**(code **)(*this_ptr + 0x9b0))();
                if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_1c8 = plVar15;
                local_1c0 = '\0';
                (**(code **)(*this_ptr + 0x9b8))();
                if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            local_168 = plVar15;
            local_160 = '\0';
            cVar3 = (**(code **)(*this_ptr + 0x9c8))();
            if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') {
              local_158 = plVar15;
              local_150 = '\0';
              (**(code **)(*this_ptr + 0x9a8))();
              if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
LAB_01b7338d:
      iVar4 = FUN_01d3b630();
      if (iVar4 == 2) {
        local_148 = *arg1;
        local_140 = '\0';
        (**(code **)(*this_ptr + 0x920))();
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00e7bcc0();
        local_80 = (int64_t *)FUN_00e7cd00((int)local_68);
        if (((iStack_ac != 0) && ((uint64_t)local_80 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          local_80 = (int64_t *)CONCAT44(iStack_ac,local_b0);
        }
        if ((((uint64_t)local_98 >> 0x20 != 0) && (local_80._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
          local_80 = local_98;
        }
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_d0 = '\0';
        local_d8 = 0;
        local_e8 = local_b8;
        local_e4 = local_b8;
        lVar1 = this_ptr[0x2b];
        plVar11 = local_98;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((void*)plVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar12 = local_238;
        FUN_01253c10(puVar12,&local_58,local_228,&local_e8);
        pVar9 = (void*)puVar12;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = this_ptr[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012535e0(local_230,&local_d8,local_220,&local_e4);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        iVar4 = FUN_01d3b620();
        if (iVar4 == 2) {
          pVar9 = (void*)&local_e0;
          FUN_01b6e930(local_c8._0_4_,&local_74,&local_218);
          plVar11 = local_40;
          if ((char)local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_01b73729;
            }
LAB_01b7387b:
            local_138 = *arg1;
            local_130 = '\0';
            cVar3 = (**(code **)(*this_ptr + 0x970))();
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') {
              local_260 = 0;
              local_258 = 0;
              local_250 = 0;
              local_268 = plVar15;
              FUN_01b755e0(local_80,&local_268,&local_258);
            }
            else {
              (**(code **)(*this_ptr + 0xa58))();
              (**(code **)(*local_40 + 0x388))(local_c8._0_4_);
              local_88 = FUN_01a8fc90();
              if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (*(char *)((int64_t)this_ptr + 0x1b6) != '\0') {
                FUN_01a8c310();
                pvVar6 = _pthread_getspecific(pVar9);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                pVar9 = 0;
                local_88 = FUN_016cac90(0,4);
                if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              cVar3 = (**(code **)(*this_ptr + 0x998))();
              if (cVar3 != '\0') {
                local_120 = '\0';
                local_128 = 0;
                (**(code **)(*this_ptr + 0x9a8))();
                if ((local_120 != '\0') && (local_128 != 0)) {
                  FUN_00d50b20();
                }
              }
              cVar3 = (**(code **)(*this_ptr + 0x9a0))();
              if (cVar3 != '\0') {
                (**(code **)(*this_ptr + 0xa10))();
              }
              cVar3 = (**(code **)(*this_ptr + 0xa38))();
              if (cVar3 != '\0') {
                (**(code **)(*this_ptr + 0xa30))(extraout_XMM0_Da_03,local_88);
                if ((local_290 != '\0') && (local_298 != 0)) {
                  FUN_00d50b20();
                }
                lVar1 = this_ptr[0x2b];
                if (lVar1 != 0) {
                  FUN_00d50b00();
                }
                pvVar6 = _pthread_getspecific(pVar9);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012521f0(local_88,0,local_200,0);
                plVar2 = local_40;
                pplVar7 = &local_38;
                if ((char)local_38 == '\0') {
                  pplVar7 = (int64_t **)local_48;
                }
                local_48[0] = (char)local_38;
                *(char *)pplVar7 = '\0';
                if (((char)local_38 != '\0') && (plVar2 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (lVar1 != 0) {
                  FUN_00d50b20();
                }
                if (((local_1fc != 0) && (local_88._4_4_ != 0)) &&
                   (cVar3 = FUN_00e7c000(), cVar3 != '\0')) goto LAB_01b73b9b;
              }
              local_280 = 0;
              local_278 = 0;
              local_270 = 0;
              local_288 = plVar15;
              FUN_01b755e0(local_88,&local_288,&local_278);
            }
LAB_01b73b9b:
            if (plVar11 == (int64_t *)0x0) goto LAB_01b73be8;
          }
          else {
            if (local_40 == (int64_t *)0x0) goto LAB_01b7387b;
LAB_01b73729:
            if (local_74 == 2) {
              if (local_218 >> 0x20 == 0) goto LAB_01b7387b;
              (**(code **)(*this_ptr + 0xa40))();
            }
            else {
              if ((local_74 != 0) || (local_e0._1_7_ >> 0x18 == 0)) goto LAB_01b7387b;
              (**(code **)(*this_ptr + 0xa40))();
            }
          }
          FUN_00d50b20();
        }
        else {
          if ((local_b4 & 6) == 0) {
            local_118 = *arg1;
            local_110 = '\0';
            cVar3 = FUN_01b76ac0();
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if (cVar3 == '\0') goto LAB_01b7364c;
          }
          else {
LAB_01b7364c:
            pVar9 = 0;
            FUN_01b6e930(local_c8._0_4_,0,0);
            plVar11 = local_40;
            if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 != (int64_t *)0x0) {
              (**(code **)(*this_ptr + 0xa58))();
              (**(code **)(*local_40 + 0x388))(local_c8._0_4_);
              local_80 = (int64_t *)FUN_01a8fc90();
              if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar1 = this_ptr[0x2b];
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012521f0(local_80,0,&local_b0,&local_98);
              plVar11 = local_40;
              pplVar7 = &local_38;
              if ((char)local_38 == '\0') {
                pplVar7 = &local_e0;
              }
              local_e0._0_1_ = (char)local_38;
              *(void*)pplVar7 = 0;
              if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (((char)local_e0 == '\0') && (plVar11 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
              if (plVar11 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            if ((char)local_44 != '\0') {
              local_108 = *arg1;
              local_100 = '\0';
              cVar3 = FUN_01b779e0();
              uVar17 = extraout_XMM0_Da_02;
              if ((local_100 != '\0') && (local_108 != 0)) {
                uVar17 = FUN_00d50b20();
              }
              if (cVar3 == '\0') {
                if ((char)local_70 == '\0') {
                  if ((char)local_60 != '\0') {
                    (**(code **)(*this_ptr + 0x9f0))(uVar17,local_98);
                  }
                }
                else {
                  (**(code **)(*this_ptr + 0xa10))();
                }
              }
            }
          }
          if (*(char *)((int64_t)this_ptr + 0x1b5) != '\0') {
            *(void*)((int64_t)this_ptr + 0x1b5) = 0;
            (**(code **)(*this_ptr + 0xa50))();
          }
        }
LAB_01b73be8:
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01b73c23;
    }
  }
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 == 2) && (cVar3 = (**(code **)(*this_ptr + 0x9d0))(), cVar3 != '\0')) {
    (**(code **)(*this_ptr + 0xad8))();
    plVar15 = local_40;
    if (((char)local_38 == '\0') &&
       (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), (char)local_38 != '\0')) &&
        (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_68 = plVar15;
    uVar8 = (**(code **)(*this_ptr + 0x9d8))();
    uVar14 = uVar8 >> 0x20;
    local_70 = uVar8;
    if (uVar14 == 0) {
      plVar15 = (int64_t *)this_ptr[0x2b];
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01252670(0,0,0,0);
      plVar11 = local_40;
      pplVar7 = &local_38;
      pplVar13 = &local_58;
      if ((char)local_38 != '\0') {
        pplVar13 = pplVar7;
      }
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
      *(void*)pplVar13 = 0;
      if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
        pplVar7 = (int64_t **)FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    else {
      plVar15 = (int64_t *)this_ptr[0x2b];
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012521f0(uVar8,0,0,0);
      plVar11 = local_40;
      pplVar7 = &local_38;
      pplVar13 = &local_58;
      if ((char)local_38 != '\0') {
        pplVar13 = pplVar7;
      }
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,(char)local_38);
      *(void*)pplVar13 = 0;
      if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
        pplVar7 = (int64_t **)FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = (uint32_t)CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
        if ((char)local_58 == '\0') {
          FUN_00d50b00();
        }
      }
      if (plVar15 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    local_c8 = plVar11;
    FUN_01d3b5d0();
    if (local_58 == (int64_t *)0x0) {
      bVar16 = false;
    }
    else {
      FUN_01d3b5d0();
      iVar4 = FUN_00d8c7a0();
      if ((iVar4 == 0) ||
         ((iVar4 = FUN_01d3b590(), iVar4 != 0 && (uVar8 = FUN_01d3b590(), (uVar8 & 4) == 0)))) {
        bVar16 = false;
      }
      else {
        FUN_01d3b5d0();
        cVar3 = FUN_00d8ca70();
        if (cVar3 == '\r') {
          bVar16 = *(char *)((int64_t)this_ptr + 0x1b4) == '\0' || uVar14 != 0;
        }
        else if (local_68 == (int64_t *)0x0) {
          bVar16 = false;
        }
        else {
          FUN_01d3b5d0();
          local_60 = local_98;
          if (local_90 == '\0') {
            if (local_98 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_40 = local_60;
          local_38._0_1_ = '\0';
          uVar5 = FUN_00d23d70();
          plVar15 = (int64_t *)(uint64_t)uVar5;
          if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((char)uVar5 == '\0') {
            bVar16 = false;
          }
          else {
            bVar16 = *(char *)((int64_t)this_ptr + 0x1b4) == '\0' || uVar14 != 0;
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_a8 != '\0') && (CONCAT44(iStack_ac,local_b0) != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = local_68;
    if (bVar16) {
      local_248 = local_c8;
      local_240 = 0;
      if (local_68 == (int64_t *)0x0) {
LAB_01b73247:
        bVar16 = local_68 != (int64_t *)0x0;
        local_210 = 0;
      }
      else {
        FUN_01d3b5d0();
        plVar15 = local_58;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_40 = plVar15;
        local_38._0_1_ = '\0';
        cVar3 = FUN_00d23d70();
        if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') goto LAB_01b73247;
        local_210 = *arg1;
        bVar16 = true;
      }
      local_208 = 0;
      FUN_01b755e0(local_70,&local_248,&local_210);
      plVar11 = local_68;
      if (bVar16) {
        if (plVar15 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_44 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01b73c23;
    }
    if (((char)local_44 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  local_f8 = *arg1;
  local_f0 = '\0';
  FUN_01e459c0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
LAB_01b73c23:
  if (local_a0 == (int64_t *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}

