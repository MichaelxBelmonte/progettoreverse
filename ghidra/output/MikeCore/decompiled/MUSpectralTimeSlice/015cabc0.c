// Function: FUN_015cabc0
// Address: 015cabc0
// Size: 3309 bytes
// Class: MUSpectralTimeSlice


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015cabc0(void)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar10;
  int *in_R9;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong local_80;
  longlong local_78;
  longlong *local_58;
  longlong local_50;
  char local_48 [8];
  undefined8 local_40;
  char local_38 [8];
  
  lVar5 = local_50;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x68) + 0xc) == 0) {
    if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) == 0) {
      return;
    }
LAB_015cac1e:
    FUN_00c8e690();
    if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    bVar14 = local_50 != 0;
    lVar12 = local_50;
  }
  else {
    if (*(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc) != 0) goto LAB_015cac1e;
    bVar14 = false;
    lVar12 = 0;
  }
  local_58 = (longlong *)(unaff_RDI + 0x60);
  if (*(int *)(*unaff_RSI + 0xc) == 0) {
    bVar15 = false;
    local_80 = 0;
  }
  else {
    FUN_00c8e690();
    if (((local_48[0] == '\0') && (local_50 != 0)) &&
       ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    local_80 = local_50;
    bVar15 = local_50 != 0;
  }
  fVar19 = DAT_02394214;
  lVar11 = *local_58;
  uVar10 = *(uint *)(lVar11 + 0xc);
  fVar17 = DAT_02394214;
  if (2 < (int)uVar10) {
    FUN_00d242c0(DAT_02394214,0);
    iVar2 = *(int *)(*local_58 + 0xc);
    uVar21 = iVar2 - 1;
    if (1 < iVar2) {
      lVar11 = *(longlong *)(*local_58 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 0x10);
      if (uVar21 == 1) {
        uVar7 = 0;
      }
      else {
        uVar10 = uVar21 & 0xfffffffe;
        uVar8 = 0;
        do {
          *(float *)(lVar9 + uVar8 * 4) =
               (float)(*(double *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x10) -
                      *(double *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x10));
          uVar7 = uVar8 + 2;
          *(float *)(lVar9 + 4 + uVar8 * 4) =
               (float)(*(double *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x10) -
                      *(double *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x10));
          uVar8 = uVar7;
        } while (uVar10 != uVar7);
      }
      in_R9 = (int *)(ulonglong)uVar21;
      if ((uVar21 & 1) != 0) {
        *(float *)(lVar9 + uVar7 * 4) =
             (float)(*(double *)(*(longlong *)(lVar11 + 8 + uVar7 * 8) + 0x10) -
                    *(double *)(*(longlong *)(lVar11 + uVar7 * 8) + 0x10));
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    lVar11 = *local_58;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(longlong *)(lVar12 + 0x10) +
                       (longlong)(int)((double)(int)(uVar10 - 1) * DAT_023942d0) * 4);
  }
  fVar20 = DAT_02390124;
  if (fVar17 <= DAT_02390124) {
    fVar20 = fVar17;
  }
  local_40 = CONCAT44(local_40._4_4_,fVar20);
  fVar17 = DAT_02394244 * fVar20;
  if (DAT_02394244 * fVar20 <= DAT_02411260) {
    fVar17 = DAT_02411260;
  }
  *(float *)(unaff_RDI + 0x90) = fVar17;
  if (uVar10 != 0) {
    if (0 < (int)uVar10) {
      lVar11 = *(longlong *)(lVar11 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 0x10);
      if ((ulonglong)uVar10 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 4 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 8 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 0xc + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar10 & 0xfffffffc) != uVar8);
      }
      if ((ulonglong)(uVar10 & 3) != 0) {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while ((uVar10 & 3) != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    uVar21 = *(uint *)(*local_58 + 0xc);
    fVar17 = *(float *)(*(longlong *)(lVar12 + 0x10) +
                       (longlong)(int)((double)(int)uVar21 * DAT_023b1e88) * 4);
    if ((DAT_02394274 <= fVar17) && (0 < (int)uVar21)) {
      fVar17 = DAT_02390124 / fVar17;
      lVar11 = *(longlong *)(*local_58 + 0x10);
      if (uVar21 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar9 = *(longlong *)(lVar11 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (DAT_02390124 < fVar20) {
            *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          lVar9 = *(longlong *)(lVar11 + 8 + uVar8 * 8);
          fVar20 = *(float *)(lVar9 + 0x20) * fVar17;
          *(float *)(lVar9 + 0x20) = fVar20;
          if (DAT_02390124 < fVar20) {
            *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3f800000;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar21 & 0xfffffffe) != uVar8);
      }
      if (((uVar21 & 1) != 0) &&
         (lVar11 = *(longlong *)(lVar11 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar11 + 0x20),
         *(float *)(lVar11 + 0x20) = fVar17, DAT_02390124 < fVar17)) {
        *(undefined4 *)(*(longlong *)(*(longlong *)(*local_58 + 0x10) + uVar8 * 8) + 0x20) =
             0x3f800000;
      }
    }
  }
  lVar11 = *unaff_RSI;
  uVar21 = *(uint *)(lVar11 + 0xc);
  if ((ulonglong)uVar21 != 0) {
    if (0 < (int)uVar21) {
      lVar11 = *(longlong *)(lVar11 + 0x10);
      lVar9 = *(longlong *)(local_80 + 0x10);
      uVar10 = uVar21 & 3;
      if ((ulonglong)uVar21 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 4 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 8 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 8 + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x10 + uVar8 * 8) + 0x20);
          *(undefined4 *)(lVar9 + 0xc + uVar8 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + 0x18 + uVar8 * 8) + 0x20);
          uVar8 = uVar8 + 4;
        } while ((uVar21 & 0xfffffffc) != uVar8);
      }
      if ((ulonglong)uVar10 != 0) {
        uVar7 = 0;
        do {
          *(undefined4 *)(lVar9 + uVar8 * 4 + uVar7 * 4) =
               *(undefined4 *)(*(longlong *)(lVar11 + uVar8 * 8 + uVar7 * 8) + 0x20);
          uVar7 = uVar7 + 1;
        } while (uVar10 != uVar7);
      }
    }
    _qsort(FUN_00e8b5c0,4,uVar10,in_R9);
    fVar20 = DAT_02391094;
    lVar11 = *unaff_RSI;
    uVar10 = *(uint *)(lVar11 + 0xc);
    fVar17 = *(float *)(*(longlong *)(local_80 + 0x10) +
                       (longlong)(int)((double)(int)uVar10 * DAT_023b1e88) * 4);
    if ((DAT_02394274 <= fVar17) && (0 < (int)uVar10)) {
      fVar17 = (DAT_02390124 / fVar17) * DAT_02391094;
      lVar9 = *(longlong *)(lVar11 + 0x10);
      if (uVar10 == 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        do {
          lVar13 = *(longlong *)(lVar9 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *unaff_RSI;
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          lVar13 = *(longlong *)(lVar9 + 8 + uVar8 * 8);
          fVar23 = *(float *)(lVar13 + 0x20) * fVar17;
          *(float *)(lVar13 + 0x20) = fVar23;
          if (fVar20 < fVar23) {
            lVar11 = *unaff_RSI;
            *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 8 + uVar8 * 8) + 0x20) =
                 0x3e4ccccd;
          }
          uVar8 = uVar8 + 2;
        } while ((uVar10 & 0xfffffffe) != uVar8);
      }
      if (((uVar10 & 1) != 0) &&
         (lVar9 = *(longlong *)(lVar9 + uVar8 * 8), fVar17 = fVar17 * *(float *)(lVar9 + 0x20),
         *(float *)(lVar9 + 0x20) = fVar17, DAT_02391094 < fVar17)) {
        lVar11 = *unaff_RSI;
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + uVar8 * 8) + 0x20) = 0x3e4ccccd
        ;
      }
    }
  }
  if ((*(int *)(*local_58 + 0xc) == 0) || (*(int *)(lVar11 + 0xc) == 0)) {
    local_48[0] = '\0';
    fVar17 = (float)FUN_00d214d0();
    if ((local_48[0] != '\0') && (lVar11 != 0)) {
      fVar17 = (float)FUN_00d50b20();
    }
    goto LAB_015cb6cd;
  }
  uVar18 = FUN_00d242c0(local_58,0);
  FUN_00d242c0(uVar18,0);
  lVar11 = *local_58;
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  FUN_015f3b60();
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  local_78 = **(longlong **)(*unaff_RSI + 0x10);
  if (local_78 != 0) {
    FUN_00d50b00();
  }
  lVar11 = **(longlong **)(*local_58 + 0x10);
  if (lVar11 != 0) {
    FUN_00d50b00();
  }
  if (*(double *)(local_78 + 0x10) <= *(double *)(lVar11 + 0x10) &&
      *(double *)(lVar11 + 0x10) != *(double *)(local_78 + 0x10)) {
    local_48[0] = '\0';
    FUN_00d21140();
    if ((local_48[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23620();
    local_50 = local_78;
  }
  if ((float)local_40 * DAT_02390120 <= fVar19) {
    fVar19 = (float)local_40 * DAT_02390120;
  }
  if (*(int *)(*unaff_RSI + 0xc) != 0) {
    FUN_00d23340();
    local_38[0] = local_48[0];
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == local_78) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_78 = local_50;
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
      local_78 = local_50;
    }
    FUN_00d23340();
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == lVar11) {
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar11 = local_50;
      if (local_38[0] == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if ((double)fVar19 + *(double *)(lVar11 + 0x10) < *(double *)(local_78 + 0x10)) {
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23740();
    }
  }
  lVar9 = *unaff_RSI;
  if (*(int *)(lVar9 + 0xc) < 1) {
LAB_015cb6ab:
    fVar17 = (float)FUN_00d50b20();
  }
  else {
    lVar13 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar13 * 8);
      if (local_78 == lVar9) {
LAB_015cb5a9:
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = DAT_02394264;
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if (local_78 != 0) {
          FUN_00d50b20();
          local_78 = lVar9;
          goto LAB_015cb5a9;
        }
        iVar2 = *(int *)(lVar5 + 0xc);
        fVar17 = DAT_02394264;
        local_78 = lVar9;
      }
      DAT_02394264 = fVar17;
      if (0 < iVar2) {
        lVar9 = 0;
        local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,fVar17);
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar9 * 8);
          if (lVar11 != lVar3) {
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            bVar16 = lVar11 != 0;
            lVar11 = lVar3;
            if (bVar16) {
              FUN_00d50b20();
            }
          }
          fVar17 = (float)((uint)(float)(*(double *)(local_78 + 0x10) - *(double *)(lVar11 + 0x10))
                          & _DAT_02390140);
          if ((float)local_40 <= fVar17) {
            fVar17 = (float)local_40;
          }
          lVar9 = lVar9 + 1;
          local_40 = CONCAT44(local_40._4_4_,fVar17);
        } while (lVar9 < *(int *)(lVar5 + 0xc));
      }
      if (fVar19 < fVar17) {
        local_48[0] = '\0';
        fVar17 = (float)FUN_00d21140();
        if ((local_48[0] != '\0') && (local_78 != 0)) {
          fVar17 = (float)FUN_00d50b20();
        }
      }
      lVar13 = lVar13 + 1;
      lVar9 = *unaff_RSI;
    } while (lVar13 < *(int *)(lVar9 + 0xc));
    if (lVar11 != 0) goto LAB_015cb6ab;
  }
  if (local_78 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
  if (lVar5 != 0) {
    fVar17 = (float)FUN_00d50b20();
  }
LAB_015cb6cd:
  lVar5 = *(longlong *)(unaff_RDI + 0x68);
  if (0 < *(int *)(lVar5 + 0xc)) {
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      uVar18 = SUB84(DAT_024110e8,0);
      uVar22 = (undefined4)((ulonglong)DAT_024110e8 >> 0x20);
      dVar1 = *(double *)(lVar5 + 0x18);
      if (dVar1 <= DAT_024110e8) {
        uVar18 = SUB84(dVar1,0);
        uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      uVar24 = SUB84(DAT_02391030,0);
      uVar25 = (int)((ulonglong)DAT_02391030 >> 0x20);
      if (DAT_02391030 <= (double)CONCAT44(uVar22,uVar18)) {
        uVar24 = uVar18;
        uVar25 = uVar22;
      }
      local_40 = *(undefined8 *)(lVar5 + 0x10);
      uVar10 = -(uint)((float)(double)CONCAT44(uVar25,uVar24) <= DAT_02394270);
      fVar19 = (float)_exp2f(*(float *)(lVar5 + 0x24) * DAT_023941f4);
      fVar19 = fVar19 * DAT_023941f8;
      fVar17 = DAT_02394254;
      if (DAT_02394254 <= *(float *)(lVar5 + 0x28)) {
        fVar17 = *(float *)(lVar5 + 0x28);
      }
      fVar20 = (float)_powf(fVar17,DAT_02394288);
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_025f30f8;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
      FUN_00d500e0();
      uVar21 = (uint)SQRT((float)(double)CONCAT44(uVar25,uVar24)) & _DAT_02390140;
      uVar26 = uVar10 & DAT_023b3e04;
      fVar19 = DAT_02411264 / fVar19;
      fVar17 = DAT_02394254;
      if (DAT_02394254 <= fVar19) {
        fVar17 = fVar19;
      }
      fVar17 = (float)((uint)SQRT(fVar17) & _DAT_02390140);
      puVar6[2] = local_40;
      *(float *)(puVar6 + 4) = fVar20 * fVar17 * (float)(uVar26 | ~uVar10 & uVar21);
      local_48[0] = '\0';
      FUN_00d21140();
      if ((local_48[0] != '\0') && (puVar6 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      fVar17 = (float)FUN_00d50b20();
      lVar11 = lVar11 + 1;
      lVar5 = *(longlong *)(unaff_RDI + 0x68);
    } while (lVar11 < *(int *)(lVar5 + 0xc));
  }
  FUN_00d242c0(fVar17,0);
  if ((bVar15) && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}


