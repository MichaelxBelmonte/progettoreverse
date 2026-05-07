// Function: FUN_01bb86c0
// Address: 01bb86c0
// Size: 707 bytes
// Class: GNList


void FUN_01bb86c0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01a13070();
  lVar2 = local_48;
  lVar1 = *unaff_RSI;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != lVar2) {
    if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_b8 = DAT_027ebc60;
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x958))();
      local_68 = local_38;
      local_60 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_60 = '\x01';
      FUN_00d41040(&local_68,&local_b8);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    local_a8 = *unaff_RSI;
    local_a0 = '\0';
    FUN_01a13040();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xc0) != 0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_98 = DAT_027ebc60;
      if (DAT_027ebc60 != 0) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x958))();
      local_58 = local_38;
      local_50 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_50 = '\x01';
      FUN_00d41430(&local_58,&local_98);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


