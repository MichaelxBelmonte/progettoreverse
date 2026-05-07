// Function: FUN_009658a9
// Address: 009658a9
// Size: 3877 bytes
// Class: GNString


void FUN_009658a9(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong unaff_RDI;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_80;
  ulonglong local_78 [8];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar1 = 0;
  do {
    local_78[lVar1] =
         (ulonglong)
         CONCAT11(*(undefined1 *)(unaff_RDI + 0x26 + lVar1 * 8),
                  *(undefined1 *)(unaff_RDI + 0x27 + lVar1 * 8)) ^
         ((ulonglong)*(byte *)(unaff_RDI + 0x25 + lVar1 * 8) << 0x10 |
         (ulonglong)*(byte *)(unaff_RDI + 0x24 + lVar1 * 8) << 0x18 |
         (ulonglong)*(byte *)(unaff_RDI + 0x23 + lVar1 * 8) << 0x20 |
         (ulonglong)*(byte *)(unaff_RDI + 0x22 + lVar1 * 8) << 0x28 |
         (ulonglong)*(byte *)(unaff_RDI + 0x21 + lVar1 * 8) << 0x30 |
         (ulonglong)*(byte *)(unaff_RDI + 0x20 + lVar1 * 8) << 0x38);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 8);
  uVar33 = *(ulonglong *)(unaff_RDI + 0x68);
  uVar2 = local_78[0] ^ uVar33;
  uVar3 = local_78[1] ^ *(ulonglong *)(unaff_RDI + 0x70);
  uVar28 = local_78[2] ^ *(ulonglong *)(unaff_RDI + 0x78);
  uVar8 = local_78[3] ^ *(ulonglong *)(unaff_RDI + 0x80);
  uVar12 = local_78[4] ^ *(ulonglong *)(unaff_RDI + 0x88);
  uVar15 = local_78[5] ^ *(ulonglong *)(unaff_RDI + 0x90);
  uVar22 = local_78[6] ^ *(ulonglong *)(unaff_RDI + 0x98);
  uVar6 = *(ulonglong *)(unaff_RDI + 0xa0);
  uVar24 = local_78[7] ^ uVar6;
  local_c0 = 1;
  uVar13 = uVar12;
  uVar20 = uVar15;
  uVar23 = uVar22;
  uVar25 = *(ulonglong *)(unaff_RDI + 0x90);
  uVar26 = *(ulonglong *)(unaff_RDI + 0x78);
  uVar27 = *(ulonglong *)(unaff_RDI + 0x98);
  uVar29 = uVar3;
  uVar31 = *(ulonglong *)(unaff_RDI + 0x80);
  uVar32 = *(ulonglong *)(unaff_RDI + 0x88);
  local_b8 = uVar24;
  local_b0 = uVar2;
  local_a0 = uVar28;
  local_98 = uVar8;
  local_80 = *(ulonglong *)(unaff_RDI + 0x70);
  do {
    uVar16 = uVar6 >> 0x2d;
    uVar4 = *(ulonglong *)(&DAT_023c2e90 + (uVar33 >> 0x2d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c2690 + (local_80 >> 0x38) * 8) ^
            *(ulonglong *)(&DAT_023c3690 + (uVar6 >> 0x25 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3e90 + (uVar27 >> 0x1d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4690 + (uVar25 >> 0x15 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4e90 + (uVar32 >> 0xd & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c5690 + (uVar31 >> 8 & 0xff) * 8) ^
            *(ulonglong *)(&DAT_023c5e90 + (uVar26 & 0xff) * 8);
    uVar17 = *(ulonglong *)(&DAT_023c2e90 + (local_80 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c2690 + (uVar26 >> 0x38) * 8) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar33 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar6 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar27 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar25 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar32 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar31 & 0xff) * 8);
    uVar9 = *(ulonglong *)(&DAT_023c2e90 + (uVar26 >> 0x2d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c2690 + (uVar31 >> 0x38) * 8) ^
            *(ulonglong *)(&DAT_023c3690 + (local_80 >> 0x25 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3e90 + (uVar33 >> 0x1d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4690 + (uVar6 >> 0x15 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4e90 + (uVar27 >> 0xd & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c5690 + (uVar25 >> 8 & 0xff) * 8) ^
            *(ulonglong *)(&DAT_023c5e90 + (uVar32 & 0xff) * 8);
    uVar10 = *(ulonglong *)(&DAT_023c2e90 + (uVar31 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c2690 + (uVar32 >> 0x38) * 8) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar26 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (local_80 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar33 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar6 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar27 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar25 & 0xff) * 8);
    uVar18 = *(ulonglong *)(&DAT_023c2e90 + (uVar32 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c2690 + (uVar25 >> 0x38) * 8) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar31 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar26 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (local_80 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar33 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar6 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar27 & 0xff) * 8);
    uVar5 = *(ulonglong *)(&DAT_023c2e90 + (uVar25 >> 0x2d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c2690 + (uVar27 >> 0x38) * 8) ^
            *(ulonglong *)(&DAT_023c3690 + (uVar32 >> 0x25 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3e90 + (uVar31 >> 0x1d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4690 + (uVar26 >> 0x15 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4e90 + (local_80 >> 0xd & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c5690 + (uVar33 >> 8 & 0xff) * 8) ^
            *(ulonglong *)(&DAT_023c5e90 + (uVar6 & 0xff) * 8);
    uVar6 = *(ulonglong *)(&DAT_023c2e90 + (uVar27 >> 0x2d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c2690 + (uVar6 >> 0x38) * 8) ^
            *(ulonglong *)(&DAT_023c3690 + (uVar25 >> 0x25 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3e90 + (uVar32 >> 0x1d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4690 + (uVar31 >> 0x15 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4e90 + (uVar26 >> 0xd & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c5690 + (local_80 >> 8 & 0xff) * 8) ^
            *(ulonglong *)(&DAT_023c5e90 + (uVar33 & 0xff) * 8);
    uVar19 = *(ulonglong *)(&DAT_023c2690 + (local_b8 >> 0x38) * 8) ^ uVar6 ^
             *(ulonglong *)(&DAT_023c2e90 + (uVar23 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar20 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar13 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (local_98 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (local_a0 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar29 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (local_b0 & 0xff) * 8);
    uVar33 = *(ulonglong *)(&DAT_023c2e90 + (uVar16 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c2690 + (uVar33 >> 0x38) * 8) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar27 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar25 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar32 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar31 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar26 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (local_80 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c6690 + local_c0 * 8);
    uVar11 = *(ulonglong *)(&DAT_023c2690 + (local_b0 >> 0x38) * 8) ^ uVar33 ^
             *(ulonglong *)(&DAT_023c2e90 + (local_b8 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar23 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar20 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar13 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (local_98 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (local_a0 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar29 & 0xff) * 8);
    uVar30 = *(ulonglong *)(&DAT_023c2690 + (uVar29 >> 0x38) * 8) ^ uVar4 ^
             *(ulonglong *)(&DAT_023c2e90 + (local_b0 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (local_b8 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar23 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar20 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar13 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (local_98 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (local_a0 & 0xff) * 8);
    uVar16 = *(ulonglong *)(&DAT_023c2690 + (local_a0 >> 0x38) * 8) ^ uVar17 ^
             *(ulonglong *)(&DAT_023c2e90 + (uVar29 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (local_b0 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (local_b8 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar23 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar20 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar13 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (local_98 & 0xff) * 8);
    uVar7 = *(ulonglong *)(&DAT_023c2690 + (local_98 >> 0x38) * 8) ^ uVar9 ^
            *(ulonglong *)(&DAT_023c2e90 + (local_a0 >> 0x2d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3690 + (uVar29 >> 0x25 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c3e90 + (local_b0 >> 0x1d & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4690 + (local_b8 >> 0x15 & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c4e90 + (uVar23 >> 0xd & 0x7f8)) ^
            *(ulonglong *)(&DAT_023c5690 + (uVar20 >> 8 & 0xff) * 8) ^
            *(ulonglong *)(&DAT_023c5e90 + (uVar13 & 0xff) * 8);
    uVar14 = *(ulonglong *)(&DAT_023c2690 + (uVar13 >> 0x38) * 8) ^ uVar10 ^
             *(ulonglong *)(&DAT_023c2e90 + (local_98 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (local_a0 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (uVar29 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (local_b0 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (local_b8 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (uVar23 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar20 & 0xff) * 8);
    uVar21 = *(ulonglong *)(&DAT_023c2690 + (uVar20 >> 0x38) * 8) ^ uVar18 ^
             *(ulonglong *)(&DAT_023c2e90 + (uVar13 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (local_98 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (local_a0 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (uVar29 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (local_b0 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (local_b8 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (uVar23 & 0xff) * 8);
    uVar23 = *(ulonglong *)(&DAT_023c2690 + (uVar23 >> 0x38) * 8) ^ uVar5 ^
             *(ulonglong *)(&DAT_023c2e90 + (uVar20 >> 0x2d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3690 + (uVar13 >> 0x25 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c3e90 + (local_98 >> 0x1d & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4690 + (local_a0 >> 0x15 & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c4e90 + (uVar29 >> 0xd & 0x7f8)) ^
             *(ulonglong *)(&DAT_023c5690 + (local_b0 >> 8 & 0xff) * 8) ^
             *(ulonglong *)(&DAT_023c5e90 + (local_b8 & 0xff) * 8);
    local_c0 = local_c0 + 1;
    uVar13 = uVar14;
    uVar20 = uVar21;
    uVar25 = uVar18;
    uVar26 = uVar17;
    uVar27 = uVar5;
    uVar29 = uVar30;
    uVar31 = uVar9;
    uVar32 = uVar10;
    local_b8 = uVar19;
    local_b0 = uVar11;
    local_a0 = uVar16;
    local_98 = uVar7;
    local_80 = uVar4;
  } while (local_c0 != 0xb);
  *(ulonglong *)(unaff_RDI + 0x68) = uVar2 ^ uVar11;
  *(ulonglong *)(unaff_RDI + 0x70) = uVar3 ^ uVar30;
  *(ulonglong *)(unaff_RDI + 0x78) = uVar28 ^ uVar16;
  *(ulonglong *)(unaff_RDI + 0x80) = uVar8 ^ uVar7;
  *(ulonglong *)(unaff_RDI + 0x88) = uVar12 ^ uVar14;
  *(ulonglong *)(unaff_RDI + 0x90) = uVar15 ^ uVar21;
  *(ulonglong *)(unaff_RDI + 0x98) = uVar22 ^ uVar23;
  *(ulonglong *)(unaff_RDI + 0xa0) = uVar24 ^ uVar19;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


