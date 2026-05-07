// Function: FUN_0029d7d0
// Address: 0029d7d0
// Size: 502 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0029d93a) */
/* WARNING: Removing unreachable block (ram,0x0029d943) */
/* WARNING: Removing unreachable block (ram,0x0029d9c2) */
/* WARNING: Removing unreachable block (ram,0x0029d9cf) */

undefined8 * FUN_0029d7d0(void)

{
  undefined8 *puVar1;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar2;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x720))();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    (**(code **)(*unaff_RSI + 0x720))();
    (**(code **)(*local_40 + 0x5e8))();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar2 = 0;
        do {
          FUN_00643590();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d214d0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(local_78 + 0xc));
      }
      FUN_00097d00();
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


