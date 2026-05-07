// Function: FUN_0176ef50
// Address: 0176ef50
// Size: 831 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x0176ef8a) */
/* WARNING: Removing unreachable block (ram,0x0176ef96) */
/* WARNING: Removing unreachable block (ram,0x0176f21b) */
/* WARNING: Removing unreachable block (ram,0x0176f228) */
/* WARNING: Removing unreachable block (ram,0x0176eff7) */
/* WARNING: Removing unreachable block (ram,0x0176f020) */
/* WARNING: Removing unreachable block (ram,0x0176eff9) */
/* WARNING: Removing unreachable block (ram,0x0176f022) */

void FUN_0176ef50(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_00d50f50();
  if ((*(longlong *)(unaff_RDI + 0x18) == unaff_RDI) &&
     (lVar5 = *(longlong *)(unaff_RDI + 0x50), lVar5 != 0)) {
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar1 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar5 + 0xc) <= local_40) break;
      lVar4 = *(longlong *)(lVar5 + 0x10);
      local_58 = *(longlong *)(lVar4 + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((pthread_key_t)lVar4);
      pVar3 = (pthread_key_t)lVar4;
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f90();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != unaff_RDI) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01779fc0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01777940();
    param_1 = (pthread_key_t)lVar5;
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01777cf0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 == 0) {
      FUN_0176f3a0();
    }
    if (*(longlong *)(unaff_RDI + 0x68) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01777c80();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01777ca0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


