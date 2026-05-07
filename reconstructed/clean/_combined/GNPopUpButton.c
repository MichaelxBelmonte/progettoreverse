// ===================================================================
// GNPopUpButton — Complete reconstructed pseudocode
// 26 functions
// ===================================================================


// ============================================================
// 01efe2c0
// ============================================================
// Function: FUN_01efe2c0
// Address: 01efe2c0
// Size: 1905 bytes
// Class: GNPopUpButton

void FUN_01efe2c0(void)

{
  int iVar1;
  int64_t *plVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  int64_t *plVar8;
  char cVar9;
  int64_t lVar10;
  uint64_t uVar11;
  void*puVar12;
  char *pcVar13;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t *plVar15;
  char local_90;
  undefined7 uStack_8f;
  char local_88;
  int64_t *local_80;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  void*local_48;
  int64_t *local_40;
  char local_38 [8];
  
  FUN_01f03a80();
  plVar15 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = plVar15;
  local_48 = (void*)0x0;
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  FUN_00ca1340();
  pcVar7 = g_02572370;
  lVar10 = this_ptr[0xf];
  if (*(int *)(lVar10 + 0xc) < 1) {
    bVar5 = false;
    local_48 = (void*)0x0;
    bVar4 = false;
    plVar15 = (int64_t *)0x0;
    local_50 = 0;
    local_58 = (int64_t *)0x0;
  }
  else {
    lVar14 = 0;
    local_58 = (int64_t *)0x0;
    local_50 = 0;
    plVar15 = (int64_t *)0x0;
    bVar4 = false;
    local_48 = (void*)0x0;
    bVar5 = false;
    do {
      lVar10 = *(int64_t *)(lVar10 + 0x10);
      plVar2 = *(int64_t **)(lVar10 + lVar14 * 8);
      if (local_58 == plVar2) {
        if (((char)local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
          local_50 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          lVar10 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (local_58 == (int64_t *)0x0)) {
          local_50 = CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
          local_58 = plVar2;
        }
        else {
          local_58 = plVar2;
          uVar11 = FUN_00d50b20();
          local_50 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
        }
      }
      puVar12 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar12 = &g_02572358;
      (*pcVar7)();
      if (puVar12 == local_48) {
        if (bVar5) {
          FUN_00d50b20();
LAB_01efe492:
          iVar1 = *(int *)((int64_t)local_80 + 0xc);
        }
        else {
          iVar1 = *(int *)((int64_t)local_80 + 0xc);
          bVar5 = true;
        }
      }
      else {
        bVar6 = true;
        if (bVar5) {
          if (local_48 != (void*)0x0) {
            FUN_00d50b20();
            local_48 = puVar12;
            bVar5 = bVar6;
            goto LAB_01efe492;
          }
          iVar1 = *(int *)((int64_t)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
        else {
          iVar1 = *(int *)((int64_t)local_80 + 0xc);
          local_48 = puVar12;
          bVar5 = bVar6;
        }
      }
      if (0 < iVar1) {
        lVar10 = 0;
        do {
          plVar2 = *(int64_t **)(local_80[2] + lVar10 * 8);
          if (plVar15 == plVar2) {
            if ((!bVar4) && (plVar15 != (int64_t *)0x0)) {
              bVar4 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar4) && (plVar15 != (int64_t *)0x0)) {
              FUN_00d50b20();
              bVar4 = true;
              plVar15 = plVar2;
            }
            else {
              bVar4 = true;
              plVar15 = plVar2;
            }
          }
          (**(code **)(*plVar15 + 0x5c8))();
          if (local_40 == (int64_t *)0x0) {
            cVar9 = '\0';
          }
          else {
            (**(code **)(*plVar15 + 0x5c8))();
            plVar2 = (int64_t *)CONCAT71(uStack_67,local_68);
            (**(code **)(*local_58 + 0x370))();
            lVar3 = CONCAT71(uStack_8f,local_90);
            if (local_88 == '\0') {
              if (lVar3 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            cVar9 = (**(code **)(*plVar2 + 0x50))();
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (CONCAT71(uStack_8f,local_90) != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            local_38[0] = '\0';
            local_40 = plVar15;
            FUN_00d21140();
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)local_80 + 0xc));
      }
      (**(code **)(*local_58 + 0x370))();
      plVar2 = (int64_t *)CONCAT71(uStack_67,local_68);
      if (local_60 == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_38[0] = '\0';
      local_40 = plVar2;
      FUN_00ca0840();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
        FUN_00d50b20();
      }
      lVar14 = lVar14 + 1;
      lVar10 = this_ptr[0xf];
    } while (lVar14 < *(int *)(lVar10 + 0xc));
  }
  (**(code **)(*this_ptr + 0x608))();
  FUN_00c9fe20();
  plVar2 = local_40;
  local_68 = local_38[0];
  pcVar13 = local_38;
  if (local_38[0] == '\0') {
    pcVar13 = &local_68;
  }
  *pcVar13 = '\0';
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar10 = this_ptr[0xe];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = (int64_t *)lVar10;
  cVar9 = FUN_00d23d70();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar9 == '\0') {
    FUN_00c9fe20();
    plVar2 = local_40;
    local_68 = local_38[0];
    pcVar13 = local_38;
    if (local_38[0] == '\0') {
      pcVar13 = &local_68;
    }
    *pcVar13 = '\0';
    if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = *(int *)((int64_t)plVar2 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      (**(code **)(*this_ptr + 0x5d0))();
    }
    else {
      FUN_00c9fe20();
      plVar2 = local_40;
      local_90 = local_38[0];
      pcVar13 = &local_90;
      if (local_38[0] != '\0') {
        pcVar13 = local_38;
      }
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar8 = local_40;
      pcVar13 = local_38;
      if (local_38[0] == '\0') {
        pcVar13 = &local_68;
      }
      local_68 = local_38[0];
      *pcVar13 = '\0';
      if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 == '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x5d0))();
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (plVar2 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((bVar5) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar4) && (plVar15 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d1ae90
// ============================================================
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



// ============================================================
// 01c6cca0
// ============================================================
// Function: FUN_01c6cca0
// Address: 01c6cca0
// Size: 1395 bytes
// Class: GNPopUpButton

uint64_t FUN_01c6cca0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint64_t in_RCX;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t uVar13;
  uint64_t in_XMM1_Qb;
  uint64_t uVar16;
  uint64_t uVar17;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint64_t local_d8;
  uint64_t uStack_d0;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint8_t local_a8 [16];
  uint64_t local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int64_t local_48;
  char local_40;
  
  uVar5 = FUN_01d3b590();
  uVar5 = uVar5 & 6;
  uVar6 = FUN_01d3b590();
  uVar6 = uVar6 & 10;
  if (((uVar6 == 10) || (uVar5 == 6)) && (this_ptr[0x2d] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    if (uVar6 == 10) {
      FUN_01c4b7c0();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    else if (uVar5 == 6) {
      FUN_01c4b550();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    iVar7 = FUN_01d3a5a0();
    if ((iVar7 == 4) || (iVar7 = FUN_01d3a5a0(), iVar7 == 5)) goto LAB_01c6cdd6;
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 1) {
      plVar1 = (int64_t *)this_ptr[0x2d];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_90 = (**(code **)(*plVar1 + 0x930))();
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0x2d];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x7b0))();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d50b20();
      local_a8._0_8_ = FUN_01cf5cf0();
      local_a8._8_8_ = extraout_XMM0_Qb;
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      uVar10 = param_2;
      uVar16 = in_XMM1_Qb;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      uVar13 = uVar10;
      uVar17 = uVar16;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = this_ptr[0x2d];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01d3abf0();
      local_b8 = FUN_01e466c0();
      local_c8 = (float)param_2;
      fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
      fStack_c0 = (float)in_XMM1_Qb;
      fStack_bc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      local_88 = (float)uVar10;
      fStack_84 = (float)((uint64_t)uVar10 >> 0x20);
      fStack_80 = (float)uVar16;
      fStack_7c = (float)((uint64_t)uVar16 >> 0x20);
      auVar12._0_4_ = local_c8 - local_88;
      auVar12._4_4_ = fStack_c4 - fStack_84;
      auVar12._8_4_ = fStack_c0 - fStack_80;
      auVar12._12_4_ = fStack_bc - fStack_7c;
      local_f8 = (float)uVar13;
      fStack_f4 = (float)((uint64_t)uVar13 >> 0x20);
      fStack_f0 = (float)uVar17;
      fStack_ec = (float)((uint64_t)uVar17 >> 0x20);
      auVar14._0_4_ = local_c8 - local_f8;
      auVar14._4_4_ = fStack_c4 - fStack_f4;
      auVar14._8_4_ = fStack_c0 - fStack_f0;
      auVar14._12_4_ = fStack_bc - fStack_ec;
      blendps(auVar14,auVar12,0xd);
      local_d8 = param_1;
      uStack_d0 = in_XMM0_Qb;
      uStack_b0 = extraout_XMM0_Qb_00;
LAB_01c6cf60:
      (**(code **)(*this_ptr + 0x658))();
      lVar2 = *arg1;
      if (lVar2 == local_48) {
        if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01c6cffc;
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01c6cff7;
        }
        *(void*)(arg1 + 1) = 1;
      }
      else {
        lVar3 = arg1[1];
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01c6cff7:
          *(void*)(arg1 + 1) = 1;
LAB_01c6cffc:
          lVar9 = *arg1;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          *arg1 = local_48;
          lVar9 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
            lVar9 = *arg1;
          }
          *(void*)(arg1 + 1) = 1;
        }
        if (lVar9 == 0) goto LAB_01c6d1cc;
      }
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 6) goto LAB_01c6d1cc;
      iVar7 = FUN_01d3a5a0();
      if (iVar7 == 5) {
        if (uVar6 == 10) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          plVar1 = (int64_t *)this_ptr[0x2d];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_88 = (float)uVar10;
          fStack_84 = (float)((uint64_t)uVar10 >> 0x20);
          fStack_80 = (float)extraout_XMM0_Qb_02;
          fStack_7c = (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
          auVar11._0_4_ = local_88 - (float)local_b8;
          auVar11._4_4_ = fStack_84 - local_b8._4_4_;
          auVar11._8_4_ = fStack_80 - (float)uStack_b0;
          auVar11._12_4_ = fStack_7c - uStack_b0._4_4_;
          auVar12 = blendps(auVar11,g_0238ff00,2);
          (**(code **)(*plVar1 + 0xc60))(auVar12._0_8_,local_90,0);
          FUN_00d50b20();
          lVar2 = this_ptr[0x2d];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_01d3abf0();
          local_b8 = FUN_01e466c0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          plVar1 = (int64_t *)this_ptr[0x2d];
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_90 = (**(code **)(*plVar1 + 0x930))();
          FUN_00d50b20();
          uStack_b0 = extraout_XMM0_Qb_03;
        }
        else if (uVar5 == 6) {
          FUN_01d3abf0();
          uVar10 = FUN_01e466c0();
          auVar15._0_4_ = local_a8._0_4_ - ((float)uVar10 - (float)local_d8);
          auVar15._4_4_ = local_a8._4_4_ - ((float)((uint64_t)uVar10 >> 0x20) - local_d8._4_4_);
          auVar15._8_4_ = local_a8._8_4_ - ((float)extraout_XMM0_Qb_01 - (float)uStack_d0);
          auVar15._12_4_ =
               local_a8._12_4_ - ((float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) - uStack_d0._4_4_)
          ;
          local_a8 = blendps(local_a8,auVar15,0xd);
          cVar4 = FUN_00d05410();
          if (cVar4 == '\0') {
            local_a8._0_8_ = FUN_01cf5cf0();
            local_a8._8_8_ = extraout_XMM0_Qb_04;
            local_d8 = uVar10;
            uStack_d0 = extraout_XMM0_Qb_01;
          }
          else {
            FUN_01cf7140();
          }
        }
      }
      goto LAB_01c6cf60;
    }
  }
  uVar8 = 0;
LAB_01c6d1b8:
  return uVar8 & 0xffffffff;
LAB_01c6d1cc:
  if (local_48 != 0) {
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
    goto LAB_01c6d1b8;
  }
LAB_01c6cdd6:
  uVar8 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
  goto LAB_01c6d1b8;
}



// ============================================================
// 01c6e850
// ============================================================
// Function: FUN_01c6e850
// Address: 01c6e850
// Size: 1754 bytes
// Class: GNPopUpButton

void FUN_01c6e850(uint32_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  char *pcVar5;
  void*puVar6;
  void*puVar7;
  void *pvVar8;
  int extraout_var;
  void* pVar9;
  uint32_t in_EDX;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar10;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  int64_t *local_a0;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((int)this_ptr[0x4d] != 0) {
    *(void*)(this_ptr + 0x4d) = 0;
    (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x478))();
    if (this_ptr[0x2b] != 0) {
      this_ptr[0x2b] = 0;
      FUN_00d50b20();
    }
    if (this_ptr[0x4e] != 0) {
      this_ptr[0x4e] = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    param_1 = FUN_01c4d670();
  }
  local_d0 = *arg1;
  local_c8 = '\0';
  FUN_01c4de00(param_1,&local_d0);
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x4d) = in_EDX;
  lVar1 = *arg1;
  lVar2 = this_ptr[0x4e];
  local_a0 = local_48;
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x4e] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_48 + 0x4a0))();
  FUN_00d23310();
  local_38[0] = local_40[0];
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e3f820();
  if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a0 + 0x4a0))();
  FUN_00d23310();
  pcVar5 = local_40;
  if (local_40[0] == '\0') {
    pcVar5 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar10 = FUN_01e437f0(uVar10);
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar6 + 0x27) = 0;
  puVar6[0x2e] = 0;
  *(void*)(puVar6 + 0x2f) = 0;
  puVar6[0x30] = 0;
  *(void*)(puVar6 + 0x31) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  *(void*)(puVar6 + 0x2a) = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  *(void*)((int64_t)puVar6 + 0x165) = 0;
  *(void*)((int64_t)puVar6 + 0x18c) = 0;
  *(void*)((int64_t)puVar6 + 0x194) = 0;
  *(void*)((int64_t)puVar6 + 0x199) = 0;
  puVar6[0x35] = 0;
  puVar6[0x36] = 0;
  puVar6[0x37] = 0;
  puVar6[0x38] = 0;
  *puVar6 = &g_0269c118;
  puVar6[2] = &g_0269cc70;
  puVar6[0x39] = &g_0269ccb0;
  puVar6[0x45] = 0;
  *(void*)(puVar6 + 0x46) = 0;
  puVar6[0x47] = 0;
  puVar6[0x3a] = 0;
  puVar6[0x3b] = 0;
  *(void*)(puVar6 + 0x3c) = 0;
  puVar6[0x3f] = 0;
  puVar6[0x40] = 0;
  puVar6[0x3d] = 0;
  puVar6[0x3e] = 0;
  *(void*)((int64_t)puVar6 + 0x205) = 0;
  puVar6[0x42] = 0;
  puVar6[0x43] = 0;
  *(void*)((int64_t)puVar6 + 0x21d) = 0;
  (*g_0269c130)();
  puVar7 = (void*)this_ptr[0x2b];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x2b] = (int64_t)puVar6;
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x9c8))();
  (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))(uVar10,param_2);
  plVar3 = (int64_t *)this_ptr[0x2b];
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_58 + 0x370))();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  (**(code **)(*plVar3 + 0x9d8))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x3a0))();
  plVar3 = (int64_t *)this_ptr[0x2b];
  FUN_00d50b00();
  (**(code **)(*plVar3 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = g_027ebf00;
  plVar3 = (int64_t *)this_ptr[0x2b];
  if (g_027ebf00 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  (**(code **)(*plVar3 + 0xa10))();
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x4d] == 1) {
    puVar7 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar9 = 0x2576110;
    *puVar7 = &g_02576110;
    *(void*)((int64_t)puVar7 + 0xc) = 0;
    *(void*)((int64_t)puVar7 + 0x14) = 0;
    *(void*)((int64_t)puVar7 + 0x1a) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    (*g_02576128)();
    local_a8 = '\0';
    local_b0 = puVar7;
    FUN_01e058f0();
    if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0190a000();
    if (extraout_var == 1) {
      (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x918))();
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
    puVar7 = (void*)0x0;
  }
  (**(code **)(*(int64_t *)this_ptr[0x2b] + 0xab8))();
  if (!bVar4 && puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d1bd10
// ============================================================
// Function: FUN_01d1bd10
// Address: 01d1bd10
// Size: 1630 bytes
// Class: GNPopUpButton

void FUN_01d1bd10(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int64_t *this_ptr;
  char cVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  lVar1 = g_027057d0;
  cVar5 = (char)this_ptr[10];
  if (g_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027057d0;
  lVar1 = g_027e7c20;
  if (plVar4 != (int64_t *)0x0) {
    if (g_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar9 = &local_40;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar10 = local_40;
    FUN_00053ac0();
    if (plVar10 == (int64_t *)0x0) {
LAB_01d1be47:
      pplVar9 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1be47;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (int64_t *)0x0) {
      cVar5 = '\0';
      lVar1 = g_027e7c20;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar1 = g_027e7c20;
    }
  }
  g_027e7c20 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar10 = local_40;
  if (plVar4 == local_40) {
LAB_01d1bf76:
    plVar10 = plVar4;
    if (local_38 != '\0') {
LAB_01d1bf7c:
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar4 = plVar10;
        goto LAB_01d1bf76;
      }
      if (local_38 == '\0') goto LAB_01d1bf8a;
      goto LAB_01d1bf7c;
    }
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01d1bf8a:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) goto LAB_01d1c277;
  cVar6 = FUN_01ccd010();
  cVar8 = cVar5;
  if (cVar6 == '\0') {
    cVar6 = FUN_01d26970();
    cVar8 = '\0';
    if (cVar6 == '\0') {
      cVar8 = cVar5;
    }
  }
  (**(code **)(*plVar10 + 0x3f8))();
  if (local_40 == (int64_t *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar10 + 0x3f8))();
    bVar11 = *(int *)((int64_t)local_58 + 0xc) == 0;
    if (local_50 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = g_027e7c20;
  if (bVar11) {
    FUN_01e10690();
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4c8))();
    plVar4 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((char)this_ptr[6] == '\0') {
      if (plVar4 == (int64_t *)0x0) {
LAB_01d1c1d4:
        FUN_01e10690();
        FUN_00e7b4e0();
        FUN_01e148d0();
        goto LAB_01d1c221;
      }
      FUN_01e128f0();
      if (local_40 == (int64_t *)0x0) {
        bVar7 = 1;
      }
      else {
        FUN_01e128f0();
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        bVar7 = (**(code **)(*plVar4 + 0x50))();
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar7 = bVar7 ^ 1;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar7 != 0) goto LAB_01d1c1d4;
LAB_01d1c226:
      FUN_00d50b20();
    }
    else {
LAB_01d1c221:
      if (plVar4 != (int64_t *)0x0) goto LAB_01d1c226;
    }
    lVar1 = g_027e7c20;
    if (cVar8 != '\0') {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_01ccca20();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01d1c277;
    }
  }
  cVar5 = '\0';
LAB_01d1c277:
  FUN_01e10580();
  (**(code **)(*plVar3 + 0x640))();
  (**(code **)(*local_58 + 0x480))(cVar5,0x11,0);
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01e11fd0();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x520))();
  (**(code **)(*plVar3 + 0x620))();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d1a180
// ============================================================
// Function: FUN_01d1a180
// Address: 01d1a180
// Size: 1506 bytes
// Class: GNPopUpButton

void FUN_01d1a180(void)

{
  byte bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t **pplVar7;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  bool bVar11;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar10 = (int64_t *)0x0;
joined_r0x01d1a1cf:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar10 = plVar4;
      goto joined_r0x01d1a1cf;
    }
  }
  lVar3 = g_027057d0;
  if (plVar10 == (int64_t *)0x0) {
    return;
  }
  if (g_027057d0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar8 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar1 = 1;
    plVar8 = (int64_t *)0x0;
    bVar2 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = 0;
      bVar2 = true;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01d1a276;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar2 = true;
    bVar1 = 0;
  }
