// Function: FUN_01e01250
// Address: 01e01250
// Size: 923 bytes
// Class: GNTabView


void FUN_01e01250(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar10;
  undefined1 auVar8 [16];
  undefined1 in_XMM1 [16];
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x60) != '\0')) && (unaff_RDI[0x28] != lVar1)) {
    plVar5 = (longlong *)unaff_RDI[0x29];
    if (plVar5 != (longlong *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_a8 = *unaff_RSI;
      local_a0 = '\0';
      (**(code **)(*plVar5 + 0x18))(auVar8._0_8_,&local_a8);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x28] != 0) {
      plVar5 = *(longlong **)(unaff_RDI[0x28] + 0x20);
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x478))();
      FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    unaff_RDI[0x28] = lVar1;
    if (lVar1 == 0) {
      bVar6 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 0x20);
      bVar6 = plVar5 == (longlong *)0x0;
      if (bVar6) {
        plVar5 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      bVar6 = !bVar6;
      auVar8._0_8_ = FUN_01e3f820();
      auVar8._8_8_ = extraout_XMM0_Qb;
      if ((int)unaff_RDI[0x2a] != 0) {
        auVar3._4_4_ = in_XMM1._4_4_;
        auVar3._0_4_ = in_XMM1._4_4_ - *(float *)((longlong)unaff_RDI + 0x154);
        auVar3._8_4_ = in_XMM1._12_4_;
        auVar3._12_4_ = in_XMM1._12_4_;
        insertps(in_XMM1,auVar3,0x10);
        fVar9 = (float)((ulonglong)auVar8._0_8_ >> 0x20);
        uVar10 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar4._4_4_ = fVar9;
        auVar4._0_4_ = fVar9 + *(float *)((longlong)unaff_RDI + 0x154);
        auVar4._8_4_ = uVar10;
        auVar4._12_4_ = uVar10;
        auVar8 = insertps(auVar8,auVar4,0x10);
      }
      (**(code **)(*plVar5 + 0x4d0))(auVar8._0_8_);
      local_90 = '\0';
      local_98 = plVar5;
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI[0x28] + 0x48) != 0) {
        FUN_00d50b00();
        FUN_01e42030();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_40 != 0) {
          FUN_01e42030();
          local_88 = *(longlong *)(unaff_RDI[0x28] + 0x48);
          if (local_88 != 0) {
            FUN_00d50b00();
          }
          local_80 = '\x01';
          FUN_01d8c820();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
       (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
      FUN_01dfe5d0();
      (**(code **)(*plVar2 + 0x918))();
    }
    plVar2 = (longlong *)unaff_RDI[0x29];
    if (plVar2 != (longlong *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_78 = *unaff_RSI;
      local_70 = '\0';
      (**(code **)(*plVar2 + 0x20))(auVar8._0_8_,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40 == 0) {
      bVar7 = false;
    }
    else {
      FUN_01e4c160();
      bVar7 = local_b8 != 0;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      FUN_01e42030();
      FUN_01d86b20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x620))();
    if ((bVar6) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


