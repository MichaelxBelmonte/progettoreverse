// Function: FUN_014b9750
// Address: 014b9750
// Size: 1299 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014b9750(float param_1,longlong *param_2,longlong *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *in_RCX;
  ulonglong uVar16;
  uint uVar17;
  longlong *unaff_RSI;
  int iVar18;
  longlong *unaff_RDI;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  longlong local_a0;
  char local_98;
  
  uVar4 = *(uint *)(*unaff_RDI + 0xc);
  uVar14 = (ulonglong)uVar4;
  iVar12 = *(int *)(*param_3 + 0x18);
  iVar18 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar18 = iVar12;
  }
  uVar21 = iVar18 >> 2;
  fVar1 = *(float *)(*(longlong *)(*param_3 + 0x10) + 4);
  iVar12 = FUN_00e7d780(param_1 / fVar1);
  uVar13 = iVar12 + 2U;
  if ((int)uVar21 < (int)(iVar12 + 2U)) {
    uVar13 = uVar21;
  }
  FUN_014b9ce0();
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar4) {
    fVar22 = DAT_02390124 / fVar1;
    uVar16 = 0;
    do {
      lVar15 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar16 * 8);
      lVar5 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + uVar16 * 8);
      iVar12 = *(int *)(lVar15 + 0x18);
      iVar18 = iVar12 + 3;
      if (-1 < iVar12) {
        iVar18 = iVar12;
      }
      lVar6 = *(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8);
      ___bzero();
      fVar3 = DAT_0240e314;
      uVar11 = _DAT_02390140;
      lVar15 = *(longlong *)(lVar15 + 0x10);
      fVar23 = *(float *)(lVar15 + 4) * DAT_0240ded4;
      uVar9 = iVar18 >> 2;
      if (iVar18 >> 2 < 2) {
        uVar9 = 1;
      }
      if (7 < iVar12) {
        lVar5 = *(longlong *)(lVar5 + 0x10);
        uVar20 = 1;
        do {
          fVar2 = *(float *)(lVar15 + uVar20 * 4);
          if (param_1 < fVar2) break;
          fVar25 = (float)((uint)SQRT((float)(int)uVar20) & uVar11) * fVar23;
          fVar24 = fVar1;
          if (fVar1 <= fVar25) {
            fVar24 = fVar25;
          }
          iVar12 = (int)((fVar2 - fVar24) * fVar22);
          iVar18 = (int)((fVar24 + fVar2) * fVar22);
          uVar10 = iVar12 + 1;
          if (iVar12 < 0) {
            uVar10 = 1;
          }
          uVar17 = iVar18 + 1;
          if ((int)uVar21 <= iVar18) {
            uVar17 = uVar21;
          }
          if ((int)uVar10 < (int)uVar17) {
            fVar25 = *(float *)(lVar5 + uVar20 * 4);
            lVar7 = *(longlong *)(*param_3 + 0x10);
            uVar19 = (ulonglong)uVar10;
            do {
              fVar26 = (float)((uint)(fVar2 - *(float *)(lVar7 + uVar19 * 4)) & uVar11);
              if (fVar26 < fVar24) {
                lVar8 = *(longlong *)(lVar6 + 0x10);
                *(float *)(lVar8 + uVar19 * 4) =
                     *(float *)(*(longlong *)(local_a0 + 0x10) +
                               (longlong)(int)((fVar24 - fVar26) * (fVar3 / fVar24)) * 4) * fVar25 +
                     *(float *)(lVar8 + uVar19 * 4);
              }
              uVar19 = uVar19 + 1;
            } while (uVar17 != (uint)uVar19);
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != uVar9);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar14);
    lVar15 = *in_RCX;
    if (lVar15 != 0) {
      uVar16 = 0;
      while( true ) {
        fVar1 = *(float *)(*(longlong *)(lVar15 + 0x10) + uVar16 * 4);
        if ((fVar1 != DAT_02390124) || (NAN(fVar1) || NAN(DAT_02390124))) {
          fVar3 = *(float *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + uVar16 * 8) + 0x10)
                            + 4);
          iVar18 = 1;
          iVar12 = 0x14;
          do {
            uVar21 = FUN_00e7d780((float)iVar18 * fVar3 * fVar22);
            fVar23 = (float)_powf(fVar1);
            if ((0 < (int)uVar21) && ((int)uVar21 < (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)uVar21 * 4) =
                   *(float *)(lVar15 + (ulonglong)uVar21 * 4) * fVar23;
            }
            if ((1 < (int)uVar21) && ((int)uVar21 <= (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)(uVar21 - 1) * 4) =
                   *(float *)(lVar15 + (ulonglong)(uVar21 - 1) * 4) * fVar23;
            }
            if ((-1 < (int)uVar21) && (uVar21 = uVar21 + 1, (int)uVar21 < (int)uVar13)) {
              lVar15 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x10) + uVar16 * 8) + 0x10);
              *(float *)(lVar15 + (ulonglong)uVar21 * 4) =
                   fVar23 * *(float *)(lVar15 + (ulonglong)uVar21 * 4);
            }
            iVar18 = iVar18 + 1;
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
        uVar16 = uVar16 + 1;
        if (uVar16 == uVar14) break;
        lVar15 = *in_RCX;
      }
    }
  }
  fVar1 = DAT_02394274;
  if ((1 < (int)uVar13) && (0 < (int)uVar4)) {
    lVar15 = *param_2;
    lVar5 = *(longlong *)(lVar15 + 0x10);
    uVar16 = 1;
    do {
      fVar22 = 0.0;
      uVar20 = 0;
      if (2 < uVar14 - 1) {
        do {
          fVar22 = fVar22 + *(float *)(*(longlong *)(*(longlong *)(lVar5 + uVar20 * 8) + 0x10) +
                                      uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 8 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x10 + uVar20 * 8) + 0x10) +
                             uVar16 * 4) +
                   *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x18 + uVar20 * 8) + 0x10) +
                             uVar16 * 4);
          uVar20 = uVar20 + 4;
        } while ((uVar4 & 0xfffffffc) != uVar20);
      }
      if ((ulonglong)(uVar4 & 3) != 0) {
        uVar19 = 0;
        do {
          fVar22 = fVar22 + *(float *)(*(longlong *)
                                        (*(longlong *)(lVar5 + uVar20 * 8 + uVar19 * 8) + 0x10) +
                                      uVar16 * 4);
          uVar19 = uVar19 + 1;
        } while ((uVar4 & 3) != uVar19);
      }
      if (fVar1 <= fVar22) {
        fVar22 = DAT_02390124 / fVar22;
        lVar6 = *(longlong *)(lVar15 + 0x10);
        uVar20 = 0;
        if (uVar14 != 1) {
          do {
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            lVar7 = *(longlong *)(*(longlong *)(lVar6 + 8 + uVar20 * 8) + 0x10);
            *(float *)(lVar7 + uVar16 * 4) = *(float *)(lVar7 + uVar16 * 4) * fVar22;
            uVar20 = uVar20 + 2;
          } while ((uVar4 & 0xfffffffe) != uVar20);
        }
        if ((uVar4 & 1) != 0) {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + uVar20 * 8) + 0x10);
          *(float *)(lVar6 + uVar16 * 4) = fVar22 * *(float *)(lVar6 + uVar16 * 4);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar13);
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  return;
}


