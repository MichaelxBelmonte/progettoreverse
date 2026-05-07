// Function: FUN_00d21790
// Address: 00d21790
// Size: 645 bytes
// Class: GNNull
// String references:
//   "GNNull"
//   "NotAnObject"
//   ",\n  "
//   ", "


void FUN_00d21790(void)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar5;
  longlong local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  uVar1 = *(uint *)(unaff_RSI + 0xc);
  if (0 < (int)uVar1) {
    if ((int)uVar1 < 5) {
      uVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (longlong *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
    else {
      uVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(unaff_RSI + 0x10) + uVar5 * 8);
        cVar3 = FUN_00d50c10();
        if (cVar3 == '\0') {
          FUN_00d8db40();
        }
        else if (plVar2 == (longlong *)0x0) {
          FUN_00d8db40();
        }
        else {
          (**(code **)(*plVar2 + 400))();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d8dbf0();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        if (uVar5 < uVar1 - 1) {
          FUN_00d8db40();
        }
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
    }
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


