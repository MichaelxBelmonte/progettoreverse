// Function: FUN_018292b0
// Address: 018292b0
// Size: 5277 bytes
// Class: Unknown

void FUN_018292b0(double param_1,float param_2,float param_3,uint param_4)

{
  void*puVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  float *pfVar10;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  void*puVar33;
  int64_t lVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  int64_t *in_RCX;
  uint64_t uVar39;
  int64_t *in_RDX;
  uint uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  int64_t lVar43;
  int64_t *arg1;
  uint64_t uVar44;
  uint64_t uVar45;
  int64_t lVar46;
  uint64_t uVar47;
  int64_t *this_ptr;
  uint64_t uVar48;
  int64_t lVar49;
  int64_t *in_R8;
  uint uVar50;
  int iVar51;
  uint uVar52;
  uint64_t uVar54;
  uint64_t uVar55;
  uint32_t uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  int64_t *local_res8;
  int64_t local_res10;
  int local_res18;
  uint64_t local_108;
  int64_t local_40;
  char local_38;
  uint64_t uVar53;
  
  iVar4 = *(int *)(*arg1 + 0x18);
  uVar5 = *(uint *)(*in_RDX + 0xc);
  iVar51 = *(int *)(**(int64_t **)(*local_res8 + 0x10) + 0x18);
  iVar32 = iVar51 + 3;
  if (-1 < iVar51) {
    iVar32 = iVar51;
  }
  uVar30 = 8;
  do {
    uVar40 = uVar30;
    uVar44 = (uint64_t)uVar40;
    uVar30 = uVar40 * 2;
  } while ((int)uVar40 < local_res18);
  iVar51 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar51 = iVar4;
  }
  GNFastFourierTransformer_create();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar56 = FUN_00e83da0();
  FUN_00c8e2b0(uVar56,uVar40 * 8);
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar52 = iVar51 >> 2;
  uVar53 = (uint64_t)uVar52;
  uVar55 = 1;
  if (3 < iVar4) {
    uVar50 = 1;
    uVar41 = 0;
    do {
      fVar57 = (float)_logf((float)(param_1 /
                                   (double)*(float *)(*(int64_t *)(*arg1 + 0x10) + uVar41 * 4)
                                   ) * g_02394204);
      fVar57 = (float)_exp2f((fVar57 * g_02394208 + param_2) * g_023941f4);
      uVar31 = FUN_00e7d780(param_3 / (fVar57 * g_023941f8));
      if ((int)(uVar40 >> 1) < (int)uVar31) {
        uVar31 = uVar40 >> 1;
      }
      if ((int)uVar31 <= (int)uVar50) {
        uVar31 = uVar50;
      }
      uVar50 = uVar31;
      uVar55 = (uint64_t)uVar50;
      uVar41 = uVar41 + 1;
    } while (uVar53 != uVar41);
  }
  iVar51 = (int)uVar55;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  puVar33 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar33 = &g_025f0d98;
  puVar33[2] = 0;
  puVar33[3] = 0;
  puVar33[4] = 0;
  puVar33[5] = 0;
  puVar33[6] = 0;
  puVar33[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (0 < (int)uVar5) {
    lVar34 = (int64_t)(iVar32 >> 2);
    uVar41 = 1;
    if (1 < uVar30) {
      uVar41 = (uint64_t)uVar30;
    }
    uVar54 = uVar44;
    if (uVar40 < 2) {
      uVar54 = 1;
    }
    uVar35 = (uint64_t)((uint)uVar41 & 0xfffffff0);
    uVar39 = (uint64_t)((uint)uVar54 & 0xfffffff8);
    uVar45 = (uVar35 - 8 >> 3) + 1;
    uVar48 = (uVar39 - 8 >> 3) + 1;
    uVar36 = (uint64_t)(uVar52 & 3);
    uVar42 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(*in_RDX + 0x10) + uVar42 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      lVar7 = *(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar42 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      lVar8 = *(int64_t *)(*(int64_t *)(*in_R8 + 0x10) + uVar42 * 8);
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      lVar9 = *(int64_t *)(*(int64_t *)(*local_res8 + 0x10) + uVar42 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      ___bzero();
      iVar32 = *(int *)(lVar8 + 0x18);
      FUN_00c8e340();
      *(void*)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar32) = 0;
      if (3 < iVar4) {
        local_108 = 0;
        do {
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00d21140();
          local_38 = '\0';
          FUN_00d21140();
          lVar43 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + local_108 * 8);
          iVar32 = FUN_00e7d780(*(void*)(*(int64_t *)(*arg1 + 0x10) + local_108 * 4));
          FUN_00c8e690();
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          fVar57 = (float)___bzero();
          if (iVar32 < 1) {
LAB_01829d10:
            lVar43 = *(int64_t *)(local_40 + 0x10);
            if ((uint)uVar41 < 8) {
              uVar37 = 0;
            }
            else {
              if (uVar35 - 8 < 0x38) {
                lVar49 = 0;
              }
              else {
                lVar49 = 0;
                lVar46 = -(uVar45 & 0xfffffffffffffff8);
                do {
                  puVar1 = (void*)(lVar43 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x10 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x20 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x30 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x40 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x50 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x60 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x70 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x80 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0x90 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xa0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xb0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xc0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xd0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xe0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar43 + 0xf0 + lVar49 * 4);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  lVar49 = lVar49 + 0x40;
                  lVar46 = lVar46 + 8;
                } while (lVar46 != 0);
              }
              fVar57 = 0.0;
              if ((uVar45 & 6) != 0) {
                lVar46 = lVar43 + lVar49 * 4;
                uVar37 = 0;
                do {
                  puVar1 = (void*)(lVar46 + uVar37);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (void*)(lVar46 + 0x10 + uVar37);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  uVar37 = uVar37 + 0x20;
                } while (((uint)uVar45 & 7) << 5 != uVar37);
              }
              uVar37 = uVar35;
              if (uVar35 == uVar41) goto LAB_01829e30;
            }
            do {
              *(void*)(lVar43 + uVar37 * 4) = 0;
              uVar37 = uVar37 + 1;
            } while (uVar41 != uVar37);
          }
          else {
            uVar40 = iVar32 * 2;
            uVar50 = 1;
            if (1 < (int)uVar40) {
              uVar50 = uVar40;
            }
            lVar46 = lVar43 * 4 + (iVar32 + local_res10) * -4;
            lVar43 = lVar43 - (iVar32 + local_res10);
            uVar37 = 0;
            do {
              lVar49 = lVar43 + uVar37;
              if ((-1 < lVar49) && (lVar49 < lVar34)) {
                fVar57 = *(float *)(*(int64_t *)(lVar9 + 0x10) + lVar46 + uVar37 * 4);
                *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) = fVar57;
              }
              if ((-1 < lVar49 + 1) && (lVar49 + 1 < lVar34)) {
                fVar57 = *(float *)(*(int64_t *)(lVar9 + 0x10) + lVar46 + 4 + uVar37 * 4);
                *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + uVar37 * 4) = fVar57;
              }
              uVar37 = uVar37 + 2;
            } while ((uVar50 & 0x7ffffffe) != uVar37);
            if ((((uVar50 & 1) != 0) && (lVar43 = lVar43 + uVar37, -1 < lVar43)) &&
               (lVar43 < lVar34)) {
              fVar57 = *(float *)(*(int64_t *)(lVar9 + 0x10) + lVar43 * 4);
              *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) = fVar57;
            }
            if (iVar32 < 1) goto LAB_01829d10;
            uVar37 = 0;
            do {
              fVar57 = (float)(int)uVar37 * ((float)(int)uVar40 / (float)(int)uVar30);
              pfVar10 = *(float **)(local_40 + 0x10);
              uVar50 = (uint)fVar57;
              if ((int)uVar50 < 0) {
                fVar57 = *pfVar10;
              }
              else if ((int)uVar50 < (int)(uVar40 - 1)) {
                iVar32 = FUN_00e7d780((fVar57 - (float)(int)uVar50) * g_023d5f44);
                lVar43 = FUN_00e84280();
                fVar57 = (pfVar10[(uint64_t)uVar50 + 1] - pfVar10[uVar50]) *
                         *(float *)(lVar43 + (int64_t)iVar32 * 4) + pfVar10[uVar50];
              }
              else {
                fVar57 = pfVar10[uVar40 - 1];
              }
              *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) = fVar57;
              uVar37 = uVar37 + 1;
            } while (uVar41 != uVar37);
          }
