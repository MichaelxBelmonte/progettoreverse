// Function: FUN_01b6f470
// Address: 01b6f470
// Size: 881 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01b6f556) */
/* WARNING: Removing unreachable block (ram,0x01b6f573) */
/* WARNING: Removing unreachable block (ram,0x01b6f578) */
/* WARNING: Removing unreachable block (ram,0x01b6f580) */
/* WARNING: Removing unreachable block (ram,0x01b6f585) */
/* WARNING: Removing unreachable block (ram,0x01b6f55c) */
/* WARNING: Removing unreachable block (ram,0x01b6f561) */
/* WARNING: Removing unreachable block (ram,0x01b6f777) */
/* WARNING: Removing unreachable block (ram,0x01b6f780) */
/* WARNING: Removing unreachable block (ram,0x01b6f4b5) */
/* WARNING: Removing unreachable block (ram,0x01b6f4be) */
/* WARNING: Removing unreachable block (ram,0x01b6f50f) */
/* WARNING: Removing unreachable block (ram,0x01b6f518) */

undefined8 * FUN_01b6f470(void)

{
  bool bVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_58;
  char local_50;
  
  (**(code **)(*unaff_RSI + 0x978))();
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01b6f4ea;
    FUN_00d50b00();
  }
  else if (local_58 == (longlong *)0x0) {
LAB_01b6f4ea:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*local_58 + 0x9b0))();
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b6f51d;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_01b6f51d:
    if (*(int *)((longlong)local_58 + 0xc) != 0) goto joined_r0x01b6f5aa;
  }
  (**(code **)(*local_58 + 0x9d0))();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
joined_r0x01b6f5aa:
  if (local_58 == (longlong *)0x0) {
    local_58 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_58 = (longlong)&DAT_02572358;
    (*DAT_02572370)();
  }
  pcVar2 = DAT_02572370;
  if (*(int *)((longlong)local_58 + 0xc) < 1) {
    puVar4 = (undefined8 *)0x0;
    bVar1 = false;
  }
  else {
    iVar6 = 0;
    bVar1 = false;
    puVar4 = (undefined8 *)0x0;
    pcVar5 = DAT_02572370;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        if (puVar4 == (undefined8 *)0x0) {
          puVar4 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &DAT_02572358;
          (*pcVar2)();
          bVar1 = true;
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)pcVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        local_70 = local_80;
        local_68 = '\0';
        FUN_00d21140();
        if (local_80 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((longlong)local_58 + 0xc));
  }
  FUN_001159b0();
  *unaff_RDI = local_58;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar1) && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


