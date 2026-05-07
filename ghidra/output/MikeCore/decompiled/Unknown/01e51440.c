// Function: FUN_01e51440
// Address: 01e51440
// Size: 867 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01e514b5) */
/* WARNING: Removing unreachable block (ram,0x01e514c1) */
/* WARNING: Removing unreachable block (ram,0x01e516a8) */
/* WARNING: Removing unreachable block (ram,0x01e5164c) */
/* WARNING: Removing unreachable block (ram,0x01e5160d) */
/* WARNING: Removing unreachable block (ram,0x01e51638) */
/* WARNING: Removing unreachable block (ram,0x01e5167d) */
/* WARNING: Removing unreachable block (ram,0x01e516bc) */

void FUN_01e51440(undefined8 param_1,longlong *param_2)

{
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_38;
  char local_30;
  
  *(undefined1 *)(unaff_RDI + 8) = 1;
  local_a8 = *param_2;
  local_a0 = '\0';
  (**(code **)(*unaff_RDI + 0x510))(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e5c670();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[4] != 0) {
    FUN_01e5eec0();
  }
  FUN_01e5e3f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_30 != '\0') {
      local_30 = '\0';
    }
    FUN_01e5e380();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((unaff_RDI[5] != 0) || ((**(code **)(*unaff_RDI + 0x560))(), unaff_RDI[5] != 0)) {
    FUN_01e40eb0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 == 0) {
      FUN_01e5ca90();
      if (local_30 != '\0') {
        local_30 = '\0';
      }
      FUN_01e6cc40();
    }
  }
  FUN_01e5e430();
  FUN_00d403d0();
  local_98 = DAT_027fe470;
  if (DAT_027fe470 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  FUN_00d50b00();
  local_88 = 0;
  local_80 = '\0';
  FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,1);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


