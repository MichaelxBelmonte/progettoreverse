// Function: FUN_01e5ae20
// Address: 01e5ae20
// Size: 726 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e5b014) */
/* WARNING: Removing unreachable block (ram,0x01e5aeb9) */
/* WARNING: Removing unreachable block (ram,0x01e5aec5) */
/* WARNING: Removing unreachable block (ram,0x01e5af3d) */
/* WARNING: Removing unreachable block (ram,0x01e5af49) */
/* WARNING: Removing unreachable block (ram,0x01e5af85) */
/* WARNING: Removing unreachable block (ram,0x01e5af8e) */
/* WARNING: Removing unreachable block (ram,0x01e5b01d) */

void FUN_01e5ae20(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = DAT_027f3dd8;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f3dd8 != 0) {
    param_1 = FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d81fd0();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))(*(undefined8 *)(unaff_RDI + 0x88));
  (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))(*(undefined8 *)(unaff_RDI + 0x40));
  plVar1 = (longlong *)*unaff_RSI;
  if (*(longlong *)(unaff_RDI + 0x58) == 0) {
    lVar2 = *(longlong *)(unaff_RDI + 0x50);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x400))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x400))();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x58);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x68);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


