// Function: FUN_00107b60
// Address: 00107b60
// Size: 648 bytes
// Class: MDURLOpenedController


void FUN_00107b60(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bebdd0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0xc) == '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec310();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec310();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01beab60();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  FUN_0010ae60();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


