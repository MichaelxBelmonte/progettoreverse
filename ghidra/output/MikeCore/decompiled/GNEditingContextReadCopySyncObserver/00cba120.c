// Function: FUN_00cba120
// Address: 00cba120
// Size: 635 bytes
// Class: GNEditingContextReadCopySyncObserver


/* WARNING: Removing unreachable block (ram,0x00cba1d0) */
/* WARNING: Removing unreachable block (ram,0x00cba1d9) */
/* WARNING: Removing unreachable block (ram,0x00cba2c4) */
/* WARNING: Removing unreachable block (ram,0x00cba2cd) */

void FUN_00cba120(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(unaff_RDI + 0x90) != 0) &&
     (lVar1 = *unaff_RSI, *(char *)(lVar1 + 0x39) == '\0')) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    if (lVar2 == 0) {
      local_40 = 0;
      lVar1 = *(longlong *)(lVar1 + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_40 = '\x01';
      local_48 = lVar1;
      FUN_00cb98a0(param_1,&local_48);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(longlong *)(*unaff_RSI + 0x20);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
    else {
      local_50 = 0;
      FUN_00d50b00();
      local_50 = '\x01';
      local_58 = lVar2;
      FUN_00cb9950(param_1,&local_58);
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d23d90();
        if (*(int *)(lVar1 + 0xc) == 0) {
          lVar1 = *(longlong *)(*unaff_RSI + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_30 = '\0';
          local_38 = lVar1;
          FUN_00e383c0();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}


