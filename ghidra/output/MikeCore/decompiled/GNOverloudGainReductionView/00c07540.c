// Function: FUN_00c07540
// Address: 00c07540
// Size: 2062 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c07c9e) */
/* WARNING: Removing unreachable block (ram,0x00c07ca7) */
/* WARNING: Removing unreachable block (ram,0x00c07bfe) */
/* WARNING: Removing unreachable block (ram,0x00c07c07) */
/* WARNING: Removing unreachable block (ram,0x00c07b5e) */
/* WARNING: Removing unreachable block (ram,0x00c07b67) */
/* WARNING: Removing unreachable block (ram,0x00c07abe) */
/* WARNING: Removing unreachable block (ram,0x00c07ac7) */
/* WARNING: Removing unreachable block (ram,0x00c07a1e) */
/* WARNING: Removing unreachable block (ram,0x00c07a27) */
/* WARNING: Removing unreachable block (ram,0x00c0797e) */
/* WARNING: Removing unreachable block (ram,0x00c07987) */
/* WARNING: Removing unreachable block (ram,0x00c078de) */
/* WARNING: Removing unreachable block (ram,0x00c078e7) */
/* WARNING: Removing unreachable block (ram,0x00c0783e) */
/* WARNING: Removing unreachable block (ram,0x00c07847) */
/* WARNING: Removing unreachable block (ram,0x00c07740) */
/* WARNING: Removing unreachable block (ram,0x00c07749) */
/* WARNING: Removing unreachable block (ram,0x00c076f0) */
/* WARNING: Removing unreachable block (ram,0x00c076f9) */
/* WARNING: Removing unreachable block (ram,0x00c07790) */
/* WARNING: Removing unreachable block (ram,0x00c07799) */
/* WARNING: Removing unreachable block (ram,0x00c0788e) */
/* WARNING: Removing unreachable block (ram,0x00c07897) */
/* WARNING: Removing unreachable block (ram,0x00c0792e) */
/* WARNING: Removing unreachable block (ram,0x00c07937) */
/* WARNING: Removing unreachable block (ram,0x00c079ce) */
/* WARNING: Removing unreachable block (ram,0x00c079d7) */
/* WARNING: Removing unreachable block (ram,0x00c07a6e) */
/* WARNING: Removing unreachable block (ram,0x00c07a77) */
/* WARNING: Removing unreachable block (ram,0x00c07b0e) */
/* WARNING: Removing unreachable block (ram,0x00c07b17) */
/* WARNING: Removing unreachable block (ram,0x00c07bae) */
/* WARNING: Removing unreachable block (ram,0x00c07bb7) */
/* WARNING: Removing unreachable block (ram,0x00c07c4e) */
/* WARNING: Removing unreachable block (ram,0x00c07c57) */
/* WARNING: Removing unreachable block (ram,0x00c07cee) */
/* WARNING: Removing unreachable block (ram,0x00c07cf7) */

void FUN_00c07540(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5c38;
  puVar4 = DAT_028a5c28;
  if (param_2 == 2) {
    if ((DAT_028a5c38 == (undefined8 *)0x0) || (DAT_028a5c41 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c38 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c38 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c38 != (undefined8 *)0x0;
          DAT_028a5c38 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c40 == '\0') {
          DAT_028a5c40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
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
        DAT_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c41 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c38;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c07d34;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5c28 == (undefined8 *)0x0) || (DAT_028a5c31 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c28 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c28 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c28 != (undefined8 *)0x0;
          DAT_028a5c28 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c30 == '\0') {
          DAT_028a5c30 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c188;
        if (DAT_0276c188 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c190;
        if (DAT_0276c190 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c198;
        if (DAT_0276c198 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c31 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c28;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c07d34:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c07d36;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c07d36:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


