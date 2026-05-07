// Function: FUN_015f8d00
// Address: 015f8d00
// Size: 610 bytes
// Class: MUTempoAnalyzerEvent


float FUN_015f8d00(int param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong unaff_RSI;
  ulonglong uVar6;
  int iVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar3 = FUN_014832c0();
  lVar10 = *param_3;
  if (lVar10 == 0) {
    iVar7 = *(int *)(DAT_02802f00 + 4) + *(int *)(unaff_RDI + 0x10);
    fVar11 = 0.0;
    if (iVar7 < iVar3) {
      lVar10 = 1;
      fVar11 = 0.0;
      do {
        uVar5 = iVar7 - param_1;
        if (iVar7 - param_1 < 0) {
          uVar5 = 0;
        }
        uVar2 = iVar7 + param_1;
        if (iVar3 <= iVar7 + param_1) {
          uVar2 = iVar3 - 1;
        }
        if ((int)uVar5 <= (int)uVar2) {
          uVar4 = (ulonglong)uVar5;
          uVar9 = uVar2 + 1;
          uVar6 = uVar4;
          if ((uVar9 - uVar5 & 1) != 0) {
            fVar11 = fVar11 + *(float *)(unaff_RSI + uVar4 * 4) * DAT_0239011c;
            uVar6 = uVar4 + 1;
          }
          if (~uVar4 + (ulonglong)uVar9 != 0) {
            do {
              fVar1 = *(float *)(unaff_RSI + uVar6 * 4);
              fVar12 = fVar1 * DAT_0239011c;
              fVar13 = fVar12;
              if (uVar6 != uVar2) {
                fVar13 = fVar1;
              }
              if (uVar4 != uVar6) {
                fVar12 = fVar13;
              }
              fVar1 = *(float *)(unaff_RSI + 4 + uVar6 * 4);
              fVar13 = fVar1 * DAT_0239011c;
              if (uVar6 + 1 == (ulonglong)uVar2) {
                fVar1 = fVar13;
              }
              if (uVar6 + 1 != uVar4) {
                fVar13 = fVar1;
              }
              fVar11 = fVar11 + fVar12 + fVar13;
              uVar6 = uVar6 + 2;
            } while (uVar6 != uVar9);
          }
        }
        iVar7 = *(int *)(DAT_02802f00 + 4 + lVar10 * 4) + *(int *)(unaff_RDI + 0x10);
        lVar10 = lVar10 + 1;
      } while (iVar7 < iVar3);
    }
  }
  else {
    fVar11 = 0.0;
    if (1 < (int)*(uint *)(lVar10 + 0x18)) {
      fVar11 = 0.0;
      uVar6 = 1;
      do {
        if (*(char *)(*(longlong *)(lVar10 + 0x10) + uVar6) != '\0') {
          iVar7 = *(int *)(unaff_RDI + 0x10) + *(int *)(DAT_02802f00 + uVar6 * 4);
          if (iVar3 <= iVar7) {
            return fVar11;
          }
          uVar5 = iVar7 - param_1;
          if (iVar7 - param_1 < 0) {
            uVar5 = 0;
          }
          uVar2 = iVar7 + param_1;
          if (iVar3 <= iVar7 + param_1) {
            uVar2 = iVar3 - 1;
          }
          if ((int)uVar5 <= (int)uVar2) {
            uVar8 = (ulonglong)uVar5;
            uVar9 = uVar2 + 1;
            uVar4 = uVar8;
            if ((uVar9 - uVar5 & 1) != 0) {
              fVar11 = fVar11 + *(float *)(unaff_RSI + uVar8 * 4) * DAT_0239011c;
              uVar4 = uVar8 + 1;
            }
            if (~uVar8 + (ulonglong)uVar9 != 0) {
              do {
                fVar1 = *(float *)(unaff_RSI + uVar4 * 4);
                fVar12 = fVar1 * DAT_0239011c;
                fVar13 = fVar12;
                if (uVar4 != uVar2) {
                  fVar13 = fVar1;
                }
                if (uVar8 != uVar4) {
                  fVar12 = fVar13;
                }
                fVar1 = *(float *)(unaff_RSI + 4 + uVar4 * 4);
                fVar13 = fVar1 * DAT_0239011c;
                if (uVar4 + 1 == (ulonglong)uVar2) {
                  fVar1 = fVar13;
                }
                if (uVar4 + 1 != uVar8) {
                  fVar13 = fVar1;
                }
                fVar11 = fVar11 + fVar12 + fVar13;
                uVar4 = uVar4 + 2;
              } while (uVar4 != uVar9);
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != *(uint *)(lVar10 + 0x18));
    }
  }
  return fVar11;
}


