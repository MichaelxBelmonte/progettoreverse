// Function: FUN_00e83930
// Address: 00e83930
// Size: 1129 bytes
// Class: GNFastFourierTransformer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e83930(undefined8 param_1,uint param_2)

{
  float *pfVar1;
  bool bVar2;
  float *in_RCX;
  ulonglong uVar3;
  float *pfVar4;
  int unaff_ESI;
  float *unaff_RDI;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  uVar22 = (uint)((ulonglong)param_1 >> 0x20);
  fVar21 = (float)param_1;
  if ((int)param_2 < 0) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (in_RCX != (float *)0x0) {
      *in_RCX = *unaff_RDI;
      return 0;
    }
  }
  else {
    uVar8 = unaff_ESI - 1;
    if (unaff_ESI <= (int)param_2) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = unaff_RDI[(int)uVar8];
      }
      return (ulonglong)(uint)(float)(int)uVar8;
    }
    if ((((int)param_2 < 2) || (iVar5 = unaff_ESI + -3, iVar5 < (int)param_2)) ||
       (DAT_0239011c < fVar21)) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = unaff_RDI[param_2];
      }
      uVar10 = 0;
      fVar9 = (float)(int)param_2;
    }
    else {
      uVar10 = 0;
      fVar9 = (float)(int)param_2;
      fVar20 = fVar9 - fVar21;
      if (unaff_ESI < 1) {
        fVar12 = 0.0;
        fVar15 = 0.0;
      }
      else {
        uVar6 = (uint)fVar20;
        if ((int)uVar6 < 0) {
          fVar12 = *unaff_RDI;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar15 = fVar20 - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar12 = *unaff_RDI;
            pfVar4 = unaff_RDI + 1;
            uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
            fVar19 = fVar12;
          }
          else {
            uVar7 = (ulonglong)(uVar6 - 1);
            pfVar1 = unaff_RDI + uVar7;
            fVar19 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (ulonglong)uVar6;
              }
              fVar12 = unaff_RDI[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = unaff_RDI + uVar6;
              uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar12 = unaff_RDI[uVar6];
              uVar7 = (ulonglong)(uVar6 + 2);
              pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar12),unaff_RDI[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
          fVar11 = (auVar13._0_4_ - auVar18._0_4_) * _DAT_02394140;
          fVar14 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar16 = (fVar19 + *pfVar4) * DAT_0239011c;
          fVar12 = (((fVar11 + fVar14) * fVar15 + (fVar16 - fVar12)) * fVar15 +
                   (((fVar16 - fVar14) - fVar11) - fVar19)) * fVar15 + fVar12;
        }
        else {
          fVar12 = unaff_RDI[uVar8];
        }
        uVar6 = (uint)(fVar9 + fVar21);
        if ((int)uVar6 < 0) {
          fVar15 = *unaff_RDI;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar19 = (fVar9 + fVar21) - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar15 = *unaff_RDI;
            pfVar4 = unaff_RDI + 1;
            uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
            fVar11 = fVar15;
          }
          else {
            uVar7 = (ulonglong)(uVar6 - 1);
            pfVar1 = unaff_RDI + uVar7;
            fVar11 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (ulonglong)uVar6;
              }
              fVar15 = unaff_RDI[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = unaff_RDI + uVar6;
              uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar15 = unaff_RDI[uVar6];
              uVar7 = (ulonglong)(uVar6 + 2);
              pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar15),unaff_RDI[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar11),0x10);
          fVar16 = (auVar13._0_4_ - auVar18._0_4_) * _DAT_02394140;
          fVar17 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar14 = (fVar11 + *pfVar4) * DAT_0239011c;
          fVar15 = (((fVar16 + fVar17) * fVar19 + (fVar14 - fVar15)) * fVar19 +
                   (((fVar14 - fVar17) - fVar16) - fVar11)) * fVar19 + fVar15;
        }
        else {
          fVar15 = unaff_RDI[uVar8];
        }
      }
      fVar11 = fVar9 + fVar21;
      fVar19 = unaff_RDI[param_2];
      if ((fVar19 < fVar12) || (fVar19 < fVar15)) {
        fVar14 = fVar15;
        if (fVar15 <= fVar12) {
          fVar21 = (float)((uint)fVar21 ^ _DAT_023945e0);
          uVar22 = uVar22 ^ _UNK_023945e4;
          fVar14 = fVar12;
        }
        if (fVar19 < fVar14) {
          fVar9 = (float)(~-(uint)(fVar12 < fVar15) & (uint)fVar20 |
                         (uint)fVar11 & -(uint)(fVar12 < fVar15));
          uVar10 = 0;
          if (unaff_ESI < 1) {
            fVar19 = fVar14;
            if (fVar14 < 0.0) {
              fVar9 = fVar9 + fVar21;
              fVar19 = 0.0;
            }
          }
          else {
            fVar20 = fVar9;
            uVar6 = uVar10;
            do {
              uVar10 = uVar6;
              fVar9 = fVar20;
              fVar20 = fVar21 + fVar9;
              uVar6 = (uint)fVar20;
              if ((int)uVar6 < 0) {
                fVar12 = *unaff_RDI;
              }
              else if ((int)uVar6 < (int)uVar8) {
                fVar15 = fVar20 - (float)(int)uVar6;
                if (uVar6 == 0) {
                  fVar19 = *unaff_RDI;
                  uVar7 = (ulonglong)(2 < unaff_ESI) + 1;
                  pfVar4 = unaff_RDI + 1;
                  fVar12 = fVar19;
                }
                else {
                  uVar3 = (ulonglong)(uVar6 - 1);
                  fVar19 = unaff_RDI[uVar3];
                  if (iVar5 < (int)uVar6) {
                    if ((int)uVar6 < unaff_ESI) {
                      uVar3 = (ulonglong)uVar6;
                    }
                    uVar6 = (uint)((int)uVar3 < (int)uVar8) + (int)uVar3;
                    uVar7 = (ulonglong)(((int)uVar6 < (int)uVar8) + uVar6);
                    pfVar4 = unaff_RDI + uVar6;
                    fVar12 = unaff_RDI[uVar3];
                  }
                  else {
                    uVar7 = (ulonglong)(uVar6 + 2);
                    pfVar4 = unaff_RDI + (ulonglong)uVar6 + 1;
                    fVar12 = unaff_RDI[uVar6];
                  }
                }
                auVar18 = insertps(ZEXT416((uint)fVar12),unaff_RDI[uVar7],0x10);
                auVar13 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
                fVar16 = (auVar18._0_4_ - auVar13._0_4_) * _DAT_02394140;
                fVar17 = (auVar18._4_4_ - auVar13._4_4_) * _UNK_02394144;
                fVar11 = (fVar19 + *pfVar4) * DAT_0239011c;
                fVar12 = (((fVar16 + fVar17) * fVar15 + (fVar11 - fVar12)) * fVar15 +
                         (((fVar11 - fVar17) - fVar16) - fVar19)) * fVar15 + fVar12;
              }
              else {
                fVar12 = unaff_RDI[uVar8];
              }
              bVar2 = fVar14 < fVar12;
              uVar6 = uVar22;
              fVar19 = fVar14;
              fVar14 = fVar12;
            } while (bVar2);
          }
        }
      }
      if (in_RCX != (float *)0x0) {
        *in_RCX = fVar19;
        return CONCAT44(uVar10,fVar9);
      }
    }
  }
  return CONCAT44(uVar10,fVar9);
}


