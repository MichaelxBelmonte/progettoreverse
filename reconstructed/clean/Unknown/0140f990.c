// Function: FUN_0140f990
// Address: 0140f990
// Size: 3732 bytes
// Class: Unknown

void FUN_0140f990(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8;
  int64_t local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  cVar1 = FUN_01780180();
  plVar6 = g_027ce888;
  lVar8 = g_02704060;
  if (cVar1 == '\0') {
    if (g_027ce888 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_0177efe0();
    local_80 = local_58;
    local_78 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_78 = '\x01';
    cVar1 = (**(code **)(*plVar6 + 0x50))();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    lVar8 = g_02704060;
    if (cVar1 != '\0') {
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar8;
      local_168 = '\x01';
      FUN_00d91000(1);
      plVar6 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      local_70 = plVar6;
      if (plVar6 != (int64_t *)0x0) {
        local_50 = '\0';
        local_58 = (int64_t *)0x0;
        local_48 = plVar6;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar5 = -local_40._4_4_;
            }
            else {
              iVar5 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar5);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar5 = 0;
            }
            local_40 = CONCAT44(iVar5,(int)local_40);
          }
          lVar8 = g_0277d268;
          lVar2 = (int64_t)(int)local_40;
          iVar5 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
          local_1d0 = *(int64_t **)(local_48[2] + 8 + lVar2 * 8);
          local_1c8 = 0;
          local_58 = local_1d0;
          if (g_0277d268 != 0) {
            FUN_00d50b00();
          }
          lVar2 = g_0277d278;
          local_1c0 = lVar8;
          local_1b8 = 1;
          if (g_0277d278 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = lVar2;
          local_1a8 = 1;
          FUN_01411140(&local_1b0,&local_1c0);
          lVar3 = local_68;
          if (local_60 == '\0') {
            if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            local_60 = '\0';
            local_68 = lVar3;
            FUN_00d233f0();
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00018280();
      }
      lVar8 = g_02704060;
      local_158 = '\0';
      local_160 = local_70;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_150 = lVar8;
      local_148 = '\x01';
      FUN_00d95130();
      plVar7 = local_70;
      plVar6 = *(int64_t **)(this_ptr + 0x20);
      plVar4 = plVar6;
      if (plVar6 != local_58) {
        if (local_50 == '\0') {
          if (local_58 == (int64_t *)0x0) {
            plVar4 = (int64_t *)0x0;
            goto LAB_0140ffb1;
          }
          FUN_00d50b00();
          plVar6 = *(int64_t **)(this_ptr + 0x20);
          *(int64_t **)(this_ptr + 0x20) = local_58;
          plVar4 = local_58;
        }
        else {
          local_50 = '\0';
          plVar4 = local_58;
LAB_0140ffb1:
          *(int64_t **)(this_ptr + 0x20) = plVar4;
        }
        if (plVar6 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar4 = local_58;
        }
      }
      if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = lVar8;
    local_198 = '\x01';
    FUN_00d91000(1);
    plVar6 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
         (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    local_70 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_48 = plVar6;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_40._4_4_ = 0;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar5 = -local_40._4_4_;
          }
          else {
            iVar5 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar5);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar5 = 0;
          }
          local_40 = CONCAT44(iVar5,(int)local_40);
        }
        lVar8 = g_0277d278;
        lVar2 = (int64_t)(int)local_40;
        iVar5 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar2 * 8);
        if (g_0277d278 != 0) {
          FUN_00d50b00();
        }
        lVar2 = g_027ce8c0;
        local_1f0 = lVar8;
        local_1e8 = 1;
        if (g_027ce8c0 != 0) {
          FUN_00d50b00();
        }
        local_1e0 = lVar2;
        local_1d8 = 1;
        FUN_01411140(&local_1e0,&local_1f0);
        lVar3 = local_68;
        if (local_60 == '\0') {
          if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60 = '\0';
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_60 = '\0';
          local_68 = lVar3;
          FUN_00d233f0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00018280();
    }
    lVar8 = g_02704060;
    local_188 = '\0';
    local_190 = local_70;
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_180 = lVar8;
    local_178 = '\x01';
    FUN_00d95130();
    plVar7 = local_70;
    plVar6 = *(int64_t **)(this_ptr + 0x20);
    plVar4 = plVar6;
    if (plVar6 != local_58) {
      if (local_50 == '\0') {
        if (local_58 == (int64_t *)0x0) {
          plVar4 = (int64_t *)0x0;
          goto LAB_0140fc85;
        }
        FUN_00d50b00();
        plVar6 = *(int64_t **)(this_ptr + 0x20);
        *(int64_t **)(this_ptr + 0x20) = local_58;
        plVar4 = local_58;
      }
      else {
        local_50 = '\0';
        plVar4 = local_58;
LAB_0140fc85:
        *(int64_t **)(this_ptr + 0x20) = plVar4;
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar4 = local_58;
      }
    }
    if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar8 = g_02772078;
  if (g_02772078 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027259e0;
  local_140 = lVar8;
  local_138 = '\x01';
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar2;
  local_128 = '\x01';
  FUN_00d98db0(&local_130,&local_140,0);
  plVar7 = (int64_t *)(this_ptr + 0x20);
  plVar6 = (int64_t *)*plVar7;
  plVar4 = plVar6;
  if (plVar6 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_01410187;
      }
      FUN_00d50b00();
      plVar6 = (int64_t *)*plVar7;
      *plVar7 = (int64_t)local_58;
      plVar4 = local_58;
    }
    else {
      local_50 = '\0';
      plVar4 = local_58;
LAB_01410187:
      *plVar7 = (int64_t)plVar4;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = local_58;
    }
  }
  if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = g_02772088;
  if (g_02772088 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027259e0;
  local_120 = lVar8;
  local_118 = '\x01';
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar2;
  local_108 = '\x01';
  FUN_00d98db0(&local_110,&local_120,0);
  plVar6 = (int64_t *)*plVar7;
  plVar4 = plVar6;
  if (plVar6 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_01410284;
      }
      FUN_00d50b00();
      plVar6 = (int64_t *)*plVar7;
      *plVar7 = (int64_t)local_58;
      plVar4 = local_58;
    }
    else {
      local_50 = '\0';
      plVar4 = local_58;
LAB_01410284:
      *plVar7 = (int64_t)plVar4;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = local_58;
    }
  }
  if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = g_027df900;
  if (g_027df900 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027c0b30;
  local_100 = lVar8;
  local_f8 = '\x01';
  if (g_027c0b30 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar2;
  local_e8 = '\x01';
  FUN_00d98db0(&local_f0,&local_100,1);
  plVar6 = (int64_t *)*plVar7;
  plVar4 = plVar6;
  if (plVar6 != local_58) {
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) {
        plVar4 = (int64_t *)0x0;
        goto LAB_01410384;
      }
      FUN_00d50b00();
      plVar6 = (int64_t *)*plVar7;
      *plVar7 = (int64_t)local_58;
      plVar4 = local_58;
    }
    else {
      local_50 = '\0';
      plVar4 = local_58;
LAB_01410384:
      *plVar7 = (int64_t)plVar4;
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar4 = local_58;
    }
  }
  if ((local_50 != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  FUN_0171ebf0();
  plVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01410637;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01410637;
  local_50 = '\0';
  local_58 = (int64_t *)0x0;
  local_70 = plVar6;
  local_48 = plVar6;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar5 = -local_40._4_4_;
      }
      else {
        iVar5 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar5);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar5 = 0;
      }
      local_40 = CONCAT44(iVar5,(int)local_40);
    }
    lVar8 = g_027cd570;
    lVar2 = (int64_t)(int)local_40;
    iVar5 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar5);
    if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
    plVar6 = *(int64_t **)(local_48[2] + 8 + lVar2 * 8);
    local_58 = plVar6;
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_e0 = lVar8;
    local_d8 = '\x01';
    cVar1 = (**(code **)(*plVar6 + 0x50))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar8 = g_027cd570;
    if (cVar1 == '\0') {
      local_d0 = local_58;
      local_c8 = '\0';
      if (g_027cd570 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar8;
      local_b8 = '\x01';
      FUN_00d98db0(&local_c0,&local_d0,0);
      lVar8 = *plVar7;
      lVar2 = lVar8;
      if (lVar8 != local_68) {
        if (local_60 == '\0') {
          if (local_68 == 0) {
            lVar2 = 0;
            goto LAB_01410592;
          }
          FUN_00d50b00();
          lVar8 = *plVar7;
          *plVar7 = local_68;
          lVar2 = local_68;
        }
        else {
          local_60 = '\0';
          lVar2 = local_68;
LAB_01410592:
          *plVar7 = lVar2;
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
          lVar2 = local_68;
        }
      }
      if ((local_60 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00018280();
  FUN_00d50b20();
LAB_01410637:
  FUN_0171e8d0();
  plVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = plVar6;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((int64_t)plVar6 + 0xc)) {
    lVar8 = 0;
    local_70 = plVar6;
    do {
      lVar2 = g_02781610;
      plVar4 = *(int64_t **)(plVar6[2] + lVar8 * 8);
      local_58 = plVar4;
      if (g_02781610 != 0) {
        FUN_00d50b00();
      }
      local_b0 = lVar2;
      local_a8 = '\x01';
      cVar1 = (**(code **)(*plVar4 + 0x50))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_02781610;
      if (cVar1 == '\0') {
        local_98 = '\0';
        local_a0 = plVar4;
        if (g_02781610 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar2;
        local_88 = '\x01';
        FUN_00d98db0(&local_90,&local_a0,0);
        plVar6 = local_70;
        lVar2 = *plVar7;
        lVar3 = lVar2;
        if (lVar2 != local_68) {
          if (local_60 == '\0') {
            if (local_68 == 0) {
              lVar3 = 0;
              goto LAB_0141078a;
            }
            FUN_00d50b00();
            lVar2 = *plVar7;
            *plVar7 = local_68;
            lVar3 = local_68;
          }
          else {
            local_60 = '\0';
            lVar3 = local_68;
LAB_0141078a:
            *plVar7 = lVar3;
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
            lVar3 = local_68;
          }
        }
        if ((local_60 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar8 = lVar8 + 1;
      local_40 = CONCAT44(local_40._4_4_,(int)lVar8);
    } while ((int)lVar8 < *(int *)((int64_t)plVar6 + 0xc));
  }
  FUN_00018280();
  FUN_00d50b20();
  return;
}

