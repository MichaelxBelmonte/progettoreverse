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

