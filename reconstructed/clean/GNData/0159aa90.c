// Function: FUN_0159aa90
// Address: 0159aa90
// Size: 3710 bytes
// Class: GNData
// String references:
//   "GNData"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_0159aa90(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int64_t *plVar6;
  int64_t lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  void *pvVar13;
  void* pVar14;
  code *in_RCX;
  void*this_ptr;
  byte bVar15;
  byte bVar16;
  int64_t lVar17;
  int64_t **pplVar18;
  int64_t lVar19;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar20;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
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
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint32_t local_a4;
  uint32_t local_a0;
  uint32_t local_9c;
  int64_t *local_98;
  int64_t *local_90;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  lVar3 = g_027c7930;
  plVar1 = (int64_t *)*param_2;
  if (plVar1 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if (g_027c7930 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_118 = lVar3;
  local_110 = '\x01';
  pplVar18 = &local_48;
  (**(code **)(*plVar1 + 0x88))(param_1,&local_118);
  plVar1 = local_48;
  FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0159ab20:
    pplVar18 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_0159ab20;
  }
  local_50 = *pplVar18;
  if (local_50 == (int64_t *)0x0) {
    bVar15 = 1;
    bVar16 = 1;
    bVar4 = false;
    bVar5 = false;
    cVar8 = false;
    local_50 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar18 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar18 + 1) = 0;
    }
    bVar4 = true;
    bVar15 = 0;
    bVar16 = 0;
    bVar5 = true;
    cVar8 = true;
  }
  if ((local_40 != '\0') && (bVar16 = bVar15, cVar8 = bVar5, local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) goto LAB_0159b063;
  iVar10 = FUN_00d45870();
  lVar3 = g_027c7940;
  if (iVar10 == 0xc) {
    plVar1 = (int64_t *)*param_2;
    uVar20 = extraout_XMM0_Da;
    if (g_027c7940 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_108);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_0159ac38:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar9 = FUN_00e85ea0();
      if (cVar9 == '\0') goto LAB_0159ac38;
    }
    plVar1 = *pplVar18;
    if (plVar1 == local_50) {
      if ((bool)(bVar16 & plVar1 != (int64_t *)0x0)) {
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159aca9;
        cVar8 = true;
        FUN_00d50b00();
      }
    }
    else {
      local_50 = plVar1;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (bVar4) {
          FUN_00d50b20();
          cVar8 = true;
        }
        else {
          cVar8 = true;
        }
      }
      else {
        if (bVar4) {
          FUN_00d50b20();
        }
LAB_0159aca9:
        *(void*)(pplVar18 + 1) = 0;
        cVar8 = true;
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == (int64_t *)0x0) goto LAB_0159b063;
    uVar11 = FUN_00d45870();
    local_f8 = g_027c7948;
    plVar1 = (int64_t *)*param_2;
    uVar20 = extraout_XMM0_Da_00;
    if (g_027c7948 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_f0 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_f8);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_0159adae:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar9 = FUN_00e85ea0();
      if (cVar9 == '\0') goto LAB_0159adae;
    }
    plVar1 = *pplVar18;
    if (plVar1 == local_50) {
      plVar6 = local_50;
      bVar4 = (bool)cVar8;
      if ((!(bool)cVar8) && (plVar1 != (int64_t *)0x0)) {
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159ae2f;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar18 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar6 = plVar1;
      if ((bool)cVar8) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = plVar1;
      if ((bool)cVar8) {
        FUN_00d50b20();
      }
LAB_0159ae2f:
      *(void*)(pplVar18 + 1) = 0;
      plVar6 = local_50;
      bVar4 = true;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) goto LAB_0159b063;
    uVar20 = FUN_00d459e0();
    local_e8 = g_027c7938;
    plVar1 = (int64_t *)*param_2;
    local_a4 = uVar20;
    if (g_027c7938 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_e0 = '\x01';
    pplVar18 = &local_48;
    (**(code **)(*plVar1 + 0x88))(uVar20,&local_e8);
    plVar1 = local_48;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_0159aef4:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_0159aef4;
    }
    local_50 = *pplVar18;
    if (local_50 == plVar6) {
      if ((bVar4 == false) && (local_50 != (int64_t *)0x0)) {
        local_50 = plVar6;
        if (*(char *)(pplVar18 + 1) != '\0') goto LAB_0159af7c;
        FUN_00d50b00();
        goto joined_r0x0159b7c4;
      }
    }
    else {
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar6 = local_50;
        if (bVar4 != false) {
          FUN_00d50b20();
        }
      }
      else {
        if (bVar4 != false) {
          FUN_00d50b20();
        }
LAB_0159af7c:
        *(void*)(pplVar18 + 1) = 0;
        plVar6 = local_50;
      }
joined_r0x0159b7c4:
      bVar4 = true;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 == (int64_t *)0x0) {
LAB_0159b063:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    local_31 = bVar4;
    uVar12 = FUN_00d45870();
    local_d8 = g_027c7918;
    plVar1 = (int64_t *)*param_2;
    uVar20 = extraout_XMM0_Da_01;
    if (g_027c7918 != 0) {
      uVar20 = FUN_00d50b00();
    }
    local_d0 = '\x01';
    pplVar18 = &local_48;
    uVar20 = (**(code **)(*plVar1 + 0x88))(uVar20,&local_d8);
    plVar1 = local_48;
    if ((g_026d0220 == '\0') &&
       (iVar10 = ___cxa_guard_acquire(), uVar20 = extraout_XMM0_Da_03, iVar10 != 0)) {
      g_02789148 = FUN_00d4fe50();
      g_02789130 = "GNData";
      g_02789138 = 0x28;
      in_RCX = FUN_000378a0;
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
      uVar20 = ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_0159b047:
      pplVar18 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      uVar20 = extraout_XMM0_Da_02;
      if (cVar8 == '\0') goto LAB_0159b047;
    }
    plVar1 = *pplVar18;
    if (*(char *)(pplVar18 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar20 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar18 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar20 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar20 = FUN_00d50b20();
    }
    lVar3 = g_027c7908;
    cVar8 = local_31;
    if (plVar1 != (int64_t *)0x0) {
      lVar2 = plVar1[2];
      param_2 = (int64_t *)*param_2;
      local_a0 = uVar11;
      local_90 = plVar1;
      if (g_027c7908 != 0) {
        uVar20 = FUN_00d50b00();
      }
      local_c8 = lVar3;
      local_c0 = '\x01';
      pplVar18 = &local_48;
      (**(code **)(*param_2 + 0x88))(uVar20,&local_c8);
      cVar8 = local_31;
      plVar1 = local_48;
      if ((g_026d0220 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_02789148 = FUN_00d4fe50();
        g_02789130 = "GNData";
        g_02789138 = 0x28;
        in_RCX = FUN_000378a0;
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
        cVar8 = local_31;
      }
      if (plVar1 == (int64_t *)0x0) {
        pplVar18 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar9 = FUN_00e85ea0();
        if (cVar9 == '\0') {
          pplVar18 = (int64_t **)&g_02802688;
        }
      }
      local_98 = *pplVar18;
      if (*(char *)(pplVar18 + 1) == '\0') {
        if (local_98 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar18 + 1) = 0;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (local_98 == (int64_t *)0x0) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
      }
      else {
        lVar3 = local_98[2];
        FUN_0173ba80();
        local_80 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_80 = '\x01';
        local_88 = local_68;
        FUN_0173b120();
        plVar1 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_9c = uVar12;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        lVar17 = 0;
        do {
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01779ed0(*(void*)(lVar3 + lVar17 * 4));
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e70();
          pvVar13 = _pthread_getspecific((void*)in_RCX);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar19 = g_027cd580;
          lVar7 = g_027cd560;
          if (*(char *)(lVar2 + lVar17) == '\0') {
            if (g_027cd580 == 0) goto LAB_0159b4a0;
            FUN_00d50b00();
          }
          else if (g_027cd560 == 0) {
LAB_0159b4a0:
            lVar19 = 0;
          }
          else {
            FUN_00d50b00();
            lVar19 = lVar7;
          }
          local_b0 = '\x01';
          local_b8 = lVar19;
          FUN_017395b0();
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          pVar14 = (void*)in_RCX;
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0xc);
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770230(local_a4);
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b6f0();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01736c60();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_0173e440();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174db40();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01774240(uVar20);
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar13 = _pthread_getspecific(pVar14);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017548e0();
        *this_ptr = plVar1;
        *(void*)(this_ptr + 1) = 1;
        FUN_00d50b20();
        cVar8 = local_31;
      }
      FUN_00d50b20();
      goto LAB_0159ac79;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_0159ac79:
  if (cVar8 != '\0') {
    FUN_00d50b20();
  }
  return;
}

