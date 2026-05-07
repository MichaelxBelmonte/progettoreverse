// Function: FUN_019da0f0
// Address: 019da0f0
// Size: 570 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x019da28f) */
/* WARNING: Removing unreachable block (ram,0x019da298) */
/* WARNING: Removing unreachable block (ram,0x019da2c6) */
/* WARNING: Removing unreachable block (ram,0x019da2cf) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019da0f0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong *local_30;
  char local_28;
  
  (**(code **)(*unaff_RDI + 0x978))();
  FUN_01a3c5a0();
  plVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        (**(code **)(*local_30 + 0x10))();
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar1 + 0xb0))(), cVar3 != '\0')) {
    (**(code **)(*plVar1 + 0xc0))();
    (**(code **)(*plVar1 + 0xd0))();
    local_30 = (longlong *)(**(code **)(*unaff_RDI + 0xa98))();
    (**(code **)(*unaff_RDI + 0xce0))(_DAT_023b3498,&local_30);
    goto LAB_019da30e;
  }
  (**(code **)(*unaff_RDI + 0x9e0))();
  plVar2 = local_30;
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019da25b;
    }
  }
  else if (local_30 != (longlong *)0x0) {
LAB_019da25b:
    if (*(int *)((longlong)plVar2 + 0xc) != 0) {
      FUN_01266200();
      FUN_012664b0();
      local_30 = (longlong *)(**(code **)(*unaff_RDI + 0xa98))();
      (**(code **)(*unaff_RDI + 0xce0))(_DAT_023b3498,&local_30);
    }
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_019da30e:
  (**(code **)(*plVar1 + 0x10))();
  FUN_00d50b20();
  return;
}


