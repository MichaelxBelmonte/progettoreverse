// Function: FUN_012c85c0
// Address: 012c85c0
// Size: 602 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012c87cf) */
/* WARNING: Removing unreachable block (ram,0x012c87d8) */
/* WARNING: Removing unreachable block (ram,0x012c87a4) */
/* WARNING: Removing unreachable block (ram,0x012c87ad) */
/* WARNING: Removing unreachable block (ram,0x012c87fd) */
/* WARNING: Removing unreachable block (ram,0x012c8806) */

void FUN_012c85c0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a0b0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e4910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165a070();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012e4910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d64d10();
  FUN_00d23d90();
  FUN_00d651a0();
  return;
}


