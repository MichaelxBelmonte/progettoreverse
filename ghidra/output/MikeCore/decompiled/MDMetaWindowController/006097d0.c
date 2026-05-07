// Function: FUN_006097d0
// Address: 006097d0
// Size: 527 bytes
// Class: MDMetaWindowController


void FUN_006097d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  longlong local_28;
  char local_20;
  
  FUN_003b3c10();
  *(undefined4 *)(unaff_RDI + 0x3e) = 1;
  lVar2 = DAT_027032c0;
  if (DAT_027032c0 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  lVar1 = unaff_RDI[0x3c];
  lVar3 = lVar1;
  if (lVar1 != local_28) {
    lVar3 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar3 = 0;
        goto LAB_00609831;
      }
      FUN_00d50b00();
      lVar1 = unaff_RDI[0x3c];
      unaff_RDI[0x3c] = local_28;
    }
    else {
      local_20 = '\0';
LAB_00609831:
      unaff_RDI[0x3c] = lVar3;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar3 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = 0x43c80000;
  *(undefined2 *)(unaff_RDI + 0x3d) = 0x101;
  (**(code **)(*unaff_RDI + 0x948))();
  (**(code **)(*unaff_RDI + 0x918))();
  auVar4._0_8_ = (**(code **)(*unaff_RDI + 0x938))();
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4 = blendps(auVar4,ZEXT816(0),2);
  auVar5 = blendps(in_XMM1,ZEXT816(0),2);
  (**(code **)(*unaff_RDI + 0x940))(auVar4._0_8_,auVar5._0_8_);
  (**(code **)(*unaff_RDI + 0x928))();
  *(undefined8 *)((longlong)unaff_RDI + 500) = 0xffffffff00000000;
  lVar2 = DAT_02703f90;
  if (DAT_02703f90 != 0) {
    FUN_00d50b00();
  }
  FUN_01d51a40();
  lVar1 = unaff_RDI[0x43];
  lVar3 = lVar1;
  if (lVar1 == local_28) goto LAB_006099a7;
  lVar3 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar3 = 0;
      goto LAB_00609960;
    }
    FUN_00d50b00();
    lVar1 = unaff_RDI[0x43];
    unaff_RDI[0x43] = local_28;
  }
  else {
    local_20 = '\0';
LAB_00609960:
    unaff_RDI[0x43] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_28;
  }
LAB_006099a7:
  if ((local_20 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


