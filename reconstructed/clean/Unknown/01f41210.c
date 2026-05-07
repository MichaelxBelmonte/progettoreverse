// Function: FUN_01f41210
// Address: 01f41210
// Size: 2906 bytes
// Class: Unknown

int64_t * FUN_01f41210(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  bool bVar10;
  bool bVar11;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint local_b4;
  uint64_t local_b0;
  int64_t *local_a8;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*param_1 != 0) {
    local_f0 = '\0';
    local_f8 = *param_1;
    FUN_00df1bf0(*param_2,&local_f8);
    plVar8 = (int64_t *)*param_2;
    if (plVar8 == local_40) {
      if (((char)param_2[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01f41308;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01f41304;
      }
LAB_01f412ca:
      *(void*)(param_2 + 1) = 1;
      local_38 = '\0';
    }
    else {
      lVar7 = param_2[1];
      if (local_38 != '\0') {
        *param_2 = (int64_t)local_40;
        if (((char)lVar7 != '\0') && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f412ca;
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (int64_t)local_40;
      if (((char)lVar7 != '\0') && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01f41304:
      *(void*)(param_2 + 1) = 1;
LAB_01f41308:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((g_028ba828 != (void*)0x0) && (g_028ba831 != '\0')) goto LAB_01f418c9;
  FUN_00e8cb50();
  if (g_028ba828 != (void*)0x0) {
    g_028ba831 = '\x01';
    FUN_00e8cb70();
    goto LAB_01f418c9;
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  if (g_028ba828 == puVar5) {
    bVar1 = false;
    bVar11 = false;
  }
  else {
    bVar1 = true;
    bVar11 = true;
    bVar10 = g_028ba828 != (void*)0x0;
    g_028ba828 = puVar5;
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  if (g_028ba830 == '\0') {
    g_028ba830 = '\x01';
    FUN_00e8cb90();
    bVar11 = bVar1;
  }
  if (!bVar11) {
    FUN_00d50b20();
  }
  FUN_00d30620();
  FUN_00d305f0();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  (**(code **)(*arg1 + 0x618))();
  if (local_40 == (int64_t *)0x0) {
    bVar11 = true;
    plVar8 = (int64_t *)0x0;
    bVar1 = false;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar11 = false;
      bVar1 = true;
    }
    else {
      local_38 = '\0';
      bVar1 = true;
      bVar11 = false;
    }
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar11) {
    (**(code **)(*plVar8 + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d30660();
  FUN_00d305f0();
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  (**(code **)(*arg1 + 0x618))();
  if (local_40 == plVar8) {
    if ((bool)(bVar11 & local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01f41628;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_01f4167c:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = (bool)(bVar1 & plVar8 != (int64_t *)0x0);
      bVar1 = true;
      plVar8 = local_40;
      if (bVar11) {
        FUN_00d50b20();
      }
      goto LAB_01f4167c;
    }
    bVar11 = plVar8 != (int64_t *)0x0;
    plVar8 = local_40;
    if ((bool)(bVar1 & bVar11)) {
      FUN_00d50b20();
    }
LAB_01f41628:
    local_38 = '\0';
    bVar1 = true;
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*arg1 + 0x610))();
  if (local_40 == plVar8) {
    plVar9 = plVar8;
    bVar11 = bVar1;
    if ((!bVar1) && (local_40 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto joined_r0x01f417c8;
      FUN_00d50b00();
      bVar11 = true;
    }
LAB_01f4180b:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
    }
    else {
LAB_01f4182b:
      (**(code **)(*plVar9 + 1000))();
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38 = '\0';
      FUN_00d214d0();
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40 = local_50;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((bVar11) && (plVar9 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar11 = true;
      if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f4180b;
    }
    if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
joined_r0x01f417c8:
    bVar11 = true;
    if (plVar9 != (int64_t *)0x0) goto LAB_01f4182b;
  }
  g_028ba831 = '\x01';
  FUN_00e8cb70();
LAB_01f418c9:
  pcVar2 = g_02572370;
  local_b4 = 2 - (*(int *)(arg1[0x10] + 0xc) == 0);
  local_b0 = 0;
  if (*(int *)(arg1[0x10] + 0xc) == 0) goto LAB_01f41a50;
LAB_01f41920:
  if ((int)local_b0 != 0) goto LAB_01f41a50;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar2)();
  lVar7 = arg1[0x10];
  if (*(int *)(lVar7 + 0xc) < 1) goto LAB_01f41a68;
  lVar6 = 0;
  do {
    (**(code **)(**(int64_t **)(*(int64_t *)(lVar7 + 0x10) + lVar6 * 8) + 1000))();
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    local_38 = '\0';
    FUN_00d214d0();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar6 = lVar6 + 1;
    lVar7 = arg1[0x10];
  } while (lVar6 < *(int *)(lVar7 + 0xc));
  bVar11 = true;
  if (0 < *(int *)((int64_t)puVar5 + 0xc)) goto LAB_01f41a75;
LAB_01f41d18:
  do {
    do {
      FUN_00d50b20();
      if (!bVar11) {
        return this_ptr;
      }
      do {
        uVar4 = (int)local_b0 + 1;
        local_b0 = (uint64_t)uVar4;
        if (uVar4 == local_b4) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          return this_ptr;
        }
        if (*(int *)(arg1[0x10] + 0xc) != 0) goto LAB_01f41920;
LAB_01f41a50:
        puVar5 = g_028ba828;
      } while (g_028ba828 == (void*)0x0);
      FUN_00d50b00();
LAB_01f41a68:
      bVar11 = true;
    } while (*(int *)((int64_t)puVar5 + 0xc) < 1);
LAB_01f41a75:
    lVar7 = 0;
    do {
      plVar8 = *(int64_t **)(puVar5[2] + lVar7 * 8);
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar8 + 0x368))();
      local_e8 = *param_2;
      local_e0 = '\0';
      cVar3 = FUN_00d90eb0();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        (**(code **)(*plVar8 + 0x388))();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        local_d8 = *param_2;
        local_d0 = '\0';
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_00d8f1a0();
          local_c8 = *param_2;
          local_c0 = '\0';
          cVar3 = (**(code **)(*local_50 + 0x50))();
          if (cVar3 == '\0') {
            cVar3 = '\0';
          }
          else if (*param_1 == 0) {
            cVar3 = '\x01';
          }
          else {
            (**(code **)(*plVar8 + 0x370))();
            if (local_58 == '\0') {
              if (local_60 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_a8 = local_60;
            local_40 = local_60;
            local_38 = '\0';
            cVar3 = FUN_00d23d70();
            if (local_a8 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            FUN_00d50b20();
            goto LAB_01f41cc0;
          }
          *this_ptr = (int64_t)plVar8;
          *(void*)(this_ptr + 1) = 1;
          FUN_00d50b20();
        }
        else {
          *this_ptr = (int64_t)plVar8;
          *(void*)(this_ptr + 1) = 1;
          FUN_00d50b20();
        }
        bVar11 = false;
        goto LAB_01f41d18;
      }
LAB_01f41cc0:
      FUN_00d50b20();
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)puVar5 + 0xc));
    bVar11 = true;
  } while( true );
}

