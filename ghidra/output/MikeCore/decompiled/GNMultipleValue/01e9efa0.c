// Function: FUN_01e9efa0
// Address: 01e9efa0
// Size: 807 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01e9f2a1) */
/* WARNING: Removing unreachable block (ram,0x01e9f2aa) */

void FUN_01e9efa0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0xac0))();
  lVar2 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027fdd90;
  if (lVar2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    (**(code **)(*unaff_RSI + 0xac0))();
    FUN_01d448b0();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0xac0))();
    FUN_01d43b70();
    FUN_00d46530();
    (**(code **)(*local_58 + 400))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0xac0))();
    FUN_01d449a0();
    FUN_00d46530();
    (**(code **)(*local_58 + 400))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_48 = lVar2;
    local_40 = '\0';
    uVar4 = FUN_00d21140();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    lVar2 = DAT_027fdd98;
    if (DAT_027fdd98 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    FUN_00d95130(uVar4,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


