// Function: FUN_00129ad0
// Address: 00129ad0
// Size: 2488 bytes
// Class: MDExportAudioController
// String references:
//   "MDExportAudioController"

void FUN_00129ad0(void* param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int iVar5;
  int64_t *plVar6;
  void *pvVar7;
  char *pcVar8;
  int64_t lVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  uint32_t extraout_XMM0_Da;
  int64_t local_188;
  char local_180;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  uint32_t local_ac;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0012b400();
  local_38 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  FUN_00757c60();
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_80 = (int64_t *)FUN_00e8b990();
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00763390();
  lVar9 = *this_ptr;
  lVar1 = local_38[0x18];
  if (lVar1 != lVar9) {
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    local_38[0x18] = lVar9;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar6 = local_38;
  uVar12 = FUN_00127790();
  plVar10 = local_60;
  plVar6 = (int64_t *)plVar6[0xf];
  if (plVar6 == local_60) {
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    if ((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) {
      uVar12 = FUN_00d50b00();
      plVar6 = (int64_t *)local_38[0xf];
    }
    local_38[0xf] = (int64_t)plVar10;
    if (plVar6 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
  }
  lVar9 = g_027259a0;
  if (local_38[0xf] == 0) {
    if (g_027259a0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    lVar1 = g_026e18b8;
    if (g_026e18b8 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_160 = lVar1;
    local_158 = '\x01';
    FUN_01f6ca30(uVar12,&local_160);
    (**(code **)(*local_60 + 0x5e0))();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0012a3b2;
  }
  FUN_00c9fe20();
  plVar6 = local_60;
  local_78 = local_58[0];
  pcVar8 = local_58;
  if (local_58[0] == '\0') {
    pcVar8 = &local_78;
  }
  *pcVar8 = '\0';
  local_ac = uVar4;
  if ((local_58[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)((int64_t)plVar6 + 0xc);
  if (local_78 != '\0') {
    FUN_00d50b20();
  }
  if (0 < iVar5) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    local_68 = plVar6;
    FUN_00c9fe20();
    plVar6 = local_60;
    pcVar8 = local_58;
    if (local_58[0] == '\0') {
      pcVar8 = &local_78;
    }
    local_78 = local_58[0];
    *pcVar8 = '\0';
    if ((local_58[0] != '\0') && (plVar6 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 == '\0') {
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00129de2;
      }
    }
    else if (plVar6 != (int64_t *)0x0) {
LAB_00129de2:
      local_58[0] = '\0';
      local_60 = (int64_t *)0x0;
      local_50 = plVar6;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            iVar5 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar5);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
        lVar9 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)((int64_t)local_50 + 0xc) <= iVar5) break;
        local_150 = *(int64_t **)(local_50[2] + 8 + lVar9 * 8);
        local_148 = '\0';
        local_60 = local_150;
        uVar4 = FUN_000ba510();
        local_88 = 0;
        lVar9 = CONCAT71(uStack_77,local_78);
        if (local_70 == '\0') {
          if (lVar9 != 0) {
            uVar4 = FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_88 = '\x01';
        local_140 = local_60;
        local_138 = '\0';
        local_90 = lVar9;
        uVar4 = FUN_0012aa40(uVar4,&local_140);
        local_98 = 0;
        lVar9 = *(int64_t *)(local_188 + 0x28);
        if (lVar9 != 0) {
          uVar4 = FUN_00d50b00();
        }
        local_98 = '\x01';
        local_a0 = lVar9;
        FUN_00122700(uVar4,&local_a0);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_180 != '\0') && (local_188 != 0)) {
          FUN_00d50b20();
        }
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_000be170();
      FUN_00d50b20();
    }
    plVar6 = local_68;
    FUN_00cb1f10();
    FUN_00db32a0();
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = (int64_t *)FUN_00e8fc40();
    FUN_000161a0();
    *plVar10 = (int64_t)&g_02512820;
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    plVar10[0x11] = 0;
    plVar10[0x12] = 0;
    plVar10[0x13] = 0;
    plVar10[0x14] = 0;
    plVar10[0x15] = 0;
    plVar10[0x16] = 0;
    plVar10[0x17] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    *(void*)((int64_t)plVar10 + 0xce) = 0;
    plVar10[0x1b] = 0;
    plVar10[0x1c] = 0;
    *(void*)((int64_t)plVar10 + 0xe7) = 0;
    (*g_02512838)();
    local_130 = g_026e1860;
    if (g_026e1860 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    local_120 = 0;
    local_118 = '\0';
    local_110 = 0;
    local_108 = '\0';
    pplVar11 = &local_60;
    FUN_01e4fcf0(&local_110,&local_120);
    plVar2 = local_60;
    if ((g_026e2658 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_026e25a8 = FUN_00015ff0();
      g_026e2590 = "MDExportAudioController";
      g_026e2598 = 0xf0;
      g_026e25a0 = FUN_00130570;
      g_026e25b0 = 0;
      ram_00000000026e25b8 = 0;
      g_026e25c0 = 0;
      g_026e2638 = 0;
      ram_00000000026e2640 = 0;
      g_026e2648 = 0;
      g_026e264a = 1;
      g_026e25c8 = 0;
      ram_00000000026e25d0 = 0;
      g_026e25d8 = 0;
      ram_00000000026e25e0 = 0;
      g_026e25e8 = 0;
      ram_00000000026e25f0 = 0;
      g_026e25f8 = 0;
      ram_00000000026e2600 = 0;
      g_026e2608 = 0;
      ram_00000000026e2610 = 0;
      g_026e2618 = 0;
      ram_00000000026e2620 = 0;
      g_026e2628 = 0;
      ram_00000000026e2630 = 0;
      g_026e2653 = 0;
      g_026e264b = 0;
      ___cxa_guard_release();
      plVar6 = local_68;
    }
    if (plVar2 == (int64_t *)0x0) {
LAB_0012a14c:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_0012a14c;
    }
    plVar2 = *pplVar11;
    if (plVar10 != plVar2) {
      plVar10 = plVar2;
      if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
        *(void*)(pplVar11 + 1) = 0;
      }
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    local_100 = local_38 + 0xe;
    local_f8 = '\0';
    FUN_007faee0();
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    local_e8 = '\0';
    local_f0 = plVar6;
    FUN_007faf50();
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_007fdfe0();
    FUN_007fdff0();
    local_d8 = '\0';
    local_e0 = plVar10;
    FUN_01d83990();
    if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_80 + 0x3b8))();
    cVar3 = FUN_007fe020();
    lVar9 = g_027259a0;
    if (cVar3 != '\0') {
      uVar4 = extraout_XMM0_Da;
      if (g_027259a0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      lVar1 = g_026e18b8;
      local_d0 = lVar9;
      local_c8 = '\x01';
      if (g_026e18b8 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_c0 = lVar1;
      local_b8 = '\x01';
      FUN_01f6ca30(uVar4,&local_c0);
      (**(code **)(*local_60 + 0x5e0))();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_007635c0();
LAB_0012a3b2:
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

