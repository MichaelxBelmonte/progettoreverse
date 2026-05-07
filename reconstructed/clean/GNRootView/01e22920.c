// Function: FUN_01e22920
// Address: 01e22920
// Size: 2356 bytes
// Class: GNRootView

void FUN_01e22920(uint64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  void*puVar7;
  int iVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint32_t uVar13;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint32_t uVar14;
  uint8_t auVar12 [16];
  uint32_t uVar18;
  uint32_t uVar19;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_114;
  float fStack_10c;
  float local_f8;
  float fStack_f4;
  float local_b8;
  float fStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  float local_a8;
  float fStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  float local_98;
  float fStack_94;
  int local_68;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if (((((*(float *)(this_ptr + 100) != g_023dccfc) ||
        (NAN(*(float *)(this_ptr + 100)) || NAN(g_023dccfc))) ||
       (*(float *)(this_ptr + 0x68) != g_023dcd00)) ||
      ((NAN(*(float *)(this_ptr + 0x68)) || NAN(g_023dcd00) ||
       (*(float *)(this_ptr + 0x6c) != g_023dcd04)))) ||
     ((NAN(*(float *)(this_ptr + 0x6c)) || NAN(g_023dcd04) ||
      ((*(float *)(this_ptr + 0x70) != g_023dcd08 ||
       (NAN(*(float *)(this_ptr + 0x70)) || NAN(g_023dcd08))))))) goto LAB_01e22e61;
  local_b8 = g_023dccfc;
  fStack_b4 = g_023dcd00;
  uVar13 = 0;
  uVar14 = 0;
  lVar2 = *(int64_t *)(this_ptr + 0x18);
  local_98 = g_023dcd04;
  fStack_94 = g_023dcd08;
  if (lVar2 != 0) {
    local_68 = -1;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = g_023dcd04;
    fStack_a4 = g_023dcd08;
    uStack_a0 = 0;
    uStack_9c = 0;
    fVar20 = g_023dcd04;
    fVar21 = g_023dcd08;
    local_f8 = local_b8;
    fStack_f4 = fStack_b4;
LAB_01e22a38:
    do {
      lVar4 = local_58;
      local_68 = local_68 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_68) goto LAB_01e22d64;
      FUN_01e262a0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01e22ad0;
        }
      }
      else if (local_58 != 0) {
LAB_01e22ad0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        fVar22 = local_a8;
        fVar23 = fStack_a4;
        uVar18 = uStack_a0;
        uVar19 = uStack_9c;
LAB_01e22b25:
        uStack_9c = uVar19;
        uStack_a0 = uVar18;
        fStack_a4 = fVar23;
        local_a8 = fVar22;
        lVar10 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (local_40 < *(int *)(lVar4 + 0xc)) {
          lVar3 = *(int64_t *)(lVar4 + 0x10);
          local_58 = *(int64_t *)(lVar3 + 8 + lVar10 * 8);
          fVar22 = fVar20;
          fVar23 = fVar21;
          uVar18 = uVar13;
          uVar19 = uVar14;
          uVar11 = FUN_01e21df0(lVar3,local_40);
          if ((((local_b8 == g_023dccfc) && (!NAN(local_b8) && !NAN(g_023dccfc))) &&
              (fStack_b4 == g_023dcd00)) &&
             (((!NAN(fStack_b4) && !NAN(g_023dcd00) && (local_a8 == g_023dcd04)) &&
              (!NAN(local_a8) && !NAN(g_023dcd04))))) goto code_r0x01e22b83;
          goto LAB_01e22ba0;
        }
        FUN_00274dd0();
        FUN_00d50b20();
      }
      if (g_028b9519 == '\0') {
        FUN_01e25fd0();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01e22a38;
          FUN_00d50b00();
        }
        else if (local_58 == 0) goto LAB_01e22a38;
        (**(code **)(*g_028b94f8 + 0x918))();
        FUN_01e22190();
        lVar4 = g_028b94f8[0x2d];
        fVar22 = local_98;
        fVar23 = fStack_94;
        if ((lVar4 != 0) && (0xf < *(int *)(lVar4 + 0x18))) {
          iVar9 = 0;
          lVar10 = 8;
          fVar20 = local_f8;
          fVar21 = fStack_f4;
          do {
            uVar11 = *(void*)(*(int64_t *)(lVar4 + 0x10) + -8 + lVar10);
            local_f8 = (float)uVar11;
            fStack_f4 = (float)((uint64_t)uVar11 >> 0x20);
            uVar13 = 0;
            uVar14 = 0;
            uVar11 = *(void*)(*(int64_t *)(lVar4 + 0x10) + lVar10);
            fVar22 = (float)uVar11;
            fVar23 = (float)((uint64_t)uVar11 >> 0x20);
            if ((((fVar20 != g_023dccfc) || (NAN(fVar20) || NAN(g_023dccfc))) ||
                (fVar21 != g_023dcd00)) ||
               (((NAN(fVar21) || NAN(g_023dcd00) || (local_98 != g_023dcd04)) ||
                (NAN(local_98) || NAN(g_023dcd04))))) {
LAB_01e22d20:
              fVar22 = local_98;
              fVar23 = fStack_94;
              uVar11 = FUN_00d052e0();
              local_f8 = (float)uVar11;
              fStack_f4 = (float)((uint64_t)uVar11 >> 0x20);
              uVar13 = (uint32_t)extraout_XMM0_Qb_01;
              uVar14 = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
            }
            else if ((fStack_94 != g_023dcd08) || (NAN(fStack_94) || NAN(g_023dcd08)))
            goto LAB_01e22d20;
            iVar9 = iVar9 + 1;
            iVar1 = *(int *)(lVar4 + 0x18);
            iVar8 = iVar1 + 0xf;
            if (-1 < iVar1) {
              iVar8 = iVar1;
            }
            lVar10 = lVar10 + 0x10;
            fVar20 = local_f8;
            fVar21 = fStack_f4;
            local_98 = fVar22;
            fStack_94 = fVar23;
          } while (iVar9 < iVar8 >> 4);
        }
        FUN_00d50b20();
        local_98 = fVar22;
        fStack_94 = fVar23;
      }
    } while( true );
  }
  local_a8 = g_023dcd04;
  fStack_a4 = g_023dcd08;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_f8 = g_023dccfc;
  fStack_f4 = g_023dcd00;
