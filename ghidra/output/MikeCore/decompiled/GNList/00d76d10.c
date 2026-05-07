// Function: FUN_00d76d10
// Address: 00d76d10
// Size: 831 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d76f97) */
/* WARNING: Removing unreachable block (ram,0x00d76fa0) */
/* WARNING: Removing unreachable block (ram,0x00d76e58) */
/* WARNING: Removing unreachable block (ram,0x00d76e65) */
/* WARNING: Removing unreachable block (ram,0x00d7703b) */
/* WARNING: Removing unreachable block (ram,0x00d77048) */

undefined8 * FUN_00d76d10(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar2;
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong local_40;
  char local_38;
  
  FUN_00d744f0();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d744f0();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_00c850b0();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_88 == 0) {
      *unaff_RDI = puVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d744f0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c85760();
      if ((local_80 == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 != 0) {
        if (0 < *(int *)(local_88 + 0xc)) {
          iVar2 = 0;
          do {
            FUN_00d74120();
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_a0 = '\0';
            }
            FUN_00d21140();
            if (local_a8 != 0) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *(int *)(local_88 + 0xc));
        }
        FUN_00559a70();
        FUN_00d50b20();
      }
      *unaff_RDI = puVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


