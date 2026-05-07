// Function: FUN_019dd050
// Address: 019dd050
// Size: 543 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x019dd1ed) */
/* WARNING: Removing unreachable block (ram,0x019dd1f6) */
/* WARNING: Removing unreachable block (ram,0x019dd0cd) */
/* WARNING: Removing unreachable block (ram,0x019dd0d6) */
/* WARNING: Removing unreachable block (ram,0x019dd1b3) */
/* WARNING: Removing unreachable block (ram,0x019dd1bc) */
/* WARNING: Removing unreachable block (ram,0x019dd222) */
/* WARNING: Removing unreachable block (ram,0x019dd22f) */

undefined8 * FUN_019dd050(void)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar5;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x9b0))();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_019dd252;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_019dd252;
  if (0 < *(int *)(local_70 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
          goto LAB_019dd1d0;
        }
      }
      else if (local_40 != 0) {
LAB_019dd1d0:
        cVar1 = FUN_00d24090();
        if (cVar1 == '\0') {
          FUN_00d21140();
        }
        local_38 = '\0';
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_019dd252:
  if (*(int *)((longlong)puVar2 + 0xc) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


