// Function: FUN_014a5ba0
// Address: 014a5ba0
// Size: 2901 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a60ef) */
/* WARNING: Removing unreachable block (ram,0x014a60f8) */
/* WARNING: Removing unreachable block (ram,0x014a61fb) */
/* WARNING: Removing unreachable block (ram,0x014a6204) */
/* WARNING: Removing unreachable block (ram,0x014a6194) */
/* WARNING: Removing unreachable block (ram,0x014a619d) */
/* WARNING: Removing unreachable block (ram,0x014a6262) */
/* WARNING: Removing unreachable block (ram,0x014a626b) */
/* WARNING: Removing unreachable block (ram,0x014a6331) */
/* WARNING: Removing unreachable block (ram,0x014a633d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_014a5ba0(double param_1)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong *unaff_RSI;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  bool bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_b8;
  float local_a4;
  float local_94;
  longlong local_88;
  float local_6c;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_02572358;
  (*DAT_02572370)();
  if (5 < *(int *)(*unaff_RSI + 0xc)) {
    plVar4 = *(longlong **)(*unaff_RSI + 0x10);
    dVar3 = *(double *)(*plVar4 + 0x10);
    uVar17 = 0;
    local_50 = 0;
    bVar6 = false;
    lVar13 = plVar4[1];
    lVar10 = local_50;
    if (lVar13 == 0) goto LAB_014a5c80;
    do {
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      bVar8 = true;
      local_50 = lVar13;
      if ((bVar6) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
LAB_014a5cb0:
      bVar6 = bVar8;
      if (_DAT_0241eeb8 < *(double *)(local_50 + 0x10) - (double)(float)dVar3) {
LAB_014a5d0d:
        iVar20 = 0;
        local_a4 = 0.0;
        local_94 = 0.0;
        local_88 = 0;
        bVar8 = false;
        lVar13 = 0;
        bVar7 = false;
        goto LAB_014a5d50;
      }
      if ((longlong)*(int *)(*unaff_RSI + 0xc) + -1 <= (longlong)(uVar17 + 2)) {
        uVar17 = (ulonglong)((int)uVar17 + 1);
        goto LAB_014a5d0d;
      }
      uVar17 = uVar17 + 1;
      lVar13 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + uVar17 * 8);
      lVar10 = local_50;
    } while (local_50 != lVar13);
LAB_014a5c80:
    bVar8 = bVar6;
    if ((!bVar6) && (local_50 != 0)) {
      FUN_00d50b00();
      bVar8 = true;
    }
    goto LAB_014a5cb0;
  }
  local_94 = DAT_0239011c;
  goto LAB_014a672c;
  while ((local_94 = fVar27, 0.0 < local_a4 && (iVar20 = iVar20 + 1, iVar20 != 3))) {
LAB_014a5d50:
    FUN_00d216c0();
    local_b8 = (int)uVar17;
    fVar27 = local_94;
    if (0 < local_b8) {
      fVar26 = 0.0;
      iVar19 = 0;
      do {
        lVar21 = (longlong)iVar19;
        lVar10 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + lVar21 * 8);
        if (local_50 == lVar10) {
          if ((!bVar6) && (local_50 != 0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (local_50 != 0)) {
            FUN_00d50b20();
            bVar6 = true;
            local_50 = lVar10;
          }
          else {
            bVar6 = true;
            local_50 = lVar10;
          }
        }
        lVar10 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + lVar21 * 8);
        if (local_88 == lVar10) {
          if ((!bVar8) && (local_88 != 0)) {
            bVar8 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar8) && (local_88 != 0)) {
            FUN_00d50b20();
            bVar8 = true;
            local_88 = lVar10;
          }
          else {
            bVar8 = true;
            local_88 = lVar10;
          }
        }
        lVar10 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 0x10 + lVar21 * 8);
        if (lVar13 == lVar10) {
          if ((!bVar7) && (lVar13 != 0)) {
            bVar7 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          if ((bVar7) && (lVar13 != 0)) {
            FUN_00d50b20();
            bVar7 = true;
            lVar13 = lVar10;
          }
          else {
            bVar7 = true;
            lVar13 = lVar10;
          }
        }
        fVar24 = (float)(*(double *)(local_88 + 0x10) - *(double *)(local_50 + 0x10));
        iVar18 = iVar19 + 1;
        fVar25 = (float)(*(double *)(lVar13 + 0x10) - *(double *)(local_88 + 0x10));
        local_6c = fVar24;
        if (iVar20 == 2) {
          local_6c = fVar25 + fVar24;
          fVar25 = local_6c / local_a4;
          if (DAT_02390124 <= fVar25) {
            bVar23 = DAT_02411290 == fVar25;
            bVar22 = DAT_02411290 < fVar25;
            if (fVar25 < DAT_02411290) goto LAB_014a6058;
LAB_014a60bd:
            if (bVar22 || bVar23) {
LAB_014a605a:
              local_6c = fVar24;
            }
          }
          else {
            fVar25 = DAT_02390124 / fVar25;
            bVar23 = DAT_02411290 == fVar25;
            bVar22 = DAT_02411290 < fVar25;
            if (DAT_02411290 <= fVar25) goto LAB_014a60bd;
LAB_014a6058:
            iVar19 = iVar18;
            if (bVar22 || bVar23) goto LAB_014a605a;
          }
          FUN_014328b0((double)local_6c * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          iVar18 = iVar19 + 1;
        }
        else if (iVar20 == 1) {
          FUN_014328b0((double)fVar24 * param_1 + _DAT_0241eeb8,DAT_0238fee8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_6c = fVar24 + fVar25;
          FUN_014328b0((double)local_6c * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else if (iVar20 == 0) {
          FUN_014328b0((double)fVar24 * param_1 + _DAT_0241eeb8);
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00d21140();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_6c <= fVar26) {
          local_6c = fVar26;
        }
        fVar26 = local_6c;
        iVar19 = iVar18;
      } while (iVar18 < local_b8);
      if (DAT_0239424c < local_6c) {
        lVar10 = FUN_00e83010();
        uVar1 = (int)((double)local_6c * param_1) + 0x14;
        FUN_015c15e0(DAT_023908ec,uVar1,1,0);
        iVar19 = 0;
        fVar24 = 0.0;
        fVar26 = 0.0;
        if (-0x14 < (int)((double)local_6c * param_1)) {
          uVar11 = (ulonglong)(uVar1 & 3);
          if ((ulonglong)uVar1 - 1 < 3) {
            fVar27 = 0.0;
            uVar15 = 0;
            uVar16 = 0;
            fVar26 = 0.0;
          }
          else {
            fVar27 = 0.0;
            uVar15 = 0;
            uVar16 = 0;
            fVar26 = 0.0;
            do {
              fVar25 = *(float *)(lVar10 + uVar15 * 4);
              fVar2 = *(float *)(lVar10 + 4 + uVar15 * 4);
              uVar5 = (uint)uVar15;
              uVar14 = (uint)uVar16;
              if (fVar27 < fVar25) {
                uVar14 = uVar5;
              }
              fVar28 = fVar25;
              if (fVar25 <= fVar27) {
                fVar28 = fVar27;
              }
              uVar12 = uVar5 + 1;
              if (fVar2 <= fVar28) {
                uVar12 = uVar14;
              }
              fVar27 = fVar2;
              if (fVar2 <= fVar28) {
                fVar27 = fVar28;
              }
              fVar28 = *(float *)(lVar10 + 8 + uVar15 * 4);
              uVar14 = uVar5 + 2;
              if (fVar28 <= fVar27) {
                uVar14 = uVar12;
              }
              fVar29 = fVar28;
              if (fVar28 <= fVar27) {
                fVar29 = fVar27;
              }
              fVar27 = *(float *)(lVar10 + 0xc + uVar15 * 4);
              uVar5 = uVar5 + 3;
              if (fVar27 <= fVar29) {
                uVar5 = uVar14;
              }
              uVar16 = (ulonglong)uVar5;
              fVar26 = fVar26 + fVar25 + fVar2 + fVar28 + fVar27;
              if (fVar27 <= fVar29) {
                fVar27 = fVar29;
              }
              uVar15 = uVar15 + 4;
            } while ((uVar1 & 0xfffffffc) != uVar15);
          }
          iVar19 = (int)uVar16;
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            fVar25 = *(float *)(lVar10 + uVar15 * 4);
            if (fVar27 < fVar25) {
              uVar16 = uVar15 & 0xffffffff;
            }
            iVar19 = (int)uVar16;
            fVar26 = fVar26 + fVar25;
            if (fVar25 <= fVar27) {
              fVar25 = fVar27;
            }
            uVar15 = uVar15 + 1;
            fVar27 = fVar25;
          }
        }
        local_a4 = (float)((double)(iVar19 + -10) / param_1);
        uVar14 = (uint)((double)(local_a4 + local_a4) * param_1);
        uVar5 = uVar14;
        if ((int)uVar14 < 0) {
          uVar5 = 0;
        }
        uVar12 = uVar14 + 0x15;
        if ((int)uVar1 < (int)(uVar14 + 0x15)) {
          uVar12 = uVar1;
        }
        if ((int)uVar5 < (int)uVar12) {
          uVar11 = (ulonglong)uVar5;
          uVar16 = ~uVar11;
          fVar24 = 0.0;
          uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
          if ((uVar12 - uVar5 & 7) != 0) {
            do {
              fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
              uVar11 = uVar11 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
          }
          if (6 < uVar16 + uVar12) {
            do {
              fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                       *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4) +
                       *(float *)(lVar10 + 0xc + uVar11 * 4) +
                       *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                       *(float *)(lVar10 + 0x1c + uVar11 * 4);
              uVar11 = uVar11 + 8;
            } while (uVar12 != uVar11);
          }
        }
        fVar27 = (local_a4 + local_a4) * DAT_0239011c;
        if (DAT_0240e348 <= fVar27) {
          uVar14 = (uint)((double)fVar27 * param_1);
          uVar5 = uVar14;
          if ((int)uVar14 < 0) {
            uVar5 = 0;
          }
          uVar12 = uVar14 + 0x15;
          if ((int)uVar1 < (int)(uVar14 + 0x15)) {
            uVar12 = uVar1;
          }
          if ((int)uVar5 < (int)uVar12) {
            uVar11 = (ulonglong)uVar5;
            uVar16 = ~uVar11;
            uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
            if ((uVar12 - uVar5 & 7) != 0) {
              do {
                fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
                uVar11 = uVar11 + 1;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
            }
            if (6 < uVar16 + uVar12) {
              do {
                fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                         *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4) +
                         *(float *)(lVar10 + 0xc + uVar11 * 4) +
                         *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                         *(float *)(lVar10 + 0x1c + uVar11 * 4);
                uVar11 = uVar11 + 8;
              } while (uVar12 != uVar11);
            }
          }
          if (DAT_0240e348 <= fVar27 * DAT_0239011c) {
            uVar14 = (uint)((double)(fVar27 * DAT_0239011c) * param_1);
            uVar5 = uVar14;
            if ((int)uVar14 < 0) {
              uVar5 = 0;
            }
            uVar12 = uVar14 + 0x15;
            if ((int)uVar1 < (int)(uVar14 + 0x15)) {
              uVar12 = uVar1;
            }
            if ((int)uVar5 < (int)uVar12) {
              uVar11 = (ulonglong)uVar5;
              uVar16 = ~uVar11;
              uVar15 = (ulonglong)(uVar12 - uVar5) & 7;
              if ((uVar12 - uVar5 & 7) != 0) {
                do {
                  fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4);
                  uVar11 = uVar11 + 1;
                  uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
              }
              if (6 < uVar16 + uVar12) {
                do {
                  fVar24 = fVar24 + *(float *)(lVar10 + uVar11 * 4) +
                           *(float *)(lVar10 + 4 + uVar11 * 4) + *(float *)(lVar10 + 8 + uVar11 * 4)
                           + *(float *)(lVar10 + 0xc + uVar11 * 4) +
                           *(float *)(lVar10 + 0x10 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x14 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x18 + uVar11 * 4) +
                           *(float *)(lVar10 + 0x1c + uVar11 * 4);
                  uVar11 = uVar11 + 8;
                } while (uVar12 != uVar11);
              }
            }
          }
        }
        fVar27 = 0.0;
        if (0.0 < fVar26) {
          fVar27 = fVar24 / fVar26;
        }
        FUN_00e83070();
        if (fVar27 <= local_94) {
          fVar27 = local_94;
        }
      }
    }
  }
  if ((bVar7) && (lVar13 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar8) && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar6) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (puVar9 == (undefined8 *)0x0) {
    return local_94;
  }
LAB_014a672c:
  FUN_00d50b20();
  return local_94;
}


