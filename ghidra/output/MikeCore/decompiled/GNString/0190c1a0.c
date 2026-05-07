// Function: FUN_0190c1a0
// Address: 0190c1a0
// Size: 646 bytes
// Class: GNString


void FUN_0190c1a0(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint auStack_178 [9];
  int iStack_154;
  undefined *puStack_150;
  uint local_138 [64];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar2 = *unaff_RSI;
  local_138[0] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[1];
  local_138[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[2];
  local_138[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[3];
  local_138[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[4];
  local_138[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[5];
  local_138[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[6];
  local_138[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[7];
  local_138[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[8];
  local_138[8] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[9];
  local_138[9] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[10];
  local_138[10] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[0xb];
  local_138[0xb] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[0xc];
  local_138[0xc] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[0xd];
  local_138[0xd] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[0xe];
  local_138[0xe] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  uVar2 = unaff_RSI[0xf];
  local_138[0xf] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  lVar6 = 0x10;
  do {
    uVar2 = local_138[lVar6 + -2];
    uVar14 = auStack_178[lVar6 + 1];
    local_138[lVar6] =
         (uVar2 >> 10 ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ (uVar2 << 0xf | uVar2 >> 0x11)) +
         (&iStack_154)[lVar6] + auStack_178[lVar6] +
         (uVar14 >> 3 ^ (uVar14 << 0xe | uVar14 >> 0x12) ^ (uVar14 << 0x19 | uVar14 >> 7));
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x40);
  auVar1 = *(undefined1 (*) [16])(unaff_RDI + 0x5c);
  lVar6 = 0;
  uVar2 = *(uint *)(unaff_RDI + 0x50);
  uVar14 = *(uint *)(unaff_RDI + 0x54);
  uVar5 = *(uint *)(unaff_RDI + 0x4c);
  uVar15 = *(uint *)(unaff_RDI + 0x58);
  uVar13 = auVar1._12_4_;
  uVar3 = auVar1._4_4_;
  uVar11 = auVar1._8_4_;
  uVar10 = auVar1._0_4_;
  do {
    uVar9 = uVar10;
    uVar7 = uVar11;
    uVar11 = uVar3;
    uVar4 = uVar5;
    uVar12 = uVar14;
    uVar14 = uVar2;
    iVar8 = (~uVar9 & uVar7) +
            (uVar11 & uVar9) +
            ((uVar9 << 7 | uVar9 >> 0x19) ^
            (uVar9 << 0x15 | uVar9 >> 0xb) ^ (uVar9 << 0x1a | uVar9 >> 6)) + uVar13 +
            *(int *)((longlong)&DAT_027e0050 + lVar6) + *(int *)((longlong)local_138 + lVar6);
    uVar10 = uVar15 + iVar8;
    uVar5 = (uVar14 & uVar12 ^ (uVar14 ^ uVar12) & uVar4) +
            ((uVar4 << 10 | uVar4 >> 0x16) ^
            (uVar4 << 0x13 | uVar4 >> 0xd) ^ (uVar4 << 0x1e | uVar4 >> 2)) + iVar8;
    lVar6 = lVar6 + 4;
    uVar2 = uVar4;
    uVar15 = uVar12;
    uVar13 = uVar7;
    uVar3 = uVar9;
  } while (lVar6 != 0x100);
  *(uint *)(unaff_RDI + 0x4c) = uVar5 + *(uint *)(unaff_RDI + 0x4c);
  *(uint *)(unaff_RDI + 0x50) = uVar4 + *(uint *)(unaff_RDI + 0x50);
  *(uint *)(unaff_RDI + 0x54) = uVar14 + *(uint *)(unaff_RDI + 0x54);
  *(uint *)(unaff_RDI + 0x58) = uVar12 + *(uint *)(unaff_RDI + 0x58);
  *(uint *)(unaff_RDI + 0x5c) = uVar10 + auVar1._0_4_;
  *(uint *)(unaff_RDI + 0x60) = uVar9 + auVar1._4_4_;
  *(uint *)(unaff_RDI + 100) = uVar11 + auVar1._8_4_;
  *(uint *)(unaff_RDI + 0x68) = uVar7 + auVar1._12_4_;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_150 = &UNK_0190c426;
  ___stack_chk_fail();
}


