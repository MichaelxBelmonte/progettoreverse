// Function: FUN_00f87fd0
// Address: 00f87fd0
// Size: 669 bytes
// Class: Unknown

uint64_t FUN_00f87fd0(uint param_1,int64_t param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  byte bVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint unaff_ESI;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  uint8_t auVar15 [16];
  uint8_t in_XMM3 [16];
  uint8_t auVar16 [16];
  
  uVar14 = 1 << ((byte)param_3 & 0x1f);
  lVar3 = _bn_wexpand();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (param_3 < 4) {
      if (0 < (int)unaff_ESI) {
        uVar1 = ~param_1;
        lVar3 = *this_ptr;
        uVar2 = 1;
        if (1 < (int)uVar14) {
          uVar2 = uVar14;
        }
        uVar13 = 0;
        do {
          uVar9 = 0;
          uVar6 = 0;
          if (1 < (int)uVar14) {
            do {
              uVar6 = -(uint64_t)((((uint)uVar9 + 1 ^ param_1) - 1 & uVar1) >> 0x1f) &
                      *(uint64_t *)(param_2 + 8 + uVar9 * 8) |
                      -(uint64_t)((((uint)uVar9 ^ param_1) - 1 & uVar1) >> 0x1f) &
                      *(uint64_t *)(param_2 + uVar9 * 8) | uVar6;
              uVar9 = uVar9 + 2;
            } while ((uVar2 & 0x7ffffffe) != uVar9);
          }
          if ((uVar2 & 1) != 0) {
            uVar6 = uVar6 | -(uint64_t)((((uint)uVar9 ^ param_1) - 1 & uVar1) >> 0x1f) &
                            *(uint64_t *)(param_2 + uVar9 * 8);
          }
          *(uint64_t *)(lVar3 + uVar13 * 8) = uVar6;
          uVar13 = uVar13 + 1;
          param_2 = param_2 + (int64_t)(int)uVar14 * 8;
        } while (uVar13 != unaff_ESI);
      }
    }
    else {
      bVar5 = (byte)(param_3 + -2);
      uVar2 = 1 << (bVar5 & 0x1f);
      uVar1 = (int)param_1 >> (bVar5 & 0x1f);
      if (0 < (int)unaff_ESI) {
        lVar3 = *this_ptr;
        if (param_3 + -2 == 0x1f) {
          ___bzero();
        }
        else {
          param_1 = uVar2 - 1 & param_1;
          uVar10 = ~uVar1;
          auVar15._0_4_ = (uVar10 & (uVar1 ^ 1) - 1) >> 0x1f;
          auVar15._4_4_ = (uVar10 & uVar1 - 1) >> 0x1f;
          auVar15._8_4_ = (uVar10 & (uVar1 ^ 2) - 1) >> 0x1f;
          auVar15._12_4_ = (uVar10 & (uVar1 ^ 3) - 1) >> 0x1f;
          auVar16 = pmovzxdq(in_XMM3,auVar15);
          uVar13 = 1;
          if (1 < (int)uVar2) {
            uVar13 = (uint64_t)uVar2;
          }
          lVar11 = param_2 + (int64_t)(3 << (bVar5 & 0x1f)) * 8;
          lVar12 = (uint64_t)uVar14 * 8;
          lVar7 = param_2 + (int64_t)(int)(uVar2 * 2) * 8;
          uVar6 = 0;
          do {
            uVar9 = 0;
            uVar8 = 0;
            do {
              uVar8 = uVar8 | -(uint64_t)(((param_1 ^ (uint)uVar9) - 1 & ~param_1) >> 0x1f) &
                              (*(uint64_t *)(lVar11 + uVar9 * 8) & -(uint64_t)auVar15._12_4_ |
                               *(uint64_t *)(param_2 + uVar9 * 8) & -auVar16._8_8_ |
                              *(uint64_t *)(lVar7 + uVar9 * 8) & -(uint64_t)auVar15._8_4_ |
                              *(uint64_t *)(param_2 + (int64_t)(int)((uint)uVar9 + uVar2) * 8) &
                              -auVar16._0_8_);
              uVar9 = uVar9 + 1;
            } while (uVar13 != uVar9);
            *(uint64_t *)(lVar3 + uVar6 * 8) = uVar8;
            uVar6 = uVar6 + 1;
            param_2 = param_2 + lVar12;
            lVar11 = lVar11 + lVar12;
            lVar7 = lVar7 + lVar12;
          } while (uVar6 != unaff_ESI);
        }
      }
    }
    *(uint *)(this_ptr + 1) = unaff_ESI;
    uVar4 = 1;
  }
  return uVar4;
}

