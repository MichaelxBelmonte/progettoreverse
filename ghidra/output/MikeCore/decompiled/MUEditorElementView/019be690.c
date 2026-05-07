// Function: FUN_019be690
// Address: 019be690
// Size: 1594 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019bea78) */
/* WARNING: Removing unreachable block (ram,0x019bea81) */
/* WARNING: Removing unreachable block (ram,0x019bea2b) */
/* WARNING: Removing unreachable block (ram,0x019be88e) */
/* WARNING: Removing unreachable block (ram,0x019be897) */
/* WARNING: Removing unreachable block (ram,0x019be761) */
/* WARNING: Removing unreachable block (ram,0x019be76a) */
/* WARNING: Removing unreachable block (ram,0x019bec9b) */
/* WARNING: Removing unreachable block (ram,0x019beca4) */
/* WARNING: Removing unreachable block (ram,0x019beae7) */
/* WARNING: Removing unreachable block (ram,0x019beb10) */
/* WARNING: Removing unreachable block (ram,0x019beae9) */
/* WARNING: Removing unreachable block (ram,0x019beb12) */

void FUN_019be690(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  int local_40;
  
  if (unaff_RDI[0x58] == *unaff_RSI) {
    return;
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar7 + 0x18))();
  FUN_00d46300();
  lVar2 = local_c8;
  lVar3 = DAT_026f6f98;
  if (local_c0 == '\0') {
    if (local_c8 != 0) {
      FUN_00d50b00();
      lVar3 = DAT_026f6f98;
    }
  }
  else {
    local_c0 = '\0';
  }
  DAT_026f6f98 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)0x0;
  if (*unaff_RSI != 0) {
    FUN_00d403d0();
    lVar2 = DAT_027e13e0;
    if (DAT_027e13e0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_100 = '\0';
    local_108 = plVar7;
    FUN_00d40470(&local_108,&stack0xffffffffffffff48,1,3);
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)*unaff_RSI;
  }
  FUN_00827d60();
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x360))();
    cVar5 = FUN_00e85ea0();
    plVar8 = unaff_RSI;
    if (cVar5 != '\0') goto LAB_019be8d2;
  }
  plVar8 = &DAT_02802688;
LAB_019be8d2:
  if ((bool)*(char *)((longlong)unaff_RDI + 0x512) != (*plVar8 != 0)) {
    *(bool *)((longlong)unaff_RDI + 0x512) = *plVar8 != 0;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  plVar8 = (longlong *)0x0;
  if ((longlong *)unaff_RDI[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x450))();
    plVar8 = (longlong *)unaff_RDI[0x58];
  }
  plVar1 = (longlong *)*unaff_RSI;
  plVar4 = plVar8;
  if (plVar8 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    unaff_RDI[0x58] = (longlong)plVar1;
    plVar4 = plVar1;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar4 = (longlong *)unaff_RDI[0x58];
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0x448))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar2 = unaff_RDI[0x58];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xed8))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0x81];
  if ((plVar8 != (longlong *)0x0) && ((longlong *)unaff_RDI[0x58] != (longlong *)0x0)) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x420))();
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar8 + 0x918))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x4b] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x4b] + 0x620))();
  }
  lVar3 = unaff_RDI[0x4a];
  if (lVar3 != 0) {
    local_40 = -1;
    while (local_40 = local_40 + 1, local_40 < *(int *)(lVar3 + 0xc)) {
      FUN_01981860();
      local_f8 = *unaff_RSI;
      local_f0 = '\0';
      FUN_01983f50();
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a01cb0();
  }
  if ((longlong *)unaff_RDI[0x80] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x80] + 0x620))();
  }
  if (unaff_RDI[0x7f] != 0) {
    unaff_RDI[0x5a] = unaff_RDI[0x5b];
    uVar6 = FUN_01e1f170();
    *(undefined4 *)(unaff_RDI + 0x5b) = uVar6;
    uVar6 = FUN_01e1f180();
    *(undefined4 *)((longlong)unaff_RDI + 0x2dc) = uVar6;
  }
  FUN_00d403d0();
  local_e8 = DAT_026f6ed8;
  if (DAT_026f6ed8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  FUN_00d50b00();
  local_d0 = '\0';
  local_d8 = plVar7;
  FUN_00d40470(&local_d8,&stack0xffffffffffffff78,1,3);
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xa48))();
  (**(code **)(*unaff_RDI + 0x620))();
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


