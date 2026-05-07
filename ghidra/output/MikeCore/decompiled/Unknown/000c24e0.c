// Function: FUN_000c24e0
// Address: 000c24e0
// Size: 562 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x000c26a4) */
/* WARNING: Removing unreachable block (ram,0x000c26ad) */
/* WARNING: Removing unreachable block (ram,0x000c2601) */
/* WARNING: Removing unreachable block (ram,0x000c260a) */
/* WARNING: Removing unreachable block (ram,0x000c258f) */
/* WARNING: Removing unreachable block (ram,0x000c259b) */
/* WARNING: Removing unreachable block (ram,0x000c263f) */
/* WARNING: Removing unreachable block (ram,0x000c2648) */
/* WARNING: Removing unreachable block (ram,0x000c26da) */
/* WARNING: Removing unreachable block (ram,0x000c26e3) */
/* WARNING: Removing unreachable block (ram,0x000c265c) */
/* WARNING: Removing unreachable block (ram,0x000c25ce) */
/* WARNING: Removing unreachable block (ram,0x000c25df) */
/* WARNING: Removing unreachable block (ram,0x000c25ed) */
/* WARNING: Removing unreachable block (ram,0x000c25d4) */
/* WARNING: Removing unreachable block (ram,0x000c25f6) */
/* WARNING: Removing unreachable block (ram,0x000c2699) */

void FUN_000c24e0(void)

{
  longlong *plVar1;
  char *pcVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)unaff_RSI[0x2b];
  (**(code **)(*plVar1 + 0x368))();
  FUN_00c9fe40();
  pcVar2 = local_38;
  if (local_40[0] != '\0') {
    pcVar2 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar2 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  if (local_48 == 0) {
    FUN_007521c0();
    (**(code **)(*unaff_RSI + 0x720))();
    (**(code **)(MACH_HEADER._0_8_ + 0x5f0))();
    local_40[0] = '\0';
    FUN_00ca0840();
    (**(code **)(MACH_HEADER._0_8_ + 0x620))();
  }
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  (**(code **)(*plVar1 + 0x378))();
  return;
}


