// Function: FUN_00dc1400
// Address: 00dc1400
// Size: 2620 bytes
// Class: GNValue

void FUN_00dc1400(int64_t *param_1,uint64_t param_2,void*param_3,void*param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t uVar3;
  char cVar4;
  char *pcVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  void*arg1;
  void*this_ptr;
  bool bVar9;
  bool bVar10;
  uint8_t local_res8;
  void*local_res10;
  uint64_t local_290;
  uint8_t local_288;
  uint64_t local_280;
  uint8_t local_278;
  int64_t *local_270;
  uint8_t local_268;
  int64_t local_260;
  uint8_t local_258;
  uint64_t local_250;
  uint8_t local_248;
  int64_t local_240;
  uint8_t local_238;
  uint64_t local_230;
  uint8_t local_228;
  int64_t *local_220;
  uint8_t local_218;
  uint64_t local_210;
  uint8_t local_208;
  int64_t *local_200;
  uint8_t local_1f8;
  int64_t *local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  uint64_t local_1d0;
  uint8_t local_1c8;
  uint64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  int64_t *local_1a0;
  uint8_t local_198;
  uint64_t local_190;
  uint8_t local_188;
  uint64_t local_180;
  uint8_t local_178;
  int64_t *local_170;
  uint8_t local_168;
  int64_t *local_160;
  uint8_t local_158;
  int64_t *local_150;
  uint8_t local_148;
  void*local_140;
  uint8_t local_138 [8];
  uint8_t local_130;
  uint64_t local_128;
  int64_t *local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  if (*param_1 == 0) {
    return;
  }
  local_140 = param_3;
  FUN_00dbdd00();
  plVar7 = local_58;
  if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_118 = plVar7;
  local_110 = '\0';
  local_290 = *param_4;
  local_288 = 0;
  FUN_00dbe290(&local_290,&local_118,local_res8);
  plVar1 = local_58;
  if (plVar7 == local_58) {
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar9 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  else {
    bVar9 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_100 = '\0';
  local_280 = *local_res10;
  local_278 = 0;
  local_108 = plVar7;
  FUN_00dbe120();
  plVar1 = local_58;
  if (plVar7 == local_58) {
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar9 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  else {
    bVar9 = plVar7 != (int64_t *)0x0;
    plVar7 = plVar1;
    if (bVar9) {
      FUN_00d50b20();
    }
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_58;
  local_68 = local_50[0];
  pcVar5 = &local_68;
  if (local_50[0] != '\0') {
    pcVar5 = local_50;
  }
  *pcVar5 = '\0';
  if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_68 == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00dc1666;
    }
  }
  else if (plVar1 != (int64_t *)0x0) {
LAB_00dc1666:
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_120 = plVar1;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    bVar9 = false;
    local_128 = param_2 & 0xffffffff;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar8 = -local_40._4_4_;
        }
        else {
          iVar8 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar8 = 0;
        }
        local_40 = CONCAT44(iVar8,(int)local_40);
      }
      lVar2 = g_027f37d8;
      lVar6 = (int64_t)(int)local_40;
      iVar8 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar8);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar8) break;
      plVar1 = *(int64_t **)(local_48[2] + 8 + lVar6 * 8);
      local_58 = plVar1;
      if (g_027f37d8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar2;
      local_f0 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        local_e8 = local_58;
        local_e0 = '\0';
        FUN_000175c0();
        lVar2 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (((lVar2 != 0) && (FUN_00d50b00(), local_60 != '\0')) &&
             (CONCAT71(uStack_67,local_68) != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_270 = local_58;
        local_268 = 0;
        local_258 = 0;
        local_260 = lVar2;
        cVar4 = FUN_00dc2ff0();
        if (cVar4 == '\0') {
          bVar9 = true;
        }
        else {
          local_250 = *this_ptr;
          local_248 = 0;
          local_d0 = '\0';
          local_c8 = local_58;
          local_c0 = '\0';
          local_238 = 0;
          local_240 = lVar2;
          local_d8 = plVar7;
          FUN_00dbf000();
          lVar6 = local_98;
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          local_130 = 1;
          FUN_00dbebd0(&local_c8,&local_d8,local_138);
          plVar1 = (int64_t *)CONCAT71(uStack_67,local_68);
          if (plVar7 == plVar1) {
            if ((local_60 != '\0') && (plVar1 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_60 == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = plVar7 != (int64_t *)0x0;
            plVar7 = plVar1;
            if (bVar10) {
              FUN_00d50b20();
            }
          }
          else {
            if (plVar7 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            local_60 = '\0';
            plVar7 = plVar1;
          }
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
    if (local_120 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = local_128;
    if (bVar9) {
      local_210 = *arg1;
      local_208 = 0;
      local_1f8 = 0;
      local_200 = plVar7;
      FUN_00dbdf50();
      plVar1 = local_58;
      if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_160 = plVar1;
      local_158 = 1;
      FUN_00dbfc90(&local_160,0);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00c9fe20();
      plVar1 = local_58;
      pcVar5 = local_50;
      if (local_50[0] == '\0') {
        pcVar5 = &local_68;
      }
      local_68 = local_50[0];
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
          goto LAB_00dc1b68;
        }
      }
      else if (plVar1 != (int64_t *)0x0) {
LAB_00dc1b68:
        local_50[0] = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar1;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar8 = -local_40._4_4_;
            }
            else {
              iVar8 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar8);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar8 = 0;
            }
            local_40 = CONCAT44(iVar8,(int)local_40);
          }
          lVar2 = g_027f37d8;
          lVar6 = (int64_t)(int)local_40;
          iVar8 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar8);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar8) break;
          plVar1 = *(int64_t **)(local_48[2] + 8 + lVar6 * 8);
          local_58 = plVar1;
          if (g_027f37d8 != 0) {
            FUN_00d50b00();
          }
          local_b8 = lVar2;
          local_b0 = '\x01';
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            local_a8 = local_58;
            local_a0 = '\0';
            FUN_000175c0();
            lVar2 = CONCAT71(uStack_67,local_68);
            if (local_60 == '\0') {
              if (((lVar2 != 0) && (FUN_00d50b00(), local_60 != '\0')) &&
                 (CONCAT71(uStack_67,local_68) != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
            }
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_1f0 = local_58;
            local_1e8 = 0;
            local_1d8 = 0;
            local_1e0 = lVar2;
            cVar4 = FUN_00dc2ff0();
            if (cVar4 == '\0') {
              local_1d0 = *this_ptr;
              local_1c8 = 0;
              local_1c0 = *arg1;
              local_1b8 = 0;
              local_1a8 = 0;
              local_1a0 = local_58;
              local_198 = 0;
              local_1b0 = lVar2;
              FUN_00dc3440(&local_1b0,(int)uVar3 + 1,&local_1a0,0);
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        FUN_00018280();
        FUN_00d50b20();
      }
      local_190 = *arg1;
      local_188 = 0;
      local_180 = *local_140;
      local_178 = 0;
      FUN_00dbe030();
      plVar1 = local_58;
      if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_150 = plVar1;
      local_148 = 1;
      FUN_00dbfc90(&local_150,0);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_00dc1e30;
    }
  }
  local_230 = *arg1;
  local_228 = 0;
  local_218 = 0;
  local_220 = plVar7;
  FUN_00dbde70();
  plVar1 = local_58;
  if ((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_170 = plVar1;
  local_168 = 1;
  FUN_00dbfc90(&local_170,0);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00dc1e30:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

