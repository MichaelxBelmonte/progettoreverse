// Function: FUN_00e34da0
// Address: 00e34da0
// Size: 523 bytes
// Class: GNOperationProgressObserver
// String references:
//   " [low cpu]"
//   " [heavy cpu]"
//   " progress:"
//   "%g"
//   " COMPLEX!"
//   " PREPARING"
//   " RUNNING"
//   " FINISHED"
//   " (with JobCenter %p)"
//   " (SHOULD cancel)"
//   ", is CANCELLED"


void FUN_00e34da0(void)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_50;
  uint local_48;
  float local_44;
  longlong local_40;
  undefined8 *local_38;
  char local_30;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d4fff0();
  local_38 = local_50;
  local_30 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_30 = '\x01';
  FUN_00d8dbf0();
  if ((local_30 != '\0') && (local_38 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RSI[0xb] == '\0') {
    FUN_00d8db40();
  }
  else {
    FUN_00d8db40();
  }
  FUN_00d8db40();
  local_44 = *(float *)(unaff_RSI + 10) * DAT_023908e0;
  local_48 = 1;
  local_50 = &DAT_024d0b28;
  FUN_00d94d80(local_44,&local_50);
  FUN_00d8db40();
  cVar2 = (**(code **)(*unaff_RSI + 0x378))();
  if (cVar2 != '\0') {
    FUN_00d8db40();
  }
  iVar1 = (int)unaff_RSI[7];
  if (iVar1 == 1) {
    FUN_00d8db40();
  }
  else if (iVar1 == 0) {
    FUN_00d8db40();
  }
  else if (iVar1 == -1) {
    FUN_00d8db40();
  }
  if (unaff_RSI[4] != 0) {
    local_48 = 1;
    local_50 = (undefined8 *)&DAT_02576920;
    local_40 = unaff_RSI[4];
    FUN_00d94d80(&DAT_02576920,&local_50);
  }
  if (*(char *)((longlong)unaff_RSI + 0x3c) != '\0') {
    FUN_00d8db40();
  }
  if (*(char *)((longlong)unaff_RSI + 0x3d) != '\0') {
    FUN_00d8db40();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


