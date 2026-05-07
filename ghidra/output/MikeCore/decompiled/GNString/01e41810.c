// Function: FUN_01e41810
// Address: 01e41810
// Size: 609 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e41881) */
/* WARNING: Removing unreachable block (ram,0x01e4188a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e41810(undefined8 param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qb_03;
  float fVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  undefined8 uStack_50;
  longlong local_48;
  char local_40;
  
  (**(code **)(*unaff_RDI + 0x4a0))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    (**(code **)(*unaff_RDI + 0x4a0))();
    if (local_48 == 0) {
      bVar3 = true;
      local_48 = 0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
    plVar2 = (longlong *)**(longlong **)(local_48 + 0x10);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_58 = (undefined1  [8])(**(code **)(*plVar2 + 0x4d8))();
    uStack_50 = extraout_XMM0_Qb;
    local_68._0_8_ = (**(code **)(*plVar2 + 0x4d8))();
    local_68._8_8_ = extraout_XMM0_Qb_00;
    uVar5 = (**(code **)(*plVar2 + 0x4d8))();
    auVar8 = in_XMM1;
    uVar6 = (**(code **)(*plVar2 + 0x4d8))();
    local_78 = (float)uVar5;
    fStack_74 = (float)((ulonglong)uVar5 >> 0x20);
    fStack_70 = (float)extraout_XMM0_Qb_01;
    fStack_6c = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    local_98 = in_XMM1._0_4_;
    fStack_94 = in_XMM1._4_4_;
    fStack_90 = in_XMM1._8_4_;
    fStack_8c = in_XMM1._12_4_;
    auVar13._0_4_ = local_78 + local_98;
    auVar13._4_4_ = fStack_74 + fStack_94;
    auVar13._8_4_ = fStack_70 + fStack_90;
    auVar13._12_4_ = fStack_6c + fStack_8c;
    auVar7._0_4_ = (float)uVar6 + auVar8._0_4_;
    auVar7._4_4_ = (float)((ulonglong)uVar6 >> 0x20) + auVar8._4_4_;
    auVar7._8_4_ = (float)extraout_XMM0_Qb_02 + auVar8._8_4_;
    auVar7._12_4_ = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) + auVar8._12_4_;
    auVar7 = blendps(auVar7,auVar13,0xd);
    auVar12._0_4_ = auVar7._0_4_ + _DAT_023b5de0;
    auVar12._4_4_ = auVar7._4_4_ + _UNK_023b5de4;
    auVar12._8_4_ = auVar7._8_4_ + _UNK_023b5de8;
    auVar12._12_4_ = auVar7._12_4_ + _UNK_023b5dec;
    iVar1 = *(int *)(local_48 + 0xc);
    auVar7 = blendps(local_68,_local_58,0xd);
    local_88 = (float)param_1;
    fStack_84 = (float)((ulonglong)param_1 >> 0x20);
    fStack_80 = (float)in_XMM0_Qb;
    fStack_7c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
    if (iVar1 < 2) {
      local_58._4_4_ = auVar7._4_4_ - fStack_84;
      local_58._0_4_ = auVar7._0_4_ - local_88;
      uStack_50._0_4_ = auVar7._8_4_ - fStack_80;
      uStack_50._4_4_ = auVar7._12_4_ - fStack_7c;
    }
    else {
      lVar4 = 1;
      do {
        uVar5 = (**(code **)(**(longlong **)(*(longlong *)(local_48 + 0x10) + lVar4 * 8) + 0x4d8))()
        ;
        auVar14._8_4_ = (float)extraout_XMM0_Qb_03;
        auVar14._0_8_ = uVar5;
        fVar10 = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
        auVar14._12_4_ = fVar10;
        auVar7 = minps(auVar14,auVar7);
        auVar11._0_4_ = auVar8._0_4_ + (float)uVar5 + _DAT_023b5de0;
        auVar11._4_4_ = auVar8._4_4_ + (float)((ulonglong)uVar5 >> 0x20) + _UNK_023b5de4;
        auVar11._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb_03 + _UNK_023b5de8;
        auVar11._12_4_ = auVar8._12_4_ + fVar10 + _UNK_023b5dec;
        auVar12 = maxps(auVar11,auVar12);
        lVar4 = lVar4 + 1;
        iVar1 = *(int *)(local_48 + 0xc);
        auVar8 = auVar12;
      } while (lVar4 < iVar1);
      local_58._4_4_ = auVar7._4_4_ - fStack_84;
      local_58._0_4_ = auVar7._0_4_ - local_88;
      uStack_50._0_4_ = auVar7._8_4_ - fStack_80;
      uStack_50._4_4_ = auVar7._12_4_ - fStack_7c;
    }
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(*(longlong *)(local_48 + 0x10) + lVar4 * 8) + 0x4f0))();
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(local_48 + 0xc));
    }
    (**(code **)(*unaff_RDI + 0x4d8))();
    (**(code **)(*unaff_RDI + 0x578))();
    (**(code **)(*unaff_RDI + 0x570))();
    local_78 = auVar12._0_4_;
    fStack_74 = auVar12._4_4_;
    fStack_70 = auVar12._8_4_;
    fStack_6c = auVar12._12_4_;
    auVar8._4_4_ = fStack_74 + fStack_84;
    auVar8._0_4_ = local_78 + local_88;
    auVar8._8_4_ = fStack_70 + fStack_80;
    auVar8._12_4_ = fStack_6c + fStack_7c;
    auVar9._4_12_ = auVar8._4_12_;
    auVar9._0_4_ = ((local_78 + local_88) - (float)local_58._0_4_) + DAT_02390124;
    auVar15._4_4_ = (fStack_74 + fStack_84) - (float)local_58._4_4_;
    auVar15._12_4_ = (fStack_6c + fStack_7c) - uStack_50._4_4_;
    auVar15._0_4_ = auVar15._4_4_;
    auVar15._8_4_ = auVar15._12_4_;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._4_4_ + DAT_02390124;
    auVar12 = insertps(auVar9,auVar16,0x10);
    (**(code **)(*unaff_RDI + 0x4e8))(auVar12._0_8_);
    (**(code **)(*unaff_RDI + 0x570))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
  }
  return;
}


