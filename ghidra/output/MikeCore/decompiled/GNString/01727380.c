// Function: FUN_01727380
// Address: 01727380
// Size: 2012 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01727ac7) */
/* WARNING: Removing unreachable block (ram,0x01727ad0) */
/* WARNING: Removing unreachable block (ram,0x017278d6) */
/* WARNING: Removing unreachable block (ram,0x017278df) */
/* WARNING: Removing unreachable block (ram,0x0172773e) */
/* WARNING: Removing unreachable block (ram,0x01727747) */
/* WARNING: Removing unreachable block (ram,0x017276a2) */
/* WARNING: Removing unreachable block (ram,0x017276ab) */
/* WARNING: Removing unreachable block (ram,0x01727546) */
/* WARNING: Removing unreachable block (ram,0x0172754f) */
/* WARNING: Removing unreachable block (ram,0x01727654) */
/* WARNING: Removing unreachable block (ram,0x0172765d) */
/* WARNING: Removing unreachable block (ram,0x017276f0) */
/* WARNING: Removing unreachable block (ram,0x017276f9) */
/* WARNING: Removing unreachable block (ram,0x0172776c) */
/* WARNING: Removing unreachable block (ram,0x01727771) */
/* WARNING: Removing unreachable block (ram,0x017279c4) */
/* WARNING: Removing unreachable block (ram,0x017279c9) */
/* WARNING: Removing unreachable block (ram,0x01727b4b) */
/* WARNING: Removing unreachable block (ram,0x01727b54) */
/* WARNING: Removing unreachable block (ram,0x01727956) */
/* WARNING: Removing unreachable block (ram,0x0172795f) */
/* WARNING: Removing unreachable block (ram,0x017275c6) */
/* WARNING: Removing unreachable block (ram,0x017275cf) */
/* WARNING: Removing unreachable block (ram,0x01727791) */
/* WARNING: Removing unreachable block (ram,0x0172779e) */
/* WARNING: Removing unreachable block (ram,0x017274e3) */
/* WARNING: Removing unreachable block (ram,0x017274ec) */
/* WARNING: Removing unreachable block (ram,0x01727873) */
/* WARNING: Removing unreachable block (ram,0x0172787c) */
/* WARNING: Removing unreachable block (ram,0x01727a69) */
/* WARNING: Removing unreachable block (ram,0x01727a72) */
/* WARNING: Removing unreachable block (ram,0x017277f7) */
/* WARNING: Removing unreachable block (ram,0x01727820) */
/* WARNING: Removing unreachable block (ram,0x01727467) */
/* WARNING: Removing unreachable block (ram,0x01727490) */
/* WARNING: Removing unreachable block (ram,0x01727469) */
/* WARNING: Removing unreachable block (ram,0x01727492) */
/* WARNING: Removing unreachable block (ram,0x017277f9) */
/* WARNING: Removing unreachable block (ram,0x01727822) */

longlong * FUN_01727380(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_78;
  char local_70;
  int local_60;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x48) == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RSI + 0x48);
    *(undefined8 **)(unaff_RSI + 0x48) = puVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0171aac0();
    FUN_01780120();
    if ((local_70 == '\0') && (local_78 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      local_60 = -1;
      while (lVar1 = local_40, local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
        FUN_00d97ce0(*(undefined8 *)(local_78 + 0x10),1);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d99d60();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    lVar1 = DAT_02781630;
    if (DAT_02781630 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027cc920;
    if (DAT_027cc920 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027ce7e8;
    if (DAT_027ce7e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027cc930;
    if (DAT_027cc930 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    FUN_00d235a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_0171e8d0();
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_78 = 0;
      local_60 = -1;
      while( true ) {
        lVar2 = local_40;
        lVar4 = (longlong)local_60;
        local_60 = local_60 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_60) break;
        local_78 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00d97ce0(*(longlong *)(lVar1 + 0x10),1);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d99d60();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d99300();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = local_50;
        local_38 = '\0';
        FUN_00d235a0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00018280();
      FUN_00d50b20();
    }
    FUN_0171ebf0();
    if (local_78 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(local_78 + 0xc)) {
        iVar5 = 0;
        do {
          lVar1 = local_40;
          FUN_00d97ce0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          FUN_00d99d60();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d235a0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d99300();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00d235a0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(local_78 + 0xc));
      }
      FUN_00018280();
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *(longlong *)(unaff_RSI + 0x48);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


