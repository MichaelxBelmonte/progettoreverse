// Function: FUN_00d78060
// Address: 00d78060
// Size: 1643 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d78573) */
/* WARNING: Removing unreachable block (ram,0x00d7857c) */
/* WARNING: Removing unreachable block (ram,0x00d78365) */
/* WARNING: Removing unreachable block (ram,0x00d7836e) */
/* WARNING: Removing unreachable block (ram,0x00d782bf) */
/* WARNING: Removing unreachable block (ram,0x00d782c8) */
/* WARNING: Removing unreachable block (ram,0x00d7817d) */
/* WARNING: Removing unreachable block (ram,0x00d78186) */
/* WARNING: Removing unreachable block (ram,0x00d786a7) */
/* WARNING: Removing unreachable block (ram,0x00d786b0) */
/* WARNING: Removing unreachable block (ram,0x00d7830b) */
/* WARNING: Removing unreachable block (ram,0x00d78314) */
/* WARNING: Removing unreachable block (ram,0x00d78421) */
/* WARNING: Removing unreachable block (ram,0x00d7842a) */
/* WARNING: Removing unreachable block (ram,0x00d784b2) */
/* WARNING: Removing unreachable block (ram,0x00d784bb) */
/* WARNING: Removing unreachable block (ram,0x00d785cc) */
/* WARNING: Removing unreachable block (ram,0x00d785d5) */
/* WARNING: Removing unreachable block (ram,0x00d78645) */
/* WARNING: Removing unreachable block (ram,0x00d7864e) */
/* WARNING: Removing unreachable block (ram,0x00d780a8) */
/* WARNING: Removing unreachable block (ram,0x00d780b1) */
/* WARNING: Removing unreachable block (ram,0x00d783d5) */
/* WARNING: Removing unreachable block (ram,0x00d783de) */

longlong * FUN_00d78060(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  lVar4 = local_40;
  FUN_00d747b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  if ((*(longlong *)(unaff_RSI + 0x58) == 0) || (iVar6 = FUN_00d8c7a0(), iVar6 == 0)) {
    local_40 = DAT_0277e9b0;
    if (DAT_0277e9b0 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    FUN_00d21140();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
LAB_00d78198:
    bVar3 = false;
LAB_00d7819e:
    local_48 = 0;
  }
  else {
    if (*(longlong *)(unaff_RSI + 0x28) == 0) goto LAB_00d78198;
    lVar1 = *(longlong *)(unaff_RSI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c85000();
    local_48 = local_40;
    if (local_40 == 0) {
      local_48 = 0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0277e9b8;
    if (local_48 == 0) {
      if (DAT_0277e9b8 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00d7819e;
    }
  }
  if (((*(longlong *)(unaff_RSI + 0x50) != 0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) &&
     (local_48 != 0)) {
    lVar1 = *(longlong *)(unaff_RSI + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00c841b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0277e9c0;
    if (local_40 == 0) {
      if (DAT_0277e9c0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar1;
      local_38 = '\0';
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(longlong *)(unaff_RSI + 0x50);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00c84370();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0277e9c8;
      if (local_40 == 0) {
        if (DAT_0277e9c8 != 0) {
          FUN_00d50b00();
        }
        local_40 = lVar1;
        local_38 = '\0';
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  lVar1 = DAT_0277e9d0;
  if ((*(char *)(unaff_RSI + 0x68) != '\0') && (*(char *)(unaff_RSI + 0x69) == '\0')) {
    if (DAT_0277e9d0 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_48 == 0) {
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  FUN_00d77be0();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00d785ef;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00d785ef;
  lVar1 = DAT_0277e9d8;
  if ((*(char *)(unaff_RSI + 0x68) != '\0') && (*(char *)(local_40 + 0x68) != '\0')) {
    if (DAT_0277e9d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(local_40 + 0x50) == 0) {
LAB_00d78483:
    lVar1 = DAT_0277e9e0;
    if (DAT_0277e9e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    lVar1 = *(longlong *)(local_40 + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00d8c7a0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar6 == 0) goto LAB_00d78483;
  }
  if (*(longlong *)(local_40 + 0x50) == 0) {
LAB_00d78544:
    lVar1 = DAT_0277e9e8;
    if (DAT_0277e9e8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    plVar2 = *(longlong **)(local_40 + 0x50);
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
    if (cVar5 == '\0') goto LAB_00d78544;
  }
  lVar1 = DAT_0277e9f0;
  if ((*(char *)(unaff_RSI + 0x68) != '\0') && (*(char *)(local_40 + 0x69) != '\0')) {
    if (DAT_0277e9f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_00d785ef:
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (bVar3) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


