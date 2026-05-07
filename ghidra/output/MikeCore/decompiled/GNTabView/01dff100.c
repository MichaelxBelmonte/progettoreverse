// Function: FUN_01dff100
// Address: 01dff100
// Size: 730 bytes
// Class: GNTabView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dff100(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_78;
  char local_70;
  longlong *local_48;
  undefined1 auVar10 [12];
  undefined8 extraout_XMM0_Qb_00;
  
  auVar10 = in_XMM0._4_12_;
  lVar1 = unaff_RDI[0x2c];
  if (lVar1 == 0) {
    iVar4 = (int)unaff_RDI[0x2a];
joined_r0x01dff16b:
    bVar3 = true;
    local_48 = (longlong *)0x0;
    if (iVar4 != 2) goto LAB_01dff171;
LAB_01dff2a9:
    if (lVar1 != 0) {
      FUN_01d6f8d0();
      lVar6 = unaff_RDI[0x27];
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(longlong *)(lVar6 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_01d6f990();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar6 = unaff_RDI[0x27];
        } while (lVar5 < *(int *)(lVar6 + 0xc));
      }
      if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
  }
  else {
    auVar9._0_8_ = FUN_00d50b00();
    auVar9._8_8_ = extraout_XMM0_Qb;
    auVar10 = auVar9._4_12_;
    local_48 = (longlong *)unaff_RDI[0x2c];
    if (local_48 == (longlong *)0x0) {
      iVar4 = (int)unaff_RDI[0x2a];
      goto joined_r0x01dff16b;
    }
    auVar7._0_8_ = FUN_00d50b00();
    auVar7._8_8_ = extraout_XMM0_Qb_00;
    auVar10 = auVar7._4_12_;
    bVar3 = false;
    iVar4 = (int)unaff_RDI[0x2a];
    if (iVar4 == 2) goto LAB_01dff2a9;
LAB_01dff171:
    if (iVar4 == 3) {
      if (bVar3) goto LAB_01dff3c0;
      auVar8._0_4_ = (float)*(int *)(unaff_RDI[0x27] + 0xc);
      auVar8._4_12_ = auVar10;
      auVar9 = blendps(auVar8,_DAT_023b1620,0xe);
      (**(code **)(*local_48 + 0xad8))(auVar9._0_8_);
      if (0 < *(int *)(unaff_RDI[0x27] + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(*local_48 + 0x4a0))();
          plVar2 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar6 * 8);
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x10) + lVar6 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar5 = *(longlong *)(lVar5 + 0x28);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x958))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(unaff_RDI[0x27] + 0xc));
      }
      if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x620))();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
LAB_01dff3c0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


