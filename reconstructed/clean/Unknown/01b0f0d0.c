// Function: FUN_01b0f0d0
// Address: 01b0f0d0
// Size: 5979 bytes
// Class: Unknown

void* FUN_01b0f0d0(void)

{
  int64_t lVar1;
  void*puVar2;
  uint64_t uVar3;
  void *pvVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar10;
  bool bVar11;
  int64_t local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
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
  void*local_c0;
  uint64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  puVar2 = (void*)FUN_00e8fc40();
  local_c0 = puVar2;
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_01a1d6e0();
  if (local_48 == 0) {
    bVar11 = false;
    lVar10 = 0;
    local_b8 = 0;
  }
  else {
    FUN_01a1d6e0();
    uVar3 = FUN_019dd050();
    lVar10 = local_60;
    if (local_60 == 0) {
      local_b8 = 0;
      lVar10 = 0;
      bVar11 = false;
joined_r0x01b0f191:
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_58 == '\0') {
        uVar3 = FUN_00d50b00();
        local_b8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        bVar11 = lVar10 != 0;
        goto joined_r0x01b0f191;
      }
      local_58 = '\0';
      bVar11 = true;
      local_b8 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  local_a0 = lVar10;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar11) && (0 < *(int *)(local_a0 + 0xc))) {
    lVar10 = 0;
    do {
      pvVar4 = _pthread_getspecific((void*)local_a0);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d890();
      lVar8 = local_48;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        lVar8 = *(int64_t *)(*(int64_t *)(local_a0 + 0x10) + lVar10 * 8);
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar8;
        FUN_00d235a0();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar8 != 0) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(local_a0 + 0xc));
  }
  FUN_01ad3cb0();
  lVar10 = local_a0;
  puVar2 = local_c0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      local_78 = local_48;
      FUN_00d50b00();
      goto LAB_01b0f332;
    }
  }
  else {
    local_78 = local_48;
    if (local_48 != 0) {
LAB_01b0f332:
      if (*(int *)((int64_t)puVar2 + 0xc) == 0) {
        plVar5 = (int64_t *)0x0;
      }
      else {
        plVar5 = (int64_t *)FUN_00e8fc40();
        FUN_001d7da0();
        (**(code **)(*plVar5 + 0x18))();
        local_98 = plVar5;
        FUN_01d5e5a0();
        plVar5 = local_98;
        if (0 < *(int *)((int64_t)puVar2 + 0xc)) {
          lVar8 = 0;
          do {
            lVar10 = *(int64_t *)(puVar2[2] + lVar8 * 8);
            lVar9 = lVar8;
            if (lVar10 != 0) {
              FUN_00d50b00();
            }
            pVar7 = (void*)lVar9;
            local_50 = lVar10;
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar7 = (void*)local_50;
            }
            FUN_0132d820();
            local_80 = local_48;
            if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != 0)) {
              FUN_00d50b20();
            }
            plVar5 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar5 + 0x18))();
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar7 = (void*)local_50;
            }
            FUN_0132d900();
            lVar10 = local_70;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_01b247c0();
            local_140 = local_60;
            local_138 = 0;
            lVar9 = g_027e3dc0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar9 = g_027e3dc0;
              }
            }
            else {
              local_58 = '\0';
            }
            local_138 = '\x01';
            g_027e3dc0 = lVar9;
            if (lVar9 != 0) {
              local_138 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar9;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            if ((local_138 != '\0') && (local_140 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01b253d0();
            local_130 = local_60;
            local_128 = 0;
            lVar10 = g_027e3dc8;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar10 = g_027e3dc8;
              }
            }
            else {
              local_58 = '\0';
            }
            local_128 = '\x01';
            g_027e3dc8 = lVar10;
            if (lVar10 != 0) {
              local_128 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar10;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d900();
            lVar10 = local_70;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_01b25140();
            local_120 = local_60;
            local_118 = 0;
            lVar9 = g_027e3dd0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar9 = g_027e3dd0;
              }
            }
            else {
              local_58 = '\0';
            }
            local_118 = '\x01';
            g_027e3dd0 = lVar9;
            if (lVar9 != 0) {
              local_118 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar9;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            lVar10 = g_027e4590;
            if (g_027e4590 != 0) {
              FUN_00d50b00();
            }
            lVar9 = g_027e3dd8;
            if (g_027e3dd8 != 0) {
              FUN_00d50b00();
            }
            local_258 = lVar9;
            local_250 = '\x01';
            local_240 = '\0';
            local_248 = plVar5;
            FUN_00d31230(&local_248,&local_258);
            lVar9 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_250 != '\0') && (local_258 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            lVar10 = g_027e3c78;
            local_238 = lVar9;
            local_230 = '\0';
            local_90 = lVar9;
            if (g_027e3c78 != 0) {
              FUN_00d50b00();
            }
            local_228 = lVar10;
            local_220 = '\x01';
            local_218 = 0;
            local_210 = '\0';
            local_158 = 0;
            if (arg1 != 0) {
              FUN_00d50b00();
            }
            local_158 = '\x01';
            plVar6 = &local_218;
            local_160 = arg1;
            FUN_01d5da60(plVar6,&local_228,&local_160);
            pVar7 = (void*)plVar6;
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_210 != '\0') && (local_218 != 0)) {
              FUN_00d50b20();
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              FUN_00d50b20();
            }
            if ((local_230 != '\0') && (local_238 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            lVar10 = g_027e3c40;
            local_208 = local_80;
            local_200 = '\0';
            if (g_027e3c40 != 0) {
              FUN_00d50b00();
            }
            local_48 = lVar10;
            local_40 = '\0';
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_200 != '\0') && (local_208 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar7 = (void*)local_50;
            }
            FUN_0132d900();
            local_110 = local_b0;
            local_108 = 0;
            lVar10 = g_027e3de0;
            if (local_a8 == '\0') {
              if (local_b0 != 0) {
                FUN_00d50b00();
                lVar10 = g_027e3de0;
              }
            }
            else {
              local_a8 = '\0';
            }
            local_108 = '\x01';
            g_027e3de0 = lVar10;
            if (lVar10 != 0) {
              local_108 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar10;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            lVar10 = g_02709968;
            local_1f8 = local_50;
            local_1f0 = '\0';
            if (g_02709968 != 0) {
              FUN_00d50b00();
            }
            local_48 = lVar10;
            local_40 = '\0';
            FUN_00ca0840();
            lVar9 = local_90;
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_1f0 != '\0') && (local_1f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d65490();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d65260();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d890();
            local_88 = local_48;
            lVar10 = local_48;
            if (local_80 == local_48) {
              local_88 = local_80;
LAB_01b0fe66:
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
                if (local_80 != 0) {
                  local_80 = local_88;
                  FUN_00d50b20();
                }
                goto LAB_01b0fe66;
              }
              if (local_80 != 0) {
                local_80 = local_48;
                FUN_00d50b20();
              }
            }
            pVar7 = (void*)lVar10;
            plVar6 = (int64_t *)FUN_00e8fc40();
            FUN_00022d50();
            (**(code **)(*plVar6 + 0x18))();
            if (plVar5 == plVar6) {
              FUN_00d50b20();
            }
            else {
              FUN_00d50b20();
              plVar5 = plVar6;
            }
            FUN_00ca1170();
            pvVar4 = _pthread_getspecific(pVar7);
            if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
              pVar7 = (void*)local_50;
            }
            FUN_0132d930();
            lVar10 = local_70;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_01b247c0();
            local_100 = local_60;
            local_f8 = 0;
            lVar1 = g_027e3dc0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar1 = g_027e3dc0;
              }
            }
            else {
              local_58 = '\0';
            }
            local_f8 = '\x01';
            g_027e3dc0 = lVar1;
            if (lVar1 != 0) {
              local_f8 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar1;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01b253d0();
            local_f0 = local_60;
            local_e8 = 0;
            lVar10 = g_027e3dc8;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar10 = g_027e3dc8;
              }
            }
            else {
              local_58 = '\0';
            }
            local_e8 = '\x01';
            g_027e3dc8 = lVar10;
            if (lVar10 != 0) {
              local_e8 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar10;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d930();
            lVar10 = local_70;
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            FUN_01b25140();
            local_e0 = local_60;
            local_d8 = 0;
            lVar1 = g_027e3dd0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
                lVar1 = g_027e3dd0;
              }
            }
            else {
              local_58 = '\0';
            }
            local_d8 = '\x01';
            g_027e3dd0 = lVar1;
            if (lVar1 != 0) {
              local_d8 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar1;
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            lVar10 = g_027e4590;
            if (g_027e4590 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_027e3df0;
            local_1e8 = lVar10;
            local_1e0 = '\x01';
            if (g_027e3df0 != 0) {
              FUN_00d50b00();
            }
            local_1d8 = lVar1;
            local_1d0 = '\x01';
            local_1c0 = '\0';
            local_1c8 = plVar5;
            FUN_00d31230(&local_1c8,&local_1d8);
            lVar10 = local_48;
            if (lVar9 == local_48) {
LAB_01b1036d:
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
                bVar11 = lVar9 != 0;
                lVar9 = lVar10;
                if (bVar11) {
                  FUN_00d50b20();
                }
                goto LAB_01b1036d;
              }
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              local_40 = '\0';
              lVar9 = lVar10;
            }
            if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1e0 != '\0') && (local_1e8 != 0)) {
              FUN_00d50b20();
            }
            lVar10 = g_027e3c78;
            local_1b0 = '\0';
            local_1b8 = lVar9;
            if (g_027e3c78 != 0) {
              FUN_00d50b00();
            }
            local_1a8 = lVar10;
            local_1a0 = '\x01';
            local_198 = 0;
            local_190 = '\0';
            local_148 = 0;
            if (arg1 != 0) {
              FUN_00d50b00();
            }
            local_148 = '\x01';
            plVar5 = &local_198;
            local_150 = arg1;
            FUN_01d5da60(plVar5,&local_1a8,&local_150);
            pVar7 = (void*)plVar5;
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
            if ((local_190 != '\0') && (local_198 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1b0 != '\0') && (local_1b8 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            lVar10 = g_027e3c40;
            local_188 = local_88;
            local_180 = '\0';
            if (g_027e3c40 != 0) {
              FUN_00d50b00();
            }
            local_48 = lVar10;
            local_40 = '\0';
            FUN_00ca0840();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_180 != '\0') && (local_188 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            pvVar4 = _pthread_getspecific(pVar7);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0132d930();
            local_d0 = local_b0;
            local_c8 = 0;
            lVar10 = g_027e3de0;
            if (local_a8 == '\0') {
              if (local_b0 != 0) {
                FUN_00d50b00();
                lVar10 = g_027e3de0;
              }
            }
            else {
              local_a8 = '\0';
            }
            local_c8 = '\x01';
            g_027e3de0 = lVar10;
            if (lVar10 != 0) {
              local_c8 = '\x01';
              FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = lVar10;
            FUN_00ca0840();
            puVar2 = local_c0;
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar10 != 0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            lVar1 = g_02709968;
            local_178 = local_50;
            local_170 = '\0';
            if (g_02709968 != 0) {
              FUN_00d50b00();
            }
            local_48 = lVar1;
            local_40 = '\0';
            FUN_00ca0840();
            lVar10 = local_a0;
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_170 != '\0') && (local_178 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d65490();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d65260();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (lVar9 != 0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            if (local_88 != 0) {
              FUN_00d50b20();
            }
            if (local_50 != 0) {
              FUN_00d50b20();
            }
            lVar8 = lVar8 + 1;
            plVar5 = local_98;
          } while (lVar8 < *(int *)((int64_t)puVar2 + 0xc));
        }
      }
      *this_ptr = plVar5;
      *(void*)(this_ptr + 1) = 1;
      FUN_00d50b20();
      goto LAB_01b1089e;
    }
  }
  *this_ptr = 0;
  *(void*)(this_ptr + 1) = 1;
LAB_01b1089e:
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b8 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

