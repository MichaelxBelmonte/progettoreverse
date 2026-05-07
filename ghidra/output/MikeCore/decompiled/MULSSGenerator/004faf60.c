// Function: FUN_004faf60
// Address: 004faf60
// Size: 505 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x004fb04a) */
/* WARNING: Removing unreachable block (ram,0x004fb053) */
/* WARNING: Removing unreachable block (ram,0x004fb0df) */
/* WARNING: Removing unreachable block (ram,0x004fb0e8) */

void FUN_004faf60(pthread_key_t param_1)

{
  void *pvVar1;
  int iVar2;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  
  if (*unaff_RDI != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f4ba0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4ba0();
      local_50 = DAT_02708bf0;
      if (DAT_02708bf0 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      FUN_00ca13a0();
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_48 == '\0') {
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_50 == 0) {
      return;
    }
    for (iVar2 = 0; iVar2 < *(int *)(local_50 + 0xc); iVar2 = iVar2 + 1) {
      FUN_004faf60();
    }
    FUN_000be170();
    FUN_00d50b20();
  }
  return;
}


