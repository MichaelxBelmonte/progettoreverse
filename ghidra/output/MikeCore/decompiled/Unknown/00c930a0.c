// Function: FUN_00c930a0
// Address: 00c930a0
// Size: 536 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c931fd) */
/* WARNING: Removing unreachable block (ram,0x00c93206) */
/* WARNING: Removing unreachable block (ram,0x00c931c3) */
/* WARNING: Removing unreachable block (ram,0x00c931cc) */
/* WARNING: Removing unreachable block (ram,0x00c93220) */
/* WARNING: Removing unreachable block (ram,0x00c93226) */
/* WARNING: Removing unreachable block (ram,0x00c9322b) */
/* WARNING: Removing unreachable block (ram,0x00c93260) */
/* WARNING: Removing unreachable block (ram,0x00c93265) */
/* WARNING: Removing unreachable block (ram,0x00c9326d) */
/* WARNING: Removing unreachable block (ram,0x00c93272) */
/* WARNING: Removing unreachable block (ram,0x00c9324b) */
/* WARNING: Removing unreachable block (ram,0x00c93254) */

void FUN_00c930a0(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_RDI;
  undefined8 *local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d95590();
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d8dbf0();
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d97fb0();
  if (puVar1 != local_40) {
    puVar1 = local_40;
    if (local_38 != '\0') {
      FUN_00d50b20();
      local_38 = '\0';
      goto LAB_00c931bd;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c931bd:
  FUN_00d97fb0();
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d981d0();
  if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


