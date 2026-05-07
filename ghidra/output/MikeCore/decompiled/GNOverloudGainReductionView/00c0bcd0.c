// Function: FUN_00c0bcd0
// Address: 00c0bcd0
// Size: 2739 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c0c581) */
/* WARNING: Removing unreachable block (ram,0x00c0c58a) */
/* WARNING: Removing unreachable block (ram,0x00c0c483) */
/* WARNING: Removing unreachable block (ram,0x00c0c48c) */
/* WARNING: Removing unreachable block (ram,0x00c0c393) */
/* WARNING: Removing unreachable block (ram,0x00c0c39c) */
/* WARNING: Removing unreachable block (ram,0x00c0c2f3) */
/* WARNING: Removing unreachable block (ram,0x00c0c2fc) */
/* WARNING: Removing unreachable block (ram,0x00c0c2a3) */
/* WARNING: Removing unreachable block (ram,0x00c0c2ac) */
/* WARNING: Removing unreachable block (ram,0x00c0c203) */
/* WARNING: Removing unreachable block (ram,0x00c0c20c) */
/* WARNING: Removing unreachable block (ram,0x00c0c113) */
/* WARNING: Removing unreachable block (ram,0x00c0c11c) */
/* WARNING: Removing unreachable block (ram,0x00c0c073) */
/* WARNING: Removing unreachable block (ram,0x00c0c07c) */
/* WARNING: Removing unreachable block (ram,0x00c0c023) */
/* WARNING: Removing unreachable block (ram,0x00c0c02c) */
/* WARNING: Removing unreachable block (ram,0x00c0bf83) */
/* WARNING: Removing unreachable block (ram,0x00c0bf8c) */
/* WARNING: Removing unreachable block (ram,0x00c0bf33) */
/* WARNING: Removing unreachable block (ram,0x00c0bf3c) */
/* WARNING: Removing unreachable block (ram,0x00c0bfd3) */
/* WARNING: Removing unreachable block (ram,0x00c0bfdc) */
/* WARNING: Removing unreachable block (ram,0x00c0c0c3) */
/* WARNING: Removing unreachable block (ram,0x00c0c0cc) */
/* WARNING: Removing unreachable block (ram,0x00c0c163) */
/* WARNING: Removing unreachable block (ram,0x00c0c16c) */
/* WARNING: Removing unreachable block (ram,0x00c0c1b3) */
/* WARNING: Removing unreachable block (ram,0x00c0c1bc) */
/* WARNING: Removing unreachable block (ram,0x00c0c253) */
/* WARNING: Removing unreachable block (ram,0x00c0c25c) */
/* WARNING: Removing unreachable block (ram,0x00c0c343) */
/* WARNING: Removing unreachable block (ram,0x00c0c34c) */
/* WARNING: Removing unreachable block (ram,0x00c0c3e3) */
/* WARNING: Removing unreachable block (ram,0x00c0c3ec) */
/* WARNING: Removing unreachable block (ram,0x00c0c433) */
/* WARNING: Removing unreachable block (ram,0x00c0c43c) */
/* WARNING: Removing unreachable block (ram,0x00c0c4d3) */
/* WARNING: Removing unreachable block (ram,0x00c0c4dc) */
/* WARNING: Removing unreachable block (ram,0x00c0c6cf) */
/* WARNING: Removing unreachable block (ram,0x00c0c6d8) */
/* WARNING: Removing unreachable block (ram,0x00c0c67f) */
/* WARNING: Removing unreachable block (ram,0x00c0c688) */
/* WARNING: Removing unreachable block (ram,0x00c0c71f) */
/* WARNING: Removing unreachable block (ram,0x00c0c728) */
/* WARNING: Removing unreachable block (ram,0x00c0c5d1) */
/* WARNING: Removing unreachable block (ram,0x00c0c5da) */

void FUN_00c0bcd0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5cc8;
  puVar3 = DAT_028a5cb8;
  puVar5 = DAT_028a5ca8;
  if (param_2 == 8) {
    if ((DAT_028a5cc8 == (undefined8 *)0x0) || (DAT_028a5cd1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5cc8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5cc8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5cc8 != (undefined8 *)0x0;
          DAT_028a5cc8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cd0 == '\0') {
          DAT_028a5cd0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c268;
        if (DAT_0276c268 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c270;
        if (DAT_0276c270 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5cc8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c0c767;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c0c769;
  }
  if (param_2 == 7) {
    if ((DAT_028a5cb8 == (undefined8 *)0x0) || (DAT_028a5cc1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5cb8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5cb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5cb8 != (undefined8 *)0x0;
          DAT_028a5cb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cc0 == '\0') {
          DAT_028a5cc0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c250;
        if (DAT_0276c250 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c258;
        if (DAT_0276c258 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c260;
        if (DAT_0276c260 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5cb8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c0c767;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 2) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5ca8 == (undefined8 *)0x0) || (DAT_028a5cb1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5ca8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5ca8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5ca8 != (undefined8 *)0x0;
          DAT_028a5ca8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5cb0 == '\0') {
          DAT_028a5cb0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c118;
        if (DAT_0276c118 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c120;
        if (DAT_0276c120 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c128;
        if (DAT_0276c128 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c130;
        if (DAT_0276c130 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c078;
        if (DAT_0276c078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c068;
        if (DAT_0276c068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d38;
        if (DAT_026d7d38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c048;
        if (DAT_0276c048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c038;
        if (DAT_0276c038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d40;
        if (DAT_026d7d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c018;
        if (DAT_0276c018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c008;
        if (DAT_0276c008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5cb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5ca8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c0c767:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c0c769;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c0c769:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


