// Function: FUN_01ccc680
// Address: 01ccc680
// Size: 645 bytes
// Class: GNMultipleValue


void FUN_01ccc680(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *unaff_RSI;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined4 local_4c;
  longlong *local_40;
  char local_38;
  
  local_4c = (undefined4)param_1;
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_01ccab60(param_1,&local_b0);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01cc98b0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01ccc8eb;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01ccc8eb;
  lVar1 = local_40[5];
  FUN_00d50b20();
  if (lVar1 == 0) goto LAB_01ccc8eb;
  local_90 = lVar1;
  FUN_00d50b00();
  local_a0 = *param_2;
  local_98 = 0;
  FUN_01ccac20();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01ccc7aa;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01ccc7aa:
    local_80 = *unaff_RSI;
    local_78 = '\0';
    (**(code **)(*local_40 + 0x378))();
    plVar2 = (longlong *)*unaff_RSI;
    if (plVar2 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_01ccc84d;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01ccc846;
      }
LAB_01ccc866:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar1 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01ccc866;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar1 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01ccc846:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01ccc84d:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  local_60 = local_40;
  local_58 = '\0';
  FUN_01d27780(local_4c,&local_60);
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01ccc8eb:
  FUN_00d50b20();
  return;
}


