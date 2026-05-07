// Function: FUN_00e17e60
// Address: 00e17e60
// Size: 1733 bytes
// Class: GNString
// String references:
//   "%sobserver: %p is a (%@ *)%p"
//   "invalid "
//   "property: %@"
//   "object: %@"
//   "thread: %p"


/* WARNING: Removing unreachable block (ram,0x00e183f6) */
/* WARNING: Removing unreachable block (ram,0x00e18402) */
/* WARNING: Removing unreachable block (ram,0x00e182b6) */
/* WARNING: Removing unreachable block (ram,0x00e182c2) */
/* WARNING: Removing unreachable block (ram,0x00e18304) */
/* WARNING: Removing unreachable block (ram,0x00e1830d) */
/* WARNING: Removing unreachable block (ram,0x00e1806d) */
/* WARNING: Removing unreachable block (ram,0x00e18076) */
/* WARNING: Removing unreachable block (ram,0x00e17ef7) */
/* WARNING: Removing unreachable block (ram,0x00e17f03) */
/* WARNING: Removing unreachable block (ram,0x00e181c6) */
/* WARNING: Removing unreachable block (ram,0x00e181cf) */
/* WARNING: Removing unreachable block (ram,0x00e1817f) */
/* WARNING: Removing unreachable block (ram,0x00e1818b) */
/* WARNING: Removing unreachable block (ram,0x00e1843d) */
/* WARNING: Removing unreachable block (ram,0x00e18446) */
/* WARNING: Removing unreachable block (ram,0x00e184f7) */
/* WARNING: Removing unreachable block (ram,0x00e18503) */

undefined8 FUN_00e17e60(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  bool bVar4;
  longlong local_d8;
  char local_d0;
  longlong local_a0;
  char local_98;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d4ffd0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_00d21140();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RSI + 0x10) == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(unaff_RSI + 0x10) + 0x10))();
  }
  lVar1 = DAT_027724b0;
  bVar4 = *(char *)(unaff_RSI + 0x38) == '\0';
  if (lVar3 != 0 && bVar4) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
  }
  else {
    if (DAT_027724b0 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar1;
    local_98 = '\x01';
  }
  if (local_a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00d21140();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (((lVar3 != 0 && bVar4) && (local_d0 != '\0')) && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02785428;
  lVar3 = *(longlong *)(unaff_RSI + 0x20);
  if (lVar3 == 0) {
    if (DAT_02785428 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_02785430;
  if (*(longlong *)(unaff_RSI + 0x18) == 0) {
    if (DAT_02785430 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d4fff0();
    if (local_a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_02785438;
  lVar3 = *(longlong *)(unaff_RSI + 0x30);
  if (lVar3 == 0) {
    if (DAT_02785438 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d8cb40();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_00d21140();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_027d64a0;
  if (DAT_027d64a0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


