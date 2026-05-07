// Function: FUN_014ab670
// Address: 014ab670
// Size: 1968 bytes
// Class: MUElementAnalyzer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014ab670(double param_1,double param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *in_RCX;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 in_RDX;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *unaff_RDI;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong in_R8;
  ulonglong in_R9;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM4_Da;
  ulonglong local_res8;
  uint local_res10;
  undefined1 local_68 [16];
  longlong local_40;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  lVar12 = *in_RCX;
  iVar11 = *(int *)(lVar12 + 0xc);
  if (iVar11 == 0) {
    local_40 = 0;
    bVar4 = false;
LAB_014ab904:
    uVar6 = _UNK_0240f0e8;
    uVar5 = _DAT_0240f0e0;
    if ((int)local_res10 < 1) goto LAB_014abe0a;
    fVar24 = (float)param_1 / in_XMM4_Da;
    uVar9 = (ulonglong)local_res10;
    if (local_res10 < 8) {
      uVar10 = 0;
    }
    else if ((in_R8 < in_R9 + uVar9 * 4) && (in_R9 < uVar9 * 4 + in_R8)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)(local_res10 & 0xfffffff8);
      uVar13 = (uVar10 - 8 >> 3) + 1;
      uVar15 = (ulonglong)((uint)uVar13 & 3);
      if (uVar10 - 8 < 0x18) {
        lVar17 = 0;
      }
      else {
        lVar12 = -(uVar13 & 0xfffffffffffffffc);
        lVar17 = 0;
        do {
          pfVar1 = (float *)(in_R8 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x10 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x10 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x20 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x30 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x20 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x30 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x40 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x50 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x40 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x50 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          pfVar1 = (float *)(in_R8 + 0x60 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(in_R8 + 0x70 + lVar17 * 4);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(in_R9 + 0x60 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(in_R9 + 0x70 + lVar17 * 4);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          lVar17 = lVar17 + 0x20;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      uVar6 = _UNK_0240f0e8;
      uVar5 = _DAT_0240f0e0;
      if (uVar15 != 0) {
        lVar12 = in_R9 + lVar17 * 4;
        lVar14 = lVar17 * 4 + 0x10 + in_R8;
        lVar17 = 0;
        do {
          pfVar1 = (float *)(lVar14 + -0x10 + lVar17);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          pfVar1 = (float *)(lVar14 + lVar17);
          *pfVar1 = fVar24;
          pfVar1[1] = fVar24;
          pfVar1[2] = fVar24;
          pfVar1[3] = fVar24;
          puVar2 = (undefined8 *)(lVar12 + lVar17);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar17);
          *puVar2 = uVar5;
          puVar2[1] = uVar6;
          lVar17 = lVar17 + 0x20;
        } while (uVar15 << 5 != lVar17);
      }
      if (uVar10 == uVar9) goto LAB_014abc58;
    }
    uVar15 = ~uVar10;
    uVar13 = uVar9 & 3;
    if ((local_res10 & 3) != 0) {
      do {
        *(float *)(in_R8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + uVar10 * 4) = 0xb58637bd;
        uVar10 = uVar10 + 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    if (2 < uVar15 + uVar9) {
      do {
        *(float *)(in_R8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 4 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 4 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 8 + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 8 + uVar10 * 4) = 0xb58637bd;
        *(float *)(in_R8 + 0xc + uVar10 * 4) = fVar24;
        *(undefined4 *)(in_R9 + 0xc + uVar10 * 4) = 0xb58637bd;
        uVar10 = uVar10 + 4;
      } while (uVar9 != uVar10);
    }
  }
  else {
    if (iVar11 < 1) {
      local_40 = 0;
      bVar4 = false;
      uVar16 = 0;
      uVar9 = (ulonglong)local_res10;
    }
    else {
      fVar24 = DAT_02390124 / (float)iVar11;
      lVar17 = 0;
      local_68._0_4_ = DAT_0239011c;
      uVar9 = (ulonglong)local_res10;
      uVar16 = 0;
      local_40 = 0;
      bVar4 = false;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x10) + lVar17 * 8);
        if (local_40 == lVar12) {
          if ((!bVar4) && (local_40 != 0)) {
            bVar4 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar4 = true;
            local_40 = lVar12;
          }
          else {
            bVar4 = true;
            local_40 = lVar12;
          }
        }
        uVar7 = (uint)(*(double *)(local_40 + 0x20) * param_2);
        uVar8 = (uint)(*(double *)(local_40 + 0x28) * param_2);
        if ((int)local_res10 < (int)uVar8) {
          uVar8 = local_res10;
        }
        if ((int)uVar7 < (int)uVar9) {
          uVar9 = (ulonglong)uVar7;
        }
        if ((int)uVar16 < (int)uVar8) {
          uVar16 = uVar8;
        }
        FUN_014b5bc0(param_1,in_RDX,param_3,param_4,0);
        fVar18 = (float)(int)lVar17 * fVar24 * DAT_02394214 + DAT_0239011c;
        if ((DAT_02394254 < fVar18 - (float)local_68._0_4_) &&
           ((**(code **)(*unaff_RDI + 0x380))(), local_68._0_4_ = fVar18,
           *(char *)((longlong)unaff_RDI + 0x3c) != '\0')) {
          FUN_00e34a60();
          goto LAB_014abe0a;
        }
        lVar17 = lVar17 + 1;
        lVar12 = *in_RCX;
      } while (lVar17 < *(int *)(lVar12 + 0xc));
      if (*(int *)(lVar12 + 0xc) == 0) goto LAB_014ab904;
    }
    uVar8 = (uint)uVar9;
    if (0 < (int)uVar8) {
      lVar12 = (longlong)(int)uVar8;
      uVar10 = uVar9 - 1;
      if ((uVar9 & 3) != 0) {
        iVar11 = -1;
        uVar13 = 0;
        do {
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 + iVar11) * 4) =
               *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar13 = uVar13 + 1;
          iVar11 = iVar11 + -1;
        } while ((uVar9 & 3) != uVar13);
        uVar9 = uVar9 - uVar13;
        uVar8 = (uint)uVar9;
      }
      if (2 < uVar10) {
        lVar17 = uVar9 + 4;
        do {
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 1) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 2) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 3) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + (ulonglong)(uVar8 - 4) * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          lVar17 = lVar17 + -4;
          uVar8 = uVar8 - 4;
        } while (4 < lVar17);
      }
    }
    if ((int)uVar16 < (int)local_res10) {
      lVar12 = (longlong)(int)(uVar16 - 1);
      uVar9 = (ulonglong)(int)uVar16;
      uVar13 = ~uVar9;
      uVar10 = (ulonglong)(local_res10 - uVar16) & 3;
      if ((local_res10 - uVar16 & 3) != 0) {
        do {
          *(undefined4 *)(in_R8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar9 = uVar9 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      if (2 < uVar13 + (longlong)(int)local_res10) {
        do {
          *(undefined4 *)(in_R8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 4 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 8 + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          *(undefined4 *)(in_R8 + 0xc + uVar9 * 4) = *(undefined4 *)(in_R8 + lVar12 * 4);
          uVar9 = uVar9 + 4;
        } while ((longlong)(int)local_res10 != uVar9);
      }
    }
  }
LAB_014abc58:
  if (0 < (int)local_res10) {
    fVar24 = (float)param_1;
    uVar9 = (ulonglong)local_res10;
    if ((local_res10 < 4) || ((local_res8 < uVar9 * 4 + in_R8 && (in_R8 < local_res8 + uVar9 * 4))))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)(local_res10 & 0xfffffffc);
      uVar13 = 0;
      do {
        auVar19._4_4_ = fVar24;
        auVar19._0_4_ = fVar24;
        auVar19._8_4_ = fVar24;
        auVar19._12_4_ = fVar24;
        auVar19 = divps(auVar19,*(undefined1 (*) [16])(in_R8 + uVar13 * 4));
        fVar18 = auVar19._4_4_ * _UNK_02394164;
        auVar21._8_4_ = auVar19._8_4_ * _UNK_02394168;
        auVar21._12_4_ = auVar19._12_4_ * _UNK_0239416c;
        local_68._0_8_ = _logf();
        local_68._8_8_ = extraout_XMM0_Qb;
        auVar20._0_8_ = _logf();
        auVar20._8_8_ = extraout_XMM0_Qb_00;
        auVar19 = insertps(local_68,auVar20,0x10);
        auVar3._4_8_ = extraout_XMM0_Qb_00;
        auVar3._0_4_ = fVar18;
        auVar21._0_8_ = auVar3._0_8_ << 0x20;
        auVar22._0_8_ = _logf(auVar21._8_8_);
        auVar22._8_8_ = extraout_XMM0_Qb_01;
        auVar19 = insertps(auVar19,auVar22,0x20);
        auVar23._0_8_ = _logf();
        auVar23._8_8_ = extraout_XMM0_Qb_02;
        auVar19 = insertps(auVar19,auVar23,0x30);
        fVar18 = auVar19._4_4_ * _UNK_02394174;
        fVar25 = auVar19._8_4_ * _UNK_02394178;
        fVar26 = auVar19._12_4_ * _UNK_0239417c;
        pfVar1 = (float *)(local_res8 + uVar13 * 4);
        *pfVar1 = auVar19._0_4_ * _DAT_02394170;
        pfVar1[1] = fVar18;
        pfVar1[2] = fVar25;
        pfVar1[3] = fVar26;
        uVar13 = uVar13 + 4;
      } while (uVar10 != uVar13);
      if (uVar10 == uVar9) goto LAB_014abe0a;
    }
    uVar13 = ~uVar10;
    if ((local_res10 & 1) != 0) {
      fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + uVar10 * 4)) * DAT_02394204);
      *(float *)(local_res8 + uVar10 * 4) = fVar18 * DAT_02394208;
      uVar10 = uVar10 | 1;
    }
    if (uVar13 + uVar9 != 0) {
      do {
        fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + uVar10 * 4)) * DAT_02394204);
        *(float *)(local_res8 + uVar10 * 4) = fVar18 * DAT_02394208;
        fVar18 = (float)_logf((fVar24 / *(float *)(in_R8 + 4 + uVar10 * 4)) * DAT_02394204);
        *(float *)(local_res8 + 4 + uVar10 * 4) = fVar18 * DAT_02394208;
        uVar10 = uVar10 + 2;
      } while (uVar9 != uVar10);
    }
  }
LAB_014abe0a:
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


