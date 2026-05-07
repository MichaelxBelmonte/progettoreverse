// Function: FUN_00c979f0
// Address: 00c979f0
// Size: 1621 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c97f99) */
/* WARNING: Removing unreachable block (ram,0x00c97fa2) */
/* WARNING: Removing unreachable block (ram,0x00c97ef9) */
/* WARNING: Removing unreachable block (ram,0x00c97f02) */
/* WARNING: Removing unreachable block (ram,0x00c97e59) */
/* WARNING: Removing unreachable block (ram,0x00c97e62) */
/* WARNING: Removing unreachable block (ram,0x00c97db9) */
/* WARNING: Removing unreachable block (ram,0x00c97dc2) */
/* WARNING: Removing unreachable block (ram,0x00c97d19) */
/* WARNING: Removing unreachable block (ram,0x00c97d22) */
/* WARNING: Removing unreachable block (ram,0x00c97c79) */
/* WARNING: Removing unreachable block (ram,0x00c97c82) */
/* WARNING: Removing unreachable block (ram,0x00c97bef) */
/* WARNING: Removing unreachable block (ram,0x00c97bf8) */
/* WARNING: Removing unreachable block (ram,0x00c97cc9) */
/* WARNING: Removing unreachable block (ram,0x00c97cd2) */
/* WARNING: Removing unreachable block (ram,0x00c97d69) */
/* WARNING: Removing unreachable block (ram,0x00c97d72) */
/* WARNING: Removing unreachable block (ram,0x00c97e09) */
/* WARNING: Removing unreachable block (ram,0x00c97e12) */
/* WARNING: Removing unreachable block (ram,0x00c97ea9) */
/* WARNING: Removing unreachable block (ram,0x00c97eb2) */
/* WARNING: Removing unreachable block (ram,0x00c97f49) */
/* WARNING: Removing unreachable block (ram,0x00c97f52) */
/* WARNING: Removing unreachable block (ram,0x00c97fe9) */
/* WARNING: Removing unreachable block (ram,0x00c97ff2) */
/* WARNING: Removing unreachable block (ram,0x00c97ab3) */
/* WARNING: Removing unreachable block (ram,0x00c97abc) */
/* WARNING: Removing unreachable block (ram,0x00c97b77) */
/* WARNING: Removing unreachable block (ram,0x00c97b80) */

void FUN_00c979f0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  char local_30;
  
  lVar3 = DAT_02773070;
  if (*unaff_RSI != 0) {
    if (DAT_02773070 != 0) {
      FUN_00d50b00();
    }
    FUN_00d31060();
    if (local_30 == '\0') {
      if (local_38 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (undefined8 *)0x0) goto LAB_00c98029;
  }
  puVar4 = DAT_028a7250;
  if ((DAT_028a7250 == (undefined8 *)0x0) || (DAT_028a7259 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7250 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a7250 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a7250 != (undefined8 *)0x0;
        DAT_028a7250 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7258 == '\0') {
        DAT_028a7258 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d30620();
      if (local_30 == '\0') {
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d50b00();
          goto LAB_00c97b85;
        }
      }
      else if (local_38 != (undefined8 *)0x0) {
LAB_00c97b85:
        lVar3 = DAT_02773070;
        if (DAT_02773070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d31060();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00d243f0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar3 = DAT_02773078;
      if (*(int *)((longlong)DAT_028a7250 + 0xc) == 0) {
        if (DAT_02773078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773080;
        if (DAT_02773080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773088;
        if (DAT_02773088 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773090;
        if (DAT_02773090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f18;
        if (DAT_02772f18 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773098;
        if (DAT_02773098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730a0;
        if (DAT_027730a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730a8;
        if (DAT_027730a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730b0;
        if (DAT_027730b0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730b8;
        if (DAT_027730b8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730c0;
        if (DAT_027730c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027730c8;
        if (DAT_027730c8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      DAT_028a7259 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7259 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = DAT_028a7250;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)0x0;
      goto LAB_00c98029;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c98029:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


