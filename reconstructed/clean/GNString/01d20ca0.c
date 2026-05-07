// Function: FUN_01d20ca0
// Address: 01d20ca0
// Size: 584 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01d20ca0(uint64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  int64_t *arg1;
  void*this_ptr;
  int64_t lVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  
  lVar4 = *arg1;
  cVar5 = (char)arg1[1];
  bVar6 = cVar5 == '\0';
  bVar7 = lVar4 == 0;
  if (!bVar7 && !bVar6) {
    FUN_00d50b00();
  }
  cVar2 = FUN_01d526e0();
  if (cVar2 == '\0') goto LAB_01d20e2c;
  FUN_01d21380(g_02390124);
  local_40 = local_60;
  if (lVar4 == local_60) {
    local_40 = lVar4;
    if ((cVar5 == '\0') && (lVar4 != 0)) {
      cVar5 = '\x01';
      if (local_58 == '\0') {
        FUN_00d50b00();
      }
    }
    else if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if (bVar7 || bVar6) goto LAB_01d20d8d;
    FUN_00d50b20();
    cVar5 = '\x01';
  }
  else if (bVar7 || bVar6) {
LAB_01d20d8d:
    cVar5 = '\x01';
  }
  else {
    FUN_00d50b20();
    cVar5 = '\x01';
  }
  FUN_01d21380(g_02390d34);
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_01d52660();
  lVar4 = local_40;
  if (local_60 != 0) {
    FUN_00d50b20();
  }
LAB_01d20e2c:
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0267e0e8;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(void*)(puVar3 + 4) = 0;
  FUN_00d500e0();
  *(int *)(puVar3 + 3) = (int)param_1;
  *(int *)((int64_t)puVar3 + 0x1c) = (int)((uint64_t)param_1 >> 0x20);
  FUN_01d21240();
  lVar1 = puVar3[2];
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    puVar3[2] = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d21240();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((cVar5 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

