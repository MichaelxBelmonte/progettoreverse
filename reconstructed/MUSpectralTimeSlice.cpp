// Reconstructed implementation of MUSpectralTimeSlice
// From MikeCore binary — reverse-engineered pseudocode

#include "MUSpectralTimeSlice.h"

// ============================================================
// @015c4e40 — 4396 bytes
// str: ""MUSpectralTimeSlice::initFromTimeSignal(): incomplete parameters!""
// str: ""MUSpectralTimeSlice::initFromTimeSignal(): no valid neighbourTimeSlice for trueFreqs!""
// str: ""MUSpectralTimeSlice::getPhaseData(): no phase data""
// ============================================================

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




// ============================================================
// @015cabc0 — 3309 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cabc0(void)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar10;
  int *in_R9;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong local_80;
  longlong local_78;
  longlong *local_58;
  longlong local_50;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  
  lVar5 = local_50;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x68) + 0xc) == 0) {
    if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) == 0) {
      return;
    }
LAB_015cac1e:
    FUN_00c8e690();
    if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    bVar14 = local_50 != 0;
    lVar12 = local_50;
  }
  else {
    if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0) goto LAB_015cac1e;
    bVar14 = false;
    lVar12 = 0;
  }
  local_58 = (longlong *)(unaff_RDI + 0x60);
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    bVar15 = false;
    local_80 = 0;
  }
  else {
    FUN_00c8e690();
    if (((local_48[0] == '\0') && (local_50 != 0)) &&
       ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_80 = local_50;
    bVar15 = local_50 != 0;
  }
  fVar19 = DAT_02394214;
  lVar11 = *local_58;
  uVar10 = *(uint *)(lVar11 + 0xc);
  fVar17 = DAT_02394214;
  if (2 < (int)uVar10) {
    FUN_00d242c0(DAT_02394214,0);
    iVar2 = *(int *)(*local_58 + 0xc);
    uVar21 = iVar2 - 1;
    if (1 < iVar2) {
      lVar11 = *(longlong *)(*local_58 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 0x10);
      if (uVar21 == 1) {
        uVar7 = 0;
      }
      else {
        uVar10 = uVar21 & 0xfffffffe;
        uVar8 = 0;
        do {
          *(float *)(lVar9 + uVar8 * 4) =
               (float)(*(double *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x10) -
                      *(double *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x10));
          uVar7 = uVar8 + 2;
          *(float *)(lVar9 + 4 + uVar8 * 4) =
               (float)(*(double *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x10) -
                      *(double *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x10));
          uVar8 = uVar7;
        } while (uVar10 != uVar7);
      }
      in_R9 = (int *)(ulonglong)uVar21;
      if ((uVar21 & 1) != 0) {
        *(float *)(lVar9 + uVar7 * 4) =
             (float)(*(double *)(*(longlong *)(lVar11 + 8 + uVar7 * 8) + 0x10) -
                    *(double *)(*(longlong *)(lVar11 + uVar7 * 8) + 0x10));
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    lVar11 = *local_58;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(longlong *)(lVar12 + 0x10) +
                       (longlong)(int)((double)(int)(uVar10 - 1) * DAT_023942d0) * 4);
  }
  fVar20 = DAT_02390124;
  if (fVar17 <= DAT_02390124) {
    fVar20 = fVar17;
  }
  local_40 = CONCAT44(local_40._4_4_,fVar20);
  fVar17 = DAT_02394244 * fVar20;
  if (DAT_02394244 * fVar20 <= DAT_02411260) {
    fVar17 = DAT_02411260;
  }
  *(float *)(unaff_RDI + 0x90) = fVar17;
  if (uVar10 != 0) {
    if (0 < (int)uVar10) {
      lVar11 = *(longlong *)(lVar11 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 0x10);
      if ((ulonglong)uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 4 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 8 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 0xc + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffffffc) != uVar8);
      }
      if ((ulonglong)(uVar10 & 3) != 0) {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while ((uVar10 & 3) != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    uVar21 = *(uint *)(*local_58 + 0xc);
    fVar17 = *(float *)(*(longlong *)(lVar12 + 0x10) +
                       (longlong)(int)((double)(int)uVar21 * DAT_023b1e88) * 4);
    if ((DAT_02394274 <= fVar17) && (0 < (int)uVar21)) {
      fVar17 = DAT_02390124 / fVar17;
      lVar11 = *(longlong *)(*local_58 + 0x10);
      if (uVar21 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar9 = *(longlong *)(lVar11 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (DAT_02390124 < fVar20) {
            *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          lVar9 = *(longlong *)(lVar11 + 8 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (DAT_02390124 < fVar20) {
            *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar21 & 0xfffffffe) != uVar8);
      }
      if (((uVar21 & 1) != 0) &&
         (lVar11 = *(longlong *)(lVar11 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar11 + 0x20),
         *(float *)(lVar11 + 0x20) = fVar17, DAT_02390124 < fVar17)) {
        *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
             0x3f800000;
      }
    }
  }
  lVar11 = *unaff_RSI;
  uVar21 = *(uint *)(lVar11 + 0xc);
  if ((ulonglong)uVar21 != 0) {
    if (0 < (int)uVar21) {
      lVar11 = *(longlong *)(lVar11 + 0x10);
      lVar9 = *(longlong *)(local_80 + 0x10);
      uVar10 = uVar21 & 3;
      if ((ulonglong)uVar21 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 4 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 8 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 0xc + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar21 & 0xfffffffc) != uVar8);
      }
      if ((ulonglong)uVar10 != 0) {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    fVar20 = DAT_02391094;
    lVar11 = *unaff_RSI;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(longlong *)(local_80 + 0x10) +
                       (longlong)(int)((double)(int)uVar10 * DAT_023b1e88) * 4);
    if ((DAT_02394274 <= fVar17) && (0 < (int)uVar10)) {
      fVar17 = (DAT_02390124 / fVar17) * DAT_02391094;
      lVar9 = *(longlong *)(lVar11 + 0x10);
      if (uVar10 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar13 = *(longlong *)(lVar9 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *unaff_RSI;
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          lVar13 = *(longlong *)(lVar9 + 8 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *unaff_RSI;
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar10 & 0xfffffffe) != uVar8);
      }
      if (((uVar10 & 1) != 0) &&
         (lVar9 = *(longlong *)(lVar9 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar9 + 0x20),
         *(float *)(lVar9 + 0x20) = fVar17, DAT_02391094 < fVar17)) {
        lVar11 = *unaff_RSI;
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) = 0x3e4ccccd
        ;
      }
    }
  }
  if ((*(int *)(*local_58 + 0xc) == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
    local_48[0] = '\0';
    fVar17 = (float)FUN_00d214d0();
    if ((local_48[0] != '\0') && (lVar11 != 0)) {
      fVar17 = (float)FUN_00d50b20();
    }
    goto LAB_015cb6cd;
  }
  uVar18 = FUN_00d242c0(local_58,0);
  FUN_00d242c0(uVar18,0);
  lVar11 = *local_58;
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  FUN_015f3b60();
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  local_78 = **(longlong **)(*unaff_RSI + 0x10);
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  lVar11 = **(longlong **)(*local_58 + 0x10);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  if (*(double *)(local_78 + 0x10) <= *(double *)(lVar11 + 0x10) &&
      *(double *)(lVar11 + 0x10) != *(double *)(local_78 + 0x10)) {
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23620();
    local_50 = local_78;
  }
  if ((float)local_40 * DAT_02390120 <= fVar19) {
    fVar19 = (float)local_40 * DAT_02390120;
  }
  if (*(int *)(*unaff_RSI + 0xc) != 0) {
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == local_78) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_78 = local_50;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_78 = local_50;
    }
    FUN_00d23340();
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == lVar11) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar11 = local_50;
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if ((double)fVar19 + *(double *)(lVar11 + 0x10) < *(double *)(local_78 + 0x10)) {
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
  }
  lVar9 = *unaff_RSI;
  if (*(int *)(lVar9 + 0xc) < 1) {
LAB_015cb6ab:
    fVar17 = (float)FUN_00d50b20();
  }
  else {
    lVar13 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar13 * 8);
      if (local_78 == lVar9) {
LAB_015cb5a9:
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = DAT_02394264;
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
          local_78 = lVar9;
          goto LAB_015cb5a9;
        }
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = DAT_02394264;
        local_78 = lVar9;
      }
      DAT_02394264 = fVar17;
      if (0 < iVar2) {
        lVar9 = 0;
        local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,fVar17);
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
          if (lVar11 != lVar3) {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            bVar16 = lVar11 != 0;
            lVar11 = lVar3;
            if (bVar16) {
              FUN_00d50b20();
            }
          }
          fVar17 = (float)((uint)(float)(*(double *)(local_78 + 0x10) - *(double *)(lVar11 + 0x10))
                          & _DAT_02390140);
          if ((float)local_40 <= fVar17) {
            fVar17 = (float)local_40;
          }
          lVar9 = lVar9 + 1;
          local_40 = CONCAT44(local_40._4_4_,fVar17);
        } while (lVar9 < *(int *)(lVar5 + 0xc));
      }
      if (fVar19 < fVar17) {
        local_48[0] = '\0';
        fVar17 = (float)FUN_00d21140();
        if ((local_48[0] != '\0') && (local_78 != 0)) {
          fVar17 = (float)FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar9 = *unaff_RSI;
    } while (lVar13 < *(int *)(lVar9 + 0xc));
    if (lVar11 != 0) goto LAB_015cb6ab;
  }
  if (local_78 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
  if (lVar5 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
LAB_015cb6cd:
  lVar5 = *(longlong *)(unaff_RDI + 0x68);
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar18 = SUB84(DAT_024110e8,0);
      uVar22 = (undefined4)((ulonglong)DAT_024110e8 >> 0x20);
      dVar1 = *(double *)(lVar5 + 0x18);
      if (dVar1 <= DAT_024110e8) {
        uVar18 = SUB84(dVar1,0);
        uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      uVar24 = SUB84(DAT_02391030,0);
      uVar25 = (int)((ulonglong)DAT_02391030 >> 0x20);
      if (DAT_02391030 <= (double)CONCAT44(uVar22,uVar18)) {
        uVar24 = uVar18;
        uVar25 = uVar22;
      }
      local_40 = *(undefined8 *)(lVar5 + 0x10);
      uVar10 = -(uint)((float)(double)CONCAT44(uVar25,uVar24) <= DAT_02394270);
      fVar19 = (float)_exp2f(*(float *)(lVar5 + 0x24) * DAT_023941f4);
      fVar19 = fVar19 * DAT_023941f8;
      fVar17 = DAT_02394254;
      if (DAT_02394254 <= *(float *)(lVar5 + 0x28)) {
        fVar17 = *(float *)(lVar5 + 0x28);
      }
      fVar20 = (float)_powf(fVar17,DAT_02394288);
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025f30f8;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
      FUN_00d500e0();
      uVar21 = (uint)SQRT((float)(double)CONCAT44(uVar25,uVar24)) & _DAT_02390140;
      uVar26 = uVar10 & DAT_023b3e04;
      fVar19 = DAT_02411264 / fVar19;
      fVar17 = DAT_02394254;
      if (DAT_02394254 <= fVar19) {
        fVar17 = fVar19;
      }
      fVar17 = (float)((uint)SQRT(fVar17) & _DAT_02390140);
      puVar6[2] = local_40;
      *(float *)(puVar6 + 4) = fVar20 * fVar17 * (float)(uVar26 | ~uVar10 & uVar21);
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      fVar17 = (float)FUN_00d50b20();
      lVar11 = lVar11 + 1;
      lVar5 = *(longlong *)(unaff_RDI + 0x68);
    } while (lVar11 < *(int *)(lVar5 + 0xc));
  }
  FUN_00d242c0(fVar17,0);
  if ((bVar15) && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @015c9ee0 — 2350 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015ca5e6) */
/* WARNING: Removing unreachable block (ram,0x015ca5ef) */
/* WARNING: Removing unreachable block (ram,0x015ca720) */
/* WARNING: Removing unreachable block (ram,0x015ca729) */
/* WARNING: Removing unreachable block (ram,0x015ca004) */
/* WARNING: Removing unreachable block (ram,0x015ca00d) */
/* WARNING: Removing unreachable block (ram,0x015ca1db) */
/* WARNING: Removing unreachable block (ram,0x015ca1e4) */
/* WARNING: Removing unreachable block (ram,0x015ca2c7) */
/* WARNING: Removing unreachable block (ram,0x015ca2d0) */
/* WARNING: Removing unreachable block (ram,0x015ca7bf) */
/* WARNING: Removing unreachable block (ram,0x015ca7c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c9ee0(void)

{
  uint *puVar1;
  undefined8 uVar2;
  pthread_key_t pVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  void *pvVar12;
  longlong lVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  undefined *puVar16;
  longlong *unaff_RSI;
  ulonglong uVar17;
  longlong unaff_RDI;
  longlong lVar18;
  undefined4 uVar19;
  longlong local_88;
  char local_80;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_48;
  char local_40;
  
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &DAT_02572358;
  *puVar10 = &DAT_02572358;
  (*DAT_02572370)();
  lVar11 = *unaff_RSI;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar18 = 0;
    do {
      pVar15 = (pthread_key_t)puVar16;
      lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar18 * 8);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_015ca020;
        }
LAB_015ca0b0:
        bVar8 = true;
        bVar6 = false;
        local_60 = (undefined8 *)0x0;
        bVar7 = false;
        local_58 = (undefined8 *)0x0;
LAB_015ca40f:
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_01259650();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012646c0();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_0125a2c0();
        local_64 = DAT_02390124;
        if (local_60 != (undefined8 *)0x0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_64 = FUN_014ecb20();
        }
        puVar14 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &DAT_025f30f8;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
        FUN_00d500e0();
        puVar14[2] = dVar4;
        *(undefined4 *)(puVar14 + 4) = local_64;
        *(undefined4 *)(puVar14 + 5) = local_64;
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar19;
        puVar14[3] = dVar5 - dVar4;
        FUN_00d21140();
        if (local_58 == (undefined8 *)0x0) {
          uVar2 = puVar14[2];
          uVar19 = *(undefined4 *)(puVar14 + 4);
          local_48 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &DAT_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
          *(undefined8 *)((longlong)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = uVar2;
          *(undefined4 *)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7da:
          FUN_00d50b20();
        }
        else {
          lVar13 = *(longlong *)(unaff_RDI + 0x60);
          puVar1 = (uint *)(lVar13 + 0xc);
          if (0 < (int)*puVar1) {
            lVar13 = *(longlong *)(lVar13 + 0x10);
            uVar17 = 0;
            do {
              local_48 = puVar14;
              if ((double)((ulonglong)
                           (*(double *)(*(longlong *)(lVar13 + uVar17 * 8) + 0x10) - dVar4) &
                          _DAT_023908f0) < DAT_02391030) goto LAB_015ca7d5;
              uVar17 = uVar17 + 1;
            } while (*puVar1 != uVar17);
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_48 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &DAT_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(undefined8 *)((longlong)local_48 + 0x1c) = 0;
          *(undefined8 *)((longlong)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = dVar4;
          *(undefined4 *)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7d5:
          if (puVar14 != (undefined8 *)0x0) goto LAB_015ca7da;
        }
        local_40 = '\0';
        if ((bVar6) && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar7) && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar8) goto LAB_015ca817;
      }
      else {
        if (local_48 == (undefined8 *)0x0) goto LAB_015ca0b0;
LAB_015ca020:
        pvVar12 = _pthread_getspecific(pVar15);
        pVar3 = (pthread_key_t)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = pVar3;
        }
        FUN_013dfcb0();
        if (local_48 == (undefined8 *)0x0) {
          cVar9 = '\0';
        }
        else {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013de560();
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar9 = FUN_014bc070();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar9 == '\0') {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_60 = local_48;
          puVar14 = local_48;
          if (local_48 == (undefined8 *)0x0) {
            local_60 = (undefined8 *)0x0;
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
            }
          }
          pvVar12 = _pthread_getspecific((pthread_key_t)puVar14);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            puVar14 = local_48;
          }
          FUN_013dfdd0();
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (undefined8 *)0x0) {
            bVar7 = false;
            local_58 = (undefined8 *)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((pthread_key_t)puVar14);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_58 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              local_58 = (undefined8 *)0x0;
              bVar7 = false;
              puVar14 = local_48;
            }
            else {
              bVar7 = true;
              puVar14 = local_48;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pVar15 = (pthread_key_t)puVar14;
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013df480();
          if (local_48 == (undefined8 *)0x0) {
            cVar9 = '\0';
          }
          else {
            pvVar12 = _pthread_getspecific(pVar15);
            if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar15 = pVar3;
            }
            FUN_013df480();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar9 = FUN_013c8ce0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            *(undefined1 *)(unaff_RDI + 0x94) = 1;
          }
          bVar8 = false;
          goto LAB_015ca40f;
        }
LAB_015ca817:
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      lVar18 = lVar18 + 1;
      lVar11 = *unaff_RSI;
      puVar16 = (undefined *)(longlong)*(int *)(lVar11 + 0xc);
    } while (lVar18 < (longlong)puVar16);
  }
  FUN_015cabc0();
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @011aa9e0 — 2213 bytes
// str: ""MUSpectralTimeSlice""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011aa9e0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025f1488;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab2c0();
    FUN_00e87980();
  }
  unaff_RDI[2] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab430();
    FUN_00e87980();
  }
  unaff_RDI[3] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab5a0();
    FUN_00e87980();
  }
  unaff_RDI[4] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab710();
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab880();
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011ab9f0();
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abb60();
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abcd0();
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abe40();
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  if (DAT_027b0c58 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027b0ba8 = FUN_00d4fe50();
      _DAT_027b0b90 = "MUSpectralTimeSlice";
      _DAT_027b0b98 = 0x58;
      _DAT_027b0ba0 = FUN_011aa990;
      _DAT_027b0bb0 = 0;
      uRam00000000027b0bb8 = 0;
      _DAT_027b0bc0 = 0;
      uRam00000000027b0bc8 = 0;
      _DAT_027b0bd0 = 0;
      uRam00000000027b0bd8 = 0;
      _DAT_027b0be0 = 0;
      uRam00000000027b0be8 = 0;
      _DAT_027b0bf0 = 0;
      uRam00000000027b0bf8 = 0;
      _DAT_027b0c00 = 0;
      uRam00000000027b0c08 = 0;
      _DAT_027b0c10 = 0;
      uRam00000000027b0c18 = 0;
      _DAT_027b0c20 = 0;
      uRam00000000027b0c28 = 0;
      _DAT_027b0c30 = 0;
      uRam00000000027b0c38 = 0;
      _DAT_027b0c40 = 0;
      _uRam00000000027b0c48 = 0;
      _DAT_027b0c50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027b0c4b == '\0') {
    FUN_011abfb0();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @015cbd00 — 2110 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015cc2d9) */
/* WARNING: Removing unreachable block (ram,0x015cc2e2) */
/* WARNING: Removing unreachable block (ram,0x015cc470) */
/* WARNING: Removing unreachable block (ram,0x015cc479) */
/* WARNING: Removing unreachable block (ram,0x015cc042) */
/* WARNING: Removing unreachable block (ram,0x015cc04b) */
/* WARNING: Removing unreachable block (ram,0x015cc111) */
/* WARNING: Removing unreachable block (ram,0x015cc11a) */
/* WARNING: Removing unreachable block (ram,0x015cc3db) */
/* WARNING: Removing unreachable block (ram,0x015cc3e4) */
/* WARNING: Removing unreachable block (ram,0x015cc30d) */
/* WARNING: Removing unreachable block (ram,0x015cc316) */
/* WARNING: Removing unreachable block (ram,0x015cc4a5) */
/* WARNING: Removing unreachable block (ram,0x015cc4ae) */

void FUN_015cbd00(longlong *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  void *pvVar10;
  longlong lVar11;
  undefined8 *puVar12;
  pthread_key_t pVar13;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong local_98;
  char local_90;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar4)();
  lVar9 = *unaff_RSI;
  if (0 < *(int *)(lVar9 + 0xc)) {
    lVar15 = 0;
    do {
      plVar5 = local_40;
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar15 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_014bc070();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          if (local_40 == (longlong *)0x0) {
            cVar6 = '\0';
          }
          else {
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar6 = FUN_013c8ce0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            *(undefined1 *)(unaff_RDI + 0x94) = 1;
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            bVar3 = false;
            local_50 = (longlong *)0x0;
          }
          else {
            pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_50 = local_40;
            if (local_40 == (longlong *)0x0) {
              local_50 = (longlong *)0x0;
              bVar3 = false;
              param_1 = local_40;
            }
            else {
              bVar3 = true;
              param_1 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar1 = (double)FUN_014bb640();
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar2 = (double)FUN_014bb710();
          pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
          plVar14 = local_40;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
            plVar14 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          pVar13 = (pthread_key_t)param_1;
          uVar16 = (**(code **)(*plVar14 + 0x3e0))();
          pvVar10 = _pthread_getspecific(pVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar13 = (pthread_key_t)local_40;
          }
          uVar17 = FUN_014ecb20();
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &DAT_025f30f8;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
          FUN_00d500e0();
          puVar12[2] = dVar1;
          *(undefined4 *)(puVar12 + 4) = uVar17;
          *(undefined4 *)(puVar12 + 5) = uVar17;
          *(undefined4 *)((longlong)puVar12 + 0x24) = uVar16;
          puVar12[3] = dVar2 - dVar1;
          FUN_00d21140();
          if (local_50 == (longlong *)0x0) {
            lVar11 = puVar12[2];
            uVar16 = *(undefined4 *)(puVar12 + 4);
            local_40 = (longlong *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = (longlong)&DAT_025f30f8;
            local_40[2] = 0;
            local_40[3] = 0;
            *(undefined8 *)((longlong)local_40 + 0x1c) = 0;
            *(undefined8 *)((longlong)local_40 + 0x24) = 0;
            FUN_00d500e0();
            local_40[2] = lVar11;
            *(undefined4 *)(local_40 + 4) = uVar16;
            FUN_00d21140();
            FUN_00d50b20();
          }
          else {
            local_40 = local_50;
            cVar6 = FUN_00d23d70();
            if (cVar6 == '\0') {
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_014bae60();
              puVar12 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &DAT_025f30f8;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *(undefined8 *)((longlong)puVar12 + 0x1c) = 0;
              *(undefined8 *)((longlong)puVar12 + 0x24) = 0;
              FUN_00d500e0();
              puVar12[2] = dVar1;
              *(undefined4 *)(puVar12 + 4) = uVar16;
              FUN_00d21140();
              FUN_00d50b20();
              FUN_00d21140();
            }
          }
          local_38 = '\0';
          FUN_00d50b20();
          if ((bVar3) && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      lVar9 = *unaff_RSI;
      param_1 = (longlong *)(longlong)*(int *)(lVar9 + 0xc);
    } while (lVar15 < (longlong)param_1);
  }
  FUN_015cabc0();
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @015cc880 — 1395 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015ccdec) */
/* WARNING: Removing unreachable block (ram,0x015ccba6) */
/* WARNING: Removing unreachable block (ram,0x015ccbaf) */
/* WARNING: Removing unreachable block (ram,0x015ccdcc) */
/* WARNING: Removing unreachable block (ram,0x015ccdd5) */
/* WARNING: Removing unreachable block (ram,0x015ccbf0) */
/* WARNING: Removing unreachable block (ram,0x015ccbf9) */
/* WARNING: Removing unreachable block (ram,0x015cccd4) */
/* WARNING: Removing unreachable block (ram,0x015cccdd) */
/* WARNING: Removing unreachable block (ram,0x015ccd09) */
/* WARNING: Removing unreachable block (ram,0x015ccd12) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cc880(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  longlong *unaff_RSI;
  longlong *plVar16;
  longlong lVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  pcVar6 = DAT_02572370;
  (*DAT_02572370)();
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*pcVar6)();
  lVar11 = *unaff_RSI;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar17 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar11 + 0x10) + lVar17 * 8);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar10 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
        lVar11 = plVar2[0x28];
      }
      else {
        lVar11 = *(longlong *)(plVar2[(ulonglong)(*(uint *)(lVar11 + 0x154) & 1) + 4] + 0x140);
      }
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_014bb640();
      pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014ecc50();
      if (fVar18 <= _DAT_02411268) {
        if (lVar11 != 0) {
          puVar13 = (undefined8 *)0x0;
          goto LAB_015ccbc1;
        }
      }
      else {
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_014bb710();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        plVar16 = plVar2;
        if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar16 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar16 + 0x3e0))();
        pvVar10 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_014ecb20();
        puVar13 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &DAT_025f30f8;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *(undefined8 *)((longlong)puVar13 + 0x1c) = 0;
        *(undefined8 *)((longlong)puVar13 + 0x24) = 0;
        FUN_00d500e0();
        puVar13[2] = dVar3;
        *(undefined4 *)(puVar13 + 4) = uVar20;
        *(undefined4 *)(puVar13 + 5) = uVar20;
        *(undefined4 *)((longlong)puVar13 + 0x24) = uVar19;
        puVar13[3] = dVar4 - dVar3;
        FUN_00d21140();
        if (lVar11 == 0) {
          uVar1 = puVar13[2];
          uVar19 = *(undefined4 *)(puVar13 + 4);
          puVar14 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &DAT_025f30f8;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
          FUN_00d500e0();
          puVar14[2] = uVar1;
          *(undefined4 *)(puVar14 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ccd24:
          if (puVar13 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_015ccbc1:
          bVar5 = fVar18 <= _DAT_02411268;
          pVar15 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar5);
          cVar7 = FUN_00d23d70();
          if (cVar7 == '\0') {
            pvVar10 = _pthread_getspecific(pVar15);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_014bae60();
            puVar14 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = &DAT_025f30f8;
            puVar14[2] = 0;
            puVar14[3] = 0;
            *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
            *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
            FUN_00d500e0();
            puVar14[2] = dVar3;
            *(undefined4 *)(puVar14 + 4) = uVar19;
            FUN_00d21140();
            FUN_00d50b20();
            FUN_00d21140();
          }
          if (!bVar5) goto LAB_015ccd24;
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar11 = *unaff_RSI;
      param_1 = (longlong)*(int *)(lVar11 + 0xc);
    } while (lVar17 < param_1);
  }
  FUN_015cabc0();
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @015c6700 — 1118 bytes
// str: ""MUSpectralTimeSlice::takeDataFromTimeSlice(): inconsistent data""
// str: ""MUSpectralTimeSlice::getComplexSpectrum(): no complexSpectrum data""
// str: ""MUSpectralTimeSlice::getMagnitudeData(): no magnitude data""
// str: ""MUSpectralTimeSlice::getPhaseData(): no phase data""
// str: ""MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data""
// ============================================================

/* WARNING: Type propagation algorithm not settling */

void FUN_015c6700(void *param_1,byte param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) != *(int *)(unaff_RDI + 0xc))) {
    FUN_00e828a0();
  }
  if ((param_2 & 1) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x10) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x10) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 3),param_3);
  }
  if ((param_2 & 2) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x18) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x18);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x18);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x18) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 4) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x20) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x20) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 8) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x28) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x28) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x10) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x30) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x30);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x30);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x30) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x20) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x38) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x38);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x38);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x38) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((param_2 & 0x40) != 0) {
    if (*(longlong *)(*unaff_RSI + 0x40) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x40);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x40) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 2),param_3);
  }
  if ((char)param_2 < '\0') {
    if (*(longlong *)(*unaff_RSI + 0x48) == 0) {
      FUN_00e828a0();
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
    }
    if (lVar1 == 0) {
      uVar2 = FUN_00e83010();
      *(undefined8 *)(unaff_RDI + 0x48) = uVar2;
    }
    _memcpy(param_1,(void *)((longlong)*(int *)(unaff_RDI + 0xc) << 3),param_3);
    return;
  }
  return;
}




