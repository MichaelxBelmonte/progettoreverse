// ===================================================================
// GNDistinction — Complete reconstructed pseudocode
// 13 functions
// ===================================================================


// ============================================================
// 00e0e4c0
// ============================================================
// Function: FUN_00e0e4c0
// Address: 00e0e4c0
// Size: 4325 bytes
// Class: GNDistinction

uint64_t FUN_00e0e4c0(void)

{
  bool bVar1;
  int64_t *plVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t *plVar8;
  byte bVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t local_158;
  char local_150;
  void*local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  void*local_88;
  int64_t *local_80;
  char local_78;
  void*local_70;
  int local_68;
  uint uStack_64;
  int local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  (**(code **)(*arg1 + 0x368))();
  (**(code **)(*arg1 + 0x378))();
  bVar1 = false;
  plVar10 = (void*)0x0;
  do {
    lVar7 = g_027851f0;
    if (g_027851f0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*arg1 + 0x3a0))();
    local_138 = local_48;
    local_130 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_130 = '\x01';
    (**(code **)(*arg1 + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (void*)0x0)) goto joined_r0x00e0e686;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0e6a0;
      }
LAB_00e0e643:
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0e643;
      }
      if (local_80 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (void*)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0e6a0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0e686:
      bVar1 = bVar3;
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (void*)0x0) break;
    (**(code **)(*arg1 + 0x3a8))();
    plVar10 = plVar8;
  } while( true );
  plVar10 = (void*)0x0;
  do {
    lVar7 = g_02784c28;
    if (g_02784c28 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*arg1 + 0x3a0))();
    local_128 = local_48;
    local_120 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_120 = '\x01';
    (**(code **)(*arg1 + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (void*)0x0)) goto joined_r0x00e0e896;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0e8b0;
      }
LAB_00e0e853:
      plVar10 = plVar8;
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0e853;
      }
      if (local_80 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (void*)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0e8b0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0e896:
      bVar1 = bVar3;
      plVar10 = plVar8;
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (void*)0x0) break;
    (**(code **)(*arg1 + 0x3a8))();
  } while( true );
  plVar10 = (void*)0x0;
  do {
    lVar7 = g_027866d8;
    if (g_027866d8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*arg1 + 0x3a0))();
    local_118 = local_48;
    local_110 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_110 = '\x01';
    (**(code **)(*arg1 + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (void*)0x0)) goto joined_r0x00e0eaa6;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0eac0;
      }
