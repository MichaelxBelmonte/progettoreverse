// Function: FUN_01cb8770
// Address: 01cb8770
// Size: 645 bytes
// Class: Unknown


void FUN_01cb8770(int param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (param_1 != 0) {
    switch(param_2) {
    case 2:
    case 3:
    case 9:
    case 0xe:
    case 0xf:
    case 0x10:
      (**(code **)(*unaff_RSI + 0x3a8))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*unaff_RSI + 0x398))();
      local_70 = local_30;
      local_68 = 0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      local_68 = '\x01';
      FUN_01cfd290(DAT_0239011c,&local_70);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    default:
      goto switchD_01cb879d_caseD_4;
    case 8:
      (**(code **)(*unaff_RSI + 0x3a8))();
      local_60 = local_40;
      local_58 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*unaff_RSI + 0x3a0))();
      local_50 = local_30;
      local_48 = 0;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      local_48 = '\x01';
      FUN_01cfd290(DAT_0239011c,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == '\0') {
        return;
      }
      if (local_40 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    case 0x14:
      lVar1 = *unaff_RSI;
      if (param_3 != 0) {
LAB_01cb89ca:
        (**(code **)(lVar1 + 0x3a0))();
        return;
      }
      break;
    case 0x27:
      if (param_3 == 0) {
        lVar1 = *unaff_RSI;
        goto LAB_01cb89ca;
      }
      if (param_3 == 3) {
        FUN_01cb8c70();
        return;
      }
      lVar1 = *unaff_RSI;
    }
    (**(code **)(lVar1 + 0x390))();
    return;
  }
switchD_01cb879d_caseD_4:
  (**(code **)(*unaff_RSI + 0x3a8))();
  return;
}


