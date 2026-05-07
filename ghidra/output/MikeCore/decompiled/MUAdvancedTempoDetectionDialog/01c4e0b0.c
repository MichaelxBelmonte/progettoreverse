// Function: FUN_01c4e0b0
// Address: 01c4e0b0
// Size: 564 bytes
// Class: MUAdvancedTempoDetectionDialog


/* WARNING: Removing unreachable block (ram,0x01c4e260) */
/* WARNING: Removing unreachable block (ram,0x01c4e269) */

void FUN_01c4e0b0(pthread_key_t param_1)

{
  longlong lVar1;
  void *pvVar2;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if ((int)unaff_RDI[0x39] != unaff_ESI) {
    if ((int)unaff_RDI[0x4d] != 0) {
      *(undefined4 *)(unaff_RDI + 0x4d) = 0;
      (**(code **)(*(longlong *)unaff_RDI[0x2b] + 0x478))();
      if (unaff_RDI[0x2b] != 0) {
        unaff_RDI[0x2b] = 0;
        FUN_00d50b20();
      }
      if (unaff_RDI[0x4e] != 0) {
        unaff_RDI[0x4e] = 0;
        FUN_00d50b20();
      }
      FUN_01e436c0();
      FUN_01c4d670();
    }
    *(int *)(unaff_RDI + 0x39) = unaff_ESI;
    if (unaff_RDI[0x31] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
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
    }
    FUN_01c4df60();
    FUN_016bf0c0();
    *(undefined1 *)(unaff_RDI + 0x43) = 0;
    FUN_01c4e390();
    if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
    }
    FUN_01e42030();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != 0) {
      (**(code **)(*unaff_RDI + 0x7b0))();
      if (local_30 == '\0') {
        if (local_38 == 0) goto LAB_01c4e28d;
        FUN_00d50b00();
      }
      else if (local_38 == 0) goto LAB_01c4e28d;
      FUN_01cf9ad0();
      FUN_00d50b20();
    }
  }
LAB_01c4e28d:
  if (unaff_RDI[0x2c] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = unaff_RDI[0x2c];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01c8da90();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


