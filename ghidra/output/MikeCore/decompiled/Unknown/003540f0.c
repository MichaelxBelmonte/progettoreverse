// Function: FUN_003540f0
// Address: 003540f0
// Size: 560 bytes
// Class: Unknown


void FUN_003540f0(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  FUN_00d403d0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  local_90 = 0;
  local_88 = '\0';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41040(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (DAT_02807338 != 0) {
    FUN_004afdf0();
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == lVar1) {
      local_70 = 0;
      local_68 = '\0';
      FUN_004afda0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (DAT_02807358 != 0) {
    FUN_004afdf0();
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == lVar1) {
      local_60 = 0;
      local_58 = '\0';
      FUN_004afda0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (DAT_02807348 != 0) {
    FUN_004afdf0();
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == lVar1) {
      local_50 = 0;
      local_48 = '\0';
      FUN_004afda0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_003b9c40();
  return;
}


