// Function: FUN_00c12480
// Address: 00c12480
// Size: 1618 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c127e0) */
/* WARNING: Removing unreachable block (ram,0x00c127e9) */
/* WARNING: Removing unreachable block (ram,0x00c126e2) */
/* WARNING: Removing unreachable block (ram,0x00c126eb) */
/* WARNING: Removing unreachable block (ram,0x00c12a6e) */
/* WARNING: Removing unreachable block (ram,0x00c12a77) */
/* WARNING: Removing unreachable block (ram,0x00c12a1e) */
/* WARNING: Removing unreachable block (ram,0x00c12a27) */
/* WARNING: Removing unreachable block (ram,0x00c1292e) */
/* WARNING: Removing unreachable block (ram,0x00c12937) */
/* WARNING: Removing unreachable block (ram,0x00c128de) */
/* WARNING: Removing unreachable block (ram,0x00c128e7) */
/* WARNING: Removing unreachable block (ram,0x00c1297e) */
/* WARNING: Removing unreachable block (ram,0x00c12987) */
/* WARNING: Removing unreachable block (ram,0x00c129ce) */
/* WARNING: Removing unreachable block (ram,0x00c129d7) */
/* WARNING: Removing unreachable block (ram,0x00c12790) */
/* WARNING: Removing unreachable block (ram,0x00c12799) */
/* WARNING: Removing unreachable block (ram,0x00c12830) */
/* WARNING: Removing unreachable block (ram,0x00c12839) */

void FUN_00c12480(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5d50;
  puVar3 = DAT_028a5d40;
  puVar5 = DAT_028a5d30;
  if (param_2 == 2) {
    if ((DAT_028a5d50 == (undefined8 *)0x0) || (DAT_028a5d59 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d50 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d50 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5d50 != (undefined8 *)0x0;
          DAT_028a5d50 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d58 == '\0') {
          DAT_028a5d58 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c350;
        if (DAT_0276c350 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c358;
        if (DAT_0276c358 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c360;
        if (DAT_0276c360 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d59 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d59 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5d50;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c12ab6;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c12ab8;
  }
  if (param_2 == 1) {
    if ((DAT_028a5d40 == (undefined8 *)0x0) || (DAT_028a5d49 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d40 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d40 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5d40 != (undefined8 *)0x0;
          DAT_028a5d40 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d48 == '\0') {
          DAT_028a5d48 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c320;
        if (DAT_0276c320 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c328;
        if (DAT_0276c328 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c330;
        if (DAT_0276c330 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c338;
        if (DAT_0276c338 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c340;
        if (DAT_0276c340 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c348;
        if (DAT_0276c348 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d49 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d49 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5d40;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c12ab6;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5d30 == (undefined8 *)0x0) || (DAT_028a5d39 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d30 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d30 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5d30 != (undefined8 *)0x0;
          DAT_028a5d30 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d38 == '\0') {
          DAT_028a5d38 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c318;
        if (DAT_0276c318 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d39 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d39 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5d30;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c12ab6:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c12ab8;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c12ab8:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


