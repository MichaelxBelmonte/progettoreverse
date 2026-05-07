// Function: FUN_006451f0
// Address: 006451f0
// Size: 745 bytes
// Class: MDProjectInsp


/* WARNING: Removing unreachable block (ram,0x00645230) */
/* WARNING: Removing unreachable block (ram,0x00645239) */

void FUN_006451f0(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  FUN_00637870();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
    FUN_01e54250();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_01e53c20();
      (**(code **)(*local_40 + 0x478))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar2 = FUN_0009acd0();
    if (cVar2 == '\0') {
      FUN_006e22c0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009b0b0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_006e2ae0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_0009f2a0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_ESI == 2) {
      plVar1 = *(longlong **)(unaff_RDI + 0xe0);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 0) {
      plVar1 = *(longlong **)(unaff_RDI + 0xb8);
      FUN_01e53c20();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar1 + 0x9e0))(param_1,0);
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


