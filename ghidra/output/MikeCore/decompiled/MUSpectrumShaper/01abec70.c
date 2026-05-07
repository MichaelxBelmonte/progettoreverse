// Function: FUN_01abec70
// Address: 01abec70
// Size: 1512 bytes
// Class: MUSpectrumShaper
// String references:
//   "fff?333?"


/* WARNING: Removing unreachable block (ram,0x01abed0e) */
/* WARNING: Removing unreachable block (ram,0x01abed17) */
/* WARNING: Removing unreachable block (ram,0x01abede3) */
/* WARNING: Removing unreachable block (ram,0x01abedec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abec70(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t in_ECX;
  ulonglong uVar7;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 in_XMM0_Qb;
  undefined1 auVar13 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fStack_a4;
  float fStack_9c;
  float fStack_94;
  float fStack_8c;
  longlong local_48;
  char local_40;
  
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if (local_40 == '\0') {
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
    return;
  }
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_017f2980();
  if ((cVar4 == '\0') && (*(longlong *)(unaff_RDI + 0x168) != 0)) {
    FUN_00d50b00();
    iVar5 = FUN_014148b0();
    if (0 < iVar5) {
      FUN_01414880();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_01414880();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_014148d0();
        FUN_014148b0();
        FUN_014148b0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_017f2db0();
        if (DAT_02394274 < fVar9) {
          pvVar6 = _pthread_getspecific(in_ECX);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2da0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2d90();
        fStack_94 = (float)((ulonglong)param_2 >> 0x20);
        fStack_8c = (float)((ulonglong)in_XMM1_Qb >> 0x20);
        fStack_a4 = (float)((ulonglong)param_1 >> 0x20);
        fStack_9c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
        fStack_a4 = fStack_a4 + fStack_94;
        fVar9 = DAT_02390124 / (fStack_94 * DAT_0239011c);
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
          fVar1 = *(float *)(lVar3 + 4 + lVar8 * 4);
          fVar2 = *(float *)(lVar3 + 8 + lVar8 * 4);
          _exp2f((float)((int)lVar8 + 0x24) * DAT_023908e0 * DAT_023941f4);
          FUN_00aea610();
          fVar10 = (float)_powf();
          fVar11 = 0.0;
          if (0.0 <= fVar10 * fStack_94) {
            fVar11 = fVar10 * fStack_94;
          }
          lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + 0x10);
          fVar10 = *(float *)(lVar3 + 4 + lVar8 * 4);
          uVar7 = (ulonglong)(fVar10 < fVar11);
          fVar11 = (fVar10 - fVar11) * *(float *)("fff?333?" + uVar7 * 4) + fVar11;
          *(float *)(lVar3 + 4 + lVar8 * 4) = fVar11;
          fVar10 = fVar9 * fVar11;
          if (DAT_02391090 < fVar10) {
            lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
            fVar12 = *(float *)(lVar3 + 8 + lVar8 * 4) - *(float *)(lVar3 + 4 + lVar8 * 4);
            FUN_01cfc9f0(uVar7,-(uint)(fVar10 < DAT_02394288) &
                               (uint)((fVar10 + DAT_0241b638) * DAT_023908d8 * _DAT_023b294c) |
                               ~-(uint)(fVar10 < DAT_02394288) & (uint)_DAT_023b294c);
            if (local_40 == '\0') {
              if (local_48 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_01d488d0();
            if (local_48 != 0) {
              FUN_00d50b20();
            }
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            auVar14 = roundss(ZEXT816(0),
                              ZEXT416((uint)((float)((uint)fVar1 & _DAT_023945e0 | DAT_02394dc8) +
                                            fVar1)),0xb);
            auVar15 = ZEXT416((uint)((float)((uint)fVar2 & _DAT_023945e0 | DAT_02394dc8) + fVar2));
            auVar13 = roundss(auVar15,auVar15,0xb);
            auVar15 = ZEXT416((uint)fVar12 & _DAT_023945e0) | _DAT_023945f0;
            auVar16._4_12_ = auVar15._4_12_;
            auVar16._0_4_ = auVar15._0_4_ + fVar12;
            auVar16 = roundss(auVar16,auVar16,0xb);
            auVar15._4_4_ = fStack_a4;
            auVar15._0_4_ = fStack_a4;
            auVar15._8_4_ = fStack_9c + fStack_8c;
            auVar15._12_4_ = fStack_9c + fStack_8c;
            auVar17._4_12_ = auVar15._4_12_;
            auVar17._0_4_ = fStack_a4 - fVar11;
            auVar13._0_4_ = (auVar13._0_4_ + auVar14._0_4_ + DAT_023b1608) * DAT_0239011c;
            auVar15 = insertps(auVar13,auVar17,0x10);
            auVar14._4_12_ = auVar16._4_12_;
            auVar14._0_4_ = auVar16._0_4_ * DAT_02391094;
            (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar15._0_8_,auVar14._0_8_);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x65);
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


