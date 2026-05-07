// Function: FUN_01604f80
// Address: 01604f80
// Size: 3317 bytes
// Class: MUTempoAnalyzerEvent
// String references:
//   "filterMatrixUsingVectors : filterIndex >= fineStepHannWindowsCount !"


/* WARNING: Removing unreachable block (ram,0x01605465) */
/* WARNING: Removing unreachable block (ram,0x0160546e) */
/* WARNING: Removing unreachable block (ram,0x016052e4) */
/* WARNING: Removing unreachable block (ram,0x016052ed) */
/* WARNING: Removing unreachable block (ram,0x01605142) */
/* WARNING: Removing unreachable block (ram,0x0160514b) */
/* WARNING: Removing unreachable block (ram,0x0160508a) */
/* WARNING: Removing unreachable block (ram,0x01605093) */
/* WARNING: Removing unreachable block (ram,0x01605593) */
/* WARNING: Removing unreachable block (ram,0x0160559c) */

void FUN_01604f80(float param_1,float param_2,float param_3)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *in_RCX;
  undefined *puVar9;
  uint in_EDX;
  int iVar10;
  int iVar11;
  uint unaff_ESI;
  size_t sVar12;
  undefined8 in_R8;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong local_1e8;
  char local_1e0;
  longlong local_98;
  ulonglong local_80;
  longlong local_58;
  longlong local_48;
  
  uVar15 = (ulonglong)in_EDX;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar8 = &DAT_02572358;
  (*DAT_02572370)();
  iVar10 = 0;
  do {
    FUN_01602560((float)iVar10 * DAT_02391090);
    if (local_1e0 == '\0') {
      if (local_1e8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_1e0 = '\0';
    }
    FUN_00d21140();
    if (local_1e8 != 0) {
      FUN_00d50b20();
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 300);
  iVar10 = FUN_01483610(DAT_024113f8);
  iVar4 = FUN_01483610(DAT_024113f8);
  iVar5 = FUN_01483610(DAT_024113f8);
  iVar6 = FUN_00e7d780((float)iVar10 * DAT_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  fVar18 = DAT_02390124;
  ___bzero();
  if (0 < (int)in_EDX) {
    fVar16 = DAT_02421580 * param_2;
    param_2 = param_2 * DAT_023942a8;
    fVar19 = DAT_02390124 / (float)(iVar10 - iVar6);
    uVar13 = 0;
    do {
      fVar17 = fVar16;
      if (((longlong)uVar13 <= (longlong)iVar10) &&
         (fVar17 = param_2, (longlong)iVar6 <= (longlong)uVar13)) {
        fVar17 = (float)((int)uVar13 - iVar6) * fVar19 * (fVar16 - param_2) + param_2;
      }
      iVar7 = FUN_00e7d780(fVar17 * DAT_023908ec);
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      if (299 < iVar7) {
        FUN_00e828a0();
      }
      *(int *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) = iVar7;
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  iVar10 = FUN_00e7d780((float)iVar4 * DAT_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  sVar12 = (size_t)in_R8;
  if (0 < (int)in_EDX) {
    fVar16 = DAT_0240e31c * param_1;
    param_1 = param_1 * DAT_02390d2c;
    fVar19 = DAT_02390124 / (float)(iVar4 - iVar10);
    uVar13 = 0;
    do {
      fVar17 = fVar16;
      if (((longlong)uVar13 <= (longlong)iVar4) &&
         (fVar17 = param_1, (longlong)iVar10 <= (longlong)uVar13)) {
        fVar17 = (float)((int)uVar13 - iVar10) * fVar19 * (fVar16 - param_1) + param_1;
      }
      iVar6 = FUN_00e7d780(fVar17 * DAT_023908ec);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      if (299 < iVar6) {
        FUN_00e828a0();
      }
      sVar12 = (size_t)in_R8;
      *(int *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) = iVar6;
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  iVar10 = FUN_00e7d780((float)iVar5 * DAT_02394288);
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)in_EDX) {
    fVar16 = DAT_024112a4 * param_3;
    param_3 = param_3 * 0.0;
    puVar9 = (undefined *)(longlong)iVar10;
    uVar13 = 0;
    do {
      if ((longlong)iVar5 < (longlong)uVar13) {
        *(float *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) = fVar16;
      }
      else if ((longlong)uVar13 < (longlong)puVar9) {
        *(float *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) = param_3;
      }
      else {
        *(float *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) =
             (float)((int)uVar13 - iVar10) * (fVar18 / (float)(iVar5 - iVar10)) * (fVar16 - param_3)
             + param_3;
      }
      uVar13 = uVar13 + 1;
    } while (uVar15 != uVar13);
  }
  FUN_00c8e690();
  if (local_1e8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  _memcpy(puVar9,(void *)(longlong)(int)(unaff_ESI * in_EDX * 4),sVar12);
  ___bzero();
  if ((int)unaff_ESI < 1) {
    bVar2 = false;
    local_58 = 0;
    bVar3 = false;
    local_48 = 0;
  }
  else {
    local_98 = 0;
    local_80 = 0;
    local_48 = 0;
    bVar3 = false;
    local_58 = 0;
    bVar2 = false;
    do {
      if (0 < (int)in_EDX) {
        uVar13 = 0;
        do {
          fVar18 = *(float *)(*(longlong *)(local_1e8 + 0x10) + local_98 + uVar13 * 4);
          fVar16 = *(float *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4);
          iVar5 = 0;
          iVar4 = 0;
          iVar10 = 0;
          if (DAT_0239424c < fVar16) {
            fVar16 = fVar16 * *(float *)(*(longlong *)(*in_RCX + 0x10) + local_98 + uVar13 * 4);
            iVar10 = FUN_00e7d780();
            iVar4 = FUN_00e7d780(fVar16 + fVar16);
            iVar5 = FUN_00e7d780(fVar16 * DAT_02394298);
          }
          lVar1 = *(longlong *)
                   (puVar8[2] + (longlong)*(int *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) * 8
                   );
          if (local_58 == lVar1) {
            if ((!bVar2) && (local_58 != 0)) {
              bVar2 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_58 != 0)) {
              FUN_00d50b20();
              bVar2 = true;
              local_58 = lVar1;
            }
            else {
              bVar2 = true;
              local_58 = lVar1;
            }
          }
          iVar6 = *(int *)(local_58 + 0x18);
          iVar7 = iVar6 + 3;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          lVar1 = *(longlong *)
                   (puVar8[2] + (longlong)*(int *)(*(longlong *)(local_1e8 + 0x10) + uVar13 * 4) * 8
                   );
          if (local_48 == lVar1) {
            if ((!bVar3) && (local_48 != 0)) {
              bVar3 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            if ((bVar3) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar3 = true;
              local_48 = lVar1;
            }
            else {
              bVar3 = true;
              local_48 = lVar1;
            }
          }
          iVar7 = iVar7 >> 2;
          iVar6 = *(int *)(local_48 + 0x18);
          iVar11 = iVar6 + 7;
          if (-1 < iVar6) {
            iVar11 = iVar6;
          }
          iVar11 = iVar11 >> 3;
          iVar14 = (int)uVar13;
          FUN_015c31c0(*(float *)(*(longlong *)(local_48 + 0x10) + (longlong)iVar11 * 4) * fVar18,
                       uVar13 & 0xffffffff,iVar7);
          if (7 < iVar6) {
            fVar16 = *(float *)(*(longlong *)(local_48 + 0x10) + (ulonglong)(iVar11 - 1) * 4) *
                     fVar18;
            if (local_80 != 0) {
              FUN_015c31c0(fVar16,iVar14 - iVar10,iVar7);
            }
            if (local_80 < unaff_ESI - 1) {
              FUN_015c31c0(fVar16,iVar10 + iVar14,iVar7);
            }
            if (0xf < iVar6) {
              fVar16 = *(float *)(*(longlong *)(local_48 + 0x10) + (ulonglong)(iVar11 - 2) * 4) *
                       fVar18;
              if (1 < local_80) {
                FUN_015c31c0(fVar16,iVar14 - iVar4,iVar7);
              }
              if ((longlong)local_80 < (longlong)(int)(unaff_ESI - 2)) {
                FUN_015c31c0(fVar16,iVar4 + iVar14,iVar7);
              }
              if (0x17 < iVar6) {
                fVar18 = fVar18 * *(float *)(*(longlong *)(local_48 + 0x10) +
                                            (ulonglong)(iVar11 - 3) * 4);
                if (2 < local_80) {
                  FUN_015c31c0(fVar18,iVar14 - iVar5,iVar7);
                }
                if ((longlong)local_80 < (longlong)(int)(unaff_ESI - 3)) {
                  FUN_015c31c0(fVar18,iVar5 + iVar14,iVar7);
                }
              }
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar15 != uVar13);
      }
      local_80 = local_80 + 1;
      local_98 = local_98 + (longlong)(int)in_EDX * 4;
    } while (local_80 != unaff_ESI);
  }
  if (local_1e8 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((bVar2) && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


