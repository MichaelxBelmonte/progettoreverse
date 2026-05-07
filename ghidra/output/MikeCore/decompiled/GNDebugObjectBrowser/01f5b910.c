// Function: FUN_01f5b910
// Address: 01f5b910
// Size: 771 bytes
// Class: GNDebugObjectBrowser


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f5b910(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x10) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d0))(0,_DAT_02423950);
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x558))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x570))();
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_0083cb00();
  (**(code **)(*plVar3 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  if (plVar1 == plVar3) {
    FUN_00d50b20();
  }
  else {
    *(longlong **)(unaff_RDI + 0x88) = plVar3;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x4d0))(0,_DAT_02423950);
  FUN_01ce8690();
  FUN_01ceca30();
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  FUN_01ce86a0();
  if ((longlong *)(unaff_RDI + 0x70) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x558))();
  FUN_00d50b00();
  FUN_01cebab0();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_028007b0;
  if (DAT_028007b0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceba50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4580;
  if (DAT_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01ce8620();
  FUN_01ce8670();
  FUN_01ce84d0();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x90) != 0) {
    FUN_01ce8720();
  }
  return;
}


