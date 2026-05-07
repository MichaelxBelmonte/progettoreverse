// Function: FUN_0141d330
// Address: 0141d330
// Size: 5300 bytes
// Class: Unknown


void FUN_0141d330(float *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  void *pvVar15;
  longlong lVar16;
  longlong lVar17;
  pthread_key_t pVar18;
  float *pfVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  longlong *unaff_RDI;
  uint uVar28;
  longlong lVar29;
  bool bVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  longlong lVar40;
  double dVar41;
  undefined1 auVar42 [16];
  float *local_898;
  float *local_888;
  float *local_880;
  float *local_860;
  float *local_858;
  longlong local_850;
  float *local_838;
  char local_830 [8];
  longlong local_828 [254];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((char)unaff_RDI[0x20] == '\0') goto LAB_0141e7c9;
  pfVar3 = (float *)unaff_RDI[0x1d];
  pfVar19 = param_1;
  if (pfVar3 == (float *)0x0) {
    local_880 = (float *)0x0;
  }
  else {
    FUN_00d50b00();
    local_880 = pfVar3;
  }
  lVar4 = unaff_RDI[0x1e];
  if (lVar4 == 0) {
    lVar29 = 0;
  }
  else {
    FUN_00d50b00();
    lVar29 = lVar4;
  }
  pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
  if (pvVar15 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb530();
  if (local_838 == (float *)0x0) {
    bVar12 = true;
    local_888 = (float *)0x0;
  }
  else {
    local_888 = local_838;
    if (local_830[0] == '\0') {
      FUN_00d50b00();
      if ((local_830[0] == '\0') || (local_838 == (float *)0x0)) {
        bVar12 = false;
        goto LAB_0141d5b1;
      }
      FUN_00d50b20();
    }
    bVar12 = false;
  }
LAB_0141d5b1:
  lVar23 = unaff_RDI[0x1d];
  pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
  if (pvVar15 != (void *)0x0) {
    lVar23 = unaff_RDI[0x1d];
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      lVar23 = *(longlong *)(lVar23 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
  }
  lVar23 = *(longlong *)(lVar23 + 0x50);
  if (lVar23 == 0) {
    *(undefined1 *)(unaff_RDI + 0x20) = 0;
    bVar9 = true;
LAB_0141d8d6:
    local_858 = (float *)0x0;
    local_860 = (float *)0x0;
    bVar30 = false;
    bVar11 = false;
    bVar10 = true;
    local_850 = 0;
  }
  else {
    FUN_00d50b00();
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    if ((pvVar15 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
      local_850 = *(longlong *)(lVar23 + 0x40);
    }
    else {
      local_850 = *(longlong *)
                   (*(longlong *)(lVar23 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) +
                   0x40);
    }
    if (local_850 == 0) {
      *(undefined1 *)(unaff_RDI + 0x20) = 0;
      bVar9 = false;
      goto LAB_0141d8d6;
    }
    FUN_00d50b00();
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    if ((pvVar15 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
      local_860 = *(float **)(local_850 + 0x60);
      if (local_860 == (float *)0x0) goto LAB_0141d892;
LAB_0141d8fe:
      bVar11 = true;
      FUN_00d50b00();
    }
    else {
      local_860 = *(float **)
                   (*(longlong *)(local_850 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8)
                   + 0x60);
      if (local_860 != (float *)0x0) goto LAB_0141d8fe;
LAB_0141d892:
      local_860 = (float *)0x0;
      bVar11 = false;
    }
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    pfVar24 = local_860;
    if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      pfVar24 = *(float **)(local_860 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
      pfVar19 = local_860;
    }
    local_858 = *(float **)(pfVar24 + 0xe);
    bVar30 = local_858 == (float *)0x0;
    if (bVar30) {
      local_858 = (float *)0x0;
    }
    else {
      FUN_00d50b00();
    }
    bVar30 = !bVar30;
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    pfVar24 = local_858;
    if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      pfVar19 = local_858;
      pfVar24 = *(float **)(local_858 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
    }
    dVar32 = (double)(**(code **)(*(longlong *)pfVar24 + 0x370))();
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    pfVar24 = local_858;
    if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      pfVar19 = local_858;
      pfVar24 = *(float **)(local_858 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
    }
    uVar13 = (**(code **)(*(longlong *)pfVar24 + 0x380))();
    FUN_0141cfc0();
    pfVar24 = local_838;
    dVar33 = (double)FUN_0131f170();
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      pfVar19 = local_880;
    }
    dVar34 = (double)FUN_011eedd0();
    if ((local_830[0] != '\0') && (pfVar24 != (float *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0141cfc0();
    dVar35 = (double)FUN_0131f180();
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      pfVar19 = local_880;
    }
    dVar36 = (double)FUN_011eedd0();
    if ((local_830[0] != '\0') && (local_838 != (float *)0x0)) {
      FUN_00d50b20();
    }
    local_898._0_4_ = (uint)param_1;
    dVar37 = (double)(int)(uint)local_898;
    dVar41 = (double)unaff_RDI[4];
    pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
    if (pvVar15 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011eee80();
    lVar16 = unaff_RDI[0x21];
    if (lVar16 < 1) {
      iVar20 = 0;
      local_898 = param_1;
LAB_0141dd65:
      uVar14 = FUN_00b33120();
      pfVar24 = (float *)(ulonglong)uVar14;
      if (0 < (int)uVar14) {
        if (uVar14 < 4) {
          pfVar19 = (float *)0x0;
        }
        else {
          pfVar19 = (float *)(ulonglong)(uVar14 & 0xfffffffc);
          uVar27 = ((ulonglong)(pfVar19 + -1) >> 2) + 1;
          uVar21 = (ulonglong)((uint)uVar27 & 3);
          if ((float *)((longlong)&MACH_HEADER.cpusubtype + 3) < pfVar19 + -1) {
            lVar16 = -(uVar27 & 0xfffffffffffffffc);
            lVar17 = 0;
            auVar42._0_8_ = (longlong)iVar20;
            auVar42._8_4_ = iVar20;
            auVar42._12_4_ = iVar20 >> 0x1f;
            lVar25 = auVar42._0_8_ * 4;
            lVar40 = auVar42._8_8_ * 4;
            do {
              plVar1 = (longlong *)(param_2 + lVar17 * 8);
              lVar6 = plVar1[1];
              plVar2 = (longlong *)(param_2 + 0x10 + lVar17 * 8);
              lVar7 = *plVar2;
              lVar8 = plVar2[1];
              *(longlong *)(local_830 + lVar17 * 8 + -8) = *plVar1 + lVar25;
              *(longlong *)(local_830 + lVar17 * 8) = lVar6 + lVar40;
              local_828[lVar17] = lVar7 + lVar25;
              local_828[lVar17 + 1] = lVar8 + lVar40;
              plVar1 = (longlong *)(param_2 + 0x20 + lVar17 * 8);
              lVar6 = plVar1[1];
              plVar2 = (longlong *)(param_2 + 0x30 + lVar17 * 8);
              lVar7 = *plVar2;
              lVar8 = plVar2[1];
              local_828[lVar17 + 2] = *plVar1 + lVar25;
              local_828[lVar17 + 3] = lVar6 + lVar40;
              local_828[lVar17 + 4] = lVar7 + lVar25;
              local_828[lVar17 + 5] = lVar8 + lVar40;
              plVar1 = (longlong *)(param_2 + 0x40 + lVar17 * 8);
              lVar6 = plVar1[1];
              plVar2 = (longlong *)(param_2 + 0x50 + lVar17 * 8);
              lVar7 = *plVar2;
              lVar8 = plVar2[1];
              local_828[lVar17 + 6] = *plVar1 + lVar25;
              local_828[lVar17 + 7] = lVar6 + lVar40;
              local_828[lVar17 + 8] = lVar7 + lVar25;
              local_828[lVar17 + 9] = lVar8 + lVar40;
              plVar1 = (longlong *)(param_2 + 0x60 + lVar17 * 8);
              lVar6 = plVar1[1];
              plVar2 = (longlong *)(param_2 + 0x70 + lVar17 * 8);
              lVar7 = *plVar2;
              lVar8 = plVar2[1];
              local_828[lVar17 + 10] = *plVar1 + lVar25;
              local_828[lVar17 + 0xb] = lVar6 + lVar40;
              local_828[lVar17 + 0xc] = lVar7 + lVar25;
              local_828[lVar17 + 0xd] = lVar8 + lVar40;
              lVar17 = lVar17 + 0x10;
              lVar16 = lVar16 + 4;
            } while (lVar16 != 0);
          }
          else {
            lVar17 = 0;
          }
          if (uVar21 != 0) {
            lVar16 = param_2 + lVar17 * 8;
            lVar25 = 0;
            auVar39._0_8_ = (longlong)iVar20;
            auVar39._8_4_ = iVar20;
            auVar39._12_4_ = iVar20 >> 0x1f;
            lVar40 = auVar39._8_8_ * 4;
            do {
              plVar2 = (longlong *)(lVar16 + lVar25);
              lVar6 = plVar2[1];
              plVar1 = (longlong *)(lVar16 + 0x10 + lVar25);
              lVar7 = *plVar1;
              lVar8 = plVar1[1];
              *(longlong *)(local_830 + lVar25 + lVar17 * 8 + -8) = *plVar2 + auVar39._0_8_ * 4;
              *(longlong *)((longlong)(local_830 + lVar25 + lVar17 * 8 + -8) + 8) = lVar6 + lVar40;
              plVar1 = (longlong *)((longlong)local_828 + lVar25 + lVar17 * 8);
              *plVar1 = lVar7 + auVar39._0_8_ * 4;
              plVar1[1] = lVar8 + lVar40;
              lVar25 = lVar25 + 0x20;
            } while (uVar21 << 5 != lVar25);
          }
          if (pfVar19 == pfVar24) goto LAB_0141df38;
        }
        do {
          *(longlong *)(local_830 + (longlong)pfVar19 * 8 + -8) =
               *(longlong *)(param_2 + (longlong)pfVar19 * 8) + (longlong)iVar20 * 4;
          pfVar19 = (float *)((longlong)pfVar19 + 1);
        } while (pfVar24 != pfVar19);
      }
LAB_0141df38:
      pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar38 = (double)FUN_011eee80();
      dVar33 = dVar33 - dVar34;
      dVar35 = dVar35 - dVar36;
      if (dVar38 < dVar35) {
        pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
        if (pvVar15 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar34 = (double)FUN_011eee80();
        local_898 = (float *)(ulonglong)
                             (uint)(int)(((dVar34 - dVar33) * (double)unaff_RDI[3]) /
                                        ((dVar35 - dVar33) / (dVar37 * dVar41)));
      }
      dVar34 = dVar35;
      dVar36 = dVar33;
      if ((local_888 != (float *)0x0) && (*(char *)((longlong)unaff_RDI + 0x124) == '\0')) {
        pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
        pfVar26 = local_888;
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pfVar26 = *(float **)(local_888 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
        }
        dVar36 = (double)(**(code **)(*(longlong *)pfVar26 + 0x3b8))(dVar33);
        pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
        pfVar26 = local_888;
        if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pfVar26 = *(float **)(local_888 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
        }
        dVar34 = (double)(**(code **)(*(longlong *)pfVar26 + 0x3b8))(dVar35);
      }
      dVar41 = dVar34;
      if (dVar36 <= dVar34) {
        dVar41 = dVar36;
      }
      if (0 < (int)uVar14) {
        if (dVar36 <= dVar34) {
          dVar36 = dVar34;
        }
        pfVar19 = (float *)(ulonglong)
                           (((int)(longlong)(dVar36 * dVar32) - (int)(longlong)(dVar41 * dVar32)) +
                           6);
        uVar28 = 0;
        lVar16 = 0;
        do {
          pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
          pfVar26 = local_858;
          if ((pvVar15 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            pfVar26 = *(float **)(local_858 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 2 + 8);
          }
          lVar17 = unaff_RDI[0x23];
          (**(code **)(*unaff_RDI + 0x420))();
          pfVar19 = (float *)((ulonglong)uVar28 % ((ulonglong)uVar13 & 0xff));
          (**(code **)(*(longlong *)pfVar26 + 0x388))
                    (pfVar19,lVar17 + lVar16,1,(longlong)(dVar41 * dVar32) + -1);
          lVar16 = lVar16 + 8;
          uVar28 = uVar28 + 1;
        } while ((longlong)pfVar24 * 8 != lVar16);
      }
      if (0 < (int)(uint)local_898) {
        dVar32 = (dVar35 - dVar33) / (double)(int)(uint)local_898;
        if (local_888 == (float *)0x0) {
          if ((int)uVar14 < 1) {
            pfVar19 = (float *)(ulonglong)((uint)local_898 - 1);
            uVar13 = (uint)local_898 & 7;
            if (6 < (uint)local_898 - 1) {
              iVar20 = -((uint)local_898 & 0xfffffff8);
              do {
                iVar20 = iVar20 + 8;
              } while (iVar20 != 0);
            }
            if (((ulonglong)local_898 & 7) != 0) {
              do {
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
          }
          else {
            uVar13 = 0;
            do {
              pfVar26 = (float *)0x0;
              do {
                fVar31 = (float)FUN_00e838c0();
                pfVar5 = *(float **)(local_830 + (longlong)pfVar26 * 8 + -8);
                pfVar19 = pfVar5 + 1;
                *(float **)(local_830 + (longlong)pfVar26 * 8 + -8) = pfVar19;
                *pfVar5 = fVar31 + *pfVar5;
                pfVar26 = (float *)((longlong)pfVar26 + 1);
              } while (pfVar24 != pfVar26);
              uVar13 = uVar13 + 1;
            } while (uVar13 != (uint)local_898);
          }
        }
        else if ((int)uVar14 < 1) {
          uVar13 = 0;
          do {
            if (*(char *)((longlong)unaff_RDI + 0x124) == '\0') {
              pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
              pfVar24 = local_888;
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pfVar19 = local_888;
                pfVar24 = *(float **)
                           (local_888 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
              }
              (**(code **)(*(longlong *)pfVar24 + 0x3b8))((double)(int)uVar13 * dVar32 + dVar33);
            }
            uVar13 = uVar13 + 1;
          } while ((uint)local_898 != uVar13);
        }
        else {
          uVar13 = 0;
          do {
            if (*(char *)((longlong)unaff_RDI + 0x124) == '\0') {
              pvVar15 = _pthread_getspecific((pthread_key_t)pfVar19);
              pfVar19 = local_888;
              if ((pvVar15 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pfVar19 = *(float **)
                           (local_888 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 2 + 8);
              }
              (**(code **)(*(longlong *)pfVar19 + 0x3b8))((double)(int)uVar13 * dVar32 + dVar33);
            }
            pfVar26 = (float *)0x0;
            do {
              fVar31 = (float)FUN_00e838c0();
              pfVar5 = *(float **)(local_830 + (longlong)pfVar26 * 8 + -8);
              pfVar19 = pfVar5 + 1;
              *(float **)(local_830 + (longlong)pfVar26 * 8 + -8) = pfVar19;
              *pfVar5 = fVar31 + *pfVar5;
              pfVar26 = (float *)((longlong)pfVar26 + 1);
            } while (pfVar24 != pfVar26);
            uVar13 = uVar13 + 1;
          } while (uVar13 != (uint)local_898);
        }
      }
      pVar18 = (pthread_key_t)pfVar19;
      pvVar15 = _pthread_getspecific(pVar18);
      if (pvVar15 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar32 = (double)FUN_011eee80();
      if ((dVar35 < 0.0) || (dVar32 < dVar35)) {
LAB_0141e6f0:
        *(undefined1 *)(unaff_RDI + 0x20) = 0;
      }
      else {
        pvVar15 = _pthread_getspecific(pVar18);
        if ((pvVar15 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
          lVar16 = *(longlong *)(lVar29 + 0x100);
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(lVar29 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8) +
                    0x100);
        }
        if (lVar16 == 0) {
          pvVar15 = _pthread_getspecific(pVar18);
          lVar16 = lVar29;
          if ((pvVar15 != (void *)0x0) && (lVar17 = FUN_00e8b990(), lVar17 != 0)) {
            lVar16 = *(longlong *)(lVar29 + 0x20 + (ulonglong)(*(uint *)(lVar17 + 0x154) & 1) * 8);
          }
          if (*(longlong *)(lVar16 + 0x108) == 0) goto LAB_0141e6f0;
        }
      }
    }
    else {
      lVar17 = FUN_012dd9d0();
      pfVar24 = (float *)(lVar16 - lVar17);
      pfVar19 = (float *)0x0;
      iVar20 = 0;
      iVar22 = (int)pfVar24;
      if (iVar22 <= (int)(uint)local_898) {
        if (-1 < iVar22) {
          iVar20 = iVar22;
          pfVar19 = pfVar24;
        }
        local_898 = (float *)(ulonglong)((uint)local_898 - iVar20);
        goto LAB_0141dd65;
      }
    }
    bVar9 = false;
    bVar10 = false;
  }
  if (!bVar12 && local_888 != (float *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar30) && (local_858 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar11) && (local_860 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar4 != 0) && (lVar29 != 0)) {
    FUN_00d50b20();
  }
  if ((pfVar3 != (float *)0x0) && (local_880 != (float *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar23 != 0 && !bVar9) {
    FUN_00d50b20();
  }
  if (!bVar10 && local_850 != 0) {
    FUN_00d50b20();
  }
LAB_0141e7c9:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


