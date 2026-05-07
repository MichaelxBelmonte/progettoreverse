// Function: FUN_01e32c00
// Address: 01e32c00
// Size: 702 bytes
// Class: GNList


void FUN_01e32c00(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  FUN_00d50100();
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar1 == plVar2) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x38) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar1 == plVar2) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x40) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  if (plVar1 == plVar2) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x58) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00034160();
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  if (plVar1 == plVar2) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x30) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0004d640();
  (**(code **)(*plVar2 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x18);
  if (plVar1 == plVar2) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x18) = plVar2;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = DAT_027f3858;
  if (DAT_027f3858 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41430(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_70 = DAT_0277e658;
  if (DAT_0277e658 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d41430(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}


