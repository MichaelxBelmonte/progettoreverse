// Function: FUN_015c35f0
// Address: 015c35f0
// Size: 2094 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015c35f0(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint64_t uVar26;
  int iVar27;
  int64_t lVar28;
  int64_t lVar29;
  uint64_t uVar30;
  int iVar31;
  uint uVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int iVar36;
  uint uVar37;
  int64_t lVar38;
  int64_t lVar39;
  int iVar40;
  int iVar41;
  uint uVar42;
  int64_t arg1;
  uint64_t uVar43;
  int64_t this_ptr;
  uint64_t uVar44;
  int64_t lVar45;
  int iVar46;
  uint64_t uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  uint64_t uVar51;
  uint64_t uVar52;
  float fVar53;
  float fVar54;
  int64_t local_res8;
  int local_res10;
  float *local_res18;
  int local_44;
  
  if (param_4 == 0) {
    return;
  }
  uVar30 = (uint64_t)param_4;
  ___bzero();
  ___bzero();
  if (0 < (int)param_4) {
    iVar40 = local_res10 / 2;
    iVar49 = -iVar40;
    uVar47 = 0;
    iVar48 = iVar40;
    local_44 = iVar40;
    do {
      iVar31 = -1;
      if (-1 < iVar48) {
        iVar31 = iVar48;
      }
      uVar32 = iVar31 + 1U;
      if ((int)param_4 < (int)(iVar31 + 1U)) {
        uVar32 = param_4;
      }
      iVar31 = 0;
      if (0 < iVar49) {
        iVar31 = iVar49;
      }
      iVar46 = (int)uVar47;
      iVar41 = iVar40 + iVar46;
      iVar36 = -1;
      if (-1 < iVar41) {
        iVar36 = iVar41;
      }
      uVar37 = iVar36 + 1U;
      if ((int)param_4 < (int)(iVar36 + 1U)) {
        uVar37 = param_4;
      }
      iVar27 = iVar46 - iVar40;
      iVar36 = 0;
      if (0 < iVar27) {
        iVar36 = iVar27;
      }
      iVar50 = iVar27;
      if (iVar27 < 0) {
        iVar50 = 0;
      }
      uVar42 = iVar40 + 1 + iVar46;
      if (iVar41 < -1) {
        uVar42 = 0;
      }
      if ((int)param_4 <= iVar50) {
        iVar50 = param_4 - 1;
      }
      if ((int)param_4 < (int)uVar42) {
        uVar42 = param_4;
      }
      if (iVar50 < (int)uVar42) {
        lVar45 = (int64_t)(int)uVar32;
        lVar35 = local_res8 + 0x30 + (int64_t)(iVar31 + local_44) * 4;
        lVar38 = (int64_t)(int)uVar37;
        lVar33 = (int64_t)(iVar36 + (iVar40 - iVar46));
        uVar44 = local_res8 + lVar33 * 4;
        fVar54 = *(float *)(arg1 + uVar47 * 4);
        fVar53 = *(float *)(this_ptr + uVar47 * 4) * fVar54;
        uVar51 = (uint64_t)iVar50;
        lVar28 = (int64_t)(iVar27 >> 0x1f & -iVar27);
        uVar43 = lVar38 - uVar51;
        uVar26 = uVar51;
        lVar34 = lVar28;
        iVar31 = iVar50;
        if ((uVar43 < 8) ||
           ((param_3 + uVar51 * 4 < local_res8 + ((lVar38 + lVar33) - uVar51) * 4 &&
            (uVar44 < (uint64_t)(param_3 + lVar38 * 4))))) {
joined_r0x015c383a:
          uVar52 = uVar26;
          if ((uVar37 - iVar31 & 1) != 0) {
            lVar29 = lVar34 * 4;
            lVar34 = lVar34 + 1;
            *(float *)(param_3 + uVar26 * 4) =
                 *(float *)(local_res8 + lVar29) * fVar54 + *(float *)(param_3 + uVar26 * 4);
            uVar52 = uVar26 + 1;
          }
          if (~uVar26 + lVar38 != 0) {
            lVar34 = local_res8 + 4 + lVar34 * 4;
            lVar29 = param_3 + 4 + uVar52 * 4;
            lVar39 = 0;
            do {
              *(float *)(lVar29 + -4 + lVar39 * 4) =
                   *(float *)(lVar34 + -4 + lVar39 * 4) * fVar54 +
                   *(float *)(lVar29 + -4 + lVar39 * 4);
              *(float *)(lVar29 + lVar39 * 4) =
                   *(float *)(lVar34 + lVar39 * 4) * fVar54 + *(float *)(lVar29 + lVar39 * 4);
              lVar39 = lVar39 + 2;
            } while (lVar45 - uVar52 != lVar39);
          }
        }
        else {
          uVar52 = uVar43 & 0xfffffffffffffff8;
          if (uVar52 - 8 == 0) {
            lVar34 = 0;
LAB_015c3915:
            lVar29 = lVar34 + uVar51;
            pfVar2 = (float *)(local_res8 + (lVar28 + lVar34) * 4);
            fVar7 = pfVar2[1];
            fVar4 = pfVar2[2];
            fVar5 = pfVar2[3];
            pfVar1 = (float *)(local_res8 + 0x10 + (lVar28 + lVar34) * 4);
            fVar6 = *pfVar1;
            fVar8 = pfVar1[1];
            fVar9 = pfVar1[2];
            fVar10 = pfVar1[3];
            pfVar1 = (float *)(param_3 + lVar29 * 4);
            fVar11 = pfVar1[1];
            fVar12 = pfVar1[2];
            fVar13 = pfVar1[3];
            pfVar3 = (float *)(param_3 + 0x10 + lVar29 * 4);
            fVar14 = *pfVar3;
            fVar15 = pfVar3[1];
            fVar16 = pfVar3[2];
            fVar17 = pfVar3[3];
            pfVar3 = (float *)(param_3 + lVar29 * 4);
            *pfVar3 = *pfVar1 + *pfVar2 * fVar54;
            pfVar3[1] = fVar11 + fVar7 * fVar54;
            pfVar3[2] = fVar12 + fVar4 * fVar54;
            pfVar3[3] = fVar13 + fVar5 * fVar54;
            pfVar2 = (float *)(param_3 + 0x10 + lVar29 * 4);
            *pfVar2 = fVar14 + fVar6 * fVar54;
            pfVar2[1] = fVar15 + fVar8 * fVar54;
            pfVar2[2] = fVar16 + fVar9 * fVar54;
            pfVar2[3] = fVar17 + fVar10 * fVar54;
          }
          else {
            lVar29 = param_3 + 0x30 + uVar51 * 4;
            lVar39 = -(((lVar45 - uVar51 & 0xfffffffffffffff8) - 8 >> 3) + 1 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              pfVar1 = (float *)(lVar35 + -0x30 + lVar34 * 4);
              fVar7 = pfVar1[1];
              fVar4 = pfVar1[2];
              fVar5 = pfVar1[3];
              pfVar2 = (float *)(lVar35 + -0x20 + lVar34 * 4);
              fVar6 = *pfVar2;
              fVar8 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar10 = pfVar2[3];
              pfVar3 = (float *)(lVar29 + -0x30 + lVar34 * 4);
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar2 = (float *)(lVar29 + -0x20 + lVar34 * 4);
              fVar14 = *pfVar2;
              fVar15 = pfVar2[1];
              fVar16 = pfVar2[2];
              fVar17 = pfVar2[3];
              pfVar2 = (float *)(lVar29 + -0x10 + lVar34 * 4);
              fVar18 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar20 = pfVar2[2];
              fVar21 = pfVar2[3];
              pfVar2 = (float *)(lVar29 + lVar34 * 4);
              fVar22 = *pfVar2;
              fVar23 = pfVar2[1];
              fVar24 = pfVar2[2];
              fVar25 = pfVar2[3];
              pfVar2 = (float *)(lVar29 + -0x30 + lVar34 * 4);
              *pfVar2 = *pfVar3 + *pfVar1 * fVar54;
              pfVar2[1] = fVar11 + fVar7 * fVar54;
              pfVar2[2] = fVar12 + fVar4 * fVar54;
              pfVar2[3] = fVar13 + fVar5 * fVar54;
              pfVar2 = (float *)(lVar29 + -0x20 + lVar34 * 4);
              *pfVar2 = fVar14 + fVar6 * fVar54;
              pfVar2[1] = fVar15 + fVar8 * fVar54;
              pfVar2[2] = fVar16 + fVar9 * fVar54;
              pfVar2[3] = fVar17 + fVar10 * fVar54;
              pfVar2 = (float *)(lVar35 + -0x10 + lVar34 * 4);
              fVar7 = pfVar2[1];
              fVar4 = pfVar2[2];
              fVar5 = pfVar2[3];
              pfVar1 = (float *)(lVar35 + lVar34 * 4);
              fVar6 = *pfVar1;
              fVar8 = pfVar1[1];
              fVar9 = pfVar1[2];
              fVar10 = pfVar1[3];
              pfVar1 = (float *)(lVar29 + -0x10 + lVar34 * 4);
              *pfVar1 = *pfVar2 * fVar54 + fVar18;
              pfVar1[1] = fVar7 * fVar54 + fVar19;
              pfVar1[2] = fVar4 * fVar54 + fVar20;
              pfVar1[3] = fVar5 * fVar54 + fVar21;
              pfVar2 = (float *)(lVar29 + lVar34 * 4);
              *pfVar2 = fVar6 * fVar54 + fVar22;
              pfVar2[1] = fVar8 * fVar54 + fVar23;
              pfVar2[2] = fVar9 * fVar54 + fVar24;
              pfVar2[3] = fVar10 * fVar54 + fVar25;
              lVar34 = lVar34 + 0x10;
              lVar39 = lVar39 + 2;
            } while (lVar39 != 0);
            if (((uVar52 - 8 >> 3) + 1 & 1) != 0) goto LAB_015c3915;
          }
          if (uVar43 != uVar52) {
            uVar26 = uVar52 + uVar51;
            lVar34 = lVar28 + uVar52;
            iVar31 = (int)(uVar52 + uVar51);
            goto joined_r0x015c383a;
          }
        }
        if ((7 < uVar43) &&
           ((local_res8 + ((lVar33 + lVar38) - uVar51) * 4 <= param_1 + uVar51 * 4 ||
            ((uint64_t)(param_1 + lVar38 * 4) <= uVar44)))) {
          uVar44 = uVar43 & 0xfffffffffffffff8;
          if (uVar44 - 8 == 0) {
            lVar34 = 0;
LAB_015c3b3a:
            lVar35 = lVar34 + uVar51;
            pfVar2 = (float *)(local_res8 + (lVar34 + lVar28) * 4);
            fVar54 = pfVar2[1];
            fVar7 = pfVar2[2];
            fVar4 = pfVar2[3];
            pfVar1 = (float *)(local_res8 + 0x10 + (lVar34 + lVar28) * 4);
            fVar5 = *pfVar1;
            fVar6 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            pfVar1 = (float *)(param_1 + lVar35 * 4);
            fVar10 = pfVar1[1];
            fVar11 = pfVar1[2];
            fVar12 = pfVar1[3];
            pfVar3 = (float *)(param_1 + 0x10 + lVar35 * 4);
            fVar13 = *pfVar3;
            fVar14 = pfVar3[1];
            fVar15 = pfVar3[2];
            fVar16 = pfVar3[3];
            pfVar3 = (float *)(param_1 + lVar35 * 4);
            *pfVar3 = *pfVar1 + *pfVar2 * fVar53;
            pfVar3[1] = fVar10 + fVar54 * fVar53;
            pfVar3[2] = fVar11 + fVar7 * fVar53;
            pfVar3[3] = fVar12 + fVar4 * fVar53;
            pfVar2 = (float *)(param_1 + 0x10 + lVar35 * 4);
            *pfVar2 = fVar13 + fVar5 * fVar53;
            pfVar2[1] = fVar14 + fVar6 * fVar53;
            pfVar2[2] = fVar15 + fVar8 * fVar53;
            pfVar2[3] = fVar16 + fVar9 * fVar53;
          }
          else {
            lVar33 = param_1 + 0x30 + uVar51 * 4;
            lVar29 = -(((lVar45 - uVar51 & 0xfffffffffffffff8) - 8 >> 3) + 1 & 0xfffffffffffffffe);
            lVar34 = 0;
            do {
              pfVar1 = (float *)(lVar35 + -0x30 + lVar34 * 4);
              fVar54 = pfVar1[1];
              fVar7 = pfVar1[2];
              fVar4 = pfVar1[3];
              pfVar2 = (float *)(lVar35 + -0x20 + lVar34 * 4);
              fVar5 = *pfVar2;
              fVar6 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              pfVar3 = (float *)(lVar33 + -0x30 + lVar34 * 4);
              fVar10 = pfVar3[1];
              fVar11 = pfVar3[2];
              fVar12 = pfVar3[3];
              pfVar2 = (float *)(lVar33 + -0x20 + lVar34 * 4);
              fVar13 = *pfVar2;
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar2 = (float *)(lVar33 + -0x10 + lVar34 * 4);
              fVar17 = *pfVar2;
              fVar18 = pfVar2[1];
              fVar19 = pfVar2[2];
              fVar20 = pfVar2[3];
              pfVar2 = (float *)(lVar33 + lVar34 * 4);
              fVar21 = *pfVar2;
              fVar22 = pfVar2[1];
              fVar23 = pfVar2[2];
              fVar24 = pfVar2[3];
              pfVar2 = (float *)(lVar33 + -0x30 + lVar34 * 4);
              *pfVar2 = *pfVar3 + *pfVar1 * fVar53;
              pfVar2[1] = fVar10 + fVar54 * fVar53;
              pfVar2[2] = fVar11 + fVar7 * fVar53;
              pfVar2[3] = fVar12 + fVar4 * fVar53;
              pfVar2 = (float *)(lVar33 + -0x20 + lVar34 * 4);
              *pfVar2 = fVar13 + fVar5 * fVar53;
              pfVar2[1] = fVar14 + fVar6 * fVar53;
              pfVar2[2] = fVar15 + fVar8 * fVar53;
              pfVar2[3] = fVar16 + fVar9 * fVar53;
              pfVar2 = (float *)(lVar35 + -0x10 + lVar34 * 4);
              fVar54 = pfVar2[1];
              fVar7 = pfVar2[2];
              fVar4 = pfVar2[3];
              pfVar1 = (float *)(lVar35 + lVar34 * 4);
              fVar5 = *pfVar1;
              fVar6 = pfVar1[1];
              fVar8 = pfVar1[2];
              fVar9 = pfVar1[3];
              pfVar1 = (float *)(lVar33 + -0x10 + lVar34 * 4);
              *pfVar1 = *pfVar2 * fVar53 + fVar17;
              pfVar1[1] = fVar54 * fVar53 + fVar18;
              pfVar1[2] = fVar7 * fVar53 + fVar19;
              pfVar1[3] = fVar4 * fVar53 + fVar20;
              pfVar2 = (float *)(lVar33 + lVar34 * 4);
              *pfVar2 = fVar5 * fVar53 + fVar21;
              pfVar2[1] = fVar6 * fVar53 + fVar22;
              pfVar2[2] = fVar8 * fVar53 + fVar23;
              pfVar2[3] = fVar9 * fVar53 + fVar24;
              lVar34 = lVar34 + 0x10;
              lVar29 = lVar29 + 2;
            } while (lVar29 != 0);
            if (((uVar44 - 8 >> 3) + 1 & 1) != 0) goto LAB_015c3b3a;
          }
          if (uVar43 == uVar44) goto LAB_015c36e0;
          lVar28 = lVar28 + uVar44;
          uVar51 = uVar51 + uVar44;
          iVar50 = (int)uVar51;
        }
        uVar44 = uVar51;
        if ((uVar37 - iVar50 & 1) != 0) {
          lVar35 = lVar28 * 4;
          lVar28 = lVar28 + 1;
          *(float *)(param_1 + uVar51 * 4) =
               *(float *)(local_res8 + lVar35) * fVar53 + *(float *)(param_1 + uVar51 * 4);
          uVar44 = uVar51 + 1;
        }
        if (~uVar51 + lVar38 != 0) {
          lVar35 = local_res8 + 4 + lVar28 * 4;
          lVar34 = param_1 + 4 + uVar44 * 4;
          lVar28 = 0;
          do {
            *(float *)(lVar34 + -4 + lVar28 * 4) =
                 *(float *)(lVar35 + -4 + lVar28 * 4) * fVar53 +
                 *(float *)(lVar34 + -4 + lVar28 * 4);
            *(float *)(lVar34 + lVar28 * 4) =
                 *(float *)(lVar35 + lVar28 * 4) * fVar53 + *(float *)(lVar34 + lVar28 * 4);
            lVar28 = lVar28 + 2;
          } while (lVar45 - uVar44 != lVar28);
        }
      }
LAB_015c36e0:
      fVar54 = g_02394274;
      uVar47 = uVar47 + 1;
      iVar49 = iVar49 + 1;
      local_44 = local_44 + -1;
      iVar48 = iVar48 + 1;
    } while (uVar47 != uVar30);
    uVar47 = 0;
    do {
      while (fVar53 = *(float *)(param_3 + uVar47 * 4), fVar53 < fVar54) {
        *(void*)(param_2 + uVar47 * 4) = *(void*)(this_ptr + uVar47 * 4);
        uVar47 = uVar47 + 1;
        if (uVar30 == uVar47) goto LAB_015c3cac;
      }
      *(float *)(param_2 + uVar47 * 4) = *(float *)(param_1 + uVar47 * 4) / fVar53;
      uVar47 = uVar47 + 1;
    } while (uVar30 != uVar47);
  }
