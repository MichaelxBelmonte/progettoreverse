// Function: FUN_0149ebe0
// Address: 0149ebe0
// Size: 2352 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x0149ed5a) */
/* WARNING: Removing unreachable block (ram,0x0149ed63) */
/* WARNING: Removing unreachable block (ram,0x0149eda2) */
/* WARNING: Removing unreachable block (ram,0x0149edab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0149ebe0(double param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *in_RCX;
  ulonglong uVar11;
  longlong *in_RDX;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong *unaff_RSI;
  ulonglong uVar16;
  uint uVar17;
  uint in_R8D;
  longlong lVar18;
  ulonglong uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  float fVar24;
  undefined4 in_XMM5_Da;
  undefined4 in_XMM5_Db;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  longlong local_res8;
  ulonglong local_res10;
  longlong local_res18;
  int local_res20;
  undefined1 uVar25;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  undefined4 local_a4;
  int local_88;
  longlong local_58;
  float local_44;
  
  local_b0 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_b8 = (double)CONCAT44(in_XMM5_Db,in_XMM5_Da);
  uVar13 = (ulonglong)in_R8D;
  local_a4 = param_4;
  auVar21._0_4_ = (float)_logf(in_RCX,in_RDX,param_3 / _DAT_0240e330);
  lVar6 = FUN_00e83010();
  lVar7 = FUN_00e83010();
  FUN_00d216c0();
  pcVar5 = DAT_02572370;
  if ((int)in_R8D < 1) {
    ___bzero();
    bVar3 = false;
    lVar14 = 0;
  }
  else {
    auVar21._0_4_ = auVar21._0_4_ * DAT_0240e334 * DAT_023941f0 + DAT_0239011c;
    uVar19 = 0;
    do {
      puVar8 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &DAT_02572358;
      (*pcVar5)();
      FUN_00d21140();
      lVar14 = *(longlong *)(*(longlong *)(*in_RDX + 0x10) + uVar19 * 8);
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      FUN_00d214d0();
      if (lVar14 != 0) {
        FUN_00d50b20();
      }
      iVar15 = *(int *)((longlong)puVar8 + 0xc);
      if (0 < iVar15) {
        lVar14 = 0;
        do {
          if ((int)auVar21._0_4_ <=
              *(int *)(*(longlong *)(puVar8[2] + (longlong)(int)lVar14 * 8) + 0x10)) {
            FUN_00d23620();
            lVar14 = lVar14 + -1;
            iVar15 = *(int *)((longlong)puVar8 + 0xc);
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar15);
      }
      FUN_00d50b20();
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar13);
    ___bzero();
    auVar21._0_4_ = (float)_logf(param_2 / _DAT_0240e330);
    local_88 = (int)(auVar21._0_4_ * DAT_0240e334 * DAT_023941f0 + DAT_0239011c);
    uVar19 = 0;
    lVar14 = 0;
    bVar3 = false;
    do {
      lVar9 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + uVar19 * 8);
      if (lVar14 == lVar9) {
        if ((!bVar3) && (lVar14 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar14 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar14 = lVar9;
        }
        else {
          bVar3 = true;
          lVar14 = lVar9;
        }
      }
      if (*(int *)(lVar14 + 0xc) != 0) {
        local_88 = *(int *)(**(longlong **)(lVar14 + 0x10) + 0x10);
      }
      auVar21._0_4_ = (float)_exp2f((float)local_88 / DAT_023941f0);
      lVar12 = (longlong)((double)(int)uVar19 * param_1 * local_b8);
      lVar9 = (longlong)
              ((int)((double)(float)(local_b8 / (double)(auVar21._0_4_ * _DAT_0240e330)) *
                    DAT_0240e3b0) / 2);
      uVar11 = lVar12 - lVar9;
      uVar10 = lVar9 + lVar12;
      if ((longlong)uVar11 < 0) {
        uVar11 = 0;
      }
      if ((longlong)local_res10 < (longlong)uVar10) {
        uVar10 = local_res10;
      }
      lVar9 = uVar10 - uVar11;
      if (lVar9 != 0 && (longlong)uVar11 <= (longlong)uVar10) {
        auVar21._0_4_ = 0.0;
        if (lVar9 != 0 && (longlong)uVar11 <= (longlong)uVar10) {
          uVar17 = (int)uVar10 - (int)uVar11;
          uVar16 = ~uVar11;
          if ((uVar17 & 3) == 0) {
            auVar21 = ZEXT816(0);
          }
          else {
            lVar12 = -((ulonglong)uVar17 & 3);
            auVar21 = ZEXT816(0);
            do {
              fVar24 = *(float *)(local_res8 + uVar11 * 4);
              auVar21._0_4_ =
                   auVar21._0_4_ +
                   (float)(~-(uint)(0.0 < fVar24) & ((uint)fVar24 ^ _DAT_023945e0) |
                          (uint)fVar24 & -(uint)(0.0 < fVar24));
              uVar11 = uVar11 + 1;
              lVar12 = lVar12 + 1;
            } while (lVar12 != 0);
          }
          if (2 < uVar16 + uVar10) {
            do {
              fVar24 = *(float *)(local_res8 + uVar11 * 4);
              fVar2 = *(float *)(local_res8 + 4 + uVar11 * 4);
              fVar20 = auVar21._0_4_;
              auVar21._0_4_ = *(float *)(local_res8 + 8 + uVar11 * 4);
              fVar1 = *(float *)(local_res8 + 0xc + uVar11 * 4);
              auVar22._0_4_ = ~-(uint)(0.0 < fVar1) & ((uint)fVar1 ^ _DAT_023945e0);
              auVar22._4_4_ = _UNK_023945e4;
              auVar22._8_4_ = _UNK_023945e8;
              auVar22._12_4_ = _UNK_023945ec;
              auVar22 = auVar22 | ZEXT416((uint)fVar1 & -(uint)(0.0 < fVar1));
              auVar21._4_12_ = auVar22._4_12_;
              auVar21._0_4_ =
                   auVar22._0_4_ +
                   (float)(~-(uint)(0.0 < auVar21._0_4_) & ((uint)auVar21._0_4_ ^ _DAT_023945e0) |
                          (uint)auVar21._0_4_ & -(uint)(0.0 < auVar21._0_4_)) +
                   (float)(~-(uint)(0.0 < fVar2) & ((uint)fVar2 ^ _DAT_023945e0) |
                          (uint)fVar2 & -(uint)(0.0 < fVar2)) +
                   (float)(~-(uint)(0.0 < fVar24) & ((uint)fVar24 ^ _DAT_023945e0) |
                          (uint)fVar24 & -(uint)(0.0 < fVar24)) + fVar20;
              uVar11 = uVar11 + 4;
            } while (uVar10 != uVar11);
          }
        }
        *(float *)(lVar6 + uVar19 * 4) = auVar21._0_4_ / (float)lVar9;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar13);
  }
  local_58 = (longlong)(int)in_R8D;
  local_c8 = lVar6;
  FUN_015c1500(0,uVar13,0);
  ___bzero();
  if (0 < (int)in_R8D) {
    lVar12 = 0;
    lVar9 = 0;
    do {
      lVar18 = *(longlong *)(*(longlong *)(*in_RCX + 0x10) + (lVar12 >> 0x1d));
      if (lVar14 == lVar18) {
        if ((!bVar3) && (lVar14 != 0)) {
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else {
        if (lVar18 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar14 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar14 = lVar18;
        }
        else {
          bVar3 = true;
          lVar14 = lVar18;
        }
      }
      if (*(int *)(lVar14 + 0xc) != 0) {
        *(undefined4 *)(lVar7 + lVar9 * 4) = *(undefined4 *)(**(longlong **)(lVar14 + 0x10) + 0x1c);
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x100000000;
    } while (local_58 != lVar9);
  }
  local_c0 = lVar7;
  FUN_015c1580(1,uVar13);
  FUN_014a8cc0(DAT_0238fee8 / param_1,lVar6,DAT_023b3888,uVar13);
  lVar6 = *in_RCX;
  uVar25 = 0;
  FUN_014b3460();
  lVar9 = *unaff_RSI;
  if (*(int *)(lVar9 + 0xc) < 1) {
    bVar4 = false;
    lVar12 = 0;
  }
  else {
    lVar18 = 0;
    lVar12 = 0;
    bVar4 = false;
    local_44 = param_2;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar18 * 8);
      if (lVar12 == lVar9) {
        if ((!bVar4) && (lVar12 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (lVar12 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar12 = lVar9;
        }
        else {
          bVar4 = true;
          lVar12 = lVar9;
        }
      }
      local_e8 = *in_RCX;
      local_e0 = 0;
      local_d0 = 0;
      local_d8 = lVar12;
      FUN_014b3ce0(param_1,&local_e8,&local_d8,1,lVar6,uVar25);
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      auVar21._0_4_ = *(float *)(lVar12 + 0x38);
      if (*(float *)(lVar12 + 0x38) <= 0.0) {
        *(float *)(lVar12 + 0x38) = local_44;
        auVar21._0_4_ = local_44;
      }
      lVar18 = lVar18 + 1;
      lVar9 = *unaff_RSI;
      local_44 = auVar21._0_4_;
    } while (lVar18 < *(int *)(lVar9 + 0xc));
  }
  if ((local_res18 != 0) && (0 < local_res20)) {
    auVar21._0_4_ = (float)(int)in_R8D + DAT_02390d00;
    lVar6 = 0;
    do {
      dVar23 = ((double)lVar6 / local_b0) / param_1;
      fVar24 = (float)dVar23;
      iVar15 = (int)dVar23;
      if ((int)(in_R8D - 2) < iVar15) {
        iVar15 = in_R8D - 2;
        fVar24 = auVar21._0_4_;
      }
      fVar2 = *(float *)(lVar7 + (longlong)iVar15 * 4);
      *(float *)(local_res18 + lVar6 * 4) =
           (*(float *)(lVar7 + 4 + (longlong)iVar15 * 4) - fVar2) * (fVar24 - (float)iVar15) + fVar2
      ;
      lVar6 = lVar6 + 1;
    } while (local_res20 != lVar6);
  }
  FUN_00e83070();
  FUN_00e83070();
  if ((bVar3) && (lVar14 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  return;
}


