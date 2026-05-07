// Function: FUN_00e4ad10
// Address: 00e4ad10
// Size: 1396 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00e4b237) */
/* WARNING: Removing unreachable block (ram,0x00e4b240) */
/* WARNING: Removing unreachable block (ram,0x00e4b1df) */
/* WARNING: Removing unreachable block (ram,0x00e4b1e8) */
/* WARNING: Removing unreachable block (ram,0x00e4ae0f) */
/* WARNING: Removing unreachable block (ram,0x00e4ae18) */
/* WARNING: Removing unreachable block (ram,0x00e4b171) */
/* WARNING: Removing unreachable block (ram,0x00e4b17a) */
/* WARNING: Removing unreachable block (ram,0x00e4b13f) */
/* WARNING: Removing unreachable block (ram,0x00e4b148) */
/* WARNING: Removing unreachable block (ram,0x00e4af4b) */
/* WARNING: Removing unreachable block (ram,0x00e4af58) */
/* WARNING: Removing unreachable block (ram,0x00e4afc2) */
/* WARNING: Removing unreachable block (ram,0x00e4afcb) */
/* WARNING: Removing unreachable block (ram,0x00e4b20b) */
/* WARNING: Removing unreachable block (ram,0x00e4b214) */
/* WARNING: Removing unreachable block (ram,0x00e4b269) */
/* WARNING: Removing unreachable block (ram,0x00e4b272) */
/* WARNING: Removing unreachable block (ram,0x00e4ae3e) */
/* WARNING: Removing unreachable block (ram,0x00e4ae47) */
/* WARNING: Removing unreachable block (ram,0x00e4aedc) */
/* WARNING: Removing unreachable block (ram,0x00e4af00) */
/* WARNING: Removing unreachable block (ram,0x00e4ad9c) */
/* WARNING: Removing unreachable block (ram,0x00e4adc0) */
/* WARNING: Removing unreachable block (ram,0x00e4ad9e) */
/* WARNING: Removing unreachable block (ram,0x00e4adc4) */
/* WARNING: Removing unreachable block (ram,0x00e4ae71) */
/* WARNING: Removing unreachable block (ram,0x00e4ae7e) */
/* WARNING: Removing unreachable block (ram,0x00e4aede) */
/* WARNING: Removing unreachable block (ram,0x00e4af04) */

void FUN_00e4ad10(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_48;
  char local_40;
  
  cVar3 = FUN_00d24b50();
  lVar1 = *unaff_RSI;
  if (*(char *)(unaff_RDI + 0x2c) == '\0') {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00e48e90();
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    FUN_00daab70();
    lVar1 = *unaff_RSI;
    lVar2 = unaff_RSI[1];
    if (((char)lVar2 == '\0') || (lVar1 == 0)) {
      if (lVar1 == 0) {
        return;
      }
    }
    else {
      FUN_00d50b00();
    }
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      if (cVar3 == '\0') {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8) == 0) {
            FUN_00daab70();
          }
          else {
            FUN_00e3a1c0();
            FUN_00e3a2a0();
            FUN_00daab70();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
      else {
        do {
          if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8) == 0) {
            FUN_00daab70();
          }
          else {
            FUN_00e3a1c0();
            FUN_00e3a1c0();
            FUN_00e38fb0();
            FUN_00e3a2a0();
            FUN_00daab70();
          }
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
      }
    }
    FUN_00083b20();
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    lVar2 = unaff_RSI[1];
    if ((char)lVar2 != '\0') {
      FUN_00d50b00();
    }
    local_58 = -1;
    if (cVar3 == '\0') {
      while( true ) {
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_58) break;
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        if (lVar4 != 0) {
          local_40 = '\0';
          FUN_00e3a1c0();
          local_48 = lVar4;
        }
      }
    }
    else {
      while( true ) {
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_58) break;
        lVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        if (lVar4 != 0) {
          FUN_00e3a1c0();
          FUN_00e3a1c0();
          local_40 = '\0';
          FUN_00e38fb0();
          local_48 = lVar4;
        }
      }
    }
    FUN_00083b20();
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    FUN_00e3a1c0();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((char)lVar2 != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}


