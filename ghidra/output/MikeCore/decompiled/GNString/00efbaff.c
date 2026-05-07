// Function: FUN_00efbaff
// Address: 00efbaff
// Size: 763 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00efbaff(int param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  iVar16 = (int)*(longlong *)(unaff_RDI + 8);
  if (0xe0000000 < (uint)(param_3 - iVar16)) {
    uVar3 = *(uint *)(param_2 + 0x1c);
    uVar13 = 1 << (*(byte *)(param_2 + 4) & 0x1f);
    uVar12 = 1 << ((char)*(undefined4 *)(param_2 + 8) - (5 < uVar3) & 0x1fU);
    uVar14 = param_1 - iVar16;
    uVar8 = uVar12 - 1 & uVar14;
    uVar15 = 2;
    if (2 < uVar12) {
      uVar15 = uVar12;
    }
    iVar16 = 0;
    if (1 < uVar8) {
      uVar15 = 0;
    }
    if (uVar12 < uVar13) {
      uVar12 = uVar13;
    }
    uVar14 = uVar14 - (uVar12 + uVar8 + uVar15);
    *(ulonglong *)(unaff_RDI + 8) = *(longlong *)(unaff_RDI + 8) + (ulonglong)uVar14;
    *(longlong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 0x10) + (ulonglong)uVar14;
    uVar15 = uVar14 + 2;
    iVar11 = *(uint *)(unaff_RDI + 0x1c) - uVar14;
    if (*(uint *)(unaff_RDI + 0x1c) < uVar15) {
      iVar11 = 2;
    }
    *(int *)(unaff_RDI + 0x1c) = iVar11;
    iVar11 = *(uint *)(unaff_RDI + 0x18) - uVar14;
    if (*(uint *)(unaff_RDI + 0x18) < uVar15) {
      iVar11 = 2;
    }
    *(int *)(unaff_RDI + 0x18) = iVar11;
    *(int *)(unaff_RDI + 0x20) = *(int *)(unaff_RDI + 0x20) + 1;
    uVar4 = *(ulonglong *)(unaff_RSI + 0x10);
    *(ulonglong *)(unaff_RSI + 0x20) = uVar4;
    iVar9 = 1 << (*(byte *)(param_2 + 0xc) & 0x1f);
    iVar11 = iVar9 + 0xf;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    if (0xf < iVar9) {
      lVar5 = *(longlong *)(unaff_RDI + 0x70);
      iVar9 = 0;
      do {
        lVar1 = lVar5 + (longlong)iVar16 * 4;
        lVar10 = 0;
        do {
          puVar2 = (uint *)(lVar1 + lVar10 * 4);
          uVar12 = *puVar2;
          uVar8 = puVar2[1];
          uVar13 = puVar2[2];
          uVar6 = puVar2[3];
          puVar2 = (uint *)(lVar1 + lVar10 * 4);
          *puVar2 = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12) &
                    uVar12 - uVar14;
          puVar2[1] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                      uVar8 - uVar14;
          puVar2[2] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13)
                      & uVar13 - uVar14;
          puVar2[3] = -(uint)(((uVar6 < uVar15) * uVar15 | (uVar6 >= uVar15) * uVar6) == uVar6) &
                      uVar6 - uVar14;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x10);
        iVar16 = iVar16 + 0x10;
        iVar9 = iVar9 + 1;
      } while (iVar9 != iVar11 >> 4);
    }
    auVar7 = _DAT_0240e2d0;
    if ((*(int *)(unaff_RDI + 0x8c) != 0) ||
       ((uVar3 != 1 && ((2 < uVar3 - 3 || (*(int *)(param_2 + 0x90) != 1)))))) {
      iVar11 = 1 << (*(byte *)(param_2 + 8) & 0x1f);
      iVar16 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      lVar5 = *(longlong *)(unaff_RDI + 0x80);
      if (uVar3 == 6) {
        if (0xf < iVar11) {
          iVar11 = 0;
          iVar9 = 0;
          do {
            lVar1 = lVar5 + (longlong)iVar11 * 4;
            lVar10 = 0;
            do {
              puVar2 = (uint *)(lVar1 + lVar10 * 4);
              uVar3 = *puVar2;
              uVar12 = puVar2[1];
              uVar8 = puVar2[2];
              uVar13 = puVar2[3];
              auVar18._0_4_ =
                   -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3);
              auVar18._4_4_ =
                   -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12);
              auVar18._8_4_ =
                   -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8);
              auVar18._12_4_ =
                   -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13);
              auVar19._0_4_ = -(uint)(uVar3 == auVar7._0_4_);
              auVar19._4_4_ = -(uint)(uVar12 == auVar7._4_4_);
              auVar19._8_4_ = -(uint)(uVar8 == auVar7._8_4_);
              auVar19._12_4_ = -(uint)(uVar13 == auVar7._12_4_);
              auVar17._0_4_ = uVar3 - uVar14;
              auVar17._4_4_ = uVar12 - uVar14;
              auVar17._8_4_ = uVar8 - uVar14;
              auVar17._12_4_ = uVar13 - uVar14;
              auVar19 = blendvps(auVar18 & auVar17,auVar7,auVar19);
              *(undefined1 (*) [16])(lVar1 + lVar10 * 4) = auVar19;
              lVar10 = lVar10 + 4;
            } while (lVar10 != 0x10);
            iVar11 = iVar11 + 0x10;
            iVar9 = iVar9 + 1;
          } while (iVar9 != iVar16 >> 4);
        }
      }
      else if (0xf < iVar11) {
        iVar11 = 0;
        iVar9 = 0;
        do {
          lVar1 = lVar5 + (longlong)iVar11 * 4;
          lVar10 = 0;
          do {
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            uVar3 = *puVar2;
            uVar12 = puVar2[1];
            uVar8 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            *puVar2 = -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3) &
                      uVar3 - uVar14;
            puVar2[1] = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12
                               ) & uVar12 - uVar14;
            puVar2[2] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                        uVar8 - uVar14;
            puVar2[3] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13
                               ) & uVar13 - uVar14;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x10);
          iVar11 = iVar11 + 0x10;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar16 >> 4);
      }
    }
    if (*(int *)(unaff_RDI + 0x30) != 0) {
      iVar11 = 1 << ((byte)*(int *)(unaff_RDI + 0x30) & 0x1f);
      iVar16 = iVar11 + 0xf;
      if (-1 < iVar11) {
        iVar16 = iVar11;
      }
      if (0xf < iVar11) {
        lVar5 = *(longlong *)(unaff_RDI + 0x78);
        iVar11 = 0;
        iVar9 = 0;
        do {
          lVar1 = lVar5 + (longlong)iVar11 * 4;
          lVar10 = 0;
          do {
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            uVar3 = *puVar2;
            uVar12 = puVar2[1];
            uVar8 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (uint *)(lVar1 + lVar10 * 4);
            *puVar2 = -(uint)(((uVar3 < uVar15) * uVar15 | (uVar3 >= uVar15) * uVar3) == uVar3) &
                      uVar3 - uVar14;
            puVar2[1] = -(uint)(((uVar12 < uVar15) * uVar15 | (uVar12 >= uVar15) * uVar12) == uVar12
                               ) & uVar12 - uVar14;
            puVar2[2] = -(uint)(((uVar8 < uVar15) * uVar15 | (uVar8 >= uVar15) * uVar8) == uVar8) &
                        uVar8 - uVar14;
            puVar2[3] = -(uint)(((uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13) == uVar13
                               ) & uVar13 - uVar14;
            lVar10 = lVar10 + 4;
          } while (lVar10 != 0x10);
          iVar11 = iVar11 + 0x10;
          iVar9 = iVar9 + 1;
        } while (iVar9 != iVar16 >> 4);
      }
    }
    if (uVar4 < *(ulonglong *)(unaff_RSI + 0x18)) {
      *(ulonglong *)(unaff_RSI + 0x20) = *(ulonglong *)(unaff_RSI + 0x18);
    }
    iVar16 = *(uint *)(unaff_RDI + 0x2c) - uVar14;
    if (*(uint *)(unaff_RDI + 0x2c) < uVar14) {
      iVar16 = 0;
    }
    *(int *)(unaff_RDI + 0x2c) = iVar16;
    *(undefined4 *)(unaff_RDI + 0x28) = 0;
    *(undefined8 *)(unaff_RDI + 0xf8) = 0;
  }
  return;
}


