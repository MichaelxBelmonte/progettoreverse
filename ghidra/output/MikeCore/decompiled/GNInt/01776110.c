// Function: FUN_01776110
// Address: 01776110
// Size: 767 bytes
// Class: GNInt


void FUN_01776110(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  void *pvVar4;
  pthread_key_t unaff_ESI;
  longlong unaff_RDI;
  int local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)unaff_ESI * 8);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_38 = FUN_01775a80();
  if (0 < (int)unaff_ESI) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 < iVar3) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (iVar3 < local_38) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_01779f30();
    }
  }
  if (((*(char *)(unaff_RDI + 0x38) != '\0') && (0 < (int)unaff_ESI)) &&
     ((int)unaff_ESI < *(int *)(lVar1 + 0xc) + -1)) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_01779f30();
    if (local_38 == iVar3) {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779f30();
    }
    else {
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_01779f30();
      if (local_38 == iVar3) {
        pvVar4 = _pthread_getspecific(unaff_ESI);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01779f30();
      }
    }
  }
  FUN_01772540();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


