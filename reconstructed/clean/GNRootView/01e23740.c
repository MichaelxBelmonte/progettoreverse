// Function: FUN_01e23740
// Address: 01e23740
// Size: 3122 bytes
// Class: GNRootView
// String references:
//   "GNRootView"

int64_t * FUN_01e23740(char param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t *plVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  bool bVar9;
  bool bVar10;
  float fVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar12;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint32_t uVar15;
  uint32_t uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar16 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar15 = (uint32_t)param_2;
  FUN_01e24810();
  if (((*in_RDX == 0) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) && (param_1 != '\0')) {
    lVar8 = *arg1;
  }
  else {
    g_028b9519 = '\x01';
    lVar8 = *arg1;
  }
  if (lVar8 != 0) {
    FUN_01e42030();
    plVar5 = local_40;
    plVar7 = g_028b9508;
    if (g_028b9508 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b00();
          plVar5 = local_40;
        }
      }
      else {
        local_38 = '\0';
      }
      bVar9 = g_028b9508 != (int64_t *)0x0;
      plVar7 = plVar5;
      g_028b9508 = plVar5;
      if (bVar9) {
        plVar5 = (int64_t *)FUN_00d50b20();
        plVar7 = local_40;
      }
    }
    if ((plVar7 != (int64_t *)0x0) && (g_028b9510 == '\0')) {
      g_028b9510 = '\x01';
      plVar5 = (int64_t *)FUN_00e8cb90();
      plVar7 = local_40;
    }
    if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
      plVar5 = (int64_t *)FUN_00d50b20();
    }
    goto LAB_01e2395a;
  }
  if ((g_026e85e0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f4bd8 = FUN_0006d940();
    g_027f4bc0 = "GNRootView";
    g_027f4bc8 = 0x1d0;
    g_027f4bd0 = FUN_00097da0;
    g_027f4be0 = 0;
    ram_00000000027f4be8 = 0;
    g_027f4bf0 = 0;
    ram_00000000027f4bf8 = 0;
    g_027f4c00 = 0;
    ram_00000000027f4c08 = 0;
    g_027f4c10 = 0;
    ram_00000000027f4c18 = 0;
    g_027f4c20 = 0;
    ram_00000000027f4c28 = 0;
    g_027f4c30 = 0;
    ram_00000000027f4c38 = 0;
    g_027f4c40 = 0;
    ram_00000000027f4c48 = 0;
    g_027f4c50 = 0;
    ram_00000000027f4c58 = 0;
    g_027f4c60 = 0;
    ram_00000000027f4c68 = 0;
    g_027f4c70 = 0;
    ram_00000000027f4c78 = 0;
    g_027f4c80 = 0;
    ___cxa_guard_release();
  }
  local_78 = FUN_00e86210();
  local_70 = 0;
  uVar12 = extraout_XMM0_Qa;
  if (local_78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_70 = '\x01';
  plVar5 = (int64_t *)FUN_01d824e0(uVar12,&local_78);
  plVar7 = g_028b9508;
  if (g_028b9508 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        goto LAB_01e2384c;
      }
      FUN_00d50b00();
      plVar3 = g_028b9508;
      g_028b9508 = local_40;
      plVar5 = (int64_t *)0x0;
      plVar7 = local_40;
      if (plVar3 == (int64_t *)0x0) goto LAB_01e23911;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_01e2384c:
      bVar9 = g_028b9508 == (int64_t *)0x0;
      g_028b9508 = plVar7;
      if (bVar9) {
        plVar5 = (int64_t *)0x0;
        goto LAB_01e23911;
      }
    }
    plVar5 = (int64_t *)FUN_00d50b20();
    plVar7 = local_40;
  }
LAB_01e23911:
  if ((plVar7 != (int64_t *)0x0) && (g_028b9510 == '\0')) {
    g_028b9510 = '\x01';
    plVar5 = (int64_t *)FUN_00e8cb90();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    plVar5 = (int64_t *)FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    plVar5 = (int64_t *)FUN_00d50b20();
  }
