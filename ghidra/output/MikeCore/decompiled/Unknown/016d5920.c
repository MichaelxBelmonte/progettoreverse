// Function: FUN_016d5920
// Address: 016d5920
// Size: 556 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x016d5b21) */
/* WARNING: Removing unreachable block (ram,0x016d5b2a) */

void FUN_016d5920(pthread_key_t param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  iVar1 = *(int *)(local_58 + 0xc);
  if (local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 < 3) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  FUN_016ebc80();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc);
      goto joined_r0x016d5a12;
    }
LAB_016d5a44:
    bVar3 = true;
    lVar2 = *unaff_RSI;
  }
  else {
    if (local_58 == 0) goto LAB_016d5a44;
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x60) + 0xc);
joined_r0x016d5a12:
    if (iVar1 < 2) goto LAB_016d5b35;
    FUN_016d7fb0();
    bVar3 = false;
    lVar2 = *unaff_RSI;
  }
  if (((lVar2 != 0) && (*(longlong *)(unaff_RDI + 0x78) != 0)) &&
     (lVar2 == *(longlong *)(unaff_RDI + 0x78))) {
    FUN_00d64850();
    if (*(longlong *)(unaff_RDI + 0x78) != 0) {
      *(longlong *)(unaff_RDI + 0x78) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  FUN_016ebd80();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbf80();
  if (bVar3) {
    return;
  }
LAB_016d5b35:
  FUN_00d50b20();
  return;
}


