// Function: FUN_016b38f0
// Address: 016b38f0
// Size: 835 bytes
// Class: MUAraDocumentController
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->getContentReaders()->getCount() == 0"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"


void FUN_016b38f0(pthread_key_t param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (extraout_XMM0_Qa_01,"documentController->isHostEditingDocument()");
        }
      }
      else {
        uVar4 = FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          uVar4 = FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            uVar4 = (*(code *)*DAT_02802f60)
                              (uVar4,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            uVar4 = FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), uVar4 = extraout_XMM0_Qa_02, cVar1 == '\0')
           ) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            if (param_2 == (undefined8 *)0x0) {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_01666eb0();
              FUN_01668800(0,uVar4);
            }
            else {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01668800(*param_2,param_2[1]);
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)
                      (uVar4,"audioSource->getDocumentController() == documentController");
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}


