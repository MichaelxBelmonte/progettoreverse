// Function: FUN_007f3f10
// Address: 007f3f10
// Size: 1584 bytes
// Class: GNData
// String references:
//   "GNData"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void* FUN_007f3f10(uint32_t param_1,uint64_t param_2,void*param_3)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  void*puVar8;
  uint64_t uVar9;
  void*this_ptr;
  int64_t **pplVar10;
  uint32_t uVar11;
  uint32_t extraout_XMM0_Da;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  uint32_t local_50;
  uint32_t local_4c;
  int64_t *local_48;
  char local_40;
  
  lVar2 = g_0270b870;
  if (g_0270b870 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_c0 = lVar2;
  local_b8 = '\x01';
  pplVar10 = &local_48;
  FUN_000175c0(param_1,&local_c0);
  plVar3 = local_48;
  if ((g_026d0220 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    g_02789148 = FUN_00d4fe50();
    g_02789130 = "GNData";
    g_02789138 = 0x28;
    g_02789140 = FUN_000378a0;
    g_02789150 = 0;
    ram_0000000002789158 = 0;
    g_02789160 = 0;
    ram_0000000002789168 = 0;
    g_02789170 = 0;
    ram_0000000002789178 = 0;
    g_02789180 = 0;
    ram_0000000002789188 = 0;
    g_02789190 = 0;
    ram_0000000002789198 = 0;
    g_027891a0 = 0;
    ram_00000000027891a8 = 0;
    g_027891b0 = 0;
    ram_00000000027891b8 = 0;
    g_027891c0 = 0;
    ram_00000000027891c8 = 0;
    g_027891d0 = 0;
    ram_00000000027891d8 = 0;
    g_027891e0 = 0;
    ram_00000000027891e8 = 0;
    g_027891f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_007f3f9f:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_007f3f9f;
  }
  local_58 = *pplVar10;
  if (local_58 == (int64_t *)0x0) {
    local_50 = 1;
    local_58 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar10 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar10 + 1) = 0;
    }
    local_50 = 0;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != (int64_t *)0x0) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025f02c0;
    puVar8[2] = &g_025f0658;
    puVar8[3] = 0;
    *(void*)(puVar8 + 4) = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    (*g_025f02d8)();
    FUN_01553170();
    FUN_01553180();
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_02572358;
    (*g_02572370)();
    if ((int64_t *)*param_3 != (int64_t *)0x0) {
      local_40 = '\0';
      local_48 = (int64_t *)*param_3;
      FUN_00d21140();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar11 = FUN_00ce71c0();
    local_b0 = g_0272f9d8;
    if (g_0272f9d8 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*local_d8 + 0x400))(uVar11,&local_b0);
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_48 = plVar3;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_98 = '\0';
    local_a0 = puVar8;
    uVar11 = FUN_015ac130();
    if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    local_90 = local_58;
    local_88 = '\0';
    FUN_0159bec0(uVar11,&local_90);
    plVar3 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      local_60 = plVar3;
      uVar9 = FUN_01553190();
      plVar3 = local_48;
      if (local_48 == (int64_t *)0x0) {
        local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          local_4c = 0;
          if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_007f42ca;
          FUN_00d50b20();
        }
        local_4c = 0;
      }
LAB_007f42ca:
      FUN_01553210();
      plVar4 = local_48;
      if (local_48 == (int64_t *)0x0) {
        bVar1 = true;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar1 = false;
          if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_007f4309;
          FUN_00d50b20();
        }
        bVar1 = false;
      }
LAB_007f4309:
      cVar6 = FUN_007f4950();
      if ((cVar6 == '\0') && (cVar6 = FUN_007f4950(), cVar6 == '\0')) {
        local_80 = local_60;
        local_78 = '\0';
        FUN_0015b0f0(extraout_XMM0_Da,1);
        plVar5 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *this_ptr = plVar5;
        *(void*)(this_ptr + 1) = 1;
        if (!bVar1 && plVar4 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((char)local_4c == '\0' && plVar3 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        goto LAB_007f4397;
      }
      if (!bVar1 && plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_4c == '\0' && plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_007f4397:
  if ((char)local_50 == '\0' && local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

