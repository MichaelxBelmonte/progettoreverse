// Function: FUN_00c8ead0
// Address: 00c8ead0
// Size: 525 bytes
// Class: Unknown


void FUN_00c8ead0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar6;
  longlong local_78;
  char local_70;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))();
    plVar6 = local_40;
    if (local_40 == (longlong *)0x0) {
      bVar2 = false;
      plVar6 = (longlong *)0x0;
    }
    else {
      if (local_38 != '\0') {
        bVar2 = true;
        goto LAB_00c8eb83;
      }
      FUN_00d50b00();
      bVar2 = true;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) goto LAB_00c8eb83;
  }
  lVar3 = DAT_027726e0;
  if (DAT_027726e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00cc78b0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (longlong *)0x0;
LAB_00c8eb83:
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  lVar3 = DAT_027816e8;
  if (uVar4 == 0) {
    bVar1 = false;
    plVar5 = (longlong *)0x0;
  }
  else if ((uVar4 & 0xffffffff80000000) == 0) {
    local_44 = (undefined4)uVar4;
    FUN_00c8e340();
    (**(code **)(*plVar6 + 0x380))(&local_44,*(undefined8 *)(unaff_RDI + 0x10));
    plVar5 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (DAT_027816e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc7970();
    plVar5 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*plVar6 + 0x368))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar5 != (longlong *)0x0) && (FUN_00cc76c0(), bVar1)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return;
}


