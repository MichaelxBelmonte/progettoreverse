// Function: FUN_016b5480
// Address: 016b5480
// Size: 754 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"


longlong FUN_016b5480(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar6 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b561c;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if (DAT_02802f60 != (undefined8 *)0x0) {
          lVar6 = 0;
          if ((code *)*DAT_02802f60 != (code *)0x0) {
            (*(code *)*DAT_02802f60)();
          }
          goto LAB_016b561c;
        }
      }
      else {
        FUN_01689520();
        pVar3 = (pthread_key_t)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          lVar6 = local_50;
          pVar3 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
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
          lVar6 = local_50;
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 == unaff_RDI) {
            local_80 = 0;
            local_78 = 0;
            FUN_016b4e90(param_1,param_2,&local_80);
            lVar6 = local_50;
            if (local_48[0] == '\0') {
              if (local_50 == 0) goto LAB_016b561c;
              FUN_00d50b00();
            }
            else if (local_50 == 0) goto LAB_016b561c;
            FUN_00d50b20();
            goto LAB_016b561c;
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  lVar6 = 0;
LAB_016b561c:
  FUN_00da71b0();
  return lVar6;
}


