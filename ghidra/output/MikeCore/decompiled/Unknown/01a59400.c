// Function: FUN_01a59400
// Address: 01a59400
// Size: 528 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01a594cd) */
/* WARNING: Removing unreachable block (ram,0x01a594d9) */
/* WARNING: Removing unreachable block (ram,0x01a594fc) */
/* WARNING: Removing unreachable block (ram,0x01a59505) */
/* WARNING: Removing unreachable block (ram,0x01a595a7) */
/* WARNING: Removing unreachable block (ram,0x01a595b0) */

void FUN_01a59400(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_60;
  char local_58;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_001a1430();
  *puVar2 = &DAT_02633480;
  FUN_00d500e0();
  FUN_01a58ff0();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01e26000();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  FUN_01e260d0();
  FUN_01e25f80();
  lVar1 = DAT_027e2168;
  if (DAT_027e2168 != 0) {
    FUN_00d50b00();
  }
  FUN_01e26250();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_01e26150();
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    FUN_00d50b00();
  }
  FUN_00ca0840();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


