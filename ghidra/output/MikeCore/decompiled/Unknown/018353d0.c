// Function: FUN_018353d0
// Address: 018353d0
// Size: 2463 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01835b6f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018353d0(float param_1,float param_2,float param_3,float param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
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
  longlong lVar26;
  ulonglong uVar27;
  pthread_key_t pVar28;
  longlong *in_RCX;
  longlong *plVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  longlong *in_RDX;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  uint uVar41;
  bool bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  ulonglong uVar49;
  double dVar50;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  float fVar51;
  float fVar52;
  uint in_XMM4_Da;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  float local_94;
  double local_90;
  longlong local_88;
  longlong *local_50;
  char local_48;
  
  if ((*unaff_RDI != 0) && (*(int *)(*unaff_RDI + 0xc) != 0)) {
    plVar29 = in_RCX;
    pvVar25 = _pthread_getspecific((pthread_key_t)in_RCX);
    pVar28 = (pthread_key_t)plVar29;
    if (pvVar25 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df6b0();
    pvVar25 = _pthread_getspecific(pVar28);
    plVar29 = local_50;
    if ((pvVar25 != (void *)0x0) && (lVar26 = FUN_00e8b990(), lVar26 != 0)) {
      plVar29 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar26 + 0x154) & 1) + 4];
    }
    dVar48 = (double)(**(code **)(*plVar29 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar5 = *(int *)(**(longlong **)(*in_RCX + 0x10) + 0x18);
    iVar22 = FUN_00e7d850((double)param_2 * dVar48);
    lVar26 = *unaff_RDI;
    if (0 < *(int *)(lVar26 + 0xc)) {
      fVar43 = (float)(dVar48 / (double)param_3);
      fVar44 = (float)iVar22;
      uVar7 = (uint)DAT_02390140;
      uVar49 = (ulonglong)DAT_02390140;
      fVar51 = (float)(in_XMM4_Da & uVar7) * DAT_02394278;
      iVar22 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar22 = iVar5;
      }
      uVar40 = 2;
      if (2 < iVar22 >> 2) {
        uVar40 = (ulonglong)(uint)(iVar22 >> 2);
      }
      uVar1 = uVar40 - 1;
      uVar27 = uVar1 & 0xfffffffffffffff8;
      uVar35 = (uVar27 - 8 >> 3) + 1;
      lVar37 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + lVar37 * 8);
        if (lVar6 != 0) {
          uVar49 = FUN_00d50b00();
        }
        pVar28 = (pthread_key_t)lVar26;
        local_b0 = '\0';
        local_b8 = lVar6;
        FUN_0133ae40(uVar49,&local_b8);
        dVar50 = (double)FUN_00d45bc0();
        local_90 = dVar50;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
          local_88 = (longlong)iVar22;
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
          uVar49 = (ulonglong)(int)uVar33;
          lVar30 = *(longlong *)(*in_RDX + 0x10);
          lVar26 = *(longlong *)(lVar30 + uVar49 * 8);
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
            } while (local_88 < *(longlong *)(lVar30 + uVar39 * 8));
            uVar34 = (uint)uVar39;
          }
          else {
            lVar31 = 0;
            do {
              uVar38 = uVar41;
              if (~((longlong)(int)uVar41 + 1U) + uVar49 + lVar31 == -2) goto joined_r0x018358af;
              lVar36 = lVar31 + 1;
              lVar2 = lVar31 * 8;
              lVar31 = lVar36;
            } while (*(longlong *)(lVar30 + uVar49 * 8 + 8 + lVar2) <= local_88);
            uVar34 = (uVar33 + (int)lVar36) - 1;
            uVar39 = (ulonglong)uVar34;
          }
          uVar38 = (uint)uVar39;
          uVar20 = uVar38;
          if ((int)uVar34 < (int)uVar41) {
LAB_0183585e:
            uVar38 = uVar20;
            if (*(longlong *)(lVar30 + 8 + (longlong)(int)uVar38 * 8) - local_88 <
                local_88 - *(longlong *)(lVar30 + (longlong)(int)uVar38 * 8)) {
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
            } while ((longlong)iVar23 < *(longlong *)(lVar30 + uVar49 * 8));
            uVar33 = (uint)uVar49;
          }
          else {
            lVar26 = 0;
            do {
              uVar34 = uVar41;
              if (~((longlong)(int)uVar41 + 1U) + uVar49 + lVar26 == -2) goto LAB_01835916;
              lVar31 = lVar26 + 1;
              lVar36 = lVar26 * 8;
              lVar26 = lVar31;
            } while (*(longlong *)(lVar30 + uVar49 * 8 + 8 + lVar36) <= (longlong)iVar23);
            uVar33 = (uVar33 + (int)lVar31) - 1;
            uVar49 = (ulonglong)uVar33;
          }
          uVar34 = (uint)uVar49;
          uVar20 = uVar34;
          if ((int)uVar33 < (int)uVar41) {
LAB_018358fc:
            uVar34 = uVar20;
            if (*(longlong *)(lVar30 + 8 + (longlong)(int)uVar34 * 8) - (longlong)iVar23 <
                (longlong)iVar23 - *(longlong *)(lVar30 + (longlong)(int)uVar34 * 8)) {
              uVar34 = uVar34 + 1;
            }
          }
