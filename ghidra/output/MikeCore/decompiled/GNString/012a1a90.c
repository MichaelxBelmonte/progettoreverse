// Function: FUN_012a1a90
// Address: 012a1a90
// Size: 787 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x012a1b16) */
/* WARNING: Removing unreachable block (ram,0x012a1b1f) */
/* WARNING: Removing unreachable block (ram,0x012a1b9e) */
/* WARNING: Removing unreachable block (ram,0x012a1ba7) */

void FUN_012a1a90(pthread_key_t param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong local_38;
  char local_30;
  
  *(int *)(unaff_RDI + 0x54) = *(int *)(unaff_RDI + 0x54) + 1;
  if (*(longlong *)(unaff_RDI + 0xa8) == 0) {
    lVar4 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar4 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        lVar5 = *(longlong *)(unaff_RDI + 0xa0);
        goto joined_r0x012a1b34;
      }
      FUN_00d50b00();
    }
  }
  lVar5 = *(longlong *)(unaff_RDI + 0xa0);
joined_r0x012a1b34:
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  if (lVar4 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar4;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
  }
  if (lVar5 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar5;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
  }
  FUN_00d50b00();
  FUN_0039e8b0();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  FUN_0127e4d0(DAT_023b67d8);
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    lVar3 = lVar4;
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      lVar3 = *(longlong *)(lVar4 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
    }
    *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + -1;
  }
  if (lVar5 == 0) {
    *(int *)(unaff_RDI + 0x54) = *(int *)(unaff_RDI + 0x54) + -1;
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
    *(int *)(lVar5 + 0x54) = *(int *)(lVar5 + 0x54) + -1;
    *(int *)(unaff_RDI + 0x54) = *(int *)(unaff_RDI + 0x54) + -1;
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}


