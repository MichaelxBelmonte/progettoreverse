// Function: FUN_015fbe40
// Address: 015fbe40
// Size: 525 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fbe40(uint64_t param_1,uint param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  code *pcVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t *arg1;
  void*this_ptr;
  uint uVar10;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  uVar10 = param_2;
  if (0 < (int)param_2) {
    do {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*pcVar4)();
      FUN_00d21140();
      FUN_00d50b20();
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar8 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      lVar2 = *(int64_t *)(lVar7 + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar10 = *(uint *)(lVar2 + 0xc);
      if (0 < (int)uVar10) {
        uVar9 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + uVar9 * 8);
          if (lVar3 != 0) {
            FUN_00d50b00();
          }
          iVar1 = *(int *)(lVar3 + 0xc);
          if ((-1 < iVar1) && (iVar1 < (int)param_2)) {
            FUN_00d21140();
          }
          FUN_00d50b20();
          uVar9 = uVar9 + 1;
        } while (uVar10 != uVar9);
      }
      FUN_00d50b20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      lVar8 = lVar8 + 1;
      lVar7 = *arg1;
    } while (lVar8 < *(int *)(lVar7 + 0xc));
  }
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      FUN_00d242c0();
      uVar9 = uVar9 + 1;
    } while (param_2 != uVar9);
  }
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

