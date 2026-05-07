// Function: FUN_00c968b0
// Address: 00c968b0
// Size: 1221 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c96cc9) */
/* WARNING: Removing unreachable block (ram,0x00c96cd2) */
/* WARNING: Removing unreachable block (ram,0x00c96c29) */
/* WARNING: Removing unreachable block (ram,0x00c96c32) */
/* WARNING: Removing unreachable block (ram,0x00c96b89) */
/* WARNING: Removing unreachable block (ram,0x00c96b92) */
/* WARNING: Removing unreachable block (ram,0x00c96aaf) */
/* WARNING: Removing unreachable block (ram,0x00c96ab8) */
/* WARNING: Removing unreachable block (ram,0x00c96b39) */
/* WARNING: Removing unreachable block (ram,0x00c96b42) */
/* WARNING: Removing unreachable block (ram,0x00c96bd9) */
/* WARNING: Removing unreachable block (ram,0x00c96be2) */
/* WARNING: Removing unreachable block (ram,0x00c96c79) */
/* WARNING: Removing unreachable block (ram,0x00c96c82) */
/* WARNING: Removing unreachable block (ram,0x00c96d19) */
/* WARNING: Removing unreachable block (ram,0x00c96d22) */
/* WARNING: Removing unreachable block (ram,0x00c96973) */
/* WARNING: Removing unreachable block (ram,0x00c9697c) */
/* WARNING: Removing unreachable block (ram,0x00c96a37) */
/* WARNING: Removing unreachable block (ram,0x00c96a40) */

void FUN_00c968b0(void)

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
  
  lVar3 = DAT_02772ff0;
  if (*unaff_RSI != 0) {
    if (DAT_02772ff0 != 0) {
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
    if (local_38 != (undefined8 *)0x0) goto LAB_00c96d59;
  }
  puVar4 = DAT_028a7230;
  if ((DAT_028a7230 == (undefined8 *)0x0) || (DAT_028a7239 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7230 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a7230 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a7230 != (undefined8 *)0x0;
        DAT_028a7230 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7238 == '\0') {
        DAT_028a7238 = '\x01';
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
          goto LAB_00c96a45;
        }
      }
      else if (local_38 != (undefined8 *)0x0) {
LAB_00c96a45:
        lVar3 = DAT_02772ff0;
        if (DAT_02772ff0 != 0) {
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
      lVar3 = DAT_02772ff8;
      if (*(int *)((longlong)DAT_028a7230 + 0xc) == 0) {
        if (DAT_02772ff8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773000;
        if (DAT_02773000 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773008;
        if (DAT_02773008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773010;
        if (DAT_02773010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773018;
        if (DAT_02773018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773020;
        if (DAT_02773020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773028;
        if (DAT_02773028 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      DAT_028a7239 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7239 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = DAT_028a7230;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)0x0;
      goto LAB_00c96d59;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c96d59:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


