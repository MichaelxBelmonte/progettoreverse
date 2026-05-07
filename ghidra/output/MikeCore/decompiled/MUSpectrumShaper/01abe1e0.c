// Function: FUN_01abe1e0
// Address: 01abe1e0
// Size: 2354 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01abe281) */
/* WARNING: Removing unreachable block (ram,0x01abe28a) */
/* WARNING: Removing unreachable block (ram,0x01abe32f) */
/* WARNING: Removing unreachable block (ram,0x01abe338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abe1e0(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  pthread_key_t in_ECX;
  pthread_key_t pVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar15;
  undefined8 in_XMM0_Qb;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fStack_124;
  float fStack_11c;
  float fStack_f4;
  float fStack_ec;
  float local_4c;
  longlong local_48;
  char local_40;
  int iVar11;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
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
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_017f2980();
  if ((cVar5 != '\0') || (*(longlong *)(unaff_RDI + 0x168) == 0)) goto LAB_01abeaf7;
  FUN_00d50b00();
  iVar6 = FUN_014148b0();
  if (0 < iVar6) {
    FUN_01414880();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        goto LAB_01abe341;
      }
    }
    else if (local_48 != 0) {
LAB_01abe341:
      if (DAT_02394274 < *(float *)(*(longlong *)(local_48 + 0x10) + 4)) {
        iVar6 = *(int *)(local_48 + 0x18);
        iVar11 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        uVar10 = iVar11 >> 2;
        lVar13 = 0;
        do {
          iVar6 = (int)lVar13;
          if ((int)(uVar10 + iVar6) < 2) goto LAB_01abeae2;
          lVar9 = lVar13 * 4;
          lVar13 = lVar13 + -1;
        } while (*(float *)(*(longlong *)(local_48 + 0x10) + (ulonglong)(uVar10 - 1) * 4 + lVar9) *
                 (float)(int)(uVar10 + iVar6 + -1) <= DAT_02394274);
        lVar9 = (ulonglong)uVar10 + lVar13;
        if ((lVar9 != 1) && ((ulonglong)uVar10 + lVar13 != 2)) {
          lVar12 = (ulonglong)(uVar10 + (int)lVar13 + 1 & 1) + 1;
          do {
            lVar12 = lVar12 + 2;
          } while (lVar9 != lVar12);
        }
        FUN_00aea610();
        fVar14 = (float)_powf();
        fStack_f4 = (float)((ulonglong)param_2 >> 0x20);
        fStack_ec = (float)((ulonglong)in_XMM1_Qb >> 0x20);
        lVar9 = (longlong)(int)uVar10 * 4 + *(longlong *)(*(longlong *)(unaff_RDI + 0x180) + 0x10);
        fVar1 = *(float *)(lVar9 + lVar13 * 4);
        if (DAT_02394274 <= fVar1) {
          local_4c = 0.0;
          if (0.0 <= fVar14 * fStack_f4) {
            local_4c = fVar14 * fStack_f4;
          }
          local_4c = local_4c / fVar1;
        }
        else {
          local_4c = DAT_02390124;
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)lVar9);
        pVar8 = (pthread_key_t)lVar9;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar8 = (pthread_key_t)local_48;
        }
        fVar14 = (float)FUN_017f2db0();
        fVar1 = DAT_02390124;
        if (DAT_02394274 <= fVar14) {
          FUN_014148b0();
          FUN_014148d0();
          FUN_014148b0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        if (0 < *(int *)(unaff_RDI + 0x19c)) {
          fVar14 = DAT_02390d34;
          if (local_4c <= DAT_02390d34) {
            fVar14 = local_4c;
          }
          fStack_124 = (float)((ulonglong)param_1 >> 0x20);
          fStack_11c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
          fVar15 = DAT_0239011c * fStack_f4;
          lVar9 = 0;
          do {
            lVar12 = lVar9 + 1;
            lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
            fVar2 = *(float *)(lVar4 + 4 + lVar9 * 4);
            fVar3 = *(float *)(lVar4 + 8 + lVar9 * 4);
            if (lVar12 < (int)uVar10 + lVar13 + 1) {
              FUN_00aea610();
              fVar16 = (float)_powf();
              fVar17 = 0.0;
              if (0.0 <= fVar16 * fStack_f4) {
                fVar17 = fVar16 * fStack_f4;
              }
            }
            else {
              fVar17 = *(float *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x180) + 0x10) + 4 +
                                 lVar9 * 4) * fVar14;
            }
            lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 400) + 0x10);
            fVar17 = (*(float *)(lVar4 + 4 + lVar9 * 4) - fVar17) * DAT_0239109c + fVar17;
            *(float *)(lVar4 + 4 + lVar9 * 4) = fVar17;
            if (DAT_02391090 < (fVar1 / fVar15) * fVar17) {
              lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x178) + 0x10);
              fVar16 = *(float *)(lVar4 + 8 + lVar9 * 4) - *(float *)(lVar4 + 4 + lVar9 * 4);
              FUN_01cfc9f0();
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
              auVar20 = roundss(ZEXT816(0),
                                ZEXT416((uint)((float)((uint)fVar2 & _DAT_023945e0 | DAT_02394dc8) +
                                              fVar2)),0xb);
              auVar18 = ZEXT416((uint)((float)((uint)fVar3 & _DAT_023945e0 | DAT_02394dc8) + fVar3))
              ;
              auVar18 = roundss(auVar18,auVar18,0xb);
              auVar19._4_12_ = auVar18._4_12_;
              auVar21 = ZEXT416((uint)fVar16 & _DAT_023945e0) | _DAT_023945f0;
              auVar21._0_4_ = auVar21._0_4_ + fVar16;
              auVar21 = roundss(auVar21,auVar21,0xb);
              auVar19._0_4_ = (auVar18._0_4_ + auVar20._0_4_ + DAT_023b1608) * DAT_0239011c;
              auVar18._4_4_ = fStack_124 + fStack_f4;
              auVar18._0_4_ = (fStack_124 + fStack_f4) - fVar17;
              auVar18._8_4_ = fStack_11c + fStack_ec;
              auVar18._12_4_ = fStack_11c + fStack_ec;
              auVar18 = insertps(auVar19,auVar18,0x10);
              auVar20._4_12_ = auVar21._4_12_;
              auVar20._0_4_ = auVar21._0_4_ * DAT_02391094;
              (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(auVar18._0_8_,auVar20._0_8_);
            }
            lVar9 = lVar12;
          } while (lVar12 < *(int *)(unaff_RDI + 0x19c));
        }
      }
LAB_01abeae2:
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01abeaf7:
  FUN_00d50b20();
  return;
}


