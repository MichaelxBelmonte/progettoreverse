// Function: FUN_00c14e80
// Address: 00c14e80
// Size: 3294 bytes
// Class: GNOverloudCompressor


/* WARNING: Removing unreachable block (ram,0x00c15690) */
/* WARNING: Removing unreachable block (ram,0x00c15699) */
/* WARNING: Removing unreachable block (ram,0x00c15aae) */
/* WARNING: Removing unreachable block (ram,0x00c15ab7) */
/* WARNING: Removing unreachable block (ram,0x00c15a0e) */
/* WARNING: Removing unreachable block (ram,0x00c15a17) */
/* WARNING: Removing unreachable block (ram,0x00c1596e) */
/* WARNING: Removing unreachable block (ram,0x00c15977) */
/* WARNING: Removing unreachable block (ram,0x00c158ce) */
/* WARNING: Removing unreachable block (ram,0x00c158d7) */
/* WARNING: Removing unreachable block (ram,0x00c1582e) */
/* WARNING: Removing unreachable block (ram,0x00c15837) */
/* WARNING: Removing unreachable block (ram,0x00c1578e) */
/* WARNING: Removing unreachable block (ram,0x00c15797) */
/* WARNING: Removing unreachable block (ram,0x00c157de) */
/* WARNING: Removing unreachable block (ram,0x00c157e7) */
/* WARNING: Removing unreachable block (ram,0x00c1587e) */
/* WARNING: Removing unreachable block (ram,0x00c15887) */
/* WARNING: Removing unreachable block (ram,0x00c1591e) */
/* WARNING: Removing unreachable block (ram,0x00c15927) */
/* WARNING: Removing unreachable block (ram,0x00c159be) */
/* WARNING: Removing unreachable block (ram,0x00c159c7) */
/* WARNING: Removing unreachable block (ram,0x00c15a5e) */
/* WARNING: Removing unreachable block (ram,0x00c15a67) */
/* WARNING: Removing unreachable block (ram,0x00c15afe) */
/* WARNING: Removing unreachable block (ram,0x00c15b07) */
/* WARNING: Removing unreachable block (ram,0x00c15592) */
/* WARNING: Removing unreachable block (ram,0x00c1559b) */
/* WARNING: Removing unreachable block (ram,0x00c154a2) */
/* WARNING: Removing unreachable block (ram,0x00c154ab) */
/* WARNING: Removing unreachable block (ram,0x00c15402) */
/* WARNING: Removing unreachable block (ram,0x00c1540b) */
/* WARNING: Removing unreachable block (ram,0x00c15362) */
/* WARNING: Removing unreachable block (ram,0x00c1536b) */
/* WARNING: Removing unreachable block (ram,0x00c152c2) */
/* WARNING: Removing unreachable block (ram,0x00c152cb) */
/* WARNING: Removing unreachable block (ram,0x00c15222) */
/* WARNING: Removing unreachable block (ram,0x00c1522b) */
/* WARNING: Removing unreachable block (ram,0x00c15182) */
/* WARNING: Removing unreachable block (ram,0x00c1518b) */
/* WARNING: Removing unreachable block (ram,0x00c150e2) */
/* WARNING: Removing unreachable block (ram,0x00c150eb) */
/* WARNING: Removing unreachable block (ram,0x00c15132) */
/* WARNING: Removing unreachable block (ram,0x00c1513b) */
/* WARNING: Removing unreachable block (ram,0x00c151d2) */
/* WARNING: Removing unreachable block (ram,0x00c151db) */
/* WARNING: Removing unreachable block (ram,0x00c15312) */
/* WARNING: Removing unreachable block (ram,0x00c1531b) */
/* WARNING: Removing unreachable block (ram,0x00c153b2) */
/* WARNING: Removing unreachable block (ram,0x00c153bb) */
/* WARNING: Removing unreachable block (ram,0x00c15452) */
/* WARNING: Removing unreachable block (ram,0x00c1545b) */
/* WARNING: Removing unreachable block (ram,0x00c154f2) */
/* WARNING: Removing unreachable block (ram,0x00c154fb) */
/* WARNING: Removing unreachable block (ram,0x00c15640) */
/* WARNING: Removing unreachable block (ram,0x00c15649) */
/* WARNING: Removing unreachable block (ram,0x00c156e0) */
/* WARNING: Removing unreachable block (ram,0x00c156e9) */
/* WARNING: Removing unreachable block (ram,0x00c15272) */
/* WARNING: Removing unreachable block (ram,0x00c1527b) */
/* WARNING: Removing unreachable block (ram,0x00c15542) */
/* WARNING: Removing unreachable block (ram,0x00c1554b) */

void FUN_00c14e80(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5dd0;
  puVar3 = DAT_028a5dc0;
  puVar5 = DAT_028a5db0;
  if (param_2 == 10) {
    if ((DAT_028a5dd0 == (undefined8 *)0x0) || (DAT_028a5dd9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5dd0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5dd0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5dd0 != (undefined8 *)0x0;
          DAT_028a5dd0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5dd8 == '\0') {
          DAT_028a5dd8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_027bed58;
        if (DAT_027bed58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c090;
        if (DAT_0276c090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c098;
        if (DAT_0276c098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5dd9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5dd9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5dd0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c15b44;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c15b46;
  }
  if (param_2 == 5) {
    if ((DAT_028a5dc0 == (undefined8 *)0x0) || (DAT_028a5dc9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5dc0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5dc0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5dc0 != (undefined8 *)0x0;
          DAT_028a5dc0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5dc8 == '\0') {
          DAT_028a5dc8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_026d7d48;
        if (DAT_026d7d48 != 0) {
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
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
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
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
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
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
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
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
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
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
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
        DAT_028a5dc9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5dc9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5dc0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c15b44;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5db0 == (undefined8 *)0x0) || (DAT_028a5db9 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5db0 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5db0 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5db0 != (undefined8 *)0x0;
          DAT_028a5db0 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5db8 == '\0') {
          DAT_028a5db8 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
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
        lVar2 = DAT_0276c010;
        if (DAT_0276c010 != 0) {
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
        lVar2 = DAT_0276c020;
        if (DAT_0276c020 != 0) {
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
        lVar2 = DAT_0276c030;
        if (DAT_0276c030 != 0) {
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
        lVar2 = DAT_0276c040;
        if (DAT_0276c040 != 0) {
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
        lVar2 = DAT_0276c050;
        if (DAT_0276c050 != 0) {
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
        lVar2 = DAT_0276c060;
        if (DAT_0276c060 != 0) {
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
        lVar2 = DAT_0276c070;
        if (DAT_0276c070 != 0) {
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
        lVar2 = DAT_0276c080;
        if (DAT_0276c080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5db9 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5db9 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5db0;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c15b44:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c15b46;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c15b46:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