LAB_01e22d8b:
  if (((((local_f8 != g_023dccfc) || (NAN(local_f8) || NAN(g_023dccfc))) ||
       (fStack_f4 != g_023dcd00)) ||
      ((NAN(fStack_f4) || NAN(g_023dcd00) || (local_98 != g_023dcd04)))) ||
     (NAN(local_98) || NAN(g_023dcd04))) {
LAB_01e22dbd:
    FUN_00d051c0();
    *(float *)(this_ptr + 0x6c) = local_98;
    *(float *)(this_ptr + 0x70) = fStack_94;
    *(void*)(this_ptr + 100) = *(void*)(this_ptr + 0x44);
    *(float *)(this_ptr + 0x68) = *(float *)(this_ptr + 0x48) - fStack_94;
  }
  else if ((fStack_94 != g_023dcd08) || (NAN(fStack_94) || NAN(g_023dcd08))) goto LAB_01e22dbd;
  if ((local_b8 == g_023dccfc) && (!NAN(local_b8) && !NAN(g_023dccfc))) {
    if ((fStack_b4 == g_023dcd00) && (!NAN(fStack_b4) && !NAN(g_023dcd00))) {
      if ((local_a8 == g_023dcd04) && (!NAN(local_a8) && !NAN(g_023dcd04))) {
        if ((fStack_a4 == g_023dcd08) && (!NAN(fStack_a4) && !NAN(g_023dcd08)))
        goto LAB_01e22e61;
      }
    }
  }
  *(void*)(this_ptr + 0x54) = *(void*)(this_ptr + 0x44);
  *(void*)(this_ptr + 0x5c) = *(void*)(this_ptr + 0x4c);
  *(float *)(this_ptr + 0x58) = *(float *)(this_ptr + 0x50) + *(float *)(this_ptr + 0x58);
  auVar15._4_4_ = fStack_a4;
  auVar15._0_4_ = local_a8;
  auVar15._8_4_ = uStack_a0;
  auVar15._12_4_ = uStack_9c;
  uVar11 = extractps(auVar15,1);
  *(void*)(this_ptr + 0x60) = uVar11;
