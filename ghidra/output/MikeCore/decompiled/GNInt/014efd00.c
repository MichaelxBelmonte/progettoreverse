// Function: FUN_014efd00
// Address: 014efd00
// Size: 703 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x014efd4d) */
/* WARNING: Removing unreachable block (ram,0x014efd56) */
/* WARNING: Removing unreachable block (ram,0x014effbd) */

longlong * FUN_014efd00(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  ulonglong uVar13;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  undefined4 extraout_XMM0_Dc_08;
  undefined4 extraout_XMM0_Dc_09;
  undefined4 extraout_XMM0_Dc_10;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined4 extraout_XMM0_Dd_09;
  undefined4 extraout_XMM0_Dd_10;
  undefined1 auVar20 [16];
  longlong local_68;
  char local_60;
  undefined1 local_48 [16];
  
  uVar14 = *unaff_RSI;
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 + 1;
    *unaff_RSI = uVar14;
  }
  FUN_00e84080();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  if ((int)uVar14 < 2) goto LAB_014eff92;
  lVar2 = *(longlong *)(local_68 + 0x10);
  uVar16 = uVar14 >> 1;
  if (uVar14 < 8) {
    uVar13 = 0;
  }
  else {
    uVar13 = (ulonglong)(uVar16 & 0xfffffffc);
    uVar17 = (uVar13 - 4 >> 2) + 1;
    if (uVar13 - 4 == 0) {
      lVar15 = 0;
LAB_014efeda:
      lVar18 = lVar2 + lVar15 * 4;
      uVar19 = *(undefined4 *)(lVar18 + 4);
      uVar12 = *(undefined4 *)(lVar18 + 0xc);
      local_48._0_8_ = _powf();
      local_48._8_4_ = extraout_XMM0_Dc_07;
      local_48._12_4_ = extraout_XMM0_Dd_07;
      uVar3 = _powf(uVar19);
      auVar9._8_4_ = extraout_XMM0_Dc_08;
      auVar9._0_8_ = uVar3;
      auVar9._12_4_ = extraout_XMM0_Dd_08;
      auVar20 = insertps(local_48,auVar9,0x10);
      uVar3 = _powf(*(undefined4 *)(lVar2 + 8 + lVar15 * 4));
      auVar10._8_4_ = extraout_XMM0_Dc_09;
      auVar10._0_8_ = uVar3;
      auVar10._12_4_ = extraout_XMM0_Dd_09;
      auVar20 = insertps(auVar20,auVar10,0x20);
      uVar3 = _powf(uVar12);
      auVar11._8_4_ = extraout_XMM0_Dc_10;
      auVar11._0_8_ = uVar3;
      auVar11._12_4_ = extraout_XMM0_Dd_10;
      auVar20 = insertps(auVar20,auVar11,0x30);
      *(undefined1 (*) [16])(lVar2 + lVar15 * 4) = auVar20;
    }
    else {
      lVar18 = -(uVar17 & 0xfffffffffffffffe);
      lVar15 = 0;
      do {
        lVar1 = lVar2 + lVar15 * 4;
        uVar19 = *(undefined4 *)(lVar1 + 4);
        uVar12 = *(undefined4 *)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc;
        local_48._12_4_ = extraout_XMM0_Dd;
        uVar3 = _powf(uVar19);
        auVar20._8_4_ = extraout_XMM0_Dc_00;
        auVar20._0_8_ = uVar3;
        auVar20._12_4_ = extraout_XMM0_Dd_00;
        auVar20 = insertps(local_48,auVar20,0x10);
        uVar3 = _powf(*(undefined4 *)(lVar2 + 8 + lVar15 * 4));
        auVar4._8_4_ = extraout_XMM0_Dc_01;
        auVar4._0_8_ = uVar3;
        auVar4._12_4_ = extraout_XMM0_Dd_01;
        auVar20 = insertps(auVar20,auVar4,0x20);
        uVar3 = _powf(uVar12);
        auVar5._8_4_ = extraout_XMM0_Dc_02;
        auVar5._0_8_ = uVar3;
        auVar5._12_4_ = extraout_XMM0_Dd_02;
        auVar20 = insertps(auVar20,auVar5,0x30);
        *(undefined1 (*) [16])(lVar2 + lVar15 * 4) = auVar20;
        lVar1 = lVar2 + 0x10 + lVar15 * 4;
        uVar19 = *(undefined4 *)(lVar1 + 4);
        uVar12 = *(undefined4 *)(lVar1 + 0xc);
        local_48._0_8_ = _powf();
        local_48._8_4_ = extraout_XMM0_Dc_03;
        local_48._12_4_ = extraout_XMM0_Dd_03;
        uVar3 = _powf(uVar19);
        auVar6._8_4_ = extraout_XMM0_Dc_04;
        auVar6._0_8_ = uVar3;
        auVar6._12_4_ = extraout_XMM0_Dd_04;
        auVar20 = insertps(local_48,auVar6,0x10);
        uVar3 = _powf(*(undefined4 *)(lVar2 + 0x18 + lVar15 * 4));
        auVar7._8_4_ = extraout_XMM0_Dc_05;
        auVar7._0_8_ = uVar3;
        auVar7._12_4_ = extraout_XMM0_Dd_05;
        auVar20 = insertps(auVar20,auVar7,0x20);
        uVar3 = _powf(uVar12);
        auVar8._8_4_ = extraout_XMM0_Dc_06;
        auVar8._0_8_ = uVar3;
        auVar8._12_4_ = extraout_XMM0_Dd_06;
        auVar20 = insertps(auVar20,auVar8,0x30);
        *(undefined1 (*) [16])(lVar2 + 0x10 + lVar15 * 4) = auVar20;
        lVar15 = lVar15 + 8;
        lVar18 = lVar18 + 2;
      } while (lVar18 != 0);
      if ((uVar17 & 1) != 0) goto LAB_014efeda;
    }
    if (uVar13 == uVar16) goto LAB_014eff92;
  }
  do {
    uVar19 = _powf(*(undefined4 *)(lVar2 + uVar13 * 4));
    *(undefined4 *)(lVar2 + uVar13 * 4) = uVar19;
    uVar13 = uVar13 + 1;
  } while (uVar16 != uVar13);
LAB_014eff92:
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


