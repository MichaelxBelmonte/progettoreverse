// Function: FUN_00e573e0
// Address: 00e573e0
// Size: 519 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x00e574ad) */
/* WARNING: Removing unreachable block (ram,0x00e574b9) */
/* WARNING: Removing unreachable block (ram,0x00e575b1) */
/* WARNING: Removing unreachable block (ram,0x00e575bd) */

ulonglong FUN_00e573e0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 local_30;
  undefined1 local_28;
  
  *(int *)(unaff_RDI + 0x88) = unaff_ESI;
  FUN_00e579d0(param_1,unaff_ESI);
  *(longlong *)(unaff_RDI + 0x98) = local_30;
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
    local_30 = *(longlong *)(unaff_RDI + 0x98);
  }
  if (local_30 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    *(undefined8 *)(unaff_RDI + 0xa8) =
         *(undefined8 *)
          (*(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + 0x10) + (longlong)unaff_ESI * 8);
    *(undefined4 *)(unaff_RDI + 200) = 0;
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x20))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    cVar2 = (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x1e8))();
    plVar1 = *(longlong **)(unaff_RDI + 0x98);
    if (cVar2 == '\0') {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x118))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x248))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    plVar1 = *(longlong **)(unaff_RDI + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(*plVar1 + 0x28))();
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1) & 0xffffffff;
}


