// Function: FUN_0192c7a0
// Address: 0192c7a0
// Size: 514 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


uint64_t FUN_0192c7a0(void* param_1,int param_2)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t local_80;
  char local_78;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  if (param_2 != 0) {
    uVar4 = FUN_01caeac0();
    FUN_0192b8f0();
    if (local_78 == '\0') {
      if (local_80 == 0) {
        return 1;
      }
      FUN_00d50b00();
    }
    else if (local_80 == 0) {
      return 1;
    }
    if (0 < *(int *)(local_80 + 0xc)) {
      iVar3 = 0;
      do {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if (local_58 == 0) {
          cVar1 = '\0';
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01264240();
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01334f30();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266020(uVar4);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_80 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return 1;
}

