// Function: FUN_018353d0
// Address: 018353d0
// Size: 2463 bytes
// Class: Unknown

void FUN_018353d0(float param_1,float param_2,float param_3,float param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
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
  uint uVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  void *pvVar25;
  int64_t lVar26;
  uint64_t uVar27;
  void* pVar28;
  int64_t *in_RCX;
  int64_t *plVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint64_t uVar32;
  uint uVar33;
  uint uVar34;
  int64_t *in_RDX;
  uint64_t uVar35;
  int64_t lVar36;
  int64_t lVar37;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint uVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  uint64_t uVar49;
  double dVar50;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  float fVar51;
  float fVar52;
  uint in_XMM4_Da;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  float local_94;
  double local_90;
  int64_t local_88;
  int64_t *local_50;
  char local_48;
  
  if ((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) {
    plVar29 = in_RCX;
    pvVar25 = _pthread_getspecific((void*)in_RCX);
    pVar28 = (void*)plVar29;
    if (pvVar25 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    pvVar25 = _pthread_getspecific(pVar28);
    plVar29 = local_50;
    if ((pvVar25 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
      plVar29 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar26 + 0x154) & 1) + 4];
    }
    dVar48 = (double)(**(code **)(*plVar29 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)(**(int64_t **)(*in_RCX + 0x10) + 0x18);
    iVar22 = FUN_00e7d850((double)param_2 * dVar48);
    lVar26 = *this_ptr;
    if (0 < *(int *)(lVar26 + 0xc)) {
      fVar43 = (float)(dVar48 / (double)param_3);
      fVar44 = (float)iVar22;
      uVar7 = (uint)g_02390140;
      uVar49 = (uint64_t)g_02390140;
      fVar51 = (float)(in_XMM4_Da & uVar7) * g_02394278;
      iVar22 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar22 = iVar5;
      }
      uVar40 = 2;
      if (2 < iVar22 >> 2) {
        uVar40 = (uint64_t)(uint)(iVar22 >> 2);
      }
      uVar1 = uVar40 - 1;
      uVar27 = uVar1 & 0xfffffffffffffff8;
      uVar35 = (uVar27 - 8 >> 3) + 1;
      lVar37 = 0;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar26 + 0x10) + lVar37 * 8);
        if (lVar6 != 0) {
          uVar49 = FUN_00d50b00();
        }
        pVar28 = (void*)lVar26;
        local_b0 = '\0';
        local_b8 = lVar6;
        FUN_0133ae40(uVar49,&local_b8);
        dVar50 = (double)FUN_00d45bc0();
        local_90 = dVar50;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          dVar50 = (double)FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          dVar50 = (double)FUN_00d50b20();
        }
        local_a0 = '\0';
        local_a8 = lVar6;
        FUN_0133ae40(dVar50,&local_a8);
        cVar21 = FUN_00d45ad0();
        uVar49 = extraout_XMM0_Qa;
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          uVar49 = FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          uVar49 = FUN_00d50b20();
        }
        if (cVar21 != '\0') {
          pvVar25 = _pthread_getspecific(pVar28);
          if (pvVar25 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar50 = (double)FUN_013df260();
          iVar22 = FUN_00e7d850(dVar50 * dVar48);
          pvVar25 = _pthread_getspecific(pVar28);
          if (pvVar25 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar50 = (double)FUN_013df370();
          iVar23 = FUN_00e7d850(dVar50 * dVar48);
          local_88 = (int64_t)iVar22;
          iVar22 = *(int *)(*in_RDX + 0x18);
          iVar24 = iVar22 + 7;
          if (-1 < iVar22) {
            iVar24 = iVar22;
          }
          uVar41 = (iVar24 >> 3) - 1;
          uVar33 = uVar41;
          if (7 < iVar22) {
            uVar33 = 0;
          }
          uVar49 = (uint64_t)(int)uVar33;
          lVar30 = *(int64_t *)(*in_RDX + 0x10);
          lVar26 = *(int64_t *)(lVar30 + uVar49 * 8);
          uVar32 = uVar49;
          if (local_88 < lVar26) {
            do {
              uVar39 = uVar32 - 1;
              if (uVar32 == 0) {
                uVar38 = 0;
                uVar20 = 0;
                if (0 < (int)uVar41) goto LAB_0183585e;
                goto joined_r0x018358af;
              }
              uVar32 = uVar39;
            } while (local_88 < *(int64_t *)(lVar30 + uVar39 * 8));
            uVar34 = (uint)uVar39;
          }
          else {
            lVar31 = 0;
            do {
              uVar38 = uVar41;
              if (~((int64_t)(int)uVar41 + 1U) + uVar49 + lVar31 == -2) goto joined_r0x018358af;
              lVar36 = lVar31 + 1;
              lVar2 = lVar31 * 8;
              lVar31 = lVar36;
            } while (*(int64_t *)(lVar30 + uVar49 * 8 + 8 + lVar2) <= local_88);
            uVar34 = (uVar33 + (int)lVar36) - 1;
            uVar39 = (uint64_t)uVar34;
          }
          uVar38 = (uint)uVar39;
          uVar20 = uVar38;
          if ((int)uVar34 < (int)uVar41) {
LAB_0183585e:
            uVar38 = uVar20;
            if (*(int64_t *)(lVar30 + 8 + (int64_t)(int)uVar38 * 8) - local_88 <
                local_88 - *(int64_t *)(lVar30 + (int64_t)(int)uVar38 * 8)) {
              uVar38 = uVar38 + 1;
            }
          }
joined_r0x018358af:
          if (iVar23 < lVar26) {
            do {
              bVar42 = uVar49 == 0;
              uVar49 = uVar49 - 1;
              if (bVar42) {
                uVar34 = 0;
                uVar20 = 0;
                if (0 < (int)uVar41) goto LAB_018358fc;
                goto LAB_01835916;
              }
            } while ((int64_t)iVar23 < *(int64_t *)(lVar30 + uVar49 * 8));
            uVar33 = (uint)uVar49;
          }
          else {
            lVar26 = 0;
            do {
              uVar34 = uVar41;
              if (~((int64_t)(int)uVar41 + 1U) + uVar49 + lVar26 == -2) goto LAB_01835916;
              lVar31 = lVar26 + 1;
              lVar36 = lVar26 * 8;
              lVar26 = lVar31;
            } while (*(int64_t *)(lVar30 + uVar49 * 8 + 8 + lVar36) <= (int64_t)iVar23);
            uVar33 = (uVar33 + (int)lVar31) - 1;
            uVar49 = (uint64_t)uVar33;
          }
          uVar34 = (uint)uVar49;
          uVar20 = uVar34;
          if ((int)uVar33 < (int)uVar41) {
LAB_018358fc:
            uVar34 = uVar20;
            if (*(int64_t *)(lVar30 + 8 + (int64_t)(int)uVar34 * 8) - (int64_t)iVar23 <
                (int64_t)iVar23 - *(int64_t *)(lVar30 + (int64_t)(int)uVar34 * 8)) {
              uVar34 = uVar34 + 1;
            }
          }
LAB_01835916:
          uVar49 = extraout_XMM0_Qa_00;
          if ((int)uVar38 < (int)uVar34) {
            lVar26 = (int64_t)(int)uVar38;
            if ((float)((uint)param_4 & uVar7) <= g_0239425c) {
              iVar22 = ~uVar38 + uVar34;
              while( true ) {
                iVar24 = FUN_00e7d850((double)(*(int64_t *)(lVar30 + lVar26 * 8) - local_88) *
                                      local_90);
                fVar52 = (float)iVar24 / fVar44;
                fVar45 = g_02390124;
                if (fVar52 <= g_02390124) {
                  fVar45 = fVar52;
                }
                fVar45 = (float)_powf(fVar45,g_02394298);
                fVar52 = ((float)iVar24 / fVar43) * g_02394278;
                lVar30 = *(int64_t *)(*arg1 + 0x10);
                fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * g_02394204);
                fVar46 = fVar46 * g_02394208;
                fVar45 = fVar45 * param_1 * g_023908e0;
                fVar52 = (float)_sinf(fVar52);
                fVar45 = (float)_exp2f((fVar52 * fVar45 + fVar46) * g_023941f4);
                uVar49 = (uint64_t)(uint)(fVar45 * g_023941f8);
                *(float *)(lVar30 + lVar26 * 4) = fVar45 * g_023941f8;
                bVar42 = iVar22 == 0;
                iVar22 = iVar22 + -1;
                if (bVar42) break;
                lVar30 = *(int64_t *)(*in_RDX + 0x10);
                lVar26 = lVar26 + 1;
              }
            }
            else {
              if (7 < iVar5) {
                do {
                  iVar22 = FUN_00e7d850((double)(*(int64_t *)(lVar30 + lVar26 * 8) - local_88) *
                                        local_90);
                  fVar52 = (float)iVar22 / fVar44;
                  fVar45 = g_02390124;
                  if (fVar52 <= g_02390124) {
                    fVar45 = fVar52;
                  }
                  fVar45 = (float)_powf(fVar45,g_02394298);
                  fVar52 = ((float)iVar22 / fVar43) * g_02394278;
                  lVar30 = *(int64_t *)(*arg1 + 0x10);
                  fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * g_02394204);
                  fVar46 = fVar46 * g_02394208;
                  local_94 = fVar45 * param_1 * g_023908e0;
                  fVar47 = (float)_sinf(fVar52);
                  fVar46 = (float)_exp2f((fVar47 * local_94 + fVar46) * g_023941f4);
                  fVar52 = (float)_sinf(fVar52 + fVar51);
                  uVar49 = _expf(fVar52 * fVar45 * param_1 * param_4);
                  *(float *)(lVar30 + lVar26 * 4) = fVar46 * g_023941f8;
                  lVar30 = *(int64_t *)
                            (*(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + lVar26 * 8) + 0x10);
                  fVar45 = (float)uVar49;
                  uVar32 = 1;
                  if (uVar1 < 8) {
LAB_01835b30:
                    do {
                      *(float *)(lVar30 + uVar32 * 4) = *(float *)(lVar30 + uVar32 * 4) * fVar45;
                      uVar32 = uVar32 + 1;
                    } while (uVar40 != uVar32);
                  }
                  else {
                    if (uVar27 - 8 == 0) {
                      lVar31 = 0;
LAB_01835af7:
                      uVar32 = lVar31 << 2 | 4;
                      pfVar3 = (float *)(lVar30 + uVar32);
                      fVar52 = pfVar3[1];
                      fVar46 = pfVar3[2];
                      fVar47 = pfVar3[3];
                      pfVar4 = (float *)(lVar30 + 0x10 + uVar32);
                      fVar8 = *pfVar4;
                      fVar9 = pfVar4[1];
                      fVar10 = pfVar4[2];
                      fVar11 = pfVar4[3];
                      pfVar4 = (float *)(lVar30 + uVar32);
                      *pfVar4 = *pfVar3 * fVar45;
                      pfVar4[1] = fVar52 * fVar45;
                      pfVar4[2] = fVar46 * fVar45;
                      pfVar4[3] = fVar47 * fVar45;
                      pfVar3 = (float *)(lVar30 + 0x10 + uVar32);
                      *pfVar3 = fVar8 * fVar45;
                      pfVar3[1] = fVar9 * fVar45;
                      pfVar3[2] = fVar10 * fVar45;
                      pfVar3[3] = fVar11 * fVar45;
                    }
                    else {
                      lVar31 = 0;
                      lVar36 = -(uVar35 & 0xfffffffffffffffe);
                      do {
                        pfVar3 = (float *)(lVar30 + 4 + lVar31 * 4);
                        fVar52 = pfVar3[1];
                        fVar46 = pfVar3[2];
                        fVar47 = pfVar3[3];
                        pfVar4 = (float *)(lVar30 + 0x14 + lVar31 * 4);
                        fVar8 = *pfVar4;
                        fVar9 = pfVar4[1];
                        fVar10 = pfVar4[2];
                        fVar11 = pfVar4[3];
                        pfVar4 = (float *)(lVar30 + 0x24 + lVar31 * 4);
                        fVar12 = *pfVar4;
                        fVar13 = pfVar4[1];
                        fVar14 = pfVar4[2];
                        fVar15 = pfVar4[3];
                        pfVar4 = (float *)(lVar30 + 0x34 + lVar31 * 4);
                        fVar16 = *pfVar4;
                        fVar17 = pfVar4[1];
                        fVar18 = pfVar4[2];
                        fVar19 = pfVar4[3];
                        pfVar4 = (float *)(lVar30 + 4 + lVar31 * 4);
                        *pfVar4 = *pfVar3 * fVar45;
                        pfVar4[1] = fVar52 * fVar45;
                        pfVar4[2] = fVar46 * fVar45;
                        pfVar4[3] = fVar47 * fVar45;
                        pfVar3 = (float *)(lVar30 + 0x14 + lVar31 * 4);
                        *pfVar3 = fVar8 * fVar45;
                        pfVar3[1] = fVar9 * fVar45;
                        pfVar3[2] = fVar10 * fVar45;
                        pfVar3[3] = fVar11 * fVar45;
                        pfVar3 = (float *)(lVar30 + 0x24 + lVar31 * 4);
                        *pfVar3 = fVar12 * fVar45;
                        pfVar3[1] = fVar13 * fVar45;
                        pfVar3[2] = fVar14 * fVar45;
                        pfVar3[3] = fVar15 * fVar45;
                        pfVar3 = (float *)(lVar30 + 0x34 + lVar31 * 4);
                        *pfVar3 = fVar16 * fVar45;
                        pfVar3[1] = fVar17 * fVar45;
                        pfVar3[2] = fVar18 * fVar45;
                        pfVar3[3] = fVar19 * fVar45;
                        lVar31 = lVar31 + 0x10;
                        lVar36 = lVar36 + 2;
                      } while (lVar36 != 0);
                      if ((uVar35 & 1) != 0) goto LAB_01835af7;
                    }
                    uVar32 = uVar27 + 1;
                    if (uVar1 != uVar27) goto LAB_01835b30;
                  }
                  lVar26 = lVar26 + 1;
                  if (uVar34 == (uint)lVar26) goto LAB_01835d70;
                  lVar30 = *(int64_t *)(*in_RDX + 0x10);
                } while( true );
              }
              iVar22 = ~uVar38 + uVar34;
              while( true ) {
                iVar24 = FUN_00e7d850((double)(*(int64_t *)(lVar30 + lVar26 * 8) - local_88) *
                                      local_90);
                fVar52 = (float)iVar24 / fVar44;
                fVar45 = g_02390124;
                if (fVar52 <= g_02390124) {
                  fVar45 = fVar52;
                }
                fVar45 = (float)_powf(fVar45,g_02394298);
                fVar52 = ((float)iVar24 / fVar43) * g_02394278;
                lVar30 = *(int64_t *)(*arg1 + 0x10);
                fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * g_02394204);
                fVar46 = fVar46 * g_02394208;
                fVar45 = fVar45 * param_1 * g_023908e0;
                fVar52 = (float)_sinf(fVar52);
                fVar45 = (float)_exp2f((fVar52 * fVar45 + fVar46) * g_023941f4);
                uVar49 = (uint64_t)(uint)(fVar45 * g_023941f8);
                *(float *)(lVar30 + lVar26 * 4) = fVar45 * g_023941f8;
                bVar42 = iVar22 == 0;
                iVar22 = iVar22 + -1;
                if (bVar42) break;
                lVar30 = *(int64_t *)(*in_RDX + 0x10);
                lVar26 = lVar26 + 1;
              }
            }
          }
        }
LAB_01835d70:
        if (lVar6 != 0) {
          uVar49 = FUN_00d50b20();
        }
        lVar37 = lVar37 + 1;
        lVar26 = *this_ptr;
      } while (lVar37 < *(int *)(lVar26 + 0xc));
    }
  }
  return;
}

