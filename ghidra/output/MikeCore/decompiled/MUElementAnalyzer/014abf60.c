// Function: FUN_014abf60
// Address: 014abf60
// Size: 5325 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x014ad49f) */
/* WARNING: Removing unreachable block (ram,0x014ad1d2) */
/* WARNING: Removing unreachable block (ram,0x014ad050) */
/* WARNING: Removing unreachable block (ram,0x014ad48e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014abf60(double param_1,float param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  longlong lVar27;
  int iVar28;
  ulonglong in_RCX;
  ulonglong uVar29;
  double in_RDX;
  char *pcVar30;
  float *pfVar31;
  longlong unaff_RSI;
  longlong lVar32;
  longlong unaff_RDI;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  int iVar38;
  int iVar39;
  longlong lVar40;
  float fVar41;
  float fVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  longlong *local_res8;
  char local_d0;
  undefined7 uStack_cf;
  char local_c8;
  ulonglong local_c0;
  int local_b4;
  double local_b0;
  float local_a4;
  ulonglong local_a0;
  longlong local_98;
  int local_8c;
  longlong local_70;
  char local_68 [8];
  undefined8 local_60;
  double local_58;
  longlong local_40;
  
  local_b0 = in_RDX;
  local_58 = param_1;
  puVar24 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = &DAT_02572358;
  (*DAT_02572370)();
  if (unaff_RDI == 0) {
    local_60 = 0;
    local_a0 = in_RCX;
    lVar40 = FUN_00e83010();
    lVar33 = *local_res8;
    in_RCX = local_a0;
  }
  else {
    lVar33 = *local_res8;
    lVar40 = unaff_RDI;
  }
  if (lVar33 == 0) {
    puVar25 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar25 = &DAT_025f0d98;
    puVar25[2] = 0;
    puVar25[3] = 0;
    puVar25[4] = 0;
    puVar25[5] = 0;
    puVar25[6] = 0;
    puVar25[7] = 0;
    (*DAT_025f0db0)();
    puVar3 = (undefined8 *)*local_res8;
    if (puVar3 == puVar25) {
      if ((char)local_res8[1] != '\0') {
        FUN_00d50b20();
        goto LAB_014ac09b;
      }
    }
    else {
      *local_res8 = (longlong)puVar25;
      if (((char)local_res8[1] != '\0') && (puVar3 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(local_res8 + 1) = 1;
  }
LAB_014ac09b:
  uVar46 = _UNK_0239014c;
  uVar45 = _UNK_02390148;
  uVar44 = _UNK_02390144;
  uVar43 = _DAT_02390140;
  dVar4 = local_58 / DAT_0240f0f0;
  local_98 = (longlong)(int)param_3;
  if ((int)param_3 < (int)param_4) {
    uVar37 = (int)param_4 - local_98;
    lVar33 = local_98;
    if (7 < uVar37) {
      uVar29 = uVar37 & 0xfffffffffffffff8;
      uVar36 = (uVar29 - 8 >> 3) + 1;
      if (uVar29 - 8 == 0) {
        lVar33 = 0;
LAB_014ac162:
        lVar33 = lVar33 + local_98;
        puVar2 = (uint *)(unaff_RSI + lVar33 * 4);
        puVar1 = (uint *)(unaff_RSI + 0x10 + lVar33 * 4);
        uVar43 = puVar2[1] & _UNK_02390144;
        uVar44 = puVar2[2] & _UNK_02390148;
        uVar45 = puVar2[3] & _UNK_0239014c;
        uVar46 = *puVar1 & _DAT_02390140;
        uVar47 = puVar1[1] & _UNK_02390144;
        uVar48 = puVar1[2] & _UNK_02390148;
        uVar49 = puVar1[3] & _UNK_0239014c;
        puVar1 = (uint *)(unaff_RSI + lVar33 * 4);
        *puVar1 = *puVar2 & _DAT_02390140;
        puVar1[1] = uVar43;
        puVar1[2] = uVar44;
        puVar1[3] = uVar45;
        puVar2 = (uint *)(unaff_RSI + 0x10 + lVar33 * 4);
        *puVar2 = uVar46;
        puVar2[1] = uVar47;
        puVar2[2] = uVar48;
        puVar2[3] = uVar49;
      }
      else {
        lVar27 = unaff_RSI + local_98 * 4;
        lVar32 = -(uVar36 & 0xfffffffffffffffe);
        lVar33 = 0;
        do {
          puVar1 = (uint *)(lVar27 + lVar33 * 4);
          uVar47 = puVar1[1];
          uVar48 = puVar1[2];
          uVar49 = puVar1[3];
          puVar2 = (uint *)(lVar27 + 0x10 + lVar33 * 4);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (uint *)(lVar27 + 0x20 + lVar33 * 4);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          puVar2 = (uint *)(lVar27 + 0x30 + lVar33 * 4);
          uVar17 = *puVar2;
          uVar18 = puVar2[1];
          uVar19 = puVar2[2];
          uVar20 = puVar2[3];
          puVar2 = (uint *)(lVar27 + lVar33 * 4);
          *puVar2 = *puVar1 & uVar43;
          puVar2[1] = uVar47 & uVar44;
          puVar2[2] = uVar48 & uVar45;
          puVar2[3] = uVar49 & uVar46;
          puVar2 = (uint *)(lVar27 + 0x10 + lVar33 * 4);
          *puVar2 = uVar9 & uVar43;
          puVar2[1] = uVar10 & uVar44;
          puVar2[2] = uVar11 & uVar45;
          puVar2[3] = uVar12 & uVar46;
          puVar2 = (uint *)(lVar27 + 0x20 + lVar33 * 4);
          *puVar2 = uVar13 & uVar43;
          puVar2[1] = uVar14 & uVar44;
          puVar2[2] = uVar15 & uVar45;
          puVar2[3] = uVar16 & uVar46;
          puVar2 = (uint *)(lVar27 + 0x30 + lVar33 * 4);
          *puVar2 = uVar17 & uVar43;
          puVar2[1] = uVar18 & uVar44;
          puVar2[2] = uVar19 & uVar45;
          puVar2[3] = uVar20 & uVar46;
          lVar33 = lVar33 + 0x10;
          lVar32 = lVar32 + 2;
        } while (lVar32 != 0);
        if ((uVar36 & 1) != 0) goto LAB_014ac162;
      }
      if (uVar37 == uVar29) goto LAB_014ac1b8;
      lVar33 = uVar29 + local_98;
      uVar43 = _DAT_02390140;
    }
    do {
      *(uint *)(unaff_RSI + lVar33 * 4) = *(uint *)(unaff_RSI + lVar33 * 4) & uVar43;
      lVar33 = lVar33 + 1;
    } while ((int)param_4 != lVar33);
  }
LAB_014ac1b8:
  lVar33 = local_98 * 4;
  *(float *)(lVar40 + local_98 * 4) = SQRT(*(float *)(unaff_RSI + local_98 * 4));
  fVar42 = DAT_02394288;
  uVar43 = _DAT_02390140;
  fVar50 = DAT_02390124;
  iVar38 = param_3 + 1;
  if (iVar38 < (int)param_4) {
    dVar8 = (DAT_02391030 * local_58) / DAT_0240f0f0;
    fVar41 = (float)(((double)param_2 * DAT_023907c0) / local_58);
    lVar32 = (longlong)iVar38;
    lVar27 = (longlong)local_b0 + lVar32 * 4;
    lVar34 = 0;
    do {
      fVar51 = (float)((uint)(*(float *)(lVar27 + lVar34 * 4) - *(float *)(lVar27 + -4 + lVar34 * 4)
                             ) & uVar43);
      fVar52 = fVar41;
      if (fVar51 <= fVar41) {
        fVar52 = fVar51;
      }
      fVar51 = fVar50 - fVar52 * (float)dVar8;
      fVar52 = 0.0;
      if (0.0 <= fVar51) {
        fVar52 = fVar51;
      }
      fVar51 = fVar42;
      if (*(int *)(in_RCX + lVar32 * 4 + lVar34 * 4) != 0) {
        fVar51 = *(float *)(unaff_RSI + lVar32 * 4 + lVar34 * 4);
      }
      *(float *)(lVar40 + lVar32 * 4 + lVar34 * 4) = SQRT(fVar52 * fVar51);
      lVar34 = lVar34 + 1;
    } while (~param_3 + param_4 != (int)lVar34);
  }
  local_a0 = (ulonglong)param_4;
  FUN_015c1480((float)dVar4 * DAT_023908d8);
  fVar50 = *(float *)(lVar40 + lVar33);
  fVar42 = DAT_0240e354 + fVar50;
  local_a4 = fVar42;
  if (iVar38 < (int)local_a0) {
    pfVar31 = (float *)(lVar40 + (longlong)iVar38 * 4);
    do {
      fVar41 = *pfVar31;
      if (((DAT_023b3888 < fVar41) && (fVar50 <= DAT_023b3888)) ||
         ((fVar41 <= DAT_023b3888 && (DAT_023b3888 < fVar50)))) {
        FUN_014328b0(SUB84((double)iVar38 + DAT_023942d0,0),SUB84((double)fVar42,0));
        local_70 = CONCAT71(uStack_cf,local_d0);
        if (local_c8 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_68[0] = '\0';
        FUN_00d21140();
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (local_70 != 0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (CONCAT71(uStack_cf,local_d0) != 0)) {
          FUN_00d50b20();
        }
        fVar42 = 0.0;
      }
      fVar42 = fVar42 + fVar41 + DAT_0240e354;
      local_a4 = local_a4 + fVar41 + DAT_0240e354;
      iVar38 = iVar38 + 1;
      pfVar31 = pfVar31 + 1;
      fVar50 = fVar41;
    } while ((int)local_a0 != iVar38);
  }
  local_8c = (int)(DAT_0241b6a8 * local_58);
  iVar38 = *(int *)((longlong)puVar24 + 0xc);
  iVar39 = 0;
  if (iVar38 < 1) {
    local_60 = 0;
    local_58 = 0.0;
    bVar22 = false;
    local_40 = 0;
    bVar21 = false;
    lVar33 = 0;
  }
  else {
    dVar4 = (double)(float)((local_58 * DAT_023934c8) / DAT_0240f0f0);
    local_c0 = local_c0 & 0xffffffff00000000;
    local_b4 = 0;
    bVar21 = false;
    local_40 = 0;
    bVar22 = false;
    local_58 = 0.0;
    local_60 = 0;
    lVar27 = 0;
    do {
      lVar33 = *(longlong *)(puVar24[2] + (longlong)iVar39 * 8);
      if (lVar27 == lVar33) {
        if ((!bVar21) && (lVar27 != 0)) {
          bVar21 = true;
          FUN_00d50b00();
        }
LAB_014ac580:
        lVar33 = lVar27;
        if (0 < iVar39) goto LAB_014ac585;
LAB_014ac5be:
        lVar27 = 0;
        if (local_40 != 0) goto joined_r0x014ac614;
        local_40 = 0;
      }
      else {
        if (lVar33 != 0) {
          FUN_00d50b00();
        }
        if ((bVar21) && (lVar27 != 0)) {
          FUN_00d50b20();
          bVar21 = true;
          lVar27 = lVar33;
          goto LAB_014ac580;
        }
        bVar21 = true;
        if (iVar39 < 1) goto LAB_014ac5be;
LAB_014ac585:
        lVar27 = *(longlong *)(puVar24[2] + (ulonglong)(iVar39 - 1) * 8);
        if (local_40 == lVar27) {
          if ((!bVar22) && (local_40 != 0)) {
            bVar22 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar27 == 0) {
            lVar27 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014ac614:
          if ((bVar22) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar22 = true;
            local_40 = lVar27;
          }
          else {
            bVar22 = true;
            local_40 = lVar27;
          }
        }
      }
      uVar43 = *(int *)((longlong)puVar24 + 0xc) - 1;
      uVar37 = (ulonglong)uVar43;
      if (iVar39 < (int)uVar43) {
        uVar37 = puVar24[2];
        lVar27 = *(longlong *)(uVar37 + 8 + (longlong)iVar39 * 8);
        if (local_58 == (double)lVar27) {
          if (((char)local_60 == '\0') && (local_58 != 0.0)) {
            local_60 = CONCAT71((int7)(uVar37 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (lVar27 != 0) {
            uVar37 = FUN_00d50b00();
            goto LAB_014ac690;
          }
          lVar27 = 0;
          dVar8 = local_58;
joined_r0x014ac694:
          local_58 = (double)lVar27;
          if (((char)local_60 == '\0') || (dVar8 == 0.0)) {
            local_60 = CONCAT71((int7)(uVar37 >> 8),1);
          }
          else {
            uVar26 = FUN_00d50b20();
            local_60 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
          }
        }
      }
      else {
        lVar27 = 0;
        if (local_58 != 0.0) {
LAB_014ac690:
          dVar8 = local_58;
          goto joined_r0x014ac694;
        }
        local_58 = 0.0;
      }
      uVar43 = param_3;
      if (local_40 != 0) {
        uVar43 = (uint)*(double *)(local_40 + 0x10);
      }
      iVar38 = (int)local_a0;
      if (local_58 != 0.0) {
        iVar38 = (int)*(double *)((longlong)local_58 + 0x10);
      }
      iVar28 = (int)*(double *)(lVar33 + 0x10) - uVar43;
      if (((double)(*(ulonglong *)(lVar33 + 0x18) & _DAT_023908f0) < dVar4) || (iVar28 < local_8c))
      {
        if (local_58 == 0.0) {
          if (local_40 != 0) {
LAB_014ac7da:
            local_68[0] = '\0';
            FUN_00d23f50();
            if ((local_68[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            iVar39 = iVar39 + -1;
          }
        }
        else {
          iVar38 = iVar38 - (int)*(double *)(lVar33 + 0x10);
          if ((iVar38 < local_8c ||
               (double)((ulonglong)*(double *)((longlong)local_58 + 0x18) & _DAT_023908f0) < dVar4)
             && (iVar38 < iVar28)) {
            if ((local_c0 & 1) == 0) {
              local_b4 = iVar39 + -1;
            }
            local_c0 = CONCAT44(local_c0._4_4_,
                                (int)CONCAT71((uint7)(uint3)((uint)(iVar39 + -1) >> 8),1));
            goto LAB_014ac4fd;
          }
          if (local_40 != 0) {
            *(double *)((longlong)local_58 + 0x18) =
                 *(double *)((longlong)local_58 + 0x18) + *(double *)(local_40 + 0x18);
            goto LAB_014ac7da;
          }
        }
        local_68[0] = '\0';
        FUN_00d23f50();
        if ((local_68[0] != '\0') && (lVar33 != 0)) {
          FUN_00d50b20();
        }
        iVar39 = iVar39 + -1;
        if ((local_c0 & 1) != 0) {
          iVar39 = local_b4;
        }
        local_c0 = local_c0 & 0xffffffff00000000;
        local_70 = lVar33;
      }
LAB_014ac4fd:
      iVar39 = iVar39 + 1;
      iVar38 = *(int *)((longlong)puVar24 + 0xc);
      lVar27 = lVar33;
    } while (iVar39 < iVar38);
  }
  if (0 < iVar38) {
    local_8c = local_8c / 2;
    lVar27 = (longlong)local_8c;
    local_c0 = lVar40 + 4;
    iVar39 = 0;
    do {
      lVar32 = *(longlong *)(puVar24[2] + (longlong)iVar39 * 8);
      if (lVar33 == lVar32) {
        if ((!bVar21) && (lVar33 != 0)) {
          FUN_00d50b00();
          lVar32 = lVar33;
          goto LAB_014ac902;
        }
        if (iVar39 < 1) goto LAB_014ac9a0;
LAB_014ac90b:
        lVar32 = *(longlong *)(puVar24[2] + (ulonglong)(iVar39 - 1) * 8);
        if (local_40 == lVar32) {
          if ((!bVar22) && (local_40 != 0)) {
            bVar22 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar32 == 0) {
            lVar32 = 0;
          }
          else {
            FUN_00d50b00();
          }
joined_r0x014ac9b0:
          if ((bVar22) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar22 = true;
            local_40 = lVar32;
          }
          else {
            bVar22 = true;
            local_40 = lVar32;
          }
        }
      }
      else {
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        if ((bVar21) && (lVar33 != 0)) {
          FUN_00d50b20();
        }
LAB_014ac902:
        bVar21 = true;
        lVar33 = lVar32;
        if (0 < iVar39) goto LAB_014ac90b;
LAB_014ac9a0:
        lVar32 = 0;
        if (local_40 != 0) goto joined_r0x014ac9b0;
        local_40 = 0;
      }
      uVar43 = *(int *)((longlong)puVar24 + 0xc) - 1;
      uVar37 = (ulonglong)uVar43;
      if (iVar39 < (int)uVar43) {
        uVar37 = puVar24[2];
        lVar32 = *(longlong *)(uVar37 + 8 + (longlong)iVar39 * 8);
        if (local_58 == (double)lVar32) {
          if (((char)local_60 == '\0') && (local_58 != 0.0)) {
            local_60 = CONCAT71((int7)(uVar37 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (lVar32 != 0) {
            uVar37 = FUN_00d50b00();
            goto LAB_014aca4c;
          }
          lVar32 = 0;
          dVar4 = local_58;
joined_r0x014aca50:
          local_58 = (double)lVar32;
          if (((char)local_60 == '\0') || (dVar4 == 0.0)) {
            local_60 = CONCAT71((int7)(uVar37 >> 8),1);
          }
          else {
            uVar26 = FUN_00d50b20();
            local_60 = CONCAT71((int7)((ulonglong)uVar26 >> 8),1);
          }
        }
      }
      else {
        lVar32 = 0;
        if (local_58 != 0.0) {
LAB_014aca4c:
          dVar4 = local_58;
          goto joined_r0x014aca50;
        }
        local_58 = 0.0;
      }
      uVar43 = param_3;
      if (local_40 != 0) {
        uVar43 = (uint)*(double *)(local_40 + 0x10);
      }
      iVar38 = (int)local_a0;
      if (local_58 != 0.0) {
        iVar38 = (int)*(double *)((longlong)local_58 + 0x10);
      }
      uVar44 = (uint)*(double *)(lVar33 + 0x10);
      if (*(double *)(lVar33 + 0x18) <= DAT_02390448) {
        uVar37 = (ulonglong)(uVar44 - 1);
        if (0 < (int)uVar44) {
          fVar50 = *(float *)((longlong)local_b0 + uVar37 * 4);
          lVar32 = (ulonglong)uVar44 + 1;
          do {
            if ((*(float *)(lVar40 + uVar37 * 4) <= DAT_02390128) ||
               (DAT_0241fd58 <=
                (float)((uint)(*(float *)((longlong)local_b0 + uVar37 * 4) - fVar50) & _DAT_02390140
                       ))) break;
            iVar38 = (int)uVar37;
            if ((int)(iVar38 - uVar43) < local_8c) {
              local_68[0] = '\0';
              FUN_00d23f50();
              if ((local_68[0] != '\0') && (lVar33 != 0)) {
                FUN_00d50b20();
              }
              if (bVar21) {
                FUN_00d50b20();
              }
              if (local_40 == 0) {
                iVar39 = iVar39 + -1;
                local_70 = lVar33;
              }
              else {
                local_70 = local_40;
                local_68[0] = '\0';
                FUN_00d23f50();
                if ((local_68[0] != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                iVar39 = iVar39 + -2;
              }
              goto LAB_014acd54;
            }
            *(double *)(lVar33 + 0x10) = (double)iVar38 + DAT_023942d0;
            lVar32 = lVar32 + -1;
            uVar37 = (ulonglong)(iVar38 - 1);
          } while (1 < lVar32);
        }
      }
      else {
        uVar29 = (ulonglong)(int)uVar44;
        uVar37 = (ulonglong)(uVar44 - 2);
        if ((int)uVar44 < 3) {
          uVar37 = uVar29;
        }
        if (DAT_02390128 < *(float *)(lVar40 + uVar29 * 4)) {
          fVar50 = *(float *)((longlong)local_b0 + uVar37 * 4);
          lVar32 = ~uVar29 + (longlong)iVar38;
          lVar34 = 0;
LAB_014acb50:
          if ((float)((uint)(*(float *)((longlong)local_b0 + uVar29 * 4 + lVar34 * 4) - fVar50) &
                     _DAT_02390140) < DAT_0241fd58) {
            if (lVar27 <= lVar32) goto code_r0x014acb7e;
            local_68[0] = '\0';
            FUN_00d23f50();
            if ((local_68[0] != '\0') && (lVar33 != 0)) {
              FUN_00d50b20();
            }
            if (bVar21) {
              FUN_00d50b20();
            }
            dVar4 = local_58;
            iVar39 = iVar39 + -1;
            local_70 = lVar33;
            if (local_58 != 0.0) {
              local_70 = (longlong)local_58;
              local_68[0] = '\0';
              FUN_00d23f50();
              if ((local_68[0] != '\0') && (dVar4 != 0.0)) {
                FUN_00d50b20();
              }
            }
LAB_014acd54:
            bVar21 = false;
            lVar33 = 0;
          }
        }
      }
LAB_014ac8b7:
      iVar39 = iVar39 + 1;
      iVar38 = *(int *)((longlong)puVar24 + 0xc);
    } while (iVar39 < iVar38);
    if (0 < iVar38) {
      local_b0 = (double)(unaff_RSI + 0x30);
      lVar40 = 0;
      do {
        lVar27 = *(longlong *)(puVar24[2] + lVar40 * 8);
        if (lVar33 == lVar27) {
          if ((!bVar21) && (lVar33 != 0)) {
            bVar21 = true;
            FUN_00d50b00();
          }
LAB_014ace20:
          if (*(double *)(lVar33 + 0x18) <= 0.0 && *(double *)(lVar33 + 0x18) != 0.0) {
LAB_014ace58:
            iVar38 = (int)*(double *)(lVar33 + 0x10);
            uVar43 = param_3;
            if (lVar40 == 0) {
              lVar27 = 0;
              if (local_40 != 0) {
LAB_014ace99:
                bVar23 = true;
                if (bVar22) goto LAB_014acea2;
                goto LAB_014aceb4;
              }
              local_40 = 0;
              uVar44 = _DAT_023945e0;
              uVar45 = _UNK_023945e4;
              uVar46 = _UNK_023945e8;
              uVar47 = _UNK_023945ec;
            }
            else {
              lVar27 = *(longlong *)(puVar24[2] + -8 + lVar40 * 8);
              if (local_40 == lVar27) {
                lVar27 = local_40;
                bVar23 = bVar22;
                if ((bVar22) || (local_40 == 0)) goto LAB_014aceb4;
                bVar23 = true;
                FUN_00d50b00();
              }
              else {
                if (lVar27 != 0) {
                  FUN_00d50b00();
                  goto LAB_014ace99;
                }
                lVar27 = 0;
                bVar23 = true;
                if (!bVar22) goto LAB_014aceb4;
LAB_014acea2:
                bVar23 = true;
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
LAB_014aceb4:
                local_40 = lVar27;
                if (lVar27 == 0) {
                  local_40 = 0;
                  uVar44 = _DAT_023945e0;
                  uVar45 = _UNK_023945e4;
                  uVar46 = _UNK_023945e8;
                  uVar47 = _UNK_023945ec;
                  bVar22 = bVar23;
                  goto joined_r0x014ad039;
                }
              }
              uVar43 = (uint)*(double *)(local_40 + 0x10);
              uVar44 = _DAT_023945e0;
              uVar45 = _UNK_023945e4;
              uVar46 = _UNK_023945e8;
              uVar47 = _UNK_023945ec;
              bVar22 = bVar23;
            }
joined_r0x014ad039:
            _DAT_023945e0 = uVar44;
            _UNK_023945e4 = uVar45;
            _UNK_023945e8 = uVar46;
            _UNK_023945ec = uVar47;
            if ((int)uVar43 < iVar38) {
              lVar27 = (longlong)(int)uVar43;
              uVar37 = iVar38 - lVar27;
              if (7 < uVar37) {
                uVar29 = uVar37 & 0xfffffffffffffff8;
                uVar36 = (uVar29 - 8 >> 3) + 1;
                if (uVar29 - 8 == 0) {
                  lVar32 = 0;
LAB_014acfb2:
                  lVar32 = lVar32 + lVar27;
                  puVar2 = (uint *)(unaff_RSI + lVar32 * 4);
                  puVar1 = (uint *)(unaff_RSI + 0x10 + lVar32 * 4);
                  uVar43 = puVar2[1] ^ _UNK_023945e4;
                  uVar44 = puVar2[2] ^ _UNK_023945e8;
                  uVar45 = puVar2[3] ^ _UNK_023945ec;
                  uVar46 = *puVar1 ^ _DAT_023945e0;
                  uVar47 = puVar1[1] ^ _UNK_023945e4;
                  uVar48 = puVar1[2] ^ _UNK_023945e8;
                  uVar49 = puVar1[3] ^ _UNK_023945ec;
                  puVar1 = (uint *)(unaff_RSI + lVar32 * 4);
                  *puVar1 = *puVar2 ^ _DAT_023945e0;
                  puVar1[1] = uVar43;
                  puVar1[2] = uVar44;
                  puVar1[3] = uVar45;
                  auVar6._4_4_ = uVar47;
                  auVar6._0_4_ = uVar46;
                  auVar6._8_4_ = uVar48;
                  auVar6._12_4_ = uVar49;
                  *(undefined1 (*) [16])(unaff_RSI + 0x10 + lVar32 * 4) = auVar6;
                }
                else {
                  lVar34 = (longlong)local_b0 + lVar27 * 4;
                  lVar35 = -(uVar36 & 0xfffffffffffffffe);
                  lVar32 = 0;
                  do {
                    puVar1 = (uint *)(lVar34 + -0x30 + lVar32 * 4);
                    uVar43 = puVar1[1];
                    uVar48 = puVar1[2];
                    uVar49 = puVar1[3];
                    puVar2 = (uint *)(lVar34 + -0x20 + lVar32 * 4);
                    uVar9 = *puVar2;
                    uVar10 = puVar2[1];
                    uVar11 = puVar2[2];
                    uVar12 = puVar2[3];
                    puVar2 = (uint *)(lVar34 + -0x10 + lVar32 * 4);
                    uVar13 = *puVar2;
                    uVar14 = puVar2[1];
                    uVar15 = puVar2[2];
                    uVar16 = puVar2[3];
                    puVar2 = (uint *)(lVar34 + lVar32 * 4);
                    uVar17 = *puVar2;
                    uVar18 = puVar2[1];
                    uVar19 = puVar2[2];
                    uVar20 = puVar2[3];
                    puVar2 = (uint *)(lVar34 + -0x30 + lVar32 * 4);
                    *puVar2 = *puVar1 ^ uVar44;
                    puVar2[1] = uVar43 ^ uVar45;
                    puVar2[2] = uVar48 ^ uVar46;
                    puVar2[3] = uVar49 ^ uVar47;
                    auVar5._4_4_ = uVar10 ^ uVar45;
                    auVar5._0_4_ = uVar9 ^ uVar44;
                    auVar5._8_4_ = uVar11 ^ uVar46;
                    auVar5._12_4_ = uVar12 ^ uVar47;
                    *(undefined1 (*) [16])(lVar34 + -0x20 + lVar32 * 4) = auVar5;
                    puVar2 = (uint *)(lVar34 + -0x10 + lVar32 * 4);
                    *puVar2 = uVar13 ^ uVar44;
                    puVar2[1] = uVar14 ^ uVar45;
                    puVar2[2] = uVar15 ^ uVar46;
                    puVar2[3] = uVar16 ^ uVar47;
                    puVar2 = (uint *)(lVar34 + lVar32 * 4);
                    *puVar2 = uVar17 ^ uVar44;
                    puVar2[1] = uVar18 ^ uVar45;
                    puVar2[2] = uVar19 ^ uVar46;
                    puVar2[3] = uVar20 ^ uVar47;
                    lVar32 = lVar32 + 0x10;
                    lVar35 = lVar35 + 2;
                  } while (lVar35 != 0);
                  if ((uVar36 & 1) != 0) goto LAB_014acfb2;
                }
                if (uVar37 == uVar29) goto LAB_014acd9a;
                lVar27 = lVar27 + uVar29;
                uVar44 = _DAT_023945e0;
              }
              do {
                *(uint *)(unaff_RSI + lVar27 * 4) = *(uint *)(unaff_RSI + lVar27 * 4) ^ uVar44;
                lVar27 = lVar27 + 1;
              } while (iVar38 != lVar27);
            }
          }
        }
        else {
          if (lVar27 != 0) {
            FUN_00d50b00();
          }
          if ((bVar21) && (lVar33 != 0)) {
            FUN_00d50b20();
            bVar21 = true;
            lVar33 = lVar27;
            goto LAB_014ace20;
          }
          bVar21 = true;
          lVar33 = lVar27;
          if (*(double *)(lVar27 + 0x18) <= 0.0 && *(double *)(lVar27 + 0x18) != 0.0)
          goto LAB_014ace58;
        }
LAB_014acd9a:
        lVar40 = lVar40 + 1;
        iVar38 = *(int *)((longlong)puVar24 + 0xc);
      } while (lVar40 < iVar38);
    }
  }
  dVar4 = local_58;
  uVar46 = _UNK_023945ec;
  uVar45 = _UNK_023945e8;
  uVar44 = _UNK_023945e4;
  uVar43 = _DAT_023945e0;
  if (iVar38 == 0) {
    if ((0.0 <= local_a4) || (iVar38 = (int)local_a0, iVar38 <= (int)param_3)) goto LAB_014ad417;
    uVar37 = iVar38 - local_98;
    lVar40 = local_98;
    if (7 < uVar37) {
      uVar36 = uVar37 & 0xfffffffffffffff8;
      uVar29 = (uVar36 - 8 >> 3) + 1;
      if (uVar36 - 8 == 0) {
        lVar40 = 0;
LAB_014ad261:
        lVar40 = lVar40 + local_98;
        puVar2 = (uint *)(unaff_RSI + lVar40 * 4);
        puVar1 = (uint *)(unaff_RSI + 0x10 + lVar40 * 4);
        uVar43 = puVar2[1] ^ _UNK_023945e4;
        uVar44 = puVar2[2] ^ _UNK_023945e8;
        uVar45 = puVar2[3] ^ _UNK_023945ec;
        uVar46 = *puVar1 ^ _DAT_023945e0;
        uVar47 = puVar1[1] ^ _UNK_023945e4;
        uVar48 = puVar1[2] ^ _UNK_023945e8;
        uVar49 = puVar1[3] ^ _UNK_023945ec;
        puVar1 = (uint *)(unaff_RSI + lVar40 * 4);
        *puVar1 = *puVar2 ^ _DAT_023945e0;
        puVar1[1] = uVar43;
        puVar1[2] = uVar44;
        puVar1[3] = uVar45;
        puVar2 = (uint *)(unaff_RSI + 0x10 + lVar40 * 4);
        *puVar2 = uVar46;
        puVar2[1] = uVar47;
        puVar2[2] = uVar48;
        puVar2[3] = uVar49;
      }
      else {
        lVar27 = unaff_RSI + local_98 * 4;
        lVar32 = -(uVar29 & 0xfffffffffffffffe);
        lVar40 = 0;
        do {
          puVar1 = (uint *)(lVar27 + lVar40 * 4);
          uVar47 = puVar1[1];
          uVar48 = puVar1[2];
          uVar49 = puVar1[3];
          puVar2 = (uint *)(lVar27 + 0x10 + lVar40 * 4);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (uint *)(lVar27 + 0x20 + lVar40 * 4);
          uVar13 = *puVar2;
          uVar14 = puVar2[1];
          uVar15 = puVar2[2];
          uVar16 = puVar2[3];
          puVar2 = (uint *)(lVar27 + 0x30 + lVar40 * 4);
          uVar17 = *puVar2;
          uVar18 = puVar2[1];
          uVar19 = puVar2[2];
          uVar20 = puVar2[3];
          puVar2 = (uint *)(lVar27 + lVar40 * 4);
          *puVar2 = *puVar1 ^ uVar43;
          puVar2[1] = uVar47 ^ uVar44;
          puVar2[2] = uVar48 ^ uVar45;
          puVar2[3] = uVar49 ^ uVar46;
          puVar2 = (uint *)(lVar27 + 0x10 + lVar40 * 4);
          *puVar2 = uVar9 ^ uVar43;
          puVar2[1] = uVar10 ^ uVar44;
          puVar2[2] = uVar11 ^ uVar45;
          puVar2[3] = uVar12 ^ uVar46;
          puVar2 = (uint *)(lVar27 + 0x20 + lVar40 * 4);
          *puVar2 = uVar13 ^ uVar43;
          puVar2[1] = uVar14 ^ uVar44;
          puVar2[2] = uVar15 ^ uVar45;
          puVar2[3] = uVar16 ^ uVar46;
          puVar2 = (uint *)(lVar27 + 0x30 + lVar40 * 4);
          *puVar2 = uVar17 ^ uVar43;
          puVar2[1] = uVar18 ^ uVar44;
          puVar2[2] = uVar19 ^ uVar45;
          puVar2[3] = uVar20 ^ uVar46;
          lVar40 = lVar40 + 0x10;
          lVar32 = lVar32 + 2;
        } while (lVar32 != 0);
        if ((uVar29 & 1) != 0) goto LAB_014ad261;
      }
      if (uVar37 == uVar36) goto LAB_014ad417;
      lVar40 = local_98 + uVar36;
      uVar43 = _DAT_023945e0;
    }
    do {
      *(uint *)(unaff_RSI + lVar40 * 4) = *(uint *)(unaff_RSI + lVar40 * 4) ^ uVar43;
      lVar40 = lVar40 + 1;
    } while (iVar38 != lVar40);
    goto LAB_014ad417;
  }
  FUN_00d23340();
  pcVar30 = &local_d0;
  if (local_68[0] != '\0') {
    pcVar30 = local_68;
  }
  local_d0 = local_68[0];
  *pcVar30 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == local_40) {
    if ((!bVar22) && (local_70 != 0)) {
      local_70 = local_40;
      if (local_d0 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_014ad2d8;
    }
    local_b0 = *(double *)(local_40 + 0x18);
    uVar43 = _DAT_023945e0;
    uVar44 = _UNK_023945e4;
    uVar45 = _UNK_023945e8;
    uVar46 = _UNK_023945ec;
    dVar8 = local_b0;
    if ((local_d0 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
      uVar43 = _DAT_023945e0;
      uVar44 = _UNK_023945e4;
      uVar45 = _UNK_023945e8;
      uVar46 = _UNK_023945ec;
      dVar8 = local_b0;
    }
  }
  else {
    if (local_d0 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      if ((bVar22) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar22) && (local_40 != 0)) {
      FUN_00d50b20();
    }
LAB_014ad2d8:
    bVar22 = true;
    uVar43 = _DAT_023945e0;
    uVar44 = _UNK_023945e4;
    uVar45 = _UNK_023945e8;
    uVar46 = _UNK_023945ec;
    local_40 = local_70;
    dVar8 = *(double *)(local_70 + 0x18);
  }
  _DAT_023945e0 = uVar43;
  _UNK_023945e4 = uVar44;
  _UNK_023945e8 = uVar45;
  _UNK_023945ec = uVar46;
  if (dVar8 <= 0.0) goto LAB_014ad417;
  iVar38 = (int)local_a0;
  if (iVar38 <= (int)*(double *)(local_40 + 0x10)) goto LAB_014ad417;
  lVar40 = (longlong)(int)*(double *)(local_40 + 0x10);
  uVar37 = iVar38 - lVar40;
  if (7 < uVar37) {
    uVar29 = uVar37 & 0xfffffffffffffff8;
    uVar36 = (uVar29 - 8 >> 3) + 1;
    if (uVar29 - 8 == 0) {
      lVar27 = 0;
LAB_014ad3be:
      lVar27 = lVar27 + lVar40;
      puVar2 = (uint *)(unaff_RSI + lVar27 * 4);
      puVar1 = (uint *)(unaff_RSI + 0x10 + lVar27 * 4);
      uVar43 = puVar2[1] ^ _UNK_023945e4;
      uVar36 = *(ulonglong *)(puVar2 + 2) ^ CONCAT44(_UNK_023945ec,_UNK_023945e8);
      uVar44 = *puVar1 ^ _DAT_023945e0;
      uVar45 = puVar1[1] ^ _UNK_023945e4;
      uVar7 = *(ulonglong *)(puVar1 + 2) ^ CONCAT44(_UNK_023945ec,_UNK_023945e8);
      puVar1 = (uint *)(unaff_RSI + lVar27 * 4);
      *puVar1 = *puVar2 ^ _DAT_023945e0;
      puVar1[1] = uVar43;
      puVar1[2] = (uint)uVar36;
      puVar1[3] = (uint)(uVar36 >> 0x20);
      puVar2 = (uint *)(unaff_RSI + 0x10 + lVar27 * 4);
      *puVar2 = uVar44;
      puVar2[1] = uVar45;
      puVar2[2] = (uint)uVar7;
      puVar2[3] = (uint)(uVar7 >> 0x20);
    }
    else {
      lVar32 = unaff_RSI + lVar40 * 4;
      lVar34 = -(uVar36 & 0xfffffffffffffffe);
      lVar27 = 0;
      do {
        puVar1 = (uint *)(lVar32 + lVar27 * 4);
        uVar20 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];
        puVar2 = (uint *)(lVar32 + 0x10 + lVar27 * 4);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar2 = (uint *)(lVar32 + 0x20 + lVar27 * 4);
        uVar16 = *puVar2;
        uVar17 = puVar2[1];
        uVar49 = puVar2[2];
        uVar9 = puVar2[3];
        puVar2 = (uint *)(lVar32 + 0x30 + lVar27 * 4);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        uVar47 = puVar2[2];
        uVar48 = puVar2[3];
        puVar2 = (uint *)(lVar32 + lVar27 * 4);
        *puVar2 = *puVar1 ^ uVar43;
        puVar2[1] = uVar20 ^ uVar44;
        puVar2[2] = uVar12 ^ uVar45;
        puVar2[3] = uVar13 ^ uVar46;
        puVar2 = (uint *)(lVar32 + 0x10 + lVar27 * 4);
        *puVar2 = uVar18 ^ uVar43;
        puVar2[1] = uVar19 ^ uVar44;
        puVar2[2] = uVar10 ^ uVar45;
        puVar2[3] = uVar11 ^ uVar46;
        puVar2 = (uint *)(lVar32 + 0x20 + lVar27 * 4);
        *puVar2 = uVar16 ^ uVar43;
        puVar2[1] = uVar17 ^ uVar44;
        puVar2[2] = uVar49 ^ uVar45;
        puVar2[3] = uVar9 ^ uVar46;
        puVar2 = (uint *)(lVar32 + 0x30 + lVar27 * 4);
        *puVar2 = uVar14 ^ uVar43;
        puVar2[1] = uVar15 ^ uVar44;
        puVar2[2] = uVar47 ^ uVar45;
        puVar2[3] = uVar48 ^ uVar46;
        lVar27 = lVar27 + 0x10;
        lVar34 = lVar34 + 2;
      } while (lVar34 != 0);
      if ((uVar36 & 1) != 0) goto LAB_014ad3be;
    }
    if (uVar37 == uVar29) goto LAB_014ad417;
    lVar40 = lVar40 + uVar29;
    uVar43 = _DAT_023945e0;
  }
  do {
    *(uint *)(unaff_RSI + lVar40 * 4) = *(uint *)(unaff_RSI + lVar40 * 4) ^ uVar43;
    lVar40 = lVar40 + 1;
  } while (iVar38 != lVar40);
LAB_014ad417:
  if (unaff_RDI == 0) {
    FUN_00e83070();
  }
  if (puVar24 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (dVar4 != 0.0)) {
    FUN_00d50b20();
  }
  if ((bVar22) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar21) && (lVar33 != 0)) {
    FUN_00d50b20();
  }
  return;
code_r0x014acb7e:
  *(double *)(lVar33 + 0x10) = (double)(int)(uVar44 + 1 + (int)lVar34) + DAT_023942d0;
  lVar35 = lVar34 * 4;
  lVar34 = lVar34 + 1;
  lVar32 = lVar32 + -1;
  if (*(float *)(local_c0 + uVar29 * 4 + lVar35) <= DAT_02390128) goto LAB_014ac8b7;
  goto LAB_014acb50;
}


