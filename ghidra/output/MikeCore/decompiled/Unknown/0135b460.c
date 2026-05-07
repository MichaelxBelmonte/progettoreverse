// Function: FUN_0135b460
// Address: 0135b460
// Size: 5036 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0135c5d9) */
/* WARNING: Removing unreachable block (ram,0x0135bf40) */
/* WARNING: Removing unreachable block (ram,0x0135c5e5) */
/* WARNING: Removing unreachable block (ram,0x0135bf87) */
/* WARNING: Removing unreachable block (ram,0x0135bf93) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0135b460(double param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  double dVar4;
  undefined1 auVar5 [16];
  int iVar6;
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
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong *plVar35;
  uint uVar36;
  longlong lVar37;
  float *pfVar38;
  int iVar39;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  uint uVar51;
  float fVar52;
  float fVar53;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  float fVar57;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  undefined4 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  longlong local_118;
  char local_110;
  undefined1 local_78 [16];
  ulonglong uVar31;
  
  iVar26 = FUN_014832c0();
  lVar49 = *(longlong *)(unaff_RSI + 0x1a0);
  if (lVar49 == 0) {
    FUN_0132d640();
    lVar49 = *(longlong *)(unaff_RSI + 0x1a0);
  }
  if (lVar49 != 0) {
    FUN_00d50b00();
  }
  dVar4 = *(double *)(lVar49 + 0x38);
  iVar27 = FUN_01483610();
  fVar62 = (float)dVar4;
  auVar58 = roundss(ZEXT816(0),ZEXT416((uint)(param_3 * DAT_02394298)),9);
  fVar52 = auVar58._0_4_;
  fVar8 = DAT_02411264;
  if (fVar52 <= DAT_02411264) {
    fVar8 = fVar52;
  }
  uVar43 = (uint)((fVar8 / param_4) * DAT_02391094);
  iVar39 = (int)uVar43 / 2;
  uVar36 = iVar27 - iVar39;
  if ((int)uVar36 < 0) {
    uVar43 = uVar43 + uVar36;
    iVar39 = (int)uVar43 / 2;
    uVar50 = 0;
  }
  else {
    uVar50 = (ulonglong)uVar36;
    uVar36 = 0;
  }
  iVar40 = (int)(param_1 / (double)fVar62);
  if (iVar26 <= (int)((uint)uVar50 + uVar43)) {
    uVar43 = ~(uint)uVar50 + iVar26;
    iVar39 = (int)uVar43 / 2;
  }
  uVar46 = (ulonglong)uVar43;
  if ((((iVar40 < 0) || (*(int *)(unaff_RSI + 0x88) <= iVar40)) || (iVar27 < 1)) ||
     ((iVar26 + -2 < iVar27 || ((int)uVar43 < 10)))) {
    if (*(longlong *)(unaff_RSI + 400) != 0) {
      FUN_00e83070();
      *(undefined8 *)(unaff_RSI + 400) = 0;
    }
    *(undefined8 *)(unaff_RSI + 400) = 0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_0135b8a8;
  }
  iVar27 = (int)((float)(~-(uint)(DAT_02411264 < fVar52) & (uint)DAT_02394298 |
                        (uint)(DAT_02411264 / param_3) & -(uint)(DAT_02411264 < fVar52)) / fVar62);
  lVar30 = FUN_00e83010();
  uVar28 = uVar43 * iVar27;
  uVar31 = (ulonglong)uVar28;
  uVar32 = FUN_00e83010();
  uVar33 = FUN_00e83010();
  FUN_013593a0(iVar40 - iVar27 / 2,lVar30,iVar27,uVar50);
  uVar51 = *(uint *)(unaff_RSI + 0x180);
  if (0 < (int)uVar51) {
    lVar48 = uVar46 * 4;
    if (uVar43 < 4) {
      lVar30 = uVar32 + 4;
      uVar50 = 0;
      do {
        uVar44 = 0;
        do {
          fVar52 = (float)_powf();
          *(float *)(lVar30 + -4 + uVar44 * 4) = fVar52 * *(float *)(lVar30 + -4 + uVar44 * 4);
          fVar52 = (float)_powf();
          *(float *)(lVar30 + uVar44 * 4) = fVar52 * *(float *)(lVar30 + uVar44 * 4);
          uVar44 = uVar44 + 2;
        } while (uVar46 != uVar44);
        uVar50 = uVar50 + 1;
        lVar30 = lVar30 + lVar48;
      } while (uVar50 != uVar51);
    }
    else {
      uVar41 = (ulonglong)(uVar43 & 0xfffffffc);
      uVar34 = 0;
      uVar44 = uVar32;
      do {
        lVar37 = (longlong)iVar26 * 4 * uVar34;
        if ((uVar32 + lVar48 * uVar34 < uVar50 * 4 + uVar46 * 4 + lVar37 + lVar30) &&
           (lVar37 + uVar50 * 4 + lVar30 < lVar48 * uVar34 + lVar48 + uVar32)) {
          uVar42 = 0;
LAB_0135ba5b:
          uVar47 = uVar42;
          if ((uVar43 & 1) != 0) {
            fVar52 = (float)_powf();
            lVar37 = uVar34 * uVar46 + uVar42;
            *(float *)(uVar32 + lVar37 * 4) = fVar52 * *(float *)(uVar32 + lVar37 * 4);
            uVar47 = uVar42 | 1;
          }
          if (~uVar42 != -uVar46) {
            do {
              fVar52 = (float)_powf();
              *(float *)(uVar44 + uVar47 * 4) = fVar52 * *(float *)(uVar44 + uVar47 * 4);
              fVar52 = (float)_powf();
              *(float *)(uVar44 + 4 + uVar47 * 4) = fVar52 * *(float *)(uVar44 + 4 + uVar47 * 4);
              uVar47 = uVar47 + 2;
            } while (uVar46 != uVar47);
          }
        }
        else {
          uVar42 = 0;
          do {
            local_78._0_8_ = _powf();
            local_78._8_8_ = extraout_XMM0_Qb;
            auVar58._0_8_ = _powf();
            auVar58._8_8_ = extraout_XMM0_Qb_00;
            auVar58 = insertps(local_78,auVar58,0x10);
            auVar61._0_8_ = _powf();
            auVar61._8_8_ = extraout_XMM0_Qb_01;
            auVar58 = insertps(auVar58,auVar61,0x20);
            auVar68._0_8_ = _powf();
            auVar68._8_8_ = extraout_XMM0_Qb_02;
            auVar58 = insertps(auVar58,auVar68,0x30);
            pfVar38 = (float *)(uVar44 + uVar42 * 4);
            fVar52 = pfVar38[1];
            fVar70 = pfVar38[2];
            fVar53 = pfVar38[3];
            pfVar2 = (float *)(uVar44 + uVar42 * 4);
            *pfVar2 = *pfVar38 * auVar58._0_4_;
            pfVar2[1] = fVar52 * auVar58._4_4_;
            pfVar2[2] = fVar70 * auVar58._8_4_;
            pfVar2[3] = fVar53 * auVar58._12_4_;
            uVar42 = uVar42 + 4;
          } while (uVar41 != uVar42);
          uVar42 = uVar41;
          if (uVar41 != uVar46) goto LAB_0135ba5b;
        }
        uVar34 = uVar34 + 1;
        uVar44 = uVar44 + lVar48;
      } while (uVar34 != uVar51);
    }
  }
  lVar30 = FUN_00e83da0();
  uVar51 = *(uint *)(unaff_RSI + 0x180);
  if (0 < (int)uVar51) {
    if ((int)uVar43 < 1) {
      uVar50 = (ulonglong)(uVar51 & 7);
      if (6 < (ulonglong)uVar51 - 1) {
        lVar30 = -(ulonglong)(uVar51 & 0xfffffff8);
        do {
          lVar30 = lVar30 + 8;
        } while (lVar30 != 0);
      }
      for (; uVar50 != 0; uVar50 = uVar50 - 1) {
      }
    }
    else {
      uVar44 = 0;
      uVar50 = uVar33;
      do {
        fVar52 = (float)(iVar27 / 2 - (int)uVar44) * ((float)(int)uVar43 / (float)(int)uVar51);
        uVar41 = 0;
        iVar26 = iVar39;
        do {
          fVar70 = SQRT((float)iVar26 * (float)iVar26 + fVar52 * fVar52);
          uVar63 = 0;
          if (fVar70 < (float)iVar39) {
            uVar63 = *(undefined4 *)(lVar30 + (longlong)(iVar39 - (int)fVar70) * 4);
          }
          *(undefined4 *)(uVar50 + uVar41 * 4) = uVar63;
          uVar41 = uVar41 + 1;
          iVar26 = iVar26 + -1;
        } while (uVar46 != uVar41);
        uVar44 = uVar44 + 1;
        uVar50 = uVar50 + (longlong)(int)uVar43 * 4;
      } while (uVar44 != uVar51);
    }
  }
  FUN_00e83070();
  auVar58 = _DAT_023b2d50;
  fVar52 = DAT_02390124;
  uVar50 = (ulonglong)*(uint *)(unaff_RSI + 0x180);
  if ((0 < (int)*(uint *)(unaff_RSI + 0x180)) && (0 < (int)uVar43)) {
    lVar30 = uVar33 + 4;
    lVar37 = uVar46 * 4;
    lVar48 = uVar32 + 4;
    uVar44 = 0;
    fVar70 = 0.0;
    do {
      uVar41 = 0;
      if (uVar43 != 1) {
        do {
          fVar53 = *(float *)(lVar30 + -4 + uVar41 * 4);
          fVar57 = fVar53 * fVar53 * *(float *)(lVar48 + -4 + uVar41 * 4);
          fVar53 = *(float *)(lVar30 + uVar41 * 4);
          fVar53 = fVar53 * fVar53 * *(float *)(lVar48 + uVar41 * 4);
          if (fVar57 <= fVar70) {
            fVar57 = fVar70;
          }
          fVar70 = fVar53;
          if (fVar53 <= fVar57) {
            fVar70 = fVar57;
          }
          uVar41 = uVar41 + 2;
        } while ((uVar43 & 0xfffffffe) != uVar41);
      }
      fVar53 = fVar70;
      if (((uVar43 & 1) != 0) &&
         (lVar45 = uVar41 + uVar44 * uVar46, fVar53 = *(float *)(uVar33 + lVar45 * 4),
         fVar53 = fVar53 * fVar53 * *(float *)(uVar32 + lVar45 * 4), fVar53 <= fVar70)) {
        fVar53 = fVar70;
      }
      uVar44 = uVar44 + 1;
      lVar30 = lVar30 + lVar37;
      lVar48 = lVar48 + lVar37;
      fVar70 = fVar53;
    } while (uVar44 != uVar50);
    if (0.0 < fVar53) {
      fVar53 = DAT_02390124 / fVar53;
      if (uVar43 < 8) {
        pfVar38 = (float *)(uVar32 + 0x18);
        do {
          fVar70 = fVar52;
          if (pfVar38[-6] * fVar53 <= fVar52) {
            fVar70 = pfVar38[-6] * fVar53;
          }
          pfVar38[-6] = fVar70;
          if (uVar43 != 1) {
            fVar70 = fVar52;
            if (pfVar38[-5] * fVar53 <= fVar52) {
              fVar70 = pfVar38[-5] * fVar53;
            }
            pfVar38[-5] = fVar70;
            if (uVar43 != 2) {
              fVar70 = fVar52;
              if (pfVar38[-4] * fVar53 <= fVar52) {
                fVar70 = pfVar38[-4] * fVar53;
              }
              pfVar38[-4] = fVar70;
              if (uVar43 != 3) {
                fVar70 = fVar52;
                if (pfVar38[-3] * fVar53 <= fVar52) {
                  fVar70 = pfVar38[-3] * fVar53;
                }
                pfVar38[-3] = fVar70;
                if (uVar43 != 4) {
                  fVar70 = fVar52;
                  if (pfVar38[-2] * fVar53 <= fVar52) {
                    fVar70 = pfVar38[-2] * fVar53;
                  }
                  pfVar38[-2] = fVar70;
                  if (uVar43 != 5) {
                    fVar70 = fVar52;
                    if (pfVar38[-1] * fVar53 <= fVar52) {
                      fVar70 = pfVar38[-1] * fVar53;
                    }
                    pfVar38[-1] = fVar70;
                    if (uVar43 != 6) {
                      fVar70 = fVar52;
                      if (*pfVar38 * fVar53 <= fVar52) {
                        fVar70 = *pfVar38 * fVar53;
                      }
                      *pfVar38 = fVar70;
                    }
                  }
                }
              }
            }
          }
          pfVar38 = pfVar38 + uVar46;
          uVar50 = uVar50 - 1;
        } while (uVar50 != 0);
      }
      else {
        uVar44 = (ulonglong)(uVar43 & 0xfffffff8);
        if (uVar44 == uVar46) {
          uVar34 = (uVar44 - 8 >> 3) + 1;
          lVar30 = uVar32 + 0x30;
          uVar41 = 0;
          do {
            if (uVar44 - 8 == 0) {
              lVar48 = 0;
LAB_0135bdfe:
              lVar48 = lVar48 + uVar41 * uVar46;
              pfVar38 = (float *)(uVar32 + lVar48 * 4);
              pfVar2 = (float *)(uVar32 + 0x10 + lVar48 * 4);
              auVar60._0_4_ = *pfVar38 * fVar53;
              auVar60._4_4_ = pfVar38[1] * fVar53;
              auVar60._8_4_ = pfVar38[2] * fVar53;
              auVar60._12_4_ = pfVar38[3] * fVar53;
              auVar65._0_4_ = *pfVar2 * fVar53;
              auVar65._4_4_ = pfVar2[1] * fVar53;
              auVar65._8_4_ = pfVar2[2] * fVar53;
              auVar65._12_4_ = pfVar2[3] * fVar53;
              auVar68 = minps(auVar58,auVar60);
              auVar61 = minps(auVar58,auVar65);
              *(undefined1 (*) [16])(uVar32 + lVar48 * 4) = auVar68;
              *(undefined1 (*) [16])(uVar32 + 0x10 + lVar48 * 4) = auVar61;
            }
            else {
              lVar48 = 0;
              lVar45 = -(uVar34 & 0xfffffffffffffffe);
              do {
                pfVar2 = (float *)(lVar30 + -0x30 + lVar48 * 4);
                pfVar3 = (float *)(lVar30 + -0x20 + lVar48 * 4);
                pfVar1 = (float *)(lVar30 + -0x10 + lVar48 * 4);
                fVar52 = pfVar1[1];
                fVar70 = pfVar1[2];
                fVar57 = pfVar1[3];
                pfVar38 = (float *)(lVar30 + lVar48 * 4);
                fVar71 = pfVar38[1];
                fVar9 = pfVar38[2];
                fVar7 = pfVar38[3];
                auVar59._0_4_ = *pfVar2 * fVar53;
                auVar59._4_4_ = pfVar2[1] * fVar53;
                auVar59._8_4_ = pfVar2[2] * fVar53;
                auVar59._12_4_ = pfVar2[3] * fVar53;
                auVar64._0_4_ = *pfVar3 * fVar53;
                auVar64._4_4_ = pfVar3[1] * fVar53;
                auVar64._8_4_ = pfVar3[2] * fVar53;
                auVar64._12_4_ = pfVar3[3] * fVar53;
                auVar68 = minps(auVar58,auVar59);
                auVar61 = minps(auVar58,auVar64);
                *(undefined1 (*) [16])(lVar30 + -0x30 + lVar48 * 4) = auVar68;
                *(undefined1 (*) [16])(lVar30 + -0x20 + lVar48 * 4) = auVar61;
                auVar72._0_4_ = *pfVar1 * fVar53;
                auVar72._4_4_ = fVar52 * fVar53;
                auVar72._8_4_ = fVar70 * fVar53;
                auVar72._12_4_ = fVar57 * fVar53;
                auVar75._0_4_ = *pfVar38 * fVar53;
                auVar75._4_4_ = fVar71 * fVar53;
                auVar75._8_4_ = fVar9 * fVar53;
                auVar75._12_4_ = fVar7 * fVar53;
                auVar61 = minps(auVar58,auVar72);
                auVar68 = minps(auVar58,auVar75);
                *(undefined1 (*) [16])(lVar30 + -0x10 + lVar48 * 4) = auVar61;
                *(undefined1 (*) [16])(lVar30 + lVar48 * 4) = auVar68;
                lVar48 = lVar48 + 0x10;
                lVar45 = lVar45 + 2;
              } while (lVar45 != 0);
              if ((uVar34 & 1) != 0) goto LAB_0135bdfe;
            }
            uVar41 = uVar41 + 1;
            lVar30 = lVar30 + lVar37;
          } while (uVar41 != uVar50);
        }
        else {
          uVar42 = (uVar44 - 8 >> 3) + 1;
          lVar30 = uVar32 + 0x30;
          uVar34 = 0;
          uVar41 = uVar32;
          do {
            uVar47 = uVar44;
            if (uVar44 - 8 == 0) {
              lVar48 = 0;
LAB_0135bece:
              lVar48 = lVar48 + uVar34 * uVar46;
              pfVar38 = (float *)(uVar32 + lVar48 * 4);
              pfVar2 = (float *)(uVar32 + 0x10 + lVar48 * 4);
              auVar66._0_4_ = *pfVar38 * fVar53;
              auVar66._4_4_ = pfVar38[1] * fVar53;
              auVar66._8_4_ = pfVar38[2] * fVar53;
              auVar66._12_4_ = pfVar38[3] * fVar53;
              auVar74._0_4_ = *pfVar2 * fVar53;
              auVar74._4_4_ = pfVar2[1] * fVar53;
              auVar74._8_4_ = pfVar2[2] * fVar53;
              auVar74._12_4_ = pfVar2[3] * fVar53;
              auVar68 = minps(auVar58,auVar66);
              auVar61 = minps(auVar58,auVar74);
              *(undefined1 (*) [16])(uVar32 + lVar48 * 4) = auVar68;
              *(undefined1 (*) [16])(uVar32 + 0x10 + lVar48 * 4) = auVar61;
            }
            else {
              lVar48 = 0;
              lVar45 = -(uVar42 & 0xfffffffffffffffe);
              do {
                pfVar2 = (float *)(lVar30 + -0x30 + lVar48 * 4);
                pfVar3 = (float *)(lVar30 + -0x20 + lVar48 * 4);
                pfVar1 = (float *)(lVar30 + -0x10 + lVar48 * 4);
                fVar70 = pfVar1[1];
                fVar57 = pfVar1[2];
                fVar71 = pfVar1[3];
                pfVar38 = (float *)(lVar30 + lVar48 * 4);
                fVar9 = pfVar38[1];
                fVar7 = pfVar38[2];
                fVar10 = pfVar38[3];
                auVar73._0_4_ = *pfVar2 * fVar53;
                auVar73._4_4_ = pfVar2[1] * fVar53;
                auVar73._8_4_ = pfVar2[2] * fVar53;
                auVar73._12_4_ = pfVar2[3] * fVar53;
                auVar76._0_4_ = *pfVar3 * fVar53;
                auVar76._4_4_ = pfVar3[1] * fVar53;
                auVar76._8_4_ = pfVar3[2] * fVar53;
                auVar76._12_4_ = pfVar3[3] * fVar53;
                auVar61 = minps(auVar58,auVar73);
                auVar68 = minps(auVar58,auVar76);
                *(undefined1 (*) [16])(lVar30 + -0x30 + lVar48 * 4) = auVar61;
                *(undefined1 (*) [16])(lVar30 + -0x20 + lVar48 * 4) = auVar68;
                auVar77._0_4_ = *pfVar1 * fVar53;
                auVar77._4_4_ = fVar70 * fVar53;
                auVar77._8_4_ = fVar57 * fVar53;
                auVar77._12_4_ = fVar71 * fVar53;
                auVar61 = minps(auVar58,auVar77);
                auVar5._4_4_ = fVar9 * fVar53;
                auVar5._0_4_ = *pfVar38 * fVar53;
                auVar5._8_4_ = fVar7 * fVar53;
                auVar5._12_4_ = fVar10 * fVar53;
                auVar68 = minps(auVar58,auVar5);
                *(undefined1 (*) [16])(lVar30 + -0x10 + lVar48 * 4) = auVar61;
                *(undefined1 (*) [16])(lVar30 + lVar48 * 4) = auVar68;
                lVar48 = lVar48 + 0x10;
                lVar45 = lVar45 + 2;
              } while (lVar45 != 0);
              if ((uVar42 & 1) != 0) goto LAB_0135bece;
            }
            do {
              fVar57 = *(float *)(uVar41 + uVar47 * 4) * fVar53;
              fVar70 = fVar52;
              if (fVar57 <= fVar52) {
                fVar70 = fVar57;
              }
              *(float *)(uVar41 + uVar47 * 4) = fVar70;
              uVar47 = uVar47 + 1;
            } while (uVar46 != uVar47);
            uVar34 = uVar34 + 1;
            lVar30 = lVar30 + lVar37;
            uVar41 = uVar41 + lVar37;
          } while (uVar34 != uVar50);
        }
      }
    }
  }
  uVar51 = uVar43 + 7;
  if (-1 < (int)uVar43) {
    uVar51 = uVar43;
  }
  FUN_00c8e690();
  if ((local_110 == '\0') && (local_118 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (7 < (int)uVar43) {
    iVar27 = (int)uVar51 >> 3;
    iVar39 = (int)uVar43 / 2;
    iVar26 = iVar39 - iVar27;
    uVar50 = 1;
    if (1 < iVar27 * 2) {
      uVar50 = (ulonglong)(uint)(iVar27 * 2);
    }
    uVar46 = 0;
    fVar52 = DAT_02390124;
    do {
      iVar29 = (int)uVar46 - iVar27;
      iVar6 = -iVar29;
      if (0 < iVar29) {
        iVar6 = iVar29;
      }
      fVar70 = (float)FUN_00e84a50(fVar52 - (float)iVar6 / (float)iVar27);
      fVar52 = DAT_02390124;
      *(float *)(*(longlong *)(local_118 + 0x10) + uVar46 * 4) =
           fVar70 * DAT_02390d2c + DAT_02390124;
      auVar58 = _DAT_023b2d50;
      uVar46 = uVar46 + 1;
    } while (uVar50 != uVar46);
    uVar46 = (ulonglong)*(uint *)(unaff_RSI + 0x180);
    if (0 < (int)*(uint *)(unaff_RSI + 0x180)) {
      uVar44 = *(ulonglong *)(local_118 + 0x10);
      uVar51 = (uint)uVar50;
      if (uVar51 < 8) {
        iVar39 = iVar39 - iVar27;
        uVar41 = 0;
        do {
          if ((int)uVar43 < 8) {
            uVar34 = 0;
          }
          else {
            lVar30 = uVar32 + 4 + (longlong)iVar39 * 4;
            uVar34 = 0;
            do {
              fVar53 = *(float *)(uVar44 + uVar34 * 4) * *(float *)(lVar30 + -4 + uVar34 * 4);
              fVar70 = fVar52;
              if (fVar53 <= fVar52) {
                fVar70 = fVar53;
              }
              *(float *)(lVar30 + -4 + uVar34 * 4) = fVar70;
              fVar53 = *(float *)(uVar44 + 4 + uVar34 * 4) * *(float *)(lVar30 + uVar34 * 4);
              fVar70 = fVar52;
              if (fVar53 <= fVar52) {
                fVar70 = fVar53;
              }
              *(float *)(lVar30 + uVar34 * 4) = fVar70;
              uVar34 = uVar34 + 2;
            } while ((uVar51 & 0x7ffffffe) != uVar34);
          }
          if ((uVar50 & 1) != 0) {
            lVar30 = (longlong)(int)((int)uVar41 * uVar43 + iVar26) + uVar34;
            fVar53 = *(float *)(uVar44 + uVar34 * 4) * *(float *)(uVar32 + lVar30 * 4);
            fVar70 = fVar52;
            if (fVar53 <= fVar52) {
              fVar70 = fVar53;
            }
            *(float *)(uVar32 + lVar30 * 4) = fVar70;
          }
          uVar41 = uVar41 + 1;
          iVar39 = iVar39 + uVar43;
        } while (uVar41 != uVar46);
      }
      else {
        uVar41 = uVar44 + uVar50 * 4;
        uVar34 = (ulonglong)(uVar51 & 0x7ffffff8);
        if (uVar34 == uVar50) {
          iVar39 = iVar39 - iVar27;
          uVar42 = 0;
          do {
            lVar30 = (longlong)(int)(uVar43 * (int)uVar42 + iVar26);
            if ((uVar32 + lVar30 * 4 < uVar41) && (uVar44 < uVar32 + (lVar30 + uVar50) * 4)) {
              if ((int)uVar43 < 8) {
                uVar47 = 0;
              }
              else {
                lVar48 = uVar32 + 4 + (longlong)iVar39 * 4;
                uVar47 = 0;
                do {
                  fVar53 = *(float *)(uVar44 + uVar47 * 4) * *(float *)(lVar48 + -4 + uVar47 * 4);
                  fVar70 = fVar52;
                  if (fVar53 <= fVar52) {
                    fVar70 = fVar53;
                  }
                  *(float *)(lVar48 + -4 + uVar47 * 4) = fVar70;
                  fVar53 = *(float *)(uVar44 + 4 + uVar47 * 4) * *(float *)(lVar48 + uVar47 * 4);
                  fVar70 = fVar52;
                  if (fVar53 <= fVar52) {
                    fVar70 = fVar53;
                  }
                  *(float *)(lVar48 + uVar47 * 4) = fVar70;
                  uVar47 = uVar47 + 2;
                } while ((uVar51 & 0x7ffffffe) != uVar47);
              }
              if ((uVar50 & 1) != 0) {
                fVar53 = *(float *)(uVar44 + uVar47 * 4) *
                         *(float *)(uVar32 + (lVar30 + uVar47) * 4);
                fVar70 = fVar52;
                if (fVar53 <= fVar52) {
                  fVar70 = fVar53;
                }
                *(float *)(uVar32 + (lVar30 + uVar47) * 4) = fVar70;
              }
            }
            else {
              lVar30 = uVar32 + 0x10 + (longlong)iVar39 * 4;
              uVar47 = 0;
              do {
                pfVar38 = (float *)(uVar44 + uVar47 * 4);
                pfVar2 = (float *)(uVar44 + 0x10 + uVar47 * 4);
                pfVar3 = (float *)(lVar30 + -0x10 + uVar47 * 4);
                auVar67._0_4_ = *pfVar3 * *pfVar38;
                auVar67._4_4_ = pfVar3[1] * pfVar38[1];
                auVar67._8_4_ = pfVar3[2] * pfVar38[2];
                auVar67._12_4_ = pfVar3[3] * pfVar38[3];
                pfVar38 = (float *)(lVar30 + uVar47 * 4);
                auVar55._0_4_ = *pfVar38 * *pfVar2;
                auVar55._4_4_ = pfVar38[1] * pfVar2[1];
                auVar55._8_4_ = pfVar38[2] * pfVar2[2];
                auVar55._12_4_ = pfVar38[3] * pfVar2[3];
                auVar61 = minps(auVar58,auVar67);
                auVar68 = minps(auVar58,auVar55);
                *(undefined1 (*) [16])(lVar30 + -0x10 + uVar47 * 4) = auVar61;
                *(undefined1 (*) [16])(lVar30 + uVar47 * 4) = auVar68;
                uVar47 = uVar47 + 8;
              } while (uVar34 != uVar47);
            }
            uVar42 = uVar42 + 1;
            iVar39 = iVar39 + uVar43;
          } while (uVar42 != uVar46);
        }
        else {
          uVar42 = 0;
          iVar27 = iVar26;
          do {
            lVar30 = (longlong)(int)(uVar43 * (int)uVar42 + iVar26);
            if ((uVar32 + lVar30 * 4 < uVar41) && (uVar44 < uVar32 + (lVar30 + uVar50) * 4)) {
              uVar25 = 0;
            }
            else {
              lVar48 = uVar32 + 0x10 + (longlong)iVar27 * 4;
              uVar47 = 0;
              do {
                pfVar38 = (float *)(uVar44 + uVar47 * 4);
                pfVar2 = (float *)(uVar44 + 0x10 + uVar47 * 4);
                pfVar3 = (float *)(lVar48 + -0x10 + uVar47 * 4);
                auVar69._0_4_ = *pfVar3 * *pfVar38;
                auVar69._4_4_ = pfVar3[1] * pfVar38[1];
                auVar69._8_4_ = pfVar3[2] * pfVar38[2];
                auVar69._12_4_ = pfVar3[3] * pfVar38[3];
                pfVar38 = (float *)(lVar48 + uVar47 * 4);
                auVar56._0_4_ = *pfVar38 * *pfVar2;
                auVar56._4_4_ = pfVar38[1] * pfVar2[1];
                auVar56._8_4_ = pfVar38[2] * pfVar2[2];
                auVar56._12_4_ = pfVar38[3] * pfVar2[3];
                auVar61 = minps(auVar58,auVar69);
                auVar68 = minps(auVar58,auVar56);
                *(undefined1 (*) [16])(lVar48 + -0x10 + uVar47 * 4) = auVar61;
                *(undefined1 (*) [16])(lVar48 + uVar47 * 4) = auVar68;
                uVar47 = uVar47 + 8;
                uVar25 = uVar34;
              } while (uVar34 != uVar47);
            }
            uVar47 = uVar25;
            if ((uVar50 & 1) != 0) {
              fVar53 = *(float *)(uVar44 + uVar25 * 4) * *(float *)(uVar32 + (lVar30 + uVar25) * 4);
              fVar70 = fVar52;
              if (fVar53 <= fVar52) {
                fVar70 = fVar53;
              }
              *(float *)(uVar32 + (lVar30 + uVar25) * 4) = fVar70;
              uVar47 = uVar25 | 1;
            }
            if (~uVar25 != -uVar50) {
              lVar30 = uVar32 + 4 + (longlong)iVar27 * 4;
              do {
                fVar53 = *(float *)(uVar44 + uVar47 * 4) * *(float *)(lVar30 + -4 + uVar47 * 4);
                fVar70 = fVar52;
                if (fVar53 <= fVar52) {
                  fVar70 = fVar53;
                }
                *(float *)(lVar30 + -4 + uVar47 * 4) = fVar70;
                fVar53 = *(float *)(uVar44 + 4 + uVar47 * 4) * *(float *)(lVar30 + uVar47 * 4);
                fVar70 = fVar52;
                if (fVar53 <= fVar52) {
                  fVar70 = fVar53;
                }
                *(float *)(lVar30 + uVar47 * 4) = fVar70;
                uVar47 = uVar47 + 2;
              } while (uVar50 != uVar47);
            }
            uVar42 = uVar42 + 1;
            iVar27 = iVar27 + uVar43;
          } while (uVar42 != uVar46);
        }
      }
    }
  }
  if (0 < (int)uVar28) {
    if ((uVar28 < 8) || ((uVar32 < uVar33 + uVar31 * 4 && (uVar33 < uVar32 + uVar31 * 4)))) {
      uVar50 = 0;
    }
    else {
      uVar50 = (ulonglong)(uVar28 & 0xfffffff8);
      uVar46 = (uVar50 - 8 >> 3) + 1;
      if (uVar50 - 8 == 0) {
        lVar30 = 0;
      }
      else {
        lVar48 = -(uVar46 & 0xfffffffffffffffe);
        lVar30 = 0;
        do {
          pfVar38 = (float *)(uVar33 + lVar30 * 4);
          fVar52 = pfVar38[1];
          fVar70 = pfVar38[2];
          fVar53 = pfVar38[3];
          pfVar2 = (float *)(uVar33 + 0x10 + lVar30 * 4);
          fVar57 = *pfVar2;
          fVar71 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar7 = pfVar2[3];
          pfVar2 = (float *)(uVar32 + lVar30 * 4);
          fVar10 = pfVar2[1];
          fVar11 = pfVar2[2];
          fVar12 = pfVar2[3];
          pfVar3 = (float *)(uVar32 + 0x10 + lVar30 * 4);
          fVar13 = *pfVar3;
          fVar14 = pfVar3[1];
          fVar15 = pfVar3[2];
          fVar16 = pfVar3[3];
          pfVar3 = (float *)(uVar32 + 0x20 + lVar30 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(uVar32 + 0x30 + lVar30 * 4);
          fVar21 = *pfVar3;
          fVar22 = pfVar3[1];
          fVar23 = pfVar3[2];
          fVar24 = pfVar3[3];
          pfVar3 = (float *)(uVar32 + lVar30 * 4);
          *pfVar3 = *pfVar2 * *pfVar38;
          pfVar3[1] = fVar10 * fVar52;
          pfVar3[2] = fVar11 * fVar70;
          pfVar3[3] = fVar12 * fVar53;
          pfVar38 = (float *)(uVar32 + 0x10 + lVar30 * 4);
          *pfVar38 = fVar13 * fVar57;
          pfVar38[1] = fVar14 * fVar71;
          pfVar38[2] = fVar15 * fVar9;
          pfVar38[3] = fVar16 * fVar7;
          pfVar38 = (float *)(uVar33 + 0x20 + lVar30 * 4);
          fVar52 = pfVar38[1];
          fVar70 = pfVar38[2];
          fVar53 = pfVar38[3];
          pfVar2 = (float *)(uVar33 + 0x30 + lVar30 * 4);
          fVar57 = *pfVar2;
          fVar71 = pfVar2[1];
          fVar9 = pfVar2[2];
          fVar7 = pfVar2[3];
          pfVar2 = (float *)(uVar32 + 0x20 + lVar30 * 4);
          *pfVar2 = *pfVar38 * fVar17;
          pfVar2[1] = fVar52 * fVar18;
          pfVar2[2] = fVar70 * fVar19;
          pfVar2[3] = fVar53 * fVar20;
          pfVar38 = (float *)(uVar32 + 0x30 + lVar30 * 4);
          *pfVar38 = fVar57 * fVar21;
          pfVar38[1] = fVar71 * fVar22;
          pfVar38[2] = fVar9 * fVar23;
          pfVar38[3] = fVar7 * fVar24;
          lVar30 = lVar30 + 0x10;
          lVar48 = lVar48 + 2;
        } while (lVar48 != 0);
      }
      if ((uVar46 & 1) != 0) {
        pfVar38 = (float *)(uVar33 + lVar30 * 4);
        fVar52 = pfVar38[1];
        fVar70 = pfVar38[2];
        fVar53 = pfVar38[3];
        pfVar2 = (float *)(uVar33 + 0x10 + lVar30 * 4);
        fVar57 = *pfVar2;
        fVar71 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar7 = pfVar2[3];
        pfVar2 = (float *)(uVar32 + lVar30 * 4);
        fVar10 = pfVar2[1];
        fVar11 = pfVar2[2];
        fVar12 = pfVar2[3];
        pfVar3 = (float *)(uVar32 + 0x10 + lVar30 * 4);
        fVar13 = *pfVar3;
        fVar14 = pfVar3[1];
        fVar15 = pfVar3[2];
        fVar16 = pfVar3[3];
        pfVar3 = (float *)(uVar32 + lVar30 * 4);
        *pfVar3 = *pfVar2 * *pfVar38;
        pfVar3[1] = fVar10 * fVar52;
        pfVar3[2] = fVar11 * fVar70;
        pfVar3[3] = fVar12 * fVar53;
        pfVar38 = (float *)(uVar32 + 0x10 + lVar30 * 4);
        *pfVar38 = fVar13 * fVar57;
        pfVar38[1] = fVar14 * fVar71;
        pfVar38[2] = fVar15 * fVar9;
        pfVar38[3] = fVar16 * fVar7;
      }
      if (uVar50 == uVar31) goto LAB_0135c583;
    }
    uVar46 = ~uVar50;
    uVar44 = uVar31 & 3;
    if ((uVar28 & 3) != 0) {
      do {
        *(float *)(uVar32 + uVar50 * 4) =
             *(float *)(uVar33 + uVar50 * 4) * *(float *)(uVar32 + uVar50 * 4);
        uVar50 = uVar50 + 1;
        uVar44 = uVar44 - 1;
      } while (uVar44 != 0);
    }
    if (2 < uVar46 + uVar31) {
      do {
        *(float *)(uVar32 + uVar50 * 4) =
             *(float *)(uVar33 + uVar50 * 4) * *(float *)(uVar32 + uVar50 * 4);
        *(float *)(uVar32 + 4 + uVar50 * 4) =
             *(float *)(uVar33 + 4 + uVar50 * 4) * *(float *)(uVar32 + 4 + uVar50 * 4);
        *(float *)(uVar32 + 8 + uVar50 * 4) =
             *(float *)(uVar33 + 8 + uVar50 * 4) * *(float *)(uVar32 + 8 + uVar50 * 4);
        *(float *)(uVar32 + 0xc + uVar50 * 4) =
             *(float *)(uVar33 + 0xc + uVar50 * 4) * *(float *)(uVar32 + 0xc + uVar50 * 4);
        uVar50 = uVar50 + 4;
      } while (uVar31 != uVar50);
    }
  }
LAB_0135c583:
  FUN_00e83070();
  plVar35 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar35 + 0x18))();
  FUN_01d4eaa0();
  fVar52 = (float)FUN_014b2ea0();
  fVar70 = 0.0;
  if (0.0 < fVar8) {
    param_3 = DAT_02390124 / param_3;
    param_4 = DAT_02390124 / param_4;
    fVar53 = DAT_02390124 / fVar62;
    do {
      fVar57 = (param_3 * fVar70 + (float)(param_1 - (double)((float)iVar40 * fVar62))) * fVar53;
      iVar39 = (int)fVar57;
      iVar26 = iVar39 + 1;
      iVar27 = *(int *)(unaff_RSI + 0x180) + -1;
      fVar71 = 0.0;
      if (iVar26 < *(int *)(unaff_RSI + 0x180)) {
        fVar57 = fVar57 - (float)(int)fVar57;
      }
      else {
        fVar57 = 0.0;
        iVar26 = iVar27;
        iVar39 = iVar27;
      }
      fVar9 = 0.0;
      iVar27 = 0;
      iVar6 = 0;
      if (-1 < iVar39) {
        iVar27 = iVar26;
        iVar6 = iVar39;
        fVar9 = fVar57;
      }
      do {
        iVar26 = (int)((double)(((fVar8 - fVar71) * param_4 + (param_2 - fVar52)) * DAT_02391094) +
                      DAT_023942d0) + uVar36;
        auVar58 = ZEXT816(0);
        if ((-1 < iVar26) && (iVar26 < (int)uVar43)) {
          fVar57 = *(float *)(uVar32 + (longlong)(int)(iVar26 + iVar6 * uVar43) * 4);
          fVar57 = (*(float *)(uVar32 + (longlong)(int)(iVar26 + iVar27 * uVar43) * 4) - fVar57) *
                   fVar9 + fVar57;
          fVar7 = 0.0;
          if (0.0 <= fVar57) {
            fVar7 = fVar57;
          }
          fVar57 = DAT_02390124;
          if (fVar7 <= DAT_02390124) {
            fVar57 = fVar7;
          }
          auVar58 = ZEXT416((uint)SQRT(fVar57));
        }
        auVar54._4_12_ = auVar58._4_12_;
        auVar54._0_4_ = auVar58._0_4_ * DAT_02394220;
        auVar58 = roundss(auVar54,auVar54,9);
        fVar57 = 0.0;
        if (0.0 <= auVar58._0_4_) {
          fVar57 = auVar58._0_4_;
        }
        fVar7 = DAT_02394220;
        if (fVar57 <= DAT_02394220) {
          fVar7 = fVar57;
        }
        FUN_01d53270(0x14,0x28,(int)fVar7 & 0xff,(int)fVar70);
        fVar71 = fVar71 + DAT_02390124;
      } while (fVar71 < fVar8);
      fVar70 = fVar70 + DAT_02390124;
    } while (fVar70 < fVar8);
  }
  FUN_00e83070();
  FUN_00e83070();
  *unaff_RDI = plVar35;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_118 != 0) {
    FUN_00d50b20();
  }
LAB_0135b8a8:
  if (lVar49 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


