// Function: FUN_01e03570
// Address: 01e03570
// Size: 904 bytes
// Class: GNDictionary
// String references:
//   "%@%I"


/* WARNING: Removing unreachable block (ram,0x01e03609) */
/* WARNING: Removing unreachable block (ram,0x01e03615) */

void FUN_01e03570(void)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
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
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x40) != 0) {
    FUN_00d4efa0();
    FUN_00c82bb0();
    lVar1 = *(longlong *)(*(longlong *)(unaff_RDI + 0x40) + 0x138);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    FUN_00d237a0();
    if (local_d8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
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
    FUN_00e3f850();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_d8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((*(char *)(unaff_RDI + 0x18) != '\0') && (*(longlong *)(unaff_RDI + 0x28) != 0)) {
      FUN_00d50b00();
      FUN_00d50b20();
      local_48 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
      FUN_00d50b00();
      local_a0 = DAT_027f2f40;
      local_48 = '\x01';
      local_50 = (longlong *)(unaff_RDI + 0x10);
      if (DAT_027f2f40 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar1;
      FUN_00e3fb50(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x10))();
        FUN_00d50b20();
      }
    }
    lVar1 = DAT_027f2f48;
    if (*(longlong *)(unaff_RDI + 0x20) != 0) {
      if (DAT_027f2f48 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      FUN_00e3f850();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      local_70 = *unaff_RSI;
      local_68 = '\0';
      (**(code **)(**(longlong **)(unaff_RDI + 0x20) + 0x800))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00e3faa0();
    }
    FUN_00e3faa0();
  }
  return;
}


