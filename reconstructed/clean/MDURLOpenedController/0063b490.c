// Function: FUN_0063b490
// Address: 0063b490
// Size: 2590 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_0063b490(uint64_t param_1,uint param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t local_200;
  char local_1f8;
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
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  uint local_fc;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_70 = '\0';
  local_78 = 0;
  FUN_00da5ad0();
  local_60 = local_90 != '\0';
  local_68 = local_98;
  if ((bool)local_60) {
    local_90 = '\0';
  }
  local_58 = FUN_00da7170();
  FUN_00da7180();
  if (local_68 != 0) {
    local_fc = param_2 & 0xff;
    do {
      local_90 = '\0';
      local_98 = 0;
      FUN_01f27fe0();
      FUN_00281390();
      local_200 = *arg1;
      local_1f8 = '\0';
      FUN_00e6b740(&local_98,&local_200,local_fc);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027258a0;
      if (plVar1 == (int64_t *)0x0) {
        plVar1 = *(int64_t **)(this_ptr + 0x180);
        local_1f0 = local_78;
        local_1e8 = '\0';
        if (g_027258a0 != 0) {
          FUN_00d50b00();
        }
        lVar4 = g_02725918;
        local_1e0 = lVar3;
        local_1d8 = '\x01';
        if (g_02725918 != 0) {
          FUN_00d50b00();
        }
        local_1d0 = lVar4;
        local_1c8 = '\x01';
        local_1c0 = 0;
        local_1b8 = '\0';
        FUN_00d31230(&local_1c0,&local_1d0);
        local_c8 = local_50;
        local_c0 = 0;
        lVar3 = g_027258a0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar3 = g_027258a0;
          }
        }
        else {
          local_48 = '\0';
        }
        local_c0 = '\x01';
        g_027258a0 = lVar3;
        if (lVar3 != 0) {
          local_c0 = '\x01';
          FUN_00d50b00();
        }
        lVar4 = g_02725920;
        local_1a8 = '\x01';
        local_1b0 = lVar3;
        if (g_02725920 != 0) {
          FUN_00d50b00();
        }
        local_1a0 = lVar4;
        local_198 = '\x01';
        local_190 = 0;
        local_188 = '\0';
        FUN_00d31230(&local_190,&local_1a0);
        local_b8 = local_88;
        local_b0 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_b0 = '\x01';
        FUN_004ae0b0(&local_b8,&local_c8);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d50b00();
        local_180 = 0;
        local_178 = '\0';
        (**(code **)(*plVar1 + 0x448))(&local_180,&stack0xffffffffffffff08);
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1e8 != '\0') && (local_1f0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar8 = FUN_01e697d0();
        local_170 = plVar1;
        local_168 = '\0';
        FUN_01e69930(uVar8,0);
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_98 == 0) {
LAB_0063b6f8:
          lVar3 = g_026d8ab8;
          if (g_026d8ab8 != 0) {
            FUN_00d50b00();
          }
          local_150 = lVar3;
          local_148 = '\x01';
          local_140 = 0;
          local_138 = '\0';
          local_130 = 0;
          local_128 = '\0';
          FUN_01e4fcf0(&local_130,&local_140);
          plVar1 = local_40;
          if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            g_02726298 = FUN_00015ff0();
            g_02726280 = "MDURLOpenedController";
            g_02726288 = 0x90;
            g_02726290 = FUN_00098280;
            g_027262a0 = 0;
            ram_00000000027262a8 = 0;
            g_027262b0 = 0;
            ram_00000000027262b8 = 0;
            g_027262c0 = 0;
            ram_00000000027262c8 = 0;
            g_027262d0 = 0;
            ram_00000000027262d8 = 0;
            g_027262e0 = 0;
            ram_00000000027262e8 = 0;
            g_027262f0 = 0;
            ram_00000000027262f8 = 0;
            g_02726300 = 0;
            ram_0000000002726308 = 0;
            g_02726310 = 0;
            ram_0000000002726318 = 0;
            g_02726320 = 0;
            ram_0000000002726328 = 0;
            g_02726330 = 0;
            ram_0000000002726338 = 0;
            g_02726340 = 0;
            ___cxa_guard_release();
          }
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar7 = &local_40;
            if (cVar5 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
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
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00dbbbc0();
            local_a8 = local_40;
            local_a0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_a0 = '\x01';
            FUN_0054d030();
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(int64_t **)(this_ptr + 0x180);
            local_118 = '\0';
            local_120 = plVar1;
            FUN_00d50b00();
            local_110 = 0;
            local_108 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_110,&stack0xffffffffffffff18);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        else {
          FUN_01f27fe0();
          FUN_00281390();
          local_160 = local_98;
          local_158 = '\0';
          cVar5 = FUN_00e6d4e0();
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') goto LAB_0063b6f8;
        }
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_68 == 0) break;
      local_68 = 0;
      if (local_60 == '\0') {
        local_60 = '\0';
        break;
      }
      FUN_00d50b20();
      local_60 = '\0';
    } while (local_68 != 0);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

