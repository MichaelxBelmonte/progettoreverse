// Function: FUN_01d494d0
// Address: 01d494d0
// Size: 3603 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d494d0(float param_1,undefined8 param_2,float param_3,float param_4)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint in_EDX;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 *unaff_RSI;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  longlong *unaff_RDI;
  int iVar25;
  uint *in_R8;
  uint in_R9D;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined4 in_XMM1_Dd;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  int local_res8;
  int local_res10;
  char local_res18;
  undefined8 uVar45;
  undefined1 uVar46;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  ulonglong local_90;
  undefined1 local_88 [16];
  int local_78;
  uint local_74;
  float local_70;
  int local_6c;
  ulonglong local_68;
  float local_5c;
  uint local_58;
  uint local_54;
  ulonglong local_50;
  int local_48;
  float local_44;
  ulonglong local_40;
  uint local_34;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar39 = (float)((ulonglong)param_2 >> 0x20);
  fVar34 = (float)param_2;
  local_70 = param_1;
  local_5c = fVar34;
  local_44 = param_3;
  fVar33 = (float)FUN_01d39d70();
  auVar36._4_4_ = fVar39;
  auVar36._0_4_ = fVar39 * local_44 * DAT_0239011c;
  auVar36._8_4_ = in_XMM1_Dd;
  auVar36._12_4_ = in_XMM1_Dd;
  auVar36 = roundss(ZEXT416(0),auVar36,10);
  iVar10 = 0x7fe;
  if ((int)auVar36._0_4_ < 0x7fe) {
    iVar10 = (int)auVar36._0_4_;
  }
  uVar15 = (uint)(longlong)(fVar34 * local_44 + fVar33 * local_44 + DAT_02390124);
  if (in_EDX < uVar15) {
    uVar21 = (ulonglong)(iVar10 + 2U);
    uVar31 = in_ECX + in_EDX;
    iVar24 = uVar31 - uVar15;
    if (uVar31 < uVar15) {
      iVar24 = 0;
    }
    uVar14 = (ulonglong)(uint)(in_ECX - iVar24);
    lVar6 = FUN_00e83010();
    if (lVar6 != 0) {
      if (local_res18 == '\0') {
        local_9c = in_R8[in_R9D - (int)(longlong)((float)(in_R9D - 1) * param_4)];
        local_74 = *in_R8;
      }
      else {
        local_74 = *in_R8;
        fVar34 = (float)(local_74 >> 0x10 & 0xff) * DAT_02391098;
        fVar33 = DAT_02394220;
        if (fVar34 <= DAT_02394220) {
          fVar33 = fVar34;
        }
        fVar39 = (float)(local_74 >> 8 & 0xff) * DAT_02391098;
        fVar40 = (float)(local_74 & 0xff) * DAT_02391098;
        fVar34 = DAT_02394220;
        if (fVar39 <= DAT_02394220) {
          fVar34 = fVar39;
        }
        fVar39 = DAT_02394220;
        if (fVar40 <= DAT_02394220) {
          fVar39 = fVar40;
        }
        local_9c = local_74 & 0xff000000 |
                   (int)fVar39 & 0xffU | ((int)fVar34 & 0xffU) << 8 | ((int)fVar33 & 0xffU) << 0x10;
      }
      local_a0 = 0;
      local_68 = uVar21;
      local_50 = uVar14;
      if (in_EDX == 0) {
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
      }
      else {
        local_88._0_8_ = FUN_01d4a310(uVar21,&local_a0);
        local_88._8_8_ = extraout_XMM0_Qb;
      }
      fVar33 = (float)FUN_01d4a310(local_68 & 0xffffffff,&local_a0);
      iVar24 = (int)local_50;
      uVar14 = local_50;
      if (0 < iVar24) {
        fVar34 = (float)in_R9D;
        local_5c = local_5c * fVar34;
        uVar5 = local_74 >> 0x18;
        uVar21 = (ulonglong)(uint)((int)local_68 * iVar24);
        uVar16 = local_74 & 0xffffff;
        uVar26 = 1;
        if (1 < (int)local_68) {
          uVar26 = local_68 & 0xffffffff;
        }
        fVar39 = DAT_0239011c * fVar34;
        uVar7 = (longlong)(local_5c * local_70 + 0.0) & 0xffffffff;
        if (local_70 <= 0.0) {
          uVar7 = 0;
        }
        iVar25 = iVar10 + 1;
        local_98 = iVar10 * iVar24;
        if (uVar15 < uVar31) {
          uVar31 = uVar15;
        }
        local_6c = in_EDX * 2 + uVar31 * -2;
        local_94 = (iVar10 + 4) * iVar24;
        local_78 = uVar31 * 2 + in_EDX * -2;
        local_48 = in_EDX - uVar31;
        local_58 = iVar24 * (iVar10 + 3);
        local_54 = iVar24 * iVar25;
        fVar41 = 0.0;
        uVar8 = local_50 & 0xffffffff;
        local_40 = 0;
        fVar40 = (float)local_88._0_4_;
        uVar42 = local_88._4_4_;
        uVar43 = local_88._8_4_;
        uVar44 = local_88._12_4_;
        uVar31 = in_EDX;
        do {
          local_88._4_4_ = uVar42;
          local_88._0_4_ = fVar40;
          local_88._8_4_ = uVar43;
          local_88._12_4_ = uVar44;
          local_34 = uVar31 + 1;
          uVar45 = *unaff_RSI;
          uVar46 = 0;
          auVar37._0_8_ = FUN_01d4a310(local_68,&local_a0);
          auVar37._8_8_ = extraout_XMM0_Qb_00;
          fVar35 = (float)auVar37._0_8_;
          auVar36 = insertps(auVar37,local_88._0_4_,0x10);
          auVar38._0_4_ = auVar36._0_4_ + _DAT_023945d0;
          auVar38._4_4_ = auVar36._4_4_ + _UNK_023945d4;
          auVar38._8_4_ = auVar36._8_4_ + _UNK_023945d8;
          auVar38._12_4_ = auVar36._12_4_ + _UNK_023945dc;
          auVar36 = roundps(auVar38,auVar38,9);
          uVar23 = (int)auVar36._4_4_;
          if ((int)auVar36._4_4_ < (int)auVar36._0_4_) {
            uVar23 = (int)auVar36._0_4_;
          }
          fVar40 = fVar33 + DAT_0239011c;
          auVar36 = roundss(ZEXT816(0),ZEXT416((uint)fVar40),9);
          uVar28 = (uint)auVar36._0_4_;
          uVar14 = CONCAT44(0,uVar28);
          uVar29 = uVar28;
          if (uVar23 - uVar28 != 0 && (int)uVar28 <= (int)uVar23) {
            fVar41 = DAT_02390124 / ((float)(int)(uVar23 - uVar28) + DAT_0239011c);
            uVar29 = uVar23;
          }
          if ((uVar31 == 0) || (local_34 == uVar15)) {
            iVar24 = 0;
            if (-2 < iVar10) {
              uVar31 = 0;
              if (0 < (int)uVar29) {
                uVar31 = local_74;
              }
              *(uint *)(lVar6 + (uVar21 + local_40) * 4) = uVar31;
              if (iVar10 < 0) {
                iVar24 = 1;
              }
              else {
                lVar27 = (longlong)(int)uVar29;
                lVar18 = 1;
                iVar24 = (int)uVar26;
                if (iVar24 != 2) {
                  lVar18 = 1;
                  uVar31 = local_98;
                  uVar23 = local_94;
                  uVar28 = local_54;
                  uVar29 = local_58;
                  do {
                    uVar11 = 0;
                    if (lVar18 < lVar27) {
                      uVar11 = local_74;
                    }
                    *(uint *)(lVar6 + (uVar28 + local_40) * 4) = uVar11;
                    uVar20 = 0;
                    if (lVar18 + 1 < lVar27) {
                      uVar20 = local_74;
                    }
                    *(uint *)(lVar6 + (uVar29 + local_40) * 4) = uVar11;
                    *(uint *)(lVar6 + (uVar31 + local_40) * 4) = uVar20;
                    *(uint *)(lVar6 + (uVar23 + local_40) * 4) = uVar20;
                    uVar29 = uVar29 + local_78;
                    uVar28 = uVar28 + local_6c;
                    uVar23 = uVar23 + local_78;
                    uVar31 = uVar31 + local_6c;
                    lVar1 = lVar18 - (uVar26 - 1 & 0xfffffffffffffffe);
                    lVar18 = lVar18 + 2;
                  } while (lVar1 != -1);
                }
                if ((uVar26 - 1 & 1) != 0) {
                  uVar31 = 0;
                  if (lVar18 < lVar27) {
                    uVar31 = local_74;
                  }
                  *(uint *)(lVar6 + ((uint)(((int)local_68 - (int)lVar18) * (int)local_50) +
                                    local_40) * 4) = uVar31;
                  *(uint *)(lVar6 + ((uint)(((int)local_68 + (int)lVar18) * (int)local_50) +
                                    local_40) * 4) = uVar31;
                }
              }
            }
          }
          else {
            if (((param_4 == 0.0) && (!NAN(param_4))) ||
               ((local_res8 <= (int)local_34 && ((int)local_34 <= local_res10)))) {
              bVar32 = false;
            }
            else {
              local_88._8_4_ = (int)extraout_XMM0_Qb_00;
              local_88._0_8_ = auVar37._0_8_;
              local_88._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
              local_90 = CONCAT44(local_90._4_4_,fVar40);
              iVar24 = FUN_00e7d780((float)(int)local_34 / local_44,0,local_34,fVar40,uVar45,uVar46)
              ;
              bVar32 = iVar24 * -0x55555555 + 0x2aaaaaaaU < 0x55555555;
              fVar40 = (float)local_90;
              fVar35 = (float)local_88._0_4_;
            }
            fVar4 = DAT_0239011c;
            puVar2 = (uint *)(lVar6 + (uVar21 + local_40) * 4);
            iVar12 = (int)local_68;
            iVar22 = (int)local_50;
            uVar19 = 0;
            if ((int)uVar28 < 1) goto LAB_01d4a040;
            uVar17 = (ulonglong)uVar28;
            if (bVar32) {
              *puVar2 = local_9c;
              uVar19 = 1;
              if (uVar28 == 1) goto LAB_01d4a040;
              local_90 = uVar17 - 1;
              lVar18 = 1;
              local_88._0_8_ = uVar14;
              if (uVar28 != 2) {
                lVar18 = 1;
                uVar23 = local_54;
                uVar11 = local_58;
                uVar20 = local_98;
                uVar31 = local_94;
                do {
                  *(uint *)(lVar6 + (uVar23 + local_40) * 4) = local_9c;
                  *(uint *)(lVar6 + (uVar11 + local_40) * 4) = local_9c;
                  *(uint *)(lVar6 + (uVar20 + local_40) * 4) = local_9c;
                  *(uint *)(lVar6 + (uVar31 + local_40) * 4) = local_9c;
                  uVar20 = uVar20 + local_6c;
                  uVar31 = uVar31 + local_78;
                  uVar11 = uVar11 + local_78;
                  uVar23 = uVar23 + local_6c;
                  lVar27 = lVar18 - (local_90 & 0xfffffffffffffffe);
                  lVar18 = lVar18 + 2;
                } while (lVar27 != -1);
              }
              if ((local_90 & 1) != 0) {
                *(uint *)(lVar6 + ((uint)((iVar12 - (int)lVar18) * iVar22) + local_40) * 4) =
                     local_9c;
                *(uint *)(lVar6 + ((uint)(((int)lVar18 + iVar12) * iVar22) + local_40) * 4) =
                     local_9c;
                goto joined_r0x01d49e4e;
              }
joined_r0x01d4a043:
              if ((int)uVar29 <= (int)uVar28) goto LAB_01d4a150;
LAB_01d4a049:
              iVar30 = (int)uVar14;
              uVar23 = (iVar12 + iVar30) * iVar22;
              uVar31 = (iVar12 - iVar30) * iVar22;
              iVar24 = uVar29 - iVar30;
              lVar18 = 0;
              do {
                uVar28 = (int)((float)iVar24 * fVar41 * (float)uVar5) << 0x18 | uVar16;
                puVar9 = puVar2;
                if (uVar14 + lVar18 != 0) {
                  *(uint *)(lVar6 + (uVar31 + local_40) * 4) = uVar28;
                  puVar9 = (uint *)(lVar6 + (uVar23 + local_40) * 4);
                }
                *puVar9 = uVar28;
                lVar18 = lVar18 + 1;
                uVar23 = uVar23 + iVar22;
                uVar31 = uVar31 + local_48;
                iVar24 = iVar24 + -1;
              } while ((int)lVar18 + iVar30 < (int)uVar29);
              uVar14 = (ulonglong)(uint)(iVar30 + (int)lVar18);
            }
            else {
              if ((fVar33 != 0.0) || (NAN(fVar33))) {
                auVar36 = ZEXT416((uint)(fVar39 / fVar33));
                auVar36 = roundss(auVar36,auVar36,10);
                uVar23 = (uint)(longlong)auVar36._0_4_;
                uVar31 = in_R9D - uVar23;
                if (in_R9D < uVar23) {
                  uVar31 = 0;
                }
                if (0.0 < local_70) {
                  uVar31 = (uint)(longlong)((local_5c - (float)uVar31) * local_70 + (float)uVar31);
                }
                *puVar2 = in_R8[uVar31];
                uVar19 = 1;
                if (uVar28 != 1) {
                  local_88._0_8_ = uVar14;
                  if (0.0 < local_70) {
                    uVar19 = 1;
                    uVar31 = local_54;
                    uVar23 = local_58;
                    do {
                      auVar36 = ZEXT416((uint)((((float)(int)uVar19 + fVar4) * fVar34) / fVar33));
                      auVar36 = roundss(auVar36,auVar36,10);
                      uVar20 = (uint)(longlong)auVar36._0_4_;
                      uVar11 = in_R9D - uVar20;
                      if (in_R9D < uVar20) {
                        uVar11 = 0;
                      }
                      uVar11 = in_R8[(longlong)
                                     ((local_5c - (float)uVar11) * local_70 + (float)uVar11) &
                                     0xffffffff];
                      *(uint *)(lVar6 + (uVar31 + local_40) * 4) = uVar11;
                      *(uint *)(lVar6 + (uVar23 + local_40) * 4) = uVar11;
                      uVar19 = uVar19 + 1;
                      uVar23 = uVar23 + iVar22;
                      uVar31 = uVar31 + local_48;
                    } while (uVar17 != uVar19);
                    goto joined_r0x01d49e4e;
                  }
                  uVar13 = 1;
                  uVar31 = local_54;
                  uVar23 = local_58;
                  do {
                    auVar36 = ZEXT416((uint)((((float)(int)uVar13 + fVar4) * fVar34) / fVar33));
                    auVar36 = roundss(auVar36,auVar36,10);
                    uVar11 = (uint)(longlong)auVar36._0_4_;
                    uVar28 = in_R9D - uVar11;
                    if (in_R9D < uVar11) {
                      uVar28 = 0;
                    }
                    uVar28 = in_R8[uVar28];
                    *(uint *)(lVar6 + (uVar31 + local_40) * 4) = uVar28;
                    *(uint *)(lVar6 + (uVar23 + local_40) * 4) = uVar28;
                    uVar13 = uVar13 + 1;
                    uVar23 = uVar23 + iVar22;
                    uVar31 = uVar31 + local_48;
                    uVar19 = uVar14;
                  } while (uVar17 != uVar13);
                }
LAB_01d4a040:
                uVar28 = (uint)uVar19;
                uVar14 = uVar19;
                goto joined_r0x01d4a043;
              }
              *puVar2 = in_R8[uVar7];
              uVar19 = 1;
              if (uVar28 == 1) goto LAB_01d4a040;
              local_90 = uVar17 - 1;
              lVar18 = 1;
              if (uVar28 != 2) {
                lVar18 = 1;
                uVar23 = local_54;
                uVar11 = local_94;
                uVar20 = local_98;
                uVar31 = local_58;
                do {
                  uVar3 = in_R8[uVar7];
                  *(uint *)(lVar6 + (uVar23 + local_40) * 4) = uVar3;
                  *(uint *)(lVar6 + (uVar31 + local_40) * 4) = uVar3;
                  uVar3 = in_R8[uVar7];
                  *(uint *)(lVar6 + (uVar20 + local_40) * 4) = uVar3;
                  *(uint *)(lVar6 + (uVar11 + local_40) * 4) = uVar3;
                  uVar20 = uVar20 + local_6c;
                  uVar11 = uVar11 + local_78;
                  uVar31 = uVar31 + local_78;
                  uVar23 = uVar23 + local_6c;
                  lVar27 = lVar18 - (local_90 & 0xfffffffffffffffe);
                  lVar18 = lVar18 + 2;
                } while (lVar27 != -1);
              }
              if ((local_90 & 1) != 0) {
                uVar31 = in_R8[uVar7];
                *(uint *)(lVar6 + ((uint)((iVar12 - (int)lVar18) * iVar22) + local_40) * 4) = uVar31
                ;
                *(uint *)(lVar6 + ((uint)(((int)lVar18 + iVar12) * iVar22) + local_40) * 4) = uVar31
                ;
              }
joined_r0x01d49e4e:
              local_88._0_8_ = uVar14;
              if ((int)uVar28 < (int)uVar29) goto LAB_01d4a049;
LAB_01d4a150:
              iVar24 = (int)uVar14;
              if (iVar12 - iVar24 != 0 && iVar24 <= iVar12) {
                uVar31 = (int)((fVar40 - (float)iVar24) * (float)uVar5) * 0x1000000 + uVar16;
                puVar9 = puVar2;
                if (iVar24 != 0) {
                  *(uint *)(lVar6 + ((uint)((iVar12 - iVar24) * iVar22) + local_40) * 4) = uVar31;
                  puVar9 = (uint *)(lVar6 + ((uint)((iVar12 + iVar24) * iVar22) + local_40) * 4);
                }
                *puVar9 = uVar31;
                uVar14 = (ulonglong)(iVar24 + 1);
              }
            }
            iVar30 = (int)uVar14;
            iVar24 = iVar30;
            if (iVar12 - iVar30 != 0 && iVar30 <= iVar12) {
              if ((iVar10 - iVar30 & 1U) != 0) {
                puVar9 = puVar2;
                if (iVar30 != 0) {
                  *(undefined4 *)(lVar6 + ((uint)((iVar12 - iVar30) * iVar22) + local_40) * 4) = 0;
                  puVar9 = (uint *)(lVar6 + ((uint)((iVar12 + iVar30) * iVar22) + local_40) * 4);
                }
                *puVar9 = 0;
                uVar14 = (ulonglong)(iVar30 + 1);
              }
              iVar24 = iVar12;
              if (iVar25 != iVar30) {
                iVar30 = (int)uVar14;
                uVar29 = (iVar10 + 3 + iVar30) * iVar22;
                uVar23 = (iVar25 - iVar30) * iVar22;
                uVar28 = (iVar30 + iVar12) * iVar22;
                uVar31 = (iVar12 - iVar30) * iVar22;
                do {
                  iVar12 = (int)uVar14;
                  puVar9 = puVar2;
                  if (iVar12 != 0) {
                    *(undefined4 *)(lVar6 + (uVar31 + local_40) * 4) = 0;
                    puVar9 = (uint *)(lVar6 + (uVar28 + local_40) * 4);
                  }
                  *puVar9 = 0;
                  puVar9 = puVar2;
                  if (iVar12 != -1) {
                    *(undefined4 *)(lVar6 + (uVar23 + local_40) * 4) = 0;
                    puVar9 = (uint *)(lVar6 + (uVar29 + local_40) * 4);
                  }
                  *puVar9 = 0;
                  uVar29 = uVar29 + local_78;
                  uVar23 = uVar23 + local_6c;
                  uVar28 = uVar28 + local_78;
                  uVar31 = uVar31 + local_6c;
                  uVar14 = (ulonglong)(iVar12 + 2);
                } while (iVar12 != iVar10);
              }
            }
          }
          uVar44 = 0;
          uVar43 = 0;
          uVar42 = 0;
          *(undefined4 *)(lVar6 + ((uint)(((int)local_68 - iVar24) * (int)local_50) + local_40) * 4)
               = 0;
          local_40 = local_40 + 1;
          uVar14 = local_50;
          fVar40 = fVar33;
          fVar33 = fVar35;
          uVar31 = local_34;
        } while (local_40 < uVar8);
      }
    }
    (**(code **)(*unaff_RDI + 0x570))(uVar14,0,(iVar10 + 2U) * 2,in_EDX,lVar6);
  }
  return;
}


