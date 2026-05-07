// Function: FUN_01e4e790
// Address: 01e4e790
// Size: 697 bytes
// Class: Unknown


void FUN_01e4e790(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
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
  longlong *local_38;
  char local_30;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_38 + 0x6c0))();
  if (cVar3 == '\0') {
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x3a0))();
    if (cVar3 == '\0') {
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (*(longlong *)(unaff_RSI + 0x30) == 0) {
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar3 = *(char *)(*(longlong *)(unaff_RSI + 0x30) + 0xab);
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        local_88 = *param_2;
        local_80 = '\0';
        FUN_00d630a0(param_1,&local_88);
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
        FUN_01e33cd0();
        plVar2 = local_38;
        if (local_30 == '\0') {
          if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
             (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_30 = '\0';
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d4efa0();
        local_78 = DAT_027f1420;
        if (DAT_027f1420 != 0) {
          FUN_00d50b00();
        }
        local_70 = '\x01';
        FUN_00c841b0(param_1,&local_78);
        lVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_38 = (longlong *)lVar1;
        local_30 = '\0';
        FUN_00d23f50();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = plVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return;
      }
    }
  }
  local_68 = *param_2;
  local_60 = '\0';
  FUN_00d630a0(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return;
}


