// Function: FUN_015c4e40
// Address: 015c4e40
// Size: 4396 bytes
// Class: MUSpectralTimeSlice
// String references:
//   "MUSpectralTimeSlice::initFromTimeSignal(): incomplete parameters!"
//   "MUSpectralTimeSlice::initFromTimeSignal(): no valid neighbourTimeSlice for trueFreqs!"
//   "MUSpectralTimeSlice::getPhaseData(): no phase data"


/* WARNING: Removing unreachable block (ram,0x015c52b1) */
/* WARNING: Removing unreachable block (ram,0x015c52ba) */
/* WARNING: Removing unreachable block (ram,0x015c51de) */
/* WARNING: Removing unreachable block (ram,0x015c51e7) */
/* WARNING: Removing unreachable block (ram,0x015c519d) */
/* WARNING: Removing unreachable block (ram,0x015c51a6) */
/* WARNING: Removing unreachable block (ram,0x015c512c) */
/* WARNING: Removing unreachable block (ram,0x015c5135) */
/* WARNING: Removing unreachable block (ram,0x015c500d) */
/* WARNING: Removing unreachable block (ram,0x015c5016) */
/* WARNING: Removing unreachable block (ram,0x015c5064) */
/* WARNING: Removing unreachable block (ram,0x015c506d) */
/* WARNING: Removing unreachable block (ram,0x015c50d5) */
/* WARNING: Removing unreachable block (ram,0x015c50de) */
/* WARNING: Removing unreachable block (ram,0x015c538b) */
/* WARNING: Removing unreachable block (ram,0x015c5394) */
/* WARNING: Removing unreachable block (ram,0x015c599b) */
/* WARNING: Removing unreachable block (ram,0x015c59a4) */
/* WARNING: Removing unreachable block (ram,0x015c4fa1) */
/* WARNING: Removing unreachable block (ram,0x015c4faa) */
/* WARNING: Removing unreachable block (ram,0x015c59f3) */
/* WARNING: Removing unreachable block (ram,0x015c59fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c4e40(char param_1,undefined4 *param_2,longlong *param_3,uint param_4,int param_5,
                 longlong *param_6,longlong param_7,undefined1 param_8,byte param_9)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  size_t sVar11;
  void *pvVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  void *pvVar17;
  pthread_key_t pVar18;
  undefined *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  bool bVar27;
  uint uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  int iVar48;
  longlong lVar49;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar47;
  int iVar50;
  undefined1 auVar40 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  longlong lVar51;
  longlong lVar53;
  undefined1 auVar52 [16];
  longlong lVar54;
  longlong lVar55;
  longlong *local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong *local_res20;
  undefined1 local_58 [16];
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  
  plVar24 = param_3;
  if ((((unaff_RSI == 0) || (param_2 == (undefined4 *)0x0)) ||
      ((param_1 == '\0' && (*param_3 == 0)))) ||
     (((*local_res8 == 0 || (param_7 == 0)) || (*param_6 == 0)))) {
    FUN_00e828a0();
  }
  sVar11 = (size_t)plVar24;
  if ((DAT_028ad700 != (undefined8 *)0x0) && (DAT_028ad709 != '\0')) goto LAB_015c57dd;
  FUN_00e8cb50();
  sVar11 = (size_t)plVar24;
  if (DAT_028ad700 != (undefined8 *)0x0) {
    DAT_028ad709 = '\x01';
    FUN_00e8cb70();
    goto LAB_015c57dd;
  }
  puVar15 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar19 = &DAT_02572358;
  *puVar15 = &DAT_02572358;
  (*DAT_02572370)();
  bVar27 = DAT_028ad700 == (undefined8 *)0x0;
  DAT_028ad700 = puVar15;
  if (((bVar27) || (FUN_00d50b20(), DAT_028ad700 != (undefined8 *)0x0)) && (DAT_028ad708 == '\0')) {
    DAT_028ad708 = '\x01';
    FUN_00e8cb90();
  }
  FUN_00e83da0();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&DAT_00008000,(size_t)plVar24);
  FUN_00e83070();
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00e83da0();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&DAT_00004000,(size_t)plVar24);
  FUN_00e83070();
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00e83da0();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar19,&DAT_00002000,(size_t)plVar24);
  FUN_00e83070();
  local_38 = '\0';
  FUN_00d21140();
  FUN_00d50b20();
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = DAT_028ad710;
  if ((DAT_028ad710 != local_40) && (DAT_028ad710 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (DAT_028ad718 == '\0') {
      DAT_028ad718 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  puVar15 = *(undefined8 **)(DAT_028ad710 + 0x10);
  *puVar15 = 0x400000003f800000;
  *(undefined4 *)(puVar15 + 1) = 0x40800000;
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = DAT_028ad720;
  if ((DAT_028ad720 != local_40) && (DAT_028ad720 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (DAT_028ad728 == '\0') {
      DAT_028ad728 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  iVar10 = FUN_00e7d780(DAT_024110a0);
  piVar4 = *(int **)(DAT_028ad720 + 0x10);
  *piVar4 = iVar10;
  piVar4[1] = iVar10 * 2;
  piVar4[2] = iVar10 << 2;
  FUN_00c8e690();
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar26 = DAT_028ad730;
  if ((DAT_028ad730 != local_40) && (DAT_028ad730 = local_40, lVar26 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    if (DAT_028ad738 == '\0') {
      DAT_028ad738 = '\x01';
      FUN_00e8cb90();
    }
    if (local_40 != 0 && lVar26 == local_40) {
      FUN_00d50b20();
    }
  }
  piVar4 = *(int **)(DAT_028ad720 + 0x10);
  iVar10 = *piVar4;
  lVar13 = (longlong)iVar10;
  iVar3 = piVar4[1];
  lVar26 = (longlong)iVar3;
  if (iVar3 - iVar10 != 0 && iVar10 <= iVar3) {
    fVar31 = (float)(iVar3 - iVar10);
    lVar5 = *(longlong *)(DAT_028ad730 + 0x10);
    uVar20 = lVar26 - lVar13;
    lVar25 = lVar13;
    if (3 < uVar20) {
      uVar21 = uVar20 & 0xfffffffffffffffc;
      lVar25 = uVar21 + lVar13;
      auVar35._8_4_ = iVar10;
      auVar35._0_8_ = lVar13;
      auVar35._12_4_ = iVar10 >> 0x1f;
      lVar51 = _DAT_0240df80 + lVar13;
      lVar49 = auVar35._8_8_;
      lVar53 = _UNK_0240df88 + lVar49;
      lVar54 = _DAT_0240df90 + lVar13;
      lVar55 = _UNK_0240df98 + lVar49;
      uVar22 = uVar21;
      do {
        auVar34._0_4_ = (float)(int)(lVar54 - lVar13);
        auVar34._4_4_ = (float)(int)(lVar55 - lVar49);
        auVar34._8_4_ = (float)(int)(lVar51 - lVar13);
        auVar34._12_4_ = (float)(int)(lVar53 - lVar49);
        auVar8._4_4_ = fVar31;
        auVar8._0_4_ = fVar31;
        auVar8._8_4_ = fVar31;
        auVar8._12_4_ = fVar31;
        auVar35 = divps(auVar34,auVar8);
        fVar30 = auVar35._4_4_ + _UNK_023b2d54;
        auVar37._8_4_ = auVar35._8_4_ + _UNK_023b2d58;
        auVar37._12_4_ = auVar35._12_4_ + _UNK_023b2d5c;
        local_58._0_8_ = _logf();
        local_58._8_8_ = extraout_XMM0_Qb;
        auVar36._0_8_ = _logf();
        auVar36._8_8_ = extraout_XMM0_Qb_00;
        auVar35 = insertps(local_58,auVar36,0x10);
        auVar6._4_8_ = extraout_XMM0_Qb_00;
        auVar6._0_4_ = fVar30;
        auVar37._0_8_ = auVar6._0_8_ << 0x20;
        auVar38._0_8_ = _logf(auVar37._8_8_);
        auVar38._8_8_ = extraout_XMM0_Qb_01;
        auVar35 = insertps(auVar35,auVar38,0x20);
        auVar39._0_8_ = _logf();
        auVar39._8_8_ = extraout_XMM0_Qb_02;
        auVar35 = insertps(auVar35,auVar39,0x30);
        auVar35 = divps(auVar35,_DAT_024110b0);
        *(undefined1 (*) [16])(lVar5 + (lVar54 - lVar13) * 4) = auVar35;
        lVar54 = lVar54 + _DAT_0240dfb0;
        lVar55 = lVar55 + _UNK_0240dfb8;
        lVar51 = lVar51 + _DAT_0240dfb0;
        lVar53 = lVar53 + _UNK_0240dfb8;
        uVar22 = uVar22 - 4;
      } while (uVar22 != 0);
      if (uVar20 == uVar21) goto LAB_015c560a;
    }
    do {
      fVar30 = (float)_logf((float)((int)lVar25 - iVar10) / fVar31 + DAT_02390124);
      *(float *)(lVar5 + lVar13 * -4 + lVar25 * 4) = fVar30 / DAT_0241c6f0;
      lVar25 = lVar25 + 1;
    } while (lVar26 != lVar25);
  }
LAB_015c560a:
  sVar11 = (size_t)plVar24;
  iVar10 = piVar4[2];
  if (iVar3 < iVar10) {
    fVar31 = (float)(iVar10 - iVar3);
    lVar25 = *(longlong *)(DAT_028ad730 + 0x10);
    uVar20 = iVar10 - lVar26;
    if (3 < uVar20) {
      uVar22 = uVar20 & 0xfffffffffffffffc;
      auVar52._0_4_ = _DAT_0238fcc0 + iVar3;
      auVar52._4_4_ = _UNK_0238fcc4 + iVar3;
      auVar52._8_4_ = _UNK_0238fcc8 + iVar3;
      auVar52._12_4_ = _UNK_0238fccc + iVar3;
      uVar21 = 0;
      do {
        iVar47 = auVar52._4_4_;
        iVar48 = auVar52._8_4_;
        iVar50 = auVar52._12_4_;
        auVar40._0_4_ = (float)(auVar52._0_4_ - iVar3);
        auVar40._4_4_ = (float)(iVar47 - iVar3);
        auVar40._8_4_ = (float)(iVar48 - iVar3);
        auVar40._12_4_ = (float)(iVar50 - iVar3);
        auVar9._4_4_ = fVar31;
        auVar9._0_4_ = fVar31;
        auVar9._8_4_ = fVar31;
        auVar9._12_4_ = fVar31;
        auVar35 = divps(auVar40,auVar9);
        fVar30 = auVar35._4_4_ + _UNK_023b2d54;
        auVar42._8_4_ = auVar35._8_4_ + _UNK_023b2d58;
        auVar42._12_4_ = auVar35._12_4_ + _UNK_023b2d5c;
        local_58._0_8_ = _logf();
        local_58._8_8_ = extraout_XMM0_Qb_03;
        auVar41._0_8_ = _logf();
        auVar41._8_8_ = extraout_XMM0_Qb_04;
        auVar35 = insertps(local_58,auVar41,0x10);
        auVar7._4_8_ = extraout_XMM0_Qb_04;
        auVar7._0_4_ = fVar30;
        auVar42._0_8_ = auVar7._0_8_ << 0x20;
        auVar43._0_8_ = _logf(auVar42._8_8_);
        auVar43._8_8_ = extraout_XMM0_Qb_05;
        auVar35 = insertps(auVar35,auVar43,0x20);
        auVar44._0_8_ = _logf();
        sVar11 = (size_t)plVar24;
        auVar44._8_8_ = extraout_XMM0_Qb_06;
        auVar35 = insertps(auVar35,auVar44,0x30);
        auVar35 = divps(auVar35,_DAT_024110b0);
        *(undefined1 (*) [16])(lVar25 + (lVar26 - lVar13) * 4 + uVar21 * 4) = auVar35;
        uVar21 = uVar21 + 4;
        auVar52._0_4_ = auVar52._0_4_ + _DAT_02394180;
        auVar52._4_4_ = iVar47 + _UNK_02394184;
        auVar52._8_4_ = iVar48 + _UNK_02394188;
        auVar52._12_4_ = iVar50 + _UNK_0239418c;
      } while (uVar22 != uVar21);
      lVar26 = uVar22 + lVar26;
      if (uVar20 == uVar22) goto LAB_015c57ca;
    }
    do {
      fVar30 = (float)_logf((float)((int)lVar26 - iVar3) / fVar31 + DAT_02390124);
      sVar11 = (size_t)plVar24;
      *(float *)(lVar25 + lVar13 * -4 + lVar26 * 4) = fVar30 / DAT_0241c6f0;
      lVar26 = lVar26 + 1;
    } while (iVar10 != lVar26);
  }
LAB_015c57ca:
  DAT_028ad709 = '\x01';
  FUN_00e8cb70();
LAB_015c57dd:
  lVar26 = *local_res8;
  iVar10 = *(int *)(lVar26 + 0x20);
  dVar1 = *(double *)(lVar26 + 0x18);
  pvVar17 = (void *)(ulonglong)*(uint *)(lVar26 + 0x24);
  *(uint *)(unaff_RDI + 0xc) = *(uint *)(lVar26 + 0x24);
  dVar2 = *(double *)(lVar26 + 0x50);
  if (((param_9 & 0x18) != 0) &&
     ((lVar26 = *local_res20, lVar26 == 0 ||
      ((*(longlong *)(lVar26 + 0x20) == 0 && (FUN_00e828a0(), *(longlong *)(lVar26 + 0x20) == 0)))))
     ) {
    FUN_00e828a0();
  }
  if (param_1 == '\0') {
    lVar26 = local_res18 - (int)((double)(iVar10 / 2) * dVar1 + DAT_023942d0);
    plVar24 = (longlong *)*param_3;
    pvVar12 = _pthread_getspecific((pthread_key_t)pvVar17);
    pVar18 = (pthread_key_t)pvVar17;
    if ((int)param_4 < 0) {
      if (pvVar12 != (void *)0x0) {
        plVar24 = (longlong *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar24 = (longlong *)plVar24[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      plVar23 = (longlong *)*param_3;
      pvVar17 = _pthread_getspecific(pVar18);
      if (pvVar17 != (void *)0x0) {
        plVar23 = (longlong *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar23 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      sVar11 = (**(code **)(*plVar23 + 0x3a0))();
      pvVar17 = (void *)0x0;
      (**(code **)(*plVar24 + 0x388))(DAT_0238fee8 / dVar1,&stack0xffffffffffffffa0,sVar11,lVar26);
    }
    else {
      if (pvVar12 != (void *)0x0) {
        plVar24 = (longlong *)*param_3;
        lVar13 = FUN_00e8b990();
        if (lVar13 != 0) {
          plVar24 = (longlong *)plVar24[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
        }
      }
      pvVar17 = (void *)(ulonglong)param_4;
      sVar11 = 1;
      (**(code **)(*plVar24 + 0x388))(DAT_0238fee8 / dVar1,&stack0xffffffffffffffa0,1,lVar26);
    }
  }
  if ((param_9 & 1) != 0) {
    param_2 = (undefined4 *)FUN_00e83010();
    *(undefined4 **)(unaff_RDI + 0x10) = param_2;
  }
  FUN_00e7d780();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  uVar33 = FUN_00c92160();
  (**(code **)(DAT_02786500 + 0x38))(uVar33,iVar10);
  pvVar12 = (void *)(longlong)((iVar10 / 2) * 4);
  _memcpy(pvVar17,pvVar12,sVar11);
  _memcpy(pvVar17,pvVar12,sVar11);
  _memcpy(pvVar17,pvVar12,sVar11);
  FUN_00e83530();
  if ((param_9 & 0xbe) != 0) {
    uVar33 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0x18) = uVar33;
    puVar14 = (undefined4 *)FUN_00e83010();
    *(undefined4 **)(unaff_RDI + 0x20) = puVar14;
    puVar16 = *(undefined4 **)(unaff_RDI + 0x18);
    *puVar16 = *param_2;
    *puVar14 = param_2[1];
    uVar28 = *(uint *)(unaff_RDI + 0xc);
    if (1 < (int)uVar28) {
      lVar26 = 0;
      do {
        puVar16[lVar26 + 1] =
             SQRT((float)param_2[lVar26 * 2 + 3] * (float)param_2[lVar26 * 2 + 3] +
                  (float)param_2[lVar26 * 2 + 2] * (float)param_2[lVar26 * 2 + 2]);
        uVar29 = _atan2f();
        puVar14[lVar26 + 1] = uVar29;
        lVar26 = lVar26 + 1;
      } while ((ulonglong)uVar28 - 1 != lVar26);
    }
  }
  if ((param_9 & 0x98) != 0) {
    fVar31 = *(float *)(*local_res8 + 0x2c);
    if (local_res10 == 0) {
      FUN_015c7140();
      local_res10 = *(longlong *)(local_40 + 0x10);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    uVar33 = FUN_00e83010();
    *(undefined8 *)(unaff_RDI + 0x28) = uVar33;
    lVar26 = *local_res20;
    lVar13 = *(longlong *)(lVar26 + 0x20);
    if (lVar13 == 0) {
      FUN_00e828a0();
      lVar13 = *(longlong *)(lVar26 + 0x20);
    }
    if ((char)param_9 < '\0') {
      puVar15 = (undefined8 *)FUN_00e83010();
      *(undefined8 **)(unaff_RDI + 0x48) = puVar15;
      *puVar15 = 0;
    }
    fVar30 = (float)dVar2;
    fVar31 = fVar31 * DAT_0239011c;
    **(undefined4 **)(unaff_RDI + 0x28) = 0;
    if (param_5 < 0) {
      if (1 < *(int *)(unaff_RDI + 0xc)) {
        lVar26 = 1;
        do {
          fVar32 = (float)FUN_015b4cf0((*(float *)(lVar13 + lVar26 * 4) -
                                       *(float *)(*(longlong *)(unaff_RDI + 0x20) + lVar26 * 4)) -
                                       *(float *)(local_res10 + lVar26 * 4));
          fVar32 = fVar32 * fVar31;
          if (*(longlong *)(unaff_RDI + 0x48) != 0) {
            *(float *)(*(longlong *)(unaff_RDI + 0x48) + 4 + lVar26 * 8) = fVar32;
          }
          fVar32 = (fVar32 + (float)(int)lVar26) * fVar30;
          uVar28 = -(uint)(DAT_0239424c < fVar32);
          *(uint *)(*(longlong *)(unaff_RDI + 0x28) + lVar26 * 4) =
               ~uVar28 & (uint)((float)(int)lVar26 * fVar30) | (uint)fVar32 & uVar28;
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(unaff_RDI + 0xc));
      }
    }
    else if (1 < *(int *)(unaff_RDI + 0xc)) {
      lVar26 = 1;
      do {
        fVar32 = (float)FUN_015b4cf0((*(float *)(*(longlong *)(unaff_RDI + 0x20) + lVar26 * 4) -
                                     *(float *)(lVar13 + lVar26 * 4)) -
                                     *(float *)(local_res10 + lVar26 * 4));
        fVar32 = fVar32 * fVar31;
        if (*(longlong *)(unaff_RDI + 0x48) != 0) {
          *(float *)(*(longlong *)(unaff_RDI + 0x48) + 4 + lVar26 * 8) = fVar32;
        }
        fVar32 = (fVar32 + (float)(int)lVar26) * fVar30;
        uVar28 = -(uint)(DAT_0239424c < fVar32);
        *(uint *)(*(longlong *)(unaff_RDI + 0x28) + lVar26 * 4) =
             ~uVar28 & (uint)((float)(int)lVar26 * fVar30) | (uint)fVar32 & uVar28;
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(unaff_RDI + 0xc));
    }
  }
  if ((param_9 & 0x10) != 0) {
    FUN_015c6350(*local_res8,param_8);
  }
  if ((param_9 & 0xa0) != 0) {
    if ((param_9 & 0x20) != 0) {
      puVar16 = (undefined4 *)FUN_00e83010();
      *(undefined4 **)(unaff_RDI + 0x38) = puVar16;
      *puVar16 = 0;
    }
    if (1 < *(int *)(unaff_RDI + 0xc)) {
      fVar31 = (float)dVar1 * (float)iVar10 * DAT_0239011c;
      lVar26 = 1;
      do {
        auVar45._0_8_ =
             FUN_015b4cf0(*(float *)(*(longlong *)(unaff_RDI + 0x20) + lVar26 * 4) -
                          *(float *)(*(longlong *)(unaff_RDI + 0x20) + -4 + lVar26 * 4));
        auVar45._8_8_ = extraout_XMM0_Qb_07;
        if (*(longlong *)(unaff_RDI + 0x48) != 0) {
          *(float *)(*(longlong *)(unaff_RDI + 0x48) + lVar26 * 8) = (float)auVar45._0_8_;
        }
        if (*(longlong *)(unaff_RDI + 0x38) != 0) {
          auVar46._4_12_ = auVar45._4_12_;
          auVar46._0_4_ = (float)auVar45._0_8_ * fVar31;
          iVar10 = FUN_00e7d780(auVar46._0_8_);
          *(int *)(*(longlong *)(unaff_RDI + 0x38) + lVar26 * 4) = -iVar10;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 < *(int *)(unaff_RDI + 0xc));
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x18) != 0) && ((param_9 & 2) == 0)) {
    FUN_00e83070();
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
  }
  if ((*(longlong *)(unaff_RDI + 0x20) != 0) && ((param_9 & 4) == 0)) {
    FUN_00e83070();
    *(undefined8 *)(unaff_RDI + 0x20) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


