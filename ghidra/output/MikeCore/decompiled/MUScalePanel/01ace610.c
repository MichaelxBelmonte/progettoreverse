// Function: FUN_01ace610
// Address: 01ace610
// Size: 743 bytes
// Class: MUScalePanel


/* WARNING: Removing unreachable block (ram,0x01ace79c) */
/* WARNING: Removing unreachable block (ram,0x01ace7a9) */

ulonglong FUN_01ace610(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char unaff_SIL;
  ulonglong unaff_RDI;
  double dVar3;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_30 == '\0') && (local_38 != 0)) {
      FUN_00d50b00();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507970();
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01508610();
    }
    if ((unaff_RDI >> 0x20 != 0) && (cVar1 = FUN_00e7c6b0(), cVar1 == '\0')) {
      FUN_00e7c2a0();
    }
    FUN_00e7bdc0();
    auVar4._0_8_ = FUN_00e7c860();
    auVar4._8_8_ = extraout_XMM0_Qb;
    auVar4 = roundsd(auVar4,auVar4,9);
    dVar3 = (double)FUN_00e7c860();
    if ((dVar3 != (double)(int)auVar4._0_8_) || (NAN(dVar3) || NAN((double)(int)auVar4._0_8_))) {
      if (((int)(unaff_RDI >> 0x20) == 0) || (cVar1 = FUN_00e7c6b0(), cVar1 != '\0')) {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
      else {
        FUN_00e7c2a0();
        FUN_00e7b970();
      }
    }
    if (local_38 != 0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


