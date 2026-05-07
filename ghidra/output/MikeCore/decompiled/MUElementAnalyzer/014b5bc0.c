// Function: FUN_014b5bc0
// Address: 014b5bc0
// Size: 5540 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014b6470) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_014b5bc0(double param_1,double param_2,float param_3,float param_4,char param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  float fVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  uint uVar21;
  uint uVar22;
  float *in_RCX;
  uint uVar23;
  longlong in_RDX;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  undefined8 *unaff_RSI;
  ulonglong uVar30;
  longlong unaff_RDI;
  longlong lVar31;
  size_t sVar32;
  ulonglong in_R8;
  float *pfVar33;
  int in_R9D;
  int iVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  uint uVar38;
  ulonglong uVar39;
  int iVar40;
  bool bVar41;
  float fVar42;
  float fVar43;
  float extraout_XMM0_Da;
  float fVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float in_XMM4_Da;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  double in_XMM5_Qa;
  float fVar55;
  double unaff_XMM6_Qa;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  double dVar56;
  int local_res8;
  char local_res10;
  byte local_res18;
  float *local_res20;
  undefined8 local_120;
  undefined1 local_118;
  float *local_110;
  float *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int local_d4;
  ulonglong local_d0;
  float *local_c8;
  int local_c0;
  float local_bc;
  uint local_b8;
  int local_b4;
  int local_80;
  float local_78;
  float local_74;
  double local_70;
  float *local_68;
  float *local_60;
  float local_54;
  float local_34;
  
  local_70 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  local_d0 = in_R8;
  local_c8 = in_RCX;
  local_74 = param_3;
  local_60 = (float *)unaff_XMM6_Qa;
  local_54 = param_4;
  pfVar17 = (float *)FUN_00e83010();
  dVar45 = ((double)local_54 * DAT_023907c0) / param_2;
  auVar4._4_8_ = (ulonglong)dVar45 >> 0x20;
  auVar4._0_4_ = (float)dVar45 * DAT_023941f4;
  fVar42 = (float)_exp2f(auVar4._0_8_);
  fVar44 = DAT_02390124;
  if (local_res10 != '\0') {
    in_XMM4_Da = in_XMM4_Da * DAT_0239011c;
    fVar44 = DAT_0239011c;
  }
  uVar26 = (uint)(param_2 * (double)local_60);
  iVar37 = (int)(param_2 * local_70);
  lVar19 = (longlong)(local_70 * param_1);
  if (in_RDX < (longlong)(local_70 * param_1)) {
    lVar19 = in_RDX;
  }
  if (in_XMM4_Da <= 0.0) {
    pfVar36 = (float *)0x0;
  }
  else {
    pfVar36 = (float *)(longlong)((double)local_60 * param_1);
    local_34 = (float)(param_1 / (double)in_XMM4_Da);
    fVar47 = local_34 / (float)(int)(DAT_0240e360 / local_74);
    if (fVar47 <= DAT_02390124) {
      fVar51 = 0.0;
      fVar47 = DAT_02390124 / (float)(int)(DAT_02390124 / fVar47 + DAT_0239011c);
    }
    else {
      fVar47 = (float)(int)(fVar47 + DAT_0239011c);
      fVar51 = (float)(int)(float)((ulonglong)(param_1 / (double)in_XMM4_Da) >> 0x20);
    }
    local_e8 = CONCAT44(fVar51,fVar47);
    uStack_e0 = 0;
    uVar39 = (ulonglong)((float)(lVar19 - (longlong)pfVar36) / fVar47);
    local_bc = fVar44;
    local_68 = (float *)FUN_00e83010();
    uVar16 = (uint)uVar39;
    uVar24 = uVar39;
    local_b8 = uVar26;
    local_b4 = iVar37;
    local_60 = pfVar36;
    if (unaff_RDI == 0) {
      local_120 = *unaff_RSI;
      local_118 = 0;
      in_R8 = 0;
      FUN_014b4e50(pfVar36,&local_120);
      in_RCX = pfVar36;
    }
    else if (((0 < (int)uVar16) && (0.0 < (float)local_e8)) &&
            ((uVar26 = (uint)((float)(~-(uint)((float)local_e8 < DAT_02390124) &
                                      (uint)(float)local_e8 |
                                     (uint)(DAT_02390124 / (float)local_e8) &
                                     -(uint)((float)local_e8 < DAT_02390124)) + DAT_0239011c),
             (int)uVar26 <= (int)uVar16 || ((float)local_e8 < DAT_02390124)))) {
      if (uVar26 == 1) {
        in_R8 = (ulonglong)(uVar16 - 1);
        pfVar35 = (float *)(uVar39 & 0xffffffff);
        pfVar20 = local_68;
        if ((6 < uVar16 - 1) &&
           (((float *)(unaff_RDI + (in_R8 + (longlong)pfVar36) * 4 + 4) <= local_68 ||
            (pfVar35 = (float *)(uVar39 & 0xffffffff),
            local_68 + in_R8 + 1 <= (float *)(unaff_RDI + (longlong)pfVar36 * 4))))) {
          in_R8 = in_R8 + 1;
          uVar18 = in_R8 & 0xfffffffffffffff8;
          uVar30 = (uVar18 - 8 >> 3) + 1;
          uVar25 = (ulonglong)((uint)uVar30 & 3);
          if (uVar18 - 8 < 0x18) {
            lVar31 = 0;
          }
          else {
            lVar19 = unaff_RDI + (longlong)pfVar36 * 4;
            lVar28 = -(uVar30 & 0xfffffffffffffffc);
            lVar31 = 0;
            do {
              puVar2 = (undefined8 *)(lVar19 + lVar31 * 4);
              uVar9 = puVar2[1];
              puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar31 * 4);
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              *(undefined8 *)(local_68 + lVar31) = *puVar2;
              *(undefined8 *)(local_68 + lVar31 + 2) = uVar9;
              *(undefined8 *)(local_68 + lVar31 + 4) = uVar10;
              *(undefined8 *)(local_68 + lVar31 + 4 + 2) = uVar11;
              puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar31 * 4);
              uVar9 = puVar2[1];
              puVar3 = (undefined8 *)(lVar19 + 0x30 + lVar31 * 4);
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              *(undefined8 *)(local_68 + lVar31 + 8) = *puVar2;
              *(undefined8 *)(local_68 + lVar31 + 8 + 2) = uVar9;
              *(undefined8 *)(local_68 + lVar31 + 0xc) = uVar10;
              *(undefined8 *)(local_68 + lVar31 + 0xc + 2) = uVar11;
              puVar2 = (undefined8 *)(lVar19 + 0x40 + lVar31 * 4);
              uVar9 = puVar2[1];
              puVar3 = (undefined8 *)(lVar19 + 0x50 + lVar31 * 4);
              uVar10 = *puVar3;
              uVar11 = puVar3[1];
              *(undefined8 *)(local_68 + lVar31 + 0x10) = *puVar2;
              *(undefined8 *)(local_68 + lVar31 + 0x10 + 2) = uVar9;
              *(undefined8 *)(local_68 + lVar31 + 0x14) = uVar10;
              *(undefined8 *)(local_68 + lVar31 + 0x14 + 2) = uVar11;
              puVar2 = (undefined8 *)(lVar19 + 0x60 + lVar31 * 4);
              uVar9 = puVar2[1];
              pfVar20 = (float *)(lVar19 + 0x70 + lVar31 * 4);
              fVar44 = *pfVar20;
              fVar47 = pfVar20[1];
              fVar51 = pfVar20[2];
              fVar43 = pfVar20[3];
              *(undefined8 *)(local_68 + lVar31 + 0x18) = *puVar2;
              *(undefined8 *)(local_68 + lVar31 + 0x18 + 2) = uVar9;
              pfVar20 = local_68 + lVar31 + 0x1c;
              *pfVar20 = fVar44;
              pfVar20[1] = fVar47;
              pfVar20[2] = fVar51;
              pfVar20[3] = fVar43;
              lVar31 = lVar31 + 0x20;
              lVar28 = lVar28 + 4;
            } while (lVar28 != 0);
          }
          if (uVar25 != 0) {
            lVar19 = unaff_RDI + (lVar31 + (longlong)pfVar36) * 4;
            lVar28 = 0;
            do {
              puVar2 = (undefined8 *)(lVar19 + lVar28);
              uVar9 = puVar2[1];
              puVar1 = (undefined4 *)(lVar19 + 0x10 + lVar28);
              uVar5 = *puVar1;
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              puVar3 = (undefined8 *)((longlong)local_68 + lVar28 + lVar31 * 4);
              *puVar3 = *puVar2;
              puVar3[1] = uVar9;
              puVar1 = (undefined4 *)((longlong)local_68 + lVar28 + lVar31 * 4 + 0x10);
              *puVar1 = uVar5;
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              lVar28 = lVar28 + 0x20;
            } while (uVar25 << 5 != lVar28);
          }
          in_RCX = local_68;
          if (in_R8 == uVar18) goto LAB_014b5f0e;
          pfVar35 = (float *)(ulonglong)(uVar16 - (int)uVar18);
          pfVar20 = local_68 + uVar18;
          pfVar36 = (float *)(uVar18 + (longlong)pfVar36);
        }
        uVar26 = (uint)pfVar35;
        if (((ulonglong)pfVar35 & 3) != 0) {
          uVar27 = 0;
          do {
            *pfVar20 = *(float *)(unaff_RDI + (longlong)pfVar36 * 4);
            pfVar20 = pfVar20 + 1;
            pfVar36 = (float *)((longlong)pfVar36 + 1);
            uVar27 = uVar27 + 1;
          } while ((uVar26 & 3) != uVar27);
          pfVar35 = (float *)(ulonglong)(uVar26 - uVar27);
        }
        in_RCX = (float *)(ulonglong)(uVar26 - 1);
        if (2 < uVar26 - 1) {
          lVar19 = unaff_RDI + (longlong)pfVar36 * 4;
          lVar28 = 0;
          do {
            pfVar20[lVar28] = *(float *)(lVar19 + lVar28 * 4);
            pfVar20[lVar28 + 1] = *(float *)(lVar19 + 4 + lVar28 * 4);
            pfVar20[lVar28 + 2] = *(float *)(lVar19 + 8 + lVar28 * 4);
            pfVar20[lVar28 + 3] = *(float *)(lVar19 + 0xc + lVar28 * 4);
            lVar28 = lVar28 + 4;
            in_RCX = pfVar35;
          } while ((int)pfVar35 != (int)lVar28);
        }
      }
      else if (DAT_02390124 <= (float)local_e8) {
        uVar25 = (ulonglong)(uVar26 - 1);
        local_70 = (double)(uVar25 + 1);
        lVar28 = -(longlong)pfVar36;
        lVar19 = unaff_RDI + (longlong)pfVar36 * 4;
        uVar18 = uVar39 & 0xffffffff;
        pfVar20 = local_68;
        do {
          fVar44 = 0.0;
          uVar27 = uVar26;
          in_RCX = pfVar36;
          if ((uVar26 & 3) != 0) {
            lVar31 = 0;
            do {
              fVar44 = fVar44 + *(float *)(lVar19 + lVar31 * 4);
              lVar31 = lVar31 + 1;
            } while ((uVar26 & 3) != (uint)lVar31);
            uVar27 = uVar26 - (uint)lVar31;
            in_RCX = (float *)(lVar31 - lVar28);
          }
          if (2 < uVar26 - 1) {
            uVar24 = (ulonglong)uVar27;
            in_RCX = (float *)(unaff_RDI + 0xc + (longlong)in_RCX * 4);
            in_R8 = 0;
            do {
              fVar44 = fVar44 + in_RCX[in_R8 - 3] + in_RCX[in_R8 - 2] + in_RCX[in_R8 - 1] +
                       in_RCX[in_R8];
              in_R8 = in_R8 + 4;
            } while (uVar27 != (uint)in_R8);
          }
          pfVar36 = (float *)((longlong)pfVar36 + (longlong)local_70);
          *pfVar20 = fVar44;
          pfVar20 = pfVar20 + 1;
          lVar28 = lVar28 + ~uVar25;
          lVar19 = lVar19 + uVar25 * 4 + 4;
          uVar27 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar27;
        } while (uVar27 != 0);
      }
      else {
        fVar44 = *(float *)(unaff_RDI + (longlong)pfVar36 * 4);
        pfVar20 = local_68;
        fVar47 = fVar44;
        if (uVar16 == 1) {
          in_RCX = (float *)0x0;
        }
        else {
          lVar19 = (longlong)pfVar36 + 1;
          iVar37 = -(uVar16 & 0xfffffffe);
          fVar51 = 0.0;
          in_RCX = (float *)0x0;
          do {
            uVar27 = (uint)in_RCX;
            fVar43 = fVar47;
            if ((uint)in_RCX == 0) {
              fVar43 = *(float *)(unaff_RDI + lVar19 * 4);
              fVar51 = (fVar43 - fVar47) * (float)local_e8;
              lVar19 = lVar19 + 1;
              uVar27 = uVar26;
              fVar44 = fVar47;
            }
            *pfVar20 = fVar44;
            if (uVar27 - 1 == 0) {
              fVar47 = *(float *)(unaff_RDI + lVar19 * 4);
              fVar51 = (fVar47 - fVar43) * (float)local_e8;
              lVar19 = lVar19 + 1;
              uVar27 = uVar26;
              fVar44 = fVar43;
            }
            else {
              uVar27 = uVar27 - 1;
              fVar44 = fVar44 + fVar51;
              fVar47 = fVar43;
            }
            in_RCX = (float *)(ulonglong)(uVar27 - 1);
            pfVar20[1] = fVar44;
            pfVar20 = pfVar20 + 2;
            fVar44 = fVar44 + fVar51;
            iVar37 = iVar37 + 2;
          } while (iVar37 != 0);
        }
        if ((uVar39 & 1) != 0) {
          if ((int)in_RCX != 0) {
            fVar47 = fVar44;
          }
          *pfVar20 = fVar47;
        }
      }
    }
