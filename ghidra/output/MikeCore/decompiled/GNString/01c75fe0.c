// Function: FUN_01c75fe0
// Address: 01c75fe0
// Size: 702 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c76191) */
/* WARNING: Removing unreachable block (ram,0x01c7619e) */

ulonglong FUN_01c75fe0(pthread_key_t param_1,byte param_2)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x31] == 0) {
    uVar4 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar2 = FUN_016c2730();
    uVar4 = (ulonglong)uVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (((byte)uVar2 & param_2) != 0) {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_016cbba0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016ea880();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c44700();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_01c62c70();
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x620))();
      *(undefined1 *)(unaff_RDI + 0x3a) = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (local_40 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar4 & 0xffffffff;
}


