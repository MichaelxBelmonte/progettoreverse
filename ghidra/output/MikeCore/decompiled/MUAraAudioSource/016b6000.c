// Function: FUN_016b6000
// Address: 016b6000
// Size: 778 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioModification->getDocumentController() == documentController"
//   "!audioModification->isDeactivatedForUndoHistory()"


undefined1 FUN_016b6000(pthread_key_t param_1)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar5;
  longlong local_40;
  char local_38;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((unaff_RSI == (longlong *)0x0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01650890();
        if (cVar1 == '\0') {
          cVar1 = FUN_0167b260();
          if (cVar1 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01650620();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0166b8c0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(param_1);
            plVar5 = unaff_RSI;
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              plVar5 = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar5 + 0x3a0))();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
            unaff_RSI = (longlong *)unaff_RSI[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
          }
          uVar2 = (**(code **)(*unaff_RSI + 0x398))();
        }
        else {
          uVar2 = 1;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}


