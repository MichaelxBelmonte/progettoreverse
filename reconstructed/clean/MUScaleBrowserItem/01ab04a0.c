// Function: FUN_01ab04a0
// Address: 01ab04a0
// Size: 3548 bytes
// Class: MUScaleBrowserItem
// String references:
//   "MUScaleBrowserItem"

void* FUN_01ab04a0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *in_RCX;
  int64_t **pplVar9;
  int iVar10;
  int64_t arg1;
  void*this_ptr;
  int64_t *plVar11;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  void*local_1e8;
  uint8_t local_1e0;
  void*local_1d8;
  uint8_t local_1d0;
  int64_t *local_1c8;
  uint8_t local_1c0;
  int64_t *local_1b8;
  uint8_t local_1b0;
  void*local_1a8;
  uint8_t local_1a0;
  int64_t *local_198;
  uint8_t local_190;
  void*local_188;
  uint8_t local_180;
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  int64_t *local_158;
  uint8_t local_150;
  uint8_t local_148 [8];
  uint8_t local_140;
  int64_t *local_138;
  uint8_t local_130;
  uint8_t local_128 [8];
  uint8_t local_120;
  int64_t *local_118;
  uint8_t local_110;
  int64_t *local_108;
  uint8_t local_100;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_81;
  code *local_80;
  int64_t *local_78;
  char local_70 [8];
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  lVar7 = *in_RCX;
  local_81 = (char)in_RCX[1];
  if ((local_81 == '\0') || (lVar7 == 0)) {
    if (lVar7 == 0) {
      lVar7 = arg1;
      if (arg1 != 0) goto LAB_01ab04cf;
      lVar7 = 0;
    }
  }
  else {
LAB_01ab04cf:
    param_1 = FUN_00d50b00();
    local_81 = '\x01';
  }
  local_e8 = '\0';
  local_f0 = lVar7;
  local_c0 = lVar7;
  FUN_00c9fe40(param_1,&local_f0);
  plVar5 = local_78;
  pplVar9 = &local_50;
  if (local_70[0] != '\0') {
    pplVar9 = (int64_t **)local_70;
  }
  local_50 = (int64_t *)CONCAT71(local_50._1_7_,local_70[0]);
  *(char *)pplVar9 = '\0';
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 == '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) goto LAB_01ab119a;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  local_80 = g_02572370;
  (*g_02572370)();
  local_90 = puVar4;
  FUN_017aae40();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017a9f30();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_017aa1e0();
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_78 = plVar5;
  local_70[0] = '\0';
  FUN_00d21140();
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_02572358;
  (*local_80)();
  plVar1 = (int64_t *)*in_RCX;
  if (plVar1 == (int64_t *)0x0) {
    if ((*(char *)(arg1 + 0x91) != '\0') || (*(char *)(arg1 + 0x92) != '\0')) {
      FUN_017bf2e0();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_140 = 1;
      local_1e8 = local_90;
      local_1e0 = 0;
      uVar12 = FUN_01ab1b30(&local_1e8,local_148);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(void*)((int64_t)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_017bf050();
    plVar1 = local_50;
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_130 = 1;
    local_138 = plVar1;
    local_1d8 = local_90;
    local_1d0 = 0;
    uVar8 = FUN_01ab1b30(&local_1d8);
    plVar11 = local_78;
    uVar12 = extraout_XMM0_Da_01;
    if (local_78 == (int64_t *)0x0) {
      local_80 = 0x0;
    }
    else {
      local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if (local_70[0] == '\0') {
        uVar12 = FUN_00d50b00();
      }
    }
    if (plVar1 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (plVar11 != (int64_t *)0x0) {
      local_70[0] = '\0';
      local_78 = (int64_t *)0x0;
      local_40 = plVar11;
      local_68 = plVar11;
      local_60 = 0xffffffff;
      local_58 = 0;
      local_60._4_4_ = 0;
      while( true ) {
        if (local_60._4_4_ != 0) {
          if (local_60._4_4_ < 1) {
            iVar10 = -local_60._4_4_;
          }
          else {
            iVar10 = (int)local_60 - local_60._4_4_;
            local_60 = CONCAT44(local_60._4_4_,iVar10);
            FUN_00d23690();
            local_58 = local_58 + local_60._4_4_;
            iVar10 = 0;
          }
          local_60 = CONCAT44(iVar10,(int)local_60);
        }
        lVar7 = (int64_t)(int)local_60;
        iVar10 = (int)local_60 + 1;
        local_60 = CONCAT44(local_60._4_4_,iVar10);
        if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) break;
        local_1c8 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
        local_1c0 = 0;
        local_1b0 = 0;
        local_1b8 = plVar5;
        local_78 = local_1c8;
        cVar3 = FUN_01ab2150(local_68[2],&local_1b8);
        if (cVar3 == '\0') {
          local_50 = local_78;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar12 = FUN_01b53440();
      plVar11 = local_40;
    }
    if ((*(char *)(arg1 + 0x90) != '\0') &&
       ((*(char *)(arg1 + 0x91) != '\0' || (*(char *)(arg1 + 0x92) != '\0')))) {
      uVar12 = FUN_017bed60();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01ab0d1f;
        }
      }
      else if (local_78 != (int64_t *)0x0) {
LAB_01ab0d1f:
        cVar3 = (**(code **)(*plVar1 + 0x3a0))();
        if (cVar3 != '\0') {
          plVar6 = (int64_t *)FUN_00e8fc40();
          FUN_00d4ff40();
          *plVar6 = (int64_t)&g_02641258;
          *(void*)((int64_t)plVar6 + 0xc) = 0;
          plVar6[2] = 0;
          plVar6[3] = 0;
          (*g_02641270)();
          local_e0 = plVar1;
          local_d8 = '\0';
          FUN_01aa3fc0();
          if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar1 + 0x390))();
          local_b8 = local_78;
          local_b0 = 0;
          if (local_70[0] == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70[0] = '\0';
          }
          local_b0 = '\x01';
          FUN_01aa3f40();
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01aa3f00();
          local_70[0] = '\0';
          local_78 = plVar6;
          FUN_00d21140();
          if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        uVar12 = FUN_00d50b20();
      }
    }
  }
  else {
    if ((g_02737920 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
      g_027e2e88 = FUN_00d4fe50();
      g_027e2e70 = "MUScaleBrowserItem";
      g_027e2e78 = 0x20;
      g_027e2e80 = FUN_00841ad0;
      g_027e2e90 = 0;
      ram_00000000027e2e98 = 0;
      g_027e2ea0 = 0;
      ram_00000000027e2ea8 = 0;
      g_027e2eb0 = 0;
      ram_00000000027e2eb8 = 0;
      g_027e2ec0 = 0;
      ram_00000000027e2ec8 = 0;
      g_027e2ed0 = 0;
      ram_00000000027e2ed8 = 0;
      g_027e2ee0 = 0;
      ram_00000000027e2ee8 = 0;
      g_027e2ef0 = 0;
      ram_00000000027e2ef8 = 0;
      g_027e2f00 = 0;
      ram_00000000027e2f08 = 0;
      g_027e2f10 = 0;
      ram_00000000027e2f18 = 0;
      g_027e2f20 = 0;
      ram_00000000027e2f28 = 0;
      g_027e2f30 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') {
      in_RCX = &g_02802688;
    }
    lVar7 = *in_RCX;
    lVar2 = in_RCX[1];
    if (((char)lVar2 == '\0') || (lVar7 == 0)) {
      if (lVar7 == 0) {
        local_80 = 0x0;
        plVar11 = (int64_t *)0x0;
        uVar12 = extraout_XMM0_Da;
        goto LAB_01ab108e;
      }
    }
    else {
      FUN_00d50b00();
    }
    local_a8 = lVar7;
    FUN_01aa3f90();
    cVar3 = (**(code **)(*local_78 + 0x3a0))();
    uVar12 = extraout_XMM0_Da_00;
    if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
    if (cVar3 == '\0') {
LAB_01ab0fa5:
      local_80 = 0x0;
      local_40 = (int64_t *)0x0;
    }
    else {
      FUN_01aa3f90();
      lVar7 = local_a0;
      if (local_98 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_98 = '\0';
      }
      local_120 = 1;
      local_1a8 = local_90;
      local_1a0 = 0;
      uVar12 = FUN_01ab1b30(&local_1a8,local_128);
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_78 = plVar1;
      local_70[0] = '\0';
      FUN_00d214d0(uVar12,*(void*)((int64_t)plVar5 + 0xc));
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01aa3f90();
      plVar1 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70[0] = '\0';
      }
      local_110 = 1;
      local_118 = plVar1;
      cVar3 = FUN_01ab2450();
      uVar12 = extraout_XMM0_Da_02;
      if (plVar1 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (cVar3 == '\0') goto LAB_01ab0fa5;
      uVar12 = FUN_01aa3f90();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar12 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_100 = 1;
      local_108 = plVar1;
      uVar12 = FUN_01aafac0(uVar12,&local_108);
      plVar11 = local_78;
      if ((local_70[0] == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b00();
      }
      if (plVar1 != (int64_t *)0x0) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
      if (plVar11 == (int64_t *)0x0) goto LAB_01ab0fa5;
      local_198 = plVar11;
      local_190 = 0;
      local_188 = local_90;
      local_180 = 0;
      FUN_01ab1b30(&local_188);
      local_40 = local_78;
      if (local_78 == (int64_t *)0x0) {
        local_80 = 0x0;
      }
      else {
        if (local_70[0] == '\0') {
          FUN_00d50b00();
        }
        local_70[0] = '\0';
        local_78 = (int64_t *)0x0;
        local_68 = local_40;
        local_60 = 0xffffffff;
        local_58 = 0;
        local_60._4_4_ = 0;
        while( true ) {
          if (local_60._4_4_ != 0) {
            if (local_60._4_4_ < 1) {
              iVar10 = -local_60._4_4_;
            }
            else {
              iVar10 = (int)local_60 - local_60._4_4_;
              local_60 = CONCAT44(local_60._4_4_,iVar10);
              FUN_00d23690();
              local_58 = local_58 + local_60._4_4_;
              iVar10 = 0;
            }
            local_60 = CONCAT44(iVar10,(int)local_60);
          }
          lVar7 = (int64_t)(int)local_60;
          iVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar10);
          if (*(int *)((int64_t)local_68 + 0xc) <= iVar10) break;
          local_178 = *(int64_t **)(local_68[2] + 8 + lVar7 * 8);
          local_170 = 0;
          local_160 = 0;
          local_168 = plVar5;
          local_78 = local_178;
          cVar3 = FUN_01ab2150(local_68[2],&local_168);
          if (cVar3 == '\0') {
            local_50 = local_78;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        uVar8 = FUN_01b53440();
        local_80 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      }
      uVar12 = FUN_00d50b20();
    }
    plVar11 = local_40;
    if ((char)lVar2 != '\0') {
      uVar12 = FUN_00d50b20();
      plVar11 = local_40;
    }
  }
LAB_01ab108e:
  if (*(int *)((int64_t)plVar5 + 0xc) != 0) {
    FUN_01ab2600(0,FUN_01aaec30);
    if (local_78 == plVar5) {
LAB_01ab10de:
      if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_78;
      if (local_70[0] == '\0') {
        if (local_78 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01ab10de;
      }
      FUN_00d50b20();
    }
    local_150 = 0;
    local_158 = plVar5;
    uVar12 = FUN_01aaf2c0();
  }
  local_d0 = local_c0;
  local_c8 = '\0';
  local_70[0] = '\0';
  local_78 = plVar5;
  FUN_00ca0840(uVar12,&local_d0);
  if ((local_70[0] != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01ab119a:
  if (*(int *)((int64_t)plVar5 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    FUN_00d50b20();
  }
  else {
    *this_ptr = plVar5;
    *(void*)(this_ptr + 1) = 1;
  }
  if ((local_81 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

