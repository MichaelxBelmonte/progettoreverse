// Function: FUN_00c02550
// Address: 00c02550
// Size: 3294 bytes
// Class: GNOverloudGainReductionView


/* WARNING: Removing unreachable block (ram,0x00c02d60) */
/* WARNING: Removing unreachable block (ram,0x00c02d69) */
/* WARNING: Removing unreachable block (ram,0x00c0317e) */
/* WARNING: Removing unreachable block (ram,0x00c03187) */
/* WARNING: Removing unreachable block (ram,0x00c030de) */
/* WARNING: Removing unreachable block (ram,0x00c030e7) */
/* WARNING: Removing unreachable block (ram,0x00c0303e) */
/* WARNING: Removing unreachable block (ram,0x00c03047) */
/* WARNING: Removing unreachable block (ram,0x00c02f9e) */
/* WARNING: Removing unreachable block (ram,0x00c02fa7) */
/* WARNING: Removing unreachable block (ram,0x00c02efe) */
/* WARNING: Removing unreachable block (ram,0x00c02f07) */
/* WARNING: Removing unreachable block (ram,0x00c02e5e) */
/* WARNING: Removing unreachable block (ram,0x00c02e67) */
/* WARNING: Removing unreachable block (ram,0x00c02eae) */
/* WARNING: Removing unreachable block (ram,0x00c02eb7) */
/* WARNING: Removing unreachable block (ram,0x00c02f4e) */
/* WARNING: Removing unreachable block (ram,0x00c02f57) */
/* WARNING: Removing unreachable block (ram,0x00c02fee) */
/* WARNING: Removing unreachable block (ram,0x00c02ff7) */
/* WARNING: Removing unreachable block (ram,0x00c0308e) */
/* WARNING: Removing unreachable block (ram,0x00c03097) */
/* WARNING: Removing unreachable block (ram,0x00c0312e) */
/* WARNING: Removing unreachable block (ram,0x00c03137) */
/* WARNING: Removing unreachable block (ram,0x00c031ce) */
/* WARNING: Removing unreachable block (ram,0x00c031d7) */
/* WARNING: Removing unreachable block (ram,0x00c02c62) */
/* WARNING: Removing unreachable block (ram,0x00c02c6b) */
/* WARNING: Removing unreachable block (ram,0x00c02b72) */
/* WARNING: Removing unreachable block (ram,0x00c02b7b) */
/* WARNING: Removing unreachable block (ram,0x00c02ad2) */
/* WARNING: Removing unreachable block (ram,0x00c02adb) */
/* WARNING: Removing unreachable block (ram,0x00c02a32) */
/* WARNING: Removing unreachable block (ram,0x00c02a3b) */
/* WARNING: Removing unreachable block (ram,0x00c02992) */
/* WARNING: Removing unreachable block (ram,0x00c0299b) */
/* WARNING: Removing unreachable block (ram,0x00c028f2) */
/* WARNING: Removing unreachable block (ram,0x00c028fb) */
/* WARNING: Removing unreachable block (ram,0x00c02852) */
/* WARNING: Removing unreachable block (ram,0x00c0285b) */
/* WARNING: Removing unreachable block (ram,0x00c027b2) */
/* WARNING: Removing unreachable block (ram,0x00c027bb) */
/* WARNING: Removing unreachable block (ram,0x00c02802) */
/* WARNING: Removing unreachable block (ram,0x00c0280b) */
/* WARNING: Removing unreachable block (ram,0x00c028a2) */
/* WARNING: Removing unreachable block (ram,0x00c028ab) */
/* WARNING: Removing unreachable block (ram,0x00c029e2) */
/* WARNING: Removing unreachable block (ram,0x00c029eb) */
/* WARNING: Removing unreachable block (ram,0x00c02a82) */
/* WARNING: Removing unreachable block (ram,0x00c02a8b) */
/* WARNING: Removing unreachable block (ram,0x00c02b22) */
/* WARNING: Removing unreachable block (ram,0x00c02b2b) */
/* WARNING: Removing unreachable block (ram,0x00c02bc2) */
/* WARNING: Removing unreachable block (ram,0x00c02bcb) */
/* WARNING: Removing unreachable block (ram,0x00c02d10) */
/* WARNING: Removing unreachable block (ram,0x00c02d19) */
/* WARNING: Removing unreachable block (ram,0x00c02db0) */
/* WARNING: Removing unreachable block (ram,0x00c02db9) */
/* WARNING: Removing unreachable block (ram,0x00c02942) */
/* WARNING: Removing unreachable block (ram,0x00c0294b) */
/* WARNING: Removing unreachable block (ram,0x00c02c12) */
/* WARNING: Removing unreachable block (ram,0x00c02c1b) */

void FUN_00c02550(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5bb8;
  puVar3 = DAT_028a5ba8;
  puVar5 = DAT_028a5b98;
  if (param_2 == 10) {
    if ((DAT_028a5bb8 == (undefined8 *)0x0) || (DAT_028a5bc1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5bb8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5bb8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5bb8 != (undefined8 *)0x0;
          DAT_028a5bb8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bc0 == '\0') {
          DAT_028a5bc0 = '\x01';
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
        DAT_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bc1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5bb8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c03214;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c03216;
  }
  if (param_2 == 5) {
    if ((DAT_028a5ba8 == (undefined8 *)0x0) || (DAT_028a5bb1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5ba8 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5ba8 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5ba8 != (undefined8 *)0x0;
          DAT_028a5ba8 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5bb0 == '\0') {
          DAT_028a5bb0 = '\x01';
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
        DAT_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5bb1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5ba8;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c03214;
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
    if ((DAT_028a5b98 == (undefined8 *)0x0) || (DAT_028a5ba1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5b98 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5b98 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5b98 != (undefined8 *)0x0;
          DAT_028a5b98 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5ba0 == '\0') {
          DAT_028a5ba0 = '\x01';
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
        DAT_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5ba1 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5b98;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c03214:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c03216;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c03216:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


