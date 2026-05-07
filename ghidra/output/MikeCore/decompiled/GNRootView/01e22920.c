// Function: FUN_01e22920
// Address: 01e22920
// Size: 2356 bytes
// Class: GNRootView


/* WARNING: Removing unreachable block (ram,0x01e22af1) */
/* WARNING: Removing unreachable block (ram,0x01e23239) */
/* WARNING: Removing unreachable block (ram,0x01e23153) */
/* WARNING: Removing unreachable block (ram,0x01e2315c) */
/* WARNING: Removing unreachable block (ram,0x01e22fdb) */
/* WARNING: Removing unreachable block (ram,0x01e22fe4) */
/* WARNING: Removing unreachable block (ram,0x01e22c79) */
/* WARNING: Removing unreachable block (ram,0x01e22c85) */
/* WARNING: Removing unreachable block (ram,0x01e22f78) */
/* WARNING: Removing unreachable block (ram,0x01e22f81) */
/* WARNING: Removing unreachable block (ram,0x01e23090) */
/* WARNING: Removing unreachable block (ram,0x01e23099) */
/* WARNING: Removing unreachable block (ram,0x01e231ba) */
/* WARNING: Removing unreachable block (ram,0x01e231c6) */
/* WARNING: Removing unreachable block (ram,0x01e23245) */
/* WARNING: Removing unreachable block (ram,0x01e22ab6) */
/* WARNING: Removing unreachable block (ram,0x01e22abf) */
/* WARNING: Removing unreachable block (ram,0x01e22a3c) */
/* WARNING: Removing unreachable block (ram,0x01e22a59) */
/* WARNING: Removing unreachable block (ram,0x01e22a3e) */
/* WARNING: Removing unreachable block (ram,0x01e22a5b) */
/* WARNING: Removing unreachable block (ram,0x01e22b00) */
/* WARNING: Removing unreachable block (ram,0x01e22b20) */
/* WARNING: Removing unreachable block (ram,0x01e22b02) */
/* WARNING: Removing unreachable block (ram,0x01e22b22) */
/* WARNING: Removing unreachable block (ram,0x01e22c36) */
/* WARNING: Removing unreachable block (ram,0x01e22c3f) */

