// Function: FUN_0192bf20
// Address: 0192bf20
// Size: 552 bytes
// Class: MUDetectionEditorView


void FUN_0192bf20(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  
  lVar2 = *unaff_RSI;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (longlong *)(unaff_RDI + 0xb8);
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = DAT_026d83f8;
        if (DAT_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        FUN_00e8b9a0();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}


