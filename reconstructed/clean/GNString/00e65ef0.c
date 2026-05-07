// Function: FUN_00e65ef0
// Address: 00e65ef0
// Size: 4545 bytes
// Class: GNString
// String references:
//   "%@activateHost?%@"
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00e65ef0(int *param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t arg1;
  void*this_ptr;
  void*puVar9;
  undefined7 uVar10;
  char cVar11;
  int64_t **pplVar12;
  bool bVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint uVar15;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint64_t local_210;
  uint8_t local_208;
  int64_t *local_200;
  uint8_t local_1f8;
  int64_t *local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  int64_t *local_1c0;
  uint8_t local_1b8;
  int64_t local_1b0;
  uint8_t local_1a8;
  uint8_t local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
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
  int64_t local_f8;
  void*local_f0;
  void*local_e0;
  uint local_d8;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
  }
  FUN_00e67a40(param_1,0);
  plVar3 = local_70;
  if ((local_68 == '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = g_02787870;
  if (g_02787870 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027855c0;
  if (g_027855c0 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = lVar2;
  FUN_00083ea0(2,&local_f8);
  FUN_000b6830();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_198 = 1;
  FUN_00e600c0();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (int64_t *)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02787970;
  puVar9 = &g_024c5048;
  if (g_02787970 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_02787880;
  if (g_02787880 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = lVar2;
  uVar14 = FUN_00083ea0(2,&local_f8);
  FUN_00d8cb40(uVar14,&local_70);
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
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = '\0';
  local_70 = (int64_t *)0x0;
  FUN_00da5ad0();
  local_58 = local_80 != '\0';
  local_60 = local_88;
  if ((bool)local_58) {
    local_80 = '\0';
  }
  local_50 = FUN_00da7170();
  uVar14 = FUN_00da7180();
  if (local_60 == 0) {
    cVar11 = '\0';
    local_78 = (int64_t *)0x0;
    local_40 = 0;
    local_f0 = (void*)0x0;
  }
  else {
    local_40 = 0;
    uVar15 = 0;
    local_78 = (int64_t *)0x0;
    cVar11 = '\0';
    do {
      local_190 = local_88;
      local_188 = '\0';
      local_210 = 0;
      local_208 = 0;
      uVar14 = FUN_00e69550((int)g_02394dd8,&local_190,&local_210);
      uVar10 = (undefined7)((uint64_t)puVar9 >> 8);
      cVar5 = (char)uVar15;
      if (local_88 == local_40) {
        if ((cVar5 == '\0') && (local_88 != 0)) {
          puVar9 = (void*)CONCAT71(uVar10,1);
          if (local_80 == '\0') {
            uVar14 = FUN_00d50b00();
          }
        }
        else if ((local_80 == '\0') || (local_88 == 0)) {
          puVar9 = (void*)(uint64_t)uVar15;
        }
        else {
          uVar14 = FUN_00d50b20();
          puVar9 = (void*)(uint64_t)uVar15;
        }
      }
      else if (local_80 == '\0') {
        if (local_88 != 0) {
          uVar14 = FUN_00d50b00();
        }
        puVar9 = (void*)CONCAT71(uVar10,1);
        if ((cVar5 == '\0') || (local_40 == 0)) goto LAB_00e66310;
        uVar14 = FUN_00d50b20();
        local_40 = local_88;
      }
      else {
        puVar9 = (void*)CONCAT71(uVar10,1);
        if ((cVar5 == '\0') || (local_40 == 0)) {
LAB_00e66310:
          puVar9 = (void*)CONCAT71(uVar10,1);
          local_40 = local_88;
        }
        else {
          uVar14 = FUN_00d50b20();
          local_40 = local_88;
        }
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (local_70 == (int64_t *)0x0) goto LAB_00e66490;
      local_200 = local_70;
      local_1f8 = 0;
      local_1f0 = plVar3;
      local_1e8 = 0;
      local_1e0 = local_40;
      local_1d8 = 0;
      FUN_00e6a750(uVar14,&local_1e0);
      FUN_00e97f20();
      cVar5 = local_68;
      plVar8 = local_70;
      if (local_70 == local_78) {
        if ((local_68 == '\0') || (cVar11 != '\0')) {
          if (local_70 != (int64_t *)0x0) goto LAB_00e66497;
        }
        else if (local_70 != (int64_t *)0x0) {
          cVar11 = '\x01';
          FUN_00d50b00();
          plVar8 = local_78;
          goto joined_r0x00e66442;
        }
LAB_00e66490:
        if (local_40 == 0) goto LAB_00e66497;
      }
      else {
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        bVar13 = cVar11 != '\0';
        cVar11 = cVar5;
        if ((bVar13) && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
joined_r0x00e66442:
        local_78 = plVar8;
        if (local_70 == (int64_t *)0x0) goto LAB_00e66490;
LAB_00e66497:
        if (param_1 != (int *)0x0) {
          bVar4 = FUN_00dd1a20();
          *param_1 = bVar4 + 1;
        }
      }
      uVar14 = FUN_00da7180();
      local_f0 = puVar9;
      if (local_60 == 0) break;
      local_60 = 0;
      if (local_58 == '\0') {
        local_58 = '\0';
        break;
      }
      uVar14 = FUN_00d50b20();
      local_58 = '\0';
      uVar15 = (uint)puVar9;
    } while (local_60 != 0);
  }
  local_60 = 0;
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    uVar14 = FUN_00e971f0();
  }
  plVar8 = g_02783f20;
  if (local_40 != 0) {
    if (g_02783f20 != (int64_t *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    lVar1 = g_02787890;
    if (g_02787890 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_180 = lVar1;
    local_178 = '\x01';
    pplVar12 = &local_70;
    FUN_000175c0(uVar14,&local_180);
    plVar7 = local_70;
    if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
    if (plVar7 == (int64_t *)0x0) {
LAB_00e665c5:
      pplVar12 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar7 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_00e665c5;
    }
    plVar7 = *pplVar12;
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar12 + 1) = 0;
    }
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_00d50b20();
    lVar1 = g_027855f0;
    if (cVar5 != '\0') {
      if (g_027855f0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_170 = lVar1;
      local_168 = '\x01';
      pplVar12 = &local_70;
      uVar14 = FUN_000175c0(uVar14,&local_170);
      plVar8 = local_70;
      if ((g_026fd0c0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_01, iVar6 != 0)) {
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
        uVar14 = ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_00e666ee:
        pplVar12 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar14 = extraout_XMM0_Da;
        if (cVar5 == '\0') goto LAB_00e666ee;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (plVar8 == (int64_t *)0x0) {
        bVar13 = false;
        local_90 = (int64_t *)0x0;
      }
      else {
        local_158 = '\0';
        local_160 = plVar8;
        FUN_00db9a70();
        local_90 = local_70;
        if (local_70 == (int64_t *)0x0) {
          bVar13 = false;
          local_90 = (int64_t *)0x0;
        }
        else if (local_68 == '\0') {
          FUN_00d50b00();
          bVar13 = true;
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_68 = '\0';
          bVar13 = true;
        }
        if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d50b20();
      }
      lVar1 = g_027878a0;
      if (g_027878a0 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_150 = lVar1;
      local_148 = '\x01';
      pplVar12 = &local_70;
      uVar14 = FUN_000175c0(uVar14,&local_150);
      plVar8 = local_70;
      if ((g_026fd0c0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar14 = extraout_XMM0_Da_02, iVar6 != 0)) {
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
        uVar14 = ___cxa_guard_release();
      }
      if (plVar8 == (int64_t *)0x0) {
LAB_00e6688d:
        pplVar12 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar14 = extraout_XMM0_Da_00;
        if (cVar5 == '\0') goto LAB_00e6688d;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          uVar14 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((plVar8 == (int64_t *)0x0) || (param_2 == (void*)0x0)) {
        if (plVar8 != (int64_t *)0x0) goto LAB_00e669ef;
      }
      else {
        local_138 = '\0';
        local_140 = plVar8;
        FUN_00db9a70();
        plVar7 = local_70;
        plVar8 = (int64_t *)*param_2;
        if (plVar8 == local_70) {
          if ((*(char *)(param_2 + 1) != '\0') || (local_70 == (int64_t *)0x0)) goto LAB_00e669c1;
          if (local_68 == '\0') {
            FUN_00d50b00();
            goto LAB_00e669b7;
          }
LAB_00e6696d:
          local_e0 = param_2 + 1;
          *(void*)local_e0 = 1;
          local_68 = '\0';
        }
        else {
          cVar5 = *(char *)(param_2 + 1);
          if (local_68 != '\0') {
            *param_2 = local_70;
            if ((cVar5 != '\0') && (plVar8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00e6696d;
          }
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *param_2 = plVar7;
          if ((cVar5 != '\0') && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_00e669b7:
          local_e0 = param_2 + 1;
          *(void*)local_e0 = 1;
LAB_00e669c1:
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00e669ef:
        uVar14 = FUN_00d50b20();
      }
      lVar1 = g_027878a8;
      if (g_027878a8 != 0) {
        uVar14 = FUN_00d50b00();
      }
      local_130 = lVar1;
      local_128 = '\x01';
      pplVar12 = &local_70;
      FUN_000175c0(uVar14,&local_130);
      plVar8 = local_70;
      if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
      if (plVar8 == (int64_t *)0x0) {
LAB_00e66a66:
        pplVar12 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar8 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_00e66a66;
      }
      plVar8 = *pplVar12;
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar12 + 1) = 0;
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        plVar7 = *(int64_t **)(arg1 + 0x38);
        if (plVar7 != plVar8) {
          FUN_00d50b00();
          *(int64_t **)(arg1 + 0x38) = plVar8;
          if (plVar7 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      local_d8 = FUN_00dcd050();
      local_120 = g_027878b0;
      uVar15 = local_d8;
      if (g_027878b0 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_118 = '\x01';
      FUN_000175c0(uVar15,&local_120);
      plVar8 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 != (int64_t *)0x0) {
        local_110 = plVar8;
        local_108 = '\0';
        iVar6 = FUN_00c716c0();
        if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        uVar15 = -(uint)(0.0 < (double)iVar6 / g_023907c0);
        local_d8 = ~uVar15 & local_d8 | SUB84((double)iVar6 / g_023907c0,0) & uVar15;
      }
      if (local_90 != (int64_t *)0x0) {
        FUN_00dbbbc0();
        plVar8 = *(int64_t **)(arg1 + 0x40);
        plVar7 = plVar8;
        if (plVar8 != local_70) {
          if (local_68 == '\0') {
            if (local_70 == (int64_t *)0x0) {
              plVar7 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar8 = *(int64_t **)(arg1 + 0x40);
              plVar7 = local_70;
            }
          }
          else {
            local_68 = '\0';
            plVar7 = local_70;
          }
          *(int64_t **)(arg1 + 0x40) = plVar7;
          if (plVar8 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar7 = local_70;
          }
        }
        if ((local_68 != '\0') && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar1 = *(int64_t *)(arg1 + 0x38);
        if (lVar1 != 0) {
          FUN_00d50b00();
          local_1c8 = 1;
          local_1d0 = lVar1;
          FUN_00e658e0(local_d8);
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        if (bVar13) {
          *this_ptr = local_90;
          *(void*)(this_ptr + 1) = 1;
        }
        else {
          FUN_00d50b00();
          *this_ptr = local_90;
          *(void*)(this_ptr + 1) = 1;
        }
        goto LAB_00e66c5c;
      }
    }
    local_1c0 = plVar3;
    local_1b8 = 0;
    local_1b0 = local_40;
    local_1a8 = 0;
    FUN_00e6b160();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_00e66c5c:
  if ((cVar11 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_f0 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

