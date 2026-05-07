// Function: FUN_0027f1f0
// Address: 0027f1f0
// Size: 4760 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_0027f1f0(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t in_XMM1_Dc;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t *local_290;
  char local_288;
  int64_t *local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
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
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int local_13c;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    local_98 = '\0';
    local_a0 = 0;
    FUN_00da5ad0();
    local_88 = local_68 != '\0';
    local_90 = local_70;
    if ((bool)local_88) {
      local_68 = '\0';
    }
    local_80 = FUN_00da7170();
    FUN_00da7180();
    pcVar3 = g_02682d10;
    while (local_90 != 0) {
      FUN_01f27fe0();
      local_a8 = *(int64_t *)(local_70 + 0x128);
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = 0;
      FUN_00e65ef0(&local_13c,&local_70);
      lVar2 = g_027258a0;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_0027f510;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0027f390:
        uVar11 = FUN_01e697d0();
        FUN_01e69930(uVar11,0);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = FUN_00e6d780();
        if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
          lVar2 = g_02725930;
          if (g_02725930 != 0) {
            FUN_00d50b00();
          }
          local_2c0 = 0;
          local_2b8 = '\0';
          local_2b0 = 0;
          local_2a8 = '\0';
          FUN_01e4fcf0(&local_2b0,&local_2c0);
          plVar10 = local_40;
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
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar9 = &local_40;
            if (cVar5 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          local_78 = *pplVar9;
          if (*(char *)(pplVar9 + 1) == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar9 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2a8 != '\0') && (local_2b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_2b8 != '\0') && (local_2c0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (local_78 != (int64_t *)0x0) {
            FUN_00dbbbc0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_130 = '\x01';
            FUN_0054d030();
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e56750();
            plVar10 = local_40;
            if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            plVar8 = local_40;
            lVar2 = g_026e1090;
            if (g_026e1090 != 0) {
              FUN_00d50b00();
            }
            local_2a0 = lVar2;
            local_298 = '\x01';
            FUN_01cb6670();
            local_128 = local_50;
            local_120 = 0;
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_120 = '\x01';
            (**(code **)(*plVar8 + 0x638))();
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            uVar12 = (**(code **)(*local_40 + 0x4d8))();
            uVar11 = param_2;
            uVar15 = in_XMM1_Dc;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (int64_t *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar7 + 0x18))();
            FUN_01d4ed60(param_2);
            FUN_01d52700();
            FUN_01e5ca90();
            (**(code **)(*local_50 + 0x640))();
            plVar8 = local_40;
            FUN_01d52740();
            local_118 = local_60;
            local_110 = 0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_110 = '\x01';
            uVar13 = FUN_01d530c0();
            uVar16 = uVar11;
            uVar14 = FUN_01d530c0();
            (**(code **)(*plVar8 + 0x410))(uVar13,uVar16,uVar14,uVar11,uVar16,uVar15);
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52770();
            plVar8 = (int64_t *)FUN_00e8fc40();
            FUN_0006daf0();
            *(void*)(plVar8 + 0x27) = 0;
            plVar8[0x2e] = 0;
            *(void*)(plVar8 + 0x2f) = 0;
            plVar8[0x30] = 0;
            *(void*)(plVar8 + 0x31) = 0;
            plVar8[0x28] = 0;
            plVar8[0x29] = 0;
            *(void*)(plVar8 + 0x2a) = 0;
            plVar8[0x2b] = 0;
            plVar8[0x2c] = 0;
            *(void*)((int64_t)plVar8 + 0x165) = 0;
            *(void*)((int64_t)plVar8 + 0x18c) = 0;
            *(void*)((int64_t)plVar8 + 0x194) = 0;
            *(void*)((int64_t)plVar8 + 0x199) = 0;
            plVar8[0x35] = 0;
            plVar8[0x36] = 0;
            plVar8[0x37] = 0;
            plVar8[0x38] = 0;
            *plVar8 = (int64_t)&g_02682cf8;
            plVar8[2] = (int64_t)&g_026837c0;
            plVar8[0x39] = 0;
            plVar8[0x3a] = 0;
            *(void*)(plVar8 + 0x3b) = 0;
            plVar8[0x3c] = 0;
            plVar8[0x3d] = 0;
            *(void*)(plVar8 + 0x3e) = 0;
            (*pcVar3)();
            local_288 = '\0';
            local_290 = plVar7;
            FUN_01d56f30();
            if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d57ee0();
            (**(code **)(*plVar8 + 0x4d0))(uVar12);
            (**(code **)(*plVar8 + 0x558))();
            FUN_01d57ec0();
            FUN_01e5ca90();
            local_278 = '\0';
            local_270 = 0;
            local_268 = '\0';
            local_280 = plVar8;
            (**(code **)(*local_40 + 0x468))(&local_270,3);
            if ((local_268 != '\0') && (local_270 != 0)) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            FUN_01e43460();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_260 = 0;
            local_258 = '\0';
            FUN_01f27fe0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_100 = '\x01';
            local_248 = '\0';
            local_250 = 0;
            FUN_01e57a30(&local_250,&local_108);
            if ((local_248 != '\0') && (local_250 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50130();
            FUN_00d50b20();
            FUN_00d50b20();
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        if (local_40 != (int64_t *)0x0) goto LAB_0027f390;
LAB_0027f510:
        if (local_13c == 1) {
          local_240 = local_a0;
          local_238 = '\0';
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_026e10b0;
          local_230 = lVar2;
          local_228 = '\x01';
          if (g_026e10b0 != 0) {
            FUN_00d50b00();
          }
          local_220 = lVar4;
          local_218 = '\x01';
          local_210 = 0;
          local_208 = '\0';
          FUN_00d31230(&local_210,&local_220);
          local_f8 = local_50;
          local_f0 = 0;
          lVar2 = g_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
              lVar2 = g_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_f0 = '\x01';
          g_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_f0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = g_026e10b8;
          local_1f8 = '\x01';
          local_200 = lVar2;
          if (g_026e10b8 != 0) {
            FUN_00d50b00();
          }
          local_1f0 = lVar4;
          local_1e8 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          FUN_00d31230(&local_1e0,&local_1f0);
          local_e8 = local_60;
          local_e0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_e0 = '\x01';
          FUN_004ae0b0(&local_e8,&local_f8);
          plVar10 = local_40;
          if (local_40 == (int64_t *)0x0) {
            bVar1 = false;
            plVar10 = (int64_t *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e8 != '\0') && (local_1f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1f8 != '\0') && (local_200 != 0)) {
            FUN_00d50b20();
          }
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_218 != '\0') && (local_220 != 0)) {
            FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1d0 = local_a0;
          local_1c8 = '\0';
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_026e10c0;
          local_1c0 = lVar2;
          local_1b8 = '\x01';
          if (g_026e10c0 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = lVar4;
          local_1a8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          FUN_00d31230(&local_1a0,&local_1b0);
          local_d8 = local_50;
          local_d0 = 0;
          lVar2 = g_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
              lVar2 = g_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_d0 = '\x01';
          g_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_d0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = g_026e10c8;
          local_188 = '\x01';
          local_190 = lVar2;
          if (g_026e10c8 != 0) {
            FUN_00d50b00();
          }
          local_180 = lVar4;
          local_178 = '\x01';
          local_170 = 0;
          local_168 = '\0';
          FUN_00d31230(&local_170,&local_180);
          local_c8 = local_60;
          local_c0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_c0 = '\x01';
          FUN_004ae0b0(&local_c8,&local_d8);
          plVar10 = local_40;
          if (local_40 == (int64_t *)0x0) {
            bVar1 = false;
            plVar10 = (int64_t *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_198 != '\0') && (local_1a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1a8 != '\0') && (local_1b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b8 != '\0') && (local_1c0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c8 != '\0') && (local_1d0 != 0)) {
            FUN_00d50b20();
          }
        }
        if (plVar10 != (int64_t *)0x0) {
          local_158 = '\0';
          local_160 = 0;
          FUN_01f27fe0();
          local_b8 = local_40;
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_148 = '\0';
          local_150 = 0;
          FUN_01e57a30(&local_150,&local_b8);
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50130();
          if (bVar1) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_90 == 0) break;
      local_90 = 0;
      if (local_88 == '\0') {
        local_88 = '\0';
        break;
      }
      FUN_00d50b20();
      local_88 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

