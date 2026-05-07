// Function: FUN_004a17d0
// Address: 004a17d0
// Size: 710 bytes
// Class: MUAudioFileSource


/* WARNING: Removing unreachable block (ram,0x004a194d) */
/* WARNING: Removing unreachable block (ram,0x004a1956) */
/* WARNING: Removing unreachable block (ram,0x004a18b0) */
/* WARNING: Removing unreachable block (ram,0x004a18bc) */
/* WARNING: Removing unreachable block (ram,0x004a1a79) */
/* WARNING: Removing unreachable block (ram,0x004a1a82) */

void FUN_004a17d0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (param_1 == 0xffffffff) {
    pvVar1 = _pthread_getspecific(0xffffffff);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e66e0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f1c0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e8920();
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb450();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_0044be80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return;
}


