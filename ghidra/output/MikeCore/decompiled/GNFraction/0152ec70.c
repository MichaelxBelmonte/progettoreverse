// Function: FUN_0152ec70
// Address: 0152ec70
// Size: 542 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x0152ecfc) */
/* WARNING: Removing unreachable block (ram,0x0152ed05) */

void FUN_0152ec70(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507e40();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      if (unaff_SIL == '\0') {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        (**(code **)(*local_40 + 0x3a8))();
        FUN_01508220();
      }
      else {
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
          local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125dfa0();
        (**(code **)(*local_40 + 0x3a8))();
        FUN_01508220();
      }
      FUN_00d50b20();
    }
  }
  return;
}


