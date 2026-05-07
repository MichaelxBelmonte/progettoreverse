// Function: FUN_01d05320
// Address: 01d05320
// Size: 1972 bytes
// Class: GNMultipleValue

uint64_t FUN_01d05320(uint64_t param_1,char param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_140;
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
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint32_t local_b4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_58;
  char local_50;
  uint32_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01cae990();
  plVar1 = local_80;
  local_118 = g_027ef4d0;
  if (g_027ef4d0 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_01cae990();
    plVar1 = local_80;
    local_108 = g_027ef498;
    if (g_027ef498 != 0) {
      FUN_00d50b00();
    }
    local_100 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01cae990();
      plVar1 = local_80;
      local_f8 = g_027ef470;
      if (g_027ef470 != 0) {
        FUN_00d50b00();
      }
      local_f0 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        FUN_01cae990();
        plVar1 = local_80;
        local_d8 = g_027ef4d8;
        if (g_027ef4d8 != 0) {
          FUN_00d50b00();
        }
        local_d0 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        uVar11 = extraout_XMM0_Da_00;
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          uVar11 = FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          uVar11 = FUN_00d50b20();
        }
        if (cVar4 == '\0') {
          local_c8 = *arg1;
          local_c0 = '\0';
          uVar7 = FUN_01d123e0(uVar11,param_2);
          uVar10 = (uint64_t)uVar7;
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
          if (param_2 != '\0') {
            FUN_01cfbee0(0,0,0);
            plVar1 = local_80;
            if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b00();
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            iVar6 = FUN_01caea00();
            if (iVar6 == 0) {
              FUN_01d03810();
            }
            else {
              FUN_01d03810();
            }
            FUN_01d11e80();
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
      }
      else {
        uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
        if (param_2 != '\0') {
          FUN_01caeb00();
          plVar1 = local_80;
          if ((local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b00();
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d4efa0();
          FUN_00c811e0();
          plVar8 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
              if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_78 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar8 + 0x18))();
          local_88 = 0;
          local_90 = this_ptr[0x39];
          if (local_90 != 0) {
            FUN_00d50b00();
          }
          local_88 = '\x01';
          FUN_01f7bcc0();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = plVar1[0x39];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_e0 = '\x01';
          local_e8 = lVar2;
          (**(code **)(*this_ptr + 0x4a0))();
          local_78 = '\0';
          local_80 = plVar1;
          uVar5 = FUN_00d237a0();
          uVar11 = extraout_XMM0_Da;
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            uVar11 = FUN_00d50b20();
          }
          FUN_01f7c700(uVar11,uVar5);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          FUN_01d03810();
          FUN_01d11e80();
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      if (param_2 != '\0') {
        FUN_01d03810();
        FUN_01d11e80();
      }
    }
    goto LAB_01d05a87;
  }
  uVar10 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
  if (param_2 == '\0') goto LAB_01d05a87;
  plVar1 = this_ptr + 0x39;
  plVar8 = (int64_t *)this_ptr[0x39];
  FUN_001b9d20();
  if (plVar8 == (int64_t *)0x0) {
LAB_01d053f8:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar8 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar8 = plVar1;
    if (cVar4 == '\0') goto LAB_01d053f8;
  }
  lVar2 = *plVar8;
  if (lVar2 == 0) {
    local_a8 = 0;
    lVar9 = *plVar1;
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_b0 = lVar9;
    FUN_01cfd130();
    local_b4 = 0;
    local_98 = 0;
    local_a0 = *plVar1;
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_01cfd130();
    local_140 = local_128;
    FUN_0049c630(&local_140,&local_b4,4);
    local_80 = (int64_t *)&g_02647118;
    local_48 = 0x3f800000;
    FUN_01f7b9d0(g_023b5d7c,&local_80);
    lVar9 = local_40;
    if (local_40 == 0) {
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    local_80 = (int64_t *)&g_024f9300;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    bVar3 = false;
    lVar9 = 0;
  }
  FUN_01d03810();
  FUN_01d11e80();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
LAB_01d05a87:
  return uVar10 & 0xffffffff;
}

