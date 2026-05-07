// Function: FUN_00ca5c10
// Address: 00ca5c10
// Size: 882 bytes
// Class: GNList
// String references:
//   "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<plist version=\"1.0\">\n"
//   "</plist>\n"
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00ca5c10(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  int64_t local_d8;
  char local_d0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_0256d868;
  plVar5[2] = 0;
  *(void*)((int64_t)plVar5 + 0x1c) = 0;
  *(void*)((int64_t)plVar5 + 0x24) = 0;
  *(void*)((int64_t)plVar5 + 0x2c) = 0;
  (*g_0256d880)();
  uVar7 = FUN_00cccf90();
  uVar1 = g_025908a0;
  uVar7 = FUN_00d8cb40(uVar7,g_025908a0);
  lVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  local_48 = lVar2;
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_68 = local_40;
  local_60 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  lVar2 = local_48;
  local_60 = '\x01';
  FUN_00ccdbb0(uVar7,&local_68);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  uVar7 = FUN_00ca2870(0,&stack0xffffffffffffff48);
  if (arg1 != 0) {
    uVar7 = FUN_00d50b20();
  }
  uVar7 = FUN_00d8cb40(uVar7,uVar1);
  lVar6 = local_40;
  lVar3 = lVar2;
  if (lVar2 != local_40) {
    if (local_38 != '\0') {
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b20();
      }
      goto LAB_00ca5e72;
    }
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
    lVar3 = lVar6;
    if (lVar2 != 0) {
      uVar7 = FUN_00d50b20();
    }
  }
  lVar6 = lVar3;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
LAB_00ca5e72:
  uVar7 = FUN_00d8cbf0(uVar7,6);
  local_58 = local_40;
  local_50 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_50 = '\x01';
  FUN_00ccdbb0(uVar7,&local_58);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x368))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
}

