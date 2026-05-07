// Function: FUN_01d89290
// Address: 01d89290
// Size: 4589 bytes
// Class: GNString
// String references:
//   "Event exception handling test."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01d89290(uint32_t param_1,uint32_t param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  byte bVar9;
  uint64_t uVar10;
  bool bVar11;
  int64_t lVar12;
  uint uVar13;
  uint32_t uVar14;
  uint32_t uVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  int64_t *local_250;
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
  int64_t local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
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
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint64_t local_128;
  char local_a0;
  undefined7 uStack_9f;
  char local_98;
  int64_t *local_90;
  int64_t *plVar16;
  int64_t *local_78;
  int64_t *local_68;
  char local_60 [8];
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  pcVar2 = g_028b8690;
  local_238 = *arg1;
  if (local_238 == 0) {
LAB_01d8989d:
    uVar10 = 0;
    goto LAB_01d8a2c5;
  }
  if (g_028b8690 != 0x0) {
    local_240 = '\0';
    local_248 = local_238;
    if (this_ptr != (int64_t *)0x0) {
      param_1 = FUN_00d50b00();
    }
    (*pcVar2)(param_1,&stack0xfffffffffffffee8);
    plVar16 = (int64_t *)*arg1;
    if (plVar16 == local_68) {
      if (((char)arg1[1] != '\0') || (local_68 == (int64_t *)0x0)) goto LAB_01d893ac;
      if (local_60[0] == '\0') {
        FUN_00d50b00();
        goto LAB_01d893a2;
      }
LAB_01d89362:
      local_78 = arg1 + 1;
      *(void*)local_78 = 1;
      local_60[0] = '\0';
    }
    else {
      lVar6 = arg1[1];
      if (local_60[0] != '\0') {
        *arg1 = (int64_t)local_68;
        if (((char)lVar6 != '\0') && (plVar16 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d89362;
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_68;
      if (((char)lVar6 != '\0') && (plVar16 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01d893a2:
      local_78 = arg1 + 1;
      *(void*)local_78 = 1;
LAB_01d893ac:
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_240 != '\0') && (local_248 != 0)) {
      FUN_00d50b20();
    }
    local_238 = *arg1;
    if (local_238 == 0) goto LAB_01d8989d;
  }
  *(void*)((int64_t)this_ptr + 0x1c9) = 0;
  local_230 = '\0';
  FUN_01d3a5b0();
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  plVar16 = g_028b8670;
  if ((g_028b8670 != this_ptr) &&
     (FUN_00d50b00(), g_028b8670 = this_ptr, plVar16 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (g_028b8678 == '\0') {
    g_028b8678 = '\x01';
    FUN_00e8cb90();
  }
  local_228 = *arg1;
  local_220 = '\0';
  FUN_01d3a910();
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  local_90 = (int64_t *)0x0;
  local_38 = 0;
  uVar4 = FUN_01d3a5a0();
  lVar6 = g_026d8ab0;
  if ((((g_027f1329 == '\0') && (g_028b8680 != (int64_t *)0x0)) && (g_028b8680 != this_ptr))
     && ((uVar4 < 10 && ((0x2c6U >> (uVar4 & 0x1f) & 1) != 0)))) {
    if (g_026d8ab0 != 0) {
      FUN_00d50b00();
    }
    local_250 = g_028b8680;
    FUN_00083ea0(2,&local_250);
    FUN_0036bfe0();
    lVar12 = CONCAT71(uStack_9f,local_a0);
    if (local_98 == '\0') {
      if (((lVar12 != 0) && (FUN_00d50b00(), local_98 != '\0')) &&
         (CONCAT71(uStack_9f,local_a0) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_68 = &g_024c5048;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_218 = g_026d8aa8;
    if (g_026d8aa8 != 0) {
      FUN_00d50b00();
    }
    local_210 = '\x01';
    FUN_00d50b00();
    local_200 = '\0';
    local_208 = lVar12;
    FUN_00d40470(&local_208,&stack0xfffffffffffffef8,3,3);
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      FUN_00d50b20();
    }
    if (local_60[0] != '\0') {
      FUN_00d50b20();
    }
    if ((g_028b8680 != (int64_t *)0x0) && (g_028b8680 != this_ptr)) {
      FUN_01d8b010();
    }
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  uVar14 = FUN_01f27fe0();
  cVar3 = *(char *)((int64_t)local_68 + 0xe4);
  if (local_60[0] != '\0') {
    uVar14 = FUN_00d50b20();
  }
  lVar6 = g_027ffff8;
  if (cVar3 != '\0') {
    if (g_027ffff8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_1f8 = lVar6;
    local_1f0 = '\x01';
    FUN_00cc7b40(uVar14,g_025908a0);
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f7ebb0();
  local_1e8 = *arg1;
  local_1e0 = '\0';
  FUN_00d50b00();
  (**(code **)(*local_68 + 0x378))(0,&stack0xffffffffffffff08);
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (uVar4 < 0x10) {
    if ((0x80e2U >> (uVar4 & 0x1f) & 1) == 0) {
      if ((0x314U >> (uVar4 & 0x1f) & 1) == 0) {
        bVar1 = false;
        local_90 = (int64_t *)0x0;
        local_38 = 0;
        if (uVar4 != 0xe) goto LAB_01d8a0a8;
        if (*(char *)((int64_t)this_ptr + 0x1ca) == '\0') goto LAB_01d89fe1;
      }
      local_78 = (int64_t *)this_ptr[0x29];
      if (local_78 == (int64_t *)0x0) {
        if ((int64_t *)this_ptr[3] == (int64_t *)0x0) {
          local_78 = (int64_t *)0x0;
          local_38 = 0;
          goto LAB_01d89e1a;
        }
        local_178 = *arg1;
        local_170 = '\0';
        (**(code **)(*(int64_t *)this_ptr[3] + 0x3c0))();
        bVar9 = 1;
        local_38 = 0;
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        local_38 = 0;
        local_78 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        local_198 = *arg1;
        local_190 = '\0';
        uVar5 = (**(code **)(*local_78 + 0x430))();
        cVar3 = (char)uVar5;
        if ((local_190 != '\0') && (local_198 != 0)) {
          uVar5 = FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          *(void*)(this_ptr + 0x39) = 0;
          local_188 = *arg1;
          local_180 = '\0';
          uVar5 = (**(code **)(*local_78 + 0x3c0))();
          local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          bVar9 = *(byte *)(this_ptr + 0x39) ^ 1;
          *(void*)((int64_t)this_ptr + 0x1ca) = 0;
        }
        else {
          local_38 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
LAB_01d89e1a:
          bVar9 = 0;
        }
      }
      if (uVar4 == 4) {
        FUN_00d403d0();
        local_168 = g_027f1430;
        if (g_027f1430 != 0) {
          FUN_00d50b00();
        }
        local_160 = '\x01';
        local_158 = *arg1;
        local_150 = '\0';
        local_148 = 0;
        local_140 = '\0';
        FUN_00d40470(&local_148,&local_158,3,3);
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d3a630();
      FUN_01e466c0();
      (**(code **)(*this_ptr + 0x6a0))();
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*this_ptr + 0x920))();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      bVar1 = false;
      local_90 = (int64_t *)0x0;
      lVar6 = this_ptr[0x32];
      goto joined_r0x01d89fd0;
    }
    FUN_01d3abf0();
    local_128 = FUN_01e466c0();
    (**(code **)(*this_ptr + 0x490))();
    if (local_68 == (int64_t *)0x0) {
      plVar16 = (int64_t *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      plVar16 = local_68;
      if (local_60[0] == '\0') {
        FUN_00d50b00();
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    local_90 = plVar16;
    uVar5 = FUN_01e49090((uint32_t)local_128);
    lVar6 = this_ptr[0x33];
    uVar13 = *(uint *)(lVar6 + 0xc);
    uVar10 = (uint64_t)uVar13;
    uVar14 = param_2;
    if (0 < (int)uVar13) {
      while( true ) {
        uVar13 = uVar13 - 1;
        plVar16 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar13 * 8);
        uVar15 = FUN_01e49090((uint32_t)local_128);
        param_2 = FUN_01e3f820();
        cVar3 = FUN_00d05410(uVar15,param_2,uVar14);
        if (cVar3 == '\0') {
          local_60[0] = '\0';
          FUN_01d8fc00();
          local_68 = plVar16;
        }
        if ((int64_t)uVar10 < 2) break;
        uVar10 = uVar10 - 1;
        lVar6 = this_ptr[0x33];
        uVar14 = param_2;
      }
    }
    if (local_90 == (int64_t *)0x0) goto LAB_01d89fea;
    if (this_ptr == local_90) {
      local_38 = 0;
      uVar14 = FUN_01e3f820();
      local_38 = 0;
      cVar3 = FUN_00d05410((uint32_t)local_128,uVar14,param_2);
      if (cVar3 == '\0') goto LAB_01d8a0a8;
    }
    plVar16 = local_90;
    if (this_ptr[0x2f] != 0) {
      (**(code **)(*this_ptr + 0x9b8))();
      local_1d8 = plVar16;
      local_1d0 = '\0';
      cVar3 = (**(code **)(*local_68 + 0x7c8))();
      if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_01d8a0a8;
    }
    plVar8 = plVar16;
    if (uVar4 == 1) {
      if ((int64_t *)this_ptr[0x29] == (int64_t *)0x0) {
LAB_01d89b77:
        local_a0 = '\0';
        do {
          (**(code **)(*plVar16 + 0x668))();
          if (local_60[0] == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01d8a014;
            }
          }
          else if (local_68 != (int64_t *)0x0) {
LAB_01d8a014:
            if ((int64_t *)this_ptr[0x2a] != local_68) {
              FUN_01e42250();
            }
            FUN_00d50b20();
            plVar8 = local_90;
            if (local_a0 != '\0') {
              FUN_00d50b20();
              plVar8 = local_90;
            }
            break;
          }
          FUN_01e40eb0();
          if (local_68 == plVar16) {
            if (((local_a0 == '\0') && (local_68 != (int64_t *)0x0)) && (local_60[0] != '\0'))
            goto LAB_01d89c2d;
          }
          else {
            plVar16 = local_68;
            if (local_60[0] == '\0') {
              if (local_a0 == '\0') {
                pcVar7 = &local_a0;
              }
              else {
                FUN_00d50b20();
                pcVar7 = &local_a0;
              }
            }
            else {
              if (local_a0 != '\0') {
                FUN_00d50b20();
              }
LAB_01d89c2d:
              local_a0 = '\x01';
              pcVar7 = local_60;
            }
            *pcVar7 = '\0';
          }
          if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar8 = local_90;
        } while (plVar16 != (int64_t *)0x0);
        goto LAB_01d8a046;
      }
      cVar3 = (**(code **)(*(int64_t *)this_ptr[0x29] + 0x3a8))();
      if (cVar3 == '\0') goto LAB_01d89b77;
      local_1c8 = plVar16;
      local_1c0 = '\0';
      cVar3 = (**(code **)(*(int64_t *)this_ptr[0x29] + 0x50))();
      if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto LAB_01d89b77;
      plVar16 = (int64_t *)this_ptr[0x2a];
      if ((int64_t *)this_ptr[0x29] != plVar16) {
        local_60[0] = '\0';
        local_38 = 0;
        FUN_01d8c820();
        local_68 = plVar16;
      }
      plVar16 = local_90;
      FUN_01e40eb0();
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) goto LAB_01d89b77;
      plVar16 = (int64_t *)0x0;
      lVar12 = 0;
    }
    else {
LAB_01d8a046:
      local_1b8 = *arg1;
      local_1b0 = '\0';
      cVar3 = (**(code **)(*plVar8 + 0x430))();
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') goto LAB_01d8a0a8;
      local_1a8 = *arg1;
      local_1a0 = '\0';
      (**(code **)(*plVar8 + 0x3c0))();
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if (uVar4 == 5) {
LAB_01d8a3c0:
        plVar16 = (int64_t *)0x0;
        lVar12 = 0;
      }
      else {
        uVar10 = (**(code **)(*this_ptr + 0x490))((uint32_t)local_128);
        bVar11 = true;
        if (local_68 == plVar8) {
          uVar10 = FUN_01e49090((uint32_t)local_128);
          uVar10 = uVar10 & 0xffffffffffffff00;
          bVar11 = extraout_XMM0_Db != (float)((uint64_t)uVar5 >> 0x20) ||
                   extraout_XMM0_Da != (float)uVar5;
        }
        if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          uVar10 = FUN_00d50b20();
        }
        if ((!bVar11) || (lVar12 = *arg1, lVar12 == 0)) goto LAB_01d8a3c0;
        plVar16 = (int64_t *)CONCAT71((int7)(uVar10 >> 8),(char)arg1[1]);
        if ((char)arg1[1] != '\0') {
          local_38 = 0;
          FUN_00d50b00();
        }
      }
      (**(code **)(*this_ptr + 0x6a0))((uint32_t)local_128);
      if (local_60[0] == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60[0] = '\0';
      }
      (**(code **)(*this_ptr + 0x920))();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar9 = 1;
    local_38 = 0;
    local_78 = (int64_t *)0x0;
    lVar6 = this_ptr[0x32];
  }
  else {
LAB_01d89fe1:
    bVar1 = false;
LAB_01d89fea:
    local_90 = (int64_t *)0x0;
LAB_01d8a0a8:
    local_38 = 0;
    local_78 = (int64_t *)0x0;
    bVar9 = 0;
    lVar6 = this_ptr[0x32];
joined_r0x01d89fd0:
    plVar16 = (int64_t *)0x0;
    lVar12 = 0;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
    FUN_00db26c0();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_01f27fe0();
    (**(code **)(*local_68 + 0x4a8))();
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d3a560();
  if (local_60[0] == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60[0] = '\0';
  }
  FUN_01d3a930();
  if (local_68 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = local_68;
  if (g_028b8670 != (int64_t *)0x0) {
    g_028b8670 = (int64_t *)0x0;
    FUN_00d50b20();
    plVar8 = plVar16;
  }
  if (lVar12 != 0) {
    uVar5 = FUN_01d3abf0();
    local_128 = uVar5;
    FUN_01d3b630();
    uVar14 = FUN_01d3b590();
    FUN_01d3c980((uint32_t)local_128,0,uVar14);
    if (local_60[0] == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60[0] = '\0';
    }
    local_130 = '\x01';
    local_138 = local_68;
    FUN_01d89290();
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = local_68;
    if ((char)plVar16 != '\0') {
      FUN_00d50b20();
    }
  }
  uVar10 = CONCAT71((int7)((uint64_t)plVar8 >> 8),bVar9 != 0);
  if ((bVar1) && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d8a2c5:
  return uVar10 & 0xffffffff;
}