// ============================================================
// @015c6350 — 864 bytes
// str: ""MUSpectralTimeSlice::getTrueFreqData(): no trueFreq data""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c6350(undefined8 param_1,char param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *unaff_RSI;
  int iVar14;
  longlong unaff_RDI;
  ulonglong uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (*(longlong *)(unaff_RDI + 0x28) == 0) {
    FUN_00e828a0();
    lVar7 = *(longlong *)(unaff_RDI + 0x30);
  }
  else {
    lVar7 = *(longlong *)(unaff_RDI + 0x30);
  }
  if (lVar7 != 0) {
    FUN_00e83070();
    *(undefined8 *)(unaff_RDI + 0x30) = 0;
  }
  uVar6 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x30) = uVar6;
  if (param_2 == '\0') {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_015c7920();
  }
  fVar19 = DAT_02394250;
  uVar5 = _DAT_02390140;
  iVar3 = *(int *)(*unaff_RSI + 0x58);
  uVar4 = *(uint *)(unaff_RDI + 0xc);
  lVar17 = (longlong)(int)uVar4;
  if (lVar17 < 6) {
    puVar16 = *(undefined4 **)(unaff_RDI + 0x30);
  }
  else {
    fVar21 = (float)*(double *)(*unaff_RSI + 0x50);
    fVar20 = DAT_02390124 / fVar21;
    lVar9 = *(longlong *)(unaff_RDI + 0x28);
    puVar16 = *(undefined4 **)(unaff_RDI + 0x30);
    lVar11 = 1;
    uVar10 = 3;
    do {
      uVar13 = (int)uVar10 + 3;
      if ((int)uVar4 <= (int)uVar13) {
        uVar13 = uVar4 - 1;
      }
      if ((longlong)(uVar10 - 2) < (longlong)(int)uVar13) {
        fVar1 = *(float *)(lVar9 + uVar10 * 4);
        uVar15 = (ulonglong)uVar13;
        fVar22 = (float)((uint)(fVar1 - *(float *)(lVar9 + lVar11 * 4)) & uVar5);
        fVar22 = (float)(-(uint)(fVar22 < fVar21) & (uint)((fVar21 - fVar22) * fVar20 + 0.0));
        if (((lVar11 + 1U != uVar15) &&
            (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + lVar11 * 4)) & uVar5),
            uVar18 = -(uint)(fVar23 < fVar21),
            fVar22 = (float)(~uVar18 & (uint)fVar22 |
                            (uint)(fVar22 + (fVar21 - fVar23) * fVar20) & uVar18),
            lVar11 + 2U != uVar15)) && (uVar12 = lVar11 + 3, uVar12 != uVar15)) {
          if (((uVar13 - (int)lVar11) + 1 & 1) != 0) {
            if ((uVar12 != uVar10) &&
               (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 0xc + lVar11 * 4)) & uVar5),
               fVar23 < fVar21)) {
              fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
            }
            uVar12 = lVar11 + 4;
          }
          if (uVar15 - 4 != lVar11) {
            do {
              if ((uVar10 != uVar12) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              if ((uVar12 + 1 != uVar10) &&
                 (fVar23 = (float)((uint)(fVar1 - *(float *)(lVar9 + 4 + uVar12 * 4)) & uVar5),
                 fVar23 < fVar21)) {
                fVar22 = fVar22 + (fVar21 - fVar23) * fVar20;
              }
              uVar12 = uVar12 + 2;
            } while (uVar12 != uVar15);
          }
        }
      }
      else {
        fVar22 = 0.0;
      }
      lVar11 = lVar11 + 1;
      puVar16[uVar10] = fVar22 * fVar19;
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4 - 2);
  }
  uVar2 = puVar16[3];
  *puVar16 = uVar2;
  puVar16[1] = uVar2;
  puVar16[2] = uVar2;
  lVar9 = (longlong)(int)(uVar4 - 2);
  puVar16[lVar9] = puVar16[lVar17 + -3];
  if (lVar9 + 1 < lVar17) {
    puVar16[lVar9 + 1] = puVar16[lVar17 + -3];
  }
  if ((param_2 != '\0') && (0 < (int)uVar4)) {
    fVar19 = (float)iVar3;
    iVar8 = iVar3 + -1;
    if (uVar4 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      do {
        iVar14 = (int)((float)puVar16[uVar10] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        iVar14 = (int)((float)puVar16[uVar10 + 1] * fVar19);
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        if (iVar3 <= iVar14) {
          iVar14 = iVar8;
        }
        puVar16[uVar10 + 1] = *(undefined4 *)(lVar7 + (longlong)iVar14 * 4);
        uVar10 = uVar10 + 2;
      } while ((uVar4 & 0xfffffffe) != uVar10);
    }
    if ((uVar4 & 1) != 0) {
      iVar14 = 0;
      if (-1 < (int)(fVar19 * (float)puVar16[uVar10])) {
        iVar14 = (int)(fVar19 * (float)puVar16[uVar10]);
      }
      if (iVar14 < iVar3) {
        iVar8 = iVar14;
      }
      puVar16[uVar10] = *(undefined4 *)(lVar7 + (longlong)iVar8 * 4);
    }
  }
  return;
}




