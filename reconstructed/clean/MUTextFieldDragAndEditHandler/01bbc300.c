// Function: FUN_01bbc300
// Address: 01bbc300
// Size: 602 bytes
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


int64_t * FUN_01bbc300(double param_1,void*param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *pvVar3;
  uint64_t in_RCX;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  char cVar7;
  int64_t lVar8;
  double dVar9;
  double local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  (**(code **)(&UNK_00001668 + *(int64_t *)*param_2))();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328ff0();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    if (*(int *)(local_70 + 0xc) < 1) {
      uVar4 = 0;
      lVar5 = 0;
    }
    else {
      local_78 = g_02411188;
      lVar8 = 0;
      lVar6 = 0;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        lVar1 = *(int64_t *)(*(int64_t *)(local_70 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_014bb640();
        dVar9 = (double)((uint64_t)(dVar9 - param_1) & g_023908f0);
        lVar5 = lVar6;
        if (dVar9 < local_78) {
          cVar7 = (char)uVar4;
          local_78 = dVar9;
          if (lVar6 == lVar1) {
            if ((cVar7 == '\0') && (lVar6 != 0)) {
              FUN_00d50b00();
              uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            }
          }
          else {
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            uVar4 = CONCAT71((int7)(in_RCX >> 8),1);
            lVar5 = lVar1;
            if ((cVar7 != '\0') && (lVar6 != 0)) {
              FUN_00d50b20();
              uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
            }
          }
        }
        lVar8 = lVar8 + 1;
        in_RCX = uVar4;
        lVar6 = lVar5;
        uVar2 = uVar4 & 0xffffffff;
      } while ((int)lVar8 < *(int *)(local_70 + 0xc));
    }
    FUN_01a021a0();
    FUN_00d50b20();
    *(void*)(this_ptr + 1) = 0;
    if ((char)uVar4 != '\0') goto LAB_01bbc549;
    if (lVar5 != 0) {
      FUN_00d50b00();
      goto LAB_01bbc549;
    }
  }
  lVar5 = 0;
LAB_01bbc549:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

