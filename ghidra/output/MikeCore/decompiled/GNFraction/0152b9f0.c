// Function: FUN_0152b9f0
// Address: 0152b9f0
// Size: 910 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x0152bc4b) */
/* WARNING: Removing unreachable block (ram,0x0152baed) */
/* WARNING: Removing unreachable block (ram,0x0152baf9) */
/* WARNING: Removing unreachable block (ram,0x0152bb07) */
/* WARNING: Removing unreachable block (ram,0x0152bb13) */
/* WARNING: Removing unreachable block (ram,0x0152bd51) */
/* WARNING: Removing unreachable block (ram,0x0152bd5a) */
/* WARNING: Removing unreachable block (ram,0x0152bc50) */
/* WARNING: Removing unreachable block (ram,0x0152bc70) */
/* WARNING: Removing unreachable block (ram,0x0152bc52) */
/* WARNING: Removing unreachable block (ram,0x0152bc72) */

void FUN_0152b9f0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  int local_40;
  
  if ((DAT_028ad110 == 0) || (DAT_028ad119 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ad110 == 0) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      lVar4 = DAT_027c20c0;
      if (DAT_027c20c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e2af10();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027c40f0;
      if (DAT_027c40f0 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar1 = DAT_028ad110;
      if (DAT_028ad110 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        DAT_028ad110 = local_58;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != 0) && (DAT_028ad118 == '\0')) {
        DAT_028ad118 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_028ad110;
      if (DAT_028ad110 != 0) {
        FUN_00d50b00();
        FUN_00d23d90();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((longlong)puVar3 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(puVar3[2] + 8 + lVar4 * 8);
        FUN_00d50130();
      }
      FUN_00083b20();
      FUN_00d50b20();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      DAT_028ad119 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ad119 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e427c0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    local_58 = *(longlong *)(unaff_RSI + 0x38);
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


