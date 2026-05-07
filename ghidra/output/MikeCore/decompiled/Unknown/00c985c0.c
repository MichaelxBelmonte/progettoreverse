// Function: FUN_00c985c0
// Address: 00c985c0
// Size: 1621 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c98b69) */
/* WARNING: Removing unreachable block (ram,0x00c98b72) */
/* WARNING: Removing unreachable block (ram,0x00c98ac9) */
/* WARNING: Removing unreachable block (ram,0x00c98ad2) */
/* WARNING: Removing unreachable block (ram,0x00c98a29) */
/* WARNING: Removing unreachable block (ram,0x00c98a32) */
/* WARNING: Removing unreachable block (ram,0x00c98989) */
/* WARNING: Removing unreachable block (ram,0x00c98992) */
/* WARNING: Removing unreachable block (ram,0x00c988e9) */
/* WARNING: Removing unreachable block (ram,0x00c988f2) */
/* WARNING: Removing unreachable block (ram,0x00c98849) */
/* WARNING: Removing unreachable block (ram,0x00c98852) */
/* WARNING: Removing unreachable block (ram,0x00c987bf) */
/* WARNING: Removing unreachable block (ram,0x00c987c8) */
/* WARNING: Removing unreachable block (ram,0x00c98899) */
/* WARNING: Removing unreachable block (ram,0x00c988a2) */
/* WARNING: Removing unreachable block (ram,0x00c98939) */
/* WARNING: Removing unreachable block (ram,0x00c98942) */
/* WARNING: Removing unreachable block (ram,0x00c989d9) */
/* WARNING: Removing unreachable block (ram,0x00c989e2) */
/* WARNING: Removing unreachable block (ram,0x00c98a79) */
/* WARNING: Removing unreachable block (ram,0x00c98a82) */
/* WARNING: Removing unreachable block (ram,0x00c98b19) */
/* WARNING: Removing unreachable block (ram,0x00c98b22) */
/* WARNING: Removing unreachable block (ram,0x00c98bb9) */
/* WARNING: Removing unreachable block (ram,0x00c98bc2) */
/* WARNING: Removing unreachable block (ram,0x00c98683) */
/* WARNING: Removing unreachable block (ram,0x00c9868c) */
/* WARNING: Removing unreachable block (ram,0x00c98747) */
/* WARNING: Removing unreachable block (ram,0x00c98750) */

void FUN_00c985c0(void)

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
  
  lVar3 = DAT_027730d0;
  if (*unaff_RSI != 0) {
    if (DAT_027730d0 != 0) {
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
    if (local_38 != (undefined8 *)0x0) goto LAB_00c98bf9;
  }
  puVar4 = DAT_028a7260;
  if ((DAT_028a7260 == (undefined8 *)0x0) || (DAT_028a7269 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7260 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a7260 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a7260 != (undefined8 *)0x0;
        DAT_028a7260 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a7268 == '\0') {
        DAT_028a7268 = '\x01';
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
          goto LAB_00c98755;
        }
      }
      else if (local_38 != (undefined8 *)0x0) {
LAB_00c98755:
        lVar3 = DAT_027730d0;
        if (DAT_027730d0 != 0) {
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
      lVar3 = DAT_02772ef8;
      if (*(int *)((longlong)DAT_028a7260 + 0xc) == 0) {
        if (DAT_02772ef8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f00;
        if (DAT_02772f00 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f08;
        if (DAT_02772f08 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f10;
        if (DAT_02772f10 != 0) {
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
        lVar3 = DAT_02772f20;
        if (DAT_02772f20 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f28;
        if (DAT_02772f28 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f30;
        if (DAT_02772f30 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f38;
        if (DAT_02772f38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f40;
        if (DAT_02772f40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f48;
        if (DAT_02772f48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_02772f50;
        if (DAT_02772f50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      DAT_028a7269 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7269 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = DAT_028a7260;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == (undefined8 *)0x0) {
      local_38 = (undefined8 *)0x0;
      goto LAB_00c98bf9;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c98bf9:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


