// Function: FUN_01394a40
// Address: 01394a40
// Size: 624 bytes
// Class: MUAudioFileSource
// String references:
//   "Cannot create separation folder at %@"


void FUN_01394a40(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  FUN_013933d0();
  plVar4 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar2 == 0) {
    local_38 = plVar4;
    FUN_01393860();
    plVar4 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = local_50 & 0xffffff00;
    }
    plVar1 = (longlong *)(unaff_RSI + 0x48);
    FUN_00d64850();
    plVar3 = (longlong *)*plVar1;
    if (plVar3 != plVar4) {
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *plVar1 = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *plVar1;
    plVar4 = local_38;
  }
  if (lVar2 != 0) {
    local_60 = 0;
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar2;
  (**(code **)(*plVar4 + 0x400))(param_1,&local_68);
  plVar4 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  if (cVar5 == '\0') {
    (**(code **)(*plVar4 + 0x428))();
  }
  cVar5 = (**(code **)(*plVar4 + 0x3a0))();
  lVar2 = DAT_027bf470;
  if (cVar5 == '\0') {
    if (DAT_027bf470 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x368))();
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (local_88 != 0) {
      FUN_00d50b00();
    }
    local_48 = local_88;
    local_40 = '\x01';
    FUN_00cc7b40(param_1,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}


