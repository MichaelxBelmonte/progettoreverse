// Function: FUN_00cc8780
// Address: 00cc8780
// Size: 547 bytes
// Class: GNBCFA


void FUN_00cc8780(void)

{
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
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
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (*unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x380))();
    if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 == (undefined8 *)0x0) {
      local_70 = *unaff_RSI;
      local_68 = '\0';
      (**(code **)(*unaff_RDI + 0x378))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x380))();
      local_b8 = *unaff_RSI;
      FUN_00083ea0(2,&local_b8);
      FUN_01c0fd60();
      local_30 = local_50;
      local_28 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_28 = '\x01';
      FUN_00c6d890();
      local_40 = local_60;
      local_38 = 0;
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38 = '\x01';
      (**(code **)(*unaff_RDI + 0x378))();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = (undefined8 *)&DAT_0253d630;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      local_b0 = &DAT_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


