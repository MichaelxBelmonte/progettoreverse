// Function: FUN_00332340
// Address: 00332340
// Size: 560 bytes
// Class: GNModuleView


/* WARNING: Removing unreachable block (ram,0x003324f7) */
/* WARNING: Removing unreachable block (ram,0x00332500) */

longlong * FUN_00332340(void)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_003322a0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00332562;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_00332562:
    bVar1 = true;
    iVar5 = *(int *)((longlong)puVar2 + 0xc);
    goto joined_r0x00332568;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40 = '\0';
        FUN_00d235a0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_001159b0();
  bVar1 = false;
  iVar5 = *(int *)((longlong)puVar2 + 0xc);
joined_r0x00332568:
  if (iVar5 == 0) {
    *unaff_RDI = local_80;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = (longlong)puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


