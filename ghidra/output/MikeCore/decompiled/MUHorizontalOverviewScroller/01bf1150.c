// Function: FUN_01bf1150
// Address: 01bf1150
// Size: 540 bytes
// Class: MUHorizontalOverviewScroller


void FUN_01bf1150(double param_1,double param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong unaff_RDI;
  double dVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 extraout_XMM0_Qb_01;
  
  if (*(longlong *)(unaff_RDI + 0x1b0) != 0) {
    local_68._0_8_ = param_2;
    FUN_00d50b00();
    FUN_00d50b20();
    if ((*(longlong *)(unaff_RDI + 0x1a0) != 0) && (0.0 < param_2)) {
      lVar1 = *(longlong *)(unaff_RDI + 0x1b0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = FUN_01e436c0();
      local_78._8_8_ = extraout_XMM0_Qb;
      auVar11 = local_78;
      local_68._8_8_ = in_XMM1_Qb;
      auVar4 = local_68;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      dVar6 = (double)(**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x368))();
      dVar7 = (double)(**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x378))();
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_1;
      auVar9 = roundsd(ZEXT816(0),auVar9,9);
      dVar14 = (double)(-(ulonglong)(param_1 < dVar6) & auVar9._0_8_ |
                       ~-(ulonglong)(param_1 < dVar6) & (ulonglong)dVar6);
      dVar6 = dVar14 + dVar7;
      dVar13 = param_1 + param_2;
      if (dVar6 < dVar13) {
        dVar7 = (double)(**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x378))();
        auVar12._0_8_ = (dVar13 - dVar6) + dVar7;
        auVar12._8_8_ = 0;
        auVar9 = roundsd(auVar12,auVar12,10);
        dVar7 = auVar9._0_8_;
      }
      cVar5 = (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x418))
                        (dVar14,dVar7,
                         SUB84((double)(((float)local_78._0_4_ + (float)local_68._0_4_ +
                                        DAT_02390d00) - (float)local_78._0_4_) / param_2,0));
      if (cVar5 != '\0') {
        *(undefined4 *)(unaff_RDI + 0x200) = 1;
        (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x410))();
        FUN_01bece10();
      }
      uVar8 = (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x390))(param_1);
      auVar10._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x1a0) + 0x390))(dVar13);
      auVar10._8_8_ = extraout_XMM0_Qb_01;
      auVar3._8_8_ = extraout_XMM0_Qb_00;
      auVar3._0_8_ = uVar8;
      auVar9 = blendps(auVar11,auVar3,1);
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = (float)auVar10._0_8_ - (float)uVar8;
      blendps(auVar4,auVar11,1);
      plVar2 = *(longlong **)(unaff_RDI + 0x1b0);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_78._0_8_ = auVar9._0_8_;
      (**(code **)(*plVar2 + 0x518))(local_78._0_8_);
      FUN_00d50b20();
    }
  }
  return;
}


