// Function: FUN_0129a650
// Address: 0129a650
// Size: 510 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x0129a7bc) */
/* WARNING: Removing unreachable block (ram,0x0129a7c5) */

ulonglong FUN_0129a650(pthread_key_t param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong local_38;
  char local_30;
  
  lVar4 = *(longlong *)(unaff_RDI + 0x48);
  while (lVar6 = lVar4, lVar6 != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      lVar6 = *(longlong *)(unaff_RDI + 0x48);
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
    }
    unaff_RDI = lVar6;
    lVar4 = *(longlong *)(lVar6 + 0x48);
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_012f9bb0();
  if (cVar1 != '\0') {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar5 = FUN_012f9c10();
    return uVar5;
  }
  if (*(longlong *)(unaff_RDI + 0xd8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef490();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        goto LAB_0129a7ca;
      }
    }
    else if (local_38 != 0) {
LAB_0129a7ca:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_013d91b0();
      uVar5 = 0;
      if (cVar1 != '\0') {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar2 = FUN_013d9210();
        uVar5 = (ulonglong)uVar2;
      }
      FUN_00d50b20();
      return uVar5;
    }
  }
  return 0;
}


