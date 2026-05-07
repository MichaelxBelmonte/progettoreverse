// Function: FUN_01e05490
// Address: 01e05490
// Size: 516 bytes
// Class: GNDictionary


/* WARNING: Removing unreachable block (ram,0x01e05679) */
/* WARNING: Removing unreachable block (ram,0x01e05682) */

void FUN_01e05490(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong *unaff_RDI;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_38;
  undefined1 local_30;
  
  FUN_00d3ecc0();
  lVar1 = DAT_027f0e40;
  if (DAT_027f0e40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_38 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00d3ecc0();
    lVar1 = DAT_027f32f0;
    if (DAT_027f32f0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_38 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d3ecc0();
      lVar2 = DAT_027f32f8;
      if (DAT_027f32f8 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_88 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d530a0();
    }
    else {
      cVar3 = (**(code **)(*unaff_RDI + 0xac8))();
      if (cVar3 != '\0') {
        FUN_00d50b00();
        FUN_01e057f0();
        FUN_01e40eb0();
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*unaff_RDI + 0xab8))();
        }
        FUN_00d50b20();
      }
    }
  }
  else {
    cVar3 = (**(code **)(*unaff_RDI + 0xac8))();
    if (cVar3 != '\0') {
      FUN_01e057f0();
    }
  }
  return;
}


