// Function: FUN_015b7fe0
// Address: 015b7fe0
// Size: 607 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b823d) */
/* WARNING: Removing unreachable block (ram,0x015b8021) */
/* WARNING: Removing unreachable block (ram,0x015b802a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015b7fe0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong local_38;
  char local_30;
  
  FUN_00c8e690();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  auVar16 = _DAT_02416630;
  uVar4 = *(uint *)(unaff_RDI + 0x44);
  uVar13 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) goto LAB_015b8207;
  uVar5 = *(ulonglong *)(*unaff_RSI + 0x10);
  uVar6 = *(ulonglong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10);
  uVar7 = *(ulonglong *)(local_38 + 0x10);
  if (uVar4 < 8) {
    uVar12 = 0;
  }
  else {
    uVar9 = uVar7 + uVar13 * 4;
    uVar12 = 0;
    if ((uVar5 + uVar13 * 4 <= uVar7 || uVar9 <= uVar5) &&
       (uVar6 + uVar13 * 4 <= uVar7 || uVar9 <= uVar6)) {
      uVar12 = (ulonglong)(uVar4 & 0xfffffff8);
      uVar9 = (uVar12 - 8 >> 3) + 1;
      if (uVar12 - 8 == 0) {
        lVar11 = 0;
LAB_015b81cd:
        pfVar1 = (float *)(uVar5 + lVar11 * 4);
        pfVar3 = (float *)(uVar5 + 0x10 + lVar11 * 4);
        pfVar2 = (float *)(uVar6 + lVar11 * 4);
        auVar18._0_4_ = *pfVar2 * *pfVar1;
        auVar18._4_4_ = pfVar2[1] * pfVar1[1];
        auVar18._8_4_ = pfVar2[2] * pfVar1[2];
        auVar18._12_4_ = pfVar2[3] * pfVar1[3];
        pfVar1 = (float *)(uVar6 + 0x10 + lVar11 * 4);
        auVar20 = maxps(_DAT_02416630,auVar18);
        auVar16._4_4_ = pfVar1[1] * pfVar3[1];
        auVar16._0_4_ = *pfVar1 * *pfVar3;
        auVar16._8_4_ = pfVar1[2] * pfVar3[2];
        auVar16._12_4_ = pfVar1[3] * pfVar3[3];
        auVar16 = maxps(_DAT_02416630,auVar16);
        *(undefined1 (*) [16])(uVar7 + lVar11 * 4) = auVar20;
        *(undefined1 (*) [16])(uVar7 + 0x10 + lVar11 * 4) = auVar16;
      }
      else {
        lVar10 = -(uVar9 & 0xfffffffffffffffe);
        lVar11 = 0;
        do {
          pfVar1 = (float *)(uVar5 + lVar11 * 4);
          pfVar3 = (float *)(uVar5 + 0x10 + lVar11 * 4);
          pfVar2 = (float *)(uVar6 + lVar11 * 4);
          auVar19._0_4_ = *pfVar2 * *pfVar1;
          auVar19._4_4_ = pfVar2[1] * pfVar1[1];
          auVar19._8_4_ = pfVar2[2] * pfVar1[2];
          auVar19._12_4_ = pfVar2[3] * pfVar1[3];
          pfVar1 = (float *)(uVar6 + 0x10 + lVar11 * 4);
          auVar20._0_4_ = *pfVar1 * *pfVar3;
          auVar20._4_4_ = pfVar1[1] * pfVar3[1];
          auVar20._8_4_ = pfVar1[2] * pfVar3[2];
          auVar20._12_4_ = pfVar1[3] * pfVar3[3];
          auVar17 = maxps(auVar16,auVar19);
          auVar20 = maxps(auVar16,auVar20);
          *(undefined1 (*) [16])(uVar7 + lVar11 * 4) = auVar17;
          *(undefined1 (*) [16])(uVar7 + 0x10 + lVar11 * 4) = auVar20;
          pfVar1 = (float *)(uVar5 + 0x20 + lVar11 * 4);
          pfVar2 = (float *)(uVar5 + 0x30 + lVar11 * 4);
          pfVar3 = (float *)(uVar6 + 0x20 + lVar11 * 4);
          auVar21._0_4_ = *pfVar3 * *pfVar1;
          auVar21._4_4_ = pfVar3[1] * pfVar1[1];
          auVar21._8_4_ = pfVar3[2] * pfVar1[2];
          auVar21._12_4_ = pfVar3[3] * pfVar1[3];
          pfVar1 = (float *)(uVar6 + 0x30 + lVar11 * 4);
          auVar17._0_4_ = *pfVar1 * *pfVar2;
          auVar17._4_4_ = pfVar1[1] * pfVar2[1];
          auVar17._8_4_ = pfVar1[2] * pfVar2[2];
          auVar17._12_4_ = pfVar1[3] * pfVar2[3];
          auVar20 = maxps(auVar16,auVar21);
          auVar17 = maxps(auVar16,auVar17);
          *(undefined1 (*) [16])(uVar7 + 0x20 + lVar11 * 4) = auVar20;
          *(undefined1 (*) [16])(uVar7 + 0x30 + lVar11 * 4) = auVar17;
          lVar11 = lVar11 + 0x10;
          lVar10 = lVar10 + 2;
        } while (lVar10 != 0);
        if ((uVar9 & 1) != 0) goto LAB_015b81cd;
      }
      if (uVar12 == uVar13) goto LAB_015b8207;
    }
  }
  uVar9 = ~uVar12;
  if ((uVar4 & 1) != 0) {
    fVar14 = *(float *)(uVar5 + uVar12 * 4) * *(float *)(uVar6 + uVar12 * 4);
    fVar8 = DAT_0240d16c;
    if (DAT_0240d16c <= fVar14) {
      fVar8 = fVar14;
    }
    *(float *)(uVar7 + uVar12 * 4) = fVar8;
    uVar12 = uVar12 | 1;
  }
  fVar8 = DAT_0240d16c;
  if (uVar9 + uVar13 != 0) {
    do {
      fVar15 = *(float *)(uVar5 + uVar12 * 4) * *(float *)(uVar6 + uVar12 * 4);
      fVar14 = fVar8;
      if (fVar8 <= fVar15) {
        fVar14 = fVar15;
      }
      *(float *)(uVar7 + uVar12 * 4) = fVar14;
      fVar15 = *(float *)(uVar5 + 4 + uVar12 * 4) * *(float *)(uVar6 + 4 + uVar12 * 4);
      fVar14 = fVar8;
      if (fVar8 <= fVar15) {
        fVar14 = fVar15;
      }
      *(float *)(uVar7 + 4 + uVar12 * 4) = fVar14;
      uVar12 = uVar12 + 2;
    } while (uVar13 != uVar12);
  }
LAB_015b8207:
  FUN_015b7cb0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}


