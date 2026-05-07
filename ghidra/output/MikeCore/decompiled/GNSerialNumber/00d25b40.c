// Function: FUN_00d25b40
// Address: 00d25b40
// Size: 606 bytes
// Class: GNSerialNumber
// String references:
//   "%01X"
//   "%06X"
//   "%03X"
//   "%09llX"


/* WARNING: Removing unreachable block (ram,0x00d25d64) */
/* WARNING: Removing unreachable block (ram,0x00d25d6d) */

void FUN_00d25b40(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_025795a8;
  (*DAT_025795c0)();
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_025732e0;
  local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(unaff_RSI + 0xc));
  FUN_00d94d80(&DAT_025732e0,&local_38);
  local_2c = *(undefined4 *)(unaff_RSI + 0x10);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572a48;
  FUN_00d94d80(&DAT_02572a48,&local_38);
  local_2c = *(undefined4 *)(unaff_RSI + 0x14);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572a80;
  FUN_00d94d80(&DAT_02572a80,&local_38);
  local_28 = *(undefined8 *)(unaff_RSI + 0x18);
  local_30 = 1;
  local_38 = (undefined8 *)&DAT_02572ab8;
  FUN_00d94d80(&DAT_02572ab8,&local_38);
  FUN_00d287a0();
  if (puVar1 == local_38) {
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar1 = local_38;
    if ((char)local_30 == '\0') {
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b20();
    }
  }
  FUN_00d28e50();
  puVar2 = local_38;
  if (local_38 == puVar1) {
    puVar2 = puVar1;
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  else if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d292b0();
  puVar1 = local_38;
  if (local_38 == puVar2) {
    if (((char)local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((char)local_30 == '\0') {
    if (local_38 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    bVar3 = puVar2 != (undefined8 *)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else {
    bVar3 = puVar2 != (undefined8 *)0x0;
    puVar2 = puVar1;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


