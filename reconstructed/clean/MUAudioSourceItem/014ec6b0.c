// Function: FUN_014ec6b0
// Address: 014ec6b0
// Size: 540 bytes
// Class: MUAudioSourceItem
// === MUAudioSourceItem properties ===
//   bool            _suggestsSeparateComponentRenderers
//                   _feedbackActivationQualityLimit
//                   _feebackUpperPitchLimit
//                   _feebackLowerPitchLimit
//                   _timeOffset


void* FUN_014ec6b0(double param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  uint64_t uVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  double dVar8;
  double dVar9;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        if (*(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8) != arg1) {
          pvVar4 = _pthread_getspecific((void*)puVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar5 = FUN_014bb920();
          if (((*(int *)(arg1 + 0x98) == 0) || (uVar5 >> 0x20 == 0)) ||
             (cVar2 = FUN_00e7c000(), cVar2 == '\0')) {
            dVar8 = (double)FUN_014bb3e0();
            pvVar4 = _pthread_getspecific((void*)puVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_014bb3e0();
            if ((double)((uint64_t)(dVar8 - dVar9) & g_023908f0) < param_1) {
              FUN_00d21140();
            }
          }
          else {
            FUN_00d21140();
          }
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c810();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

