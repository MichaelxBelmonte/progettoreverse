// Function: FUN_014a02f0
// Address: 014a02f0
// Size: 1374 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014a06f1) */
/* WARNING: Removing unreachable block (ram,0x014a06fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014a02f0(double param_1,double param_2,float param_3,float param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int in_ECX;
  ulonglong uVar7;
  ulonglong in_RDX;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong unaff_RSI;
  longlong in_R8;
  longlong in_R9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  longlong local_res8;
  longlong local_70;
  char local_68;
  float local_50;
  float local_4c;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar3 = (uint)(param_2 + param_2);
  lVar5 = FUN_00e83010();
  dVar13 = (double)_exp(SUB84(DAT_0240e3d0 / ((double)param_4 * param_1),0));
  fVar14 = (float)dVar13;
  if (0 < (longlong)in_RDX) {
    uVar11 = in_RDX;
    fVar12 = param_3;
    if ((in_RDX & 1) != 0) {
      uVar11 = in_RDX - 1;
      fVar15 = *(float *)(in_R8 + -4 + in_RDX * 4);
      fVar15 = (float)(~-(uint)(0.0 < fVar15) & (_DAT_023945e0 ^ (uint)fVar15) |
                      (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar14 * param_3;
      if (param_3 <= fVar15) {
        fVar12 = fVar15;
      }
      *(float *)(unaff_RSI + -4 + in_RDX * 4) = fVar12;
    }
    uVar2 = _DAT_023945e0;
    if (in_RDX != 1) {
      lVar6 = uVar11 + 2;
      do {
        fVar15 = *(float *)(in_R8 + -0xc + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(unaff_RSI + -0xc + lVar6 * 4) = fVar12;
        fVar15 = *(float *)(in_R8 + -0x10 + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(unaff_RSI + -0x10 + lVar6 * 4) = fVar12;
        lVar6 = lVar6 + -2;
      } while (2 < lVar6);
    }
  }
  uVar11 = (ulonglong)(int)uVar3;
  ___bzero();
  if ((longlong)in_RDX < 1) {
    iVar4 = 0;
  }
  else {
    dVar13 = DAT_0238fee8 / param_2;
    lVar6 = (longlong)(int)(DAT_023942d0 * param_2);
    uVar7 = (longlong)(param_2 * 0.0) + lVar6;
    iVar4 = 0;
    uVar10 = 0;
    local_4c = 0.0;
    fVar12 = 0.0;
    fVar15 = 0.0;
    local_34 = DAT_02390d00;
    local_50 = param_3;
    do {
      if (uVar10 == uVar7) {
        fVar16 = (float)((double)fVar15 * dVar13 + DAT_023b19a0);
        if (iVar4 < in_ECX) {
          fVar15 = DAT_02390d2c;
          if (fVar16 <= DAT_02390d2c) {
            fVar15 = fVar16;
          }
          *(float *)(in_R9 + (longlong)iVar4 * 4) = fVar15;
          *(float *)(local_res8 + (longlong)iVar4 * 4) = (float)SQRT((double)fVar12 * dVar13);
        }
        fVar17 = fVar16 - local_4c;
        if (((0.0 < local_4c) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar7 = (longlong)((double)(iVar4 + -2) * param_2) + lVar6;
          if ((longlong)uVar7 < 0) {
            uVar7 = 0;
          }
          uVar9 = uVar7;
          if (0 < (int)uVar3) {
            lVar1 = uVar7 + uVar11;
            fVar12 = DAT_0240e30c;
            do {
              if ((uVar7 | uVar11) >> 0x20 == 0) {
                uVar8 = (uVar7 & 0xffffffff) % (ulonglong)uVar3;
              }
              else {
                uVar8 = (longlong)uVar7 % (longlong)uVar11;
              }
              fVar15 = *(float *)(lVar5 + uVar8 * 4);
              uVar8 = uVar7;
              if (fVar15 <= fVar12) {
                fVar15 = fVar12;
                uVar8 = uVar9;
              }
              uVar9 = uVar8;
              fVar12 = fVar15;
              uVar7 = uVar7 + 1;
            } while ((longlong)uVar7 < lVar1);
          }
          FUN_014328b0(SUB84((double)(longlong)uVar9 / param_1,0));
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
        iVar4 = iVar4 + 1;
        uVar7 = (longlong)((double)iVar4 * param_2) + lVar6;
        fVar15 = 0.0;
        fVar12 = 0.0;
        local_4c = fVar16;
        local_34 = fVar17;
      }
      fVar16 = *(float *)(in_R8 + uVar10 * 4);
      fVar16 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 |
                      ((uint)fVar16 ^ _DAT_023945e0) & -(uint)(fVar16 < 0.0));
      fVar17 = local_50 * fVar14 + fVar16;
      local_50 = param_3;
      if (param_3 <= fVar17) {
        local_50 = fVar17;
      }
      fVar17 = *(float *)(unaff_RSI + uVar10 * 4) / local_50;
      if ((uVar10 | uVar11) >> 0x20 == 0) {
        uVar9 = (uVar10 & 0xffffffff) % (ulonglong)uVar3;
      }
      else {
        uVar9 = (longlong)uVar10 % (longlong)uVar11;
      }
      *(float *)(lVar5 + uVar9 * 4) = fVar17;
      fVar15 = fVar15 + fVar17;
      fVar12 = fVar12 + fVar16 * fVar16;
      uVar10 = uVar10 + 1;
    } while (uVar10 != in_RDX);
  }
  if (iVar4 < in_ECX) {
    lVar5 = (longlong)(iVar4 + -1);
    uVar11 = (ulonglong)iVar4;
    uVar7 = ~uVar11;
    if ((in_ECX - iVar4 & 1U) != 0) {
      *(undefined4 *)(in_R9 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
      *(undefined4 *)(local_res8 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
      uVar11 = uVar11 + 1;
    }
    if (uVar7 + (longlong)in_ECX != 0) {
      do {
        *(undefined4 *)(in_R9 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
        *(undefined4 *)(local_res8 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
        *(undefined4 *)(in_R9 + 4 + uVar11 * 4) = *(undefined4 *)(in_R9 + lVar5 * 4);
        *(undefined4 *)(local_res8 + 4 + uVar11 * 4) = *(undefined4 *)(local_res8 + lVar5 * 4);
        uVar11 = uVar11 + 2;
      } while ((longlong)in_ECX != uVar11);
    }
  }
  FUN_00e83070();
  return;
}


