// ===================================================================
// GNOverloudParametricEQ — Complete reconstructed pseudocode
// 8 functions
// ===================================================================


// ============================================================
// 00c19130
// ============================================================
// Function: FUN_00c19130
// Address: 00c19130
// Size: 2772 bytes
// Class: GNOverloudParametricEQ

void FUN_00c19130(void)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  int64_t lVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t local_288;
  uint8_t local_280;
  int64_t local_278;
  uint8_t local_270;
  int64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  uint8_t local_250;
  int64_t local_248;
  uint8_t local_240;
  int64_t local_238;
  uint8_t local_230;
  int64_t local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  int64_t local_208;
  uint8_t local_200;
  int64_t local_1f8;
  uint8_t local_1f0;
  int64_t local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  uint8_t local_1a0;
  int64_t local_198;
  uint8_t local_190;
  int64_t local_188;
  uint8_t local_180;
  int64_t local_178;
  uint8_t local_170;
  int64_t local_168;
  uint8_t local_160;
  int64_t local_158;
  uint8_t local_150;
  int64_t local_148;
  uint8_t local_140;
  int64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  int64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0x10;
  lVar4 = g_0276c4a0;
  if (g_0276c4a0 == 0) {
    lVar3 = *(int64_t *)(this_ptr + 0x90);
    if (lVar3 != 0) goto LAB_00c19185;
  }
  else {
    FUN_00d50b00();
    lVar3 = *(int64_t *)(this_ptr + 0x90);
    if (lVar3 == lVar4) {
      FUN_00d50b20();
    }
    else {
LAB_00c19185:
      *(int64_t *)(this_ptr + 0x90) = lVar4;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 0xa8) = 6;
  if ((g_028a5e00 != (void*)0x0) && (g_028a5e09 != '\0')) {
    puVar2 = *(void**)(this_ptr + 0xb0);
    if (puVar2 == g_028a5e00) {
      return;
    }
    goto LAB_00c19bc4;
  }
  FUN_00e8cb50();
  if (g_028a5e00 == (void*)0x0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_0254ed40;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_00d500e0();
    bVar5 = g_028a5e00 == (void*)0x0;
    g_028a5e00 = puVar2;
    if (((bVar5) || (FUN_00d50b20(), g_028a5e00 != (void*)0x0)) && (g_028a5e08 == '\0'))
    {
      g_028a5e08 = '\x01';
      FUN_00e8cb90();
      lVar4 = g_0276c380;
      if (g_0276c380 == 0) goto LAB_00c192ad;
LAB_00c19259:
      lVar4 = g_0276c380;
      FUN_00d50b00();
      lVar3 = g_0276c380;
      local_38 = lVar4;
      local_30 = 1;
      if (g_0276c380 == 0) goto LAB_00c192ad;
      FUN_00d50b00();
    }
    else {
      lVar4 = g_0276c380;
      if (g_0276c380 != 0) goto LAB_00c19259;
LAB_00c192ad:
      local_30 = 1;
      lVar3 = 0;
      local_38 = lVar4;
    }
    local_280 = 1;
    local_288 = lVar3;
    FUN_00bf1030(&local_288,&local_38);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276bcc0;
    if (g_0276bcc0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276bcc8;
    local_278 = lVar4;
    local_270 = 1;
    if (g_0276bcc8 != 0) {
      FUN_00d50b00();
    }
    local_268 = lVar3;
    local_260 = 1;
    FUN_00bf1030(&local_268,&local_278);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276bcd0;
    if (g_0276bcd0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276bcd8;
    local_258 = lVar4;
    local_250 = 1;
    if (g_0276bcd8 != 0) {
      FUN_00d50b00();
    }
    local_248 = lVar3;
    local_240 = 1;
    FUN_00bf1030(&local_248,&local_258);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4a8;
    if (g_0276c4a8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4b0;
    local_238 = lVar4;
    local_230 = 1;
    if (g_0276c4b0 != 0) {
      FUN_00d50b00();
    }
    local_228 = lVar3;
    local_220 = 1;
    FUN_00bf1030(&local_228,&local_238);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4b8;
    if (g_0276c4b8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4c0;
    local_218 = lVar4;
    local_210 = 1;
    if (g_0276c4c0 != 0) {
      FUN_00d50b00();
    }
    local_208 = lVar3;
    local_200 = 1;
    FUN_00bf1030(&local_208,&local_218);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4c8;
    if (g_0276c4c8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4d0;
    local_1f8 = lVar4;
    local_1f0 = 1;
    if (g_0276c4d0 != 0) {
      FUN_00d50b00();
    }
    local_1e8 = lVar3;
    local_1e0 = 1;
    FUN_00bf1030(&local_1e8,&local_1f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4d8;
    if (g_0276c4d8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4e0;
    local_1d8 = lVar4;
    local_1d0 = 1;
    if (g_0276c4e0 != 0) {
      FUN_00d50b00();
    }
    local_1c8 = lVar3;
    local_1c0 = 1;
    FUN_00bf1030(&local_1c8,&local_1d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4e8;
    if (g_0276c4e8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c4f0;
    local_1b8 = lVar4;
    local_1b0 = 1;
    if (g_0276c4f0 != 0) {
      FUN_00d50b00();
    }
    local_1a8 = lVar3;
    local_1a0 = 1;
    FUN_00bf1030(&local_1a8,&local_1b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_02765370;
    if (g_02765370 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_026fb990;
    local_198 = lVar4;
    local_190 = 1;
    if (g_026fb990 != 0) {
      FUN_00d50b00();
    }
    local_188 = lVar3;
    local_180 = 1;
    FUN_00bf1030(&local_188,&local_198);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c4f8;
    if (g_0276c4f8 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c500;
    local_178 = lVar4;
    local_170 = 1;
    if (g_0276c500 != 0) {
      FUN_00d50b00();
    }
    local_168 = lVar3;
    local_160 = 1;
    FUN_00bf1030(&local_168,&local_178);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c3f0;
    if (g_0276c3f0 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c508;
    local_158 = lVar4;
    local_150 = 1;
    if (g_0276c508 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar3;
    local_140 = 1;
    FUN_00bf1030(&local_148,&local_158);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c510;
    if (g_0276c510 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c518;
    local_138 = lVar4;
    local_130 = 1;
    if (g_0276c518 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = 1;
    FUN_00bf1030(&local_128,&local_138);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c520;
    if (g_0276c520 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c528;
    local_118 = lVar4;
    local_110 = 1;
    if (g_0276c528 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = 1;
    FUN_00bf1030(&local_108,&local_118);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c530;
    if (g_0276c530 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c538;
    local_f8 = lVar4;
    local_f0 = 1;
    if (g_0276c538 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar3;
    local_e0 = 1;
    FUN_00bf1030(&local_e8,&local_f8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c540;
    if (g_0276c540 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c548;
    local_d8 = lVar4;
    local_d0 = 1;
    if (g_0276c548 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = 1;
    FUN_00bf1030(&local_c8,&local_d8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c550;
    if (g_0276c550 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c558;
    local_b8 = lVar4;
    local_b0 = 1;
    if (g_0276c558 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar3;
    local_a0 = 1;
    FUN_00bf1030(&local_a8,&local_b8);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c560;
    if (g_0276c560 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c568;
    local_98 = lVar4;
    local_90 = 1;
    if (g_0276c568 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = 1;
    FUN_00bf1030(&local_88,&local_98);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c570;
    if (g_0276c570 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c578;
    local_78 = lVar4;
    local_70 = 1;
    if (g_0276c578 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = 1;
    FUN_00bf1030(&local_68,&local_78);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = g_0276c580;
    if (g_0276c580 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_0276c588;
    local_58 = lVar4;
    local_50 = 1;
    if (g_0276c588 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar3;
    local_40 = 1;
    FUN_00bf1030(&local_48,&local_58);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    g_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  else {
    g_028a5e09 = '\x01';
    FUN_00e8cb70();
  }
  puVar2 = *(void**)(this_ptr + 0xb0);
  if (puVar2 == g_028a5e00) {
    return;
  }
LAB_00c19bc4:
  puVar1 = g_028a5e00;
  if (g_028a5e00 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar1;
  if (puVar2 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c17210
// ============================================================
// Function: FUN_00c17210
// Address: 00c17210
// Size: 1284 bytes
// Class: GNOverloudParametricEQ
// String references:
//   "GNOverloudParametricEQ"
//   "GNOverloudCompressor"

int64_t * FUN_00c17210(int64_t *param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t **pplVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  
  pplVar7 = &local_58;
  FUN_00b37610();
  plVar1 = local_58;
  FUN_00b10020();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c1726a:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c1726a;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c16ff0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  plVar6 = (int64_t *)*param_1;
  if ((g_0276d280 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_0276d1d0 = FUN_00b10020();
    g_0276d1b8 = "GNOverloudCompressor";
    g_0276d1c0 = 0xe0;
    g_0276d1c8 = FUN_00c40790;
    g_0276d1d8 = 0;
    ram_000000000276d1e0 = 0;
    g_0276d1e8 = 0;
    ram_000000000276d1f0 = 0;
    g_0276d1f8 = 0;
    ram_000000000276d200 = 0;
    g_0276d208 = 0;
    ram_000000000276d210 = 0;
    g_0276d218 = 0;
    ram_000000000276d220 = 0;
    g_0276d228 = 0;
    ram_000000000276d230 = 0;
    g_0276d238 = 0;
    ram_000000000276d240 = 0;
    g_0276d248 = 0;
    ram_000000000276d250 = 0;
    g_0276d258 = 0;
    ram_000000000276d260 = 0;
    g_0276d268 = 0;
    ram_000000000276d270 = 0;
    g_0276d278 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00c17300:
    plVar6 = &g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c17300;
  }
  lVar3 = g_0276cae0;
  if ((*plVar6 == 0) || (plVar1 == (int64_t *)0x0)) {
LAB_00c1743e:
    plVar6 = (int64_t *)*param_1;
    if ((g_0276d1b0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_0276d100 = FUN_00b10020();
      g_0276d0e8 = "GNOverloudParametricEQ";
      g_0276d0f0 = 0xd0;
      g_0276d0f8 = FUN_00c40710;
      g_0276d108 = 0;
      ram_000000000276d110 = 0;
      g_0276d118 = 0;
      ram_000000000276d120 = 0;
      g_0276d128 = 0;
      ram_000000000276d130 = 0;
      g_0276d138 = 0;
      ram_000000000276d140 = 0;
      g_0276d148 = 0;
      ram_000000000276d150 = 0;
      g_0276d158 = 0;
      ram_000000000276d160 = 0;
      g_0276d168 = 0;
      ram_000000000276d170 = 0;
      g_0276d178 = 0;
      ram_000000000276d180 = 0;
      g_0276d188 = 0;
      ram_000000000276d190 = 0;
      g_0276d198 = 0;
      ram_000000000276d1a0 = 0;
      g_0276d1a8 = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_00c17474:
      param_1 = &g_02802688;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00c17474;
    }
    lVar3 = g_0276caf0;
    if ((*param_1 == 0) || (local_58 == (int64_t *)0x0)) {
LAB_00c1751f:
      if ((plVar1 == (int64_t *)0x0) || (cVar4 = FUN_00b378e0(), cVar4 == '\0')) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        local_68 = *param_3;
        local_60 = '\0';
        (**(code **)(*plVar1 + 0x88))(extraout_XMM0_Da_01,&local_68);
        bVar2 = false;
        if ((local_60 == '\0') || (local_68 == 0)) goto LAB_00c1757c;
        FUN_00d50b20();
      }
LAB_00c1757a:
      bVar2 = false;
      goto LAB_00c1757c;
    }
    plVar6 = (int64_t *)*param_3;
    if (g_0276caf0 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    uVar8 = extraout_XMM0_Da_00;
    if ((local_80 != '\0') && (local_88 != 0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_00c1751f;
    local_78 = *param_3;
    local_70 = '\0';
    (**(code **)(*local_58 + 0x88))(uVar8,&local_78);
    bVar2 = false;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    plVar6 = (int64_t *)*param_3;
    if (g_0276cae0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar6 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = g_0276cae8;
    if (cVar4 == '\0') {
      if (g_0276cae8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = FUN_00d8f400();
      uVar8 = extraout_XMM0_Da;
      if (lVar3 != 0) {
        uVar8 = FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_00c1743e;
      local_98 = *param_3;
      local_90 = '\0';
      (**(code **)(*plVar1 + 0x88))(uVar8,&local_98);
      bVar2 = false;
      if ((local_90 == '\0') || (local_98 == 0)) goto LAB_00c1757c;
      FUN_00d50b20();
      goto LAB_00c1757a;
    }
    *this_ptr = (int64_t)plVar1;
    *(void*)(this_ptr + 1) = 1;
    bVar2 = true;
LAB_00c1757c:
    if (local_58 == (int64_t *)0x0) goto LAB_00c17589;
  }
  FUN_00d50b20();
LAB_00c17589:
  if ((!bVar2) && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00bf0020
// ============================================================
// Function: FUN_00bf0020
// Address: 00bf0020
// Size: 1373 bytes
// Class: GNOverloudParametricEQ

void FUN_00bf0020(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t *plVar5;
  int64_t this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  float fVar9;
  float fVar10;
  float fVar11;
  uint8_t auVar12 [16];
  int64_t local_68;
  char local_60;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t **)(this_ptr + 0x70) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4e0))();
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  plVar5 = plVar1;
  if (plVar1 == local_38) goto LAB_00bf00ac;
  plVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_00bf0067;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    *(int64_t **)(this_ptr + 0x78) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00bf0067:
    *(int64_t **)(this_ptr + 0x78) = plVar5;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_38;
  }
LAB_00bf00ac:
  if ((local_30 != '\0') && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00afe870();
    (**(code **)(*plVar5 + 0x18))();
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    if (plVar1 == plVar5) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x78) = plVar5;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar1 = *(int64_t **)(this_ptr + 0x78);
    lVar2 = *(int64_t *)(this_ptr + 0x70);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x5c8))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01e53c20();
  uVar7 = (**(code **)(*local_38 + 0x528))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar8 = FUN_01e5eff0();
  fVar10 = (float)((uint64_t)uVar8 >> 0x20);
  fVar9 = fVar10 + g_0241b664;
  fVar6 = (float)uVar8 + g_0241b664;
  auVar12._8_4_ = extraout_XMM0_Dc;
  auVar12._0_8_ = uVar7;
  auVar12._12_4_ = extraout_XMM0_Dd;
  if (fVar6 < (float)uVar7) {
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = extraout_XMM0_Dc_00;
    auVar3._12_4_ = extraout_XMM0_Dd_00;
    auVar12 = blendps(auVar12,auVar3,1);
  }
  uVar7 = auVar12._0_8_;
  if (fVar9 < auVar12._4_4_) {
    auVar4._4_4_ = fVar10;
    auVar4._0_4_ = fVar9;
    auVar4._8_4_ = extraout_XMM0_Dd_00;
    auVar4._12_4_ = extraout_XMM0_Dd_00;
    auVar12 = insertps(auVar12,auVar4,0x10);
    uVar7 = auVar12._0_8_;
  }
  fVar6 = (float)uVar7;
  if ((((float)g_023dcce4 != fVar6) || (NAN((float)g_023dcce4) || NAN(fVar6))) ||
     ((float)((uint64_t)g_023dcce4 >> 0x20) != (float)((uint64_t)uVar7 >> 0x20))) {
    FUN_01e5bc90(fVar6);
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5bc80(fVar9);
  FUN_01e5ca90();
  FUN_01d8c700();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  FUN_01e5ca90();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  fVar6 = (float)g_023dccf4;
  fVar11 = (float)((uint64_t)g_023dccf4 >> 0x20);
  (**(code **)(*plVar1 + 0x4c8))((int)g_023dccec);
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  (**(code **)(*local_38 + 0x4d8))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((fVar9 != fVar6) || (NAN(fVar9) || NAN(fVar6))) || (fVar10 != fVar11)) {
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x578))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x570))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5bc80(fVar6);
    FUN_01e5ca90();
    (**(code **)(*local_38 + 0x570))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 1000))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_01e5a050();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e5ca90();
  FUN_01d8c700();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e5ca90();
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_01d8c720();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c18110
// ============================================================
// Function: FUN_00c18110
// Address: 00c18110
// Size: 1118 bytes
// Class: GNOverloudParametricEQ

void FUN_00c18110(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint8_t local_60;
  int64_t local_58;
  uint8_t local_50;
  int64_t local_48;
  uint8_t local_40;
  int64_t local_38;
  uint8_t local_30;
  
  *(void*)(this_ptr + 0xb8) = 0xf;
  lVar1 = g_0276c418;
  if (g_0276c418 == 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == 0) goto LAB_00c18179;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(int64_t *)(this_ptr + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c18179;
    }
  }
  *(int64_t *)(this_ptr + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c18179:
  *(void*)(this_ptr + 0xa8) = 1;
  if ((g_028a5de0 == (void*)0x0) || (g_028a5de9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5de0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = g_028a5de0 == (void*)0x0;
      g_028a5de0 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = g_0276c420, g_028a5de0 != (void*)0x0)) &&
         (lVar1 = g_0276c420, g_028a5de8 == '\0')) {
        g_028a5de8 = '\x01';
        FUN_00e8cb90();
        lVar1 = g_0276c420;
      }
      g_0276c420 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027bdfb8;
      local_e0 = 1;
      local_e8 = lVar1;
      if (g_027bdfb8 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c430;
      if (g_0276c430 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027bdfc0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (g_027bdfc0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c440;
      if (g_0276c440 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027c7650;
      local_a8 = lVar1;
      local_a0 = 1;
      if (g_027c7650 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c450;
      if (g_0276c450 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c458;
      local_88 = lVar1;
      local_80 = 1;
      if (g_0276c458 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276bf00;
      if (g_0276bf00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276bf08;
      local_68 = lVar1;
      local_60 = 1;
      if (g_0276bf08 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_0276c460;
      if (g_0276c460 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_0276c468;
      local_48 = lVar1;
      local_40 = 1;
      if (g_0276c468 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028a5de9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5de9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5de0) {
      return;
    }
  }
  else {
    puVar3 = *(void**)(this_ptr + 0xb0);
    if (puVar3 == g_028a5de0) {
      return;
    }
  }
  puVar2 = g_028a5de0;
  if (g_028a5de0 != (void*)0x0) {
    FUN_00d50b00();
  }
  *(void**)(this_ptr + 0xb0) = puVar2;
  if (puVar3 == (void*)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00c17aa0
// ============================================================
// Function: FUN_00c17aa0
// Address: 00c17aa0
// Size: 1061 bytes
// Class: GNOverloudParametricEQ

bool FUN_00c17aa0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  char cVar8;
  int iVar9;
  int64_t *this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  char local_41;
  int64_t local_40;
  char local_38;
  
  local_60 = param_3;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar6 = local_40;
  lVar1 = *param_2;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_0276ca80;
  if (lVar1 != lVar6) goto LAB_00c17af0;
  if (g_0276ca80 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d90870();
  local_70 = param_1;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar4 = local_70;
  if (cVar8 != '\0') {
    FUN_00d8f140();
    lVar7 = local_40;
    plVar5 = local_60;
    lVar2 = *plVar4;
    if (lVar2 == local_40) {
      if (((char)plVar4[1] != '\0') || (local_40 == 0)) goto LAB_00c17c24;
      local_68 = local_70 + 1;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00c17c1d;
      }
LAB_00c17c3e:
      *(void*)local_68 = 1;
    }
    else {
      local_68 = plVar4 + 1;
      cVar8 = (char)plVar4[1];
      if (local_38 != '\0') {
        *plVar4 = local_40;
        if ((cVar8 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00c17c3e;
      }
      local_41 = cVar8;
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *local_70 = lVar7;
      if ((local_41 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00c17c1d:
      *(void*)local_68 = 1;
LAB_00c17c24:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x5d0))();
    local_40 = *local_70;
    local_38 = '\0';
    iVar9 = FUN_00d237a0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (iVar9 != -1) {
      (**(code **)(*this_ptr + 0x5d0))();
      FUN_00bf87d0();
      FUN_00d46dc0();
      lVar7 = local_40;
      lVar2 = *plVar5;
      if (lVar2 == local_40) {
        if (((char)plVar5[1] != '\0') || (local_40 == 0)) goto LAB_00c17d88;
        local_68 = plVar5 + 1;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_00c17d7d;
        }
LAB_00c17d3d:
        *(void*)local_68 = 1;
        local_38 = '\0';
      }
      else {
        local_68 = plVar5 + 1;
        lVar3 = plVar5[1];
        if (local_38 != '\0') {
          *plVar5 = local_40;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00c17d3d;
        }
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *local_60 = lVar7;
        if (((char)lVar3 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_00c17d7d:
        *(void*)local_68 = 1;
LAB_00c17d88:
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*this_ptr + 0x5d0))();
  local_90 = *local_70;
  local_88 = '\0';
  (**(code **)(*this_ptr + 0x608))();
  local_80 = local_58;
  local_78 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_78 = '\x01';
  FUN_00b324d0(0,&local_90,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00c17af0:
  return lVar1 == lVar6;
}



// ============================================================
// 00c18aa0
// ============================================================
// Function: FUN_00c18aa0
// Address: 00c18aa0
// Size: 703 bytes
// Class: GNOverloudParametricEQ

void FUN_00c18aa0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5df0;
  if (param_2 != 4) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5df0 == (void*)0x0) || (g_028a5df9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5df0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5df0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5df0 != (void*)0x0;
        g_028a5df0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5df8 == '\0') {
        g_028a5df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c478;
      if (g_0276c478 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c480;
      if (g_0276c480 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c488;
      if (g_0276c488 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c490;
      if (g_0276c490 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c498;
      if (g_0276c498 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5df0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c18d41;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c18d41:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00c1a2c0
// ============================================================
// Function: FUN_00c1a2c0
// Address: 00c1a2c0
// Size: 623 bytes
// Class: GNOverloudParametricEQ

void FUN_00c1a2c0(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5e10;
  if (param_2 != 7) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5e10 == (void*)0x0) || (g_028a5e19 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5e10 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5e10 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5e10 != (void*)0x0;
        g_028a5e10 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5e18 == '\0') {
        g_028a5e18 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c590;
      if (g_0276c590 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c598;
      if (g_0276c598 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c5a0;
      if (g_0276c5a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276c5a8;
      if (g_0276c5a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5e10;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00c1a511;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c1a511:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00bf1bb0
// ============================================================
// Function: FUN_00bf1bb0
// Address: 00bf1bb0
// Size: 523 bytes
// Class: GNOverloudParametricEQ
// String references:
//   "GNOverloudParametricEQ"

void FUN_00bf1bb0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f0;
  
  if ((g_0276d1b0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0276d100 = FUN_00b10020();
    g_0276d0e8 = "GNOverloudParametricEQ";
    g_0276d0f0 = 0xd0;
    g_0276d0f8 = FUN_00c40710;
    g_0276d108 = 0;
    ram_000000000276d110 = 0;
    g_0276d118 = 0;
    ram_000000000276d120 = 0;
    g_0276d128 = 0;
    ram_000000000276d130 = 0;
    g_0276d138 = 0;
    ram_000000000276d140 = 0;
    g_0276d148 = 0;
    ram_000000000276d150 = 0;
    g_0276d158 = 0;
    ram_000000000276d160 = 0;
    g_0276d168 = 0;
    ram_000000000276d170 = 0;
    g_0276d178 = 0;
    ram_000000000276d180 = 0;
    g_0276d188 = 0;
    ram_000000000276d190 = 0;
    g_0276d198 = 0;
    _ram_000000000276d1a0 = 0;
    g_0276d1a8 = 0;
    ___cxa_guard_release();
  }
  if (g_0276d1a3 == '\0') {
    FUN_00af3fa0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00b10260();
    FUN_00c44f50();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00bfa450();
    FUN_00e87920(uVar2,0);
    FUN_00bfc990();
    FUN_00bfcc20();
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_00b10a20();
    FUN_00b10a20();
  }
  return;
}

