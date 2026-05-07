// Function: FUN_00df1060
// Address: 00df1060
// Size: 810 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00df113c) */
/* WARNING: Removing unreachable block (ram,0x00df1145) */
/* WARNING: Removing unreachable block (ram,0x00df10fa) */
/* WARNING: Removing unreachable block (ram,0x00df1103) */
/* WARNING: Removing unreachable block (ram,0x00df1186) */
/* WARNING: Removing unreachable block (ram,0x00df118f) */

undefined8 * FUN_00df1060(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_50;
  longlong *local_40;
  char local_38;
  
  FUN_00df0b40();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00df10b7;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_00df10b7:
    *unaff_RDI = local_40;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return unaff_RDI;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00d8ed10();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  local_50 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar2 = true;
    local_50 = (longlong *)0x0;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
  plVar7 = (longlong *)FUN_00e8fc40();
  FUN_000422b0();
  (**(code **)(*plVar7 + 0x18))();
  if ((local_40 != (longlong *)0x0) && (iVar6 = FUN_00d8c7a0(), iVar6 != 0)) {
    FUN_00df1570();
  }
  if ((local_50 != (longlong *)0x0) && (iVar6 = FUN_00d8c7a0(), lVar4 = DAT_02775660, iVar6 == 4)) {
    if (DAT_02775660 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_50 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_00df1600();
    }
  }
  if (plVar7[4] != 0) {
    plVar7[4] = 0;
    FUN_00d50b20();
  }
  cVar5 = FUN_00df1850();
  lVar4 = DAT_02784780;
  if (cVar5 != '\0') {
    DAT_028a87a0 = 0;
  }
  if (DAT_02784780 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0270b858;
  if (DAT_0270b858 != 0) {
    FUN_00d50b00();
  }
  if (plVar7[3] != 0) {
    plVar7[3] = 0;
    FUN_00d50b20();
  }
  lVar1 = plVar7[7];
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    plVar7[7] = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = plVar7[8];
  if (lVar1 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    plVar7[8] = lVar3;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (!bVar2 && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return unaff_RDI;
}


