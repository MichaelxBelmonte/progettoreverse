// Function: FUN_01e9e600
// Address: 01e9e600
// Size: 561 bytes
// Class: GNMultipleValue


void FUN_01e9e600(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  FUN_01d0eb90();
  *(undefined1 *)((longlong)unaff_RDI + 0x16c) = 0;
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  (**(code **)(*plVar3 + 0x18))();
  lVar1 = DAT_027f3318;
  if (DAT_027f3318 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027fdd80;
  if (DAT_027fdd80 != 0) {
    FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d31230(&local_90,&local_a0);
  lVar2 = local_50;
  local_80 = DAT_027fdd88;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
      local_80 = DAT_027fdd88;
    }
  }
  else {
    local_48 = '\0';
  }
  DAT_027fdd88 = local_80;
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d50b00();
  FUN_01d5da60(&local_70,&local_80,&stack0xffffffffffffffc0);
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_58 = '\0';
  local_60 = plVar3;
  (**(code **)(*unaff_RDI + 0x6e8))();
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


