// Function: FUN_018ac3f0
// Address: 018ac3f0
// Size: 546 bytes
// Class: MUTestViewController


/* WARNING: Removing unreachable block (ram,0x018ac592) */
/* WARNING: Removing unreachable block (ram,0x018ac59b) */
/* WARNING: Removing unreachable block (ram,0x018ac525) */
/* WARNING: Removing unreachable block (ram,0x018ac52e) */
/* WARNING: Removing unreachable block (ram,0x018ac49d) */
/* WARNING: Removing unreachable block (ram,0x018ac4a9) */
/* WARNING: Removing unreachable block (ram,0x018ac511) */
/* WARNING: Removing unreachable block (ram,0x018ac51a) */
/* WARNING: Removing unreachable block (ram,0x018ac550) */
/* WARNING: Removing unreachable block (ram,0x018ac559) */
/* WARNING: Removing unreachable block (ram,0x018ac5a6) */
/* WARNING: Removing unreachable block (ram,0x018ac5af) */
/* WARNING: Removing unreachable block (ram,0x018ac5fb) */
/* WARNING: Removing unreachable block (ram,0x018ac608) */

void FUN_018ac3f0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 *local_40;
  char local_38;
  
  local_b0 = *param_2;
  local_a8 = 0;
  FUN_018ac7a0(param_1,&local_b0);
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  FUN_000b6b40();
  if ((local_38 == '\0') && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = local_40;
  if (local_40 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar1 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_000b68d0();
  }
  FUN_00d235a0();
  FUN_018ac8a0();
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


