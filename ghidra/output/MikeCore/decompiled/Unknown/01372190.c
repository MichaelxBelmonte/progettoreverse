// Function: FUN_01372190
// Address: 01372190
// Size: 11250 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01374375) */
/* WARNING: Removing unreachable block (ram,0x01374381) */
/* WARNING: Removing unreachable block (ram,0x01374162) */
/* WARNING: Removing unreachable block (ram,0x0137416e) */
/* WARNING: Removing unreachable block (ram,0x01373fe2) */
/* WARNING: Removing unreachable block (ram,0x01373fee) */
/* WARNING: Removing unreachable block (ram,0x01373def) */
/* WARNING: Removing unreachable block (ram,0x01373dfb) */
/* WARNING: Removing unreachable block (ram,0x01373863) */
/* WARNING: Removing unreachable block (ram,0x0137386f) */
/* WARNING: Removing unreachable block (ram,0x01372d17) */
/* WARNING: Removing unreachable block (ram,0x01372d23) */
/* WARNING: Removing unreachable block (ram,0x01372d31) */
/* WARNING: Removing unreachable block (ram,0x01372d3d) */
/* WARNING: Removing unreachable block (ram,0x01373b12) */
/* WARNING: Removing unreachable block (ram,0x01373b1e) */
/* WARNING: Removing unreachable block (ram,0x01373e78) */
/* WARNING: Removing unreachable block (ram,0x01373e84) */
/* WARNING: Removing unreachable block (ram,0x0137405d) */
/* WARNING: Removing unreachable block (ram,0x01374069) */
/* WARNING: Removing unreachable block (ram,0x013741f1) */
/* WARNING: Removing unreachable block (ram,0x013741fd) */
/* WARNING: Removing unreachable block (ram,0x013743f0) */
/* WARNING: Removing unreachable block (ram,0x013743fc) */
/* WARNING: Removing unreachable block (ram,0x01373b89) */
/* WARNING: Removing unreachable block (ram,0x01373b95) */
/* WARNING: Removing unreachable block (ram,0x01373bf8) */
/* WARNING: Removing unreachable block (ram,0x01373c04) */
/* WARNING: Removing unreachable block (ram,0x01373c6f) */
/* WARNING: Removing unreachable block (ram,0x01373c7b) */

