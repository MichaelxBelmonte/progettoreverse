// Function: FUN_00efe075
// Address: 00efe075
// Size: 1020 bytes
// Class: Unknown


longlong FUN_00efe075(ulonglong param_1,byte *param_2,ushort *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong unaff_RSI;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  ulonglong *unaff_RDI;
  ushort uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  byte *pbVar24;
  
  if ((2 < param_1) && (8 < unaff_RSI)) {
    puVar23 = (ulonglong *)((longlong)unaff_RDI + (unaff_RSI - 8));
    pbVar2 = param_2 + (param_1 - 1);
    uVar3 = *param_3;
    lVar10 = 2;
    if (uVar3 != 0) {
      lVar10 = (longlong)(1 << ((char)uVar3 - 1U & 0x1f)) + 1;
    }
    uVar8 = *(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4 + 2) + 0x8000;
    uVar4 = param_3[(ulonglong)
                    ((uVar8 & 0xffff0000) -
                     *(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4 + 2) >>
                    ((byte)(uVar8 >> 0x10) & 0x3f)) +
                    (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4) + 2];
    if ((param_1 & 1) == 0) {
      pbVar24 = pbVar2 + -1;
      uVar8 = *(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4 + 2) + 0x8000;
      uVar18 = param_3[(ulonglong)
                       ((uVar8 & 0xffff0000) -
                        *(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4 + 2) >>
                       ((byte)(uVar8 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4) + 2];
      uVar19 = 0;
      uVar5 = 0;
      puVar22 = unaff_RDI;
      uVar11 = uVar4;
    }
    else {
      uVar8 = *(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4 + 2) + 0x8000;
      uVar11 = param_3[(ulonglong)
                       ((uVar8 & 0xffff0000) -
                        *(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4 + 2) >>
                       ((byte)(uVar8 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-1] * 4) + 2];
      uVar19 = (ulonglong)*(uint *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-2] * 4 + 2) +
               (ulonglong)uVar4;
      uVar8 = *(uint *)(&DAT_023e3450 + (uVar19 >> 0x10) * 4);
      pbVar24 = pbVar2 + -2;
      uVar18 = param_3[(ulonglong)(uVar4 >> ((byte)(uVar19 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar2[-2] * 4) + 2];
      puVar22 = (ulonglong *)((longlong)unaff_RDI + (uVar19 >> 0x13));
      *unaff_RDI = (ulonglong)(uVar8 & uVar4);
      if ((param_4 == 0) && (puVar23 < puVar22)) {
        puVar22 = puVar23;
      }
      uVar5 = (uint)(uVar19 >> 0x10) & 7;
      uVar19 = (ulonglong)((uVar8 & uVar4) >> ((byte)((int)(uVar19 >> 0x13) << 3) & 0x3f));
    }
    uVar12 = (ulonglong)uVar11;
    uVar13 = (ulonglong)uVar18;
    if ((param_1 & 2) == 0) {
      uVar12 = *(uint *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-1] * 4 + 2) + uVar12;
      iVar6 = uVar5 + (int)(uVar12 >> 0x10);
      pbVar2 = pbVar24 + -2;
      uVar13 = *(uint *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4 + 2) + uVar13;
      uVar19 = (ulonglong)(*(uint *)(&DAT_023e3450 + (uVar13 >> 0x10) * 4) & (uint)uVar18) <<
               ((byte)iVar6 & 0x3f) |
               (ulonglong)(*(uint *)(&DAT_023e3450 + (uVar12 >> 0x10) * 4) & (uint)uVar11) <<
               (sbyte)uVar5 | uVar19;
      uVar12 = (ulonglong)
               param_3[(ulonglong)(uVar11 >> ((byte)(uVar12 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-1] * 4) + 2];
      uVar5 = iVar6 + (int)(uVar13 >> 0x10);
      pbVar24 = pbVar24 + -2;
      uVar13 = (ulonglong)
               param_3[(ulonglong)(uVar18 >> ((byte)(uVar13 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4) + 2];
      uVar8 = uVar5 >> 3;
      *puVar22 = uVar19;
      puVar22 = (ulonglong *)((longlong)puVar22 + (ulonglong)uVar8);
      if ((param_4 == 0) && (puVar23 < puVar22)) {
        puVar22 = puVar23;
      }
      uVar5 = uVar5 & 7;
      uVar19 = uVar19 >> ((byte)(uVar8 << 3) & 0x3f);
    }
    while( true ) {
      if (pbVar24 <= param_2) break;
      uVar14 = *(uint *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-1] * 4 + 2) + uVar12;
      iVar20 = (int)(uVar14 >> 0x10) + uVar5;
      uVar15 = *(uint *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-2] * 4 + 2) + uVar13;
      uVar4 = param_3[(uVar12 >> ((byte)(uVar14 >> 0x10) & 0x3f)) +
                      (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-1] * 4) + 2];
      pbVar2 = pbVar24 + -3;
      uVar7 = (ulonglong)*(uint *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4 + 2) +
              (ulonglong)uVar4;
      iVar21 = iVar20 + (int)(uVar15 >> 0x10);
      uVar18 = param_3[(uVar13 >> ((byte)(uVar15 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)pbVar24[-2] * 4) + 2];
      pbVar1 = pbVar24 + -4;
      uVar16 = (ulonglong)*(uint *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar1 * 4 + 2) +
               (ulonglong)uVar18;
      iVar6 = (int)(uVar7 >> 0x10) + iVar21;
      uVar19 = (ulonglong)((uint)uVar18 & *(uint *)(&DAT_023e3450 + (uVar16 >> 0x10) * 4)) <<
               ((byte)iVar6 & 0x3f) |
               (ulonglong)((uint)uVar4 & *(uint *)(&DAT_023e3450 + (uVar7 >> 0x10) * 4)) <<
               ((byte)iVar21 & 0x3f) |
               (ulonglong)(*(uint *)(&DAT_023e3450 + (uVar15 >> 0x10) * 4) & (uint)uVar13) <<
               ((byte)iVar20 & 0x3f) |
               (ulonglong)(*(uint *)(&DAT_023e3450 + (uVar14 >> 0x10) * 4) & (uint)uVar12) <<
               (sbyte)uVar5 | uVar19;
      pbVar24 = pbVar24 + -4;
      uVar5 = iVar6 + (int)(uVar16 >> 0x10);
      uVar8 = uVar5 >> 3;
      puVar17 = (ulonglong *)((ulonglong)uVar8 + (longlong)puVar22);
      uVar12 = (ulonglong)
               param_3[(ulonglong)(uVar4 >> ((byte)(uVar7 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar2 * 4) + 2];
      uVar13 = (ulonglong)
               param_3[(ulonglong)(uVar18 >> ((byte)(uVar16 >> 0x10) & 0x3f)) +
                       (longlong)*(int *)(param_3 + lVar10 * 2 + (ulonglong)*pbVar1 * 4) + 2];
      *puVar22 = uVar19;
      puVar22 = puVar17;
      if (puVar23 < puVar17) {
        puVar22 = puVar23;
      }
      if (param_4 != 0) {
        puVar22 = puVar17;
      }
      uVar5 = uVar5 & 7;
      uVar19 = uVar19 >> ((byte)(uVar8 << 3) & 0x3f);
    }
    uVar8 = *(uint *)(&DAT_023e3450 + (ulonglong)uVar3 * 4);
    uVar19 = (ulonglong)((uint)uVar12 & uVar8) << (sbyte)uVar5 | uVar19;
    uVar9 = uVar5 + uVar3 >> 3;
    puVar17 = (ulonglong *)((ulonglong)uVar9 + (longlong)puVar22);
    if (puVar23 < puVar17) {
      puVar17 = puVar23;
    }
    *puVar22 = uVar19;
    uVar5 = uVar5 + uVar3 & 7;
    uVar12 = (ulonglong)((uint)uVar13 & uVar8) << (sbyte)uVar5 |
             uVar19 >> ((byte)(uVar9 << 3) & 0x3f);
    uVar19 = (ulonglong)uVar3 + (ulonglong)uVar5;
    uVar13 = uVar19 >> 3;
    *puVar17 = uVar12;
    puVar17 = (ulonglong *)((longlong)puVar17 + uVar13);
    if (puVar23 < puVar17) {
      puVar17 = puVar23;
    }
    uVar8 = (uint)uVar19 & 7;
    uVar5 = uVar8 + 1;
    *puVar17 = uVar12 >> ((byte)((int)uVar13 << 3) & 0x3f) | 1L << uVar8;
    puVar17 = (ulonglong *)((ulonglong)(uVar5 >> 3) + (longlong)puVar17);
    if (puVar17 < puVar23) {
      return ((ulonglong)((uVar5 & 7) != 0) - (longlong)unaff_RDI) + (longlong)puVar17;
    }
  }
  return 0;
}