LAB_015c3cac:
  if (local_res18 == (float *)0x0) {
    return;
  }
  if ((int)param_4 < 1) {
    fVar54 = 0.0;
  }
  else {
    if (uVar30 - 1 < 3) {
      fVar54 = 0.0;
      uVar47 = 0;
      fVar53 = 0.0;
    }
    else {
      fVar54 = 0.0;
      uVar47 = 0;
      fVar53 = 0.0;
      do {
        fVar7 = *(float *)(arg1 + uVar47 * 4);
        fVar4 = *(float *)(arg1 + 4 + uVar47 * 4);
        fVar5 = *(float *)(arg1 + 8 + uVar47 * 4);
        fVar6 = *(float *)(arg1 + 0xc + uVar47 * 4);
        fVar53 = fVar53 + fVar7 + fVar4 + fVar5 + fVar6;
        fVar54 = fVar6 * *(float *)(param_2 + 0xc + uVar47 * 4) +
                 fVar5 * *(float *)(param_2 + 8 + uVar47 * 4) +
                 fVar4 * *(float *)(param_2 + 4 + uVar47 * 4) +
                 fVar7 * *(float *)(param_2 + uVar47 * 4) + fVar54;
        uVar47 = uVar47 + 4;
      } while ((param_4 & 0xfffffffc) != uVar47);
    }
    if ((uint64_t)(param_4 & 3) != 0) {
      uVar44 = 0;
      do {
        fVar7 = *(float *)(arg1 + uVar47 * 4 + uVar44 * 4);
        fVar53 = fVar53 + fVar7;
        fVar54 = fVar54 + fVar7 * *(float *)(param_2 + uVar47 * 4 + uVar44 * 4);
        uVar44 = uVar44 + 1;
      } while ((param_4 & 3) != uVar44);
    }
    if (g_02394274 < fVar53) goto LAB_015c3e16;
    if (uVar30 - 1 < 7) {
      fVar54 = 0.0;
      uVar30 = 0;
    }
    else {
      fVar54 = 0.0;
      uVar30 = 0;
      do {
        fVar54 = fVar54 + *(float *)(param_2 + uVar30 * 4) + *(float *)(param_2 + 4 + uVar30 * 4) +
                 *(float *)(param_2 + 8 + uVar30 * 4) + *(float *)(param_2 + 0xc + uVar30 * 4) +
                 *(float *)(param_2 + 0x10 + uVar30 * 4) + *(float *)(param_2 + 0x14 + uVar30 * 4) +
                 *(float *)(param_2 + 0x18 + uVar30 * 4) + *(float *)(param_2 + 0x1c + uVar30 * 4);
        uVar30 = uVar30 + 8;
      } while ((param_4 & 0xfffffff8) != uVar30);
    }
    if ((uint64_t)(param_4 & 7) != 0) {
      uVar47 = 0;
      do {
        fVar54 = fVar54 + *(float *)(param_2 + uVar30 * 4 + uVar47 * 4);
        uVar47 = uVar47 + 1;
      } while ((param_4 & 7) != uVar47);
    }
  }
  fVar53 = (float)(int)param_4;
LAB_015c3e16:
  *local_res18 = fVar54 / fVar53;
  return;
}

