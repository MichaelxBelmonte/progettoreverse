// Function: FUN_01836220
// Address: 01836220
// Size: 6198 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0183708c) */
/* WARNING: Removing unreachable block (ram,0x01837095) */
/* WARNING: Removing unreachable block (ram,0x01836b34) */
/* WARNING: Removing unreachable block (ram,0x01836b3d) */
/* WARNING: Removing unreachable block (ram,0x0183688a) */
/* WARNING: Removing unreachable block (ram,0x01836893) */
/* WARNING: Removing unreachable block (ram,0x01836c82) */
/* WARNING: Removing unreachable block (ram,0x01836c8b) */
/* WARNING: Removing unreachable block (ram,0x01837158) */
/* WARNING: Removing unreachable block (ram,0x01837161) */
/* WARNING: Removing unreachable block (ram,0x01836ae2) */
/* WARNING: Removing unreachable block (ram,0x01836aeb) */
/* WARNING: Removing unreachable block (ram,0x01836604) */
/* WARNING: Removing unreachable block (ram,0x0183660d) */
/* WARNING: Removing unreachable block (ram,0x01836833) */
/* WARNING: Removing unreachable block (ram,0x0183683c) */
/* WARNING: Removing unreachable block (ram,0x01836c2b) */
/* WARNING: Removing unreachable block (ram,0x01836c34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01836220(double param_1,double param_2,double param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong *in_RCX;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *in_RDX;
  longlong lVar18;
  int iVar19;
  longlong *unaff_RSI;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  longlong *unaff_RDI;
  longlong *in_R8;
  int iVar23;
  longlong *in_R9;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  char cVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  float in_XMM5_Da;
  undefined4 unaff_XMM6_Da;
  longlong *local_res8;
  char local_res10;
  longlong *local_res18;
  longlong local_res20;
  longlong local_e8;
  char local_e0;
  longlong local_a0;
  longlong local_90;
  longlong local_80;
  int local_70;
  longlong local_60;
  longlong local_58;
  char local_50;
  char local_32;
  char local_31;
  
  local_80 = *unaff_RDI;
  local_31 = (char)unaff_RDI[1];
  bVar33 = local_31 != '\0';
  bVar34 = local_80 != 0;
  if (bVar34 && bVar33) {
    FUN_00d50b00();
  }
  local_90 = *unaff_RSI;
  local_32 = (char)unaff_RSI[1];
  bVar35 = local_32 != '\0';
  bVar36 = local_90 != 0;
  if (bVar36 && bVar35) {
    FUN_00d50b00();
  }
  lVar15 = *in_RDX;
  cVar1 = (char)in_RDX[1];
  if (lVar15 != 0 && cVar1 != '\0') {
    FUN_00d50b00();
  }
  local_a0 = lVar15;
  cVar30 = cVar1;
  if (local_res10 != '\0') {
    lVar26 = *in_RCX;
    cVar30 = (char)in_RCX[1];
    if (local_80 == lVar26) {
      if (((cVar30 != '\0') && (local_31 == '\0')) && (local_80 != 0)) {
        local_31 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if ((cVar30 != '\0') && (lVar26 != 0)) {
        FUN_00d50b00();
      }
      local_80 = lVar26;
      local_31 = cVar30;
      if (bVar34 && bVar33) {
        FUN_00d50b20();
      }
    }
    lVar26 = *in_R8;
    cVar30 = (char)in_R8[1];
    if (local_90 == lVar26) {
      if (((cVar30 != '\0') && (local_32 == '\0')) && (local_90 != 0)) {
        local_32 = '\x01';
        FUN_00d50b00();
      }
    }
    else {
      if ((cVar30 != '\0') && (lVar26 != 0)) {
        FUN_00d50b00();
      }
      local_90 = lVar26;
      local_32 = cVar30;
      if (bVar36 && bVar35) {
        FUN_00d50b20();
      }
    }
    local_a0 = *in_R9;
    cVar30 = (char)in_R9[1];
    if (lVar15 == local_a0) {
      bVar33 = cVar30 != '\0';
      local_a0 = lVar15;
      cVar30 = cVar1;
      if (((bVar33) && (cVar1 == '\0')) && (lVar15 != 0)) {
        FUN_00d50b00();
        cVar30 = '\x01';
      }
    }
    else {
      if ((cVar30 != '\0') && (local_a0 != 0)) {
        FUN_00d50b00();
      }
      if (lVar15 != 0 && cVar1 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  uVar8 = *(uint *)(*in_RCX + 0xc);
  iVar2 = *(int *)(**(longlong **)(*in_RCX + 0x10) + 0x18);
  iVar19 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar19 = iVar2;
  }
  puVar9 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &DAT_025f0d98;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  (*DAT_025f0db0)();
  dVar43 = *(double *)(*local_res18 + 0x38);
  iVar5 = FUN_014832c0();
  dVar43 = (double)(float)(DAT_023b2c70 / dVar43);
  uVar10 = FUN_00e7d850(SUB84((param_2 + DAT_0241b680) * dVar43,0));
  uVar37 = _powf(unaff_XMM6_Da,DAT_02394298);
  fVar38 = (float)FUN_014b7610(param_4);
  uVar14 = (uint)uVar10;
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar11 = uVar10 & 0xffffffff;
  if (0 < (int)uVar14) {
    uVar32 = 0;
    do {
      iVar6 = FUN_00e7d850(SUB84(((double)(int)uVar32 / dVar43) * param_1,0));
      lVar15 = (longlong)iVar6;
      iVar6 = *(int *)(*local_res8 + 0x18);
      iVar17 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar17 = iVar6;
      }
      iVar23 = (iVar17 >> 3) + -1;
      iVar17 = iVar23;
      if (7 < iVar6) {
        iVar17 = 0;
      }
      uVar20 = (ulonglong)iVar17;
      lVar26 = *(longlong *)(*local_res8 + 0x10);
      if (lVar15 < *(longlong *)(lVar26 + uVar20 * 8)) {
        do {
          bVar33 = uVar20 == 0;
          uVar20 = uVar20 - 1;
          if (bVar33) {
            iVar6 = 0;
            iVar17 = 0;
            if (iVar23 < 1) goto LAB_01836653;
            goto LAB_0183674b;
          }
        } while (lVar15 < *(longlong *)(lVar26 + uVar20 * 8));
        uVar7 = (uint)uVar20;
      }
      else {
        lVar21 = 0;
        do {
          iVar6 = iVar23;
          if (~((longlong)iVar23 + 1U) + uVar20 + lVar21 == -2) goto LAB_01836653;
          lVar28 = lVar21 + 1;
          lVar24 = lVar21 * 8;
          lVar21 = lVar28;
        } while (*(longlong *)(lVar26 + uVar20 * 8 + 8 + lVar24) <= lVar15);
        uVar7 = (iVar17 + (int)lVar28) - 1;
        uVar20 = (ulonglong)uVar7;
      }
      iVar6 = (int)uVar20;
      iVar17 = iVar6;
      if ((int)uVar7 < iVar23) {
LAB_0183674b:
        iVar6 = iVar17;
        if (*(longlong *)(lVar26 + 8 + (longlong)iVar6 * 8) - lVar15 <
            lVar15 - *(longlong *)(lVar26 + (longlong)iVar6 * 8)) {
          iVar6 = iVar6 + 1;
        }
      }
LAB_01836653:
      *(int *)(*(longlong *)(local_58 + 0x10) + uVar32 * 4) = iVar6;
      uVar32 = uVar32 + 1;
    } while (uVar32 != uVar11);
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  uVar7 = iVar19 >> 2;
  uVar32 = (ulonglong)uVar7;
  if (3 < iVar2) {
    uVar20 = uVar32;
    if ((int)uVar14 < 1) {
      do {
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_50 = '\0';
        FUN_00d21140();
        FUN_015c15b0(uVar37,uVar10);
        FUN_00d50b20();
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    else {
      uVar20 = 0;
      do {
        FUN_00c8e690();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        ___bzero();
        local_50 = '\0';
        FUN_00d21140();
        lVar15 = *(longlong *)(local_58 + 0x10);
        if (in_XMM5_Da <= DAT_02394244) {
          lVar26 = *(longlong *)(local_80 + 0x10);
          lVar21 = *(longlong *)(local_58 + 0x10);
          if (uVar11 == 1) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            do {
              *(undefined4 *)(lVar21 + uVar27 * 4) =
                   *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(lVar26 + (longlong)*(int *)(lVar15 + uVar27 * 4) * 8) + 0x10) +
                    uVar20 * 4);
              *(undefined4 *)(lVar21 + 4 + uVar27 * 4) =
                   *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(lVar26 + (longlong)*(int *)(lVar15 + 4 + uVar27 * 4) * 8) +
                      0x10) + uVar20 * 4);
              uVar27 = uVar27 + 2;
            } while ((uVar14 & 0xfffffffe) != uVar27);
          }
          if ((uVar10 & 1) != 0) {
            *(undefined4 *)(lVar21 + uVar27 * 4) =
                 *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(lVar26 + (longlong)*(int *)(lVar15 + uVar27 * 4) * 8) + 0x10) +
                  uVar20 * 4);
          }
        }
        else {
          fVar41 = (float)(int)uVar20;
          lVar26 = *(longlong *)(local_90 + 0x10);
          lVar21 = *(longlong *)(local_58 + 0x10);
          if (uVar11 == 1) {
            uVar27 = 0;
          }
          else {
            uVar27 = 0;
            do {
              uVar39 = _logf(*(float *)(*(longlong *)
                                         (*(longlong *)
                                           (lVar26 + (longlong)*(int *)(lVar15 + uVar27 * 4) * 8) +
                                         0x10) + uVar20 * 4) / fVar41);
              *(undefined4 *)(lVar21 + uVar27 * 4) = uVar39;
              uVar39 = _logf(*(float *)(*(longlong *)
                                         (*(longlong *)
                                           (lVar26 + (longlong)*(int *)(lVar15 + 4 + uVar27 * 4) * 8
                                           ) + 0x10) + uVar20 * 4) / fVar41);
              *(undefined4 *)(lVar21 + 4 + uVar27 * 4) = uVar39;
              uVar27 = uVar27 + 2;
            } while ((uVar14 & 0xfffffffe) != uVar27);
          }
          if ((uVar10 & 1) != 0) {
            uVar39 = _logf(*(float *)(*(longlong *)
                                       (*(longlong *)
                                         (lVar26 + (longlong)*(int *)(lVar15 + uVar27 * 4) * 8) +
                                       0x10) + uVar20 * 4) / fVar41);
            *(undefined4 *)(lVar21 + uVar27 * 4) = uVar39;
          }
        }
        FUN_015c15b0(uVar37,uVar10);
        FUN_00d50b20();
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar32);
    }
  }
  puVar13 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = &DAT_02572358;
  (*pcVar4)();
  fVar38 = (DAT_023908dc - fVar38) + DAT_0241b660;
  iVar19 = 0;
  local_60 = 0;
  bVar33 = false;
  do {
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    local_50 = '\0';
    FUN_00d21140();
    fVar41 = (float)iVar19 * _DAT_02417040 + DAT_02394240;
    if (0 < (int)uVar14) {
      if (iVar2 < 4) {
        uVar20 = 0;
        do {
          lVar26 = (longlong)*(int *)(*(longlong *)(local_58 + 0x10) + uVar20 * 4);
          lVar15 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar26 * 8);
          if (local_60 == lVar15) {
            if ((!bVar33) && (local_60 != 0)) {
              bVar33 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar15 != 0) {
              FUN_00d50b00();
            }
            if ((bVar33) && (local_60 != 0)) {
              FUN_00d50b20();
              bVar33 = true;
              local_60 = lVar15;
            }
            else {
              bVar33 = true;
              local_60 = lVar15;
            }
          }
          if (fVar41 / *(float *)(*(longlong *)(local_a0 + 0x10) + lVar26 * 4) < (float)(int)uVar7)
          {
            *(undefined4 *)(*(longlong *)(local_58 + 0x10) + uVar20 * 4) = 0;
          }
          uVar20 = uVar20 + 1;
        } while (uVar11 != uVar20);
      }
      else {
        uVar20 = 0;
        do {
          lVar26 = (longlong)*(int *)(*(longlong *)(local_58 + 0x10) + uVar20 * 4);
          lVar15 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar26 * 8);
          if (local_60 == lVar15) {
            if ((!bVar33) && (local_60 != 0)) {
              bVar33 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar15 != 0) {
              FUN_00d50b00();
            }
            if ((bVar33) && (local_60 != 0)) {
              FUN_00d50b20();
              bVar33 = true;
              local_60 = lVar15;
            }
            else {
              bVar33 = true;
              local_60 = lVar15;
            }
          }
          fVar42 = fVar41 / *(float *)(*(longlong *)(local_a0 + 0x10) + lVar26 * 4);
          if (fVar42 < (float)(int)uVar7) {
            pfVar3 = *(float **)(local_60 + 0x10);
            uVar31 = (uint)fVar42;
            if ((int)uVar31 < 0) {
              fVar42 = *pfVar3;
            }
            else if ((int)uVar31 < (int)(uVar7 - 1)) {
              iVar6 = FUN_00e7d780((fVar42 - (float)(int)uVar31) * DAT_023d5f44);
              lVar15 = FUN_00e84280();
              fVar42 = (pfVar3[(ulonglong)uVar31 + 1] - pfVar3[uVar31]) *
                       *(float *)(lVar15 + (longlong)iVar6 * 4) + pfVar3[uVar31];
            }
            else {
              fVar42 = pfVar3[uVar7 - 1];
            }
            *(float *)(*(longlong *)(local_58 + 0x10) + uVar20 * 4) = fVar42;
          }
          uVar20 = uVar20 + 1;
        } while (uVar11 != uVar20);
      }
    }
    FUN_015c15b0(uVar37,uVar10);
    FUN_00d50b20();
    iVar19 = iVar19 + 1;
  } while (iVar19 != 500);
  if (0 < (int)uVar8) {
    fVar41 = (float)(int)fVar38;
    uVar10 = 0;
    fVar38 = DAT_02390d00;
    do {
      fVar42 = (float)(((double)*(longlong *)(*(longlong *)(*local_res8 + 0x10) + uVar10 * 8) /
                       param_1) * dVar43);
      if (DAT_0239011c < fVar42 - fVar38) {
        fVar38 = (float)_logf(*(float *)(*(longlong *)(*in_RDX + 0x10) + uVar10 * 4) * DAT_02394204)
        ;
        fVar38 = (float)FUN_014b7610(fVar38 * DAT_02394208);
        FUN_014328b0(SUB84((double)fVar42,0),(double)(fVar38 + fVar41));
        if (local_e0 == '\0') {
          if (local_e8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        FUN_00d21140();
        if (local_e8 != 0) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        fVar38 = fVar42;
        if (local_res10 != '\0') {
          fVar40 = (float)_logf(*(float *)(*(longlong *)(*in_R9 + 0x10) + uVar10 * 4) * DAT_02394204
                               );
          fVar40 = (float)FUN_014b7610(fVar40 * DAT_02394208);
          FUN_014328b0(SUB84((double)fVar42,0),(double)(fVar40 + fVar41));
          if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_e0 = '\0';
          }
          FUN_00d21140();
          if (local_e8 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
  bVar34 = in_XMM5_Da <= DAT_02394244;
  bVar35 = DAT_0239011c <= in_XMM5_Da;
  if (0 < (int)uVar14) {
    fVar38 = (float)(DAT_0238fee8 / param_3) * _DAT_02417044 * DAT_0239011c;
    lVar15 = (longlong)iVar5;
    uVar10 = 2;
    if (2 < (int)uVar7) {
      uVar10 = uVar32;
    }
    iVar19 = 0;
    uVar32 = 0;
    do {
      lVar26 = (longlong)*(int *)(*(longlong *)(local_58 + 0x10) + uVar32 * 4);
      fVar41 = *(float *)(*(longlong *)(local_a0 + 0x10) + lVar26 * 4);
      lVar26 = *(longlong *)(*(longlong *)(local_80 + 0x10) + lVar26 * 8);
      if (lVar26 != 0) {
        FUN_00d50b00();
      }
      lVar28 = (longlong)iVar19;
      lVar21 = local_res20 + (longlong)(iVar5 * (int)uVar32) * 4;
      if (bVar35 && bVar34) {
        lVar24 = 0;
        do {
          if (lVar24 + 500 < lVar15) {
            *(float *)(local_res20 + 2000 + lVar28 * 4 + lVar24 * 4) =
                 ((float)(int)lVar24 * _DAT_02417040 + DAT_02394240) *
                 *(float *)(*(longlong *)(*(longlong *)(puVar13[2] + lVar24 * 8) + 0x10) +
                           uVar32 * 4) * DAT_023b81d4;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 500);
      }
      else {
        uVar8 = FUN_00e7d780(fVar41 * _DAT_02417044 * DAT_0239011c);
        if (7 < iVar2) {
          if (in_XMM5_Da <= DAT_02394244) {
            if ((int)uVar8 < 0) {
              iVar6 = 1;
              do {
                if (DAT_02394264 < (float)iVar6 * fVar41) break;
                iVar17 = ((int)(((float)iVar6 * fVar41 + DAT_0241b660) * _DAT_02417044) - uVar8) +
                         500;
                if (iVar17 < iVar5) {
                  *(undefined4 *)(lVar21 + (longlong)iVar17 * 4) = 0;
                }
                iVar6 = iVar6 + 1;
                local_70 = (int)uVar10;
              } while (local_70 != iVar6);
            }
            else {
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (DAT_02394264 < fVar42) break;
                fVar40 = *(float *)(*(longlong *)(*(longlong *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                   uVar32 * 4) * fVar42 * DAT_023b81d4;
                lVar29 = (longlong)(int)((fVar42 + DAT_0241b660) * _DAT_02417044);
                lVar24 = (int)-uVar8 + lVar29 + 500;
                if (lVar24 < lVar15) {
                  *(float *)(lVar21 + lVar24 * 4) = fVar40;
                }
                lVar29 = lVar29 + 500;
                if ((uVar8 & 0x7fffffff) != 0) {
                  lVar24 = local_res20 + (longlong)(int)-uVar8 * 4 + (lVar28 + lVar29) * 4;
                  lVar18 = (1 - (longlong)(int)uVar8) + lVar29;
                  lVar16 = 2;
                  do {
                    if (lVar18 < lVar15) {
                      *(float *)(lVar24 + -4 + lVar16 * 4) = fVar40;
                    }
                    if (lVar18 + 1 < lVar15) {
                      *(float *)(lVar24 + lVar16 * 4) = fVar40;
                    }
                    lVar16 = lVar16 + 2;
                    lVar18 = lVar18 + 2;
                  } while ((int)lVar16 + uVar8 * -2 != 2);
                }
                iVar6 = (int)lVar29 - uVar8;
                if (iVar6 < iVar5) {
                  *(undefined4 *)(lVar21 + (longlong)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar10);
            }
          }
          else {
            uVar14 = uVar8;
            if ((int)uVar8 < 1) {
              uVar14 = -uVar8;
            }
            if ((int)uVar8 < 0) {
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (DAT_02394264 < fVar42) break;
                iVar6 = ((int)((fVar42 + DAT_0241b660) * _DAT_02417044) - uVar8) + 500;
                if (iVar6 < iVar5) {
                  *(undefined4 *)(lVar21 + (longlong)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar10 != uVar20);
            }
            else {
              lVar24 = (longlong)(int)-uVar8;
              uVar20 = 1;
              do {
                fVar42 = (float)(int)uVar20 * fVar41;
                if (DAT_02394264 < fVar42) break;
                iVar6 = (int)((fVar42 + DAT_0241b660) * _DAT_02417044) + 500;
                fVar42 = *(float *)(*(longlong *)(*(longlong *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                   uVar32 * 4) * DAT_023908e0;
                lVar18 = (longlong)iVar6;
                lVar29 = lVar24;
                if (((uVar8 + uVar14 + 1 & 1) != 0) &&
                   (lVar29 = lVar24 + 1, lVar24 + lVar18 < lVar15)) {
                  *(float *)(lVar21 + (lVar24 + lVar18) * 4) = fVar42;
                }
                if (uVar8 != -uVar14) {
                  lVar16 = local_res20 + lVar28 * 4 + lVar18 * 4;
                  do {
                    if (lVar18 + lVar29 < lVar15) {
                      *(float *)(lVar16 + lVar29 * 4) = fVar42;
                    }
                    if (lVar18 + lVar29 + 1 < lVar15) {
                      *(float *)(lVar16 + 4 + lVar29 * 4) = fVar42;
                    }
                    lVar29 = lVar29 + 2;
                  } while (uVar14 + 1 != (int)lVar29);
                }
                iVar6 = iVar6 - uVar8;
                if (iVar6 < iVar5) {
                  *(undefined4 *)(lVar21 + (longlong)iVar6 * 4) = 0;
                }
                uVar20 = uVar20 + 1;
              } while (uVar20 != uVar10);
            }
          }
        }
      }
      iVar6 = FUN_00e7d780(fVar38);
      if (7 < iVar2) {
        iVar17 = iVar6 * 2;
        if (in_XMM5_Da <= DAT_02394244) {
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x41a;
            uVar20 = 1;
            do {
              if (DAT_02394264 < (float)(int)uVar20 * fVar41) break;
              if (iVar6 < iVar5) {
                *(undefined4 *)(lVar21 + (longlong)iVar6 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar6 = iVar6 + iVar17;
            } while (uVar10 != uVar20);
          }
          else {
            iVar23 = iVar17 + 0x41a;
            uVar20 = 1;
            do {
              fVar42 = (float)(int)uVar20 * fVar41;
              if (DAT_02394264 < fVar42) break;
              fVar42 = fVar42 * *(float *)(*(longlong *)
                                            (*(longlong *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                          uVar32 * 4) * DAT_023b81d4;
              iVar22 = iVar17 * (int)uVar20;
              lVar24 = (longlong)iVar22 + (longlong)-iVar6 + 0x41a;
              if (lVar24 < lVar15) {
                *(float *)(lVar21 + lVar24 * 4) = fVar42;
              }
              if (iVar17 != 0) {
                lVar24 = local_res20 + (longlong)-iVar6 * 4 + (lVar28 + iVar23) * 4;
                lVar29 = (longlong)iVar23 + (1 - (longlong)iVar6);
                lVar18 = 2;
                do {
                  if (lVar29 < lVar15) {
                    *(float *)(lVar24 + -4 + lVar18 * 4) = fVar42;
                  }
                  if (lVar29 + 1 < lVar15) {
                    *(float *)(lVar24 + lVar18 * 4) = fVar42;
                  }
                  lVar18 = lVar18 + 2;
                  lVar29 = lVar29 + 2;
                } while ((int)lVar18 + iVar6 * -2 != 2);
              }
              iVar22 = (iVar22 + 0x41a) - iVar6;
              if (iVar22 < iVar5) {
                *(undefined4 *)(lVar21 + (longlong)iVar22 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar23 = iVar23 + iVar17;
            } while (uVar20 != uVar10);
          }
        }
        else {
          iVar23 = iVar6;
          if (iVar6 < 1) {
            iVar23 = -iVar6;
          }
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x41a;
            uVar20 = 1;
            do {
              if (DAT_02394264 < (float)(int)uVar20 * fVar41) break;
              if (iVar6 < iVar5) {
                *(undefined4 *)(lVar21 + (longlong)iVar6 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar6 = iVar6 + iVar17;
            } while (uVar10 != uVar20);
          }
          else {
            lVar24 = (longlong)-iVar6;
            iVar22 = iVar17 + 0x41a;
            uVar20 = 1;
            do {
              if (DAT_02394264 < (float)(int)uVar20 * fVar41) break;
              iVar25 = iVar17 * (int)uVar20 + 0x41a;
              fVar42 = *(float *)(*(longlong *)(*(longlong *)(puVar12[2] + uVar20 * 8) + 0x10) +
                                 uVar32 * 4) * DAT_023908e0;
              lVar29 = lVar24;
              if (((iVar6 + iVar23 + 1U & 1) != 0) &&
                 (lVar18 = iVar25 + lVar24, lVar29 = lVar24 + 1, lVar18 < lVar15)) {
                *(float *)(lVar21 + lVar18 * 4) = fVar42;
              }
              if (iVar6 != -iVar23) {
                lVar16 = (longlong)iVar22;
                lVar18 = local_res20 + lVar28 * 4 + lVar16 * 4;
                do {
                  if (lVar16 + lVar29 < lVar15) {
                    *(float *)(lVar18 + lVar29 * 4) = fVar42;
                  }
                  if (lVar16 + lVar29 + 1 < lVar15) {
                    *(float *)(lVar18 + 4 + lVar29 * 4) = fVar42;
                  }
                  lVar29 = lVar29 + 2;
                } while (iVar23 + 1 != (int)lVar29);
              }
              iVar25 = iVar25 - iVar6;
              if (iVar25 < iVar5) {
                *(undefined4 *)(lVar21 + (longlong)iVar25 * 4) = 0;
              }
              uVar20 = uVar20 + 1;
              iVar22 = iVar22 + iVar17;
            } while (uVar20 != uVar10);
          }
        }
      }
      if (lVar26 != 0) {
        FUN_00d50b20();
      }
      uVar32 = uVar32 + 1;
      iVar19 = iVar19 + iVar5;
    } while (uVar32 != uVar11);
  }
  if ((bVar33) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar30 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_32 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  return;
}


