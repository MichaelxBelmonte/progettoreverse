// Function: FUN_011ee630
// Address: 011ee630
// Size: 961 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011ee630(int param_1,uint64_t param_2,uint param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint uVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t arg1;
  uint64_t uVar13;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int iVar17;
  int iVar18;
  uint32_t uVar20;
  uint8_t auVar19 [16];
  int64_t lVar21;
  uint8_t auVar22 [16];
  int64_t lVar23;
  int64_t local_1038 [256];
  int64_t local_838 [256];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar3 = *(uint *)(this_ptr + 0x20);
  uVar10 = (int64_t)(int)*(uint *)(this_ptr + 0x1c) & param_2;
  iVar4 = *(int *)(this_ptr + 0x18);
  iVar17 = iVar4 - ((uint)param_2 & *(uint *)(this_ptr + 0x1c));
  iVar6 = iVar17;
  if ((int64_t)(uVar10 + (int64_t)param_1) <= (int64_t)iVar4) {
    iVar6 = param_1;
  }
  uVar15 = (uint64_t)(byte)uVar3;
  iVar18 = 0;
  if ((int64_t)iVar4 < (int64_t)(uVar10 + (int64_t)param_1)) {
    iVar18 = param_1 - iVar17;
  }
  if (uVar15 != 0) {
    plVar5 = *(int64_t **)(this_ptr + 0x28);
    if (((uVar3 & 0xff) < 4) || ((local_838 < plVar5 + uVar15 && (plVar5 < local_838 + uVar15)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint64_t)(uVar3 & 0xfc);
      uVar14 = (uVar13 - 4 >> 2) + 1;
      uVar16 = (uint64_t)((uint)uVar14 & 3);
      uVar20 = (uint32_t)(uVar10 >> 0x20);
      if (uVar13 - 4 < 0xc) {
        lVar11 = 0;
      }
      else {
        lVar12 = -(uVar14 & 0xfffffffffffffffc);
        lVar11 = 0;
        auVar22._8_4_ = (int)uVar10;
        auVar22._0_8_ = uVar10;
        auVar22._12_4_ = uVar20;
        lVar21 = uVar10 * 4;
        lVar23 = auVar22._8_8_ * 4;
        do {
          lVar7 = (plVar5 + lVar11)[1];
          lVar8 = plVar5[lVar11 + 2];
          lVar9 = (plVar5 + lVar11 + 2)[1];
          local_838[lVar11] = plVar5[lVar11] + lVar21;
          local_838[lVar11 + 1] = lVar7 + lVar23;
          local_838[lVar11 + 2] = lVar8 + lVar21;
          local_838[lVar11 + 3] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 4)[1];
          lVar8 = plVar5[lVar11 + 6];
          lVar9 = (plVar5 + lVar11 + 6)[1];
          local_838[lVar11 + 4] = plVar5[lVar11 + 4] + lVar21;
          local_838[lVar11 + 5] = lVar7 + lVar23;
          local_838[lVar11 + 6] = lVar8 + lVar21;
          local_838[lVar11 + 7] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 8)[1];
          lVar8 = plVar5[lVar11 + 10];
          lVar9 = (plVar5 + lVar11 + 10)[1];
          local_838[lVar11 + 8] = plVar5[lVar11 + 8] + lVar21;
          local_838[lVar11 + 9] = lVar7 + lVar23;
          local_838[lVar11 + 10] = lVar8 + lVar21;
          local_838[lVar11 + 0xb] = lVar9 + lVar23;
          lVar7 = (plVar5 + lVar11 + 0xc)[1];
          lVar8 = plVar5[lVar11 + 0xe];
          lVar9 = (plVar5 + lVar11 + 0xe)[1];
          local_838[lVar11 + 0xc] = plVar5[lVar11 + 0xc] + lVar21;
          local_838[lVar11 + 0xd] = lVar7 + lVar23;
          local_838[lVar11 + 0xe] = lVar8 + lVar21;
          local_838[lVar11 + 0xf] = lVar9 + lVar23;
          lVar11 = lVar11 + 0x10;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0);
      }
      if (uVar16 != 0) {
        lVar12 = 0;
        auVar19._8_4_ = (int)uVar10;
        auVar19._0_8_ = uVar10;
        auVar19._12_4_ = uVar20;
        lVar21 = auVar19._8_8_ * 4;
        do {
          plVar2 = (int64_t *)((int64_t)plVar5 + lVar12 + lVar11 * 8);
          lVar23 = plVar2[1];
          plVar1 = (int64_t *)((int64_t)plVar5 + lVar12 + lVar11 * 8 + 0x10);
          lVar7 = *plVar1;
          lVar8 = plVar1[1];
          plVar1 = (int64_t *)((int64_t)local_838 + lVar12 + lVar11 * 8);
          *plVar1 = *plVar2 + uVar10 * 4;
          plVar1[1] = lVar23 + lVar21;
          plVar1 = (int64_t *)((int64_t)local_838 + lVar12 + lVar11 * 8 + 0x10);
          *plVar1 = lVar7 + uVar10 * 4;
          plVar1[1] = lVar8 + lVar21;
          lVar12 = lVar12 + 0x20;
        } while (uVar16 << 5 != lVar12);
      }
      if (uVar13 == uVar15) goto LAB_011ee8b0;
    }
    uVar16 = ~uVar13;
    uVar14 = uVar15 & 3;
    if ((uVar3 & 3) != 0) {
      do {
        local_838[uVar13] = plVar5[uVar13] + uVar10 * 4;
        uVar13 = uVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (2 < uVar16 + uVar15) {
      lVar11 = uVar10 * 4;
      do {
        local_838[uVar13] = plVar5[uVar13] + lVar11;
        local_838[uVar13 + 1] = plVar5[uVar13 + 1] + lVar11;
        local_838[uVar13 + 2] = plVar5[uVar13 + 2] + lVar11;
        local_838[uVar13 + 3] = plVar5[uVar13 + 3] + lVar11;
        uVar13 = uVar13 + 4;
      } while (uVar15 != uVar13);
    }
  }
LAB_011ee8b0:
  FUN_00aea110(iVar6,0x44,uVar3,param_3);
  if (iVar18 != 0) {
    if ((param_3 & 0xff) != 0) {
      lVar11 = (int64_t)iVar6;
      if ((uint64_t)(param_3 & 0xff) - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar21 = *(int64_t *)(arg1 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 8 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 1] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 0x10 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 2] = lVar12;
          lVar21 = *(int64_t *)(arg1 + 0x18 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 3] = lVar12;
          uVar10 = uVar10 + 4;
        } while ((param_3 & 0xfc) != uVar10);
      }
      if ((uint64_t)(param_3 & 3) != 0) {
        uVar15 = 0;
        do {
          lVar21 = *(int64_t *)(arg1 + uVar10 * 8 + uVar15 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + uVar15] = lVar12;
          uVar15 = uVar15 + 1;
        } while ((param_3 & 3) != uVar15);
      }
    }
    FUN_00aea110(iVar18,0x44,*(void*)(this_ptr + 0x20),param_3);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

