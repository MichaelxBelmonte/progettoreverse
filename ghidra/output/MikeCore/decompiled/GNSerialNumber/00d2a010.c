// Function: FUN_00d2a010
// Address: 00d2a010
// Size: 507 bytes
// Class: GNSerialNumber
// String references:
//   " %@"
//   "%@"
//   " version:%01X"
//   " flags:%06X"
//   " product:%03X"
//   " id:%09llX"


void FUN_00d2a010(void)

{
  undefined8 *puVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d4ffd0();
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_025732e0;
  local_44 = CONCAT31(local_44._1_3_,*(undefined1 *)(unaff_RSI + 0xc));
  FUN_00d94d80(&DAT_025732e0,&local_50);
  local_44 = *(undefined4 *)(unaff_RSI + 0x10);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572a48;
  FUN_00d94d80(&DAT_02572a48,&local_50);
  local_44 = *(undefined4 *)(unaff_RSI + 0x14);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572a80;
  FUN_00d94d80(&DAT_02572a80,&local_50);
  local_40 = *(undefined8 *)(unaff_RSI + 0x18);
  local_48 = 1;
  local_50 = (undefined8 *)&DAT_02572ab8;
  FUN_00d94d80(&DAT_02572ab8,&local_50);
  FUN_00d25b40();
  local_48 = 1;
  local_50 = &DAT_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &DAT_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


