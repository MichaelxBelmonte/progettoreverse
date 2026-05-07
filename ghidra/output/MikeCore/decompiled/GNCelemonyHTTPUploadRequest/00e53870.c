// Function: FUN_00e53870
// Address: 00e53870
// Size: 524 bytes
// Class: GNCelemonyHTTPUploadRequest
// String references:
//   " dataLoc:%I dataLen:%I"
//   " (INCORRECT! SHOULD BE:%I)"
//   " xdataLoc:%I xdataLen:%I"


void FUN_00e53870(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_50;
  uint local_48;
  int local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d4fff0();
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  FUN_00d8dbf0();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_40 = *(undefined8 *)(unaff_RSI + 0x28);
  local_38 = *(undefined4 *)(unaff_RSI + 0x20);
  local_48 = 2;
  local_50 = (undefined8 *)&DAT_0258e7d0;
  FUN_00d94d80(local_38,&local_50);
  lVar1 = *(longlong *)(unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00e5d8a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(unaff_RSI + 0x20) != iVar3) {
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    local_44 = iVar3;
    FUN_00d94d80();
  }
  local_40 = *(undefined8 *)(unaff_RSI + 0x30);
  local_38 = *(undefined4 *)(unaff_RSI + 0x24);
  local_48 = 2;
  local_50 = (undefined8 *)&DAT_0258e7d0;
  FUN_00d94d80(local_38,&local_50);
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00e5d8a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(unaff_RSI + 0x24) != iVar3) {
    local_48 = 1;
    local_50 = &DAT_024cc6f0;
    local_44 = iVar3;
    FUN_00d94d80();
  }
  FUN_00d8c7d0();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


