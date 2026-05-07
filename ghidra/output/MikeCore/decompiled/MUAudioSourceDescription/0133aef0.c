// Function: FUN_0133aef0
// Address: 0133aef0
// Size: 754 bytes
// Class: MUAudioSourceDescription


/* WARNING: Removing unreachable block (ram,0x0133b160) */
/* WARNING: Removing unreachable block (ram,0x0133b0ad) */
/* WARNING: Removing unreachable block (ram,0x0133b0a4) */
/* WARNING: Removing unreachable block (ram,0x0133b0fd) */
/* WARNING: Removing unreachable block (ram,0x0133b106) */
/* WARNING: Removing unreachable block (ram,0x0133b169) */
/* WARNING: Removing unreachable block (ram,0x0133afd9) */
/* WARNING: Removing unreachable block (ram,0x0133afe2) */
/* WARNING: Removing unreachable block (ram,0x0133af71) */
/* WARNING: Removing unreachable block (ram,0x0133af7a) */
/* WARNING: Removing unreachable block (ram,0x0133b047) */
/* WARNING: Removing unreachable block (ram,0x0133b050) */

ulonglong FUN_0133aef0(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfdd0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0133af7f;
    }
  }
  else if (local_40 != 0) {
LAB_0133af7f:
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc570();
    lVar3 = *unaff_RDI;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar3 = *unaff_RDI;
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    FUN_013dfce0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bcf30();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    FUN_00d50b20();
    goto LAB_0133b1d1;
  }
  uVar4 = 0;
LAB_0133b1d1:
  return uVar4 & 0xffffffff;
}


