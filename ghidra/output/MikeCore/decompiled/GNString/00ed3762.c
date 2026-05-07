// Function: FUN_00ed3762
// Address: 00ed3762
// Size: 560 bytes
// Class: GNString


ulonglong FUN_00ed3762(ulonglong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int *piVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int unaff_ESI;
  undefined4 unaff_00000034;
  longlong unaff_RDI;
  uint uVar20;
  int iVar21;
  ulonglong *puVar22;
  
  bVar4 = *(byte *)(unaff_RDI + 0x104);
  uVar20 = 1 << (bVar4 & 0x1f);
  lVar6 = *(longlong *)(unaff_RDI + 8);
  uVar17 = unaff_ESI - (int)lVar6;
  uVar19 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar16 = *(uint *)(unaff_RDI + 0x1c);
  uVar15 = uVar17 - uVar19;
  if (uVar17 - uVar16 <= uVar19) {
    uVar15 = uVar16;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar15 = uVar16;
  }
  uVar16 = uVar17 - uVar20;
  if (uVar17 < uVar20) {
    uVar16 = 0;
  }
  iVar21 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar19 = *(uint *)(unaff_RDI + 0x2c);
  uVar10 = (ulonglong)uVar19;
  bVar14 = 0x20 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar9 = uVar17;
  if (uVar17 < uVar19) {
    uVar9 = uVar19;
  }
  lVar7 = *(longlong *)(unaff_RDI + 0x80);
  iVar5 = *(int *)(unaff_RDI + 300);
  lVar8 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar9 == uVar10) break;
    uVar11 = (ulonglong)((uint)(*(int *)(lVar6 + uVar10) * -0x61c8864f) >> (bVar14 & 0x1f));
    *(undefined4 *)(lVar7 + (ulonglong)((uint)uVar10 & ~(-1 << (bVar4 & 0x1f))) * 4) =
         *(undefined4 *)(lVar8 + uVar11 * 4);
    *(uint *)(lVar8 + uVar11 * 4) = (uint)uVar10;
    uVar10 = uVar10 + 1;
  } while (iVar5 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar17;
  uVar19 = *(uint *)(lVar8 + (ulonglong)
                             ((uint)(*(int *)CONCAT44(unaff_00000034,unaff_ESI) * -0x61c8864f) >>
                             (bVar14 & 0x1f)) * 4);
  if (uVar19 < uVar15) {
    return 3;
  }
  piVar3 = (int *)((longlong)param_2 - 7);
  lVar8 = CONCAT44(unaff_00000034,unaff_ESI) + 8;
  uVar10 = 3;
  do {
    puVar22 = (ulonglong *)(lVar6 + (ulonglong)uVar19);
    if (*(int *)((uVar10 - 3) + (longlong)puVar22) ==
        *(int *)(CONCAT44(unaff_00000034,unaff_ESI) + -3 + uVar10)) {
      if (piVar3 < (int *)CONCAT44(unaff_00000034,unaff_ESI) ||
          piVar3 == (int *)CONCAT44(unaff_00000034,unaff_ESI)) {
        piVar13 = (int *)CONCAT44(unaff_00000034,unaff_ESI);
LAB_00ed38ca:
        if ((piVar13 < (int *)((longlong)param_2 - 3U)) && ((int)*puVar22 == *piVar13)) {
          piVar13 = piVar13 + 1;
          puVar22 = (ulonglong *)((longlong)puVar22 + 4);
        }
        if ((piVar13 < (int *)((longlong)param_2 - 1U)) && ((short)*puVar22 == (short)*piVar13)) {
          piVar13 = (int *)((longlong)piVar13 + 2);
          puVar22 = (ulonglong *)((longlong)puVar22 + 2);
        }
        if (piVar13 < param_2) {
          piVar13 = (int *)((longlong)piVar13 + (ulonglong)((char)*puVar22 == (char)*piVar13));
        }
        uVar12 = (longlong)piVar13 - CONCAT44(unaff_00000034,unaff_ESI);
      }
      else {
        uVar11 = *(ulonglong *)CONCAT44(unaff_00000034,unaff_ESI) ^ *puVar22;
        if (uVar11 == 0) {
          lVar2 = lVar6 + 8 + (ulonglong)uVar19;
          lVar18 = 0;
          do {
            piVar13 = (int *)(lVar8 + lVar18);
            if (piVar3 <= piVar13) {
              puVar22 = (ulonglong *)(lVar2 + lVar18);
              goto LAB_00ed38ca;
            }
            lVar1 = lVar18 + 8;
            uVar11 = *(ulonglong *)(lVar8 + lVar18) ^ *(ulonglong *)(lVar2 + lVar18);
            lVar18 = lVar1;
          } while (uVar11 == 0);
          uVar12 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          uVar12 = (uVar12 >> 3) + lVar1;
        }
        else {
          uVar12 = 0;
          if (uVar11 != 0) {
            for (; (uVar11 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
          uVar12 = uVar12 >> 3;
        }
      }
      if ((uVar10 < uVar12) &&
         (*param_1 = (ulonglong)((uVar17 + 3) - uVar19), uVar10 = uVar12,
         (int *)(CONCAT44(unaff_00000034,unaff_ESI) + uVar12) == param_2)) {
        return uVar12;
      }
    }
    if (uVar19 <= uVar16) {
      return uVar10;
    }
    iVar21 = iVar21 + -1;
    if (iVar21 == 0) {
      return uVar10;
    }
    uVar19 = *(uint *)(lVar7 + (ulonglong)(uVar19 & uVar20 - 1) * 4);
    if (uVar19 < uVar15) {
      return uVar10;
    }
  } while( true );
}


