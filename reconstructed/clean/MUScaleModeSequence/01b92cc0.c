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

