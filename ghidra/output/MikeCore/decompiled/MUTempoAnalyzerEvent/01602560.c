// Function: FUN_01602560
// Address: 01602560
// Size: 654 bytes
// Class: MUTempoAnalyzerEvent


/* WARNING: Removing unreachable block (ram,0x016027f7) */
/* WARNING: Removing unreachable block (ram,0x016025d2) */
/* WARNING: Removing unreachable block (ram,0x016025db) */

longlong * FUN_01602560(float param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  float *pfVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  longlong local_48;
  char local_40;
  
  iVar26 = (int)((double)param_1 + DAT_0241b698);
  uVar25 = iVar26 * 2 + 1;
  uVar18 = 1;
  if (0 < (int)uVar25) {
    uVar18 = (ulonglong)uVar25;
  }
  FUN_00c8e690();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  if ((int)uVar25 < 2) {
    **(undefined4 **)(local_48 + 0x10) = 0x3f800000;
    goto LAB_016027d7;
  }
  lVar19 = FUN_00e84280();
  iVar17 = FUN_00e84a40();
  fVar27 = DAT_02390124;
  lVar2 = *(longlong *)(local_48 + 0x10);
  lVar24 = (longlong)((iVar26 * 2 - ((int)uVar25 >> 0x1f)) + 1 >> 1);
  if (iVar26 < 1) {
    *(undefined4 *)(lVar2 + lVar24 * 4) = 0x3f800000;
  }
  else {
    pfVar21 = (float *)(lVar2 + lVar24 * 4);
    fVar27 = 0.0;
    uVar22 = 1;
    do {
      pfVar21 = pfVar21 + -1;
      iVar20 = (int)((float)(int)uVar22 * ((float)(iVar17 / 2) / param_1)) + iVar17 / 2;
      fVar28 = 0.0;
      if (iVar20 < iVar17) {
        fVar28 = *(float *)(lVar19 + (longlong)iVar20 * 4);
      }
      *pfVar21 = fVar28;
      *(float *)(lVar2 + lVar24 * 4 + uVar22 * 4) = fVar28;
      fVar27 = fVar27 + fVar28 + fVar28;
      uVar22 = uVar22 + 1;
    } while (iVar26 + 1 != uVar22);
    fVar27 = fVar27 + DAT_02390124;
    *(undefined4 *)(lVar2 + lVar24 * 4) = 0x3f800000;
  }
  if (unaff_SIL == '\0') goto LAB_016027d7;
  fVar27 = DAT_02390124 / fVar27;
  if ((uint)uVar18 < 8) {
    uVar22 = 0;
  }
  else {
    uVar22 = (ulonglong)((uint)uVar18 & 0x7ffffff8);
    uVar23 = (uVar22 - 8 >> 3) + 1;
    if (uVar22 - 8 == 0) {
      lVar19 = 0;
    }
    else {
      lVar24 = -(uVar23 & 0xfffffffffffffffe);
      lVar19 = 0;
      do {
        pfVar21 = (float *)(lVar2 + lVar19 * 4);
        fVar28 = pfVar21[1];
        fVar3 = pfVar21[2];
        fVar4 = pfVar21[3];
        pfVar1 = (float *)(lVar2 + 0x10 + lVar19 * 4);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar7 = pfVar1[2];
        fVar8 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + 0x20 + lVar19 * 4);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + 0x30 + lVar19 * 4);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar1 = (float *)(lVar2 + lVar19 * 4);
        *pfVar1 = *pfVar21 * fVar27;
        pfVar1[1] = fVar28 * fVar27;
        pfVar1[2] = fVar3 * fVar27;
        pfVar1[3] = fVar4 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x10 + lVar19 * 4);
        *pfVar21 = fVar5 * fVar27;
        pfVar21[1] = fVar6 * fVar27;
        pfVar21[2] = fVar7 * fVar27;
        pfVar21[3] = fVar8 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x20 + lVar19 * 4);
        *pfVar21 = fVar9 * fVar27;
        pfVar21[1] = fVar10 * fVar27;
        pfVar21[2] = fVar11 * fVar27;
        pfVar21[3] = fVar12 * fVar27;
        pfVar21 = (float *)(lVar2 + 0x30 + lVar19 * 4);
        *pfVar21 = fVar13 * fVar27;
        pfVar21[1] = fVar14 * fVar27;
        pfVar21[2] = fVar15 * fVar27;
        pfVar21[3] = fVar16 * fVar27;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 2;
      } while (lVar24 != 0);
      if ((uVar23 & 1) == 0) goto LAB_016027c0;
    }
    pfVar21 = (float *)(lVar2 + lVar19 * 4);
    fVar28 = pfVar21[1];
    fVar3 = pfVar21[2];
    fVar4 = pfVar21[3];
    pfVar1 = (float *)(lVar2 + 0x10 + lVar19 * 4);
    fVar5 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    fVar8 = pfVar1[3];
    pfVar1 = (float *)(lVar2 + lVar19 * 4);
    *pfVar1 = *pfVar21 * fVar27;
    pfVar1[1] = fVar28 * fVar27;
    pfVar1[2] = fVar3 * fVar27;
    pfVar1[3] = fVar4 * fVar27;
    pfVar21 = (float *)(lVar2 + 0x10 + lVar19 * 4);
    *pfVar21 = fVar5 * fVar27;
    pfVar21[1] = fVar6 * fVar27;
    pfVar21[2] = fVar7 * fVar27;
    pfVar21[3] = fVar8 * fVar27;
  }
LAB_016027c0:
  do {
    *(float *)(lVar2 + uVar22 * 4) = *(float *)(lVar2 + uVar22 * 4) * fVar27;
    uVar22 = uVar22 + 1;
  } while (uVar18 != uVar22);
LAB_016027d7:
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


