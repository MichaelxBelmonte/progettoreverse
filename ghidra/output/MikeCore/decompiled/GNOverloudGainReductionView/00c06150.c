// Function: FUN_00c06150
// Address: 00c06150
// Size: 1820 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c067bc) */
/* WARNING: Removing unreachable block (ram,0x00c067c5) */
/* WARNING: Removing unreachable block (ram,0x00c0671c) */
/* WARNING: Removing unreachable block (ram,0x00c06725) */
/* WARNING: Removing unreachable block (ram,0x00c0667c) */
/* WARNING: Removing unreachable block (ram,0x00c06685) */
/* WARNING: Removing unreachable block (ram,0x00c065dc) */
/* WARNING: Removing unreachable block (ram,0x00c065e5) */
/* WARNING: Removing unreachable block (ram,0x00c0653c) */
/* WARNING: Removing unreachable block (ram,0x00c06545) */
/* WARNING: Removing unreachable block (ram,0x00c0649c) */
/* WARNING: Removing unreachable block (ram,0x00c064a5) */
/* WARNING: Removing unreachable block (ram,0x00c063fc) */
/* WARNING: Removing unreachable block (ram,0x00c06405) */
/* WARNING: Removing unreachable block (ram,0x00c0635c) */
/* WARNING: Removing unreachable block (ram,0x00c06365) */
/* WARNING: Removing unreachable block (ram,0x00c062bc) */
/* WARNING: Removing unreachable block (ram,0x00c062c5) */
/* WARNING: Removing unreachable block (ram,0x00c0626c) */
/* WARNING: Removing unreachable block (ram,0x00c06275) */
/* WARNING: Removing unreachable block (ram,0x00c0630c) */
/* WARNING: Removing unreachable block (ram,0x00c06315) */
/* WARNING: Removing unreachable block (ram,0x00c063ac) */
/* WARNING: Removing unreachable block (ram,0x00c063b5) */
/* WARNING: Removing unreachable block (ram,0x00c0644c) */
/* WARNING: Removing unreachable block (ram,0x00c06455) */
/* WARNING: Removing unreachable block (ram,0x00c064ec) */
/* WARNING: Removing unreachable block (ram,0x00c064f5) */
/* WARNING: Removing unreachable block (ram,0x00c0658c) */
/* WARNING: Removing unreachable block (ram,0x00c06595) */
/* WARNING: Removing unreachable block (ram,0x00c0662c) */
/* WARNING: Removing unreachable block (ram,0x00c06635) */
/* WARNING: Removing unreachable block (ram,0x00c066cc) */
/* WARNING: Removing unreachable block (ram,0x00c066d5) */
/* WARNING: Removing unreachable block (ram,0x00c0676c) */
/* WARNING: Removing unreachable block (ram,0x00c06775) */
/* WARNING: Removing unreachable block (ram,0x00c0680c) */
/* WARNING: Removing unreachable block (ram,0x00c06815) */

void FUN_00c06150(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5c08;
  if (param_2 != 3) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5c08 == (undefined8 *)0x0) || (DAT_028a5c11 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5c08 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5c08 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5c08 != (undefined8 *)0x0;
        DAT_028a5c08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5c10 == '\0') {
        DAT_028a5c10 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c118;
      if (DAT_0276c118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c120;
      if (DAT_0276c120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c128;
      if (DAT_0276c128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c130;
      if (DAT_0276c130 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c078;
      if (DAT_0276c078 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c070;
      if (DAT_0276c070 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c068;
      if (DAT_0276c068 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c060;
      if (DAT_0276c060 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d38;
      if (DAT_026d7d38 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c050;
      if (DAT_0276c050 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c048;
      if (DAT_0276c048 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c040;
      if (DAT_0276c040 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c038;
      if (DAT_0276c038 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c030;
      if (DAT_0276c030 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026d7d40;
      if (DAT_026d7d40 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c020;
      if (DAT_0276c020 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c018;
      if (DAT_0276c018 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c010;
      if (DAT_0276c010 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c008;
      if (DAT_0276c008 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5c11 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5c08;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c06850;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c06850:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


