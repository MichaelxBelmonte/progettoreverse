// Function: FUN_00c1f910
// Address: 00c1f910
// Size: 995 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00c1f910(void*param_1,uint32_t param_2)

{
  void*puVar1;
  int64_t *arg1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  void*puVar5;
  uint8_t uVar6;
  void*local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  void*local_88;
  int64_t *local_70;
  char local_68;
  void*local_48;
  void*local_40;
  char local_38;
  
  local_88 = param_1;
  FUN_00d470c0(0);
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  (*g_02572370)();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00d21140();
  FUN_00d50b20();
  if (*arg1 == 0) {
    bVar3 = false;
    bVar2 = false;
    local_48 = (void*)0x0;
  }
  else {
    FUN_00b88600();
    (**(code **)(*local_70 + 0x390))();
    local_48 = local_40;
    bVar2 = local_40 != (void*)0x0;
    if (bVar2) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b88600();
    (**(code **)(*local_70 + 0x368))();
    bVar3 = local_40 != (void*)0x0;
    if (bVar3) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00b7a6d0();
    FUN_00d470c0();
    FUN_00c1f6a0();
    if (puVar1 != local_40) {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      puVar1 = local_40;
    }
  }
  uVar6 = 0;
  puVar5 = puVar1;
  uVar4 = FUN_00d459e0();
  local_a8 = local_48;
  local_a0 = 0;
  local_98 = *local_88;
  local_90 = 0;
  FUN_00c1ffc0(uVar4,&local_a8,param_2,&local_98,puVar5,uVar6);
  if ((bVar3) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

