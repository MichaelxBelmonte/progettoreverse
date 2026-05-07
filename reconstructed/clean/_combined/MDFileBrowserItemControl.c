// ===================================================================
// MDFileBrowserItemControl — Complete reconstructed pseudocode
// 4 functions
// ===================================================================


// ============================================================
// 00378ba0
// ============================================================
// Function: FUN_00378ba0
// Address: 00378ba0
// Size: 2665 bytes
// Class: MDFileBrowserItemControl

void FUN_00378ba0(void)

{
  int iVar1;
  code *pcVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  void*puVar6;
  void*puVar7;
  int64_t **pplVar8;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_68;
  char local_60;
  int local_50;
  int64_t *local_40;
  char local_38;
  
  plVar9 = local_68;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_68 + 0x450))();
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    FUN_0037c170();
    local_c8 = local_40;
    local_c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c0 = '\x01';
    FUN_0037c870();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_88 = local_68;
    FUN_01c19c80();
    FUN_01c19d80();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    FUN_0037c960();
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_d0 = local_68;
    if (local_68 != (int64_t *)0x0) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)plVar9 + 0xc) <= local_50) break;
        local_68 = *(int64_t **)(plVar9[2] + 8 + lVar5 * 8);
        local_40 = local_68;
        FUN_0038ad10();
        pplVar8 = (int64_t **)&g_02802688;
        if (local_68 != (int64_t *)0x0) {
          (**(code **)(*local_68 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar8 = &local_40;
          if (cVar4 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        if (*pplVar8 != (int64_t *)0x0) {
          FUN_01c0b7c0();
          plVar10 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_40 = plVar10;
          local_38 = '\0';
          cVar4 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar10 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            FUN_01c19c80();
            FUN_01c19e20();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_01c0b7c0();
            plVar10 = local_80;
            if (local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_78 = '\0';
            }
            local_40 = plVar10;
            local_38 = '\0';
            FUN_00d23f50();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
      }
      FUN_0038d270();
      plVar9 = local_88;
    }
    pcVar2 = g_02664d88;
    plVar10 = (int64_t *)0x0;
    if (plVar9 != (int64_t *)0x0) {
      local_60 = '\0';
      local_68 = (int64_t *)0x0;
      local_50 = -1;
      while( true ) {
        lVar5 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)((int64_t)plVar9 + 0xc) <= local_50) break;
        local_68 = *(int64_t **)(plVar9[2] + 8 + lVar5 * 8);
        puVar6 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &g_02664d70;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *(void*)((int64_t)puVar6 + 0x1d) = 0;
        *(void*)((int64_t)puVar6 + 0x25) = 0;
        (*pcVar2)();
        FUN_01c0b7f0();
        FUN_01c19c80();
        FUN_01c19db0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00115910();
      plVar10 = local_88;
    }
    FUN_0037ca50();
    if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01c19c80();
    FUN_01c19d80();
    local_a0 = 0;
    if (local_60 == '\0') {
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_a0 = '\x01';
    local_a8 = local_68;
    FUN_01c23a60();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0037cca0();
    FUN_01c19c80();
    FUN_01c19d80();
    iVar1 = *(int *)((int64_t)local_68 + 0xc);
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)this_ptr[0x2b];
    if (iVar1 == 0) {
      if (plVar9 == (int64_t *)0x0) {
        puVar7 = (void*)FUN_00e8fc40();
        FUN_0006daf0();
        *(void*)(puVar7 + 0x27) = 0;
        puVar7[0x2e] = 0;
        *(void*)(puVar7 + 0x2f) = 0;
        puVar7[0x30] = 0;
        *(void*)(puVar7 + 0x31) = 0;
        puVar7[0x28] = 0;
        puVar7[0x29] = 0;
        *(void*)(puVar7 + 0x2a) = 0;
        puVar7[0x2b] = 0;
        puVar7[0x2c] = 0;
        *(void*)((int64_t)puVar7 + 0x165) = 0;
        *(void*)((int64_t)puVar7 + 0x18c) = 0;
        *(void*)((int64_t)puVar7 + 0x194) = 0;
        *(void*)((int64_t)puVar7 + 0x199) = 0;
        puVar7[0x35] = 0;
        puVar7[0x36] = 0;
        puVar7[0x37] = 0;
        puVar7[0x38] = 0;
        *puVar7 = &g_02683800;
        puVar7[2] = &g_026842c8;
        puVar7[0x39] = 0;
        puVar7[0x3a] = 0;
        (*g_02683818)();
        puVar6 = (void*)this_ptr[0x2b];
        if (puVar6 == puVar7) {
          FUN_00d50b20();
        }
        else {
          this_ptr[0x2b] = (int64_t)puVar7;
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        lVar5 = g_026f6f70;
        plVar9 = (int64_t *)this_ptr[0x2b];
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar3 = g_02704018;
        if (g_02704018 != 0) {
          FUN_00d50b00();
        }
        local_100 = lVar3;
        local_f8 = '\x01';
        local_f0 = 0;
        local_e8 = '\0';
        FUN_00d31230(&local_f0,&local_100);
        local_90 = 0;
        if (local_60 == '\0') {
          if (local_68 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_90 = '\x01';
        local_98 = local_68;
        (**(code **)(*plVar9 + 0x968))();
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x9c8))();
        plVar9 = (int64_t *)this_ptr[0x2b];
        FUN_01e3f820();
        (**(code **)(*plVar9 + 0x4d0))();
        (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x558))();
        plVar9 = (int64_t *)this_ptr[0x1d];
        local_d8 = 0;
        local_e0 = this_ptr[0x2b];
        if (local_e0 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        (**(code **)(*plVar9 + 0x450))();
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if (plVar9 != (int64_t *)0x0) {
      (**(code **)(*plVar9 + 0x478))();
      FUN_00d50130();
      if (this_ptr[0x2b] != 0) {
        this_ptr[0x2b] = 0;
        FUN_00d50b20();
      }
    }
    plVar9 = (int64_t *)this_ptr[2];
    (**(code **)(*this_ptr + 0x698))();
    (**(code **)(*plVar9 + 0x9b8))();
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_d0 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00378020
// ============================================================
// Function: FUN_00378020
// Address: 00378020
// Size: 1687 bytes
// Class: MDFileBrowserItemControl

void FUN_00378020(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  void*puVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_01e534b0();
  FUN_01c21680();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(void*)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(void*)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(void*)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(void*)((int64_t)puVar5 + 0x165) = 0;
  *(void*)((int64_t)puVar5 + 0x18c) = 0;
  *(void*)((int64_t)puVar5 + 0x194) = 0;
  *(void*)((int64_t)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *(void*)((int64_t)puVar5 + 0x1c1) = 0;
  *(void*)((int64_t)puVar5 + 0x1c9) = 0;
  puVar5[0x3c] = 0;
  *(void*)(puVar5 + 0x3d) = 0;
  puVar5[0x3e] = 0;
  *(void*)(puVar5 + 0x3f) = 0;
  *puVar5 = &g_024ebea8;
  puVar5[2] = &g_024eca78;
  puVar5[0x3b] = &g_024ecab8;
  puVar5[0x40] = 0;
  FUN_00d500e0();
  FUN_01c23100();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_01c21100();
  FUN_01c21610();
  FUN_01c215e0();
  (**(code **)(*(int64_t *)(this_ptr + 0xd0) + 0x10))();
  FUN_00d50b00();
  FUN_01c216a0();
  if ((int64_t *)(this_ptr + 0xd0) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0xd0) + 0x10))();
    FUN_00d50b20();
  }
  lVar2 = g_02703fc8;
  if (g_02703fc8 != 0) {
    FUN_00d50b00();
  }
  FUN_01c25a20();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25a80();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02703fd0;
  if (g_02703fd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c23160();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01c25980();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00378ba0();
  if (*(int64_t *)(this_ptr + 0x100) != 0) {
    FUN_01d6f8d0();
    plVar1 = *(int64_t **)(this_ptr + 0x100);
    FUN_00379d20();
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pplVar7 = &local_38;
  FUN_01f27fe0();
  plVar1 = local_38;
  FUN_003708c0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_00378411;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_00378411:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    plVar6 = (int64_t *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar6 + 0x18))();
    lVar2 = *(int64_t *)(this_ptr + 0xd8);
    *(int64_t **)(this_ptr + 0xd8) = plVar6;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar6 = *(int64_t **)(this_ptr + 0xd8);
    }
    (**(code **)(*plVar1 + 0x7b0))();
    plVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*plVar6 + 0x3b8))();
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    cVar4 = (**(code **)(*local_38 + 0x390))();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0xd8) + 0x368))();
    }
    (**(code **)(*plVar1 + 0x7b0))();
    lVar2 = *(int64_t *)(this_ptr + 0xd8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01257a80();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01c26ac0();
  plVar6 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4060();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01c26ac0();
    (**(code **)(*local_48 + 0x7b0))();
    FUN_01cf4120();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00379f30();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00377800
// ============================================================
// Function: FUN_00377800
// Address: 00377800
// Size: 1029 bytes
// Class: MDFileBrowserItemControl

void FUN_00377800(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  int64_t local_58;
  char local_50;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_00b7ace0();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d214d0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b6ff00();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d23480();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (int64_t *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_01c10e50();
  lVar1 = g_02703fb8;
  if (g_02703fb8 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  plVar3 = (int64_t *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_017a52b0();
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  FUN_01c10de0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02703fc0;
  if (g_02703fc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  plVar3 = (int64_t *)FUN_0038ca80();
  (**(code **)(*plVar3 + 0x18))();
  FUN_01552cd0();
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  FUN_01c10de0();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_02703fc0;
  if (g_02703fc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01c1add0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01c1ae70();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00377230
// ============================================================
// Function: FUN_00377230
// Address: 00377230
// Size: 863 bytes
// Class: MDFileBrowserItemControl
// String references:
//   "MDFileBrowserItemControl"

void FUN_00377230(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_278;
  int64_t local_260;
  int64_t local_240;
  
  if ((g_02704240 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02704190 = FUN_0038a820();
    g_02704178 = "MDFileBrowserItemControl";
    g_02704180 = 0x208;
    g_02704188 = FUN_0038a720;
    g_02704198 = 0;
    ram_00000000027041a0 = 0;
    g_027041a8 = 0;
    ram_00000000027041b0 = 0;
    g_027041b8 = 0;
    ram_00000000027041c0 = 0;
    g_027041c8 = 0;
    ram_00000000027041d0 = 0;
    g_027041d8 = 0;
    ram_00000000027041e0 = 0;
    g_027041e8 = 0;
    ram_00000000027041f0 = 0;
    g_027041f8 = 0;
    ram_0000000002704200 = 0;
    g_02704208 = 0;
    ram_0000000002704210 = 0;
    g_02704218 = 0;
    ram_0000000002704220 = 0;
    g_02704228 = 0;
    _ram_0000000002704230 = 0;
    g_02704238 = 0;
    ___cxa_guard_release();
  }
  if (g_02704233 == '\0') {
    FUN_0038c010();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0038c320();
    FUN_0038c790();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_240 != 0) {
      FUN_00d50b20();
    }
    if (local_260 != 0) {
      FUN_00d50b20();
    }
    if (local_278 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

