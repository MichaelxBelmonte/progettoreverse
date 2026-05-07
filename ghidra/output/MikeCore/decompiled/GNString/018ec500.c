// Function: FUN_018ec500
// Address: 018ec500
// Size: 619 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x018ec5f8) */
/* WARNING: Removing unreachable block (ram,0x018ec601) */
/* WARNING: Removing unreachable block (ram,0x018ec70b) */
/* WARNING: Removing unreachable block (ram,0x018ec714) */

ulonglong FUN_018ec500(pthread_key_t param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  iVar3 = 0;
  iVar2 = 0;
  if (*unaff_RDI != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01893a20();
    if (local_50 == 0) {
      iVar2 = 0;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893a20();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar2 = FUN_018c2150();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01893a20();
    if (local_50 == 0) {
      iVar3 = 0;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893a20();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_018c2150();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar5 = 0xffffffff;
  if (iVar3 <= iVar2) {
    uVar5 = (ulonglong)(iVar3 < iVar2);
  }
  return uVar5;
}


