// Function: FUN_0031b2a0
// Address: 0031b2a0
// Size: 516 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0031b2e2) */
/* WARNING: Removing unreachable block (ram,0x0031b2eb) */

void FUN_0031b2a0(longlong param_1)

{
  char cVar1;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong *local_30;
  char local_28;
  
  (**(code **)(*unaff_RDI + 0x438))();
  if ((local_28 == '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  unaff_RDI[6] = param_1;
  unaff_RDI[7] = param_1;
  cVar1 = (**(code **)(*unaff_RDI + 0x398))();
  if (cVar1 == '\0') {
    if (local_30 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_0141cb10();
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*local_30 + 0x690))();
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar1 = (**(code **)(*local_30 + 0x698))();
    if (cVar1 != '\0') {
      FUN_012d25b0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_0141c4c0(param_1);
      if (local_28 == '\0') {
        if (local_30 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      (**(code **)(*local_30 + 0x690))();
      if (local_30 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x4a8))();
    }
  }
  FUN_00d50b20();
  return;
}


