// Function: FUN_00c7fe10
// Address: 00c7fe10
// Size: 516 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c7fe9a) */
/* WARNING: Removing unreachable block (ram,0x00c7fea3) */

void FUN_00c7fe10(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = DAT_027f37f0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_027f37f0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50de0();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x10);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x30);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = *(longlong *)(unaff_RDI + 0x18);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  return;
}


