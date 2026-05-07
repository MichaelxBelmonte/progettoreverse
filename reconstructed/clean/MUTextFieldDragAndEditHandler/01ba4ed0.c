// Function: FUN_01ba4ed0
// Address: 01ba4ed0
// Size: 500 bytes
// Class: MUTextFieldDragAndEditHandler
// === MUTextFieldDragAndEditHandler properties ===
//                   _heightMatrix
//                   _applyOffsetsButton
//                   _inputOutputGroup
//                   _muteSoloGroup
//                   _removedTonalicGroup
//                   _formantSlider
//                   _pitchSlider
//                   _panoramaSlider
//                   _defaultDetectionModePopup
//                   _mainIn
//                   _mainOut
//                   _volumeField
//                   _panoramaField
//                   _pitchField
//                   _formantField
//                   _trackTypePopup
//                   _trackTypeLabel
//                   _copyDetectionPullDown
//                   _generatorObserver
//                   _pannerObserver
//                   _trackObserver
//                   _inDrag
//                   _dragAndEditHandler
//                   _behavesLikeAButton
//                   _glassEffectRect
//                   _glassEffectColor
//                   _charBitmap
//                   _charRects


void FUN_01ba4ed0(void* param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t local_48;
  char local_40;
  
  FUN_01a58dc0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01ba4f27;
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
LAB_01ba4f27:
    plVar1 = (int64_t *)*param_2;
    FUN_000914a0();
    if (plVar1 == (int64_t *)0x0) {
LAB_01ba4f53:
      param_2 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01ba4f53;
    }
    lVar2 = *param_2;
    if (lVar2 != 0) {
      cVar3 = (char)param_2[1];
      if (cVar3 != '\0') {
        FUN_00d50b00();
      }
      goto joined_r0x01ba4f87;
    }
  }
  cVar3 = '\x01';
  lVar2 = local_48;
joined_r0x01ba4f87:
  if (lVar2 != 0) {
    FUN_019c1990();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    if (local_48 != 0) {
      if (0 < *(int *)(local_48 + 0xc)) {
        lVar6 = 0;
        do {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar4 = FUN_01334f30();
        } while ((cVar4 == '\0') && (lVar6 = lVar6 + 1, lVar6 < *(int *)(local_48 + 0xc)));
      }
      FUN_00d50b20();
    }
  }
  FUN_01e262d0();
  if ((cVar3 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}

