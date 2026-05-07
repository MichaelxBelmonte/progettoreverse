// Function: FUN_01a08e50
// Address: 01a08e50
// Size: 906 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a08ef5) */
/* WARNING: Removing unreachable block (ram,0x01a08efe) */
/* WARNING: Removing unreachable block (ram,0x01a0910f) */
/* WARNING: Removing unreachable block (ram,0x01a09158) */
/* WARNING: Removing unreachable block (ram,0x01a09161) */
/* WARNING: Removing unreachable block (ram,0x01a09025) */
/* WARNING: Removing unreachable block (ram,0x01a0902e) */
/* WARNING: Removing unreachable block (ram,0x01a09076) */
/* WARNING: Removing unreachable block (ram,0x01a090c2) */
/* WARNING: Removing unreachable block (ram,0x01a090cb) */
/* WARNING: Removing unreachable block (ram,0x01a091a3) */
/* WARNING: Removing unreachable block (ram,0x01a091ac) */

void FUN_01a08e50(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_40;
  char local_38;
  
  FUN_01d48b40(DAT_02390124);
  FUN_01989f80();
  if (local_b0 == 0) {
    cVar2 = '\0';
  }
  else {
    FUN_01989f80();
    (**(code **)(*local_90 + 0xe20))();
    local_40 = *(longlong *)(unaff_RDI + 0x170);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    cVar2 = FUN_00d24090();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01cfcdc0(DAT_02390124,DAT_0239011c,0,DAT_0239011c);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_01cfbee0(DAT_02390120,0,0);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01cfcdc0(DAT_023b3888,0,DAT_02391090,DAT_023b3888);
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3b0))();
    FUN_01cfbee0(DAT_02394214,0,0);
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3b8))();
  return;
}


