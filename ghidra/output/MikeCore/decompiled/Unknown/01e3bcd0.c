// Function: FUN_01e3bcd0
// Address: 01e3bcd0
// Size: 544 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e3bd3e) */
/* WARNING: Removing unreachable block (ram,0x01e3bd47) */
/* WARNING: Removing unreachable block (ram,0x01e3bd0b) */
/* WARNING: Removing unreachable block (ram,0x01e3bd17) */
/* WARNING: Removing unreachable block (ram,0x01e3bda9) */
/* WARNING: Removing unreachable block (ram,0x01e3bdb2) */

void FUN_01e3bcd0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  
  FUN_01d81fd0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
            (*(undefined8 *)((longlong)unaff_RDI + 0x10c),
             *(undefined8 *)((longlong)unaff_RDI + 0x114));
  plVar1 = (longlong *)*unaff_RSI;
  (**(code **)(*unaff_RDI + 0x560))();
  (**(code **)(*plVar1 + 0x3b8))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RDI[8];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RDI[10];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b8))();
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RDI[0xc];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x408))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RDI[7];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}