// ============================================================
// @015c73a0 — 683 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015c7649) */
/* WARNING: Removing unreachable block (ram,0x015c73ec) */
/* WARNING: Removing unreachable block (ram,0x015c73f5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c73a0(void)

{
  float *pfVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong unaff_RSI;
  longlong lVar20;
  longlong *unaff_RDI;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  longlong local_30;
  char local_28;
  
  lVar22 = *(longlong *)(unaff_RSI + 0x70);
  if (lVar22 != 0) goto LAB_015c760e;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar22 = *(longlong *)(unaff_RSI + 0x70);
  if (lVar22 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RSI + 0x70) = local_30;
    if (lVar22 != 0) {
      FUN_00d50b20();
    }
  }
  iVar17 = _UNK_023de2dc;
  iVar16 = _UNK_023de2d8;
  iVar15 = _UNK_023de2d4;
  iVar14 = _DAT_023de2d0;
  iVar13 = _UNK_023de2cc;
  iVar12 = _UNK_023de2c8;
  iVar11 = _UNK_023de2c4;
  iVar10 = _DAT_023de2c0;
  iVar9 = _UNK_023de2bc;
  iVar8 = _UNK_023de2b8;
  iVar7 = _UNK_023de2b4;
  iVar6 = _DAT_023de2b0;
  iVar26 = _UNK_0239418c;
  iVar25 = _UNK_02394188;
  iVar24 = _UNK_02394184;
  iVar23 = _DAT_02394180;
  uVar4 = *(uint *)(unaff_RSI + 0x24);
  if ((int)uVar4 < 1) {
    lVar22 = *(longlong *)(unaff_RSI + 0x70);
    goto LAB_015c760e;
  }
  dVar3 = *(double *)(unaff_RSI + 0x50);
  lVar22 = *(longlong *)(unaff_RSI + 0x70);
  lVar5 = *(longlong *)(lVar22 + 0x10);
  if (uVar4 < 8) {
    uVar18 = 0;
  }
  else {
    uVar18 = (ulonglong)(uVar4 & 0xfffffff8);
    uVar19 = (uVar18 - 8 >> 3) + 1;
    iVar27 = _DAT_0238fcc0;
    iVar28 = _UNK_0238fcc4;
    iVar29 = _UNK_0238fcc8;
    iVar30 = _UNK_0238fccc;
    if (uVar18 - 8 == 0) {
      lVar20 = 0;
LAB_015c758e:
      iVar23 = _DAT_02394180 + iVar27;
      iVar24 = _UNK_02394184 + iVar28;
      iVar25 = _UNK_02394188 + iVar29;
      iVar26 = _UNK_0239418c + iVar30;
      pfVar1 = (float *)(lVar5 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar27 * dVar3);
      pfVar1[1] = (float)((double)iVar28 * dVar3);
      pfVar1[2] = (float)((double)iVar29 * dVar3);
      pfVar1[3] = (float)((double)iVar30 * dVar3);
      pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
      *pfVar1 = (float)((double)iVar23 * dVar3);
      pfVar1[1] = (float)((double)iVar24 * dVar3);
      pfVar1[2] = (float)((double)iVar25 * dVar3);
      pfVar1[3] = (float)((double)iVar26 * dVar3);
    }
    else {
      lVar21 = -(uVar19 & 0xfffffffffffffffe);
      lVar20 = 0;
      do {
        pfVar1 = (float *)(lVar5 + lVar20 * 4);
        *pfVar1 = (float)((double)iVar27 * dVar3);
        pfVar1[1] = (float)((double)iVar28 * dVar3);
        pfVar1[2] = (float)((double)iVar29 * dVar3);
        pfVar1[3] = (float)((double)iVar30 * dVar3);
        pfVar1 = (float *)(lVar5 + 0x10 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar23) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar24) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar25) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar26) * dVar3);
        pfVar1 = (float *)(lVar5 + 0x20 + lVar20 * 4);
        *pfVar1 = (float)((double)(iVar27 + iVar6) * dVar3);
        pfVar1[1] = (float)((double)(iVar28 + iVar7) * dVar3);
        pfVar1[2] = (float)((double)(iVar29 + iVar8) * dVar3);
        pfVar1[3] = (float)((double)(iVar30 + iVar9) * dVar3);
        puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar20 * 4);
        *puVar2 = CONCAT44((float)((double)(iVar28 + iVar11) * dVar3),
                           (float)((double)(iVar27 + iVar10) * dVar3));
        puVar2[1] = CONCAT44((float)((double)(iVar30 + iVar13) * dVar3),
                             (float)((double)(iVar29 + iVar12) * dVar3));
        lVar20 = lVar20 + 0x10;
        iVar27 = iVar27 + iVar14;
        iVar28 = iVar28 + iVar15;
        iVar29 = iVar29 + iVar16;
        iVar30 = iVar30 + iVar17;
        lVar21 = lVar21 + 2;
      } while (lVar21 != 0);
      if ((uVar19 & 1) != 0) goto LAB_015c758e;
    }
    if (uVar18 == uVar4) goto LAB_015c760e;
  }
  do {
    *(float *)(lVar5 + uVar18 * 4) = (float)((double)(int)uVar18 * dVar3);
    uVar18 = uVar18 + 1;
  } while (uVar4 != uVar18);
LAB_015c760e:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar22 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar22;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @015c91d0 — 680 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015c92b4) */
/* WARNING: Removing unreachable block (ram,0x015c92bd) */
/* WARNING: Removing unreachable block (ram,0x015c9241) */
/* WARNING: Removing unreachable block (ram,0x015c924a) */
/* WARNING: Removing unreachable block (ram,0x015c93e2) */
/* WARNING: Removing unreachable block (ram,0x015c93eb) */