void FUN_01e22920(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar13;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined4 uVar14;
  undefined1 auVar12 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  int local_68;
  longlong local_58;
  char local_50;
  int local_40;
  
  if (((((*(float *)(unaff_RDI + 100) != DAT_023dccfc) ||
        (NAN(*(float *)(unaff_RDI + 100)) || NAN(DAT_023dccfc))) ||
       (*(float *)(unaff_RDI + 0x68) != DAT_023dcd00)) ||
      ((NAN(*(float *)(unaff_RDI + 0x68)) || NAN(DAT_023dcd00) ||
       (*(float *)(unaff_RDI + 0x6c) != DAT_023dcd04)))) ||
     ((NAN(*(float *)(unaff_RDI + 0x6c)) || NAN(DAT_023dcd04) ||
      ((*(float *)(unaff_RDI + 0x70) != DAT_023dcd08 ||
       (NAN(*(float *)(unaff_RDI + 0x70)) || NAN(DAT_023dcd08))))))) goto LAB_01e22e61;
  local_b8 = DAT_023dccfc;
  fStack_b4 = DAT_023dcd00;
  uVar13 = 0;
  uVar14 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  local_98 = DAT_023dcd04;
  fStack_94 = DAT_023dcd08;
  if (lVar2 != 0) {
    local_68 = -1;
    uStack_b0 = 0;
    uStack_ac = 0;
    local_a8 = DAT_023dcd04;
    fStack_a4 = DAT_023dcd08;
    uStack_a0 = 0;
    uStack_9c = 0;
    fVar20 = DAT_023dcd04;
    fVar21 = DAT_023dcd08;
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
        lVar10 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (local_40 < *(int *)(lVar4 + 0xc)) {
          lVar3 = *(longlong *)(lVar4 + 0x10);
          local_58 = *(longlong *)(lVar3 + 8 + lVar10 * 8);
          fVar22 = fVar20;
          fVar23 = fVar21;
          uVar18 = uVar13;
          uVar19 = uVar14;
          uVar11 = FUN_01e21df0(lVar3,local_40);
          if ((((local_b8 == DAT_023dccfc) && (!NAN(local_b8) && !NAN(DAT_023dccfc))) &&
              (fStack_b4 == DAT_023dcd00)) &&
             (((!NAN(fStack_b4) && !NAN(DAT_023dcd00) && (local_a8 == DAT_023dcd04)) &&
              (!NAN(local_a8) && !NAN(DAT_023dcd04))))) goto code_r0x01e22b83;
          goto LAB_01e22ba0;
        }
        FUN_00274dd0();
        FUN_00d50b20();
      }
      if (DAT_028b9519 == '\0') {
        FUN_01e25fd0();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01e22a38;
          FUN_00d50b00();
        }
        else if (local_58 == 0) goto LAB_01e22a38;
        (**(code **)(*DAT_028b94f8 + 0x918))();
        FUN_01e22190();
        lVar4 = DAT_028b94f8[0x2d];
        fVar22 = local_98;
        fVar23 = fStack_94;
        if ((lVar4 != 0) && (0xf < *(int *)(lVar4 + 0x18))) {
          iVar9 = 0;
          lVar10 = 8;
          fVar20 = local_f8;
          fVar21 = fStack_f4;
          do {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + -8 + lVar10);
            local_f8 = (float)uVar11;
            fStack_f4 = (float)((ulonglong)uVar11 >> 0x20);
            uVar13 = 0;
            uVar14 = 0;
            uVar11 = *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + lVar10);
            fVar22 = (float)uVar11;
            fVar23 = (float)((ulonglong)uVar11 >> 0x20);
            if ((((fVar20 != DAT_023dccfc) || (NAN(fVar20) || NAN(DAT_023dccfc))) ||
                (fVar21 != DAT_023dcd00)) ||
               (((NAN(fVar21) || NAN(DAT_023dcd00) || (local_98 != DAT_023dcd04)) ||
                (NAN(local_98) || NAN(DAT_023dcd04))))) {
LAB_01e22d20:
              fVar22 = local_98;
              fVar23 = fStack_94;
              uVar11 = FUN_00d052e0();
              local_f8 = (float)uVar11;
              fStack_f4 = (float)((ulonglong)uVar11 >> 0x20);
              uVar13 = (undefined4)extraout_XMM0_Qb_01;
              uVar14 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
            }
            else if ((fStack_94 != DAT_023dcd08) || (NAN(fStack_94) || NAN(DAT_023dcd08)))
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
  local_a8 = DAT_023dcd04;
  fStack_a4 = DAT_023dcd08;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_f8 = DAT_023dccfc;
  fStack_f4 = DAT_023dcd00;
LAB_01e22d8b:
  if (((((local_f8 != DAT_023dccfc) || (NAN(local_f8) || NAN(DAT_023dccfc))) ||
       (fStack_f4 != DAT_023dcd00)) ||
      ((NAN(fStack_f4) || NAN(DAT_023dcd00) || (local_98 != DAT_023dcd04)))) ||
     (NAN(local_98) || NAN(DAT_023dcd04))) {
LAB_01e22dbd:
    FUN_00d051c0();
    *(float *)(unaff_RDI + 0x6c) = local_98;
    *(float *)(unaff_RDI + 0x70) = fStack_94;
    *(undefined4 *)(unaff_RDI + 100) = *(undefined4 *)(unaff_RDI + 0x44);
    *(float *)(unaff_RDI + 0x68) = *(float *)(unaff_RDI + 0x48) - fStack_94;
  }
  else if ((fStack_94 != DAT_023dcd08) || (NAN(fStack_94) || NAN(DAT_023dcd08))) goto LAB_01e22dbd;
  if ((local_b8 == DAT_023dccfc) && (!NAN(local_b8) && !NAN(DAT_023dccfc))) {
    if ((fStack_b4 == DAT_023dcd00) && (!NAN(fStack_b4) && !NAN(DAT_023dcd00))) {
      if ((local_a8 == DAT_023dcd04) && (!NAN(local_a8) && !NAN(DAT_023dcd04))) {
        if ((fStack_a4 == DAT_023dcd08) && (!NAN(fStack_a4) && !NAN(DAT_023dcd08)))
        goto LAB_01e22e61;
      }
    }
  }
  *(undefined8 *)(unaff_RDI + 0x54) = *(undefined8 *)(unaff_RDI + 0x44);
  *(undefined8 *)(unaff_RDI + 0x5c) = *(undefined8 *)(unaff_RDI + 0x4c);
  *(float *)(unaff_RDI + 0x58) = *(float *)(unaff_RDI + 0x50) + *(float *)(unaff_RDI + 0x58);
  auVar15._4_4_ = fStack_a4;
  auVar15._0_4_ = local_a8;
  auVar15._8_4_ = uStack_a0;
  auVar15._12_4_ = uStack_9c;
  uVar11 = extractps(auVar15,1);
  *(undefined8 *)(unaff_RDI + 0x60) = uVar11;
LAB_01e22e61:
  fStack_10c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  uVar11 = FUN_00d052e0(*(undefined8 *)(unaff_RDI + 0x44),*(undefined8 *)(unaff_RDI + 0x4c),
                        (int)*(undefined8 *)(unaff_RDI + 0x54),
                        (int)*(undefined8 *)(unaff_RDI + 0x5c));
  if (DAT_028b9519 == '\0') {
    uVar11 = FUN_00d052e0();
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((ulonglong)uVar11 >> 0x20);
  }
  else {
    local_a8 = (float)uVar11;
    fStack_a4 = (float)((ulonglong)uVar11 >> 0x20);
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*DAT_02572370)();
  if (*unaff_RSI == 0) {
    FUN_01ede360(*(undefined8 *)(unaff_RDI + 0x34),*(undefined8 *)(unaff_RDI + 0x3c),0);
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
    auVar17._0_8_ = *(ulonglong *)(unaff_RDI + 0x3c);
    fStack_114 = (float)((ulonglong)param_1 >> 0x20);
    auVar15 = insertps(auVar17,ZEXT416((uint)((DAT_02390d00 + fStack_114) -
                                             (float)((ulonglong)*(undefined8 *)(unaff_RDI + 0x34) >>
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
    auVar12._0_8_ = *(ulonglong *)(unaff_RDI + 0x34);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = *(ulonglong *)(unaff_RDI + 0x3c);
    fVar20 = (float)(*(ulonglong *)(unaff_RDI + 0x3c) >> 0x20) -
             (fStack_114 - (float)(*(ulonglong *)(unaff_RDI + 0x34) >> 0x20));
    fVar21 = 0.0 - (fStack_10c - 0.0);
    auVar6._4_4_ = fStack_114;
    auVar6._0_4_ = fStack_114 + DAT_02390124;
    auVar6._8_4_ = fStack_10c;
    auVar6._12_4_ = fStack_10c;
    auVar15 = insertps(auVar12,auVar6,0x10);
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar20 + DAT_02390d00;
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
    FUN_01ede360(*(undefined8 *)(unaff_RDI + 0x34),*(undefined8 *)(unaff_RDI + 0x3c),0);
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
  fStack_b4 = (float)((ulonglong)uVar11 >> 0x20);
  *(float *)(unaff_RDI + 0x44) = *(float *)(unaff_RDI + 0x44) + (local_b8 - local_a8);
  *(float *)(unaff_RDI + 0x48) = (fStack_b4 - fStack_a4) + *(float *)(unaff_RDI + 0x48);
  FUN_01e5ba50(*(undefined8 *)(unaff_RDI + 0x44),*(undefined8 *)(unaff_RDI + 0x4c));
  FUN_00d50b20();
  return;
code_r0x01e22b83:
  if ((fStack_a4 != DAT_023dcd08) ||
     (fVar20 = local_b8, fVar21 = fStack_b4, uVar13 = uStack_b0, uVar14 = uStack_ac,
     uStack_b0 = (int)extraout_XMM0_Qb, uStack_ac = (int)((ulonglong)extraout_XMM0_Qb >> 0x20),
     local_b8 = (float)uVar11, fStack_b4 = (float)((ulonglong)uVar11 >> 0x20),
     NAN(fStack_a4) || NAN(DAT_023dcd08))) {
LAB_01e22ba0:
    fVar20 = local_a8;
    fVar21 = fStack_a4;
    uVar13 = uStack_a0;
    uVar14 = uStack_9c;
    uVar11 = FUN_00d052e0();
    local_b8 = (float)uVar11;
    fStack_b4 = (float)((ulonglong)uVar11 >> 0x20);
    uStack_b0 = (undefined4)extraout_XMM0_Qb_00;
    uStack_ac = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
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


