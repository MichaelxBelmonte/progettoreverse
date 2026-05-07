// Function: FUN_012d3130
// Address: 012d3130
// Size: 1409 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_012d3130(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t *local_50;
  char local_48;
  int local_38;
  
  FUN_01f27fe0();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_01f27fe0();
    (**(code **)(*(int64_t *)(this_ptr + 0xe8) + 0x10))();
    FUN_00d50b00();
    FUN_01f474f0();
    if ((int64_t *)(this_ptr + 0xe8) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0xe8) + 0x10))();
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((g_028ac87a != '\0') && (*(int *)(*(int64_t *)(this_ptr + 0x108) + 0xc) != 0)) {
    FUN_01311d20();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_01311d20();
      FUN_013fb6a0();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01311cc0();
    }
  }
  lVar4 = *(int64_t *)(this_ptr + 0x108);
  if (lVar4 != 0) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    local_38 = -1;
    while( true ) {
      lVar3 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_38) break;
      local_50 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar3 * 8);
      (**(code **)(*local_50 + 0x370))();
    }
    FUN_01312d90();
  }
  FUN_00d216c0();
  (**(code **)(**(int64_t **)(this_ptr + 0x110) + 0x370))();
  (**(code **)(**(int64_t **)(this_ptr + 0x118) + 0x370))();
  FUN_00b342a0();
  lVar4 = *(int64_t *)(this_ptr + 0xf8);
  lVar3 = *(int64_t *)(this_ptr + 0x170);
  if (*(int64_t *)(lVar3 + 0x10) == lVar4) {
    plVar1 = *(int64_t **)(lVar3 + 0x18);
    lVar4 = *(int64_t *)(this_ptr + 0x178);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') goto LAB_012d345b;
    lVar4 = *(int64_t *)(this_ptr + 0xf8);
    lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + 0x10);
    if (lVar4 != lVar3) goto LAB_012d3395;
  }
  else {
    lVar3 = *(int64_t *)(lVar3 + 0x10);
    if (lVar4 != lVar3) {
LAB_012d3395:
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *(int64_t *)(this_ptr + 0xf8) = lVar3;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
  }
  local_50 = *(int64_t **)(*(int64_t *)(this_ptr + 0x170) + 0x18);
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = '\0';
  FUN_00d243f0();
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_012d345b:
  if (*(int64_t *)(*(int64_t *)(this_ptr + 0x170) + 0x20) != 0) {
    FUN_00cbcef0();
    (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
    FUN_00d50b00();
    FUN_00cbc3f0();
    if ((int64_t *)(this_ptr + 0xf0) != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)(this_ptr + 0xf0) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x170) + 0x28);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_012d21a0();
  if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    for (lVar4 = 0; (int)lVar4 < *(int *)((int64_t)local_50 + 0xc); lVar4 = lVar4 + 1) {
      (**(code **)(**(int64_t **)(local_50[2] + lVar4 * 8) + 0x370))();
    }
    FUN_00540a20();
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x170) != 0) {
    *(void*)(this_ptr + 0x170) = 0;
    FUN_00d50b20();
  }
  FUN_012d0880();
  lVar4 = *(int64_t *)(this_ptr + 0x130);
  if (lVar4 != 0) {
    for (lVar3 = 0; (int)lVar3 < *(int *)(lVar4 + 0xc); lVar3 = lVar3 + 1) {
      (**(code **)(**(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar3 * 8) + 0x370))();
    }
    FUN_00540a20();
  }
  if (*(int64_t *)(this_ptr + 0x210) != 0) {
    *(void*)(this_ptr + 0x210) = 0;
    FUN_00d50b20();
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x1a8) + 0x1c) !=
      *(int *)(*(int64_t *)(this_ptr + 0x1a8) + 0x20)) {
    do {
      FUN_012d3980();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    } while (*(int *)(*(int64_t *)(this_ptr + 0x1a8) + 0x1c) !=
             *(int *)(*(int64_t *)(this_ptr + 0x1a8) + 0x20));
  }
  FUN_012d3a20();
  FUN_012d4010();
  return;
}

