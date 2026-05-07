// Function: FUN_01321ae0
// Address: 01321ae0
// Size: 2224 bytes
// Class: Unknown

void FUN_01321ae0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  int64_t **pplVar11;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  cVar3 = FUN_00b79960();
  if (cVar3 == '\0') {
    return;
  }
  (**(code **)(*g_028acd10 + 0x368))();
  FUN_00d6f370();
  lVar7 = g_027bf450;
  if (g_027bf450 != 0) {
    FUN_00d50b00();
  }
  local_110 = 0;
  local_108 = '\0';
  pplVar11 = &local_58;
  FUN_00d704d0(&local_110);
  plVar9 = local_58;
  FUN_00053ac0();
  if (plVar9 == (int64_t *)0x0) {
LAB_01321b9b:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01321b9b;
  }
  plVar9 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = plVar9;
  if (plVar9 == (int64_t *)0x0) {
    local_a0 = 0x280000000;
  }
  else {
    iVar5 = FUN_00d45870();
    local_a0 = (int64_t)iVar5 << 0x1e;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  local_80 = puVar6;
  FUN_013933d0();
  plVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) goto LAB_01322373;
    FUN_00d50b00();
  }
  else if (local_58 == (int64_t *)0x0) goto LAB_01322373;
  local_60 = plVar9;
  (**(code **)(*plVar9 + 1000))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01321cf2;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_01321cf2:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_68 = plVar1;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar5 = -local_40._4_4_;
        }
        else {
          iVar5 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar5);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar5 = 0;
        }
        local_40 = CONCAT44(iVar5,(int)local_40);
      }
      lVar7 = g_027bf478;
      lVar10 = (int64_t)(int)local_40;
      iVar5 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar5);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar5) break;
      plVar1 = *(int64_t **)(local_48[2] + 8 + lVar10 * 8);
      local_58 = plVar1;
      if (g_027bf478 != 0) {
        FUN_00d50b00();
      }
      local_100 = lVar7;
      local_f8 = '\x01';
      (**(code **)(*plVar1 + 0x400))();
      plVar1 = local_78;
      if (local_70 == '\0') {
        if (((local_78 != (int64_t *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
           (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_70 = '\0';
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*local_58 + 0x388))();
        lVar7 = g_02774da0;
        if (g_02774da0 != 0) {
          FUN_00d50b00();
        }
        local_f0 = lVar7;
        local_e8 = '\x01';
        cVar3 = FUN_00d90870();
        if (cVar3 == '\0') {
          bVar4 = (**(code **)(*plVar1 + 0x398))();
          bVar4 = bVar4 ^ 1;
        }
        else {
          bVar4 = 0;
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar4 != 0) {
          (**(code **)(*local_58 + 0x418))();
          (**(code **)(*local_58 + 0x410))();
        }
        FUN_00d50b20();
        plVar9 = local_60;
      }
    }
    FUN_00115910();
    FUN_00d50b20();
  }
  local_d8 = '\0';
  local_e0 = plVar9;
  lVar7 = FUN_01394e80();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a0 < lVar7) {
    (**(code **)(*plVar9 + 1000))();
    plVar9 = local_58;
    if ((((local_50 == '\0') && (local_58 != (int64_t *)0x0)) && (FUN_00d50b00(), local_50 != '\0')
        ) && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = plVar9;
    if (0 < *(int *)((int64_t)plVar9 + 0xc)) {
      lVar10 = 0;
      do {
        lVar2 = g_027bf478;
        plVar9 = *(int64_t **)(local_68[2] + lVar10 * 8);
        if (g_027bf478 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar2;
        local_c8 = '\x01';
        (**(code **)(*plVar9 + 0x400))();
        plVar9 = local_58;
        if (local_50 == '\0') {
          if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
             (local_58 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (int64_t *)0x0) {
          cVar3 = (**(code **)(*plVar9 + 0x398))();
          if (cVar3 != '\0') {
            local_c0 = plVar9;
            local_b8 = '\0';
            FUN_00ca94c0();
            plVar9 = local_58;
            if (local_50 == '\0') {
              if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
                 (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_50 = '\0';
            }
            if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar9 != (int64_t *)0x0) {
              local_50 = '\0';
              local_58 = plVar9;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              lVar2 = *(int64_t *)(local_68[2] + lVar10 * 8);
              local_88 = 0;
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              plVar9 = g_027bf460;
              local_88 = '\x01';
              local_90 = lVar2;
              if (g_027bf460 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              local_58 = plVar9;
              local_50 = '\0';
              FUN_00ca0840();
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((int64_t)local_68 + 0xc));
    }
    puVar6 = local_80;
    FUN_00d242c0();
    plVar9 = local_60;
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      lVar10 = 1;
      do {
        lVar2 = *(int64_t *)(local_80[2] + -8 + lVar10 * 8);
        local_60 = plVar9;
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        plVar9 = g_027bf460;
        if (g_027bf460 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        local_b0 = plVar9;
        local_a8 = '\x01';
        FUN_000175c0();
        plVar9 = local_58;
        if (local_58 == local_60) {
LAB_013222c0:
          if (local_50 != '\0') {
LAB_013222c6:
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (local_50 == '\0') {
            if (local_58 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b20();
              local_60 = plVar9;
              goto LAB_013222c0;
            }
            local_60 = plVar9;
            if (local_50 == '\0') goto LAB_013222d4;
            goto LAB_013222c6;
          }
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_50 = '\0';
          local_60 = plVar9;
        }
LAB_013222d4:
        plVar9 = local_60;
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar8 = (**(code **)(*plVar9 + 0x3b0))();
        (**(code **)(*plVar9 + 0x418))();
        (**(code **)(*plVar9 + 0x410))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (*(int *)((int64_t)local_80 + 0xc) <= lVar10) break;
        lVar7 = lVar7 - lVar8;
        lVar10 = lVar10 + 1;
      } while (local_a0 < lVar7);
      if (local_68 == (int64_t *)0x0) goto LAB_01322373;
    }
    FUN_00d50b20();
  }
LAB_01322373:
  (**(code **)(*g_028acd10 + 0x378))();
  puVar6 = local_80;
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = local_98;
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

