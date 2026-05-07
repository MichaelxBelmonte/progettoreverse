// Function: FUN_00cb9a00
// Address: 00cb9a00
// Size: 806 bytes
// Class: GNEditingContextReadCopySyncObserver


/* WARNING: Removing unreachable block (ram,0x00cb9c70) */
/* WARNING: Removing unreachable block (ram,0x00cb9c7c) */
/* WARNING: Removing unreachable block (ram,0x00cb9b2c) */
/* WARNING: Removing unreachable block (ram,0x00cb9b38) */
/* WARNING: Removing unreachable block (ram,0x00cb9b5a) */
/* WARNING: Removing unreachable block (ram,0x00cb9b63) */
/* WARNING: Removing unreachable block (ram,0x00cb9c9e) */
/* WARNING: Removing unreachable block (ram,0x00cb9ca7) */
/* WARNING: Removing unreachable block (ram,0x00cb9cdd) */
/* WARNING: Removing unreachable block (ram,0x00cb9cea) */
/* WARNING: Removing unreachable block (ram,0x00cb9d0f) */
/* WARNING: Removing unreachable block (ram,0x00cb9d1c) */

void FUN_00cb9a00(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x90) != 0) &&
     (lVar1 = *unaff_RSI, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      lVar1 = *(longlong *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
        FUN_00cb98a0();
        if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (local_40 == (undefined8 *)0x0) {
          local_40 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_40 = &DAT_02572358;
          (*DAT_02572370)();
          lVar1 = *(longlong *)(*unaff_RSI + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00cba070();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d21140();
        if (local_40 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_00d50b00();
      FUN_00cb9950();
      if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == (undefined8 *)0x0) {
        local_40 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &DAT_02572358;
        (*DAT_02572370)();
        lVar1 = *(longlong *)(*unaff_RSI + 0x18);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00cb9fc0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      if (local_40 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


