// Function: FUN_00c97150
// Address: 00c97150
// Size: 1221 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c97569) */
/* WARNING: Removing unreachable block (ram,0x00c97572) */
/* WARNING: Removing unreachable block (ram,0x00c974c9) */
/* WARNING: Removing unreachable block (ram,0x00c974d2) */
/* WARNING: Removing unreachable block (ram,0x00c97429) */
/* WARNING: Removing unreachable block (ram,0x00c97432) */
/* WARNING: Removing unreachable block (ram,0x00c9734f) */
/* WARNING: Removing unreachable block (ram,0x00c97358) */
/* WARNING: Removing unreachable block (ram,0x00c973d9) */
/* WARNING: Removing unreachable block (ram,0x00c973e2) */
/* WARNING: Removing unreachable block (ram,0x00c97479) */
/* WARNING: Removing unreachable block (ram,0x00c97482) */
/* WARNING: Removing unreachable block (ram,0x00c97519) */
/* WARNING: Removing unreachable block (ram,0x00c97522) */
/* WARNING: Removing unreachable block (ram,0x00c975b9) */
/* WARNING: Removing unreachable block (ram,0x00c975c2) */
/* WARNING: Removing unreachable block (ram,0x00c97213) */
/* WARNING: Removing unreachable block (ram,0x00c9721c) */
/* WARNING: Removing unreachable block (ram,0x00c972d7) */
/* WARNING: Removing unreachable block (ram,0x00c972e0) */

void FUN_00c97150(void)

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
  
  lVar3 = DAT_02773030;
  if (*unaff_RSI != 0) {
    if (DAT_02773030 != 0) {
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
    if (local_38 != (undefined8 *)0x0) goto LAB_00c975f9;
  }
  puVar4 = DAT_028a7240;
  if ((DAT_028a7240 == (undefined8 *)0x0) || (DAT_028a7249 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7240 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a7240 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a7240 != (undefined8 *)0x0;
        DAT_028a7240 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7248 == '\0') {
        DAT_028a7248 = '\x01';
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
          goto LAB_00c972e5;
        }
      }
      else if (local_38 != (undefined8 *)0x0) {
LAB_00c972e5:
        lVar3 = DAT_02773030;
        if (DAT_02773030 != 0) {
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
      lVar3 = DAT_02773038;
      if (*(int *)((longlong)DAT_028a7240 + 0xc) == 0) {
        if (DAT_02773038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773040;
        if (DAT_02773040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773048;
        if (DAT_02773048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773050;
        if (DAT_02773050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773058;
        if (DAT_02773058 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773060;
        if (DAT_02773060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02773068;
        if (DAT_02773068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      DAT_028a7249 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7249 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = DAT_028a7240;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)0x0;
      goto LAB_00c975f9;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c975f9:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