LAB_01829e30:
          (**(code **)(g_02786500 + 0x38))(fVar57,uVar30);
          uVar37 = *(uint64_t *)(local_40 + 0x10);
          if (((uint)uVar54 < 8) ||
             ((uVar37 < uVar37 + (uVar44 + uVar54) * 4 &&
              (uVar37 + uVar44 * 4 < uVar37 + uVar54 * 4)))) {
            uVar47 = 0;
LAB_01829e91:
            uVar38 = uVar47;
            if ((uVar54 & 1) != 0) {
              *(float *)(uVar37 + uVar47 * 4) =
                   *(float *)(uVar37 + (uVar44 + uVar47) * 4) + *(float *)(uVar37 + uVar47 * 4);
              uVar38 = uVar47 | 1;
            }
            if (~uVar47 != -uVar54) {
              lVar43 = uVar37 + uVar44 * 4;
              do {
                *(float *)(uVar37 + uVar38 * 4) =
                     *(float *)(lVar43 + uVar38 * 4) + *(float *)(uVar37 + uVar38 * 4);
                *(float *)(uVar37 + 4 + uVar38 * 4) =
                     *(float *)(lVar43 + 4 + uVar38 * 4) + *(float *)(uVar37 + 4 + uVar38 * 4);
                uVar38 = uVar38 + 2;
              } while (uVar54 != uVar38);
            }
          }
          else {
            if (uVar39 - 8 == 0) {
              lVar43 = 0;
LAB_01829f98:
              pfVar10 = (float *)(uVar37 + (uVar44 + lVar43) * 4);
              fVar57 = pfVar10[1];
              fVar59 = pfVar10[2];
              fVar58 = pfVar10[3];
              pfVar3 = (float *)(uVar37 + 0x10 + (uVar44 + lVar43) * 4);
              fVar11 = *pfVar3;
              fVar12 = pfVar3[1];
              fVar13 = pfVar3[2];
              fVar14 = pfVar3[3];
              pfVar3 = (float *)(uVar37 + lVar43 * 4);
              fVar15 = pfVar3[1];
              fVar16 = pfVar3[2];
              fVar17 = pfVar3[3];
              pfVar2 = (float *)(uVar37 + 0x10 + lVar43 * 4);
              fVar18 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar20 = pfVar2[2];
              fVar21 = pfVar2[3];
              pfVar2 = (float *)(uVar37 + lVar43 * 4);
              *pfVar2 = *pfVar3 + *pfVar10;
              pfVar2[1] = fVar15 + fVar57;
              pfVar2[2] = fVar16 + fVar59;
              pfVar2[3] = fVar17 + fVar58;
              pfVar10 = (float *)(uVar37 + 0x10 + lVar43 * 4);
              *pfVar10 = fVar18 + fVar11;
              pfVar10[1] = fVar19 + fVar12;
              pfVar10[2] = fVar20 + fVar13;
              pfVar10[3] = fVar21 + fVar14;
            }
            else {
              lVar46 = uVar37 + uVar44 * 4;
              lVar43 = 0;
              lVar49 = -(uVar48 & 0xfffffffffffffffe);
              do {
                pfVar2 = (float *)(lVar46 + lVar43 * 4);
                fVar57 = pfVar2[1];
                fVar59 = pfVar2[2];
                fVar58 = pfVar2[3];
                pfVar10 = (float *)(lVar46 + 0x10 + lVar43 * 4);
                fVar11 = *pfVar10;
                fVar12 = pfVar10[1];
                fVar13 = pfVar10[2];
                fVar14 = pfVar10[3];
                pfVar10 = (float *)(uVar37 + lVar43 * 4);
                fVar15 = pfVar10[1];
                fVar16 = pfVar10[2];
                fVar17 = pfVar10[3];
                pfVar3 = (float *)(uVar37 + 0x10 + lVar43 * 4);
                fVar18 = *pfVar3;
                fVar19 = pfVar3[1];
                fVar20 = pfVar3[2];
                fVar21 = pfVar3[3];
                pfVar3 = (float *)(uVar37 + 0x20 + lVar43 * 4);
                fVar22 = *pfVar3;
                fVar23 = pfVar3[1];
                fVar24 = pfVar3[2];
                fVar25 = pfVar3[3];
                pfVar3 = (float *)(uVar37 + 0x30 + lVar43 * 4);
                fVar26 = *pfVar3;
                fVar27 = pfVar3[1];
                fVar28 = pfVar3[2];
                fVar29 = pfVar3[3];
                pfVar3 = (float *)(uVar37 + lVar43 * 4);
                *pfVar3 = *pfVar10 + *pfVar2;
                pfVar3[1] = fVar15 + fVar57;
                pfVar3[2] = fVar16 + fVar59;
                pfVar3[3] = fVar17 + fVar58;
                pfVar10 = (float *)(uVar37 + 0x10 + lVar43 * 4);
                *pfVar10 = fVar18 + fVar11;
                pfVar10[1] = fVar19 + fVar12;
                pfVar10[2] = fVar20 + fVar13;
                pfVar10[3] = fVar21 + fVar14;
                pfVar3 = (float *)(lVar46 + 0x20 + lVar43 * 4);
                fVar57 = pfVar3[1];
                fVar59 = pfVar3[2];
                fVar58 = pfVar3[3];
                pfVar10 = (float *)(lVar46 + 0x30 + lVar43 * 4);
                fVar11 = *pfVar10;
                fVar12 = pfVar10[1];
                fVar13 = pfVar10[2];
                fVar14 = pfVar10[3];
                pfVar10 = (float *)(uVar37 + 0x20 + lVar43 * 4);
                *pfVar10 = *pfVar3 + fVar22;
                pfVar10[1] = fVar57 + fVar23;
                pfVar10[2] = fVar59 + fVar24;
                pfVar10[3] = fVar58 + fVar25;
                pfVar10 = (float *)(uVar37 + 0x30 + lVar43 * 4);
                *pfVar10 = fVar11 + fVar26;
                pfVar10[1] = fVar12 + fVar27;
                pfVar10[2] = fVar13 + fVar28;
                pfVar10[3] = fVar14 + fVar29;
                lVar43 = lVar43 + 0x10;
                lVar49 = lVar49 + 2;
              } while (lVar49 != 0);
              if ((uVar48 & 1) != 0) goto LAB_01829f98;
            }
            uVar47 = uVar39;
            if (uVar39 != uVar54) goto LAB_01829e91;
          }
          FUN_00e83530();
          if (1 < iVar51) {
            if (local_108 == param_4) {
              uVar37 = 1;
              do {
                fVar57 = *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 8);
                fVar59 = *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + uVar37 * 8);
                fVar58 = (float)_atan2f((uint)fVar59 ^ g_023945e0);
                *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) =
                     SQRT(fVar59 * fVar59 + fVar57 * fVar57);
                fVar59 = (float)FUN_015b4cb0(fVar58 - *(float *)(*(int64_t *)(local_40 + 0x10) +
                                                                uVar37 * 4));
                fVar57 = g_02394278;
                *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) =
                     fVar59 / g_02394278 + (float)(int)uVar37;
                *(float *)(*(int64_t *)(local_40 + 0x10) + uVar37 * 4) = fVar58;
                for (fVar57 = fVar58 / fVar57 + g_0239426c; g_02390124 <= fVar57;
                    fVar57 = fVar57 + g_02390d00) {
                }
                for (; fVar57 < 0.0; fVar57 = fVar57 + g_02390124) {
                }
                iVar32 = *(int *)(lVar8 + 0x18);
                FUN_00c8e340();
                *(double *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar32) =
                     (double)(fVar57 * g_02417034);
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar55);
            }
            else {
              lVar43 = *(int64_t *)(local_40 + 0x10);
              lVar46 = 0;
              do {
                fVar57 = *(float *)(*(int64_t *)(local_40 + 0x10) + 8 + lVar46 * 8);
                fVar59 = *(float *)(*(int64_t *)(local_40 + 0x10) + 0xc + lVar46 * 8);
                fVar58 = (float)_atan2f((uint)fVar59 ^ g_023945e0);
                *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + lVar46 * 4) =
                     SQRT(fVar59 * fVar59 + fVar57 * fVar57);
                fVar57 = (float)FUN_015b4cb0(fVar58 - *(float *)(lVar43 + 4 + lVar46 * 4));
                lVar49 = lVar46 + 1;
                *(float *)(*(int64_t *)(local_40 + 0x10) + 4 + lVar46 * 4) =
                     fVar57 / g_02394278 + (float)(int)lVar49;
                lVar43 = *(int64_t *)(local_40 + 0x10);
                *(float *)(lVar43 + 4 + lVar46 * 4) = fVar58;
                lVar46 = lVar49;
              } while (uVar55 - 1 != lVar49);
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
          }
          local_108 = local_108 + 1;
        } while (local_108 != uVar53);
      }
      if (0xb < iVar4) {
        lVar43 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 0x10);
        if (lVar43 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e4f0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        uVar56 = FUN_00c92160();
        FUN_00d233f0(uVar56,0);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (lVar43 != 0) {
          FUN_00d50b20();
        }
        lVar43 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + 0x10);
        if (lVar43 != 0) {
          FUN_00d50b00();
        }
        FUN_00c8e4f0();
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        local_38 = '\0';
        FUN_00d233f0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (lVar43 != 0) {
          FUN_00d50b20();
        }
      }
      if (1 < iVar51) {
        iVar32 = iVar51 + -1;
        if (iVar4 < 4) {
          do {
            FUN_015c15b0(g_02411290,uVar53);
            iVar32 = iVar32 + -1;
          } while (iVar32 != 0);
        }
        else {
          uVar37 = 1;
          do {
            lVar43 = *(int64_t *)(lVar7 + 0x10);
            lVar46 = *(int64_t *)(local_40 + 0x10);
            if (uVar53 - 1 < 3) {
              uVar47 = 0;
            }
            else {
              uVar47 = 0;
              do {
                *(void*)(lVar46 + uVar47 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar43 + uVar47 * 8) + 0x10) + uVar37 * 4);
                *(void*)(lVar46 + 4 + uVar47 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar43 + 8 + uVar47 * 8) + 0x10) + uVar37 * 4);
                *(void*)(lVar46 + 8 + uVar47 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar43 + 0x10 + uVar47 * 8) + 0x10) + uVar37 * 4)
                ;
                *(void*)(lVar46 + 0xc + uVar47 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar43 + 0x18 + uVar47 * 8) + 0x10) + uVar37 * 4)
                ;
                uVar47 = uVar47 + 4;
              } while ((uVar52 & 0xfffffffc) != uVar47);
            }
            if (uVar36 != 0) {
              uVar38 = 0;
              do {
                *(void*)(lVar46 + uVar47 * 4 + uVar38 * 4) =
                     *(void*)
                      (*(int64_t *)(*(int64_t *)(lVar43 + uVar47 * 8 + uVar38 * 8) + 0x10) +
                      uVar37 * 4);
                uVar38 = uVar38 + 1;
              } while (uVar36 != uVar38);
            }
            FUN_015c15b0(g_02411290,uVar53);
            lVar43 = *(int64_t *)(local_40 + 0x10);
            lVar46 = *(int64_t *)(lVar7 + 0x10);
            if (uVar53 - 1 < 3) {
              uVar47 = 0;
            }
            else {
              uVar47 = 0;
              do {
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar46 + uVar47 * 8) + 0x10) + uVar37 * 4) =
                     *(void*)(lVar43 + uVar47 * 4);
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar46 + 8 + uVar47 * 8) + 0x10) + uVar37 * 4) =
                     *(void*)(lVar43 + 4 + uVar47 * 4);
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar46 + 0x10 + uVar47 * 8) + 0x10) + uVar37 * 4) =
                     *(void*)(lVar43 + 8 + uVar47 * 4);
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar46 + 0x18 + uVar47 * 8) + 0x10) + uVar37 * 4) =
                     *(void*)(lVar43 + 0xc + uVar47 * 4);
                uVar47 = uVar47 + 4;
              } while ((uVar52 & 0xfffffffc) != uVar47);
            }
            if ((uVar52 & 3) != 0) {
              uVar38 = 0;
              do {
                *(void*)
                 (*(int64_t *)(*(int64_t *)(lVar46 + uVar47 * 8 + uVar38 * 8) + 0x10) + uVar37 * 4
                 ) = *(void*)(lVar43 + uVar47 * 4 + uVar38 * 4);
                uVar38 = uVar38 + 1;
              } while (uVar36 != uVar38);
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 != uVar55);
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      uVar42 = uVar42 + 1;
    } while (uVar42 != uVar5);
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (puVar33 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

