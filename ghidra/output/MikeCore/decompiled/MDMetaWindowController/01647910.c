// Function: FUN_01647910
// Address: 01647910
// Size: 12958 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x0164a6e4) */
/* WARNING: Removing unreachable block (ram,0x0164a6f0) */
/* WARNING: Removing unreachable block (ram,0x0164869c) */
/* WARNING: Removing unreachable block (ram,0x016486a8) */
/* WARNING: Removing unreachable block (ram,0x0164823d) */
/* WARNING: Removing unreachable block (ram,0x01648249) */
/* WARNING: Removing unreachable block (ram,0x016495a8) */
/* WARNING: Removing unreachable block (ram,0x01647b30) */
/* WARNING: Removing unreachable block (ram,0x01647b3c) */
/* WARNING: Removing unreachable block (ram,0x01647a5f) */
/* WARNING: Removing unreachable block (ram,0x01647a6b) */
/* WARNING: Removing unreachable block (ram,0x01649cc3) */
/* WARNING: Removing unreachable block (ram,0x0164a2b5) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_01647910(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  void *pvVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  pthread_key_t in_ECX;
  pthread_key_t pVar32;
  void *pvVar33;
  ulonglong uVar34;
  undefined *puVar35;
  pthread_key_t in_EDX;
  ulonglong uVar36;
  ulonglong uVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  int unaff_ESI;
  int *piVar41;
  ulonglong uVar42;
  longlong unaff_RDI;
  undefined *puVar43;
  size_t sVar44;
  ulonglong in_R8;
  int *in_R9;
  ulonglong uVar45;
  longlong lVar46;
  pthread_key_t pVar47;
  undefined *puVar48;
  ulonglong uVar49;
  int iVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  undefined *puVar57;
  longlong lVar58;
  bool bVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  bool bVar65;
  bool bVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  longlong local_110;
  int local_100;
  undefined4 uStack_fc;
  char local_f8;
  undefined *local_e8;
  longlong local_b8;
  char local_b0;
  longlong local_90;
  ulonglong local_80;
  longlong local_68;
  longlong local_50;
  ulonglong local_48;
  
  lVar14 = local_b8;
  if (((*(longlong *)(unaff_RDI + 0xd0) != 0) && (*(int *)(unaff_RDI + 0xd8) == unaff_ESI)) &&
     (*(pthread_key_t *)(unaff_RDI + 0xdc) == in_EDX)) {
    if ((*(float *)(unaff_RDI + 0xe4) == param_1) &&
       (!NAN(*(float *)(unaff_RDI + 0xe4)) && !NAN(param_1))) {
      if ((*(float *)(unaff_RDI + 0xe8) == param_2) &&
         (!NAN(*(float *)(unaff_RDI + 0xe8)) && !NAN(param_2))) {
        if ((*(float *)(unaff_RDI + 0xec) == param_3) &&
           (!NAN(*(float *)(unaff_RDI + 0xec)) && !NAN(param_3))) {
          if ((*(float *)(unaff_RDI + 0xf0) == param_4) &&
             (!NAN(*(float *)(unaff_RDI + 0xf0)) && !NAN(param_4))) {
            return *(longlong *)(unaff_RDI + 0xd0);
          }
        }
      }
    }
  }
  if (*(pthread_key_t *)(unaff_RDI + 0xdc) != in_EDX) {
    *(pthread_key_t *)(unaff_RDI + 0xe0) = *(pthread_key_t *)(unaff_RDI + 0xdc);
  }
  *(pthread_key_t *)(unaff_RDI + 0xdc) = in_EDX;
  *(int *)(unaff_RDI + 0xd8) = unaff_ESI;
  *(float *)(unaff_RDI + 0xe4) = param_1;
  *(float *)(unaff_RDI + 0xe8) = param_2;
  *(float *)(unaff_RDI + 0xec) = param_3;
  *(float *)(unaff_RDI + 0xf0) = param_4;
  pvVar19 = _pthread_getspecific(in_ECX);
  if (pvVar19 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01646020();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  if (unaff_ESI == 0) {
    lVar51 = 0;
  }
  else {
    if (*(int *)(local_b8 + 0xc) <= (int)in_EDX) {
      lVar51 = 0;
      goto LAB_0164ac61;
    }
    puVar57 = (undefined *)(longlong)(int)in_EDX;
    lVar6 = *(longlong *)(*(longlong *)(local_b8 + 0x10) + (longlong)puVar57 * 8);
    pVar32 = in_EDX;
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    pvVar19 = _pthread_getspecific(pVar32);
    if (pvVar19 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_b0 == '\0') && (local_b8 != 0)) {
      FUN_00d50b00();
    }
    uVar17 = *(uint *)(local_b8 + 0x24);
    iVar50 = *(int *)(local_b8 + 0x30);
    dVar4 = *(double *)(local_b8 + 0x50);
    dVar5 = *(double *)(local_b8 + 0x38);
    uVar15 = FUN_014832c0();
    if (*(longlong *)(unaff_RDI + 0x80) == 0) {
      plVar24 = (longlong *)FUN_00e8fc40();
      FUN_011410f0();
      (**(code **)(*plVar24 + 0x18))();
      plVar7 = *(longlong **)(unaff_RDI + 0x80);
      if (plVar7 == plVar24) {
        FUN_00d50b20();
      }
      else {
        *(longlong **)(unaff_RDI + 0x80) = plVar24;
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_014832d0();
    pvVar33 = (void *)(longlong)(int)uVar15;
    fVar63 = *(float *)(*(longlong *)(local_b8 + 0x10) + -4 + (longlong)pvVar33 * 4);
    pvVar19 = pvVar33;
    if (local_b0 != '\0') {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xd0) == 0) {
      uVar20 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0xd0) = uVar20;
    }
    ___bzero();
    lVar51 = *(longlong *)(unaff_RDI + 0xd0);
    if (unaff_ESI == 3) {
      lVar25 = FUN_00e83010();
      uVar17 = FUN_01483610(DAT_024116c0);
      fVar63 = *(float *)(*(longlong *)(unaff_RDI + 0xc0) + (longlong)*(int *)(unaff_RDI + 0xe0) * 4
                         );
      puVar28 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar28 = &DAT_02572358;
      (*DAT_02572370)();
      FUN_00d216c0();
      sVar44 = (size_t)in_R8;
      if (*(int *)(unaff_RDI + 0x100) < 1) {
        local_48 = 0;
      }
      else {
        fVar63 = fVar63 * DAT_02394254;
        local_80 = 0;
        local_90 = 0;
        local_48 = 0;
        do {
          if (1 < (int)uVar17) {
            lVar21 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
            lVar52 = *(longlong *)
                      (*(longlong *)(unaff_RDI + 0xa8) + (longlong)*(int *)(unaff_RDI + 0xe0) * 8) +
                     local_80 * 4;
            uVar55 = 1;
            do {
              fVar60 = *(float *)(lVar52 + uVar55 * 4);
              if (((fVar63 < fVar60) &&
                  (pfVar1 = (float *)(lVar52 + -4 + uVar55 * 4),
                  *pfVar1 <= fVar60 && fVar60 != *pfVar1)) &&
                 (*(float *)(lVar52 + 4 + uVar55 * 4) <= fVar60)) {
                fVar60 = *(float *)(lVar21 + local_80 * 4 + uVar55 * 4) / fVar60;
                *(float *)(lVar25 + (longlong)(int)local_48 * 4) = fVar60;
                FUN_014328b0(SUB84((double)fVar60,0));
                if (local_f8 == '\0') {
                  if (CONCAT44(uStack_fc,local_100) != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_f8 = '\0';
                }
                FUN_00d21140();
                if (CONCAT44(uStack_fc,local_100) != 0) {
                  FUN_00d50b20();
                }
                if ((local_f8 != '\0') && (CONCAT44(uStack_fc,local_100) != 0)) {
                  FUN_00d50b20();
                }
                sVar44 = (size_t)in_R8;
                uVar39 = (int)local_48 + 1;
                bVar59 = 0xc34e < (int)local_48;
                local_48 = (ulonglong)uVar39;
                if (bVar59) goto LAB_01648bc7;
              }
              sVar44 = (size_t)in_R8;
              uVar55 = uVar55 + 1;
            } while (uVar17 != uVar55);
            if (49999 < (int)local_48) break;
          }
          sVar44 = (size_t)in_R8;
          local_90 = local_90 + 1;
          local_80 = local_80 + (longlong)pvVar33;
        } while (local_90 < *(int *)(unaff_RDI + 0x100));
      }
LAB_01648bc7:
      if ((double)param_4 <= DAT_024119c0) {
        _qsort(FUN_00e8b5c0,4,sVar44,in_R9);
        fVar63 = *(float *)(lVar25 + (longlong)((int)(local_48 >> 0x1f) + (int)local_48 >> 1) * 4);
      }
      else {
        FUN_00d242c0(SUB84((double)param_4,0),0);
        uVar17 = *(uint *)((longlong)puVar28 + 0xc);
        fVar63 = DAT_02390124;
        if (0 < (int)uVar17) {
          lVar25 = puVar28[2];
          if ((ulonglong)uVar17 - 1 < 3) {
            fVar60 = 0.0;
            uVar55 = 0;
          }
          else {
            fVar60 = 0.0;
            uVar55 = 0;
            do {
              fVar60 = (float)*(double *)(*(longlong *)(lVar25 + 0x18 + uVar55 * 8) + 0x18) +
                       (float)*(double *)(*(longlong *)(lVar25 + 0x10 + uVar55 * 8) + 0x18) +
                       (float)*(double *)(*(longlong *)(lVar25 + 8 + uVar55 * 8) + 0x18) +
                       (float)*(double *)(*(longlong *)(lVar25 + uVar55 * 8) + 0x18) + fVar60;
              uVar55 = uVar55 + 4;
            } while ((uVar17 & 0xfffffffc) != uVar55);
          }
          if ((ulonglong)(uVar17 & 3) != 0) {
            uVar29 = 0;
            do {
              fVar60 = fVar60 + (float)*(double *)
                                        (*(longlong *)(lVar25 + uVar55 * 8 + uVar29 * 8) + 0x18);
              uVar29 = uVar29 + 1;
            } while ((uVar17 & 3) != uVar29);
          }
          fVar64 = 0.0;
          uVar55 = 0;
          do {
            fVar64 = (float)*(double *)(*(longlong *)(puVar28[2] + uVar55 * 8) + 0x18) + fVar64;
            if (fVar60 * DAT_0239011c <= fVar64) {
              fVar63 = (float)*(double *)
                               (*(longlong *)(puVar28[2] + (uVar55 & 0xffffffff) * 8) + 0x10);
              break;
            }
            uVar55 = uVar55 + 1;
          } while (uVar17 != uVar55);
        }
      }
      fVar60 = (float)_powf(param_1,DAT_02394298);
      FUN_00e83070();
      uVar55 = (ulonglong)*(uint *)(unaff_RDI + 0x100);
      if ((0 < (int)*(uint *)(unaff_RDI + 0x100)) && (0 < (int)uVar15)) {
        fVar60 = fVar60 * fVar63;
        fVar63 = DAT_02390124 / *(float *)(unaff_RDI + 200);
        lVar25 = *(longlong *)
                  (*(longlong *)(unaff_RDI + 0xa8) + (longlong)*(int *)(unaff_RDI + 0xe0) * 8);
        lVar52 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
        uVar29 = (ulonglong)uVar15;
        if (uVar15 < 8) {
          lVar21 = 0x18;
          do {
            *(float *)(lVar51 + -0x18 + lVar21) =
                 (*(float *)(lVar52 + -0x18 + lVar21) - *(float *)(lVar25 + -0x18 + lVar21) * fVar60
                 ) * fVar63;
            if (((((uVar15 != 1) &&
                  (*(float *)(lVar51 + -0x14 + lVar21) =
                        (*(float *)(lVar52 + -0x14 + lVar21) -
                        *(float *)(lVar25 + -0x14 + lVar21) * fVar60) * fVar63, uVar15 != 2)) &&
                 (*(float *)(lVar51 + -0x10 + lVar21) =
                       (*(float *)(lVar52 + -0x10 + lVar21) -
                       *(float *)(lVar25 + -0x10 + lVar21) * fVar60) * fVar63, uVar15 != 3)) &&
                ((*(float *)(lVar51 + -0xc + lVar21) =
                       (*(float *)(lVar52 + -0xc + lVar21) -
                       *(float *)(lVar25 + -0xc + lVar21) * fVar60) * fVar63, uVar15 != 4 &&
                 (*(float *)(lVar51 + -8 + lVar21) =
                       (*(float *)(lVar52 + -8 + lVar21) - *(float *)(lVar25 + -8 + lVar21) * fVar60
                       ) * fVar63, uVar15 != 5)))) &&
               (*(float *)(lVar51 + -4 + lVar21) =
                     (*(float *)(lVar52 + -4 + lVar21) - *(float *)(lVar25 + -4 + lVar21) * fVar60)
                     * fVar63, uVar15 != 6)) {
              *(float *)(lVar51 + lVar21) =
                   (*(float *)(lVar52 + lVar21) - *(float *)(lVar25 + lVar21) * fVar60) * fVar63;
            }
            lVar21 = lVar21 + uVar29 * 4;
            uVar55 = uVar55 - 1;
          } while (uVar55 != 0);
        }
        else {
          uVar34 = (ulonglong)(uVar15 & 0xfffffff8);
          lVar21 = lVar51 + 0x10;
          lVar31 = uVar29 * 4;
          lVar22 = lVar25 + 0x10;
          lVar23 = lVar52 + 0x10;
          lVar54 = lVar51 + 4;
          uVar53 = 0;
          lVar46 = lVar25;
          lVar40 = lVar52;
          do {
            lVar58 = uVar53 * uVar29;
            uVar49 = lVar51 + lVar58 * 4;
            lVar56 = uVar29 + lVar58;
            uVar30 = lVar51 + lVar56 * 4;
            if (uVar49 < (ulonglong)(lVar52 + lVar56 * 4) &&
                (ulonglong)(lVar52 + lVar58 * 4) < uVar30) {
              uVar36 = 0;
joined_r0x01649382:
              uVar49 = uVar36;
              if ((uVar15 & 1) != 0) {
                lVar58 = lVar58 + uVar36;
                *(float *)(lVar51 + lVar58 * 4) =
                     (*(float *)(lVar52 + lVar58 * 4) - *(float *)(lVar25 + lVar58 * 4) * fVar60) *
                     fVar63;
                uVar49 = uVar36 | 1;
              }
              if (~uVar36 != -uVar29) {
                do {
                  *(float *)(lVar54 + -4 + uVar49 * 4) =
                       (*(float *)(lVar40 + uVar49 * 4) - *(float *)(lVar46 + uVar49 * 4) * fVar60)
                       * fVar63;
                  *(float *)(lVar54 + uVar49 * 4) =
                       (*(float *)(lVar40 + 4 + uVar49 * 4) -
                       *(float *)(lVar46 + 4 + uVar49 * 4) * fVar60) * fVar63;
                  uVar49 = uVar49 + 2;
                } while (uVar29 != uVar49);
              }
            }
            else {
              uVar36 = 0;
              if (uVar49 < (ulonglong)(lVar25 + lVar56 * 4) &&
                  (ulonglong)(lVar25 + lVar58 * 4) < uVar30) goto joined_r0x01649382;
              uVar49 = 0;
              do {
                pfVar3 = (float *)(lVar23 + -0x10 + uVar49 * 4);
                pfVar1 = (float *)(lVar23 + uVar49 * 4);
                fVar64 = *pfVar1;
                fVar61 = pfVar1[1];
                fVar62 = pfVar1[2];
                fVar8 = pfVar1[3];
                pfVar2 = (float *)(lVar22 + -0x10 + uVar49 * 4);
                pfVar1 = (float *)(lVar22 + uVar49 * 4);
                fVar9 = *pfVar1;
                fVar10 = pfVar1[1];
                fVar11 = pfVar1[2];
                fVar12 = pfVar1[3];
                auVar69._0_4_ = (*pfVar3 - *pfVar2 * fVar60) * fVar63;
                auVar69._4_4_ = (pfVar3[1] - pfVar2[1] * fVar60) * fVar63;
                auVar69._8_4_ = (pfVar3[2] - pfVar2[2] * fVar60) * fVar63;
                auVar69._12_4_ = (pfVar3[3] - pfVar2[3] * fVar60) * fVar63;
                *(undefined1 (*) [16])(lVar21 + -0x10 + uVar49 * 4) = auVar69;
                pfVar1 = (float *)(lVar21 + uVar49 * 4);
                *pfVar1 = (fVar64 - fVar9 * fVar60) * fVar63;
                pfVar1[1] = (fVar61 - fVar10 * fVar60) * fVar63;
                pfVar1[2] = (fVar62 - fVar11 * fVar60) * fVar63;
                pfVar1[3] = (fVar8 - fVar12 * fVar60) * fVar63;
                uVar49 = uVar49 + 8;
              } while (uVar34 != uVar49);
              uVar36 = uVar34;
              if (uVar34 != uVar29) goto joined_r0x01649382;
            }
            uVar53 = uVar53 + 1;
            lVar21 = lVar21 + lVar31;
            lVar22 = lVar22 + lVar31;
            lVar23 = lVar23 + lVar31;
            lVar54 = lVar54 + lVar31;
            lVar46 = lVar46 + lVar31;
            lVar40 = lVar40 + lVar31;
          } while (uVar53 != uVar55);
        }
      }
      if (puVar28 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
LAB_0164ac42:
      if (lVar14 != 0) goto LAB_0164ac47;
    }
    else {
      if (unaff_ESI != 1) {
        if (unaff_ESI == -1) {
          lVar51 = *(longlong *)(unaff_RDI + 0x78);
          if ((lVar51 == 0) || (*(int *)(lVar51 + 0xc) <= (int)in_EDX)) {
            lVar51 = 0;
            goto LAB_0164ac47;
          }
          lVar25 = *(longlong *)(*(longlong *)(lVar51 + 0x10) + (longlong)puVar57 * 8);
          if (lVar25 != 0) {
            FUN_00d50b00();
          }
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8) != 0) {
            FUN_00e83070();
            *(undefined8 *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8) = 0;
          }
          uVar20 = FUN_00e83010();
          *(undefined8 *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8) = uVar20;
          ___bzero();
          lVar51 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
          if (*(int *)(unaff_RDI + 0x100) < 1) {
            bVar59 = false;
            local_90 = 0;
          }
          else if ((int)uVar17 < 2) {
            lVar21 = 0;
            lVar52 = 0;
            bVar65 = false;
            do {
              local_90 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + lVar21 * 8);
              if (lVar52 == local_90) {
                local_90 = lVar52;
                bVar59 = bVar65;
                if ((!bVar65) && (lVar52 != 0)) {
                  FUN_00d50b00();
                  bVar59 = true;
                }
              }
              else {
                if (local_90 != 0) {
                  FUN_00d50b00();
                }
                bVar59 = true;
                if ((bVar65) && (lVar52 != 0)) {
                  FUN_00d50b20();
                }
              }
              FUN_015c6b60();
              FUN_015c66c0();
              FUN_015c6be0();
              lVar21 = lVar21 + 1;
              lVar52 = local_90;
              bVar65 = bVar59;
            } while (lVar21 < *(int *)(unaff_RDI + 0x100));
          }
          else {
            fVar60 = (float)dVar4;
            fVar64 = DAT_02390124 / (float)iVar50;
            lVar52 = 0;
            local_90 = 0;
            bVar59 = false;
            do {
              lVar21 = *(longlong *)(*(longlong *)(lVar25 + 0x10) + lVar52 * 8);
              if (local_90 == lVar21) {
                if ((!bVar59) && (local_90 != 0)) {
                  bVar59 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar21 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar59) && (local_90 != 0)) {
                  FUN_00d50b20();
                  bVar59 = true;
                  local_90 = lVar21;
                }
                else {
                  bVar59 = true;
                  local_90 = lVar21;
                }
              }
              lVar21 = FUN_015c6b60();
              lVar22 = FUN_015c66c0();
              lVar23 = FUN_015c6be0();
              uVar55 = 1;
              iVar50 = 2;
              do {
                fVar61 = *(float *)(lVar22 + uVar55 * 4);
                if (fVar60 <= fVar61) {
                  if (fVar63 <= fVar61) break;
                  fVar61 = (float)_logf(fVar61 * DAT_02394204);
                  fVar61 = (float)FUN_014b7610(fVar61 * DAT_02394208);
                  fVar61 = fVar61 + DAT_0239011c;
                  iVar38 = (int)((double)((float)*(int *)(lVar23 + uVar55 * 4) * fVar64 +
                                         (float)(int)lVar52) + DAT_023942d0);
                  if ((-1 < iVar38) && (iVar38 < *(int *)(unaff_RDI + 0x100))) {
                    fVar62 = (float)_logf((float)iVar50 * fVar60 * DAT_02394204);
                    iVar38 = FUN_01483610(fVar62 * DAT_02394208);
                    fVar62 = (float)_logf((float)(int)uVar55 * fVar60 * DAT_02394204);
                    iVar16 = FUN_01483610(fVar62 * DAT_02394208);
                    uVar39 = (int)(((float)iVar38 - (float)iVar16) + DAT_0239011c) * 2;
                    if ((int)uVar39 < 5) {
                      uVar39 = 4;
                    }
                    in_R8 = (ulonglong)uVar39;
                    FUN_00e84250();
                    FUN_015c31c0(*(undefined4 *)(lVar21 + uVar55 * 4),(int)fVar61);
                  }
                }
                uVar55 = uVar55 + 1;
                iVar50 = iVar50 + 1;
              } while (uVar17 != uVar55);
              lVar52 = lVar52 + 1;
            } while (lVar52 < *(int *)(unaff_RDI + 0x100));
          }
          puVar28 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar28 = &DAT_025f0d98;
          puVar28[2] = 0;
          puVar28[3] = 0;
          puVar28[4] = 0;
          puVar28[5] = 0;
          puVar28[6] = 0;
          puVar28[7] = 0;
          (*DAT_025f0db0)();
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + (longlong)puVar57 * 8) != 0) {
            FUN_00e83070();
            *(undefined8 *)(*(longlong *)(unaff_RDI + 0xb0) + (longlong)puVar57 * 8) = 0;
          }
          uVar20 = FUN_00e83010();
          *(undefined8 *)(*(longlong *)(unaff_RDI + 0xb0) + (longlong)puVar57 * 8) = uVar20;
          ___bzero();
          uVar17 = *(uint *)(unaff_RDI + 0x100);
          if (0 < (int)uVar17) {
            lVar52 = *(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + (longlong)puVar57 * 8);
            if ((int)uVar15 < 1) {
              ___bzero();
            }
            else {
              in_R8 = (ulonglong)uVar15 - 1;
              lVar21 = lVar51 + 0xc;
              lVar23 = (ulonglong)uVar15 * 4;
              uVar55 = 0;
              lVar22 = lVar51;
              do {
                fVar63 = 0.0;
                uVar29 = 0;
                if (2 < in_R8) {
                  do {
                    fVar60 = *(float *)(lVar21 + -0xc + uVar29 * 4);
                    fVar64 = *(float *)(lVar21 + -8 + uVar29 * 4);
                    fVar61 = *(float *)(lVar21 + -4 + uVar29 * 4);
                    fVar62 = *(float *)(lVar21 + uVar29 * 4);
                    fVar63 = fVar62 * fVar62 +
                             fVar61 * fVar61 + fVar64 * fVar64 + fVar60 * fVar60 + fVar63;
                    uVar29 = uVar29 + 4;
                  } while ((uVar15 & 0xfffffffc) != uVar29);
                }
                if ((ulonglong)(uVar15 & 3) != 0) {
                  uVar34 = 0;
                  do {
                    fVar60 = *(float *)(lVar22 + uVar29 * 4 + uVar34 * 4);
                    fVar63 = fVar63 + fVar60 * fVar60;
                    uVar34 = uVar34 + 1;
                  } while ((uVar15 & 3) != uVar34);
                }
                *(float *)(lVar52 + uVar55 * 4) = SQRT(fVar63);
                uVar55 = uVar55 + 1;
                lVar21 = lVar21 + lVar23;
                lVar22 = lVar22 + lVar23;
              } while (uVar55 != uVar17);
            }
          }
          sVar44 = (size_t)in_R8;
          FUN_015c15b0(DAT_02390d34,(ulonglong)uVar17);
          if (*(longlong *)(*(longlong *)(unaff_RDI + 0xb8) + (longlong)puVar57 * 8) != 0) {
            FUN_00e83070();
            *(undefined8 *)(*(longlong *)(unaff_RDI + 0xb8) + (longlong)puVar57 * 8) = 0;
          }
          uVar20 = FUN_00e83010();
          dVar5 = DAT_0238fee8 / dVar5;
          *(undefined8 *)(*(longlong *)(unaff_RDI + 0xb8) + (longlong)puVar57 * 8) = uVar20;
          _memcpy(*(void **)(unaff_RDI + 0xb8),(void *)((longlong)*(int *)(unaff_RDI + 0x100) << 2),
                  sVar44);
          FUN_015c1480((float)dVar5,*(undefined4 *)(unaff_RDI + 0x100));
          uVar17 = *(uint *)(unaff_RDI + 0x100);
          fVar63 = DAT_023b81d4;
          if (2 < (int)uVar17) {
            lVar52 = *(longlong *)(*(longlong *)(unaff_RDI + 0xb0) + (longlong)puVar57 * 8);
            uVar55 = (ulonglong)(uVar17 - 1) - 1;
            uVar29 = (ulonglong)((uint)uVar55 & 3);
            if ((ulonglong)(uVar17 - 1) - 2 < 3) {
              lVar21 = 1;
            }
            else {
              uVar34 = 0;
              do {
                uVar53 = uVar34;
                fVar60 = *(float *)(lVar52 + 4 + uVar53 * 4);
                if (fVar60 <= fVar63) {
                  fVar60 = fVar63;
                }
                fVar63 = *(float *)(lVar52 + 8 + uVar53 * 4);
                if (fVar63 <= fVar60) {
                  fVar63 = fVar60;
                }
                fVar60 = *(float *)(lVar52 + 0xc + uVar53 * 4);
                if (fVar60 <= fVar63) {
                  fVar60 = fVar63;
                }
                fVar63 = *(float *)(lVar52 + 0x10 + uVar53 * 4);
                if (fVar63 <= fVar60) {
                  fVar63 = fVar60;
                }
                uVar34 = uVar53 + 4;
              } while ((uVar55 & 0xfffffffffffffffc) != uVar53 + 4);
              lVar21 = uVar53 + 5;
            }
            if (uVar29 != 0) {
              uVar55 = 0;
              do {
                fVar60 = *(float *)(lVar52 + lVar21 * 4 + uVar55 * 4);
                if (fVar60 <= fVar63) {
                  fVar60 = fVar63;
                }
                uVar55 = uVar55 + 1;
                fVar63 = fVar60;
              } while (uVar29 != uVar55);
            }
          }
          *(float *)(*(longlong *)(unaff_RDI + 0xc0) + (longlong)puVar57 * 4) = fVar63;
          if (0 < (int)uVar17) {
            fVar63 = fVar63 * DAT_023b81d4;
            lVar52 = *(longlong *)(*(longlong *)(unaff_RDI + 0xb8) + (longlong)puVar57 * 8);
            if (uVar17 < 8) {
              uVar55 = 0;
            }
            else {
              uVar55 = (ulonglong)(uVar17 & 0xfffffff8);
              uVar29 = 0;
              do {
                pfVar1 = (float *)(lVar52 + uVar29 * 4);
                fVar60 = pfVar1[1];
                fVar64 = pfVar1[2];
                fVar61 = pfVar1[3];
                if (fVar63 <= *pfVar1) {
                  if (fVar60 < fVar63) goto LAB_01649fc0;
LAB_01649f4b:
                  if (fVar64 < fVar63) goto LAB_01649f57;
LAB_01649fd2:
                  if (fVar61 < fVar63) goto LAB_01649fde;
LAB_01649f69:
                  pfVar1 = (float *)(lVar52 + 0x10 + uVar29 * 4);
                  fVar60 = pfVar1[1];
                  fVar64 = pfVar1[2];
                  fVar61 = pfVar1[3];
                  if (*pfVar1 < fVar63) goto LAB_01649f73;
LAB_01649fee:
                  bVar65 = fVar64 < fVar63;
                  bVar66 = fVar61 < fVar63;
                  if (fVar60 < fVar63) goto LAB_01649ffe;
LAB_01649f89:
                  if (bVar65) goto LAB_01649f95;
LAB_0164a010:
                  if (bVar66) goto LAB_0164a020;
                }
                else {
                  *(float *)(lVar52 + uVar29 * 4) = fVar63;
                  if (fVar63 <= fVar60) goto LAB_01649f4b;
LAB_01649fc0:
                  *(float *)(lVar52 + 4 + uVar29 * 4) = fVar63;
                  if (fVar63 <= fVar64) goto LAB_01649fd2;
LAB_01649f57:
                  *(float *)(lVar52 + 8 + uVar29 * 4) = fVar63;
                  if (fVar63 <= fVar61) goto LAB_01649f69;
LAB_01649fde:
                  *(float *)(lVar52 + 0xc + uVar29 * 4) = fVar63;
                  pfVar1 = (float *)(lVar52 + 0x10 + uVar29 * 4);
                  fVar60 = pfVar1[1];
                  fVar64 = pfVar1[2];
                  fVar61 = pfVar1[3];
                  if (fVar63 <= *pfVar1) goto LAB_01649fee;
LAB_01649f73:
                  *(float *)(lVar52 + 0x10 + uVar29 * 4) = fVar63;
                  bVar65 = fVar64 < fVar63;
                  bVar66 = fVar61 < fVar63;
                  if (fVar63 <= fVar60) goto LAB_01649f89;
LAB_01649ffe:
                  *(float *)(lVar52 + 0x14 + uVar29 * 4) = fVar63;
                  if (!bVar65) goto LAB_0164a010;
LAB_01649f95:
                  *(float *)(lVar52 + 0x18 + uVar29 * 4) = fVar63;
                  if (bVar66) {
LAB_0164a020:
                    *(float *)(lVar52 + 0x1c + uVar29 * 4) = fVar63;
                  }
                }
                uVar29 = uVar29 + 8;
              } while (uVar55 != uVar29);
              if (uVar55 == uVar17) goto LAB_0164a030;
            }
            do {
              pfVar1 = (float *)(lVar52 + uVar55 * 4);
              if (*pfVar1 <= fVar63 && fVar63 != *pfVar1) {
                *(float *)(lVar52 + uVar55 * 4) = fVar63;
              }
              uVar55 = uVar55 + 1;
            } while (uVar17 != uVar55);
          }
LAB_0164a030:
          if (puVar28 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((bVar59) && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (lVar25 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar55 = FUN_00e83010();
          ___bzero();
          fVar63 = DAT_02390124;
          sVar44 = (size_t)in_R8;
          if (unaff_ESI < 3) {
            uVar17 = *(uint *)(unaff_RDI + 0x100);
            uVar29 = (ulonglong)uVar17;
            if ((0 < (int)uVar17) && (0 < (int)uVar15)) {
              lVar52 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
              uVar34 = (ulonglong)uVar15;
              lVar25 = uVar34 * 4;
              if (uVar15 < 8) {
                lVar21 = 0x18;
                do {
                  fVar60 = fVar63 / *(float *)(unaff_RDI + 200);
                  *(float *)((uVar55 - 0x18) + lVar21) =
                       *(float *)(lVar52 + -0x18 + lVar21) * fVar60;
                  if ((((uVar15 != 1) &&
                       (*(float *)((uVar55 - 0x14) + lVar21) =
                             *(float *)(lVar52 + -0x14 + lVar21) * fVar60, uVar15 != 2)) &&
                      (*(float *)((uVar55 - 0x10) + lVar21) =
                            *(float *)(lVar52 + -0x10 + lVar21) * fVar60, uVar15 != 3)) &&
                     (((*(float *)((uVar55 - 0xc) + lVar21) =
                             *(float *)(lVar52 + -0xc + lVar21) * fVar60, uVar15 != 4 &&
                       (*(float *)((uVar55 - 8) + lVar21) =
                             *(float *)(lVar52 + -8 + lVar21) * fVar60, uVar15 != 5)) &&
                      (*(float *)((uVar55 - 4) + lVar21) = *(float *)(lVar52 + -4 + lVar21) * fVar60
                      , uVar15 != 6)))) {
                    *(float *)(uVar55 + lVar21) = fVar60 * *(float *)(lVar52 + lVar21);
                  }
                  lVar21 = lVar21 + lVar25;
                  uVar29 = uVar29 - 1;
                  pvVar19 = (void *)0x0;
                } while (uVar29 != 0);
              }
              else {
                uVar53 = (ulonglong)(uVar15 & 0xfffffff8);
                if (uVar53 == uVar34) {
                  uVar49 = (uVar53 - 8 >> 3) + 1;
                  sVar44 = uVar15 & 3;
                  lVar21 = uVar55 + 0x30;
                  pvVar19 = (void *)(lVar52 + 0x30);
                  lVar22 = uVar55 + 0xc;
                  lVar23 = lVar52 + 0xc;
                  uVar30 = 0;
                  lVar54 = lVar52;
                  local_80 = uVar55;
                  do {
                    lVar31 = uVar30 * uVar34;
                    fVar60 = fVar63 / *(float *)(unaff_RDI + 200);
                    if ((uVar55 + lVar25 * uVar30 < lVar52 + (lVar31 + uVar34) * 4) &&
                       ((ulonglong)(lVar52 + lVar31 * 4) < lVar25 * uVar30 + lVar25 + uVar55)) {
                      if (uVar34 - 1 < 3) {
                        uVar36 = 0;
                      }
                      else {
                        uVar36 = 0;
                        do {
                          *(float *)(lVar22 + -0xc + uVar36 * 4) =
                               *(float *)(lVar23 + -0xc + uVar36 * 4) * fVar60;
                          *(float *)(lVar22 + -8 + uVar36 * 4) =
                               *(float *)(lVar23 + -8 + uVar36 * 4) * fVar60;
                          *(float *)(lVar22 + -4 + uVar36 * 4) =
                               *(float *)(lVar23 + -4 + uVar36 * 4) * fVar60;
                          *(float *)(lVar22 + uVar36 * 4) = *(float *)(lVar23 + uVar36 * 4) * fVar60
                          ;
                          uVar36 = uVar36 + 4;
                        } while ((uVar15 & 0xfffffffc) != uVar36);
                      }
                      if ((ulonglong)sVar44 != 0) {
                        uVar45 = 0;
                        do {
                          *(float *)(local_80 + uVar36 * 4 + uVar45 * 4) =
                               *(float *)(lVar54 + uVar36 * 4 + uVar45 * 4) * fVar60;
                          uVar45 = uVar45 + 1;
                        } while (sVar44 != uVar45);
                      }
                    }
                    else {
                      if (uVar53 - 8 == 0) {
                        lVar46 = 0;
                      }
                      else {
                        lVar46 = 0;
                        lVar40 = -(uVar49 & 0xfffffffffffffffe);
                        do {
                          pfVar1 = (float *)((longlong)pvVar19 + lVar46 * 4 + -0x30);
                          fVar64 = pfVar1[1];
                          fVar61 = pfVar1[2];
                          fVar62 = pfVar1[3];
                          pfVar3 = (float *)((longlong)pvVar19 + lVar46 * 4 + -0x20);
                          fVar8 = *pfVar3;
                          fVar9 = pfVar3[1];
                          fVar10 = pfVar3[2];
                          fVar11 = pfVar3[3];
                          pfVar3 = (float *)(lVar21 + -0x30 + lVar46 * 4);
                          *pfVar3 = *pfVar1 * fVar60;
                          pfVar3[1] = fVar64 * fVar60;
                          pfVar3[2] = fVar61 * fVar60;
                          pfVar3[3] = fVar62 * fVar60;
                          pfVar1 = (float *)(lVar21 + -0x20 + lVar46 * 4);
                          *pfVar1 = fVar8 * fVar60;
                          pfVar1[1] = fVar9 * fVar60;
                          pfVar1[2] = fVar10 * fVar60;
                          pfVar1[3] = fVar11 * fVar60;
                          pfVar3 = (float *)((longlong)pvVar19 + lVar46 * 4 + -0x10);
                          fVar64 = pfVar3[1];
                          fVar61 = pfVar3[2];
                          fVar62 = pfVar3[3];
                          pfVar1 = (float *)((longlong)pvVar19 + lVar46 * 4);
                          auVar72._0_4_ = *pfVar1 * fVar60;
                          auVar72._4_4_ = pfVar1[1] * fVar60;
                          auVar72._8_4_ = pfVar1[2] * fVar60;
                          auVar72._12_4_ = pfVar1[3] * fVar60;
                          pfVar1 = (float *)(lVar21 + -0x10 + lVar46 * 4);
                          *pfVar1 = *pfVar3 * fVar60;
                          pfVar1[1] = fVar64 * fVar60;
                          pfVar1[2] = fVar61 * fVar60;
                          pfVar1[3] = fVar62 * fVar60;
                          *(undefined1 (*) [16])(lVar21 + lVar46 * 4) = auVar72;
                          lVar46 = lVar46 + 0x10;
                          lVar40 = lVar40 + 2;
                        } while (lVar40 != 0);
                        if ((uVar49 & 1) == 0) goto LAB_01649649;
                      }
                      lVar46 = lVar46 + lVar31;
                      pfVar1 = (float *)(lVar52 + lVar46 * 4);
                      fVar64 = pfVar1[1];
                      fVar61 = pfVar1[2];
                      fVar62 = pfVar1[3];
                      pfVar3 = (float *)(lVar52 + 0x10 + lVar46 * 4);
                      auVar73._0_4_ = *pfVar3 * fVar60;
                      auVar73._4_4_ = pfVar3[1] * fVar60;
                      auVar73._8_4_ = pfVar3[2] * fVar60;
                      auVar73._12_4_ = pfVar3[3] * fVar60;
                      pfVar3 = (float *)(uVar55 + lVar46 * 4);
                      *pfVar3 = *pfVar1 * fVar60;
                      pfVar3[1] = fVar64 * fVar60;
                      pfVar3[2] = fVar61 * fVar60;
                      pfVar3[3] = fVar62 * fVar60;
                      *(undefined1 (*) [16])(uVar55 + 0x10 + lVar46 * 4) = auVar73;
                    }
LAB_01649649:
                    uVar30 = uVar30 + 1;
                    lVar21 = lVar21 + lVar25;
                    pvVar19 = (void *)((longlong)pvVar19 + lVar25);
                    lVar22 = lVar22 + lVar25;
                    lVar23 = lVar23 + lVar25;
                    local_80 = local_80 + lVar25;
                    lVar54 = lVar54 + lVar25;
                  } while (uVar30 != uVar29);
                }
                else {
                  uVar30 = (uVar53 - 8 >> 3) + 1;
                  sVar44 = uVar15 & 3;
                  lVar21 = uVar55 + 0x30;
                  pvVar19 = (void *)(lVar52 + 0x30);
                  uVar36 = 0;
                  lVar22 = lVar52;
                  uVar49 = uVar55;
                  do {
                    lVar23 = uVar36 * uVar34;
                    fVar60 = fVar63 / *(float *)(unaff_RDI + 200);
                    if ((uVar55 + lVar25 * uVar36 < lVar52 + (lVar23 + uVar34) * 4) &&
                       ((ulonglong)(lVar52 + lVar23 * 4) < lVar25 * uVar36 + lVar25 + uVar55)) {
                      uVar45 = 0;
                    }
                    else {
                      uVar45 = uVar53;
                      if (uVar53 - 8 == 0) {
                        lVar54 = 0;
                      }
                      else {
                        lVar54 = 0;
                        lVar31 = -(uVar30 & 0xfffffffffffffffe);
                        do {
                          pfVar1 = (float *)((longlong)pvVar19 + lVar54 * 4 + -0x30);
                          fVar64 = pfVar1[1];
                          fVar61 = pfVar1[2];
                          fVar62 = pfVar1[3];
                          pfVar3 = (float *)((longlong)pvVar19 + lVar54 * 4 + -0x20);
                          fVar8 = *pfVar3;
                          fVar9 = pfVar3[1];
                          fVar10 = pfVar3[2];
                          fVar11 = pfVar3[3];
                          pfVar3 = (float *)(lVar21 + -0x30 + lVar54 * 4);
                          *pfVar3 = *pfVar1 * fVar60;
                          pfVar3[1] = fVar64 * fVar60;
                          pfVar3[2] = fVar61 * fVar60;
                          pfVar3[3] = fVar62 * fVar60;
                          pfVar1 = (float *)(lVar21 + -0x20 + lVar54 * 4);
                          *pfVar1 = fVar8 * fVar60;
                          pfVar1[1] = fVar9 * fVar60;
                          pfVar1[2] = fVar10 * fVar60;
                          pfVar1[3] = fVar11 * fVar60;
                          pfVar3 = (float *)((longlong)pvVar19 + lVar54 * 4 + -0x10);
                          pfVar1 = (float *)((longlong)pvVar19 + lVar54 * 4);
                          fVar64 = *pfVar1;
                          fVar61 = pfVar1[1];
                          fVar62 = pfVar1[2];
                          fVar8 = pfVar1[3];
                          auVar76._0_4_ = *pfVar3 * fVar60;
                          auVar76._4_4_ = pfVar3[1] * fVar60;
                          auVar76._8_4_ = pfVar3[2] * fVar60;
                          auVar76._12_4_ = pfVar3[3] * fVar60;
                          *(undefined1 (*) [16])(lVar21 + -0x10 + lVar54 * 4) = auVar76;
                          pfVar1 = (float *)(lVar21 + lVar54 * 4);
                          *pfVar1 = fVar64 * fVar60;
                          pfVar1[1] = fVar61 * fVar60;
                          pfVar1[2] = fVar62 * fVar60;
                          pfVar1[3] = fVar8 * fVar60;
                          lVar54 = lVar54 + 0x10;
                          lVar31 = lVar31 + 2;
                        } while (lVar31 != 0);
                        if ((uVar30 & 1) == 0) goto LAB_0164a1f4;
                      }
                      lVar54 = lVar54 + lVar23;
                      pfVar1 = (float *)(lVar52 + lVar54 * 4);
                      pfVar3 = (float *)(lVar52 + 0x10 + lVar54 * 4);
                      fVar64 = *pfVar3;
                      fVar61 = pfVar3[1];
                      fVar62 = pfVar3[2];
                      fVar8 = pfVar3[3];
                      auVar77._0_4_ = *pfVar1 * fVar60;
                      auVar77._4_4_ = pfVar1[1] * fVar60;
                      auVar77._8_4_ = pfVar1[2] * fVar60;
                      auVar77._12_4_ = pfVar1[3] * fVar60;
                      *(undefined1 (*) [16])(uVar55 + lVar54 * 4) = auVar77;
                      pfVar1 = (float *)(uVar55 + 0x10 + lVar54 * 4);
                      *pfVar1 = fVar64 * fVar60;
                      pfVar1[1] = fVar61 * fVar60;
                      pfVar1[2] = fVar62 * fVar60;
                      pfVar1[3] = fVar8 * fVar60;
                    }
LAB_0164a1f4:
                    uVar37 = ~uVar45;
                    for (uVar42 = (ulonglong)sVar44; uVar42 != 0; uVar42 = uVar42 - 1) {
                      *(float *)(uVar49 + uVar45 * 4) = *(float *)(lVar22 + uVar45 * 4) * fVar60;
                      uVar45 = uVar45 + 1;
                    }
                    if (2 < uVar37 + uVar34) {
                      do {
                        *(float *)(uVar49 + uVar45 * 4) = *(float *)(lVar22 + uVar45 * 4) * fVar60;
                        *(float *)(uVar49 + 4 + uVar45 * 4) =
                             *(float *)(lVar22 + 4 + uVar45 * 4) * fVar60;
                        *(float *)(uVar49 + 8 + uVar45 * 4) =
                             *(float *)(lVar22 + 8 + uVar45 * 4) * fVar60;
                        *(float *)(uVar49 + 0xc + uVar45 * 4) =
                             *(float *)(lVar22 + 0xc + uVar45 * 4) * fVar60;
                        uVar45 = uVar45 + 4;
                      } while (uVar34 != uVar45);
                    }
                    uVar36 = uVar36 + 1;
                    lVar21 = lVar21 + lVar25;
                    pvVar19 = (void *)((longlong)pvVar19 + lVar25);
                    uVar49 = uVar49 + lVar25;
                    lVar22 = lVar22 + lVar25;
                  } while (uVar36 != uVar29);
                }
              }
            }
            _memcpy(pvVar19,(void *)((longlong)(int)(uVar17 * uVar15) << 2),sVar44);
          }
          else {
            pVar32 = *(pthread_key_t *)(*(longlong *)(unaff_RDI + 0x88) + 0xc);
            bVar59 = *(char *)(unaff_RDI + 0xf4) == '\0';
            iVar50 = 6;
            if (bVar59) {
              iVar50 = *(int *)(*(longlong *)(unaff_RDI + 0x90) + 0xc) + pVar32;
            }
            pVar47 = 4;
            if (bVar59) {
              pVar47 = pVar32;
            }
            lVar25 = FUN_00e83010();
            fVar63 = (float)_powf(param_1);
            puVar26 = (undefined *)FUN_00e83010();
            uVar17 = FUN_01483610(DAT_024116c0);
            puVar28 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            puVar35 = &DAT_02572358;
            *puVar28 = &DAT_02572358;
            (*DAT_02572370)();
            if ((int)pVar47 < iVar50) {
              puVar48 = (undefined *)(longlong)(int)pVar47;
              do {
                if (puVar48 != puVar57) {
                  fVar60 = *(float *)(*(longlong *)(unaff_RDI + 0xc0) + (longlong)puVar48 * 4) *
                           DAT_02394254;
                  FUN_00d216c0();
                  iVar38 = 0;
                  if (0 < *(int *)(unaff_RDI + 0x100)) {
                    if ((int)uVar17 < 2) {
                      puVar35 = (undefined *)0x0;
                      do {
                        puVar35 = puVar35 + 1;
                        iVar38 = 0;
                      } while ((longlong)puVar35 < (longlong)*(int *)(unaff_RDI + 0x100));
                    }
                    else {
                      local_50 = 0;
                      local_e8 = (undefined *)0x0;
                      iVar38 = 0;
                      do {
                        lVar52 = *(longlong *)
                                  (*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
                        lVar21 = local_50 * 4 +
                                 *(longlong *)
                                  (*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar48 * 8);
                        uVar29 = 1;
                        puVar35 = puVar48;
                        iVar16 = iVar38;
                        do {
                          fVar64 = *(float *)(lVar21 + uVar29 * 4);
                          iVar38 = iVar16;
                          if (((fVar60 < fVar64) &&
                              (pfVar1 = (float *)(lVar21 + -4 + uVar29 * 4),
                              *pfVar1 <= fVar64 && fVar64 != *pfVar1)) &&
                             (*(float *)(lVar21 + 4 + uVar29 * 4) <= fVar64)) {
                            fVar64 = *(float *)(lVar52 + local_50 * 4 + uVar29 * 4) / fVar64;
                            *(float *)(puVar26 + (longlong)iVar16 * 4) = fVar64;
                            puVar35 = puVar26;
                            FUN_014328b0(SUB84((double)fVar64,0));
                            local_b8 = CONCAT44(uStack_fc,local_100);
                            if (local_f8 == '\0') {
                              if (local_b8 != 0) {
                                FUN_00d50b00();
                              }
                            }
                            else {
                              local_f8 = '\0';
                            }
                            FUN_00d21140();
                            if (local_b8 != 0) {
                              FUN_00d50b20();
                            }
                            if ((local_f8 != '\0') && (CONCAT44(uStack_fc,local_100) != 0)) {
                              FUN_00d50b20();
                            }
                            iVar38 = iVar16 + 1;
                            if (0xc34e < iVar16) goto joined_r0x016488ae;
                          }
                          uVar29 = uVar29 + 1;
                          iVar16 = iVar38;
                        } while (uVar17 != uVar29);
                        if (49999 < iVar38) break;
                        local_e8 = local_e8 + 1;
                        local_50 = local_50 + (longlong)pvVar33;
                        puVar35 = local_e8;
                      } while ((longlong)local_e8 < (longlong)*(int *)(unaff_RDI + 0x100));
                    }
                  }
joined_r0x016488ae:
                  if ((double)param_4 <= DAT_024119c0) {
                    _qsort(FUN_00e8b5c0,4,(size_t)in_R8,in_R9);
                    fVar60 = *(float *)(puVar26 + (longlong)(iVar38 / 2) * 4);
                    puVar35 = puVar26;
LAB_0164850c:
                    *(float *)(lVar25 + (longlong)puVar48 * 4) = fVar60 * fVar63;
                  }
                  else {
                    FUN_00d242c0(SUB84((double)param_4,0),0);
                    uVar39 = *(uint *)((longlong)puVar28 + 0xc);
                    in_R8 = (ulonglong)uVar39;
                    if (0 < (int)uVar39) {
                      lVar52 = puVar28[2];
                      in_R9 = (int *)(ulonglong)(uVar39 & 3);
                      if (in_R8 - 1 < 3) {
                        fVar60 = 0.0;
                        uVar29 = 0;
                      }
                      else {
                        fVar60 = 0.0;
                        uVar29 = 0;
                        do {
                          fVar60 = (float)*(double *)
                                           (*(longlong *)(lVar52 + 0x18 + uVar29 * 8) + 0x18) +
                                   (float)*(double *)
                                           (*(longlong *)(lVar52 + 0x10 + uVar29 * 8) + 0x18) +
                                   (float)*(double *)(*(longlong *)(lVar52 + 8 + uVar29 * 8) + 0x18)
                                   + (float)*(double *)(*(longlong *)(lVar52 + uVar29 * 8) + 0x18) +
                                     fVar60;
                          uVar29 = uVar29 + 4;
                        } while ((uVar39 & 0xfffffffc) != uVar29);
                      }
                      if (in_R9 != (int *)0x0) {
                        piVar41 = (int *)0x0;
                        do {
                          fVar60 = fVar60 + (float)*(double *)
                                                    (*(longlong *)
                                                      (lVar52 + uVar29 * 8 + (longlong)piVar41 * 8)
                                                    + 0x18);
                          piVar41 = (int *)((longlong)piVar41 + 1);
                        } while (in_R9 != piVar41);
                      }
                      puVar35 = (undefined *)puVar28[2];
                      fVar64 = 0.0;
                      uVar29 = 0;
                      do {
                        fVar64 = (float)*(double *)(*(longlong *)(puVar35 + uVar29 * 8) + 0x18) +
                                 fVar64;
                        if (fVar60 * DAT_0239011c <= fVar64) {
                          fVar60 = (float)*(double *)
                                           (*(longlong *)(puVar35 + (uVar29 & 0xffffffff) * 8) +
                                           0x10);
                          goto LAB_0164850c;
                        }
                        uVar29 = uVar29 + 1;
                      } while (in_R8 != uVar29);
                    }
                  }
                }
                puVar48 = puVar48 + 1;
              } while (iVar50 != (int)puVar48);
            }
            FUN_00e83070();
            fVar63 = DAT_02390124;
            uVar17 = *(uint *)(unaff_RDI + 0x100);
            if ((0 < (int)uVar17) && (0 < (int)uVar15)) {
              puVar35 = *(undefined **)(unaff_RDI + 0xa8);
              puVar26 = *(undefined **)(puVar35 + (longlong)puVar57 * 8);
              uVar29 = (ulonglong)uVar15;
              if ((int)pVar47 < iVar50) {
                puVar48 = (undefined *)(longlong)(int)pVar47;
                puVar43 = (undefined *)(longlong)iVar50;
                uVar34 = 0;
                do {
                  fVar60 = *(float *)(unaff_RDI + 200);
                  uVar53 = 0;
                  do {
                    lVar52 = uVar34 * uVar29 + uVar53;
                    fVar64 = *(float *)(puVar26 + lVar52 * 4);
                    puVar27 = puVar48;
                    if ((((longlong)puVar43 - (longlong)puVar48 & 1U) != 0) &&
                       (puVar27 = puVar48 + 1, pVar47 != in_EDX)) {
                      fVar64 = fVar64 - *(float *)(*(longlong *)(puVar35 + (longlong)puVar48 * 8) +
                                                  lVar52 * 4) *
                                        *(float *)(lVar25 + (longlong)puVar48 * 4);
                    }
                    if (~(ulonglong)puVar48 != -(longlong)puVar43) {
                      do {
                        if (puVar57 != puVar27) {
                          fVar64 = fVar64 - *(float *)(*(longlong *)
                                                        (puVar35 + (longlong)puVar27 * 8) +
                                                      lVar52 * 4) *
                                            *(float *)(lVar25 + (longlong)puVar27 * 4);
                        }
                        if (puVar27 + 1 != puVar57) {
                          in_R8 = *(ulonglong *)(puVar35 + (longlong)puVar27 * 8 + 8);
                          fVar64 = fVar64 - *(float *)(in_R8 + lVar52 * 4) *
                                            *(float *)(lVar25 + 4 + (longlong)puVar27 * 4);
                        }
                        puVar27 = puVar27 + 2;
                      } while (puVar27 != puVar43);
                    }
                    *(float *)(uVar55 + lVar52 * 4) = fVar64 * (fVar63 / fVar60);
                    uVar53 = uVar53 + 1;
                  } while (uVar53 != uVar29);
                  uVar34 = uVar34 + 1;
                } while (uVar34 != uVar17);
              }
              else {
                lVar52 = uVar29 * 4;
                uVar34 = (ulonglong)(uVar15 & 0xfffffff8);
                uVar53 = (uVar34 - 8 >> 3) + 1;
                lVar25 = uVar55 + 0x30;
                puVar57 = puVar26 + 0x30;
                uVar49 = 0;
                puVar35 = puVar26;
                in_R8 = uVar55;
                do {
                  fVar60 = fVar63 / *(float *)(unaff_RDI + 200);
                  if (uVar15 < 8) {
                    uVar30 = 0;
LAB_01649c10:
                    uVar45 = ~uVar30;
                    for (uVar36 = (ulonglong)(uVar15 & 3); uVar36 != 0; uVar36 = uVar36 - 1) {
                      *(float *)(in_R8 + uVar30 * 4) = *(float *)(puVar35 + uVar30 * 4) * fVar60;
                      uVar30 = uVar30 + 1;
                    }
                    if (2 < uVar45 + uVar29) {
                      do {
                        *(float *)(in_R8 + uVar30 * 4) = *(float *)(puVar35 + uVar30 * 4) * fVar60;
                        *(float *)(in_R8 + 4 + uVar30 * 4) =
                             *(float *)(puVar35 + uVar30 * 4 + 4) * fVar60;
                        *(float *)(in_R8 + 8 + uVar30 * 4) =
                             *(float *)(puVar35 + uVar30 * 4 + 8) * fVar60;
                        *(float *)(in_R8 + 0xc + uVar30 * 4) =
                             *(float *)(puVar35 + uVar30 * 4 + 0xc) * fVar60;
                        uVar30 = uVar30 + 4;
                      } while (uVar29 != uVar30);
                    }
                  }
                  else {
                    lVar21 = uVar49 * uVar29;
                    if (((undefined *)(uVar55 + lVar52 * uVar49) < puVar26 + (uVar29 + lVar21) * 4)
                       && (puVar26 + lVar21 * 4 < (undefined *)(lVar52 * uVar49 + lVar52 + uVar55)))
                    {
                      uVar30 = 0;
                      goto LAB_01649c10;
                    }
                    if (uVar34 - 8 == 0) {
                      lVar22 = 0;
LAB_01649bd5:
                      lVar22 = lVar22 + lVar21;
                      pfVar1 = (float *)(puVar26 + lVar22 * 4);
                      pfVar3 = (float *)(puVar26 + lVar22 * 4 + 0x10);
                      fVar64 = *pfVar3;
                      fVar61 = pfVar3[1];
                      fVar62 = pfVar3[2];
                      fVar8 = pfVar3[3];
                      auVar75._0_4_ = *pfVar1 * fVar60;
                      auVar75._4_4_ = pfVar1[1] * fVar60;
                      auVar75._8_4_ = pfVar1[2] * fVar60;
                      auVar75._12_4_ = pfVar1[3] * fVar60;
                      *(undefined1 (*) [16])(uVar55 + lVar22 * 4) = auVar75;
                      pfVar1 = (float *)(uVar55 + 0x10 + lVar22 * 4);
                      *pfVar1 = fVar64 * fVar60;
                      pfVar1[1] = fVar61 * fVar60;
                      pfVar1[2] = fVar62 * fVar60;
                      pfVar1[3] = fVar8 * fVar60;
                    }
                    else {
                      lVar22 = 0;
                      lVar23 = -(uVar53 & 0xfffffffffffffffe);
                      do {
                        pfVar1 = (float *)(puVar57 + lVar22 * 4 + -0x30);
                        fVar64 = pfVar1[1];
                        fVar61 = pfVar1[2];
                        fVar62 = pfVar1[3];
                        pfVar3 = (float *)(puVar57 + lVar22 * 4 + -0x20);
                        fVar8 = *pfVar3;
                        fVar9 = pfVar3[1];
                        fVar10 = pfVar3[2];
                        fVar11 = pfVar3[3];
                        pfVar3 = (float *)(lVar25 + -0x30 + lVar22 * 4);
                        *pfVar3 = *pfVar1 * fVar60;
                        pfVar3[1] = fVar64 * fVar60;
                        pfVar3[2] = fVar61 * fVar60;
                        pfVar3[3] = fVar62 * fVar60;
                        pfVar1 = (float *)(lVar25 + -0x20 + lVar22 * 4);
                        *pfVar1 = fVar8 * fVar60;
                        pfVar1[1] = fVar9 * fVar60;
                        pfVar1[2] = fVar10 * fVar60;
                        pfVar1[3] = fVar11 * fVar60;
                        pfVar3 = (float *)(puVar57 + lVar22 * 4 + -0x10);
                        pfVar1 = (float *)(puVar57 + lVar22 * 4);
                        fVar64 = *pfVar1;
                        fVar61 = pfVar1[1];
                        fVar62 = pfVar1[2];
                        fVar8 = pfVar1[3];
                        auVar74._0_4_ = *pfVar3 * fVar60;
                        auVar74._4_4_ = pfVar3[1] * fVar60;
                        auVar74._8_4_ = pfVar3[2] * fVar60;
                        auVar74._12_4_ = pfVar3[3] * fVar60;
                        *(undefined1 (*) [16])(lVar25 + -0x10 + lVar22 * 4) = auVar74;
                        pfVar1 = (float *)(lVar25 + lVar22 * 4);
                        *pfVar1 = fVar64 * fVar60;
                        pfVar1[1] = fVar61 * fVar60;
                        pfVar1[2] = fVar62 * fVar60;
                        pfVar1[3] = fVar8 * fVar60;
                        lVar22 = lVar22 + 0x10;
                        lVar23 = lVar23 + 2;
                      } while (lVar23 != 0);
                      if ((uVar53 & 1) != 0) goto LAB_01649bd5;
                    }
                    uVar30 = uVar34;
                    if (uVar34 != uVar29) goto LAB_01649c10;
                  }
                  uVar49 = uVar49 + 1;
                  lVar25 = lVar25 + lVar52;
                  puVar57 = puVar57 + lVar52;
                  in_R8 = in_R8 + lVar52;
                  puVar35 = puVar35 + lVar52;
                } while (uVar49 != uVar17);
              }
            }
            sVar44 = (size_t)in_R8;
            FUN_00e83070();
            _memcpy(puVar35,(void *)((longlong)*(int *)(unaff_RDI + 0x100) * (longlong)pvVar33 * 4),
                    sVar44);
            if (puVar28 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          if (unaff_ESI == 2 || 4 < unaff_ESI) {
            ___bzero();
            lVar25 = FUN_00e83010();
            lVar52 = FUN_00e83010();
            lVar21 = FUN_00e83010();
            lVar22 = 0;
            fVar63 = DAT_02391094;
            do {
              fVar63 = (float)(int)lVar22 / fVar63;
              fVar60 = (float)_exp2f(fVar63 * DAT_023941f4);
              FUN_015c24c0(SUB84((double)fVar60,0),0x10);
              fVar60 = (float)_logf((float)local_100);
              fVar60 = fVar60 * DAT_02394208;
              fVar64 = (float)_logf((float)(int)local_b8);
              uVar18 = FUN_00e7d780(fVar60 * DAT_02391094);
              fVar64 = fVar64 * DAT_02394208;
              *(undefined4 *)(lVar52 + lVar22 * 4) = uVar18;
              uVar18 = FUN_00e7d780(fVar64 * DAT_02391094);
              *(undefined4 *)(lVar21 + lVar22 * 4) = uVar18;
              fVar63 = (float)((uint)((float)((uint)fVar60 ^ _DAT_023945e0) - (fVar63 - fVar64)) &
                              _DAT_02390140);
              fVar60 = 0.0;
              if (fVar63 < DAT_023942a8) {
                fVar60 = fVar63 / DAT_023941fc + DAT_02390124;
              }
              fVar61 = (float)_powf(DAT_02390124 /
                                    ((float)(local_100 + (int)local_b8) * DAT_0239011c),DAT_02394288
                                   );
              fVar63 = DAT_02391094;
              fVar64 = fVar61 * DAT_02391094;
              if ((int)local_b8 != 1) {
                fVar64 = fVar61;
              }
              *(float *)(lVar25 + lVar22 * 4) = fVar60 * fVar64;
              lVar22 = lVar22 + 1;
            } while (lVar22 != 0x3c5);
            puVar28 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar28 = &DAT_02572358;
            (*DAT_02572370)();
            uVar17 = FUN_01483610(DAT_024116c0);
            FUN_00e84250();
            iVar50 = *(int *)(unaff_RDI + 0x100);
            if (iVar50 < 1) {
              local_68 = 0;
              bVar65 = false;
              lVar22 = 0;
              bVar59 = false;
            }
            else {
              param_2 = param_2 * DAT_02394588;
              local_110 = 0;
              bVar59 = false;
              lVar22 = 0;
              bVar65 = false;
              local_68 = 0;
              local_e8 = (undefined *)uVar55;
              do {
                FUN_00d216c0();
                if (1 < (int)uVar17) {
                  uVar55 = 1;
                  do {
                    fVar63 = *(float *)((longlong)local_e8 + uVar55 * 4);
                    pfVar1 = (float *)(((longlong)local_e8 - 4U) + uVar55 * 4);
                    if (((*pfVar1 <= fVar63 && fVar63 != *pfVar1) &&
                        (*(float *)((longlong)local_e8 + 4U + uVar55 * 4) <= fVar63)) &&
                       (param_2 < fVar63)) {
                      FUN_015f8520(fVar63,uVar55 & 0xffffffff);
                      if (local_f8 == '\0') {
                        if (CONCAT44(uStack_fc,local_100) != 0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_f8 = '\0';
                      }
                      FUN_00d21140();
                      if (CONCAT44(uStack_fc,local_100) != 0) {
                        FUN_00d50b20();
                      }
                      if ((local_f8 != '\0') && (CONCAT44(uStack_fc,local_100) != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    uVar55 = uVar55 + 1;
                  } while (uVar17 != uVar55);
                }
                if (0 < *(int *)((longlong)puVar28 + 0xc)) {
                  lVar23 = 0;
                  do {
                    lVar54 = *(longlong *)(puVar28[2] + lVar23 * 8);
                    if (local_68 == lVar54) {
                      if ((!bVar65) && (local_68 != 0)) {
                        bVar65 = true;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (lVar54 != 0) {
                        FUN_00d50b00();
                      }
                      if ((bVar65) && (local_68 != 0)) {
                        FUN_00d50b20();
                        bVar65 = true;
                        local_68 = lVar54;
                      }
                      else {
                        bVar65 = true;
                        local_68 = lVar54;
                      }
                    }
                    lVar31 = (longlong)*(int *)((longlong)puVar28 + 0xc);
                    lVar54 = lVar23;
                    if (lVar23 < lVar31) {
                      do {
                        lVar31 = *(longlong *)(puVar28[2] + lVar54 * 8);
                        if (lVar22 == lVar31) {
                          if ((!bVar59) && (lVar22 != 0)) {
                            bVar59 = true;
                            FUN_00d50b00();
                          }
                        }
                        else {
                          if (lVar31 != 0) {
                            FUN_00d50b00();
                          }
                          if ((bVar59) && (lVar22 != 0)) {
                            FUN_00d50b20();
                            bVar59 = true;
                            lVar22 = lVar31;
                          }
                          else {
                            bVar59 = true;
                            lVar22 = lVar31;
                          }
                        }
                        iVar50 = *(int *)(local_68 + 0x10);
                        iVar38 = *(int *)(lVar22 + 0x10) - iVar50;
                        if (iVar38 < 0x3c5) {
                          lVar31 = (longlong)iVar38;
                          fVar63 = *(float *)(lVar25 + lVar31 * 4);
                          if (((DAT_0239424c < fVar63) &&
                              (piVar41 = (int *)(lVar52 + lVar31 * 4), iVar38 = iVar50 - *piVar41,
                              iVar38 != 0 && *piVar41 <= iVar50)) &&
                             (iVar50 = *(int *)(lVar22 + 0x10) - *(int *)(lVar21 + lVar31 * 4),
                             0 < iVar50)) {
                            uVar18 = FUN_00e7d780(((float)iVar50 * *(float *)(lVar22 + 0x1c) +
                                                  (float)iVar38 * *(float *)(local_68 + 0x1c)) /
                                                  (*(float *)(local_68 + 0x1c) +
                                                  *(float *)(lVar22 + 0x1c)));
                            fVar60 = *(float *)(local_68 + 0x1c) + *(float *)(lVar22 + 0x1c);
                            uVar15 = -(uint)(fVar60 <= DAT_02394270);
                            FUN_015c31c0(fVar63 * (float)(uVar15 & DAT_023b3e04 |
                                                         ~uVar15 & (uint)SQRT(fVar60) &
                                                                   _DAT_02390140) * DAT_02391090,
                                         uVar18,10);
                          }
                        }
                        lVar54 = lVar54 + 1;
                        lVar31 = (longlong)*(int *)((longlong)puVar28 + 0xc);
                      } while ((int)lVar54 < *(int *)((longlong)puVar28 + 0xc));
                    }
                    lVar23 = lVar23 + 1;
                  } while (lVar23 < lVar31);
                }
                local_110 = local_110 + 1;
                iVar50 = *(int *)(unaff_RDI + 0x100);
                local_e8 = (undefined *)((longlong)local_e8 + (longlong)pvVar33 * 4);
              } while (local_110 < iVar50);
            }
            if ((unaff_ESI == 7) && (0 < iVar50)) {
              if ((int)uVar17 < 1) {
                lVar25 = 0;
                do {
                  ___bzero();
                  lVar25 = lVar25 + 1;
                } while (lVar25 < *(int *)(unaff_RDI + 0x100));
              }
              else {
                lVar25 = lVar51 + 0xc;
                lVar21 = 0;
                lVar52 = lVar51;
                do {
                  if ((ulonglong)uVar17 - 1 < 3) {
                    fVar63 = 0.0;
                    uVar55 = 0xffffffff;
                    uVar29 = 0;
                  }
                  else {
                    fVar63 = 0.0;
                    uVar55 = 0xffffffff;
                    uVar29 = 0;
                    do {
                      fVar60 = *(float *)(lVar25 + -0xc + uVar29 * 4);
                      uVar15 = (uint)uVar29;
                      uVar39 = (uint)uVar55;
                      if (fVar63 < fVar60) {
                        uVar39 = uVar15;
                      }
                      fVar64 = *(float *)(lVar25 + -8 + uVar29 * 4);
                      if (fVar60 <= fVar63) {
                        fVar60 = fVar63;
                      }
                      uVar13 = uVar15 + 1;
                      if (fVar64 <= fVar60) {
                        fVar64 = fVar60;
                        uVar13 = uVar39;
                      }
                      fVar60 = *(float *)(lVar25 + -4 + uVar29 * 4);
                      uVar39 = uVar15 + 2;
                      if (fVar60 <= fVar64) {
                        fVar60 = fVar64;
                        uVar39 = uVar13;
                      }
                      fVar63 = *(float *)(lVar25 + uVar29 * 4);
                      uVar15 = uVar15 + 3;
                      if (fVar63 <= fVar60) {
                        uVar15 = uVar39;
                      }
                      uVar55 = (ulonglong)uVar15;
                      if (fVar63 <= fVar60) {
                        fVar63 = fVar60;
                      }
                      uVar29 = uVar29 + 4;
                    } while ((uVar17 & 0xfffffffc) != uVar29);
                  }
                  iVar50 = (int)uVar55;
                  for (uVar34 = (ulonglong)(uVar17 & 3); uVar34 != 0; uVar34 = uVar34 - 1) {
                    fVar60 = *(float *)(lVar52 + uVar29 * 4);
                    iVar50 = (int)uVar55;
                    if (fVar63 < fVar60) {
                      uVar55 = uVar29 & 0xffffffff;
                      iVar50 = (int)uVar29;
                      fVar63 = fVar60;
                    }
                    uVar29 = uVar29 + 1;
                  }
                  ___bzero();
                  if (-1 < iVar50) {
                    FUN_015c31c0(fVar63,iVar50,10);
                  }
                  lVar21 = lVar21 + 1;
                  lVar25 = lVar25 + (longlong)pvVar33 * 4;
                  lVar52 = lVar52 + (longlong)pvVar33 * 4;
                } while (lVar21 < *(int *)(unaff_RDI + 0x100));
              }
            }
            FUN_00e83070();
            FUN_00e83070();
            FUN_00e83070();
            FUN_00e83070();
            if ((bVar59) && (lVar22 != 0)) {
              FUN_00d50b20();
            }
            if ((bVar65) && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (puVar28 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        goto LAB_0164ac42;
      }
      uVar55 = (ulonglong)*(uint *)(unaff_RDI + 0x100);
      if ((0 < (int)*(uint *)(unaff_RDI + 0x100)) && (0 < (int)uVar15)) {
        fVar63 = DAT_02390124 / *(float *)(unaff_RDI + 200);
        lVar25 = *(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + (longlong)puVar57 * 8);
        uVar29 = (ulonglong)uVar15;
        if (uVar15 < 8) {
          lVar52 = 0x18;
          do {
            *(float *)(lVar51 + -0x18 + lVar52) = *(float *)(lVar25 + -0x18 + lVar52) * fVar63;
            if (((((uVar15 != 1) &&
                  (*(float *)(lVar51 + -0x14 + lVar52) =
                        *(float *)(lVar25 + -0x14 + lVar52) * fVar63, uVar15 != 2)) &&
                 (*(float *)(lVar51 + -0x10 + lVar52) = *(float *)(lVar25 + -0x10 + lVar52) * fVar63
                 , uVar15 != 3)) &&
                ((*(float *)(lVar51 + -0xc + lVar52) = *(float *)(lVar25 + -0xc + lVar52) * fVar63,
                 uVar15 != 4 &&
                 (*(float *)(lVar51 + -8 + lVar52) = *(float *)(lVar25 + -8 + lVar52) * fVar63,
                 uVar15 != 5)))) &&
               (*(float *)(lVar51 + -4 + lVar52) = *(float *)(lVar25 + -4 + lVar52) * fVar63,
               uVar15 != 6)) {
              *(float *)(lVar51 + lVar52) = *(float *)(lVar25 + lVar52) * fVar63;
            }
            lVar52 = lVar52 + uVar29 * 4;
            uVar55 = uVar55 - 1;
          } while (uVar55 != 0);
        }
        else {
          uVar34 = (ulonglong)(uVar15 & 0xfffffff8);
          if (uVar34 == uVar29) {
            uVar53 = (uVar34 - 8 >> 3) + 1;
            lVar52 = lVar51 + 0x30;
            lVar54 = uVar29 * 4;
            lVar21 = lVar25 + 0x30;
            lVar22 = lVar51 + 0xc;
            lVar23 = lVar25 + 0xc;
            uVar49 = 0;
            lVar31 = lVar25;
            local_80 = lVar51;
            do {
              lVar46 = uVar49 * uVar29;
              if (((ulonglong)(lVar51 + lVar46 * 4) < lVar25 + (lVar46 + uVar29) * 4) &&
                 ((ulonglong)(lVar25 + lVar46 * 4) < lVar51 + (lVar46 + uVar29) * 4)) {
                if (uVar29 - 1 < 3) {
                  uVar30 = 0;
                }
                else {
                  uVar30 = 0;
                  do {
                    *(float *)(lVar22 + -0xc + uVar30 * 4) =
                         *(float *)(lVar23 + -0xc + uVar30 * 4) * fVar63;
                    *(float *)(lVar22 + -8 + uVar30 * 4) =
                         *(float *)(lVar23 + -8 + uVar30 * 4) * fVar63;
                    *(float *)(lVar22 + -4 + uVar30 * 4) =
                         *(float *)(lVar23 + -4 + uVar30 * 4) * fVar63;
                    *(float *)(lVar22 + uVar30 * 4) = *(float *)(lVar23 + uVar30 * 4) * fVar63;
                    uVar30 = uVar30 + 4;
                  } while ((uVar15 & 0xfffffffc) != uVar30);
                }
                if ((ulonglong)(uVar15 & 3) != 0) {
                  uVar36 = 0;
                  do {
                    *(float *)(local_80 + uVar30 * 4 + uVar36 * 4) =
                         *(float *)(lVar31 + uVar30 * 4 + uVar36 * 4) * fVar63;
                    uVar36 = uVar36 + 1;
                  } while ((uVar15 & 3) != uVar36);
                }
              }
              else {
                if (uVar34 - 8 == 0) {
                  lVar40 = 0;
                }
                else {
                  lVar40 = 0;
                  lVar56 = -(uVar53 & 0xfffffffffffffffe);
                  do {
                    pfVar1 = (float *)(lVar21 + -0x30 + lVar40 * 4);
                    fVar60 = pfVar1[1];
                    fVar64 = pfVar1[2];
                    fVar61 = pfVar1[3];
                    pfVar3 = (float *)(lVar21 + -0x20 + lVar40 * 4);
                    fVar62 = *pfVar3;
                    fVar8 = pfVar3[1];
                    fVar9 = pfVar3[2];
                    fVar10 = pfVar3[3];
                    pfVar3 = (float *)(lVar52 + -0x30 + lVar40 * 4);
                    *pfVar3 = *pfVar1 * fVar63;
                    pfVar3[1] = fVar60 * fVar63;
                    pfVar3[2] = fVar64 * fVar63;
                    pfVar3[3] = fVar61 * fVar63;
                    pfVar1 = (float *)(lVar52 + -0x20 + lVar40 * 4);
                    *pfVar1 = fVar62 * fVar63;
                    pfVar1[1] = fVar8 * fVar63;
                    pfVar1[2] = fVar9 * fVar63;
                    pfVar1[3] = fVar10 * fVar63;
                    pfVar3 = (float *)(lVar21 + -0x10 + lVar40 * 4);
                    fVar60 = pfVar3[1];
                    fVar64 = pfVar3[2];
                    fVar61 = pfVar3[3];
                    pfVar1 = (float *)(lVar21 + lVar40 * 4);
                    auVar67._0_4_ = *pfVar1 * fVar63;
                    auVar67._4_4_ = pfVar1[1] * fVar63;
                    auVar67._8_4_ = pfVar1[2] * fVar63;
                    auVar67._12_4_ = pfVar1[3] * fVar63;
                    pfVar1 = (float *)(lVar52 + -0x10 + lVar40 * 4);
                    *pfVar1 = *pfVar3 * fVar63;
                    pfVar1[1] = fVar60 * fVar63;
                    pfVar1[2] = fVar64 * fVar63;
                    pfVar1[3] = fVar61 * fVar63;
                    *(undefined1 (*) [16])(lVar52 + lVar40 * 4) = auVar67;
                    lVar40 = lVar40 + 0x10;
                    lVar56 = lVar56 + 2;
                  } while (lVar56 != 0);
                  if ((uVar53 & 1) == 0) goto LAB_01648d00;
                }
                lVar40 = lVar40 + lVar46;
                pfVar1 = (float *)(lVar25 + lVar40 * 4);
                fVar60 = pfVar1[1];
                fVar64 = pfVar1[2];
                fVar61 = pfVar1[3];
                pfVar3 = (float *)(lVar25 + 0x10 + lVar40 * 4);
                auVar68._0_4_ = *pfVar3 * fVar63;
                auVar68._4_4_ = pfVar3[1] * fVar63;
                auVar68._8_4_ = pfVar3[2] * fVar63;
                auVar68._12_4_ = pfVar3[3] * fVar63;
                pfVar3 = (float *)(lVar51 + lVar40 * 4);
                *pfVar3 = *pfVar1 * fVar63;
                pfVar3[1] = fVar60 * fVar63;
                pfVar3[2] = fVar64 * fVar63;
                pfVar3[3] = fVar61 * fVar63;
                *(undefined1 (*) [16])(lVar51 + 0x10 + lVar40 * 4) = auVar68;
              }
LAB_01648d00:
              uVar49 = uVar49 + 1;
              lVar52 = lVar52 + lVar54;
              lVar21 = lVar21 + lVar54;
              lVar22 = lVar22 + lVar54;
              lVar23 = lVar23 + lVar54;
              local_80 = local_80 + lVar54;
              lVar31 = lVar31 + lVar54;
            } while (uVar49 != uVar55);
          }
          else {
            uVar53 = (uVar34 - 8 >> 3) + 1;
            lVar52 = lVar51 + 0x30;
            lVar22 = uVar29 * 4;
            lVar21 = lVar25 + 0x30;
            uVar49 = 0;
            lVar23 = lVar51;
            lVar54 = lVar25;
            do {
              lVar31 = uVar49 * uVar29;
              if (((ulonglong)(lVar51 + lVar31 * 4) < lVar25 + (lVar31 + uVar29) * 4) &&
                 ((ulonglong)(lVar25 + lVar31 * 4) < lVar51 + (lVar31 + uVar29) * 4)) {
                uVar30 = 0;
              }
              else {
                uVar30 = uVar34;
                if (uVar34 - 8 == 0) {
                  lVar46 = 0;
                }
                else {
                  lVar46 = 0;
                  lVar40 = -(uVar53 & 0xfffffffffffffffe);
                  do {
                    pfVar1 = (float *)(lVar21 + -0x30 + lVar46 * 4);
                    fVar60 = pfVar1[1];
                    fVar64 = pfVar1[2];
                    fVar61 = pfVar1[3];
                    pfVar3 = (float *)(lVar21 + -0x20 + lVar46 * 4);
                    fVar62 = *pfVar3;
                    fVar8 = pfVar3[1];
                    fVar9 = pfVar3[2];
                    fVar10 = pfVar3[3];
                    pfVar3 = (float *)(lVar52 + -0x30 + lVar46 * 4);
                    *pfVar3 = *pfVar1 * fVar63;
                    pfVar3[1] = fVar60 * fVar63;
                    pfVar3[2] = fVar64 * fVar63;
                    pfVar3[3] = fVar61 * fVar63;
                    pfVar1 = (float *)(lVar52 + -0x20 + lVar46 * 4);
                    *pfVar1 = fVar62 * fVar63;
                    pfVar1[1] = fVar8 * fVar63;
                    pfVar1[2] = fVar9 * fVar63;
                    pfVar1[3] = fVar10 * fVar63;
                    pfVar3 = (float *)(lVar21 + -0x10 + lVar46 * 4);
                    fVar60 = pfVar3[1];
                    fVar64 = pfVar3[2];
                    fVar61 = pfVar3[3];
                    pfVar1 = (float *)(lVar21 + lVar46 * 4);
                    auVar70._0_4_ = *pfVar1 * fVar63;
                    auVar70._4_4_ = pfVar1[1] * fVar63;
                    auVar70._8_4_ = pfVar1[2] * fVar63;
                    auVar70._12_4_ = pfVar1[3] * fVar63;
                    pfVar1 = (float *)(lVar52 + -0x10 + lVar46 * 4);
                    *pfVar1 = *pfVar3 * fVar63;
                    pfVar1[1] = fVar60 * fVar63;
                    pfVar1[2] = fVar64 * fVar63;
                    pfVar1[3] = fVar61 * fVar63;
                    *(undefined1 (*) [16])(lVar52 + lVar46 * 4) = auVar70;
                    lVar46 = lVar46 + 0x10;
                    lVar40 = lVar40 + 2;
                  } while (lVar40 != 0);
                  if ((uVar53 & 1) == 0) goto LAB_016494f7;
                }
                lVar46 = lVar46 + lVar31;
                pfVar1 = (float *)(lVar25 + lVar46 * 4);
                fVar60 = pfVar1[1];
                fVar64 = pfVar1[2];
                fVar61 = pfVar1[3];
                pfVar3 = (float *)(lVar25 + 0x10 + lVar46 * 4);
                auVar71._0_4_ = *pfVar3 * fVar63;
                auVar71._4_4_ = pfVar3[1] * fVar63;
                auVar71._8_4_ = pfVar3[2] * fVar63;
                auVar71._12_4_ = pfVar3[3] * fVar63;
                pfVar3 = (float *)(lVar51 + lVar46 * 4);
                *pfVar3 = *pfVar1 * fVar63;
                pfVar3[1] = fVar60 * fVar63;
                pfVar3[2] = fVar64 * fVar63;
                pfVar3[3] = fVar61 * fVar63;
                *(undefined1 (*) [16])(lVar51 + 0x10 + lVar46 * 4) = auVar71;
              }
LAB_016494f7:
              uVar45 = ~uVar30;
              for (uVar36 = (ulonglong)(uVar15 & 3); uVar36 != 0; uVar36 = uVar36 - 1) {
                *(float *)(lVar23 + uVar30 * 4) = *(float *)(lVar54 + uVar30 * 4) * fVar63;
                uVar30 = uVar30 + 1;
              }
              if (2 < uVar45 + uVar29) {
                do {
                  *(float *)(lVar23 + uVar30 * 4) = *(float *)(lVar54 + uVar30 * 4) * fVar63;
                  *(float *)(lVar23 + 4 + uVar30 * 4) = *(float *)(lVar54 + 4 + uVar30 * 4) * fVar63
                  ;
                  *(float *)(lVar23 + 8 + uVar30 * 4) = *(float *)(lVar54 + 8 + uVar30 * 4) * fVar63
                  ;
                  *(float *)(lVar23 + 0xc + uVar30 * 4) =
                       *(float *)(lVar54 + 0xc + uVar30 * 4) * fVar63;
                  uVar30 = uVar30 + 4;
                } while (uVar29 != uVar30);
              }
              uVar49 = uVar49 + 1;
              lVar52 = lVar52 + lVar22;
              lVar21 = lVar21 + lVar22;
              lVar23 = lVar23 + lVar22;
              lVar54 = lVar54 + lVar22;
            } while (uVar49 != uVar55);
          }
        }
        goto LAB_0164ac42;
      }
LAB_0164ac47:
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar14 == 0) {
    return lVar51;
  }
LAB_0164ac61:
  FUN_00d50b20();
  return lVar51;
}


