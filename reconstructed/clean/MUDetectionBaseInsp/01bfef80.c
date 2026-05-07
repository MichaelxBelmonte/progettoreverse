// Function: FUN_01bfef80
// Address: 01bfef80
// Size: 587 bytes
// Class: MUDetectionBaseInsp
// === MUDetectionBaseInsp properties ===
//                   _spectrumBlendingSlider
//                   _tempoSlider
//                   _activationSlider


uint64_t FUN_01bfef80(void* param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int64_t this_ptr;
  int64_t *local_68;
  char local_60;
  int64_t local_30;
  char local_28;
  
  if (param_2 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x930))();
    FUN_01b8e080();
    FUN_01bfe010();
    (**(code **)(&UNK_00001668 + *local_68))();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132da20();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    iVar1 = FUN_01caecd0();
    if (iVar1 != 1) {
      iVar1 = FUN_01caecd0();
      if (iVar1 == 2) {
        FUN_01bfe010();
        FUN_01940b70();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01bfe010();
        FUN_01940c40();
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return 1;
}

