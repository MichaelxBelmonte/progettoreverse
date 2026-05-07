// Function: FUN_0029ec80
// Address: 0029ec80
// Size: 1288 bytes
// Class: Unknown


undefined8 FUN_0029ec80(void)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong lVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong unaff_RSI;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *local_218;
  int local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined8 uStack_1c4;
  undefined *local_1b8;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ushort local_130;
  undefined8 local_12e;
  undefined8 local_126;
  undefined *local_118;
  undefined1 local_110;
  undefined4 local_10f;
  undefined1 local_10b;
  undefined4 local_108;
  undefined1 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  
  if (DAT_02805db8 != '\0') {
    return 0;
  }
  local_218 = &DAT_0251c618;
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
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  local_1b8 = &DAT_0251c470;
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
  local_170 = *(undefined4 *)(lVar8 + 0x13c);
  local_130 = local_130 & 0xff;
  if (puStack_40 == local_38) {
    lVar8 = (longlong)puStack_40 - (longlong)local_48 >> 5;
    uVar1 = lVar8 * -0x3333333333333333 + 1;
    if (0x199999999999999 < uVar1) {
      FUN_002a0c90();
LAB_0029f186:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar13 = lVar8 * -0x6666666666666666;
    if ((ulonglong)(lVar8 * -0x6666666666666666) < uVar1) {
      uVar13 = uVar1;
    }
    if (0xcccccccccccccb < (ulonglong)(lVar8 * -0x3333333333333333)) {
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
    puVar15 = (undefined8 *)(lVar8 * 0x20 + (longlong)pvVar9);
    FUN_008f3782();
    puVar5 = local_48;
    puVar10 = (undefined8 *)(uVar13 * 0xa0 + (longlong)pvVar9);
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
    if (puVar3 != (undefined8 *)0x0) {
      operator_delete(puVar11);
    }
  }
  else {
    FUN_008f3782();
    puStack_40 = puVar11 + 0x14;
  }
  local_68 = (undefined8 *)0x0;
  puStack_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_118 = &DAT_0251c7b8;
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
      DAT_02805db8 = '\x01';
    }
  }
  else if (puStack_60 != local_68) {
    if (unaff_RSI == 0) {
      uVar16 = local_68[0xc];
    }
    else {
      local_b8 = &DAT_0251c878;
      local_b0 = 0x10101000100;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0x101010101010101;
      local_90 = 0x101;
      ppuVar12 = &local_218;
      cVar7 = FUN_00955aff(ppuVar12,unaff_RSI,0,0);
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
  if (local_68 != (undefined8 *)0x0) {
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
  if (local_48 != (undefined8 *)0x0) {
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


