// Function: FUN_014fa5d0
// Address: 014fa5d0
// Size: 755 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x014fa6ce) */
/* WARNING: Removing unreachable block (ram,0x014fa6d7) */
/* WARNING: Removing unreachable block (ram,0x014fa6ba) */
/* WARNING: Removing unreachable block (ram,0x014fa6c3) */
/* WARNING: Removing unreachable block (ram,0x014fa8a0) */
/* WARNING: Removing unreachable block (ram,0x014fa8a9) */

void FUN_014fa5d0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong local_b8;
  char local_b0;
  
  if ((DAT_028acf68 == 0) || (DAT_028acf71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf68 == 0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      lVar1 = DAT_027c20c0;
      if (DAT_027c20c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e2af10();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c20c8;
      if (DAT_027c20c8 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar2 = DAT_028acf68;
      if (DAT_028acf68 != local_b8) {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        DAT_028acf68 = local_b8;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_b8 != 0) && (DAT_028acf70 == '\0')) {
        DAT_028acf70 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_028acf68;
      if (DAT_028acf68 != 0) {
        FUN_00d50b00();
        FUN_00d23d90();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      for (iVar5 = 0; iVar5 < *(int *)((longlong)puVar4 + 0xc); iVar5 = iVar5 + 1) {
        FUN_00d50130();
      }
      FUN_00083b20();
      FUN_00d50b20();
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      DAT_028acf71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acf71 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_00e427c0();
  return;
}


