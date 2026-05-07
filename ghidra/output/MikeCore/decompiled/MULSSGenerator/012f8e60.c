// Function: FUN_012f8e60
// Address: 012f8e60
// Size: 658 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012f8fd0) */
/* WARNING: Removing unreachable block (ram,0x012f8fd9) */
/* WARNING: Removing unreachable block (ram,0x012f905f) */
/* WARNING: Removing unreachable block (ram,0x012f9068) */

undefined8 FUN_012f8e60(undefined8 param_1)

{
  void *pvVar1;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  undefined8 uVar2;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x60) == 0) {
    if (*(longlong *)(unaff_RDI + 0x58) != 0) {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_012e8920();
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(in_ECX);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c25f0(param_1);
        local_60 = FUN_016c26c0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        param_1 = local_60;
      }
    }
    return param_1;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar2 = FUN_016553c0(param_1);
  return uVar2;
}


