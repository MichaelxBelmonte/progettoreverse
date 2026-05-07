// Function: FUN_00d3b530
// Address: 00d3b530
// Size: 823 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d3b530(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t lVar5;
  void*arg1;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  FUN_00d50cd0();
  cVar4 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  lVar3 = g_0277d7c0;
  if (cVar4 == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if (g_0277d7c0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  lVar5 = lVar2;
  if (lVar2 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_00d3b5df;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x20);
      *(int64_t *)(this_ptr + 0x20) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00d3b5df:
      *(int64_t *)(this_ptr + 0x20) = lVar5;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027e7c20;
  plVar1 = (int64_t *)*arg1;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  lVar2 = *(int64_t *)(this_ptr + 0x38);
  lVar5 = lVar2;
  if (lVar2 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_00d3b690;
      }
      FUN_00d50b00();
      lVar2 = *(int64_t *)(this_ptr + 0x38);
      *(int64_t *)(this_ptr + 0x38) = local_38;
    }
    else {
      local_30 = '\0';
LAB_00d3b690:
      *(int64_t *)(this_ptr + 0x38) = lVar5;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d4efa0();
  lVar3 = g_0277d7f0;
  plVar1 = (int64_t *)*arg1;
  if (g_0277d7f0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x578))();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00c841b0();
  lVar2 = *(int64_t *)(this_ptr + 0x30);
  lVar5 = lVar2;
  if (lVar2 == local_38) goto LAB_00d3b7dc;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_00d3b79a;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x30);
    *(int64_t *)(this_ptr + 0x30) = local_38;
  }
  else {
    local_30 = '\0';
LAB_00d3b79a:
    *(int64_t *)(this_ptr + 0x30) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_00d3b7dc:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

