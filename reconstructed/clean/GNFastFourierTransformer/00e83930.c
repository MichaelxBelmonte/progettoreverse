// Function: FUN_00e83930
// Address: 00e83930
// Size: 1129 bytes
// Class: GNFastFourierTransformer

uint64_t FUN_00e83930(uint64_t param_1,uint param_2)

{
  float *pfVar1;
  bool bVar2;
  float *in_RCX;
  uint64_t uVar3;
  float *pfVar4;
  int unaff_ESI;
  float *this_ptr;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  uint8_t auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  uint8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  uVar22 = (uint)((uint64_t)param_1 >> 0x20);
  fVar21 = (float)param_1;
  if ((int)param_2 < 0) {
    fVar9 = 0.0;
    uVar10 = 0;
    if (in_RCX != (float *)0x0) {
      *in_RCX = *this_ptr;
      return 0;
    }
  }
  else {
    uVar8 = unaff_ESI - 1;
    if (unaff_ESI <= (int)param_2) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = this_ptr[(int)uVar8];
      }
      return (uint64_t)(uint)(float)(int)uVar8;
    }
    if ((((int)param_2 < 2) || (iVar5 = unaff_ESI + -3, iVar5 < (int)param_2)) ||
       (g_0239011c < fVar21)) {
      if (in_RCX != (float *)0x0) {
        *in_RCX = this_ptr[param_2];
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
          fVar12 = *this_ptr;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar15 = fVar20 - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar12 = *this_ptr;
            pfVar4 = this_ptr + 1;
            uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
            fVar19 = fVar12;
          }
          else {
            uVar7 = (uint64_t)(uVar6 - 1);
            pfVar1 = this_ptr + uVar7;
            fVar19 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (uint64_t)uVar6;
              }
              fVar12 = this_ptr[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = this_ptr + uVar6;
              uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar12 = this_ptr[uVar6];
              uVar7 = (uint64_t)(uVar6 + 2);
              pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar12),this_ptr[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
          fVar11 = (auVar13._0_4_ - auVar18._0_4_) * g_02394140;
          fVar14 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar16 = (fVar19 + *pfVar4) * g_0239011c;
          fVar12 = (((fVar11 + fVar14) * fVar15 + (fVar16 - fVar12)) * fVar15 +
                   (((fVar16 - fVar14) - fVar11) - fVar19)) * fVar15 + fVar12;
        }
        else {
          fVar12 = this_ptr[uVar8];
        }
        uVar6 = (uint)(fVar9 + fVar21);
        if ((int)uVar6 < 0) {
          fVar15 = *this_ptr;
        }
        else if ((int)uVar6 < (int)uVar8) {
          fVar19 = (fVar9 + fVar21) - (float)(int)uVar6;
          if (uVar6 == 0) {
            fVar15 = *this_ptr;
            pfVar4 = this_ptr + 1;
            uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
            fVar11 = fVar15;
          }
          else {
            uVar7 = (uint64_t)(uVar6 - 1);
            pfVar1 = this_ptr + uVar7;
            fVar11 = *pfVar1;
            if (iVar5 < (int)uVar6) {
              if ((int)uVar6 < unaff_ESI) {
                uVar7 = (uint64_t)uVar6;
              }
              fVar15 = this_ptr[uVar7];
              uVar6 = (uint)((int)uVar7 < (int)uVar8) + (int)uVar7;
              pfVar4 = this_ptr + uVar6;
              uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
            }
            else {
              fVar15 = this_ptr[uVar6];
              uVar7 = (uint64_t)(uVar6 + 2);
              pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
            }
          }
          auVar13 = insertps(ZEXT416((uint)fVar15),this_ptr[uVar7],0x10);
          auVar18 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar11),0x10);
          fVar16 = (auVar13._0_4_ - auVar18._0_4_) * g_02394140;
          fVar17 = (auVar13._4_4_ - auVar18._4_4_) * _UNK_02394144;
          fVar14 = (fVar11 + *pfVar4) * g_0239011c;
          fVar15 = (((fVar16 + fVar17) * fVar19 + (fVar14 - fVar15)) * fVar19 +
                   (((fVar14 - fVar17) - fVar16) - fVar11)) * fVar19 + fVar15;
        }
        else {
          fVar15 = this_ptr[uVar8];
        }
      }
      fVar11 = fVar9 + fVar21;
      fVar19 = this_ptr[param_2];
      if ((fVar19 < fVar12) || (fVar19 < fVar15)) {
        fVar14 = fVar15;
        if (fVar15 <= fVar12) {
          fVar21 = (float)((uint)fVar21 ^ g_023945e0);
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
                fVar12 = *this_ptr;
              }
              else if ((int)uVar6 < (int)uVar8) {
                fVar15 = fVar20 - (float)(int)uVar6;
                if (uVar6 == 0) {
                  fVar19 = *this_ptr;
                  uVar7 = (uint64_t)(2 < unaff_ESI) + 1;
                  pfVar4 = this_ptr + 1;
                  fVar12 = fVar19;
                }
                else {
                  uVar3 = (uint64_t)(uVar6 - 1);
                  fVar19 = this_ptr[uVar3];
                  if (iVar5 < (int)uVar6) {
                    if ((int)uVar6 < unaff_ESI) {
                      uVar3 = (uint64_t)uVar6;
                    }
                    uVar6 = (uint)((int)uVar3 < (int)uVar8) + (int)uVar3;
                    uVar7 = (uint64_t)(((int)uVar6 < (int)uVar8) + uVar6);
                    pfVar4 = this_ptr + uVar6;
                    fVar12 = this_ptr[uVar3];
                  }
                  else {
                    uVar7 = (uint64_t)(uVar6 + 2);
                    pfVar4 = this_ptr + (uint64_t)uVar6 + 1;
                    fVar12 = this_ptr[uVar6];
                  }
                }
                auVar18 = insertps(ZEXT416((uint)fVar12),this_ptr[uVar7],0x10);
                auVar13 = insertps(ZEXT416((uint)*pfVar4),ZEXT416((uint)fVar19),0x10);
                fVar16 = (auVar18._0_4_ - auVar13._0_4_) * g_02394140;
                fVar17 = (auVar18._4_4_ - auVar13._4_4_) * _UNK_02394144;
                fVar11 = (fVar19 + *pfVar4) * g_0239011c;
                fVar12 = (((fVar16 + fVar17) * fVar15 + (fVar11 - fVar12)) * fVar15 +
                         (((fVar11 - fVar17) - fVar16) - fVar19)) * fVar15 + fVar12;
              }
              else {
                fVar12 = this_ptr[uVar8];
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