LAB_01e2395a:
  if (g_028b9508 != (int64_t *)0x0) {
    FUN_01d907a0();
    local_48 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        return (int64_t *)0x0;
      }
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == (int64_t *)0x0) {
      return (int64_t *)0x0;
    }
    uVar12 = FUN_01d3abf0();
    *(void*)(this_ptr + 0x44) = uVar12;
    FUN_01d3abf0();
    FUN_01f514b0();
    uVar12 = FUN_01f51370();
    *(void*)(this_ptr + 0x34) = uVar12;
    *(uint64_t *)(this_ptr + 0x3c) = CONCAT44(uVar16,uVar15);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int *)(this_ptr + 0xc) != -1) {
      fVar11 = (float)FUN_01e21f60();
      fVar17 = 0.0;
      *(float *)(this_ptr + 0x44) = *(float *)(this_ptr + 0x44) - fVar11;
      if (*(int *)(this_ptr + 0x10) != -1) {
        FUN_01e21df0();
        *(float *)(this_ptr + 0x48) =
             *(float *)(this_ptr + 0x48) - (extraout_XMM0_Db + fVar17 + g_02390d00);
      }
    }
    fVar11 = g_0239011c;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    *(float *)(this_ptr + 0x44) =
         *(float *)(this_ptr + 0x44) - (float)*(void*)(this_ptr + 0x28) * g_0239011c;
    *(float *)(this_ptr + 0x48) =
         *(float *)(this_ptr + 0x48) -
         (float)((uint64_t)*(void*)(this_ptr + 0x28) >> 0x20) * fVar11;
    if (*arg1 != 0) {
      FUN_01e3f820();
      uVar12 = FUN_01e46ed0();
      *(void*)(this_ptr + 0x44) = uVar12;
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    *puVar6 = &g_026a3350;
    puVar6[2] = &g_026a37c8;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *(void*)(puVar6 + 5) = 0;
    puVar6[6] = 0;
    *(void*)((int64_t)puVar6 + 0x37) = 0;
    *(void*)((int64_t)puVar6 + 0x3c) = 0;
    *(void*)((int64_t)puVar6 + 0x44) = 0;
    *(void*)((int64_t)puVar6 + 0x4c) = 0;
    *(void*)((int64_t)puVar6 + 0x54) = 0;
    *(void*)((int64_t)puVar6 + 0x5c) = 0;
    *(void*)((int64_t)puVar6 + 100) = 0;
    *(void*)((int64_t)puVar6 + 0x69) = 0;
    puVar6[0xf] = 0;
    *(void*)((int64_t)puVar6 + 0x7f) = 0;
    *(void*)((int64_t)puVar6 + 0x84) = 0;
    *(void*)((int64_t)puVar6 + 0x8c) = 0;
    *(void*)((int64_t)puVar6 + 0x94) = 0;
    uVar12 = (*g_026a3368)();
    if (g_028b94c8 == puVar6) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94c8 != (void*)0x0;
      g_028b94c8 = puVar6;
      if (bVar10) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (g_028b94d0 == '\0') {
      g_028b94d0 = '\x01';
      uVar12 = FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      uVar12 = FUN_00d50b20();
    }
    plVar5 = g_028b9508;
    local_60 = 0;
    if (g_028b9508 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b00();
    }
    local_68 = plVar5;
    local_60 = '\x01';
    FUN_01e5b6f0(uVar12,&local_68);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_01e21f60();
    auVar13._0_4_ = (float)uVar12 + fVar11;
    auVar13._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + fVar17;
    auVar13._8_4_ = (float)extraout_XMM0_Qb + fVar18;
    auVar13._12_4_ = (float)((uint64_t)extraout_XMM0_Qb >> 0x20) + fVar19;
    auVar14._4_4_ = fVar17;
    auVar14._0_4_ = fVar11;
    auVar14._8_4_ = fVar18;
    auVar14._12_4_ = fVar19;
    auVar14 = blendps(auVar13,auVar14,2);
    *(int64_t *)(this_ptr + 0x4c) = auVar14._0_8_;
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (int64_t)&g_0269f1a0;
    plVar5[2] = (int64_t)&g_0269fac8;
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (g_028b94a8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94a8 != (int64_t *)0x0;
      g_028b94a8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b94b0 == '\0') {
      g_028b94b0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = g_028b94a8;
    FUN_00d50b00();
    plVar5[0x27] = this_ptr;
    FUN_00d50b20();
    (**(code **)(*g_028b94a8 + 0x4d0))();
    FUN_01e5bc80();
    FUN_01e5bb70(*(void*)(this_ptr + 0x44));
    FUN_01e5ca90();
    plVar5 = local_40;
    local_58 = g_028b94a8;
    local_50 = 0;
    if (g_028b94a8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar5 + 0x450))();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar5 = (int64_t)&g_0269f1a0;
    plVar5[2] = (int64_t)&g_0269fac8;
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    FUN_00d500e0();
    if (g_028b94b8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94b8 != (int64_t *)0x0;
      g_028b94b8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b94c0 == '\0') {
      g_028b94c0 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    plVar5 = g_028b94b8;
    *(void*)(g_028b94b8 + 0x28) = 1;
    FUN_00d50b00();
    plVar5[0x27] = this_ptr;
    FUN_00d50b20();
    (**(code **)(*g_028b94b8 + 0x4d0))();
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    plVar5[0x27] = 0;
    *(void*)(plVar5 + 0x28) = 0;
    *(void*)((int64_t)plVar5 + 0x17c) = 0;
    plVar5[0x30] = 0;
    *(void*)(plVar5 + 0x31) = 0;
    plVar5[0x29] = 0;
    plVar5[0x2a] = 0;
    *(void*)((int64_t)plVar5 + 0x154) = 0;
    *(void*)((int64_t)plVar5 + 0x15c) = 0;
    plVar5[0x2d] = 0;
    plVar5[0x2e] = 0;
    *(void*)(plVar5 + 0x2f) = 0;
    *plVar5 = (int64_t)&g_0269e7e8;
    plVar5[2] = (int64_t)&g_0269f160;
    plVar5[0x32] = 0;
    FUN_00d500e0();
    if (g_028b94f8 == plVar5) {
      bVar2 = false;
      bVar9 = false;
    }
    else {
      bVar2 = true;
      bVar9 = true;
      bVar10 = g_028b94f8 != (int64_t *)0x0;
      g_028b94f8 = plVar5;
      if (bVar10) {
        FUN_00d50b20();
      }
    }
    if (g_028b9500 == '\0') {
      g_028b9500 = '\x01';
      FUN_00e8cb90();
      bVar9 = bVar2;
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    (**(code **)(*g_028b94f8 + 0x4d0))();
    uVar12 = g_023dcd04;
    *(void*)(this_ptr + 100) = g_023dccfc;
    *(void*)(this_ptr + 0x6c) = uVar12;
    uVar12 = g_023dcd04;
    *(void*)(this_ptr + 0x54) = g_023dccfc;
    *(void*)(this_ptr + 0x5c) = uVar12;
    plVar5 = g_028b94f8;
    lVar8 = *(int64_t *)(this_ptr + 0x20);
    lVar1 = g_028b94f8[0x32];
    if (lVar1 != lVar8) {
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      plVar5[0x32] = lVar8;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01d3abf0();
    FUN_01e22920();
    FUN_01e5d9c0();
    if (*(int *)(this_ptr + 0xc) == -1) {
      *(void*)(this_ptr + 0x10) = 0xffffffff;
    }
    FUN_01e1f2c0();
    *(void*)(this_ptr + 0x31) = 1;
    (**(code **)(*g_028b94a8 + 0x3c0))();
    *(void*)(this_ptr + 0x31) = 0;
    FUN_01e42030();
    (**(code **)(*local_40 + 0x6e0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((int64_t)*(int *)(this_ptr + 0xc) != -1) &&
       (*(int64_t *)
         (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
         (int64_t)*(int *)(this_ptr + 0xc) * 8) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      if ((int64_t)*(int *)(this_ptr + 0xc) == -1) {
        lVar8 = 0;
        bVar9 = true;
      }
      else {
        lVar8 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) +
                 (int64_t)*(int *)(this_ptr + 0xc) * 8);
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_00d50b00();
        }
        bVar9 = false;
      }
      FUN_01e25fd0();
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if (!bVar9 && lVar8 != 0) {
        FUN_00d50b20();
      }
      if (((g_028b9519 == '\0') && (plVar5 != (int64_t *)0x0)) &&
         (iVar4 = FUN_01d5b230(), iVar4 != 0)) {
        FUN_01d62b90();
        plVar7 = *(int64_t **)(this_ptr + 0x20);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == plVar7) {
          FUN_01d62b80();
        }
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e23600();
    FUN_01e236a0();
    if ((g_028b94c8 != (void*)0x0) && (FUN_01e5e740(), g_028b94c8 != (void*)0x0))
    {
      FUN_00d50130();
    }
    if (g_028b94b8 != (int64_t *)0x0) {
      FUN_00d50130();
    }
    if (g_028b94f8 != (int64_t *)0x0) {
      FUN_00d50130();
    }
    if (g_028b94f8 != (int64_t *)0x0) {
      g_028b94f8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    local_48 = (int64_t *)0x0;
    FUN_00d50b20();
    if (g_028b94a8 != (int64_t *)0x0) {
      g_028b94a8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    if (g_028b94c8 != (void*)0x0) {
      g_028b94c8 = (void*)0x0;
      FUN_00d50b20();
    }
    if (g_028b94b8 != (int64_t *)0x0) {
      g_028b94b8 = (int64_t *)0x0;
      FUN_00d50b20();
    }
    plVar5 = (int64_t *)FUN_01e24a90();
    g_028b9519 = '\0';
  }
  return plVar5;
}

