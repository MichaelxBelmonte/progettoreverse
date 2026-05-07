// Function: FUN_0036a8d0
// Address: 0036a8d0
// Size: 3486 bytes
// Class: MUPreviewController
// String references:
//   "MUPreviewController"
//   "GNString"

void FUN_0036a8d0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_1d8;
  int64_t *local_1d0;
  uint8_t local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
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
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  uint32_t local_40;
  uint32_t uStack_3c;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_60;
  local_1a0 = g_02703b10;
  if (g_02703b10 != 0) {
    FUN_00d50b00();
  }
  local_198 = '\x01';
  cVar4 = (**(code **)(*plVar1 + 0x50))();
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar1 = local_60;
    local_190 = g_02703b08;
    if (g_02703b08 != 0) {
      FUN_00d50b00();
    }
    local_188 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar8 = extraout_XMM0_Da;
    if ((local_188 != '\0') && (local_190 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar7 = g_02703b18;
    if (cVar4 != '\0') {
      if (g_02703b18 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = g_02703b20;
      local_180 = lVar7;
      local_178 = '\x01';
      if (g_02703b20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      FUN_01f6ca30(uVar8,&local_170);
      (**(code **)(*local_60 + 0x5e0))();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0036acb3;
    }
    FUN_00d3ecc0();
    plVar1 = local_60;
    local_160 = g_02703af0;
    if (g_02703af0 != 0) {
      FUN_00d50b00();
    }
    local_158 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    uVar8 = extraout_XMM0_Da_00;
    if ((local_158 != '\0') && (local_160 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar7 = g_027259a0;
    if (cVar4 != '\0') {
      if (g_027259a0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      lVar3 = g_02703b28;
      local_150 = lVar7;
      local_148 = '\x01';
      if (g_02703b28 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_140 = lVar3;
      local_138 = '\x01';
      FUN_01f6ca30(uVar8,&local_140);
      plVar1 = local_70;
      lVar7 = g_02703b30;
      if (g_02703b30 != 0) {
        FUN_00d50b00();
      }
      FUN_00b160d0();
      (**(code **)(*local_1b0 + 0x5e0))();
      local_1d8 = local_1c0;
      FUN_00083ea0(2,&local_1d8);
      FUN_0036bfe0();
      local_a0 = local_80;
      local_98 = 0;
      if (local_78 == '\0') {
        if (local_80 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_98 = '\x01';
      (**(code **)(*plVar1 + 0x5d8))();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = (int64_t *)&g_0253d630;
      if ((local_38 != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0036acb3;
    }
    FUN_00d3ecc0();
    plVar1 = local_60;
    local_130 = g_02703b00;
    if (g_02703b00 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x520))();
      plVar1 = local_60;
      if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00368040();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_0036acb3;
    }
    FUN_00d3ecc0();
    plVar1 = local_60;
    local_120 = g_026d8900;
    if (g_026d8900 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar1 = local_60;
      local_110 = g_02703b38;
      if (g_02703b38 != 0) {
        FUN_00d50b00();
      }
      local_108 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') goto LAB_0036acb3;
      FUN_00d3ecc0();
      plVar1 = local_60;
      local_100 = g_02726c90;
      if (g_02726c90 != 0) {
        FUN_00d50b00();
      }
      local_f8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        (**(code **)(*this_ptr + 0x770))();
        goto LAB_0036acb3;
      }
      FUN_00d3ecc0();
      plVar1 = local_60;
      local_f0 = g_02703af8;
      if (g_02703af8 != 0) {
        FUN_00d50b00();
      }
      local_e8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        (**(code **)(*this_ptr + 0x720))();
        (**(code **)(*local_80 + 0x618))();
        local_90 = local_70;
        local_88 = 0;
        if (local_68 == '\0') {
          if (local_70 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_88 = '\x01';
        FUN_0036c080();
        plVar1 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_58 = '\0';
          local_60 = (int64_t *)0x0;
          local_50 = plVar1;
          local_40 = 0;
          local_48 = 0;
          if (0 < *(int *)((int64_t)plVar1 + 0xc)) {
            lVar7 = 0;
            do {
              plVar2 = *(int64_t **)(plVar1[2] + lVar7 * 8);
              local_60 = plVar2;
              cVar4 = FUN_00763980();
              if (cVar4 != '\0') {
                (**(code **)(*plVar2 + 0x508))();
              }
              lVar7 = lVar7 + 1;
              local_48 = CONCAT44(local_48._4_4_,(int)lVar7);
            } while ((int)lVar7 < *(int *)((int64_t)plVar1 + 0xc));
          }
          FUN_002b3090();
          FUN_00d50b20();
        }
        goto LAB_0036acb3;
      }
      FUN_00d3ecc0();
      plVar1 = local_60;
      local_e0 = g_027e2660;
      if (g_027e2660 != 0) {
        FUN_00d50b00();
      }
      local_d8 = '\x01';
      cVar4 = (**(code **)(*plVar1 + 0x50))();
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_0036acb3;
      uVar8 = FUN_00d3ed20();
      local_d0 = g_02704000;
      if (g_02704000 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_c8 = '\x01';
      pplVar6 = &local_60;
      FUN_000175c0(uVar8,&local_d0);
      plVar1 = local_60;
      if ((g_026fd0c0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
      if (plVar1 == (int64_t *)0x0) {
LAB_0036b314:
        pplVar6 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        if (cVar4 == '\0') goto LAB_0036b314;
      }
      plVar1 = *pplVar6;
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar6 + 1) = 0;
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar7 = g_02703ad0;
      if (plVar1 != (int64_t *)0x0) {
        if (g_02703ad0 != 0) {
          FUN_00d50b00();
        }
        local_c0 = lVar7;
        local_b8 = '\x01';
        cVar4 = (**(code **)(*plVar1 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          FUN_00365f50();
        }
        FUN_00d50b20();
      }
      goto LAB_0036acb3;
    }
    pplVar6 = &local_60;
    FUN_00d3ecf0();
    plVar1 = local_60;
    FUN_00370d10();
    if (plVar1 == (int64_t *)0x0) {
LAB_0036aea0:
      pplVar6 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_0036aea0;
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar6 + 1) = 0;
    }
    local_1c8 = 1;
    local_1d0 = plVar1;
    FUN_00367bf0();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_0036acb3;
  }
  pplVar6 = &local_60;
  FUN_00d3ecf0();
  plVar1 = local_60;
  if ((g_027391d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_02703b80 = FUN_00d4fe50();
    g_02703b68 = "MUPreviewController";
    g_02703b70 = 0x38;
    g_02703b78 = FUN_00370cc0;
    g_02703b88 = 0;
    ram_0000000002703b90 = 0;
    g_02703b98 = 0;
    ram_0000000002703ba0 = 0;
    g_02703ba8 = 0;
    ram_0000000002703bb0 = 0;
    g_02703bb8 = 0;
    ram_0000000002703bc0 = 0;
    g_02703bc8 = 0;
    ram_0000000002703bd0 = 0;
    g_02703bd8 = 0;
    ram_0000000002703be0 = 0;
    g_02703be8 = 0;
    ram_0000000002703bf0 = 0;
    g_02703bf8 = 0;
    ram_0000000002703c00 = 0;
    g_02703c08 = 0;
    ram_0000000002703c10 = 0;
    g_02703c18 = 0;
    ram_0000000002703c20 = 0;
    g_02703c28 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_0036a9a6:
    pplVar6 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0036a9a6;
  }
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_0044d2e0();
    FUN_01aa7ef0();
    FUN_00d50b20();
  }
LAB_0036acb3:
  local_b0 = *arg1;
  local_a8 = '\0';
  FUN_00292f50();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}

