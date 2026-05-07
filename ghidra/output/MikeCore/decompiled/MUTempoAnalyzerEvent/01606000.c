// Function: FUN_01606000
// Address: 01606000
// Size: 1215 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x016062d0) */
/* WARNING: Removing unreachable block (ram,0x016062d9) */

undefined8 FUN_01606000(float param_1,float param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char in_CL;
  int iVar4;
  longlong lVar5;
  int in_EDX;
  int iVar6;
  longlong lVar7;
  int unaff_ESI;
  int iVar8;
  int iVar9;
  longlong *unaff_RDI;
  int iVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar17 [12];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  longlong local_50;
  char local_48;
  ulonglong uVar16;
  
  if ((DAT_028ad780 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    DAT_028ad778 = '\0';
    DAT_028ad770 = 0;
    ___cxa_atexit(extraout_XMM0_Da,0);
    ___cxa_guard_release();
  }
  if (DAT_028ad770 == 0) {
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar1 = DAT_028ad770;
    if (DAT_028ad770 == local_50) {
      if (DAT_028ad778 == '\0') goto LAB_0160633c;
      FUN_00d50b20();
    }
    else {
      DAT_028ad770 = local_50;
      if ((DAT_028ad778 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_0160633c:
      DAT_028ad778 = '\x01';
    }
    puVar3 = *(undefined8 **)(DAT_028ad770 + 0x10);
    *puVar3 = 0x3f8000003f800000;
    *(undefined4 *)(puVar3 + 1) = 0x3f000000;
  }
  if (in_CL != '\0') {
    iVar6 = (int)param_1;
    iVar4 = 0;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    iVar8 = unaff_ESI + -2;
    iVar9 = iVar4;
    if (iVar8 < iVar4) {
      iVar9 = iVar8;
    }
    fVar11 = (float)*(int *)(param_4 + 4) + param_2;
    fVar19 = 0.0;
    fVar20 = 0.0;
    if (fVar11 < (float)in_EDX) {
      uVar16 = 0;
      if (-1 < iVar6) {
        uVar16 = (ulonglong)(uint)param_1;
      }
      auVar17._8_4_ = 0;
      auVar17._0_8_ = uVar16;
      if (iVar8 < iVar4) {
        auVar17._0_4_ = (float)(unaff_ESI + -1);
        auVar17._4_8_ = 0;
      }
      iVar6 = in_EDX + -2;
      fVar19 = 0.0;
      iVar4 = 0;
      if (-1 < (int)fVar11) {
        fVar19 = fVar11;
        iVar4 = (int)fVar11;
      }
      fVar11 = (float)(in_EDX + -1);
      iVar8 = iVar9 * in_EDX;
      iVar10 = (iVar9 + 1) * in_EDX;
      fVar15 = auVar17._0_4_ - (float)iVar9;
      fVar20 = fVar11;
      iVar9 = iVar6;
      if (iVar4 <= iVar6) {
        fVar20 = fVar19;
        iVar9 = iVar4;
      }
      lVar1 = *(longlong *)(*param_3 + 0x10);
      lVar7 = (longlong)(iVar9 + 1 + iVar10);
      auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + lVar7 * 4)),
                         *(undefined4 *)(lVar1 + (longlong)(iVar9 + iVar10) * 4),0x10);
      lVar5 = (longlong)(iVar9 + 1 + iVar8);
      auVar24 = insertps(ZEXT416(*(uint *)(lVar1 + lVar5 * 4)),
                         *(undefined4 *)(lVar1 + (longlong)(iVar9 + iVar8) * 4),0x10);
      fVar18 = auVar17._8_4_;
      auVar25._0_4_ = (auVar21._0_4_ - auVar24._0_4_) * fVar15 + auVar24._0_4_;
      auVar25._4_4_ = (auVar21._4_4_ - auVar24._4_4_) * fVar15 + auVar24._4_4_;
      auVar25._8_4_ = (auVar21._8_4_ - auVar24._8_4_) * fVar18 + auVar24._8_4_;
      auVar25._12_4_ = (auVar21._12_4_ - auVar24._12_4_) * fVar18 + auVar24._12_4_;
      auVar21._4_12_ = auVar25._4_12_;
      auVar21._0_4_ =
           ((auVar25._0_4_ - auVar25._4_4_) * (fVar20 - (float)iVar9) + auVar25._4_4_) *
           *(float *)(*(longlong *)(DAT_028ad770 + 0x10) + 4);
      lVar2 = *(longlong *)(*unaff_RDI + 0x10);
      auVar25 = insertps(ZEXT416(*(uint *)(lVar2 + lVar7 * 4)),
                         *(undefined4 *)(lVar2 + (longlong)(iVar9 + iVar10) * 4),0x10);
      auVar26 = insertps(ZEXT416(*(uint *)(lVar2 + lVar5 * 4)),
                         *(undefined4 *)(lVar2 + (longlong)(iVar9 + iVar8) * 4),0x10);
      auVar24._0_4_ = (auVar25._0_4_ - auVar26._0_4_) * fVar15 + auVar26._0_4_;
      auVar24._4_4_ = (auVar25._4_4_ - auVar26._4_4_) * fVar15 + auVar26._4_4_;
      auVar24._8_4_ = (auVar25._8_4_ - auVar26._8_4_) * fVar18 + auVar26._8_4_;
      auVar24._12_4_ = (auVar25._12_4_ - auVar26._12_4_) * fVar18 + auVar26._12_4_;
      auVar26._4_12_ = auVar24._4_12_;
      auVar26._0_4_ =
           ((auVar24._0_4_ - auVar24._4_4_) * (fVar20 - (float)iVar9) + auVar24._4_4_) *
           auVar21._0_4_;
      auVar21 = insertps(auVar26,auVar21,0x10);
      fVar19 = auVar21._0_4_ + 0.0;
      fVar20 = auVar21._4_4_ + 0.0;
      param_2 = (float)*(int *)(param_4 + 8) + param_2;
      if (param_2 < (float)in_EDX) {
        fVar12 = 0.0;
        iVar4 = 0;
        if (-1 < (int)param_2) {
          fVar12 = param_2;
          iVar4 = (int)param_2;
        }
        if (iVar4 <= iVar6) {
          fVar11 = fVar12;
          iVar6 = iVar4;
        }
        lVar5 = (longlong)(iVar6 + 1 + iVar8);
        lVar7 = (longlong)(iVar6 + 1 + iVar10);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + lVar7 * 4)),
                           *(undefined4 *)(lVar1 + (longlong)(iVar6 + iVar10) * 4),0x10);
        auVar25 = insertps(ZEXT416(*(uint *)(lVar1 + lVar5 * 4)),
                           *(undefined4 *)(lVar1 + (longlong)(iVar6 + iVar8) * 4),0x10);
        auVar13._0_4_ = (auVar21._0_4_ - auVar25._0_4_) * fVar15 + auVar25._0_4_;
        auVar13._4_4_ = (auVar21._4_4_ - auVar25._4_4_) * fVar15 + auVar25._4_4_;
        auVar13._8_4_ = (auVar21._8_4_ - auVar25._8_4_) * fVar18 + auVar25._8_4_;
        auVar13._12_4_ = (auVar21._12_4_ - auVar25._12_4_) * fVar18 + auVar25._12_4_;
        auVar14._4_12_ = auVar13._4_12_;
        auVar14._0_4_ =
             ((auVar13._0_4_ - auVar13._4_4_) * (fVar11 - (float)iVar6) + auVar13._4_4_) *
             *(float *)(*(longlong *)(DAT_028ad770 + 0x10) + 8);
        auVar21 = insertps(ZEXT416(*(uint *)(lVar2 + lVar7 * 4)),
                           *(undefined4 *)(lVar2 + (longlong)(iVar6 + iVar10) * 4),0x10);
        auVar25 = insertps(ZEXT416(*(uint *)(lVar2 + lVar5 * 4)),
                           *(undefined4 *)(lVar2 + (longlong)(iVar6 + iVar8) * 4),0x10);
        auVar22._0_4_ = (auVar21._0_4_ - auVar25._0_4_) * fVar15 + auVar25._0_4_;
        auVar22._4_4_ = (auVar21._4_4_ - auVar25._4_4_) * fVar15 + auVar25._4_4_;
        auVar22._8_4_ = (auVar21._8_4_ - auVar25._8_4_) * fVar18 + auVar25._8_4_;
        auVar22._12_4_ = (auVar21._12_4_ - auVar25._12_4_) * fVar18 + auVar25._12_4_;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ =
             ((auVar22._0_4_ - auVar22._4_4_) * (fVar11 - (float)iVar6) + auVar22._4_4_) *
             auVar14._0_4_;
        auVar21 = insertps(auVar23,auVar14,0x10);
        fVar19 = fVar19 + auVar21._0_4_;
        fVar20 = fVar20 + auVar21._4_4_;
      }
    }
    fVar15 = 0.0;
    fVar11 = 0.0;
    if (0.0 < fVar20) {
      fVar15 = fVar19 / fVar20;
      fVar11 = fVar20;
    }
    goto LAB_01606438;
  }
  iVar4 = (int)param_1;
  iVar6 = (int)param_2;
  if (iVar4 < 0) {
    iVar4 = 0;
    param_1 = 0.0;
    if (iVar6 < 0) goto LAB_01606397;
LAB_01606455:
    if (unaff_ESI + -2 < iVar4) {
LAB_016063a2:
      iVar4 = unaff_ESI + -2;
      param_1 = (float)(unaff_ESI + -1);
    }
  }
  else {
    if (-1 < iVar6) goto LAB_01606455;
LAB_01606397:
    iVar6 = 0;
    param_2 = 0.0;
    if (unaff_ESI + -2 < iVar4) goto LAB_016063a2;
  }
  if (in_EDX + -2 < iVar6) {
    param_2 = (float)(in_EDX + -1);
    iVar6 = in_EDX + -2;
  }
  lVar1 = *(longlong *)(*unaff_RDI + 0x10);
  iVar9 = (iVar4 + 1) * in_EDX;
  auVar21 = insertps(ZEXT416(*(uint *)(lVar1 + (longlong)(iVar9 + 1 + iVar6) * 4)),
                     *(undefined4 *)(lVar1 + (longlong)(iVar9 + iVar6) * 4),0x10);
  auVar25 = insertps(ZEXT416(*(uint *)(lVar1 + (longlong)(iVar4 * in_EDX + iVar6 + 1) * 4)),
                     *(undefined4 *)(lVar1 + (longlong)(iVar4 * in_EDX + iVar6) * 4),0x10);
  fVar11 = (param_1 - (float)iVar4) * (auVar21._4_4_ - auVar25._4_4_) + auVar25._4_4_;
  fVar15 = (((param_1 - (float)iVar4) * (auVar21._0_4_ - auVar25._0_4_) + auVar25._0_4_) - fVar11) *
           (param_2 - (float)iVar6) + fVar11;
LAB_01606438:
  return CONCAT44(fVar11,fVar15);
}


