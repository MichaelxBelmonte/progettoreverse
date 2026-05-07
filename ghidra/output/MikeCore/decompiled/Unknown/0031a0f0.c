// Function: FUN_0031a0f0
// Address: 0031a0f0
// Size: 560 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0031a134) */
/* WARNING: Removing unreachable block (ram,0x0031a13d) */

void FUN_0031a0f0(longlong param_1)

{
  char cVar1;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_78;
  char local_70;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RDI + 0x438))();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  unaff_RDI[7] = param_1;
  cVar1 = (**(code **)(*unaff_RDI + 0x398))();
  if (cVar1 != '\0') {
    FUN_0141cb10();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    (**(code **)(*local_38 + 0x690))();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_38 + 0x698))();
  }
  (**(code **)(*unaff_RDI + 0x438))();
  FUN_012d25b0();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_0141c4c0(param_1);
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*local_38 + 0x690))();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x460))();
  (**(code **)(*unaff_RDI + 0x4a8))();
  FUN_00d50b20();
  return;
}