LAB_01e22e61:
  fStack_10c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  uVar11 = FUN_00d052e0(*(void*)(this_ptr + 0x44),*(void*)(this_ptr + 0x4c),
                        (int)*(void*)(this_ptr + 0x54),
                        (int)*(void*)(this_ptr + 0x5c));
  if (g_028b9519 == '\0') {
    uVar11 = FUN_00d052e0();
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  }
  else {
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((uint64_t)uVar11 >> 0x20);
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*g_02572370)();
  if (*arg1 == 0) {
    FUN_01ede360(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(uint64_t *)(this_ptr + 0x3c);
    fStack_114 = (float)((uint64_t)param_1 >> 0x20);
    auVar15 = insertps(auVar17,ZEXT416((uint)((g_02390d00 + fStack_114) -
                                             (float)((uint64_t)*(void*)(this_ptr + 0x34) >>
                                                    0x20))),0x10);
    FUN_01ede360(0,auVar15._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(uint64_t *)(this_ptr + 0x34);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(uint64_t *)(this_ptr + 0x3c);
    fVar20 = (float)(*(uint64_t *)(this_ptr + 0x3c) >> 0x20) -
             (fStack_114 - (float)(*(uint64_t *)(this_ptr + 0x34) >> 0x20));
    fVar21 = 0.0 - (fStack_10c - 0.0);
    auVar6._4_4_ = fStack_114;
    auVar6._0_4_ = fStack_114 + g_02390124;
    auVar6._8_4_ = fStack_10c;
    auVar6._12_4_ = fStack_10c;
    auVar15 = insertps(auVar12,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + g_02390d00;
    auVar5._8_4_ = fVar21;
    auVar5._12_4_ = fVar21;
    auVar17 = insertps(auVar16,auVar5,0x10);
    FUN_01ede360(auVar15._0_8_,auVar17._0_8_,0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ede360(*(void*)(this_ptr + 0x34),*(void*)(this_ptr + 0x3c),0);
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar11 = FUN_01edf3b0();
  local_b8 = (float)uVar11;
  fStack_b4 = (float)((uint64_t)uVar11 >> 0x20);
  *(float *)(this_ptr + 0x44) = *(float *)(this_ptr + 0x44) + (local_b8 - local_a8);
  *(float *)(this_ptr + 0x48) = (fStack_b4 - fStack_a4) + *(float *)(this_ptr + 0x48);
  FUN_01e5ba50(*(void*)(this_ptr + 0x44),*(void*)(this_ptr + 0x4c));
  FUN_00d50b20();
  return;
code_r0x01e22b83:
  if ((fStack_a4 != g_023dcd08) ||
     (fVar20 = local_b8, fVar21 = fStack_b4, uVar13 = uStack_b0, uVar14 = uStack_ac,
     uStack_b0 = (int)extraout_XMM0_Qb, uStack_ac = (int)((uint64_t)extraout_XMM0_Qb >> 0x20),
     local_b8 = (float)uVar11, fStack_b4 = (float)((uint64_t)uVar11 >> 0x20),
     NAN(fStack_a4) || NAN(g_023dcd08))) {
LAB_01e22ba0:
    fVar20 = local_a8;
    fVar21 = fStack_a4;
    uVar13 = uStack_a0;
    uVar14 = uStack_9c;
    uVar11 = FUN_00d052e0();
    local_b8 = (float)uVar11;
    fStack_b4 = (float)((uint64_t)uVar11 >> 0x20);
    uStack_b0 = (uint32_t)extraout_XMM0_Qb_00;
    uStack_ac = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar22 = fVar20;
    fVar23 = fVar21;
    uVar18 = uVar13;
    uVar19 = uVar14;
  }
  goto LAB_01e22b25;
LAB_01e22d64:
  FUN_00274dd0();
  goto LAB_01e22d8b;
}

