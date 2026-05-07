// Function: FUN_00c04940
// Address: 00c04940
// Size: 2303 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c0518f) */
/* WARNING: Removing unreachable block (ram,0x00c05198) */
/* WARNING: Removing unreachable block (ram,0x00c05091) */
/* WARNING: Removing unreachable block (ram,0x00c0509a) */
/* WARNING: Removing unreachable block (ram,0x00c04ff1) */
/* WARNING: Removing unreachable block (ram,0x00c04ffa) */
/* WARNING: Removing unreachable block (ram,0x00c04f51) */
/* WARNING: Removing unreachable block (ram,0x00c04f5a) */
/* WARNING: Removing unreachable block (ram,0x00c04eb1) */
/* WARNING: Removing unreachable block (ram,0x00c04eba) */
/* WARNING: Removing unreachable block (ram,0x00c04e11) */
/* WARNING: Removing unreachable block (ram,0x00c04e1a) */
/* WARNING: Removing unreachable block (ram,0x00c04d71) */
/* WARNING: Removing unreachable block (ram,0x00c04d7a) */
/* WARNING: Removing unreachable block (ram,0x00c04cd1) */
/* WARNING: Removing unreachable block (ram,0x00c04cda) */
/* WARNING: Removing unreachable block (ram,0x00c04c31) */
/* WARNING: Removing unreachable block (ram,0x00c04c3a) */
/* WARNING: Removing unreachable block (ram,0x00c04b91) */
/* WARNING: Removing unreachable block (ram,0x00c04b9a) */
/* WARNING: Removing unreachable block (ram,0x00c04af1) */
/* WARNING: Removing unreachable block (ram,0x00c04afa) */
/* WARNING: Removing unreachable block (ram,0x00c04b41) */
/* WARNING: Removing unreachable block (ram,0x00c04b4a) */
/* WARNING: Removing unreachable block (ram,0x00c04be1) */
/* WARNING: Removing unreachable block (ram,0x00c04bea) */
/* WARNING: Removing unreachable block (ram,0x00c04c81) */
/* WARNING: Removing unreachable block (ram,0x00c04c8a) */
/* WARNING: Removing unreachable block (ram,0x00c04d21) */
/* WARNING: Removing unreachable block (ram,0x00c04d2a) */
/* WARNING: Removing unreachable block (ram,0x00c04dc1) */
/* WARNING: Removing unreachable block (ram,0x00c04dca) */
/* WARNING: Removing unreachable block (ram,0x00c04e61) */
/* WARNING: Removing unreachable block (ram,0x00c04e6a) */
/* WARNING: Removing unreachable block (ram,0x00c04f01) */
/* WARNING: Removing unreachable block (ram,0x00c04f0a) */
/* WARNING: Removing unreachable block (ram,0x00c04fa1) */
/* WARNING: Removing unreachable block (ram,0x00c04faa) */
/* WARNING: Removing unreachable block (ram,0x00c05041) */
/* WARNING: Removing unreachable block (ram,0x00c0504a) */
/* WARNING: Removing unreachable block (ram,0x00c0513f) */
/* WARNING: Removing unreachable block (ram,0x00c05148) */
/* WARNING: Removing unreachable block (ram,0x00c051df) */
/* WARNING: Removing unreachable block (ram,0x00c051e8) */

void FUN_00c04940(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar3 = DAT_028a5bd8;
  puVar4 = DAT_028a5bc8;
  if (param_2 == 8) {
    if ((DAT_028a5bd8 == (undefined8 *)0x0) || (DAT_028a5be1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bd8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bd8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5bd8 != (undefined8 *)0x0;
          DAT_028a5bd8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5be0 == '\0') {
          DAT_028a5be0 = '\x01';
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
        DAT_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5be1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5bd8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) goto LAB_00c05225;
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
    if ((DAT_028a5bc8 == (undefined8 *)0x0) || (DAT_028a5bd1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bc8 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bc8 == puVar4) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar5 = DAT_028a5bc8 != (undefined8 *)0x0;
          DAT_028a5bc8 = puVar4;
          if (bVar5) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bd0 == '\0') {
          DAT_028a5bd0 = '\x01';
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
        DAT_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bd1 = '\x01';
        FUN_00e8cb70();
      }
      puVar4 = DAT_028a5bc8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar4 == (undefined8 *)0x0) {
LAB_00c05225:
        puVar4 = (undefined8 *)0x0;
        goto LAB_00c05227;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c05227:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


