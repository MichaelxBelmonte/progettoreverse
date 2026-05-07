// Function: FUN_004f9d80
// Address: 004f9d80
// Size: 593 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x004f9f8e) */
/* WARNING: Removing unreachable block (ram,0x004f9f9b) */
/* WARNING: Removing unreachable block (ram,0x004f9e76) */
/* WARNING: Removing unreachable block (ram,0x004f9e83) */
/* WARNING: Removing unreachable block (ram,0x004f9ea4) */
/* WARNING: Removing unreachable block (ram,0x004f9ead) */

longlong * FUN_004f9d80(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  FUN_0025e9a0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_68 == '\0') {
    if (local_70 == 0) goto LAB_004f9fbe;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_004f9fbe;
  if (0 < *(int *)(local_70 + 0xc)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar4 * 8);
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == lVar2) {
        local_38 = '\0';
        FUN_00d21140();
        local_40 = lVar1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_70 + 0xc));
  }
  FUN_001159b0();
  FUN_00d50b20();
LAB_004f9fbe:
  *unaff_RDI = local_70;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


