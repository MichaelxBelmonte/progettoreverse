// Function: FUN_00c3b7b0
// Address: 00c3b7b0
// Size: 616 bytes
// Class: GNOverloudCompG


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c3b7b0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *unaff_RDI;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  uint uVar7;
  undefined4 in_XMM1_Dc;
  uint in_XMM1_Dd;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  uVar7 = (uint)((ulonglong)param_2 >> 0x20);
  uVar6 = (undefined4)param_2;
  uVar3 = FUN_01d17670();
  local_60 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    uVar3 = FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*unaff_RDI + 0x4c8))(uVar3,&local_60);
  plVar1 = local_30;
  if (local_28 == '\0') {
    if (((local_30 != (longlong *)0x0) && (FUN_00d50b00(), local_28 != '\0')) &&
       (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_50 = plVar1;
    local_48 = '\0';
    iVar2 = FUN_00c716c0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar2 != 0) {
      FUN_01e40eb0();
      plVar1 = local_30;
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        return;
      }
      FUN_01e40eb0();
      plVar1 = local_30;
      local_38 = 0;
      local_40 = unaff_RDI[0xc];
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      (**(code **)(*plVar1 + 0x450))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar1 = (longlong *)unaff_RDI[0xd];
      FUN_01e3f820();
      auVar4._4_4_ = uVar7;
      auVar4._0_4_ = uVar6;
      auVar4._8_4_ = in_XMM1_Dc;
      auVar4._12_4_ = in_XMM1_Dd;
      auVar4 = blendps(ZEXT816(0),auVar4,2);
      (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
      FUN_01e40eb0();
      (**(code **)(*local_30 + 0x620))();
      if (local_28 == '\0') {
        return;
      }
      if (local_30 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  FUN_01e40eb0();
  plVar1 = local_30;
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0xc] + 0x478))();
    plVar1 = (longlong *)unaff_RDI[0xd];
    FUN_01e3f820();
    auVar5._0_4_ = uVar7 ^ _DAT_023945e0;
    auVar5._4_4_ = uVar7 ^ _UNK_023945e4;
    auVar5._8_4_ = in_XMM1_Dd ^ _UNK_023945e8;
    auVar5._12_4_ = in_XMM1_Dd ^ _UNK_023945ec;
    auVar4 = insertps(auVar5,auVar5,0x1d);
    (**(code **)(*plVar1 + 0x4f0))(auVar4._0_8_);
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x620))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


