// Function: FUN_014f0c40
// Address: 014f0c40
// Size: 8250 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x014f2a8f) */
/* WARNING: Removing unreachable block (ram,0x014f2a94) */
/* WARNING: Removing unreachable block (ram,0x014f2095) */
/* WARNING: Removing unreachable block (ram,0x014f20a1) */
/* WARNING: Removing unreachable block (ram,0x014f165a) */
/* WARNING: Removing unreachable block (ram,0x014f1666) */
/* WARNING: Removing unreachable block (ram,0x014f14fa) */
/* WARNING: Removing unreachable block (ram,0x014f1506) */
/* WARNING: Removing unreachable block (ram,0x014f1732) */
/* WARNING: Removing unreachable block (ram,0x014f173e) */
/* WARNING: Removing unreachable block (ram,0x014f29f1) */
/* WARNING: Removing unreachable block (ram,0x014f29fa) */
/* WARNING: Removing unreachable block (ram,0x014f2a07) */
/* WARNING: Removing unreachable block (ram,0x014f0e87) */
/* WARNING: Removing unreachable block (ram,0x014f0e97) */
/* WARNING: Removing unreachable block (ram,0x014f2b4a) */
/* WARNING: Removing unreachable block (ram,0x014f2b56) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f0c40(longlong param_1,int param_2,undefined8 param_3,ulonglong param_4)

{
  undefined4 *puVar1;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  uint uVar26;
  code *pcVar27;
  longlong *plVar28;
  int iVar29;
  bool bVar30;
  int iVar31;
  void *pvVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  longlong lVar35;
  pthread_key_t pVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  int iVar39;
  float *pfVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  int iVar44;
  ulonglong uVar45;
  longlong *plVar46;
  uint uVar47;
  longlong unaff_RSI;
  longlong lVar48;
  int iVar49;
  longlong *unaff_RDI;
  uint uVar50;
  ulonglong uVar51;
  longlong lVar52;
  bool bVar53;
  longlong lVar54;
  int iVar55;
  bool bVar56;
  float fVar57;
  double dVar58;
  double dVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  uint local_res8;
  longlong *local_res10;
  longlong *local_res20;
  float local_17c;
  ulonglong local_140;
  int local_130;
  uint local_12c;
  longlong local_108;
  longlong local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_c8;
  char local_c0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_78;
  longlong local_60;
  longlong local_58;
  longlong *local_40;
  
  plVar28 = local_c8;
  if (*local_res20 == 0) {
    return;
  }
  lVar48 = param_1;
  (**(code **)(*unaff_RDI + 0x378))();
  pvVar32 = _pthread_getspecific((pthread_key_t)lVar48);
  if (pvVar32 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if (local_c0 == '\0') {
    if (local_c8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  dVar59 = *(double *)((longlong)local_c8 + 0x38);
  FUN_00d216c0();
  iVar39 = (int)(DAT_0241b598 / dVar59);
  uVar7 = *(uint *)(unaff_RDI[0x21] + 0xc);
  if ((int)uVar7 < iVar39 * 2) {
    local_60 = 0;
    bVar9 = false;
    local_a8 = 0;
    bVar20 = false;
    local_78 = 0;
    bVar25 = false;
    local_98 = 0;
    bVar19 = false;
    local_a0 = 0;
    bVar21 = false;
    unaff_RDI = (longlong *)0x0;
    bVar53 = false;
    local_40 = (longlong *)0x0;
    bVar30 = false;
    local_108 = 0;
    bVar18 = false;
  }
  else {
    bVar56 = unaff_RSI == 0;
    bVar10 = param_2 < (int)(uVar7 * 6);
    if (bVar10 || bVar56) {
      unaff_RSI = FUN_00e83010();
    }
    if (param_1 == 0) {
      FUN_014efd00();
      if (local_c0 == '\0') {
        FUN_00d50b00();
      }
      bVar18 = true;
      local_108 = (longlong)local_c8;
    }
    else {
      bVar18 = false;
      local_108 = 0;
    }
    local_140 = param_4;
    if (param_4 == 0) {
      dVar58 = DAT_0240de80 / dVar59;
      local_140 = FUN_00e83010();
      local_res8 = (int)dVar58 * 2 + 1;
      uVar45 = FUN_00e83da0();
      if (0 < (int)local_res8) {
        uVar42 = (ulonglong)local_res8;
        if ((local_res8 < 4) ||
           ((local_140 < uVar45 + uVar42 * 4 && (uVar45 < local_140 + uVar42 * 4)))) {
          uVar37 = 0;
        }
        else {
          uVar37 = (ulonglong)(local_res8 & 0xfffffffc);
          uVar41 = 0;
          do {
            auVar61 = *(undefined1 (*) [16])(uVar45 + uVar41 * 4);
            auVar61 = sqrtps(auVar61,auVar61);
            *(undefined1 (*) [16])(local_140 + uVar41 * 4) = auVar61;
            uVar41 = uVar41 + 4;
          } while (uVar37 != uVar41);
        }
        do {
          *(float *)(local_140 + uVar37 * 4) = SQRT(*(float *)(uVar45 + uVar37 * 4));
          uVar37 = uVar37 + 1;
        } while (uVar42 != uVar37);
      }
      FUN_00e83070();
    }
    puVar33 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar33 = &DAT_02572358;
    pcVar27 = DAT_02572370;
    (*DAT_02572370)();
    puVar34 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar34 = &DAT_02572358;
    (*pcVar27)();
    FUN_014c2f20();
    lVar48 = (longlong)(int)uVar7;
    pfVar40 = (float *)(lVar48 * 0x10 + unaff_RSI);
    puVar1 = (undefined4 *)(unaff_RSI + lVar48 * 0x14);
    if ((int)uVar7 < 1) {
      bVar19 = false;
      local_98 = 0;
      bVar9 = false;
    }
    else {
      uVar45 = 0;
      local_98 = 0;
      bVar19 = false;
      do {
        lVar54 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar45 * 8);
        if (local_98 == lVar54) {
          if ((!bVar19) && (local_98 != 0)) {
            bVar19 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar19) && (local_98 != 0)) {
            FUN_00d50b20();
            bVar19 = true;
            local_98 = lVar54;
          }
          else {
            bVar19 = true;
            local_98 = lVar54;
          }
        }
        *(undefined4 *)(unaff_RSI + uVar45 * 4) = *(undefined4 *)(local_98 + 0x14);
        pfVar40[uVar45] = *(float *)(local_98 + 0x18);
        *(undefined4 *)(unaff_RSI + lVar48 * 4 + uVar45 * 4) = *(undefined4 *)(local_98 + 0x1c);
        uVar26 = _UNK_0239014c;
        uVar11 = _UNK_02390148;
        uVar47 = _UNK_02390144;
        uVar50 = _DAT_02390140;
        uVar45 = uVar45 + 1;
      } while (uVar7 != uVar45);
      uVar45 = (ulonglong)(uVar7 - 1);
      bVar9 = 2 < (int)uVar7;
      if (2 < (int)uVar7) {
        fVar57 = *pfVar40;
        uVar42 = uVar45 - 1;
        uVar37 = 1;
        if (7 < uVar42) {
          uVar51 = unaff_RSI + lVar48 * 0x14 + 4;
          uVar41 = unaff_RSI + (lVar48 * 5 + uVar45) * 4;
          lVar54 = lVar48 * 4 + uVar45;
          if (((ulonglong)(unaff_RSI + lVar54 * 4) <= uVar51 ||
               uVar41 <= (lVar48 << 4 | 4U) + unaff_RSI) &&
             (unaff_RSI + lVar54 * 4 + 4U <= uVar51 || uVar41 <= (lVar48 << 4 | 8U) + unaff_RSI)) {
            uVar51 = uVar42 & 0xfffffffffffffff8;
            uVar37 = uVar51 + 1;
            auVar61._4_4_ = fVar57;
            auVar61._0_4_ = fVar57;
            auVar61._8_4_ = fVar57;
            auVar61._12_4_ = fVar57;
            lVar54 = unaff_RSI + lVar48 * 0x10;
            lVar35 = unaff_RSI + lVar48 * 0x14;
            uVar41 = 0;
            do {
              auVar5 = *(undefined1 (*) [16])(lVar54 + 4 + uVar41 * 4);
              pfVar3 = (float *)(lVar54 + 8 + uVar41 * 4);
              fVar60 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              auVar6 = *(undefined1 (*) [16])(lVar54 + 0x14 + uVar41 * 4);
              fVar57 = auVar6._12_4_;
              pfVar2 = (float *)(lVar54 + 0x18 + uVar41 * 4);
              fVar14 = *pfVar2;
              fVar15 = pfVar2[1];
              fVar16 = pfVar2[2];
              fVar17 = pfVar2[3];
              auVar61 = blendps(auVar61,auVar5,7);
              auVar62 = blendps(auVar6,auVar5,8);
              puVar4 = (uint *)(lVar35 + 4 + uVar41 * 4);
              *puVar4 = (uint)((auVar5._0_4_ - auVar61._12_4_) + (*pfVar3 - auVar5._0_4_)) & uVar50;
              puVar4[1] = (uint)((auVar5._4_4_ - auVar61._0_4_) + (fVar60 - auVar5._4_4_)) & uVar47;
              puVar4[2] = (uint)((auVar5._8_4_ - auVar61._4_4_) + (fVar12 - auVar5._8_4_)) & uVar11;
              puVar4[3] = (uint)((auVar5._12_4_ - auVar61._8_4_) + (fVar13 - auVar5._12_4_)) &
                          uVar26;
              puVar4 = (uint *)(lVar35 + 0x14 + uVar41 * 4);
              *puVar4 = (uint)((fVar14 - auVar6._0_4_) + (auVar6._0_4_ - auVar62._12_4_)) & uVar50;
              puVar4[1] = (uint)((fVar15 - auVar6._4_4_) + (auVar6._4_4_ - auVar62._0_4_)) & uVar47;
              puVar4[2] = (uint)((fVar16 - auVar6._8_4_) + (auVar6._8_4_ - auVar62._4_4_)) & uVar11;
              puVar4[3] = (uint)((fVar17 - fVar57) + (fVar57 - auVar62._8_4_)) & uVar26;
              uVar41 = uVar41 + 8;
              auVar61 = auVar6;
            } while (uVar51 != uVar41);
            if (uVar42 == uVar51) goto LAB_014f13df;
          }
        }
        uVar42 = ~uVar37;
        fVar60 = fVar57;
        if ((uVar7 - 1 & 1) == 0) {
          fVar60 = pfVar40[uVar37];
          puVar1[uVar37] =
               (uint)((pfVar40[uVar37 + 1] - fVar60) + (fVar60 - fVar57)) & _DAT_02390140;
          uVar37 = uVar37 + 1;
        }
        uVar50 = _DAT_02390140;
        if (uVar42 + uVar45 != 0) {
          lVar54 = unaff_RSI + lVar48 * 0x10;
          lVar35 = unaff_RSI + lVar48 * 0x14;
          do {
            fVar57 = *(float *)(lVar54 + uVar37 * 4);
            *(uint *)(lVar35 + uVar37 * 4) =
                 (uint)((*(float *)(lVar54 + 4 + uVar37 * 4) - fVar57) + (fVar57 - fVar60)) & uVar50
            ;
            fVar60 = *(float *)(lVar54 + 4 + uVar37 * 4);
            *(uint *)(lVar35 + 4 + uVar37 * 4) =
                 (uint)((*(float *)(lVar54 + 8 + uVar37 * 4) - fVar60) + (fVar60 - fVar57)) & uVar50
            ;
            uVar37 = uVar37 + 2;
          } while (uVar45 != uVar37);
        }
      }
LAB_014f13df:
      if (1 < (int)uVar7) {
        *puVar1 = puVar1[1];
        puVar1[uVar45] = puVar1[uVar7 - 2];
      }
    }
    local_12c = uVar7 - 1;
    FUN_00d216c0();
    FUN_014328b0(DAT_023942d0,(double)*(float *)(unaff_RDI + 0x10));
    if (local_e0 == '\0') {
      if (local_e8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_e0 = '\0';
    }
    FUN_00d21140();
    if (local_e8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d216c0();
    if (bVar9) {
      uVar45 = 1;
      do {
        fVar57 = (float)puVar1[uVar45 - 1];
        fVar60 = (float)puVar1[uVar45];
        if ((fVar60 <= fVar57) && (fVar60 < (float)puVar1[uVar45 + 1])) {
          FUN_01432b10((double)(int)uVar45 + DAT_023942d0,(double)fVar60);
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          fVar57 = (float)puVar1[uVar45 - 1];
          fVar60 = (float)puVar1[uVar45];
        }
        if ((fVar57 <= fVar60) &&
           ((float)puVar1[uVar45 + 1] <= fVar60 && fVar60 != (float)puVar1[uVar45 + 1])) {
          FUN_01432b10((double)(int)uVar45 + DAT_023942d0,(double)fVar60);
          if (local_e0 == '\0') {
            if (local_e8 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar45 = uVar45 + 1;
      } while (local_12c != uVar45);
    }
    dVar59 = DAT_0240de98 / dVar59;
    iVar44 = *(int *)((longlong)puVar33 + 0xc);
    if (iVar44 < 2) {
      local_130 = uVar7 - iVar39;
      local_a8 = 0;
      bVar20 = false;
      bVar9 = false;
      local_60 = 0;
joined_r0x014f1a2f:
      bVar25 = false;
      local_78 = 0;
      if (0 < iVar44) goto LAB_014f1a35;
LAB_014f2359:
      bVar21 = false;
      local_a0 = 0;
    }
    else {
      iVar55 = 0;
      local_60 = 0;
      bVar9 = false;
      local_a8 = 0;
      bVar20 = false;
      do {
        lVar54 = *(longlong *)(puVar33[2] + (longlong)iVar55 * 8);
        if (local_60 == lVar54) {
          if ((!bVar9) && (local_60 != 0)) {
            bVar9 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar9) && (local_60 != 0)) {
            FUN_00d50b20();
            bVar9 = true;
            local_60 = lVar54;
          }
          else {
            bVar9 = true;
            local_60 = lVar54;
          }
        }
        lVar54 = *(longlong *)(puVar33[2] + 8 + (longlong)iVar55 * 8);
        if (local_a8 == lVar54) {
          if ((!bVar20) && (local_a8 != 0)) {
            bVar20 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar54 != 0) {
            FUN_00d50b00();
          }
          if ((bVar20) && (local_a8 != 0)) {
            FUN_00d50b20();
            bVar20 = true;
            local_a8 = lVar54;
          }
          else {
            bVar20 = true;
            local_a8 = lVar54;
          }
        }
        if ((*(double *)(local_60 + 0x20) <= 0.0) || (*(double *)(local_a8 + 0x20) <= 0.0)) {
          if ((*(double *)(local_60 + 0x20) < 0.0) &&
             (*(double *)(local_a8 + 0x20) <= 0.0 && *(double *)(local_a8 + 0x20) != 0.0)) {
            if (*(double *)(local_60 + 0x18) < *(double *)(local_a8 + 0x18) ||
                *(double *)(local_60 + 0x18) == *(double *)(local_a8 + 0x18)) {
              FUN_00d23620();
            }
            else {
              FUN_00d23620();
            }
            goto LAB_014f17da;
          }
        }
        else {
          if (*(double *)(local_a8 + 0x18) < *(double *)(local_60 + 0x18) ||
              *(double *)(local_a8 + 0x18) == *(double *)(local_60 + 0x18)) {
            FUN_00d23620();
          }
          else {
            FUN_00d23620();
          }
LAB_014f17da:
          if (iVar55 < 1) {
            iVar55 = 1;
          }
          iVar55 = iVar55 + -2;
        }
        iVar55 = iVar55 + 1;
        iVar44 = *(int *)((longlong)puVar33 + 0xc);
      } while (iVar55 < iVar44 + -1);
      local_130 = uVar7 - iVar39;
      iVar55 = 0;
      if (iVar44 < 3) goto joined_r0x014f1a2f;
      lVar54 = 0;
      bVar25 = false;
      do {
        lVar35 = *(longlong *)(puVar33[2] + (longlong)iVar55 * 8);
        if (local_60 == lVar35) {
          if (!bVar9) {
            bVar9 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          local_60 = lVar35;
          if (bVar9) {
            FUN_00d50b20();
            bVar9 = true;
          }
          else {
            bVar9 = true;
          }
        }
        if (DAT_02390448 < *(double *)(local_60 + 0x20)) {
          iVar44 = (int)*(double *)(local_60 + 0x10);
          local_78 = *(longlong *)(puVar33[2] + 0x10 + (longlong)iVar55 * 8);
          if (lVar54 == local_78) {
            if ((!bVar25) && (lVar54 != 0)) {
              FUN_00d50b00();
              local_78 = lVar54;
              goto LAB_014f2250;
            }
          }
          else {
            if (local_78 != 0) {
              FUN_00d50b00(local_78);
            }
            if ((bVar25) && (lVar54 != 0)) {
              FUN_00d50b20();
            }
LAB_014f2250:
            bVar25 = true;
            lVar54 = local_78;
          }
          if ((((iVar39 < iVar44) && (iVar31 = (int)*(double *)(lVar54 + 0x10), iVar31 < local_130))
              && (iVar31 - iVar44 < (int)dVar59)) &&
             (((0.0 < (float)puVar1[iVar44] && (0.0 < (float)puVar1[iVar31])) ||
              (((float)puVar1[iVar44] < 0.0 &&
               ((float)puVar1[iVar31] <= 0.0 && (float)puVar1[iVar31] != 0.0)))))) {
            if (*(double *)(lVar54 + 0x18) < *(double *)(local_60 + 0x18) ||
                *(double *)(lVar54 + 0x18) == *(double *)(local_60 + 0x18)) {
              FUN_00d23620();
              FUN_00d23620();
            }
            else {
              FUN_00d23620();
              FUN_00d23620();
            }
            if (iVar55 < 1) {
              iVar55 = 1;
            }
            iVar55 = iVar55 + -2;
          }
        }
        iVar55 = iVar55 + 1;
      } while (iVar55 < *(int *)((longlong)puVar33 + 0xc) + -2);
      local_78 = lVar54;
      if (*(int *)((longlong)puVar33 + 0xc) < 1) goto LAB_014f2359;
LAB_014f1a35:
      iVar44 = 0;
      lVar54 = local_140 + (longlong)(int)local_res8 * 4;
      lVar35 = local_140 + (longlong)(int)(local_res8 * 2) * 4;
      iVar55 = (int)local_res8 / 2;
      lVar8 = unaff_RSI + lVar48 * 0x14;
      lVar43 = 0;
      local_a0 = 0;
      bVar21 = false;
      lVar52 = local_60;
      do {
        local_60 = *(longlong *)(puVar33[2] + lVar43 * 8);
        if (lVar52 == local_60) {
          local_60 = lVar52;
          if ((!bVar9) && (lVar52 != 0)) {
            bVar9 = true;
            FUN_00d50b00();
          }
LAB_014f1b30:
          if (DAT_02390448 < *(double *)(local_60 + 0x20)) {
LAB_014f1b6e:
            lVar52 = puVar33[2];
            if (lVar43 == 0) {
              iVar31 = 0;
            }
            else {
              iVar31 = (int)*(double *)(*(longlong *)(lVar52 + -8 + lVar43 * 8) + 0x10);
            }
            uVar50 = uVar7;
            if (lVar43 < (longlong)*(int *)((longlong)puVar33 + 0xc) + -1) {
              uVar50 = (uint)*(double *)(*(longlong *)(lVar52 + 8 + lVar43 * 8) + 0x10);
            }
            if (iVar31 < (int)uVar50) {
              uVar45 = (ulonglong)iVar31;
              uVar37 = ~uVar45;
              fVar57 = 0.0;
              uVar42 = (ulonglong)(uVar50 - iVar31) & 7;
              if ((uVar50 - iVar31 & 7) != 0) {
                do {
                  fVar57 = fVar57 + (float)puVar1[uVar45];
                  uVar45 = uVar45 + 1;
                  uVar42 = uVar42 - 1;
                } while (uVar42 != 0);
              }
              if (6 < uVar37 + (longlong)(int)uVar50) {
                do {
                  fVar57 = fVar57 + *(float *)(lVar8 + uVar45 * 4) +
                           *(float *)(lVar8 + 4 + uVar45 * 4) + *(float *)(lVar8 + 8 + uVar45 * 4) +
                           *(float *)(lVar8 + 0xc + uVar45 * 4) +
                           *(float *)(lVar8 + 0x10 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x14 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x18 + uVar45 * 4) +
                           *(float *)(lVar8 + 0x1c + uVar45 * 4);
                  uVar45 = uVar45 + 8;
                } while ((longlong)(int)uVar50 != uVar45);
              }
              if ((DAT_023908e0 < fVar57) &&
                 (iVar31 = (int)*(double *)(*(longlong *)(lVar52 + lVar43 * 8) + 0x10),
                 DAT_023908d8 < (float)puVar1[iVar31])) {
                uVar47 = iVar31 - iVar55;
                iVar49 = 1 - uVar47;
                uVar50 = 1;
                if (0 < (int)uVar47) {
                  iVar49 = 1;
                  uVar50 = uVar47;
                }
                uVar47 = iVar55 + iVar31 + 1;
                if ((int)local_12c <= iVar55 + iVar31) {
                  uVar47 = local_12c;
                }
                uVar11 = uVar47;
                if ((int)uVar47 < (int)uVar50) {
                  uVar11 = uVar50;
                }
                if ((int)uVar50 < (int)uVar47) {
                  uVar45 = (ulonglong)(uVar11 - uVar50);
                  uVar42 = 0;
                  do {
                    lVar52 = *(longlong *)
                              (*(longlong *)(unaff_RDI[0x21] + 0x10) + (ulonglong)uVar50 * 8 +
                              uVar42 * 8);
                    if (local_98 == lVar52) {
                      if ((!bVar19) && (local_98 != 0)) {
                        bVar19 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar52 != 0) {
                        FUN_00d50b00();
                      }
                      if ((bVar19) && (local_98 != 0)) {
                        FUN_00d50b20();
                        bVar19 = true;
                        local_98 = lVar52;
                      }
                      else {
                        bVar19 = true;
                        local_98 = lVar52;
                      }
                    }
                    lVar52 = *(longlong *)
                              (*(longlong *)(unaff_RDI[0x21] + 0x10) + (ulonglong)uVar50 * 8 + -8 +
                              uVar42 * 8);
                    if (local_a0 == lVar52) {
                      if ((!bVar21) && (local_a0 != 0)) {
                        bVar21 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar52 != 0) {
                        FUN_00d50b00();
                      }
                      if ((bVar21) && (local_a0 != 0)) {
                        FUN_00d50b20();
                        bVar21 = true;
                        local_a0 = lVar52;
                      }
                      else {
                        bVar21 = true;
                        local_a0 = lVar52;
                      }
                    }
                    fVar57 = DAT_02411280;
                    if (!NAN(*(float *)(local_98 + 0x20))) {
                      fVar57 = (float)_powf();
                    }
                    fVar60 = DAT_02411280;
                    if (DAT_02411280 <= fVar57) {
                      fVar60 = fVar57;
                    }
                    *(uint *)(lVar54 + uVar42 * 4) =
                         (uint)(*(float *)(local_98 + 0x14) - *(float *)(local_a0 + 0x14)) &
                         _DAT_02390140;
                    *(float *)(lVar35 + uVar42 * 4) = fVar60;
                    uVar42 = uVar42 + 1;
                  } while (uVar45 != uVar42);
                }
                else {
                  uVar45 = (ulonglong)(uVar11 - uVar50);
                }
                FUN_015c1480(1,uVar45);
                FUN_015c1480(1,uVar45);
                if ((int)uVar50 < (int)uVar47) {
                  uVar42 = 0;
                  fVar57 = 0.0;
                  do {
                    fVar60 = (*(float *)(lVar54 + uVar42 * 4) / *(float *)(lVar35 + uVar42 * 4)) *
                             *(float *)(local_140 + (longlong)iVar49 * 4 + uVar42 * 4);
                    iVar29 = uVar50 + (int)uVar42;
                    if (fVar60 <= fVar57) {
                      fVar60 = fVar57;
                      iVar29 = iVar31;
                    }
                    iVar31 = iVar29;
                    uVar42 = uVar42 + 1;
                    fVar57 = fVar60;
                  } while (uVar45 != uVar42);
                }
                if (((iVar39 < iVar31) && (iVar31 < local_130)) && ((int)dVar59 <= iVar31 - iVar44))
                {
                  FUN_014328b0((double)iVar31 + DAT_023942d0,0);
                  if (local_e0 == '\0') {
                    if (local_e8 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_e0 = '\0';
                  }
                  FUN_00d21140();
                  if (local_e8 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  iVar44 = iVar31;
                  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
              }
            }
          }
        }
        else {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
          if ((bVar9) && (lVar52 != 0)) {
            FUN_00d50b20();
            bVar9 = true;
            goto LAB_014f1b30;
          }
          bVar9 = true;
          if (DAT_02390448 < *(double *)(local_60 + 0x20)) goto LAB_014f1b6e;
        }
        lVar43 = lVar43 + 1;
        lVar52 = local_60;
      } while (lVar43 < *(int *)((longlong)puVar33 + 0xc));
    }
    local_c8 = local_e8;
    iVar39 = 0;
    if (*(int *)((longlong)puVar34 + 0xc) < 2) {
      bVar30 = false;
      local_40 = (longlong *)0x0;
      bVar53 = false;
      unaff_RDI = (longlong *)0x0;
    }
    else {
      lVar54 = unaff_RSI + lVar48 * 0xc;
      bVar23 = false;
      local_f0 = 0;
      bVar22 = false;
      local_58 = 0;
      do {
        lVar35 = *(longlong *)(puVar34[2] + (longlong)iVar39 * 8);
        if (local_58 == lVar35) {
          if ((!bVar22) && (local_58 != 0)) {
            bVar22 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar35 != 0) {
            FUN_00d50b00();
          }
          if ((bVar22) && (local_58 != 0)) {
            FUN_00d50b20();
            bVar22 = true;
            local_58 = lVar35;
          }
          else {
            bVar22 = true;
            local_58 = lVar35;
          }
        }
        uVar50 = uVar7;
        if (iVar39 < *(int *)((longlong)puVar34 + 0xc) + -1) {
          uVar50 = (uint)*(double *)(*(longlong *)(puVar34[2] + 8 + (longlong)iVar39 * 8) + 0x10);
        }
        lVar35 = lVar54;
        FUN_015c35f0(lVar54,pfVar40 + (int)*(double *)(local_58 + 0x10),unaff_RSI + lVar48 * 8,
                     uVar50 - (int)*(double *)(local_58 + 0x10));
        *(double *)(local_58 + 0x18) = (double)local_17c;
        if (0 < iVar39) {
          plVar46 = (longlong *)*local_res10;
          pvVar32 = _pthread_getspecific((pthread_key_t)lVar35);
          if (pvVar32 != (void *)0x0) {
            plVar46 = (longlong *)*local_res10;
            lVar35 = FUN_00e8b990();
            if (lVar35 != 0) {
              plVar46 = (longlong *)plVar46[(ulonglong)(*(uint *)(lVar35 + 0x154) & 1) + 4];
            }
          }
          iVar44 = (**(code **)(*plVar46 + 0x3a8))
                             (CONCAT44((int)((ulonglong)*(double *)(local_58 + 0x18) >> 0x20),
                                       (float)*(double *)(local_58 + 0x18)));
          lVar35 = puVar34[2];
          lVar8 = *(longlong *)(lVar35 + (ulonglong)(iVar39 - 1) * 8);
          if (local_f0 == lVar8) {
            if ((!bVar23) && (local_f0 != 0)) {
              bVar23 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            if ((bVar23) && (local_f0 != 0)) {
              FUN_00d50b20();
              bVar23 = true;
              local_f0 = lVar8;
            }
            else {
              bVar23 = true;
              local_f0 = lVar8;
            }
          }
          plVar46 = (longlong *)*local_res10;
          pvVar32 = _pthread_getspecific((pthread_key_t)lVar35);
          if (pvVar32 != (void *)0x0) {
            plVar46 = (longlong *)*local_res10;
            lVar35 = FUN_00e8b990();
            if (lVar35 != 0) {
              plVar46 = (longlong *)plVar46[(ulonglong)(*(uint *)(lVar35 + 0x154) & 1) + 4];
            }
          }
          iVar55 = (**(code **)(*plVar46 + 0x3a8))
                             (CONCAT44((int)((ulonglong)*(double *)(local_f0 + 0x18) >> 0x20),
                                       (float)*(double *)(local_f0 + 0x18)));
          if (iVar44 == iVar55) {
            FUN_00d23620();
            iVar39 = iVar39 + -2;
          }
        }
        iVar39 = iVar39 + 1;
      } while (iVar39 < *(int *)((longlong)puVar34 + 0xc));
      if (*(int *)((longlong)puVar34 + 0xc) < 2) {
        bVar30 = false;
        local_40 = (longlong *)0x0;
        bVar53 = false;
        unaff_RDI = (longlong *)0x0;
      }
      else {
        (**(code **)(*unaff_RDI + 0x450))();
        if (0 < (int)uVar7) {
          uVar45 = 0;
          do {
            lVar48 = *(longlong *)(*(longlong *)(unaff_RDI[0x21] + 0x10) + uVar45 * 8);
            if (local_98 == lVar48) {
              if ((!bVar19) && (local_98 != 0)) {
                bVar19 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar48 != 0) {
                FUN_00d50b00();
              }
              if ((bVar19) && (local_98 != 0)) {
                FUN_00d50b20();
                bVar19 = true;
                local_98 = lVar48;
              }
              else {
                bVar19 = true;
                local_98 = lVar48;
              }
            }
            *(float *)(local_98 + 0x18) = pfVar40[uVar45];
            uVar45 = uVar45 + 1;
          } while (uVar7 != uVar45);
        }
        lVar48 = *(longlong *)puVar34[2];
        if (local_58 == lVar48) {
          lVar48 = local_58;
          bVar30 = bVar22;
          if ((!bVar22) && (local_58 != 0)) {
            FUN_00d50b00();
            bVar30 = true;
          }
        }
        else {
          if (lVar48 != 0) {
            FUN_00d50b00();
          }
          bVar30 = true;
          if ((bVar22) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar22 = bVar30;
        FUN_014bd3c0(CONCAT44((int)((ulonglong)*(double *)(lVar48 + 0x18) >> 0x20),
                              (float)*(double *)(lVar48 + 0x18)));
        FUN_00d50b00();
        if (*(int *)((longlong)puVar34 + 0xc) < 2) {
          bVar30 = false;
          local_40 = (longlong *)0x0;
          bVar53 = true;
        }
        else {
          lVar54 = 1;
          local_40 = (longlong *)0x0;
          bVar30 = false;
          plVar46 = unaff_RDI;
          local_58 = lVar48;
          bVar24 = true;
          do {
            lVar48 = *(longlong *)(puVar34[2] + lVar54 * 8);
            puVar38 = puVar34;
            if (local_58 == lVar48) {
              if (!bVar22) {
                bVar22 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar48 != 0) {
                FUN_00d50b00();
              }
              local_58 = lVar48;
              if (bVar22) {
                FUN_00d50b20();
                bVar22 = true;
              }
              else {
                bVar22 = true;
              }
            }
            pVar36 = (pthread_key_t)puVar38;
            pvVar32 = _pthread_getspecific(pVar36);
            if ((pvVar32 != (void *)0x0) && (lVar48 = FUN_00e8b990(), lVar48 != 0)) {
              pVar36 = (pthread_key_t)plVar46;
            }
            FUN_014f38a0();
            if (local_c8 == local_40) {
              if ((!bVar30) && (local_c8 != (longlong *)0x0)) {
                FUN_00d50b00();
                bVar30 = true;
              }
            }
            else {
              if (local_c8 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar30) && (local_40 != (longlong *)0x0)) {
                bVar30 = true;
                FUN_00d50b20();
                local_40 = local_c8;
              }
              else {
                bVar30 = true;
                local_40 = local_c8;
              }
            }
            pvVar32 = _pthread_getspecific(pVar36);
            if (pvVar32 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bd3c0(CONCAT44((int)((ulonglong)*(double *)(local_58 + 0x18) >> 0x20),
                                  (float)*(double *)(local_58 + 0x18)));
            FUN_00d21140();
            if (plVar46 == local_40) {
              unaff_RDI = plVar46;
              bVar53 = bVar24;
              if ((bVar30) && (!bVar24)) {
                if (plVar46 == (longlong *)0x0) {
                  bVar53 = false;
                }
                else {
                  FUN_00d50b00();
                  bVar53 = true;
                }
              }
            }
            else {
              if ((bVar30) && (local_40 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              unaff_RDI = local_40;
              bVar53 = bVar30;
              if ((bVar24) && (plVar46 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar54 = lVar54 + 1;
            plVar46 = unaff_RDI;
            local_c8 = local_40;
            bVar24 = bVar53;
          } while (lVar54 < *(int *)((longlong)puVar34 + 0xc));
        }
      }
      if ((bVar23) && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (bVar22) {
        FUN_00d50b20();
      }
    }
    if (bVar10 || bVar56) {
      FUN_00e83070();
    }
    if (param_4 == 0) {
      FUN_00e83070();
    }
    FUN_00d50b20();
    if (puVar33 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (plVar28 == (longlong *)0x0) goto LAB_014f2ca1;
  }
  FUN_00d50b20();
LAB_014f2ca1:
  if ((bVar18) && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar30) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar53) && (unaff_RDI != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar21) && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar19) && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar25) && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar20) && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


