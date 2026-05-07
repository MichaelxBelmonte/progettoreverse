// Function: FUN_016b9ed0
// Address: 016b9ed0
// Size: 597 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentType)"


byte FUN_016b9ed0(pthread_key_t param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    bVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (bVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        bVar2 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        cVar1 = FUN_0172c0d0();
        if (cVar1 == '\0') {
          bVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            bVar2 = 0;
          }
        }
        else {
          FUN_016acc10();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01667e90();
          bVar2 = 1;
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_01667df0();
            bVar2 = bVar2 ^ 1;
          }
        }
      }
      else {
        bVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return bVar2;
}