void FUN_01372190(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong **pplVar11;
  int7 iVar13;
  ulonglong uVar12;
  uint uVar14;
  pthread_key_t pVar16;
  longlong lVar17;
  undefined *puVar18;
  longlong *plVar19;
  longlong **pplVar20;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar21;
  ulonglong unaff_R13;
  undefined7 uVar23;
  undefined8 *puVar22;
  ulonglong uVar24;
  bool bVar25;
  float fVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar28;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_320;
  undefined1 local_318;
  longlong *local_310;
  undefined1 local_308;
  longlong *local_300;
  undefined1 local_2f8;
  longlong *local_2f0;
  undefined1 local_2e8;
  undefined8 *local_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 *local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  double local_298;
  longlong *local_190;
  char local_188;
  undefined8 *local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 *local_110;
  code *local_108;
  undefined *local_100;
  double local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  char local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  char local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 *local_40;
  int iVar15;
  
  if ((((*(int *)(*param_2 + 0xc) < 2) || (*(longlong *)(unaff_RSI + 0x1f8) != 0)) ||
      (*(longlong *)(unaff_RSI + 0x200) != 0)) || (*(longlong *)(unaff_RSI + 0x148) == 0)) {
LAB_013721cf:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_160 = param_1;
  local_48 = param_2;
  pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar5 = FUN_0141bab0();
  if (iVar5 != 3) goto LAB_013721cf;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar16 = 0x2572358;
  local_100 = &DAT_02572358;
  *puVar7 = &DAT_02572358;
  local_108 = DAT_02572370;
  local_110 = puVar7;
  (*DAT_02572370)();
  lVar8 = *local_48;
  if (*(int *)(lVar8 + 0xc) < 1) {
    local_40 = (undefined8 *)0x0;
    local_50 = (longlong *)0x0;
    local_a0 = (undefined8 *)((ulonglong)local_a0._4_4_ << 0x20);
    local_60 = (longlong *)0x0;
  }
  else {
    local_90 = (longlong *)0x0;
    local_c8 = DAT_023b2568;
    lVar21 = 0;
    local_60 = (longlong *)0x0;
    local_a0 = (undefined8 *)((ulonglong)local_a0._4_4_ << 0x20);
    local_50 = (longlong *)0x0;
    lVar17 = 0;
    local_40 = (undefined8 *)0x0;
    do {
      pVar16 = (pthread_key_t)lVar17;
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar21 * 8);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar16);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar19 = local_88;
      if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      local_80[0] = '\0';
      local_88 = plVar19;
      FUN_00d21140();
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar16);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar27 = (double)FUN_014bb3e0();
      if (dVar27 < (double)local_c8) {
        uVar23 = (undefined7)(unaff_R13 >> 8);
        if (plVar19 == local_60) {
          if (((char)local_a0 == '\0') && (plVar19 != (longlong *)0x0)) {
            unaff_R13 = CONCAT71(uVar23,1);
            FUN_00d50b00();
          }
          else {
            unaff_R13 = (ulonglong)local_a0 & 0xffffffff;
          }
        }
        else {
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_R13 = CONCAT71(uVar23,1);
          if (((char)local_a0 == '\0') || (local_60 == (longlong *)0x0)) {
            local_60 = plVar19;
          }
          else {
            FUN_00d50b20();
            local_60 = plVar19;
          }
        }
        pvVar6 = _pthread_getspecific(pVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_c8 = (longlong *)FUN_014bb3e0();
        local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(int)unaff_R13);
      }
      pvVar6 = _pthread_getspecific(pVar16);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar27 = (double)FUN_014bb4b0();
      if ((double)local_90 < dVar27) {
        uVar23 = (undefined7)(unaff_R13 >> 8);
        if (plVar19 == local_50) {
          if (((char)local_40 == '\0') && (plVar19 != (longlong *)0x0)) {
            unaff_R13 = CONCAT71(uVar23,1);
            FUN_00d50b00();
          }
          else {
            unaff_R13 = (ulonglong)local_40 & 0xffffffff;
          }
        }
        else {
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          unaff_R13 = CONCAT71(uVar23,1);
          if (((char)local_40 == '\0') || (local_50 == (longlong *)0x0)) {
            local_50 = plVar19;
          }
          else {
            FUN_00d50b20();
            local_50 = plVar19;
          }
        }
        pvVar6 = _pthread_getspecific(pVar16);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (longlong *)FUN_014bb4b0();
        local_40 = (undefined8 *)(unaff_R13 & 0xffffffff);
      }
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar21 = lVar21 + 1;
      lVar8 = *local_48;
      pVar16 = *(pthread_key_t *)(lVar8 + 0xc);
      lVar17 = (longlong)(int)pVar16;
    } while (lVar21 < lVar17);
  }
  if ((*local_160 == 0) || (*(int *)(*local_160 + 0xc) == 0)) {
    bVar2 = false;
    local_120 = (longlong *)0x0;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar16);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    local_120 = local_88;
    if (local_88 == (longlong *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (((local_80[0] == '\0') && (FUN_00d50b00(), local_80[0] != '\0')) &&
         (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar18 = &DAT_025683c0;
  *puVar7 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_128 = puVar7;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  lVar8 = *local_48;
  local_138 = puVar7;
  if (0 < *(int *)(lVar8 + 0xc)) {
    puVar7 = (undefined8 *)0x0;
    do {
      puVar22 = *(undefined8 **)(*(longlong *)(lVar8 + 0x10) + (longlong)puVar7 * 8);
      if (puVar22 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar19 = local_88;
      if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc340();
      plVar9 = local_88;
      local_d0 = puVar7;
      if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      local_c8 = plVar9;
      pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfdd0();
      plVar9 = local_88;
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar10 = local_c8;
      if (plVar9 == (longlong *)0x0) {
        local_f8 = 0.0;
        local_90 = (longlong *)0x0;
      }
      else {
        pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013e5500();
        plVar9 = local_88;
        if (local_88 == (longlong *)0x0) {
          plVar9 = (longlong *)0x0;
          local_f8 = 0.0;
        }
        else {
          local_f8 = (double)CONCAT71((int7)((ulonglong)local_88 >> 8),1);
          if (((local_80[0] == '\0') && (FUN_00d50b00(), local_80[0] != '\0')) &&
             (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_80[0] = '\0';
        local_90 = plVar9;
        local_88 = plVar9;
        FUN_00d21140();
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar10 != (longlong *)0x0) {
        local_88 = plVar10;
        local_80[0] = '\0';
        bVar3 = FUN_00d23d70();
        plVar9 = local_90;
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = local_c8;
        if ((bVar3 & plVar9 != (longlong *)0x0) == 1) {
          pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar26 = (float)FUN_014bae60();
          if (DAT_02391094 < fVar26) {
            local_a8 = plVar19;
            pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              plVar19 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
            }
            lVar8 = (**(code **)(*plVar19 + 0x380))();
            uVar28 = extraout_XMM0_Qa;
            if (0 < *(int *)((longlong)local_110 + 0xc)) {
              lVar17 = 0;
              bVar25 = false;
              local_b0 = puVar22;
              do {
                plVar19 = *(longlong **)(local_110[2] + lVar17 * 8);
                if (plVar19 != (longlong *)0x0) {
                  uVar28 = FUN_00d50b00();
                }
                iVar5 = 10;
                if ((local_a8 != plVar19) && (local_c8 != plVar19)) {
                  pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
                  plVar9 = plVar19;
                  if ((pvVar6 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
                    plVar9 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4];
                  }
                  lVar21 = (**(code **)(*plVar9 + 0x380))();
                  uVar28 = extraout_XMM0_Qa_00;
                  if (lVar21 < lVar8) {
                    pvVar6 = _pthread_getspecific((pthread_key_t)puVar18);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    lVar21 = FUN_014bb590();
                    uVar28 = extraout_XMM0_Qa_01;
                    if (lVar8 < lVar21) {
                      iVar5 = 8;
                      bVar25 = true;
                      goto joined_r0x01372b93;
                    }
                  }
                  iVar5 = 0;
                }
joined_r0x01372b93:
                if (plVar19 != (longlong *)0x0) {
                  uVar28 = FUN_00d50b20();
                }
              } while (((iVar5 == 10) || (iVar5 == 0)) &&
                      (lVar17 = lVar17 + 1, lVar17 < *(int *)((longlong)local_110 + 0xc)));
              puVar22 = local_b0;
              plVar19 = local_a8;
              plVar10 = local_c8;
              if (bVar25) goto LAB_01372c10;
            }
            puVar7 = local_128;
            iVar5 = *(int *)(local_128 + 3);
            FUN_00c8e340(uVar28,1);
            *(longlong *)(puVar7[2] + (longlong)iVar5) = lVar8;
            plVar19 = local_a8;
            plVar10 = local_c8;
          }
        }
      }
LAB_01372c10:
      if ((local_f8._0_1_ != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar7 = local_d0;
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (puVar22 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      lVar8 = *local_48;
      puVar18 = (undefined *)(longlong)*(int *)(lVar8 + 0xc);
    } while ((longlong)puVar7 < (longlong)puVar18);
  }
  local_150 = 0;
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  plVar19 = &local_158;
  local_158 = unaff_RSI;
  FUN_014e1210(DAT_023934c8);
  local_130 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
       (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if (local_130 == (longlong *)0x0) {
    bVar25 = true;
    goto LAB_01374d52;
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar19 = local_60;
  }
  FUN_014bc340();
  local_d8 = local_88;
  if ((((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar19 = local_50;
  }
  FUN_014bc420();
  local_e0 = local_88;
  if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar19 = local_60;
  }
  FUN_014d26a0();
  local_e8 = local_88;
  if ((((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar19 = local_50;
  }
  FUN_014d25c0();
  local_f0 = local_88;
  if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  plVar9 = local_60;
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar9 = local_60, lVar8 != 0)) {
    plVar19 = local_60;
    plVar9 = (longlong *)local_60[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  local_118 = (longlong *)(**(code **)(*plVar9 + 0x380))();
  pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
  if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar19 = local_50;
  }
  local_2a0 = FUN_014bb590();
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar9 = (longlong)local_100;
  (*local_108)();
  local_c8 = plVar9;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  uVar14 = (uint)plVar19;
  lVar8 = *(longlong *)(unaff_RSI + 0x40);
  local_b0 = puVar7;
  if (0 < *(int *)(lVar8 + 0xc)) {
    puVar7 = (undefined8 *)0x0;
    do {
      plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x10) + (longlong)puVar7 * 8);
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_90 = plVar9;
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      plVar9 = local_88;
      local_98 = puVar7;
      if ((((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_58 = plVar9;
      pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      plVar9 = local_88;
      if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      if (0 < *(int *)((longlong)plVar9 + 0xc)) {
        lVar8 = 0;
        local_a8 = plVar9;
        do {
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          plVar9 = local_88;
          if (((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_80[0] != '\0' && (local_88 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar10 = local_88;
          if (local_80[0] == '\0') {
            if (local_88 != (longlong *)0x0) {
              FUN_00d50b00();
              if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01373290;
            }
          }
          else if (local_88 != (longlong *)0x0) {
LAB_01373290:
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f8 = (double)FUN_0125a280();
            pvVar6 = _pthread_getspecific((pthread_key_t)plVar19);
            if ((pvVar6 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              plVar19 = local_90;
            }
            local_d0 = (undefined8 *)FUN_013de8d0();
            local_80[0] = '\0';
            local_88 = plVar10;
            cVar4 = FUN_00d24090();
            if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              local_80[0] = '\0';
              local_88 = plVar10;
              FUN_00d21140();
              if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d470c0(local_f8 - (double)local_d0);
              plVar10 = local_c0;
              if (local_b8 == '\0') {
                if (local_c0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_b8 = '\0';
              }
              local_88 = plVar10;
              local_80[0] = '\0';
              FUN_00d21140();
              if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          if (plVar9 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((longlong)local_a8 + 0xc));
      }
      FUN_00d50b20();
      plVar19 = local_90;
      puVar7 = local_98;
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar19 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      lVar8 = *(longlong *)(unaff_RSI + 0x40);
      uVar14 = *(uint *)(lVar8 + 0xc);
      plVar19 = (longlong *)(longlong)(int)uVar14;
    } while ((longlong)puVar7 < (longlong)plVar19);
  }
  lVar8 = *local_48;
  if (0 < *(int *)(lVar8 + 0xc)) {
    lVar17 = 0;
    do {
      lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar17 * 8);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      FUN_01353c30();
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar8 = *local_48;
      uVar14 = *(uint *)(lVar8 + 0xc);
    } while (lVar17 < (int)uVar14);
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  lVar8 = *(longlong *)(unaff_RSI + 0x1a0);
  local_d0 = puVar7;
  if (lVar8 == 0) {
    FUN_0132d640();
    lVar8 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  uVar1 = *(uint *)(lVar8 + 0x30);
  uVar12 = (ulonglong)uVar1;
  FUN_00d50b20();
  iVar5 = *(int *)(local_128 + 3);
  uVar24 = 0;
  if (iVar5 < -7) {
    local_90 = (longlong *)0x0;
    plVar19 = (longlong *)0x0;
  }
  else {
    local_298 = (double)(int)uVar1;
    iVar15 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar15 = iVar5;
    }
    uVar14 = iVar15 >> 3;
    local_48 = (longlong *)
               CONCAT44(local_48._4_4_,(int)CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1));
    dVar27 = 0.0;
    local_58 = (longlong *)0x0;
    local_a8 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    do {
      plVar19 = local_a8;
      iVar5 = (int)uVar24;
      uVar12 = uVar24;
      local_f8 = dVar27;
      if ((longlong)dVar27 < (longlong)(int)uVar14) {
        uVar14 = FUN_00e7d850((double)*(longlong *)(local_128[2] + (longlong)dVar27 * 8) / local_298
                             );
        if (0 < (int)*(uint *)((longlong)local_130 + 0xc)) {
          uVar24 = 0;
          do {
            if (*(uint *)(*(longlong *)(local_130[2] + uVar24 * 8) + 0xc) == uVar14)
            goto LAB_01373749;
            uVar24 = uVar24 + 1;
          } while (*(uint *)((longlong)local_130 + 0xc) != uVar24);
        }
      }
      else {
        uVar24 = (ulonglong)*(uint *)((longlong)local_130 + 0xc);
        local_58 = (longlong *)CONCAT71((int7)((ulonglong)local_130 >> 8),1);
        if (*(uint *)((longlong)local_130 + 0xc) != 0xffffffff) {
LAB_01373749:
          uVar12 = (ulonglong)uVar14;
          puVar7 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar7 = local_100;
          (*local_108)();
          pVar16 = (pthread_key_t)uVar12;
          local_98 = puVar7;
          if (iVar5 < (int)uVar24) {
            lVar8 = (longlong)iVar5;
            iVar5 = (int)uVar24 - iVar5;
            do {
              plVar19 = *(longlong **)(local_130[2] + lVar8 * 8);
              if (plVar19 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_80[0] = '\0';
              local_88 = plVar19;
              FUN_00d21140();
              if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar19 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              pVar16 = (pthread_key_t)uVar12;
              lVar8 = lVar8 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          plVar9 = (longlong *)FUN_00e8fc40();
          FUN_010fe5f0();
          (**(code **)(*plVar9 + 0x18))();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2990();
          plVar10 = (longlong *)FUN_0134c2c0();
          FUN_00d23340();
          plVar19 = local_88;
          local_c0 = (longlong *)CONCAT71(local_c0._1_7_,local_80[0]);
          pplVar20 = &local_c0;
          pplVar11 = (longlong **)local_80;
          if (local_80[0] == '\0') {
            pplVar11 = pplVar20;
          }
          *(char *)pplVar11 = '\0';
          if ((local_80[0] != '\0') && (plVar19 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar16 = (pthread_key_t)pplVar20;
          FUN_0134c2c0();
          if ((char)local_c0 != '\0') {
            FUN_00d50b20();
          }
          if (((ulonglong)local_48 & 1) != 0) {
            plVar10 = local_118;
          }
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bb250();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bb2b0();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar6 = _pthread_getspecific(pVar16);
          plVar19 = plVar9;
          if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar19 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar19 + 0x388))();
          FUN_014bcf80();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bfad0();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc170(DAT_02390124);
          local_80[0] = '\0';
          local_88 = plVar9;
          FUN_00d21140();
          if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (longlong *)0x0) {
            pvVar6 = _pthread_getspecific(pVar16);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc2e0();
            pvVar6 = _pthread_getspecific(pVar16);
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar16 = (pthread_key_t)local_90;
            }
            FUN_014bc360();
            pvVar6 = _pthread_getspecific(pVar16);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014d25e0();
            pvVar6 = _pthread_getspecific(pVar16);
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              pVar16 = (pthread_key_t)local_90;
            }
            FUN_014d2640();
            pvVar6 = _pthread_getspecific(pVar16);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc3d0();
          }
          if (plVar9 == local_90) {
            plVar19 = local_a8;
            plVar9 = local_90;
            if ((char)local_a8 == '\0') {
              uVar12 = (ulonglong)local_a8 >> 8;
              FUN_00d50b00();
              plVar19 = (longlong *)CONCAT71((int7)uVar12,1);
              plVar9 = local_90;
            }
          }
          else {
            FUN_00d50b00();
            plVar19 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
            if (((char)local_a8 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_90 = plVar9;
          FUN_00d50b20();
          FUN_00d50b20();
          uVar12 = uVar24;
        }
      }
      dVar27 = (double)((longlong)local_f8 + 1);
      iVar5 = *(int *)(local_128 + 3);
      iVar15 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar15 = iVar5;
      }
      uVar14 = iVar15 >> 3;
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
      uVar24 = uVar12 & 0xffffffff;
      local_a8 = (longlong *)((ulonglong)plVar19 & 0xffffffff);
    } while ((longlong)local_f8 < (longlong)(int)uVar14);
  }
  local_118 = plVar19;
  if (local_d8 == (longlong *)0x0) {
    plVar19 = (longlong *)((ulonglong)local_a0 & 0xffffffff);
  }
  else {
    plVar9 = *(longlong **)local_d0[2];
    uVar24 = (ulonglong)local_a0 & 0xffffffff;
    uVar23 = (undefined7)(uVar12 >> 8);
    cVar4 = (char)local_a0;
    if (local_60 == plVar9) {
      if ((cVar4 == '\0') && (local_60 != (longlong *)0x0)) {
        plVar19 = (longlong *)CONCAT71(uVar23,1);
        FUN_00d50b00();
        plVar9 = local_60;
      }
      else {
        plVar19 = (longlong *)((ulonglong)local_a0 & 0xffffffff);
        plVar9 = local_60;
      }
    }
    else {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar19 = (longlong *)CONCAT71(uVar23,1);
      if ((cVar4 != '\0') && (local_60 != (longlong *)0x0)) {
        local_60 = plVar9;
        FUN_00d50b20();
        plVar9 = local_60;
      }
    }
    local_60 = plVar9;
    local_58._0_1_ = (char)local_40;
    pvVar6 = _pthread_getspecific(uVar14);
    if (pvVar6 != (void *)0x0) {
      local_58._0_1_ = SUB81(local_40,0);
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        uVar14 = (uint)local_60;
      }
    }
    FUN_014bc2e0();
    local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
    pvVar6 = _pthread_getspecific(uVar14);
    if (pvVar6 != (void *)0x0) {
      local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        uVar14 = (uint)local_d8;
      }
    }
    FUN_014bc360();
  }
  if (local_e0 != (longlong *)0x0) {
    FUN_00d23340();
    plVar9 = local_88;
    local_c0 = (longlong *)CONCAT71(local_c0._1_7_,local_80[0]);
    pplVar20 = (longlong **)local_80;
    pplVar11 = &local_c0;
    if (local_80[0] != '\0') {
      pplVar11 = pplVar20;
    }
    *(undefined1 *)pplVar11 = 0;
    if ((local_80[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = (uint)pplVar20;
    if (plVar9 == local_50) {
      if (((char)local_40 == '\0') && (plVar9 != (longlong *)0x0)) {
        local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
        if ((char)local_c0 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_c0 == '\0') || (plVar9 == (longlong *)0x0)) {
        local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      }
      else {
        FUN_00d50b20();
        local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      }
    }
    else if ((char)local_c0 == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
      if (((char)local_40 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01373f57;
      local_50 = plVar9;
      FUN_00d50b20();
    }
    else {
      local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
      if (((char)local_40 == '\0') || (local_50 == (longlong *)0x0)) {
LAB_01373f57:
        local_50 = plVar9;
      }
      else {
        FUN_00d50b20();
        local_50 = plVar9;
      }
    }
    pvVar6 = _pthread_getspecific(uVar14);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      uVar14 = (uint)local_50;
    }
    FUN_014bc360();
    pvVar6 = _pthread_getspecific(uVar14);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      uVar14 = (uint)local_e0;
    }
    uVar28 = FUN_014bc2e0();
    local_40 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar28 >> 8),local_58._0_1_);
  }
  if (local_e8 != (longlong *)0x0) {
    plVar9 = *(longlong **)local_d0[2];
    uVar23 = (undefined7)(uVar24 >> 8);
    cVar4 = (char)plVar19;
    if (local_60 == plVar9) {
      if ((cVar4 == '\0') && (local_60 != (longlong *)0x0)) {
        plVar19 = (longlong *)CONCAT71(uVar23,1);
        FUN_00d50b00();
        plVar9 = local_60;
      }
      else {
        plVar19 = (longlong *)((ulonglong)plVar19 & 0xffffffff);
        plVar9 = local_60;
      }
    }
    else {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      plVar19 = (longlong *)CONCAT71(uVar23,1);
      if ((cVar4 != '\0') && (local_60 != (longlong *)0x0)) {
        local_60 = plVar9;
        FUN_00d50b20();
        plVar9 = local_60;
      }
    }
    local_60 = plVar9;
    local_58._0_1_ = (char)local_40;
    pvVar6 = _pthread_getspecific(uVar14);
    if (pvVar6 != (void *)0x0) {
      local_58._0_1_ = SUB81(local_40,0);
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        uVar14 = (uint)local_60;
      }
    }
    FUN_014d25e0();
    local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
    pvVar6 = _pthread_getspecific(uVar14);
    if (pvVar6 != (void *)0x0) {
      local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      FUN_00e8b990();
    }
    FUN_014d2640();
  }
  local_98 = (undefined8 *)CONCAT71(local_98._1_7_,(char)plVar19);
  if (local_f0 == (longlong *)0x0) {
    local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
  }
  else {
    FUN_00d23340();
    plVar9 = local_88;
    pplVar20 = &local_c0;
    pplVar11 = (longlong **)local_80;
    if (local_80[0] == '\0') {
      pplVar11 = pplVar20;
    }
    local_c0 = (longlong *)CONCAT71(local_c0._1_7_,local_80[0]);
    *(undefined1 *)pplVar11 = 0;
    if ((local_80[0] != '\0') && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar16 = (pthread_key_t)pplVar20;
    if (plVar9 == local_50) {
      if (((char)local_40 == '\0') && (plVar9 != (longlong *)0x0)) {
        local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
        if ((char)local_c0 == '\0') {
          FUN_00d50b00();
        }
      }
      else if (((char)local_c0 == '\0') || (plVar9 == (longlong *)0x0)) {
        local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      }
      else {
        FUN_00d50b20();
        local_58 = (longlong *)CONCAT71(local_58._1_7_,(char)local_40);
      }
    }
    else if ((char)local_c0 == '\0') {
      if (plVar9 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
      if (((char)local_40 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_013742ea;
      local_50 = plVar9;
      FUN_00d50b20();
    }
    else {
      local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
      if (((char)local_40 == '\0') || (local_50 == (longlong *)0x0)) {
LAB_013742ea:
        local_50 = plVar9;
      }
      else {
        FUN_00d50b20();
        local_50 = plVar9;
      }
    }
    pvVar6 = _pthread_getspecific(pVar16);
    if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
      pVar16 = (pthread_key_t)local_50;
    }
    FUN_014d2640();
    pvVar6 = _pthread_getspecific(pVar16);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014d25e0();
  }
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar9 = (longlong)local_100;
  (*local_108)();
  local_48 = plVar9;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  local_a0 = puVar7;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  local_40 = puVar7;
  if (0 < *(int *)((longlong)local_d0 + 0xc)) {
    lVar8 = 0;
    do {
      lVar17 = *(longlong *)(local_d0[2] + lVar8 * 8);
      if (lVar17 != 0) {
        FUN_00d50b00();
      }
      local_318 = 1;
      local_310 = local_48;
      local_308 = 0;
      local_190 = local_c8;
      local_188 = '\0';
      local_180 = local_b0;
      local_178 = '\0';
      local_320 = lVar17;
      FUN_01351de0(0,&local_320,&local_310,&local_190);
      plVar9 = local_88;
      if ((local_80[0] == '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_178 != '\0') && (local_180 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar17 != 0) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        local_300 = plVar9;
        local_2f8 = 0;
        FUN_0135d2e0(0);
        plVar19 = local_88;
        if (local_80[0] == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_013745f8;
          }
LAB_0137467f:
          bVar25 = true;
        }
        else {
          if (local_88 == (longlong *)0x0) goto LAB_0137467f;
LAB_013745f8:
          local_80[0] = '\0';
          local_88 = plVar19;
          cVar4 = FUN_00d23d70();
          if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            local_80[0] = 0;
            local_c0 = plVar9;
            local_b8 = '\0';
            local_88 = plVar19;
            FUN_01346520();
            local_80[0] = '\0';
            local_88 = plVar9;
            FUN_00d21140();
            if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          bVar25 = false;
        }
        local_80[0] = '\0';
        local_88 = plVar9;
        FUN_00d21140();
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_2f0 = plVar9;
        local_2e8 = 0;
        FUN_0134aea0();
        if (!bVar25) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)((longlong)local_d0 + 0xc));
  }
  local_2e0 = local_d0;
  local_2d8 = 0;
  FUN_0135d660();
  if (0 < *(int *)((longlong)local_40 + 0xc)) {
    dVar27 = 0.0;
    do {
      lVar8 = *(longlong *)(local_40[2] + (longlong)dVar27 * 8);
      puVar7 = local_40;
      local_f8 = dVar27;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      pVar16 = (pthread_key_t)puVar7;
      pvVar6 = _pthread_getspecific(pVar16);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar6 = _pthread_getspecific(pVar16);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd790();
      local_a8 = local_88;
      if (local_80[0] == '\0') {
        if (((local_88 != (longlong *)0x0) && (FUN_00d50b00(), local_80[0] != '\0')) &&
           (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_80[0] = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_a8 != (longlong *)0x0) {
        local_80[0] = '\0';
        local_88 = (longlong *)0x0;
        local_78 = local_a8;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        while( true ) {
          if (local_70._4_4_ != 0) {
            if (local_70._4_4_ < 1) {
              iVar5 = -local_70._4_4_;
            }
            else {
              iVar5 = (int)local_70 - local_70._4_4_;
              local_70 = CONCAT44(local_70._4_4_,iVar5);
              FUN_00d23690();
              local_68 = local_68 + local_70._4_4_;
              iVar5 = 0;
            }
            local_70 = CONCAT44(iVar5,(int)local_70);
          }
          lVar17 = (longlong)(int)local_70;
          iVar5 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar5);
          if (*(int *)((longlong)local_78 + 0xc) <= iVar5) break;
          lVar21 = local_78[2];
          local_88 = *(longlong **)(lVar21 + 8 + lVar17 * 8);
          pvVar6 = _pthread_getspecific((pthread_key_t)lVar21);
          pVar16 = (pthread_key_t)lVar21;
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          plVar19 = local_c0;
          if (((local_b8 == '\0') && (local_c0 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_b8 != '\0' && (local_c0 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0126f610();
          pvVar6 = _pthread_getspecific(pVar16);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a5f0();
          local_170 = plVar19;
          local_168 = '\0';
          FUN_0039e8b0();
          plVar9 = local_c0;
          local_140 = 0;
          if (local_b8 == '\0') {
            if (local_c0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_140 = '\x01';
          local_148 = plVar9;
          FUN_00e7bdb0();
          FUN_01287c80();
          if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar19 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_0015edf0();
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      dVar27 = (double)((longlong)local_f8 + 1);
    } while ((longlong)dVar27 < (longlong)*(int *)((longlong)local_40 + 0xc));
  }
  local_2c8 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_013469e0(local_40,&local_2c0);
  plVar10 = local_48;
  plVar9 = local_118;
  local_2b0 = local_a0;
  local_2a8 = 0;
  uVar12 = CONCAT71((int7)((ulonglong)plVar19 >> 8),local_98._0_1_);
  FUN_013357a0();
  FUN_00d50b20();
  plVar19 = local_c8;
  if (local_a0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)plVar9 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar19 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_f0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_e8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_e0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  bVar25 = plVar10 == (longlong *)0x0;
  if ((*local_160 == 0) || (plVar10 == (longlong *)0x0)) {
    uVar12 = uVar12 & 0xffffffff;
  }
  else {
    uVar28 = FUN_00d216c0();
    if (0 < *(int *)((longlong)plVar10 + 0xc)) {
      lVar8 = 0;
      do {
        plVar19 = *(longlong **)(plVar10[2] + lVar8 * 8);
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar9 = local_88;
        if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar9 == local_120) {
          local_80[0] = '\0';
          local_88 = plVar19;
          FUN_00d21140();
          if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar19 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        plVar10 = local_48;
      } while (lVar8 < *(int *)((longlong)local_48 + 0xc));
      bVar25 = false;
      iVar13 = (int7)(int3)((uint)*(int *)((longlong)local_48 + 0xc) >> 8);
      local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(int)CONCAT71(iVar13,local_98._0_1_));
      local_40 = (undefined8 *)CONCAT71(iVar13,local_58._0_1_);
      goto LAB_01374d52;
    }
    bVar25 = false;
    uVar12 = CONCAT71((int7)((ulonglong)uVar28 >> 8),local_98._0_1_);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,(int)uVar12);
  local_40 = (undefined8 *)CONCAT71((int7)(uVar12 >> 8),local_58._0_1_);
LAB_01374d52:
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = local_100;
  (*local_108)();
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_130 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_138 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_128 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_120 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar25) {
    FUN_00d50b20();
  }
  uVar12 = (ulonglong)local_a0;
  if (((char)local_40 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)uVar12 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_110 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


