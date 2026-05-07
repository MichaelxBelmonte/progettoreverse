// Function: FUN_00488f50
// Address: 00488f50
// Size: 3048 bytes
// Class: MULSSGenerator
// String references:
//   "MULSSGenerator"

void FUN_00488f50(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
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
  int64_t *local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50 [8];
  int64_t *plVar7;
  char local_40;
  char local_38;
  
  if ((char)this_ptr[0x1b] == '\0') {
    return;
  }
  FUN_00d50b00();
  local_38 = '\0';
  plVar5 = this_ptr;
  plVar7 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    plVar4 = local_58;
    if (local_58 == plVar5) {
      if (((local_38 == '\0') && (local_58 != (int64_t *)0x0)) &&
         (plVar4 = plVar5, local_50[0] != '\0')) goto LAB_00488ff7;
    }
    else {
      plVar7 = plVar4;
      if (local_50[0] == '\0') {
        if (local_38 == '\0') {
          pcVar3 = &stack0xffffffffffffffc8;
        }
        else {
          FUN_00d50b20();
          pcVar3 = &stack0xffffffffffffffc8;
        }
      }
      else {
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
LAB_00488ff7:
        local_38 = '\x01';
        pcVar3 = local_50;
      }
      *pcVar3 = '\0';
      plVar5 = plVar4;
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00082eb0();
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffb8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if ((local_38 == '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      break;
    }
  } while (plVar5 != (int64_t *)0x0);
  FUN_00d50b20();
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x498))();
    plVar4 = local_58;
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x498))();
      plVar4 = this_ptr + 0x1a;
      local_118 = 0;
      (**(code **)(this_ptr[0x1a] + 0x10))();
      FUN_00d50b00();
      local_118 = '\x01';
      local_1f0 = 0;
      local_1e8 = '\0';
      local_120 = plVar4;
      FUN_002771e0();
      uVar6 = FUN_00e86210();
      local_1e0 = g_027086f8;
      if (g_027086f8 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_1d8 = '\x01';
      FUN_00c841b0(uVar6,&local_1e0);
      local_b0 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_b0 = '\x01';
      local_b8 = plVar7;
      FUN_00cbadd0(&local_b8,&local_1f0);
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
        (**(code **)(*local_120 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_108 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_108 = '\x01';
      local_1d0 = 0;
      local_1c8 = '\0';
      local_110 = plVar4;
      if ((g_0270c820 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
        g_027e77e8 = FUN_0015ef90();
        g_027e77d0 = "MULSSGenerator";
        g_027e77d8 = 0x70;
        g_027e77e0 = FUN_0015ef30;
        g_027e77f0 = 0;
        ram_00000000027e77f8 = 0;
        g_027e7800 = 0;
        ram_00000000027e7808 = 0;
        g_027e7810 = 0;
        ram_00000000027e7818 = 0;
        g_027e7820 = 0;
        ram_00000000027e7828 = 0;
        g_027e7830 = 0;
        ram_00000000027e7838 = 0;
        g_027e7840 = 0;
        ram_00000000027e7848 = 0;
        g_027e7850 = 0;
        ram_00000000027e7858 = 0;
        g_027e7860 = 0;
        ram_00000000027e7868 = 0;
        g_027e7870 = 0;
        ram_00000000027e7878 = 0;
        g_027e7880 = 0;
        ram_00000000027e7888 = 0;
        g_027e7890 = 0;
        ___cxa_guard_release();
      }
      uVar6 = FUN_00e86210();
      local_1c0 = g_02708700;
      if (g_02708700 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_00c841b0(uVar6,&local_1c0);
      local_a0 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = plVar7;
      FUN_00cbadd0(&local_a8,&local_1d0);
      if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
        (**(code **)(*local_110 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_f8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_f8 = '\x01';
      local_1b0 = 0;
      local_1a8 = '\0';
      local_100 = plVar4;
      FUN_002771e0();
      uVar6 = FUN_00e86210();
      local_1a0 = g_02708708;
      if (g_02708708 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_198 = '\x01';
      FUN_00c841b0(uVar6,&local_1a0);
      local_90 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = '\x01';
      local_98 = plVar7;
      FUN_00cbadd0(&local_98,&local_1b0);
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
        (**(code **)(*local_100 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_e8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_e8 = '\x01';
      local_190 = 0;
      local_188 = '\0';
      local_f0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_180 = g_027ebef0;
      if (g_027ebef0 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_178 = '\x01';
      FUN_00c841b0(uVar6,&local_180);
      local_80 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar7;
      FUN_00cbadd0(&local_88,&local_190);
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_d8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_d8 = '\x01';
      local_170 = 0;
      local_168 = '\0';
      local_e0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_160 = g_02708710;
      if (g_02708710 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_158 = '\x01';
      FUN_00c841b0(uVar6,&local_160);
      local_70 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      local_78 = plVar7;
      FUN_00cbadd0(&local_78,&local_170);
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        (**(code **)(*local_e0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar5 + 0x498))();
      local_c8 = 0;
      (**(code **)(*plVar4 + 0x10))();
      FUN_00d50b00();
      local_c8 = '\x01';
      local_150 = 0;
      local_148 = '\0';
      local_d0 = plVar4;
      FUN_0049c3f0();
      uVar6 = FUN_00e86210();
      local_140 = g_02708718;
      if (g_02708718 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_00c841b0(uVar6,&local_140);
      local_60 = 0;
      if (local_40 == '\0') {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_60 = '\x01';
      local_68 = plVar7;
      FUN_00cbadd0(&local_68,&local_150);
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (plVar7 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        (**(code **)(*local_d0 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0x1b) = 0;
      goto LAB_00489a78;
    }
  }
  local_128 = 0;
  (**(code **)(this_ptr[0x1a] + 0x10))();
  FUN_00d50b00();
  local_128 = '\x01';
  local_130 = this_ptr + 0x1a;
  FUN_00cbb340();
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  if (plVar5 == (int64_t *)0x0) {
    return;
  }
LAB_00489a78:
  FUN_00d50b20();
  return;
}

