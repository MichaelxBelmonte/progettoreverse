// Function: FUN_01c92050
// Address: 01c92050
// Size: 619 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c92050(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  FUN_00d243f0();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  lVar1 = *param_2;
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x28) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

