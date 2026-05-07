// Function: FUN_004a1c00
// Address: 004a1c00
// Size: 958 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x004a1f82) */
/* WARNING: Removing unreachable block (ram,0x004a1eee) */
/* WARNING: Removing unreachable block (ram,0x004a1d63) */
/* WARNING: Removing unreachable block (ram,0x004a1d6c) */
/* WARNING: Removing unreachable block (ram,0x004a1e07) */
/* WARNING: Removing unreachable block (ram,0x004a1e10) */
/* WARNING: Removing unreachable block (ram,0x004a1ef7) */
/* WARNING: Removing unreachable block (ram,0x004a1f8b) */
/* WARNING: Removing unreachable block (ram,0x004a1f9f) */
/* WARNING: Removing unreachable block (ram,0x004a1e97) */
/* WARNING: Removing unreachable block (ram,0x004a1ccc) */
/* WARNING: Removing unreachable block (ram,0x004a1cd5) */
/* WARNING: Removing unreachable block (ram,0x004a1e89) */
/* WARNING: Removing unreachable block (ram,0x004a1ea0) */
/* WARNING: Removing unreachable block (ram,0x004a1fa9) */

void FUN_004a1c00(pthread_key_t param_1)

{
  void *pvVar1;
  longlong local_38;
  char local_30;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012ca540();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505730();
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e68b0();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


