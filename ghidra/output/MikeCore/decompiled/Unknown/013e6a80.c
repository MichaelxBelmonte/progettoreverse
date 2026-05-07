// Function: FUN_013e6a80
// Address: 013e6a80
// Size: 611 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013e6c1a) */
/* WARNING: Removing unreachable block (ram,0x013e6c23) */
/* WARNING: Removing unreachable block (ram,0x013e6bdb) */
/* WARNING: Removing unreachable block (ram,0x013e6be4) */
/* WARNING: Removing unreachable block (ram,0x013e6c47) */
/* WARNING: Removing unreachable block (ram,0x013e6c50) */
/* WARNING: Removing unreachable block (ram,0x013e6c9a) */
/* WARNING: Removing unreachable block (ram,0x013e6ca7) */
/* WARNING: Removing unreachable block (ram,0x013e6ccc) */
/* WARNING: Removing unreachable block (ram,0x013e6cd9) */

void FUN_013e6a80(pthread_key_t param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x108) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012a3f70();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012a3f70();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c72b0();
      if (local_30 == '\0') {
        if (local_38 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b6f250();
      if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      plVar2 = (longlong *)FUN_007af310();
      (**(code **)(*plVar2 + 0x18))();
      FUN_00b5a720(0);
      (**(code **)(*local_38 + 0x368))();
      FUN_00d50b20();
      FUN_00d50b20();
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


