// Function: FUN_00b8a050
// Address: 00b8a050
// Size: 5837 bytes
// Class: GNFilePath
// String references:
//   "%@.%I"
//   ".%I"

void* FUN_00b8a050(void*param_1,int64_t *param_2,uint64_t param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int64_t lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  void*puVar11;
  int64_t *plVar12;
  void*arg1;
  void*this_ptr;
  int64_t *plVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  code *local_1d0;
  int64_t local_120;
  char local_118;
  int64_t *local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_70;
  void*local_68;
  void*local_50;
  int64_t *local_40;
  
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  FUN_00d8a060();
  FUN_00d8ed10();
  local_c0 = local_a8;
  if ((local_a0 == '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 == 0) {
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    FUN_00d8a060();
    plVar13 = (int64_t *)*param_2;
    if (plVar13 == local_a8) {
      if (((char)param_2[1] == '\0') && (local_a8 != (int64_t *)0x0)) {
        FUN_00d50b00();
        goto LAB_00b8a5ab;
      }
    }
    else {
      lVar7 = param_2[1];
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (int64_t)local_a8;
      if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00b8a5ab:
      *(void*)(param_2 + 1) = 1;
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_a8 == (int64_t *)0x0) {
LAB_00b8a2d8:
    bVar4 = false;
  }
  else {
    FUN_00b7ace0();
    if ((local_118 == '\0') && (local_120 != 0)) {
      FUN_00d50b00();
    }
    FUN_00df2130();
    cVar8 = FUN_00d23d70();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_120 != 0) {
      FUN_00d50b20();
    }
    if (cVar8 != '\0') goto LAB_00b8a2d8;
    local_c0 = (int64_t *)0x0;
    FUN_00d50b20();
    bVar4 = true;
  }
  bVar6 = false;
  FUN_00d8ed10();
  if (local_a8 == (int64_t *)0x0) {
    bVar14 = local_c0 == (int64_t *)0x0;
    bVar2 = true;
    lVar7 = g_02764250;
  }
  else {
    FUN_00d50b00();
    if (local_c0 == (int64_t *)0x0) {
      bVar14 = true;
    }
    else {
      iVar10 = FUN_00d92590();
      if (iVar10 == 0) {
        FUN_00d8c7a0();
        FUN_00d8c7a0();
        FUN_00d97ce0();
        plVar13 = (int64_t *)*param_2;
        if (plVar13 == local_a8) {
          if (((char)param_2[1] == '\0') && (local_a8 != (int64_t *)0x0)) {
            FUN_00d50b00();
            goto LAB_00b8a5f9;
          }
        }
        else {
          lVar7 = param_2[1];
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *param_2 = (int64_t)local_a8;
          if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_00b8a5f9:
          *(void*)(param_2 + 1) = 1;
        }
        bVar2 = false;
        bVar14 = false;
        lVar7 = g_02764250;
        goto joined_r0x00b8a63c;
      }
      bVar14 = false;
    }
    bVar2 = false;
    lVar7 = g_02764250;
  }
joined_r0x00b8a63c:
  g_02764250 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d8f400();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  lVar7 = g_02764260;
  local_70 = g_02764250;
  if (cVar8 == '\0') {
    if (g_02764260 != 0) {
      FUN_00d50b00();
    }
    cVar8 = FUN_00d8f400();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    local_70 = g_02764260;
    lVar7 = g_02764258;
    if (cVar8 == '\0') {
      if (g_02764258 != 0) {
        FUN_00d50b00();
      }
      cVar8 = FUN_00d8f400();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      lVar7 = g_02764268;
      local_70 = g_02764258;
      if (cVar8 == '\0') {
        if (g_02764268 != 0) {
          FUN_00d50b00();
        }
        cVar8 = FUN_00d8f400();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        local_70 = g_02764268;
        if (cVar8 == '\0') {
          bVar15 = false;
          local_70 = 0;
        }
        else {
          if (g_02764268 != 0) {
            FUN_00d50b00();
          }
          bVar15 = local_70 != 0;
          FUN_00d8c7a0();
          FUN_00d97ce0();
          plVar13 = (int64_t *)*param_2;
          if (plVar13 == local_a8) {
            if (((char)param_2[1] != '\0') || (local_a8 == (int64_t *)0x0)) goto LAB_00b8ab10;
            FUN_00d50b00();
          }
          else {
            lVar7 = param_2[1];
            if (local_a8 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            *param_2 = (int64_t)local_a8;
            if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          *(void*)(param_2 + 1) = 1;
        }
      }
      else {
        if (g_02764258 != 0) {
          FUN_00d50b00();
        }
        bVar15 = local_70 != 0;
        FUN_00d8c7a0();
        FUN_00d97ce0();
        plVar13 = (int64_t *)*param_2;
        if (plVar13 == local_a8) {
          if (((char)param_2[1] != '\0') || (local_a8 == (int64_t *)0x0)) goto LAB_00b8ab10;
          FUN_00d50b00();
        }
        else {
          lVar7 = param_2[1];
          if (local_a8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *param_2 = (int64_t)local_a8;
          if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        *(void*)(param_2 + 1) = 1;
      }
    }
    else {
      if (g_02764260 != 0) {
        FUN_00d50b00();
      }
      bVar15 = local_70 != 0;
      FUN_00d8c7a0();
      FUN_00d97ce0();
      plVar13 = (int64_t *)*param_2;
      if (plVar13 == local_a8) {
        if (((char)param_2[1] != '\0') || (local_a8 == (int64_t *)0x0)) goto LAB_00b8ab10;
        FUN_00d50b00();
      }
      else {
        lVar7 = param_2[1];
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_2 = (int64_t)local_a8;
        if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(param_2 + 1) = 1;
    }
  }
  else {
    if (g_02764250 != 0) {
      FUN_00d50b00();
    }
    bVar15 = local_70 != 0;
    FUN_00d8c7a0();
    FUN_00d97ce0();
    plVar13 = (int64_t *)*param_2;
    if (plVar13 == local_a8) {
      if (((char)param_2[1] != '\0') || (local_a8 == (int64_t *)0x0)) goto LAB_00b8ab10;
      FUN_00d50b00();
    }
    else {
      lVar7 = param_2[1];
      if (local_a8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (int64_t)local_a8;
      if (((char)lVar7 != '\0') && (plVar13 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(param_2 + 1) = 1;
  }
LAB_00b8ab10:
  cVar8 = FUN_00d8ca50();
  if ((cVar8 == '\0') && (cVar8 = FUN_00d8ca50(), cVar8 == '\0')) {
    local_1d0 = g_025795c0;
    bVar5 = true;
    local_68 = (void*)0x0;
    goto LAB_00b8ac73;
  }
  local_68 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *local_68 = &g_025795a8;
  local_1d0 = g_025795c0;
  (*g_025795c0)();
  FUN_00d8dbf0();
  FUN_00d8e500();
  FUN_00d8e500();
  puVar11 = (void*)*param_2;
  lVar7 = param_2[1];
  if (puVar11 == local_68) {
    if ((char)lVar7 == '\0') {
      FUN_00d50b00();
      goto LAB_00b8ac33;
    }
  }
  else {
    FUN_00d50b00();
    *param_2 = (int64_t)local_68;
    if (((char)lVar7 != '\0') && (puVar11 != (void*)0x0)) {
      FUN_00d50b20();
    }
LAB_00b8ac33:
    *(void*)(param_2 + 1) = 1;
  }
  bVar5 = false;
LAB_00b8ac73:
  iVar10 = 0;
  bVar1 = false;
  local_50 = (void*)0x0;
  bVar3 = false;
  local_40 = (int64_t *)0x0;
  cVar8 = '\0';
  do {
    plVar13 = (int64_t *)*param_1;
    plVar12 = local_40;
    if (plVar13 != (int64_t *)0x0) {
      if (iVar10 == 0) {
        cVar9 = *(char *)(param_1 + 1);
        if (plVar13 == local_40) {
          if ((cVar9 != '\0') && (cVar8 == '\0')) {
            cVar8 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if (cVar9 != '\0') {
            FUN_00d50b00();
          }
          bVar16 = cVar8 != '\0';
          plVar12 = plVar13;
          cVar8 = cVar9;
          if ((bVar16) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto joined_r0x00b8b55f;
      }
      bVar6 = true;
      FUN_00d50b00();
      FUN_00d8cb40();
      if (local_b8 == local_40) {
        cVar9 = cVar8;
        if ((cVar8 == '\0') && (local_b8 != (int64_t *)0x0)) {
          if (local_b0 != '\0') goto LAB_00b8af0c;
          FUN_00d50b00();
LAB_00b8b138:
          cVar9 = '\x01';
        }
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_b0 == '\0') {
        if (local_b8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        cVar9 = '\x01';
        if (cVar8 == '\0') {
          local_40 = local_b8;
        }
        else {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            local_40 = local_b8;
            goto LAB_00b8b138;
          }
          local_40 = local_b8;
        }
      }
      else {
        plVar12 = local_b8;
        if ((cVar8 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b8af0c:
        local_b0 = '\0';
        cVar9 = '\x01';
        local_40 = plVar12;
      }
      local_a8 = &g_024c5048;
      plVar12 = local_40;
      cVar8 = cVar9;
      if (plVar13 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto joined_r0x00b8b55f;
    }
    if (iVar10 == 0) {
      FUN_00d8ede0();
      if (local_a8 == local_40) {
        if ((cVar8 != '\0') || (local_40 == (int64_t *)0x0)) goto joined_r0x00b8b542;
        cVar8 = '\x01';
        if (!bVar6) {
          FUN_00d50b00();
          plVar13 = local_40;
          goto LAB_00b8b117;
        }
      }
      else if (bVar6) {
        cVar9 = '\x01';
        bVar16 = cVar8 != '\0';
        plVar12 = local_a8;
        cVar8 = cVar9;
        if ((bVar16) && (plVar12 = local_a8, local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar12 = local_a8;
        }
      }
      else {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar13 = local_a8;
        if ((cVar8 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b8b117:
        cVar8 = '\x01';
        local_40 = plVar13;
joined_r0x00b8b542:
        plVar12 = local_40;
        if ((bVar6) && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_b0 = '\x01';
      local_b8 = &g_024cc6f0;
      FUN_00d8cb40();
      if (local_a8 == local_40) {
        if ((cVar8 != '\0') || (local_40 == (int64_t *)0x0)) goto joined_r0x00b8b0c9;
        cVar8 = '\x01';
        if (!bVar6) {
          FUN_00d50b00();
          plVar13 = local_40;
          goto LAB_00b8b065;
        }
      }
      else if (bVar6) {
        cVar9 = '\x01';
        bVar16 = cVar8 != '\0';
        plVar12 = local_a8;
        cVar8 = cVar9;
        if ((bVar16) && (plVar12 = local_a8, local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar12 = local_a8;
        }
      }
      else {
        if (local_a8 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar13 = local_a8;
        if ((cVar8 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00b8b065:
        cVar8 = '\x01';
        local_40 = plVar13;
joined_r0x00b8b0c9:
        plVar12 = local_40;
        if ((bVar6) && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
joined_r0x00b8b55f:
    local_40 = plVar12;
    if (local_40 != (int64_t *)0x0) {
      FUN_00d8c7a0();
    }
    if (local_70 != 0) {
      FUN_00d8c7a0();
    }
    if (!bVar14) {
      FUN_00d8c7a0();
    }
    FUN_00d8c7a0();
    puVar11 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar11 = &g_025795a8;
    (*local_1d0)();
    if (puVar11 == local_50) {
      puVar11 = local_50;
      if (bVar3) {
        FUN_00d50b20();
        bVar16 = bVar3;
      }
      else {
        bVar16 = true;
      }
    }
    else {
      bVar16 = true;
      if ((bVar3) && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar3 = bVar16;
    local_50 = puVar11;
    FUN_00d97ce0();
    if (bVar6) {
      bVar6 = false;
    }
    else if (local_a8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_a8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d8dbf0();
    }
    if (local_70 != 0) {
      FUN_00d8dbf0();
    }
    if (!bVar14) {
      FUN_00d8db40();
      FUN_00d8dbf0();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    (**(code **)(*local_b8 + 0x400))();
    if (local_a8 == (int64_t *)0x0) {
      plVar13 = (int64_t *)0x0;
    }
    else {
      plVar13 = local_a8;
      if (bVar6) {
        bVar6 = false;
        bVar1 = true;
      }
      else {
        FUN_00d50b00();
        bVar1 = true;
      }
    }
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (param_4 == '\0') {
LAB_00b8b596:
      *(void*)(this_ptr + 1) = 0;
      if (!bVar1) {
        if (plVar13 == (int64_t *)0x0) {
          plVar13 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_00b8b5e9;
    }
    if (plVar13 != (int64_t *)0x0) {
      cVar9 = (**(code **)(*plVar13 + 0x398))();
      if ((cVar9 == '\0') && (cVar9 = (**(code **)(*plVar13 + 0x3a0))(), cVar9 == '\0'))
      goto LAB_00b8b596;
      if (bVar1) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 10000);
  *(void*)(this_ptr + 1) = 0;
  plVar13 = (int64_t *)0x0;
LAB_00b8b5e9:
  *this_ptr = plVar13;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar4 && !bVar14) {
    FUN_00d50b20();
  }
  if ((cVar8 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar15) && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (!bVar5 && local_68 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_50 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

