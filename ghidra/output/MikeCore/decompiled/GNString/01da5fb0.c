// Function: FUN_01da5fb0
// Address: 01da5fb0
// Size: 615 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01da6157) */
/* WARNING: Removing unreachable block (ram,0x01da6160) */
/* WARNING: Removing unreachable block (ram,0x01da5fed) */
/* WARNING: Removing unreachable block (ram,0x01da5ff6) */
/* WARNING: Removing unreachable block (ram,0x01da620d) */
/* WARNING: Removing unreachable block (ram,0x01da621a) */

void FUN_01da5fb0(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  int iVar2;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40;
  
  FUN_01da6400();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  FUN_01caf660();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01da4e80();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_01caf660();
  FUN_01cafe30();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != 0) {
    if (0 < *(int *)(local_70 + 0xc)) {
      iVar2 = 0;
      do {
        FUN_01caf470();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_00d23f50();
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(local_70 + 0xc));
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != local_70) {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x28) = local_70;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}


