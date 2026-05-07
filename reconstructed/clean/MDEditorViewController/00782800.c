// Function: FUN_00782800
// Address: 00782800
// Size: 1038 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00782800(void* param_1)

{
  void *pvVar1;
  int iVar2;
  int64_t local_d8;
  char local_d0;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_004f9cf0();
  if ((local_d0 == '\0') && (local_d8 != 0)) {
    FUN_00d50b00();
  }
  if (local_d8 != 0) {
    if (0 < *(int *)(local_d8 + 0xc)) {
      iVar2 = 0;
      do {
        FUN_004f9d80();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        FUN_01275b30();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00782660();
        FUN_012642b0();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6a70();
        pvVar1 = _pthread_getspecific(param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012edae0();
        FUN_00d216c0();
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(local_d8 + 0xc));
    }
    FUN_00115190();
    FUN_00d50b20();
  }
  return;
}

