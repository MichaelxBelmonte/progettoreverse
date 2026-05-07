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

