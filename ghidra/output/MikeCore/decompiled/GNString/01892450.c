// Function: FUN_01892450
// Address: 01892450
// Size: 760 bytes
// Class: GNString
// String references:
//   "%@: "
//   "%@"
//   " (%@)"


/* WARNING: Removing unreachable block (ram,0x01892565) */
/* WARNING: Removing unreachable block (ram,0x01892592) */
/* WARNING: Removing unreachable block (ram,0x01892597) */
/* WARNING: Removing unreachable block (ram,0x01892720) */
/* WARNING: Removing unreachable block (ram,0x01892729) */

void FUN_01892450(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_80;
  char local_78;
  undefined8 *local_50;
  char local_48;
  
  puVar2 = local_50;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar5 = 0x25795a8;
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  if (*(longlong *)(unaff_RSI + 0x78) == 0) {
    FUN_01893ad0();
    if (local_48 == '\0') {
      if (local_50 == (undefined8 *)0x0) goto LAB_01892695;
      FUN_00d50b00();
    }
    else if (local_50 == (undefined8 *)0x0) goto LAB_01892695;
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00d94d80();
    local_50 = &DAT_024c5048;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01910920();
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    FUN_00d94d80();
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_01893ad0();
    FUN_00d50b00();
    FUN_00d94d80();
    FUN_00d50b20();
    FUN_00d50b20();
    lVar1 = DAT_027d3890;
    local_48 = '\x01';
    local_50 = &DAT_024c5048;
    if (DAT_027d3890 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
LAB_01892695:
  FUN_01892140();
  if ((local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_01892140();
    if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


