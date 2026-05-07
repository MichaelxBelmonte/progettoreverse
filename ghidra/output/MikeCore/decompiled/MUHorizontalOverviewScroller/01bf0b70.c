// Function: FUN_01bf0b70
// Address: 01bf0b70
// Size: 550 bytes
// Class: MUHorizontalOverviewScroller


/* WARNING: Removing unreachable block (ram,0x01bf0cbd) */
/* WARNING: Removing unreachable block (ram,0x01bf0cc6) */
/* WARNING: Removing unreachable block (ram,0x01bf0c04) */
/* WARNING: Removing unreachable block (ram,0x01bf0c0d) */

void FUN_01bf0b70(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  bool bVar5;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar6 [16];
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x558))();
  FUN_01e40eb0();
  FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01bf0c12;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01bf0c12:
    (**(code **)(*unaff_RDI + 0x640))();
    uVar4 = (**(code **)(*local_40 + 0x580))();
    (**(code **)(*unaff_RDI + 0x640))();
    uVar2 = (**(code **)(*local_70 + 0x578))();
    auVar3._8_4_ = extraout_XMM0_Dc;
    auVar3._0_8_ = uVar4;
    auVar3._12_4_ = extraout_XMM0_Dd;
    auVar6._8_4_ = extraout_XMM0_Dc_00;
    auVar6._0_8_ = uVar2;
    auVar6._12_4_ = extraout_XMM0_Dd_00;
    auVar6 = insertps(auVar3,auVar6,0x10);
    (**(code **)(*local_40 + 0x4d0))(0,auVar6._0_8_);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01beab60();
    FUN_01d9ab80();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar5 = false;
    goto LAB_01bf0ce6;
  }
  bVar5 = true;
LAB_01bf0ce6:
  FUN_01beab60();
  FUN_01d95060();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01beab60();
  lVar1 = unaff_RDI[0x3c];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d97920();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  return;
}


