// Function: FUN_01d1ae90
// Address: 01d1ae90
// Size: 1619 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"
//   "GNComboBox"

void FUN_01d1ae90(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  uint64_t uVar8;
  uint64_t unaff_R12;
  undefined7 uVar12;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t lVar11;
  char cVar13;
  uint32_t uVar14;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  local_60 = (int64_t *)0x0;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  uVar14 = FUN_01ccad60();
  plVar4 = local_48;
  if (local_48 == (int64_t *)0x0) {
    uVar9 = 0;
    plVar10 = (int64_t *)0x0;
joined_r0x01d1af10:
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  else {
    uVar12 = (undefined7)((uint64_t)unaff_R12 >> 8);
    if (local_40 == '\0') {
      uVar14 = FUN_00d50b00();
      uVar9 = CONCAT71(uVar12,1);
      plVar10 = plVar4;
      local_60 = plVar4;
      goto joined_r0x01d1af10;
    }
    local_60 = local_48;
    uVar9 = CONCAT71(uVar12,1);
    plVar10 = local_48;
  }
  lVar11 = g_027edfd8;
  if (plVar10 == (int64_t *)0x0) {
    plVar10 = (int64_t *)0x0;
    cVar13 = '\0';
    local_58 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    if (g_027edfd8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = lVar11;
    local_c8 = '\x01';
    FUN_01ccaae0(uVar14,&local_d0);
    local_70 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
      local_68 = 0;
    }
    else if (local_40 == '\0') {
      uVar8 = FUN_00d50b00();
      local_68 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_68 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_01d25cb0();
    local_58 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar2 = false;
      local_58 = (int64_t *)0x0;
    }
    else {
      if (((local_40 == '\0') && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      bVar2 = true;
      if (0 < *(int *)((int64_t)local_58 + 0xc)) {
        lVar11 = 0;
        local_50 = uVar9;
        local_38 = puVar7;
        do {
          lVar3 = g_027edfd8;
          plVar1 = *(int64_t **)(local_58[2] + lVar11 * 8);
          if (g_027edfd8 != 0) {
            uVar14 = FUN_00d50b00();
          }
          local_c0 = lVar3;
          local_b8 = '\x01';
          uVar14 = FUN_01ccab60(uVar14,&local_c0);
          local_80 = local_90;
          local_78 = 0;
          if (local_88 == '\0') {
            if (local_90 != 0) {
              uVar14 = FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_78 = '\x01';
          uVar14 = (**(code **)(*plVar1 + 0x98))(uVar14,&local_80);
          plVar1 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (int64_t *)0x0) && (uVar14 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            uVar14 = FUN_00d50b20();
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)((int64_t)local_58 + 0xc));
        bVar2 = true;
        uVar9 = local_50;
        puVar7 = local_38;
      }
    }
    cVar13 = (char)local_68;
    if ((g_027f94e0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
      local_50 = uVar9;
      local_38 = puVar7;
      g_026efe08 = FUN_000f5df0();
      g_026efdf0 = "GNPopUpButton";
      g_026efdf8 = 0x240;
      g_026efe00 = FUN_001e3bf0;
      g_026efe10 = 0;
      ram_00000000026efe18 = 0;
      g_026efe20 = 0;
      ram_00000000026efe28 = 0;
      g_026efe30 = 0;
      ram_00000000026efe38 = 0;
      g_026efe40 = 0;
      ram_00000000026efe48 = 0;
      g_026efe50 = 0;
      ram_00000000026efe58 = 0;
      g_026efe60 = 0;
      ram_00000000026efe68 = 0;
      g_026efe70 = 0;
      ram_00000000026efe78 = 0;
      g_026efe80 = 0;
      ram_00000000026efe88 = 0;
      g_026efe90 = 0;
      ram_00000000026efe98 = 0;
      g_026efea0 = 0;
      ram_00000000026efea8 = 0;
      g_026efeb0 = 0;
      ___cxa_guard_release();
      cVar13 = (char)local_68;
      uVar9 = local_50;
      puVar7 = local_38;
    }
    if (plVar10 == (int64_t *)0x0) {
LAB_01d1b232:
      if (g_02802688 != (int64_t *)0x0) goto LAB_01d1b23f;
LAB_01d1b28e:
      plVar10 = local_60;
      if ((g_027f5f80 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        local_50 = uVar9;
        local_38 = puVar7;
        g_027ef558 = FUN_001f8a30();
        g_027ef540 = "GNComboBox";
        g_027ef548 = 0x268;
        g_027ef550 = FUN_01d0cdd0;
        g_027ef560 = 0;
        ram_00000000027ef568 = 0;
        g_027ef570 = 0;
        ram_00000000027ef578 = 0;
        g_027ef580 = 0;
        ram_00000000027ef588 = 0;
        g_027ef590 = 0;
        ram_00000000027ef598 = 0;
        g_027ef5a0 = 0;
        ram_00000000027ef5a8 = 0;
        g_027ef5b0 = 0;
        ram_00000000027ef5b8 = 0;
        g_027ef5c0 = 0;
        ram_00000000027ef5c8 = 0;
        g_027ef5d0 = 0;
        ram_00000000027ef5d8 = 0;
        g_027ef5e0 = 0;
        ram_00000000027ef5e8 = 0;
        g_027ef5f0 = 0;
        ram_00000000027ef5f8 = 0;
        g_027ef600 = 0;
        ___cxa_guard_release();
        cVar13 = (char)local_68;
        puVar7 = local_38;
      }
      plVar1 = g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar5 = FUN_00e85ea0();
        plVar1 = g_02802688;
        if (cVar5 != '\0') {
          plVar1 = local_60;
        }
      }
      if (plVar1 != (int64_t *)0x0) {
        local_98 = '\0';
        local_a0 = puVar7;
        FUN_01d0a580();
        if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1b232;
      if (local_60 == (int64_t *)0x0) goto LAB_01d1b28e;
LAB_01d1b23f:
      local_a8 = '\0';
      local_b0 = puVar7;
      FUN_01d6f820();
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    plVar10 = local_70;
    if (puVar7 == (void*)0x0) goto LAB_01d1b326;
  }
  FUN_00d50b20();
LAB_01d1b326:
  if ((bVar2) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar13 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar4 != (int64_t *)0x0) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