LAB_01d1a276:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027057d0;
  if (plVar8 != (int64_t *)0x0) {
    if (g_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar7 = &local_40;
    (**(code **)(*this_ptr + 0x4c8))();
    plVar9 = local_40;
    FUN_00053ac0();
    if (plVar9 == (int64_t *)0x0) {
LAB_01d1a308:
      pplVar7 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d1a308;
    }
    plVar9 = *pplVar7;
    if (*(char *)(pplVar7 + 1) == '\0') {
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar7 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
LAB_01d1a373:
      uVar6 = 0;
    }
    else {
      cVar5 = FUN_00d45ad0();
      uVar6 = 1;
      if (cVar5 == '\0') goto LAB_01d1a373;
    }
    (**(code **)(*plVar10 + 0x998))(uVar6);
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar9 = local_40;
  if (local_40 == plVar8) {
    plVar9 = plVar8;
    if ((bool)(bVar1 & local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01d1a40c;
      bVar2 = true;
      FUN_00d50b00();
    }
LAB_01d1a476:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = (bool)(bVar2 & plVar8 != (int64_t *)0x0);
      bVar2 = true;
      if (bVar11) {
        FUN_00d50b20();
      }
      goto LAB_01d1a476;
    }
    bVar11 = plVar8 != (int64_t *)0x0;
    plVar8 = plVar9;
    if ((bool)(bVar2 & bVar11)) {
      FUN_00d50b20();
    }
LAB_01d1a40c:
    local_38 = '\0';
    bVar2 = true;
    plVar9 = plVar8;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar9 == (int64_t *)0x0) goto LAB_01d1a742;
  (**(code **)(*plVar9 + 0x3f8))();
  if (local_40 == (int64_t *)0x0) {
    bVar11 = true;
  }
  else {
    (**(code **)(*plVar9 + 0x3f8))();
    bVar11 = *(int *)(local_80 + 0xc) == 0;
    if (local_78 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027e7c20;
  if (bVar11) {
    (**(code **)(*plVar10 + 0x978))();
  }
  else {
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x4c8))();
    plVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
LAB_01d1a6f2:
      (**(code **)(*plVar10 + 0x978))();
      if (plVar8 == (int64_t *)0x0) goto LAB_01d1a734;
    }
    else {
      (**(code **)(*plVar10 + 0x980))();
      if (local_40 == (int64_t *)0x0) {
        cVar5 = '\0';
      }
      else {
        (**(code **)(*plVar10 + 0x980))();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        cVar5 = (**(code **)(*plVar8 + 0x50))();
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_01d1a6f2;
    }
    FUN_00d50b20();
  }
LAB_01d1a734:
  if (bVar2) {
    FUN_00d50b20();
  }
LAB_01d1a742:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01f000f0
// ============================================================
// Function: FUN_01f000f0
// Address: 01f000f0
// Size: 1289 bytes
// Class: GNPopUpButton

void FUN_01f000f0(void)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  char *pcVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  uint64_t unaff_R13;
  uint64_t uVar6;
  int64_t *plVar7;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  char local_48;
  uint local_3c;
  char local_38 [8];
  
  (**(code **)(*this_ptr + 0x5d8))();
  plVar7 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_01efeef0();
  plVar5 = local_60;
  if (local_60 == (int64_t *)0x0) {
    uVar6 = CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    uVar6 = 0;
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x10];
  local_b8 = plVar5;
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_a8 = 0;
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = lVar1;
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_58[0] != '\0') {
      pcVar4 = local_58;
    }
    local_38[0] = local_58[0];
    *pcVar4 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = 0;
    if (local_38[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_68 = '\x01';
    local_70 = local_60;
    (**(code **)(*this_ptr + 0x660))();
    local_80 = local_d8;
    local_78 = 0;
    if (local_d0 == '\0') {
      if (local_d8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_d0 = '\0';
    }
    local_78 = '\x01';
    FUN_01f04a00(&local_80,&local_b0);
    plVar7 = local_50;
    if (local_50 == (int64_t *)0x0) {
      bVar2 = false;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
      bVar2 = true;
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = 0;
    FUN_00d50b00();
    local_98 = '\x01';
    local_e8 = 0;
    local_e0 = '\0';
    local_a0 = lVar1;
    FUN_01f04a00(&local_e8,&local_a0);
    plVar7 = local_60;
    if (local_60 == (int64_t *)0x0) {
      bVar2 = false;
    }
    else if (local_58[0] == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
      bVar2 = true;
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)this_ptr[0x13];
  if (plVar5 == plVar7) goto LAB_01f0055a;
  if (plVar5 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
    plVar3 = plVar5;
    if (plVar7 != (int64_t *)0x0) goto LAB_01f004b9;
  }
  else {
    (**(code **)(*plVar5 + 0x4d0))();
    plVar5 = (int64_t *)this_ptr[0x13];
    plVar3 = plVar5;
    if (plVar5 != plVar7) {
LAB_01f004b9:
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      this_ptr[0x13] = (int64_t)plVar7;
      plVar3 = plVar7;
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar3 = (int64_t *)this_ptr[0x13];
      }
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    local_3c = (uint)uVar6;
    local_88 = 0;
    lVar1 = this_ptr[0x11];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_90 = lVar1;
    FUN_01e3f820();
    (**(code **)(*plVar3 + 0x4c8))();
    uVar6 = (uint64_t)local_3c;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01f0055a:
  plVar5 = (int64_t *)this_ptr[0x13];
  if (plVar5 != (int64_t *)0x0) {
    local_c0 = 0;
    lVar1 = this_ptr[0x10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_c8 = lVar1;
    (**(code **)(*plVar5 + 0x620))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c619b0
// ============================================================
// Function: FUN_00c619b0
// Address: 00c619b0
// Size: 1110 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_00c619b0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar8 = &local_40;
  uVar10 = FUN_01ccad60();
  plVar1 = local_40;
  if ((g_027f94e0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar5 != 0)) {
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
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_00c61a0c:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_00c61a0c;
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  if (g_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  uVar10 = FUN_01ccaae0(uVar10,&local_a8);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_027e7c20;
  local_68 = plVar9;
  if (g_027e7c20 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  FUN_01ccab60(uVar10,&local_98);
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d836c0();
  local_58 = local_78;
  local_50 = 0;
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_50 = '\x01';
  local_88 = local_48;
  local_80 = '\0';
  pplVar8 = &local_40;
  FUN_01d26fb0(&local_88,&local_58);
  plVar3 = local_40;
  FUN_00053ac0();
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00c61c08;
  }
  pplVar8 = (int64_t **)&g_02802688;
LAB_00c61c08:
  local_60 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar8 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != (int64_t *)0x0) {
    iVar5 = FUN_00d45870();
    for (iVar7 = 0; iVar6 = FUN_01d6fde0(), iVar7 < iVar6; iVar7 = iVar7 + 1) {
      FUN_01d701d0(extraout_XMM0_Da_00,iVar7);
      iVar6 = FUN_01d654a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar9 = local_68;
      if (iVar6 == iVar5) {
        (**(code **)(*plVar1 + 0x918))();
        if (*(int64_t *)(this_ptr + 0x78) != 0) {
          FUN_01dfe5c0();
        }
        break;
      }
    }
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x998))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01c6dc70
// ============================================================
// Function: FUN_01c6dc70
// Address: 01c6dc70
// Size: 1228 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

uint64_t FUN_01c6dc70(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  ushort uVar5;
  void* pVar6;
  int iVar7;
  void *pvVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t *local_d8;
  uint8_t local_d0;
  int64_t *local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t *local_a8;
  uint8_t local_a0;
  uint8_t local_98 [8];
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar5 = FUN_01caea40();
  pVar6 = (void*)uVar5;
  FUN_01c41970();
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    FUN_00d50b00();
  }
  FUN_01c82aa0();
  local_48 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar10 = FUN_00d50b20();
  local_d8 = local_48;
  local_d0 = 0;
  FUN_01c45890(uVar10,&local_d8);
  local_58 = local_40;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pplVar9 = &local_40;
  FUN_01caeb00();
  plVar2 = local_40;
  if ((g_027f94e0 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_026efe08 = FUN_000f5df0();
    g_026efdf0 = "GNPopUpButton";
    g_026efdf8 = 0x240;
    pVar6 = 0x1e3bf0;
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
  }
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01c6dd77;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_01c6dd77:
  local_50 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_80 = '\x01';
  local_88 = lVar1;
  FUN_016cbba0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(pVar6);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_78 = local_58;
  local_70 = '\0';
  local_68 = local_48;
  local_60 = '\0';
  pVar6 = FUN_01d70da0();
  FUN_016fac40(pVar6,&local_68);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_c8 = plVar2;
  local_c0 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x188);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  uVar10 = FUN_01c44d20();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_90 = 1;
  FUN_01c44700(uVar10,local_98);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = plVar2;
  local_a0 = 0;
  FUN_01c62c70();
  if (*(int64_t *)(this_ptr + 0x188) != 0) {
    FUN_00d50b00();
    pvVar8 = _pthread_getspecific(pVar6);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    FUN_00d50b20();
  }
  FUN_01c6e400();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01c6d4b0
// ============================================================
// Function: FUN_01c6d4b0
// Address: 01c6d4b0
// Size: 956 bytes
// Class: GNPopUpButton

void FUN_01c6d4b0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar4;
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
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  FUN_01d3abf0();
  local_38 = FUN_01e466c0();
  local_40 = '\0';
  local_48 = 0;
  if (*(int64_t *)(this_ptr + 0x188) != 0) {
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x2c8);
    if (lVar1 != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 == 0) {
      iVar3 = FUN_01d3a5a0();
      if ((iVar3 == 1) && (*(int *)(this_ptr + 0x268) != 0)) {
        *(void*)(this_ptr + 0x268) = 0;
        (**(code **)(**(int64_t **)(this_ptr + 0x158) + 0x478))();
        if (*(int64_t *)(this_ptr + 0x158) != 0) {
          *(void*)(this_ptr + 0x158) = 0;
          FUN_00d50b20();
        }
        if (*(int64_t *)(this_ptr + 0x270) != 0) {
          *(void*)(this_ptr + 0x270) = 0;
          FUN_00d50b20();
        }
        FUN_01e436c0();
        FUN_01c4d670();
      }
      local_88 = *arg1;
      local_80 = '\0';
      cVar2 = FUN_01c6cca0((uint32_t)local_38);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        cVar2 = FUN_01c61680((uint32_t)local_38,&local_48);
        if (cVar2 == '\0') {
          local_f8 = *arg1;
          local_f0 = 0;
          cVar2 = FUN_01c638f0((uint32_t)local_38);
          if (cVar2 == '\0') {
            local_e8 = *arg1;
            local_e0 = 0;
            cVar2 = FUN_01c63d50();
            if (cVar2 == '\0') {
              local_d8 = *arg1;
              local_d0 = 0;
              FUN_01c60a90((uint32_t)local_38);
              local_c8 = *arg1;
              local_c0 = 0;
              cVar2 = FUN_01c6a410((uint32_t)local_38);
              if (cVar2 == '\0') {
                local_68 = *arg1;
                local_60 = '\0';
                cVar2 = FUN_01c63f60((uint32_t)local_38);
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if (cVar2 == '\0') {
                  local_b8 = *arg1;
                  local_b0 = 0;
                  cVar2 = FUN_01c635e0((uint32_t)local_38);
                  if (cVar2 == '\0') {
                    local_a8 = *arg1;
                    local_a0 = 0;
                    cVar2 = FUN_01c62da0((uint32_t)local_38);
                    if (cVar2 == '\0') {
                      local_58 = *arg1;
                      local_50 = '\0';
                      FUN_01e459c0();
                      if ((local_50 != '\0') && (local_58 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else {
          local_78 = *arg1;
          local_70 = '\0';
          local_128 = local_48;
          local_120 = 0;
          cVar2 = FUN_01c61bb0((uint32_t)local_38,&local_128);
          uVar4 = extraout_XMM0_Da;
          if ((local_70 != '\0') && (local_78 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            local_118 = *arg1;
            local_110 = 0;
            local_108 = local_48;
            local_100 = 0;
            FUN_01c631e0(uVar4,&local_108);
          }
        }
      }
      goto LAB_01c6d61b;
    }
  }
  local_98 = *arg1;
  local_90 = '\0';
  FUN_01e459c0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01c6d61b:
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c620d0
// ============================================================
// Function: FUN_00c620d0
// Address: 00c620d0
// Size: 792 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

uint64_t FUN_00c620d0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t *plVar7;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  int64_t local_98;
  char local_90;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar5 = &local_40;
  uVar8 = FUN_01ccad60();
  plVar7 = local_40;
  if ((g_027f94e0 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_02, iVar4 != 0)) {
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_00c6212f:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c6212f;
  }
  plVar7 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar7 != (int64_t *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_00c62243:
    local_68 = *arg1;
    local_60 = '\0';
    uVar3 = FUN_01ec81d0(uVar8,param_2);
    uVar6 = (uint64_t)uVar3;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) goto LAB_00c62283;
  }
  else {
    local_58 = plVar7;
    FUN_01cae990();
    plVar7 = local_40;
    lVar1 = g_027fe668;
    if (g_027fe668 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar7 + 0x50))();
    plVar7 = local_58;
    uVar8 = extraout_XMM0_Da_00;
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_00c62243;
    uVar6 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
    if (param_2 != '\0') {
      uVar8 = FUN_01d70da0();
      FUN_01d701d0(extraout_XMM0_Da_01,uVar8);
      FUN_01d654a0();
      uVar8 = FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_78 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          uVar8 = FUN_00d50b00();
          local_78 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      g_027e7c20 = local_78;
      if (local_78 != 0) {
        local_48 = '\x01';
        uVar8 = FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(uVar8,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_00c62283:
  return uVar6 & 0xffffffff;
}



// ============================================================
// 01c6f360
// ============================================================
// Function: FUN_01c6f360
// Address: 01c6f360
// Size: 974 bytes
// Class: GNPopUpButton

uint64_t FUN_01c6f360(void* param_1,int param_2,uint param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  void *pvVar5;
  void* pVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  uint64_t uVar8;
  uint8_t local_98 [8];
  uint8_t local_90;
  uint8_t local_88 [8];
  uint8_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  pVar6 = param_1;
  uVar4 = FUN_016bf360();
  uVar7 = (uint64_t)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = this_ptr[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = this_ptr[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar6 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016e5250(g_023908c8,param_1,1,(int)this_ptr[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((int)this_ptr[0x39] == 0) {
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar8 = FUN_00e7bdb0();
      FUN_01c45410(uVar8,local_98);
      pVar6 = (void*)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar8 = FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700(uVar8,local_88);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = this_ptr[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    uVar7 = CONCAT71((int7)((uint64_t)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}



// ============================================================
// 01c6fa20
// ============================================================
// Function: FUN_01c6fa20
// Address: 01c6fa20
// Size: 966 bytes
// Class: GNPopUpButton

uint64_t FUN_01c6fa20(void* param_1,int param_2,uint param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint uVar4;
  void *pvVar5;
  uint64_t uVar6;
  void* pVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint8_t local_98 [8];
  uint8_t local_90;
  uint8_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  pVar7 = param_1;
  uVar4 = FUN_016bf360();
  uVar8 = (uint64_t)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = this_ptr[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = this_ptr[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = this_ptr[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar7 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016ea4d0(pVar7,param_1,1,(int)this_ptr[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((int)this_ptr[0x39] == 0) {
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar6 = FUN_00e7bdb0();
      FUN_01c45410(uVar6,local_98);
      pVar7 = (void*)uVar6;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = this_ptr[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = this_ptr[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    uVar8 = CONCAT71((int7)((uint64_t)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar8 & 0xffffffff;
}



// ============================================================
// 01c70210
// ============================================================
// Function: FUN_01c70210
// Address: 01c70210
// Size: 830 bytes
// Class: GNPopUpButton

uint32_t FUN_01c70210(void* param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  void *pvVar5;
  int64_t this_ptr;
  uint64_t uVar6;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  uVar4 = FUN_016bf620();
  if (((char)uVar4 != '\0') && (param_2 != '\0')) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    lVar1 = *(int64_t *)(this_ptr + 0x188);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_016cbba0();
    local_68 = local_48;
    local_60 = 0;
    local_88 = g_027ebec8;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_88 = g_027ebec8;
      }
    }
    else {
      local_40 = '\0';
    }
    local_60 = '\x01';
    g_027ebec8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(uVar6,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    uVar6 = FUN_00d51d20();
    local_58 = local_48;
    local_50 = 0;
    local_78 = g_027ebed0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
        local_78 = g_027ebed0;
      }
    }
    else {
      local_40 = '\0';
    }
    local_50 = '\x01';
    g_027ebed0 = local_78;
    if (local_78 != 0) {
      local_50 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_01ca93d0(uVar6,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_016bf500();
    if (cVar3 == '\0') {
      lVar1 = *(int64_t *)(this_ptr + 0x188);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016bf0f0();
      uVar6 = FUN_016c46a0(0,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar2 = *(int64_t **)(this_ptr + 0x168);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *plVar2 + 0x20))();
      (**(code **)(*local_38 + 0x60))(uVar6);
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        (**(code **)(*local_38 + 0x10))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar4;
}



// ============================================================
// 01d1c9a0
// ============================================================
// Function: FUN_01d1c9a0
// Address: 01d1c9a0
// Size: 757 bytes
// Class: GNPopUpButton

void FUN_01d1c9a0(void)

{
  char cVar1;
  int64_t *plVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  local_70 = (int64_t *)0x0;
  local_68 = '\x01';
  if (*(char *)((int64_t)this_ptr + 0x51) == '\0') {
    *(void*)(this_ptr + 6) = 1;
    (**(code **)(*this_ptr + 0x520))();
    lVar3 = 0;
    goto LAB_01d1cc66;
  }
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (local_70 == plVar2) {
    plVar2 = local_70;
    if (local_68 == '\0') goto LAB_01d1ca2a;
    FUN_00d50b20();
  }
  else {
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      local_70 = plVar2;
      FUN_00d50b20();
      plVar2 = local_70;
    }
LAB_01d1ca2a:
    local_70 = plVar2;
    local_68 = '\x01';
  }
  FUN_01ccad60();
  lVar3 = local_30;
  if (local_30 == 0) {
    lVar3 = 0;
joined_r0x01d1ca60:
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_28 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01d1ca60;
  }
  FUN_01e10550();
  local_60 = local_30;
  local_58 = 0;
  local_a0 = g_027e7c20;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      local_a0 = g_027e7c20;
    }
  }
  else {
    local_28 = '\0';
  }
  local_58 = '\x01';
  g_027e7c20 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar1 = (**(code **)(*this_ptr + 0x4d8))(&local_70,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e10550();
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    FUN_00d8dab0();
    local_50 = local_30;
    local_48 = 0;
    local_90 = g_027e7c20;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
        local_90 = g_027e7c20;
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    g_027e7c20 = local_90;
    if (local_90 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    local_88 = '\x01';
    (**(code **)(*this_ptr + 0x4d0))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01d1cc66:
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00c62b20
// ============================================================
// Function: FUN_00c62b20
// Address: 00c62b20
// Size: 750 bytes
// Class: GNPopUpButton

float FUN_00c62b20(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *arg1;
  float fVar5;
  uint32_t uVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float local_2c;
  
  local_2c = 0.0;
  if ((*arg1 != 0) && (iVar4 = FUN_00d8c7a0(), local_a0 = g_02704060, iVar4 != 0)) {
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_2c = 0.0;
    }
    else {
      lVar1 = **(int64_t **)(lVar2 + 0x10);
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      fVar5 = (float)FUN_00d4afa0();
      local_2c = 0.0;
      if ((0.0 <= fVar5) && (local_2c = fVar5, g_023908e0 < fVar5)) {
        local_2c = g_023908e0;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = FUN_00d95590();
      local_50 = local_80;
      local_48 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_48 = '\x01';
      FUN_00d97f20(uVar6,&local_50);
      local_90 = g_02704060;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      cVar3 = FUN_00d90870();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        local_2c = g_02390d38 - local_2c;
      }
      if (1 < *(int *)(lVar2 + 0xc)) {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8);
        local_68 = 0;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar2;
        fVar5 = (float)FUN_00d4afa0();
        local_2c = 0.0;
        if ((0.0 <= fVar5) && (local_2c = fVar5, g_023908e0 < fVar5)) {
          local_2c = g_023908e0;
        }
        local_2c = g_02390d38 - local_2c;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    local_2c = local_2c / g_02390d38;
  }
  return local_2c;
}



// ============================================================
// 00c5ffd0
// ============================================================
// Function: FUN_00c5ffd0
// Address: 00c5ffd0
// Size: 864 bytes
// Class: GNPopUpButton

bool FUN_00c5ffd0(int64_t *param_1,int64_t *param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t lVar3;
  int64_t local_128;
  char local_120;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  int64_t *local_b8;
  int64_t local_b0;
  int64_t *local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_a8 = param_1;
  (**(code **)(*this_ptr + 0x5d0))();
  lVar3 = *param_2;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == local_128) {
    local_b8 = param_2;
    local_b0 = lVar3;
    (**(code **)(*this_ptr + 0x5d0))();
    local_a0 = *param_3;
    local_98 = '\0';
    local_90 = *local_a8;
    local_88 = '\0';
    (**(code **)(*this_ptr + 0x608))();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00b324d0(0,&local_90,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_027719d0;
    if (g_027719d0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_0276ca98;
    if (g_0276ca98 != 0) {
      FUN_00d50b00();
    }
    local_d0 = lVar3;
    local_c8 = *local_a8;
    local_c0 = lVar1;
    FUN_002d73e0(&local_c8,&local_d0,&local_c0,4);
    FUN_000b4da0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_002d10d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    local_80 = g_027719d8;
    if (g_027719d8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_70 = *local_b8;
    local_68 = '\0';
    local_60 = lVar2;
    local_58 = '\0';
    FUN_00d40470(&local_60,&local_70,3,3);
    lVar3 = local_b0;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return lVar3 == local_128;
}



// ============================================================
// 00c60e60
// ============================================================
// Function: FUN_00c60e60
// Address: 00c60e60
// Size: 1043 bytes
// Class: GNPopUpButton

uint64_t FUN_00c60e60(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  if (param_2 != 0) {
    FUN_01f4e930();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x388))();
    FUN_00c5d9b0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_001220c0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    FUN_00c5dc60();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x368))();
    iVar2 = FUN_01f4eb70();
    if (iVar2 == 0) {
      (**(code **)(*local_40 + 0x380))();
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x608))();
      if (local_58 == 0) {
        (**(code **)(*this_ptr + 0x5d0))();
        FUN_00c5e840();
      }
      else {
        (**(code **)(*this_ptr + 0x5d0))();
        (**(code **)(*this_ptr + 0x608))();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        FUN_00c5e440();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d243a0();
      FUN_00d403d0();
      lVar1 = g_027719f0;
      if (g_027719f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_88 = 0;
      local_80 = '\0';
      FUN_00d40470(&local_88,&stack0xffffffffffffff88,1,3);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return 1;
}



// ============================================================
// 01d1d260
// ============================================================
// Function: FUN_01d1d260
// Address: 01d1d260
// Size: 761 bytes
// Class: GNPopUpButton

uint64_t FUN_01d1d260(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t unaff_RBX;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((char)this_ptr[6] == '\0') {
    uVar4 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  }
  else {
    FUN_01ccad60();
    if (local_40 == 0) {
      lVar5 = 0;
      if (local_38 != '\0') {
        lVar5 = 0;
      }
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_01e10550();
    lVar1 = g_027e7c20;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar1 = g_027e7c20;
    }
    g_027e7c20 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*this_ptr + 0x4d8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_01e10550();
      if (local_40 == 0) {
        bVar6 = false;
      }
      else {
        FUN_01e10550();
        iVar3 = FUN_00d8c7a0();
        bVar6 = iVar3 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if (bVar6) {
        FUN_01e10550();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d8dab0();
        bVar6 = local_40 != 0;
        if (bVar6) {
          FUN_00d50b00();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar6 = false;
        local_40 = 0;
      }
      lVar1 = g_027e7c20;
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d0))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 6) = 0;
      uVar4 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      if ((bVar6) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar4 & 0xffffffff;
}



// ============================================================
// 00c615f0
// ============================================================
// Function: FUN_00c615f0
// Address: 00c615f0
// Size: 588 bytes
// Class: GNPopUpButton

void FUN_00c615f0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_98;
  char local_90;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_00b37300();
  FUN_01d265f0();
  if (local_90 == '\0') {
    if (local_98 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_98 == 0) {
    return;
  }
  if (0 < *(int *)(local_98 + 0xc)) {
    lVar5 = 0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(local_98 + 0x10) + lVar5 * 8);
      cVar4 = (**(code **)(*plVar1 + 0x488))();
      lVar2 = g_027e7c20;
      if (cVar4 != '\0') {
        if (g_027e7c20 != 0) {
          FUN_00d50b00();
        }
        local_70 = lVar2;
        local_68 = '\x01';
        FUN_01ccab60(param_1,&local_70);
        plVar3 = local_50;
        if (local_48 == '\0') {
          if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
             (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = g_02725a40;
        if (plVar3 != (int64_t *)0x0) {
          if (g_02725a40 != 0) {
            FUN_00d50b00();
          }
          local_60 = lVar2;
          local_58 = '\x01';
          cVar4 = (**(code **)(*plVar3 + 0x50))();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_38 = 0;
            lVar2 = *(int64_t *)(this_ptr + 0xa0);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            local_38 = '\x01';
            local_40 = lVar2;
            (**(code **)(*plVar1 + 0x498))(param_1,1);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < *(int *)(local_98 + 0xc));
  }
  FUN_01d300d0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 01efdfe0
// ============================================================
// Function: FUN_01efdfe0
// Address: 01efdfe0
// Size: 520 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_01efdfe0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t local_50;
  char local_48;
  
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if ((g_027f94e0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  }
  lVar4 = g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    lVar4 = g_02802688;
    if (cVar2 != '\0') {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d6f8d0();
    lVar4 = *(int64_t *)(this_ptr + 0x78);
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x380))();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01d6f990();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar5 = lVar5 + 1;
        lVar4 = *(int64_t *)(this_ptr + 0x78);
      } while (lVar5 < *(int *)(lVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c6e400
// ============================================================
// Function: FUN_01c6e400
// Address: 01c6e400
// Size: 506 bytes
// Class: GNPopUpButton

void FUN_01c6e400(void* param_1)

{
  double dVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *this_ptr;
  uint64_t uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = g_02395720;
  if (this_ptr[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar2 = this_ptr[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar5 = (double)FUN_016cd860();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)this_ptr[0x38];
  dVar6 = SQRT((double)this_ptr[0x37] / dVar1);
  dVar7 = dVar5 / dVar6;
  dVar5 = dVar5 * dVar6;
  dVar6 = g_0241eeb8;
  if (g_0241eeb8 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar7 = g_0241ea58;
  if (dVar5 <= g_0241ea58) {
    dVar7 = dVar5;
  }
  if ((dVar1 != dVar6) || (NAN(dVar1) || NAN(dVar6))) {
    this_ptr[0x38] = (int64_t)dVar6;
    dVar5 = (double)_log((double)this_ptr[0x37] /
                         (double)(~-(uint64_t)(dVar6 == 0.0) & (uint64_t)dVar6 |
                                 g_0238fee8 & -(uint64_t)(dVar6 == 0.0)));
    *(float *)(this_ptr + 0x55) = (float)dVar5;
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
    }
  }
  if (((double)this_ptr[0x37] != dVar7) || (NAN((double)this_ptr[0x37]) || NAN(dVar7))) {
    this_ptr[0x37] = (int64_t)dVar7;
    uVar4 = -(uint64_t)((double)this_ptr[0x38] == 0.0);
    dVar5 = (double)_log(dVar7 / (double)(~uVar4 & this_ptr[0x38] | g_0238fee8 & uVar4));
    *(float *)(this_ptr + 0x55) = (float)dVar5;
    (**(code **)(*this_ptr + 0x620))();
    *(void*)(this_ptr + 0x3a) = 1;
    if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x46] + 0x40))();
    }
  }
  if ((int64_t *)this_ptr[0x36] == (int64_t *)0x0) {
    return;
  }
                                          (**(code **)(*(int64_t *)this_ptr[0x36] + 0x620))();
  return;
}



// ============================================================
// 00c60a70
// ============================================================
// Function: FUN_00c60a70
// Address: 00c60a70
// Size: 584 bytes
// Class: GNPopUpButton

void FUN_00c60a70(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t **pplVar4;
  void*this_ptr;
  int64_t *local_98;
  char local_90;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = g_027719e0;
  if (g_027719e0 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  plVar1 = g_027719e8;
  if (cVar3 != '\0') goto LAB_00c60c9a;
  if (g_027719e8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  FUN_00d50b20();
  if (cVar3 != '\0') goto LAB_00c60c9a;
  pplVar4 = &local_98;
  FUN_00b37610();
  plVar1 = local_98;
  FUN_00aff000();
  if (plVar1 == (int64_t *)0x0) {
LAB_00c60b76:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00c60b76;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = g_02725a40;
  if (plVar1 != (int64_t *)0x0) {
    if (g_02725a40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    FUN_00d50b20();
    if (cVar3 != '\0') {
      local_50 = *param_3;
      local_48 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    cVar3 = FUN_00b378e0();
    if (cVar3 != '\0') {
      local_40 = *param_3;
      local_38 = '\0';
      (**(code **)(*plVar1 + 0x88))(param_1,&local_40);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    FUN_00d50b20();
  }
LAB_00c60c9a:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}



// ============================================================
// 01effce0
// ============================================================
// Function: FUN_01effce0
// Address: 01effce0
// Size: 518 bytes
// Class: GNPopUpButton

void FUN_01effce0(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int64_t *plVar4;
  void*this_ptr;
  int64_t lVar5;
  bool bVar6;
  bool bVar7;
  
  if (g_028ba670 == (int64_t *)*this_ptr) {
    return;
  }
  if (g_028ba670 != (int64_t *)0x0) {
    if (((int64_t *)*this_ptr != (int64_t *)0x0) &&
       (cVar3 = (**(code **)(*g_028ba670 + 0x50))(), cVar3 != '\0')) {
      return;
    }
    if ((g_028ba670 != (int64_t *)0x0) && (g_028ba679 != '\0')) goto LAB_01effe06;
  }
  FUN_00e8cb50();
  if (g_028ba670 == (int64_t *)0x0) {
    plVar4 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (int64_t)&g_02572358;
    (*g_02572370)();
    if (g_028ba670 == plVar4) {
      bVar2 = false;
      bVar7 = false;
    }
    else {
      bVar2 = true;
      bVar7 = true;
      bVar6 = g_028ba670 != (int64_t *)0x0;
      g_028ba670 = plVar4;
      if (bVar6) {
        FUN_00d50b20();
      }
    }
    if (g_028ba678 == '\0') {
      g_028ba678 = '\x01';
      FUN_00e8cb90();
      bVar7 = bVar2;
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
    g_028ba679 = '\x01';
    FUN_00e8cb70();
  }
  else {
    g_028ba679 = '\x01';
    FUN_00e8cb70();
  }
LAB_01effe06:
  FUN_00d243f0();
  if ((g_028ba660 != 0) && (0 < *(int *)(g_028ba660 + 0xc))) {
    lVar5 = 0;
    plVar4 = (int64_t *)0x0;
    do {
      plVar1 = *(int64_t **)(*(int64_t *)(g_028ba660 + 0x10) + lVar5 * 8);
      if (plVar4 != plVar1) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar7 = plVar4 != (int64_t *)0x0;
        plVar4 = plVar1;
        if (bVar7) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar4 + 0x5e8))();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(g_028ba660 + 0xc));
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01efdb00
// ============================================================
// Function: FUN_01efdb00
// Address: 01efdb00
// Size: 602 bytes
// Class: GNPopUpButton

void FUN_01efdb00(void)

{
  bool bVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t local_40;
  char local_38;
  
  pcVar2 = g_026b2b70;
  lVar3 = *arg1;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar6 = 0;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
      if (lVar3 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_00d50b00();
        lVar7 = lVar3;
      }
      FUN_01f01c90();
      if (local_40 == 0) {
        lVar5 = 0;
        bVar1 = false;
      }
      else {
        lVar5 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
      }
      if (lVar5 == 0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar4 = (int64_t)&g_026b2b58;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        (*pcVar2)();
        (**(code **)(*plVar4 + 0x368))();
        (**(code **)(*plVar4 + 0x378))();
        FUN_01f01a30();
        bVar1 = true;
      }
      (**(code **)(*this_ptr + 0x648))();
      if ((lVar3 != 0) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      if (bVar1) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar3 = *arg1;
    } while (lVar6 < *(int *)(lVar3 + 0xc));
  }
  (**(code **)(*this_ptr + 0x448))();
  (**(code **)(*this_ptr + 0x658))();
  (**(code **)(*this_ptr + 0x628))();
  return;
}



// ============================================================
// 001e3dc0
// ============================================================
// Function: FUN_001e3dc0
// Address: 001e3dc0
// Size: 557 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_001e3dc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000fabd0();
  *this_ptr = &g_02686350;
  this_ptr[2] = &g_02686e38;
  this_ptr[0x39] = &g_02686e78;
  FUN_001e4060();
  *(void*)(this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_026efeab == '\0') {
    FUN_001e4350();
    FUN_00e87980();
  }
  FUN_001e44c0();
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_026efeab == '\0') {
    FUN_001e47b0();
    FUN_00e87980();
  }
  return;
}

