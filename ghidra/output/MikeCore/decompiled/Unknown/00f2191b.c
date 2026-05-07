// Function: FUN_00f2191b
// Address: 00f2191b
// Size: 1526 bytes
// Class: Unknown


longlong FUN_00f2191b(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong unaff_RSI;
  ulonglong uVar18;
  uint uVar19;
  ulonglong *unaff_RDI;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  ushort *local_res8;
  longlong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  ulonglong local_50;
  ulonglong local_48;
  
  lVar9 = -0x46;
  if (8 < unaff_RSI) {
    uVar17 = (ulonglong)*(byte *)(param_1 + -1 + local_res20);
    uVar4 = *param_2;
    lVar9 = (longlong)(1 << (uVar4 - 1 & 0x1f)) + 1;
    if (uVar4 == 0) {
      lVar9 = 2;
    }
    uVar26 = *(int *)(param_2 + lVar9 * 2 + uVar17 * 4 + 2) + 0x8000;
    bVar1 = *(byte *)(param_4 + -1 + local_res20);
    uVar16 = (ulonglong)bVar1;
    uVar5 = *param_3;
    lVar10 = (longlong)(1 << (uVar5 - 1 & 0x1f)) + 1;
    if (uVar5 == 0) {
      lVar10 = 2;
    }
    uVar15 = *(int *)(param_3 + lVar10 * 2 + uVar16 * 4 + 2) + 0x8000;
    uVar6 = *local_res8;
    lVar11 = (longlong)(1 << (uVar6 - 1 & 0x1f)) + 1;
    if (uVar6 == 0) {
      lVar11 = 2;
    }
    uVar23 = (ulonglong)*(byte *)(local_res10 + -1 + local_res20);
    uVar13 = *(int *)(local_res8 + lVar11 * 2 + uVar23 * 4 + 2) + 0x8000;
    uVar27 = (ulonglong)(byte)(&DAT_023e43d0)[uVar23];
    uVar20 = (ulonglong)
             ((uint)*(ushort *)(local_res18 + -2 + local_res20 * 8) &
             (&DAT_023e4440)[(byte)(&DAT_023e4400)[uVar17]]) << (uVar27 & 0x3f) |
             (ulonglong)
             ((uint)*(ushort *)(local_res18 + -4 + local_res20 * 8) & (&DAT_023e4440)[uVar27]);
    uVar27 = (byte)(&DAT_023e4400)[uVar17] + uVar27;
    puVar12 = (ulonglong *)((longlong)unaff_RDI + (unaff_RSI - 8));
    uVar17 = (ulonglong)
             param_2[(ulonglong)
                     ((uVar26 & 0xffff0000) - *(int *)(param_2 + lVar9 * 2 + uVar17 * 4 + 2) >>
                     ((ulonglong)(uVar26 >> 0x10) & 0x3f)) +
                     (longlong)*(int *)(param_2 + lVar9 * 2 + uVar17 * 4) + 2];
    uVar7 = param_3[(ulonglong)
                    ((uVar15 & 0xffff0000) - *(int *)(param_3 + lVar10 * 2 + uVar16 * 4 + 2) >>
                    ((ulonglong)(uVar15 >> 0x10) & 0x3f)) +
                    (longlong)*(int *)(param_3 + lVar10 * 2 + uVar16 * 4) + 2];
    uVar8 = local_res8
            [(ulonglong)
             ((uVar13 & 0xffff0000) - *(int *)(local_res8 + lVar11 * 2 + uVar23 * 4 + 2) >>
             ((ulonglong)(uVar13 >> 0x10) & 0x3f)) +
             (longlong)*(int *)(local_res8 + lVar11 * 2 + uVar23 * 4) + 2];
    puVar28 = unaff_RDI;
    if (param_5 == 0) {
      uVar20 = (ulonglong)((&DAT_023e4440)[uVar16] & *(uint *)(local_res18 + -8 + local_res20 * 8))
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
        uVar20 = (ulonglong)((&DAT_023e4440)[uVar13] & uVar15) << (uVar27 & 0x3f) | uVar20;
        uVar25 = (int)uVar27 + uVar13;
        uVar19 = uVar25 >> 3;
        puVar28 = (ulonglong *)((ulonglong)uVar19 + (longlong)unaff_RDI);
        if (puVar12 < puVar28) {
          puVar28 = puVar12;
        }
        *unaff_RDI = uVar20;
        uVar27 = (ulonglong)(uVar25 & 7);
        uVar20 = uVar20 >> ((ulonglong)(uVar19 << 3) & 0x3f);
      }
      uVar20 = (ulonglong)(uVar15 >> ((ulonglong)uVar13 & 0x3f) & (&DAT_023e4440)[uVar26]) <<
               (uVar27 & 0x3f) | uVar20;
      uVar26 = (int)uVar27 + uVar26;
    }
    *puVar28 = uVar20;
    puVar28 = (ulonglong *)((ulonglong)(uVar26 >> 3) + (longlong)puVar28);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar20 = uVar20 >> ((ulonglong)((uVar26 >> 3) << 3) & 0x3f);
    uVar16 = (ulonglong)(uVar26 & 7);
    if (1 < local_res20) {
      uVar23 = local_res20 - 2;
      do {
        local_48 = (ulonglong)uVar7;
        local_50 = (ulonglong)uVar8;
        uVar27 = (ulonglong)*(byte *)(local_res10 + uVar23);
        bVar1 = *(byte *)(param_4 + uVar23);
        uVar22 = (ulonglong)bVar1;
        uVar24 = (ulonglong)*(byte *)(param_1 + uVar23);
        uVar18 = *(uint *)(param_3 + lVar10 * 2 + uVar22 * 4 + 2) + local_48 >> 0x10;
        uVar15 = (int)(*(uint *)(param_3 + lVar10 * 2 + uVar22 * 4 + 2) + local_48 >> 0x10) +
                 (int)uVar16;
        uVar21 = *(uint *)(param_2 + lVar9 * 2 + uVar24 * 4 + 2) + uVar17 >> 0x10;
        uVar26 = (int)(*(uint *)(param_2 + lVar9 * 2 + uVar24 * 4 + 2) + uVar17 >> 0x10) + uVar15;
        uVar14 = *(uint *)(local_res8 + lVar11 * 2 + uVar27 * 4 + 2) + local_50 >> 0x10;
        uVar16 = (ulonglong)((&DAT_023e4440)[uVar14] & (uint)uVar8) << ((ulonglong)uVar26 & 0x3f) |
                 (ulonglong)((&DAT_023e4440)[uVar21] & (uint)uVar17) << ((ulonglong)uVar15 & 0x3f) |
                 (ulonglong)((&DAT_023e4440)[uVar18] & (uint)uVar7) << uVar16 | uVar20;
        uVar26 = (int)(*(uint *)(local_res8 + lVar11 * 2 + uVar27 * 4 + 2) + local_50 >> 0x10) +
                 uVar26;
        bVar2 = (&DAT_023e43d0)[uVar27];
        bVar3 = (&DAT_023e4400)[uVar24];
        uVar7 = param_3[(ulonglong)(uVar7 >> (uVar18 & 0x3f)) +
                        (longlong)*(int *)(param_3 + lVar10 * 2 + uVar22 * 4) + 2];
        uVar17 = (ulonglong)
                 param_2[(uVar17 >> (uVar21 & 0x3f)) +
                         (longlong)*(int *)(param_2 + lVar9 * 2 + uVar24 * 4) + 2];
        uVar8 = local_res8
                [(ulonglong)(uVar8 >> (uVar14 & 0x3f)) +
                 (longlong)*(int *)(local_res8 + lVar11 * 2 + uVar27 * 4) + 2];
        uVar15 = (uint)bVar2 + (uint)bVar1 + (uint)bVar3;
        if (0x1e < uVar15) {
          uVar13 = uVar26 >> 3;
          *puVar28 = uVar16;
          puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)uVar13);
          if (puVar12 < puVar28) {
            puVar28 = puVar12;
          }
          uVar26 = uVar26 & 7;
          uVar16 = uVar16 >> ((ulonglong)(uVar13 << 3) & 0x3f);
        }
        uVar27 = (ulonglong)uVar26 + (ulonglong)bVar2;
        uVar20 = (ulonglong)
                 ((uint)*(ushort *)(local_res18 + 6 + uVar23 * 8) & (&DAT_023e4440)[(uint)bVar3]) <<
                 (uVar27 & 0x3f) | uVar16 |
                 (ulonglong)
                 ((uint)*(ushort *)(local_res18 + 4 + uVar23 * 8) & (&DAT_023e4440)[bVar2]) <<
                 ((ulonglong)uVar26 & 0x3f);
        uVar27 = uVar27 + bVar3;
        if (0x38 < uVar15) {
          uVar16 = uVar27 >> 3;
          *puVar28 = uVar20;
          puVar28 = (ulonglong *)((longlong)puVar28 + uVar16);
          if (puVar12 < puVar28) {
            puVar28 = puVar12;
          }
          uVar27 = (ulonglong)((uint)uVar27 & 7);
          uVar20 = uVar20 >> ((ulonglong)(uint)((int)uVar16 << 3) & 0x3f);
        }
        if (param_5 == 0) {
          uVar20 = (ulonglong)((&DAT_023e4440)[uVar22] & *(uint *)(local_res18 + uVar23 * 8)) <<
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
            uVar20 = (ulonglong)((&DAT_023e4440)[uVar13] & uVar15) << (uVar27 & 0x3f) | uVar20;
            uVar25 = (int)uVar27 + uVar13;
            uVar19 = uVar25 >> 3;
            *puVar28 = uVar20;
            puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)uVar19);
            if (puVar12 < puVar28) {
              puVar28 = puVar12;
            }
            uVar27 = (ulonglong)(uVar25 & 7);
            uVar20 = uVar20 >> ((ulonglong)(uVar19 << 3) & 0x3f);
          }
          uVar20 = (ulonglong)(uVar15 >> ((ulonglong)uVar13 & 0x3f) & (&DAT_023e4440)[uVar26]) <<
                   (uVar27 & 0x3f) | uVar20;
          uVar26 = (int)uVar27 + uVar26;
        }
        *puVar28 = uVar20;
        puVar28 = (ulonglong *)((longlong)puVar28 + (ulonglong)(uVar26 >> 3));
        if (puVar12 < puVar28) {
          puVar28 = puVar12;
        }
        uVar20 = uVar20 >> ((ulonglong)((uVar26 >> 3) << 3) & 0x3f);
        uVar23 = uVar23 - 1;
        uVar16 = (ulonglong)(uVar26 & 7);
      } while (uVar23 < local_res20);
    }
    uVar23 = uVar16 + uVar4;
    uVar20 = (ulonglong)((uint)uVar17 & (&DAT_023e4440)[uVar4]) << uVar16 | uVar20;
    uVar17 = uVar23 >> 3;
    *puVar28 = uVar20;
    puVar28 = (ulonglong *)((longlong)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar16 = (ulonglong)((uint)uVar23 & 7);
    uVar23 = (ulonglong)((uint)uVar7 & (&DAT_023e4440)[uVar5]) << uVar16 |
             uVar20 >> ((ulonglong)(uint)((int)uVar17 << 3) & 0x3f);
    uVar16 = uVar16 + uVar5;
    uVar17 = uVar16 >> 3;
    *puVar28 = uVar23;
    puVar28 = (ulonglong *)((longlong)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar16 = (ulonglong)((uint)uVar16 & 7);
    uVar23 = (ulonglong)((uint)uVar8 & (&DAT_023e4440)[uVar6]) << uVar16 |
             uVar23 >> ((ulonglong)(uint)((int)uVar17 << 3) & 0x3f);
    uVar16 = uVar6 + uVar16;
    uVar17 = uVar16 >> 3;
    *puVar28 = uVar23;
    puVar28 = (ulonglong *)((longlong)puVar28 + uVar17);
    if (puVar12 < puVar28) {
      puVar28 = puVar12;
    }
    uVar26 = (uint)uVar16 & 7;
    uVar15 = uVar26 + 1;
    *puVar28 = uVar23 >> ((ulonglong)(uint)((int)uVar17 << 3) & 0x3f) | 1L << uVar26;
    puVar28 = (ulonglong *)((ulonglong)(uVar15 >> 3) + (longlong)puVar28);
    if ((puVar12 <= puVar28) ||
       (lVar9 = ((ulonglong)((uVar15 & 7) != 0) - (longlong)unaff_RDI) + (longlong)puVar28,
       lVar9 == 0)) {
      return -0x46;
    }
  }
  return lVar9;
}


