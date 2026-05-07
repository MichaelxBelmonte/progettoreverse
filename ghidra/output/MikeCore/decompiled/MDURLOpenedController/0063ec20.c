// Function: FUN_0063ec20
// Address: 0063ec20
// Size: 765 bytes
// Class: MDURLOpenedController


/* WARNING: Removing unreachable block (ram,0x0063eeb8) */
/* WARNING: Removing unreachable block (ram,0x0063ee59) */
/* WARNING: Removing unreachable block (ram,0x0063ee62) */
/* WARNING: Removing unreachable block (ram,0x0063ee12) */
/* WARNING: Removing unreachable block (ram,0x0063edc3) */
/* WARNING: Removing unreachable block (ram,0x0063edcc) */
/* WARNING: Removing unreachable block (ram,0x0063ee1b) */
/* WARNING: Removing unreachable block (ram,0x0063ee88) */
/* WARNING: Removing unreachable block (ram,0x0063ee91) */
/* WARNING: Removing unreachable block (ram,0x0063eec1) */

void FUN_0063ec20(void)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  cVar2 = FUN_0063f180();
  if ((cVar2 != '\0') && (FUN_0063f230(), local_40 != 0)) {
    FUN_0063f230();
    cVar2 = FUN_00212c70();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_0063f230();
      FUN_002218f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00631670();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_0063f230();
  if (local_40 != 0) {
    FUN_0063f230();
    FUN_00221930();
    lVar1 = *unaff_RSI;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (local_98 == lVar1) {
      FUN_0063f230();
      FUN_00221970();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_0063f230();
      FUN_00226060();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    FUN_00177aa0();
  }
  FUN_00d23f50();
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  if (local_40 == *unaff_RSI) {
    FUN_0062a580();
    *(undefined8 *)(unaff_RDI + 0x158) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}


