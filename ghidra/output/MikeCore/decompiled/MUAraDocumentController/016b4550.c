// Function: FUN_016b4550
// Address: 016b4550
// Size: 1004 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
//   "audioSource->getAudioModifications()->getCount() == 0"


/* WARNING: Removing unreachable block (ram,0x016b47db) */
/* WARNING: Removing unreachable block (ram,0x016b47e4) */

void FUN_016b4550(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660c60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ea0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          FUN_0168a050();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}


