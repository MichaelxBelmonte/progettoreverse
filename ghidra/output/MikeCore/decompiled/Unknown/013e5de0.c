// Function: FUN_013e5de0
// Address: 013e5de0
// Size: 682 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x013e5eb2) */
/* WARNING: Removing unreachable block (ram,0x013e5ebb) */
/* WARNING: Removing unreachable block (ram,0x013e5f68) */
/* WARNING: Removing unreachable block (ram,0x013e5f71) */

longlong * FUN_013e5de0(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_40;
  
  if (*(longlong *)(unaff_RSI + 0x60) == 0) {
LAB_013e5f33:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_013de560();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) goto LAB_013e5f33;
  FUN_013de560();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc340();
  local_40 = local_68;
  lVar4 = local_68;
  if (local_68 == 0) {
    bVar2 = true;
    local_40 = 0;
  }
  else if (local_60 == '\0') {
    FUN_00d50b00();
    bVar2 = false;
  }
  else {
    local_60 = '\0';
    bVar2 = false;
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_013e5f33;
  pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01327a50();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
      goto LAB_013e5f76;
    }
  }
  else if (local_68 != 0) {
LAB_013e5f76:
    lVar5 = 0;
    do {
      if (*(int *)(local_68 + 0xc) <= (int)lVar5) {
        FUN_001150f0();
        FUN_00d50b20();
        goto LAB_013e603f;
      }
      lVar1 = *(longlong *)(*(longlong *)(local_68 + 0x10) + lVar5 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
    } while (local_78 != local_40);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_001150f0();
    FUN_00d50b20();
    goto LAB_013e607f;
  }
LAB_013e603f:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_013e607f:
  if (bVar2) {
    return unaff_RDI;
  }
  FUN_00d50b20();
  return unaff_RDI;
}


