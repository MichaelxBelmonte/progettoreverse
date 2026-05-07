// Function: FUN_00e6b740
// Address: 00e6b740
// Size: 3353 bytes
// Class: GNString
// String references:
//   "%@getServiceUrl?%@"
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00e6b740(void*param_1,int64_t *param_2,uint32_t param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  void*this_ptr;
  uint uVar8;
  undefined7 uVar10;
  int64_t **pplVar9;
  char cVar11;
  void*puVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint64_t local_1b0;
  uint8_t local_1a8;
  int64_t *local_1a0;
  uint8_t local_198;
  int64_t *local_190;
  uint8_t local_188;
  int64_t local_180;
  uint8_t local_178;
  int64_t *local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  int64_t local_148 [2];
  uint8_t local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  void*local_c0;
  void*local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  uint local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  uVar13 = FUN_00e67a40(param_1,param_3);
  plVar5 = local_70;
  if (((char)local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b00();
  }
  plVar2 = g_027878b8;
  local_130 = *param_2;
  local_128 = '\0';
  if (g_027878b8 != (int64_t *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_70 = plVar2;
  local_68 = local_68 & 0xffffff00;
  FUN_00ca0840(uVar13,&local_70);
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = g_027878b8;
  if (g_027878b8 == (int64_t *)0x0) {
    local_68 = 1;
    local_70 = &g_024c5048;
  }
  else {
    FUN_00d50b00();
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    FUN_00d50b00();
  }
  local_60 = plVar2;
  local_58 = '\x01';
  FUN_000b6830();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_138 = 1;
  FUN_00e600c0();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar3 = g_02787970;
  if (g_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02787880;
  if (g_02787880 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar3;
  local_148[0] = lVar4;
  uVar13 = FUN_00083ea0(2,local_148);
  FUN_00d8cb40(uVar13,&local_70);
  local_a0 = local_88;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  local_68 = local_68 & 0xffffff00;
  local_70 = (int64_t *)0x0;
  FUN_00da5ad0();
  local_58 = local_80 != '\0';
  local_60 = (int64_t *)local_88;
  if ((bool)local_58) {
    local_80 = '\0';
  }
  local_50 = FUN_00da7170();
  uVar13 = FUN_00da7180();
  local_b8 = param_1;
  if (local_60 == (int64_t *)0x0) {
    local_40 = 0;
    param_1 = (void*)0x0;
    local_78 = (int64_t *)0x0;
    cVar11 = '\0';
  }
  else {
    cVar11 = '\0';
    local_78 = (int64_t *)0x0;
    uVar8 = 0;
    local_40 = 0;
    do {
      local_120 = local_a0;
      local_118 = '\0';
      local_1b0 = 0;
      local_1a8 = 0;
      uVar13 = FUN_00e69550((int)g_02394dd8,&local_120,&local_1b0);
      uVar10 = (undefined7)((uint64_t)param_1 >> 8);
      cVar6 = (char)uVar8;
      if (local_88 == local_40) {
        if ((cVar6 == '\0') && (local_88 != 0)) {
          param_1 = (void*)CONCAT71(uVar10,1);
          if (local_80 == '\0') {
            uVar13 = FUN_00d50b00();
          }
        }
        else if ((local_80 == '\0') || (local_88 == 0)) {
          param_1 = (void*)(uint64_t)uVar8;
        }
        else {
          uVar13 = FUN_00d50b20();
          param_1 = (void*)(uint64_t)uVar8;
        }
      }
      else if (local_80 == '\0') {
        if (local_88 != 0) {
          uVar13 = FUN_00d50b00();
        }
        param_1 = (void*)CONCAT71(uVar10,1);
        if ((cVar6 == '\0') || (local_40 == 0)) goto LAB_00e6bba0;
        uVar13 = FUN_00d50b20();
        local_40 = local_88;
      }
      else {
        param_1 = (void*)CONCAT71(uVar10,1);
        if ((cVar6 == '\0') || (local_40 == 0)) {
LAB_00e6bba0:
          param_1 = (void*)CONCAT71(uVar10,1);
          local_40 = local_88;
        }
        else {
          uVar13 = FUN_00d50b20();
          local_40 = local_88;
        }
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if (local_70 != (int64_t *)0x0) {
        local_1a0 = local_70;
        local_198 = 0;
        local_190 = plVar5;
        local_188 = 0;
        local_180 = local_40;
        local_178 = 0;
        FUN_00e6a750(uVar13,&local_180);
        FUN_00e97f20();
        plVar2 = local_70;
        cVar6 = (char)local_68;
        if (local_70 == local_78) {
          if ((((char)local_68 != '\0') && (cVar11 == '\0')) && (local_70 != (int64_t *)0x0)) {
            cVar11 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          if ((cVar11 == '\0') || (local_78 == (int64_t *)0x0)) {
            local_78 = plVar2;
            cVar11 = cVar6;
          }
          else {
            FUN_00d50b20();
            local_78 = plVar2;
            cVar11 = cVar6;
          }
        }
      }
      uVar13 = FUN_00da7180();
      if (local_60 == (int64_t *)0x0) break;
      local_60 = (int64_t *)0x0;
      if (local_58 == '\0') {
        local_58 = '\0';
        local_c0 = param_1;
        goto joined_r0x00e6bf6d;
      }
      uVar13 = FUN_00d50b20();
      local_58 = '\0';
      uVar8 = (uint)param_1;
    } while (local_60 != (int64_t *)0x0);
  }
  local_c0 = param_1;
joined_r0x00e6bf6d:
  if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar3 = local_40;
  puVar12 = local_b8;
  if (local_78 != (int64_t *)0x0) {
    uVar13 = FUN_00e971f0();
  }
  plVar2 = g_02783f20;
  local_40 = lVar3;
  if (lVar3 != 0) {
    if (g_02783f20 != (int64_t *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    lVar3 = g_02787890;
    if (g_02787890 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_110 = lVar3;
    local_108 = '\x01';
    pplVar9 = &local_70;
    FUN_000175c0(uVar13,&local_110);
    plVar1 = local_70;
    if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
      puVar12 = local_b8;
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00e6be0b:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_00e6be0b;
    }
    local_a8 = 0;
    plVar1 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    local_a8 = '\x01';
    local_b0 = plVar1;
    cVar6 = (**(code **)(*plVar2 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d50b20();
    lVar3 = g_027878a0;
    if (cVar6 != '\0') {
      if (puVar12 != (void*)0x0) {
        if (g_027878a0 != 0) {
          uVar13 = FUN_00d50b00();
        }
        local_100 = lVar3;
        local_f8 = '\x01';
        pplVar9 = &local_70;
        uVar13 = FUN_000175c0(uVar13,&local_100);
        plVar2 = local_70;
        if ((g_026fd0c0 == '\0') &&
           (iVar7 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_00, iVar7 != 0)) {
          g_026d5e58 = FUN_00d4fe50();
          g_026d5e40 = "GNString";
          g_026d5e48 = 0x40;
          g_026d5e50 = FUN_0005d920;
          g_026d5e60 = 0;
          ram_00000000026d5e68 = 0;
          g_026d5e70 = 0;
          ram_00000000026d5e78 = 0;
          g_026d5e80 = 0;
          ram_00000000026d5e88 = 0;
          g_026d5e90 = 0;
          ram_00000000026d5e98 = 0;
          g_026d5ea0 = 0;
          ram_00000000026d5ea8 = 0;
          g_026d5eb0 = 0;
          ram_00000000026d5eb8 = 0;
          g_026d5ec0 = 0;
          ram_00000000026d5ec8 = 0;
          g_026d5ed0 = 0;
          ram_00000000026d5ed8 = 0;
          g_026d5ee0 = 0;
          ram_00000000026d5ee8 = 0;
          g_026d5ef0 = 0;
          ram_00000000026d5ef8 = 0;
          g_026d5f00 = 0;
          uVar13 = ___cxa_guard_release();
          puVar12 = local_b8;
        }
        if (plVar2 == (int64_t *)0x0) {
LAB_00e6bf41:
          pplVar9 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar6 = FUN_00e85ea0();
          uVar13 = extraout_XMM0_Da;
          if (cVar6 == '\0') goto LAB_00e6bf41;
        }
        plVar2 = *pplVar9;
        if (*(char *)(pplVar9 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar9 + 1) = 0;
        }
        if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          uVar13 = FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          local_e8 = '\0';
          local_f0 = plVar2;
          FUN_00db9a70();
          plVar1 = local_70;
          plVar2 = (int64_t *)*puVar12;
          if (plVar2 == local_70) {
            if ((*(char *)(puVar12 + 1) != '\0') || (local_70 == (int64_t *)0x0))
            goto LAB_00e6c06c;
            if ((char)local_68 == '\0') {
              FUN_00d50b00();
              goto LAB_00e6c068;
            }
LAB_00e6c028:
            *(void*)(puVar12 + 1) = 1;
            local_68 = local_68 & 0xffffff00;
          }
          else {
            cVar6 = *(char *)(puVar12 + 1);
            if ((char)local_68 != '\0') {
              *puVar12 = local_70;
              if ((cVar6 != '\0') && (plVar2 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e6c028;
            }
            if (local_70 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *local_b8 = plVar1;
            if ((cVar6 != '\0') && (plVar2 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e6c068:
            *(void*)(puVar12 + 1) = 1;
LAB_00e6c06c:
            if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          uVar13 = FUN_00d50b20();
        }
      }
      lVar3 = g_027855f0;
      if (g_027855f0 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_e0 = lVar3;
      local_d8 = '\x01';
      pplVar9 = &local_70;
      FUN_000175c0(uVar13,&local_e0);
      plVar2 = local_70;
      if ((g_026fd0c0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
        g_026d5e50 = FUN_0005d920;
        g_026d5e60 = 0;
        ram_00000000026d5e68 = 0;
        g_026d5e70 = 0;
        ram_00000000026d5e78 = 0;
        g_026d5e80 = 0;
        ram_00000000026d5e88 = 0;
        g_026d5e90 = 0;
        ram_00000000026d5e98 = 0;
        g_026d5ea0 = 0;
        ram_00000000026d5ea8 = 0;
        g_026d5eb0 = 0;
        ram_00000000026d5eb8 = 0;
        g_026d5ec0 = 0;
        ram_00000000026d5ec8 = 0;
        g_026d5ed0 = 0;
        ram_00000000026d5ed8 = 0;
        g_026d5ee0 = 0;
        ram_00000000026d5ee8 = 0;
        g_026d5ef0 = 0;
        ram_00000000026d5ef8 = 0;
        g_026d5f00 = 0;
        ___cxa_guard_release();
      }
      if (plVar2 == (int64_t *)0x0) {
LAB_00e6c111:
        pplVar9 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar2 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_00e6c111;
      }
      plVar2 = *pplVar9;
      if (*(char *)(pplVar9 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar9 + 1) = 0;
      }
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        local_c8 = '\0';
        local_d0 = plVar2;
        FUN_00db9a70();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar3 = local_40;
        goto joined_r0x00e6c206;
      }
    }
  }
  lVar3 = local_40;
  local_170 = plVar5;
  local_168 = 0;
  local_160 = local_40;
  local_158 = 0;
  FUN_00e6b160();
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x00e6c206:
  if ((cVar11 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

