// Function: FUN_00d8e100
// Address: 00d8e100
// Size: 546 bytes
// Class: GNString
// String references:
//   "Cannot modify an immutable string %@"


void FUN_00d8e100(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  longlong unaff_RDI;
  undefined8 *local_50;
  char local_48;
  
  if ((*(byte *)(unaff_RDI + 0x24) & 1) == 0) {
    local_48 = '\x01';
    FUN_00d50b00();
    FUN_00e828a0();
    local_50 = &DAT_024c5048;
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_025795a8;
  FUN_00d500e0();
  if (0 < (int)unaff_RSI) {
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x20);
    if (iVar2 == -1) {
      if (*(longlong *)(lVar1 + 0x10) == 0) goto LAB_00d8e222;
      iVar2 = FUN_00e7dde0();
    }
    if (iVar2 != 0) {
      FUN_00d8dbf0();
    }
  }
LAB_00d8e222:
  iVar2 = *(int *)(unaff_RDI + 0x20);
  if (iVar2 == -1) {
    if (*(longlong *)(unaff_RDI + 0x10) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00e7dde0();
    }
  }
  if ((int)((ulonglong)unaff_RSI >> 0x20) + (int)unaff_RSI < iVar2) {
    if ((*(int *)(unaff_RDI + 0x20) == -1) && (*(longlong *)(unaff_RDI + 0x10) != 0)) {
      FUN_00e7dde0();
    }
    FUN_00e7b4e0();
    FUN_00d8e3d0();
    if ((local_48 == '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00d8dbf0();
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((*(longlong *)(unaff_RDI + 0x10) != 0) &&
     (*(longlong *)(unaff_RDI + 0x10) != unaff_RDI + 0x28)) {
    FUN_00e83070();
  }
  *(undefined8 *)(unaff_RDI + 0x10) = 0;
  if (*(int *)(unaff_RDI + 0x20) != -1) {
    FUN_00e83070();
    *(undefined8 *)(unaff_RDI + 0x18) = 0;
    *(undefined4 *)(unaff_RDI + 0x20) = 0xffffffff;
  }
  FUN_00d8dbf0();
  FUN_00d50b20();
  return;
}


