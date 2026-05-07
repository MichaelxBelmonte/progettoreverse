// Function: FUN_011ee630
// Address: 011ee630
// Size: 961 bytes
// Class: MUThirdsCircle


void FUN_011ee630(int param_1,ulonglong param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong unaff_RSI;
  ulonglong uVar13;
  longlong unaff_RDI;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar20;
  undefined1 auVar19 [16];
  longlong lVar21;
  undefined1 auVar22 [16];
  longlong lVar23;
  longlong local_1038 [256];
  longlong local_838 [256];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar3 = *(uint *)(unaff_RDI + 0x20);
  uVar10 = (longlong)(int)*(uint *)(unaff_RDI + 0x1c) & param_2;
  iVar4 = *(int *)(unaff_RDI + 0x18);
  iVar17 = iVar4 - ((uint)param_2 & *(uint *)(unaff_RDI + 0x1c));
  iVar6 = iVar17;
  if ((longlong)(uVar10 + (longlong)param_1) <= (longlong)iVar4) {
    iVar6 = param_1;
  }
  uVar15 = (ulonglong)(byte)uVar3;
  iVar18 = 0;
  if ((longlong)iVar4 < (longlong)(uVar10 + (longlong)param_1)) {
    iVar18 = param_1 - iVar17;
  }
  if (uVar15 != 0) {
    plVar5 = *(longlong **)(unaff_RDI + 0x28);
    if (((uVar3 & 0xff) < 4) || ((local_838 < plVar5 + uVar15 && (plVar5 < local_838 + uVar15)))) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ulonglong)(uVar3 & 0xfc);
      uVar14 = (uVar13 - 4 >> 2) + 1;
      uVar16 = (ulonglong)((uint)uVar14 & 3);
      uVar20 = (undefined4)(uVar10 >> 0x20);
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
          plVar2 = (longlong *)((longlong)plVar5 + lVar12 + lVar11 * 8);
          lVar23 = plVar2[1];
          plVar1 = (longlong *)((longlong)plVar5 + lVar12 + lVar11 * 8 + 0x10);
          lVar7 = *plVar1;
          lVar8 = plVar1[1];
          plVar1 = (longlong *)((longlong)local_838 + lVar12 + lVar11 * 8);
          *plVar1 = *plVar2 + uVar10 * 4;
          plVar1[1] = lVar23 + lVar21;
          plVar1 = (longlong *)((longlong)local_838 + lVar12 + lVar11 * 8 + 0x10);
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
      lVar11 = (longlong)iVar6;
      if ((ulonglong)(param_3 & 0xff) - 1 < 3) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        do {
          lVar21 = *(longlong *)(unaff_RSI + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10] = lVar12;
          lVar21 = *(longlong *)(unaff_RSI + 8 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 1] = lVar12;
          lVar21 = *(longlong *)(unaff_RSI + 0x10 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 2] = lVar12;
          lVar21 = *(longlong *)(unaff_RSI + 0x18 + uVar10 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + 3] = lVar12;
          uVar10 = uVar10 + 4;
        } while ((param_3 & 0xfc) != uVar10);
      }
      if ((ulonglong)(param_3 & 3) != 0) {
        uVar15 = 0;
        do {
          lVar21 = *(longlong *)(unaff_RSI + uVar10 * 8 + uVar15 * 8);
          lVar12 = lVar21 + lVar11 * 4;
          if (lVar21 == 0) {
            lVar12 = 0;
          }
          local_1038[uVar10 + uVar15] = lVar12;
          uVar15 = uVar15 + 1;
        } while ((param_3 & 3) != uVar15);
      }
    }
    FUN_00aea110(iVar18,0x44,*(undefined4 *)(unaff_RDI + 0x20),param_3);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


