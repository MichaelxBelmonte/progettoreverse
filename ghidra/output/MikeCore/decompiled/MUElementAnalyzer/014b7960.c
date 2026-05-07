// Function: FUN_014b7960
// Address: 014b7960
// Size: 5759 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014b8f46) */
/* WARNING: Removing unreachable block (ram,0x014b7d5d) */
/* WARNING: Removing unreachable block (ram,0x014b7d69) */
/* WARNING: Removing unreachable block (ram,0x014b7ce8) */
/* WARNING: Removing unreachable block (ram,0x014b7cf4) */
/* WARNING: Removing unreachable block (ram,0x014b7de2) */
/* WARNING: Removing unreachable block (ram,0x014b7dee) */
/* WARNING: Removing unreachable block (ram,0x014b7f59) */
/* WARNING: Removing unreachable block (ram,0x014b7f5e) */
/* WARNING: Removing unreachable block (ram,0x014b9067) */
/* WARNING: Removing unreachable block (ram,0x014b9071) */
/* WARNING: Removing unreachable block (ram,0x014b9054) */
/* WARNING: Removing unreachable block (ram,0x014b9059) */
/* WARNING: Removing unreachable block (ram,0x014b9001) */
/* WARNING: Removing unreachable block (ram,0x014b900b) */
/* WARNING: Removing unreachable block (ram,0x014b8fb7) */
/* WARNING: Removing unreachable block (ram,0x014b8fc3) */
/* WARNING: Removing unreachable block (ram,0x014b84da) */
/* WARNING: Removing unreachable block (ram,0x014b84e6) */
/* WARNING: Removing unreachable block (ram,0x014b8343) */
/* WARNING: Removing unreachable block (ram,0x014b834f) */
/* WARNING: Removing unreachable block (ram,0x014b7e5d) */
/* WARNING: Removing unreachable block (ram,0x014b7e69) */
/* WARNING: Removing unreachable block (ram,0x014b7a41) */
/* WARNING: Removing unreachable block (ram,0x014b7a4d) */
/* WARNING: Removing unreachable block (ram,0x014b8301) */
/* WARNING: Removing unreachable block (ram,0x014b8306) */
/* WARNING: Removing unreachable block (ram,0x014b83be) */
/* WARNING: Removing unreachable block (ram,0x014b83ca) */
/* WARNING: Removing unreachable block (ram,0x014b83fb) */
/* WARNING: Removing unreachable block (ram,0x014b8407) */
/* WARNING: Removing unreachable block (ram,0x014b8fd4) */
/* WARNING: Removing unreachable block (ram,0x014b8fde) */
/* WARNING: Removing unreachable block (ram,0x014b901d) */
/* WARNING: Removing unreachable block (ram,0x014b9022) */
/* WARNING: Removing unreachable block (ram,0x014b9083) */
/* WARNING: Removing unreachable block (ram,0x014b9088) */
/* WARNING: Removing unreachable block (ram,0x014b88e1) */
/* WARNING: Removing unreachable block (ram,0x014b88ed) */
/* WARNING: Removing unreachable block (ram,0x014b851a) */
/* WARNING: Removing unreachable block (ram,0x014b8526) */
/* WARNING: Removing unreachable block (ram,0x014b9041) */
/* WARNING: Removing unreachable block (ram,0x014b9046) */
/* WARNING: Removing unreachable block (ram,0x014b871c) */
/* WARNING: Removing unreachable block (ram,0x014b8721) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014b7960(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  code *pcVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  int iVar33;
  longlong *unaff_RSI;
  ulonglong uVar34;
  longlong *unaff_RDI;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  float fVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  int iVar50;
  int iVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  uint local_ec;
  longlong local_e0;
  longlong local_d0;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  
  uVar29 = *(uint *)(*unaff_RDI + 0xc);
  uVar42 = (ulonglong)uVar29;
  iVar4 = *(int *)(*param_1 + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  fVar45 = *(float *)(*(longlong *)(*param_1 + 0x10) + 4);
  if ((DAT_028acf38 == 0) || (DAT_028acf41 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf38 == 0) {
      FUN_00c8e690();
      if ((local_b0 == '\0') && (local_b8 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar35 = DAT_028acf38;
      if ((DAT_028acf38 != local_b8) && (DAT_028acf38 = local_b8, lVar35 != 0)) {
        FUN_00d50b20();
      }
      if (local_b8 != 0) {
        if (DAT_028acf40 == '\0') {
          DAT_028acf40 = '\x01';
          FUN_00e8cb90();
        }
        if (local_b8 != 0 && lVar35 == local_b8) {
          FUN_00d50b20();
        }
      }
      lVar19 = FUN_00e83da0();
      lVar35 = DAT_028acf38;
      fVar47 = DAT_02394274;
      fVar43 = DAT_0239011c;
      lVar30 = 0;
      do {
        fVar48 = *(float *)(lVar19 + lVar30 * 4) * fVar43;
        if (fVar47 <= fVar48) {
          *(float *)(*(longlong *)(lVar35 + 0x10) + lVar30 * 4) = DAT_02390124 / fVar48;
          fVar48 = *(float *)(lVar19 + 4 + lVar30 * 4);
        }
        else {
          fVar48 = *(float *)(lVar19 + 4 + lVar30 * 4);
        }
        fVar48 = fVar48 * fVar43;
        if (fVar47 <= fVar48) {
          *(float *)(*(longlong *)(lVar35 + 0x10) + 4 + lVar30 * 4) = DAT_02390124 / fVar48;
        }
        lVar30 = lVar30 + 2;
      } while (lVar30 != 0x100);
      FUN_00e83070();
      DAT_028acf41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acf41 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar20 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar20 = &DAT_02572358;
  pcVar16 = DAT_02572370;
  (*DAT_02572370)();
  FUN_00d21370();
  puVar21 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar21 = &DAT_02572358;
  (*pcVar16)();
  FUN_00d21370();
  pcVar15 = DAT_025683d8;
  if ((int)uVar29 < 1) {
    lVar35 = 0;
  }
  else {
    uVar25 = 0;
    do {
      iVar4 = *(int *)(*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar25 * 8) + 0x18);
      iVar39 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar39 = iVar4;
      }
      puVar22 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = &DAT_02572358;
      (*pcVar16)();
      iVar39 = iVar39 >> 2;
      FUN_00d21370();
      FUN_00d21140();
      puVar23 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar23 = &DAT_02572358;
      (*pcVar16)();
      FUN_00d21370();
      FUN_00d21140();
      if (iVar4 < 4) {
LAB_014b7e8a:
        FUN_00d50b20();
      }
      else {
        do {
          puVar24 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar24 = &DAT_025683c0;
          (*pcVar15)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar24 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar24 = &DAT_025683c0;
          (*pcVar15)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          iVar39 = iVar39 + -1;
        } while (iVar39 != 0);
        if (puVar23 != (undefined8 *)0x0) goto LAB_014b7e8a;
      }
      if (puVar22 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar42);
    fVar43 = DAT_02394244 * fVar45;
    local_98 = 1;
    lVar35 = 0;
    uVar25 = 0;
    do {
      lVar19 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar25 * 8);
      if (lVar35 != lVar19) {
        lVar35 = lVar19;
      }
      uVar38 = *(uint *)(lVar35 + 0x18);
      uVar26 = uVar25 + 1;
      if (7 < (int)uVar38) {
        local_a8 = 1;
        do {
          if (uVar26 < uVar42) {
            fVar47 = *(float *)(*(longlong *)(lVar35 + 0x10) + local_a8 * 4);
            uVar40 = local_98;
            do {
              lVar19 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar40 * 8);
              iVar4 = *(int *)(lVar19 + 0x18);
              iVar39 = iVar4 + 3;
              if (-1 < iVar4) {
                iVar39 = iVar4;
              }
              uVar17 = iVar39 >> 2;
              lVar19 = *(longlong *)(lVar19 + 0x10);
              uVar32 = uVar17;
              if (7 < iVar4) {
                uVar27 = 2;
                if (2 < (int)uVar17) {
                  uVar27 = (ulonglong)uVar17;
                }
                uVar41 = 1;
                do {
                  if (fVar47 < *(float *)(lVar19 + uVar41 * 4)) {
                    uVar3 = *(undefined8 *)(lVar19 + -4 + uVar41 * 4);
                    fVar48 = (float)((ulonglong)uVar3 >> 0x20);
                    if ((float)((uint)(fVar48 - fVar47) & _UNK_02390144) <
                        (float)((uint)((float)uVar3 - fVar47) & _DAT_02390140)) goto LAB_014b80ae;
                    uVar32 = (uint)uVar41;
                    break;
                  }
                  uVar41 = uVar41 + 1;
                } while (uVar27 != uVar41);
              }
              uVar7 = uVar32 - 1;
              if ((int)(uVar32 - 1) < 1) {
                uVar7 = 1;
              }
              uVar41 = (ulonglong)uVar7;
              fVar48 = *(float *)(lVar19 + uVar41 * 4);
LAB_014b80ae:
              if (((float)((uint)(fVar47 - fVar48) & _DAT_02390140) < fVar43) &&
                 ((int)uVar41 < (int)uVar17)) {
                lVar19 = *(longlong *)
                          (*(longlong *)(*(longlong *)(puVar20[2] + uVar25 * 8) + 0x10) +
                          local_a8 * 8);
                iVar4 = *(int *)(lVar19 + 0x18);
                uVar44 = FUN_00c8e340(local_a8,1);
                *(int *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar4) = (int)uVar40;
                lVar19 = *(longlong *)
                          (*(longlong *)(*(longlong *)(puVar20[2] + uVar40 * 8) + 0x10) + uVar41 * 8
                          );
                iVar4 = *(int *)(lVar19 + 0x18);
                FUN_00c8e340(uVar44,1);
                *(int *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar4) = (int)uVar25;
                lVar19 = *(longlong *)
                          (*(longlong *)(*(longlong *)(puVar21[2] + uVar25 * 8) + 0x10) +
                          local_a8 * 8);
                iVar4 = *(int *)(lVar19 + 0x18);
                uVar44 = FUN_00c8e340(local_a8,1);
                *(int *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar4) = (int)uVar41;
                lVar19 = *(longlong *)
                          (*(longlong *)(*(longlong *)(puVar21[2] + uVar40 * 8) + 0x10) + uVar41 * 8
                          );
                iVar4 = *(int *)(lVar19 + 0x18);
                FUN_00c8e340(uVar44,1);
                *(int *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar4) = (int)local_a8;
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar42);
          }
          local_a8 = local_a8 + 1;
        } while (local_a8 != uVar38 >> 2);
      }
      local_98 = local_98 + 1;
      uVar25 = uVar26;
    } while (uVar26 != uVar42);
  }
  if (0 < (int)uVar29) {
    fVar43 = DAT_02390124 / fVar45;
    fVar45 = DAT_023b2d70 / (fVar45 + fVar45);
    uVar25 = 0;
    local_c0 = 0;
    lVar19 = 0;
    local_e0 = 0;
    local_90 = 0;
    local_d0 = 0;
    local_a0 = 0;
    do {
      lVar30 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar25 * 8);
      if (lVar35 != lVar30) {
        lVar35 = lVar30;
      }
      lVar30 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar25 * 8);
      if (local_c0 != lVar30) {
        local_c0 = lVar30;
      }
      ___bzero();
      iVar4 = *(int *)(local_c0 + 0x18);
      iVar39 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar39 = iVar4;
      }
      lVar30 = *(longlong *)(puVar20[2] + uVar25 * 8);
      if (local_e0 != lVar30) {
        local_e0 = lVar30;
      }
      lVar30 = *(longlong *)(puVar21[2] + uVar25 * 8);
      if (local_d0 != lVar30) {
        local_d0 = lVar30;
      }
      uVar29 = iVar39 >> 2;
      if (iVar4 < 8) {
        fVar47 = 0.0;
        local_ec = 0;
        uVar26 = 0;
        auVar55 = ZEXT816(0);
LAB_014b8762:
        fVar48 = DAT_02394264;
        if (DAT_02394274 <= auVar55._0_4_) {
          fVar48 = fVar47 / auVar55._0_4_;
        }
        if (local_ec == (uint)uVar26) {
          uVar26 = (ulonglong)(uVar29 - 1);
          local_ec = uVar29;
        }
        if (1 < (int)local_ec) {
          uVar40 = 1;
          do {
            fVar47 = *(float *)(*(longlong *)(lVar35 + 0x10) + uVar40 * 4);
            iVar39 = FUN_00e7d780(fVar43 * fVar47);
            fVar46 = DAT_02394274;
            if (iVar39 < iVar6 >> 2) {
              iVar18 = FUN_00e7d780((float)((uint)(fVar47 - *(float *)(*(longlong *)
                                                                        (*param_1 + 0x10) +
                                                                      (longlong)iVar39 * 4)) &
                                           _DAT_02390140) * fVar45);
              lVar30 = *(longlong *)(*(longlong *)(local_d0 + 0x10) + uVar40 * 8);
              if (local_a0 != lVar30) {
                local_a0 = lVar30;
              }
              fVar46 = DAT_02390124 / (float)(int)uVar40;
              fVar47 = fVar46;
              if (3 < (int)*(uint *)(local_a0 + 0x18)) {
                uVar38 = *(uint *)(local_a0 + 0x18) >> 2;
                lVar30 = *(longlong *)(local_a0 + 0x10);
                if (uVar38 == 1) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = 0;
                  do {
                    fVar47 = DAT_02390124 / (float)*(int *)(lVar30 + 4 + uVar27 * 4) +
                             DAT_02390124 / (float)*(int *)(lVar30 + uVar27 * 4) + fVar47;
                    uVar27 = uVar27 + 2;
                  } while ((uVar38 & 0xfffffffe) != uVar27);
                }
                if ((uVar38 & 1) != 0) {
                  fVar47 = fVar47 + DAT_02390124 / (float)*(int *)(lVar30 + uVar27 * 4);
                }
              }
              fVar46 = *(float *)(*(longlong *)(*param_2 + 0x10) + (longlong)iVar39 * 4) *
                       *(float *)(*(longlong *)(DAT_028acf38 + 0x10) + 0x200 + (longlong)iVar18 * 4)
                       * (fVar46 / fVar47);
            }
            fVar47 = fVar48 / (float)(int)uVar40;
            if (fVar47 <= fVar46) {
              fVar46 = fVar47;
            }
            fVar47 = DAT_02394274;
            if (DAT_02394274 <= fVar46) {
              fVar47 = fVar46;
            }
            *(float *)(*(longlong *)(local_c0 + 0x10) + uVar40 * 4) = fVar47;
            uVar40 = uVar40 + 1;
          } while (uVar40 != local_ec);
        }
      }
      else {
        uVar40 = 2;
        if (2 < (int)uVar29) {
          uVar40 = (ulonglong)uVar29;
        }
        uVar26 = 0;
        uVar27 = 1;
        local_ec = 0;
        do {
          while( true ) {
            fVar47 = *(float *)(*(longlong *)(lVar35 + 0x10) + uVar27 * 4);
            lVar30 = *(longlong *)(*(longlong *)(local_e0 + 0x10) + uVar27 * 8);
            if (local_90 != lVar30) {
              local_90 = lVar30;
            }
            lVar30 = *(longlong *)(*(longlong *)(local_d0 + 0x10) + uVar27 * 8);
            if (local_a0 != lVar30) {
              local_a0 = lVar30;
            }
            uVar38 = *(uint *)(local_90 + 0x18);
            local_a8._0_4_ = 0.0;
            if (uVar38 + 3 < 7) break;
            uVar32 = uVar38 + 3;
            if (-1 < (int)uVar38) {
              uVar32 = uVar38;
            }
            if ((longlong)
                *(int *)(*(longlong *)(local_90 + 0x10) + -4 + (longlong)((int)uVar32 >> 2) * 4) <
                (longlong)uVar25) {
              if (3 < (int)uVar38) {
                local_a8._0_4_ = 0.0;
                lVar30 = 0;
                do {
                  lVar28 = *(longlong *)
                            (*(longlong *)(*unaff_RSI + 0x10) +
                            (longlong)*(int *)(*(longlong *)(local_90 + 0x10) + lVar30 * 4) * 8);
                  if (lVar19 != lVar28) {
                    lVar19 = lVar28;
                  }
                  iVar39 = *(int *)(local_90 + 0x18);
                  local_a8._0_4_ =
                       (float)local_a8 +
                       *(float *)(*(longlong *)(lVar19 + 0x10) +
                                 (longlong)*(int *)(*(longlong *)(local_a0 + 0x10) + lVar30 * 4) * 4
                                 );
                  lVar30 = lVar30 + 1;
                  iVar18 = iVar39 + 3;
                  if (-1 < iVar39) {
                    iVar18 = iVar39;
                  }
                } while (lVar30 < iVar18 >> 2);
              }
              break;
            }
LAB_014b8488:
            uVar27 = uVar27 + 1;
            if (uVar27 == uVar40) goto LAB_014b89e0;
          }
          iVar39 = FUN_00e7d780(fVar43 * fVar47);
          if (iVar6 >> 2 <= iVar39) goto LAB_014b8488;
          iVar18 = FUN_00e7d780((float)((uint)(fVar47 - *(float *)(*(longlong *)(*param_1 + 0x10) +
                                                                  (longlong)iVar39 * 4)) &
                                       _DAT_02390140) * fVar45);
          local_a8._0_4_ =
               *(float *)(*(longlong *)(*param_2 + 0x10) + (longlong)iVar39 * 4) *
               *(float *)(*(longlong *)(DAT_028acf38 + 0x10) + 0x200 + (longlong)iVar18 * 4) -
               (float)local_a8;
          if ((float)local_a8 <= DAT_0239424c) goto LAB_014b8488;
          *(float *)(*(longlong *)(local_c0 + 0x10) + uVar27 * 4) = (float)local_a8;
          if (local_ec == 0) {
            local_ec = (uint)uVar27;
          }
          uVar26 = uVar27 & 0xffffffff;
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar40);
LAB_014b89e0:
        if ((local_ec != 1) || ((int)uVar26 == 1)) {
          lVar30 = *(longlong *)(local_c0 + 0x10);
          if (iVar4 < 0xc) {
            auVar55 = ZEXT816(0);
            lVar28 = 1;
            fVar47 = 0.0;
          }
          else {
            auVar55 = ZEXT816(0);
            lVar28 = 1;
            fVar47 = 0.0;
            do {
              fVar48 = *(float *)(lVar30 + lVar28 * 4);
              if (DAT_0239424c < fVar48) {
                fVar47 = fVar47 + fVar48;
                auVar55._0_4_ = auVar55._0_4_ + DAT_02390124 / (float)(int)lVar28;
              }
              fVar48 = *(float *)(lVar30 + 4 + lVar28 * 4);
              if (DAT_0239424c < fVar48) {
                fVar47 = fVar47 + fVar48;
                auVar55._0_4_ = auVar55._0_4_ + DAT_02390124 / (float)((int)lVar28 + 1);
              }
              lVar31 = lVar28 - (uVar40 - 1 & 0xfffffffffffffffe);
              lVar28 = lVar28 + 2;
            } while (lVar31 != -1);
          }
          if (((uVar40 - 1 & 1) != 0) &&
             (fVar48 = *(float *)(lVar30 + lVar28 * 4), DAT_0239424c < fVar48)) {
            fVar47 = fVar47 + fVar48;
            auVar55._0_4_ = auVar55._0_4_ + DAT_02390124 / (float)(int)lVar28;
          }
          goto LAB_014b8762;
        }
      }
      uVar38 = 2;
      if (2 < (int)uVar29) {
        uVar38 = uVar29;
      }
      iVar39 = (int)uVar26;
      uVar40 = 2;
      if (2 < iVar39) {
        uVar40 = uVar26;
      }
      lVar30 = *(longlong *)(local_c0 + 0x10);
      uVar27 = 1;
      uVar26 = 1;
      lVar28 = 0;
      do {
        if (uVar26 == uVar38 - 1) break;
        uVar41 = uVar26 + 1;
        fVar47 = *(float *)(lVar30 + uVar41 * 4);
        if (DAT_0239424c < fVar47) {
          iVar18 = (int)uVar27;
          uVar27 = (ulonglong)iVar18;
          if ((longlong)uVar27 < (longlong)uVar26) {
            fVar48 = *(float *)(lVar30 + uVar27 * 4);
            fVar47 = (fVar47 - fVar48) / (float)((int)uVar41 - iVar18);
            uVar32 = (int)(lVar28 + 1) - iVar18;
            uVar36 = lVar28 - uVar27;
            uVar34 = (ulonglong)uVar32 & 3;
            if ((uVar32 & 3) != 0) {
              do {
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 4 + uVar27 * 4) = fVar48;
                uVar27 = uVar27 + 1;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
            }
            if (2 < uVar36) {
              do {
                *(float *)(lVar30 + 4 + uVar27 * 4) = fVar48 + fVar47;
                fVar48 = fVar48 + fVar47 + fVar47;
                *(float *)(lVar30 + 8 + uVar27 * 4) = fVar48;
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 0xc + uVar27 * 4) = fVar48;
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 0x10 + uVar27 * 4) = fVar48;
                uVar27 = uVar27 + 4;
              } while (uVar26 != uVar27);
            }
          }
          uVar27 = uVar41 & 0xffffffff;
        }
        uVar26 = uVar41;
        lVar28 = lVar28 + 1;
      } while (uVar41 != uVar40);
      iVar14 = _UNK_023de2bc;
      iVar13 = _UNK_023de2b8;
      iVar12 = _UNK_023de2b4;
      iVar11 = _DAT_023de2b0;
      iVar10 = _UNK_0239418c;
      iVar9 = _UNK_02394188;
      iVar8 = _UNK_02394184;
      iVar18 = _DAT_02394180;
      iVar33 = iVar39 + 1;
      if (iVar33 < (int)uVar29) {
        fVar47 = (float)iVar39 * *(float *)(lVar30 + (longlong)iVar39 * 4);
        lVar28 = (longlong)iVar33;
        uVar32 = (uVar29 - iVar39) - 2;
        if (2 < uVar32) {
          uVar26 = (ulonglong)uVar32 + 1;
          uVar40 = uVar26 & 0xfffffffffffffffc;
          iVar39 = iVar33 + _DAT_0238fcc0;
          iVar50 = iVar33 + _UNK_0238fcc4;
          iVar51 = iVar33 + _UNK_0238fcc8;
          iVar33 = iVar33 + _UNK_0238fccc;
          auVar49._0_8_ = CONCAT44(fVar47,fVar47);
          auVar49._8_4_ = fVar47;
          auVar49._12_4_ = fVar47;
          uVar27 = (uVar40 - 4 >> 2) + 1;
          if (uVar40 - 4 == 0) {
            lVar31 = 0;
LAB_014b8c07:
            auVar5._4_4_ = (float)iVar50;
            auVar5._0_4_ = (float)iVar39;
            auVar5._8_4_ = (float)iVar51;
            auVar5._12_4_ = (float)iVar33;
            auVar55 = divps(auVar49,auVar5);
            *(undefined1 (*) [16])(lVar30 + (lVar31 + lVar28) * 4) = auVar55;
          }
          else {
            lVar1 = lVar30 + lVar28 * 4;
            lVar37 = -(uVar27 & 0xfffffffffffffffe);
            lVar31 = 0;
            do {
              auVar52._0_4_ = (float)iVar39;
              auVar52._4_4_ = (float)iVar50;
              auVar52._8_4_ = (float)iVar51;
              auVar52._12_4_ = (float)iVar33;
              auVar54._8_4_ = fVar47;
              auVar54._0_8_ = auVar49._0_8_;
              auVar54._12_4_ = fVar47;
              auVar55 = divps(auVar54,auVar52);
              *(undefined1 (*) [16])(lVar1 + lVar31 * 4) = auVar55;
              auVar53._0_4_ = (float)(iVar39 + iVar18);
              auVar53._4_4_ = (float)(iVar50 + iVar8);
              auVar53._8_4_ = (float)(iVar51 + iVar9);
              auVar53._12_4_ = (float)(iVar33 + iVar10);
              auVar56._8_4_ = fVar47;
              auVar56._0_8_ = auVar49._0_8_;
              auVar56._12_4_ = fVar47;
              auVar55 = divps(auVar56,auVar53);
              *(undefined1 (*) [16])(lVar1 + 0x10 + lVar31 * 4) = auVar55;
              lVar31 = lVar31 + 8;
              iVar39 = iVar39 + iVar11;
              iVar50 = iVar50 + iVar12;
              iVar51 = iVar51 + iVar13;
              iVar33 = iVar33 + iVar14;
              lVar37 = lVar37 + 2;
            } while (lVar37 != 0);
            if ((uVar27 & 1) != 0) goto LAB_014b8c07;
          }
          if (uVar26 == uVar40) goto LAB_014b8c4b;
          lVar28 = lVar28 + uVar40;
        }
        do {
          *(float *)(lVar30 + lVar28 * 4) = fVar47 / (float)(int)lVar28;
          lVar28 = lVar28 + 1;
        } while (uVar29 != (uint)lVar28);
      }
LAB_014b8c4b:
      if (7 < iVar4) {
        uVar26 = (ulonglong)uVar38 - 1;
        uVar40 = 1;
        if (7 < uVar26) {
          uVar41 = uVar26 & 0xfffffffffffffff8;
          uVar40 = uVar41 + 1;
          uVar27 = 0;
          do {
            pfVar2 = (float *)(lVar30 + 4 + uVar27 * 4);
            fVar47 = pfVar2[1];
            fVar48 = pfVar2[2];
            fVar46 = pfVar2[3];
            if (*pfVar2 < DAT_02394274) {
              *(undefined4 *)(lVar30 + 4 + uVar27 * 4) = 0x800000;
            }
            if (fVar47 < _UNK_02411094) {
              *(undefined4 *)(lVar30 + 8 + uVar27 * 4) = 0x800000;
            }
            if (_UNK_02411098 <= fVar48) {
              if (_UNK_0241109c <= fVar46) goto LAB_014b8d01;
LAB_014b8d98:
              *(undefined4 *)(lVar30 + 0x10 + uVar27 * 4) = 0x800000;
              pfVar2 = (float *)(lVar30 + 0x14 + uVar27 * 4);
              fVar47 = pfVar2[1];
              fVar48 = pfVar2[2];
              fVar46 = pfVar2[3];
              if (*pfVar2 < DAT_02394274) {
LAB_014b8d13:
                *(undefined4 *)(lVar30 + 0x14 + uVar27 * 4) = 0x800000;
              }
            }
            else {
              *(undefined4 *)(lVar30 + 0xc + uVar27 * 4) = 0x800000;
              if (fVar46 < _UNK_0241109c) goto LAB_014b8d98;
LAB_014b8d01:
              pfVar2 = (float *)(lVar30 + 0x14 + uVar27 * 4);
              fVar47 = pfVar2[1];
              fVar48 = pfVar2[2];
              fVar46 = pfVar2[3];
              if (*pfVar2 < DAT_02394274) goto LAB_014b8d13;
            }
            if (fVar47 < _UNK_02411094) {
              *(undefined4 *)(lVar30 + 0x18 + uVar27 * 4) = 0x800000;
            }
            if (fVar48 < _UNK_02411098) {
              *(undefined4 *)(lVar30 + 0x1c + uVar27 * 4) = 0x800000;
            }
            if (fVar46 < _UNK_0241109c) {
              *(undefined4 *)(lVar30 + 0x20 + uVar27 * 4) = 0x800000;
            }
            uVar27 = uVar27 + 8;
          } while (uVar41 != uVar27);
          if (uVar26 == uVar41) goto LAB_014b82d0;
        }
        do {
          pfVar2 = (float *)(lVar30 + uVar40 * 4);
          if (*pfVar2 <= DAT_02394274 && DAT_02394274 != *pfVar2) {
            *(undefined4 *)(lVar30 + uVar40 * 4) = 0x800000;
          }
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
      }
LAB_014b82d0:
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar42);
  }
  if (puVar21 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar20 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


