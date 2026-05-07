// Function: FUN_015f4250
// Address: 015f4250
// Size: 7271 bytes
// Class: Unknown

void FUN_015f4250(double param_1,void*param_2,void*param_3,void*param_4)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  void*puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  uint64_t uVar26;
  void*puVar27;
  void*puVar28;
  void*puVar29;
  void*puVar30;
  int64_t lVar31;
  int64_t lVar32;
  void* pVar33;
  uint uVar34;
  void*in_RCX;
  void*puVar35;
  void*puVar36;
  uint64_t uVar37;
  segment_command *psVar38;
  void*puVar39;
  void*puVar40;
  int iVar41;
  qword *pqVar42;
  uint64_t uVar43;
  void*puVar44;
  int iVar45;
  uint64_t uVar46;
  uint64_t uVar47;
  int64_t *this_ptr;
  segment_command *psVar48;
  float *pfVar49;
  segment_command *psVar50;
  segment_command *psVar51;
  int64_t lVar52;
  uint uVar53;
  segment_command *psVar54;
  uint uVar55;
  int64_t lVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  uint64_t uVar62;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar63 [16];
  uint8_t auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  void*local_120;
  uint local_b0;
  uint local_84;
  uint32_t local_44;
  segment_command *local_40;
  char local_38;
  
  puVar35 = in_RCX;
  pvVar25 = _pthread_getspecific((void*)in_RCX);
  pVar33 = (void*)puVar35;
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c2660();
  pvVar25 = _pthread_getspecific(pVar33);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar59 = (double)FUN_01907950();
  if ((local_38 != '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b20();
  }
  lVar31 = *this_ptr;
  uVar22 = *(uint *)(lVar31 + 0xc);
  if ((int)uVar22 < 1) {
    dVar60 = 0.0;
  }
  else {
    dVar59 = dVar59 + param_1;
    lVar31 = *(int64_t *)(lVar31 + 0x10);
    if (uVar22 == 1) {
      dVar3 = 0.0;
      uVar37 = 0;
    }
    else {
      dVar3 = 0.0;
      uVar37 = 0;
      do {
        lVar56 = *(int64_t *)(lVar31 + uVar37 * 8);
        lVar52 = *(int64_t *)(lVar31 + 8 + uVar37 * 8);
        dVar61 = *(double *)(lVar56 + 0x10) + *(double *)(lVar56 + 0x18);
        dVar60 = dVar59;
        if (dVar61 <= dVar59) {
          dVar60 = dVar61;
        }
        if (dVar60 <= dVar3) {
          dVar60 = dVar3;
        }
        dVar61 = *(double *)(lVar52 + 0x10) + *(double *)(lVar52 + 0x18);
        dVar3 = dVar59;
        if (dVar61 <= dVar59) {
          dVar3 = dVar61;
        }
        if (dVar3 <= dVar60) {
          dVar3 = dVar60;
        }
        uVar37 = uVar37 + 2;
      } while ((uVar22 & 0xfffffffe) != uVar37);
    }
    dVar60 = dVar3;
    if ((uVar22 & 1) != 0) {
      lVar56 = *(int64_t *)(lVar31 + uVar37 * 8);
      dVar60 = *(double *)(lVar56 + 0x10) + *(double *)(lVar56 + 0x18);
      if (dVar60 <= dVar59) {
        dVar59 = dVar60;
      }
      dVar60 = dVar59;
      if (dVar59 <= dVar3) {
        dVar60 = dVar3;
      }
    }
  }
  pvVar25 = _pthread_getspecific((void*)lVar31);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c25f0(dVar60);
  uVar22 = FUN_00e7d850();
  uVar26 = FUN_00e7bcc0();
  psVar54 = (segment_command *)&MACH_HEADER.cpusubtype;
  if ((((((2 < (int)uVar22) && (psVar54 = (segment_command *)&MACH_HEADER.ncmds, 4 < (int)uVar22))
        && (psVar54 = &segment_command_00000020, 8 < (int)uVar22)) &&
       ((psVar54 = (segment_command *)&segment_command_00000020.vmsize, 0x10 < (int)uVar22 &&
        (psVar54 = (segment_command *)(section_00000068.segname + 8), 0x20 < (int)uVar22)))) &&
      (psVar54 = (segment_command *)&section_000000b8.reserved2, 0x40 < (int)uVar22)) &&
     ((psVar54 = (segment_command *)(section_000001f8.sectname + 8), 0x80 < (int)uVar22 &&
      (psVar54 = (segment_command *)&segment_command_000003d8.fileoff, 0x100 < (int)uVar22)))) {
    psVar54 = (segment_command *)(uint64_t)((uint)(0x200 < (int)uVar22) * 0x800 + 0x800);
  }
  uVar53 = (uint)psVar54;
  puVar27 = (void*)((uint64_t)psVar54 >> 2);
  if ((int)(uVar22 * 4) <= (int)uVar53) {
    puVar27 = (void*)(uint64_t)uVar22;
    psVar54 = (segment_command *)(uint64_t)(uVar22 * 4);
  }
  puVar28 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar28 = &g_024c1200;
  *(void*)((int64_t)puVar28 + 0xc) = 0;
  *(void*)((int64_t)puVar28 + 0x14) = 0;
  *(void*)((int64_t)puVar28 + 0x1c) = 0;
  FUN_00d500e0();
  FUN_00e3d400();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_b0 = (uint)puVar27;
  fVar57 = (float)_powf((float)(int)local_b0 * g_024112a8);
  iVar45 = (int)psVar54;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar29 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar29 = &g_025f0d98;
  puVar29[2] = 0;
  puVar29[3] = 0;
  puVar29[4] = 0;
  puVar29[5] = 0;
  puVar29[6] = 0;
  puVar29[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar30 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar36 = &g_02572358;
  *puVar30 = &g_02572358;
  (*g_02572370)();
  psVar50 = psVar54;
  if (0 < (int)uVar22) {
    do {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      local_38 = '\0';
      FUN_00d21140();
      FUN_00d50b20();
      uVar55 = (int)psVar50 - 1;
      psVar50 = (segment_command *)(uint64_t)uVar55;
    } while (uVar55 != 0);
  }
  lVar31 = *this_ptr;
  if (0 < *(int *)(lVar31 + 0xc)) {
    lVar56 = 0;
    do {
      pVar33 = (void*)puVar36;
      iVar23 = FUN_00e7d780(*(float *)(*(int64_t *)(*(int64_t *)(lVar31 + 0x10) + lVar56 * 8) +
                                      0x24) / g_023908e0);
      lVar31 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + lVar56 * 8);
      dVar59 = *(double *)(lVar31 + 0x10);
      if (dVar59 <= dVar60) {
        dVar3 = *(double *)(lVar31 + 0x18);
        pvVar25 = _pthread_getspecific(pVar33);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar61 = (double)FUN_016c25f0(dVar59);
        pvVar25 = _pthread_getspecific(pVar33);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar59 = (double)FUN_016c25f0(dVar3 + dVar59);
        auVar63._8_8_ = extraout_XMM0_Qb & _UNK_023945b8 | _UNK_023945c8;
        auVar63._0_8_ =
             (double)((uint64_t)(dVar61 * g_023b1e98) & g_023945b0 | g_023945c0) +
             dVar61 * g_023b1e98;
        auVar63 = roundsd(auVar63,auVar63,0xb);
        uVar55 = FUN_00e7d850(auVar63._0_8_ * g_023b3498 * g_023b1e98);
        auVar64._8_8_ = extraout_XMM0_Qb_00 & _UNK_023945b8 | _UNK_023945c8;
        auVar64._0_8_ =
             (double)((uint64_t)(dVar59 * g_023b1e98) & g_023945b0 | g_023945c0) +
             dVar59 * g_023b1e98;
        auVar63 = roundsd(auVar64,auVar64,0xb);
        iVar24 = FUN_00e7d850(auVar63._0_8_ * g_023b3498 * g_023b1e98);
        uVar34 = (uint)(iVar24 - uVar55 == 0) + (iVar24 - uVar55);
        if (0 < (int)uVar34) {
          lVar31 = (int64_t)
                   (int)(iVar23 + (((uint)(iVar23 / 6 + (iVar23 >> 0x1f)) >> 1) - (iVar23 >> 0x1f))
                                  * -0xc);
          uVar37 = (uint64_t)uVar34;
          do {
            if ((-1 < (int)uVar55) && ((int)uVar55 < iVar45)) {
              lVar52 = *(int64_t *)(*(int64_t *)(puVar30[2] + (uint64_t)uVar55 * 8) + 0x10);
              *(float *)(lVar52 + lVar31 * 4) = *(float *)(lVar52 + lVar31 * 4) + g_02390124;
            }
            uVar55 = uVar55 + 1;
            uVar37 = uVar37 - 1;
          } while (uVar37 != 0);
        }
      }
      lVar56 = lVar56 + 1;
      lVar31 = *this_ptr;
      puVar36 = (void*)(int64_t)*(int *)(lVar31 + 0xc);
    } while (lVar56 < (int64_t)puVar36);
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar62 = _UNK_024111f8;
  fVar57 = (g_02390124 - g_02390124 / fVar57) * g_02390434;
  puVar4 = *(void**)(local_40->segname + 8);
  *puVar4 = g_024111f0;
  puVar4[1] = uVar62;
  uVar62 = _UNK_02411208;
  puVar4[2] = g_02411200;
  puVar4[3] = uVar62;
  uVar62 = _UNK_02411218;
  puVar4[4] = g_02411210;
  puVar4[5] = uVar62;
  uVar62 = _UNK_02411228;
  puVar4[6] = g_02411220;
  puVar4[7] = uVar62;
  *(void*)(puVar4 + 8) = 0x3e99999a;
  local_120 = (void*)((int64_t)&MACH_HEADER.ncmds + 1);
  if ((int)local_b0 < 0x40) {
    uVar55 = local_b0 + 3;
    if (-1 < (int)local_b0) {
      uVar55 = local_b0;
    }
    local_120 = (void*)(uint64_t)(((int)uVar55 >> 2) + 1);
  }
  fVar65 = g_02390124;
  if (g_02390124 <= fVar57) {
    fVar65 = fVar57;
  }
  iVar23 = 2;
  lVar31 = 8;
  psVar50 = psVar54;
  do {
    psVar38 = local_40;
    ___bzero();
    uVar55 = g_02390140;
    iVar24 = iVar23 * 4;
    if (0 < (int)uVar22) {
      lVar56 = *(int64_t *)(local_40->segname + 8);
      psVar50 = (segment_command *)0xffffffff;
      psVar51 = (segment_command *)0x0;
      do {
        fVar57 = 0.0;
        lVar52 = 0;
        do {
          lVar32 = 0;
          fVar66 = 0.0;
          fVar67 = 0.0;
          psVar38 = psVar51;
          psVar48 = psVar50;
          do {
            fVar69 = g_02390124 - (float)(int)lVar32 / (float)iVar24;
            if ((int64_t)psVar38 < (int64_t)iVar45) {
              fVar66 = fVar66 + *(float *)(*(int64_t *)
                                            (*(int64_t *)(puVar30[2] + (int64_t)psVar38 * 8) +
                                            0x10) + lVar52 * 4) * fVar69;
            }
            iVar41 = (int)psVar48;
            if ((-1 < iVar41) && (iVar41 < iVar45)) {
              fVar67 = fVar67 + fVar69 * *(float *)(*(int64_t *)
                                                     (*(int64_t *)
                                                       (puVar30[2] + (int64_t)psVar48 * 8) + 0x10)
                                                   + lVar52 * 4);
            }
            lVar32 = lVar32 + 1;
            psVar38 = (segment_command *)((int64_t)&psVar38->cmd + 1);
            psVar48 = (segment_command *)(uint64_t)(iVar41 - 1);
          } while (lVar31 != lVar32);
          fVar57 = fVar57 + (float)((uint)(fVar66 - fVar67) & uVar55);
          lVar52 = lVar52 + 1;
        } while (lVar52 != 0xc);
        *(float *)(lVar56 + (int64_t)psVar51 * 4) = fVar57;
        psVar51 = (segment_command *)((int64_t)&psVar51->cmd + 1);
        psVar50 = (segment_command *)(uint64_t)((int)psVar50 + 1);
      } while (psVar51 != psVar54);
    }
    _memcpy(psVar38,(void *)(int64_t)(iVar45 * 4),(size_t)psVar50);
    uVar62 = FUN_015c1480(1,psVar54);
    (*g_02786500[6])(uVar62,psVar54);
    if (iVar45 / 3 < iVar24) {
      iVar24 = iVar45 / 3;
    }
    if (2 < iVar45) {
      fVar57 = g_02390124 / (float)iVar24;
      lVar56 = *(int64_t *)(local_40->segname + 8);
      lVar52 = 0;
      iVar41 = iVar45;
      do {
        iVar41 = iVar41 + -1;
        fVar66 = (float)(int)lVar52 * fVar57;
        *(float *)(lVar56 + lVar52 * 4) = *(float *)(lVar56 + lVar52 * 4) * fVar66;
        *(float *)(lVar56 + (int64_t)iVar41 * 4) =
             fVar66 * *(float *)(lVar56 + (int64_t)iVar41 * 4);
        lVar52 = lVar52 + 1;
      } while (lVar52 < iVar24);
    }
    fVar57 = (float)(*g_02786500[2])();
    if (g_02394274 <= fVar57) {
      (*g_02786500[4])();
    }
    fVar57 = g_02390124 / (float)iVar23;
    if (0 < (int)local_b0) {
      psVar50 = *(segment_command **)(local_40->segname + 8);
      if (local_b0 == 1) {
        uVar37 = 0;
      }
      else {
        pqVar42 = (qword *)((int64_t)psVar50->segname + 8);
        uVar37 = 0;
        do {
          if (0.0 < *(float *)(pqVar42 + -2)) {
            *(float *)(*(int64_t *)(local_40->segname + 8) + uVar37 * 4) =
                 *(float *)(pqVar42 + -2) * fVar57 +
                 *(float *)(*(int64_t *)(local_40->segname + 8) + uVar37 * 4);
          }
          if (0.0 < *(float *)pqVar42) {
            *(float *)(*(int64_t *)(local_40->segname + 8) + 4 + uVar37 * 4) =
                 *(float *)pqVar42 * fVar57 +
                 *(float *)(*(int64_t *)(local_40->segname + 8) + 4 + uVar37 * 4);
          }
          uVar37 = uVar37 + 2;
          pqVar42 = pqVar42 + 4;
        } while ((local_b0 & 0xfffffffe) != uVar37);
      }
      if ((((uint64_t)puVar27 & 1) != 0) &&
         (0.0 < *(float *)((int64_t)psVar50->segname + (uVar37 * 2 + -1) * 8))) {
        *(float *)(*(int64_t *)(local_40->segname + 8) + uVar37 * 4) =
             *(float *)((int64_t)psVar50->segname + (uVar37 * 2 + -1) * 8) * fVar57 +
             *(float *)(*(int64_t *)(local_40->segname + 8) + uVar37 * 4);
      }
    }
    _powf((float)iVar23,g_02390128);
    puVar39 = (void*)((int64_t)&MACH_HEADER.magic + 1);
    FUN_015c15b0(1,psVar54);
    ___bzero();
    _memcpy(puVar39,(void *)(int64_t)(iVar45 * 4),(size_t)psVar50);
    FUN_00e3daa0();
    if (g_02394274 <= **(float **)(local_40->segname + 8)) {
      (*g_02786500[4])(g_02390124 / **(float **)(local_40->segname + 8));
    }
    fVar67 = g_0239011c;
    fVar66 = g_02390118;
    fVar57 = fVar57 * g_0239426c;
    if (0 < (int)local_b0) {
      uVar55 = 2;
      puVar39 = (void*)0x0;
      fVar69 = 0.0;
      fVar58 = 0.0;
      do {
        fVar68 = fVar69;
        fVar69 = 0.0;
        iVar24 = (int)puVar39;
        if (0 < iVar24) {
          fVar69 = 0.0;
          if ((int)(uVar55 - 4) < (int)uVar53) {
            fVar69 = *(float *)(*(int64_t *)(local_40->segname + 8) + (uint64_t)(uVar55 - 4) * 4)
                     * fVar67 + 0.0;
          }
        }
        uVar34 = uVar55 - 2;
        if ((0 < iVar24) && ((int)uVar34 <= (int)uVar53)) {
          fVar69 = fVar69 + *(float *)(*(int64_t *)(local_40->segname + 8) +
                                      (uint64_t)(uVar55 - 3) * 4);
        }
        if ((-1 < iVar24) && ((int)uVar34 < (int)uVar53)) {
          fVar69 = fVar69 + *(float *)(*(int64_t *)(local_40->segname + 8) + (uint64_t)uVar34 * 4)
          ;
        }
        if (uVar55 - 1 < uVar53) {
          fVar69 = fVar69 + *(float *)(*(int64_t *)(local_40->segname + 8) +
                                      (uint64_t)(uVar55 - 1) * 4);
        }
        if (uVar55 < uVar53) {
          fVar69 = fVar69 + *(float *)(*(int64_t *)(local_40->segname + 8) + (uint64_t)uVar55 * 4)
                            * fVar67;
        }
        fVar69 = fVar69 * fVar57;
        if (0.0 < fVar69) {
          *(float *)(*(int64_t *)(local_40->segname + 8) + (int64_t)puVar39 * 4) =
               *(float *)(*(int64_t *)(local_40->segname + 8) + (int64_t)puVar39 * 4) + fVar69;
        }
        if ((((void*)((int64_t)&MACH_HEADER.magic + 1) < puVar39) && (0.0 < fVar68)) &&
           (fVar58 = (fVar58 + fVar69) * fVar66 + fVar68, 0.0 < fVar58)) {
          *(float *)(*(int64_t *)(local_40->segname + 8) + (uint64_t)(iVar24 - 1) * 4) =
               fVar58 + *(float *)(*(int64_t *)(local_40->segname + 8) +
                                  (uint64_t)(iVar24 - 1) * 4);
        }
        puVar39 = puVar39 + 1;
        uVar55 = uVar55 + 4;
        fVar58 = fVar68;
      } while (puVar27 != puVar39);
    }
    iVar23 = iVar23 + 1;
    lVar31 = lVar31 + 4;
  } while (iVar23 != 0x11);
  uVar53 = (uint)local_120;
  uVar22 = (size_t)psVar50;
  if ((int)uVar53 < 3) {
LAB_015f5558:
    if (0 < (int)uVar53) goto LAB_015f5561;
    bVar21 = false;
  }
  else {
    puVar39 = (void*)((int64_t)&MACH_HEADER.magic + 2);
    lVar31 = 8;
    do {
      if ((int64_t)puVar39 < (int64_t)(int)local_b0) {
        lVar56 = *(int64_t *)(local_40->segname + 8);
        fVar57 = *(float *)(lVar56 + (int64_t)puVar39 * 4);
        pfVar49 = (float *)((int64_t)puVar39 * 4 + *(int64_t *)(local_40->segname + 8));
        iVar45 = 1;
        puVar40 = puVar39;
        do {
          fVar57 = fVar57 + *pfVar49 / (float)iVar45;
          *(float *)(lVar56 + (int64_t)puVar39 * 4) = fVar57;
          iVar45 = iVar45 + 1;
          puVar40 = puVar40 + (int64_t)puVar39;
          pfVar49 = (float *)((int64_t)pfVar49 + lVar31);
        } while ((int64_t)puVar40 < (int64_t)(int)local_b0);
      }
      puVar39 = puVar39 + 1;
      lVar31 = lVar31 + 4;
    } while (puVar39 != local_120);
    uVar22 = local_b0;
    if (2 < (int)local_b0) {
      lVar31 = *(int64_t *)(local_40->segname + 8);
      puVar40 = (void*)((int64_t)&MACH_HEADER.magic + 2);
      do {
        iVar45 = 0;
        fVar66 = 0.0;
        fVar57 = 0.0;
        puVar44 = (void*)((int64_t)&MACH_HEADER.magic + 2);
        do {
          while( true ) {
            puVar39 = puVar44;
            fVar67 = *(float *)(lVar31 + (int64_t)puVar39 * 4);
            if ((int)(((uint64_t)puVar39 & 0xffffffff) % ((uint64_t)puVar40 & 0xffffffff)) == 0)
            break;
            fVar69 = (g_02390124 / (float)((int)puVar40 + -1)) / (float)(int)puVar39;
            fVar57 = fVar57 - fVar67 * fVar69;
            fVar66 = fVar66 + fVar69;
            puVar44 = puVar39 + 1;
            if (puVar27 == puVar39 + 1) goto LAB_015f5516;
          }
          fVar69 = g_02390124 / (float)(int)puVar39;
          fVar57 = fVar57 + fVar67 * fVar69;
          iVar45 = iVar45 + 1;
          fVar66 = fVar66 + fVar69;
          puVar44 = puVar39 + 1;
        } while (puVar27 != puVar39 + 1);
LAB_015f5516:
        puVar39 = puVar39 + 1;
        if ((g_02394274 <= fVar66) &&
           (fVar57 = ((fVar57 / fVar66) / (float)(int)puVar40) / (float)iVar45, 0.0 < fVar57)) {
          *(float *)(*(int64_t *)(local_40->segname + 8) + (int64_t)puVar40 * 4) = fVar57;
        }
        puVar40 = puVar40 + 1;
      } while (puVar40 != local_120);
      goto LAB_015f5558;
    }
LAB_015f5561:
    uVar37 = *(uint64_t *)(local_40->segname + 8);
    uVar47 = *(uint64_t *)(local_40->segname + 8);
    if ((uVar53 < 8) ||
       ((uVar47 < uVar37 + (int64_t)local_120 * 4 && (uVar37 < uVar47 + (int64_t)local_120 * 4))))
    {
      puVar39 = (void*)0x0;
    }
    else {
      puVar39 = (void*)(uint64_t)(uVar53 & 0xfffffff8);
      uVar46 = ((uint64_t)(puVar39 + -8) >> 3) + 1;
      if (puVar39 + -8 == (void*)0x0) {
        lVar31 = 0;
LAB_015f56c4:
        pfVar49 = (float *)(uVar37 + lVar31 * 4);
        fVar57 = pfVar49[1];
        fVar66 = pfVar49[2];
        fVar67 = pfVar49[3];
        pfVar1 = (float *)(uVar37 + 0x10 + lVar31 * 4);
        fVar69 = *pfVar1;
        fVar58 = pfVar1[1];
        fVar68 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar1 = (float *)(uVar47 + lVar31 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(uVar47 + 0x10 + lVar31 * 4);
        fVar9 = *pfVar2;
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar2 = (float *)(uVar47 + lVar31 * 4);
        *pfVar2 = *pfVar1 * *pfVar49;
        pfVar2[1] = fVar6 * fVar57;
        pfVar2[2] = fVar7 * fVar66;
        pfVar2[3] = fVar8 * fVar67;
        pfVar49 = (float *)(uVar47 + 0x10 + lVar31 * 4);
        *pfVar49 = fVar9 * fVar69;
        pfVar49[1] = fVar10 * fVar58;
        pfVar49[2] = fVar11 * fVar68;
        pfVar49[3] = fVar12 * fVar5;
      }
      else {
        lVar56 = -(uVar46 & 0xfffffffffffffffe);
        lVar31 = 0;
        do {
          pfVar49 = (float *)(uVar37 + lVar31 * 4);
          fVar57 = pfVar49[1];
          fVar66 = pfVar49[2];
          fVar67 = pfVar49[3];
          pfVar1 = (float *)(uVar37 + 0x10 + lVar31 * 4);
          fVar69 = *pfVar1;
          fVar58 = pfVar1[1];
          fVar68 = pfVar1[2];
          fVar5 = pfVar1[3];
          pfVar1 = (float *)(uVar47 + lVar31 * 4);
          fVar6 = pfVar1[1];
          fVar7 = pfVar1[2];
          fVar8 = pfVar1[3];
          pfVar2 = (float *)(uVar47 + 0x10 + lVar31 * 4);
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar2 = (float *)(uVar47 + 0x20 + lVar31 * 4);
          fVar13 = *pfVar2;
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar2 = (float *)(uVar47 + 0x30 + lVar31 * 4);
          fVar17 = *pfVar2;
          fVar18 = pfVar2[1];
          fVar19 = pfVar2[2];
          fVar20 = pfVar2[3];
          pfVar2 = (float *)(uVar47 + lVar31 * 4);
          *pfVar2 = *pfVar1 * *pfVar49;
          pfVar2[1] = fVar6 * fVar57;
          pfVar2[2] = fVar7 * fVar66;
          pfVar2[3] = fVar8 * fVar67;
          pfVar49 = (float *)(uVar47 + 0x10 + lVar31 * 4);
          *pfVar49 = fVar9 * fVar69;
          pfVar49[1] = fVar10 * fVar58;
          pfVar49[2] = fVar11 * fVar68;
          pfVar49[3] = fVar12 * fVar5;
          pfVar49 = (float *)(uVar37 + 0x20 + lVar31 * 4);
          fVar57 = pfVar49[1];
          fVar66 = pfVar49[2];
          fVar67 = pfVar49[3];
          pfVar1 = (float *)(uVar37 + 0x30 + lVar31 * 4);
          fVar69 = *pfVar1;
          fVar58 = pfVar1[1];
          fVar68 = pfVar1[2];
          fVar5 = pfVar1[3];
          pfVar1 = (float *)(uVar47 + 0x20 + lVar31 * 4);
          *pfVar1 = *pfVar49 * fVar13;
          pfVar1[1] = fVar57 * fVar14;
          pfVar1[2] = fVar66 * fVar15;
          pfVar1[3] = fVar67 * fVar16;
          pfVar49 = (float *)(uVar47 + 0x30 + lVar31 * 4);
          *pfVar49 = fVar69 * fVar17;
          pfVar49[1] = fVar58 * fVar18;
          pfVar49[2] = fVar68 * fVar19;
          pfVar49[3] = fVar5 * fVar20;
          lVar31 = lVar31 + 0x10;
          lVar56 = lVar56 + 2;
        } while (lVar56 != 0);
        if ((uVar46 & 1) != 0) goto LAB_015f56c4;
      }
      bVar21 = true;
      if (puVar39 == local_120) goto LAB_015f56f1;
    }
    uVar43 = ~(uint64_t)puVar39;
    for (uVar46 = (uint64_t)local_120 & 3; uVar46 != 0; uVar46 = uVar46 - 1) {
      *(float *)(uVar47 + (int64_t)puVar39 * 4) =
           *(float *)(uVar37 + (int64_t)puVar39 * 4) * *(float *)(uVar47 + (int64_t)puVar39 * 4);
      puVar39 = puVar39 + 1;
    }
    bVar21 = true;
    if ((void*)0x2 < local_120 + uVar43) {
      do {
        *(float *)(uVar47 + (int64_t)puVar39 * 4) =
             *(float *)(uVar37 + (int64_t)puVar39 * 4) * *(float *)(uVar47 + (int64_t)puVar39 * 4)
        ;
        *(float *)(uVar47 + 4 + (int64_t)puVar39 * 4) =
             *(float *)(uVar37 + 4 + (int64_t)puVar39 * 4) *
             *(float *)(uVar47 + 4 + (int64_t)puVar39 * 4);
        *(float *)(uVar47 + 8 + (int64_t)puVar39 * 4) =
             *(float *)(uVar37 + 8 + (int64_t)puVar39 * 4) *
             *(float *)(uVar47 + 8 + (int64_t)puVar39 * 4);
        *(float *)(uVar47 + 0xc + (int64_t)puVar39 * 4) =
             *(float *)(uVar37 + 0xc + (int64_t)puVar39 * 4) *
             *(float *)(uVar47 + 0xc + (int64_t)puVar39 * 4);
        puVar39 = puVar39 + 4;
      } while (local_120 != puVar39);
    }
  }
LAB_015f56f1:
  fVar57 = (float)(**g_02786500)();
  if (g_02394274 <= fVar57) {
    (*g_02786500[4])();
  }
  FUN_015b32a0();
  _memcpy(puVar39,(void *)(int64_t)(int)(uVar53 * 4),uVar22);
  if (!bVar21) goto LAB_015f591e;
  puVar40 = *(void**)(local_40->segname + 8);
  puVar39 = *(void**)(local_40->segname + 8);
  if ((uVar53 < 8) ||
     ((puVar39 < puVar40 + (int64_t)local_120 * 4 && (puVar40 < puVar39 + (int64_t)local_120 * 4))
     )) {
    puVar44 = (void*)0x0;
  }
  else {
    puVar44 = (void*)(uint64_t)(uVar53 & 0xfffffff8);
    uVar37 = ((uint64_t)(puVar44 + -8) >> 3) + 1;
    if (puVar44 + -8 == (void*)0x0) {
      lVar31 = 0;
LAB_015f58f4:
      pfVar49 = (float *)(puVar40 + lVar31 * 4);
      fVar57 = pfVar49[1];
      fVar66 = pfVar49[2];
      fVar67 = pfVar49[3];
      pfVar1 = (float *)(puVar40 + lVar31 * 4 + 0x10);
      fVar69 = *pfVar1;
      fVar58 = pfVar1[1];
      fVar68 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(puVar39 + lVar31 * 4);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(puVar39 + lVar31 * 4 + 0x10);
      fVar9 = *pfVar2;
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      pfVar2 = (float *)(puVar39 + lVar31 * 4);
      *pfVar2 = *pfVar1 * *pfVar49;
      pfVar2[1] = fVar6 * fVar57;
      pfVar2[2] = fVar7 * fVar66;
      pfVar2[3] = fVar8 * fVar67;
      pfVar49 = (float *)(puVar39 + lVar31 * 4 + 0x10);
      *pfVar49 = fVar9 * fVar69;
      pfVar49[1] = fVar10 * fVar58;
      pfVar49[2] = fVar11 * fVar68;
      pfVar49[3] = fVar12 * fVar5;
    }
    else {
      lVar56 = -(uVar37 & 0xfffffffffffffffe);
      lVar31 = 0;
      do {
        pfVar49 = (float *)(puVar40 + lVar31 * 4);
        fVar57 = pfVar49[1];
        fVar66 = pfVar49[2];
        fVar67 = pfVar49[3];
        pfVar1 = (float *)(puVar40 + lVar31 * 4 + 0x10);
        fVar69 = *pfVar1;
        fVar58 = pfVar1[1];
        fVar68 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar1 = (float *)(puVar39 + lVar31 * 4);
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar2 = (float *)(puVar39 + lVar31 * 4 + 0x10);
        fVar9 = *pfVar2;
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar2 = (float *)(puVar39 + lVar31 * 4 + 0x20);
        fVar13 = *pfVar2;
        fVar14 = pfVar2[1];
        fVar15 = pfVar2[2];
        fVar16 = pfVar2[3];
        pfVar2 = (float *)(puVar39 + lVar31 * 4 + 0x30);
        fVar17 = *pfVar2;
        fVar18 = pfVar2[1];
        fVar19 = pfVar2[2];
        fVar20 = pfVar2[3];
        pfVar2 = (float *)(puVar39 + lVar31 * 4);
        *pfVar2 = *pfVar1 * *pfVar49;
        pfVar2[1] = fVar6 * fVar57;
        pfVar2[2] = fVar7 * fVar66;
        pfVar2[3] = fVar8 * fVar67;
        pfVar49 = (float *)(puVar39 + lVar31 * 4 + 0x10);
        *pfVar49 = fVar9 * fVar69;
        pfVar49[1] = fVar10 * fVar58;
        pfVar49[2] = fVar11 * fVar68;
        pfVar49[3] = fVar12 * fVar5;
        pfVar49 = (float *)(puVar40 + lVar31 * 4 + 0x20);
        fVar57 = pfVar49[1];
        fVar66 = pfVar49[2];
        fVar67 = pfVar49[3];
        pfVar1 = (float *)(puVar40 + lVar31 * 4 + 0x30);
        fVar69 = *pfVar1;
        fVar58 = pfVar1[1];
        fVar68 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar1 = (float *)(puVar39 + lVar31 * 4 + 0x20);
        *pfVar1 = *pfVar49 * fVar13;
        pfVar1[1] = fVar57 * fVar14;
        pfVar1[2] = fVar66 * fVar15;
        pfVar1[3] = fVar67 * fVar16;
        pfVar49 = (float *)(puVar39 + lVar31 * 4 + 0x30);
        *pfVar49 = fVar69 * fVar17;
        pfVar49[1] = fVar58 * fVar18;
        pfVar49[2] = fVar68 * fVar19;
        pfVar49[3] = fVar5 * fVar20;
        lVar31 = lVar31 + 0x10;
        lVar56 = lVar56 + 2;
      } while (lVar56 != 0);
      if ((uVar37 & 1) != 0) goto LAB_015f58f4;
    }
    if (puVar44 == local_120) goto LAB_015f591e;
  }
  uVar47 = ~(uint64_t)puVar44;
  for (uVar37 = (uint64_t)local_120 & 3; uVar37 != 0; uVar37 = uVar37 - 1) {
    *(float *)(puVar39 + (int64_t)puVar44 * 4) =
         *(float *)(puVar40 + (int64_t)puVar44 * 4) * *(float *)(puVar39 + (int64_t)puVar44 * 4);
    puVar44 = puVar44 + 1;
  }
  if ((void*)0x2 < local_120 + uVar47) {
    do {
      *(float *)(puVar39 + (int64_t)puVar44 * 4) =
           *(float *)(puVar40 + (int64_t)puVar44 * 4) * *(float *)(puVar39 + (int64_t)puVar44 * 4)
      ;
      *(float *)(puVar39 + (int64_t)puVar44 * 4 + 4) =
           *(float *)(puVar40 + (int64_t)puVar44 * 4 + 4) *
           *(float *)(puVar39 + (int64_t)puVar44 * 4 + 4);
      *(float *)(puVar39 + (int64_t)puVar44 * 4 + 8) =
           *(float *)(puVar40 + (int64_t)puVar44 * 4 + 8) *
           *(float *)(puVar39 + (int64_t)puVar44 * 4 + 8);
      *(float *)(puVar39 + (int64_t)puVar44 * 4 + 0xc) =
           *(float *)(puVar40 + (int64_t)puVar44 * 4 + 0xc) *
           *(float *)(puVar39 + (int64_t)puVar44 * 4 + 0xc);
      puVar44 = puVar44 + 4;
    } while (local_120 != puVar44);
  }
LAB_015f591e:
  pVar33 = (void*)puVar39;
  FUN_015b32a0();
  local_44 = 4;
  uVar22 = 4;
  fVar57 = *(float *)(*(int64_t *)(local_40->segname + 8) + 0x10);
  local_84 = 0;
  pvVar25 = _pthread_getspecific(pVar33);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar62 = FUN_00e7bdb0();
  FUN_016cda80(uVar62,uVar26);
  uVar26 = FUN_00e7bcc0();
  if ((fVar57 / fVar65) / g_023b7c18 < g_02390124) {
    lVar31 = *(int64_t *)(local_40->segname + 8);
    fVar57 = *(float *)(lVar31 + 0xc);
    if (((fVar57 < *(float *)(lVar31 + 8) || fVar57 == *(float *)(lVar31 + 8)) ||
        (fVar57 < *(float *)(lVar31 + 0x10) || fVar57 == *(float *)(lVar31 + 0x10))) ||
       (*(float *)(lVar31 + 0x18) < *(float *)(lVar31 + 0x20) ||
        *(float *)(lVar31 + 0x18) == *(float *)(lVar31 + 0x20))) {
      local_44 = 4;
      uVar22 = 4;
    }
    else {
      local_44 = 3;
      uVar22 = 3;
    }
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (segment_command *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)local_b0) {
    lVar31 = *(int64_t *)(local_40->segname + 8);
    lVar56 = *(int64_t *)(local_40->segname + 8);
    if (local_b0 == 1) {
      uVar37 = 0;
    }
    else {
      uVar37 = 0;
      do {
        uVar47 = (int64_t)((uint64_t)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff) %
                 (int64_t)(int)uVar22 & 0xffffffff;
        *(float *)(lVar56 + uVar47 * 4) =
             *(float *)(lVar31 + uVar37 * 4) + *(float *)(lVar56 + uVar47 * 4);
        uVar47 = (int64_t)((int)uVar37 + 1) % (int64_t)(int)uVar22 & 0xffffffff;
        *(float *)(lVar56 + uVar47 * 4) =
             *(float *)(lVar31 + 4 + uVar37 * 4) + *(float *)(lVar56 + uVar47 * 4);
        uVar37 = uVar37 + 2;
      } while ((local_b0 & 0xfffffffe) != uVar37);
    }
    if (((uint64_t)puVar27 & 1) != 0) {
      uVar47 = (int64_t)((uint64_t)(uint)((int)uVar37 >> 0x1f) << 0x20 | uVar37 & 0xffffffff) %
               (int64_t)(int)uVar22 & 0xffffffff;
      *(float *)(lVar56 + uVar47 * 4) =
           *(float *)(lVar31 + uVar37 * 4) + *(float *)(lVar56 + uVar47 * 4);
    }
  }
  FUN_015b32a0();
  if ((2 < uVar22) &&
     (**(float **)(local_40->segname + 8) * g_0239109c <
      (*(float **)(local_40->segname + 8))[(int)(1U % uVar22)])) {
    local_84 = 1U % uVar22;
  }
  if (uVar22 / 2 < local_84) {
    local_84 = local_84 - uVar22;
  }
  pvVar25 = _pthread_getspecific(local_84);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar62 = FUN_016c26c0((double)(int)local_84);
  *param_4 = uVar62;
  *param_3 = uVar26;
  *param_2 = local_44;
  *in_RCX = 4;
  if (local_40 != (segment_command *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (puVar30 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (segment_command *)0x0) {
    FUN_00d50b20();
  }
  if (puVar29 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (segment_command *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (puVar28 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

