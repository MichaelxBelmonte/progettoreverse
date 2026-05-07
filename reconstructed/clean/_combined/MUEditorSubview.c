// ===================================================================
// MUEditorSubview — Complete reconstructed pseudocode
// 17 functions
// ===================================================================


// ============================================================
// 019af4c0
// ============================================================
// Function: FUN_019af4c0
// Address: 019af4c0
// Size: 12355 bytes
// Class: MUEditorSubview

void FUN_019af4c0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int64_t lVar6;
  undefined7 uVar9;
  void *pvVar7;
  uint64_t uVar8;
  void* pVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int iVar13;
  uint64_t unaff_RBX;
  int64_t *this_ptr;
  uint uVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t **pplVar18;
  uint64_t uVar19;
  bool bVar20;
  uint64_t uVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t extraout_XMM0_Qa_06;
  uint64_t extraout_XMM0_Qa_07;
  uint64_t extraout_XMM0_Qa_08;
  uint64_t extraout_XMM0_Qa_09;
  int64_t local_378;
  char local_370;
  int64_t local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t *local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  int64_t *local_2c8;
  char local_2c0;
  int64_t *local_2b8;
  char local_2b0;
  int64_t *local_2a8;
  char local_2a0;
  int64_t *local_298;
  char local_290;
  int64_t *local_288;
  char local_280;
  int64_t *local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t *local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t *local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
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
  uint64_t local_108;
  code *local_100;
  uint64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  uint64_t local_c0;
  uint local_b4;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  uint64_t local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  uint64_t local_78;
  int local_70;
  int64_t *local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint local_4c;
  int64_t *local_48;
  char local_40;
  
  if (*(char *)((int64_t)this_ptr + 0x3c5) != '\0') {
    return;
  }
  *(void*)((int64_t)this_ptr + 0x3c5) = 1;
  (**(code **)(*this_ptr + 0x9b0))();
  plVar17 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (int64_t *)0x0) {
      bVar20 = (char)this_ptr[0x9f] == '\0';
      goto LAB_019af829;
    }
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar20 = (char)this_ptr[0x9f] == '\0';
LAB_019af55f:
    (**(code **)(*this_ptr + 0xe20))();
    local_1f8 = local_48;
    local_1f0 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_1f0 = '\x01';
    uVar21 = FUN_00243390();
    local_d0 = local_90;
    if (local_90 == (int64_t *)0x0) {
      local_d0 = (int64_t *)0x0;
      local_f8 = 0;
    }
    else if (local_88 == '\0') {
      uVar21 = FUN_00d50b00();
      local_f8 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
      uVar21 = extraout_XMM0_Qa;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
      local_f8 = CONCAT71((int7)((uint64_t)local_90 >> 8),1);
    }
    if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    plVar11 = (int64_t *)0x0;
    local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,bVar20);
    if ((int64_t *)this_ptr[0x41] == (int64_t *)0x0) goto LAB_019af83d;
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_108 = 0;
    local_80 = (int64_t *)this_ptr[0x41];
    while( true ) {
      iVar13 = (int)plVar11;
      if (iVar13 != 0) {
        if (iVar13 < 1) {
          iVar13 = -iVar13;
        }
        else {
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 - iVar13);
          FUN_00d23690(uVar21,plVar11);
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (int64_t)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((int64_t)local_80 + 0xc) <= iVar13) break;
      local_90 = *(int64_t **)(local_80[2] + 8 + lVar6 * 8);
      local_40 = '\0';
      local_48 = local_90;
      cVar2 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((cVar2 == '\0') ||
         (cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version + *this_ptr)
                  )(), uVar21 = extraout_XMM0_Qa_00, cVar2 == '\0')) {
        local_48 = local_90;
        local_40 = '\0';
        uVar21 = FUN_00d23f50();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_108 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
        if (((int64_t *)this_ptr[0x92] == local_90) &&
           ((int64_t *)this_ptr[0x92] != (int64_t *)0x0)) {
          this_ptr[0x92] = 0;
          uVar21 = FUN_00d50b20();
        }
      }
      plVar11 = (int64_t *)(local_78 >> 0x20);
    }
    FUN_001159b0();
    plVar11 = (int64_t *)0x0;
  }
  else {
    bVar20 = (char)this_ptr[0x9f] == '\0';
    if (local_90 != (int64_t *)0x0) goto LAB_019af55f;
LAB_019af829:
    local_c8 = (int64_t *)CONCAT71(local_c8._1_7_,bVar20);
    plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    local_f8 = 0;
    local_d0 = (int64_t *)0x0;
LAB_019af83d:
    local_108 = 0;
  }
  (**(code **)(*this_ptr + 0xa60))();
  (**(code **)(*this_ptr + 0x9b8))();
  plVar15 = local_90;
  if (plVar17 == local_90) {
    local_b0 = plVar17;
LAB_019af8ce:
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_88 == '\0') {
      if (local_90 != (int64_t *)0x0) {
        local_b0 = plVar17;
        FUN_00d50b00();
      }
      local_b0 = plVar15;
      if ((char)plVar11 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_019af8ce;
    }
    local_b0 = local_90;
    if ((char)plVar11 == '\0') {
      FUN_00d50b20();
    }
  }
  lVar6 = this_ptr[0x46];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (uint64_t)uVar14;
  if (0 < (int)uVar14) {
    local_68 = (int64_t *)0x0;
    local_4c = 0;
    uVar16 = 0;
    plVar17 = (int64_t *)0x0;
    do {
      uVar14 = uVar14 - 1;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar14 * 8) + 0x928))();
      plVar11 = local_90;
      local_a8 = local_90;
      uVar9 = (undefined7)((uint64_t)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        plVar11 = plVar17;
        local_c0 = uVar16;
        if ((cVar2 == '\0') && (plVar17 != (int64_t *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019afa47;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019afa0f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (int64_t *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          plVar11 = local_a8;
          local_c0 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
          if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar17 = plVar11;
            plVar11 = local_a8;
          }
          goto joined_r0x019afa0f;
        }
        local_c0 = CONCAT71(uVar9,1);
        if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar17 = plVar11;
          plVar11 = local_a8;
        }
      }
LAB_019afa47:
      local_a8 = plVar11;
      cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version + *this_ptr))();
      plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)plVar17 >> 8),1);
      if ((cVar2 != '\0') && (local_b0 != (int64_t *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        uVar5 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = (int64_t *)((uint64_t)uVar5 ^ 1);
      }
      plVar17 = local_68;
      if ((char)plVar11 != '\0') {
        plVar11 = *(int64_t **)(*(int64_t *)(this_ptr[0x46] + 0x10) + (uint64_t)uVar14 * 8);
        local_58 = uVar19;
        if (local_68 == plVar11) {
          if ((char)local_4c == '\0') {
            if (local_68 != (int64_t *)0x0) {
              local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,1);
              local_4c = 0;
              FUN_00d50b00();
              goto LAB_019afb2b;
            }
            local_a0 = (int64_t *)((uint64_t)local_a0._1_7_ << 8);
            if (this_ptr[0x4b] == 0) goto LAB_019afb3c;
          }
          else {
            local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,(char)local_4c);
            if ((int64_t *)this_ptr[0x4b] == local_68) goto LAB_019afb3c;
          }
        }
        else {
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_a0 = (int64_t *)CONCAT71(local_a0._1_7_,1);
          plVar17 = plVar11;
          if (((char)local_4c != '\0') && (local_68 != (int64_t *)0x0)) {
            local_68 = plVar11;
            FUN_00d50b20();
          }
LAB_019afb2b:
          if ((int64_t *)this_ptr[0x4b] == plVar17) {
LAB_019afb3c:
            (**(code **)(&g_00001440 + *this_ptr))();
          }
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01960580();
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
        local_4c = (uint)(byte)local_a0;
        uVar19 = local_58;
        local_68 = plVar17;
      }
      if ((int64_t)uVar19 < 2) goto LAB_019afd25;
      uVar19 = uVar19 - 1;
      lVar6 = this_ptr[0x46];
      uVar16 = local_c0 & 0xffffffff;
      plVar17 = local_a8;
    } while( true );
  }
  local_c0 = 0;
  local_a8 = (int64_t *)0x0;
  local_4c = 0;
  local_68 = (int64_t *)0x0;
LAB_019afd25:
  lVar6 = this_ptr[0x49];
  uVar14 = *(uint *)(lVar6 + 0xc);
  plVar17 = (int64_t *)(uint64_t)uVar14;
  if (0 < (int)uVar14) {
    local_60 = (int64_t *)0x0;
    uVar21 = 0;
    local_98 = 0;
    do {
      uVar14 = uVar14 - 1;
      uVar19 = (uint64_t)uVar14;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0x10) + uVar19 * 8) + 0x928))();
      if (local_48 == (int64_t *)0x0) {
        cVar2 = '\x01';
      }
      else {
        (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr[0x49] + 0x10) + uVar19 * 8) + 0x928))()
        ;
        plVar11 = local_f0;
        local_1e0 = 0;
        if (local_e8 == '\0') {
          if (local_f0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        local_1e0 = '\x01';
        local_1e8 = plVar11;
        cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *this_ptr + 0x30))();
        cVar2 = '\x01';
        if ((cVar3 != '\0') && (local_b0 != (int64_t *)0x0)) {
          (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr[0x49] + 0x10) + uVar19 * 8) + 0x928))
                    ();
          plVar11 = local_e0;
          if (local_d8 == '\0') {
            if (local_e0 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d8 = '\0';
          }
          local_90 = plVar11;
          local_88 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          cVar2 = '\x01';
          if (cVar3 != '\0') {
            (**(code **)(**(int64_t **)(*(int64_t *)(this_ptr[0x49] + 0x10) + uVar19 * 8) + 0x928
                        ))();
            pvVar7 = _pthread_getspecific((void*)uVar21);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_01263cf0();
            if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          plVar11 = plVar17;
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar15 = local_60;
      if (cVar2 != '\0') {
        plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0x49] + 0x10) + uVar19 * 8);
        if (local_60 == plVar1) {
          if ((char)local_98 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              local_98 = 0;
              FUN_00d50b00();
              goto LAB_019b000b;
            }
            plVar11 = (int64_t *)(local_98 & 0xffffffff);
            if (this_ptr[0x4b] == 0) goto LAB_019b001c;
          }
          else {
            plVar11 = (int64_t *)(local_98 & 0xffffffff);
            if ((int64_t *)this_ptr[0x4b] == local_60) goto LAB_019b001c;
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar15 = plVar1;
          if (((char)local_98 != '\0') && (local_60 != (int64_t *)0x0)) {
            local_60 = plVar1;
            FUN_00d50b20();
          }
LAB_019b000b:
          plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
          if ((int64_t *)this_ptr[0x4b] == plVar15) {
LAB_019b001c:
            (**(code **)(&g_00001440 + *this_ptr))();
          }
        }
        FUN_019781b0();
        (**(code **)(*plVar15 + 0x478))();
        FUN_00d23620();
        local_98 = (uint64_t)plVar11 & 0xffffffff;
        local_60 = plVar15;
      }
      if ((int64_t)plVar17 < 2) goto LAB_019b0155;
      plVar17 = (int64_t *)((int64_t)plVar17 + -1);
      lVar6 = this_ptr[0x49];
    } while( true );
  }
  local_98 = 0;
  local_60 = (int64_t *)0x0;
