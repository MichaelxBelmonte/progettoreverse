// Function: FUN_00e85330
// Address: 00e85330
// Size: 753 bytes
// Class: GNFastFourierTransformer


/* WARNING: Removing unreachable block (ram,0x00e855e9) */
/* WARNING: Removing unreachable block (ram,0x00e855f2) */
/* WARNING: Removing unreachable block (ram,0x00e854a9) */
/* WARNING: Removing unreachable block (ram,0x00e854b6) */
/* WARNING: Removing unreachable block (ram,0x00e85551) */
/* WARNING: Removing unreachable block (ram,0x00e8555a) */
/* WARNING: Removing unreachable block (ram,0x00e85599) */
/* WARNING: Removing unreachable block (ram,0x00e855a2) */

undefined8 * FUN_00e85330(void)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &DAT_02566f40;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  (*DAT_02566f58)();
  FUN_00d7e190();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_00d73b40();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(unaff_RDI + 0x10);
  if (*(char *)(unaff_RDI + 0x19) == 'e') {
    FUN_00d7e190();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00c7a7e0();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (*(char *)(unaff_RDI + 0x19) == '@') {
    FUN_00d7e190();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00c7ace0();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else if (local_30 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
    }
    else {
      bVar1 = true;
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c7a080();
    if (local_38 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_30 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  FUN_00c77c80();
  puVar2[0xc] = unaff_RDI;
  *(undefined8 **)(unaff_RDI + 0x30) = puVar2;
  if ((bVar1) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return puVar2;
}


