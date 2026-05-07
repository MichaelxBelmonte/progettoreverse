// ===================================================================
// GNBCFA — Complete reconstructed pseudocode
// 9 functions
// ===================================================================


// ============================================================
// 00cc9d90
// ============================================================
// Function: FUN_00cc9d90
// Address: 00cc9d90
// Size: 1902 bytes
// Class: GNBCFA

uint32_t FUN_00cc9d90(int64_t *param_1,uint64_t param_2,uint64_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    return 0;
  }
  plVar7 = (int64_t *)(this_ptr + 0x18);
  cVar5 = FUN_00cc9bd0();
  local_58 = plVar7;
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  cVar5 = FUN_00daa980();
  if (cVar5 != '\0') {
    FUN_00daa970();
    cVar5 = FUN_00daaf60();
    if (cVar5 == '\0') goto LAB_00cca392;
    FUN_00daa970();
  }
  cVar5 = FUN_00daac70();
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  FUN_00daa9c0();
  local_48 = 0;
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *plVar6 = (int64_t)&g_0258cea8;
  *(void*)(plVar6 + 5) = 0;
  *(void*)((int64_t)plVar6 + 0x2c) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  (*g_0258cec0)();
  local_48 = '\x01';
  local_50 = plVar6;
  uVar8 = FUN_00e4b5a0();
  if (*param_4 != 0) {
    (**(code **)(*local_50 + 0x5e0))();
    local_c8 = (void*)*param_4;
    local_c0 = '\0';
    uVar8 = FUN_00ca1b70();
    if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    puVar3 = g_02774ad0;
    if (g_02774ad0 != (void*)0x0) {
      uVar8 = FUN_00d50b00();
    }
    local_138 = puVar3;
    local_130 = '\x01';
    uVar8 = FUN_000175c0(uVar8,&local_138);
    plVar7 = local_58;
    puVar3 = local_c8;
    if (local_c0 == '\0') {
      if (((local_c8 != (void*)0x0) && (uVar8 = FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_c0 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      local_128 = puVar3;
      local_120 = '\0';
      (**(code **)(*local_50 + 0x600))();
      if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x5e0))();
      puVar3 = g_02774ad0;
      if (g_02774ad0 != (void*)0x0) {
        FUN_00d50b00();
      }
      local_c8 = puVar3;
      local_c0 = '\0';
      FUN_00ca13a0();
      if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
  }
  local_118 = *param_1;
  local_110 = '\0';
  local_60 = 0;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar8 = FUN_00e45630(uVar8,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    lVar1 = g_02774ad8;
    if (g_02774ad8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = g_02774ae0;
    local_108 = lVar1;
    local_100 = '\x01';
    if (g_02774ae0 != 0) {
      FUN_00d50b00();
    }
    plVar7 = g_02774ae8;
    local_f8 = lVar4;
    local_f0 = '\x01';
    local_38 = 0;
    if (g_02774ae8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = g_02774af0;
    local_40 = plVar7;
    local_38 = '\x01';
    local_70 = 0;
    if (g_02774af0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    uVar9 = FUN_00cca9a0(&local_78,local_58,&local_50);
    FUN_00e972c0(uVar9,&local_c8);
    FUN_002d10d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
LAB_00cca374:
    bVar2 = false;
  }
  else {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    FUN_00dac670();
    FUN_00dac5e0();
    cVar5 = FUN_00daac70();
    bVar2 = true;
    if (cVar5 != '\0') {
      FUN_00dac5e0();
      goto LAB_00cca374;
    }
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return uVar8;
  }
LAB_00cca392:
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  lVar1 = g_02774ad8;
  if (g_02774ad8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02774af8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (g_02774af8 != 0) {
    FUN_00d50b00();
  }
  plVar7 = g_02774ae8;
  local_d8 = lVar4;
  local_d0 = '\x01';
  if (g_02774ae8 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar7;
  local_40 = (int64_t *)*local_58;
  uVar8 = FUN_00083ea0(2,&local_40);
  FUN_00e972c0(uVar8,&local_c8);
  local_c8 = (void*)&g_0253d630;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = &g_024c5048;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return 0;
}



// ============================================================
// 00ccc820
// ============================================================
// Function: FUN_00ccc820
// Address: 00ccc820
// Size: 981 bytes
// Class: GNBCFA
// String references:
//   "Cannot open %@ (%d)."

void FUN_00ccc820(int64_t **param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int local_38;
  
  plVar7 = (int64_t *)*arg1;
  cVar8 = (char)arg1[1];
  if ((cVar8 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) goto LAB_00ccc94b;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    iVar4 = (int)param_2;
    if (cVar3 == '\0') goto LAB_00ccca40;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (int64_t *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccc900;
        }
        goto LAB_00ccc869;
      }
joined_r0x00ccc92e:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccc900:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccc92e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccc869:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (int64_t *)0x0);
  plVar7 = (int64_t *)0x0;
LAB_00ccc94b:
  lVar1 = g_027726e0;
  if (g_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  local_50 = 2;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (int64_t *)&g_025df2a0;
  local_38 = 0;
  iVar4 = 0x200250f;
  param_1 = &local_58;
  FUN_00cc7a20();
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccca40:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,iVar4);
  *(int *)(this_ptr + 0x18) = iVar4;
  lVar1 = g_027726e0;
  if (iVar4 == -1) {
    if (g_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (int64_t *)&g_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00ccb310
// ============================================================
// Function: FUN_00ccb310
// Address: 00ccb310
// Size: 978 bytes
// Class: GNBCFA
// String references:
//   "Cannot open %@ (%d)."

void FUN_00ccb310(int64_t **param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int local_38;
  
  plVar7 = (int64_t *)*arg1;
  cVar8 = (char)arg1[1];
  if ((cVar8 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) goto LAB_00ccb43b;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    iVar4 = (int)param_2;
    if (cVar3 == '\0') goto LAB_00ccb530;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (int64_t *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccb3f0;
        }
        goto LAB_00ccb359;
      }
joined_r0x00ccb41e:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccb3f0:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccb41e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccb359:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (int64_t *)0x0);
  plVar7 = (int64_t *)0x0;
LAB_00ccb43b:
  lVar1 = g_027726e0;
  if (g_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  local_50 = 2;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (int64_t *)&g_025df2a0;
  local_38 = 0;
  iVar4 = 0x200250f;
  param_1 = &local_58;
  FUN_00cc7a20();
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccb530:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,iVar4);
  *(int *)(this_ptr + 0x18) = iVar4;
  lVar1 = g_027726e0;
  if (iVar4 == -1) {
    if (g_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (int64_t *)&g_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00ccbd90
// ============================================================
// Function: FUN_00ccbd90
// Address: 00ccbd90
// Size: 986 bytes
// Class: GNBCFA
// String references:
//   "Cannot open %@ (%d)."

void FUN_00ccbd90(int64_t **param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  char cVar8;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  uint local_50;
  int64_t local_48;
  char local_40;
  int local_38;
  
  plVar7 = (int64_t *)*arg1;
  cVar8 = (char)arg1[1];
  if ((cVar8 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) goto LAB_00ccbebb;
  }
  else {
    FUN_00d50b00();
  }
  do {
    cVar3 = (**(code **)(*plVar7 + 0x4c0))();
    if (cVar3 == '\0') goto LAB_00ccbfb0;
    (**(code **)(*plVar7 + 0x4c8))();
    plVar6 = local_58;
    if (local_58 == plVar7) {
      plVar6 = plVar7;
      if ((cVar8 == '\0') && (local_58 != (int64_t *)0x0)) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_00ccbe70;
        }
        goto LAB_00ccbdd9;
      }
joined_r0x00ccbe9e:
      if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (cVar8 == '\0') {
          cVar8 = '\x01';
        }
        else {
          FUN_00d50b20();
          plVar7 = plVar6;
LAB_00ccbe70:
          plVar6 = plVar7;
          cVar8 = '\x01';
        }
        goto joined_r0x00ccbe9e;
      }
      if (cVar8 != '\0') {
        FUN_00d50b20();
      }
LAB_00ccbdd9:
      local_50 = local_50 & 0xffffff00;
      cVar8 = '\x01';
    }
    plVar7 = plVar6;
  } while (plVar6 != (int64_t *)0x0);
  plVar7 = (int64_t *)0x0;
LAB_00ccbebb:
  lVar1 = g_027726e0;
  if (g_027726e0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x368))();
  local_50 = 2;
  local_58 = &g_024c5048;
  local_40 = 0;
  if (local_68 != 0) {
    FUN_00d50b00();
  }
  local_48 = local_68;
  local_40 = '\x01';
  local_58 = (int64_t *)&g_025df2a0;
  local_38 = 0;
  param_1 = &local_58;
  FUN_00cc7a20(param_1,"Cannot open %@ (%d).");
  FUN_00cc76c0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_58 = &g_024c5048;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_00ccbfb0:
  FUN_00cde020();
  iVar4 = _open((char *)param_1,0x1a4);
  *(int *)(this_ptr + 0x18) = iVar4;
  lVar1 = g_027726e0;
  if (iVar4 == -1) {
    if (g_027726e0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x368))();
    piVar5 = ___error();
    iVar4 = *piVar5;
    local_50 = 2;
    local_58 = &g_024c5048;
    local_40 = 0;
    if (local_68 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_68;
    local_40 = '\x01';
    local_58 = (int64_t *)&g_025df2a0;
    local_38 = iVar4;
    FUN_00cc7a20(&local_58,"Cannot open %@ (%d).");
    FUN_00cc76c0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_58 = &g_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x20) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((cVar8 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00cc8de0
// ============================================================
// Function: FUN_00cc8de0
// Address: 00cc8de0
// Size: 906 bytes
// Class: GNBCFA
// String references:
//   "class:%@"
//   "entity:%@"

void FUN_00cc8de0(void)

{
  int64_t lVar1;
  bool bVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t *local_70;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  FUN_00d4ffd0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = local_40;
  bVar2 = false;
  FUN_00d21140();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = arg1[4];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
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
    FUN_00d21140();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = arg1[5];
  if (lVar1 != 0) {
    bVar2 = true;
    FUN_00d50b00();
    FUN_00d8cb40();
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
    FUN_00d21140();
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*arg1 + 0x380))();
  if ((bVar2) && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (int64_t *)0x0) {
    (**(code **)(*arg1 + 0x380))();
    (**(code **)(*local_50 + 400))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d21140();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027259e0;
  if (g_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 00cce050
// ============================================================
// Function: FUN_00cce050
// Address: 00cce050
// Size: 530 bytes
// Class: GNBCFA

void FUN_00cce050(uint64_t param_1,int64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  if (param_2 != 0) {
    if (arg1[2] == 0) {
      if ((g_028a7340 == 0) || (g_028a7349 == '\0')) {
        FUN_00e8cb50();
        if (g_028a7340 == 0) {
          FUN_00c8e600();
          lVar2 = g_028a7340;
          if (g_028a7340 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar2 = 0;
              }
              else {
                FUN_00d50b00();
                lVar2 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar2 = local_40;
            }
            bVar4 = g_028a7340 != 0;
            g_028a7340 = lVar2;
            if (bVar4) {
              FUN_00d50b20();
              lVar2 = local_40;
            }
          }
          if ((lVar2 != 0) && (g_028a7348 == '\0')) {
            g_028a7348 = '\x01';
            FUN_00e8cb90();
            lVar2 = local_40;
          }
          if ((local_38 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          g_028a7349 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028a7349 = '\x01';
          FUN_00e8cb70();
        }
      }
      uVar1 = *(void*)(g_028a7340 + 0x10);
      iVar3 = *(int *)(g_028a7340 + 0x18);
      do {
        if (param_2 < iVar3) {
          iVar3 = (int)param_2;
        }
        (**(code **)(*arg1 + 0x388))(iVar3,uVar1);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            goto LAB_00cce24d;
          }
        }
        else if (local_40 != 0) {
LAB_00cce24d:
          *this_ptr = local_40;
          *(void*)(this_ptr + 1) = 1;
          return;
        }
        param_2 = param_2 - iVar3;
        if (param_2 == 0) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          return;
        }
      } while( true );
    }
    iVar3 = (int)arg1[5] + (int)param_2;
    if (*(int *)(arg1[2] + 0x18) < iVar3) {
      FUN_00c8e340(iVar3,0);
    }
    ___bzero();
    iVar3 = (int)arg1[5] + (int)param_2;
    *(int *)(arg1 + 5) = iVar3;
    if (*(int *)((int64_t)arg1 + 0x2c) < iVar3) {
      *(int *)((int64_t)arg1 + 0x2c) = iVar3;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}



// ============================================================
// 00ccf1e0
// ============================================================
// Function: FUN_00ccf1e0
// Address: 00ccf1e0
// Size: 716 bytes
// Class: GNBCFA

int64_t * FUN_00ccf1e0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  uint64_t uVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t local_78;
  char local_70;
  int64_t local_48;
  char local_40;
  
  lVar1 = g_02704060;
  if (param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x20) + 0x10);
    lVar6 = (uint64_t)(param_2 - 1) * 0x23c;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
      uVar3 = uVar5 + 1;
    } while (uVar5 < 0x100);
    if ((int)(uVar5 + 1) == 1) {
      FUN_00d8ede0();
    }
    else {
      FUN_00d920f0(param_1,uVar5);
    }
    if (local_48 == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    while (lVar1 = g_02704060, iVar4 != 0) {
      lVar1 = *(int64_t *)(*(int64_t *)(*arg1 + 0x20) + 0x10);
      lVar6 = (uint64_t)(iVar4 - 1) * 0x23c;
      uVar3 = 0;
      do {
        uVar5 = uVar3;
        if (*(short *)(lVar1 + lVar6 + 0x24 + uVar5 * 2) == 0) break;
        uVar3 = uVar5 + 1;
      } while (uVar5 < 0x100);
      if ((int)(uVar5 + 1) == 1) {
        FUN_00d8ede0();
      }
      else {
        FUN_00d920f0(*(int64_t *)(*arg1 + 0x20),uVar5);
      }
      FUN_00d8ef00();
      if ((bVar2) || (local_48 == 0)) {
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)(lVar1 + 0x20 + lVar6);
    }
    if (g_02704060 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8ef00();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 00cc8780
// ============================================================
// Function: FUN_00cc8780
// Address: 00cc8780
// Size: 547 bytes
// Class: GNBCFA

void FUN_00cc8780(void)

{
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_b8;
  void*local_b0;
  char local_a8;
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
  int64_t local_30;
  char local_28;
  
  if (*arg1 != 0) {
    (**(code **)(*this_ptr + 0x380))();
    if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 == (void*)0x0) {
      local_70 = *arg1;
      local_68 = '\0';
      (**(code **)(*this_ptr + 0x378))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x380))();
      local_b8 = *arg1;
      FUN_00083ea0(2,&local_b8);
      FUN_01c0fd60();
      local_30 = local_50;
      local_28 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_28 = '\x01';
      FUN_00c6d890();
      local_40 = local_60;
      local_38 = 0;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38 = '\x01';
      (**(code **)(*this_ptr + 0x378))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (void*)&g_0253d630;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = &g_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00cc95f0
// ============================================================
// Function: FUN_00cc95f0
// Address: 00cc95f0
// Size: 531 bytes
// Class: GNBCFA
// String references:
//   "GNBCFA"

void FUN_00cc95f0(uint64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0256d4f0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_00d500e0();
  lVar1 = *arg1;
  lVar3 = puVar2[2];
  if (lVar3 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar2[2] = lVar1;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x4e0))();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_00daa700();
  lVar1 = puVar2[3];
  lVar3 = lVar1;
  if (lVar1 == local_50) goto LAB_00cc9723;
  lVar3 = local_50;
  if (local_48 == '\0') {
    if (local_50 == 0) {
      lVar3 = 0;
      goto LAB_00cc96de;
    }
    FUN_00d50b00();
    lVar1 = puVar2[3];
    puVar2[3] = local_50;
  }
  else {
    local_48 = '\0';
LAB_00cc96de:
    puVar2[3] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_50;
  }
LAB_00cc9723:
  if ((local_48 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar2[3] != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  if (param_2 != 0) {
    FUN_00dac5e0();
  }
  puVar2[4] = param_2;
  if (puVar2[3] != 0) {
    FUN_00dab200(0,6);
    FUN_00daaf60();
    FUN_00daa9b0();
    FUN_00daaf60();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

