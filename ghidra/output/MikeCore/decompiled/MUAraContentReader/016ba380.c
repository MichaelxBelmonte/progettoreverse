// Function: FUN_016ba380
// Address: 016ba380
// Size: 749 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "!audioSource->isDeactivatedForUndoHistory()"
//   "contentTypesCount > 0"
//   "contentTypes != NULL"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentTypes[i])"


void FUN_016ba380(longlong param_1,longlong param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  pVar3 = (pthread_key_t)param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        if (param_2 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else if (param_1 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          lVar4 = 0;
          do {
            cVar1 = FUN_0172c0d0();
            if (cVar1 == '\0') {
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              goto LAB_016ba441;
            }
            lVar4 = lVar4 + 1;
          } while (param_2 != lVar4);
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_016670a0();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667ea0();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
  }
LAB_016ba441:
  FUN_00da71b0();
  return;
}


