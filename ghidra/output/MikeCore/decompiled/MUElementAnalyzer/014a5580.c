// Function: FUN_014a5580
// Address: 014a5580
// Size: 1405 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_014a5580(double param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong in_RCX;
  ulonglong uVar10;
  int iVar11;
  longlong in_RDX;
  longlong lVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_74;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  longlong local_40;
  longlong local_38;
  
  uVar6 = (uint)(DAT_02411970 * param_1);
  lVar8 = FUN_00e83010();
  lVar13 = *unaff_RSI;
  iVar2 = *(int *)(lVar13 + 0xc);
  local_74 = 0.0;
  iVar7 = 0;
  if (iVar2 < 1) {
    local_58 = 0.0;
    local_5c = 0.0;
    local_40 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar4 = false;
    fVar21 = DAT_02390124;
  }
  else {
    dVar17 = _DAT_0240d7f8 * param_1;
    lVar12 = 0;
    local_54 = 0.0;
    local_58 = 0.0;
    local_64 = 0.0;
    local_40 = 0;
    bVar3 = false;
    local_38 = 0;
    bVar4 = false;
    do {
      lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x10) + lVar12 * 8);
      if (local_40 == lVar13) {
        if ((!bVar3) && (local_40 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar13 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          local_40 = lVar13;
        }
        else {
          bVar3 = true;
          local_40 = lVar13;
        }
      }
      if (lVar12 < (longlong)*(int *)(*unaff_RSI + 0xc) + -1) {
        lVar13 = *(longlong *)(*(longlong *)(*unaff_RSI + 0x10) + 8 + lVar12 * 8);
        if (local_38 == lVar13) {
          lVar13 = local_38;
          if (bVar4) {
            bVar5 = true;
            goto LAB_014a57b8;
          }
          if (local_38 == 0) {
            bVar5 = false;
            goto LAB_014a57b8;
          }
          FUN_00d50b00();
          iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
          bVar4 = true;
        }
        else {
          if (lVar13 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014a57a4:
          bVar5 = true;
          if ((bVar4) && (bVar5 = true, local_38 != 0)) {
            FUN_00d50b20();
          }
LAB_014a57b8:
          bVar4 = bVar5;
          iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
          local_38 = lVar13;
          if (lVar13 == 0) goto LAB_014a5868;
        }
        iVar11 = (int)(*(double *)(local_38 + 0x10) * param_1) + 1;
      }
      else {
        if (local_38 != 0) {
          lVar13 = 0;
          goto joined_r0x014a57a4;
        }
        iVar9 = (int)(*(double *)(local_40 + 0x10) * param_1) + 1;
LAB_014a5868:
        local_38 = 0;
        iVar11 = param_3;
      }
      if (param_3 < iVar11) {
        iVar11 = param_3;
      }
      uVar15 = iVar11 - iVar9;
      if ((int)uVar6 < iVar11 - iVar9) {
        uVar15 = uVar6;
      }
      if ((int)uVar15 < 1) {
        uVar14 = 0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        iVar11 = 0;
      }
      else {
        uVar10 = 0;
        fVar21 = 0.0;
        fVar20 = 0.0;
        fVar19 = 0.0;
        uVar14 = 0;
        uVar16 = 0;
        do {
          lVar13 = (longlong)(iVar9 + (int)uVar10);
          fVar1 = *(float *)(in_RCX + lVar13 * 4);
          if ((uVar10 < uVar15 >> 1) && (fVar21 <= fVar1)) {
            local_54 = 0.0;
            uVar16 = uVar10 & 0xffffffff;
            uVar14 = uVar10 & 0xffffffff;
            fVar21 = fVar1;
          }
          iVar11 = (int)uVar10 - (int)uVar14;
          if ((0 < iVar11) && (fVar22 = (fVar21 - fVar1) / (float)iVar11, local_54 < fVar22)) {
            uVar16 = uVar10 & 0xffffffff;
            local_54 = fVar22;
            fVar20 = fVar1;
          }
          iVar11 = (int)uVar16;
          fVar19 = fVar19 + fVar1 * param_2 + *(float *)(in_RDX + lVar13 * 4);
          *(float *)(lVar8 + uVar10 * 4) = fVar19;
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
        fVar19 = fVar19 * DAT_0239011c;
        uVar10 = 0;
        do {
          fVar1 = *(float *)(lVar8 + uVar10 * 4);
          if (fVar19 < fVar1) {
            if (((uint)uVar10 == 0) ||
               (uVar15 = (uint)(uVar10 - 1),
               fVar1 - fVar19 <= fVar19 - *(float *)(lVar8 + (uVar10 - 1 & 0xffffffff) * 4))) {
              uVar15 = (uint)uVar10;
            }
            break;
          }
          uVar10 = uVar10 + 1;
        } while (uVar15 != uVar10);
      }
      iVar11 = iVar11 - ((int)(uVar14 >> 0x1f) + (int)uVar14 >> 1);
      fVar19 = DAT_02390124;
      if ((0 < iVar11) && (0.0 < fVar21)) {
        fVar21 = (float)_logf(fVar20 / fVar21);
        uVar18 = _expf(fVar21 / (float)iVar11);
        fVar19 = (float)_powf(uVar18,(float)dVar17);
      }
      local_58 = local_58 + fVar19;
      local_64 = local_64 + (float)(int)uVar15 / (float)(int)uVar6;
      iVar7 = iVar7 + 1;
      lVar12 = lVar12 + 1;
      lVar13 = *unaff_RSI;
    } while (lVar12 < *(int *)(lVar13 + 0xc));
    local_5c = (float)iVar7;
    fVar21 = local_64 / local_5c;
  }
  fVar20 = ((DAT_02390124 - fVar21) + _DAT_0240e340) / DAT_02394250;
  fVar21 = 0.0;
  if (0.0 <= fVar20) {
    fVar21 = fVar20;
  }
  fVar21 = (float)_powf(fVar21,DAT_02390128);
  if (0 < iVar2) {
    local_74 = DAT_02390124 - local_58 / local_5c;
  }
  FUN_00e83070();
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  fVar20 = fVar21;
  if (fVar21 <= local_74) {
    fVar20 = local_74;
  }
  return (fVar20 + fVar21 + local_74) * _DAT_0240e344;
}


