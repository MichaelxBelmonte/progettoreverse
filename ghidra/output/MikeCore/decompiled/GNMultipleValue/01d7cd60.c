// Function: FUN_01d7cd60
// Address: 01d7cd60
// Size: 502 bytes
// Class: GNMultipleValue


void FUN_01d7cd60(void)

{
  char unaff_SIL;
  longlong *unaff_RDI;
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
  
  if ((char)unaff_RDI[0x49] != unaff_SIL) {
    *(char *)(unaff_RDI + 0x49) = unaff_SIL;
    if (unaff_SIL == '\0') {
      FUN_00d46dc0(0);
      local_40 = local_30;
      local_38 = 0;
      local_60 = DAT_027f0f28;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_60 = DAT_027f0f28;
        }
      }
      else {
        local_28 = '\0';
      }
      local_38 = '\x01';
      DAT_027f0f28 = local_60;
      if (local_60 != 0) {
        local_38 = '\x01';
        FUN_00d50b00();
      }
      local_58 = '\x01';
      (**(code **)(*unaff_RDI + 0x408))(&local_60,&local_40);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d46dc0(DAT_0239011c);
      local_50 = local_30;
      local_48 = 0;
      local_70 = DAT_027f0f28;
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
          local_70 = DAT_027f0f28;
        }
      }
      else {
        local_28 = '\0';
      }
      local_48 = '\x01';
      DAT_027f0f28 = local_70;
      if (local_70 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_68 = '\x01';
      (**(code **)(*unaff_RDI + 0x408))(&local_70,&local_50);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


