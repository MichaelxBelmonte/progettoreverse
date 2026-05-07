// Function: FUN_0011a370
// Address: 0011a370
// Size: 3044 bytes
// Class: MDExportController
// === MDExportController properties ===
//   MDPlaybackSetup _lastSetup


void FUN_0011a370(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint8_t uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int64_t lVar9;
  int64_t this_ptr;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  int64_t local_210;
  uint8_t local_208;
  int64_t local_200;
  uint8_t local_1f8;
  int64_t local_1f0;
  uint8_t local_1e8;
  int64_t local_1e0;
  uint8_t local_1d8;
  int64_t local_1d0;
  uint8_t local_1c8;
  uint64_t local_1c0;
  uint8_t local_1b8;
  uint64_t local_1b0;
  uint8_t local_1a8;
  int64_t local_1a0;
  uint8_t local_198;
  int64_t local_190;
  uint8_t local_188;
  int64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  uint64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  int64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  uint8_t local_d8;
  int64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = FUN_01d70da0();
  if ((int)uVar7 < 0) {
    return;
  }
  lVar9 = *(int64_t *)(this_ptr + 0x108);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_50 = (uint64_t)uVar7;
  local_48 = lVar9;
  uVar4 = FUN_003b9040();
  lVar9 = g_026e1868;
  if (g_026e1868 != 0) {
    FUN_00d50b00();
  }
  local_210 = lVar9;
  local_208 = 1;
  lVar1 = *(int64_t *)(this_ptr + 0xa0);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_1f8 = 1;
  lVar2 = *(int64_t *)(this_ptr + 0x80);
  local_200 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_1e8 = 1;
  local_1f0 = lVar2;
  FUN_0011f440(&local_210,uVar4,&local_200,&local_1f0);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x118);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = 1;
  local_1e0 = lVar9;
  uVar4 = FUN_003b9060();
  lVar1 = g_026e1870;
  if (g_026e1870 != 0) {
    FUN_00d50b00();
  }
  local_1d0 = lVar1;
  local_1c8 = 1;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  FUN_0011f440(&local_1d0,uVar4,&local_1c0,&local_1b0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  lVar9 = *(int64_t *)(this_ptr + 0x110);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_198 = 1;
  local_1a0 = lVar9;
  local_48 = lVar9;
  uVar4 = FUN_003b9050();
  lVar9 = g_026e1878;
  if (g_026e1878 != 0) {
    FUN_00d50b00();
  }
  local_190 = lVar9;
  local_188 = 1;
  lVar1 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_178 = 1;
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  local_180 = lVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_168 = 1;
  local_170 = lVar2;
  FUN_0011f440(&local_190,uVar4,&local_180,&local_170);
  uVar10 = local_48;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (uVar10 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x148) != 0) {
    FUN_01d70da0();
    iVar8 = FUN_004f0440();
    if (iVar8 == 0) {
      uVar11 = FUN_00d6f370();
      local_90 = g_026e1880;
      if (g_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_88 = '\x01';
      FUN_00d70ea0(uVar11,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(int64_t **)(this_ptr + 0x148);
LAB_0011a7c2:
      (**(code **)(lVar9 + 0x918))();
      lVar9 = **(int64_t **)(this_ptr + 0x148);
    }
    else {
      cVar5 = FUN_003b9150();
      plVar3 = *(int64_t **)(this_ptr + 0x148);
      if (cVar5 == '\0') {
        lVar9 = *plVar3;
        goto LAB_0011a7c2;
      }
      uVar11 = FUN_00d6f370();
      local_80 = g_026e1880;
      if (g_026e1880 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_78 = '\x01';
      FUN_00d70f90(uVar11,0);
      (**(code **)(*plVar3 + 0x918))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar9 = **(int64_t **)(this_ptr + 0x148);
    }
    (**(code **)(lVar9 + 0x998))();
  }
  uVar10 = g_026e1800;
  if (g_026e1800 != 0) {
    FUN_00d50b00();
  }
  local_48 = uVar10;
  FUN_00e7d6f0();
  uVar11 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar11 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  local_a0 = uVar10;
  local_98 = '\0';
  FUN_000175c0(uVar11,&local_a0);
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar3;
    uVar7 = FUN_00c70bc0();
    uVar10 = (uint64_t)uVar7;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0 & (byte)uVar10) == 0) {
    lVar9 = *(int64_t *)(this_ptr + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026e1888;
    local_158 = 1;
    local_160 = lVar9;
    if (g_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_150 = lVar1;
    local_148 = 1;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_0011f440(&local_150,0,&local_140,&local_130);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011aae5;
  }
  iVar8 = FUN_01d6fde0();
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      FUN_004f0440();
      bVar6 = FUN_003b9160();
      FUN_01d70db0(extraout_XMM0_Qa,bVar6 ^ 1);
      lVar9 = lVar9 + 1;
      iVar8 = FUN_01d6fde0();
    } while (lVar9 < iVar8);
  }
  iVar8 = FUN_01d70da0();
  if (-1 < iVar8) {
    FUN_01d70da0();
    cVar5 = FUN_01d70e30();
    if (cVar5 == '\0') {
      iVar8 = FUN_01d6fde0();
      while ((iVar8 != 0 && (cVar5 = FUN_01d70e30(), cVar5 == '\0'))) {
        iVar8 = FUN_01d6fde0();
      }
      FUN_01d6ed40();
    }
  }
  cVar5 = FUN_003b9060();
  if ((cVar5 == '\0') || (iVar8 = FUN_01d70da0(), iVar8 < 0)) {
    FUN_0011b6f0();
    (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x998))();
    (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
    lVar9 = *(int64_t *)(this_ptr + 0x120);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026e1888;
    local_d8 = 1;
    local_e0 = lVar9;
    if (g_026e1888 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar1;
    local_c8 = 1;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    FUN_0011f440(&local_d0,0,&local_c0,&local_b0);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0011ad5e;
  }
  lVar9 = *(int64_t *)(this_ptr + 0x120);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  local_118 = 1;
  local_120 = lVar9;
  FUN_01d70da0();
  uVar4 = FUN_004ef6f0();
  lVar1 = g_026e1888;
  if (g_026e1888 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar1;
  local_108 = 1;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  FUN_0011f440(&local_110,uVar4,&local_100,&local_f0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  cVar5 = FUN_003b9080();
  if (cVar5 == '\0') {
LAB_0011aae5:
    FUN_0011b6f0();
    uVar11 = 0;
  }
  else {
    FUN_01d70da0();
    cVar5 = FUN_004ef710();
    uVar11 = 1;
    if (cVar5 != '\0') goto LAB_0011aae5;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x998))(uVar11);
  (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x998))();
LAB_0011ad5e:
  cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_58 = 0;
      local_60 = *(int64_t *)(this_ptr + 0xd0);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x9a0))();
  if (cVar5 == '\0') {
    FUN_01e40eb0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x478))();
    }
  }
  else {
    FUN_01e40eb0();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_01e40eb0();
      plVar3 = local_40;
      local_68 = 0;
      local_70 = *(int64_t *)(this_ptr + 0xd8);
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*plVar3 + 0x450))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

