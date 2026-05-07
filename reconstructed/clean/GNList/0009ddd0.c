// Function: FUN_0009ddd0
// Address: 0009ddd0
// Size: 796 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_0009ddd0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t **pplVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  uint32_t uVar8;
  int64_t *local_40;
  char local_38;
  char local_30 [8];
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == plVar4) {
    FUN_00d50b20();
LAB_0009de29:
    plVar4 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    *(int64_t **)(this_ptr + 0x90) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      goto LAB_0009de29;
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0x10);
  if (plVar1 != plVar4) {
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    *(int64_t **)(this_ptr + 0x10) = plVar4;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(void*)(puVar5 + 6) = 0;
  *puVar5 = &g_02516280;
  (*g_02516298)();
  FUN_006c5420();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_006c5fa0();
  FUN_006c5f80();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x958))();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x918))();
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x928))();
  lVar2 = g_026d8e50;
  if (g_026d8e50 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x948))();
  if (*(int64_t *)(this_ptr + 0x88) == 0) {
    return;
  }
  FUN_01e40eb0();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pplVar7 = &local_40;
  FUN_01e40eb0();
  plVar1 = local_40;
  FUN_000a94a0();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_0009dffd;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_0009dffd:
  plVar1 = *pplVar7;
  local_30[0] = *(char *)(pplVar7 + 1);
  pplVar6 = (int64_t **)local_30;
  if (local_30[0] != '\0') {
    pplVar6 = pplVar7 + 1;
  }
  *(void*)pplVar6 = 0;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x478))();
  plVar4 = *(int64_t **)(this_ptr + 0x90);
  lVar2 = *(int64_t *)(this_ptr + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar8 = (**(code **)(*plVar4 + 0x450))();
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  if (lVar2 != 0) {
    uVar8 = FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x9e0))(uVar8,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_30[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

