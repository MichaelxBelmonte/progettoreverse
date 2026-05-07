// Function: FUN_01e1b270
// Address: 01e1b270
// Size: 737 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e1b533) */
/* WARNING: Removing unreachable block (ram,0x01e1b53c) */

void FUN_01e1b270(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  lVar2 = DAT_027f32f0;
  if (DAT_027f32f0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_38 + 0x50))();
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    lVar3 = DAT_027f32f8;
    if (DAT_027f32f8 != 0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*local_48 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d3ecc0();
    lVar2 = DAT_027f32e0;
    if (DAT_027f32e0 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(*unaff_RDI + 0x640))();
      FUN_00d3ecf0();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_38 == local_48) {
        lVar2 = unaff_RDI[0x29];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*(longlong *)unaff_RDI[0x27] + 0x388))();
        FUN_01e12e30();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)unaff_RDI[0x27];
        (**(code **)(*plVar1 + 0x388))();
        (**(code **)(*plVar1 + 0x3a8))();
        (**(code **)(*unaff_RDI + 0x620))();
      }
    }
    FUN_00d530a0();
  }
  else {
    cVar4 = (**(code **)(*unaff_RDI + 0x950))();
    if ((cVar4 != '\0') && (*(char *)((longlong)unaff_RDI + 0x174) == '\0')) {
      plVar1 = (longlong *)unaff_RDI[0x36];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
        (**(code **)(*plVar1 + 0x28))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x980))();
    }
  }
  return;
}


