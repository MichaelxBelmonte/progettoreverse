// Function: FUN_000f4cc0
// Address: 000f4cc0
// Size: 593 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x000f4ec4) */
/* WARNING: Removing unreachable block (ram,0x000f4ecd) */
/* WARNING: Removing unreachable block (ram,0x000f4e13) */
/* WARNING: Removing unreachable block (ram,0x000f4e1c) */
/* WARNING: Removing unreachable block (ram,0x000f4d91) */
/* WARNING: Removing unreachable block (ram,0x000f4d9a) */
/* WARNING: Removing unreachable block (ram,0x000f4e7f) */
/* WARNING: Removing unreachable block (ram,0x000f4ef0) */

void FUN_000f4cc0(void)

{
  char cVar1;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_00d3ecf0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  cVar1 = FUN_000f45b0();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_00d3ecf0();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    cVar1 = FUN_00d23d70();
    if (local_48 != 0) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar1 != '\0') {
      FUN_00d3ecf0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_00d23f50();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_000f43b0();
      FUN_003b8a40();
      FUN_00d3ecf0();
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      cVar1 = FUN_000f3de0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((cVar1 != '\0') && (FUN_000f4240(), *(int *)(local_48 + 0xc) == 0)) {
        *(undefined4 *)(unaff_RDI + 0xd8) = 0;
      }
    }
  }
  return;
}


