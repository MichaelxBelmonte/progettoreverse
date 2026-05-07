// Function: FUN_015513a0
// Address: 015513a0
// Size: 5531 bytes
// Class: MUVoiceMapperVoiceOption


/* WARNING: Removing unreachable block (ram,0x015519fc) */
/* WARNING: Removing unreachable block (ram,0x01551a08) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015513a0(void *param_1,undefined8 param_2,size_t param_3)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  void *pvVar21;
  longlong lVar22;
  longlong lVar23;
  pthread_key_t pVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  pthread_key_t pVar28;
  longlong *unaff_RDI;
  ulonglong uVar29;
  longlong lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  longlong lVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double local_8e0;
  longlong local_8b8;
  int local_8a8;
  longlong *local_890;
  char local_888;
  double local_878;
  float local_868;
  double local_860;
  int local_850;
  longlong *local_848;
  longlong local_838 [12];
  longlong alStack_7d8 [244];
  longlong local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar20 = (ulonglong)param_1 & 0xffffffff;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  pvVar21 = param_1;
  uVar10 = FUN_00b33120();
  uVar29 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    _memcpy(pvVar21,(void *)(uVar29 * 8),param_3);
  }
  dVar34 = (double)FUN_00b335d0();
  uVar13 = (uint)param_1;
  uVar11 = (int)(DAT_0240f0b8 * dVar34);
  if ((int)uVar13 < (int)(DAT_0240f0b8 * dVar34)) {
    uVar11 = uVar13;
  }
  local_860 = (double)(**(code **)(*unaff_RDI + 0x5e0))();
  dVar35 = (double)(**(code **)(*unaff_RDI + 0x5f0))();
  if ((*(char *)((longlong)unaff_RDI + 0x25e) != '\0') && ((char)unaff_RDI[0x4c] == '\0')) {
    dVar40 = DAT_02391030 * dVar34;
    lVar30 = unaff_RDI[0x23];
    *(float *)(lVar30 + 0x10) =
         (float)(*(uint *)(lVar30 + 0xc) ^ _DAT_023945e0) / (float)(int)dVar40;
    *(int *)(lVar30 + 0x14) = (int)dVar40;
    *(undefined1 *)(unaff_RDI + 0x4c) = 1;
  }
  if (uVar13 != 0) {
    dVar43 = dVar35 - local_860;
    uVar12 = (uint)(DAT_02391030 * dVar34);
    dVar40 = (DAT_0238fee8 / (double)(int)uVar13) * dVar43;
    fVar31 = (float)(int)(DAT_02391030 * dVar34);
    uVar14 = (ulonglong)(uVar10 & 0xfffffffc);
    uVar15 = (uVar14 - 4 >> 2) + 1;
    uVar25 = (ulonglong)((uint)uVar15 & 3);
    uVar26 = uVar25 << 5;
    bVar9 = true;
    local_8a8 = 0x80;
    local_8b8 = 0;
    lVar30 = 0;
    bVar6 = false;
    local_848 = (longlong *)0x0;
    bVar7 = false;
    local_878 = 0.0;
    local_8e0 = 0.0;
    uVar27 = uVar26;
    local_868 = DAT_023b26e8;
    do {
      pVar24 = (pthread_key_t)uVar27;
      local_850 = (int)uVar20;
      if (bVar9) {
        lVar23 = unaff_RDI[0x1d];
        lVar22 = lVar23;
        if (lVar23 == 0) {
          if (*(char *)((longlong)unaff_RDI + 0x25e) != '\0') {
            (**(code **)(*unaff_RDI + 0x678))();
            break;
          }
          lVar22 = unaff_RDI[99];
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            if (*(longlong *)(lVar22 + 0x50) != 0) goto LAB_01551693;
LAB_015516d5:
            (**(code **)(*unaff_RDI + 0x678))();
LAB_015516e4:
            bVar4 = false;
          }
          else {
            if (*(longlong *)
                 (*(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) +
                 0x50) == 0) goto LAB_015516d5;
LAB_01551693:
            pvVar21 = _pthread_getspecific(pVar24);
            if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x48);
            }
            else {
              lVar16 = *(longlong *)
                        (*(longlong *)
                          (lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x48);
            }
            if (lVar16 == 0) goto LAB_015516d5;
            if (0.0 <= dVar43) {
              pvVar21 = _pthread_getspecific(pVar24);
              lVar16 = lVar22;
              if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                lVar16 = *(longlong *)
                          (lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
              }
              lVar17 = *(longlong *)(lVar16 + 0x48);
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                lVar17 = *(longlong *)(lVar16 + 0x48);
                lVar16 = FUN_00e8b990();
                if (lVar16 != 0) {
                  lVar17 = *(longlong *)
                            (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
                }
              }
              dVar36 = *(double *)(lVar17 + 0xe8) - local_860;
              uVar13 = 0;
              if (dVar36 <= DAT_02390448) {
LAB_01551ea8:
                if (dVar36 < DAT_0241b698) {
LAB_01551eb6:
                  *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 1;
                }
                goto LAB_01551ebe;
              }
              if (*(double *)(lVar17 + 0xe8) < dVar35) {
                if ((dVar40 != DAT_02390448) || (NAN(dVar40) || NAN(DAT_02390448))) {
                  uVar13 = (uint)(dVar36 / dVar40 + DAT_023942d0);
                  goto LAB_01551ea8;
                }
              }
              goto LAB_015516e4;
            }
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(longlong *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(longlong *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(longlong *)
                          (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = *(double *)(lVar17 + 0xe8);
            pvVar21 = _pthread_getspecific(pVar24);
            lVar16 = lVar22;
            if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
              lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8)
              ;
            }
            lVar17 = *(longlong *)(lVar16 + 0x48);
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              lVar17 = *(longlong *)(lVar16 + 0x48);
              lVar16 = FUN_00e8b990();
              if (lVar16 != 0) {
                lVar17 = *(longlong *)
                          (lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
              }
            }
            dVar36 = dVar36 + *(double *)(lVar17 + 0xf0);
            dVar41 = dVar36 - local_860;
            uVar13 = 0;
            if (dVar41 < 0.0) {
              if (dVar35 < dVar36) {
                if ((dVar40 != DAT_02390448) || (NAN(dVar40) || NAN(DAT_02390448))) {
                  uVar13 = (uint)(dVar41 / dVar40 + DAT_023942d0);
                  goto LAB_01551fa8;
                }
              }
              goto LAB_015516e4;
            }
LAB_01551fa8:
            if (_DAT_02391038 < dVar41) goto LAB_01551eb6;
LAB_01551ebe:
            if (0 < (int)uVar13) {
              if (local_850 - uVar13 == 0 || local_850 < (int)uVar13) goto LAB_015516e4;
              if (0 < (int)uVar10) {
                pVar24 = uVar13;
                if (uVar10 < 4) {
                  uVar20 = 0;
                }
                else {
                  if (uVar14 - 4 < 0xc) {
                    lVar16 = 0;
                  }
                  else {
                    lVar16 = 0;
                    lVar17 = -(uVar15 & 0xfffffffffffffffc);
                    do {
                      lVar18 = (ulonglong)uVar13 * 4;
                      lVar42 = (ulonglong)uVar13 * 4;
                      local_838[lVar16] = local_838[lVar16] + lVar18;
                      local_838[lVar16 + 1] = local_838[lVar16 + 1] + lVar42;
                      local_838[lVar16 + 2] = local_838[lVar16 + 2] + lVar18;
                      local_838[lVar16 + 3] = local_838[lVar16 + 3] + lVar42;
                      local_838[lVar16 + 4] = local_838[lVar16 + 4] + lVar18;
                      local_838[lVar16 + 5] = local_838[lVar16 + 5] + lVar42;
                      local_838[lVar16 + 6] = local_838[lVar16 + 6] + lVar18;
                      local_838[lVar16 + 7] = local_838[lVar16 + 7] + lVar42;
                      local_838[lVar16 + 8] = local_838[lVar16 + 8] + lVar18;
                      local_838[lVar16 + 9] = local_838[lVar16 + 9] + lVar42;
                      local_838[lVar16 + 10] = local_838[lVar16 + 10] + lVar18;
                      local_838[lVar16 + 0xb] = local_838[lVar16 + 0xb] + lVar42;
                      auVar44._0_8_ = alStack_7d8[lVar16] + lVar18;
                      auVar44._8_8_ = alStack_7d8[lVar16 + 1] + lVar42;
                      *(undefined1 (*) [16])(alStack_7d8 + lVar16) = auVar44;
                      alStack_7d8[lVar16 + 2] = lVar18 + alStack_7d8[lVar16 + 2];
                      alStack_7d8[lVar16 + 3] = lVar42 + alStack_7d8[lVar16 + 3];
                      lVar16 = lVar16 + 0x10;
                      lVar17 = lVar17 + 4;
                    } while (lVar17 != 0);
                  }
                  if (uVar25 != 0) {
                    lVar16 = lVar16 * 8;
                    uVar20 = 0;
                    do {
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16);
                      auVar45._0_8_ = *plVar19 + (ulonglong)uVar13 * 4;
                      auVar45._8_8_ = plVar19[1] + (ulonglong)uVar13 * 4;
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      lVar17 = *plVar19;
                      lVar18 = plVar19[1];
                      *(undefined1 (*) [16])((longlong)local_838 + uVar20 + lVar16) = auVar45;
                      plVar19 = (longlong *)((longlong)local_838 + uVar20 + lVar16 + -0x828 + 0x838)
                      ;
                      *plVar19 = (ulonglong)uVar13 * 4 + lVar17;
                      plVar19[1] = (ulonglong)uVar13 * 4 + lVar18;
                      uVar20 = uVar20 + 0x20;
                    } while (uVar26 != uVar20);
                  }
                  uVar20 = uVar14;
                  if (uVar14 == uVar29) goto LAB_01552739;
                }
                do {
                  local_838[uVar20] = local_838[uVar20] + (ulonglong)uVar13 * 4;
                  uVar20 = uVar20 + 1;
                } while (uVar29 != uVar20);
              }
LAB_01552739:
              local_860 = local_860 + (double)(int)uVar13 * dVar40;
              local_850 = local_850 - uVar13;
            }
            unaff_RDI[100] = 0;
            *(undefined4 *)(unaff_RDI[0x23] + 0x18) = 0xffffffff;
            lVar16 = unaff_RDI[0x1d];
            bVar4 = true;
            if (lVar16 != lVar22) {
              if (lVar22 != 0) {
                FUN_00d50b00();
              }
              unaff_RDI[0x1d] = lVar22;
              if (lVar16 != 0) {
                FUN_00d50b20();
              }
            }
          }
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
          if (!bVar4) {
            if (!bVar7) goto LAB_01552914;
            goto LAB_0155290a;
          }
          lVar22 = unaff_RDI[0x1d];
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x48);
        if (lVar22 == lVar30) {
          lVar16 = lVar30;
          bVar4 = bVar6;
          if ((!bVar6) && (lVar22 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar22 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          lVar16 = lVar22;
          if ((bVar6) && (lVar30 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar6 = bVar4;
        lVar30 = lVar16;
        lVar22 = unaff_RDI[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        if ((*(longlong *)(lVar22 + 0x50) == 0) || (lVar30 == 0)) {
          (**(code **)(*unaff_RDI + 0x678))();
          break;
        }
        lVar22 = unaff_RDI[0x1d];
        pvVar21 = _pthread_getspecific(pVar24);
        if (pvVar21 != (void *)0x0) {
          lVar22 = unaff_RDI[0x1d];
          lVar16 = FUN_00e8b990();
          if (lVar16 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x50);
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        pvVar21 = _pthread_getspecific(pVar24);
        if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          if (*(longlong *)(lVar22 + 0x40) != 0) goto LAB_0155188e;
LAB_01551950:
          (**(code **)(*unaff_RDI + 0x678))();
          bVar5 = false;
          bVar4 = false;
        }
        else {
          if (*(longlong *)
               (*(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0x40
               ) == 0) goto LAB_01551950;
LAB_0155188e:
          pvVar21 = _pthread_getspecific(pVar24);
          lVar16 = lVar22;
          if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            lVar16 = *(longlong *)(lVar22 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
          }
          lVar17 = *(longlong *)(lVar16 + 0x40);
          pvVar21 = _pthread_getspecific(pVar24);
          if (pvVar21 != (void *)0x0) {
            lVar17 = *(longlong *)(lVar16 + 0x40);
            lVar16 = FUN_00e8b990();
            if (lVar16 != 0) {
              lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
              ;
            }
          }
          if (*(longlong *)(lVar17 + 0x60) == 0) goto LAB_01551950;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_868 = *(float *)(lVar30 + 0xf8);
            if (!NAN(local_868)) goto LAB_01551988;
          }
          else {
            local_868 = *(float *)(*(longlong *)
                                    (lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                                  + 0xf8);
            if (!NAN(local_868) && !NAN(local_868)) {
LAB_01551988:
              pvVar21 = _pthread_getspecific(pVar24);
              if (pvVar21 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              if (local_888 == '\0') {
                if (local_890 != (longlong *)0x0) {
                  FUN_00d50b00();
                  goto LAB_01551a0d;
                }
              }
              else if (local_890 != (longlong *)0x0) {
LAB_01551a0d:
                pvVar21 = _pthread_getspecific(pVar24);
                if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
                  lVar16 = local_890[0x2d];
                }
                else {
                  lVar16 = *(longlong *)
                            (local_890[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 0x168);
                }
                if (lVar16 != 0) {
                  FUN_00d50b00();
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
                    plVar19 = (longlong *)local_890[(ulonglong)(*(uint *)(lVar17 + 0x154) & 1) + 4];
                  }
                  lVar17 = plVar19[0x17];
                  pvVar21 = _pthread_getspecific(pVar24);
                  plVar19 = local_890;
                  if ((pvVar21 != (void *)0x0) && (lVar18 = FUN_00e8b990(), lVar18 != 0)) {
                    plVar19 = (longlong *)local_890[(ulonglong)(*(uint *)(lVar18 + 0x154) & 1) + 4];
                  }
                  iVar2 = *(int *)((longlong)plVar19 + 0xbc);
                  fVar33 = (float)FUN_014b7610();
                  pVar24 = (pthread_key_t)(fVar33 / DAT_023942a8 + DAT_0239011c);
                  if ((int)pVar24 < 0) {
                    pVar24 = 0;
                  }
                  pVar28 = iVar2 - 1;
                  if ((int)pVar24 < iVar2) {
                    pVar28 = pVar24;
                  }
                  local_8b8 = (longlong)(int)(pVar28 * ((int)lVar17 * 8 + -4) | 2) * 4 +
                              *(longlong *)(lVar16 + 0x10);
                  FUN_00d50b20();
                  local_8a8 = (int)lVar17 * 8 + -8;
                }
                FUN_00d50b20();
              }
            }
          }
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            lVar16 = *(longlong *)(lVar30 + 0x168);
          }
          else {
            lVar16 = *(longlong *)
                      (*(longlong *)(lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                      + 0x168);
          }
          plVar19 = local_848;
          bVar8 = bVar7;
          if (lVar16 != 0) {
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar21 = _pthread_getspecific(pVar24);
            if (pvVar21 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013eb530();
            if (local_890 == local_848) {
              if ((!bVar7) && (local_890 != (longlong *)0x0)) {
                bVar8 = true;
                if (local_888 != '\0') goto LAB_01552002;
                FUN_00d50b00();
                bVar8 = true;
              }
            }
            else {
              if (local_888 != '\0') {
                bVar8 = true;
                plVar19 = local_890;
                if ((bVar7) && (plVar19 = local_890, local_848 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  plVar19 = local_890;
                }
                goto LAB_01552002;
              }
              if (local_890 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar8 = true;
              plVar19 = local_890;
              if ((bVar7) && (local_848 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_888 != '\0') && (local_890 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_01552002:
          local_848 = plVar19;
          pvVar21 = _pthread_getspecific(pVar24);
          if ((pvVar21 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            local_878 = *(double *)(lVar30 + 0xe8);
            if (lVar23 != 0) goto LAB_015520f1;
LAB_01552057:
            lVar23 = unaff_RDI[0x23];
            *(undefined4 *)(lVar23 + 0xc) = 0x7fc00000;
            *(undefined4 *)((longlong)unaff_RDI + 0x134) = 0;
            if (*(char *)((longlong)unaff_RDI + 0x25f) != '\0') {
              fVar33 = DAT_02390124;
              if (local_848 != (longlong *)0x0) {
                pvVar21 = _pthread_getspecific(pVar24);
                plVar19 = local_848;
                if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                  plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
                }
                dVar36 = 0.0;
                if (0.0 <= local_860 - local_878) {
                  dVar36 = local_860 - local_878;
                }
                dVar36 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36);
                fVar33 = (float)dVar36;
                lVar23 = unaff_RDI[0x23];
              }
              fVar32 = *(float *)((longlong)unaff_RDI + 0x26c);
              *(float *)(lVar23 + 0x10) =
                   (float)(~-(uint)(!NAN(fVar32) && !NAN(fVar32)) & (uint)fVar33 |
                          (uint)(fVar33 * fVar32) & -(uint)(!NAN(fVar32) && !NAN(fVar32))) / fVar31;
              *(undefined4 *)(lVar23 + 0xc) = 0;
              *(uint *)(lVar23 + 0x14) = uVar12;
              cVar1 = *(char *)((longlong)unaff_RDI + 0x25f);
              goto joined_r0x01552188;
            }
LAB_0155218a:
            if ((char)unaff_RDI[0x4c] == '\0') {
              *(undefined4 *)(unaff_RDI[0x23] + 0x14) = *(undefined4 *)((longlong)unaff_RDI + 0x134)
              ;
            }
          }
          else {
            local_878 = *(double *)
                         (*(longlong *)
                           (lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) + 0xe8);
            if (lVar23 == 0) goto LAB_01552057;
LAB_015520f1:
            cVar1 = *(char *)((longlong)unaff_RDI + 0x25f);
joined_r0x01552188:
            if (cVar1 == '\0') goto LAB_0155218a;
          }
          *(undefined4 *)(unaff_RDI + 0x26) = 0;
          bVar5 = true;
          bVar4 = true;
          bVar9 = false;
          local_8e0 = dVar40;
          bVar7 = bVar8;
        }
        if (lVar22 != 0) {
          FUN_00d50b20();
          bVar4 = bVar5;
        }
        if (!bVar4) break;
      }
      uVar13 = *(uint *)(unaff_RDI + 0x26);
      if (uVar13 == 0) {
        uVar20 = unaff_RDI[0x23];
        uVar13 = *(int *)(uVar20 + 0x14) - *(int *)((longlong)unaff_RDI + 0x134);
        *(uint *)(uVar20 + 0x14) = uVar13;
        if ((uVar13 == 0) && (uVar13 = 0, (char)unaff_RDI[0x4c] == '\0')) {
          dVar36 = 0.0;
          if (0.0 <= local_860 - local_878) {
            dVar36 = local_860 - local_878;
          }
          uVar13 = uVar11;
          if (NAN(*(float *)(uVar20 + 0xc))) {
            if (local_848 != (longlong *)0x0) {
              pvVar21 = _pthread_getspecific((pthread_key_t)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar41 = (double)(**(code **)(*plVar19 + 0x3d8))(dVar36,0);
              lVar23 = unaff_RDI[0x23];
              *(float *)(lVar23 + 0xc) = (float)dVar41;
              uVar20 = (ulonglong)uVar11;
              *(uint *)(lVar23 + 0x14) = uVar11;
              goto LAB_015524f9;
            }
            *(undefined4 *)(uVar20 + 0xc) = 0x3f800000;
            *(uint *)(uVar20 + 0x14) = uVar11;
            fVar33 = 0.0;
          }
          else {
            *(uint *)(uVar20 + 0x14) = uVar11;
            if (local_848 == (longlong *)0x0) {
              fVar33 = 0.0;
            }
            else {
LAB_015524f9:
              pvVar21 = _pthread_getspecific((pthread_key_t)uVar20);
              plVar19 = local_848;
              if ((pvVar21 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
                plVar19 = (longlong *)local_848[(ulonglong)(*(uint *)(lVar23 + 0x154) & 1) + 4];
              }
              dVar36 = (double)(**(code **)(*plVar19 + 0x3d0))(dVar36,local_8e0);
              fVar33 = *(float *)((longlong)unaff_RDI + 0x26c);
              uVar20 = unaff_RDI[0x23];
              fVar33 = ((float)(~-(uint)(!NAN(fVar33) && !NAN(fVar33)) & (uint)(float)dVar36 |
                               (uint)(fVar33 * (float)dVar36) &
                               -(uint)(!NAN(fVar33) && !NAN(fVar33))) - *(float *)(uVar20 + 0xc)) /
                       (float)(int)*(uint *)(uVar20 + 0x14);
              uVar13 = *(uint *)(uVar20 + 0x14);
            }
          }
          *(float *)(uVar20 + 0x10) = fVar33;
          *(undefined1 *)((longlong)unaff_RDI + 0x25f) = 0;
          *(uint *)((longlong)unaff_RDI + 0x134) = uVar13;
          *(uint *)(unaff_RDI + 0x26) = uVar13;
          lVar23 = unaff_RDI[0x1d];
        }
        else {
          *(uint *)((longlong)unaff_RDI + 0x134) = uVar13;
          *(uint *)(unaff_RDI + 0x26) = uVar13;
          lVar23 = unaff_RDI[0x1d];
        }
      }
      else {
        lVar23 = unaff_RDI[0x1d];
      }
      if ((lVar23 != 0) && (!NAN(local_868))) {
        fVar33 = (float)_exp2f(local_868 * DAT_023941f4);
        fVar33 = fVar33 * DAT_023941f8;
        dVar36 = (double)local_8a8;
        if (local_8b8 == 0) {
          dVar41 = ((double)unaff_RDI[100] / dVar36) * DAT_023d5998;
          auVar37._0_8_ = (double)_sin(dVar41 + dVar41);
          auVar37._8_8_ = extraout_XMM0_Qb_00;
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = (float)auVar37._0_8_;
        }
        else {
          auVar38._0_8_ = FUN_00e838c0();
          auVar38._8_8_ = extraout_XMM0_Qb;
        }
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = auVar38._0_4_ * *(float *)(unaff_RDI[0x23] + 0xc);
        fVar32 = (float)FUN_00bbc5a0(auVar39._0_8_);
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar20 = 0;
          }
          else {
            uVar20 = 0;
            do {
              pfVar3 = (float *)local_838[uVar20];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20] = (longlong)(pfVar3 + 1);
              pfVar3 = (float *)local_838[uVar20 + 1];
              *pfVar3 = *pfVar3 + fVar32;
              local_838[uVar20 + 1] = (longlong)(pfVar3 + 1);
              uVar20 = uVar20 + 2;
            } while ((uVar10 & 0xfffffffe) != uVar20);
          }
          if ((uVar10 & 1) != 0) {
            pfVar3 = (float *)local_838[uVar20];
            *pfVar3 = fVar32 + *pfVar3;
            local_838[uVar20] = (longlong)(pfVar3 + 1);
          }
        }
        for (dVar41 = ((double)fVar33 / dVar34) * dVar36 + (double)unaff_RDI[100]; dVar36 <= dVar41;
            dVar41 = dVar41 - dVar36) {
        }
        unaff_RDI[100] = (longlong)dVar41;
        uVar13 = *(uint *)(unaff_RDI + 0x26);
      }
      uVar27 = unaff_RDI[0x23];
      fVar33 = *(float *)(uVar27 + 0x10) + *(float *)(uVar27 + 0xc);
      *(float *)(uVar27 + 0xc) = fVar33;
      *(uint *)(unaff_RDI + 0x26) = uVar13 - 1;
      if (((char)unaff_RDI[0x4c] != '\0') && (fVar33 <= 0.0)) {
        (**(code **)(*unaff_RDI + 0x678))();
        break;
      }
      pvVar21 = _pthread_getspecific((pthread_key_t)uVar27);
      lVar23 = lVar30;
      if ((pvVar21 != (void *)0x0) && (lVar22 = FUN_00e8b990(), lVar22 != 0)) {
        lVar23 = *(longlong *)(lVar30 + 0x20 + (ulonglong)(*(uint *)(lVar22 + 0x154) & 1) * 8);
      }
      local_860 = local_860 + dVar40;
      dVar36 = local_860 - local_878;
      if (((dVar36 <= 0.0) ||
          (*(double *)(lVar23 + 0xf0) <= dVar36 && dVar36 != *(double *)(lVar23 + 0xf0))) &&
         (*(undefined1 *)((longlong)unaff_RDI + 0x25e) = 1, (char)unaff_RDI[0x4c] == '\0')) {
        lVar23 = unaff_RDI[0x23];
        *(float *)(lVar23 + 0x10) = (float)(*(uint *)(lVar23 + 0xc) ^ _DAT_023945e0) / fVar31;
        uVar27 = (ulonglong)uVar12;
        *(uint *)(lVar23 + 0x14) = uVar12;
        *(undefined1 *)(unaff_RDI + 0x4c) = 1;
      }
      uVar20 = (ulonglong)(local_850 - 1U);
    } while (local_850 - 1U != 0);
    if (bVar7) {
LAB_0155290a:
      if (local_848 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_01552914:
    if ((bVar6) && (lVar30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


