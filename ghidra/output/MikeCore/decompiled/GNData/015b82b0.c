// Function: FUN_015b82b0
// Address: 015b82b0
// Size: 575 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x015b84ed) */
/* WARNING: Removing unreachable block (ram,0x015b82ef) */
/* WARNING: Removing unreachable block (ram,0x015b82f8) */

void FUN_015b82b0(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong local_30;
  char local_28;
  
  FUN_00c8e690();
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar4 = *(uint *)(unaff_RSI + 0x44);
  uVar27 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) goto LAB_015b84cf;
  uVar5 = *(ulonglong *)(*(longlong *)(unaff_RSI + 0x70) + 0x10);
  uVar6 = *(ulonglong *)(*(longlong *)(unaff_RSI + 0x58) + 0x10);
  uVar7 = *(ulonglong *)(local_30 + 0x10);
  if (uVar4 < 8) {
    uVar26 = 0;
  }
  else {
    uVar22 = uVar7 + uVar27 * 4;
    uVar26 = 0;
    if ((uVar5 + uVar27 * 4 <= uVar7 || uVar22 <= uVar5) &&
       (uVar6 + uVar27 * 4 <= uVar7 || uVar22 <= uVar6)) {
      uVar26 = (ulonglong)(uVar4 & 0xfffffff8);
      uVar22 = (uVar26 - 8 >> 3) + 1;
      if (uVar26 - 8 == 0) {
        lVar25 = 0;
LAB_015b84a5:
        pfVar1 = (float *)(uVar5 + lVar25 * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar2 = (float *)(uVar5 + 0x10 + lVar25 * 4);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        fVar14 = pfVar2[3];
        pfVar2 = (float *)(uVar6 + lVar25 * 4);
        fVar15 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar3 = (float *)(uVar6 + 0x10 + lVar25 * 4);
        fVar18 = *pfVar3;
        fVar19 = pfVar3[1];
        fVar20 = pfVar3[2];
        fVar21 = pfVar3[3];
        pfVar3 = (float *)(uVar7 + lVar25 * 4);
        *pfVar3 = *pfVar2 * *pfVar1;
        pfVar3[1] = fVar15 * fVar8;
        pfVar3[2] = fVar16 * fVar9;
        pfVar3[3] = fVar17 * fVar10;
        pfVar1 = (float *)(uVar7 + 0x10 + lVar25 * 4);
        *pfVar1 = fVar18 * fVar11;
        pfVar1[1] = fVar19 * fVar12;
        pfVar1[2] = fVar20 * fVar13;
        pfVar1[3] = fVar21 * fVar14;
      }
      else {
        lVar23 = -(uVar22 & 0xfffffffffffffffe);
        lVar25 = 0;
        do {
          pfVar1 = (float *)(uVar5 + lVar25 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(uVar5 + 0x10 + lVar25 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar2 = (float *)(uVar6 + lVar25 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar3 = (float *)(uVar6 + 0x10 + lVar25 * 4);
          fVar18 = *pfVar3;
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar3 = (float *)(uVar7 + lVar25 * 4);
          *pfVar3 = *pfVar2 * *pfVar1;
          pfVar3[1] = fVar15 * fVar8;
          pfVar3[2] = fVar16 * fVar9;
          pfVar3[3] = fVar17 * fVar10;
          pfVar1 = (float *)(uVar7 + 0x10 + lVar25 * 4);
          *pfVar1 = fVar18 * fVar11;
          pfVar1[1] = fVar19 * fVar12;
          pfVar1[2] = fVar20 * fVar13;
          pfVar1[3] = fVar21 * fVar14;
          pfVar1 = (float *)(uVar5 + 0x20 + lVar25 * 4);
          fVar8 = pfVar1[1];
          fVar9 = pfVar1[2];
          fVar10 = pfVar1[3];
          pfVar2 = (float *)(uVar5 + 0x30 + lVar25 * 4);
          fVar11 = *pfVar2;
          fVar12 = pfVar2[1];
          fVar13 = pfVar2[2];
          fVar14 = pfVar2[3];
          pfVar2 = (float *)(uVar6 + 0x20 + lVar25 * 4);
          fVar15 = pfVar2[1];
          fVar16 = pfVar2[2];
          fVar17 = pfVar2[3];
          pfVar3 = (float *)(uVar6 + 0x30 + lVar25 * 4);
          fVar18 = *pfVar3;
          fVar19 = pfVar3[1];
          fVar20 = pfVar3[2];
          fVar21 = pfVar3[3];
          pfVar3 = (float *)(uVar7 + 0x20 + lVar25 * 4);
          *pfVar3 = *pfVar2 * *pfVar1;
          pfVar3[1] = fVar15 * fVar8;
          pfVar3[2] = fVar16 * fVar9;
          pfVar3[3] = fVar17 * fVar10;
          pfVar1 = (float *)(uVar7 + 0x30 + lVar25 * 4);
          *pfVar1 = fVar18 * fVar11;
          pfVar1[1] = fVar19 * fVar12;
          pfVar1[2] = fVar20 * fVar13;
          pfVar1[3] = fVar21 * fVar14;
          lVar25 = lVar25 + 0x10;
          lVar23 = lVar23 + 2;
        } while (lVar23 != 0);
        if ((uVar22 & 1) != 0) goto LAB_015b84a5;
      }
      if (uVar26 == uVar27) goto LAB_015b84cf;
    }
  }
  uVar22 = ~uVar26;
  uVar24 = uVar27 & 3;
  if ((uVar4 & 3) != 0) {
    do {
      *(float *)(uVar7 + uVar26 * 4) =
           *(float *)(uVar5 + uVar26 * 4) * *(float *)(uVar6 + uVar26 * 4);
      uVar26 = uVar26 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  if (2 < uVar22 + uVar27) {
    do {
      *(float *)(uVar7 + uVar26 * 4) =
           *(float *)(uVar5 + uVar26 * 4) * *(float *)(uVar6 + uVar26 * 4);
      *(float *)(uVar7 + 4 + uVar26 * 4) =
           *(float *)(uVar5 + 4 + uVar26 * 4) * *(float *)(uVar6 + 4 + uVar26 * 4);
      *(float *)(uVar7 + 8 + uVar26 * 4) =
           *(float *)(uVar5 + 8 + uVar26 * 4) * *(float *)(uVar6 + 8 + uVar26 * 4);
      *(float *)(uVar7 + 0xc + uVar26 * 4) =
           *(float *)(uVar5 + 0xc + uVar26 * 4) * *(float *)(uVar6 + 0xc + uVar26 * 4);
      uVar26 = uVar26 + 4;
    } while (uVar27 != uVar26);
  }
LAB_015b84cf:
  *unaff_RDI = local_30;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


