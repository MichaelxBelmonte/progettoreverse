// Function: FUN_015be4d0
// Address: 015be4d0
// Size: 1212 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015be6ff) */
/* WARNING: Removing unreachable block (ram,0x015be708) */
/* WARNING: Removing unreachable block (ram,0x015be987) */
/* WARNING: Removing unreachable block (ram,0x015be528) */
/* WARNING: Removing unreachable block (ram,0x015be531) */
/* WARNING: Removing unreachable block (ram,0x015be7f8) */
/* WARNING: Removing unreachable block (ram,0x015be805) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015be4d0(float param_1,undefined8 param_2,size_t param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  void *in_RCX;
  ulonglong uVar12;
  longlong *unaff_RSI;
  ulonglong uVar13;
  longlong lVar14;
  longlong unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x40) == 3) {
    return;
  }
  uVar5 = *(uint *)(unaff_RDI + 0x44);
  uVar17 = (ulonglong)uVar5;
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_40 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((ulonglong)((*(uint *)(local_40 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  if (((*(longlong *)(unaff_RDI + 0x50) != 0) && (*(longlong *)(unaff_RDI + 0x58) != 0)) &&
     (0 < (int)uVar5)) {
    uVar6 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
    uVar7 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x50) + 0x10);
    uVar12 = *(ulonglong *)(local_40 + 0x10);
    if (uVar5 < 4) {
      uVar13 = 0;
    }
    else {
      uVar15 = uVar12 + uVar17 * 4;
      uVar13 = 0;
      if ((uVar7 + uVar17 * 4 <= uVar12 || uVar15 <= uVar7) &&
         (uVar6 + uVar17 * 4 <= uVar12 || uVar15 <= uVar6)) {
        uVar13 = (ulonglong)(uVar5 & 0xfffffffc);
        uVar15 = (uVar13 - 4 >> 2) + 1;
        if (uVar13 - 4 == 0) {
          lVar14 = 0;
        }
        else {
          lVar16 = -(uVar15 & 0xfffffffffffffffe);
          lVar14 = 0;
          do {
            auVar21 = divps(*(undefined1 (*) [16])(uVar7 + lVar14 * 4),
                            *(undefined1 (*) [16])(uVar6 + lVar14 * 4));
            *(undefined1 (*) [16])(uVar12 + lVar14 * 4) = auVar21;
            auVar21 = divps(*(undefined1 (*) [16])(uVar7 + 0x10 + lVar14 * 4),
                            *(undefined1 (*) [16])(uVar6 + 0x10 + lVar14 * 4));
            *(undefined1 (*) [16])(uVar12 + 0x10 + lVar14 * 4) = auVar21;
            lVar14 = lVar14 + 8;
            lVar16 = lVar16 + 2;
          } while (lVar16 != 0);
        }
        if ((uVar15 & 1) != 0) {
          auVar21 = divps(*(undefined1 (*) [16])(uVar7 + lVar14 * 4),
                          *(undefined1 (*) [16])(uVar6 + lVar14 * 4));
          *(undefined1 (*) [16])(uVar12 + lVar14 * 4) = auVar21;
        }
        if (uVar13 == uVar17) goto LAB_015be6bd;
      }
    }
    uVar15 = ~uVar13;
    if ((uVar5 & 1) != 0) {
      *(float *)(uVar12 + uVar13 * 4) =
           *(float *)(uVar7 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4);
      uVar13 = uVar13 | 1;
    }
    if (uVar15 + uVar17 != 0) {
      do {
        *(float *)(uVar12 + uVar13 * 4) =
             *(float *)(uVar7 + uVar13 * 4) / *(float *)(uVar6 + uVar13 * 4);
        *(float *)(uVar12 + 4 + uVar13 * 4) =
             *(float *)(uVar7 + 4 + uVar13 * 4) / *(float *)(uVar6 + 4 + uVar13 * 4);
        uVar13 = uVar13 + 2;
      } while (uVar17 != uVar13);
    }
  }
LAB_015be6bd:
  **(undefined4 **)(*unaff_RSI + 0x10) = (*(undefined4 **)(*unaff_RSI + 0x10))[1];
  FUN_00c8e4f0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  auVar21 = _DAT_02416630;
  if ((int)uVar5 < 1) goto LAB_015be8e7;
  uVar6 = *(ulonglong *)(local_40 + 0x10);
  uVar7 = *(ulonglong *)(local_40 + 0x10);
  if ((uVar5 < 8) || ((uVar7 < uVar6 + uVar17 * 4 && (uVar6 < uVar7 + uVar17 * 4)))) {
    uVar12 = 0;
  }
  else {
    uVar12 = (ulonglong)(uVar5 & 0xfffffff8);
    uVar15 = (uVar12 - 8 >> 3) + 1;
    if (uVar12 - 8 == 0) {
      lVar14 = 0;
LAB_015be8ad:
      pfVar1 = (float *)(uVar6 + lVar14 * 4);
      pfVar3 = (float *)(uVar6 + 0x10 + lVar14 * 4);
      pfVar2 = (float *)(uVar7 + lVar14 * 4);
      pfVar4 = (float *)(uVar7 + 0x10 + lVar14 * 4);
      auVar19._0_4_ = *pfVar4 * *pfVar3;
      auVar19._4_4_ = pfVar4[1] * pfVar3[1];
      auVar19._8_4_ = pfVar4[2] * pfVar3[2];
      auVar19._12_4_ = pfVar4[3] * pfVar3[3];
      auVar21._4_4_ = pfVar2[1] * pfVar1[1];
      auVar21._0_4_ = *pfVar2 * *pfVar1;
      auVar21._8_4_ = pfVar2[2] * pfVar1[2];
      auVar21._12_4_ = pfVar2[3] * pfVar1[3];
      auVar23 = maxps(_DAT_02416630,auVar21);
      auVar21 = maxps(_DAT_02416630,auVar19);
      *(undefined1 (*) [16])(uVar7 + lVar14 * 4) = auVar23;
      *(undefined1 (*) [16])(uVar7 + 0x10 + lVar14 * 4) = auVar21;
    }
    else {
      lVar16 = -(uVar15 & 0xfffffffffffffffe);
      lVar14 = 0;
      do {
        pfVar1 = (float *)(uVar6 + lVar14 * 4);
        pfVar3 = (float *)(uVar6 + 0x10 + lVar14 * 4);
        pfVar2 = (float *)(uVar7 + lVar14 * 4);
        auVar22._0_4_ = *pfVar2 * *pfVar1;
        auVar22._4_4_ = pfVar2[1] * pfVar1[1];
        auVar22._8_4_ = pfVar2[2] * pfVar1[2];
        auVar22._12_4_ = pfVar2[3] * pfVar1[3];
        pfVar1 = (float *)(uVar7 + 0x10 + lVar14 * 4);
        auVar24._0_4_ = *pfVar1 * *pfVar3;
        auVar24._4_4_ = pfVar1[1] * pfVar3[1];
        auVar24._8_4_ = pfVar1[2] * pfVar3[2];
        auVar24._12_4_ = pfVar1[3] * pfVar3[3];
        pfVar1 = (float *)(uVar7 + 0x20 + lVar14 * 4);
        fVar8 = pfVar1[1];
        fVar18 = pfVar1[2];
        fVar20 = pfVar1[3];
        pfVar2 = (float *)(uVar7 + 0x30 + lVar14 * 4);
        fVar9 = pfVar2[1];
        fVar10 = pfVar2[2];
        fVar11 = pfVar2[3];
        auVar25 = maxps(auVar21,auVar22);
        auVar23 = maxps(auVar21,auVar24);
        *(undefined1 (*) [16])(uVar7 + lVar14 * 4) = auVar25;
        *(undefined1 (*) [16])(uVar7 + 0x10 + lVar14 * 4) = auVar23;
        pfVar3 = (float *)(uVar6 + 0x20 + lVar14 * 4);
        auVar25._0_4_ = *pfVar3 * *pfVar1;
        auVar25._4_4_ = pfVar3[1] * fVar8;
        auVar25._8_4_ = pfVar3[2] * fVar18;
        auVar25._12_4_ = pfVar3[3] * fVar20;
        pfVar1 = (float *)(uVar6 + 0x30 + lVar14 * 4);
        auVar24 = maxps(auVar21,auVar25);
        auVar23._4_4_ = pfVar1[1] * fVar9;
        auVar23._0_4_ = *pfVar1 * *pfVar2;
        auVar23._8_4_ = pfVar1[2] * fVar10;
        auVar23._12_4_ = pfVar1[3] * fVar11;
        auVar23 = maxps(auVar21,auVar23);
        *(undefined1 (*) [16])(uVar7 + 0x20 + lVar14 * 4) = auVar24;
        *(undefined1 (*) [16])(uVar7 + 0x30 + lVar14 * 4) = auVar23;
        lVar14 = lVar14 + 0x10;
        lVar16 = lVar16 + 2;
      } while (lVar16 != 0);
      if ((uVar15 & 1) != 0) goto LAB_015be8ad;
    }
    if (uVar12 == uVar17) goto LAB_015be8e7;
  }
  uVar15 = ~uVar12;
  if ((uVar5 & 1) != 0) {
    fVar18 = *(float *)(uVar6 + uVar12 * 4) * *(float *)(uVar7 + uVar12 * 4);
    fVar8 = DAT_0240d16c;
    if (DAT_0240d16c <= fVar18) {
      fVar8 = fVar18;
    }
    *(float *)(uVar7 + uVar12 * 4) = fVar8;
    uVar12 = uVar12 | 1;
  }
  fVar8 = DAT_0240d16c;
  if (uVar15 + uVar17 != 0) {
    do {
      fVar20 = *(float *)(uVar6 + uVar12 * 4) * *(float *)(uVar7 + uVar12 * 4);
      fVar18 = fVar8;
      if (fVar8 <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(uVar7 + uVar12 * 4) = fVar18;
      fVar20 = *(float *)(uVar6 + 4 + uVar12 * 4) * *(float *)(uVar7 + 4 + uVar12 * 4);
      fVar18 = fVar8;
      if (fVar8 <= fVar20) {
        fVar18 = fVar20;
      }
      *(float *)(uVar7 + 4 + uVar12 * 4) = fVar18;
      uVar12 = uVar12 + 2;
    } while (uVar17 != uVar12);
  }
LAB_015be8e7:
  if ((*(float *)(unaff_RDI + 0x8c) != param_1) ||
     (NAN(*(float *)(unaff_RDI + 0x8c)) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(unaff_RDI + 0x8c) = param_1;
    FUN_00d64910();
  }
  FUN_015ba230();
  FUN_015b7cb0();
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


