// Function: FUN_017b2910
// Address: 017b2910
// Size: 1096 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_017b2910(void* param_1,uint8_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  void*arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int64_t *local_48;
  char local_40;
  void*local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) goto LAB_017b2c43;
    FUN_00d50b00();
  }
  else if (local_48 == (int64_t *)0x0) goto LAB_017b2c43;
  FUN_017aae40();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  uVar7 = extraout_XMM0_Da;
  if (local_48 != (int64_t *)0x0) {
    uVar7 = FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_017ab350(uVar7,param_2);
    FUN_00d50b20();
    return;
  }
  FUN_017a9f30();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_026034e8;
    puVar3[0xc] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(void*)((int64_t)puVar3 + 0x55) = 0;
    FUN_00d500e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017b31f0();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
  FUN_017aa1e0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_48 + 0x50))();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_00d50b20();
LAB_017b2c43:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025f02c0;
  pVar6 = 0x25f0658;
  puVar3[2] = &g_025f0658;
  puVar3[3] = 0;
  *(void*)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  (*g_025f02d8)();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_026034e8;
  puVar3[0xc] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  *(void*)((int64_t)puVar3 + 0x55) = 0;
  FUN_00d500e0();
  pvVar4 = _pthread_getspecific(pVar6);
  local_38 = puVar3;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    local_38 = (void*)puVar3[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  FUN_015abbd0();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_017b2caa;
    }
    if (local_38[7] == 0) goto LAB_017b2cfe;
    local_38[7] = 0;
LAB_017b2ce9:
    FUN_00d50b20();
  }
  else {
    local_40 = '\0';
LAB_017b2caa:
    plVar1 = (int64_t *)local_38[7];
    if (plVar1 != local_48) {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_38[7] = local_48;
      if (plVar1 != (int64_t *)0x0) goto LAB_017b2ce9;
    }
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_017b2cfe:
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

