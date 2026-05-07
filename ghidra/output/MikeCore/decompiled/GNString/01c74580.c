// Function: FUN_01c74580
// Address: 01c74580
// Size: 849 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c74828) */
/* WARNING: Removing unreachable block (ram,0x01c747e5) */
/* WARNING: Removing unreachable block (ram,0x01c7470c) */
/* WARNING: Removing unreachable block (ram,0x01c746fe) */
/* WARNING: Removing unreachable block (ram,0x01c74719) */
/* WARNING: Removing unreachable block (ram,0x01c74811) */
/* WARNING: Removing unreachable block (ram,0x01c748c4) */

ulonglong FUN_01c74580(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
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
      uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),local_40 == 0);
      if ((local_40 == 0) && (param_2 != '\0')) {
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_016cbba0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
          lVar3 = unaff_RDI[0x42];
        }
        else {
          lVar3 = unaff_RDI[0x42];
        }
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        pVar4 = *(pthread_key_t *)(unaff_RDI + 0x39);
        FUN_016effc0(pVar4,1);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        FUN_01c44700();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_01c62c70();
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
          pvVar2 = _pthread_getspecific(pVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      goto LAB_01c74607;
    }
  }
  uVar5 = 0;
LAB_01c74607:
  return uVar5 & 0xffffffff;
}


