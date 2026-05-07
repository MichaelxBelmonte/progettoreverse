// ===================================================================
// MUScaleModeSequence — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (11):
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


// ============================================================
// 01b92cc0
// ============================================================
// Function: FUN_01b92cc0
// Address: 01b92cc0
// Size: 6370 bytes
// Class: MUScaleModeSequence
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void* FUN_01b92cc0(uint32_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t lVar7;
  void *pvVar8;
  void* in_ECX;
  void* pVar9;
  char *pcVar10;
  int iVar11;
  int64_t *arg1;
  void*this_ptr;
  int64_t **pplVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  int64_t *local_348;
  uint8_t local_340;
  uint32_t local_338;
  int64_t *local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
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
  int64_t *local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
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
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint64_t local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78 [8];
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  local_338 = param_1;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_001d7da0();
  local_88 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  cVar4 = (**(code **)(*arg1 + 0x9d0))();
  if (cVar4 == '\0') {
    FUN_01b6d0d0();
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*arg1 + 0xa70))(local_338);
    FUN_012523c0(&local_b0,0,&local_168,0);
    plVar6 = local_80;
    pcVar10 = &local_58;
    if (local_78[0] != '\0') {
      pcVar10 = local_78;
    }
    local_58 = local_78[0];
    *pcVar10 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 == '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_01b92e21;
    }
    bVar2 = false;
  }
  else {
    local_b0 = (**(code **)(*arg1 + 0x9d8))();
    local_168 = (**(code **)(*arg1 + 0x9e0))();
LAB_01b92e21:
    cVar4 = (**(code **)(*arg1 + 0xa78))();
    bVar2 = true;
    if (cVar4 != '\0') {
      FUN_01b95ae0(local_168,local_b0,1,0);
      plVar6 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_01b92e89;
        }
      }
      else if (local_80 != (int64_t *)0x0) {
LAB_01b92e89:
        local_78[0] = '\0';
        local_80 = (int64_t *)0x0;
        local_70 = plVar6;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar11 = -local_68._4_4_;
            }
            else {
              iVar11 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar11);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar11 = 0;
            }
            local_68 = CONCAT44(iVar11,(int)local_68);
          }
          lVar7 = (int64_t)(int)local_68;
          iVar11 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar11);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar11) break;
          local_318 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
          local_310 = '\0';
          local_80 = local_318;
          uVar13 = (**(code **)(*arg1 + 0x940))(local_b0,&local_318);
          plVar1 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (int64_t *)0x0) && (uVar13 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_310 != '\0') && (local_318 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          lVar7 = g_027e51d0;
          if (plVar1 != (int64_t *)0x0) {
            local_308 = plVar1;
            local_300 = '\0';
            if (g_027e51d0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_2f8 = lVar7;
            local_2f0 = '\x01';
            FUN_01d5d9b0(uVar13,&local_2f8);
            if ((local_2f0 != '\0') && (local_2f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            uVar13 = FUN_01d66da0();
            plVar1 = g_027ebef0;
            local_2e8 = local_80;
            local_2e0 = '\0';
            if (g_027ebef0 != (int64_t *)0x0) {
              uVar13 = FUN_00d50b00();
            }
            local_48 = plVar1;
            local_40 = '\0';
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            uVar13 = FUN_00dd67f0();
            local_160 = local_a8;
            local_158 = 0;
            plVar1 = g_027e2690;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                uVar13 = FUN_00d50b00();
                plVar1 = g_027e2690;
              }
            }
            else {
              local_a0 = '\0';
            }
            local_158 = '\x01';
            g_027e2690 = plVar1;
            if (plVar1 != (int64_t *)0x0) {
              local_158 = '\x01';
              uVar13 = FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            uVar13 = FUN_00dd67f0();
            local_150 = local_a8;
            local_148 = 0;
            plVar1 = g_027652e0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                uVar13 = FUN_00d50b00();
                plVar1 = g_027652e0;
              }
            }
            else {
              local_a0 = '\0';
            }
            local_148 = '\x01';
            g_027652e0 = plVar1;
            if (plVar1 != (int64_t *)0x0) {
              local_148 = '\x01';
              uVar13 = FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_0176e420();
        if (*(int *)((int64_t)plVar6 + 0xc) != 0) {
          FUN_01d5dc80();
        }
        FUN_00d50b20();
        bVar2 = true;
      }
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e51d8;
  local_2d8 = lVar7;
  local_2d0 = '\x01';
  if (g_027e51d8 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = lVar3;
  local_2c0 = '\x01';
  local_2b8 = 0;
  local_2b0 = '\0';
  uVar13 = FUN_00d31230(&local_2b8,&local_2c8);
  local_140 = local_80;
  local_138 = 0;
  local_2a8 = g_0272a6a8;
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      local_2a8 = g_0272a6a8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_138 = '\x01';
  g_0272a6a8 = local_2a8;
  if (local_2a8 != 0) {
    local_138 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_2a0 = '\x01';
  FUN_01d5d9b0(uVar13,&local_2a8);
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_130 = local_98;
    local_128 = 0;
    plVar6 = g_027e2690;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = g_027e2690;
      }
    }
    else {
      local_90 = '\0';
    }
    local_128 = '\x01';
    g_027e2690 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      local_128 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_120 = local_98;
    local_118 = 0;
    plVar6 = g_027652e0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = g_027652e0;
      }
    }
    else {
      local_90 = '\0';
    }
    local_118 = '\x01';
    g_027652e0 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      local_118 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e51e0;
  local_298 = lVar7;
  local_290 = '\x01';
  if (g_027e51e0 != 0) {
    FUN_00d50b00();
  }
  local_288 = lVar3;
  local_280 = '\x01';
  local_278 = 0;
  local_270 = '\0';
  uVar13 = FUN_00d31230(&local_278,&local_288);
  local_110 = local_80;
  local_108 = 0;
  local_268 = g_027e51e8;
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      local_268 = g_027e51e8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_108 = '\x01';
  g_027e51e8 = local_268;
  if (local_268 != 0) {
    local_108 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_260 = '\x01';
  FUN_01d5d9b0(uVar13,&local_268);
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_100 = local_98;
    local_f8 = 0;
    plVar6 = g_027e2690;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = g_027e2690;
      }
    }
    else {
      local_90 = '\0';
    }
    local_f8 = '\x01';
    g_027e2690 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      local_f8 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_f0 = local_98;
    local_e8 = 0;
    plVar6 = g_027652e0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = g_027652e0;
      }
    }
    else {
      local_90 = '\0';
    }
    local_e8 = '\x01';
    g_027652e0 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      local_e8 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  local_258 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e51f0;
  local_250 = '\x01';
  if (g_027e51f0 != 0) {
    FUN_00d50b00();
  }
  local_248 = lVar7;
  local_240 = '\x01';
  local_238 = 0;
  local_230 = '\0';
  plVar6 = &local_238;
  uVar13 = FUN_00d31230(plVar6,&local_248);
  local_e0 = local_80;
  pVar9 = (void*)plVar6;
  local_d8 = 0;
  local_228 = g_027e3c38;
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      local_228 = g_027e3c38;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_d8 = '\x01';
  g_027e3c38 = local_228;
  if (local_228 != 0) {
    local_d8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_220 = '\x01';
  FUN_01d5d9b0(uVar13,&local_228);
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  if ((local_250 != '\0') && (local_258 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  pplVar12 = &local_48;
  uVar13 = FUN_01d66da0();
  local_218 = g_027e3cd0;
  if (g_027e3cd0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  plVar6 = g_027e3c40;
  local_210 = '\x01';
  if (g_027e3c40 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_80 = plVar6;
  local_78[0] = '\0';
  FUN_00ca0840(uVar13,&local_80);
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  FUN_01b6d0d0();
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*arg1 + 0xa70))(local_338);
  pVar9 = 0;
  FUN_012523c0(0,0,0,0);
  plVar6 = local_80;
  local_40 = local_78[0] != '\0';
  local_48 = local_80;
  if ((bool)local_40) {
    local_78[0] = '\0';
  }
  uVar13 = FUN_0013de80();
  if (plVar6 == (int64_t *)0x0) {
LAB_01b93f33:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b93f33;
  }
  plVar1 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar6 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01b94215;
  local_340 = 0;
  local_348 = plVar1;
  FUN_01b91500(uVar13,&local_348);
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b93fcf;
    }
  }
  else if (local_80 != (int64_t *)0x0) {
LAB_01b93fcf:
    FUN_01d5e230();
    uVar13 = FUN_01d66da0();
    local_208 = g_027e3c60;
    if (g_027e3c60 != 0) {
      uVar13 = FUN_00d50b00();
    }
    plVar6 = g_027e3c40;
    local_200 = '\x01';
    if (g_027e3c40 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    local_80 = plVar6;
    local_78[0] = '\0';
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01743720();
    iVar11 = iVar5 * 7 >> 0x1f;
    FUN_00d46530((((uint)((iVar5 * 7) / 6 + iVar11) >> 1) - iVar11) * 0xc);
    plVar6 = local_80;
    if ((((local_78[0] == '\0') && (local_80 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    uVar13 = FUN_01d66da0();
    plVar1 = g_027e3c68;
    local_1f8 = plVar6;
    local_1f0 = '\0';
    if (g_027e3c68 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    local_80 = plVar1;
    local_78[0] = '\0';
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b94215:
  FUN_01d5dc80();
  local_1e8 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = g_027e51f8;
  local_1e0 = '\x01';
  if (g_027e51f8 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = lVar7;
  local_1d0 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  uVar13 = FUN_00d31230(&local_1c8,&local_1d8);
  local_d0 = local_80;
  local_c8 = 0;
  local_1b8 = g_027e26e8;
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      local_1b8 = g_027e26e8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_c8 = '\x01';
  g_027e26e8 = local_1b8;
  if (local_1b8 != 0) {
    local_c8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_1b0 = '\x01';
  FUN_01d5d9b0(uVar13,&local_1b8);
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027e26a0;
  if (g_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027e5200;
  local_1a8 = lVar7;
  local_1a0 = '\x01';
  if (g_027e5200 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar3;
  local_190 = '\x01';
  local_188 = 0;
  local_180 = '\0';
  uVar13 = FUN_00d31230(&local_188,&local_198);
  local_c0 = local_80;
  local_b8 = 0;
  local_178 = g_027e5208;
  if (local_78[0] == '\0') {
    if (local_80 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
      local_178 = g_027e5208;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_b8 = '\x01';
  g_027e5208 = local_178;
  if (local_178 != 0) {
    local_b8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_170 = '\x01';
  FUN_01d5d9b0(uVar13,&local_178);
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_88;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01b8fc70
// ============================================================
// Function: FUN_01b8fc70
// Address: 01b8fc70
// Size: 1336 bytes
// Class: MUScaleModeSequence
// String references:
//   "MUScaleModeSequence"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b8fc70(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t *in_RCX;
  uint64_t uVar11;
  char *pcVar12;
  int64_t lVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((int64_t *)this_ptr[0x3f] == (int64_t *)0x0) goto LAB_01b8fe49;
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == (int64_t *)this_ptr[0x3f]) {
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
    goto LAB_01b8fe49;
  }
  if ((g_027be908 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar7 != 0)) {
    g_027be858 = FUN_010ec850();
    g_027be840 = "MUScaleModeSequence";
    g_027be848 = 0x70;
    g_027be850 = FUN_0124b550;
    g_027be860 = 0;
    ram_00000000027be868 = 0;
    g_027be870 = 0;
    ram_00000000027be878 = 0;
    g_027be880 = 0;
    ram_00000000027be888 = 0;
    g_027be890 = 0;
    ram_00000000027be898 = 0;
    g_027be8a0 = 0;
    ram_00000000027be8a8 = 0;
    g_027be8b0 = 0;
    ram_00000000027be8b8 = 0;
    g_027be8c0 = 0;
    ram_00000000027be8c8 = 0;
    g_027be8d0 = 0;
    ram_00000000027be8d8 = 0;
    g_027be8e0 = 0;
    ram_00000000027be8e8 = 0;
    g_027be8f0 = 0;
    ram_00000000027be8f8 = 0;
    g_027be900 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b8fcdc:
    in_RCX = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    in_RCX = arg1;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b8fcdc;
  }
  if (*in_RCX != 0) {
    pvVar8 = _pthread_getspecific((void*)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
  }
LAB_01b8fe49:
  pVar10 = (void*)in_RCX;
  local_68 = *param_2;
  local_60 = '\0';
  FUN_01b68d40(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*this_ptr + 0xa78))();
  *(void*)(this_ptr + 0x40) = 1;
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b00();
    lVar2 = this_ptr[0x3f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar13 = local_48;
    pvVar8 = _pthread_getspecific(pVar10);
    lVar3 = local_48;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar13 = lVar3, lVar9 != 0)) {
      lVar13 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    iVar7 = *(int *)(*(int64_t *)(lVar13 + 0x48) + 0x18);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar7 + 7U < 0xf) {
      lVar2 = this_ptr[0x3f];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = 0;
      FUN_01252670(0,0,0,0);
      lVar13 = local_48;
      pVar10 = (void*)CONCAT71((int7)((uint64_t)uVar11 >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0173f250();
      *(void*)(this_ptr + 0x40) = uVar5;
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  cVar6 = (**(code **)(*this_ptr + 0xa78))();
  if (cVar4 != cVar6) {
    (**(code **)(*this_ptr + 0x620))();
  }
  return;
}



// ============================================================
// 01b91920
// ============================================================
// Function: FUN_01b91920
// Address: 01b91920
// Size: 1487 bytes
// Class: MUScaleModeSequence
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


uint64_t * FUN_01b91920(void* param_1,uint64_t param_2)

{
  int64_t lVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  char cVar6;
  void *pvVar7;
  void* pVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  char *pcVar11;
  int64_t *arg1;
  uint64_t *this_ptr;
  uint64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint64_t local_90;
  uint64_t local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  uint64_t local_70;
  uint64_t local_68;
  uint64_t local_58;
  char local_50;
  char local_41;
  uint64_t local_40;
  char local_38 [8];
  
  local_68 = param_2;
  FUN_01b920e0();
  uVar3 = local_58;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
    param_2 = local_68;
  }
  FUN_012521f0(param_2,0,&local_88,&local_70);
  uVar4 = local_40;
  pVar8 = (void*)CONCAT71((int7)((uint64_t)param_2 >> 8),local_38[0]);
  pcVar11 = &local_80;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  local_80 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 == '\0') && (uVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_01b91500();
  if (local_40 != 0) {
    FUN_01b91500();
    uVar3 = local_58;
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_0173f250();
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') goto LAB_01b91ad5;
LAB_01b91bd9:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01b91be8;
  }
LAB_01b91ad5:
  local_40 = local_68;
  FUN_00e7b970();
  local_a0 = local_40;
  local_40 = local_70;
  FUN_00e7b970();
  local_98 = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_a0._4_4_ == 0) {
    iVar2 = (int)(local_98 >> 0x20);
  }
  else {
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
    iVar2 = local_98._4_4_;
  }
  if (iVar2 != 0) {
    local_58 = local_58 & 0xffffffff00000000;
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
  }
  local_50 = '\0';
  local_58 = 0;
  local_90 = local_88;
  local_a8 = local_70;
  FUN_01b920e0();
  uVar3 = local_40;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_90;
  local_41 = FUN_01253c10(puVar9,&local_58,&local_a8,0);
  pVar8 = (void*)puVar9;
  if ((local_38[0] != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  uVar5 = local_40;
  cVar6 = local_50;
  uVar3 = local_58;
  if (local_58 == local_40) {
    if ((local_50 == '\0') && (local_40 != 0)) {
      if (local_38[0] != '\0') goto LAB_01b91cbb;
      FUN_00d50b00();
      goto LAB_01b91cee;
    }
LAB_01b91cf2:
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_58 = uVar5;
      if ((cVar6 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01b91cee:
      local_50 = '\x01';
      goto LAB_01b91cf2;
    }
    local_58 = local_40;
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01b91cbb:
    local_50 = '\x01';
  }
  if (local_41 != '\0') {
    local_70 = local_90;
  }
  if (local_58 == 0) {
LAB_01b91e86:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    (**(code **)(*arg1 + 0xa48))();
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38[0] = '\0';
    uVar10 = local_68;
    local_40 = uVar4;
    FUN_012502a0(local_68,local_88,(char)arg1[0x36]);
    pVar8 = (void*)uVar10;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = local_58;
    local_38[0] = '\0';
    FUN_012502a0(local_70,local_68,(char)arg1[0x36]);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*arg1 + 0xa50))();
    uVar3 = local_58;
    if ((char)arg1[0x42] != '\0') {
      FUN_01b92310();
      FUN_01b92310();
      goto LAB_01b91e86;
    }
    *(void*)(this_ptr + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = uVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = local_58;
      *(void*)(this_ptr + 1) = 1;
      local_50 = '\0';
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01b91be8:
  FUN_00d50b20();
  return this_ptr;
}



// ============================================================
// 01b90580
// ============================================================
// Function: FUN_01b90580
// Address: 01b90580
// Size: 1272 bytes
// Class: MUScaleModeSequence
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b90580(uint64_t param_1)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  uint64_t uVar4;
  char *pcVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(arg1 + 0x1f8) != 0) {
    uVar4 = param_1;
    FUN_00d50b00();
    pVar3 = (void*)uVar4;
    FUN_00d50b20();
    lVar1 = *(int64_t *)(arg1 + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01246780();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(arg1 + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      if (param_1 >> 0x20 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01252670(0,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(param_1,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(arg1 + 0x208) + 0x390))();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_012467d0();
  FUN_01246780();
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 01b926b0
// ============================================================
// Function: FUN_01b926b0
// Address: 01b926b0
// Size: 909 bytes
// Class: MUScaleModeSequence
// String references:
//   "_scaleModeSequence"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b926b0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x1f8) == *arg1) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b00();
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(int64_t *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01b927a0;
LAB_01b92792:
      FUN_00d50b00();
    }
    else {
      lVar4 = *(int64_t *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01b92792;
LAB_01b927a0:
      lVar4 = 0;
    }
    FUN_00e8b9a0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((int64_t *)(this_ptr + 0x138) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *arg1;
  lVar1 = *(int64_t *)(this_ptr + 0x1f8);
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x1f8) = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *(int64_t *)(this_ptr + 0x1f8);
    }
  }
  if (lVar2 == 0) {
    local_38 = 0;
    local_30 = '\0';
    FUN_01b6d800();
    if (local_30 == '\0') {
      return;
    }
    if (local_38 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
  FUN_00d50b00();
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x28);
      goto joined_r0x01b92927;
    }
  }
  else {
    lVar4 = *(int64_t *)(lVar4 + 0x30);
joined_r0x01b92927:
    if (lVar4 != 0) {
      local_40 = 0;
      FUN_00d50b00();
      goto LAB_01b92939;
    }
  }
  lVar4 = 0;
LAB_01b92939:
  local_40 = '\x01';
  pVar5 = 0x10;
  local_48 = lVar4;
  FUN_00e8b850(0x10,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((int64_t *)(this_ptr + 0x138) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x138) + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_38 = local_88;
  local_30 = '\0';
  FUN_01b6d800();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0176cbc0
// ============================================================
// Function: FUN_0176cbc0
// Address: 0176cbc0
// Size: 1181 bytes
// Class: MUScaleModeSequence
// String references:
//   "bool"
//   "_mode"
//   "MUScaleModeSequence"
//   "_isCyclic"
//   "MUScaleModeDegree"
//   "GNInt"
//   "_fundamentalIndex"
//   "_modeOffsetIsLocked"
//   "_modeFundamentalOffset"
//   "_modeFundamentalFifthsDirection"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_0176cbc0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025fe2f0;
  FUN_0176d140();
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0176d220();
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d300();
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mode";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeDegree");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01b90da0
// ============================================================
// Function: FUN_01b90da0
// Address: 01b90da0
// Size: 1126 bytes
// Class: MUScaleModeSequence
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void FUN_01b90da0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t local_48;
  char local_40;
  
  plVar1 = (int64_t *)*param_2;
  FUN_0013de80();
  if (plVar1 == (int64_t *)0x0) {
LAB_01b90de8:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01b90de8;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
LAB_01b90ece:
    bVar3 = false;
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(int64_t *)(arg1 + 0x1f8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b90ece;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    if (local_48 == 0) {
      lVar7 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b91500();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01b91091;
    FUN_00d50b00();
LAB_01b90f99:
    FUN_01246780();
    (**(code **)(**(int64_t **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  else {
    if (local_48 != 0) goto LAB_01b90f99;
LAB_01b91091:
    if (lVar7 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01b91165;
    }
    FUN_01246780();
    (**(code **)(**(int64_t **)(arg1 + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((bVar3) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01b91165:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b91500
// ============================================================
// Function: FUN_01b91500
// Address: 01b91500
// Size: 641 bytes
// Class: MUScaleModeSequence
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


int64_t * FUN_01b91500(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x1f8) == 0) {
LAB_01b916e8:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  lVar1 = *(int64_t *)(arg1 + 0x1f8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = 0;
  do {
    do {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar4 = FUN_01252960(param_1,uVar6,&local_40,0);
      if (cVar4 == '\0') {
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b916e8;
      }
    } while (local_40 == 0);
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    lVar1 = *param_2;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = local_40;
  } while (local_68 != lVar1);
  *(void*)(this_ptr + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b91721;
    }
    *this_ptr = 0;
  }
  else {
    *this_ptr = local_40;
  }
  *(void*)(this_ptr + 1) = 1;
LAB_01b91721:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0151f2d0
// ============================================================
// Function: FUN_0151f2d0
// Address: 0151f2d0
// Size: 519 bytes
// Class: MUScaleModeSequence
// String references:
//   "MUScaleModeSequence"
//   "MUDescriptionGrade"
//   "_descriptionGrade"
// === MUScaleModeSequence properties ===
//   bool            _isCyclic
//   GNInt           _fundamentalIndex
//   bool            _modeOffsetIsLocked
//   GNInt           _modeFundamentalOffset
//   GNInt           _modeFundamentalFifthsDirection
//   MUDescriptionGrade _descriptionGrade
//                   _scaleMode
//                   _endTime
//                   _startQuarter
//                   _endQuarter
//                   _doUpdate


void* FUN_0151f2d0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027c3230 = "_descriptionGrade";
      g_027c3238 = &g_027be840;
      g_027c3240 = 0;
      g_027c3248 = 0x6500;
      g_027c3250 = "MUDescriptionGrade";
      g_027c3258 = &g_0278c640;
      g_027c3260 = 0;
      ram_00000000027c3268 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027c3230;
}

