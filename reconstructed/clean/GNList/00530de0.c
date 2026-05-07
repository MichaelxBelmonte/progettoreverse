// Function: FUN_00530de0
// Address: 00530de0
// Size: 1603 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00530de0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  char local_39;
  
  FUN_00d3ecf0();
  plVar7 = local_50;
  local_d0 = local_50;
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) {
      local_d0 = (int64_t *)0x0;
      local_c8 = 1;
      plVar7 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_c8 = 1;
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_c8 = 1;
  }
  FUN_000914a0();
  if (plVar7 == (int64_t *)0x0) {
LAB_00530e46:
    pplVar4 = &g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_00530e46;
    pplVar4 = &local_d0;
  }
  plVar1 = *pplVar4;
  local_39 = *(char *)(pplVar4 + 1);
  if ((local_39 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_70 = plVar1;
  if (plVar7 == this_ptr) {
LAB_00530f6e:
    uVar10 = FUN_00d3ed20();
    local_58 = local_50;
    if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_0270b900;
    if (g_0270b900 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_c0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_00531011:
      pplVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa;
      if (cVar3 == '\0') goto LAB_00531011;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_60 = plVar1;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_0270b908;
    if (g_0270b908 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_b0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_005310d0:
      pplVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa_00;
      if (cVar3 == '\0') goto LAB_005310d0;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_68 = plVar1;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_0270b910;
    if (g_0270b910 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_a0);
    plVar1 = local_50;
    uVar10 = FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_00531193:
      pplVar4 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Qa_01;
      if (cVar3 == '\0') goto LAB_00531193;
    }
    plVar1 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        uVar10 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    lVar2 = g_0270b918;
    if (g_0270b918 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    pplVar4 = &local_50;
    FUN_000175c0(uVar10,&local_90);
    plVar8 = local_50;
    FUN_00053ac0();
    if (plVar8 == (int64_t *)0x0) {
      pplVar4 = &g_02802688;
      plVar8 = g_02802688;
      if (g_02802690 != '\0') goto LAB_00531262;
LAB_00531281:
      plVar6 = local_60;
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      (**(code **)(*plVar8 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') {
        pplVar4 = &g_02802688;
      }
      plVar8 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') goto LAB_00531281;
LAB_00531262:
      *(void*)(pplVar4 + 1) = 0;
      plVar6 = local_60;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((((plVar6 != (int64_t *)0x0) && (local_68 != (int64_t *)0x0)) &&
        (plVar1 != (int64_t *)0x0)) && (plVar8 != (int64_t *)0x0)) {
      lVar2 = this_ptr[0x22];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_00d45bc0();
      uVar11 = FUN_00d45bc0();
      uVar12 = FUN_00d45bc0();
      uVar9 = FUN_00d45bc0();
      FUN_0015db00(uVar10,uVar11,uVar12,uVar9);
      plVar6 = local_60;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (plVar1 == (int64_t *)0x0) goto LAB_005313ea;
    (**(code **)(*plVar1 + 0x988))();
    FUN_0051b4f0();
    plVar1 = local_80;
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_50 = plVar1;
    local_48 = '\0';
    cVar3 = FUN_00d23d70();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') goto LAB_00530f6e;
  }
  if ((local_39 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_005313ea:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

