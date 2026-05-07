// Function: FUN_017e3fb0
// Address: 017e3fb0
// Size: 569 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x017e3ff2) */
/* WARNING: Removing unreachable block (ram,0x017e3ffb) */
/* WARNING: Removing unreachable block (ram,0x017e406b) */
/* WARNING: Removing unreachable block (ram,0x017e4074) */

void FUN_017e3fb0(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  FUN_00d50100();
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x50) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e710();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar1 == local_38) {
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(longlong *)(unaff_RDI + 0x58) = local_38;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  pcVar2 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x68);
  *(undefined8 **)(unaff_RDI + 0x68) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x60);
  *(undefined8 **)(unaff_RDI + 0x60) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025683c0;
  (*pcVar2)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  *(undefined8 **)(unaff_RDI + 0x70) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0xd0);
  *(longlong **)(unaff_RDI + 0xd0) = plVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}


