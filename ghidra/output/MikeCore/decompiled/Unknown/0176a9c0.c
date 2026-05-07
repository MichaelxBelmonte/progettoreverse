// Function: FUN_0176a9c0
// Address: 0176a9c0
// Size: 6462 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0176ac22) */
/* WARNING: Removing unreachable block (ram,0x0176ac2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0176a9c0(float param_1,undefined8 param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  void *pvVar25;
  char *pcVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  longlong lVar30;
  longlong lVar31;
  undefined8 *puVar32;
  pthread_key_t pVar33;
  uint uVar34;
  longlong lVar35;
  longlong *plVar36;
  ulonglong uVar37;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar38;
  longlong *plVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  int iVar43;
  longlong lVar44;
  longlong lVar45;
  char *pcVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  double dVar57;
  float fVar58;
  float fVar59;
  char local_b8;
  undefined7 uStack_b7;
  char local_b0;
  longlong local_a8;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  ulonglong uVar29;
  undefined8 extraout_XMM0_Qb;
  
  if ((*unaff_RDI == 0) || (*(int *)(*unaff_RDI + 0xc) == 0)) {
    uVar29 = 0;
    goto LAB_0176c393;
  }
  FUN_00c8e690();
  plVar16 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar35 = plVar16[2];
  *(undefined8 *)(lVar35 + 0xc) = 0x40cb5760c104f330;
  *(undefined8 *)(lVar35 + 0x20) = 0x4104f330c0cb5760;
  *(undefined4 *)(lVar35 + 0x14) = 0x3f7a3c00;
  *(undefined4 *)(lVar35 + 0x1c) = 0xbf7a3c00;
  FUN_00c8e690();
  plVar17 = local_40;
  if (((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar35 = plVar17[2];
  pVar33 = 0x3f800000;
  *(undefined8 *)(lVar35 + 0xc) = 0x3f8000003f800000;
  *(undefined8 *)(lVar35 + 0x20) = 0x3f8000003f800000;
  *(undefined4 *)(lVar35 + 0x14) = 0x3dcccccd;
  *(undefined4 *)(lVar35 + 0x1c) = 0x3dcccccd;
  uVar50 = FUN_00243390();
  plVar5 = local_40;
  plVar4 = (longlong *)*unaff_RDI;
  if (plVar4 == local_40) {
    if (((char)unaff_RDI[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38[0] != '\0') goto LAB_0176abb6;
      uVar50 = FUN_00d50b00();
      goto LAB_0176abfa;
    }
LAB_0176ac05:
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar50 = FUN_00d50b20();
    }
  }
  else {
    lVar35 = unaff_RDI[1];
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar50 = FUN_00d50b00();
      }
      *unaff_RDI = (longlong)plVar5;
      if (((char)lVar35 != '\0') && (plVar4 != (longlong *)0x0)) {
        uVar50 = FUN_00d50b20();
      }
LAB_0176abfa:
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_0176ac05;
    }
    *unaff_RDI = (longlong)local_40;
    if (((char)lVar35 != '\0') && (plVar4 != (longlong *)0x0)) {
      uVar50 = FUN_00d50b20();
    }
LAB_0176abb6:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_38[0] = '\0';
  }
  FUN_00d242c0(uVar50,0);
  pvVar25 = _pthread_getspecific(pVar33);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar51 = (double)FUN_0125a280();
  FUN_00d23340();
  plVar4 = local_40;
  local_b8 = local_38[0];
  pcVar26 = &local_b8;
  if (local_38[0] != '\0') {
    pcVar26 = local_38;
  }
  *pcVar26 = '\0';
  if ((local_38[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar25 = _pthread_getspecific(pVar33);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar52 = (double)FUN_0125a280();
  FUN_00d23340();
  plVar5 = local_40;
  pcVar26 = local_48;
  pcVar46 = local_38;
  if (local_38[0] == '\0') {
    pcVar46 = pcVar26;
  }
  local_48[0] = local_38[0];
  *pcVar46 = '\0';
  if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar25 = _pthread_getspecific((pthread_key_t)pcVar26);
  if (pvVar25 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar53 = (double)FUN_01264170();
  if ((local_48[0] != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar18 = FUN_00e7d780();
  uVar42 = (ulonglong)uVar18;
  iVar19 = FUN_00e7d850(((dVar52 + dVar53) - dVar51) * DAT_02394dd8);
  puVar27 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar27 = &DAT_02572358;
  pcVar15 = DAT_02572370;
  (*DAT_02572370)();
  puVar28 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar28 = &DAT_02572358;
  (*pcVar15)();
  uVar20 = iVar19 + uVar18 * 2;
  uVar29 = (ulonglong)uVar20;
  FUN_00c8e690();
  plVar4 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  iVar43 = 0xc;
  do {
    FUN_00c8e690();
    plVar5 = local_40;
    if (((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    local_38[0] = '\0';
    local_40 = plVar5;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00c8e690();
    plVar5 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    local_38[0] = '\0';
    local_40 = plVar5;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    iVar43 = iVar43 + -1;
  } while (iVar43 != 0);
  lVar35 = *unaff_RDI;
  if (0 < *(int *)(lVar35 + 0xc)) {
    local_a8 = (longlong)(int)uVar18;
    uVar34 = -uVar18;
    uVar37 = (ulonglong)uVar34;
    lVar44 = 0;
    do {
      pVar33 = (pthread_key_t)uVar37;
      lVar35 = *(longlong *)(*(longlong *)(lVar35 + 0x10) + lVar44 * 8);
      if (lVar35 != 0) {
        FUN_00d50b00();
      }
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126bcd0();
      plVar5 = local_40;
      if (((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      plVar36 = (longlong *)*unaff_RSI;
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        plVar36 = (longlong *)*unaff_RSI;
        lVar30 = FUN_00e8b990();
        if (lVar30 != 0) {
          plVar36 = (longlong *)plVar36[(ulonglong)(*(uint *)(lVar30 + 0x154) & 1) + 4];
        }
      }
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar30 = *plVar36;
      iVar43 = (**(code **)(lVar30 + 0x370))();
      pVar33 = (pthread_key_t)lVar30;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
        FUN_00d50b20();
      }
      iVar24 = 0;
      if (0 < iVar43) {
        iVar24 = iVar43;
      }
      pvVar25 = _pthread_getspecific(pVar33);
      if ((pvVar25 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
        pVar33 = (pthread_key_t)lVar35;
      }
      dVar52 = (double)FUN_0125a280();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar53 = (double)FUN_01264170();
      uVar21 = FUN_00e7d850((dVar52 - dVar51) * DAT_02394dd8);
      uVar22 = FUN_00e7d850(dVar53 * DAT_02394dd8);
      plVar36 = (longlong *)(ulonglong)uVar22;
      uVar23 = (uint)(iVar24 - iVar43 != 0);
      lVar30 = *(longlong *)
                (puVar27[2] +
                (ulonglong)((iVar43 + (((iVar24 - iVar43) - uVar23) / 0xc + uVar23) * 0xc) % 0xc) *
                8);
      if (lVar30 != 0) {
        FUN_00d50b00();
      }
      uVar23 = uVar18 * 2 + uVar22;
      dVar53 = dVar53 + DAT_023944d8;
      if (0 < (int)uVar23) {
        uVar37 = 0;
        do {
          iVar43 = (int)uVar37;
          dVar52 = (double)(int)(uVar34 + iVar43) / DAT_02394dd8;
          pvVar25 = _pthread_getspecific((pthread_key_t)plVar36);
          plVar39 = plVar5;
          if ((pvVar25 != (void *)0x0) && (lVar31 = FUN_00e8b990(), lVar31 != 0)) {
            plVar36 = plVar5;
            plVar39 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar31 + 0x154) & 1) + 4];
          }
          dVar57 = 0.0;
          if (0.0 <= dVar52) {
            dVar57 = dVar52;
          }
          dVar52 = dVar53;
          if (dVar57 <= dVar53) {
            dVar52 = dVar57;
          }
          auVar54._0_8_ = (double)(**(code **)(*plVar39 + 0x380))(dVar52);
          auVar54._8_8_ = extraout_XMM0_Qb;
          auVar55._4_12_ = auVar54._4_12_;
          auVar55._0_4_ = (float)auVar54._0_8_;
          fVar47 = (float)_powf(auVar55._0_8_);
          iVar24 = (int)(uVar37 + uVar21);
          if ((-1 < iVar24) && (iVar24 < (int)uVar20)) {
            if ((longlong)uVar37 < local_a8) {
              fVar49 = (float)iVar43 / (float)(int)uVar18;
            }
            else {
              fVar49 = DAT_02390124;
              if ((longlong)(int)(uVar23 - uVar18) < (longlong)uVar37) {
                fVar49 = DAT_02390124 -
                         (float)(int)((uVar34 - uVar22) + iVar43) / (float)(int)uVar18;
              }
            }
            fVar47 = fVar47 * fVar49;
            uVar38 = uVar37 + uVar21 & 0xffffffff;
            plVar36 = *(longlong **)(lVar30 + 0x10);
            pfVar1 = (float *)((longlong)plVar36 + uVar38 * 4);
            if (*pfVar1 <= fVar47 && fVar47 != *pfVar1) {
              *(float *)((longlong)plVar36 + uVar38 * 4) = fVar47;
            }
          }
          uVar37 = uVar37 + 1;
        } while (uVar23 != uVar37);
      }
      if (lVar30 != 0) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      lVar44 = lVar44 + 1;
      lVar35 = *unaff_RDI;
      uVar37 = (ulonglong)*(int *)(lVar35 + 0xc);
    } while (lVar44 < (longlong)uVar37);
  }
  uVar23 = _DAT_023945e0;
  fVar49 = DAT_02394274;
  uVar34 = _DAT_02390140;
  fVar47 = DAT_0239011c;
  if (0 < (int)uVar20) {
    lVar35 = puVar27[2];
    plVar5 = (longlong *)puVar28[2];
    lVar44 = *(longlong *)(*plVar5 + 0x10);
    lVar30 = *(longlong *)(plVar5[1] + 0x10);
    lVar31 = *(longlong *)(plVar5[2] + 0x10);
    lVar6 = *(longlong *)(plVar5[3] + 0x10);
    local_a8 = *(longlong *)(plVar5[4] + 0x10);
    lVar7 = *(longlong *)(plVar5[5] + 0x10);
    lVar8 = *(longlong *)(plVar5[6] + 0x10);
    lVar9 = *(longlong *)(plVar5[7] + 0x10);
    lVar10 = *(longlong *)(plVar5[8] + 0x10);
    lVar11 = *(longlong *)(plVar5[9] + 0x10);
    lVar12 = *(longlong *)(plVar5[10] + 0x10);
    lVar13 = *(longlong *)(plVar5[0xb] + 0x10);
    lVar14 = plVar4[2];
    uVar37 = 0;
    do {
      lVar40 = 0;
      lVar45 = 0;
      do {
        fVar48 = *(float *)(*(longlong *)(*(longlong *)(lVar35 + lVar45 * 8) + 0x10) + uVar37 * 4);
        if (fVar49 <= fVar48) {
          fVar58 = 0.0;
          lVar41 = 0;
          fVar59 = fVar49;
          do {
            if ((lVar45 != lVar41) &&
               (fVar2 = *(float *)(*(longlong *)(*(longlong *)(puVar27[2] + lVar41 * 8) + 0x10) +
                                  uVar37 * 4), fVar49 <= fVar2)) {
              iVar43 = (int)(lVar40 + lVar41);
              iVar24 = iVar43 + 0xc;
              if (-1 < lVar40 + lVar41) {
                iVar24 = iVar43;
              }
              fVar3 = *(float *)(plVar16[2] + (longlong)iVar24 * 4);
              if ((fVar49 <= (float)((uint)fVar3 & uVar34)) &&
                 (fVar56 = *(float *)(plVar17[2] + (longlong)iVar24 * 4), fVar49 <= fVar56)) {
                fVar56 = (fVar2 + fVar48) * fVar47 * fVar56;
                fVar59 = fVar59 + fVar56;
                fVar58 = fVar58 + fVar3 * fVar56;
              }
            }
            lVar41 = lVar41 + 1;
          } while (lVar41 != 0xc);
          *(float *)(*(longlong *)(*(longlong *)(puVar28[2] + lVar45 * 8) + 0x10) + uVar37 * 4) =
               fVar58 / fVar59;
        }
        lVar45 = lVar45 + 1;
        lVar40 = lVar40 + -1;
      } while (lVar45 != 0xc);
      *(uint *)(lVar14 + uVar37 * 4) =
           (uint)(*(float *)(lVar44 + uVar37 * 4) + 0.0 + *(float *)(lVar30 + uVar37 * 4) +
                  *(float *)(lVar31 + uVar37 * 4) + *(float *)(lVar6 + uVar37 * 4) +
                  *(float *)(local_a8 + uVar37 * 4) + *(float *)(lVar7 + uVar37 * 4) +
                  *(float *)(lVar8 + uVar37 * 4) + *(float *)(lVar9 + uVar37 * 4) +
                  *(float *)(lVar10 + uVar37 * 4) + *(float *)(lVar11 + uVar37 * 4) +
                  *(float *)(lVar12 + uVar37 * 4) + *(float *)(lVar13 + uVar37 * 4)) ^ uVar23;
      uVar37 = uVar37 + 1;
    } while (uVar37 != uVar29);
  }
  puVar32 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar32 = &DAT_025f0d98;
  puVar32[2] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  FUN_015c15b0(1,uVar29);
  lVar35 = 1;
  FUN_015c15b0(1,uVar29);
  if (DAT_02394274 < param_3) {
    if (0 < (int)uVar18) {
      lVar35 = plVar4[2];
      if (uVar42 - 1 < 3) {
        uVar37 = 0;
      }
      else {
        uVar37 = 0;
        do {
          *(undefined4 *)(lVar35 + uVar37 * 4) = *(undefined4 *)(lVar35 + uVar42 * 4);
          *(undefined4 *)(lVar35 + 4 + uVar37 * 4) = *(undefined4 *)(lVar35 + uVar42 * 4);
          *(undefined4 *)(lVar35 + 8 + uVar37 * 4) = *(undefined4 *)(lVar35 + uVar42 * 4);
          *(undefined4 *)(lVar35 + 0xc + uVar37 * 4) = *(undefined4 *)(lVar35 + uVar42 * 4);
          uVar37 = uVar37 + 4;
        } while ((uVar18 & 0xfffffffc) != uVar37);
      }
      if ((ulonglong)(uVar18 & 3) != 0) {
        uVar38 = 0;
        do {
          *(undefined4 *)(lVar35 + uVar37 * 4 + uVar38 * 4) = *(undefined4 *)(lVar35 + uVar42 * 4);
          uVar38 = uVar38 + 1;
        } while ((uVar18 & 3) != uVar38);
      }
    }
    if ((int)((uVar20 - uVar18) + 1) < (int)uVar20) {
      lVar30 = (longlong)(int)(uVar20 - uVar18);
      lVar35 = plVar4[2];
      lVar44 = (longlong)(int)(iVar19 + uVar18 + 1);
      for (uVar34 = uVar18 - 1 & 3; uVar34 != 0; uVar34 = uVar34 - 1) {
        *(undefined4 *)(lVar35 + lVar44 * 4) = *(undefined4 *)(lVar35 + lVar30 * 4);
        lVar44 = lVar44 + 1;
      }
      if (2 < uVar18 - 2) {
        do {
          *(undefined4 *)(lVar35 + lVar44 * 4) = *(undefined4 *)(lVar35 + lVar30 * 4);
          *(undefined4 *)(lVar35 + 4 + lVar44 * 4) = *(undefined4 *)(lVar35 + lVar30 * 4);
          *(undefined4 *)(lVar35 + 8 + lVar44 * 4) = *(undefined4 *)(lVar35 + lVar30 * 4);
          *(undefined4 *)(lVar35 + 0xc + lVar44 * 4) = *(undefined4 *)(lVar35 + lVar30 * 4);
          lVar44 = lVar44 + 4;
        } while (uVar20 != (uint)lVar44);
      }
    }
    lVar35 = 1;
    FUN_015c15b0(1,param_4 * DAT_023942a8);
    if (0 < (int)uVar20) {
      plVar5 = (longlong *)puVar28[2];
      lVar44 = *(longlong *)(plVar5[4] + 0x10);
      lVar30 = *(longlong *)(plVar5[5] + 0x10);
      lVar31 = *(longlong *)(plVar5[6] + 0x10);
      lVar6 = *(longlong *)(plVar5[7] + 0x10);
      lVar7 = *(longlong *)(plVar5[8] + 0x10);
      lVar8 = *(longlong *)(*plVar5 + 0x10);
      lVar9 = *(longlong *)(plVar5[1] + 0x10);
      lVar10 = *(longlong *)(plVar5[2] + 0x10);
      lVar11 = *(longlong *)(plVar5[3] + 0x10);
      lVar12 = *(longlong *)(plVar5[9] + 0x10);
      lVar13 = *(longlong *)(plVar5[10] + 0x10);
      lVar35 = *(longlong *)(plVar5[0xb] + 0x10);
      lVar14 = plVar4[2];
      lVar40 = 0;
      do {
        *(float *)(lVar8 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar8 + lVar40);
        *(float *)(lVar9 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar9 + lVar40);
        *(float *)(lVar10 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar10 + lVar40);
        *(float *)(lVar11 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar11 + lVar40);
        *(float *)(lVar44 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar44 + lVar40);
        *(float *)(lVar30 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar30 + lVar40);
        *(float *)(lVar31 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar31 + lVar40);
        *(float *)(lVar6 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar6 + lVar40);
        *(float *)(lVar7 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar7 + lVar40);
        *(float *)(lVar12 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar12 + lVar40);
        *(float *)(lVar13 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar13 + lVar40);
        *(float *)(lVar35 + lVar40) =
             *(float *)(lVar14 + lVar40) * param_3 + *(float *)(lVar35 + lVar40);
        lVar40 = lVar40 + 4;
      } while (uVar29 << 2 != lVar40);
    }
  }
  uVar29 = *unaff_RSI;
  pvVar25 = _pthread_getspecific((pthread_key_t)lVar35);
  if (pvVar25 != (void *)0x0) {
    uVar29 = *unaff_RSI;
    lVar44 = FUN_00e8b990();
    if (lVar44 != 0) {
      uVar29 = *(ulonglong *)(uVar29 + 0x20 + (ulonglong)(*(uint *)(lVar44 + 0x154) & 1) * 8);
    }
  }
  fVar47 = *(float *)(uVar29 + 0x70);
  if (NAN(fVar47)) {
    FUN_0173e520();
    fVar47 = *(float *)(uVar29 + 0x70);
    lVar44 = *unaff_RDI;
    iVar19 = *(int *)(lVar44 + 0xc);
  }
  else {
    lVar44 = *unaff_RDI;
    iVar19 = *(int *)(lVar44 + 0xc);
  }
  if (0 < iVar19) {
    lVar30 = 0;
    do {
      pVar33 = (pthread_key_t)lVar35;
      lVar35 = *(longlong *)(*(longlong *)(lVar44 + 0x10) + lVar30 * 8);
      if (lVar35 != 0) {
        FUN_00d50b00();
      }
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126bcd0();
      plVar5 = local_40;
      if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar36 = (longlong *)*unaff_RSI;
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        plVar36 = (longlong *)*unaff_RSI;
        lVar44 = FUN_00e8b990();
        if (lVar44 != 0) {
          plVar36 = (longlong *)plVar36[(ulonglong)(*(uint *)(lVar44 + 0x154) & 1) + 4];
        }
      }
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar44 = *plVar36;
      iVar19 = (**(code **)(lVar44 + 0x370))();
      pVar33 = (pthread_key_t)lVar44;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (CONCAT71(uStack_b7,local_b8) != 0)) {
        FUN_00d50b20();
      }
      iVar43 = 0;
      if (0 < iVar19) {
        iVar43 = iVar19;
      }
      uVar34 = iVar43 - iVar19;
      uVar29 = (ulonglong)uVar34;
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar52 = (double)FUN_0125a280();
      pvVar25 = _pthread_getspecific(pVar33);
      if (pvVar25 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar53 = (double)FUN_01264170();
      iVar43 = FUN_00e7d850((dVar52 - dVar51) * DAT_02394dd8);
      uVar23 = FUN_00e7d850(dVar53 * DAT_02394dd8);
      if (uVar23 != 0) {
        uVar34 = (uVar34 - (uVar34 != 0)) / 0xc + (uint)(uVar34 != 0);
        uVar29 = (ulonglong)uVar34;
        pVar33 = uVar34 * 3;
        uVar34 = iVar19 + uVar34 * 0xc;
        dVar53 = dVar53 + DAT_023944d8;
        if ((int)uVar23 < 1) {
          fVar49 = 0.0;
          local_a8 = CONCAT44(local_a8._4_4_,DAT_02394274);
        }
        else {
          plVar36 = (longlong *)(ulonglong)((uVar34 / 0xc) * 0xc);
          uVar29 = (ulonglong)uVar23;
          fVar49 = 0.0;
          uVar42 = 0;
          local_a8 = CONCAT44(local_a8._4_4_,DAT_02394274);
          do {
            dVar52 = (double)(int)uVar42 / DAT_02394dd8;
            pvVar25 = _pthread_getspecific((pthread_key_t)plVar36);
            plVar39 = plVar5;
            if ((pvVar25 != (void *)0x0) && (lVar44 = FUN_00e8b990(), lVar44 != 0)) {
              plVar36 = plVar5;
              plVar39 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar44 + 0x154) & 1) + 4];
            }
            dVar57 = 0.0;
            if (0.0 <= dVar52) {
              dVar57 = dVar52;
            }
            dVar52 = dVar53;
            if (dVar57 <= dVar53) {
              dVar52 = dVar57;
            }
            dVar52 = (double)(**(code **)(*plVar39 + 0x380))(dVar52);
            uVar23 = -(uint)((float)dVar52 <= DAT_02394270);
            uVar37 = (iVar43 + uVar18) + uVar42;
            iVar19 = (int)uVar37;
            if ((-1 < iVar19) && (iVar19 < (int)uVar20)) {
              fVar48 = (float)(~uVar23 & (uint)SQRT((float)dVar52) & _DAT_02390140 |
                              uVar23 & DAT_023b3e04);
              local_a8 = CONCAT44(local_a8._4_4_,(float)local_a8 + fVar48);
              plVar36 = *(longlong **)
                         (*(longlong *)(puVar28[2] + (ulonglong)(uVar34 % 0xc) * 8) + 0x10);
              fVar49 = fVar49 + *(float *)((longlong)plVar36 + (uVar37 & 0xffffffff) * 4) * fVar48;
            }
            pVar33 = (pthread_key_t)plVar36;
            uVar42 = uVar42 + 1;
          } while (uVar29 != uVar42);
        }
        pvVar25 = _pthread_getspecific(pVar33);
        if (pvVar25 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580((fVar49 / (float)local_a8) * param_1 +
                     (float)(int)uVar34 * DAT_023908e0 + fVar47);
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (lVar35 != 0) {
        FUN_00d50b20();
      }
      lVar30 = lVar30 + 1;
      lVar44 = *unaff_RDI;
      lVar35 = (longlong)*(int *)(lVar44 + 0xc);
    } while (lVar30 < lVar35);
  }
  if (puVar32 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (puVar28 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar27 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar17 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar29 = CONCAT71((int7)(uVar29 >> 8),1);
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0176c393:
  return uVar29 & 0xffffffff;
}


