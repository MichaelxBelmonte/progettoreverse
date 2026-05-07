// Function: FUN_01879680
// Address: 01879680
// Size: 7188 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0187b14c) */
/* WARNING: Removing unreachable block (ram,0x0187b159) */
/* WARNING: Removing unreachable block (ram,0x0187ad1c) */
/* WARNING: Removing unreachable block (ram,0x0187ad25) */
/* WARNING: Removing unreachable block (ram,0x0187b1d0) */
/* WARNING: Removing unreachable block (ram,0x0187b1d9) */
/* WARNING: Removing unreachable block (ram,0x01879e56) */
/* WARNING: Removing unreachable block (ram,0x01879e63) */
/* WARNING: Removing unreachable block (ram,0x01879760) */
/* WARNING: Removing unreachable block (ram,0x01879769) */
/* WARNING: Removing unreachable block (ram,0x018796f1) */
/* WARNING: Removing unreachable block (ram,0x018796fa) */
/* WARNING: Removing unreachable block (ram,0x01879b38) */
/* WARNING: Removing unreachable block (ram,0x01879b41) */
/* WARNING: Removing unreachable block (ram,0x0187a988) */
/* WARNING: Removing unreachable block (ram,0x0187a991) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01879680(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  undefined1 (*pauVar12) [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  void *pvVar26;
  bool bVar27;
  longlong *unaff_RSI;
  longlong lVar28;
  undefined8 *unaff_RDI;
  ulonglong uVar29;
  size_t sVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  byte local_res8;
  undefined8 local_160;
  undefined1 local_158;
  undefined1 local_148;
  undefined1 local_138;
  undefined8 *local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  float *local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  char local_c0;
  longlong local_50;
  char local_48;
  
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  uVar3 = *(uint *)(*param_3 + 0x18);
  uVar14 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar14 = uVar3;
  }
  pvVar26 = (void *)(ulonglong)uVar14;
  plVar21 = param_3;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  sVar30 = (size_t)plVar21;
  lVar18 = *unaff_RSI;
  if (0 < *(int *)(lVar18 + 0xc)) {
    lVar32 = 0;
    do {
      lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x10) + lVar32 * 8);
      if (lVar18 != 0) {
        FUN_00d50b00();
      }
      lVar19 = *(longlong *)(*param_3 + 0x10);
      if (*(int *)(lVar18 + 0x10) < (int)uVar14 >> 3) {
        iVar17 = *(int *)(lVar19 + (longlong)*(int *)(lVar18 + 0x10) * 8);
      }
      else {
        uVar40 = *(undefined8 *)((longlong)*(int *)(*param_3 + 0x18) + -8 + lVar19);
        iVar17 = (int)((ulonglong)uVar40 >> 0x20) + (int)uVar40;
      }
      iVar4 = *(int *)(lVar19 + (longlong)*(int *)(lVar18 + 0xc) * 8);
      lVar19 = (longlong)iVar4;
      iVar5 = *(int *)(*param_2 + 0xc);
      if (iVar5 < iVar17) {
        iVar17 = iVar5;
      }
      if (iVar4 < iVar17) {
        plVar21 = *(longlong **)(*param_2 + 0x10);
        pfVar6 = *(float **)(local_50 + 0x10);
        lVar28 = *param_1;
        if (lVar28 == 0) {
          fVar38 = *pfVar6;
          fVar47 = pfVar6[1];
          fVar39 = pfVar6[2];
          fVar42 = pfVar6[3];
          fVar46 = pfVar6[4];
          fVar48 = pfVar6[5];
          fVar49 = pfVar6[6];
          fVar50 = pfVar6[7];
          fVar36 = pfVar6[8];
          fVar41 = pfVar6[9];
          fVar43 = pfVar6[10];
          fVar45 = pfVar6[0xb];
          do {
            pfVar7 = *(float **)(plVar21[lVar19] + 0x10);
            fVar38 = fVar38 + *pfVar7;
            *pfVar6 = fVar38;
            fVar47 = fVar47 + pfVar7[1];
            pfVar6[1] = fVar47;
            fVar39 = fVar39 + pfVar7[2];
            pfVar6[2] = fVar39;
            fVar42 = fVar42 + pfVar7[3];
            pfVar6[3] = fVar42;
            fVar46 = fVar46 + pfVar7[4];
            pfVar6[4] = fVar46;
            fVar48 = fVar48 + pfVar7[5];
            pfVar6[5] = fVar48;
            fVar49 = fVar49 + pfVar7[6];
            pfVar6[6] = fVar49;
            fVar50 = fVar50 + pfVar7[7];
            pfVar6[7] = fVar50;
            fVar36 = fVar36 + pfVar7[8];
            pfVar6[8] = fVar36;
            fVar41 = fVar41 + pfVar7[9];
            pfVar6[9] = fVar41;
            fVar43 = fVar43 + pfVar7[10];
            pfVar6[10] = fVar43;
            fVar45 = fVar45 + pfVar7[0xb];
            pfVar6[0xb] = fVar45;
            lVar19 = lVar19 + 1;
          } while (iVar17 != lVar19);
        }
        else {
          pfVar7 = *(float **)(local_50 + 0x10);
          lVar8 = *(longlong *)(lVar28 + 0x10);
          while( true ) {
            pfVar9 = *(float **)(plVar21[lVar19] + 0x10);
            *pfVar6 = *pfVar9 + *pfVar6;
            pfVar10 = *(float **)(*(longlong *)(*(longlong *)(lVar28 + 0x10) + lVar19 * 8) + 0x10);
            *pfVar7 = *pfVar10 + *pfVar7;
            pfVar6[1] = pfVar9[1] + pfVar6[1];
            pfVar7[1] = pfVar10[1] + pfVar7[1];
            pfVar6[2] = pfVar9[2] + pfVar6[2];
            pfVar7[2] = pfVar10[2] + pfVar7[2];
            pfVar6[3] = pfVar9[3] + pfVar6[3];
            pfVar7[3] = pfVar10[3] + pfVar7[3];
            pfVar6[4] = pfVar9[4] + pfVar6[4];
            pfVar7[4] = pfVar10[4] + pfVar7[4];
            pfVar6[5] = pfVar9[5] + pfVar6[5];
            pfVar7[5] = pfVar10[5] + pfVar7[5];
            pfVar6[6] = pfVar9[6] + pfVar6[6];
            pfVar7[6] = pfVar10[6] + pfVar7[6];
            pfVar6[7] = pfVar9[7] + pfVar6[7];
            lVar28 = *(longlong *)(*(longlong *)(lVar8 + lVar19 * 8) + 0x10);
            pfVar7[7] = *(float *)(lVar28 + 0x1c) + pfVar7[7];
            pfVar6[8] = pfVar9[8] + pfVar6[8];
            pfVar7[8] = *(float *)(lVar28 + 0x20) + pfVar7[8];
            pfVar6[9] = pfVar9[9] + pfVar6[9];
            pfVar7[9] = *(float *)(lVar28 + 0x24) + pfVar7[9];
            pfVar6[10] = pfVar9[10] + pfVar6[10];
            pfVar7[10] = *(float *)(lVar28 + 0x28) + pfVar7[10];
            pfVar6[0xb] = pfVar9[0xb] + pfVar6[0xb];
            pfVar7[0xb] = *(float *)(lVar28 + 0x2c) + pfVar7[0xb];
            if ((longlong)iVar17 + -1 == lVar19) break;
            lVar28 = *param_1;
            lVar19 = lVar19 + 1;
          }
        }
      }
      if (lVar18 != 0) {
        FUN_00d50b20();
      }
      sVar30 = (size_t)plVar21;
      lVar32 = lVar32 + 1;
      lVar18 = *unaff_RSI;
      pvVar26 = (void *)(longlong)*(int *)(lVar18 + 0xc);
    } while (lVar32 < (longlong)pvVar26);
  }
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_50 + 0x18)) {
    _memset_pattern16(pvVar26,(void *)((ulonglong)((*(uint *)(local_50 + 0x18) >> 2) - 1) * 4 + 4),
                      sVar30);
  }
  lVar18 = DAT_027df658;
  if (*param_1 != 0) {
    if (DAT_027df658 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar18;
    local_f0 = '\x01';
    FUN_018d9a10();
    FUN_018d9740();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_c0 != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    puVar20 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar20 = &DAT_025683c0;
    (*DAT_025683d8)();
    FUN_00c92170();
    uVar40 = FUN_00c92160();
    local_160 = 0;
    local_158 = 0;
    FUN_0187b830(uVar40,&local_160);
    piVar11 = (int *)puVar20[2];
    iVar17 = *piVar11;
    lVar18 = *(longlong *)(local_50 + 0x10);
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[1];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[2];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[3];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[4];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[5];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    iVar17 = piVar11[6];
    uVar37 = _powf();
    *(undefined4 *)(lVar18 + (longlong)iVar17 * 4) = uVar37;
    *(undefined4 *)(lVar18 + (longlong)piVar11[7] * 4) = 0;
    *(undefined4 *)(lVar18 + (longlong)piVar11[8] * 4) = 0;
    *(undefined4 *)(lVar18 + (longlong)piVar11[9] * 4) = 0;
    *(undefined4 *)(lVar18 + (longlong)piVar11[10] * 4) = 0;
    *(undefined4 *)(lVar18 + (longlong)piVar11[0xb] * 4) = 0;
    ___bzero();
    if ((int)*(uint *)(local_50 + 0x18) < 4) {
      local_110 = *(float **)(local_50 + 0x10);
    }
    else {
      uVar3 = *(uint *)(local_50 + 0x18) >> 2;
      uVar31 = (ulonglong)uVar3;
      lVar18 = *(longlong *)(local_50 + 0x10);
      lVar32 = *(longlong *)(local_50 + 0x10);
      local_110 = *(float **)(local_50 + 0x10);
      fVar38 = *local_110;
      if (uVar3 == 1) {
        uVar29 = 0;
      }
      else {
        sVar30 = uVar3 & 0xfffffffe;
        uVar29 = 0;
        do {
          iVar17 = *(int *)(lVar18 + uVar29 * 4);
          iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc
          ;
          fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) *
                                                4);
          *local_110 = fVar38;
          iVar17 = *(int *)(lVar18 + 4 + uVar29 * 4);
          iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc
          ;
          fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) *
                                                4);
          *local_110 = fVar38;
          uVar29 = uVar29 + 2;
        } while (sVar30 != uVar29);
      }
      if ((uVar3 & 1) != 0) {
        iVar17 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
        *local_110 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17)
                                                  * 4);
      }
      fVar38 = local_110[1];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 1;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 1;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[1] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[2];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 2;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 2;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[2] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[3];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 3;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 3;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[3] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[4];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 4;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 4;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[4] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[5];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 5;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 5;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[5] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[6];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 6;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 6;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[6] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[7];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 7;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 7;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[7] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[8];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 8;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 8;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[8] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[9];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 9;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 9;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[9] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[10];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 10;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 10;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[10] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[0xb];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 0xb;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 0xb;
        fVar38 = fVar38 + *(float *)(lVar32 + (longlong)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[0xb] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
    }
    FUN_015b3230();
    uVar15 = DAT_023b3e04;
    fVar38 = DAT_02394270;
    uVar3 = _DAT_02390140;
    lVar18 = *(longlong *)(local_50 + 0x10);
    lVar32 = 0;
    bVar25 = false;
    do {
      fVar47 = *(float *)(lVar18 + lVar32 * 4);
      uVar35 = -(uint)(fVar47 <= fVar38);
      fVar47 = (float)(uVar35 & uVar15 | ~uVar35 & (uint)SQRT(fVar47) & uVar3);
      *(float *)(lVar18 + lVar32 * 4) = fVar47;
      bVar27 = true;
      if (fVar47 <= 0.0) {
        bVar27 = bVar25;
      }
      lVar32 = lVar32 + 1;
      bVar25 = bVar27;
    } while (lVar32 != 0xc);
    if ((!bVar27) && (3 < (int)*(uint *)(local_50 + 0x18))) {
      _memset_pattern16((void *)0x0,
                        (void *)((ulonglong)((*(uint *)(local_50 + 0x18) >> 2) - 1) * 4 + 4),sVar30)
      ;
    }
    if (puVar20 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
  }
  local_108 = *(undefined8 *)(local_50 + 0x10);
  FUN_015b3230();
  pfVar6 = *(float **)(local_50 + 0x10);
  fVar38 = *pfVar6;
  if (DAT_02394254 <= fVar38) {
    fVar38 = pfVar6[1];
    if (fVar38 < DAT_02394254) goto LAB_0187a662;
LAB_0187a48a:
    fVar38 = pfVar6[2];
    if (fVar38 < DAT_02394254) goto LAB_0187a4a0;
LAB_0187a6a5:
    fVar38 = pfVar6[3];
    if (fVar38 < DAT_02394254) goto LAB_0187a6bb;
LAB_0187a4e3:
    fVar38 = pfVar6[4];
    if (fVar38 < DAT_02394254) goto LAB_0187a4f9;
LAB_0187a6fe:
    fVar38 = pfVar6[5];
    if (fVar38 < DAT_02394254) goto LAB_0187a714;
LAB_0187a53c:
    fVar38 = pfVar6[6];
    if (fVar38 < DAT_02394254) goto LAB_0187a552;
LAB_0187a757:
    fVar38 = pfVar6[7];
    if (fVar38 < DAT_02394254) goto LAB_0187a76d;
LAB_0187a595:
    fVar38 = pfVar6[8];
    if (fVar38 < DAT_02394254) goto LAB_0187a5ab;
LAB_0187a7b0:
    fVar38 = pfVar6[9];
    if (fVar38 < DAT_02394254) goto LAB_0187a7c6;
LAB_0187a5ee:
    fVar38 = pfVar6[10];
    if (fVar38 < DAT_02394254) goto LAB_0187a604;
LAB_0187a809:
    fVar38 = pfVar6[0xb];
    if (fVar38 < DAT_02394254) goto LAB_0187a81b;
  }
  else {
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    *pfVar6 = fVar47;
    fVar38 = pfVar6[1];
    if (DAT_02394254 <= fVar38) goto LAB_0187a48a;
LAB_0187a662:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[1] = fVar47;
    fVar38 = pfVar6[2];
    if (DAT_02394254 <= fVar38) goto LAB_0187a6a5;
LAB_0187a4a0:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[2] = fVar47;
    fVar38 = pfVar6[3];
    if (DAT_02394254 <= fVar38) goto LAB_0187a4e3;
LAB_0187a6bb:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[3] = fVar47;
    fVar38 = pfVar6[4];
    if (DAT_02394254 <= fVar38) goto LAB_0187a6fe;
LAB_0187a4f9:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[4] = fVar47;
    fVar38 = pfVar6[5];
    if (DAT_02394254 <= fVar38) goto LAB_0187a53c;
LAB_0187a714:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[5] = fVar47;
    fVar38 = pfVar6[6];
    if (DAT_02394254 <= fVar38) goto LAB_0187a757;
LAB_0187a552:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[6] = fVar47;
    fVar38 = pfVar6[7];
    if (DAT_02394254 <= fVar38) goto LAB_0187a595;
LAB_0187a76d:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[7] = fVar47;
    fVar38 = pfVar6[8];
    if (DAT_02394254 <= fVar38) goto LAB_0187a7b0;
LAB_0187a5ab:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[8] = fVar47;
    fVar38 = pfVar6[9];
    if (DAT_02394254 <= fVar38) goto LAB_0187a5ee;
LAB_0187a7c6:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[9] = fVar47;
    fVar38 = pfVar6[10];
    if (DAT_02394254 <= fVar38) goto LAB_0187a809;
LAB_0187a604:
    fVar47 = 0.0;
    if (DAT_02394588 <= fVar38) {
      fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
    }
    pfVar6[10] = fVar47;
    fVar38 = pfVar6[0xb];
    if (fVar38 < DAT_02394254) {
LAB_0187a81b:
      fVar47 = 0.0;
      if (DAT_02394588 <= fVar38) {
        fVar47 = ((DAT_02417228 + fVar38) / DAT_02394588) * fVar38;
      }
      pfVar6[0xb] = fVar47;
    }
  }
  pauVar12 = *(undefined1 (**) [16])(local_50 + 0x10);
  auVar44 = *pauVar12;
  auVar1 = pauVar12[1];
  auVar2 = pauVar12[2];
  fVar38 = auVar2._12_4_ +
           auVar2._4_4_ +
           auVar1._12_4_ +
           auVar1._4_4_ +
           auVar44._12_4_ + auVar44._4_4_ + DAT_02394274 + auVar44._0_4_ + *(float *)(*pauVar12 + 8)
           + auVar1._0_4_ + *(float *)(pauVar12[1] + 8) + auVar2._0_4_ + *(float *)(pauVar12[2] + 8)
  ;
  auVar13._4_4_ = fVar38;
  auVar13._0_4_ = fVar38;
  auVar13._8_4_ = fVar38;
  auVar13._12_4_ = fVar38;
  auVar44 = divps(auVar44,auVar13);
  *pauVar12 = auVar44;
  auVar44._4_4_ = fVar38;
  auVar44._0_4_ = fVar38;
  auVar44._8_4_ = fVar38;
  auVar44._12_4_ = fVar38;
  auVar44 = divps(auVar1,auVar44);
  pauVar12[1] = auVar44;
  auVar1._4_4_ = fVar38;
  auVar1._0_4_ = fVar38;
  auVar1._8_4_ = fVar38;
  auVar1._12_4_ = fVar38;
  auVar44 = divps(auVar2,auVar1);
  pauVar12[2] = auVar44;
  if (param_4 == '\0') {
    plVar21 = (longlong *)**(undefined8 **)(*unaff_RSI + 0x10);
    if (plVar21 == (longlong *)0x0) {
      bVar25 = true;
      plVar21 = (longlong *)0x0;
      goto LAB_0187a91a;
    }
    FUN_00d50b00();
  }
  else {
    plVar21 = (longlong *)FUN_0187cb40();
    (**(code **)(*plVar21 + 0x18))();
    *(undefined4 *)((longlong)plVar21 + 0xc) = 0;
    *(int *)(plVar21 + 2) = (int)uVar14 >> 3;
  }
  bVar25 = false;
LAB_0187a91a:
  puVar20 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar20 = &DAT_025f0d98;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[6] = 0;
  puVar20[7] = 0;
  (*DAT_025f0db0)();
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar22 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar22 = &DAT_02572358;
  pcVar16 = DAT_02572370;
  (*DAT_02572370)();
  local_148 = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = puVar22;
  FUN_0185cc90(&local_120,&local_130,0);
  local_e8 = local_50;
  local_e0 = '\0';
  FUN_018793e0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_100 = *(undefined8 *)(local_50 + 0x10);
  local_d0 = '\0';
  local_d8 = puVar20;
  fVar38 = (float)FUN_015b3700(3,&local_c8,&local_d8,0);
  if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  fVar47 = DAT_02394254;
  if (DAT_02394254 <= fVar38 + DAT_0239458c) {
    fVar47 = fVar38 + DAT_0239458c;
  }
  *(undefined4 *)(plVar21 + 6) = local_c8;
  *(float *)((longlong)plVar21 + 0x34) = fVar47;
  lVar18 = plVar21[5];
  if (lVar18 != local_50) {
    FUN_00d50b00();
    plVar21[5] = local_50;
    if (lVar18 != 0) {
      FUN_00d50b20();
    }
  }
  lVar18 = plVar21[4];
  if (lVar18 != local_50) {
    FUN_00d50b00();
    plVar21[4] = local_50;
    if (lVar18 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  if (local_res8 == 0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    puVar23 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &DAT_02572358;
    (*pcVar16)();
  }
  fVar38 = 0.0;
  uVar33 = 0;
  uVar31 = 0;
  uVar29 = 0;
  do {
    fVar47 = *(float *)(*(longlong *)(local_50 + 0x10) + uVar33 * 4) *
             *(float *)(*(longlong *)(local_50 + 0x10) + uVar33 * 4) * DAT_0239426c;
    if (DAT_02394254 <= fVar47) {
      lVar18 = *(longlong *)(puVar22[2] + uVar33 * 8);
      if (lVar18 != 0) {
        FUN_00d50b00();
      }
      if (puVar23 == (undefined8 *)0x0) {
        pfVar6 = *(float **)(lVar18 + 0x10);
        if (DAT_02394254 <= *pfVar6) {
          fVar39 = *pfVar6 * fVar47;
          if (fVar38 < fVar39) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 0;
            fVar38 = fVar39;
          }
          fVar39 = pfVar6[1];
          if (DAT_02394254 <= fVar39) goto LAB_0187ae93;
LAB_0187ad79:
          fVar39 = pfVar6[2];
          if (fVar39 < DAT_02394254) goto LAB_0187ad8f;
LAB_0187aecc:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 2;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[3];
          if (DAT_02394254 <= fVar39) goto LAB_0187af05;
LAB_0187ada5:
          fVar39 = pfVar6[4];
          if (fVar39 < DAT_02394254) goto LAB_0187adbb;
LAB_0187af3e:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 4;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[5];
          if (DAT_02394254 <= fVar39) goto LAB_0187af77;
LAB_0187add1:
          fVar39 = pfVar6[6];
          if (fVar39 < DAT_02394254) goto LAB_0187ade7;
LAB_0187afb0:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 6;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[7];
          if (DAT_02394254 <= fVar39) goto LAB_0187afe9;
LAB_0187adfd:
          fVar39 = pfVar6[8];
          if (fVar39 < DAT_02394254) goto LAB_0187ae13;
LAB_0187b022:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 8;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[9];
          if (DAT_02394254 <= fVar39) goto LAB_0187b05b;
LAB_0187ae29:
          fVar39 = pfVar6[10];
          if (fVar39 < DAT_02394254) goto LAB_0187ae3f;
LAB_0187b094:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 10;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[0xb];
        }
        else {
          fVar39 = pfVar6[1];
          if (fVar39 < DAT_02394254) goto LAB_0187ad79;
LAB_0187ae93:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 1;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[2];
          if (DAT_02394254 <= fVar39) goto LAB_0187aecc;
LAB_0187ad8f:
          fVar39 = pfVar6[3];
          if (fVar39 < DAT_02394254) goto LAB_0187ada5;
LAB_0187af05:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 3;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[4];
          if (DAT_02394254 <= fVar39) goto LAB_0187af3e;
LAB_0187adbb:
          fVar39 = pfVar6[5];
          if (fVar39 < DAT_02394254) goto LAB_0187add1;
LAB_0187af77:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 5;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[6];
          if (DAT_02394254 <= fVar39) goto LAB_0187afb0;
LAB_0187ade7:
          fVar39 = pfVar6[7];
          if (fVar39 < DAT_02394254) goto LAB_0187adfd;
LAB_0187afe9:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 7;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[8];
          if (DAT_02394254 <= fVar39) goto LAB_0187b022;
LAB_0187ae13:
          fVar39 = pfVar6[9];
          if (fVar39 < DAT_02394254) goto LAB_0187ae29;
LAB_0187b05b:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 9;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[10];
          if (DAT_02394254 <= fVar39) goto LAB_0187b094;
LAB_0187ae3f:
          fVar39 = pfVar6[0xb];
        }
        if ((DAT_02394254 <= fVar39) && (fVar38 < fVar47 * fVar39)) {
          uVar29 = uVar33 & 0xffffffff;
          uVar31 = 0xb;
          fVar38 = fVar47 * fVar39;
        }
      }
      else {
        uVar34 = 0;
        do {
          fVar39 = *(float *)(*(longlong *)(lVar18 + 0x10) + uVar34 * 4);
          fVar42 = fVar38;
          if (DAT_02394254 <= fVar39) {
            fVar42 = fVar39 * fVar47;
            if (fVar38 < fVar42) {
              uVar29 = uVar33 & 0xffffffff;
              uVar31 = uVar34 & 0xffffffff;
            }
            puVar24 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar24 = &DAT_0260d210;
            *(undefined8 *)((longlong)puVar24 + 0xc) = 0;
            *(undefined8 *)((longlong)puVar24 + 0x14) = 0;
            FUN_00d500e0();
            *(int *)((longlong)puVar24 + 0xc) = (int)uVar33;
            *(int *)(puVar24 + 2) = (int)uVar34;
            *(float *)((longlong)puVar24 + 0x14) = fVar42;
            FUN_00d21140();
            FUN_00d50b20();
            if (fVar42 <= fVar38) {
              fVar42 = fVar38;
            }
          }
          fVar38 = fVar42;
          uVar34 = uVar34 + 1;
        } while (uVar34 != 0xc);
      }
      FUN_00d50b20();
    }
    uVar33 = uVar33 + 1;
    if (uVar33 == 0xc) {
      if ((puVar23 == (undefined8 *)0x0 || (local_res8 ^ 1) != 0) ||
         (*(int *)((longlong)puVar23 + 0xc) == 0)) {
        puVar24 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar24 = &DAT_0260d210;
        *(undefined8 *)((longlong)puVar24 + 0xc) = 0;
        *(undefined8 *)((longlong)puVar24 + 0x14) = 0;
        FUN_00d500e0();
        *(int *)((longlong)puVar24 + 0xc) = (int)uVar29;
        *(int *)(puVar24 + 2) = (int)uVar31;
        *(float *)((longlong)puVar24 + 0x14) = fVar38;
        FUN_00d21140();
        FUN_00d50b20();
      }
      else {
        uVar40 = FUN_00d242c0();
        FUN_00d214d0(uVar40,*(undefined4 *)(plVar21[3] + 0xc));
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (bVar25) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar21;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (puVar23 != (undefined8 *)0x0 && (local_res8 ^ 1) == 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if (puVar22 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if (puVar20 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
  } while( true );
}


