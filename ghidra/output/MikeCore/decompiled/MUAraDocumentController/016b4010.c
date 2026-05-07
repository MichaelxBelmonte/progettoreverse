// Function: FUN_016b4010
// Address: 016b4010
// Size: 1064 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
//   "audioModification->isDeactivatedForUndoHistory()"


void FUN_016b4010(pthread_key_t param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [16];
  int local_50;
  undefined8 local_4c;
  char local_38 [8];
  
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
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_60[0]);
          pcVar4 = local_38;
          if (local_60[0] != '\0') {
            pcVar4 = local_60;
          }
          local_38[0] = local_60[0];
          *pcVar4 = '\0';
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
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
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == unaff_RDI) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_016670a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667050();
            if ((param_2 == 0 & (bVar2 ^ 1)) == 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              if (local_60[0] == '\0') {
                if (local_68 == 0) goto LAB_016b41a8;
                FUN_00d50b00();
                if ((local_60[0] != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_68 == 0) goto LAB_016b41a8;
              local_60[0] = '\0';
              local_4c = 0;
              iVar5 = 0;
              do {
                local_50 = iVar5;
                if (*(int *)(local_68 + 0xc) <= iVar5) {
                  FUN_0049cc10();
                  FUN_00d50b20();
                  goto LAB_016b41a8;
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar1 = FUN_01650890();
                iVar5 = iVar5 + 1;
              } while (cVar1 != '\0');
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              FUN_0049cc10();
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
LAB_016b41a8:
  FUN_00da71b0();
  return;
}


