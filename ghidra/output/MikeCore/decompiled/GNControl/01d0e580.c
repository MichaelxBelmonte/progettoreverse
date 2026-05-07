// Function: FUN_01d0e580
// Address: 01d0e580
// Size: 526 bytes
// Class: GNControl
// String references:
//   "_editObjectValue"
//   "v@"


/* WARNING: Removing unreachable block (ram,0x01d0e755) */
/* WARNING: Removing unreachable block (ram,0x01d0e75e) */

void FUN_01d0e580(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  undefined8 *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  
  plVar4 = (longlong *)FUN_00cafdf0();
  bVar1 = true;
  if (plVar4 == (longlong *)0x0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x458))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    if (local_70 != (undefined8 *)0x0) {
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x980))();
      local_68 = 1;
      local_70 = &DAT_024c5048;
      local_58 = 0;
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = local_a0;
      local_58 = '\x01';
      (**(code **)(*unaff_RDI + 0x278))(&local_70,"v@");
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef680;
      if (DAT_027ef680 != 0) {
        FUN_00d50b00();
      }
      FUN_00db3140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    bVar2 = false;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}


