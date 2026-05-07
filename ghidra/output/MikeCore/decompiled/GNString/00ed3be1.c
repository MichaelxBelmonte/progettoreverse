// Function: FUN_00ed3be1
// Address: 00ed3be1
// Size: 591 bytes
// Class: GNString


ulonglong FUN_00ed3be1(ulonglong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  
  bVar2 = *(byte *)(unaff_RDI + 0x104);
  uVar16 = 1 << (bVar2 & 0x1f);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  uVar8 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  uVar17 = (int)unaff_RSI - (int)lVar4;
  uVar14 = *(uint *)(unaff_RDI + 0x1c);
  uVar13 = uVar17 - uVar8;
  if (uVar17 - uVar14 <= uVar8) {
    uVar13 = uVar14;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar13 = uVar14;
  }
  uVar14 = uVar17 - uVar16;
  if (uVar17 < uVar16) {
    uVar14 = 0;
  }
  iVar18 = 1 << (*(byte *)(unaff_RDI + 0x10c) & 0x1f);
  uVar8 = *(uint *)(unaff_RDI + 0x2c);
  uVar9 = (ulonglong)uVar8;
  bVar12 = 0x40 - (char)*(undefined4 *)(unaff_RDI + 0x108);
  uVar7 = uVar17;
  if (uVar17 < uVar8) {
    uVar7 = uVar8;
  }
  lVar5 = *(longlong *)(unaff_RDI + 0x80);
  iVar3 = *(int *)(unaff_RDI + 300);
  lVar6 = *(longlong *)(unaff_RDI + 0x70);
  do {
    if (uVar7 == uVar9) break;
    uVar20 = (ulonglong)(*(longlong *)(lVar4 + uVar9) * -0x30e4432340650000) >> (bVar12 & 0x3f);
    *(undefined4 *)(lVar5 + (ulonglong)((uint)uVar9 & ~(-1 << (bVar2 & 0x1f))) * 4) =
         *(undefined4 *)(lVar6 + uVar20 * 4);
    *(uint *)(lVar6 + uVar20 * 4) = (uint)uVar9;
    uVar9 = uVar9 + 1;
  } while (iVar3 == 0);
  *(uint *)(unaff_RDI + 0x2c) = uVar17;
  uVar8 = *(uint *)(lVar6 + (*unaff_RSI * -0x30e4432340650000 >> (bVar12 & 0x3f)) * 4);
  if (uVar8 < uVar13) {
    return 3;
  }
  uVar9 = 3;
  do {
    puVar19 = (ulonglong *)(lVar4 + (ulonglong)uVar8);
    if (*(int *)((uVar9 - 3) + (longlong)puVar19) == *(int *)((longlong)unaff_RSI + (uVar9 - 3))) {
      puVar11 = unaff_RSI;
      if (unaff_RSI < (ulonglong *)((longlong)param_2 - 7U)) {
        uVar20 = *unaff_RSI ^ *puVar19;
        if (uVar20 == 0) {
          lVar6 = lVar4 + 8 + (ulonglong)uVar8;
          lVar15 = 0;
          do {
            puVar11 = (ulonglong *)((longlong)unaff_RSI + lVar15 + 8);
            if ((ulonglong *)((longlong)param_2 - 7U) <= puVar11) {
              puVar19 = (ulonglong *)(lVar6 + lVar15);
              goto LAB_00ed3d66;
            }
            lVar1 = lVar15 + 8;
            uVar20 = *(ulonglong *)((longlong)unaff_RSI + lVar15 + 8) ^
                     *(ulonglong *)(lVar6 + lVar15);
            lVar15 = lVar1;
          } while (uVar20 == 0);
          uVar10 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar10 = (uVar10 >> 3) + lVar1;
        }
        else {
          uVar10 = 0;
          if (uVar20 != 0) {
            for (; (uVar20 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar10 = uVar10 >> 3;
        }
      }
      else {
LAB_00ed3d66:
        if ((puVar11 < (ulonglong *)((longlong)param_2 - 3U)) && ((int)*puVar19 == (int)*puVar11)) {
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
          puVar19 = (ulonglong *)((longlong)puVar19 + 4);
        }
        if ((puVar11 < (ulonglong *)((longlong)param_2 + -1)) &&
           ((short)*puVar19 == (short)*puVar11)) {
          puVar11 = (ulonglong *)((longlong)puVar11 + 2);
          puVar19 = (ulonglong *)((longlong)puVar19 + 2);
        }
        if (puVar11 < param_2) {
          puVar11 = (ulonglong *)((longlong)puVar11 + (ulonglong)((char)*puVar19 == (char)*puVar11))
          ;
        }
        uVar10 = (longlong)puVar11 - (longlong)unaff_RSI;
      }
      if ((uVar9 < uVar10) &&
         (*param_1 = (ulonglong)((uVar17 + 3) - uVar8), uVar9 = uVar10,
         (ulonglong *)((longlong)unaff_RSI + uVar10) == param_2)) {
        return uVar10;
      }
    }
    if (uVar8 <= uVar14) {
      return uVar9;
    }
    iVar18 = iVar18 + -1;
    if (iVar18 == 0) {
      return uVar9;
    }
    uVar8 = *(uint *)(lVar5 + (ulonglong)(uVar8 & uVar16 - 1) * 4);
    if (uVar8 < uVar13) {
      return uVar9;
    }
  } while( true );
}


