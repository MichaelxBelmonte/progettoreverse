// Function: FUN_00d48750
// Address: 00d48750
// Size: 503 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d487cb) */
/* WARNING: Removing unreachable block (ram,0x00d487d4) */

void FUN_00d48750(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  
  lVar2 = DAT_0277dca0;
  plVar1 = (longlong *)*unaff_RSI;
  if (DAT_0277dca0 != 0) {
    param_1 = FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5a0))(param_1,2);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50de0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(*(undefined4 *)(unaff_RDI + 0x10));
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))(*(undefined4 *)(unaff_RDI + 0x14));
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
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
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


