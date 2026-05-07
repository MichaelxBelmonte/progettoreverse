// Function: FUN_016b84b0
// Address: 016b84b0
// Size: 873 bytes
// Class: MUAraAudioSource
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "playbackRegion->getDocumentController() == documentController"


/* WARNING: Removing unreachable block (ram,0x016b8676) */
/* WARNING: Removing unreachable block (ram,0x016b8659) */
/* WARNING: Removing unreachable block (ram,0x016b8662) */
/* WARNING: Removing unreachable block (ram,0x016b866d) */
/* WARNING: Removing unreachable block (ram,0x016b8695) */
/* WARNING: Removing unreachable block (ram,0x016b869e) */

void FUN_016b84b0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
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
    else if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        FUN_0168a900();
        FUN_01689980();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01654660();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50130();
        cVar1 = FUN_0167b260();
        if (cVar1 == '\0') {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          FUN_01689520();
          if (*(int *)(local_98 + 0xc) != 0) {
            FUN_01689520();
            FUN_00d23310();
            pcVar3 = local_30;
            if (local_40[0] != '\0') {
              pcVar3 = local_40;
            }
            local_30[0] = local_40[0];
            *pcVar3 = '\0';
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
            if ((local_30[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
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


