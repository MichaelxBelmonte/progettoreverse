// Function: FUN_01308280
// Address: 01308280
// Size: 506 bytes
// Class: GNString


void FUN_01308280(void)

{
  longlong *plVar1;
  longlong unaff_RDI;
  
  if (*(longlong *)(unaff_RDI + 0x120) != 0) {
    *(undefined8 *)(unaff_RDI + 0x120) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x108) != 0) {
    *(undefined8 *)(unaff_RDI + 0x108) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x100) != 0) {
    *(undefined8 *)(unaff_RDI + 0x100) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xe8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xe8) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0xf0) != 0) {
    *(undefined8 *)(unaff_RDI + 0xf0) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xf8) + 0x1c0))();
  if (*(longlong **)(unaff_RDI + 0x110) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x110) + 0x1c0))();
  }
  if (*(longlong *)(unaff_RDI + 0x118) != 0) {
    *(undefined8 *)(unaff_RDI + 0x118) = 0;
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x1c0))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x148) + 0x1c0))();
  plVar1 = (longlong *)**(longlong **)(*(longlong *)(unaff_RDI + 0x128) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = (longlong *)**(longlong **)(*(longlong *)(unaff_RDI + 0x130) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x128) + 0x10) + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x130) + 0x10) + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x128) + 0x10) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x130) + 0x10) + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x128) + 0x10) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x130) + 0x10) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1c0))();
  }
  *(undefined2 *)(unaff_RDI + 0x168) = 0;
  *(undefined1 *)(unaff_RDI + 0xd1) = 1;
  FUN_012dd8d0();
  return;
}


