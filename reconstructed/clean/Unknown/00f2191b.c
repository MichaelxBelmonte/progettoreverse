// Function: FUN_00f2191b
// Address: 00f2191b
// Size: 1526 bytes
// Class: Unknown

int64_t FUN_00f2191b(int64_t param_1,ushort *param_2,ushort *param_3,int64_t param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint uVar13;
  uint64_t uVar14;
  uint uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t arg1;
  uint64_t uVar18;
  uint uVar19;
  uint64_t *this_ptr;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint uVar25;
  uint uVar26;
  uint64_t uVar27;
  uint64_t *puVar28;
  ushort *local_res8;
  int64_t local_res10;
  int64_t local_res18;
  uint64_t local_res20;
  uint64_t local_50;
  uint64_t local_48;
  
  lVar9 = -0x46;
  if (8 < arg1) {
    uVar17 = (uint64_t)*(byte *)(param_1 + -1 + local_res20);
    uVar4 = *param_2;
    lVar9 = (int64_t)(1 << (uVar4 - 1 & 0x1f)) + 1;
    if (uVar4 == 0) {
      lVar9 = 2;
    }
    uVar26 = *(int *)(param_2 + lVar9 * 2 + uVar17 * 4 + 2) + 0x8000;
    bVar1 = *(byte *)(param_4 + -1 + local_res20);
    uVar16 = (uint64_t)bVar1;
    uVar5 = *param_3;
    lVar10 = (int64_t)(1 << (uVar5 - 1 & 0x1f)) + 1;
    if (uVar5 == 0) {
      lVar10 = 2;
    }
    uVar15 = *(int *)(param_3 + lVar10 * 2 + uVar16 * 4 + 2) + 0x8000;
    uVar6 = *local_res8;
    lVar11 = (int64_t)(1 << (uVar6 - 1 & 0x1f)) + 1;
    if (uVar6 == 0) {
      lVar11 = 2;
    }
    uVar23 = (uint64_t)*(byte *)(local_res10 + -1 + local_res20);
    uVar13 = *(int *)(local_res8 + lVar11 * 2 + uVar23 * 4 + 2) + 0x8000;
    uVar27 = (uint64_t)(byte)(&g_023e43d0)[uVar23];
    uVar20 = (uint64_t)
             ((uint)*(ushort *)(local_res18 + -2 + local_res20 * 8) &
             (&g_023e4440)[(byte)(&g_023e4400)[uVar17]]) << (uVar27 & 0x3f) |
             (uint64_t)
             ((uint)*(ushort *)(local_res18 + -4 + local_res20 * 8) & (&g_023e4440)[uVar27]);
    uVar27 = (byte)(&g_023e4400)[uVar17] + uVar27;
    puVar12 = (uint64_t *)((int64_t)this_ptr + (arg1 - 8));
    uVar17 = (uint64_t)
             param_2[(uint64_t)
                     ((uVar26 & 0xffff0000) - *(int *)(param_2 + lVar9 * 2 + uVar17 * 4 + 2) >>
                     ((uint64_t)(uVar26 >> 0x10) & 0x3f)) +
                     (int64_t)*(int *)(param_2 + lVar9 * 2 + uVar17 * 4) + 2];
    uVar7 = param_3[(uint64_t)
                    ((uVar15 & 0xffff0000) - *(int *)(param_3 + lVar10 * 2 + uVar16 * 4 + 2) >>
                    ((uint64_t)(uVar15 >> 0x10) & 0x3f)) +
                    (int64_t)*(int *)(param_3 + lVar10 * 2 + uVar16 * 4) + 2];
    uVar8 = local_res8
            [(uint64_t)
             ((uVar13 & 0xffff0000) - *(int *)(local_res8 + lVar11 * 2 + uVar23 * 4 + 2) >>
             ((uint64_t)(uVar13 >> 0x10) & 0x3f)) +
             (int64_t)*(int *)(local_res8 + lVar11 * 2 + uVar23 * 4) + 2];
    puVar28 = this_ptr;
    if (param_5 == 0) {
      uVar20 = (uint64_t)((&g_023e4440)[uVar16] & *(uint *)(local_res18 + -8 + local_res20 * 8))
               << (uVar27 & 0x3f) | uVar20;
      uVar26 = (int)uVar27 + (uint)bVar1;
    }
    else {
      uVar26 = 0x38;
      if (bVar1 < 0x38) {
        uVar26 = (uint)bVar1;
      }
      uVar15 = *(uint *)(local_res18 + -8 + local_res20 * 8);
      uVar13 = bVar1 - uVar26;
      if (uVar13 != 0) {
        uVar20 = (uint64_t)((&g_023e4440)[uVar13] & uVar15) << (uVar27 & 0x3f) | uVar20;
        uVar25 = (int)uVar27 + uVar13;
        uVar19 = uVar25 >> 3;
        puVar28 = (uint64_t *)((uint64_t)uVar19 + (int64_t)this_ptr);
        if (puVar12 < puVar28) {
          puVar28 = puVar12;
        }
        *this_ptr = uVar20;
        uVar27 = (uint64_t)(uVar25 & 7);
        uVar20 = uVar20 >> ((uint64_t)(uVar19 << 3) & 0x3f);
      }
      uVar20 = (uint64_t)(uVar15 >> ((uint64_t)uVar13 & 0x3f) & (&g_023e4440)[uVar26]) <<
               (uVar27 & 0x3f) | uVar20;
      uVar26 = (int)uVar27 + uVar26;
    }
    *puVar28 = uVar20;
    puVar28 = (uint64_t *)((uint64_t)(uVar26 >> 3) + (int64_t)puVar28);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar20 = uVar20 >> ((uint64_t)((uVar26 >> 3) << 3) & 0x3f);
    uVar16 = (uint64_t)(uVar26 & 7);
    if (1 < local_res20) {
      uVar23 = local_res20 - 2;
      do {
        local_48 = (uint64_t)uVar7;
        local_50 = (uint64_t)uVar8;
        uVar27 = (uint64_t)*(byte *)(local_res10 + uVar23);
        bVar1 = *(byte *)(param_4 + uVar23);
        uVar22 = (uint64_t)bVar1;
        uVar24 = (uint64_t)*(byte *)(param_1 + uVar23);
        uVar18 = *(uint *)(param_3 + lVar10 * 2 + uVar22 * 4 + 2) + local_48 >> 0x10;
        uVar15 = (int)(*(uint *)(param_3 + lVar10 * 2 + uVar22 * 4 + 2) + local_48 >> 0x10) +
                 (int)uVar16;
        uVar21 = *(uint *)(param_2 + lVar9 * 2 + uVar24 * 4 + 2) + uVar17 >> 0x10;
        uVar26 = (int)(*(uint *)(param_2 + lVar9 * 2 + uVar24 * 4 + 2) + uVar17 >> 0x10) + uVar15;
        uVar14 = *(uint *)(local_res8 + lVar11 * 2 + uVar27 * 4 + 2) + local_50 >> 0x10;
        uVar16 = (uint64_t)((&g_023e4440)[uVar14] & (uint)uVar8) << ((uint64_t)uVar26 & 0x3f) |
                 (uint64_t)((&g_023e4440)[uVar21] & (uint)uVar17) << ((uint64_t)uVar15 & 0x3f) |
                 (uint64_t)((&g_023e4440)[uVar18] & (uint)uVar7) << uVar16 | uVar20;
        uVar26 = (int)(*(uint *)(local_res8 + lVar11 * 2 + uVar27 * 4 + 2) + local_50 >> 0x10) +
                 uVar26;
        bVar2 = (&g_023e43d0)[uVar27];
        bVar3 = (&g_023e4400)[uVar24];
        uVar7 = param_3[(uint64_t)(uVar7 >> (uVar18 & 0x3f)) +
                        (int64_t)*(int *)(param_3 + lVar10 * 2 + uVar22 * 4) + 2];
        uVar17 = (uint64_t)
                 param_2[(uVar17 >> (uVar21 & 0x3f)) +
                         (int64_t)*(int *)(param_2 + lVar9 * 2 + uVar24 * 4) + 2];
        uVar8 = local_res8
                [(uint64_t)(uVar8 >> (uVar14 & 0x3f)) +
                 (int64_t)*(int *)(local_res8 + lVar11 * 2 + uVar27 * 4) + 2];
        uVar15 = (uint)bVar2 + (uint)bVar1 + (uint)bVar3;
        if (0x1e < uVar15) {
          uVar13 = uVar26 >> 3;
          *puVar28 = uVar16;
          puVar28 = (uint64_t *)((int64_t)puVar28 + (uint64_t)uVar13);
          if (puVar12 < puVar28) {
            puVar28 = puVar12;
          }
          uVar26 = uVar26 & 7;
          uVar16 = uVar16 >> ((uint64_t)(uVar13 << 3) & 0x3f);
        }
        uVar27 = (uint64_t)uVar26 + (uint64_t)bVar2;
        uVar20 = (uint64_t)
                 ((uint)*(ushort *)(local_res18 + 6 + uVar23 * 8) & (&g_023e4440)[(uint)bVar3]) <<
                 (uVar27 & 0x3f) | uVar16 |
                 (uint64_t)
                 ((uint)*(ushort *)(local_res18 + 4 + uVar23 * 8) & (&g_023e4440)[bVar2]) <<
                 ((uint64_t)uVar26 & 0x3f);
        uVar27 = uVar27 + bVar3;
        if (0x38 < uVar15) {
          uVar16 = uVar27 >> 3;
          *puVar28 = uVar20;
          puVar28 = (uint64_t *)((int64_t)puVar28 + uVar16);
          if (puVar12 < puVar28) {
            puVar28 = puVar12;
          }
          uVar27 = (uint64_t)((uint)uVar27 & 7);
          uVar20 = uVar20 >> ((uint64_t)(uint)((int)uVar16 << 3) & 0x3f);
        }
        if (param_5 == 0) {
          uVar20 = (uint64_t)((&g_023e4440)[uVar22] & *(uint *)(local_res18 + uVar23 * 8)) <<
                   (uVar27 & 0x3f) | uVar20;
          uVar26 = (int)uVar27 + (uint)bVar1;
        }
        else {
          uVar26 = 0x38;
          if (bVar1 < 0x38) {
            uVar26 = (uint)bVar1;
          }
          uVar15 = *(uint *)(local_res18 + uVar23 * 8);
          uVar13 = bVar1 - uVar26;
          if (uVar13 != 0) {
            uVar20 = (uint64_t)((&g_023e4440)[uVar13] & uVar15) << (uVar27 & 0x3f) | uVar20;
            uVar25 = (int)uVar27 + uVar13;
            uVar19 = uVar25 >> 3;
            *puVar28 = uVar20;
            puVar28 = (uint64_t *)((int64_t)puVar28 + (uint64_t)uVar19);
            if (puVar12 < puVar28) {
              puVar28 = puVar12;
            }
            uVar27 = (uint64_t)(uVar25 & 7);
            uVar20 = uVar20 >> ((uint64_t)(uVar19 << 3) & 0x3f);
          }
          uVar20 = (uint64_t)(uVar15 >> ((uint64_t)uVar13 & 0x3f) & (&g_023e4440)[uVar26]) <<
                   (uVar27 & 0x3f) | uVar20;
          uVar26 = (int)uVar27 + uVar26;
        }
        *puVar28 = uVar20;
        puVar28 = (uint64_t *)((int64_t)puVar28 + (uint64_t)(uVar26 >> 3));
        if (puVar12 < puVar28) {
          puVar28 = puVar12;
        }
        uVar20 = uVar20 >> ((uint64_t)((uVar26 >> 3) << 3) & 0x3f);
        uVar23 = uVar23 - 1;
        uVar16 = (uint64_t)(uVar26 & 7);
      } while (uVar23 < local_res20);
    }
    uVar23 = uVar16 + uVar4;
    uVar20 = (uint64_t)((uint)uVar17 & (&g_023e4440)[uVar4]) << uVar16 | uVar20;
    uVar17 = uVar23 >> 3;
    *puVar28 = uVar20;
    puVar28 = (uint64_t *)((int64_t)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar16 = (uint64_t)((uint)uVar23 & 7);
    uVar23 = (uint64_t)((uint)uVar7 & (&g_023e4440)[uVar5]) << uVar16 |
             uVar20 >> ((uint64_t)(uint)((int)uVar17 << 3) & 0x3f);
    uVar16 = uVar16 + uVar5;
    uVar17 = uVar16 >> 3;
    *puVar28 = uVar23;
    puVar28 = (uint64_t *)((int64_t)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar16 = (uint64_t)((uint)uVar16 & 7);
    uVar23 = (uint64_t)((uint)uVar8 & (&g_023e4440)[uVar6]) << uVar16 |
             uVar23 >> ((uint64_t)(uint)((int)uVar17 << 3) & 0x3f);
    uVar16 = uVar6 + uVar16;
    uVar17 = uVar16 >> 3;
    *puVar28 = uVar23;
    puVar28 = (uint64_t *)((int64_t)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar26 = (uint)uVar16 & 7;
    uVar15 = uVar26 + 1;
    *puVar28 = uVar23 >> ((uint64_t)(uint)((int)uVar17 << 3) & 0x3f) | 1L << uVar26;
    puVar28 = (uint64_t *)((uint64_t)(uVar15 >> 3) + (int64_t)puVar28);
    if ((puVar12 <= puVar28) ||
       (lVar9 = ((uint64_t)((uVar15 & 7) != 0) - (int64_t)this_ptr) + (int64_t)puVar28,
       lVar9 == 0)) {
      return -0x46;
    }
  }
  return lVar9;
}

