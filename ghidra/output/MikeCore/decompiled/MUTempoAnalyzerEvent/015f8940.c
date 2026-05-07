// Function: FUN_015f8940
// Address: 015f8940
// Size: 841 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x015f8992) */
/* WARNING: Removing unreachable block (ram,0x015f899b) */

void FUN_015f8940(float param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int in_ECX;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_40;
  char local_38;
  
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if ((param_1 != 0.0) || (NAN(param_1))) {
    iVar3 = *(int *)(local_40 + 0x18);
    iVar9 = iVar3 + 3;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    if (3 < iVar3) {
      lVar7 = *(longlong *)(local_40 + 0x10);
      uVar10 = (iVar9 >> 2) - 1;
      uVar13 = 0;
      if (6 < uVar10) {
        uVar14 = (ulonglong)uVar10 + 1;
        uVar13 = uVar14 & 0xfffffffffffffff8;
        uVar11 = (uVar13 - 8 >> 3) + 1;
        uVar5 = (ulonglong)((uint)uVar11 & 7);
        if (uVar13 - 8 < 0x38) {
          lVar8 = 0;
        }
        else {
          lVar12 = -(uVar11 & 0xfffffffffffffff8);
          lVar8 = 0;
          do {
            pfVar1 = (float *)(lVar7 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x10 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x20 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x30 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x40 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x50 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x60 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x70 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x80 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0x90 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xa0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xb0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xc0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xd0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xe0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar7 + 0xf0 + lVar8 * 4);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            lVar8 = lVar8 + 0x40;
            lVar12 = lVar12 + 8;
          } while (lVar12 != 0);
        }
        if (uVar5 != 0) {
          lVar8 = lVar7 + lVar8 * 4;
          lVar12 = 0;
          do {
            pfVar1 = (float *)(lVar8 + lVar12);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            pfVar1 = (float *)(lVar8 + 0x10 + lVar12);
            *pfVar1 = param_1;
            pfVar1[1] = param_1;
            pfVar1[2] = param_1;
            pfVar1[3] = param_1;
            lVar12 = lVar12 + 0x20;
          } while (uVar5 << 5 != lVar12);
        }
        if (uVar14 == uVar13) goto LAB_015f8b1d;
        lVar7 = lVar7 + uVar13 * 4;
      }
      lVar8 = 0;
      do {
        *(float *)(lVar7 + lVar8 * 4) = param_1;
        lVar8 = lVar8 + 1;
      } while ((iVar9 >> 2) - (int)uVar13 != (int)lVar8);
    }
  }
  else {
    ___bzero();
  }
LAB_015f8b1d:
  lVar7 = *(longlong *)(unaff_RDI + 0x70);
  if (lVar7 == local_40) {
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x70) = local_40;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_014832c0();
  if (iVar3 <= param_3) {
    param_3 = FUN_014832c0();
    param_3 = param_3 + -1;
  }
  lVar7 = DAT_02802f00;
  fVar2 = DAT_0239011c;
  if (0 < param_3) {
    iVar3 = *(int *)(unaff_RDI + 0x10);
    lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x70) + 0x10);
    uVar13 = 1;
    do {
      iVar9 = *(int *)(lVar7 + uVar13 * 4) + iVar3;
      uVar4 = iVar9 - in_ECX;
      uVar10 = iVar9 + in_ECX;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
      if (param_2 <= (int)uVar10) {
        uVar10 = param_2 - 1;
      }
      fVar15 = 0.0;
      if ((int)uVar4 <= (int)uVar10) {
        uVar11 = (ulonglong)uVar4;
        uVar6 = uVar10 + 1;
        fVar15 = 0.0;
        uVar5 = uVar11;
        if ((uVar6 - uVar4 & 1) != 0) {
          fVar15 = *(float *)(unaff_RSI + uVar11 * 4) * fVar2 + 0.0;
          uVar5 = uVar11 + 1;
        }
        if (~uVar11 + (ulonglong)uVar6 != 0) {
          do {
            fVar16 = *(float *)(unaff_RSI + uVar5 * 4);
            fVar17 = fVar16 * fVar2;
            fVar18 = fVar17;
            if (uVar5 != uVar10) {
              fVar18 = fVar16;
            }
            if (uVar11 != uVar5) {
              fVar17 = fVar18;
            }
            fVar16 = *(float *)(unaff_RSI + 4 + uVar5 * 4);
            fVar18 = fVar16 * fVar2;
            if (uVar5 + 1 == (ulonglong)uVar10) {
              fVar16 = fVar18;
            }
            if (uVar5 + 1 != uVar11) {
              fVar18 = fVar16;
            }
            fVar15 = fVar15 + fVar17 + fVar18;
            uVar5 = uVar5 + 2;
          } while (uVar5 != uVar6);
        }
      }
      fVar16 = param_1;
      if (param_1 <= fVar15) {
        fVar16 = fVar15;
      }
      *(float *)(lVar8 + uVar13 * 4) = fVar16;
      uVar13 = uVar13 + 1;
    } while (uVar13 != param_3 + 1);
  }
  return;
}


