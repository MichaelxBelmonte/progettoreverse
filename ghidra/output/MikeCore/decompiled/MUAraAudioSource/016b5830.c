// Function: FUN_016b5830
// Address: 016b5830
// Size: 876 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioModification->getDocumentController() == documentController"


longlong FUN_016b5830(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  char local_48;
  char local_38 [8];
  
  uVar5 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        local_60 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b59cc;
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if (DAT_02802f60 != (undefined8 *)0x0) {
          local_60 = 0;
          if ((code *)*DAT_02802f60 != (code *)0x0) {
            (*(code *)*DAT_02802f60)();
            local_60 = 0;
          }
          goto LAB_016b59cc;
        }
      }
      else {
        FUN_01689520();
        pVar4 = (pthread_key_t)uVar5;
        if (*(int *)(local_50 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar5 >> 8),local_58[0]);
          pcVar6 = local_38;
          if (local_58[0] != '\0') {
            pcVar6 = local_58;
          }
          local_38[0] = local_58[0];
          *pcVar6 = '\0';
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar2 = FUN_01653650(), cVar2 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0164e2c0();
          if ((local_58[0] != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_60 == unaff_RDI) {
            pvVar3 = _pthread_getspecific(pVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            lVar1 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_016b4e90(param_1,param_2,&stack0xffffffffffffff70);
            if ((local_58[0] == '\0') && (local_60 != 0)) {
              FUN_00d50b00();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            goto LAB_016b59cc;
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  local_60 = 0;
LAB_016b59cc:
  FUN_00da71b0();
  return local_60;
}


