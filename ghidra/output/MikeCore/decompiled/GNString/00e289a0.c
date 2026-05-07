// Function: FUN_00e289a0
// Address: 00e289a0
// Size: 512 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e28a55) */
/* WARNING: Removing unreachable block (ram,0x00e28a5a) */
/* WARNING: Removing unreachable block (ram,0x00e28a0c) */
/* WARNING: Removing unreachable block (ram,0x00e28a15) */
/* WARNING: Removing unreachable block (ram,0x00e28a76) */
/* WARNING: Removing unreachable block (ram,0x00e28a7f) */
/* WARNING: Removing unreachable block (ram,0x00e28b27) */
/* WARNING: Removing unreachable block (ram,0x00e28b30) */

longlong * FUN_00e289a0(void)

{
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar1;
  longlong local_78;
  char local_70;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RSI[0xc] + 0xc) == 0) {
    (**(code **)(*unaff_RSI + 0x428))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d243f0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x3b8))();
    if (local_40 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar1 = 0;
        do {
          (**(code **)(**(longlong **)(*(longlong *)(local_40 + 0x10) + lVar1 * 8) + 0x428))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_00d23480();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar1 = lVar1 + 1;
        } while ((int)lVar1 < *(int *)(local_40 + 0xc));
      }
      FUN_00e2c6a0();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = unaff_RSI[0xc];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


