// Function: FUN_01abaae0
// Address: 01abaae0
// Size: 5282 bytes
// Class: MUSpectrumShaper
// String references:
//   "%I"


/* WARNING: Removing unreachable block (ram,0x01abbb99) */
/* WARNING: Removing unreachable block (ram,0x01abbba5) */
/* WARNING: Removing unreachable block (ram,0x01abba81) */
/* WARNING: Removing unreachable block (ram,0x01abba8d) */
/* WARNING: Removing unreachable block (ram,0x01abbecb) */
/* WARNING: Removing unreachable block (ram,0x01abbed7) */
/* WARNING: Removing unreachable block (ram,0x01abb182) */
/* WARNING: Removing unreachable block (ram,0x01abb18b) */
/* WARNING: Removing unreachable block (ram,0x01abb10e) */
/* WARNING: Removing unreachable block (ram,0x01abb117) */
/* WARNING: Removing unreachable block (ram,0x01abab7a) */
/* WARNING: Removing unreachable block (ram,0x01abab83) */
/* WARNING: Removing unreachable block (ram,0x01abbf15) */
/* WARNING: Removing unreachable block (ram,0x01abbf22) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abaae0(pthread_key_t param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined8 in_XMM1_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined8 in_XMM2_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar41 [16];
  longlong *local_1b0;
  char local_1a8;
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 *local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  longlong local_b8;
  char local_b0;
  undefined1 local_a8 [16];
  undefined1 local_88 [8];
  undefined8 uStack_80;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  char local_38;
  
  local_a8._8_8_ = in_XMM3_Qb;
  local_a8._0_8_ = param_4;
  local_138 = (float)param_3;
  fStack_134 = (float)((ulonglong)param_3 >> 0x20);
  uStack_130 = (undefined4)in_XMM2_Qb;
  uStack_12c = (uint)((ulonglong)in_XMM2_Qb >> 0x20);
  uStack_80 = in_XMM1_Qb;
  local_88 = (undefined1  [8])param_2;
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = (float)FUN_015ba310();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017eca70();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017eca70();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (float)FUN_015ba310();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x19c) = 0x1ff;
  iVar5 = FUN_00e7d780(DAT_0241145c / local_58);
  fVar17 = DAT_0240b530 * local_a8._4_4_;
  auVar32 = ZEXT416(_DAT_023945e0 & (uint)fVar17) | _DAT_023945f0;
  auVar32._0_4_ = auVar32._0_4_ + fVar17;
  auVar32 = roundss(ZEXT816(0),auVar32,0xb);
  fVar17 = DAT_0241fd58;
  if (auVar32._0_4_ <= DAT_0241fd58) {
    fVar17 = auVar32._0_4_;
  }
  fVar38 = local_a8._4_4_ - fVar17;
  auVar28._8_4_ = uStack_130;
  auVar28._0_8_ = param_3;
  auVar28._12_4_ = uStack_12c;
  auVar22._4_4_ = fStack_134;
  auVar22._0_4_ = fStack_134;
  auVar22._8_4_ = uStack_12c;
  auVar22._12_4_ = uStack_12c;
  auVar23._4_12_ = auVar22._4_12_;
  auVar23._0_4_ = fStack_134 + fVar38;
  insertps(auVar28,auVar23,0x10);
  insertps(local_a8,ZEXT416((uint)fVar17),0x10);
  iVar9 = iVar5 + 1;
  if (*(int *)((longlong)unaff_RDI + 0x19c) <= iVar5) {
    iVar9 = *(int *)((longlong)unaff_RDI + 0x19c);
  }
  iVar5 = 0x42;
  if (0x42 < iVar9) {
    iVar5 = iVar9;
  }
  if ((char)unaff_RDI[0x34] == '\0') {
    iVar5 = 0x42;
  }
  iVar14 = 0x200;
  if (iVar5 < 0x200) {
    iVar14 = iVar5;
  }
  cVar4 = FUN_00d054a0();
  fVar18 = local_138 + (float)local_a8._0_4_;
  plVar7 = (longlong *)(longlong)iVar9;
  if (cVar4 != '\0') {
    plVar8 = plVar7;
    fVar20 = DAT_0241c628;
    if (iVar14 == 0x42) {
      if (DAT_02393944 < (float)local_a8._0_4_) {
        fVar20 = (DAT_02393944 / (float)local_a8._0_4_) * DAT_0241c628;
      }
    }
    else {
      local_c0 = CONCAT44(local_c0._4_4_,(float)iVar14);
      iVar5 = 0;
      do {
        fVar31 = (float)local_a8._0_4_ * fVar20;
        fVar21 = 0.0;
        iVar9 = 0;
        while( true ) {
          local_88._0_4_ = fVar21;
          fVar19 = (float)_powf(DAT_02390124 / (float)(iVar9 + 0x20));
          fVar21 = fVar19 * fVar31 + fVar21;
          if ((float)local_a8._0_4_ < local_138 + fVar21) break;
          if (iVar9 == 1000) {
            iVar9 = 1000;
            goto LAB_01abaf93;
          }
          local_88._0_4_ = fVar21;
          fVar19 = (float)_powf(DAT_02390124 / (float)(iVar9 + 0x21));
          fVar21 = fVar21 + fVar19 * fVar31;
          if ((float)local_a8._0_4_ < local_138 + fVar21) {
            iVar9 = iVar9 + 1;
            break;
          }
          iVar9 = iVar9 + 2;
        }
        iVar9 = iVar9 + -1;
        if (iVar9 == iVar14) break;
LAB_01abaf93:
        fVar31 = (float)_powf((float)iVar9 / (float)local_c0);
        fVar20 = fVar20 * fVar31;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 100);
    }
    fVar20 = fVar20 * (float)local_a8._0_4_;
    lVar12 = *(longlong *)(unaff_RDI[0x2f] + 0x10);
    fVar31 = 0.0;
    lVar10 = 0;
    while( true ) {
      local_88._0_4_ = local_138 + fVar31;
      fVar21 = (float)_powf(DAT_02390124 / (float)((int)lVar10 + 0x20));
      *(float *)(lVar12 + lVar10 * 4) = local_138 + fVar31;
      if (lVar10 == 0x200) break;
      fVar31 = fVar31 + fVar21 * fVar20;
      local_88._0_4_ = local_138 + fVar31;
      fVar21 = (float)_powf(DAT_02390124 / (float)((int)lVar10 + 0x21));
      *(undefined4 *)(lVar12 + 4 + lVar10 * 4) = local_88._0_4_;
      fVar31 = fVar31 + fVar21 * fVar20;
      lVar10 = lVar10 + 2;
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b93e0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b9950();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    lVar12 = 0;
    do {
      if ((fVar18 <= *(float *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + 4 + lVar12 * 4)) ||
         ((longlong)plVar7 < lVar12)) {
        if (local_40 == 0) goto LAB_01abb3fe;
        break;
      }
      if (lVar12 != 0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)plVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015b9640();
      }
      auVar3._12_4_ = 0;
      auVar3._0_12_ = stack0xffffffffffffff7c;
      _local_88 = auVar3 << 0x20;
      FUN_00aea610();
      fVar31 = (float)_powf();
      fVar20 = 0.0;
      if (0.0 <= fVar31 * fVar38) {
        fVar20 = fVar31 * fVar38;
      }
      *(float *)(*(longlong *)(unaff_RDI[0x30] + 0x10) + lVar12 * 4) = fVar20;
      plVar8 = unaff_RDI;
      if (lVar12 != 0) {
        pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RDI);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015b9640();
      }
      FUN_00aea610();
      lVar10 = lVar12 + 1;
      fVar31 = (float)_powf();
      fVar20 = 0.0;
      if (0.0 <= fVar31 * fVar38) {
        fVar20 = fVar31 * fVar38;
      }
      *(float *)(*(longlong *)(unaff_RDI[0x31] + 0x10) + lVar12 * 4) = fVar20;
      lVar12 = lVar10;
    } while (lVar10 != 0x200);
    FUN_00d50b20();
LAB_01abb3fe:
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01ab5650();
  local_b0 = 0;
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_b8 = local_40;
  local_b0 = '\x01';
  FUN_01d488d0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  fVar20 = auVar23._0_4_ - DAT_0239011c * fVar38;
  auVar24._0_4_ = _DAT_023945e0 & (uint)fVar20;
  auVar24._4_4_ = _UNK_023945e4 & (uint)fStack_134;
  auVar24._8_4_ = _UNK_023945e8 & uStack_12c;
  auVar24._12_4_ = _UNK_023945ec & uStack_12c;
  auVar25._4_12_ = SUB1612(auVar24 | _DAT_023945f0,4);
  auVar25._0_4_ = SUB164(auVar24 | _DAT_023945f0,0) + fVar20;
  auVar33._0_12_ = ZEXT812(0);
  auVar33._12_4_ = 0;
  roundss(auVar33,auVar25,0xb);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  FUN_01ab57f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  local_c0 = local_40;
  local_a8 = insertps(local_a8,fVar38,0x10);
  lVar12 = 0;
  while (lVar12 != 0x200) {
    fVar38 = *(float *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + 4 + lVar12 * 4);
    auVar32 = ZEXT416((uint)((float)((uint)fVar38 & _DAT_023945e0 | DAT_02394dc8) + fVar38));
    auVar32 = roundss(auVar32,auVar32,0xb);
    if ((fVar18 <= auVar32._0_4_) || ((longlong)plVar7 < lVar12)) {
      *(int *)((longlong)unaff_RDI + 0x19c) = (int)lVar12 + -1;
      break;
    }
    fVar20 = *(float *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + lVar12 * 4);
    auVar36._4_12_ = auVar32._4_12_;
    auVar28 = ZEXT416((uint)((float)((uint)fVar20 & _DAT_023945e0 | DAT_02394dc8) + fVar20));
    auVar39 = roundss(auVar28,auVar28,0xb);
    fVar38 = fVar38 - fVar20;
    fVar20 = DAT_02390124;
    if ((fVar38 <= DAT_02390d30) && (fVar20 = 0.0, DAT_02394298 <= fVar38)) {
      fVar20 = (DAT_02390d30 - fVar38) / DAT_023b1d84 + DAT_02390124;
    }
    fVar31 = auVar39._0_4_;
    local_88._0_4_ = (auVar32._0_4_ - fVar31) - fVar20;
    register0x00001304 = auVar36._4_12_;
    fVar38 = *(float *)(*(longlong *)(unaff_RDI[0x30] + 0x10) + lVar12 * 4);
    auVar34._0_4_ = auVar23._0_4_ - fVar38;
    auVar34._4_12_ = auVar23._4_12_;
    if (lVar12 == 0) {
      auVar26._4_4_ = auVar32._4_4_;
      auVar26._0_4_ = local_88._0_4_;
      auVar26._8_4_ = auVar32._8_4_;
      auVar26._12_4_ = auVar32._12_4_;
      auVar27._4_12_ = auVar26._4_12_;
      auVar27._0_4_ = (float)local_88._0_4_ * DAT_0239426c + fVar31;
      auVar41._0_4_ = (float)local_88._0_4_ * DAT_0239011c;
      auVar41._4_12_ = auVar36._4_12_;
      blendps(auVar41,_DAT_0241f3a0,0xe);
      insertps(auVar27,auVar34,0x10);
      auVar32 = auVar39;
    }
    else {
      auVar32 = insertps(auVar39,auVar34,0x10);
      insertps(_local_88,ZEXT416((uint)fVar38),0x10);
    }
    if (*(char *)(*(longlong *)(unaff_RDI[0x2e] + 0x10) + lVar12) == '\0') {
      FUN_01ab5310();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ab54b0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    fVar38 = *(float *)(*(longlong *)(unaff_RDI[0x31] + 0x10) + lVar12 * 4);
    if (DAT_0239011c <
        (float)((uint)(*(float *)(*(longlong *)(unaff_RDI[0x30] + 0x10) + lVar12 * 4) - fVar38) &
               _DAT_02390140)) {
      FUN_01ab5650();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      auVar28 = ZEXT416((uint)fVar38 & _DAT_023945e0) | _DAT_023945f0;
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = auVar28._0_4_ + fVar38;
      auVar32 = roundss(auVar32,auVar29,0xb);
      auVar30._4_12_ = auVar39._4_12_;
      auVar30._0_4_ = fVar31 + DAT_02390d00;
      auVar35._0_4_ = auVar23._0_4_ - auVar32._0_4_;
      auVar35._4_12_ = auVar23._4_12_;
      auVar40._0_4_ = fVar31 + (float)local_88._0_4_ + DAT_02390d00;
      auVar40._4_12_ = auVar30._4_12_;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(auVar30._0_8_,auVar35._0_8_,auVar40._0_8_);
    }
    FUN_01ab6350();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    auVar36._0_4_ = (float)local_88._0_4_ * DAT_0239011c;
    auVar32 = _local_88;
    if (lVar12 == 0) {
      uStack_54 = auVar39._4_4_;
      uStack_50 = auVar39._8_4_;
      uStack_4c = auVar39._12_4_;
      auVar39._4_4_ = uStack_54;
      auVar39._0_4_ = fVar31 + (float)local_88._0_4_ * DAT_0239426c;
      auVar39._8_4_ = uStack_50;
      auVar39._12_4_ = uStack_4c;
      auVar32 = auVar36;
    }
    auVar28 = blendps(auVar32,_DAT_0241c660,0xe);
    lVar12 = lVar12 + 1;
    auVar32 = insertps(auVar39,auVar34._0_4_,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar32._0_8_,auVar28._0_8_);
  }
  if (cVar4 != '\0') {
    FUN_01abc630();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_1b0 + 0x370))();
    FUN_01d44d80();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (((char)local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48a10();
    if (-1 < *(int *)((longlong)unaff_RDI + 0x19c)) {
      fVar17 = fVar17 + auVar23._0_4_ + DAT_02390d00 + DAT_023b2664;
      auVar1._12_4_ = 0;
      auVar1._0_12_ = stack0xffffffffffffff7c;
      _local_88 = auVar1 << 0x20;
      bVar2 = false;
      lVar12 = 0;
      uVar15 = 0xffffffffffffffff;
      do {
        fVar38 = *(float *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + 8 + uVar15 * 4);
        if (fVar18 <= fVar38) break;
        uVar16 = uVar15 + 1;
        fVar38 = (fVar38 + *(float *)(*(longlong *)(unaff_RDI[0x2f] + 0x10) + 4 + uVar15 * 4)) *
                 DAT_0239011c;
        auVar32 = ZEXT416((uint)fVar38 & _DAT_023945e0) | _DAT_023945f0;
        auVar37._4_12_ = auVar32._4_12_;
        auVar37._0_4_ = auVar32._0_4_ + fVar38;
        auVar32 = roundss(ZEXT816(0),auVar37,0xb);
        fVar38 = auVar32._0_4_;
        if (uVar15 == 99) {
          FUN_01d48a10();
LAB_01abbbaa:
          bVar11 = DAT_02394240 < fVar38 - (float)local_88._0_4_ && 99 < uVar16;
        }
        else {
          bVar11 = true;
          if ((((0x10 < uVar16) && ((0x20 < uVar16 || ((uVar16 & 1) != 0)))) &&
              ((0x40 < uVar16 || ((uVar16 & 3) != 0)))) && ((99 < uVar16 || ((uVar16 & 7) != 0))))
          goto LAB_01abbbaa;
        }
        lVar10 = DAT_0277e580;
        fVar31 = fVar38 - (float)local_88._0_4_;
        fVar20 = (float)local_88._0_4_;
        if ((((9 < uVar16 || DAT_023b36b0 <= fVar31) && (9 >= uVar16 || DAT_02390d28 <= fVar31)) &&
            (uVar16 < 0x11 || DAT_023945a4 <= fVar31)) && (bVar11)) {
          lVar13 = lVar12;
          bVar11 = bVar2;
          if (uVar15 == 0xffffffffffffffff) {
            if (DAT_0277e580 != 0) {
              FUN_00d50b00();
            }
            if (lVar12 == lVar10) {
              if (lVar10 != 0) {
                bVar11 = true;
              }
              if ((bVar2) && (bVar11 = bVar2, lVar10 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar11 = true;
              lVar13 = lVar10;
              if ((bVar2) && (lVar12 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_d8 = 1;
            local_e0 = &DAT_024cc6f0;
            local_d4 = (int)uVar15 + 1;
            FUN_00d8cb40(0,&local_e0);
            if (lVar12 == local_40) {
              if ((bVar2) || (lVar12 == 0)) goto joined_r0x01abbdc2;
              bVar11 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
                lVar10 = lVar12;
                goto LAB_01abbddb;
              }
            }
            else if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
              lVar10 = local_40;
              if ((bVar2) && (lVar12 != 0)) {
                FUN_00d50b20();
              }
LAB_01abbddb:
              lVar12 = lVar10;
              bVar11 = true;
joined_r0x01abbdc2:
              lVar13 = lVar12;
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar11 = true;
              lVar13 = local_40;
              if ((bVar2) && (lVar12 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          _local_88 = ZEXT416((uint)(fVar38 + DAT_02394248 + DAT_02390d00));
          FUN_01ab4de0();
          local_c8 = 0;
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          local_d0 = local_40;
          local_c8 = '\x01';
          FUN_01d488d0();
          if ((local_c8 != '\0') && (local_d0 != 0)) {
            FUN_00d50b20();
          }
          auVar32 = insertps(_local_88,fVar17,0x10);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar32._0_8_,2);
          lVar12 = lVar13;
          fVar20 = fVar38;
          bVar2 = bVar11;
        }
        local_88._0_4_ = fVar20;
        uVar15 = uVar16;
      } while ((longlong)uVar16 < (longlong)*(int *)((longlong)unaff_RDI + 0x19c));
      if ((bVar2) && (lVar12 != 0)) {
        FUN_00d50b20(unaff_RDI);
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01abe040();
  FUN_01abe1e0();
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


