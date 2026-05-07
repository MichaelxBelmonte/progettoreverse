// Function: FUN_0095c67a
// Address: 0095c67a
// Size: 630 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0095c67a(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 (*unaff_RDI) [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  uint local_168 [82];
  longlong local_20;
  
  local_20 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar3 = 0;
  do {
    auVar12 = pshufb(*(undefined1 (*) [16])(unaff_RDI[1] + lVar3 * 4 + 0xe),_DAT_023e0070);
    *(undefined1 (*) [16])(local_168 + lVar3) = auVar12;
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  lVar3 = 0;
  do {
    uVar5 = local_168[0xd] ^ local_168[lVar3 + 8];
    lVar1 = lVar3 + 2;
    local_168[0xd] = local_168[lVar3 + 0xe];
    uVar2 = local_168[0xf] ^ local_168[1] ^ local_168[0xd];
    local_168[0xf] = (uVar2 << 0xd | uVar2 >> 0x13) ^ local_168[0] ^ local_168[lVar1] ^ uVar5;
    local_168[lVar3 + 0x10] = local_168[0xf];
    lVar3 = lVar3 + 1;
    local_168[0] = local_168[1];
    local_168[1] = local_168[lVar1];
  } while (lVar3 != 0x14);
  lVar3 = 0;
  do {
    uVar5 = local_168[0x21] ^ local_168[lVar3 + 0x1c];
    lVar1 = lVar3 + 0x16;
    local_168[0x21] = local_168[lVar3 + 0x22];
    uVar2 = local_168[0x23] ^ local_168[0x15] ^ local_168[0x21] ^ local_168[lVar3 + 0x10];
    local_168[0x23] = (uVar2 << 0xd | uVar2 >> 0x13) ^ local_168[0x14] ^ local_168[lVar1] ^ uVar5;
    local_168[lVar3 + 0x24] = local_168[0x23];
    lVar3 = lVar3 + 1;
    local_168[0x14] = local_168[0x15];
    local_168[0x15] = local_168[lVar1];
  } while (lVar3 != 0x2c);
  auVar12 = *unaff_RDI;
  uVar5 = *(uint *)unaff_RDI[1];
  lVar3 = 0;
  uVar10 = auVar12._4_4_;
  uVar11 = auVar12._12_4_;
  uVar7 = uVar5;
  uVar2 = auVar12._0_4_;
  uVar4 = auVar12._8_4_;
  do {
    uVar9 = uVar4;
    uVar8 = uVar2;
    uVar6 = uVar11;
    uVar2 = local_168[lVar3] + 0x5a827999 +
            (~uVar10 & uVar6 | uVar9 & uVar10) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar7;
    uVar4 = uVar10 << 0x1e | uVar10 >> 2;
    lVar3 = lVar3 + 1;
    uVar10 = uVar8;
    uVar11 = uVar9;
    uVar7 = uVar6;
  } while (lVar3 != 0x14);
  lVar3 = 0;
  do {
    uVar7 = uVar4;
    uVar11 = uVar9;
    uVar10 = uVar2;
    uVar2 = local_168[lVar3 + 0x14] + 0x6ed9eba1 +
            (uVar7 ^ uVar8 ^ uVar11) + (uVar10 << 5 | uVar10 >> 0x1b) + uVar6;
    uVar4 = uVar8 << 0x1e | uVar8 >> 2;
    lVar3 = lVar3 + 1;
    uVar8 = uVar10;
    uVar9 = uVar7;
    uVar6 = uVar11;
  } while (lVar3 != 0x14);
  lVar3 = 0;
  do {
    uVar6 = uVar4;
    uVar9 = uVar7;
    uVar8 = uVar2;
    uVar2 = local_168[lVar3 + 0x28] + 0x8f1bbcdc +
            (uVar9 & uVar6 | (uVar9 | uVar6) & uVar10) + (uVar8 << 5 | uVar8 >> 0x1b) + uVar11;
    uVar4 = uVar10 << 0x1e | uVar10 >> 2;
    lVar3 = lVar3 + 1;
    uVar10 = uVar8;
    uVar11 = uVar9;
    uVar7 = uVar6;
  } while (lVar3 != 0x14);
  lVar3 = 0;
  do {
    uVar11 = uVar4;
    uVar10 = uVar6;
    uVar7 = uVar2;
    uVar2 = local_168[lVar3 + 0x3c] + 0xca62c1d6 +
            (uVar11 ^ uVar8 ^ uVar10) + (uVar7 << 5 | uVar7 >> 0x1b) + uVar9;
    uVar4 = uVar8 << 0x1e | uVar8 >> 2;
    lVar3 = lVar3 + 1;
    uVar8 = uVar7;
    uVar9 = uVar10;
    uVar6 = uVar11;
  } while (lVar3 != 0x14);
  *(uint *)*unaff_RDI = uVar2 + auVar12._0_4_;
  *(uint *)(*unaff_RDI + 4) = uVar7 + auVar12._4_4_;
  *(uint *)(*unaff_RDI + 8) = uVar4 + auVar12._8_4_;
  *(uint *)(*unaff_RDI + 0xc) = uVar11 + auVar12._12_4_;
  *(uint *)unaff_RDI[1] = uVar10 + uVar5;
  *(undefined2 *)(unaff_RDI[1] + 0xc) = 0;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


