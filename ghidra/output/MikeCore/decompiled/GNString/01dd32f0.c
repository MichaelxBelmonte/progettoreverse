// Function: FUN_01dd32f0
// Address: 01dd32f0
// Size: 590 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01dd3334) */
/* WARNING: Removing unreachable block (ram,0x01dd333d) */

void FUN_01dd32f0(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar5;
  float fVar7;
  undefined4 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  iVar4 = (int)unaff_RDI[0x48];
  if (iVar4 == 3) {
    (**(code **)(*local_40 + 0x530))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    iVar4 = (**(code **)(*unaff_RDI + 0x9d8))(*(undefined8 *)((longlong)unaff_RDI + 0x224));
    auVar6._0_8_ = FUN_01dcf710();
    auVar6._8_8_ = extraout_XMM0_Qb;
    if (iVar4 == 0) {
      fVar7 = (float)((ulonglong)auVar6._0_8_ >> 0x20);
      uVar8 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar2._4_4_ = fVar7;
      auVar2._0_4_ = fVar7 + DAT_02390124;
      auVar2._8_4_ = uVar8;
      auVar2._12_4_ = uVar8;
      auVar6 = insertps(auVar6,auVar2,0x10);
    }
    uVar5 = auVar6._0_8_;
    if (iVar4 == (int)unaff_RDI[0x30]) {
      auVar3._4_4_ = auVar6._4_4_;
      auVar3._0_4_ = auVar6._4_4_ + DAT_02390d00;
      auVar3._8_4_ = auVar6._12_4_;
      auVar3._12_4_ = auVar6._12_4_;
      auVar6 = insertps(auVar6,auVar3,0x10);
      uVar5 = auVar6._0_8_;
    }
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (uVar5,uVar8,param_2 + (float)uVar5 + DAT_02390d00,uVar8);
    iVar4 = (int)unaff_RDI[0x48];
  }
  if (iVar4 == 2) {
    FUN_01d48370();
    FUN_01d48b40();
    FUN_01dce800();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    (**(code **)(*unaff_RDI + 0x9d8))(*(undefined8 *)((longlong)unaff_RDI + 0x224));
    FUN_01dcf710();
    (**(code **)(*plVar1 + 0x3b8))();
    FUN_01d48390();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


