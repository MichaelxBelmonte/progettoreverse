// Function: FUN_01e4e1c0
// Address: 01e4e1c0
// Size: 857 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e4e2c4) */
/* WARNING: Removing unreachable block (ram,0x01e4e2d0) */

void FUN_01e4e1c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar2 = DAT_027f3cc8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f3cc8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar1 + 0x590))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f3cc8;
  if (cVar4 != '\0') {
    plVar1 = (longlong *)*unaff_RSI;
    if (DAT_027f3cc8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x578))();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00c716c0();
    FUN_00d46530();
    local_60 = local_40;
    local_58 = 0;
    local_90 = DAT_027f3cd0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        local_90 = DAT_027f3cd0;
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    DAT_027f3cd0 = local_90;
    if (local_90 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_88 = '\x01';
    (**(code **)(*unaff_RDI + 0x1f0))(0,&local_90,0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d46530();
    local_50 = local_40;
    local_48 = 0;
    local_80 = DAT_027f3cd8;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        local_80 = DAT_027f3cd8;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    DAT_027f3cd8 = local_80;
    if (local_80 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    local_78 = '\x01';
    (**(code **)(*unaff_RDI + 0x1f0))(0,&local_80,0);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_00d61ea0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  return;
}


