// Function: FUN_0164df60
// Address: 0164df60
// Size: 582 bytes
// Class: Unknown


void FUN_0164df60(pthread_key_t param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  void *pvVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_01708f80();
  *(undefined8 *)(unaff_RDI + 0x90) = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d50b00();
  FUN_01667900();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  FUN_01689e60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  uVar1 = FUN_01689e80();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  uVar2 = FUN_01689ec0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01660830();
  uVar3 = FUN_01689f00();
  FUN_01849c30(uVar2,uVar1,uVar3);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


