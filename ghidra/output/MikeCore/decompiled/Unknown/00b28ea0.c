// Function: FUN_00b28ea0
// Address: 00b28ea0
// Size: 1945 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b29605) */
/* WARNING: Removing unreachable block (ram,0x00b2960e) */
/* WARNING: Removing unreachable block (ram,0x00b29351) */
/* WARNING: Removing unreachable block (ram,0x00b2935a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b28ea0(uint param_1,undefined8 *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  longlong local_68;
  char local_60;
  
  dVar23 = (double)FUN_00b335d0();
  fVar19 = (float)_expf(DAT_023d59b0 / ((float)(dVar23 / (double)(int)param_1) * DAT_02394244));
  dVar23 = (double)FUN_00b335d0();
  fVar24 = (float)(dVar23 / (double)(int)param_1);
  fVar20 = (float)_expf(DAT_023d59b0 / (fVar24 + fVar24));
  uVar7 = FUN_00b33130();
  fVar24 = extraout_XMM0_Da;
  if (0 < (int)uVar7) {
    if ((int)param_1 < 1) {
      uVar16 = 0;
      fVar25 = SQRT(0.0 / (float)(int)param_1);
      fVar24 = fVar25;
      do {
        if (unaff_RSI[uVar16] != 0) {
          lVar12 = *(longlong *)(unaff_RDI[0x12] + 0x10);
          fVar24 = *(float *)(lVar12 + uVar16 * 4);
          fVar22 = (float)(**(code **)(DAT_02786500 + 0x10))();
          fVar21 = DAT_023d59b4;
          uVar18 = -(uint)(fVar22 < fVar24);
          fVar24 = (float)((uint)((fVar24 - fVar22) * fVar19 + fVar22) & uVar18 |
                          ~uVar18 & (uint)fVar22);
          *(uint *)(lVar12 + uVar16 * 4) = ~-(uint)(fVar24 < DAT_023d59b4) & (uint)fVar24;
          if ((fVar22 != 0.0) || (fVar24 = 0.0, NAN(fVar22))) {
            fVar24 = fVar25;
          }
          fVar24 = (*(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + uVar16 * 4) - fVar24) *
                   fVar20 + fVar24;
          *(uint *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + uVar16 * 4) =
               ~-(uint)(fVar24 < fVar21) & (uint)fVar24;
        }
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
    }
    else {
      uVar16 = 0;
      do {
        lVar12 = unaff_RSI[uVar16];
        if (lVar12 != 0) {
          lVar5 = *(longlong *)(unaff_RDI[0x12] + 0x10);
          fVar24 = *(float *)(lVar5 + uVar16 * 4);
          fVar21 = (float)(**(code **)(DAT_02786500 + 0x10))();
          fVar25 = DAT_023d59b4;
          uVar18 = -(uint)(fVar21 < fVar24);
          fVar24 = (float)((uint)((fVar24 - fVar21) * fVar19 + fVar21) & uVar18 |
                          ~uVar18 & (uint)fVar21);
          *(uint *)(lVar5 + uVar16 * 4) = ~-(uint)(fVar24 < DAT_023d59b4) & (uint)fVar24;
          fVar24 = 0.0;
          if ((fVar21 != 0.0) || (NAN(fVar21))) {
            if ((ulonglong)param_1 - 1 < 3) {
              fVar24 = 0.0;
              uVar11 = 0;
            }
            else {
              fVar24 = 0.0;
              uVar11 = 0;
              do {
                fVar21 = *(float *)(lVar12 + uVar11 * 4);
                fVar22 = *(float *)(lVar12 + 4 + uVar11 * 4);
                fVar2 = *(float *)(lVar12 + 8 + uVar11 * 4);
                fVar3 = *(float *)(lVar12 + 0xc + uVar11 * 4);
                fVar24 = fVar3 * fVar3 + fVar2 * fVar2 + fVar22 * fVar22 + fVar21 * fVar21 + fVar24;
                uVar11 = uVar11 + 4;
              } while ((param_1 & 0xfffffffc) != uVar11);
            }
            if ((ulonglong)(param_1 & 3) != 0) {
              uVar10 = 0;
              do {
                fVar21 = *(float *)(lVar12 + uVar11 * 4 + uVar10 * 4);
                fVar24 = fVar24 + fVar21 * fVar21;
                uVar10 = uVar10 + 1;
              } while ((param_1 & 3) != uVar10);
            }
            fVar24 = SQRT(fVar24 / (float)(int)param_1);
          }
          fVar24 = (*(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + uVar16 * 4) - fVar24) *
                   fVar20 + fVar24;
          *(uint *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + uVar16 * 4) =
               ~-(uint)(fVar24 < fVar25) & (uint)fVar24;
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar7);
    }
  }
  if (((char)unaff_RDI[0x14] != '\0') && (unaff_RDI[0x16] != 0)) {
    puVar13 = *(undefined4 **)(unaff_RDI[0x15] + 0x10);
    if ((0 < (int)param_1) && (0 < (int)uVar7)) {
      uVar16 = 0;
      do {
        uVar11 = 0;
        if (2 < (ulonglong)uVar7 - 1) {
          do {
            *puVar13 = *(undefined4 *)(unaff_RSI[uVar11] + uVar16 * 4);
            puVar13[1] = *(undefined4 *)(unaff_RSI[uVar11 + 1] + uVar16 * 4);
            puVar13[2] = *(undefined4 *)(unaff_RSI[uVar11 + 2] + uVar16 * 4);
            fVar24 = *(float *)(unaff_RSI[uVar11 + 3] + uVar16 * 4);
            puVar13[3] = fVar24;
            puVar13 = puVar13 + 4;
            uVar11 = uVar11 + 4;
          } while ((uVar7 & 0xfffffffc) != uVar11);
        }
        if ((ulonglong)(uVar7 & 3) != 0) {
          lVar12 = 0;
          do {
            fVar24 = *(float *)(*(longlong *)((longlong)unaff_RSI + lVar12 * 2 + uVar11 * 8) +
                               uVar16 * 4);
            *(float *)((longlong)puVar13 + lVar12) = fVar24;
            lVar12 = lVar12 + 4;
          } while ((ulonglong)(uVar7 & 3) * 4 - lVar12 != 0);
          puVar13 = (undefined4 *)((longlong)puVar13 + lVar12);
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != param_1);
    }
    FUN_00b280b0(fVar24,(longlong)(int)param_1);
  }
  if ((((unaff_RDI[0x17] != 0) && (unaff_RDI[0x19] != 0)) && (unaff_RDI[0x18] != 0)) &&
     (uVar7 = (**(code **)(*unaff_RDI + 0x3a8))(), uVar7 == param_1)) {
    iVar8 = (**(code **)(*unaff_RDI + 0x3a8))();
    FUN_00c8e690();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar6 = *unaff_RSI;
    lVar12 = *(longlong *)(local_68 + 0x10);
    dVar23 = (double)FUN_00b335d0();
    FUN_00e83530(SUB84(dVar23,0),uVar6);
    puVar9 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    iVar15 = *(int *)(unaff_RDI[0x17] + 0x18);
    iVar14 = iVar15 + 3;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    if (1 < iVar8) {
      uVar16 = 0;
      iVar17 = 0;
      fVar24 = 0.0;
      iVar15 = 0;
      do {
        uVar6 = *(undefined8 *)(lVar12 + uVar16 * 8);
        fVar19 = (float)uVar6;
        fVar20 = (float)((ulonglong)uVar6 >> 0x20);
        fVar25 = (float)((uint)fVar20 & _DAT_02390140);
        if ((fVar19 != DAT_0239424c) || (fVar21 = fVar25, NAN(fVar19) || NAN(DAT_0239424c))) {
          fVar21 = (float)((uint)fVar19 & _DAT_02390140);
          if ((fVar20 == DAT_0239424c) && (!NAN(fVar20) && !NAN(DAT_0239424c))) goto LAB_00b29500;
          if (fVar25 < fVar21) {
            fVar21 = SQRT((fVar25 / fVar21) * (fVar25 / fVar21) + DAT_02390124) * fVar21;
            goto LAB_00b29500;
          }
          fVar21 = SQRT((fVar21 / fVar25) * (fVar21 / fVar25) + DAT_02390124) * fVar25;
          if (iVar15 < iVar14 >> 2) goto LAB_00b29509;
LAB_00b29470:
          if (iVar8 / 2 - 1 == uVar16) goto LAB_00b29531;
          if (uVar16 != 0) {
            fVar24 = fVar24 + fVar21;
            iVar17 = iVar17 + 1;
          }
        }
        else {
LAB_00b29500:
          if (iVar14 >> 2 <= iVar15) goto LAB_00b29470;
LAB_00b29509:
          fVar19 = (float)(int)uVar16 * (float)(dVar23 / (double)iVar8);
          pfVar1 = (float *)(*(longlong *)(unaff_RDI[0x17] + 0x10) + (longlong)iVar15 * 4);
          if (fVar19 < *pfVar1 || fVar19 == *pfVar1) goto LAB_00b29470;
LAB_00b29531:
          iVar4 = *(int *)(puVar9 + 3);
          if (iVar17 == 0) {
            FUN_00c8e340(fVar21,1);
            fVar24 = 0.0;
          }
          else {
            FUN_00c8e340(fVar21,1);
            fVar24 = fVar24 / (float)iVar17;
          }
          *(float *)(puVar9[2] + (longlong)iVar4) = fVar24;
          iVar15 = iVar15 + 1;
          iVar17 = 0;
          fVar24 = 0.0;
        }
        uVar16 = uVar16 + 1;
      } while ((uint)(iVar8 / 2) != uVar16);
    }
    FUN_00d21140();
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  if (unaff_RSI != param_2) {
    FUN_00b32d50(param_1,param_2);
  }
  return;
}