undefined8 * FUN_015c91d0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  bool bVar5;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (unaff_RSI == 0) {
    bVar5 = false;
    lVar4 = 0;
    lVar3 = segment_command_00000020._0_8_;
    if (segment_command_00000020._0_8_ == 0) goto LAB_015c9367;
LAB_015c9290:
    do {
      FUN_00d50b00();
      FUN_00d23370();
      if (lVar3 == lVar4) {
        bVar1 = bVar5;
        if (!bVar5) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = lVar3;
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      bVar5 = bVar1;
      FUN_00d50b20();
      lVar3 = *(longlong *)(lVar4 + 0x20);
    } while (*(longlong *)(lVar4 + 0x20) != 0);
    if (lVar4 != unaff_RSI) goto LAB_015c9331;
LAB_015c9373:
    bVar1 = bVar5;
    if (bVar5) {
      lVar3 = *(longlong *)(unaff_RSI + 0x18);
      goto joined_r0x015c9466;
    }
    if (unaff_RSI != 0) {
      bVar1 = true;
      FUN_00d50b00();
    }
  }
  else {
    FUN_00d50b20();
    FUN_00d50b00();
    bVar5 = true;
    lVar3 = *(longlong *)(unaff_RSI + 0x20);
    lVar4 = unaff_RSI;
    if (*(longlong *)(unaff_RSI + 0x20) != 0) goto LAB_015c9290;
LAB_015c9367:
    if (lVar4 == unaff_RSI) goto LAB_015c9373;
LAB_015c9331:
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    bVar1 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  lVar3 = *(longlong *)(unaff_RSI + 0x18);
joined_r0x015c9466:
  for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
    FUN_00d50b00();
    FUN_00d21140();
    if (lVar3 == unaff_RSI) {
      lVar3 = unaff_RSI;
      bVar5 = bVar1;
      if (!bVar1) {
        FUN_00d50b00();
        bVar5 = true;
      }
    }
    else {
      FUN_00d50b00();
      bVar5 = true;
      if (bVar1) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    unaff_RSI = lVar3;
    bVar1 = bVar5;
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (bVar1) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @015c7920 — 672 bytes
// ============================================================

longlong FUN_015c7920(void *param_1,undefined8 param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong unaff_RDI;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  void *pvVar18;
  uint uVar19;
  
  if (*(longlong *)(unaff_RDI + 0x80) != 0) {
    return *(longlong *)(unaff_RDI + 0x80);
  }
  uVar7 = FUN_00e83010();
  *(undefined8 *)(unaff_RDI + 0x80) = uVar7;
  iVar6 = (int)((float)*(int *)(unaff_RDI + 0x58) * DAT_02391094);
  iVar16 = 1;
  if (0 < iVar6) {
    iVar16 = iVar6;
  }
  uVar10 = 0;
  uVar8 = FUN_00e83da0();
  iVar6 = *(int *)(unaff_RDI + 0x58);
  uVar19 = (uint)((float)iVar6 * DAT_0239011c);
  if (0 < (int)uVar19) {
    ___bzero();
    uVar10 = (ulonglong)uVar19;
  }
  uVar17 = (iVar16 + uVar19) - (int)uVar10;
  pvVar18 = (void *)(ulonglong)uVar17;
  if (uVar17 != 0 && (int)uVar10 <= (int)(iVar16 + uVar19)) {
    lVar3 = *(longlong *)(unaff_RDI + 0x80);
    if ((uVar17 < 8) ||
       ((lVar3 + uVar10 * 4 < uVar8 + (longlong)pvVar18 * 4 &&
        (uVar8 < lVar3 + (uVar10 + (longlong)pvVar18) * 4)))) {
      param_1 = (void *)0x0;
    }
    else {
      param_1 = (void *)(ulonglong)(uVar17 & 0xfffffff8);
      uVar9 = ((longlong)param_1 - 8U >> 3) + 1;
      uVar11 = (ulonglong)((uint)uVar9 & 3);
      if ((longlong)param_1 - 8U < 0x18) {
        lVar13 = 0;
      }
      else {
        lVar15 = lVar3 + uVar10 * 4;
        lVar12 = -(uVar9 & 0xfffffffffffffffc);
        lVar13 = 0;
        do {
          puVar1 = (undefined8 *)(uVar8 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x10 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x20 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x30 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x20 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x30 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x40 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x50 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x40 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x50 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)(uVar8 + 0x60 + lVar13 * 4);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(uVar8 + 0x70 + lVar13 * 4);
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2 = (undefined8 *)(lVar15 + 0x60 + lVar13 * 4);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(lVar15 + 0x70 + lVar13 * 4);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar13 = lVar13 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      lVar15 = 0;
      if (uVar11 != 0) {
        lVar12 = uVar8 + lVar13 * 4;
        lVar13 = lVar3 + (lVar13 + uVar10) * 4;
        lVar15 = uVar11 << 5;
        lVar14 = 0;
        do {
          puVar2 = (undefined8 *)(lVar12 + lVar14);
          uVar7 = puVar2[1];
          puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar14);
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1 = (undefined8 *)(lVar13 + lVar14);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar14);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 != lVar14);
      }
      param_3 = (size_t)lVar15;
      uVar10 = uVar10 + (longlong)param_1;
      if (param_1 == pvVar18) goto LAB_015c7b77;
    }
    uVar9 = ~(ulonglong)param_1;
    uVar11 = (ulonglong)pvVar18 & 3;
    if ((uVar17 & 3) != 0) {
      do {
        lVar15 = (longlong)param_1 * 4;
        param_1 = (void *)((longlong)param_1 + 1);
        *(undefined4 *)(lVar3 + uVar10 * 4) = *(undefined4 *)(uVar8 + lVar15);
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (2 < uVar9 + (longlong)pvVar18) {
      lVar3 = lVar3 + uVar10 * 4;
      pvVar18 = (void *)((longlong)pvVar18 - (longlong)param_1);
      lVar15 = uVar8 + (longlong)param_1 * 4;
      param_1 = (void *)0x0;
      do {
        *(undefined4 *)(lVar3 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 4 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 4 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 8 + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 8 + (longlong)param_1 * 4);
        *(undefined4 *)(lVar3 + 0xc + (longlong)param_1 * 4) =
             *(undefined4 *)(lVar15 + 0xc + (longlong)param_1 * 4);
        param_1 = (void *)((longlong)param_1 + 4);
      } while (pvVar18 != param_1);
      uVar10 = uVar10 + (longlong)param_1;
    }
  }
LAB_015c7b77:
  if ((int)(uint)uVar10 < iVar6) {
    _memset_pattern16(param_1,(void *)((ulonglong)(iVar6 + ~(uint)uVar10) * 4 + 4),param_3);
  }
  FUN_00e83070();
  return *(longlong *)(unaff_RDI + 0x80);
}




// ============================================================
// @015c9600 — 626 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015c975a) */
/* WARNING: Removing unreachable block (ram,0x015c9763) */
/* WARNING: Removing unreachable block (ram,0x015c96f6) */
/* WARNING: Removing unreachable block (ram,0x015c96ff) */
/* WARNING: Removing unreachable block (ram,0x015c96be) */
/* WARNING: Removing unreachable block (ram,0x015c96c7) */
/* WARNING: Removing unreachable block (ram,0x015c9726) */
/* WARNING: Removing unreachable block (ram,0x015c972f) */
/* WARNING: Removing unreachable block (ram,0x015c97d1) */
/* WARNING: Removing unreachable block (ram,0x015c97da) */

ulonglong FUN_015c9600(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  
  lVar10 = *(longlong *)(unaff_RDI + 0x38);
  if ((((lVar10 == 0) || (lVar2 = *(longlong *)(unaff_RDI + 0x18), lVar2 == 0)) ||
      (*(longlong *)(lVar2 + 0x38) == 0)) ||
     (((*(longlong *)(unaff_RDI + 0x30) == 0 || (*(longlong *)(lVar2 + 0x28) == 0)) ||
      (*(longlong *)(lVar2 + 0x30) == 0)))) {
    uVar11 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar10 = *(longlong *)(unaff_RDI + 0x38);
    }
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x38);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d237a0();
    iVar6 = FUN_00d237a0();
    iVar7 = FUN_00d237a0();
    iVar8 = FUN_00d237a0();
    uVar12 = extraout_XMM0_Da;
    while (iVar9 = *(int *)(lVar10 + 0xc), iVar7 + 1 < iVar9) {
      uVar12 = FUN_00d23740();
    }
    if (0 < iVar8) {
      do {
        uVar12 = FUN_00d23620();
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      iVar9 = *(int *)(lVar10 + 0xc);
    }
    FUN_00d214d0(uVar12,iVar9);
    *(undefined8 *)(unaff_RDI + 0x30) =
         *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + (longlong)((iVar7 + 1 + iVar5) - iVar6) * 8)
    ;
    lVar4 = *(longlong *)(unaff_RDI + 0x18);
    *(undefined8 *)(unaff_RDI + 0x48) = *(undefined8 *)(lVar4 + 0x48);
    fVar1 = *(float *)(lVar4 + 0x54);
    if (*(float *)(unaff_RDI + 0x54) <= fVar1 && fVar1 != *(float *)(unaff_RDI + 0x54)) {
      *(float *)(unaff_RDI + 0x54) = fVar1;
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined8 *)(*(longlong *)(unaff_RDI + 0x18) + 0x20) = 0;
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    if (lVar2 != 0) {
      *(longlong *)(unaff_RDI + 0x18) = lVar2;
      *(longlong *)(lVar2 + 0x20) = unaff_RDI;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar11 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar11 & 0xffffffff;
}




// ============================================================
// @015c7140 — 515 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x015c7341) */
/* WARNING: Removing unreachable block (ram,0x015c718c) */
/* WARNING: Removing unreachable block (ram,0x015c7195) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015c7140(void)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong unaff_RSI;
  longlong lVar18;
  longlong *unaff_RDI;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong local_30;
  char local_28;
  
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar17 != 0) goto LAB_015c7309;
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  if (lVar17 == local_30) {
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RSI + 0x68) = local_30;
    if (lVar17 != 0) {
      FUN_00d50b20();
    }
  }
  iVar15 = _UNK_023de2dc;
  iVar14 = _UNK_023de2d8;
  iVar13 = _UNK_023de2d4;
  iVar12 = _DAT_023de2d0;
  iVar11 = _UNK_023de2cc;
  iVar10 = _UNK_023de2c8;
  iVar9 = _UNK_023de2c4;
  iVar8 = _DAT_023de2c0;
  iVar7 = _UNK_023de2bc;
  iVar6 = _UNK_023de2b8;
  iVar5 = _UNK_023de2b4;
  iVar4 = _DAT_023de2b0;
  iVar29 = _UNK_0239418c;
  iVar27 = _UNK_02394188;
  iVar25 = _UNK_02394184;
  iVar23 = _DAT_02394180;
  uVar2 = *(uint *)(unaff_RSI + 0x24);
  if ((int)uVar2 < 1) {
    lVar17 = *(longlong *)(unaff_RSI + 0x68);
    goto LAB_015c7309;
  }
  fVar21 = DAT_02394278 / *(float *)(unaff_RSI + 0x2c);
  lVar17 = *(longlong *)(unaff_RSI + 0x68);
  lVar3 = *(longlong *)(lVar17 + 0x10);
  if (uVar2 < 8) {
    uVar16 = 0;
  }
  else {
    uVar16 = (ulonglong)(uVar2 & 0xfffffff8);
    uVar20 = (uVar16 - 8 >> 3) + 1;
    iVar22 = _DAT_0238fcc0;
    iVar24 = _UNK_0238fcc4;
    iVar26 = _UNK_0238fcc8;
    iVar28 = _UNK_0238fccc;
    if (uVar16 - 8 == 0) {
      lVar19 = 0;
LAB_015c72c8:
      iVar23 = iVar22 + _DAT_02394180;
      iVar25 = iVar24 + _UNK_02394184;
      iVar27 = iVar26 + _UNK_02394188;
      iVar29 = iVar28 + _UNK_0239418c;
      pfVar1 = (float *)(lVar3 + lVar19 * 4);
      *pfVar1 = (float)iVar22 * fVar21;
      pfVar1[1] = (float)iVar24 * fVar21;
      pfVar1[2] = (float)iVar26 * fVar21;
      pfVar1[3] = (float)iVar28 * fVar21;
      pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
      *pfVar1 = (float)iVar23 * fVar21;
      pfVar1[1] = (float)iVar25 * fVar21;
      pfVar1[2] = (float)iVar27 * fVar21;
      pfVar1[3] = (float)iVar29 * fVar21;
    }
    else {
      lVar18 = -(uVar20 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar1 = (float *)(lVar3 + lVar19 * 4);
        *pfVar1 = (float)iVar22 * fVar21;
        pfVar1[1] = (float)iVar24 * fVar21;
        pfVar1[2] = (float)iVar26 * fVar21;
        pfVar1[3] = (float)iVar28 * fVar21;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar23) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar25) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar27) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar29) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x20 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar4) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar5) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar6) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar7) * fVar21;
        pfVar1 = (float *)(lVar3 + 0x30 + lVar19 * 4);
        *pfVar1 = (float)(iVar22 + iVar8) * fVar21;
        pfVar1[1] = (float)(iVar24 + iVar9) * fVar21;
        pfVar1[2] = (float)(iVar26 + iVar10) * fVar21;
        pfVar1[3] = (float)(iVar28 + iVar11) * fVar21;
        lVar19 = lVar19 + 0x10;
        iVar22 = iVar22 + iVar12;
        iVar24 = iVar24 + iVar13;
        iVar26 = iVar26 + iVar14;
        iVar28 = iVar28 + iVar15;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar20 & 1) != 0) goto LAB_015c72c8;
    }
    if (uVar16 == uVar2) goto LAB_015c7309;
  }
  do {
    *(float *)(lVar3 + uVar16 * 4) = (float)(int)uVar16 * fVar21;
    uVar16 = uVar16 + 1;
  } while (uVar2 != uVar16);
LAB_015c7309:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (lVar17 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar17;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}



