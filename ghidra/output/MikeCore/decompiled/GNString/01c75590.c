// Function: FUN_01c75590
// Address: 01c75590
// Size: 742 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c75771) */
/* WARNING: Removing unreachable block (ram,0x01c7577e) */

ulonglong FUN_01c75590(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    if ((int)unaff_RDI[0x39] != 0) {
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016d8300();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = CONCAT71((int7)((ulonglong)local_40 >> 8),local_40 != 0);
      if ((local_40 != 0) && (param_2 != '\0')) {
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
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016efaf0();
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
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01c75617;
    }
  }
  uVar3 = 0;
LAB_01c75617:
  return uVar3 & 0xffffffff;
}


