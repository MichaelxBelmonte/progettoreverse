// Function: FUN_012bd760
// Address: 012bd760
// Size: 9630 bytes
// Class: MULSSComponentRenderer


/* WARNING: Removing unreachable block (ram,0x012bdc60) */
/* WARNING: Removing unreachable block (ram,0x012bdc70) */
/* WARNING: Removing unreachable block (ram,0x012bf54a) */
/* WARNING: Removing unreachable block (ram,0x012bf556) */
/* WARNING: Removing unreachable block (ram,0x012bf4b2) */
/* WARNING: Removing unreachable block (ram,0x012bf4e0) */
/* WARNING: Removing unreachable block (ram,0x012bf4b4) */
/* WARNING: Removing unreachable block (ram,0x012bf4e2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012bd760(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 longlong param_6,longlong param_7,longlong param_8,float *param_9,float param_10,
                 float param_11,float param_12,longlong param_13,longlong param_14,longlong param_15
                 ,longlong param_16,float *param_17,float *param_18,float param_19,float param_20,
                 float param_21,float param_22,float param_23,float param_24)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong in_RCX;
  longlong lVar12;
  uint uVar13;
  longlong in_RDX;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong unaff_RSI;
  ulonglong uVar16;
  longlong unaff_RDI;
  ulonglong uVar17;
  longlong in_R8;
  longlong in_R9;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float fVar52;
  float unaff_XMM7_Da;
  float fVar53;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  uint local_res20;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  int local_110;
  longlong local_d8;
  longlong local_d0;
  float local_c0;
  float local_98;
  float local_48;
  float local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  FUN_012c2ab0();
  FUN_01430210();
  if ((local_120 == '\0') && (local_128 != 0)) {
    FUN_00d50b00();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  fVar27 = DAT_02390124;
  uVar15 = (ulonglong)local_res20;
  fVar45 = param_1 / unaff_XMM6_Da;
  fVar50 = DAT_02390124 / fVar45;
  uVar3 = FUN_00e7d780((float)(int)local_res20 * fVar50);
  uVar21 = 0x3ff;
  if ((int)uVar3 < 0x3ff) {
    uVar21 = uVar3;
  }
  bVar1 = in_XMM5_Da < DAT_023b36e4;
  fVar24 = in_XMM4_Da * param_1;
  bVar2 = DAT_023b36e8 < in_XMM5_Da;
  if (DAT_02394274 <= param_3 - param_2) {
    local_48 = (float)FUN_00e84a50((fVar24 - param_2) / (param_3 - param_2));
    local_38 = DAT_02390124 - local_48;
  }
  else {
    local_48 = DAT_0239011c;
    local_38 = DAT_0239011c;
  }
  local_c0 = DAT_02390124;
  if (param_13 == 0 || param_10 <= 0.0) {
LAB_012bdca4:
    if (in_RCX != 0) goto LAB_012bdcb1;
LAB_012bdd2a:
    local_d0 = 0;
  }
  else {
    ___bzero();
    ___bzero();
    auVar29 = ZEXT416((uint)DAT_02390124);
    if (0 < (int)uVar21) {
      fVar25 = _DAT_023b294c * param_11 * DAT_0239011c;
      uVar3 = 1;
      do {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        iVar4 = FUN_00e7d780();
        auVar29 = ZEXT416((uint)DAT_02390124);
        if ((int)(local_res20 - 1) <= iVar4) break;
        fVar51 = (float)(int)uVar3 * fVar45 - (float)iVar4;
        fVar46 = (*(float *)(param_15 + uVar19 * 4) * local_48 +
                 *(float *)(param_14 + uVar19 * 4) * local_38 + *(float *)(param_13 + uVar19 * 4)) *
                 fVar25;
        lVar10 = (longlong)iVar4;
        *(float *)(local_res8 + lVar10 * 4) =
             (DAT_02390124 - fVar51) * fVar46 + *(float *)(local_res8 + lVar10 * 4);
        *(float *)(local_res8 + 4 + lVar10 * 4) =
             fVar46 * fVar51 + *(float *)(local_res8 + 4 + lVar10 * 4);
        bVar23 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
      } while (bVar23);
    }
    fVar25 = DAT_02411280;
    uVar3 = _DAT_02390140;
    fVar46 = auVar29._0_4_;
    auVar30._4_12_ = auVar29._4_12_;
    if (param_10 * param_10 <= fVar46) {
      auVar29._4_12_ = auVar30._4_12_;
      auVar29._0_4_ = param_10 * param_10;
    }
    local_c0 = fVar46 - auVar29._0_4_;
    uVar5 = *(uint *)(unaff_RDI + 0x160);
    if (0 < (int)uVar5) {
      lVar10 = *(longlong *)(unaff_RDI + 0x1e8);
      uVar19 = 0;
      do {
        if (0 < (int)local_res20) {
          lVar12 = *(longlong *)(lVar10 + uVar19 * 8);
          uVar17 = 0;
          do {
            pfVar11 = (float *)(lVar12 + uVar17 * 8);
            fVar51 = *pfVar11;
            fVar47 = pfVar11[1];
            fVar53 = (float)((uint)fVar47 & uVar3);
            if ((fVar51 != 0.0) || (fVar52 = fVar53, NAN(fVar51))) {
              fVar52 = (float)((uint)fVar51 & uVar3);
              if ((fVar47 != 0.0) || (NAN(fVar47))) {
                if (fVar52 <= fVar53) {
                  fVar52 = SQRT((fVar52 / fVar53) * (fVar52 / fVar53) + fVar46);
                }
                else {
                  fVar53 = SQRT((fVar53 / fVar52) * (fVar53 / fVar52) + fVar46);
                }
                fVar52 = fVar52 * fVar53;
              }
            }
            fVar53 = *(float *)(local_res8 + uVar17 * 4) * auVar29._0_4_ + local_c0 * fVar52;
            if (fVar52 <= fVar25) {
              *(float *)(lVar12 + uVar17 * 8) = fVar53;
              *(undefined4 *)(lVar12 + 4 + uVar17 * 8) = 0;
            }
            else {
              *(float *)(lVar12 + uVar17 * 8) = fVar51 * (fVar53 / fVar52);
              *(float *)(lVar12 + 4 + uVar17 * 8) = (fVar53 / fVar52) * fVar47;
            }
            *(float *)(unaff_RSI + uVar17 * 4) = fVar53 + *(float *)(unaff_RSI + uVar17 * 4);
            uVar17 = uVar17 + 1;
          } while (uVar15 != uVar17);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar5);
      if (1 < (int)uVar5) {
        auVar30._0_4_ = fVar46 / (float)(int)uVar5;
        (**(code **)(DAT_02786500 + 0x20))(auVar30._0_8_);
        goto LAB_012bdca4;
      }
    }
    if (in_RCX == 0) goto LAB_012bdd2a;
LAB_012bdcb1:
    local_d0 = in_RCX;
    if (in_R8 != 0 || in_R9 != 0) {
      local_d0 = local_res18;
      if ((in_R8 == 0) || (in_R9 == 0)) {
        if (in_R8 == 0) {
          if (-1 < (int)uVar21) {
            if (in_R9 == 0) {
              uVar19 = 0;
              do {
                uVar17 = 0x1ff;
                if ((uint)uVar19 < 0x1ff) {
                  uVar17 = uVar19;
                }
                fVar25 = *(float *)(in_RCX + uVar17 * 4);
                uVar3 = -(uint)(fVar25 <= DAT_02394270);
                uVar26 = _powf(uVar3 & DAT_023b3e04 | ~uVar3 & (uint)SQRT(fVar25) & _DAT_02390140);
                *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
                uVar3 = (uint)uVar19 + 1;
                uVar19 = (ulonglong)uVar3;
              } while (uVar21 + 1 != uVar3);
            }
            else {
              uVar19 = 0;
              do {
                uVar17 = 0x1ff;
                if ((uint)uVar19 < 0x1ff) {
                  uVar17 = uVar19;
                }
                fVar25 = *(float *)(in_RCX + uVar17 * 4);
                uVar5 = (uint)SQRT(fVar25) & _DAT_02390140;
                uVar3 = -(uint)(fVar25 <= DAT_02394270);
                uVar9 = uVar3 & DAT_023b3e04;
                auVar41._0_8_ = _powf();
                auVar41._8_8_ = extraout_XMM0_Qb_04;
                auVar42._4_12_ = auVar41._4_12_;
                auVar42._0_4_ = (float)auVar41._0_8_ * (float)(uVar9 | ~uVar3 & uVar5);
                uVar26 = _powf(auVar42._0_8_);
                *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
                uVar3 = (uint)uVar19 + 1;
                uVar19 = (ulonglong)uVar3;
              } while (uVar21 + 1 != uVar3);
            }
          }
        }
        else {
          fVar46 = DAT_0239011c;
          fVar25 = local_38;
          if (-1 < (int)uVar21) goto LAB_012bdd61;
        }
      }
      else if (-1 < (int)uVar21) {
        fVar46 = DAT_024229e8;
        fVar25 = local_48 + local_38;
LAB_012bdd61:
        fVar25 = DAT_02390124 / (fVar25 + fVar46);
        if (in_R9 == 0) {
          if (uVar21 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            do {
              uVar19 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar19 = (ulonglong)uVar3;
              }
              fVar46 = (float)_powf();
              auVar37._0_8_ = _powf();
              auVar37._8_8_ = extraout_XMM0_Qb_02;
              auVar38._4_12_ = auVar37._4_12_;
              auVar38._0_4_ = (float)auVar37._0_8_ * fVar46;
              uVar26 = _powf(auVar38._0_8_,fVar25);
              *(undefined4 *)(local_res18 + uVar19 * 4) = uVar26;
              uVar5 = uVar3 + 1;
              if (0x1fe < uVar3 + 1) {
                uVar5 = 0x1ff;
              }
              fVar46 = (float)_powf();
              auVar39._0_8_ = _powf();
              auVar39._8_8_ = extraout_XMM0_Qb_03;
              auVar40._4_12_ = auVar39._4_12_;
              auVar40._0_4_ = (float)auVar39._0_8_ * fVar46;
              uVar26 = _powf(auVar40._0_8_,fVar25);
              *(undefined4 *)(local_res18 + (ulonglong)uVar5 * 4) = uVar26;
              uVar3 = uVar3 + 2;
            } while ((uVar21 + 1 & 0xfffffffe) != uVar3);
            local_d0 = local_res18;
            if ((uVar21 + 1 & 1) == 0) goto LAB_012bde37;
          }
          uVar19 = 0x1ff;
          if (uVar3 < 0x1ff) {
            uVar19 = (ulonglong)uVar3;
          }
          fVar25 = (float)_powf();
          auVar43._0_8_ = _powf();
          auVar43._8_8_ = extraout_XMM0_Qb_05;
          auVar44._4_12_ = auVar43._4_12_;
          auVar44._0_4_ = (float)auVar43._0_8_ * fVar25;
          uVar26 = _powf(auVar44._0_8_);
          *(undefined4 *)(local_res18 + uVar19 * 4) = uVar26;
          local_d0 = local_res18;
        }
        else {
          uVar19 = 0;
          do {
            uVar17 = 0x1ff;
            if ((uint)uVar19 < 0x1ff) {
              uVar17 = uVar19;
            }
            fVar25 = (float)_powf();
            fVar46 = (float)_powf();
            auVar31._0_8_ = _powf();
            auVar31._8_8_ = extraout_XMM0_Qb;
            auVar32._4_12_ = auVar31._4_12_;
            auVar32._0_4_ = (float)auVar31._0_8_ * fVar46 * fVar25;
            uVar26 = _powf(auVar32._0_8_);
            *(undefined4 *)(local_res18 + uVar17 * 4) = uVar26;
            uVar3 = (uint)uVar19 + 1;
            uVar19 = (ulonglong)uVar3;
          } while (uVar21 + 1 != uVar3);
        }
      }
    }
  }
LAB_012bde37:
  fVar27 = fVar27 / unaff_XMM7_Da;
  if (((param_7 != 0) || (param_8 != 0)) || (lVar10 = param_6, param_9 != (float *)0x0)) {
    if ((param_6 == 0 || param_7 == 0) || (param_8 == 0)) {
      fVar25 = DAT_0239011c;
      if (((param_6 != 0) && (fVar46 = local_48, param_8 != 0)) ||
         (fVar46 = local_38, param_6 != 0 && param_7 != 0)) goto LAB_012bdefd;
      fVar25 = DAT_02390124;
      if ((param_7 == 0) || (param_8 == 0)) {
        if (param_7 == 0) {
          if (param_8 != 0) {
            fVar25 = DAT_02390124 / local_48;
          }
          goto LAB_012bdf12;
        }
        goto LAB_012bdf0e;
      }
    }
    else {
      fVar25 = DAT_024229e8;
      fVar46 = local_48 + local_38;
LAB_012bdefd:
      fVar46 = fVar46 + fVar25;
LAB_012bdf0e:
      fVar25 = DAT_02390124 / fVar46;
    }
LAB_012bdf12:
    lVar10 = local_res18 + (longlong)(*(int *)(unaff_RDI + 0x15c) / 2) * 4;
    if (-1 < (int)uVar21) {
      if (param_6 == 0) {
        if (param_7 == 0) {
          if (param_8 == 0) {
            if (param_9 == (float *)0x0) {
              uVar3 = uVar21 + 1 & 3;
              uVar5 = 0;
              if (2 < uVar21) {
                uVar5 = 0;
                do {
                  uVar19 = 0x1ff;
                  if (uVar5 < 0x1ff) {
                    uVar19 = (ulonglong)uVar5;
                  }
                  *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                  uVar9 = uVar5 + 1;
                  if (0x1fe < uVar5 + 1) {
                    uVar9 = 0x1ff;
                  }
                  *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = 0x3f800000;
                  uVar9 = uVar5 + 2;
                  if (0x1fe < uVar5 + 2) {
                    uVar9 = 0x1ff;
                  }
                  uVar19 = (ulonglong)(uVar5 + 3);
                  if (0x1fe < uVar5 + 3) {
                    uVar19 = 0x1ff;
                  }
                  *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = 0x3f800000;
                  *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                  uVar5 = uVar5 + 4;
                } while ((uVar21 + 1 & 0xfffffffc) != uVar5);
              }
              for (; uVar3 != 0; uVar3 = uVar3 - 1) {
                uVar19 = 0x1ff;
                if (uVar5 < 0x1ff) {
                  uVar19 = (ulonglong)uVar5;
                }
                *(undefined4 *)(lVar10 + uVar19 * 4) = 0x3f800000;
                uVar5 = uVar5 + 1;
              }
            }
            else {
              uVar3 = 0;
              do {
                uVar19 = 0x1ff;
                if (uVar3 < 0x1ff) {
                  uVar19 = (ulonglong)uVar3;
                }
                uVar5 = FUN_00e7d780();
                if ((int)uVar5 < 0) {
                  fVar25 = *param_9;
                }
                else if ((int)uVar5 < 0x7ff) {
                  fVar25 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                  fVar25 = fVar25 * param_9[(ulonglong)uVar5 + 1] +
                           (DAT_02390124 - fVar25) * param_9[uVar5];
                }
                else {
                  fVar25 = param_9[0x7ff];
                }
                *(float *)(lVar10 + uVar19 * 4) = fVar25;
                uVar3 = uVar3 + 1;
              } while (uVar21 + 1 != uVar3);
            }
          }
          else {
            uVar19 = 0;
            do {
              uVar3 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar17 = uVar19;
              }
              _powf();
              fVar25 = (float)_powf();
              if (param_9 != (float *)0x0) {
                uVar5 = FUN_00e7d780();
                if ((int)uVar5 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar5 < 0x7ff) {
                  fVar46 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar5 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar5];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar3 + 1);
            } while (uVar21 + 1 != uVar3 + 1);
          }
        }
        else if (param_8 == 0) {
          if (param_9 == (float *)0x0) {
            uVar3 = uVar21 + 1;
            if (uVar21 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              do {
                uVar19 = 0x1ff;
                if (uVar5 < 0x1ff) {
                  uVar19 = (ulonglong)uVar5;
                }
                uVar28 = _powf();
                uVar26 = _powf(uVar28,fVar25);
                *(undefined4 *)(lVar10 + uVar19 * 4) = uVar26;
                uVar9 = uVar5 + 1;
                if (0x1fe < uVar5 + 1) {
                  uVar9 = 0x1ff;
                }
                _powf();
                uVar26 = _powf();
                *(undefined4 *)(lVar10 + (ulonglong)uVar9 * 4) = uVar26;
                uVar5 = uVar5 + 2;
              } while ((uVar3 & 0xfffffffe) != uVar5);
            }
            if ((uVar3 & 1) != 0) {
              uVar19 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar19 = (ulonglong)uVar5;
              }
              _powf(uVar3,local_38);
              uVar26 = _powf();
              *(undefined4 *)(lVar10 + uVar19 * 4) = uVar26;
            }
          }
          else {
            uVar3 = 0;
            do {
              uVar19 = 0x1ff;
              if (uVar3 < 0x1ff) {
                uVar19 = (ulonglong)uVar3;
              }
              uVar28 = _powf();
              fVar46 = (float)_powf(uVar28,fVar25);
              uVar5 = FUN_00e7d780();
              if ((int)uVar5 < 0) {
                fVar51 = *param_9;
              }
              else if ((int)uVar5 < 0x7ff) {
                fVar51 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                fVar51 = fVar51 * param_9[(ulonglong)uVar5 + 1] +
                         (DAT_02390124 - fVar51) * param_9[uVar5];
              }
              else {
                fVar51 = param_9[0x7ff];
              }
              *(float *)(lVar10 + uVar19 * 4) = fVar46 * fVar51;
              uVar3 = uVar3 + 1;
            } while (uVar21 + 1 != uVar3);
          }
        }
        else {
          uVar19 = 0;
          do {
            uVar3 = (uint)uVar19;
            uVar17 = 0x1ff;
            if (uVar3 < 0x1ff) {
              uVar17 = uVar19;
            }
            fVar25 = (float)_powf();
            auVar35._0_8_ = _powf();
            auVar35._8_8_ = extraout_XMM0_Qb_01;
            auVar36._4_12_ = auVar35._4_12_;
            auVar36._0_4_ = (float)auVar35._0_8_ * fVar25;
            fVar25 = (float)_powf(auVar36._0_8_);
            if (param_9 != (float *)0x0) {
              uVar5 = FUN_00e7d780();
              if ((int)uVar5 < 0) {
                fVar46 = *param_9;
              }
              else if ((int)uVar5 < 0x7ff) {
                fVar46 = (float)(int)uVar3 * param_1 * fVar27 - (float)(int)uVar5;
                fVar46 = fVar46 * param_9[(ulonglong)uVar5 + 1] +
                         (DAT_02390124 - fVar46) * param_9[uVar5];
              }
              else {
                fVar46 = param_9[0x7ff];
              }
              fVar25 = fVar25 * fVar46;
            }
            *(float *)(lVar10 + uVar17 * 4) = fVar25;
            uVar19 = (ulonglong)(uVar3 + 1);
          } while (uVar21 + 1 != uVar3 + 1);
        }
      }
      else {
        uVar3 = uVar21 + 1;
        uVar19 = 0;
        if (param_7 == 0) {
          if (param_8 == 0) {
            do {
              uVar5 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar17 = uVar19;
              }
              _powf();
              fVar25 = (float)_powf();
              if (param_9 != (float *)0x0) {
                uVar9 = FUN_00e7d780();
                if ((int)uVar9 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar9 < 0x7ff) {
                  fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar9];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar5 + 1);
            } while (uVar3 != uVar5 + 1);
          }
          else {
            do {
              uVar5 = (uint)uVar19;
              uVar17 = 0x1ff;
              if (uVar5 < 0x1ff) {
                uVar17 = uVar19;
              }
              fVar25 = (float)_powf();
              auVar33._0_8_ = _powf();
              auVar33._8_8_ = extraout_XMM0_Qb_00;
              auVar34._4_12_ = auVar33._4_12_;
              auVar34._0_4_ = (float)auVar33._0_8_ * fVar25;
              fVar25 = (float)_powf(auVar34._0_8_);
              if (param_9 != (float *)0x0) {
                uVar9 = FUN_00e7d780();
                if ((int)uVar9 < 0) {
                  fVar46 = *param_9;
                }
                else if ((int)uVar9 < 0x7ff) {
                  fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                  fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                           (DAT_02390124 - fVar46) * param_9[uVar9];
                }
                else {
                  fVar46 = param_9[0x7ff];
                }
                fVar25 = fVar25 * fVar46;
              }
              *(float *)(lVar10 + uVar17 * 4) = fVar25;
              uVar19 = (ulonglong)(uVar5 + 1);
            } while (uVar3 != uVar5 + 1);
          }
        }
        else {
          do {
            uVar5 = (uint)uVar19;
            uVar17 = 0x1ff;
            if (uVar5 < 0x1ff) {
              uVar17 = uVar19;
            }
            _powf();
            _powf();
            if (param_8 != 0) {
              _powf();
            }
            fVar25 = (float)_powf();
            if (param_9 != (float *)0x0) {
              uVar9 = FUN_00e7d780();
              if ((int)uVar9 < 0) {
                fVar46 = *param_9;
              }
              else if ((int)uVar9 < 0x7ff) {
                fVar46 = (float)(int)uVar5 * param_1 * fVar27 - (float)(int)uVar9;
                fVar46 = fVar46 * param_9[(ulonglong)uVar9 + 1] +
                         (DAT_02390124 - fVar46) * param_9[uVar9];
              }
              else {
                fVar46 = param_9[0x7ff];
              }
              fVar25 = fVar25 * fVar46;
            }
            *(float *)(lVar10 + uVar17 * 4) = fVar25;
            uVar19 = (ulonglong)(uVar5 + 1);
          } while (uVar3 != uVar5 + 1);
        }
      }
    }
  }
  iVar4 = FUN_00e7d780();
  fVar25 = 0.0;
  if (1 < (int)local_res20) {
    uVar19 = (ulonglong)((uint)(uVar15 - 1) & 7);
    if (uVar15 - 2 < 7) {
      fVar25 = 0.0;
      lVar12 = 1;
    }
    else {
      fVar25 = 0.0;
      uVar17 = 0;
      do {
        uVar20 = uVar17;
        fVar25 = fVar25 + *(float *)(unaff_RSI + 4 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 8 + uVar20 * 4) + *(float *)(unaff_RSI + 0xc + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x10 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x14 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x18 + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x1c + uVar20 * 4) +
                 *(float *)(unaff_RSI + 0x20 + uVar20 * 4);
        uVar17 = uVar20 + 8;
      } while ((uVar15 - 1 & 0xfffffffffffffff8) != uVar20 + 8);
      lVar12 = uVar20 + 9;
    }
    if (uVar19 != 0) {
      uVar17 = 0;
      do {
        fVar25 = fVar25 + *(float *)(unaff_RSI + lVar12 * 4 + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
    }
  }
  local_d8 = 0;
  if (((param_12 != 0.0) || (NAN(param_12))) && (param_16 != 0)) {
    if (param_12 <= 0.0) {
      param_12 = param_12 * param_12 + param_12 * param_12;
      if (DAT_02390124 < param_12) {
        param_12 = param_12 * param_12;
      }
    }
    else {
      param_12 = (float)(_DAT_023945e0 ^ (uint)param_12) * param_12;
      param_12 = param_12 + param_12;
    }
    lVar12 = (longlong)(*(int *)(unaff_RDI + 0x15c) / 2);
    local_d8 = local_res10 + lVar12 * 4;
    ___bzero();
    *(undefined4 *)(local_res10 + lVar12 * 4) = 0;
    if (0 < (int)uVar21) {
      uVar3 = 1;
      do {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        uVar5 = FUN_00e7d780((float)(int)uVar3 * param_1 * fVar27);
        uVar26 = 0;
        if (uVar5 < 0x800) {
          uVar26 = *(undefined4 *)(param_16 + (ulonglong)uVar5 * 4);
        }
        *(undefined4 *)(local_d8 + uVar19 * 4) = uVar26;
        bVar23 = uVar3 != uVar21;
        uVar3 = uVar3 + 1;
      } while (bVar23);
      uVar3 = uVar21 & 3;
      if (uVar21 - 1 < 3) {
        fVar46 = 0.0;
        uVar17 = 1;
      }
      else {
        fVar46 = 0.0;
        uVar19 = 1;
        do {
          uVar5 = (uint)uVar19;
          uVar17 = 0x1ff;
          if (uVar5 < 0x1ff) {
            uVar17 = uVar19;
          }
          uVar20 = 0x1fe;
          if (uVar5 < 0x1fe) {
            uVar20 = uVar19;
          }
          uVar16 = 0x1fd;
          if (uVar5 < 0x1fd) {
            uVar16 = uVar19;
          }
          uVar14 = 0x1fc;
          if (uVar5 < 0x1fc) {
            uVar14 = uVar19;
          }
          fVar46 = fVar46 + *(float *)(local_d8 + uVar17 * 4) +
                   *(float *)(local_d8 + 4 + uVar20 * 4) + *(float *)(local_d8 + 8 + uVar16 * 4) +
                   *(float *)(local_d8 + 0xc + uVar14 * 4);
          uVar17 = (ulonglong)(uVar5 + 4);
          uVar19 = (ulonglong)(uVar5 + 4);
        } while (uVar5 - (uVar21 & 0xfffffffc) != -3);
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar19 = 0x1ff;
        if ((uint)uVar17 < 0x1ff) {
          uVar19 = uVar17;
        }
        fVar46 = fVar46 + *(float *)(local_d8 + uVar19 * 4);
        uVar17 = (ulonglong)((uint)uVar17 + 1);
      }
      if (DAT_02394274 <= fVar46) {
        (**(code **)(DAT_02786500 + 0x20))(param_11 / fVar46);
      }
    }
    fVar46 = DAT_0240d16c;
    if (-1 < (int)uVar21) {
      if (uVar21 == 0) {
        uVar3 = 0;
      }
      else {
        uVar19 = 0;
        do {
          uVar5 = (uint)uVar19;
          uVar17 = 0x1ff;
          if (uVar5 < 0x1ff) {
            uVar17 = uVar19;
          }
          pfVar11 = (float *)(local_d8 + uVar17 * 4);
          if (*pfVar11 <= fVar46 && fVar46 != *pfVar11) {
            *(undefined4 *)(local_d8 + uVar17 * 4) = 0x33d6bf95;
          }
          uVar19 = 0x1ff;
          if (uVar5 + 1 < 0x1ff) {
            uVar19 = (ulonglong)(uVar5 + 1);
          }
          pfVar11 = (float *)(local_d8 + uVar19 * 4);
          if (*pfVar11 <= fVar46 && fVar46 != *pfVar11) {
            *(undefined4 *)(local_d8 + uVar19 * 4) = 0x33d6bf95;
          }
          uVar3 = uVar5 + 2;
          uVar19 = (ulonglong)(uVar5 + 2);
        } while ((uVar21 + 1 & 0xfffffffe) != uVar3);
      }
      if ((uVar21 + 1 & 1) != 0) {
        uVar19 = 0x1ff;
        if (uVar3 < 0x1ff) {
          uVar19 = (ulonglong)uVar3;
        }
        pfVar11 = (float *)(local_d8 + uVar19 * 4);
        if (*pfVar11 <= DAT_0240d16c && DAT_0240d16c != *pfVar11) {
          *(undefined4 *)(local_d8 + uVar19 * 4) = 0x33d6bf95;
        }
      }
    }
  }
  ___bzero();
  if (-1 < (int)uVar21) {
    uVar3 = iVar4 * 2 + 1;
    fVar51 = DAT_02390124 - (float)(_DAT_02390140 & (uint)param_12);
    fVar46 = 0.0;
    if (0.0 <= fVar51) {
      fVar46 = fVar51;
    }
    uVar19 = (ulonglong)uVar3;
    iVar6 = -iVar4;
    uVar5 = 0;
    do {
      uVar9 = 0x1ff;
      if (uVar5 < 0x1ff) {
        uVar9 = uVar5;
      }
      uVar17 = (ulonglong)uVar9;
      fVar51 = DAT_02390124;
      if (local_d0 != 0) {
        fVar51 = *(float *)(local_d0 + uVar17 * 4);
      }
      fVar47 = (float)(int)uVar5;
      iVar7 = FUN_00e7d780();
      iVar8 = FUN_00e7d780();
      if ((int)uVar3 < 1) {
        local_98 = 0.0;
        fVar53 = 0.0;
      }
      else {
        iVar22 = (iVar4 + iVar7) - iVar8;
        fVar53 = 0.0;
        uVar20 = 0;
        local_98 = 0.0;
        do {
          uVar16 = (uint)(iVar6 + iVar8) + uVar20;
          fVar52 = 0.0;
          iVar18 = (int)uVar16;
          if ((0 < iVar18) && (fVar52 = 0.0, iVar18 < (int)local_res20)) {
            fVar48 = (float)((uint)((float)iVar18 - fVar45 * fVar47) & _DAT_02390140);
            fVar52 = 0.0;
            if (fVar48 < fVar45) {
              fVar52 = (float)FUN_00e84a50(DAT_02390124 - fVar48 * fVar50);
              fVar52 = fVar52 * *(float *)(unaff_RSI + (uVar16 & 0xffffffff) * 4);
            }
          }
          fVar48 = fVar53 + fVar52;
          if (iVar22 + 1 != (int)uVar20) {
            fVar48 = fVar53;
          }
          fVar53 = fVar53 + fVar52;
          if (iVar22 != (int)uVar20) {
            fVar53 = fVar48;
          }
          *(float *)(local_res10 + uVar20 * 4) = fVar52;
          local_98 = local_98 + fVar52;
          uVar20 = uVar20 + 1;
        } while (uVar19 != uVar20);
      }
      if (param_17 == (float *)0x0) {
        if ((param_23 != DAT_02390124) || (NAN(param_23) || NAN(DAT_02390124))) goto LAB_012bf022;
      }
      else {
        uVar9 = FUN_00e7d780();
        if ((int)uVar9 < 0) {
          fVar52 = *param_17;
        }
        else if ((int)uVar9 < 0x7ff) {
          fVar52 = fVar24 * fVar47 * fVar27 - (float)(int)uVar9;
          fVar52 = fVar52 * param_17[(ulonglong)uVar9 + 1] +
                   (DAT_02390124 - fVar52) * param_17[uVar9];
        }
        else {
          fVar52 = param_17[0x7ff];
        }
        fVar51 = fVar51 * fVar52;
        if ((param_23 != DAT_02390124) || (NAN(param_23) || NAN(DAT_02390124))) {
LAB_012bf022:
          fVar51 = (float)_powf();
        }
      }
      if (((param_22 != DAT_02390124) || (NAN(param_22) || NAN(DAT_02390124))) && (uVar5 != 0)) {
        fVar52 = (float)_powf();
        fVar51 = fVar51 * fVar52 * fVar47;
      }
      if (DAT_02394274 <= local_98 &&
          ((bVar1 || bVar2) ||
          (((param_6 != 0 || param_7 != 0) || param_8 != 0) || param_9 != (float *)0x0))) {
        fVar52 = in_XMM5_Da;
        if (lVar10 != 0) {
          fVar52 = *(float *)(lVar10 + uVar17 * 4) * in_XMM5_Da;
        }
        iVar22 = FUN_00e7d780();
        if ((int)uVar3 < 1) {
          fVar48 = 0.0;
        }
        else {
          uVar9 = iVar22 + iVar6;
          fVar48 = 0.0;
          uVar20 = uVar19;
          do {
            if (((0 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) &&
               (fVar49 = (float)((uint)((float)(int)uVar9 - fVar45 * fVar47 * fVar52) &
                                _DAT_02390140), fVar49 < fVar45)) {
              fVar49 = (float)FUN_00e84a50(DAT_02390124 - fVar49 * fVar50);
              fVar48 = fVar48 + fVar49 * *(float *)(unaff_RSI + (ulonglong)uVar9 * 4);
            }
            uVar9 = uVar9 + 1;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        fVar51 = fVar51 * (fVar48 / local_98);
      }
      fVar52 = fVar51;
      if (local_d8 != 0) {
        if (uVar5 == 0) {
          fVar52 = fVar51 * fVar46;
        }
        else {
          fVar52 = 0.0;
          if (_DAT_0240d170 <= local_98) {
            fVar52 = *(float *)(local_d8 + uVar17 * 4) / local_98;
            fVar52 = (float)_powf((-(uint)(fVar52 < DAT_02394274) & DAT_0239425c |
                                  ~-(uint)(fVar52 < DAT_02394274) & (uint)fVar52) &
                                  -(uint)(param_12 <= 0.0) |
                                  ~-(uint)(param_12 <= 0.0) & (uint)fVar52,param_12);
            fVar52 = fVar51 * fVar52;
          }
        }
      }
      if (0 < (int)uVar3) {
        if (param_13 == 0 || param_10 <= 0.0) {
          if (iVar4 == 0) {
            lVar12 = 0;
          }
          else {
            uVar9 = iVar8 + iVar6;
            lVar12 = 0;
            do {
              if ((-1 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) {
                *(float *)(local_res8 + (ulonglong)uVar9 * 4) =
                     *(float *)(local_res10 + lVar12 * 4) * fVar52 +
                     *(float *)(local_res8 + (ulonglong)uVar9 * 4);
              }
              uVar13 = uVar9 + 1;
              if ((-1 < (int)uVar13) && ((int)uVar13 < (int)local_res20)) {
                *(float *)(local_res8 + (ulonglong)uVar13 * 4) =
                     *(float *)(local_res10 + 4 + lVar12 * 4) * fVar52 +
                     *(float *)(local_res8 + (ulonglong)uVar13 * 4);
              }
              lVar12 = lVar12 + 2;
              uVar9 = uVar9 + 2;
            } while (uVar19 - 1 != lVar12);
          }
          uVar9 = (iVar8 - iVar4) + (int)lVar12;
          if ((-1 < (int)uVar9) && ((int)uVar9 < (int)local_res20)) {
            *(float *)(local_res8 + (ulonglong)uVar9 * 4) =
                 *(float *)(local_res10 + lVar12 * 4) * fVar52 +
                 *(float *)(local_res8 + (ulonglong)uVar9 * 4);
          }
        }
        else {
          iVar7 = (iVar7 + iVar4) - iVar8;
          uVar20 = 0;
          do {
            uVar16 = (uint)(iVar6 + iVar8) + uVar20;
            iVar22 = (int)uVar16;
            if ((-1 < iVar22) && (iVar22 < (int)local_res20)) {
              fVar51 = *(float *)(local_res10 + uVar20 * 4) * fVar52;
              fVar48 = fVar51;
              if (iVar7 + 1 != (int)uVar20) {
                fVar48 = local_c0 * fVar51;
              }
              if (iVar7 != (int)uVar20) {
                fVar51 = fVar48;
              }
              uVar16 = uVar16 & 0xffffffff;
              *(float *)(local_res8 + uVar16 * 4) = fVar51 + *(float *)(local_res8 + uVar16 * 4);
            }
            uVar20 = uVar20 + 1;
          } while (uVar19 != uVar20);
        }
      }
      if ((local_128 != 0) && (uVar5 != 0)) {
        local_110 = -1;
        fVar51 = (float)_logf(fVar47 * fVar24 * DAT_02394204);
        fVar51 = (fVar51 * DAT_02394208) / DAT_023908e0 + DAT_0240d174;
        local_98 = local_98 * fVar52;
        while (local_110 = local_110 + 1, local_110 < *(int *)(local_128 + 0xc)) {
          FUN_01414880();
          if ((local_130 == '\0') && (local_138 != 0)) {
            FUN_00d50b00();
          }
          iVar7 = FUN_01414ae0();
          if (iVar7 != 3) {
            pfVar11 = (float *)(uVar17 * 4 + *(longlong *)(local_138 + 0x10));
            fVar47 = fVar53 * fVar52;
LAB_012bf498:
            *pfVar11 = fVar47 + *pfVar11;
            goto LAB_012bf4a0;
          }
          fVar47 = fVar51;
          if (param_18 != (float *)0x0) {
            uVar9 = FUN_00e7d780();
            if ((int)uVar9 < 0) {
              fVar47 = *param_18;
            }
            else if ((int)uVar9 < 0x65) {
              fVar47 = (param_18[(ulonglong)uVar9 + 1] - param_18[uVar9]) *
                       (fVar51 - (float)(int)uVar9) + param_18[uVar9];
            }
            else {
              fVar47 = param_18[0x65];
            }
            fVar47 = fVar47 * DAT_0240d178 + fVar51;
          }
          uVar9 = FUN_00e7d780();
          if (-1 < (int)uVar9) {
            if ((int)uVar9 < 0x65) {
              uVar20 = (ulonglong)uVar9;
              lVar12 = *(longlong *)(local_138 + 0x10);
              *(float *)(lVar12 + uVar20 * 4) =
                   (DAT_02390124 - (fVar47 - (float)(int)uVar9)) * local_98 +
                   *(float *)(lVar12 + uVar20 * 4);
              pfVar11 = (float *)(lVar12 + uVar20 * 4 + 4);
              fVar47 = (fVar47 - (float)(int)uVar9) * local_98;
            }
            else {
              pfVar11 = (float *)(*(longlong *)(local_138 + 0x10) + 0x194);
              fVar47 = local_98;
            }
            goto LAB_012bf498;
          }
          if (local_138 != 0) {
LAB_012bf4a0:
            FUN_00d50b20();
          }
        }
        FUN_012c2730();
      }
      bVar23 = uVar5 != uVar21;
      uVar5 = uVar5 + 1;
    } while (bVar23);
  }
  fVar27 = 0.0;
  if (1 < (int)local_res20) {
    uVar19 = (ulonglong)((uint)(uVar15 - 1) & 7);
    if (uVar15 - 2 < 7) {
      fVar27 = 0.0;
      lVar10 = 1;
    }
    else {
      fVar27 = 0.0;
      uVar17 = 0;
      do {
        uVar20 = uVar17;
        fVar27 = fVar27 + *(float *)(local_res8 + 4 + uVar20 * 4) +
                 *(float *)(local_res8 + 8 + uVar20 * 4) + *(float *)(local_res8 + 0xc + uVar20 * 4)
                 + *(float *)(local_res8 + 0x10 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x14 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x18 + uVar20 * 4) +
                 *(float *)(local_res8 + 0x1c + uVar20 * 4) +
                 *(float *)(local_res8 + 0x20 + uVar20 * 4);
        uVar17 = uVar20 + 8;
      } while ((uVar15 - 1 & 0xfffffffffffffff8) != uVar20 + 8);
      lVar10 = uVar20 + 9;
    }
    if (uVar19 != 0) {
      uVar17 = 0;
      do {
        fVar27 = fVar27 + *(float *)(local_res8 + lVar10 * 4 + uVar17 * 4);
        uVar17 = uVar17 + 1;
      } while (uVar19 != uVar17);
    }
  }
  if ((param_20 != DAT_02390124) || (NAN(param_20) || NAN(DAT_02390124))) {
    if (DAT_02394274 <= param_21) {
      fVar45 = DAT_02390124 / (param_21 * DAT_02394244);
      fVar25 = fVar25 * fVar45;
      fVar27 = fVar27 * fVar45;
    }
    fVar27 = (float)(~-(uint)(DAT_02390124 < fVar25) & (uint)fVar27 |
                    (uint)(fVar27 / fVar25) & -(uint)(DAT_02390124 < fVar25));
    fVar25 = (float)_powf();
  }
  fVar45 = DAT_02390124;
  if (DAT_02394274 <= fVar27) {
    fVar45 = fVar25 / fVar27;
  }
  fVar27 = DAT_023908e0;
  if (fVar45 <= DAT_023908e0) {
    fVar27 = fVar45;
  }
  if (local_128 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(local_128 + 0xc); iVar4 = iVar4 + 1) {
      FUN_014148c0();
      FUN_014148e0();
    }
    FUN_012c2730();
  }
  if (((param_24 < DAT_02390124) && (DAT_02394274 <= fVar27)) &&
     (fVar45 = (float)_powf(), 1 < (int)local_res20)) {
    fVar45 = fVar45 / fVar27;
    uVar19 = uVar15 - 1;
    uVar17 = 1;
    if (7 < uVar19) {
      uVar20 = uVar19 & 0xfffffffffffffff8;
      uVar17 = uVar20 + 1;
      uVar16 = 0;
      do {
        pfVar11 = (float *)(local_res8 + 4 + uVar16 * 4);
        fVar50 = pfVar11[1];
        fVar24 = pfVar11[2];
        fVar25 = pfVar11[3];
        if (fVar45 < *pfVar11) {
          *(float *)(local_res8 + 4 + uVar16 * 4) = fVar45;
        }
        if (fVar50 <= fVar45) {
          if (fVar24 > fVar45) goto LAB_012bf99c;
LAB_012bf965:
          if (fVar45 < fVar25) goto LAB_012bf971;
LAB_012bf9af:
          pfVar11 = (float *)(local_res8 + 0x14 + uVar16 * 4);
          fVar50 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
          fVar46 = pfVar11[3];
        }
        else {
          *(float *)(local_res8 + 8 + uVar16 * 4) = fVar45;
          if (fVar24 <= fVar45) goto LAB_012bf965;
LAB_012bf99c:
          *(float *)(local_res8 + 0xc + uVar16 * 4) = fVar45;
          if (fVar45 >= fVar25) goto LAB_012bf9af;
LAB_012bf971:
          *(float *)(local_res8 + 0x10 + uVar16 * 4) = fVar45;
          pfVar11 = (float *)(local_res8 + 0x14 + uVar16 * 4);
          fVar50 = *pfVar11;
          fVar24 = pfVar11[1];
          fVar25 = pfVar11[2];
          fVar46 = pfVar11[3];
        }
        if (fVar45 < fVar50) {
          *(float *)(local_res8 + 0x14 + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar24) {
          *(float *)(local_res8 + 0x18 + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar25) {
          *(float *)(local_res8 + 0x1c + uVar16 * 4) = fVar45;
        }
        if (fVar45 < fVar46) {
          *(float *)(local_res8 + 0x20 + uVar16 * 4) = fVar45;
        }
        uVar16 = uVar16 + 8;
      } while (uVar20 != uVar16);
      if (uVar19 == uVar20) goto LAB_012bfa38;
    }
    do {
      if (fVar45 < *(float *)(local_res8 + uVar17 * 4)) {
        *(float *)(local_res8 + uVar17 * 4) = fVar45;
      }
      uVar17 = uVar17 + 1;
    } while (uVar15 != uVar17);
  }
LAB_012bfa38:
  fVar45 = DAT_02394274;
  fVar27 = fVar27 * param_19;
  if (DAT_023d59b4 < (float)(_DAT_02390140 & (uint)param_4)) {
    fVar27 = fVar27 * ((param_4 + DAT_02390124) * local_48 +
                      (DAT_02390d34 - (param_4 + DAT_02390124)) * local_38);
  }
  if (0 < (int)local_res20) {
    uVar19 = 0;
    do {
      fVar50 = *(float *)(unaff_RSI + uVar19 * 4);
      if (fVar45 <= fVar50) {
        *(float *)(in_RDX + uVar19 * 4) = *(float *)(local_res8 + uVar19 * 4) / fVar50;
      }
      pfVar11 = (float *)(local_res8 + uVar19 * 4);
      if (*pfVar11 <= fVar45 && fVar45 != *pfVar11) {
        *(undefined4 *)(in_RDX + uVar19 * 4) = 0;
        fVar50 = 0.0;
      }
      else {
        fVar50 = *(float *)(in_RDX + uVar19 * 4);
      }
      *(float *)(in_RDX + uVar19 * 4) = fVar50 * fVar27;
      uVar19 = uVar19 + 1;
    } while (uVar15 != uVar19);
  }
  if (local_128 != 0) {
    FUN_00d50b20();
  }
  return;
}


