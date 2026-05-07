// Function: FUN_00f4c390
// Address: 00f4c390
// Size: 2487 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/Security.framework/Versions/A/Security"


void FUN_00f4c390(void)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  ushort uVar11;
  short sVar12;
  undefined2 uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int *piVar26;
  int iVar27;
  uint uVar28;
  longlong *unaff_RSI;
  short *psVar29;
  int iVar30;
  longlong unaff_RDI;
  longlong lVar31;
  short *psVar32;
  uint uVar33;
  longlong *plVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong *local_68;
  ushort auStack_58 [5];
  short local_4e;
  short local_4c;
  short local_4a;
  short local_48;
  short local_46;
  short local_44;
  short local_42;
  short local_40;
  short local_3e;
  short local_3c;
  short local_3a;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar7 = *unaff_RSI;
  lVar22 = *(longlong *)unaff_RSI[2];
  uVar14 = *(uint *)(unaff_RSI[2] + 0x14);
  *(undefined8 *)(&DAT_000014b4 + unaff_RDI) = 0x23d00000000;
  if ((int)uVar14 < 1) {
    uVar24 = 0;
    uVar25 = 0xffffffff;
  }
  else {
    uVar25 = 0xffffffff;
    uVar15 = 0;
    do {
      while (*(short *)(lVar7 + uVar15 * 4) != 0) {
        iVar23 = *(int *)(&DAT_000014b4 + unaff_RDI);
        *(int *)(&DAT_000014b4 + unaff_RDI) = iVar23 + 1;
        *(int *)(unaff_RDI + 0xbc4 + (longlong)iVar23 * 4) = (int)uVar15;
        (&DAT_000014bc)[uVar15 + unaff_RDI] = 0;
        uVar25 = uVar15 & 0xffffffff;
        uVar15 = uVar15 + 1;
        if (uVar14 == uVar15) goto LAB_00f4c424;
      }
      *(undefined2 *)(lVar7 + 2 + uVar15 * 4) = 0;
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar15);
LAB_00f4c424:
    iVar23 = (int)uVar25;
    uVar24 = *(uint *)(&DAT_000014b4 + unaff_RDI);
    if (1 < (int)uVar24) goto LAB_00f4c524;
  }
  if (lVar22 == 0) {
    do {
      uVar28 = 0;
      uVar17 = (int)uVar25 + 1;
      if ((int)uVar25 < 2) {
        uVar25 = (ulonglong)uVar17;
        uVar28 = uVar17;
      }
      iVar23 = (int)uVar25;
      *(uint *)(&DAT_000014b4 + unaff_RDI) = uVar24 + 1;
      *(uint *)(unaff_RDI + 0xbc4 + (longlong)(int)uVar24 * 4) = uVar28;
      *(undefined2 *)(lVar7 + (longlong)(int)uVar28 * 4) = 1;
      (&DAT_000014bc)[(int)uVar28 + unaff_RDI] = 0;
      *(longlong *)(&DAT_00001718 + unaff_RDI) = *(longlong *)(&DAT_00001718 + unaff_RDI) + -1;
      uVar24 = *(uint *)(&DAT_000014b4 + unaff_RDI);
    } while ((int)uVar24 < 2);
  }
  else {
    do {
      uVar28 = 0;
      uVar17 = (int)uVar25 + 1;
      if ((int)uVar25 < 2) {
        uVar25 = (ulonglong)uVar17;
        uVar28 = uVar17;
      }
      iVar23 = (int)uVar25;
      *(uint *)(&DAT_000014b4 + unaff_RDI) = uVar24 + 1;
      *(uint *)(unaff_RDI + 0xbc4 + (longlong)(int)uVar24 * 4) = uVar28;
      lVar18 = (longlong)(int)uVar28;
      *(undefined2 *)(lVar7 + lVar18 * 4) = 1;
      (&DAT_000014bc)[lVar18 + unaff_RDI] = 0;
      *(longlong *)(&DAT_00001718 + unaff_RDI) = *(longlong *)(&DAT_00001718 + unaff_RDI) + -1;
      *(ulonglong *)(&DAT_00001720 + unaff_RDI) =
           *(longlong *)(&DAT_00001720 + unaff_RDI) -
           (ulonglong)*(ushort *)(lVar22 + 2 + lVar18 * 4);
      uVar24 = *(uint *)(&DAT_000014b4 + unaff_RDI);
    } while ((int)uVar24 < 2);
  }
