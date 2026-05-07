// Function: FUN_00c08ed0
// Address: 00c08ed0
// Size: 2303 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c0971f) */
/* WARNING: Removing unreachable block (ram,0x00c09728) */
/* WARNING: Removing unreachable block (ram,0x00c09621) */
/* WARNING: Removing unreachable block (ram,0x00c0962a) */
/* WARNING: Removing unreachable block (ram,0x00c09581) */
/* WARNING: Removing unreachable block (ram,0x00c0958a) */
/* WARNING: Removing unreachable block (ram,0x00c094e1) */
/* WARNING: Removing unreachable block (ram,0x00c094ea) */
/* WARNING: Removing unreachable block (ram,0x00c09441) */
/* WARNING: Removing unreachable block (ram,0x00c0944a) */
/* WARNING: Removing unreachable block (ram,0x00c093a1) */
/* WARNING: Removing unreachable block (ram,0x00c093aa) */
/* WARNING: Removing unreachable block (ram,0x00c09301) */
/* WARNING: Removing unreachable block (ram,0x00c0930a) */
/* WARNING: Removing unreachable block (ram,0x00c09261) */
/* WARNING: Removing unreachable block (ram,0x00c0926a) */
/* WARNING: Removing unreachable block (ram,0x00c091c1) */
/* WARNING: Removing unreachable block (ram,0x00c091ca) */
/* WARNING: Removing unreachable block (ram,0x00c09121) */
/* WARNING: Removing unreachable block (ram,0x00c0912a) */
/* WARNING: Removing unreachable block (ram,0x00c09081) */
/* WARNING: Removing unreachable block (ram,0x00c0908a) */
/* WARNING: Removing unreachable block (ram,0x00c090d1) */
/* WARNING: Removing unreachable block (ram,0x00c090da) */
/* WARNING: Removing unreachable block (ram,0x00c09171) */
/* WARNING: Removing unreachable block (ram,0x00c0917a) */
/* WARNING: Removing unreachable block (ram,0x00c09211) */
/* WARNING: Removing unreachable block (ram,0x00c0921a) */
/* WARNING: Removing unreachable block (ram,0x00c092b1) */
/* WARNING: Removing unreachable block (ram,0x00c092ba) */
/* WARNING: Removing unreachable block (ram,0x00c09351) */
/* WARNING: Removing unreachable block (ram,0x00c0935a) */
/* WARNING: Removing unreachable block (ram,0x00c093f1) */
/* WARNING: Removing unreachable block (ram,0x00c093fa) */
/* WARNING: Removing unreachable block (ram,0x00c09491) */
/* WARNING: Removing unreachable block (ram,0x00c0949a) */
/* WARNING: Removing unreachable block (ram,0x00c09531) */
/* WARNING: Removing unreachable block (ram,0x00c0953a) */
/* WARNING: Removing unreachable block (ram,0x00c095d1) */
/* WARNING: Removing unreachable block (ram,0x00c095da) */
/* WARNING: Removing unreachable block (ram,0x00c096cf) */
/* WARNING: Removing unreachable block (ram,0x00c096d8) */
/* WARNING: Removing unreachable block (ram,0x00c0976f) */
/* WARNING: Removing unreachable block (ram,0x00c09778) */

void FUN_00c08ed0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5c68;
  puVar4 = DAT_028a5c58;
  if (param_2 == 7) {
    if ((DAT_028a5c68 == (undefined8 *)0x0) || (DAT_028a5c71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c68 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c68 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c68 != (undefined8 *)0x0;
          DAT_028a5c68 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c70 == '\0') {
          DAT_028a5c70 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0d8;
        if (DAT_0276c0d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c0a8;
        if (DAT_0276c0a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
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
        DAT_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c71 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c68;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c097b5;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar4 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5c58 == (undefined8 *)0x0) || (DAT_028a5c61 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5c58 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5c58 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5c58 != (undefined8 *)0x0;
          DAT_028a5c58 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5c60 == '\0') {
          DAT_028a5c60 = '\x01';
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
        DAT_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5c61 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5c58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c097b5:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c097b7;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c097b7:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