LAB_00e0ea63:
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0ea63;
      }
      if (local_80 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (void*)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0eac0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0eaa6:
      bVar1 = bVar3;
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (void*)0x0) break;
    (**(code **)(*arg1 + 0x3a8))();
    plVar10 = plVar8;
  } while( true );
  (**(code **)(*arg1 + 0x370))();
  FUN_00d92220();
  local_108 = local_58;
  local_100 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_100 = '\x01';
  FUN_00d91000(0);
  plVar10 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (void*)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  local_88 = puVar6;
  if (plVar10 != (void*)0x0) {
    local_78 = '\0';
    local_80 = (int64_t *)0x0;
    local_70 = plVar10;
    local_68 = -1;
    uStack_64 = 0;
    local_60 = 0;
    while( true ) {
      if (uStack_64 != 0) {
        if ((int)uStack_64 < 1) {
          uStack_64 = -uStack_64;
        }
        else {
          local_68 = local_68 - uStack_64;
          FUN_00d23690();
          local_60 = local_60 + uStack_64;
          uStack_64 = 0;
        }
      }
      lVar7 = (int64_t)local_68;
      local_68 = local_68 + 1;
      if (*(int *)((int64_t)local_70 + 0xc) <= local_68) break;
      local_80 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
      FUN_00d95590();
      local_f8 = local_58;
      local_f0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_f0 = '\x01';
      FUN_00d97fb0();
      plVar8 = local_48;
      if (local_48 == (int64_t *)0x0) {
        bVar9 = 1;
        plVar8 = (int64_t *)0x0;
        bVar1 = false;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar9 = 0;
          bVar1 = true;
          if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00e0ede8;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        bVar1 = true;
        bVar9 = 0;
      }
LAB_00e0ede8:
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = g_027866e0;
      if (g_027866e0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar8 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      plVar11 = local_80;
      puVar6 = local_88;
      if (cVar5 == '\0') {
        if (local_80 == plVar8) {
          if ((bool)(bVar9 & local_80 != (int64_t *)0x0)) {
            if (local_78 != '\0') goto LAB_00e0eeb6;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          plVar8 = plVar11;
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (bVar1) {
              FUN_00d50b20();
              bVar1 = true;
              goto LAB_00e0ef00;
            }
          }
          else {
            if (bVar1) {
              FUN_00d50b20();
            }
LAB_00e0eeb6:
            local_78 = '\0';
            plVar11 = plVar8;
          }
          plVar8 = plVar11;
          bVar1 = true;
        }
LAB_00e0ef00:
        lVar7 = g_027866e0;
        if (g_027866e0 != 0) {
          FUN_00d50b00();
        }
        cVar5 = FUN_00d90eb0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = g_027866e0;
        puVar6 = local_88;
        if (cVar5 != '\0') {
          if (g_027866e0 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar7;
          local_150 = '\x01';
          FUN_00d8ede0();
          local_e8 = local_58;
          local_e0 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          puVar6 = local_88;
          local_e0 = '\x01';
          FUN_00d98db0(&local_e8,&local_158,0);
          plVar11 = local_48;
          if (local_48 == plVar8) {
            plVar11 = plVar8;
            bVar3 = bVar1;
            if ((!bVar1) && (local_48 != (int64_t *)0x0)) {
              if (local_40 != '\0') goto LAB_00e0f031;
              FUN_00d50b00();
              bVar3 = true;
            }
LAB_00e0f071:
            bVar1 = bVar3;
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e0f071;
            }
            if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e0f031:
            local_40 = '\0';
            bVar1 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = plVar11;
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = '\0';
        local_48 = plVar8;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    if (puVar6 == (void*)0x0) {
      bVar3 = true;
      plVar8 = (int64_t *)0x0;
      bVar1 = false;
      local_148 = local_88;
      goto LAB_00e0f4a9;
    }
  }
  local_78 = '\0';
  local_80 = (int64_t *)0x0;
  local_70 = local_88;
  local_68 = -1;
  uStack_64 = 0;
  local_60 = 0;
  plVar8 = (int64_t *)0x0;
  bVar1 = false;
  while( true ) {
    puVar6 = local_88;
    if (uStack_64 != 0) {
      if ((int)uStack_64 < 1) {
        uStack_64 = -uStack_64;
      }
      else {
        local_68 = local_68 - uStack_64;
        FUN_00d23690();
        local_60 = local_60 + uStack_64;
        uStack_64 = 0;
      }
    }
    lVar7 = (int64_t)local_68;
    local_68 = local_68 + 1;
    if (*(int *)((int64_t)local_70 + 0xc) <= local_68) break;
    local_80 = *(int64_t **)(local_70[2] + 8 + lVar7 * 8);
    FUN_00d95590();
    local_d8 = local_58;
    local_d0 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_d0 = '\x01';
    FUN_00d97fb0();
    plVar11 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = plVar8;
    bVar3 = bVar1;
    if (plVar8 == (int64_t *)0x0) {
LAB_00e0f3d8:
      if (plVar11 != plVar8) {
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar4 = plVar11;
        if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e0f451;
      }
      if ((bVar1) || (plVar11 == (int64_t *)0x0)) goto joined_r0x00e0f451;
      bVar1 = true;
      FUN_00d50b00();
      goto LAB_00e0f16b;
    }
    FUN_00d8ede0();
    plVar2 = local_48;
    local_c0 = 0;
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = plVar2;
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (cVar5 == '\0') {
      cVar5 = '\0';
    }
    else {
      FUN_00d8ede0();
      local_b8 = local_58;
      local_b0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b0 = '\x01';
      cVar5 = (**(code **)(*plVar11 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_00e0f3d8;
    uStack_64 = ~uStack_64;
joined_r0x00e0f451:
    bVar1 = bVar3;
    plVar8 = plVar4;
    if (plVar11 != (int64_t *)0x0) {
LAB_00e0f16b:
      FUN_00d50b20();
    }
  }
  FUN_00018280();
  bVar3 = false;
  local_148 = puVar6;
LAB_00e0f4a9:
  local_140 = '\0';
  FUN_00d92220();
  local_98 = local_48;
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = '\x01';
  FUN_00d95130();
  local_a8 = local_80;
  local_a0 = 0;
  if (local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_a0 = '\x01';
  (**(code **)(*arg1 + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*arg1 + 0x370))();
  if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00e09be0
// ============================================================
// Function: FUN_00e09be0
// Address: 00e09be0
// Size: 4704 bytes
// Class: GNDistinction

void* FUN_00e09be0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  char cVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t lVar15;
  int iVar16;
  void*this_ptr;
  uint32_t uVar17;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t local_270;
  uint8_t local_268;
  uint64_t local_260;
  uint8_t local_258;
  int64_t local_250;
  uint8_t local_248;
  int64_t local_240;
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
  int64_t local_1c8;
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
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &g_024c0e88;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(void*)(puVar12 + 4) = 0;
  FUN_00d500e0();
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  lVar1 = puVar12[2];
  puVar12[2] = plVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar13 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  lVar1 = puVar12[3];
  puVar12[3] = plVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar1 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar2 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  local_60 = lVar2;
  FUN_00d934d0();
  lVar2 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar3 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (uVar17 = FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar4 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar5 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (uVar17 = FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar7 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar8 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((uVar17 = FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar9 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar10 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  local_238 = lVar1;
  local_230 = '\0';
  FUN_00d91000(1);
  lVar15 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if (lVar15 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_240 = lVar15;
    local_48 = lVar15;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    lVar15 = local_60;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar16 = -local_40._4_4_;
        }
        else {
          iVar16 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar16);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar16 = 0;
        }
        local_40 = CONCAT44(iVar16,(int)local_40);
      }
      lVar14 = (int64_t)(int)local_40;
      iVar16 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar16);
      if (*(int *)(local_48 + 0xc) <= iVar16) break;
      local_228 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar14 * 8);
      local_220 = '\0';
      local_58 = local_228;
      uVar17 = FUN_00ddb860();
      plVar13 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (int64_t *)0x0) && (uVar17 = FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_210 = '\0';
      local_218 = lVar15;
      cVar11 = (**(code **)(*plVar13 + 0x3b0))(uVar17,&local_70);
      uVar17 = extraout_XMM0_Da;
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      if (cVar11 == '\0') {
LAB_00e0a750:
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        iVar16 = 1;
        lVar15 = local_60;
      }
      else {
        (**(code **)(*plVar13 + 0x3d0))(uVar17,0);
        cVar11 = (**(code **)(*plVar13 + 0x3d8))();
        if (cVar11 == '\0') goto LAB_00e0a750;
        local_208 = lVar2;
        local_200 = '\0';
        cVar11 = FUN_00d90870();
        if ((local_200 != '\0') && (local_208 != 0)) {
          FUN_00d50b20();
        }
        lVar15 = local_60;
        if (cVar11 == '\0') {
          local_1e8 = lVar3;
          local_1e0 = '\0';
          cVar11 = FUN_00d90870();
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          iVar16 = 3;
          lVar15 = local_60;
          if (cVar11 == '\0') {
            local_1d8 = lVar4;
            local_1d0 = '\0';
            cVar11 = FUN_00d90870();
            uVar17 = extraout_XMM0_Da_00;
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            if (cVar11 == '\0') {
              local_1a8 = lVar8;
              local_1a0 = '\0';
              cVar11 = FUN_00d90870();
              uVar17 = extraout_XMM0_Da_01;
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                uVar17 = FUN_00d50b20();
              }
              if (cVar11 == '\0') {
                local_178 = lVar7;
                local_170 = '\0';
                cVar11 = FUN_00d90870();
                uVar17 = extraout_XMM0_Da_02;
                if ((local_170 != '\0') && (local_178 != 0)) {
                  uVar17 = FUN_00d50b20();
                }
                if (cVar11 == '\0') {
                  local_148 = lVar10;
                  local_140 = '\0';
                  cVar11 = FUN_00d90870();
                  uVar17 = extraout_XMM0_Da_03;
                  if ((local_140 != '\0') && (local_148 != 0)) {
                    uVar17 = FUN_00d50b20();
                  }
                  if (cVar11 == '\0') {
                    local_118 = lVar5;
                    local_110 = '\0';
                    cVar11 = FUN_00d90870();
                    uVar17 = extraout_XMM0_Da_04;
                    if ((local_110 != '\0') && (local_118 != 0)) {
                      uVar17 = FUN_00d50b20();
                    }
                    lVar15 = local_60;
                    if (cVar11 == '\0') {
                      local_108 = lVar6;
                      local_100 = '\0';
                      cVar11 = FUN_00d90870();
                      uVar17 = extraout_XMM0_Da_05;
                      if ((local_100 != '\0') && (local_108 != 0)) {
                        uVar17 = FUN_00d50b20();
                      }
                      lVar15 = local_60;
                      if (cVar11 == '\0') {
                        local_f8 = lVar9;
                        local_f0 = '\0';
                        cVar11 = FUN_00d90870();
                        if ((local_f0 != '\0') && (local_f8 != 0)) {
                          FUN_00d50b20();
                        }
                        lVar15 = local_60;
                        if (cVar11 != '\0') goto LAB_00e0a76c;
                      }
                      else {
                        local_260 = 0;
                        local_258 = 0;
                        local_250 = lVar6;
                        local_248 = 0;
                        FUN_00e09950(uVar17,&local_250);
                      }
                    }
                    else {
                      local_270 = lVar5;
                      local_268 = 0;
                      FUN_00e09950(uVar17,&local_270);
                    }
                  }
                  else {
                    local_138 = 0;
                    local_130 = '\0';
                    local_128 = lVar10;
                    local_120 = '\0';
                    FUN_00cd2930(uVar17,&local_128);
                    lVar15 = local_60;
                    if ((local_120 != '\0') && (local_128 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_130 != '\0') && (local_138 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_168 = 0;
                  local_160 = '\0';
                  local_158 = lVar7;
                  local_150 = '\0';
                  FUN_00cd2930(uVar17,&local_158);
                  lVar15 = local_60;
                  if ((local_150 != '\0') && (local_158 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_160 != '\0') && (local_168 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_198 = 0;
                local_190 = '\0';
                local_188 = lVar8;
                local_180 = '\0';
                FUN_00cd2930(uVar17,&local_188);
                lVar15 = local_60;
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_1c8 = 0;
              local_1c0 = '\0';
              local_1b8 = lVar4;
              local_1b0 = '\0';
              FUN_00cd2930(uVar17,&local_1b8);
              lVar15 = local_60;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar16 = 0;
          }
        }
        else {
          local_1f8 = 0;
          local_1f0 = '\0';
          uVar17 = FUN_00c716c0();
          *(void*)(puVar12 + 4) = uVar17;
          iVar16 = 3;
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00e0a76c:
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((iVar16 != 0) && (iVar16 != 3)) goto LAB_00e0ad14;
    }
    iVar16 = 2;
LAB_00e0ad14:
    FUN_00018280();
    lVar15 = local_240;
    if (iVar16 != 2) goto LAB_00e0ad35;
  }
  iVar16 = 0;
LAB_00e0ad35:
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (iVar16 == 0) {
    *this_ptr = puVar12;
    *(void*)(this_ptr + 1) = 1;
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((iVar16 != 0) && (puVar12 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00e063c0
// ============================================================
// Function: FUN_00e063c0
// Address: 00e063c0
// Size: 2394 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "\tVendor: %s"
//   "\tBrand: %s"
//   "\tSignature: Stepping: %I, Model: %I: Family: %I"

void FUN_00e063c0(void)

{
  int64_t lVar1;
  uint *puVar2;
  void*puVar3;
  uint uVar4;
  void*puVar5;
  int64_t lVar6;
  int iVar7;
  void*puVar8;
  int64_t lVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  int64_t *arg1;
  byte bVar13;
  int64_t lVar14;
  uint64_t uVar15;
  byte bVar16;
  int64_t *plVar17;
  void*puVar18;
  int64_t *plVar19;
  double dVar20;
  uint64_t uVar21;
  double local_1b8;
  void*local_190;
  char local_188;
  void*local_170;
  uint local_168;
  uint32_t local_164;
  int64_t *local_160;
  void*local_158;
  char local_150;
  void*local_148;
  uint local_140;
  byte local_13c;
  byte local_13b;
  byte local_13a;
  int64_t local_138;
  uint local_130;
  uint8_t local_12c;
  int64_t alStack_128 [4];
  uint8_t auStack_108 [208];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00d8ede0();
  lVar6 = local_138;
  if (((char)local_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    puVar8 = (void*)0x0;
  }
  else {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    lVar9 = g_027850d0;
    if (g_027850d0 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    local_130 = local_130 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1b8 = (double)FUN_00e7d6f0();
  }
  lVar9 = cpuid_basic_info(0);
  local_138 = *(int64_t *)(lVar9 + 4);
  local_130 = *(void*)(lVar9 + 0xc);
  local_12c = 0;
  if (*arg1 != 0) {
    local_168 = 1;
    local_170 = &g_026ba3d0;
    local_160 = &local_138;
    FUN_00d8cb40(local_130,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  lVar9 = (int64_t)iVar7;
  plVar19 = (int64_t *)((int64_t)&local_138 + lVar9);
  puVar2 = (uint *)cpuid(0x80000000);
  if (((-1 < (int)*puVar2) || (*puVar2 < 0x80000004)) || (0xf4U - iVar7 < 2)) {
    *(void*)plVar19 = 0;
    goto LAB_00e0662c;
  }
  lVar14 = (int64_t)(int)(0xf4U - iVar7);
  uVar15 = lVar14 - 1;
  puVar3 = (void*)cpuid_brand_part1_info(0x80000002);
  local_170 = (void*)*puVar3;
  local_164 = *(void*)(puVar3 + 1);
  local_168 = *(uint *)((int64_t)puVar3 + 0xc);
  plVar17 = plVar19;
  if (uVar15 < 0x11) {
LAB_00e067c8:
    uVar21 = FUN_00e7dbc0(local_168,uVar15);
    puVar18 = (void*)((int64_t)plVar17 + uVar15);
  }
  else {
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x11;
    plVar17 = (int64_t *)((int64_t)alStack_128 + lVar9);
    puVar3 = (void*)cpuid_brand_part2_info(0x80000003);
    local_170 = (void*)*puVar3;
    local_164 = *(void*)(puVar3 + 1);
    local_168 = *(uint *)((int64_t)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x21;
    plVar17 = (int64_t *)((int64_t)alStack_128 + lVar9 + 0x10);
    puVar3 = (void*)cpuid_brand_part3_info(0x80000004);
    local_170 = (void*)*puVar3;
    local_164 = *(void*)(puVar3 + 1);
    local_168 = *(uint *)((int64_t)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    uVar21 = FUN_00e7dbc0(local_168,0x10);
    puVar18 = auStack_108 + lVar9;
  }
  *puVar18 = 0;
  if (*arg1 != 0) {
    local_168 = 1;
    local_170 = &g_026ba3d0;
    local_160 = plVar19;
    FUN_00d8cb40(uVar21,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  plVar19 = (int64_t *)((int64_t)plVar19 + (int64_t)iVar7);
LAB_00e0662c:
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = *puVar2;
  bVar13 = (byte)uVar4 & 0xf;
  bVar12 = 0;
  if ((~uVar4 & 0xf00) == 0) {
    bVar12 = (byte)(uVar4 >> 0x10) & 0xf;
  }
  bVar12 = bVar12 + ((byte)(uVar4 >> 4) & 0xf);
  uVar10 = uVar4 >> 8 & 0xf;
  bVar16 = (char)(uVar4 >> 0x14) + 0xf;
  if (uVar10 != 0xf) {
    bVar16 = (byte)uVar10;
  }
  lVar9 = 0;
  if (*arg1 != 0) {
    local_140 = 3;
    local_148 = (void*)&g_02585ac0;
    local_13c = bVar13;
    local_13b = bVar12;
    local_13a = bVar16;
    FUN_00d8cb40(uVar10,&local_148);
    puVar3 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar3;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = *arg1;
  }
  cVar11 = bVar13 + 0x30;
  if (9 < bVar13) {
    cVar11 = bVar13 + 0x37;
  }
  *(void*)plVar19 = 0x30;
  *(char *)((int64_t)plVar19 + 1) = cVar11;
  bVar13 = (bVar12 & 0xf) + 0x37;
  if ((bVar12 & 0xf) < 10) {
    bVar13 = bVar12 | 0x30;
  }
  *(byte *)((int64_t)plVar19 + 2) = bVar12 >> 4 | 0x30;
  *(byte *)((int64_t)plVar19 + 3) = bVar13;
  bVar12 = bVar16 >> 4 | 0x30;
  if (0x9f < bVar16) {
    bVar12 = (bVar16 >> 4) + 0x37;
  }
  *(byte *)((int64_t)plVar19 + 4) = bVar12;
  bVar16 = bVar16 & 0xf;
  cVar11 = bVar16 + 0x30;
  if (9 < bVar16) {
    cVar11 = bVar16 + 0x37;
  }
  *(char *)((int64_t)plVar19 + 5) = cVar11;
  *(void*)((int64_t)plVar19 + 6) = 0;
  FUN_00e07210(0x31,0x30,&local_138,lVar9 != 0);
  puVar3 = local_170;
  if (((char)local_168 == '\0') && (local_170 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_168 = local_168 & 0xffffff00;
  local_170 = puVar3;
  FUN_00d21140();
  if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    dVar20 = (double)FUN_00e7d6f0();
    local_160 = (int64_t *)((dVar20 - local_1b8) * g_023907c0);
    local_168 = 1;
    local_170 = (void*)&g_024de5e0;
    FUN_00d8cb40(local_160,&local_170);
    puVar5 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar5;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_00d92220();
    local_190 = local_148;
    local_188 = 0;
    if ((char)local_140 == '\0') {
      if (local_148 != (void*)0x0) {
        uVar21 = FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_188 = '\x01';
    FUN_00d95130(uVar21,&local_190);
    puVar5 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar5;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (puVar8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00e05610
// ============================================================
// Function: FUN_00e05610
// Address: 00e05610
// Size: 2233 bytes
// Class: GNDistinction
// String references:
//   "%lld"
//   "sysctl(HW_AVAILCPU) failure %I"
//   "sysctl(HW_MODEL) failure %I"
//   "machdep.cpu.brand_string"
//   "sysctlbyname(machdep.cpu.brand_string) failure %I"
//   "Duration: %f ms"

void FUN_00e05610(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t lVar4;
  int iVar5;
  int *piVar6;
  int64_t *arg1;
  void *pvVar7;
  u_int uVar8;
  int64_t lVar9;
  double dVar10;
  uint64_t uVar11;
  double local_1d0;
  size_t sVar12;
  void *in_stack_fffffffffffffe38;
  void*puVar13;
  char cVar14;
  size_t in_stack_fffffffffffffe40;
  uint32_t local_1a4;
  void*local_1a0;
  char local_198;
  int64_t local_190;
  void*local_180;
  void*local_178;
  uint local_170;
  int local_16c;
  void*local_168;
  uint local_160;
  double local_158;
  void*local_150;
  char local_148;
  uint64_t local_140;
  int64_t local_138;
  uint64_t uStack_130;
  uint64_t local_128;
  uint64_t uStack_120;
  uint64_t local_118;
  uint64_t uStack_110;
  uint64_t local_108;
  uint64_t uStack_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar8 = (u_int)&local_138;
  FUN_00d8ede0();
  lVar4 = local_138;
  if (((char)uStack_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    local_180 = (void*)0x0;
  }
  else {
    local_180 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_180 = &g_02572358;
    (*g_02572370)();
    lVar9 = g_027850c8;
    if (g_027850c8 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    FUN_00d21140();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1d0 = (double)FUN_00e7d6f0();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1a4 = 0;
  local_140 = 0x1900000006;
  local_190 = 4;
  iVar5 = _sysctl((int *)&local_190,(u_int)&local_1a4,(void *)0x0,(size_t *)0x0,
                  in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
  if (iVar5 == 0) {
    FUN_00e7df20(local_1a4,"%lld");
    iVar5 = FUN_00e7dde0();
    uVar8 = (int)&local_138 + iVar5;
    lVar9 = 0x100 - (int64_t)iVar5;
  }
  else {
    lVar9 = 0x100;
    if (*arg1 != 0) {
      piVar6 = ___error();
      local_16c = *piVar6;
      local_170 = 1;
      local_178 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_178);
      puVar2 = local_150;
      if (local_148 == '\0') {
        if (local_150 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_148 = '\0';
      }
      local_168 = puVar2;
      local_160 = local_160 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_140 = 0x200000006;
  pvVar7 = (void *)0x0;
  local_190 = lVar9;
  iVar5 = _sysctl((int *)&local_190,uVar8,(void *)0x0,(size_t *)0x0,in_stack_fffffffffffffe38,
                  in_stack_fffffffffffffe40);
  sVar12 = (size_t)in_stack_fffffffffffffe38;
  if (iVar5 == 0) {
    lVar9 = lVar9 - (local_190 + -1);
  }
  else if (*arg1 != 0) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_190 = lVar9;
  iVar5 = _sysctlbyname((char *)0x0,&local_190,(size_t *)0x0,pvVar7,sVar12);
  if ((iVar5 != 0) && (*arg1 != 0)) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e07210(0x36,0x30,&local_138,*arg1 != 0);
  puVar2 = local_168;
  if (((char)local_160 == '\0') && (local_168 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = puVar2;
  FUN_00d21140();
  if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    local_158 = (dVar10 - local_1d0) * g_023907c0;
    local_160 = 1;
    local_168 = (void*)&g_024de5e0;
    FUN_00d8cb40(local_158,&local_168);
    puVar13 = local_178;
    if ((char)local_170 == '\0') {
      if (local_178 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_150 = puVar13;
    local_148 = '\0';
    FUN_00d21140();
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar13 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (void*)0x0)) {
      FUN_00d50b20();
    }
    cVar14 = '\0';
    puVar13 = local_180;
    uVar11 = FUN_00d92220();
    local_1a0 = local_178;
    local_198 = 0;
    if ((char)local_170 == '\0') {
      if (local_178 != (void*)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_198 = '\x01';
    FUN_00d95130(uVar11,&local_1a0);
    puVar3 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar3;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar14 != '\0') && (puVar13 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_180 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00e07210
// ============================================================
// Function: FUN_00e07210
// Address: 00e07210
// Size: 1446 bytes
// Class: GNDistinction
// String references:
//   " /* %s */"

void FUN_00e07210(uint8_t param_1,uint8_t param_2,int64_t param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  void*puVar4;
  void*puVar5;
  uint *puVar6;
  int64_t lVar7;
  byte bVar8;
  char cVar9;
  int64_t lVar10;
  uint *puVar11;
  uint uVar12;
  uint64_t uVar13;
  uint8_t unaff_SIL;
  uint64_t uVar14;
  uint uVar15;
  void*this_ptr;
  uint64_t uVar16;
  uint uVar17;
  int iVar18;
  int64_t lVar19;
  uint8_t auVar20 [16];
  uint8_t local_198 [16];
  uint8_t local_188 [16];
  uint8_t local_178 [16];
  uint8_t local_168 [16];
  uint64_t local_58;
  uint64_t uStack_50;
  uint local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d8db40();
  puVar5 = (void*)FUN_00d8b910();
  *puVar5 = unaff_SIL;
  puVar5[1] = param_2;
  puVar5[2] = param_1;
  puVar5[3] = 0x5f;
  puVar6 = (uint *)FUN_00e83010();
  iVar3 = FUN_00e7dde0();
  local_48 = 0xc3d2e1f0;
  local_58 = g_023e0060;
  uStack_50 = _UNK_023e0068;
  iVar18 = 0;
  if (0x3f < iVar3) {
    lVar19 = 0;
    do {
      lVar10 = (int64_t)(int)lVar19;
      lVar7 = (int64_t)((int)lVar19 + 0x3c);
      uVar13 = (lVar7 - lVar10) + 3;
      if (uVar13 < 0xc) {
        uVar14 = 0;
        lVar19 = lVar10;
LAB_00e073c5:
        puVar11 = (uint *)(local_198 + uVar14 * 4);
        lVar10 = lVar19;
        do {
          uVar12 = *(uint *)(param_3 + lVar10);
          *puVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
          lVar19 = lVar10 + 4;
          puVar11 = puVar11 + 1;
          bVar1 = lVar10 < lVar7;
          lVar10 = lVar19;
        } while (bVar1);
      }
      else {
        uVar13 = (uVar13 >> 2) + 1;
        uVar14 = uVar13 & 0xfffffffffffffffc;
        lVar19 = lVar10 + uVar14 * 4;
        uVar16 = 0;
        do {
          auVar20 = pshufb(*(uint8_t (*) [16])(lVar10 + param_3 + uVar16 * 4),g_023e0070);
          *(uint8_t (*) [16])(local_198 + uVar16 * 4) = auVar20;
          uVar16 = uVar16 + 4;
        } while (uVar14 != uVar16);
        if (uVar13 != uVar14) goto LAB_00e073c5;
      }
      FUN_00e05070();
      iVar18 = (int)lVar19;
    } while (iVar18 <= iVar3 + -0x40);
  }
  uVar17 = iVar3 - iVar18;
  local_168 = (uint8_t  [16])0x0;
  local_178 = (uint8_t  [16])0x0;
  local_188 = (uint8_t  [16])0x0;
  local_198 = (uint8_t  [16])0x0;
  uVar12 = 0;
  if (0 < (int)uVar17) {
    bVar2 = 0;
    if (uVar17 == 1) {
      uVar13 = 0;
    }
    else {
      lVar19 = iVar18 + param_3;
      uVar13 = 0;
      do {
        uVar15 = (uint)uVar13 & 0xfffffffc;
        uVar12 = (uint)*(byte *)(lVar19 + uVar13) << (bVar2 & 0x10 ^ 0x18) |
                 *(uint *)(local_198 + uVar15);
        *(uint *)(local_198 + uVar15) = uVar12;
        *(uint *)(local_198 + uVar15) =
             (uint)*(byte *)(lVar19 + 1 + uVar13) << (bVar2 & 0x10 ^ 0x10) | uVar12;
        uVar13 = uVar13 + 2;
        bVar2 = bVar2 + 0x10;
      } while ((uVar17 & 0xfffffffe) != uVar13);
    }
    uVar12 = uVar17;
    if ((uVar17 & 1) != 0) {
      *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) =
           *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) |
           (uint)*(byte *)(param_3 + (int64_t)iVar18 + uVar13) << (~((char)uVar13 * '\b') & 0x18U);
    }
  }
  *(uint *)(local_198 + (uVar12 & 0xfffffffc)) =
       *(uint *)(local_198 + (uVar12 & 0xfffffffc)) | 0x80 << (~((char)uVar12 * '\b') & 0x18U);
  if (0x37 < (int)uVar17) {
    FUN_00e05070();
    local_168._0_12_ = SUB1612((uint8_t  [16])0x0,0);
    local_178 = (uint8_t  [16])0x0;
    local_188 = (uint8_t  [16])0x0;
    local_198 = (uint8_t  [16])0x0;
  }
  local_168._12_4_ = iVar3 << 3;
  FUN_00e05070();
  puVar6[4] = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
              local_48 << 0x18;
  puVar6[3] = uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
              (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18;
  puVar6[2] = (uint)uStack_50 >> 0x18 | ((uint)uStack_50 & 0xff0000) >> 8 |
              ((uint)uStack_50 & 0xff00) << 8 | (uint)uStack_50 << 0x18;
  puVar6[1] = local_58._4_4_ >> 0x18 | (local_58._4_4_ & 0xff0000) >> 8 |
              (local_58._4_4_ & 0xff00) << 8 | local_58._4_4_ << 0x18;
  *puVar6 = (uint)local_58 >> 0x18 | ((uint)local_58 & 0xff0000) >> 8 |
            ((uint)local_58 & 0xff00) << 8 | (uint)local_58 << 0x18;
  bVar8 = (byte)*puVar6 >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)*puVar6) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[4] = bVar2;
  bVar2 = (byte)*puVar6 & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[5] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 1) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 1)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[6] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 1) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[7] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 2) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 2)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[8] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 2) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[9] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 3) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 3)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[10] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 3) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xb] = cVar9;
  bVar8 = (byte)puVar6[1] >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)puVar6[1]) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xc] = bVar2;
  bVar2 = (byte)puVar6[1] & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xd] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 5) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 5)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xe] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 5) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xf] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 6) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 6)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x10] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 6) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x11] = cVar9;
  bVar8 = *(byte *)((int64_t)puVar6 + 7) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((int64_t)puVar6 + 7)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x12] = bVar2;
  bVar2 = *(byte *)((int64_t)puVar6 + 7) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x13] = cVar9;
  puVar5[0x14] = 0;
  if (param_4 != '\0') {
    local_198._8_4_ = 1;
    local_198._0_8_ = &g_026ba3d0;
    local_188._0_8_ = param_3;
    FUN_00d94d80(cVar9,local_198);
  }
  FUN_00d8c7d0();
  FUN_00e83070();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}



// ============================================================
// 00e0bbc0
// ============================================================
// Function: FUN_00e0bbc0
// Address: 00e0bbc0
// Size: 1520 bytes
// Class: GNDistinction

uint64_t FUN_00e0bbc0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  int64_t **arg1;
  int64_t this_ptr;
  uint64_t uVar7;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  int64_t local_40;
  int local_38;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (int64_t *)(*arg1)[2];
  local_70 = plVar4;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  local_68 = plVar5;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_02781700;
  if ((*(int *)(this_ptr + 0x20) == 2) && ((int)(*arg1)[4] == 2)) {
    if (g_02781700 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = g_02781700;
    if (g_02781700 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = local_68;
  plVar1 = g_02781700;
  if (param_2 == 2) {
    if (*(int *)(this_ptr + 0x20) == 0) {
      if (0 < (int)(*arg1)[4]) {
LAB_00e0bdaa:
        if (g_02781700 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        plVar1 = g_02781700;
        if (g_02781700 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_00e0be3c;
    }
    if (0 < *(int *)(this_ptr + 0x20)) {
      if ((int)(*arg1)[4] == 0) goto LAB_00e0bdaa;
      goto LAB_00e0be3c;
    }
LAB_00e0be46:
    if ((int)(*arg1)[4] == 2) {
LAB_00e0be6a:
      plVar1 = g_027c20d8;
      if (g_027c20d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      plVar1 = g_027c20d8;
      if (g_027c20d8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_00e0befc:
    iVar3 = *(int *)(this_ptr + 0x20);
    if (2 < iVar3) goto LAB_00e0bf14;
    if ((int)(*arg1)[4] != 3) goto LAB_00e0bfbc;
  }
  else {
    if (1 < param_2 - 1U) goto LAB_00e0bfbc;
LAB_00e0be3c:
    iVar3 = *(int *)(this_ptr + 0x20);
    if (iVar3 < 2) goto LAB_00e0be46;
    if (iVar3 == 2) {
      if ((int)(*arg1)[4] < 2) goto LAB_00e0be6a;
      goto LAB_00e0befc;
    }
LAB_00e0bf14:
    if ((iVar3 != 3) || (2 < (int)(*arg1)[4])) goto LAB_00e0bfbc;
  }
  plVar1 = g_0276c080;
  if (g_0276c080 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = g_0276c080;
  if (g_0276c080 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_00e0bfbc:
  local_48[0] = '\0';
  local_50 = (int64_t *)0x0;
  local_40 = plVar5[2];
  local_38 = 0;
  if (0 < *(int *)(local_40 + 0xc)) {
    arg1 = &local_80;
    do {
      local_50 = *(int64_t **)(*(int64_t *)(local_40 + 0x10) + (int64_t)local_38 * 8);
      FUN_01da7840((int64_t)local_38,&local_50);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e0c060;
        }
LAB_00e0c17d:
        if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = 0;
        goto LAB_00e0c198;
      }
      if (local_60 == (int64_t *)0x0) goto LAB_00e0c17d;
LAB_00e0c060:
      FUN_01da7840();
      local_80 = plVar1;
      local_78 = '\0';
      cVar2 = (**(code **)(*local_60 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar4 = local_70;
      if (cVar2 == '\0') {
        FUN_00d50b20();
        plVar4 = local_70;
        goto LAB_00e0c17d;
      }
      local_60 = local_50;
      local_58 = '\0';
      FUN_00ca13a0();
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(local_40 + 0xc));
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_50;
  pplVar6 = &local_60;
  if (local_48[0] != '\0') {
    pplVar6 = (int64_t **)local_48;
  }
  local_60 = (int64_t *)CONCAT71(local_60._1_7_,local_48[0]);
  *(char *)pplVar6 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((uint64_t)arg1 >> 8),*(int *)((int64_t)plVar1 + 0xc) == 0);
  if ((char)local_60 != '\0') {
    FUN_00d50b20();
  }
LAB_00e0c198:
  FUN_00d50b20();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}



// ============================================================
// 00e08fe0
// ============================================================
// Function: FUN_00e08fe0
// Address: 00e08fe0
// Size: 1393 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "IOPlatformExpertDevice"
//   "SystemSerialNo: %@"

void FUN_00e08fe0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t *arg1;
  void*puVar10;
  double dVar11;
  double local_b0;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    puVar6 = (void*)0x0;
  }
  else {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    puVar10 = g_02785148;
    if (g_02785148 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(void*)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e09198:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0919e:
          if (local_58 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e09198;
          }
          if ((char)local_50 == '\0') goto LAB_00e091b1;
          goto LAB_00e0919e;
        }
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e091b1:
    if (puVar10 == (void*)0x0) {
      puVar9 = (void*)0x0;
      puVar10 = (void*)0x0;
      goto joined_r0x00e094fe;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*arg1 != 0);
      puVar9 = local_58;
      if (local_58 != (void*)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (*arg1 != 0) {
          local_50 = 1;
          local_58 = &g_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &g_024c5048;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (void*)((dVar11 - local_b0) * g_023907c0);
          local_50 = 1;
          local_58 = (void*)&g_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e094fe;
      }
    }
  }
  puVar9 = (void*)0x0;
joined_r0x00e094fe:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e08490
// ============================================================
// Function: FUN_00e08490
// Address: 00e08490
// Size: 1393 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "IOPlatformExpertDevice"
//   "UUID: %@"

void FUN_00e08490(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  void*puVar9;
  int64_t *arg1;
  void*puVar10;
  double dVar11;
  double local_b0;
  void*local_88;
  char local_80;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint local_50;
  void*local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    puVar6 = (void*)0x0;
  }
  else {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*g_02572370)();
    puVar10 = g_02785140;
    if (g_02785140 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(void*)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e08648:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0864e:
          if (local_58 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (void*)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e08648;
          }
          if ((char)local_50 == '\0') goto LAB_00e08661;
          goto LAB_00e0864e;
        }
        if (puVar9 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e08661:
    if (puVar10 == (void*)0x0) {
      puVar9 = (void*)0x0;
      puVar10 = (void*)0x0;
      goto joined_r0x00e089ae;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*arg1 != 0);
      puVar9 = local_58;
      if (local_58 != (void*)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (*arg1 != 0) {
          local_50 = 1;
          local_58 = &g_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &g_024c5048;
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (void*)((dVar11 - local_b0) * g_023907c0);
          local_50 = 1;
          local_58 = (void*)&g_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (void*)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (void*)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (void*)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e089ae;
      }
    }
  }
  puVar9 = (void*)0x0;
joined_r0x00e089ae:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e05070
// ============================================================
// Function: FUN_00e05070
// Address: 00e05070
// Size: 1314 bytes
// Class: GNDistinction

void FUN_00e05070(void)

{
  int64_t lVar1;
  uint uVar2;
  uint *arg1;
  uint *this_ptr;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *this_ptr;
  uVar2 = this_ptr[1];
  uVar4 = this_ptr[2];
  uVar3 = *arg1 +
          (~uVar2 & this_ptr[3]) + this_ptr[4] + (uVar2 & uVar4) + (uVar9 << 5 | uVar9 >> 0x1b) +
          0x5a827999;
  uVar2 = uVar2 << 0x1e | uVar2 >> 2;
  uVar10 = arg1[1] +
           (~uVar9 & uVar4) + this_ptr[3] + (uVar9 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
           0x5a827999;
  uVar5 = uVar9 << 0x1e | uVar9 >> 2;
  uVar9 = arg1[2];
  uVar6 = uVar9 + (~uVar3 & uVar2) + uVar4 + (uVar3 & uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar2 = arg1[3] +
          (~uVar10 & uVar5) + uVar2 + (uVar10 & uVar4) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar8 = arg1[4] +
          (~uVar6 & uVar4) + uVar5 + (uVar6 & uVar10) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar3 = arg1[5] +
          (~uVar2 & uVar10) + uVar4 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar10 = arg1[6] +
           (~uVar8 & uVar5) + uVar10 + (uVar8 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x5a827999
  ;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar4 = arg1[7] +
          (~uVar3 & uVar2) + uVar5 + (uVar3 & uVar8) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x5a827999
  ;
  uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar5 = arg1[8] +
          (~uVar10 & uVar8) + uVar2 + (uVar10 & uVar6) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar2 = arg1[9] +
          (~uVar4 & uVar6) + uVar8 + (uVar4 & uVar10) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999;
  uVar3 = uVar4 * 0x40000000 | uVar4 >> 2;
  uVar6 = arg1[10] +
          (~uVar5 & uVar10) + uVar6 + (uVar5 & uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = arg1[0xb] +
          (~uVar2 & uVar3) + uVar10 + (uVar2 & uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999;
  uVar3 = (~uVar6 & uVar5) + uVar3 + (uVar6 & uVar4) + (uVar2 * 0x20 | uVar2 >> 0x1b) +
          arg1[0xc] + 0x5a827999;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar7 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = (~uVar2 & uVar4) + uVar5 + (uVar2 & uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          arg1[0xd] + 0x5a827999;
  uVar5 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar8 = arg1[0xe] +
          (~uVar3 & uVar10) + uVar4 + (uVar3 & uVar7) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar6 = *arg1 ^ uVar9 ^ arg1[8] ^ arg1[0xd];
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar3 = arg1[0xf] +
          (~uVar2 & uVar7) + uVar10 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar10 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar8 = uVar6 + (~uVar8 & uVar5) + uVar7 + (uVar8 & uVar4) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          0x5a827999;
  arg1[0x10] = uVar6;
  uVar2 = arg1[9] ^ arg1[0xe] ^ arg1[3] ^ arg1[1];
  uVar7 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  arg1[0x11] = uVar7;
  uVar9 = arg1[10] ^ arg1[0xf] ^ arg1[4] ^ uVar9;
  uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar5 = uVar7 + (~uVar3 & uVar4) + uVar5 + (uVar3 & uVar10) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
          0x5a827999;
  arg1[0x12] = uVar9;
  uVar9 = uVar9 + (~uVar8 & uVar10) + uVar4 + (uVar8 & uVar2) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar3 = uVar6 ^ arg1[0xb] ^ arg1[5] ^ arg1[3];
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  arg1[0x13] = uVar3;
  lVar1 = 0;
  uVar3 = (~uVar5 & uVar2) + uVar10 + (uVar5 & uVar4) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar3 +
          0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  do {
    uVar8 = uVar5;
    uVar10 = uVar3;
    uVar6 = uVar4;
    uVar4 = arg1[lVar1 + 0xc] ^ arg1[lVar1 + 0x11] ^ arg1[lVar1 + 6] ^
            arg1[lVar1 + 4];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    arg1[lVar1 + 0x14] = uVar4;
    uVar3 = uVar4 + (uVar8 ^ uVar6 ^ uVar9) + uVar2 + (uVar10 << 5 | uVar10 >> 0x1b) + 0x6ed9eba1;
    uVar5 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar2 = uVar6;
    uVar9 = uVar10;
    uVar4 = uVar8;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar4 = uVar5;
    uVar2 = uVar3;
    uVar9 = uVar8;
    uVar3 = arg1[lVar1 + 0x20] ^ arg1[lVar1 + 0x25] ^ arg1[lVar1 + 0x1a] ^
            arg1[lVar1 + 0x18];
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    arg1[lVar1 + 0x28] = uVar3;
    uVar3 = uVar3 + (uVar4 & uVar9 | (uVar4 | uVar9) & uVar10) + uVar6 +
                    (uVar2 << 5 | uVar2 >> 0x1b) + 0x8f1bbcdc;
    uVar5 = uVar10 << 0x1e | uVar10 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar9;
    uVar10 = uVar2;
    uVar8 = uVar4;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar10 = uVar5;
    uVar6 = uVar3;
    uVar8 = uVar4;
    uVar4 = arg1[lVar1 + 0x34] ^ arg1[lVar1 + 0x39] ^ arg1[lVar1 + 0x2e] ^
            arg1[lVar1 + 0x2c];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    arg1[lVar1 + 0x3c] = uVar4;
    uVar3 = uVar4 + (uVar10 ^ uVar8 ^ uVar2) + uVar9 + (uVar6 << 5 | uVar6 >> 0x1b) + 0xca62c1d6;
    uVar5 = uVar2 << 0x1e | uVar2 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar8;
    uVar2 = uVar6;
    uVar4 = uVar10;
  } while (lVar1 != 0x14);
  *this_ptr = uVar3 + *this_ptr;
  this_ptr[1] = uVar6 + this_ptr[1];
  this_ptr[2] = uVar5 + this_ptr[2];
  this_ptr[3] = uVar10 + this_ptr[3];
  this_ptr[4] = this_ptr[4] + uVar8;
  return;
}



// ============================================================
// 00e07ae0
// ============================================================
// Function: FUN_00e07ae0
// Address: 00e07ae0
// Size: 1296 bytes
// Class: GNDistinction
// String references:
//   "Duration: %f ms"
//   "OSVersion: %f"
//   "operatingSystemVersion"

void FUN_00e07ae0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  int iVar7;
  int64_t *arg1;
  uint64_t uVar8;
  uint64_t uVar9;
  void*puVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  double dVar11;
  uint64_t uVar12;
  double local_b0;
  void*local_88;
  char local_80;
  void*local_78;
  uint local_70;
  double local_68;
  void*local_60;
  char local_58;
  void*local_50;
  void*local_48;
  uint local_40;
  double local_38;
  
  FUN_00d8ede0();
  puVar10 = local_48;
  if (((char)local_40 == '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  local_50 = puVar10;
  if (lVar1 == 0) {
    puVar3 = (void*)0x0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    puVar10 = g_027850e8;
    if (g_027850e8 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  lVar4 = (*PTR__objc_msgSend_024a9998)();
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_operatingSystemVersion_026c94b0);
    uVar5 = (uint64_t)local_48 & 0xffffffff;
    uVar9 = (uint64_t)local_38 & 0xffffffff;
    uVar8 = (uint64_t)local_40 << 0x20;
  }
  FUN_00e08370(0x42,0x30,uVar8 | uVar5,uVar9);
  puVar2 = local_50;
  puVar10 = local_78;
  if (local_50 == local_78) {
    puVar10 = local_50;
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
      puVar10 = local_50;
    }
  }
  else if ((char)local_70 == '\0') {
    if (local_78 != (void*)0x0) {
      FUN_00d50b00();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else if (local_50 != (void*)0x0) {
    FUN_00d50b20();
  }
  local_40 = local_40 & 0xffffff00;
  local_48 = puVar10;
  FUN_00d21140();
  if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    local_50 = puVar10;
    lVar4 = (*PTR__objc_msgSend_024a9998)();
    if (lVar4 == 0) {
      uVar6 = 0;
      dVar11 = 0.0;
      local_38._0_4_ = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_operatingSystemVersion_026c94b0);
      dVar11 = (double)(int)local_48;
      uVar6 = local_40;
      if (0x3e6 < (int)local_40) {
        uVar6 = 999;
      }
    }
    iVar7 = 999;
    if (local_38._0_4_ < 999) {
      iVar7 = local_38._0_4_;
    }
    local_68 = (double)iVar7 * g_023d7d68 + (double)(int)uVar6 * g_02391038 + dVar11;
    local_70 = 1;
    local_78 = &g_024de5e0;
    FUN_00d8cb40(iVar7,&local_78);
    puVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    dVar11 = (double)FUN_00e7d6f0();
    local_38 = (dVar11 - local_b0) * g_023907c0;
    local_40 = 1;
    local_48 = &g_024de5e0;
    FUN_00d8cb40(local_38,&local_48);
    puVar10 = local_50;
    puVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = puVar2;
    local_70 = local_70 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_00d92220();
    local_88 = local_60;
    local_80 = 0;
    if (local_58 == '\0') {
      if (local_60 != (void*)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_80 = '\x01';
    FUN_00d95130(uVar12,&local_88);
    puVar2 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    local_48 = puVar2;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((lVar1 != 0) && (puVar3 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00e0c660
// ============================================================
// Function: FUN_00e0c660
// Address: 00e0c660
// Size: 1039 bytes
// Class: GNDistinction

uint64_t FUN_00e0c660(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char *pcVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98 [8];
  int64_t local_90;
  int local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  FUN_00c9fe20();
  lVar1 = local_a0;
  pcVar4 = &local_50;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_50 = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_60;
  local_78 = '\x01';
  local_80 = lVar1;
  FUN_0009d720();
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    local_98[0] = '\0';
    local_a0 = 0;
    local_90 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
    local_88 = 0;
    if (0 < *(int *)(local_90 + 0xc)) {
      do {
        local_a0 = *(int64_t *)(*(int64_t *)(local_90 + 0x10) + (int64_t)local_88 * 8);
        FUN_00e0baf0((int64_t)local_88,&local_a0);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00e0c800;
          }
LAB_00e0ca66:
          if ((local_98[0] != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = 0;
          if (local_58 == 0) goto LAB_00e0ca11;
          goto LAB_00e0ca0c;
        }
        if (local_40 == 0) goto LAB_00e0ca66;
LAB_00e0c800:
        FUN_00e0baf0();
        local_68 = 0;
        lVar1 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        lVar5 = local_60;
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_00e0cdb0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e0cdb0();
        lVar2 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar2;
        cVar3 = FUN_00d7aa00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_40 = local_a0;
          local_38 = '\0';
          FUN_00d23f50();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar3 == '\0') goto LAB_00e0ca66;
        local_88 = local_88 + 1;
      } while (local_88 < *(int *)(local_90 + 0xc));
    }
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((uint64_t)lVar5 >> 8),*(int *)(local_58 + 0xc) == 0);
LAB_00e0ca0c:
  FUN_00d50b20();
LAB_00e0ca11:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}



// ============================================================
// 00e0cea0
// ============================================================
// Function: FUN_00e0cea0
// Address: 00e0cea0
// Size: 749 bytes
// Class: GNDistinction

uint64_t FUN_00e0cea0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  char cVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t unaff_R14;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = *(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10);
    local_80 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      do {
        local_98 = *(int64_t *)(*(int64_t *)(local_88 + 0x10) + (int64_t)local_80 * 8);
        uVar6 = FUN_00e0baf0((int64_t)local_80,&local_98);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar6 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar6 = FUN_00d50b20();
            }
            goto LAB_00e0cfa0;
          }
        }
        else if (local_40 != 0) {
LAB_00e0cfa0:
          FUN_00e0baf0(uVar6,&local_98);
          lVar2 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_78 = lVar2;
          local_70 = '\0';
          FUN_00e0cdb0();
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          local_68 = lVar1;
          local_60 = '\0';
          FUN_00e0cdb0();
          unaff_R14 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = unaff_R14;
          local_38 = '\0';
          FUN_00d7ab40();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_R14 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = FUN_00c8d620();
          cVar4 = '\x03';
          if ((double)*(int *)(lVar2 + 0xc) * g_023942d0 <= (double)iVar3) {
            iVar3 = FUN_00c8d620();
            cVar4 = ((double)iVar3 < (double)*(int *)(lVar1 + 0xc) * g_023942d0) * '\x02' + '\x01'
            ;
          }
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          if (cVar4 != '\x03') {
            if (local_90 == '\0') goto LAB_00e0d18d;
            goto LAB_00e0d17c;
          }
        }
        local_80 = local_80 + 1;
      } while (local_80 < *(int *)(local_88 + 0xc));
    }
    cVar4 = '\x02';
    if (local_90 != '\0') {
LAB_00e0d17c:
      if (local_98 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e0d18d:
    uVar5 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    if (cVar4 != '\x02') goto LAB_00e0d198;
  }
  uVar5 = 0;
LAB_00e0d198:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}



// ============================================================
// 00e045e0
// ============================================================
// Function: FUN_00e045e0
// Address: 00e045e0
// Size: 500 bytes
// Class: GNDistinction
// String references:
//   "GNDistinction"

void FUN_00e045e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02585398;
  FUN_00e04820();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_02784cf3 == '\0') {
    FUN_00e04aa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02784cf3 == '\0') {
    FUN_00e04c10();
    FUN_00e87980();
  }
  FUN_00e04d80();
  return;
}

