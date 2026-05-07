// Function: FUN_00b5d1a0
// Address: 00b5d1a0
// Size: 622 bytes
// Class: GNMidiFileTrack


/* WARNING: Removing unreachable block (ram,0x00b5d2ca) */
/* WARNING: Removing unreachable block (ram,0x00b5d2d3) */
/* WARNING: Removing unreachable block (ram,0x00b5d3f1) */
/* WARNING: Removing unreachable block (ram,0x00b5d3fa) */
/* WARNING: Removing unreachable block (ram,0x00b5d34a) */
/* WARNING: Removing unreachable block (ram,0x00b5d353) */
/* WARNING: Removing unreachable block (ram,0x00b5d306) */
/* WARNING: Removing unreachable block (ram,0x00b5d316) */

void FUN_00b5d1a0(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  double dVar6;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar1 == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02572358;
    (*DAT_02572370)();
    puVar3 = *(undefined8 **)(unaff_RDI + 0x10);
    if (puVar3 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x10) = puVar4;
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00b5a6a0(param_1);
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      while( true ) {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        dVar6 = (double)FUN_00b5beb0();
        if ((dVar6 == param_1) && (!NAN(dVar6) && !NAN(param_1))) break;
        if ((param_1 <= dVar6) || (lVar5 = lVar5 + 1, *(int *)(lVar1 + 0xc) <= lVar5))
        goto LAB_00b5d365;
      }
      if (lVar2 != 0) {
        FUN_00d50b00();
        FUN_00b5be00();
        FUN_00d50b20();
        return;
      }
    }
LAB_00b5d365:
    FUN_00b5a6a0(param_1);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00b5d580();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


