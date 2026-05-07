// Function: FUN_005224d0
// Address: 005224d0
// Size: 654 bytes
// Class: MDPluginDocument


/* WARNING: Removing unreachable block (ram,0x0052260b) */
/* WARNING: Removing unreachable block (ram,0x00522618) */
/* WARNING: Removing unreachable block (ram,0x0052274b) */
/* WARNING: Removing unreachable block (ram,0x00522758) */

void FUN_005224d0(void)

{
  bool bVar1;
  longlong lVar2;
  bool bVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0x2e6) == '\0') {
    return;
  }
  bVar1 = false;
  lVar4 = 0;
  do {
    FUN_00524510();
    if (local_40 == lVar4) {
      if ((bVar1) || (local_40 == 0)) {
joined_r0x005225b6:
        lVar2 = lVar4;
        bVar3 = bVar1;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_005225d0;
        }
        lVar2 = lVar4;
        bVar3 = true;
      }
    }
    else {
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
          lVar4 = local_40;
LAB_005225d0:
          bVar1 = true;
          goto joined_r0x005225b6;
        }
      }
      else {
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
      }
    }
    bVar1 = bVar3;
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    local_38 = '\0';
    FUN_00d21140();
    local_40 = lVar4;
  } while( true );
  lVar4 = 0;
  do {
    FUN_00524510();
    if (local_40 == lVar4) {
      if ((bVar1) || (local_40 == 0)) {
joined_r0x005226f6:
        lVar2 = lVar4;
        bVar3 = bVar1;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_00522710;
        }
        lVar2 = lVar4;
        bVar3 = true;
      }
    }
    else {
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
          lVar4 = local_40;
LAB_00522710:
          bVar1 = true;
          goto joined_r0x005226f6;
        }
      }
      else {
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
      }
    }
    bVar1 = bVar3;
    lVar4 = lVar2;
    if (lVar4 == 0) {
      *(undefined1 *)(unaff_RDI + 0x2e6) = 0;
      return;
    }
    local_38 = '\0';
    FUN_00d23f50();
    local_40 = lVar4;
  } while( true );
}


