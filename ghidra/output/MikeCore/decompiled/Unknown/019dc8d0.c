// Function: FUN_019dc8d0
// Address: 019dc8d0
// Size: 744 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019dca44) */
/* WARNING: Removing unreachable block (ram,0x019dcb1f) */
/* WARNING: Removing unreachable block (ram,0x019dcb28) */
/* WARNING: Removing unreachable block (ram,0x019dc9bc) */
/* WARNING: Removing unreachable block (ram,0x019dc9c1) */
/* WARNING: Removing unreachable block (ram,0x019dc96e) */
/* WARNING: Removing unreachable block (ram,0x019dc977) */
/* WARNING: Removing unreachable block (ram,0x019dc9d6) */
/* WARNING: Removing unreachable block (ram,0x019dc9df) */
/* WARNING: Removing unreachable block (ram,0x019dc9fe) */
/* WARNING: Removing unreachable block (ram,0x019dca07) */
/* WARNING: Removing unreachable block (ram,0x019dcafe) */
/* WARNING: Removing unreachable block (ram,0x019dcb03) */
/* WARNING: Removing unreachable block (ram,0x019dca50) */
/* WARNING: Removing unreachable block (ram,0x019dca70) */
/* WARNING: Removing unreachable block (ram,0x019dca52) */
/* WARNING: Removing unreachable block (ram,0x019dca72) */

void FUN_019dc8d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  int iVar5;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  int local_40;
  
  if (*(longlong *)(unaff_RDI + 0x318) != 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_019c1990();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d243f0();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((*(int *)((longlong)puVar2 + 0xc) == 0) && (FUN_01993800(), local_68 != 0)) {
      FUN_00d50b00();
      FUN_00d21140();
      FUN_00d50b20();
    }
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar3 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((longlong)puVar2 + 0xc) <= local_40) break;
      local_58 = *(longlong *)(puVar2[2] + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)puVar2[2]);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01326de0();
    }
    FUN_00115190();
    FUN_01d5e2b0();
    if (local_58 != 0) {
      FUN_00d50b00();
      for (iVar5 = 0; iVar5 < *(int *)(local_58 + 0xc); iVar5 = iVar5 + 1) {
        iVar1 = FUN_01d654a0();
        if (iVar1 != 0) {
          FUN_01d654a0();
        }
        FUN_01d66ab0();
      }
      FUN_002a0a30();
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}


