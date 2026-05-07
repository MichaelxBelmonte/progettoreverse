// Function: FUN_015faee0
// Address: 015faee0
// Size: 608 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015faee0(int param_1,int param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  void*puVar4;
  char *pcVar5;
  int64_t arg1;
  void*this_ptr;
  int iVar6;
  int iVar7;
  int64_t local_68;
  char local_60 [8];
  char local_38;
  
  iVar6 = *(int *)(*(int64_t *)(arg1 + 0x10) + 0xc) - param_2;
  if (iVar6 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_011dfb20();
    (**(code **)(*plVar3 + 0x18))();
    FUN_00d21370();
    iVar7 = 0;
    do {
      lVar1 = *(int64_t *)
               (*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)param_2 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_015f94c0();
      FUN_015f95c0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar7 = iVar7 + 1;
    } while (iVar6 != iVar7);
    FUN_00d23340();
    pcVar5 = &stack0xffffffffffffffc8;
    if (local_60[0] != '\0') {
      pcVar5 = local_60;
    }
    local_38 = local_60[0];
    *pcVar5 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    lVar1 = **(int64_t **)(plVar3[2] + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if (param_1 == 0) {
      if (*(int64_t *)(local_68 + 0x78) != 0) {
        *(void*)(local_68 + 0x78) = 0;
        FUN_00d50b20();
      }
      if (*(int64_t *)(lVar1 + 0x78) != 0) {
        *(void*)(lVar1 + 0x78) = 0;
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025c6af0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = lVar1;
      *(int *)((int64_t)puVar4 + 0xc) = param_1;
      puVar2 = *(void**)(local_68 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(void**)(local_68 + 0x78) = puVar4;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_025c6af0;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[2] = 0;
      FUN_00d500e0();
      puVar4[2] = local_68;
      *(int *)((int64_t)puVar4 + 0xc) = param_1;
      puVar2 = *(void**)(lVar1 + 0x78);
      if (puVar2 == puVar4) {
        FUN_00d50b20();
      }
      else {
        *(void**)(lVar1 + 0x78) = puVar4;
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    *this_ptr = plVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