LAB_014b5f0e:
    pfVar36 = local_60;
    sVar32 = (size_t)in_R8;
    iVar37 = (int)(in_XMM5_Qa * param_2);
    fVar44 = (float)local_e8;
    if (param_5 != '\0') {
      lVar19 = FUN_00e83010();
      pfVar20 = local_68;
      _memcpy(in_RCX,(void *)(uVar39 * 4),sVar32);
      fVar47 = DAT_0239426c;
      fVar44 = DAT_0239011c;
      if (0 < (longlong)uVar39) {
        iVar15 = (int)((double)(local_34 / (float)local_e8) + DAT_023942d0);
        uVar24 = 0;
        do {
          fVar51 = *(float *)(lVar19 + uVar24 * 4) * fVar44;
          pfVar20[uVar24] = fVar51;
          uVar18 = (uint)-iVar15 + uVar24;
          if (-1 < (int)uVar18) {
            fVar51 = fVar51 + *(float *)(lVar19 + (uVar18 & 0xffffffff) * 4) * fVar47;
            pfVar20[uVar24] = fVar51;
          }
          lVar28 = (longlong)(iVar15 + (int)uVar24);
          if (lVar28 < (longlong)uVar39) {
            pfVar20[uVar24] = fVar51 + *(float *)(lVar19 + lVar28 * 4) * fVar47;
          }
          uVar24 = uVar24 + 1;
        } while (uVar39 != uVar24);
      }
      FUN_00e83070();
      uVar24 = uVar39;
      fVar44 = (float)local_e8;
    }
    param_2 = param_1 / param_2;
    local_d8 = local_b4 - iVar37;
    local_d4 = iVar37 - local_b8;
    dVar45 = (double)(longlong)pfVar36;
    dVar56 = (double)fVar44;
    local_108 = local_68 + 7;
    local_110 = local_68 + 1;
    bVar14 = true;
    local_80 = 1;
    local_74 = 0.0;
    fVar47 = 0.0;
    local_54 = (float)CONCAT71((uint7)(uint3)((uint)local_d8 >> 8),1);
    local_c0 = 0;
    iVar15 = 0;
    local_60 = (float *)0x0;
    pfVar36 = local_68;
    local_100 = param_2;
    local_f8 = dVar45;
    local_f0 = dVar56;
    do {
      iVar40 = local_d4;
      if (bVar14) {
        iVar40 = local_d8;
      }
      fVar51 = local_34;
      if (0 < iVar40) {
        iVar29 = iVar37 - ((byte)~bVar14 & 1);
        local_70 = (double)CONCAT44(local_70._4_4_,local_34);
LAB_014b6190:
        do {
          uVar26 = _DAT_023945e0;
          fVar13 = DAT_02390124;
          fVar43 = fVar42;
          if ((local_res18 & 1) != 0) {
            local_54 = 0.0;
            fVar43 = DAT_0240e2e4;
          }
          fVar46 = (local_70._0_4_ / fVar43) / fVar44 + DAT_0239011c;
          uVar27 = (uint)((float)(int)fVar46 * DAT_02394298);
          pfVar20 = (float *)(ulonglong)uVar27;
          if ((int)uVar27 < 3) {
            pfVar20 = (float *)((longlong)&MACH_HEADER.magic + 2);
          }
          uVar27 = (int)(((double)iVar29 * param_2 - dVar45) / dVar56) -
                   (int)((ulonglong)pfVar20 >> 1);
          if ((int)uVar27 < 0) {
            uVar27 = 0;
          }
          uVar21 = uVar16 - (int)pfVar20;
          pfVar35 = pfVar20;
          if ((int)uVar21 < 0) {
            uVar21 = 0;
            pfVar35 = (float *)(uVar39 & 0xffffffff);
          }
          uVar24 = (ulonglong)(uVar27 + (int)pfVar20);
          if ((longlong)uVar24 <= (longlong)uVar39) {
            uVar21 = uVar27;
          }
          uVar18 = (ulonglong)uVar21;
          if ((longlong)uVar24 <= (longlong)uVar39) {
            pfVar35 = pfVar20;
          }
          pfVar33 = pfVar36 + uVar18;
          uVar27 = (uint)pfVar35;
          if ((int)uVar27 < 1) {
            fVar48 = 0.0;
          }
          else {
            if ((longlong)pfVar35 - 1U < 7) {
              auVar49 = ZEXT816(0);
              uVar24 = 0;
            }
            else {
              auVar49 = ZEXT816(0);
              uVar24 = 0;
              do {
                auVar49._0_4_ =
                     auVar49._0_4_ + local_108[uVar18 + (uVar24 - 7)] +
                     local_108[uVar18 + (uVar24 - 6)] + local_108[uVar18 + (uVar24 - 5)] +
                     local_108[uVar18 + (uVar24 - 4)] + local_108[uVar18 + (uVar24 - 3)] +
                     local_108[uVar18 + (uVar24 - 2)] + local_108[uVar18 + (uVar24 - 1)] +
                     local_108[uVar18 + uVar24];
                uVar24 = uVar24 + 8;
              } while ((uVar27 & 0xfffffff8) != uVar24);
            }
            if ((ulonglong)(uVar27 & 7) != 0) {
              uVar25 = 0;
              do {
                auVar49._0_4_ = auVar49._0_4_ + pfVar36[uVar24 + uVar18 + uVar25];
                uVar25 = uVar25 + 1;
              } while ((uVar27 & 7) != uVar25);
            }
            fVar48 = auVar49._0_4_ / (float)(int)uVar27;
            if (pfVar35 == (float *)((longlong)&MACH_HEADER.magic + 1)) {
              auVar53 = ZEXT816(0);
              pfVar20 = (float *)0x0;
LAB_014b6398:
              fVar48 = pfVar33[(longlong)pfVar20] - fVar48;
              auVar53._0_4_ =
                   auVar53._0_4_ +
                   (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ _DAT_023945e0) |
                          (uint)fVar48 & -(uint)(0.0 < fVar48));
            }
            else {
              auVar53 = ZEXT816(0);
              pfVar20 = (float *)0x0;
              do {
                fVar54 = local_110[(longlong)pfVar20 + (uVar18 - 1)] - fVar48;
                fVar50 = auVar53._0_4_;
                fVar55 = local_110[uVar18 + (longlong)pfVar20] - fVar48;
                auVar52._0_4_ = ~-(uint)(0.0 < fVar55) & ((uint)fVar55 ^ _DAT_023945e0);
                auVar52._4_4_ = _UNK_023945e4;
                auVar52._8_4_ = _UNK_023945e8;
                auVar52._12_4_ = _UNK_023945ec;
                auVar52 = auVar52 | ZEXT416((uint)fVar55 & -(uint)(0.0 < fVar55));
                auVar53._4_12_ = auVar52._4_12_;
                auVar53._0_4_ =
                     auVar52._0_4_ +
                     (float)(~-(uint)(0.0 < fVar54) & ((uint)fVar54 ^ _DAT_023945e0) |
                            (uint)fVar54 & -(uint)(0.0 < fVar54)) + fVar50;
                pfVar20 = (float *)((longlong)pfVar20 + 2);
              } while ((float *)(ulonglong)(uVar27 & 0xfffffffe) != pfVar20);
              if (((ulonglong)pfVar35 & 1) != 0) goto LAB_014b6398;
            }
            fVar48 = auVar53._0_4_;
          }
          uVar21 = (uint)fVar46;
          uVar24 = (ulonglong)uVar21;
          local_78 = 0.3333;
          if ((DAT_023d59b4 < fVar48 / (float)(int)uVar27) &&
             (pfVar20 = (float *)(ulonglong)(uVar21 * 2), (int)(uVar21 * 2) < (int)uVar27)) {
            uVar23 = (uint)((fVar43 * local_70._0_4_) / fVar44 + DAT_0239011c);
            fVar43 = DAT_02390124 / (fVar48 / (float)(int)uVar27);
            iVar34 = uVar27 - uVar21;
            if (iVar34 == 0 || (int)uVar27 < (int)uVar21) {
              fVar46 = 0.0;
            }
            else {
              pfVar20 = pfVar33 + (int)uVar21;
              fVar46 = 0.0;
              pfVar35 = pfVar33;
              iVar12 = iVar34;
              if ((uVar27 - uVar21 & 1) != 0) {
                fVar46 = *pfVar33 - *pfVar20;
                pfVar20 = pfVar20 + 1;
                fVar46 = (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ _DAT_023945e0) |
                                (uint)fVar46 & -(uint)(0.0 < fVar46)) + 0.0;
                pfVar35 = pfVar33 + 1;
                iVar12 = iVar34 + -1;
              }
              if (uVar27 != uVar21 + 1) {
                lVar19 = 0;
                do {
                  fVar48 = pfVar35[lVar19] - pfVar20[lVar19];
                  fVar50 = pfVar35[lVar19 + 1] - pfVar20[lVar19 + 1];
                  fVar46 = (float)(~-(uint)(0.0 < fVar50) & ((uint)fVar50 ^ _DAT_023945e0) |
                                  (uint)fVar50 & -(uint)(0.0 < fVar50)) +
                           (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ _DAT_023945e0) |
                                  (uint)fVar48 & -(uint)(0.0 < fVar48)) + fVar46;
                  lVar19 = lVar19 + 2;
                } while (iVar12 != (int)lVar19);
              }
            }
            fVar46 = DAT_02390124 - (fVar46 / (float)(iVar34 * 2)) * fVar43;
            uVar38 = uVar23 * 2;
            local_78 = fVar46;
            if (((int)uVar38 < (int)uVar27) && (uVar22 = uVar27 - uVar23, 0 < (int)uVar22)) {
              uVar21 = uVar23 - uVar21;
              iVar34 = 1;
              do {
                pfVar36 = pfVar33 + (int)uVar23;
                fVar48 = 0.0;
                pfVar20 = pfVar33;
                uVar38 = uVar22;
                if ((uVar22 & 1) != 0) {
                  fVar48 = *pfVar33 - *pfVar36;
                  pfVar36 = pfVar36 + 1;
                  fVar48 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ _DAT_023945e0) |
                                  (uint)fVar48 & -(uint)(0.0 < fVar48)) + 0.0;
                  pfVar20 = pfVar33 + 1;
                  uVar38 = uVar22 - 1;
                }
                if (uVar22 != 1) {
                  lVar19 = 0;
                  do {
                    fVar50 = pfVar20[lVar19] - pfVar36[lVar19];
                    fVar54 = pfVar20[lVar19 + 1] - pfVar36[lVar19 + 1];
                    fVar48 = (float)(~-(uint)(0.0 < fVar54) & ((uint)fVar54 ^ _DAT_023945e0) |
                                    (uint)fVar54 & -(uint)(0.0 < fVar54)) +
                             (float)(~-(uint)(0.0 < fVar50) & ((uint)fVar50 ^ _DAT_023945e0) |
                                    (uint)fVar50 & -(uint)(0.0 < fVar50)) + fVar48;
                    lVar19 = lVar19 + 2;
                  } while (uVar38 != (uint)lVar19);
                }
                fVar48 = DAT_02390124 - (fVar48 / (float)(int)(uVar22 * 2)) * fVar43;
                if (fVar46 < fVar48) {
                  iVar34 = -iVar34;
                  uVar24 = (ulonglong)uVar23;
                  fVar46 = fVar48;
                  local_78 = fVar48;
                }
                uVar38 = (uint)uVar24;
                pfVar36 = local_68;
                if ((int)uVar21 < 2) {
                  local_34 = (float)(int)uVar38 * fVar44;
                  local_70 = (double)CONCAT44(local_70._4_4_,local_34);
                  if ((((local_res18 & 1) == 0) && (3 < (int)uVar38)) &&
                     ((int)uVar38 < (int)(uVar27 - 3))) {
                    uVar18 = (ulonglong)(uVar38 - 2);
                    lVar19 = (longlong)(int)uVar27;
                    uVar24 = lVar19 - uVar18;
                    iVar34 = (int)uVar24;
                    if (uVar24 == 0 || lVar19 < (longlong)uVar18) {
                      fVar44 = 0.0;
                    }
                    else {
                      pfVar36 = pfVar33 + uVar18;
                      fVar44 = 0.0;
                      pfVar20 = pfVar33;
                      iVar12 = iVar34;
                      if ((uVar24 & 1) != 0) {
                        fVar44 = *pfVar33 - *pfVar36;
                        pfVar36 = pfVar36 + 1;
                        fVar44 = (float)(~-(uint)(0.0 < fVar44) & ((uint)fVar44 ^ _DAT_023945e0) |
                                        (uint)fVar44 & -(uint)(0.0 < fVar44)) + 0.0;
                        pfVar20 = pfVar33 + 1;
                        iVar12 = iVar34 + -1;
                      }
                      if (uVar27 + 1 != uVar38) {
                        lVar28 = 0;
                        do {
                          fVar46 = pfVar20[lVar28] - pfVar36[lVar28];
                          fVar48 = pfVar20[lVar28 + 1] - pfVar36[lVar28 + 1];
                          fVar44 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ _DAT_023945e0) |
                                          (uint)fVar48 & -(uint)(0.0 < fVar48)) +
                                   (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ _DAT_023945e0) |
                                          (uint)fVar46 & -(uint)(0.0 < fVar46)) + fVar44;
                          lVar28 = lVar28 + 2;
                        } while (iVar12 != (int)lVar28);
                      }
                    }
                    *pfVar17 = DAT_02390124 - (fVar44 / (float)(iVar34 * 2)) * fVar43;
                    lVar28 = uVar18 + 1;
                    uVar24 = lVar19 - lVar28;
                    iVar34 = (int)uVar24;
                    if (uVar24 == 0 || lVar19 < lVar28) {
                      fVar44 = 0.0;
                    }
                    else {
                      pfVar36 = pfVar33 + lVar28;
                      fVar44 = 0.0;
                      pfVar20 = pfVar33;
                      iVar12 = iVar34;
                      if ((uVar24 & 1) != 0) {
                        fVar44 = *pfVar33 - *pfVar36;
                        pfVar36 = pfVar36 + 1;
                        fVar44 = (float)(~-(uint)(0.0 < fVar44) & ((uint)fVar44 ^ uVar26) |
                                        (uint)fVar44 & -(uint)(0.0 < fVar44)) + 0.0;
                        pfVar20 = pfVar33 + 1;
                        iVar12 = iVar34 + -1;
                      }
                      if (uVar27 != uVar38) {
                        lVar28 = 0;
                        do {
                          fVar46 = pfVar20[lVar28] - pfVar36[lVar28];
                          fVar48 = pfVar20[lVar28 + 1] - pfVar36[lVar28 + 1];
                          fVar44 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ uVar26) |
                                          (uint)fVar48 & -(uint)(0.0 < fVar48)) +
                                   (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ uVar26) |
                                          (uint)fVar46 & -(uint)(0.0 < fVar46)) + fVar44;
                          lVar28 = lVar28 + 2;
                        } while (iVar12 != (int)lVar28);
                      }
                    }
                    pfVar17[1] = fVar13 - (fVar44 / (float)(iVar34 * 2)) * fVar43;
                    lVar28 = uVar18 + 2;
                    uVar24 = lVar19 - lVar28;
                    iVar34 = (int)uVar24;
                    if (uVar24 == 0 || lVar19 < lVar28) {
                      fVar44 = 0.0;
                    }
                    else {
                      pfVar36 = pfVar33 + lVar28;
                      fVar44 = 0.0;
                      pfVar20 = pfVar33;
                      iVar12 = iVar34;
                      if ((uVar24 & 1) != 0) {
                        fVar44 = *pfVar33 - *pfVar36;
                        pfVar36 = pfVar36 + 1;
                        fVar44 = (float)(~-(uint)(0.0 < fVar44) & ((uint)fVar44 ^ uVar26) |
                                        (uint)fVar44 & -(uint)(0.0 < fVar44)) + 0.0;
                        pfVar20 = pfVar33 + 1;
                        iVar12 = iVar34 + -1;
                      }
                      if (uVar27 != uVar38 + 1) {
                        lVar28 = 0;
                        do {
                          fVar46 = pfVar20[lVar28] - pfVar36[lVar28];
                          fVar48 = pfVar20[lVar28 + 1] - pfVar36[lVar28 + 1];
                          fVar44 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ uVar26) |
                                          (uint)fVar48 & -(uint)(0.0 < fVar48)) +
                                   (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ uVar26) |
                                          (uint)fVar46 & -(uint)(0.0 < fVar46)) + fVar44;
                          lVar28 = lVar28 + 2;
                        } while (iVar12 != (int)lVar28);
                      }
                    }
                    pfVar17[2] = fVar13 - (fVar44 / (float)(iVar34 * 2)) * fVar43;
                    lVar28 = uVar18 + 3;
                    uVar24 = lVar19 - lVar28;
                    iVar34 = (int)uVar24;
                    if (uVar24 == 0 || lVar19 < lVar28) {
                      fVar44 = 0.0;
                    }
                    else {
                      pfVar36 = pfVar33 + lVar28;
                      fVar44 = 0.0;
                      pfVar20 = pfVar33;
                      iVar12 = iVar34;
                      if ((uVar24 & 1) != 0) {
                        fVar44 = *pfVar33 - *pfVar36;
                        pfVar36 = pfVar36 + 1;
                        fVar44 = (float)(~-(uint)(0.0 < fVar44) & ((uint)fVar44 ^ uVar26) |
                                        (uint)fVar44 & -(uint)(0.0 < fVar44)) + 0.0;
                        pfVar20 = pfVar33 + 1;
                        iVar12 = iVar34 + -1;
                      }
                      if (uVar27 - 2 != uVar38) {
                        lVar28 = 0;
                        do {
                          fVar46 = pfVar20[lVar28] - pfVar36[lVar28];
                          fVar48 = pfVar20[lVar28 + 1] - pfVar36[lVar28 + 1];
                          fVar44 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ uVar26) |
                                          (uint)fVar48 & -(uint)(0.0 < fVar48)) +
                                   (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ uVar26) |
                                          (uint)fVar46 & -(uint)(0.0 < fVar46)) + fVar44;
                          lVar28 = lVar28 + 2;
                        } while (iVar12 != (int)lVar28);
                      }
                    }
                    pfVar17[3] = fVar13 - (fVar44 / (float)(iVar34 * 2)) * fVar43;
                    lVar28 = uVar18 + 4;
                    uVar24 = lVar19 - lVar28;
                    iVar34 = (int)uVar24;
                    if (uVar24 == 0 || lVar19 < lVar28) {
                      fVar44 = 0.0;
                    }
                    else {
                      pfVar36 = pfVar33 + lVar28;
                      fVar44 = 0.0;
                      iVar12 = iVar34;
                      if ((uVar24 & 1) != 0) {
                        fVar44 = *pfVar33;
                        pfVar33 = pfVar33 + 1;
                        fVar44 = fVar44 - *pfVar36;
                        pfVar36 = pfVar36 + 1;
                        fVar44 = (float)(~-(uint)(0.0 < fVar44) & ((uint)fVar44 ^ uVar26) |
                                        (uint)fVar44 & -(uint)(0.0 < fVar44)) + 0.0;
                        iVar12 = iVar34 + -1;
                      }
                      if (uVar27 - 3 != uVar38) {
                        lVar19 = 0;
                        do {
                          fVar46 = pfVar33[lVar19] - pfVar36[lVar19];
                          fVar48 = pfVar33[lVar19 + 1] - pfVar36[lVar19 + 1];
                          fVar44 = (float)(~-(uint)(0.0 < fVar48) & ((uint)fVar48 ^ uVar26) |
                                          (uint)fVar48 & -(uint)(0.0 < fVar48)) +
                                   (float)(~-(uint)(0.0 < fVar46) & ((uint)fVar46 ^ uVar26) |
                                          (uint)fVar46 & -(uint)(0.0 < fVar46)) + fVar44;
                          lVar19 = lVar19 + 2;
                        } while (iVar12 != (int)lVar19);
                      }
                    }
                    pfVar17[4] = fVar13 - fVar43 * (fVar44 / (float)(iVar34 * 2));
                    uVar24 = (ulonglong)(uVar38 + 3);
                    pfVar20 = (float *)FUN_00e83930(&local_78,2);
                    local_34 = ((float)(int)(uVar38 - 2) + extraout_XMM0_Da) * (float)local_e8;
                    fVar44 = (float)local_e8;
                    param_2 = local_100;
                    dVar45 = local_f8;
                    dVar56 = local_f0;
                    pfVar36 = local_68;
                  }
                  else {
                    uVar24 = (ulonglong)uVar23;
                  }
                  goto joined_r0x014b6d6c;
                }
                uVar21 = (uVar21 >> 1) + (uVar21 & 1);
                uVar23 = iVar34 * uVar21 + uVar38;
                uVar38 = uVar23 * 2;
              } while (((int)uVar38 < (int)uVar27) && (uVar22 = uVar27 - uVar23, 0 < (int)uVar22));
            }
            uVar24 = (ulonglong)uVar23;
            pfVar20 = (float *)(ulonglong)uVar38;
          }