LAB_01835916:
          uVar49 = extraout_XMM0_Qa_00;
          if ((int)uVar38 < (int)uVar34) {
            lVar26 = (longlong)(int)uVar38;
            if ((float)((uint)param_4 & uVar7) <= DAT_0239425c) {
              iVar22 = ~uVar38 + uVar34;
              while( true ) {
                iVar24 = FUN_00e7d850((double)(*(longlong *)(lVar30 + lVar26 * 8) - local_88) *
                                      local_90);
                fVar52 = (float)iVar24 / fVar44;
                fVar45 = DAT_02390124;
                if (fVar52 <= DAT_02390124) {
                  fVar45 = fVar52;
                }
                fVar45 = (float)_powf(fVar45,DAT_02394298);
                fVar52 = ((float)iVar24 / fVar43) * DAT_02394278;
                lVar30 = *(longlong *)(*unaff_RSI + 0x10);
                fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * DAT_02394204);
                fVar46 = fVar46 * DAT_02394208;
                fVar45 = fVar45 * param_1 * DAT_023908e0;
                fVar52 = (float)_sinf(fVar52);
                fVar45 = (float)_exp2f((fVar52 * fVar45 + fVar46) * DAT_023941f4);
                uVar49 = (ulonglong)(uint)(fVar45 * DAT_023941f8);
                *(float *)(lVar30 + lVar26 * 4) = fVar45 * DAT_023941f8;
                bVar42 = iVar22 == 0;
                iVar22 = iVar22 + -1;
                if (bVar42) break;
                lVar30 = *(longlong *)(*in_RDX + 0x10);
                lVar26 = lVar26 + 1;
              }
            }
            else {
              if (7 < iVar5) {
                do {
                  iVar22 = FUN_00e7d850((double)(*(longlong *)(lVar30 + lVar26 * 8) - local_88) *
                                        local_90);
                  fVar52 = (float)iVar22 / fVar44;
                  fVar45 = DAT_02390124;
                  if (fVar52 <= DAT_02390124) {
                    fVar45 = fVar52;
                  }
                  fVar45 = (float)_powf(fVar45,DAT_02394298);
                  fVar52 = ((float)iVar22 / fVar43) * DAT_02394278;
                  lVar30 = *(longlong *)(*unaff_RSI + 0x10);
                  fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * DAT_02394204);
                  fVar46 = fVar46 * DAT_02394208;
                  local_94 = fVar45 * param_1 * DAT_023908e0;
                  fVar47 = (float)_sinf(fVar52);
                  fVar46 = (float)_exp2f((fVar47 * local_94 + fVar46) * DAT_023941f4);
                  fVar52 = (float)_sinf(fVar52 + fVar51);
                  uVar49 = _expf(fVar52 * fVar45 * param_1 * param_4);
                  *(float *)(lVar30 + lVar26 * 4) = fVar46 * DAT_023941f8;
                  lVar30 = *(longlong *)
                            (*(longlong *)(*(longlong *)(*in_RCX + 0x10) + lVar26 * 8) + 0x10);
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
                  lVar30 = *(longlong *)(*in_RDX + 0x10);
                } while( true );
              }
              iVar22 = ~uVar38 + uVar34;
              while( true ) {
                iVar24 = FUN_00e7d850((double)(*(longlong *)(lVar30 + lVar26 * 8) - local_88) *
                                      local_90);
                fVar52 = (float)iVar24 / fVar44;
                fVar45 = DAT_02390124;
                if (fVar52 <= DAT_02390124) {
                  fVar45 = fVar52;
                }
                fVar45 = (float)_powf(fVar45,DAT_02394298);
                fVar52 = ((float)iVar24 / fVar43) * DAT_02394278;
                lVar30 = *(longlong *)(*unaff_RSI + 0x10);
                fVar46 = (float)_logf(*(float *)(lVar30 + lVar26 * 4) * DAT_02394204);
                fVar46 = fVar46 * DAT_02394208;
                fVar45 = fVar45 * param_1 * DAT_023908e0;
                fVar52 = (float)_sinf(fVar52);
                fVar45 = (float)_exp2f((fVar52 * fVar45 + fVar46) * DAT_023941f4);
                uVar49 = (ulonglong)(uint)(fVar45 * DAT_023941f8);
                *(float *)(lVar30 + lVar26 * 4) = fVar45 * DAT_023941f8;
                bVar42 = iVar22 == 0;
                iVar22 = iVar22 + -1;
                if (bVar42) break;
                lVar30 = *(longlong *)(*in_RDX + 0x10);
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
        lVar26 = *unaff_RDI;
      } while (lVar37 < *(int *)(lVar26 + 0xc));
    }
  }
  return;
}