LAB_019b0155:
  lVar6 = this_ptr[0x4a];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (uint64_t)uVar14;
  local_c8 = (int64_t *)CONCAT44(local_c8._4_4_,(uint)(byte)local_c8);
  if (0 < (int)uVar14) {
    plVar17 = (int64_t *)0x0;
    uVar16 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar6 = *(int64_t *)(lVar6 + 0x10);
      plVar11 = *(int64_t **)(lVar6 + (uint64_t)uVar14 * 8);
      if (plVar17 == plVar11) {
        if (((char)uVar16 == '\0') && (plVar17 != (int64_t *)0x0)) {
          local_58 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
          FUN_00d50b00();
          plVar11 = plVar17;
          goto LAB_019b0200;
        }
        local_a0 = plVar17;
        local_58 = uVar16;
        if (local_b0 != (int64_t *)0x0) goto LAB_019b0215;
LAB_019b0551:
        plVar17 = local_a0;
        FUN_0197ef60();
        if ((int64_t *)this_ptr[0x4b] == plVar17) {
          (**(code **)(&g_00001440 + *this_ptr))();
        }
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
      }
      else {
        if (plVar11 != (int64_t *)0x0) {
          lVar6 = FUN_00d50b00();
        }
        local_58 = CONCAT71((int7)((uint64_t)lVar6 >> 8),1);
        if (((char)uVar16 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0200:
        plVar17 = plVar11;
        local_a0 = plVar11;
        if (local_b0 == (int64_t *)0x0) goto LAB_019b0551;
LAB_019b0215:
        local_a0 = plVar17;
        (**(code **)(*plVar17 + 0x928))();
        plVar17 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar17;
        local_88 = '\0';
        cVar2 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = 1;
        if (cVar2 != '\0') {
          cVar2 = FUN_019801a0();
          local_b4 = CONCAT31(local_b4._1_3_,cVar2);
          if (cVar2 == '\0') {
LAB_019b035b:
            cVar2 = FUN_019801b0();
            local_100 = CONCAT71(local_100._1_7_,cVar2);
            if (cVar2 == '\0') {
LAB_019b03fd:
              (**(code **)(*local_a0 + 0x928))();
              plVar11 = local_90;
              local_1b0 = 0;
              if (local_88 == '\0') {
                if (local_90 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_88 = '\0';
              }
              local_1b0 = '\x01';
              local_1b8 = plVar11;
              bVar4 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version +
                                  *this_ptr))();
              if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar4 = bVar4 ^ 1;
              if ((char)local_100 != '\0') goto LAB_019b04af;
            }
            else {
              (**(code **)(*local_a0 + 0x928))();
              local_1c8 = local_e0;
              local_1c0 = 0;
              if (local_d8 == '\0') {
                if (local_e0 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d8 = '\0';
              }
              local_1c0 = '\x01';
              cVar2 = (**(code **)(
                                  "/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                  + *this_ptr + 8))();
              bVar4 = 1;
              if (cVar2 != '\0') goto LAB_019b03fd;
LAB_019b04af:
              if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((char)local_b4 == '\0') goto LAB_019b0520;
          }
          else {
            (**(code **)(*local_a0 + 0x928))();
            local_1d8 = local_f0;
            local_1d0 = 0;
            if (local_e8 == '\0') {
              if (local_f0 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_e8 = '\0';
            }
            local_1d0 = '\x01';
            cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                + *this_ptr))();
            bVar4 = 1;
            if (cVar2 != '\0') goto LAB_019b035b;
          }
          if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b0520:
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar17 = local_a0;
        if (bVar4 != 0) goto LAB_019b0551;
      }
      if ((int64_t)uVar19 < 2) goto LAB_019b0631;
      uVar19 = uVar19 - 1;
      lVar6 = this_ptr[0x4a];
      uVar16 = local_58 & 0xffffffff;
    } while( true );
  }
  local_58 = 0;
  plVar17 = (int64_t *)0x0;
LAB_019b0631:
  local_100 = (**(code **)(*this_ptr + 0xa58))();
  (**(code **)(*this_ptr + 0x9b8))();
  plVar11 = local_90;
  if (local_90 != local_b0) {
    if (local_88 != '\0') {
      if (local_b0 == (int64_t *)0x0) {
        local_b0 = local_90;
      }
      else {
        local_b0 = local_90;
        FUN_00d50b20();
      }
      goto LAB_019b06dd;
    }
    if (local_90 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar20 = local_b0 != (int64_t *)0x0;
    local_b0 = plVar11;
    if (bVar20) {
      FUN_00d50b20();
    }
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_019b06dd:
  if (local_b0 == (int64_t *)0x0) {
    local_b4 = 0;
  }
  else {
    local_88 = 0;
    local_90 = (int64_t *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    local_b4 = 0;
    local_a0 = plVar17;
    while( true ) {
      lVar6 = (int64_t)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((int64_t)local_80 + 0xc) <= (int)local_78) break;
      local_378 = *(int64_t *)(local_80[2] + 8 + lVar6 * 8);
      local_370 = '\0';
      local_90 = (int64_t *)local_378;
      (**(code **)(*this_ptr + 0xab0))(local_80[2],&local_378);
      plVar11 = local_48;
      plVar17 = local_68;
      uVar9 = (undefined7)(uVar19 >> 8);
      if (local_48 == local_68) {
        if (((char)local_4c == '\0') && (local_48 != (int64_t *)0x0)) {
          plVar11 = local_68;
          if (local_40 != '\0') goto LAB_019b0805;
          uVar19 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
        else {
          uVar19 = (uint64_t)local_4c;
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
        if (((char)local_4c != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_4c != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0805:
        local_40 = '\0';
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
      }
      if (plVar17 == (int64_t *)0x0) {
        local_368 = (int64_t)local_90;
        local_360 = '\0';
        cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version + *this_ptr))
                          ();
        if ((local_360 != '\0') && (local_368 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar2 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_370 != '\0') && (local_378 != 0)) {
        FUN_00d50b20();
      }
      uVar14 = (uint)uVar19;
      if (cVar2 != '\0') {
        (**(code **)(&UNK_000014e8 + *this_ptr))();
        local_68 = local_48;
        cVar2 = (char)uVar19;
        uVar9 = (undefined7)((uint64_t)local_48 >> 8);
        plVar11 = local_48;
        if (local_48 == plVar17) {
          plVar15 = plVar17;
          local_4c = uVar14;
          if ((cVar2 == '\0') && (local_48 != (int64_t *)0x0)) {
            local_4c = (uint)CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b09af;
            local_4c = (uint)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
LAB_019b099b:
          local_68 = plVar15;
          plVar15 = local_68;
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
        else {
          if (local_40 == '\0') {
            uVar21 = 0;
            if (local_48 != (int64_t *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_4c = (uint)CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
            plVar15 = local_68;
            if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar15 = local_68;
            }
            goto LAB_019b099b;
          }
          local_4c = (uint)CONCAT71(uVar9,1);
          plVar15 = local_68;
          if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
LAB_019b09af:
        local_68 = plVar15;
        pVar10 = (void*)plVar11;
        local_358 = (int64_t)local_90;
        local_350 = '\0';
        FUN_01960580();
        if ((local_350 != '\0') && (local_358 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_1a0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_1a0 = '\x01';
        local_1a8 = plVar17;
        FUN_0198a7b0();
        if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_348 = local_68;
        local_340 = '\0';
        (**(code **)(*this_ptr + 0x450))();
        if ((local_340 != '\0') && (local_348 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = local_68;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_338 = local_68;
        local_330 = '\0';
        uVar21 = (**(code **)(*local_68 + 0x928))();
        plVar17 = local_48;
        local_190 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            uVar21 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_190 = '\x01';
        local_198 = plVar17;
        uVar21 = FUN_019b43b0(uVar21,&local_198);
        if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
        plVar17 = local_68;
        uVar14 = local_4c;
        if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_68;
          uVar14 = local_4c;
        }
      }
      local_4c = uVar14;
      local_68 = plVar17;
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    plVar17 = local_a0;
    local_88 = 0;
    local_90 = (int64_t *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    pplVar18 = &local_48;
    while( true ) {
      lVar6 = (int64_t)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((int64_t)local_80 + 0xc) <= (int)local_78) break;
      lVar12 = local_80[2];
      local_90 = *(int64_t **)(lVar12 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar12);
      pVar10 = (void*)lVar12;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar21 = FUN_0125e930();
      if (local_48 == (int64_t *)0x0) {
LAB_019b0d61:
        cVar2 = '\0';
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        uVar21 = extraout_XMM0_Qa_01;
        if (cVar2 != '\0') goto LAB_019b0d61;
        local_328 = (int64_t)local_90;
        local_320 = '\0';
        cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *this_ptr + 0x30))();
        uVar21 = extraout_XMM0_Qa_02;
        if ((local_320 != '\0') && (local_328 != 0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_318 = (int64_t)local_90;
        local_310 = '\0';
        (**(code **)(*this_ptr + 0xae8))(uVar21,&local_318);
        plVar11 = local_60;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == local_60) {
          if (((char)local_98 == '\0') && (local_48 != (int64_t *)0x0)) {
            if (local_40 != '\0') goto LAB_019b0e68;
            uVar19 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            uVar19 = local_98 & 0xffffffff;
          }
LAB_019b0ec0:
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_98 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019b0ec0;
          }
          if (((char)local_98 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_019b0e68:
          local_40 = '\0';
          uVar19 = CONCAT71(uVar9,1);
        }
        if ((local_310 != '\0') && (local_318 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (int64_t *)0x0) {
          (**(code **)(&UNK_000014f0 + *this_ptr))();
          local_60 = local_48;
          plVar11 = local_48;
          if (local_48 == (int64_t *)0x0) {
            local_60 = (int64_t *)0x0;
            local_98 = uVar19 & 0xffffffff;
          }
          else {
            local_98 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          pVar10 = (void*)plVar11;
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
          local_180 = 0;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_180 = '\x01';
          local_188 = plVar11;
          FUN_0198a7b0();
          if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_308 = local_60;
          local_300 = '\0';
          (**(code **)(*this_ptr + 0x450))();
          if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = local_60;
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          plVar11 = local_48;
          local_170 = 0;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_170 = '\x01';
          local_178 = plVar11;
          uVar21 = FUN_019781b0();
          if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
        }
        else {
          local_98 = uVar19 & 0xffffffff;
          local_60 = plVar11;
        }
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    local_80 = local_b0;
    local_78 = 0xffffffff;
    local_70 = 0;
    while( true ) {
      lVar6 = (int64_t)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((int64_t)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_2f8 = *(int64_t **)(lVar12 + 8 + lVar6 * 8);
      local_2f0 = '\0';
      local_90 = local_2f8;
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *this_ptr))(lVar12,(uint64_t)local_c8 & 0xffffffff);
      pVar10 = (void*)lVar12;
      if (cVar2 == '\0') {
        bVar20 = false;
        uVar19 = local_58 & 0xffffffff;
        uVar21 = extraout_XMM0_Qa_03;
      }
      else {
        local_2e8 = local_90;
        local_2e0 = '\0';
        uVar21 = (**(code **)(*this_ptr + 0xaf0))(extraout_XMM0_Qa_03,&local_2e8);
        plVar11 = local_48;
        uVar9 = (undefined7)((uint64_t)pplVar18 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b12e4;
            uVar19 = CONCAT71(uVar9,1);
            uVar21 = FUN_00d50b00();
          }
          else {
            uVar19 = local_58 & 0xffffffff;
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (int64_t *)0x0)) {
              uVar21 = FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1330;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (int64_t *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
LAB_019b12e4:
            local_40 = '\0';
          }
          uVar19 = CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1330:
        bVar20 = plVar17 == (int64_t *)0x0;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *this_ptr))();
        plVar11 = local_48;
        uVar9 = (undefined7)((uint64_t)uVar21 >> 8);
        cVar2 = (char)uVar19;
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (int64_t *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b146e;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = uVar19 & 0xffffffff;
          }
joined_r0x019b1446:
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1446;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b146e:
        local_2d8 = local_90;
        local_2d0 = '\0';
        FUN_0197ef60();
        if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ac0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_160 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_160 = '\x01';
        local_168 = plVar17;
        FUN_0198a7b0();
        if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_2c0 = '\0';
        local_2c8 = plVar11;
        (**(code **)(*this_ptr + 0x450))();
        if ((local_2c0 != '\0') && (local_2c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*this_ptr + 0xed0))();
        plVar17 = local_48;
        local_150 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_150 = '\x01';
        local_158 = plVar17;
        uVar8 = FUN_01983f50();
        uVar21 = extraout_XMM0_Qa_04;
        if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_05;
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_06;
        }
        local_b4 = (uint)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = uVar19 & 0xffffffff;
      }
      local_2b8 = local_90;
      local_2b0 = '\0';
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *this_ptr + 8))(uVar21,(uint64_t)local_c8 & 0xffffffff);
      if (cVar2 == '\0') {
        bVar20 = false;
        pplVar18 = (int64_t **)(local_58 & 0xffffffff);
      }
      else {
        local_2a8 = local_90;
        local_2a0 = '\0';
        (**(code **)(*this_ptr + 0xaf8))(extraout_XMM0_Qa_07,&local_2a8);
        plVar11 = local_48;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (int64_t *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b1744;
            pplVar18 = (int64_t **)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            pplVar18 = (int64_t **)(local_58 & 0xffffffff);
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            pplVar18 = (int64_t **)CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1790;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_019b1744:
            local_40 = '\0';
          }
          pplVar18 = (int64_t **)CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1790:
        bVar20 = plVar17 == (int64_t *)0x0;
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2a0 != '\0') && (local_2a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_2b0 != '\0') && (local_2b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *this_ptr))();
        plVar11 = local_48;
        cVar2 = (char)pplVar18;
        uVar9 = (undefined7)((uint64_t)uVar21 >> 8);
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (int64_t *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b18be;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = (uint64_t)pplVar18 & 0xffffffff;
          }
joined_r0x019b1896:
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1896;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b18be:
        local_298 = local_90;
        local_290 = '\0';
        FUN_0197ef60();
        if ((local_290 != '\0') && (local_298 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ad0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_140 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_140 = '\x01';
        local_148 = plVar17;
        FUN_0198a7b0();
        if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_280 = '\0';
        local_288 = plVar11;
        (**(code **)(*this_ptr + 0x450))();
        if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*this_ptr + 0xed0))();
        plVar17 = local_48;
        local_130 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_130 = '\x01';
        local_138 = plVar17;
        uVar21 = FUN_01983f50();
        if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = (uint64_t)pplVar18 & 0xffffffff;
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78._4_4_ = (int)(local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
    }
    FUN_001159b0();
  }
  local_a0 = plVar17;
  uVar21 = (**(code **)(*this_ptr + 0x9d8))(local_100,param_2);
  plVar11 = local_90;
  if ((((local_88 == '\0') && (local_90 != (int64_t *)0x0)) &&
      (uVar21 = FUN_00d50b00(), local_88 != '\0')) && (local_90 != (int64_t *)0x0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar6 = this_ptr[0x48];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (uint64_t)uVar14;
  local_c8 = plVar11;
  if (0 < (int)uVar14) {
    do {
      plVar17 = local_a8;
      uVar14 = uVar14 - 1;
      uVar16 = local_c0 & 0xffffffff;
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar14 * 8) + 0x928))();
      local_a8 = local_90;
      uVar9 = (undefined7)((uint64_t)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        local_c0 = uVar16;
        plVar11 = plVar17;
        if ((cVar2 == '\0') && (plVar17 != (int64_t *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019b1cd7;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019b1c8f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (int64_t *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          local_c0 = CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
          plVar11 = local_a8;
          if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar11 = local_a8;
          }
          goto joined_r0x019b1c8f;
        }
        local_c0 = CONCAT71(uVar9,1);
        plVar11 = local_a8;
        if ((cVar2 != '\0') && (plVar17 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
LAB_019b1cd7:
      local_a8 = plVar11;
      local_278 = local_a8;
      local_270 = '\0';
      cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version + *this_ptr))();
      bVar4 = 1;
      uVar21 = extraout_XMM0_Qa_08;
      if ((cVar2 != '\0') && (local_c8 != (int64_t *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        bVar4 = FUN_00d24090();
        uVar21 = extraout_XMM0_Qa_09;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        bVar4 = bVar4 ^ 1;
      }
      if ((local_270 != '\0') && (local_278 != (int64_t *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar4 != 0) {
        plVar17 = *(int64_t **)(*(int64_t *)(this_ptr[0x48] + 0x10) + (uint64_t)uVar14 * 8);
        if (plVar17 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        local_260 = '\0';
        local_268 = 0;
        FUN_01960580();
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar17 + 0x478))();
        uVar21 = FUN_00d50b20();
      }
      plVar17 = local_a0;
      if ((int64_t)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
      lVar6 = this_ptr[0x48];
    } while( true );
  }
  if (local_c8 != (int64_t *)0x0) {
    local_88 = '\0';
    local_90 = (int64_t *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_100 = g_02621e10;
    local_78._4_4_ = 0;
    local_80 = local_c8;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (int64_t)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((int64_t)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_258 = *(int64_t **)(lVar12 + 8 + lVar6 * 8);
      local_250 = '\0';
      local_90 = local_258;
      (**(code **)(*this_ptr + 0xac0))(lVar12,&local_258);
      plVar17 = local_48;
      pVar10 = (void*)lVar12;
      if (local_40 == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_250 != '\0') && (local_258 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (int64_t *)0x0) {
        local_248 = local_90;
        local_240 = '\0';
        cVar2 = (**(code **)((int64_t)&dylib_command_000012e8.dylib.current_version + *this_ptr))
                          ();
        if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar17 = (int64_t *)FUN_00e8fc40();
          FUN_0034cc20();
          *plVar17 = (int64_t)&g_02621df8;
          plVar17[2] = (int64_t)&g_026227f0;
          plVar17[0x27] = (int64_t)&g_02622830;
          plVar17[0x2d] = (int64_t)&g_02622860;
          plVar17[0x2e] = (int64_t)&g_026228b0;
          (*local_100)();
          local_238 = local_90;
          local_230 = '\0';
          FUN_01960580();
          if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
          local_120 = 0;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_120 = '\x01';
          local_128 = plVar11;
          FUN_0198a7b0();
          if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_220 = '\0';
          local_228 = plVar17;
          (**(code **)(*this_ptr + 0x450))();
          if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar17;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_210 = '\0';
          local_218 = plVar17;
          uVar21 = (**(code **)(*plVar17 + 0x928))();
          plVar17 = local_48;
          local_110 = 0;
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              uVar21 = FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_110 = '\x01';
          local_118 = plVar17;
          uVar21 = FUN_019b43b0(uVar21,&local_118);
          if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((uint64_t)uVar21 >> 8),1);
          if ((local_210 != '\0') && (local_218 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019b1f00;
        }
      }
      else {
LAB_019b1f00:
        FUN_00d50b20();
      }
    }
    uVar21 = FUN_001159b0();
    plVar17 = local_a0;
  }
  if ((local_108 & 1) != 0) {
    local_208 = local_d0;
    local_200 = '\0';
    (**(code **)(*this_ptr + 0xdc8))(uVar21,1);
    if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  for (iVar13 = *(int *)(this_ptr[0x48] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(this_ptr[0x46] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(this_ptr[0x49] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  uVar19 = (uint64_t)*(uint *)(this_ptr[0x4a] + 0xc);
  if (0 < (int)*(uint *)(this_ptr[0x4a] + 0xc)) {
    while( true ) {
      FUN_019801c0();
      plVar17 = local_90;
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (int64_t *)0x0) {
        FUN_0198a800();
      }
      if ((int64_t)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
    }
    uVar19 = (uint64_t)*(uint *)(this_ptr[0x4a] + 0xc);
    plVar17 = local_a0;
    if (0 < (int)*(uint *)(this_ptr[0x4a] + 0xc)) {
      while( true ) {
        FUN_019801c0();
        plVar17 = local_90;
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (int64_t *)0x0) {
          FUN_0198a800();
        }
        plVar17 = local_a0;
        if ((int64_t)uVar19 < 2) break;
        uVar19 = uVar19 - 1;
      }
    }
  }
  if ((int64_t *)this_ptr[0x58] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x58] + 0x458))();
  }
  plVar11 = (int64_t *)this_ptr[0x59];
  if ((plVar11 != (int64_t *)0x0) && ((int64_t *)this_ptr[0x58] != plVar11)) {
    (**(code **)(*plVar11 + 0x458))();
  }
  if ((local_b4 & 1) != 0) {
    (**(code **)(*this_ptr + 0xb48))();
  }
  (**(code **)(&g_000014b8 + *this_ptr))();
  *(void*)((int64_t)this_ptr + 0x3c5) = 0;
  if (local_c8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar17 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019365c0
// ============================================================
// Function: FUN_019365c0
// Address: 019365c0
// Size: 2753 bytes
// Class: MUEditorSubview

void FUN_019365c0(uint64_t param_1,double param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t **pplVar7;
  int64_t lVar8;
  void *pvVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  void* pVar12;
  int64_t lVar13;
  double dVar14;
  int64_t *this_ptr;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  int64_t local_d8;
  char local_d0;
  uint64_t local_90;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  double local_40;
  int64_t *local_38;
  
  plVar3 = local_80;
  FUN_019af4c0();
  if (this_ptr[0xa7] == 0) {
    if (*(int *)(this_ptr[0xab] + 0xc) == 0) {
      return;
    }
    do {
      FUN_00d23340();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_019562f0();
      if (((char)local_58 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x478))();
      if ((char)local_58 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    } while (*(int *)(this_ptr[0xab] + 0xc) != 0);
    return;
  }
  local_38 = (int64_t *)(**(code **)(*this_ptr + 0xa60))();
  local_40 = param_2;
  dVar16 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  dVar14 = local_40;
  (**(code **)(&UNK_000016d0 + *this_ptr))((double)local_38 - dVar16);
  if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = *(uint *)(this_ptr[0xab] + 0xc);
  local_90 = (uint64_t)uVar15;
  if ((int)uVar15 < 1) {
    local_40 = 0.0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    local_38 = (int64_t *)0x0;
    local_48 = (double)((uint64_t)local_48 & 0xffffffff00000000);
    while( true ) {
      plVar2 = local_80;
      uVar15 = uVar15 - 1;
      FUN_01956980();
      local_58 = (int64_t *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (int64_t **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (int64_t *)0x0) {
        iVar5 = -1;
      }
      else {
        local_78[0] = '\0';
        iVar5 = FUN_00d23d20();
        if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(&g_00001770 + *this_ptr))();
      plVar6 = local_38;
      if (cVar4 == '\x01' && iVar5 != -1) {
        local_40 = (double)((uint64_t)local_48 & 0xffffffff);
      }
      else {
        plVar1 = *(int64_t **)(*(int64_t *)(this_ptr[0xab] + 0x10) + (uint64_t)uVar15 * 8);
        if (local_38 == plVar1) {
          if (((char)local_48 == '\0') && (local_38 != (int64_t *)0x0)) {
            local_40 = (double)CONCAT71((int7)((uint64_t)local_38 >> 8),1);
            local_48 = (double)((uint64_t)local_48 & 0xffffffff00000000);
            FUN_00d50b00();
          }
          else {
            local_40 = (double)((uint64_t)local_48 & 0xffffffff);
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            plVar6 = (int64_t *)FUN_00d50b00();
          }
          local_40 = (double)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
          plVar6 = plVar1;
          if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
            local_38 = plVar1;
            FUN_00d50b20();
          }
        }
        FUN_019562f0();
        (**(code **)(*plVar6 + 0x478))();
        local_78[0] = '\0';
        FUN_00d23f50();
        local_80 = plVar6;
        if ((local_78[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (iVar5 != -1) {
        FUN_00d23620();
      }
      if (((char)local_58 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((int64_t)local_90 < 2) break;
      local_90 = local_90 - 1;
      local_48 = (double)CONCAT44(local_48._4_4_,SUB84(local_40,0));
      local_38 = plVar6;
    }
  }
  local_38 = plVar6;
  dVar16 = (double)(**(code **)(*this_ptr + 0xa58))();
  FUN_019363e0();
  if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  dVar17 = (double)(**(code **)(&UNK_000016a8 + *this_ptr))();
  if (plVar3 != (int64_t *)0x0) {
    local_48 = dVar16 - local_48;
    local_78[0] = '\0';
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = plVar3;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          iVar5 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
      lVar8 = (int64_t)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar5) break;
      lVar13 = local_70[2];
      plVar2 = *(int64_t **)(lVar13 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((void*)lVar13);
      pVar12 = (void*)lVar13;
      plVar6 = plVar2;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x378))();
      plVar6 = local_58;
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        pvVar9 = _pthread_getspecific(pVar12);
        plVar6 = plVar2;
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar6 + 0x378))();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar6 = local_58;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (int64_t *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar18 = (double)FUN_014bb4b0();
          if (local_48 <= dVar18) {
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_014bb3e0();
            if (dVar18 <= (dVar16 - dVar17) + dVar14) {
              local_50 = '\0';
              local_58 = plVar2;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  plVar2 = plVar3;
  dVar14 = local_40;
  plVar6 = local_38;
  if (plVar3 != local_80) {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_80;
    dVar14 = local_40;
    plVar6 = local_38;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
      dVar14 = local_40;
      plVar6 = local_38;
    }
  }
  local_40 = dVar14;
  local_38 = plVar6;
  if (plVar2 == (int64_t *)0x0) {
    uVar15 = 0;
  }
  else {
    local_78[0] = '\0';
    local_60 = 0;
    local_68 = 0;
    local_48._4_4_ = (uint)((uint64_t)local_48 >> 0x20);
    local_70 = plVar2;
    if (*(int *)((int64_t)plVar2 + 0xc) < 1) {
      local_48 = (double)((uint64_t)local_48._4_4_ << 0x20);
    }
    else {
      iVar5 = 0;
      local_48 = (double)((uint64_t)local_48._4_4_ << 0x20);
      do {
        dVar14 = (double)((uint64_t)dVar14 & 0xffffffff);
        cVar4 = (**(code **)(&g_00001770 + *this_ptr))();
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000016d8 + *this_ptr))();
          local_38 = local_58;
          cVar4 = SUB81(dVar14,0);
          uVar11 = (undefined7)((uint64_t)local_58 >> 8);
          if (local_58 == plVar6) {
            local_40 = dVar14;
            plVar3 = plVar6;
            if ((cVar4 == '\0') && (local_58 != (int64_t *)0x0)) {
              local_40 = (double)CONCAT71(uVar11,1);
              if (local_50 != '\0') goto LAB_01936f36;
              local_40 = (double)CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
LAB_01936f22:
            local_38 = plVar3;
            plVar3 = local_38;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
          else {
            if (local_50 == '\0') {
              uVar10 = 0;
              if (local_58 != (int64_t *)0x0) {
                uVar10 = FUN_00d50b00();
              }
              local_40 = (double)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
              plVar3 = local_38;
              if ((cVar4 != '\0') && (plVar6 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar3 = local_38;
              }
              goto LAB_01936f22;
            }
            local_40 = (double)CONCAT71(uVar11,1);
            plVar3 = local_38;
            if ((cVar4 != '\0') && (plVar6 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
LAB_01936f36:
          local_38 = plVar3;
          (**(code **)(*this_ptr + 0x450))();
          local_58 = local_38;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = FUN_019562f0();
          local_48 = (double)CONCAT44(local_48._4_4_,(int)CONCAT71((int7)((uint64_t)uVar10 >> 8),1)
                                     );
          plVar6 = local_38;
          dVar14 = local_40;
        }
        iVar5 = iVar5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      } while (iVar5 < *(int *)((int64_t)plVar2 + 0xc));
    }
    local_40 = dVar14;
    local_38 = plVar6;
    FUN_0131c810();
    uVar15 = (uint)local_48;
  }
  for (iVar5 = *(int *)(this_ptr[0xab] + 0xc); plVar3 = local_38, 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_0198a800();
  }
  if ((uVar15 & 1) != 0) {
    (**(code **)(*this_ptr + 0xb48))();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40._0_1_ != '\0') && (plVar3 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019a40d0
// ============================================================
// Function: FUN_019a40d0
// Address: 019a40d0
// Size: 1170 bytes
// Class: MUEditorSubview

void FUN_019a40d0(void)

{
  int64_t *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  undefined7 uVar10;
  int iVar11;
  uint64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t local_b0;
  char local_a8;
  uint64_t local_a0;
  char local_98;
  uint64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint64_t local_50;
  int local_48;
  uint64_t local_40;
  int64_t local_38;
  
  plVar1 = (int64_t *)*arg1;
  plVar8 = (int64_t *)this_ptr[0x3d];
  if (plVar1 == plVar8) {
    return;
  }
  if (plVar1 != (int64_t *)0x0) {
    local_78 = 0;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = plVar8;
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    plVar8 = (int64_t *)(uint64_t)uVar3;
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  if (this_ptr[0x9e] != 0) {
    this_ptr[0x9e] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x990))();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x38))();
  FUN_00d216c0();
  if (*arg1 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar8 = &local_b0;
    local_58 = *arg1;
    iVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar4 = -iVar11;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar7 = (int64_t)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)(local_58 + 0xc) <= iVar11) break;
      local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
      iVar11 = iVar4;
      if (local_68 != 0) {
        local_a8 = '\0';
        local_b0 = local_68;
        FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = local_50._4_4_;
      }
    }
    FUN_000be170();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *this_ptr + 0x30))();
  (**(code **)(*this_ptr + 0x970))();
  lVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_019a42e5;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
LAB_019a42b9:
    local_70 = lVar7;
    uVar5 = FUN_0197c2b0();
    lVar7 = local_68;
    if (local_68 == 0) {
      local_40 = 0;
      local_38 = 0;
joined_r0x019a4302:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = lVar7 != 0;
      if (local_38 != 0) {
        uVar9 = (uint64_t)plVar1 & 0xffffff00;
        goto LAB_019a433d;
      }
      local_38 = 0;
      uVar9 = (uint64_t)plVar1 & 0xffffff00;
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        local_38 = lVar7;
        goto joined_r0x019a4302;
      }
      uVar9 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      bVar2 = true;
      local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      local_38 = local_68;
LAB_019a433d:
      local_a0 = *arg1;
      local_98 = '\0';
      FUN_01a17f30();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = FUN_0197c480();
    lVar12 = local_68;
    uVar6 = (undefined7)((uint64_t)uVar5 >> 8);
    uVar10 = (undefined7)(uVar9 >> 8);
    if (local_68 == local_38) {
      if (lVar7 == 0) {
        if (local_68 == 0) {
          uVar9 = local_40 & 0xffffffff;
        }
        else {
          lVar12 = local_38;
          if (local_60 != '\0') goto joined_r0x019a43d0;
          uVar9 = CONCAT71(uVar10,1);
          local_40 = 0;
          FUN_00d50b00();
        }
      }
      else {
        uVar9 = local_40 & 0xffffffff;
      }
LAB_019a4463:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        bVar2 = false;
        local_40 = uVar9 & 0xffffffff;
        goto LAB_019a44ce;
      }
      local_40 = uVar9 & 0xffffffff;
      lVar12 = local_38;
    }
    else {
      if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if ((bool)(bVar2 & local_38 != 0)) {
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          local_38 = lVar12;
          FUN_00d50b20();
          uVar9 = CONCAT71(uVar10,1);
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          local_38 = lVar12;
        }
        goto LAB_019a4463;
      }
      if ((bool)(bVar2 & local_38 != 0)) {
        local_40 = CONCAT71(uVar6,1);
        local_38 = local_68;
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
joined_r0x019a43d0:
      local_40 = CONCAT71(uVar6,1);
      if (lVar12 == 0) {
        bVar2 = false;
        goto LAB_019a44ce;
      }
    }
    local_90 = *arg1;
    local_88 = '\0';
    FUN_01a17f30();
    bVar2 = false;
    if ((local_88 != '\0') && (bVar2 = false, local_90 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    if (local_68 != 0) goto LAB_019a42b9;
LAB_019a42e5:
    bVar2 = true;
    local_40 = 0;
LAB_019a44ce:
    lVar12 = 0;
  }
  (**(code **)(*this_ptr + 0x998))();
  (**(code **)(*this_ptr + 0xa00))();
  lVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *this_ptr + 0x40))();
  }
  (**(code **)(&g_00001620 + *this_ptr))();
  (**(code **)(*this_ptr + 0x540))();
  (**(code **)(*this_ptr + 0xa48))();
  if (((char)local_40 != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019ae3f0
// ============================================================
// Function: FUN_019ae3f0
// Address: 019ae3f0
// Size: 1268 bytes
// Class: MUEditorSubview

void FUN_019ae3f0(float *param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  float *pfVar6;
  int64_t lVar7;
  double *in_RDX;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint64_t uVar15;
  uint32_t uVar16;
  uint32_t extraout_XMM0_Dc;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Dd;
  uint32_t uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  uint8_t auVar22 [16];
  int64_t local_a0;
  char local_98 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  fVar21 = (float)((uint64_t)param_2 >> 0x20);
  fVar19 = (float)param_2;
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    pfVar6 = param_1;
    FUN_00d23310();
    lVar7 = CONCAT71((int7)((uint64_t)pfVar6 >> 8),local_98[0]);
    pcVar8 = local_38;
    if (local_98[0] != '\0') {
      pcVar8 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar8 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 == 0) {
      local_a0 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    pvVar3 = _pthread_getspecific((void*)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_01259520();
    fVar11 = (float)(**(code **)(*this_ptr + 0xc38))();
    local_3c = (float)(**(code **)(*this_ptr + 0xc38))();
    FUN_01e436c0();
    FUN_01e436c0();
    lVar4 = *arg1;
    if (*(int *)(lVar4 + 0xc) < 2) {
      auVar22 = ZEXT416((uint)local_3c);
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      lVar9 = 1;
      local_40 = fVar11;
      do {
        pVar5 = (void*)lVar7;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar9 * 8);
        if (local_a0 == lVar7) {
          if ((!bVar2) && (local_a0 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_a0 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            local_a0 = lVar7;
          }
          else {
            bVar2 = true;
            local_a0 = lVar7;
          }
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_0125a280();
        if (dVar14 < dVar12) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_0125a280();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (dVar13 < dVar14) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_01259520();
        }
        uVar15 = (**(code **)(*this_ptr + 0xc38))();
        uVar16 = (uint32_t)((uint64_t)uVar15 >> 0x20);
        fVar11 = (float)uVar15;
        auVar22._8_4_ = extraout_XMM0_Dc;
        auVar22._0_8_ = uVar15;
        auVar22._12_4_ = extraout_XMM0_Dd;
        if (fVar11 <= local_3c) {
          auVar22._0_4_ = local_3c;
        }
        if (local_40 <= fVar11) {
          fVar11 = local_40;
        }
        lVar9 = lVar9 + 1;
        lVar4 = *arg1;
        lVar7 = (int64_t)*(int *)(lVar4 + 0xc);
        local_3c = auVar22._0_4_;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        local_40 = fVar11;
      } while (lVar9 < lVar7);
    }
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar22 = insertps(auVar22,auVar1,0x10);
    fVar11 = auVar22._0_4_ + g_0241b5d0;
    fVar23 = auVar22._4_4_ + _UNK_0241b5d4;
    fVar20 = fVar11 - fVar23;
    while (fVar20 < (fVar21 / g_0241b640) * g_0239394c) {
      fVar11 = fVar11 + g_0241b5e0;
      fVar23 = fVar23 + _UNK_0241b5e4;
      fVar20 = fVar11 - fVar23;
    }
    if (in_RDX != (double *)0x0) {
      dVar12 = dVar12 + g_0241b680;
      dVar13 = dVar13 + g_02390108;
      dVar14 = ((double)(fVar19 / g_02390d38) - (dVar13 - dVar12)) * g_023942d0;
      uVar10 = -(uint64_t)(dVar13 - dVar12 < (double)(fVar19 / g_02390d38));
      dVar12 = (double)(~uVar10 & (uint64_t)dVar12 | (uint64_t)(dVar12 - dVar14) & uVar10);
      *in_RDX = dVar12;
      in_RDX[1] = (double)(~uVar10 & (uint64_t)dVar13 | (uint64_t)(dVar14 + dVar13) & uVar10) -
                  dVar12;
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar23;
      param_1[1] = fVar20;
    }
    if ((bVar2) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 019a5c40
// ============================================================
// Function: FUN_019a5c40
// Address: 019a5c40
// Size: 884 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void* FUN_019a5c40(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t **pplVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *local_68;
  char local_60;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar6 = *(int64_t *)(arg1 + 0x38);
    uVar1 = *(uint *)(lVar6 + 0xc);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      local_38 = (int64_t *)0x0;
      bVar2 = false;
      do {
        plVar9 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = plVar9;
        local_40 = '\0';
        if ((g_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_027142d8 = FUN_0006d940();
          g_027142c0 = "MUEditorSubview";
          g_027142c8 = 0x168;
          g_027142d0 = FUN_0034d130;
          g_027142e0 = 0;
          ram_00000000027142e8 = 0;
          g_027142f0 = 0;
          g_02714368 = 0;
          ram_0000000002714370 = 0;
          g_02714378 = 0;
          g_0271437a = 1;
          g_027142f8 = 0;
          ram_0000000002714300 = 0;
          g_02714308 = 0;
          ram_0000000002714310 = 0;
          g_02714318 = 0;
          ram_0000000002714320 = 0;
          g_02714328 = 0;
          ram_0000000002714330 = 0;
          g_02714338 = 0;
          ram_0000000002714340 = 0;
          g_02714348 = 0;
          ram_0000000002714350 = 0;
          g_02714358 = 0;
          ram_0000000002714360 = 0;
          g_02714383 = 0;
          g_0271437b = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (int64_t **)&g_02802688;
        if (plVar9 != (int64_t *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (int64_t **)&g_02802688;
          }
        }
        plVar9 = *pplVar7;
        if (plVar9 == local_38) {
          if ((!bVar2) && (plVar9 != (int64_t *)0x0)) {
            plVar9 = local_38;
            if (*(char *)(pplVar7 + 1) != '\0') goto LAB_019a5d64;
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar9 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar9;
              bVar2 = true;
              goto LAB_019a5db0;
            }
          }
          else {
            if ((bVar2) && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_019a5d64:
            *(void*)(pplVar7 + 1) = 0;
          }
          local_38 = plVar9;
          bVar2 = true;
        }
LAB_019a5db0:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_38;
        if (local_38 != (int64_t *)0x0) {
          (**(code **)(*local_38 + 0x928))();
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_48 = local_68;
          local_40 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_48 = plVar9;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((uint64_t)uVar1 - 1 == lVar8) goto LAB_019a5f90;
        lVar6 = *(int64_t *)(arg1 + 0x38);
        lVar8 = lVar8 + 1;
      } while( true );
    }
    bVar2 = false;
    plVar9 = (int64_t *)0x0;
LAB_019a5f90:
    *this_ptr = puVar5;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 019a68b0
// ============================================================
// Function: FUN_019a68b0
// Address: 019a68b0
// Size: 819 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void* FUN_019a68b0(uint32_t param_1)

{
  int iVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  int64_t **pplVar10;
  int64_t *local_60;
  char local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint local_3c;
  uint64_t local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar9) {
    local_48 = (uint64_t)uVar9;
    local_50 = 0;
    plVar7 = (int64_t *)0x0;
    do {
      local_3c = uVar9 - 1;
      plVar8 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)(uVar9 - 1) * 8);
      local_60 = plVar8;
      local_58 = '\0';
      uVar5 = 0;
      if ((g_02702df0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        g_027142d8 = FUN_0006d940();
        g_027142c0 = "MUEditorSubview";
        g_027142c8 = 0x168;
        g_027142d0 = FUN_0034d130;
        g_027142e0 = 0;
        ram_00000000027142e8 = 0;
        g_027142f0 = 0;
        g_02714368 = 0;
        ram_0000000002714370 = 0;
        g_02714378 = 0;
        g_0271437a = 1;
        g_027142f8 = 0;
        ram_0000000002714300 = 0;
        g_02714308 = 0;
        ram_0000000002714310 = 0;
        g_02714318 = 0;
        ram_0000000002714320 = 0;
        g_02714328 = 0;
        ram_0000000002714330 = 0;
        g_02714338 = 0;
        ram_0000000002714340 = 0;
        g_02714348 = 0;
        ram_0000000002714350 = 0;
        g_02714358 = 0;
        ram_0000000002714360 = 0;
        g_02714383 = 0;
        g_0271437b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (int64_t **)&g_02802688;
      if (plVar8 != (int64_t *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar10 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar10 = (int64_t **)&g_02802688;
        }
      }
      plVar8 = *pplVar10;
      cVar2 = (char)local_50;
      if (plVar8 == plVar7) {
        if ((cVar2 == '\0') && (plVar8 != (int64_t *)0x0)) {
          uVar5 = local_50;
          plVar8 = plVar7;
          if (*(char *)(pplVar10 + 1) != '\0') goto LAB_019a69c7;
          local_38 = CONCAT71((int7)((uint64_t)local_50 >> 8),1);
          FUN_00d50b00();
          uVar6 = local_48;
          uVar9 = local_3c;
        }
        else {
          local_38 = local_50;
          uVar6 = local_48;
          plVar8 = plVar7;
          uVar9 = local_3c;
        }
      }
      else if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        uVar9 = local_3c;
        uVar6 = local_48;
        local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (plVar7 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a69c7:
        *(void*)(pplVar10 + 1) = 0;
        local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        uVar6 = local_48;
        uVar9 = local_3c;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (int64_t *)0x0) &&
         (cVar2 = (**(code **)(*plVar8 + 0x960))(param_1), cVar2 != '\0')) {
        local_58 = '\0';
        local_60 = plVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((int64_t)uVar6 < 2) goto LAB_019a6b8d;
      local_48 = uVar6 - 1;
      lVar4 = *(int64_t *)(arg1 + 0x38);
      local_50 = local_38;
      plVar7 = plVar8;
    } while( true );
  }
  cVar2 = '\0';
  plVar8 = (int64_t *)0x0;
  iVar1 = *(int *)((int64_t)puVar3 + 0xc);
joined_r0x019a6bba:
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((cVar2 != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a6b8d:
  cVar2 = (char)local_38;
  iVar1 = *(int *)((int64_t)puVar3 + 0xc);
  goto joined_r0x019a6bba;
}



// ============================================================
// 019ad9b0
// ============================================================
// Function: FUN_019ad9b0
// Address: 019ad9b0
// Size: 1065 bytes
// Class: MUEditorSubview

void FUN_019ad9b0(int64_t param_1,double param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  char in_DL;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  double dVar9;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  double dVar10;
  float local_88;
  int64_t local_68;
  char local_60 [8];
  double local_58;
  uint64_t uStack_50;
  double local_40;
  char local_38 [8];
  
  if ((*arg1 != 0) && (*(int *)(*arg1 + 0xc) != 0)) {
    FUN_01e436c0();
    dVar10 = param_2;
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_60[0];
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_01259520();
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = *arg1;
    if (*(int *)(lVar5 + 0xc) < 2) {
      bVar2 = false;
      lVar8 = 0;
    }
    else {
      lVar7 = 1;
      lVar8 = 0;
      bVar2 = false;
      do {
        pVar6 = (void*)param_1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar7 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar2) && (lVar8 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar8 = lVar5;
          }
          else {
            bVar2 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        dVar10 = local_58;
        if (dVar9 < local_58) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0125a280();
          uStack_50 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01259520();
        if (local_40 < dVar9) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_01259520();
        }
        lVar7 = lVar7 + 1;
        lVar5 = *arg1;
        param_1 = (int64_t)*(int *)(lVar5 + 0xc);
      } while (lVar7 < param_1);
    }
    if (in_DL != '\0') {
      local_88 = SUB84(param_2,0);
      dVar9 = (double)(local_88 / g_0241b640) * g_023908b8;
      local_58 = (double)(~-(uint64_t)(local_58 < g_0238fee8) & (uint64_t)local_58);
      local_40 = local_40 + g_0238fee8;
      dVar10 = local_40 - local_58;
      uStack_50 = 0;
      if (dVar9 < dVar10) {
        local_40 = dVar9 + local_58;
      }
    }
    (**(code **)(*this_ptr + 0x540))();
    (**(code **)(*this_ptr + 0xa48))();
    if (local_58 < local_40) {
      plVar1 = (int64_t *)this_ptr[0x27];
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x3f0))(SUB84(local_58,0),local_40 - local_58,dVar10);
    }
    (**(code **)(*this_ptr + 0x540))();
    (**(code **)(*this_ptr + 0xa48))();
    if (local_58 < local_40) {
      FUN_00e7b500(SUB84(local_58,0),local_40 - local_58);
      (**(code **)(*this_ptr + 0xa78))();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 019a4cd0
// ============================================================
// Function: FUN_019a4cd0
// Address: 019a4cd0
// Size: 995 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

uint64_t FUN_019a4cd0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (int64_t *)*this_ptr;
  if ((g_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027142d8 = FUN_0006d940();
    g_027142c0 = "MUEditorSubview";
    g_027142c8 = 0x168;
    g_027142d0 = FUN_0034d130;
    g_027142e0 = 0;
    ram_00000000027142e8 = 0;
    g_027142f0 = 0;
    g_02714368 = 0;
    ram_0000000002714370 = 0;
    g_02714378 = 0;
    g_0271437a = 1;
    g_027142f8 = 0;
    ram_0000000002714300 = 0;
    g_02714308 = 0;
    ram_0000000002714310 = 0;
    g_02714318 = 0;
    ram_0000000002714320 = 0;
    g_02714328 = 0;
    ram_0000000002714330 = 0;
    g_02714338 = 0;
    ram_0000000002714340 = 0;
    g_02714348 = 0;
    ram_0000000002714350 = 0;
    g_02714358 = 0;
    ram_0000000002714360 = 0;
    g_02714383 = 0;
    g_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_019a4d20:
    this_ptr = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019a4d20;
  }
  plVar1 = (int64_t *)*this_ptr;
  plVar2 = (int64_t *)*arg1;
  if ((g_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_027142d8 = FUN_0006d940();
    g_027142c0 = "MUEditorSubview";
    g_027142c8 = 0x168;
    g_027142d0 = FUN_0034d130;
    g_027142e0 = 0;
    ram_00000000027142e8 = 0;
    g_027142f0 = 0;
    g_02714368 = 0;
    ram_0000000002714370 = 0;
    g_02714378 = 0;
    g_0271437a = 1;
    g_027142f8 = 0;
    ram_0000000002714300 = 0;
    g_02714308 = 0;
    ram_0000000002714310 = 0;
    g_02714318 = 0;
    ram_0000000002714320 = 0;
    g_02714328 = 0;
    ram_0000000002714330 = 0;
    g_02714338 = 0;
    ram_0000000002714340 = 0;
    g_02714348 = 0;
    ram_0000000002714350 = 0;
    g_02714358 = 0;
    ram_0000000002714360 = 0;
    g_02714383 = 0;
    g_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_019a4d66;
  }
  arg1 = &g_02802688;
LAB_019a4d66:
  plVar2 = (int64_t *)*arg1;
  uVar5 = 0;
  uVar4 = 0;
  if (plVar1 != (int64_t *)0x0) {
    uVar4 = FUN_01989fa0();
  }
  if (plVar2 != (int64_t *)0x0) {
    uVar5 = FUN_01989fa0();
  }
  if (uVar4 == uVar5) {
    (**(code **)(*plVar1 + 0x928))();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x928))();
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = uVar4;
    if ((local_50 != 0) && (local_50 != 0)) {
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar5 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = uVar4 & 0xff;
      uVar5 = uVar5 & 0xff;
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = 0xffffffff;
  if ((int)uVar5 <= (int)uVar4) {
    uVar8 = (uint64_t)((int)uVar5 < (int)uVar4);
  }
  return uVar8;
}



// ============================================================
// 019a7930
// ============================================================
// Function: FUN_019a7930
// Address: 019a7930
// Size: 714 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void FUN_019a7930(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t **pplVar5;
  uint64_t uVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint uVar9;
  undefined7 uVar11;
  uint64_t uVar10;
  int64_t *local_58;
  char local_50;
  uint64_t local_48;
  uint64_t local_40;
  uint local_34;
  
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_48 = (uint64_t)uVar9;
  local_40 = 0;
  plVar8 = (int64_t *)0x0;
  do {
    local_34 = uVar9 - 1;
    plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)(uVar9 - 1) * 8);
    local_58 = plVar1;
    local_50 = '\0';
    if ((g_02702df0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_027142d8 = FUN_0006d940();
      g_027142c0 = "MUEditorSubview";
      g_027142c8 = 0x168;
      g_027142d0 = FUN_0034d130;
      g_027142e0 = 0;
      ram_00000000027142e8 = 0;
      g_027142f0 = 0;
      g_02714368 = 0;
      ram_0000000002714370 = 0;
      g_02714378 = 0;
      g_0271437a = 1;
      g_027142f8 = 0;
      ram_0000000002714300 = 0;
      g_02714308 = 0;
      ram_0000000002714310 = 0;
      g_02714318 = 0;
      ram_0000000002714320 = 0;
      g_02714328 = 0;
      ram_0000000002714330 = 0;
      g_02714338 = 0;
      ram_0000000002714340 = 0;
      g_02714348 = 0;
      ram_0000000002714350 = 0;
      g_02714358 = 0;
      ram_0000000002714360 = 0;
      g_02714383 = 0;
      g_0271437b = 0;
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
    plVar7 = *pplVar5;
    uVar11 = (undefined7)((uint64_t)plVar1 >> 8);
    if (plVar7 == plVar8) {
      if (((char)local_40 == '\0') && (plVar7 != (int64_t *)0x0)) {
        plVar7 = plVar8;
        if (*(char *)(pplVar5 + 1) != '\0') goto LAB_019a7a14;
        uVar10 = CONCAT71(uVar11,1);
        FUN_00d50b00();
        uVar6 = local_48;
        uVar9 = local_34;
      }
      else {
        uVar10 = local_40 & 0xffffffff;
        uVar6 = local_48;
        plVar7 = plVar8;
        uVar9 = local_34;
      }
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = local_34;
      uVar6 = local_48;
      uVar10 = CONCAT71(uVar11,1);
      if (((char)local_40 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a7a14:
      *(void*)(pplVar5 + 1) = 0;
      uVar10 = CONCAT71(uVar11,1);
      uVar6 = local_48;
      uVar9 = local_34;
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 != (int64_t *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x960))(param_1), cVar2 != '\0')) {
      *(void*)(this_ptr + 1) = 0;
      if ((char)uVar10 == '\0') {
        FUN_00d50b00();
      }
      *this_ptr = plVar7;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    if ((int64_t)uVar6 < 2) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if ((char)uVar10 == '\0') {
        return;
      }
      if (plVar7 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_48 = uVar6 - 1;
    lVar4 = *(int64_t *)(arg1 + 0x38);
    local_40 = uVar10 & 0xffffffff;
    plVar8 = plVar7;
  } while( true );
}



// ============================================================
// 019a5880
// ============================================================
// Function: FUN_019a5880
// Address: 019a5880
// Size: 739 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void* FUN_019a5880(uint64_t param_1,void*param_2)

{
  uint uVar1;
  bool bVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *local_40;
  char local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  lVar7 = *(int64_t *)(arg1 + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar1 < 1) {
    bVar2 = false;
    plVar9 = (int64_t *)0x0;
LAB_019a5b3f:
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    return this_ptr;
  }
  lVar11 = 0;
  plVar9 = (int64_t *)0x0;
  bVar2 = false;
  do {
    plVar10 = *(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar11 * 8);
    local_40 = plVar10;
    local_38 = '\0';
    if ((g_02702df0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_027142d8 = FUN_0006d940();
      g_027142c0 = "MUEditorSubview";
      g_027142c8 = 0x168;
      g_027142d0 = FUN_0034d130;
      g_027142e0 = 0;
      ram_00000000027142e8 = 0;
      g_027142f0 = 0;
      g_02714368 = 0;
      ram_0000000002714370 = 0;
      g_02714378 = 0;
      g_0271437a = 1;
      g_027142f8 = 0;
      ram_0000000002714300 = 0;
      g_02714308 = 0;
      ram_0000000002714310 = 0;
      g_02714318 = 0;
      ram_0000000002714320 = 0;
      g_02714328 = 0;
      ram_0000000002714330 = 0;
      g_02714338 = 0;
      ram_0000000002714340 = 0;
      g_02714348 = 0;
      ram_0000000002714350 = 0;
      g_02714358 = 0;
      ram_0000000002714360 = 0;
      g_02714383 = 0;
      g_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar8 = (int64_t **)&g_02802688;
    if (plVar10 != (int64_t *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar4 == '\0') {
        pplVar8 = (int64_t **)&g_02802688;
      }
    }
    plVar10 = *pplVar8;
    if (plVar10 == plVar9) {
      if ((!bVar2) && (plVar10 != (int64_t *)0x0)) {
        plVar10 = plVar9;
        if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a5983;
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar10;
          bVar2 = true;
          goto LAB_019a59d0;
        }
      }
      else {
        if ((bVar2) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019a5983:
        *(void*)(pplVar8 + 1) = 0;
      }
      plVar9 = plVar10;
      bVar2 = true;
    }
LAB_019a59d0:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x928))();
      plVar3 = local_40;
      plVar10 = (int64_t *)*param_2;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        local_38 = '\0';
        local_40 = plVar9;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((uint64_t)uVar1 - 1 == lVar11) goto LAB_019a5b3f;
    lVar7 = *(int64_t *)(arg1 + 0x38);
    lVar11 = lVar11 + 1;
  } while( true );
}



// ============================================================
// 019a6f50
// ============================================================
// Function: FUN_019a6f50
// Address: 019a6f50
// Size: 657 bytes
// Class: MUEditorSubview

void* FUN_019a6f50(uint64_t param_1,void*param_2)

{
  int iVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar9;
  char cVar10;
  int64_t **pplVar11;
  uint64_t local_68;
  int64_t *local_58;
  char local_50;
  void*local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(arg1 + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  local_68 = (uint64_t)uVar7;
  if (0 < (int)uVar7) {
    plVar9 = (int64_t *)0x0;
    local_40 = 0;
    local_48 = puVar4;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar7 * 8);
      local_50 = '\0';
      local_58 = plVar2;
      uVar6 = FUN_0082d880();
      pplVar11 = (int64_t **)&g_02802688;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar11 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar11 = (int64_t **)&g_02802688;
        }
      }
      puVar4 = local_48;
      plVar8 = *pplVar11;
      if (plVar8 == plVar9) {
        plVar3 = plVar9;
        local_38 = local_40;
        if (((char)local_40 == '\0') && (plVar8 != (int64_t *)0x0)) {
          plVar8 = plVar9;
          if (*(char *)(pplVar11 + 1) != '\0') goto LAB_019a7055;
          local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
          FUN_00d50b00();
        }
      }
      else if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        puVar4 = local_48;
        local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        plVar3 = plVar8;
        if (((char)local_40 != '\0') && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_40 != '\0') && (plVar9 != (int64_t *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_019a7055:
        *(void*)(pplVar11 + 1) = 0;
        local_38 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
        plVar3 = plVar8;
        puVar4 = local_48;
      }
      plVar9 = plVar3;
      if ((local_50 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x928))();
        plVar8 = local_58;
        plVar2 = (int64_t *)*param_2;
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == plVar2) {
          local_50 = '\0';
          local_58 = plVar9;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)local_68 < 2) goto LAB_019a718f;
      local_68 = local_68 - 1;
      lVar5 = *(int64_t *)(arg1 + 0x38);
      local_40 = local_38;
    } while( true );
  }
  cVar10 = '\0';
  plVar9 = (int64_t *)0x0;
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
joined_r0x019a71b2:
  if (iVar1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = puVar4;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((cVar10 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
LAB_019a718f:
  cVar10 = (char)local_38;
  iVar1 = *(int *)((int64_t)puVar4 + 0xc);
  goto joined_r0x019a71b2;
}



// ============================================================
// 019ad3e0
// ============================================================
// Function: FUN_019ad3e0
// Address: 019ad3e0
// Size: 633 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void FUN_019ad3e0(void)

{
  uint uVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t lVar8;
  undefined7 uVar10;
  uint64_t uVar9;
  int64_t *plVar11;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  lVar5 = *(int64_t *)(this_ptr + 0x38);
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar8 = 0;
  plVar11 = (int64_t *)0x0;
  local_38 = 0;
  do {
    plVar2 = *(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar8 * 8);
    local_48 = plVar2;
    local_40 = '\0';
    if ((g_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027142d8 = FUN_0006d940();
      g_027142c0 = "MUEditorSubview";
      g_027142c8 = 0x168;
      g_027142d0 = FUN_0034d130;
      g_027142e0 = 0;
      ram_00000000027142e8 = 0;
      g_027142f0 = 0;
      g_02714368 = 0;
      ram_0000000002714370 = 0;
      g_02714378 = 0;
      g_0271437a = 1;
      g_027142f8 = 0;
      ram_0000000002714300 = 0;
      g_02714308 = 0;
      ram_0000000002714310 = 0;
      g_02714318 = 0;
      ram_0000000002714320 = 0;
      g_02714328 = 0;
      ram_0000000002714330 = 0;
      g_02714338 = 0;
      ram_0000000002714340 = 0;
      g_02714348 = 0;
      ram_0000000002714350 = 0;
      g_02714358 = 0;
      ram_0000000002714360 = 0;
      g_02714383 = 0;
      g_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_48;
      if (cVar3 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar6;
    uVar10 = (undefined7)((uint64_t)plVar2 >> 8);
    if (plVar7 == plVar11) {
      if (((char)local_38 == '\0') && (plVar7 != (int64_t *)0x0)) {
        plVar7 = plVar11;
        if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019ad4b4;
        uVar9 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
      else {
        uVar9 = local_38 & 0xffffffff;
      }
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        uVar9 = CONCAT71(uVar10,1);
        if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar11 = plVar7;
          goto LAB_019ad500;
        }
      }
      else {
        if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_019ad4b4:
        *(void*)(pplVar6 + 1) = 0;
      }
      uVar9 = CONCAT71(uVar10,1);
      plVar11 = plVar7;
    }
LAB_019ad500:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x928))();
      plVar7 = local_48;
      plVar2 = (int64_t *)*arg1;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == plVar2) {
        (**(code **)(*plVar11 + 0x620))();
      }
    }
    if ((uint64_t)uVar1 - 1 == lVar8) {
      if ((char)uVar9 == '\0') {
        return;
      }
      if (plVar11 == (int64_t *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar5 = *(int64_t *)(this_ptr + 0x38);
    lVar8 = lVar8 + 1;
    local_38 = uVar9 & 0xffffffff;
  } while( true );
}



// ============================================================
// 019a7590
// ============================================================
// Function: FUN_019a7590
// Address: 019a7590
// Size: 638 bytes
// Class: MUEditorSubview

void* FUN_019a7590(uint32_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar8;
  uint64_t local_80;
  int64_t *local_60;
  char local_58;
  void*local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  local_50 = puVar3;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x38);
  uVar6 = *(uint *)(lVar4 + 0xc);
  local_80 = (uint64_t)uVar6;
  if (0 < (int)uVar6) {
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    do {
      uVar6 = uVar6 - 1;
      plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + (uint64_t)uVar6 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar5 = FUN_0082d880();
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 == local_38) {
        if (((char)local_48 == '\0') && (plVar7 != (int64_t *)0x0)) {
          plVar7 = local_38;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a7696;
          local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          FUN_00d50b00();
          plVar7 = local_38;
        }
        else {
          local_40 = local_48;
          plVar7 = local_38;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (local_38 != (int64_t *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a7696:
        *(void*)(pplVar8 + 1) = 0;
        local_40 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      }
      local_38 = plVar7;
      if ((local_58 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = local_40;
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar1 = local_38;
        FUN_01e437f0(param_1);
        cVar2 = (**(code **)(*plVar1 + 0x920))();
        if (arg1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((int64_t)local_80 < 2) goto LAB_019a77ce;
      local_80 = local_80 - 1;
      lVar4 = *(int64_t *)(arg1 + 0x38);
      local_48 = uVar5;
    } while( true );
  }
  uVar5 = 0;
  local_38 = (int64_t *)0x0;
LAB_019a77ce:
  puVar3 = local_50;
  if (*(int *)((int64_t)local_50 + 0xc) == 0) {
    puVar3 = (void*)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (((char)uVar5 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 019ae080
// ============================================================
// Function: FUN_019ae080
// Address: 019ae080
// Size: 562 bytes
// Class: MUEditorSubview

void FUN_019ae080(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  char in_DL;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  double dVar7;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint32_t in_XMM1_Dd;
  uint8_t local_48 [24];
  uint64_t uVar8;
  
  fVar6 = (float)((uint64_t)param_2 >> 0x20);
  lVar4 = *arg1;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      local_48._0_8_ = 0;
    }
    else {
      lVar5 = 0;
      local_48._0_16_ = ZEXT816(0);
      auVar9._0_4_ = 0.0;
      do {
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        fVar6 = (float)(**(code **)(*this_ptr + 0xc38))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        fVar1 = fVar6;
        if (lVar5 == 0) {
          local_48._0_16_ = ZEXT416((uint)fVar6);
        }
        else {
          if (auVar9._0_4_ <= fVar6) {
            fVar1 = auVar9._0_4_;
          }
          if ((float)local_48._0_4_ < fVar6) {
            local_48._0_16_ = ZEXT416((uint)fVar6);
          }
        }
        in_XMM1_Dd = 0;
        fVar6 = 0.0;
        lVar5 = lVar5 + 1;
        lVar4 = *arg1;
        auVar9._0_4_ = fVar1;
      } while (lVar5 < *(int *)(lVar4 + 0xc));
      auVar9 = insertps(local_48._0_16_,fVar1,0x10);
      local_48._0_8_ = auVar9._0_8_;
    }
    FUN_01e436c0();
    if (g_023908ec <= fVar6) {
      dVar7 = (double)(**(code **)(*this_ptr + 0x928))();
      if (in_DL == '\0') {
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = in_XMM1_Dd;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar11._4_12_ = auVar3._4_12_;
        auVar11._0_4_ =
             fVar6 / (((float)local_48._0_4_ + g_0241b5b0) -
                     ((float)local_48._4_4_ + _UNK_0241b5b4));
        uVar8 = auVar11._0_8_;
      }
      else {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar6;
        auVar2._8_4_ = in_XMM1_Dd;
        auVar2._12_4_ = in_XMM1_Dd;
        do {
          local_48._0_4_ = (float)local_48._0_4_ + g_0241b5b0;
          local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5b4;
          auVar10._4_12_ = auVar2._4_12_;
          auVar10._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
          uVar8 = auVar10._0_8_;
        } while ((float)dVar7 < auVar10._0_4_ * g_0241b644);
        auVar9._0_4_ = auVar10._0_4_;
        if (in_DL != '\0') {
          while (g_023908e0 * auVar9._0_4_ < g_02390d28) {
            local_48._0_4_ = (float)local_48._0_4_ + g_0241b5c0;
            local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5c4;
            auVar9._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
            auVar9._4_12_ = auVar10._4_12_;
            uVar8 = auVar9._0_8_;
          }
        }
      }
      (**(code **)(*this_ptr + 0xc08))(uVar8);
      (**(code **)(*this_ptr + 0x540))();
      (**(code **)(*this_ptr + 0xa48))();
      FUN_00e7b4f0();
      (**(code **)(*this_ptr + 0xaa0))();
    }
  }
  return;
}



// ============================================================
// 019aeb20
// ============================================================
// Function: FUN_019aeb20
// Address: 019aeb20
// Size: 592 bytes
// Class: MUEditorSubview

void FUN_019aeb20(uint64_t param_1,int64_t param_2)

{
  char cVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar3;
  uint64_t unaff_R14;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t lVar6;
  uint8_t local_90 [16];
  uint8_t local_80 [8];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  if (*arg1 == 0) {
    if (*(char *)((int64_t)this_ptr + 0x35c) == '\0') {
      return;
    }
    (**(code **)(*this_ptr + 0xce0))(g_023b3490,this_ptr + 0x6e);
    *(void*)((int64_t)this_ptr + 0x35c) = 0;
    return;
  }
  uVar2 = (**(code **)(*this_ptr + 0xe20))();
  lVar3 = local_48;
  local_58 = local_48;
  uVar5 = (undefined7)((uint64_t)unaff_R14 >> 8);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aebc5;
    }
LAB_019aec25:
    local_38 = CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
  }
  else {
    if (local_48 == 0) goto LAB_019aec25;
LAB_019aebc5:
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (*arg1 != 0) {
        local_40 = '\0';
        local_48 = *arg1;
        cVar1 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_58;
        if (cVar1 == '\0') goto LAB_019aec29;
      }
      uVar4 = CONCAT71(uVar5,1);
      local_38 = 0;
      local_50 = 0;
      FUN_00d50b00();
      goto LAB_019aec97;
    }
LAB_019aec29:
    local_38 = 0;
  }
  local_78 = *arg1;
  local_70 = '\0';
  FUN_0039e8b0();
  lVar3 = local_48;
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    uVar4 = CONCAT71(uVar5,1);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
    uVar4 = CONCAT71(uVar5,1);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_019aec97:
  local_50 = uVar4 & 0xffffffff;
  if (*(char *)((int64_t)this_ptr + 0x35c) == '\0') {
    *(void*)((int64_t)this_ptr + 0x35c) = 1;
    lVar6 = (**(code **)(*this_ptr + 0xa50))();
    this_ptr[0x6c] = lVar6;
    this_ptr[0x6d] = param_2;
    lVar6 = (**(code **)(*this_ptr + 0xa98))();
    this_ptr[0x6e] = lVar6;
  }
  local_60 = '\0';
  local_68 = lVar3;
  (**(code **)(*this_ptr + 0xca8))(local_80,local_90);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xce0))(g_023b3490,local_80);
  if ((char)local_38 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 019a72b0
// ============================================================
// Function: FUN_019a72b0
// Address: 019a72b0
// Size: 543 bytes
// Class: MUEditorSubview

void* FUN_019a72b0(uint32_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *local_78;
  char local_70;
  int64_t *local_40;
  
  lVar6 = *(int64_t *)(arg1 + 0x38);
  if (*(int *)(lVar6 + 0xc) < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  uVar7 = (uint64_t)(*(int *)(lVar6 + 0xc) - 1);
  local_40 = (int64_t *)0x0;
  bVar2 = false;
  do {
    plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + uVar7 * 8);
    local_70 = '\0';
    local_78 = plVar1;
    FUN_0082d880();
    pplVar9 = (int64_t **)&g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar5 == '\0') {
        pplVar9 = (int64_t **)&g_02802688;
      }
    }
    plVar8 = *pplVar9;
    if (plVar8 == local_40) {
      plVar3 = local_40;
      bVar4 = bVar2;
      if ((!bVar2) && (plVar8 != (int64_t *)0x0)) {
        plVar8 = local_40;
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019a738a;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar3 = plVar8;
      if ((bVar2) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a738a:
      *(void*)(pplVar9 + 1) = 0;
      plVar3 = plVar8;
      bVar4 = true;
    }
    bVar2 = bVar4;
    local_40 = plVar3;
    if ((local_70 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      FUN_01e437f0(param_1);
      cVar5 = (**(code **)(*local_40 + 0x920))();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(void*)(this_ptr + 1) = 0;
        if (!bVar2) {
          FUN_00d50b00();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        return this_ptr;
      }
    }
    if ((int64_t)uVar7 < 1) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar2) {
        return this_ptr;
      }
      if (local_40 == (int64_t *)0x0) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    uVar7 = uVar7 - 1;
    lVar6 = *(int64_t *)(arg1 + 0x38);
  } while( true );
}



// ============================================================
// 005b9d10
// ============================================================
// Function: FUN_005b9d10
// Address: 005b9d10
// Size: 520 bytes
// Class: MUEditorSubview
// String references:
//   "MUEditorSubview"

void FUN_005b9d10(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_1a0;
  
  if ((g_02702df0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_027142d8 = FUN_0006d940();
    g_027142c0 = "MUEditorSubview";
    g_027142c8 = 0x168;
    g_027142d0 = FUN_0034d130;
    g_027142e0 = 0;
    ram_00000000027142e8 = 0;
    g_027142f0 = 0;
    g_02714368 = 0;
    ram_0000000002714370 = 0;
    g_02714378 = 0;
    g_0271437a = 1;
    g_027142f8 = 0;
    ram_0000000002714300 = 0;
    g_02714308 = 0;
    ram_0000000002714310 = 0;
    g_02714318 = 0;
    ram_0000000002714320 = 0;
    g_02714328 = 0;
    ram_0000000002714330 = 0;
    g_02714338 = 0;
    ram_0000000002714340 = 0;
    g_02714348 = 0;
    ram_0000000002714350 = 0;
    g_02714358 = 0;
    ram_0000000002714360 = 0;
    g_02714383 = 0;
    g_0271437b = 0;
    ___cxa_guard_release();
  }
  if (g_0271437b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0059c6c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}