joined_r0x014b6d6c:
          iVar34 = iVar15;
          if ((local_res18 & 1) != 0) {
            iVar34 = (int)uVar24;
            if ((((int)local_60 != 0) && (iVar34 == iVar15)) ||
               ((3 < (int)local_60 &&
                (pfVar20 = (float *)(ulonglong)(uint)(iVar34 - iVar15),
                (iVar15 - local_c0) * (iVar34 - iVar15) < 0)))) {
              local_54 = (float)CONCAT71((int7)((ulonglong)pfVar20 >> 8),1);
              local_res18 = 0;
            }
            uVar26 = (int)local_60 + 1;
            bVar14 = 6 < (int)local_60;
            local_c0 = iVar15;
            local_60 = (float *)(ulonglong)uVar26;
            if ((local_res18 & bVar14) != 0) {
              iVar40 = 0;
              local_80 = -1;
            }
          }
          iVar15 = iVar34;
          if (((local_res18 & 1) == 0) && (((uint)local_54 & 1) != 0)) {
            fVar43 = local_70._0_4_;
            if (iVar29 != iVar37) {
              fVar43 = fVar51;
            }
            fVar51 = fVar43;
            fVar43 = local_78;
            if (local_78 < DAT_023d59b4) {
              local_78 = 0.0001;
              fVar43 = DAT_023d59b4;
            }
            uVar26 = iVar29 - in_R9D;
            if ((-1 < (int)uVar26) && ((int)uVar26 < local_res8)) {
              local_c8[uVar26] = local_bc * local_34;
              *(float *)(local_d0 + (ulonglong)uVar26 * 4) = fVar43;
            }
            fVar47 = fVar47 + local_34 * fVar43;
            local_74 = local_74 + fVar43;
            iVar29 = iVar29 + local_80;
            iVar40 = iVar40 + -1;
            if (iVar40 == 0) break;
            goto LAB_014b6190;
          }
        } while (iVar40 != 0);
      }
      bVar14 = false;
      bVar41 = local_80 != -1;
      local_80 = -1;
      local_34 = fVar51;
    } while (bVar41);
    if ((0.0 < fVar47) && (0.0 < local_74)) {
      *local_res20 = (float)(param_1 / (double)((local_bc * fVar47) / local_74));
    }
    uVar24 = CONCAT71((int7)(uVar24 >> 8),1);
    iVar37 = local_b4;
    uVar26 = local_b8;
    if (((uint)local_54 & 1) != 0) goto LAB_014b6e3e;
  }
  if (iVar37 - uVar26 != 0 && (int)uVar26 <= iVar37) {
    fVar44 = (float)(param_1 / (double)*local_res20);
    uVar16 = ~uVar26;
    if ((iVar37 - uVar26 & 1) != 0) {
      uVar27 = uVar26 - in_R9D;
      if ((-1 < (int)uVar27) && ((int)uVar27 < local_res8)) {
        local_c8[uVar27] = fVar44;
        *(undefined4 *)(local_d0 + (ulonglong)uVar27 * 4) = 0x358637bd;
      }
      uVar26 = uVar26 + 1;
    }
    if (uVar16 + iVar37 != 0) {
      iVar37 = iVar37 - uVar26;
      uVar26 = uVar26 - in_R9D;
      do {
        if ((-1 < (int)uVar26) && ((int)uVar26 < local_res8)) {
          local_c8[uVar26] = fVar44;
          *(undefined4 *)(local_d0 + (ulonglong)uVar26 * 4) = 0x358637bd;
        }
        uVar16 = uVar26 + 1;
        if ((-1 < (int)uVar16) && ((int)uVar16 < local_res8)) {
          local_c8[uVar16] = fVar44;
          *(undefined4 *)(local_d0 + (ulonglong)uVar16 * 4) = 0x358637bd;
        }
        uVar26 = uVar26 + 2;
        iVar37 = iVar37 + -2;
      } while (iVar37 != 0);
    }
  }
  uVar24 = 0;
LAB_014b6e3e:
  if (pfVar36 != (float *)0x0) {
    FUN_00e83070();
  }
  if (pfVar17 != (float *)0x0) {
    FUN_00e83070();
  }
  return uVar24 & 0xffffffff;
}


