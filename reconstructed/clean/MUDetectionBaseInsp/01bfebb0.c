// Function: FUN_01bfebb0
// Address: 01bfebb0
// Size: 678 bytes
// Class: MUDetectionBaseInsp
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


void FUN_01bfebb0(void* param_1)

{
  void *pvVar1;
  int64_t this_ptr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int64_t *local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_01bfe010();
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != 0) && (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_40))();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar2 = (float)FUN_0132da20();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      (**(code **)(&UNK_00001668 + *local_40))();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar3 = (float)FUN_0132da70();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01bfe010();
      fVar4 = (float)FUN_01940ca0();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (fVar2 <= fVar3) {
        fVar6 = fVar3 - fVar2;
        fVar3 = g_0239011c / (g_02390124 - fVar2);
        fVar5 = g_0239011c;
      }
      else {
        fVar6 = g_0239011c / fVar2;
        fVar5 = g_02390124;
      }
      if (fVar2 <= fVar4) {
        fVar7 = fVar4 - fVar2;
        fVar4 = g_0239011c / (g_02390124 - fVar2);
        fVar2 = g_0239011c;
      }
      else {
        fVar7 = g_0239011c / fVar2;
        fVar2 = g_02390124;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x928))(fVar5 - fVar3 * fVar6);
      FUN_01b8e060(fVar2 - fVar4 * fVar7);
    }
  }
  FUN_01bfe330();
  return;
}

