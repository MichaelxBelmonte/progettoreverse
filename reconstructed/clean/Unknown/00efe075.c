// Function: FUN_00efe075
// Address: 00efe075
// Size: 1020 bytes
// Class: Unknown

int64_t FUN_00efe075(uint64_t param_1,byte *param_2,ushort *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  int64_t lVar10;
  ushort uVar11;
  uint64_t arg1;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  uint64_t *this_ptr;
  ushort uVar18;
  uint64_t uVar19;
  int iVar20;
  int iVar21;
  uint64_t *puVar22;
  uint64_t *puVar23;
  byte *pbVar24;
  
  if ((2 < param_1) && (8 < arg1)) {
    puVar23 = (uint64_t *)((int64_t)this_ptr + (arg1 - 8));
    pbVar2 = param_2 + (param_1 - 1);
    uVar3 = *param_3;
    lVar10 = 2;
    if (uVar3 != 0) {
      lVar10 = (int64_t)(1 << ((char)uVar3 - 1U & 0x1f)) + 1;
    }
    uVar8 = *(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4 + 2) + 0x8000;
    uVar4 = param_3[(uint64_t)
                    ((uVar8 & 0xffff0000) -
                     *(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4 + 2) >>
                    ((byte)(uVar8 >> 0x10) & 0x3f)) +
                    (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4) + 2];
    if ((param_1 & 1) == 0) {
      pbVar24 = pbVar2 + -1;
      uVar8 = *(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4 + 2) + 0x8000;
      uVar18 = param_3[(uint64_t)
                       ((uVar8 & 0xffff0000) -
                        *(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4 + 2) >>
                       ((byte)(uVar8 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4) + 2];
      uVar19 = 0;
      uVar5 = 0;
      puVar22 = this_ptr;
      uVar11 = uVar4;
    }
    else {
      uVar8 = *(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4 + 2) + 0x8000;
      uVar11 = param_3[(uint64_t)
                       ((uVar8 & 0xffff0000) -
                        *(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4 + 2) >>
                       ((byte)(uVar8 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-1] * 4) + 2];
      uVar19 = (uint64_t)*(uint *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-2] * 4 + 2) +
               (uint64_t)uVar4;
      uVar8 = *(uint *)(&g_023e3450 + (uVar19 >> 0x10) * 4);
      pbVar24 = pbVar2 + -2;
      uVar18 = param_3[(uint64_t)(uVar4 >> ((byte)(uVar19 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar2[-2] * 4) + 2];
      puVar22 = (uint64_t *)((int64_t)this_ptr + (uVar19 >> 0x13));
      *this_ptr = (uint64_t)(uVar8 & uVar4);
      if ((param_4 == 0) && (puVar23 < puVar22)) {
        puVar22 = puVar23;
      }
      uVar5 = (uint)(uVar19 >> 0x10) & 7;
      uVar19 = (uint64_t)((uVar8 & uVar4) >> ((byte)((int)(uVar19 >> 0x13) << 3) & 0x3f));
    }
    uVar12 = (uint64_t)uVar11;
    uVar13 = (uint64_t)uVar18;
    if ((param_1 & 2) == 0) {
      uVar12 = *(uint *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-1] * 4 + 2) + uVar12;
      iVar6 = uVar5 + (int)(uVar12 >> 0x10);
      pbVar2 = pbVar24 + -2;
      uVar13 = *(uint *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4 + 2) + uVar13;
      uVar19 = (uint64_t)(*(uint *)(&g_023e3450 + (uVar13 >> 0x10) * 4) & (uint)uVar18) <<
               ((byte)iVar6 & 0x3f) |
               (uint64_t)(*(uint *)(&g_023e3450 + (uVar12 >> 0x10) * 4) & (uint)uVar11) <<
               (sbyte)uVar5 | uVar19;
      uVar12 = (uint64_t)
               param_3[(uint64_t)(uVar11 >> ((byte)(uVar12 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-1] * 4) + 2];
      uVar5 = iVar6 + (int)(uVar13 >> 0x10);
      pbVar24 = pbVar24 + -2;
      uVar13 = (uint64_t)
               param_3[(uint64_t)(uVar18 >> ((byte)(uVar13 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4) + 2];
      uVar8 = uVar5 >> 3;
      *puVar22 = uVar19;
      puVar22 = (uint64_t *)((int64_t)puVar22 + (uint64_t)uVar8);
      if ((param_4 == 0) && (puVar23 < puVar22)) {
        puVar22 = puVar23;
      }
      uVar5 = uVar5 & 7;
      uVar19 = uVar19 >> ((byte)(uVar8 << 3) & 0x3f);
    }
    while( true ) {
      if (pbVar24 <= param_2) break;
      uVar14 = *(uint *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-1] * 4 + 2) + uVar12;
      iVar20 = (int)(uVar14 >> 0x10) + uVar5;
      uVar15 = *(uint *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-2] * 4 + 2) + uVar13;
      uVar4 = param_3[(uVar12 >> ((byte)(uVar14 >> 0x10) & 0x3f)) +
                      (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-1] * 4) + 2];
      pbVar2 = pbVar24 + -3;
      uVar7 = (uint64_t)*(uint *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4 + 2) +
              (uint64_t)uVar4;
      iVar21 = iVar20 + (int)(uVar15 >> 0x10);
      uVar18 = param_3[(uVar13 >> ((byte)(uVar15 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)pbVar24[-2] * 4) + 2];
      pbVar1 = pbVar24 + -4;
      uVar16 = (uint64_t)*(uint *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar1 * 4 + 2) +
               (uint64_t)uVar18;
      iVar6 = (int)(uVar7 >> 0x10) + iVar21;
      uVar19 = (uint64_t)((uint)uVar18 & *(uint *)(&g_023e3450 + (uVar16 >> 0x10) * 4)) <<
               ((byte)iVar6 & 0x3f) |
               (uint64_t)((uint)uVar4 & *(uint *)(&g_023e3450 + (uVar7 >> 0x10) * 4)) <<
               ((byte)iVar21 & 0x3f) |
               (uint64_t)(*(uint *)(&g_023e3450 + (uVar15 >> 0x10) * 4) & (uint)uVar13) <<
               ((byte)iVar20 & 0x3f) |
               (uint64_t)(*(uint *)(&g_023e3450 + (uVar14 >> 0x10) * 4) & (uint)uVar12) <<
               (sbyte)uVar5 | uVar19;
      pbVar24 = pbVar24 + -4;
      uVar5 = iVar6 + (int)(uVar16 >> 0x10);
      uVar8 = uVar5 >> 3;
      puVar17 = (uint64_t *)((uint64_t)uVar8 + (int64_t)puVar22);
      uVar12 = (uint64_t)
               param_3[(uint64_t)(uVar4 >> ((byte)(uVar7 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar2 * 4) + 2];
      uVar13 = (uint64_t)
               param_3[(uint64_t)(uVar18 >> ((byte)(uVar16 >> 0x10) & 0x3f)) +
                       (int64_t)*(int *)(param_3 + lVar10 * 2 + (uint64_t)*pbVar1 * 4) + 2];
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
    uVar8 = *(uint *)(&g_023e3450 + (uint64_t)uVar3 * 4);
    uVar19 = (uint64_t)((uint)uVar12 & uVar8) << (sbyte)uVar5 | uVar19;
    uVar9 = uVar5 + uVar3 >> 3;
    puVar17 = (uint64_t *)((uint64_t)uVar9 + (int64_t)puVar22);
    if (puVar23 < puVar17) {
      puVar17 = puVar23;
    }
    *puVar22 = uVar19;
    uVar5 = uVar5 + uVar3 & 7;
    uVar12 = (uint64_t)((uint)uVar13 & uVar8) << (sbyte)uVar5 |
             uVar19 >> ((byte)(uVar9 << 3) & 0x3f);
    uVar19 = (uint64_t)uVar3 + (uint64_t)uVar5;
    uVar13 = uVar19 >> 3;
    *puVar17 = uVar12;
    puVar17 = (uint64_t *)((int64_t)puVar17 + uVar13);
    if (puVar23 < puVar17) {
      puVar17 = puVar23;
    }
    uVar8 = (uint)uVar19 & 7;
    uVar5 = uVar8 + 1;
    *puVar17 = uVar12 >> ((byte)((int)uVar13 << 3) & 0x3f) | 1L << uVar8;
    puVar17 = (uint64_t *)((uint64_t)(uVar5 >> 3) + (int64_t)puVar17);
    if (puVar17 < puVar23) {
      return ((uint64_t)((uVar5 & 7) != 0) - (int64_t)this_ptr) + (int64_t)puVar17;
    }
  }
  return 0;
}

