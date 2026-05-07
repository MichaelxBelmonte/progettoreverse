// Function: FUN_01e4c160
// Address: 01e4c160
// Size: 511 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e4c2c1) */
/* WARNING: Removing unreachable block (ram,0x01e4c2ca) */
/* WARNING: Removing unreachable block (ram,0x01e4c279) */
/* WARNING: Removing unreachable block (ram,0x01e4c282) */
/* WARNING: Removing unreachable block (ram,0x01e4c32a) */
/* WARNING: Removing unreachable block (ram,0x01e4c333) */
/* WARNING: Removing unreachable block (ram,0x01e4c251) */
/* WARNING: Removing unreachable block (ram,0x01e4c25a) */

void FUN_01e4c160(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x88) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = DAT_027f3cc0;
  if (DAT_027f3cc0 != 0) {
    FUN_00d50b00();
  }
  FUN_01e49470();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_01eb6f30();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01e4c28f;
      FUN_00d50b00();
    }
    else if (local_40 == 0) goto LAB_01e4c28f;
    FUN_00d21140();
    FUN_00d50b20();
  }
LAB_01e4c28f:
  lVar1 = *(longlong *)(unaff_RSI + 0x88);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00d21140();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02774da0;
  if (DAT_02774da0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


