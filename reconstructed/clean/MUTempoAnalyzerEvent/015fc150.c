// Function: FUN_015fc150
// Address: 015fc150
// Size: 901 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void* FUN_015fc150(uint32_t param_1,void*param_2,void*param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  void*this_ptr;
  int iVar9;
  uint32_t uVar10;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t *local_40;
  char local_38;
  
  plVar3 = local_40;
  FUN_015fc700();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (0 < *(int *)((int64_t)local_40 + 0xc)) {
    iVar9 = 0;
    do {
      plVar4 = local_40;
      lVar1 = *(int64_t *)(plVar3[2] + (int64_t)iVar9 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_d8 = *param_2;
      local_d0 = 0;
      local_c8 = *param_3;
      local_c0 = 0;
      FUN_015f9f10(param_1,&local_d8,&local_c8);
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_b8 = *param_2;
      local_b0 = 0;
      local_a8 = *param_3;
      local_a0 = 0;
      uVar10 = FUN_015fa320(param_1,&local_b8,&local_a8);
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        uVar10 = FUN_00d50b00();
      }
      FUN_00d23370(uVar10,0);
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_011e4bb0();
      (**(code **)(*plVar7 + 0x18))();
      plVar2 = (int64_t *)plVar7[2];
      if (plVar2 != local_40) {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        plVar7[2] = (int64_t)local_40;
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d21140();
      plVar2 = plVar7;
      if (*(int *)((int64_t)local_40 + 0xc) < 1) {
LAB_015fc464:
        local_40 = plVar2;
        FUN_00d50b20();
      }
      else {
        lVar8 = 0;
        do {
          plVar2 = *(int64_t **)(local_40[2] + lVar8 * 8);
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          iVar5 = FUN_00d237a0();
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if (iVar5 != -1) {
            FUN_00d23620();
            iVar9 = iVar9 - (uint)(iVar5 <= iVar9);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((int64_t)local_40 + 0xc));
        local_40 = plVar2;
        if (plVar7 != (int64_t *)0x0) goto LAB_015fc464;
      }
      local_38 = '\0';
      FUN_00d50b20();
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int64_t)plVar3 + 0xc));
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

