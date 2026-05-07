// Function: FUN_01615660
// Address: 01615660
// Size: 3500 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01615846) */
/* WARNING: Removing unreachable block (ram,0x0161584f) */
/* WARNING: Removing unreachable block (ram,0x01615765) */
/* WARNING: Removing unreachable block (ram,0x0161576e) */
/* WARNING: Removing unreachable block (ram,0x016156f8) */
/* WARNING: Removing unreachable block (ram,0x01615701) */
/* WARNING: Removing unreachable block (ram,0x016157cf) */
/* WARNING: Removing unreachable block (ram,0x016157d8) */
/* WARNING: Removing unreachable block (ram,0x016158ab) */
/* WARNING: Removing unreachable block (ram,0x016158b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01615660(float param_1,undefined8 param_2,int param_3,uint param_4,longlong *param_5,
                 char param_6)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint in_ECX;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int local_res8;
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  ulonglong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_a8;
  undefined1 local_98 [16];
  float local_6c;
  longlong local_60;
  char local_58;
  float local_3c;
  longlong local_38;
  
  uVar13 = (uint)(DAT_0241141c / param_1);
  local_128 = FUN_01483610(DAT_02411408);
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if (1 < (int)uVar13) {
    uVar14 = 1;
    do {
      fVar18 = (float)_logf((float)(int)uVar14 * param_1 * DAT_02394204);
      iVar6 = FUN_01483610(fVar18 * DAT_02394208);
      fVar18 = *(float *)(*(longlong *)(*local_res18 + 0x10) + (longlong)iVar6 * 4);
      iVar6 = FUN_00e7d780(fVar18 + fVar18);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      iVar17 = iVar6 * 2;
      if (0x1e < iVar6) {
        iVar17 = 0x3c;
      }
      *(int *)(*(longlong *)(local_60 + 0x10) + uVar14 * 4) = iVar17;
      iVar6 = FUN_00e7d780(fVar18);
      if (iVar6 < 1) {
        iVar6 = 1;
      }
      iVar17 = iVar6 * 2;
      if (0xf < iVar6) {
        iVar17 = 0x1e;
      }
      *(int *)(*(longlong *)(local_60 + 0x10) + uVar14 * 4) = iVar17;
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
  }
  if ((int)param_4 < 2) {
    bVar4 = false;
    local_38 = 0;
  }
  else {
    fVar18 = DAT_02390124 / (float)local_res8;
    local_108 = CONCAT44(local_108._4_4_,param_3 + -2);
    local_f8 = CONCAT44(local_f8._4_4_,in_ECX - 1);
    local_118 = (longlong)(int)(in_ECX - 1);
    local_100 = (longlong)(int)uVar13;
    uVar14 = 1;
    iVar6 = 1;
    local_38 = 0;
    bVar4 = false;
    local_110 = (ulonglong)in_ECX;
    do {
      lVar9 = **(longlong **)(*unaff_RDI + 0x10);
      if (local_38 == lVar9) {
        lVar9 = local_38;
        bVar5 = bVar4;
        if ((!bVar4) && (local_38 != 0)) {
          FUN_00d50b00();
          bVar5 = true;
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        if ((bVar4) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar8 = FUN_015c66c0();
      fVar19 = (float)_logf(*(float *)(lVar8 + uVar14 * 4) * DAT_02394204);
      local_3c = (float)FUN_014b7610(fVar19 * DAT_02394208);
      lVar8 = FUN_015c6be0();
      iVar17 = *(int *)(lVar8 + uVar14 * 4);
      lVar8 = FUN_015c6b60();
      local_38 = lVar9;
      bVar4 = bVar5;
      if (0 < (int)in_ECX) {
        fVar19 = *(float *)(lVar8 + uVar14 * 4);
        uVar26 = 0;
        uVar27 = 0;
        uVar28 = 0;
        fVar20 = (float)iVar17 * fVar18;
        local_98 = ZEXT416((uint)fVar19);
        uVar16 = 0;
        iVar17 = iVar6;
        local_6c = local_3c;
        do {
          local_138 = local_98._0_8_;
          uStack_130 = local_98._8_8_;
          local_98._4_4_ = uVar26;
          local_98._0_4_ = fVar19;
          local_98._8_4_ = uVar27;
          local_98._12_4_ = uVar28;
          local_120 = CONCAT44(local_120._4_4_,local_3c);
          local_3c = local_6c;
          if ((longlong)uVar16 < local_118) {
            lVar9 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + 8 + uVar16 * 8);
            if (local_38 == lVar9) {
              if ((!bVar5) && (local_38 != 0)) {
                bVar5 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar5) && (local_38 != 0)) {
                FUN_00d50b20();
                bVar5 = true;
                local_38 = lVar9;
              }
              else {
                bVar5 = true;
                local_38 = lVar9;
              }
            }
          }
          lVar9 = FUN_015c66c0();
          fVar21 = (float)_logf(*(float *)(lVar9 + uVar14 * 4) * DAT_02394204);
          fVar21 = (float)FUN_014b7610(fVar21 * DAT_02394208);
          lVar9 = FUN_015c6b60();
          local_148 = ZEXT416(*(uint *)(lVar9 + uVar14 * 4));
          lVar9 = FUN_015c6be0();
          iVar2 = *(int *)(lVar9 + uVar14 * 4);
          uVar7 = FUN_00e7d780(local_6c);
          uVar1 = uVar16 + 1;
          uVar26 = local_148._4_4_;
          uVar27 = local_148._8_4_;
          uVar28 = local_148._12_4_;
          if (0.0 <= local_6c) {
            iVar11 = (int)local_6c;
            if (iVar11 <= (int)local_108) {
              fVar19 = *(float *)(*(longlong *)(*local_res10 + 0x10) + uVar16 * 4) * fVar19;
              if (DAT_0239424c <= fVar20) {
                iVar15 = (int)fVar20;
                if (iVar15 < (int)local_f8) {
                  fVar22 = local_6c - (float)iVar11;
                  fVar23 = DAT_02390124 - fVar22;
                  fVar24 = (DAT_02390124 - (fVar20 - (float)iVar15)) * fVar19;
                  lVar8 = (longlong)(iVar15 * param_3 + iVar11);
                  lVar9 = *(longlong *)(*unaff_RSI + 0x10);
                  *(float *)(lVar9 + lVar8 * 4) = fVar23 * fVar24 + *(float *)(lVar9 + lVar8 * 4);
                  lVar8 = (longlong)(iVar15 * param_3 + 1 + iVar11);
                  *(float *)(lVar9 + lVar8 * 4) = fVar24 * fVar22 + *(float *)(lVar9 + lVar8 * 4);
                  fVar20 = (fVar20 - (float)iVar15) * fVar19;
                  iVar15 = (iVar15 + 1) * param_3;
                  lVar8 = (longlong)(iVar11 + iVar15);
                  *(float *)(lVar9 + lVar8 * 4) = fVar23 * fVar20 + *(float *)(lVar9 + lVar8 * 4);
                  lVar8 = (longlong)(iVar15 + 1 + iVar11);
                  *(float *)(lVar9 + lVar8 * 4) = fVar20 * fVar22 + *(float *)(lVar9 + lVar8 * 4);
                }
              }
              if ((longlong)uVar14 < local_100) {
                auVar25._8_8_ = uStack_130;
                auVar25._0_8_ = local_138;
                fVar23 = (float)local_138 + local_148._0_4_;
                fVar20 = _DAT_023945d0;
                fVar22 = _UNK_023945d4;
                if (DAT_0239424c < fVar23) {
                  auVar25 = insertps(auVar25,local_148,0x10);
                  auVar3._4_4_ = fVar23;
                  auVar3._0_4_ = fVar23;
                  auVar3._8_4_ = (int)uStack_130;
                  auVar3._12_4_ = (int)uStack_130;
                  auVar25 = divps(auVar25,auVar3);
                  fVar20 = auVar25._0_4_;
                  fVar22 = auVar25._4_4_;
                }
                lVar9 = (longlong)iVar17;
                *(float *)(*(longlong *)(local_60 + 0x10) + lVar9 * 4) =
                     fVar22 * (fVar21 - local_6c) + (local_6c - (float)local_120) * fVar20;
                *(float *)(*(longlong *)(local_60 + 0x10) + lVar9 * 4) = fVar19;
                *(undefined4 *)(*(longlong *)(local_60 + 0x10) + lVar9 * 4) = uVar7;
              }
            }
          }
          fVar20 = (float)iVar2 * fVar18 + (float)((int)uVar16 + 1);
          iVar17 = iVar17 + uVar13;
          uVar16 = uVar1;
          fVar19 = local_148._0_4_;
          local_6c = fVar21;
          bVar4 = bVar5;
        } while (local_110 != uVar1);
      }
      uVar14 = uVar14 + 1;
      iVar6 = iVar6 + 1;
    } while (uVar14 != param_4);
  }
  if (4 < (int)in_ECX) {
    local_160 = *(longlong *)(*local_res20 + 0x10);
    local_158 = *(longlong *)(*param_5 + 0x10);
    local_150 = (longlong)param_3;
    local_168 = (ulonglong)(in_ECX - 2);
    local_a8 = (longlong)(int)uVar13 * 8 + 4;
    uVar14 = 2;
    do {
      uVar16 = uVar14 + 1;
      if (1 < (int)uVar13) {
        lVar9 = (uVar14 - 2) * local_150;
        lVar8 = (uVar14 + 2) * local_150;
        local_120 = local_158 + uVar14 * local_150 * 4;
        local_138 = local_160 + (uVar14 - 1) * local_150 * 4;
        local_118 = local_160 + uVar16 * local_150 * 4;
        local_110 = local_158 + uVar16 * local_150 * 4;
        local_108 = local_160 + lVar9 * 4;
        lVar9 = local_158 + lVar9 * 4;
        local_100 = local_160 + lVar8 * 4;
        local_f8 = local_158 + lVar8 * 4;
        lVar8 = 0;
        do {
          fVar18 = *(float *)(lVar8 + *(longlong *)(local_60 + 0x10) + local_a8);
          fVar19 = *(float *)(lVar8 + *(longlong *)(local_60 + 0x10) + local_a8) * fVar18;
          uVar26 = *(undefined4 *)(lVar8 + *(longlong *)(local_60 + 0x10) + local_a8);
          uVar27 = *(undefined4 *)(*(longlong *)(local_60 + 0x10) + 4 + lVar8);
          uVar10 = FUN_00e84250();
          FUN_015c31c0(fVar18 * DAT_02394214,uVar26,uVar27);
          FUN_015c31c0(fVar19 * DAT_02394214,uVar26,uVar27);
          fVar20 = fVar18 * DAT_02391094;
          FUN_015c31c0(fVar20,uVar26,uVar27);
          local_148._0_4_ = fVar19 * DAT_02391094;
          local_1d0 = uVar10;
          FUN_015c31c0(&local_1d0,uVar26,uVar27);
          local_1c8 = local_118;
          local_1c0 = uVar10;
          FUN_015c31c0(fVar20,uVar26,uVar27);
          local_1b8 = local_110;
          local_1b0 = uVar10;
          FUN_015c31c0(local_148._0_4_,uVar26,uVar27);
          local_1a8 = local_108;
          fVar18 = fVar18 * DAT_02391090;
          local_1a0 = uVar10;
          FUN_015c31c0(&local_1a0,uVar26,uVar27);
          fVar19 = fVar19 * DAT_02391090;
          local_198 = lVar9;
          local_190 = uVar10;
          FUN_015c31c0(&local_190,uVar26,uVar27);
          local_188 = local_100;
          local_180 = uVar10;
          FUN_015c31c0(fVar18,uVar26,uVar27);
          local_178 = local_f8;
          local_170 = uVar10;
          FUN_015c31c0(fVar19,uVar26,uVar27);
          lVar8 = lVar8 + 4;
        } while ((ulonglong)uVar13 * 4 + -4 != lVar8);
      }
      local_a8 = local_a8 + (longlong)(int)uVar13 * 4;
      uVar14 = uVar16;
    } while (uVar16 != local_168);
  }
  fVar18 = DAT_02394274;
  if (((param_6 != '\0') && (0 < (int)in_ECX)) && (-10 < (int)local_128)) {
    iVar6 = (int)local_128 + 9;
    lVar9 = 0;
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    lVar8 = *(longlong *)(*local_res20 + 0x10);
    uVar16 = 0;
    uVar14 = (ulonglong)(iVar6 + 1);
    lVar12 = lVar9;
    do {
      do {
        fVar19 = *(float *)(lVar8 + lVar9);
        if (fVar18 <= fVar19) {
          *(float *)(*(longlong *)(*param_5 + 0x10) + lVar9) =
               *(float *)(*(longlong *)(*param_5 + 0x10) + lVar9) / fVar19;
        }
        lVar9 = lVar9 + 4;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      uVar16 = uVar16 + 1;
      lVar9 = lVar12 + (longlong)param_3 * 4;
      uVar14 = (ulonglong)(iVar6 + 1);
      lVar12 = lVar9;
    } while (uVar16 != in_ECX);
  }
  if (local_60 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


