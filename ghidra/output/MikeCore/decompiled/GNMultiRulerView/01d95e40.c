// Function: FUN_01d95e40
// Address: 01d95e40
// Size: 532 bytes
// Class: GNMultiRulerView


/* WARNING: Removing unreachable block (ram,0x01d95eca) */
/* WARNING: Removing unreachable block (ram,0x01d95e86) */
/* WARNING: Removing unreachable block (ram,0x01d95e92) */
/* WARNING: Removing unreachable block (ram,0x01d95ed6) */

void FUN_01d95e40(void)

{
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    FUN_01d91990();
  }
  if (*(longlong *)(unaff_RDI + 0x148) != 0) {
    FUN_01d91990();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = DAT_027f1660;
  if (DAT_027f1660 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
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
  FUN_00d403d0();
  FUN_00d50b00();
  local_70 = DAT_027f0e30;
  if (DAT_027f0e30 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d41040(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e3b870();
  return;
}


