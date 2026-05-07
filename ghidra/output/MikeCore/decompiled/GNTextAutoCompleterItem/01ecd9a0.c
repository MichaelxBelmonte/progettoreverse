// Function: FUN_01ecd9a0
// Address: 01ecd9a0
// Size: 895 bytes
// Class: GNTextAutoCompleterItem


/* WARNING: Removing unreachable block (ram,0x01ecdcbe) */
/* WARNING: Removing unreachable block (ram,0x01ecdcc7) */
/* WARNING: Removing unreachable block (ram,0x01ecdbf3) */
/* WARNING: Removing unreachable block (ram,0x01ecdbfc) */
/* WARNING: Removing unreachable block (ram,0x01ecdc25) */
/* WARNING: Removing unreachable block (ram,0x01ecdc2e) */
/* WARNING: Removing unreachable block (ram,0x01ecdc60) */
/* WARNING: Removing unreachable block (ram,0x01ecdcd5) */
/* WARNING: Removing unreachable block (ram,0x01ecdce1) */
/* WARNING: Removing unreachable block (ram,0x01ecdae8) */
/* WARNING: Removing unreachable block (ram,0x01ecdaf1) */

void FUN_01ecd9a0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  uVar1 = FUN_01e15b70();
  (**(code **)(*unaff_RSI + 0x520))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  uVar3 = FUN_01e1aa30(uVar1,1);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (((int)uVar3 == -1) || ((int)((ulonglong)uVar3 >> 0x20) < 1)) {
    lVar4 = 0;
    goto LAB_01ecdc01;
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  lVar5 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d97f20();
  if (local_40 == lVar5) {
LAB_01ecdb9d:
    lVar4 = lVar5;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
        lVar5 = local_40;
        goto LAB_01ecdb9d;
      }
    }
    else if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d21140();
LAB_01ecdc01:
  lVar5 = *param_2;
  FUN_00d21140();
  if (*(int *)((longlong)puVar2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00d8ede0();
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00d95130();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


