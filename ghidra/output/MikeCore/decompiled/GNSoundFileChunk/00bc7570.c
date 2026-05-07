// Function: FUN_00bc7570
// Address: 00bc7570
// Size: 806 bytes
// Class: GNSoundFileChunk


/* WARNING: Removing unreachable block (ram,0x00bc789c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00bc7570(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *unaff_RSI;
  longlong lVar11;
  longlong unaff_RDI;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint local_838 [2];
  longlong local_830 [255];
  longlong local_38;
  int iVar22;
  int iVar23;
  int iVar24;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_838[0] = FUN_00e31390();
  do {
    while( true ) {
      if ((local_838[0] & 10) != 8) {
        if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
          return 0;
        }
        goto LAB_00bc7883;
      }
      if ((local_838[0] & 4) == 0) break;
      FUN_00da6800();
      local_838[0] = FUN_00e31390();
    }
    cVar7 = FUN_00e314a0(2,local_838[0] & 0xfffffff3 | 4);
  } while (cVar7 == '\0');
  lVar2 = *(longlong *)(*unaff_RSI + 0x18);
  uVar8 = FUN_00b7a700();
  iVar1 = *(int *)(unaff_RDI + 0x20);
  if ((int)uVar8 < 1) goto LAB_00bc77fa;
  if (uVar8 < 4) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulonglong)(uVar8 & 0xfffffffc);
    uVar13 = (uVar9 - 4 >> 2) + 1;
    if (uVar9 - 4 == 0) {
      lVar11 = 0;
      auVar14 = _DAT_02392fe0;
LAB_00bc7785:
      auVar5._4_4_ = iVar1;
      auVar5._0_4_ = iVar1;
      auVar5._8_8_ = 0;
      auVar19 = pmulld(auVar5,auVar14);
      auVar16._0_4_ = auVar14._0_4_ + _DAT_023d92d0;
      auVar16._4_4_ = auVar14._4_4_ + _UNK_023d92d4;
      auVar16._8_4_ = auVar14._8_4_ + _UNK_023d92d8;
      auVar16._12_4_ = auVar14._12_4_ + _UNK_023d92dc;
      auVar6._4_4_ = iVar1;
      auVar6._0_4_ = iVar1;
      auVar6._8_8_ = 0;
      auVar17 = pmulld(auVar16,auVar6);
      auVar14 = pmovsxdq(auVar19,auVar19);
      auVar19 = pmovsxdq(auVar17,auVar17);
      auVar21._8_4_ = (int)lVar2;
      auVar21._0_8_ = lVar2;
      auVar21._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
      *(longlong *)(local_838 + lVar11 * 2) = auVar14._0_8_ * 4 + lVar2;
      local_830[lVar11] = auVar14._8_8_ * 4 + auVar21._8_8_;
      local_830[lVar11 + 1] = auVar19._0_8_ * 4 + lVar2;
      local_830[lVar11 + 2] = auVar19._8_8_ * 4 + auVar21._8_8_;
    }
    else {
      lVar12 = -(uVar13 & 0xfffffffffffffffe);
      lVar11 = 0;
      auVar14 = _DAT_02392fe0;
      do {
        iVar10 = auVar14._0_4_;
        auVar18._0_4_ = iVar10 + _DAT_023d92d0;
        iVar22 = auVar14._4_4_;
        auVar18._4_4_ = iVar22 + _UNK_023d92d4;
        iVar23 = auVar14._8_4_;
        iVar24 = auVar14._12_4_;
        auVar18._8_4_ = iVar23 + _UNK_023d92d8;
        auVar18._12_4_ = iVar24 + _UNK_023d92dc;
        auVar19._4_4_ = iVar1;
        auVar19._0_4_ = iVar1;
        auVar19._8_8_ = 0;
        auVar14 = pmulld(auVar19,auVar14);
        auVar17._4_4_ = iVar1;
        auVar17._0_4_ = iVar1;
        auVar17._8_8_ = 0;
        auVar19 = pmulld(auVar18,auVar17);
        auVar14 = pmovsxdq(auVar14,auVar14);
        auVar19 = pmovsxdq(auVar19,auVar19);
        *(longlong *)(local_838 + lVar11 * 2) = auVar14._0_8_ * 4 + lVar2;
        local_830[lVar11] = auVar14._8_8_ * 4 + lVar2;
        local_830[lVar11 + 1] = auVar19._0_8_ * 4 + lVar2;
        local_830[lVar11 + 2] = auVar19._8_8_ * 4 + lVar2;
        auVar15._0_4_ = iVar10 + _DAT_023d92e0;
        auVar15._4_4_ = iVar22 + _UNK_023d92e4;
        auVar15._8_4_ = iVar23 + _UNK_023d92e8;
        auVar15._12_4_ = iVar24 + _UNK_023d92ec;
        auVar20._0_4_ = iVar10 + _DAT_023d92f0;
        auVar20._4_4_ = iVar22 + _UNK_023d92f4;
        auVar20._8_4_ = iVar23 + _UNK_023d92f8;
        auVar20._12_4_ = iVar24 + _UNK_023d92fc;
        auVar3._4_4_ = iVar1;
        auVar3._0_4_ = iVar1;
        auVar3._8_8_ = 0;
        auVar14 = pmulld(auVar15,auVar3);
        auVar4._4_4_ = iVar1;
        auVar4._0_4_ = iVar1;
        auVar4._8_8_ = 0;
        auVar19 = pmulld(auVar20,auVar4);
        auVar14 = pmovsxdq(auVar14,auVar14);
        auVar19 = pmovsxdq(auVar19,auVar19);
        local_830[lVar11 + 3] = auVar14._0_8_ * 4 + lVar2;
        local_830[lVar11 + 4] = auVar14._8_8_ * 4 + lVar2;
        local_830[lVar11 + 5] = auVar19._0_8_ * 4 + lVar2;
        local_830[lVar11 + 6] = auVar19._8_8_ * 4 + lVar2;
        lVar11 = lVar11 + 8;
        auVar14._0_4_ = iVar10 + _DAT_02410ff0;
        auVar14._4_4_ = iVar22 + _UNK_02410ff4;
        auVar14._8_4_ = iVar23 + _UNK_02410ff8;
        auVar14._12_4_ = iVar24 + _UNK_02410ffc;
        lVar12 = lVar12 + 2;
      } while (lVar12 != 0);
      if ((uVar13 & 1) != 0) goto LAB_00bc7785;
    }
    if (uVar9 == uVar8) goto LAB_00bc77fa;
  }
  iVar10 = iVar1 * (int)uVar9;
  do {
    *(longlong *)(local_838 + uVar9 * 2) = lVar2 + (longlong)iVar10 * 4;
    uVar9 = uVar9 + 1;
    iVar10 = iVar10 + iVar1;
  } while (uVar8 != uVar9);
LAB_00bc77fa:
  FUN_00b87840(iVar1,param_2);
  uVar8 = FUN_00e31390();
  cVar7 = FUN_00e314a0(3,uVar8 & 0xfffffffb);
  while (cVar7 == '\0') {
    cVar7 = FUN_00e314a0(3,uVar8 & 0xfffffffb);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return 1;
  }
LAB_00bc7883:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


