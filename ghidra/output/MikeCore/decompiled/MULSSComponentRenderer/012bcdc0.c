// Function: FUN_012bcdc0
// Address: 012bcdc0
// Size: 2341 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x012bd6f1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bcdc0(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint in_ECX;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong uVar24;
  uint in_EDX;
  longlong lVar25;
  uint uVar26;
  longlong unaff_RSI;
  longlong lVar27;
  longlong unaff_RDI;
  ulonglong uVar28;
  ulonglong uVar29;
  uint in_R8D;
  longlong in_R9;
  longlong lVar30;
  uint uVar31;
  ulonglong uVar32;
  float fVar33;
  double dVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  char local_res8;
  longlong local_90;
  char local_88;
  double local_40;
  
  uVar18 = in_ECX + in_EDX;
  uVar31 = in_ECX;
  uVar26 = in_EDX;
  if ((in_R9 != 0) && (local_res8 != '\0')) {
    *(undefined8 *)(unaff_RDI + 0x2a8) = 0;
    *(undefined1 *)(unaff_RDI + 0x2a3) = 1;
    uVar26 = 0;
    uVar31 = uVar18;
  }
  local_40 = (double)*(int *)(unaff_RDI + 0x164) / *(double *)(unaff_RDI + 0x2b0);
  dVar8 = ((double)*(int *)(unaff_RDI + 0x164) / (double)param_2 - local_40) / (double)(int)uVar31;
  *(double *)(unaff_RDI + 0x2b0) = (double)param_2;
  if (in_R9 == 0) {
    FUN_012a61d0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_012a6280();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    if (0 < (int)uVar31) {
      fVar40 = (param_1 + DAT_0241b660) * DAT_0239425c;
      fVar38 = 0.0;
      if (0.0 <= fVar40) {
        fVar38 = fVar40;
      }
      fVar40 = DAT_02390124;
      if (fVar38 <= DAT_02390124) {
        fVar40 = fVar38;
      }
      fVar38 = DAT_02390124 - fVar40;
      lVar30 = (longlong)(int)uVar26;
      dVar34 = *(double *)(unaff_RDI + 0x2a8);
      uVar26 = 0;
      do {
        iVar20 = FUN_00e7d850(dVar34 * _DAT_0240d1d0);
        iVar19 = iVar20 + -0x4000;
        if (iVar20 < 0x4000) {
          iVar19 = iVar20;
        }
        *(float *)(*(longlong *)(unaff_RDI + 0x2b8) + lVar30 * 4) =
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar40 +
             *(float *)(*(longlong *)(local_90 + 0x10) + (longlong)iVar19 * 4) * fVar38;
        for (dVar34 = *(double *)(unaff_RDI + 0x2a8) + local_40; DAT_0238fee8 <= dVar34;
            dVar34 = dVar34 + DAT_023b19a0) {
        }
        *(double *)(unaff_RDI + 0x2a8) = dVar34;
        local_40 = local_40 + dVar8;
        lVar30 = lVar30 + 1;
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar31);
    }
    if (local_90 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else if (0 < (int)uVar31) {
    lVar30 = (longlong)(int)uVar26;
    dVar34 = *(double *)(unaff_RDI + 0x2a8);
    uVar26 = 0;
    do {
      iVar19 = FUN_00e7d850(dVar34 * DAT_024110f0);
      cVar5 = *(char *)(unaff_RDI + 0x2a3);
      if (cVar5 == '\0') {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x200) {
          iVar20 = iVar19;
        }
        iVar20 = iVar20 + 0x1e00;
      }
      else {
        iVar20 = iVar19 + -0x200;
        if (iVar19 < 0x2000) {
          iVar20 = iVar19;
        }
      }
      *(undefined4 *)(*(longlong *)(unaff_RDI + 0x2b8) + lVar30 * 4) =
           *(undefined4 *)(in_R9 + (longlong)iVar20 * 4);
      dVar34 = *(double *)(unaff_RDI + 0x2a8) + local_40;
      *(double *)(unaff_RDI + 0x2a8) = dVar34;
      if (cVar5 == '\0') {
        if (DAT_0238fee8 <= dVar34) {
          do {
            dVar34 = dVar34 + DAT_023b19a0;
          } while (DAT_0238fee8 <= dVar34);
          *(double *)(unaff_RDI + 0x2a8) = dVar34;
        }
      }
      else if (DAT_023b2560 <= dVar34) {
        dVar34 = dVar34 + _DAT_0240d1c8;
        *(double *)(unaff_RDI + 0x2a8) = dVar34;
        *(undefined1 *)(unaff_RDI + 0x2a3) = 0;
      }
      local_40 = local_40 + dVar8;
      lVar30 = lVar30 + 1;
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar31);
  }
  if (0 < *(int *)(unaff_RDI + 0x160)) {
    pfVar6 = *(float **)(unaff_RDI + 0x1d0);
    lVar30 = *(longlong *)(unaff_RDI + 0x2c0);
    fVar40 = DAT_02390124 - param_4;
    param_3 = param_3 * param_4;
    fVar42 = DAT_023d5f44 / (float)(int)in_EDX;
    pfVar1 = pfVar6 + (int)in_EDX;
    fVar38 = DAT_023d5f44 / (float)(int)in_ECX;
    uVar32 = (ulonglong)uVar18;
    uVar28 = (ulonglong)(uVar18 & 0xfffffff8);
    uVar29 = (uVar28 - 8 >> 3) + 1;
    lVar27 = 0;
    do {
      pfVar7 = *(float **)(*(longlong *)(unaff_RDI + 0x1e0) + lVar27 * 8);
      ___bzero();
      if (0 < (int)uVar18) {
        pfVar23 = *(float **)(unaff_RDI + 0x2b8);
        if (uVar18 < 8) {
LAB_012bd6c0:
          uVar24 = 0;
        }
        else {
          if (pfVar6 < pfVar7 + uVar32 && pfVar7 < pfVar6 + uVar32) goto LAB_012bd6c0;
          uVar24 = 0;
          if (pfVar23 + uVar32 <= pfVar6 || pfVar6 + uVar32 <= pfVar23) {
            if (uVar28 - 8 == 0) {
              lVar21 = 0;
LAB_012bd3b4:
              pfVar2 = pfVar7 + lVar21;
              fVar33 = pfVar2[1];
              fVar9 = pfVar2[2];
              fVar36 = pfVar2[3];
              pfVar3 = pfVar7 + lVar21 + 4;
              fVar37 = *pfVar3;
              fVar41 = pfVar3[1];
              fVar39 = pfVar3[2];
              fVar10 = pfVar3[3];
              pfVar3 = pfVar23 + lVar21;
              fVar11 = pfVar3[1];
              fVar12 = pfVar3[2];
              fVar13 = pfVar3[3];
              pfVar4 = pfVar23 + lVar21 + 4;
              fVar14 = *pfVar4;
              fVar15 = pfVar4[1];
              fVar16 = pfVar4[2];
              fVar17 = pfVar4[3];
              pfVar4 = pfVar6 + lVar21;
              *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
              pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
              pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
              pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
              pfVar2 = pfVar6 + lVar21 + 4;
              *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
              pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
              pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
              pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
            }
            else {
              lVar21 = 0;
              lVar25 = -(uVar29 & 0xfffffffffffffffe);
              do {
                pfVar2 = pfVar7 + lVar21;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 4;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 4;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 4;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                pfVar2 = pfVar7 + lVar21 + 8;
                fVar33 = pfVar2[1];
                fVar9 = pfVar2[2];
                fVar36 = pfVar2[3];
                pfVar3 = pfVar7 + lVar21 + 0xc;
                fVar37 = *pfVar3;
                fVar41 = pfVar3[1];
                fVar39 = pfVar3[2];
                fVar10 = pfVar3[3];
                pfVar3 = pfVar23 + lVar21 + 8;
                fVar11 = pfVar3[1];
                fVar12 = pfVar3[2];
                fVar13 = pfVar3[3];
                pfVar4 = pfVar23 + lVar21 + 0xc;
                fVar14 = *pfVar4;
                fVar15 = pfVar4[1];
                fVar16 = pfVar4[2];
                fVar17 = pfVar4[3];
                pfVar4 = pfVar6 + lVar21 + 8;
                *pfVar4 = *pfVar3 * param_3 + *pfVar2 * fVar40;
                pfVar4[1] = fVar11 * param_3 + fVar33 * fVar40;
                pfVar4[2] = fVar12 * param_3 + fVar9 * fVar40;
                pfVar4[3] = fVar13 * param_3 + fVar36 * fVar40;
                pfVar2 = pfVar6 + lVar21 + 0xc;
                *pfVar2 = fVar14 * param_3 + fVar37 * fVar40;
                pfVar2[1] = fVar15 * param_3 + fVar41 * fVar40;
                pfVar2[2] = fVar16 * param_3 + fVar39 * fVar40;
                pfVar2[3] = fVar17 * param_3 + fVar10 * fVar40;
                lVar21 = lVar21 + 0x10;
                lVar25 = lVar25 + 2;
              } while (lVar25 != 0);
              if ((uVar29 & 1) != 0) goto LAB_012bd3b4;
            }
            uVar24 = uVar28;
            if (uVar28 == uVar32) goto LAB_012bd494;
          }
        }
        uVar22 = uVar24;
        if ((uVar18 & 1) != 0) {
          pfVar6[uVar24] = pfVar23[uVar24] * param_3 + pfVar7[uVar24] * fVar40;
          uVar22 = uVar24 | 1;
        }
        if (~uVar24 != -uVar32) {
          do {
            pfVar6[uVar22] = pfVar23[uVar22] * param_3 + pfVar7[uVar22] * fVar40;
            pfVar6[uVar22 + 1] = pfVar23[uVar22 + 1] * param_3 + pfVar7[uVar22 + 1] * fVar40;
            uVar22 = uVar22 + 2;
          } while (uVar32 != uVar22);
        }
      }
LAB_012bd494:
      pfVar7 = DAT_028ac5d0;
      if (in_EDX != 0) {
        pfVar23 = pfVar6;
        fVar33 = 0.0;
        uVar31 = in_EDX;
        if ((in_EDX & 1) != 0) {
          *pfVar6 = *DAT_028ac5d0 * *pfVar6;
          pfVar23 = pfVar6 + 1;
          fVar33 = fVar42 + 0.0;
          uVar31 = in_EDX - 1;
        }
        if (in_EDX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(int)fVar33] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] = pfVar7[(int)(fVar33 + fVar42)] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar42 + fVar42;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      if (in_ECX != 0) {
        pfVar23 = pfVar1;
        fVar33 = 0.0;
        uVar31 = in_ECX;
        if ((in_ECX & 1) != 0) {
          *pfVar1 = pfVar7[0x2000] * *pfVar1;
          pfVar23 = pfVar1 + 1;
          fVar33 = fVar38 + 0.0;
          uVar31 = in_ECX - 1;
        }
        if (in_ECX != 1) {
          lVar21 = 0;
          do {
            pfVar23[lVar21] = pfVar7[(longlong)(int)fVar33 + 0x2000] * pfVar23[lVar21];
            pfVar23[lVar21 + 1] =
                 pfVar7[(longlong)(int)(fVar33 + fVar38) + 0x2000] * pfVar23[lVar21 + 1];
            fVar33 = fVar33 + fVar38 + fVar38;
            lVar21 = lVar21 + 2;
          } while (uVar31 != (uint)lVar21);
        }
      }
      uVar35 = ___bzero();
      FUN_00e83530(uVar35,pfVar6);
      uVar26 = _DAT_023945e0;
      fVar9 = DAT_02394274;
      uVar31 = _DAT_02390140;
      fVar33 = DAT_02390124;
      if (0 < (int)in_R8D) {
        lVar21 = *(longlong *)(unaff_RSI + lVar27 * 8);
        uVar24 = 0;
        do {
          uVar35 = *(undefined8 *)(lVar30 + uVar24 * 8);
          fVar36 = (float)uVar35;
          fVar37 = (float)((ulonglong)uVar35 >> 0x20);
          fVar41 = (float)((uint)fVar37 & uVar31);
          if ((fVar36 != 0.0) || (fVar39 = fVar41, NAN(fVar36))) {
            fVar39 = (float)((uint)fVar36 & uVar31);
            if ((fVar37 != 0.0) || (NAN(fVar37))) {
              if (fVar39 <= fVar41) {
                fVar39 = SQRT((fVar39 / fVar41) * (fVar39 / fVar41) + fVar33);
              }
              else {
                fVar41 = SQRT((fVar41 / fVar39) * (fVar41 / fVar39) + fVar33);
              }
              fVar39 = fVar39 * fVar41;
            }
          }
          fVar41 = 0.0;
          if (fVar9 < fVar39) {
            fVar41 = fVar33 / fVar39;
          }
          *(float *)(lVar21 + uVar24 * 8) = fVar36 * fVar41;
          *(float *)(lVar21 + 4 + uVar24 * 8) = (float)((uint)fVar37 ^ uVar26) * fVar41;
          uVar24 = uVar24 + 1;
        } while (in_R8D != uVar24);
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(unaff_RDI + 0x160));
  }
  return;
}


