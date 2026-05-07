// Function: FUN_01be7d10
// Address: 01be7d10
// Size: 557 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x01be7d5d) */
/* WARNING: Removing unreachable block (ram,0x01be7d66) */

void FUN_01be7d10(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *local_38;
  char local_30;
  
  (**(code **)(*unaff_RSI + 0x958))();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) goto LAB_01be7f25;
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) goto LAB_01be7f25;
  lVar1 = unaff_RSI[0x34];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x968))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x988))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[0x30];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x990))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[0x31];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x998))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = unaff_RSI[0x32];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0010acd0();
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*local_38 + 0x9e8))();
  if (local_38 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_01be7f25:
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


