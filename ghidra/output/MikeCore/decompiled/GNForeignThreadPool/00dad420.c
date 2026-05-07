// Function: FUN_00dad420
// Address: 00dad420
// Size: 638 bytes
// Class: GNForeignThreadPool


void FUN_00dad420(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x18) == 0)) goto LAB_00dad620;
  (**(code **)(*unaff_RSI + 0x608))();
  lVar2 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(*unaff_RSI + 0x608))();
    local_80 = *param_2;
    local_78 = '\0';
    (**(code **)(*local_90 + 0x370))(param_1,&local_80);
    lVar3 = local_48;
    lVar2 = *param_2;
    if (lVar2 == local_48) {
      if (((char)param_2[1] == '\0') && (local_48 != 0)) {
        local_50 = param_2 + 1;
        if (local_40 != '\0') goto LAB_00dad508;
        FUN_00d50b00();
        goto LAB_00dad546;
      }
LAB_00dad54d:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 == '\0') {
        local_31 = cVar1;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_2 = lVar3;
        if ((local_31 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_00dad546:
        *(undefined1 *)local_50 = 1;
        goto LAB_00dad54d;
      }
      *param_2 = local_48;
      if ((cVar1 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00dad508:
      *(undefined1 *)local_50 = 1;
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_00daa910();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_60 = lVar2;
    local_58 = '\0';
    (**(code **)(*unaff_RSI + 0x618))(param_1,&local_60);
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    return;
  }
LAB_00dad620:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


