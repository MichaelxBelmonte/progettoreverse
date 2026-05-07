// Function: FUN_015f9150
// Address: 015f9150
// Size: 647 bytes
// Class: MUTempoAnalyzerEvent
// === MUTempoAnalyzerEvent properties ===
//                   _elementTempoEvents
//                   _mergedTimeline
//                   _elementAnalyzer
//                   _sourceDuration
//                   _maxUsedPeriod
//                   _elementsAreTonal


void FUN_015f9150(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  uint8_t uVar5;
  int64_t lVar6;
  char *pcVar7;
  int iVar8;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar9;
  int64_t local_68;
  char local_60 [12];
  float local_54;
  float local_50;
  uint32_t local_4c;
  int64_t *local_48;
  uint8_t local_3a;
  char local_39;
  char local_38 [8];
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_011dfb20();
  local_48 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if ((*(int *)(*(int64_t *)(*arg1 + 0x10) + 0xc) != 0) &&
     (*(int *)(*(int64_t *)(*param_2 + 0x10) + 0xc) != 0)) {
    FUN_00d23340();
    pcVar7 = local_38;
    if (local_60[0] != '\0') {
      pcVar7 = local_60;
    }
    local_38[0] = local_60[0];
    *pcVar7 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    lVar6 = **(int64_t **)(*(int64_t *)(*param_2 + 0x10) + 0x10);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    if (((*(int64_t *)(local_68 + 0x78) != 0) &&
        (lVar2 = *(int64_t *)(*(int64_t *)(local_68 + 0x78) + 0x10), lVar2 != 0)) &&
       (lVar2 == lVar6)) {
      *(void*)(local_68 + 0x78) = 0;
      FUN_00d50b20();
      if (*(int64_t *)(lVar6 + 0x78) != 0) {
        *(void*)(lVar6 + 0x78) = 0;
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar6 = *arg1;
  local_54 = *(float *)(lVar6 + 0x28);
  lVar2 = *param_2;
  local_50 = *(float *)(lVar2 + 0x28);
  local_4c = *(void*)(lVar6 + 0x2c);
  local_3a = *(void*)(lVar6 + 0x50);
  local_39 = *(char *)(lVar2 + 0x50);
  lVar4 = *(int64_t *)(lVar6 + 0x10);
  if (*(int *)(lVar4 + 0xc) == 0) {
    iVar8 = 0;
    lVar6 = *(int64_t *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar6 + 0xc);
    uVar9 = local_4c;
  }
  else {
    iVar8 = 0;
    do {
      lVar2 = **(int64_t **)(lVar4 + 0x10);
      if (lVar2 != 0) {
        FUN_00d50b00();
        lVar6 = *arg1;
      }
      uVar9 = FUN_015f94c0(lVar6,1);
      uVar9 = FUN_015f95c0(uVar9,iVar8);
      if (lVar2 != 0) {
        uVar9 = FUN_00d50b20();
      }
      lVar6 = *arg1;
      lVar4 = *(int64_t *)(lVar6 + 0x10);
      iVar8 = iVar8 + 1;
    } while (*(int *)(lVar4 + 0xc) != 0);
    lVar6 = *(int64_t *)(*param_2 + 0x10);
    iVar1 = *(int *)(lVar6 + 0xc);
  }
  while (iVar1 != 0) {
    lVar6 = **(int64_t **)(lVar6 + 0x10);
    if (lVar6 != 0) {
      uVar9 = FUN_00d50b00();
    }
    uVar9 = FUN_015f94c0(uVar9,1);
    uVar9 = FUN_015f95c0(uVar9,iVar8,param_3,param_4,0);
    if (lVar6 != 0) {
      uVar9 = FUN_00d50b20();
    }
    lVar6 = *(int64_t *)(*param_2 + 0x10);
    iVar8 = iVar8 + 1;
    iVar1 = *(int *)(lVar6 + 0xc);
  }
  uVar5 = 1;
  if (local_39 == '\0') {
    uVar5 = local_3a;
  }
  if (local_50 <= local_54) {
    local_50 = local_54;
  }
  *(float *)(local_48 + 5) = local_50;
  *(void*)((int64_t)local_48 + 0x2c) = local_4c;
  *(void*)(local_48 + 10) = uVar5;
  *this_ptr = local_48;
  *(void*)(this_ptr + 1) = 1;
  return;
}

