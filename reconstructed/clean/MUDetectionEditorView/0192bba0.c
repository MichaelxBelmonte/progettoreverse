// Function: FUN_0192bba0
// Address: 0192bba0
// Size: 557 bytes
// Class: MUDetectionEditorView
// === MUDetectionEditorView properties ===
//   MUDetectionEditorRenderStyle _renderStyle


void FUN_0192bba0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar2 = *arg1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      plVar1 = (int64_t *)(this_ptr + 0xb8);
      iVar6 = 0;
      do {
        pVar5 = (void*)param_1;
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d4efa0();
        lVar3 = g_026d83f8;
        if (g_026d83f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_38 = 0;
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_38 = '\x01';
        local_40 = local_68;
        param_1 = 0x20;
        FUN_00e8b850(0x20,&local_40);
        if ((local_38 != '\0') && (local_40 != 0)) {
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
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar2 + 0xc));
    }
    FUN_001159b0();
  }
  return;
}

