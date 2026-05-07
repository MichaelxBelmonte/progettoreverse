// Function: FUN_01de3030
// Address: 01de3030
// Size: 2753 bytes
// Class: GNDictionary
// String references:
//   "GNDictionary"

void FUN_01de3030(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t *plVar7;
  char *pcVar8;
  void*puVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  void*puVar12;
  void*puVar13;
  uint32_t uVar14;
  void*puVar15;
  void*puVar16;
  bool bVar17;
  uint32_t uVar18;
  void*local_120;
  uint8_t local_118;
  void*local_110;
  uint8_t local_108;
  code *local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  int64_t local_50;
  char local_48 [7];
  char local_41;
  void*local_40;
  char local_38 [8];
  
  plVar7 = (int64_t *)*arg1;
  if (plVar7 == (int64_t *)0x0) {
    return;
  }
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  local_80 = 0;
  (**(code **)(*plVar7 + 0x360))();
  local_80 = 0;
  cVar3 = FUN_00e85ea0();
  plVar7 = arg1;
  if (cVar3 == '\0') {
    plVar7 = &g_02802688;
  }
  if (*plVar7 == 0) {
    return;
  }
  lVar10 = *arg1;
  if (lVar10 == 0) {
    cVar3 = '\x01';
    lVar10 = 0;
  }
  else {
    cVar3 = (char)arg1[1];
    if (cVar3 != '\0') {
      local_80 = 0;
      FUN_00d50b00();
    }
  }
  local_80 = lVar10;
  local_41 = cVar3;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar2 = g_02572370;
  uVar18 = (*g_02572370)();
  local_f8 = g_027f2a48;
  if (g_027f2a48 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_f8);
  puVar9 = local_40;
  if (local_40 == (void*)0x0) {
    puVar9 = (void*)0x0;
LAB_01de31c4:
    uVar14 = (uint32_t)CONCAT71((int7)((uint64_t)lVar10 >> 8),puVar9 == (void*)0x0);
    if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
      uVar18 = FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      uVar18 = FUN_00d50b00();
      goto LAB_01de31c4;
    }
    local_38[0] = '\0';
    uVar14 = 0;
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  local_100 = pcVar2;
  local_84 = uVar14;
  if (((char)uVar14 == '\0') && (0 < *(int *)((int64_t)puVar9 + 0xc))) {
    lVar10 = 0;
    local_50 = 0;
    puVar6 = (void*)0x0;
    puVar13 = (void*)0x0;
    do {
      lVar11 = *(int64_t *)(puVar9[2] + lVar10 * 8);
      lVar1 = g_027092b8;
      if (local_50 != lVar11) {
        if (lVar11 != 0) {
          uVar18 = FUN_00d50b00();
        }
        bVar17 = local_50 != 0;
        lVar1 = g_027092b8;
        local_50 = lVar11;
        if (bVar17) {
          uVar18 = FUN_00d50b20();
          lVar1 = g_027092b8;
        }
      }
      g_027092b8 = lVar1;
      if (lVar1 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      uVar18 = FUN_01de4130(uVar18,&local_e8);
      puVar12 = local_40;
      if (local_40 == puVar6) {
LAB_01de3321:
        puVar12 = puVar6;
        if (local_38[0] != '\0') {
LAB_01de3327:
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b00();
          }
          if (puVar6 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
            puVar6 = puVar12;
            goto LAB_01de3321;
          }
          if (local_38[0] == '\0') goto LAB_01de3335;
          goto LAB_01de3327;
        }
        if (puVar6 != (void*)0x0) {
          uVar18 = FUN_00d50b20();
        }
        local_38[0] = '\0';
      }
LAB_01de3335:
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar15 = puVar13;
      if (puVar12 != (void*)0x0) {
        local_118 = 0;
        local_120 = puVar12;
        uVar18 = FUN_01de26c0(uVar18,&local_120);
        puVar15 = local_40;
        if (local_40 == puVar13) {
          puVar15 = puVar13;
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            uVar18 = FUN_00d50b20();
          }
joined_r0x01de33c4:
          if (puVar15 == (void*)0x0) {
            puVar15 = (void*)0x0;
            goto LAB_01de3240;
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_40 != (void*)0x0) {
              uVar18 = FUN_00d50b00();
            }
            if (puVar13 != (void*)0x0) {
              uVar18 = FUN_00d50b20();
            }
            goto joined_r0x01de33c4;
          }
          if (puVar13 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
          if (puVar15 == (void*)0x0) goto LAB_01de3240;
        }
        local_38[0] = '\0';
        local_40 = puVar15;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_d0 = '\0';
        local_d8 = local_50;
        uVar18 = FUN_01dbac60();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
LAB_01de3240:
      lVar10 = lVar10 + 1;
      puVar6 = puVar12;
      puVar13 = puVar15;
    } while (lVar10 < *(int *)((int64_t)puVar9 + 0xc));
  }
  else {
    puVar15 = (void*)0x0;
    puVar12 = (void*)0x0;
    local_50 = 0;
  }
  local_38[0] = '\0';
  local_40 = puVar5;
  FUN_00d243f0();
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  uVar18 = (*local_100)();
  local_c8 = g_027f2a50;
  if (g_027f2a50 != 0) {
    uVar18 = FUN_00d50b00();
  }
  local_c0 = '\x01';
  uVar18 = FUN_000175c0(uVar18,&local_c8);
  puVar13 = local_40;
  if (local_40 != puVar9) {
    puVar9 = puVar13;
    if (local_38[0] != '\0') {
      if ((char)local_84 == '\0') {
        uVar18 = FUN_00d50b20();
      }
      local_38[0] = '\0';
      bVar17 = puVar13 == (void*)0x0;
      goto LAB_01de358a;
    }
    if (local_40 != (void*)0x0) {
      uVar18 = FUN_00d50b00();
    }
    if ((char)local_84 == '\0') {
      uVar18 = FUN_00d50b20();
    }
  }
  bVar17 = puVar9 == (void*)0x0;
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    uVar18 = FUN_00d50b20();
  }
