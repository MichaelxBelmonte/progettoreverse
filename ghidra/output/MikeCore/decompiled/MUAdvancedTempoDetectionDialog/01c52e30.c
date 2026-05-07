// Function: FUN_01c52e30
// Address: 01c52e30
// Size: 508 bytes
// Class: MUAdvancedTempoDetectionDialog


void FUN_01c52e30(void)

{
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x2c8) != 0) {
    FUN_00e34b70();
    local_30 = '\0';
    local_38 = 0;
    FUN_01c4f640();
  }
  if (*(int *)(unaff_RDI + 0x268) != 0) {
    *(undefined4 *)(unaff_RDI + 0x268) = 0;
    (**(code **)(**(longlong **)(unaff_RDI + 0x158) + 0x478))();
    if (*(longlong *)(unaff_RDI + 0x158) != 0) {
      *(undefined8 *)(unaff_RDI + 0x158) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x270) != 0) {
      *(undefined8 *)(unaff_RDI + 0x270) = 0;
      FUN_00d50b20();
    }
    FUN_01e436c0();
    FUN_01c4d670();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = 0;
  local_60 = '\0';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41040(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x150) != 0) {
    FUN_00df2a30();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    *(undefined8 *)(unaff_RDI + 0x148) = 0;
    FUN_00d50b20();
  }
  if ((*(longlong *)(unaff_RDI + 0x188) != 0) &&
     (FUN_01c51580(), *(longlong *)(unaff_RDI + 0x188) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x188) = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x160) != 0) {
    local_40 = '\0';
    local_48 = 0;
    FUN_01c8dab0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x160) != 0) {
      *(undefined8 *)(unaff_RDI + 0x160) = 0;
      FUN_00d50b20();
    }
  }
  FUN_01e3b870();
  return;
}


