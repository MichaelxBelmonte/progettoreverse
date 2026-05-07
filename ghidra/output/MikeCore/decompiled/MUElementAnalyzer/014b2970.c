// Function: FUN_014b2970
// Address: 014b2970
// Size: 1149 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014b2d14) */
/* WARNING: Removing unreachable block (ram,0x014b2d1d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014b2970(double param_1,double param_2,float param_3,float param_4)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong in_RDX;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong unaff_RSI;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_70;
  char local_68;
  float local_44;
  float local_40;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar5 = (uint)(param_2 + param_2);
  lVar7 = FUN_00e83010();
  lVar8 = FUN_00e83010();
  dVar3 = (double)_exp(SUB84(DAT_0240e3d0 / ((double)param_4 * param_1),0));
  fVar15 = (float)dVar3;
  if (0 < (longlong)unaff_RSI) {
    uVar13 = unaff_RSI;
    fVar16 = param_3;
    if ((unaff_RSI & 1) != 0) {
      uVar13 = unaff_RSI - 1;
      fVar18 = *(float *)(in_RDX + -4 + unaff_RSI * 4);
      fVar18 = (float)(~-(uint)(0.0 < fVar18) & (_DAT_023945e0 ^ (uint)fVar18) |
                      (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar15 * param_3;
      if (param_3 <= fVar18) {
        fVar16 = fVar18;
      }
      *(float *)(lVar8 + -4 + unaff_RSI * 4) = fVar16;
    }
    uVar4 = _DAT_023945e0;
    if (unaff_RSI != 1) {
      lVar9 = uVar13 + 2;
      do {
        fVar18 = *(float *)(in_RDX + -0xc + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0xc + lVar9 * 4) = fVar16;
        fVar18 = *(float *)(in_RDX + -0x10 + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0x10 + lVar9 * 4) = fVar16;
        lVar9 = lVar9 + -2;
      } while (2 < lVar9);
    }
  }
  uVar13 = (ulonglong)(int)uVar5;
  ___bzero();
  if (0 < (longlong)unaff_RSI) {
    dVar3 = DAT_0238fee8 / param_2;
    lVar9 = (longlong)(int)(DAT_023942d0 * param_2);
    uVar10 = (longlong)(param_2 * 0.0) + lVar9;
    iVar6 = 0;
    uVar14 = 0;
    local_40 = 0.0;
    fVar16 = 0.0;
    local_34 = DAT_02390d00;
    local_44 = param_3;
    do {
      if (uVar14 == uVar10) {
        fVar18 = (float)((double)fVar16 * dVar3 + DAT_023b19a0);
        fVar17 = fVar18 - local_40;
        if (((0.0 < local_40) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar10 = (longlong)((double)(iVar6 + -2) * param_2) + lVar9;
          if ((longlong)uVar10 < 0) {
            uVar10 = 0;
          }
          uVar12 = uVar10;
          fVar16 = DAT_0240e30c;
          if (0 < (int)uVar5) {
            lVar1 = uVar10 + uVar13;
            do {
              if ((uVar10 | uVar13) >> 0x20 == 0) {
                uVar11 = (uVar10 & 0xffffffff) % (ulonglong)uVar5;
              }
              else {
                uVar11 = (longlong)uVar10 % (longlong)uVar13;
              }
              fVar2 = *(float *)(lVar7 + uVar11 * 4);
              uVar11 = uVar10;
              if (fVar2 <= fVar16) {
                fVar2 = fVar16;
                uVar11 = uVar12;
              }
              uVar12 = uVar11;
              fVar16 = fVar2;
              uVar10 = uVar10 + 1;
            } while ((longlong)uVar10 < lVar1);
          }
          FUN_014328b0(SUB84((double)(longlong)uVar12 / param_1,0),(double)fVar16 + DAT_023b19a0);
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
        uVar10 = (longlong)((double)iVar6 * param_2) + lVar9;
        fVar16 = 0.0;
        local_40 = fVar18;
        local_34 = fVar17;
      }
      fVar18 = *(float *)(in_RDX + uVar14 * 4);
      fVar18 = local_44 * fVar15 +
               (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 |
                      ((uint)fVar18 ^ _DAT_023945e0) & -(uint)(fVar18 < 0.0));
      local_44 = param_3;
      if (param_3 <= fVar18) {
        local_44 = fVar18;
      }
      fVar18 = *(float *)(lVar8 + uVar14 * 4) / local_44;
      if ((uVar14 | uVar13) >> 0x20 == 0) {
        uVar12 = (uVar14 & 0xffffffff) % (ulonglong)uVar5;
      }
      else {
        uVar12 = (longlong)uVar14 % (longlong)uVar13;
      }
      *(float *)(lVar7 + uVar12 * 4) = fVar18;
      fVar16 = fVar16 + fVar18;
      uVar14 = uVar14 + 1;
    } while (uVar14 != unaff_RSI);
  }
  FUN_00e83070();
  FUN_00e83070();
  return;
}