LAB_00f4c524:
  local_68 = (longlong *)(&DAT_00001720 + unaff_RDI);
  plVar34 = (longlong *)(&DAT_00001718 + unaff_RDI);
  *(int *)(unaff_RSI + 1) = iVar23;
  uVar25 = (ulonglong)(uVar24 >> 1);
  do {
    iVar30 = *(int *)(unaff_RDI + 0xbc0 + uVar25 * 4);
    uVar28 = (int)uVar25 * 2;
    uVar15 = uVar25;
    if ((int)uVar28 <= (int)uVar24) {
      uVar15 = uVar25 & 0xffffffff;
      do {
        uVar17 = uVar28;
        if ((int)uVar28 < (int)uVar24) {
          uVar24 = uVar28 | 1;
          lVar18 = (longlong)*(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar24 * 4);
          lVar22 = (longlong)(int)uVar28;
          lVar38 = (longlong)*(int *)(unaff_RDI + 0xbc0 + lVar22 * 4);
          uVar11 = *(ushort *)(lVar7 + lVar38 * 4);
          uVar2 = *(ushort *)(lVar7 + lVar18 * 4);
          if (uVar2 < uVar11) {
LAB_00f4c5a9:
            lVar22 = (longlong)(int)uVar24;
            uVar17 = uVar24;
          }
          else {
            if (uVar2 != uVar11) goto LAB_00f4c5b3;
            if ((byte)(&DAT_000014bc)[lVar18 + unaff_RDI] <=
                (byte)(&DAT_000014bc)[lVar38 + unaff_RDI]) goto LAB_00f4c5a9;
          }
        }
        else {
LAB_00f4c5b3:
          lVar22 = (longlong)(int)uVar28;
        }
        iVar21 = *(int *)(unaff_RDI + 0xbc0 + lVar22 * 4);
        uVar11 = *(ushort *)(lVar7 + (longlong)iVar21 * 4);
        uVar2 = *(ushort *)(lVar7 + (longlong)iVar30 * 4);
        uVar33 = (uint)uVar15;
        if ((uVar2 < uVar11) ||
           ((uVar2 == uVar11 &&
            ((byte)(&DAT_000014bc)[iVar30 + unaff_RDI] <= (byte)(&DAT_000014bc)[iVar21 + unaff_RDI])
            ))) break;
        *(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar33 * 4) = iVar21;
        uVar28 = uVar17 * 2;
        uVar24 = *(uint *)(&DAT_000014b4 + unaff_RDI);
        uVar15 = (ulonglong)uVar17;
        uVar33 = uVar17;
      } while ((int)uVar28 <= (int)uVar24);
      uVar15 = (ulonglong)(int)uVar33;
    }
    *(int *)(unaff_RDI + 0xbc0 + uVar15 * 4) = iVar30;
    if ((longlong)uVar25 < 2) {
      iVar30 = *(int *)(&DAT_000014b4 + unaff_RDI);
      lVar22 = (longlong)(int)uVar14;
      do {
        iVar3 = *(int *)(unaff_RDI + 0xbc4);
        iVar21 = iVar30 + -1;
        *(int *)(&DAT_000014b4 + unaff_RDI) = iVar21;
        iVar4 = *(int *)(unaff_RDI + 0xbc0 + (longlong)iVar30 * 4);
        *(int *)(unaff_RDI + 0xbc4) = iVar4;
        lVar18 = 1;
        if (2 < iVar30) {
          uVar14 = 2;
          uVar24 = 1;
          do {
            uVar28 = uVar14;
            if ((int)uVar14 < iVar21) {
              uVar17 = uVar14 | 1;
              lVar38 = (longlong)*(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar17 * 4);
              lVar18 = (longlong)(int)uVar14;
              lVar36 = (longlong)*(int *)(unaff_RDI + 0xbc0 + lVar18 * 4);
              uVar11 = *(ushort *)(lVar7 + lVar36 * 4);
              uVar2 = *(ushort *)(lVar7 + lVar38 * 4);
              if (uVar2 < uVar11) {
LAB_00f4c6f9:
                lVar18 = (longlong)(int)uVar17;
                uVar28 = uVar17;
              }
              else {
                if (uVar2 != uVar11) goto LAB_00f4c703;
                if ((byte)(&DAT_000014bc)[lVar38 + unaff_RDI] <=
                    (byte)(&DAT_000014bc)[lVar36 + unaff_RDI]) goto LAB_00f4c6f9;
              }
            }
            else {
LAB_00f4c703:
              lVar18 = (longlong)(int)uVar14;
            }
            iVar30 = *(int *)(unaff_RDI + 0xbc0 + lVar18 * 4);
            uVar11 = *(ushort *)(lVar7 + (longlong)iVar30 * 4);
            uVar2 = *(ushort *)(lVar7 + (longlong)iVar4 * 4);
            if ((uVar2 < uVar11) ||
               ((uVar2 == uVar11 &&
                ((byte)(&DAT_000014bc)[iVar4 + unaff_RDI] <=
                 (byte)(&DAT_000014bc)[iVar30 + unaff_RDI])))) break;
            *(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar24 * 4) = iVar30;
            uVar14 = uVar28 * 2;
            iVar21 = *(int *)(&DAT_000014b4 + unaff_RDI);
            uVar24 = uVar28;
          } while ((int)uVar14 <= iVar21);
          lVar18 = (longlong)(int)uVar24;
        }
        lVar36 = 1;
        lVar38 = (longlong)iVar3;
        *(int *)(unaff_RDI + 0xbc0 + lVar18 * 4) = iVar4;
        iVar30 = *(int *)(unaff_RDI + 0xbc4);
        lVar18 = (longlong)iVar30;
        iVar21 = *(int *)(&DAT_000014b8 + unaff_RDI);
        *(int *)(&DAT_000014b8 + unaff_RDI) = iVar21 + -1;
        *(int *)(unaff_RDI + 0xbbc + (longlong)iVar21 * 4) = iVar3;
        iVar21 = *(int *)(&DAT_000014b8 + unaff_RDI);
        *(int *)(&DAT_000014b8 + unaff_RDI) = iVar21 + -1;
        *(int *)(unaff_RDI + 0xbbc + (longlong)iVar21 * 4) = iVar30;
        *(short *)(lVar7 + lVar22 * 4) =
             *(short *)(lVar7 + lVar18 * 4) + *(short *)(lVar7 + lVar38 * 4);
        bVar20 = (&DAT_000014bc)[lVar38 + unaff_RDI];
        if ((byte)(&DAT_000014bc)[lVar38 + unaff_RDI] < (byte)(&DAT_000014bc)[lVar18 + unaff_RDI]) {
          bVar20 = (&DAT_000014bc)[lVar18 + unaff_RDI];
        }
        (&DAT_000014bc)[lVar22 + unaff_RDI] = bVar20 + 1;
        *(short *)(lVar7 + 2 + lVar18 * 4) = (short)lVar22;
        *(short *)(lVar7 + 2 + lVar38 * 4) = (short)lVar22;
        *(int *)(unaff_RDI + 0xbc4) = (int)lVar22;
        iVar30 = *(int *)(&DAT_000014b4 + unaff_RDI);
        if (1 < iVar30) {
          uVar14 = 2;
          uVar24 = 1;
          do {
            uVar28 = uVar14;
            if ((int)uVar14 < iVar30) {
              uVar17 = uVar14 | 1;
              lVar38 = (longlong)*(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar17 * 4);
              lVar18 = (longlong)(int)uVar14;
              lVar36 = (longlong)*(int *)(unaff_RDI + 0xbc0 + lVar18 * 4);
              uVar11 = *(ushort *)(lVar7 + lVar36 * 4);
              uVar2 = *(ushort *)(lVar7 + lVar38 * 4);
              if (uVar2 < uVar11) {
LAB_00f4c859:
                lVar18 = (longlong)(int)uVar17;
                uVar28 = uVar17;
              }
              else {
                if (uVar2 != uVar11) goto LAB_00f4c863;
                if ((byte)(&DAT_000014bc)[lVar38 + unaff_RDI] <=
                    (byte)(&DAT_000014bc)[lVar36 + unaff_RDI]) goto LAB_00f4c859;
              }
            }
            else {
LAB_00f4c863:
              lVar18 = (longlong)(int)uVar14;
            }
            iVar30 = *(int *)(unaff_RDI + 0xbc0 + lVar18 * 4);
            uVar11 = *(ushort *)(lVar7 + (longlong)iVar30 * 4);
            uVar2 = *(ushort *)(lVar7 + lVar22 * 4);
            if ((uVar2 < uVar11) ||
               ((uVar2 == uVar11 &&
                ((byte)(&DAT_000014bc)[lVar22 + unaff_RDI] <=
                 (byte)(&DAT_000014bc)[iVar30 + unaff_RDI])))) break;
            *(int *)(unaff_RDI + 0xbc0 + (longlong)(int)uVar24 * 4) = iVar30;
            uVar14 = uVar28 * 2;
            iVar30 = *(int *)(&DAT_000014b4 + unaff_RDI);
            uVar24 = uVar28;
          } while ((int)uVar14 <= iVar30);
          lVar36 = (longlong)(int)uVar24;
        }
        *(int *)(unaff_RDI + 0xbc0 + lVar36 * 4) = (int)lVar22;
        lVar22 = lVar22 + 1;
        iVar30 = *(int *)(&DAT_000014b4 + unaff_RDI);
        if (iVar30 < 2) {
          uVar5 = *(undefined4 *)(unaff_RDI + 0xbc4);
          iVar30 = *(int *)(&DAT_000014b8 + unaff_RDI);
          *(int *)(&DAT_000014b8 + unaff_RDI) = iVar30 + -1;
          *(undefined4 *)(unaff_RDI + 0xbbc + (longlong)iVar30 * 4) = uVar5;
          lVar22 = *unaff_RSI;
          iVar30 = (int)unaff_RSI[1];
          plVar8 = (longlong *)unaff_RSI[2];
          lVar18 = *plVar8;
          lVar38 = plVar8[1];
          iVar21 = (int)plVar8[2];
          iVar3 = (int)plVar8[3];
          lVar36 = (longlong)iVar3;
          *(undefined8 *)(unaff_RDI + 0xbb0) = 0;
          *(undefined8 *)(unaff_RDI + 3000) = 0;
          *(undefined8 *)(unaff_RDI + 0xba0) = 0;
          *(undefined8 *)(unaff_RDI + 0xba8) = 0;
          *(undefined2 *)
           (lVar22 + 2 +
           (longlong)*(int *)(unaff_RDI + 0xbc0 + (longlong)*(int *)(&DAT_000014b8 + unaff_RDI) * 4)
           * 4) = 0;
          iVar4 = *(int *)(&DAT_000014b8 + unaff_RDI);
          lVar16 = (longlong)iVar4;
          if (lVar16 < 0x23c) {
            if (lVar18 == 0) {
              lVar18 = 0;
              iVar35 = 0;
              do {
                iVar6 = *(int *)(unaff_RDI + lVar16 * 4 + 0xbc4 + lVar18 * 4);
                lVar31 = (longlong)iVar6;
                uVar11 = *(ushort *)
                          (lVar22 + 2 + (ulonglong)*(ushort *)(lVar22 + 2 + lVar31 * 4) * 4);
                if ((int)(uint)uVar11 < iVar3) {
                  *(short *)(lVar22 + 2 + lVar31 * 4) = (short)(uVar11 + 1);
                  iVar10 = uVar11 + 1;
                }
                else {
                  *(short *)(lVar22 + 2 + lVar31 * 4) = (short)iVar3;
                  iVar10 = iVar3;
                }
                if (iVar6 <= iVar30) {
                  psVar29 = (short *)(unaff_RDI + 0xba0 + (longlong)iVar10 * 2);
                  *psVar29 = *psVar29 + 1;
                  iVar27 = 0;
                  if (iVar21 <= iVar6) {
                    iVar27 = *(int *)(lVar38 + (longlong)(iVar6 - iVar21) * 4);
                  }
                  *plVar34 = *plVar34 +
                             (ulonglong)(uint)(iVar27 + iVar10) *
                             (ulonglong)*(ushort *)(lVar22 + lVar31 * 4);
                }
                iVar35 = iVar35 + (uint)(iVar3 <= (int)(uint)uVar11);
                lVar18 = lVar18 + 1;
              } while (0x23c - iVar4 != (int)lVar18);
            }
            else {
              lVar31 = 0;
              iVar35 = 0;
              do {
                iVar6 = *(int *)(unaff_RDI + lVar16 * 4 + 0xbc4 + lVar31 * 4);
                lVar37 = (longlong)iVar6;
                uVar11 = *(ushort *)
                          (lVar22 + 2 + (ulonglong)*(ushort *)(lVar22 + 2 + lVar37 * 4) * 4);
                if ((int)(uint)uVar11 < iVar3) {
                  *(short *)(lVar22 + 2 + lVar37 * 4) = (short)(uVar11 + 1);
                  iVar10 = uVar11 + 1;
                }
                else {
                  *(short *)(lVar22 + 2 + lVar37 * 4) = (short)iVar3;
                  iVar10 = iVar3;
                }
                if (iVar6 <= iVar30) {
                  psVar29 = (short *)(unaff_RDI + 0xba0 + (longlong)iVar10 * 2);
                  *psVar29 = *psVar29 + 1;
                  iVar27 = 0;
                  if (iVar21 <= iVar6) {
                    iVar27 = *(int *)(lVar38 + (longlong)(iVar6 - iVar21) * 4);
                  }
                  uVar25 = (ulonglong)*(ushort *)(lVar22 + lVar37 * 4);
                  *plVar34 = *plVar34 + (uint)(iVar10 + iVar27) * uVar25;
                  *local_68 = *local_68 +
                              ((uint)*(ushort *)(lVar18 + 2 + lVar37 * 4) + iVar27) * uVar25;
                }
                iVar35 = iVar35 + (uint)(iVar3 <= (int)(uint)uVar11);
                lVar31 = lVar31 + 1;
              } while (0x23c - iVar4 != (int)lVar31);
            }
            if (iVar35 != 0) {
              lVar38 = (lVar36 << 0x20) + 0x100000000;
              psVar32 = (short *)(unaff_RDI + lVar36 * 2 + 0xba0);
              lVar18 = lVar38;
              psVar29 = psVar32;
              do {
                do {
                  lVar18 = lVar18 + -0x100000000;
                  psVar1 = psVar29 + -1;
                  psVar29 = psVar29 + -1;
                } while (*psVar1 == 0);
                *psVar29 = *psVar1 + -1;
                psVar29 = (short *)(unaff_RDI + 0xba0 + (lVar18 >> 0x1f));
                *psVar29 = *psVar29 + 2;
                uVar11 = *(short *)(unaff_RDI + 0xba0 + lVar36 * 2) - 1;
                *(ushort *)(unaff_RDI + 0xba0 + lVar36 * 2) = uVar11;
                bVar9 = 2 < iVar35;
                lVar18 = lVar38;
                psVar29 = psVar32;
                iVar35 = iVar35 + -2;
              } while (bVar9);
              if (iVar3 != 0) {
                iVar21 = 0x23d;
                while( true ) {
                  if (uVar11 != 0) {
                    uVar14 = (uint)uVar11;
                    do {
                      piVar26 = (int *)(unaff_RDI + 0xbbc + (longlong)iVar21 * 4);
                      do {
                        iVar3 = *piVar26;
                        lVar18 = (longlong)iVar3;
                        iVar21 = iVar21 + -1;
                        piVar26 = piVar26 + -1;
                      } while (iVar30 < iVar3);
                      uVar11 = *(ushort *)(lVar22 + 2 + lVar18 * 4);
                      if ((uint)lVar36 != (uint)uVar11) {
                        *plVar34 = *plVar34 +
                                   (ulonglong)*(ushort *)(lVar22 + lVar18 * 4) *
                                   (lVar36 - (ulonglong)uVar11);
                        *(short *)(lVar22 + 2 + lVar18 * 4) = (short)lVar36;
                      }
                      uVar14 = uVar14 - 1;
                    } while (uVar14 != 0);
                  }
                  lVar36 = lVar36 + -1;
                  if ((int)lVar36 == 0) break;
                  uVar11 = *(ushort *)(unaff_RDI + 0xba0 + lVar36 * 2);
                }
              }
            }
          }
          auStack_58[1] = *(short *)(unaff_RDI + 0xba0) * 2;
          sVar12 = *(short *)(unaff_RDI + 0xba2) + *(short *)(unaff_RDI + 0xba0) * 2;
          auStack_58[2] = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xba4) + sVar12 * 2;
          auStack_58[3] = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xba6) + sVar12 * 2;
          auStack_58[4] = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xba8) + sVar12 * 2;
          local_4e = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xbaa) + sVar12 * 2;
          local_4c = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xbac) + sVar12 * 2;
          local_4a = sVar12 * 2;
          sVar12 = *(short *)(unaff_RDI + 0xbae) + sVar12 * 2;
          local_48 = sVar12 * 2;
          local_46 = (*(short *)(unaff_RDI + 0xbb0) + sVar12 * 2) * 2;
          local_44 = (local_46 + *(short *)(unaff_RDI + 0xbb2)) * 2;
          local_42 = (local_44 + *(short *)(unaff_RDI + 0xbb4)) * 2;
          local_40 = (local_42 + *(short *)(unaff_RDI + 0xbb6)) * 2;
          local_3e = (local_40 + *(short *)(unaff_RDI + 3000)) * 2;
          local_3c = (local_3e + *(short *)(unaff_RDI + 0xbba)) * 2;
          local_3a = (local_3c + *(short *)(unaff_RDI + 0xbbc)) * 2;
          if (-1 < iVar23) {
            uVar25 = 0;
            do {
              uVar11 = *(ushort *)(lVar7 + 2 + uVar25 * 4);
              uVar15 = (ulonglong)uVar11;
              if (uVar15 != 0) {
                uVar19 = (ulonglong)auStack_58[uVar15];
                auStack_58[uVar15] = auStack_58[uVar15] + 1;
                uVar24 = uVar11 - 1;
                uVar28 = uVar11 & 3;
                uVar14 = 0;
                if (2 < uVar24) {
                  iVar30 = -(uVar11 & 0xfffffffc);
                  uVar14 = 0;
                  do {
                    uVar24 = ((uint)(uVar19 >> 3) & 1) +
                             ((uint)(uVar19 >> 2) & 1 |
                             ((uint)uVar19 & 2) + ((uint)uVar19 & 1 | uVar14) * 4) * 2;
                    uVar19 = uVar19 >> 4;
                    uVar14 = uVar24 * 2;
                    iVar30 = iVar30 + 4;
                  } while (iVar30 != 0);
                }
                uVar13 = (undefined2)uVar24;
                if ((uVar11 & 3) != 0) {
                  do {
                    uVar14 = (uint)uVar19 & 1 | uVar14;
                    uVar13 = (undefined2)uVar14;
                    uVar19 = uVar19 >> 1;
                    uVar14 = uVar14 * 2;
                    uVar28 = uVar28 - 1;
                  } while (uVar28 != 0);
                }
                *(undefined2 *)(lVar7 + uVar25 * 4) = uVar13;
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != iVar23 + 1);
          }
          if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
      } while( true );
    }
    uVar25 = uVar25 - 1;
    uVar24 = *(uint *)(&DAT_000014b4 + unaff_RDI);
  } while( true );
}


