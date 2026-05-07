// Function: FUN_01ecc1e0
// Address: 01ecc1e0
// Size: 801 bytes
// Class: GNTextAutoCompleterItem


undefined4 FUN_01ecc1e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
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
  longlong *local_38;
  char local_30;
  
  plVar1 = (longlong *)*unaff_RDI;
  plVar2 = (longlong *)*unaff_RSI;
  (**(code **)(*plVar1 + 0x3a0))();
  if (local_38 == (longlong *)0x0) {
    bVar5 = false;
  }
  else {
    (**(code **)(*plVar2 + 0x3a0))();
    bVar5 = local_48 == 0;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar4 = 0xffffffff;
  if (!bVar5) {
    (**(code **)(*plVar1 + 0x3a0))();
    if (local_38 == (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3a0))();
      bVar5 = local_48 != 0;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      bVar5 = false;
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = 1;
    if (!bVar5) {
      (**(code **)(*plVar1 + 0x3a0))();
      if (local_38 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x3a0))();
        bVar5 = local_48 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar5 = false;
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027fe6f8;
      if (bVar5) {
        (**(code **)(*plVar1 + 0x370))();
        plVar1 = local_38;
        (**(code **)(*plVar2 + 0x370))();
        local_68 = local_48;
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (DAT_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_88 = lVar3;
        local_80 = '\x01';
        (**(code **)(*plVar1 + 0x88))(param_1,&local_88);
        plVar1 = local_38;
        local_78 = DAT_027fe6f8;
        if (DAT_027fe6f8 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        (**(code **)(*plVar2 + 0x88))(param_1,&local_78);
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        uVar4 = (**(code **)(*plVar1 + 0x58))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return uVar4;
}


