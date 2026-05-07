// Function: FUN_0029ec80
// Address: 0029ec80
// Size: 1288 bytes
// Class: Unknown

uint64_t FUN_0029ec80(void)

{
  uint64_t uVar1;
  code *pcVar2;
  void*puVar3;
  void*puVar4;
  void*puVar5;
  void*puVar6;
  char cVar7;
  int64_t lVar8;
  void *pvVar9;
  void*puVar10;
  void*puVar11;
  void**ppuVar12;
  uint64_t uVar13;
  void*puVar14;
  int64_t arg1;
  void*puVar15;
  uint64_t uVar16;
  void*local_218;
  int local_210;
  uint64_t local_208;
  uint64_t uStack_200;
  uint64_t local_1f8;
  uint64_t uStack_1f0;
  uint64_t local_1e8;
  uint64_t uStack_1e0;
  uint64_t local_1d8;
  uint32_t uStack_1d0;
  uint32_t uStack_1cc;
  uint32_t uStack_1c8;
  uint64_t uStack_1c4;
  void*local_1b8;
  uint32_t local_1ac;
  uint8_t local_1a8;
  uint64_t local_1a4;
  uint32_t local_198;
  uint32_t uStack_194;
  uint32_t uStack_190;
  uint32_t uStack_18c;
  uint32_t local_188;
  uint32_t uStack_184;
  uint32_t uStack_180;
  uint32_t uStack_17c;
  uint64_t local_178;
  uint32_t local_170;
  uint64_t local_168;
  uint64_t uStack_160;
  uint64_t local_158;
  uint64_t uStack_150;
  uint64_t local_148;
  uint64_t uStack_140;
  uint64_t local_138;
  ushort local_130;
  uint64_t local_12e;
  uint64_t local_126;
  void*local_118;
  uint8_t local_110;
  uint32_t local_10f;
  uint8_t local_10b;
  uint32_t local_108;
  uint8_t local_104;
  uint64_t local_100;
  uint64_t uStack_f8;
  uint64_t local_f0;
  uint64_t uStack_e8;
  uint64_t local_e0;
  uint64_t uStack_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint16_t local_c0;
  uint8_t local_be;
  void*local_b8;
  uint64_t local_b0;
  uint32_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint16_t local_90;
  void*local_88;
  void*local_80;
  void*local_68;
  void*puStack_60;
  uint64_t local_58;
  void*local_48;
  void*puStack_40;
  void*local_38;
  
  if (g_02805db8 != '\0') {
    return 0;
  }
  local_218 = &g_0251c618;
  local_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1cc = 0;
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  local_48 = (void*)0x0;
  puStack_40 = (void*)0x0;
  local_38 = (void*)0x0;
  local_1b8 = &g_0251c470;
  local_1ac = 0;
  local_1a8 = 1;
  local_1a4 = 0;
  local_198 = 0xffffffff;
  uStack_194 = 0xffffffff;
  uStack_190 = 0xffffffff;
  uStack_18c = 0xffffffff;
  local_188 = 0xffffffff;
  uStack_184 = 0xffffffff;
  uStack_180 = 0xffffffff;
  uStack_17c = 0xffffffff;
  local_178 = 0xffffffffffffffff;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  local_130 = 1;
  local_12e = 0x101010101010101;
  local_126 = 0x101000001010101;
  local_170 = 0;
  lVar8 = FUN_008e4ece();
  puVar11 = puStack_40;
  local_170 = *(void*)(lVar8 + 0x13c);
  local_130 = local_130 & 0xff;
  if (puStack_40 == local_38) {
    lVar8 = (int64_t)puStack_40 - (int64_t)local_48 >> 5;
    uVar1 = lVar8 * -0x3333333333333333 + 1;
    if (0x199999999999999 < uVar1) {
      FUN_002a0c90();
LAB_0029f186:
                          pcVar2 = invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = lVar8 * -0x6666666666666666;
    if ((uint64_t)(lVar8 * -0x6666666666666666) < uVar1) {
      uVar13 = uVar1;
    }
    if (0xcccccccccccccb < (uint64_t)(lVar8 * -0x3333333333333333)) {
      uVar13 = 0x199999999999999;
    }
    if (uVar13 == 0) {
      pvVar9 = (void *)0x0;
    }
    else {
      if (0x199999999999999 < uVar13) {
        FUN_002a0ca0();
        goto LAB_0029f186;
      }
      pvVar9 = operator_new(0xcccccccc);
    }
    puVar15 = (void*)(lVar8 * 0x20 + (int64_t)pvVar9);
    FUN_008f3782();
    puVar5 = local_48;
    puVar10 = (void*)(uVar13 * 0xa0 + (int64_t)pvVar9);
    puVar11 = puVar15 + 0x14;
    puVar14 = puStack_40;
    puVar6 = puVar11;
    puVar3 = local_48;
    if (puStack_40 != local_48) {
      do {
        local_80 = puVar6;
        local_88 = puVar10;
        puVar15 = puVar15 + -0x14;
        puVar14 = puVar14 + -0x14;
        FUN_008f3782();
        puVar3 = local_48;
        puVar10 = local_88;
        puVar6 = local_80;
        puVar4 = puStack_40;
      } while (puVar14 != puVar5);
      while (local_38 = puVar10, puStack_40 = puVar6, local_48 = puVar15, puVar15 = local_48,
            puVar6 = puStack_40, puVar10 = local_38, puVar4 != puVar3) {
        (**(code **)puVar4[-0x14])();
        puVar15 = local_48;
        puVar6 = puStack_40;
        puVar10 = local_38;
        puVar4 = puVar4 + -0x14;
      }
    }
    local_38 = puVar10;
    puStack_40 = puVar6;
    local_48 = puVar15;
    if (puVar3 != (void*)0x0) {
      operator_delete(puVar11);
    }
  }
  else {
    FUN_008f3782();
    puStack_40 = puVar11 + 0x14;
  }
  local_68 = (void*)0x0;
  puStack_60 = (void*)0x0;
  local_58 = 0;
  local_118 = &g_0251c7b8;
  local_110 = 1;
  local_104 = 0;
  local_10b = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  local_c8 = 0x101010101010101;
  local_c0 = 0;
  local_be = 1;
  local_108 = 0;
  local_10f = 0x101;
  ppuVar12 = &local_218;
  cVar7 = FUN_00957464(ppuVar12,&local_68,0);
  if (cVar7 == '\0') {
    if (local_210 < 0) {
      g_02805db8 = '\x01';
    }
  }
  else if (puStack_60 != local_68) {
    if (arg1 == 0) {
      uVar16 = local_68[0xc];
    }
    else {
      local_b8 = &g_0251c878;
      local_b0 = 0x10101000100;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0x101010101010101;
      local_90 = 0x101;
      ppuVar12 = &local_218;
      cVar7 = FUN_00955aff(ppuVar12,arg1,0,0);
      if (cVar7 == '\0') {
        uVar16 = 0;
      }
      else {
        uVar16 = local_68[0xc];
      }
      FUN_00900c6c();
    }
    goto LAB_0029f08f;
  }
  uVar16 = 0;
LAB_0029f08f:
  FUN_008fee82();
  puVar3 = local_68;
  puVar11 = puStack_60;
  if (local_68 != (void*)0x0) {
    while (puVar11 != puVar3) {
      (**(code **)puVar11[-0x51])();
      puVar11 = puVar11 + -0x51;
    }
    puStack_60 = puVar3;
    operator_delete(ppuVar12);
  }
  FUN_008f2ad2();
  puVar3 = local_48;
  puVar11 = puStack_40;
  if (local_48 != (void*)0x0) {
    while (puVar11 != puVar3) {
      (**(code **)puVar11[-0x14])();
      puVar11 = puVar11 + -0x14;
    }
    puStack_40 = puVar3;
    operator_delete(ppuVar12);
  }
  FUN_008fa4ea();
  return uVar16;
}

