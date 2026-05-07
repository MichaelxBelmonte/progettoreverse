// Function: FUN_016ac280
// Address: 016ac280
// Size: 620 bytes
// Class: MUAraTrackObserver


void FUN_016ac280(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  if (*(longlong *)(unaff_RSI + 0x10) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)param_2[1] != '\0') {
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(param_2 + 1) = 0;
      return;
    }
    FUN_00d50b00();
    *unaff_RDI = lVar1;
LAB_016ac44e:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  local_68 = '\0';
  local_70 = lVar1;
  FUN_00e427c0(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_60 = *param_2;
  if ((lVar1 != 0) && (local_60 = lVar1, lVar1 != *param_2)) {
    *unaff_RDI = lVar1;
    goto LAB_016ac44e;
  }
  local_58 = '\0';
  FUN_00cabdd0(local_60,&local_60);
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_50 = lVar2;
    local_48 = '\0';
    FUN_00e427c0();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
      goto joined_r0x016ac4e8;
    }
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar2 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
joined_r0x016ac4e8:
  if (lVar1 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}


