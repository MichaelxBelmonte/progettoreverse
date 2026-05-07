// Function: FUN_016b8170
// Address: 016b8170
// Size: 701 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "playbackRegion->getDocumentController() == documentController"
//   "headTime != NULL"
//   "tailTime != NULL"


void FUN_016b8170(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong local_48;
  char local_40;
  
  pVar3 = (pthread_key_t)param_1;
  uVar4 = FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), uVar4 = extraout_XMM0_Qa_00, cVar1 == '\0'))
  {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_01654a00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    if (local_48 == unaff_RDI) {
      if (param_2 == (undefined8 *)0x0) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar4,"headTime != NULL");
        }
      }
      else if (param_1 == (undefined8 *)0x0) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar4,"tailTime != NULL");
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f94c0();
        *param_2 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = FUN_012f9500();
        *param_1 = uVar4;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar4,"playbackRegion->getDocumentController() == documentController");
    }
  }
  FUN_00da71b0();
  return;
}


