// Function: FUN_00e7c8b0
// Address: 00e7c8b0
// Size: 896 bytes
// Class: MULSSGenerator

uint64_t FUN_00e7c8b0(uint64_t param_1,char param_2)

{
  uint64_t uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint64_t uVar10;
  uint uVar11;
  uint64_t arg1;
  uint uVar12;
  uint64_t this_ptr;
  uint64_t uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint uVar16;
  uint64_t uVar17;
  int iVar18;
  
  uVar13 = this_ptr >> 0x20;
  if (uVar13 != 0) {
    uVar15 = arg1 >> 0x20;
    uVar14 = (uint)(arg1 >> 0x20);
    if (uVar14 != 0) {
      iVar8 = (int)arg1;
      uVar17 = 0;
      if ((iVar8 == 0) || (iVar4 = (int)this_ptr, uVar17 = uVar13, iVar4 == 0)) {
        return uVar17 << 0x20;
      }
      uVar17 = (uint64_t)(uint)-iVar4;
      if (0 < iVar4) {
        uVar17 = this_ptr & 0xffffffff;
      }
      uVar16 = (uint)uVar17;
      uVar5 = (uint64_t)(uint)-iVar8;
      if (0 < iVar8) {
        uVar5 = arg1 & 0xffffffff;
      }
      uVar12 = (uint)(this_ptr >> 0x20);
      if (uVar16 != (uint)uVar5) {
        bVar6 = 0;
        if (((uVar16 | (uint)uVar5) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar17;
          do {
            bVar6 = bVar6 + 1;
            uVar16 = (uint)uVar5;
            uVar11 = (uint)uVar10;
            uVar5 = (uint64_t)(uVar16 >> 1);
            uVar17 = uVar10 >> 1;
            uVar10 = uVar10 >> 1;
          } while (((uVar11 | uVar16) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          uVar17 = uVar10 >> 1;
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          uVar5 = uVar17 >> 1;
        } while ((uVar17 & 1) == 0);
        iVar7 = (int)uVar10;
        iVar2 = 1;
        if (((iVar7 != 1) && ((int)uVar17 != 1)) && (iVar2 = iVar7, iVar7 != (int)uVar17)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar16 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (uint64_t)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar3 = (int)uVar16 >> 1;
                uVar11 = uVar16 & 2;
                uVar16 = uVar3;
              } while (uVar11 == 0);
              uVar10 = (uint64_t)uVar3;
            }
            iVar2 = (int)uVar10;
          } while (iVar2 != (int)uVar17);
        }
        uVar16 = iVar2 << (bVar6 & 0x1f);
      }
      uVar11 = uVar12;
      if (uVar12 != uVar14) {
        bVar6 = 0;
        uVar17 = uVar13;
        uVar5 = uVar15;
        if (((uVar12 | uVar14) & 1) == 0) {
          bVar6 = 0;
          uVar10 = uVar13;
          do {
            uVar3 = (uint)uVar10;
            uVar11 = (int)uVar3 >> 1;
            bVar6 = bVar6 + 1;
            uVar9 = (uint)uVar5;
            uVar5 = (uint64_t)(uint)((int)uVar9 >> 1);
            uVar10 = (uint64_t)uVar11;
            uVar17 = (uint64_t)uVar11;
          } while (((uVar3 | uVar9) & 2) == 0);
        }
        do {
          uVar10 = uVar17;
          iVar2 = (int)uVar10;
          uVar17 = (uint64_t)(uint)(iVar2 >> 1);
        } while ((uVar10 & 1) == 0);
        do {
          uVar17 = uVar5;
          iVar7 = (int)uVar17;
          uVar5 = (uint64_t)(uint)(iVar7 >> 1);
        } while ((uVar17 & 1) == 0);
        iVar18 = 1;
        if (((iVar2 != 1) && (iVar7 != 1)) && (iVar18 = iVar2, iVar2 != iVar7)) {
          do {
            iVar7 = (int)uVar10;
            iVar2 = (int)uVar17;
            uVar11 = iVar7 - iVar2;
            if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
              uVar5 = (uint64_t)(uint)(iVar2 - iVar7);
              do {
                uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                uVar1 = uVar5 & 2;
                uVar5 = uVar17;
              } while (uVar1 == 0);
            }
            else {
              do {
                uVar9 = (int)uVar11 >> 1;
                uVar3 = uVar11 & 2;
                uVar11 = uVar9;
              } while (uVar3 == 0);
              uVar10 = (uint64_t)uVar9;
            }
            iVar18 = (int)uVar10;
          } while (iVar18 != (int)uVar17);
        }
        uVar11 = iVar18 << (bVar6 & 0x1f);
      }
      if (1 < (int)uVar16) {
        this_ptr = (int64_t)((uint64_t)(uint)(iVar4 >> 0x1f) << 0x20 | this_ptr & 0xffffffff) /
                    (int64_t)(int)uVar16 & 0xffffffff;
      }
      if (1 < (int)uVar11) {
        uVar13 = (int64_t)((uint64_t)(uint)((int)uVar12 >> 0x1f) << 0x20 | uVar13) /
                 (int64_t)(int)uVar11 & 0xffffffff;
      }
      if (1 < (int)uVar16) {
        arg1 = (int64_t)((uint64_t)(uint)(iVar8 >> 0x1f) << 0x20 | arg1 & 0xffffffff) /
                    (int64_t)(int)uVar16 & 0xffffffff;
      }
      uVar12 = uVar14;
      if (1 < (int)uVar11) {
        uVar12 = (uint)((int64_t)((uint64_t)(uint)((int)uVar14 >> 0x1f) << 0x20 | uVar15) /
                       (int64_t)(int)uVar11);
      }
      uVar11 = (int)arg1 * (int)uVar13;
      iVar8 = (int)(uVar12 * (int)this_ptr) % (int)uVar11;
      uVar12 = -uVar11;
      if (0 < (int)uVar11) {
        uVar12 = uVar11;
      }
      uVar15 = 0;
      uVar12 = iVar8 >> 0x1f & uVar12;
      if (param_2 == '\0') {
        uVar12 = 0;
      }
      uVar14 = uVar14 * (int)uVar13;
      if (uVar14 != 0) {
        uVar12 = uVar12 + iVar8;
        if (uVar12 == 0) {
          uVar13 = 1;
        }
        else {
          uVar11 = -uVar14;
          if (0 < (int)uVar14) {
            uVar11 = uVar14;
          }
          uVar13 = (uint64_t)uVar11;
          uVar11 = -uVar12;
          if (-1 < (int)uVar14) {
            uVar11 = uVar12;
          }
          uVar17 = (uint64_t)uVar11;
          if ((uVar11 & 1) == 0) {
            do {
              uVar11 = (uint)uVar17;
              if ((uVar13 & 1) != 0) goto LAB_00e7cb8b;
              uVar15 = (uint64_t)(uint)((int)uVar11 >> 1);
              uVar13 = uVar13 >> 1;
              uVar5 = uVar17 & 2;
              uVar17 = uVar15;
            } while (uVar5 == 0);
          }
          else {
LAB_00e7cb8b:
            uVar15 = (uint64_t)uVar11;
          }
          iVar8 = (int)uVar15;
          uVar17 = (uint64_t)(uint)-iVar8;
          if (0 < iVar8) {
            uVar17 = uVar15;
          }
          do {
            uVar10 = uVar17;
            uVar17 = uVar10 >> 1;
            uVar5 = uVar13;
          } while ((uVar10 & 1) == 0);
          do {
            uVar17 = uVar5;
            uVar5 = (uint64_t)(uint)((int)uVar17 >> 1);
          } while ((uVar17 & 1) == 0);
          if (((int)uVar10 != 1) && ((int)uVar17 != 1)) {
            while( true ) {
              iVar2 = (int)uVar10;
              iVar4 = (int)uVar17;
              if (iVar2 == iVar4) break;
              uVar14 = iVar2 - iVar4;
              if (uVar14 == 0 || iVar2 < iVar4) {
                uVar5 = (uint64_t)(uint)(iVar4 - iVar2);
                do {
                  uVar17 = (uint64_t)(uint)((int)uVar5 >> 1);
                  uVar1 = uVar5 & 2;
                  uVar5 = uVar17;
                } while (uVar1 == 0);
              }
              else {
                do {
                  uVar11 = (int)uVar14 >> 1;
                  uVar12 = uVar14 & 2;
                  uVar14 = uVar11;
                } while (uVar12 == 0);
                uVar10 = (uint64_t)uVar11;
              }
            }
            if (1 < iVar2) {
              uVar15 = (int64_t)iVar8 / (int64_t)iVar2 & 0xffffffff;
              uVar13 = (int64_t)(int)uVar13 / (int64_t)iVar2 & 0xffffffff;
            }
          }
        }
        uVar15 = uVar15 | uVar13 << 0x20;
      }
      return uVar15 & 0xffffffff00000000 | (uint64_t)(uVar16 * (int)uVar15);
    }
  }
  return 0;
}

