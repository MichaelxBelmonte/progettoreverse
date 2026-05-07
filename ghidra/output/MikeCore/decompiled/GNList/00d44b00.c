// Function: FUN_00d44b00
// Address: 00d44b00
// Size: 988 bytes
// Class: GNList


void FUN_00d44b00(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  local_48 = DAT_027c6f78;
  lVar2 = DAT_027652d0;
  plVar1 = (longlong *)*unaff_RSI;
  if (cVar3 == '\0') {
    uVar5 = extraout_XMM0_Qa;
    if (DAT_027c6f78 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x5a0))(uVar5,2);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    switch(*(undefined1 *)(unaff_RDI + 0xc)) {
    case 0x49:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
      break;
    case 0x62:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      break;
    case 100:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))(*(undefined8 *)(unaff_RDI + 0x10));
      break;
    case 0x66:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(*(undefined4 *)(unaff_RDI + 0x10));
      break;
    case 0x69:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3d8))();
      break;
    case 0x6c:
      (**(code **)(*(longlong *)*unaff_RSI + 0x3d0))();
    }
  }
  else {
    uVar5 = extraout_XMM0_Qa;
    if (DAT_027652d0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    uVar5 = (**(code **)(*plVar1 + 0x490))(uVar5,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    lVar2 = DAT_027e7c20;
    switch(*(undefined1 *)(unaff_RDI + 0xc)) {
    case 0x49:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      (**(code **)(*plVar1 + 0x498))(uVar5,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x62:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_58 = lVar2;
      local_50 = '\x01';
      (**(code **)(*plVar1 + 0x488))(uVar5,&local_58);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 100:
      plVar1 = (longlong *)*unaff_RSI;
      uVar5 = *(undefined8 *)(unaff_RDI + 0x10);
      if (DAT_027e7c20 != 0) {
        local_38 = *(undefined8 *)(unaff_RDI + 0x10);
        FUN_00d50b00();
        uVar5 = local_38;
      }
      local_98 = lVar2;
      local_90 = '\x01';
      (**(code **)(*plVar1 + 0x4b8))(uVar5);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x66:
      plVar1 = (longlong *)*unaff_RSI;
      uVar4 = *(undefined4 *)(unaff_RDI + 0x10);
      if (DAT_027e7c20 != 0) {
        local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(unaff_RDI + 0x10));
        FUN_00d50b00();
        uVar4 = (undefined4)local_38;
      }
      local_a8 = lVar2;
      local_a0 = '\x01';
      (**(code **)(*plVar1 + 0x4b0))(uVar4);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x69:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_78 = lVar2;
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x4a0))(uVar5,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      plVar1 = (longlong *)*unaff_RSI;
      if (DAT_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x4a8))(uVar5,&local_88);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