LAB_01de358a:
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar18 = FUN_00d50b20();
  }
  if ((!bVar17) && (0 < *(int *)((int64_t)puVar9 + 0xc))) {
    lVar10 = 0;
    puVar13 = puVar12;
    puVar16 = puVar15;
    do {
      lVar11 = *(int64_t *)(puVar9[2] + lVar10 * 8);
      lVar1 = g_027092b8;
      if (local_50 != lVar11) {
        if (lVar11 != 0) {
          uVar18 = FUN_00d50b00();
        }
        bVar17 = local_50 != 0;
        lVar1 = g_027092b8;
        local_50 = lVar11;
        if (bVar17) {
          uVar18 = FUN_00d50b20();
          lVar1 = g_027092b8;
        }
      }
      g_027092b8 = lVar1;
      if (lVar1 != 0) {
        uVar18 = FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar1;
      uVar18 = FUN_01de4130(uVar18,&local_b8);
      puVar12 = local_40;
      if (local_40 == puVar13) {
LAB_01de36b1:
        puVar12 = puVar13;
        if (local_38[0] != '\0') {
LAB_01de36b7:
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38[0] == '\0') {
          if (local_40 != (void*)0x0) {
            uVar18 = FUN_00d50b00();
          }
          if (puVar13 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
            puVar13 = puVar12;
            goto LAB_01de36b1;
          }
          if (local_38[0] == '\0') goto LAB_01de36c5;
          goto LAB_01de36b7;
        }
        if (puVar13 != (void*)0x0) {
          uVar18 = FUN_00d50b20();
        }
        local_38[0] = '\0';
      }
LAB_01de36c5:
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      puVar15 = puVar16;
      if (puVar12 != (void*)0x0) {
        local_108 = 0;
        local_110 = puVar12;
        uVar18 = FUN_01de26c0(uVar18,&local_110);
        puVar15 = local_40;
        if (local_40 == puVar16) {
          puVar15 = puVar16;
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            uVar18 = FUN_00d50b20();
          }
joined_r0x01de3754:
          if (puVar15 == (void*)0x0) {
            puVar15 = (void*)0x0;
            goto LAB_01de35d0;
          }
        }
        else {
          if (local_38[0] == '\0') {
            if (local_40 != (void*)0x0) {
              uVar18 = FUN_00d50b00();
            }
            if (puVar16 != (void*)0x0) {
              uVar18 = FUN_00d50b20();
            }
            goto joined_r0x01de3754;
          }
          if (puVar16 != (void*)0x0) {
            uVar18 = FUN_00d50b20();
          }
          if (puVar15 == (void*)0x0) goto LAB_01de35d0;
        }
        local_38[0] = '\0';
        local_40 = puVar15;
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_a0 = '\0';
        local_a8 = local_50;
        uVar18 = FUN_01dbac60();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar18 = FUN_00d50b20();
        }
      }
LAB_01de35d0:
      lVar10 = lVar10 + 1;
      puVar13 = puVar12;
      puVar16 = puVar15;
    } while (lVar10 < *(int *)((int64_t)puVar9 + 0xc));
  }
  lVar10 = this_ptr[0x2c];
  if (0 < *(int *)(lVar10 + 0xc)) {
    lVar11 = 0;
    do {
      puVar13 = *(void**)(*(int64_t *)(lVar10 + 0x10) + lVar11 * 8);
      if (puVar15 != puVar13) {
        if (puVar13 != (void*)0x0) {
          FUN_00d50b00();
        }
        bVar17 = puVar15 != (void*)0x0;
        puVar15 = puVar13;
        if (bVar17) {
          FUN_00d50b20();
        }
      }
      local_38[0] = '\0';
      local_40 = puVar15;
      cVar3 = FUN_00d23d70();
      if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        local_38[0] = '\0';
        local_40 = puVar15;
        cVar3 = FUN_00d23d70();
        if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          local_38[0] = '\0';
          local_40 = puVar15;
          FUN_00d21140();
          if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      lVar11 = lVar11 + 1;
      lVar10 = this_ptr[0x2c];
    } while (lVar11 < *(int *)(lVar10 + 0xc));
  }
  local_38[0] = '\0';
  local_40 = puVar6;
  FUN_00d243f0();
  cVar3 = local_41;
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  puVar13 = local_40;
  pcVar8 = local_48;
  if (local_38[0] != '\0') {
    pcVar8 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar8 = '\0';
  if ((local_38[0] != '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_90 = 0;
  if ((local_48[0] == '\0') && (puVar13 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_98 = puVar13;
  local_90 = '\x01';
  (**(code **)(*this_ptr + 0x980))();
  if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b20();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 1;
  (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0x620))();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar15 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}

