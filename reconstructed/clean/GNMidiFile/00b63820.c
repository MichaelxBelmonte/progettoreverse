// Function: FUN_00b63820
// Address: 00b63820
// Size: 1518 bytes
// Class: GNMidiFile
// === GNMidiFile properties ===
//   GNMidiFileTimeBase _timeBase


void* FUN_00b63820(void)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  void*this_ptr;
  uint64_t uVar6;
  double dVar7;
  void*local_140;
  uint8_t local_138;
  int64_t local_130;
  uint8_t local_128;
  void*local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  int64_t local_e0;
  uint8_t local_d8;
  void*local_d0;
  uint8_t local_c8;
  int64_t local_68;
  char local_60;
  int local_40;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_02572358;
  uVar6 = (*g_02572370)();
  lVar2 = *(int64_t *)(*arg1 + 0x50);
  if (lVar2 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_138 = 0;
  local_140 = puVar1;
  FUN_00b65690(uVar6,&local_140);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *arg1;
  if (*(int *)(lVar2 + 0x40) != 0) {
    FUN_00b65500();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_00d21140();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    lVar2 = *arg1;
  }
  lVar2 = *(int64_t *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_128 = 1;
  local_118 = 0;
  local_130 = lVar2;
  local_120 = puVar1;
  FUN_00b65690();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = *arg1;
  dVar7 = *(double *)(lVar2 + 0x18);
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    FUN_00b65350();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    dVar7 = (double)FUN_00d21140();
    if (local_68 != 0) {
      dVar7 = (double)FUN_00d50b20();
    }
    lVar2 = *arg1;
  }
  lVar2 = *(int64_t *)(lVar2 + 0x20);
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_110 = *(void*)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar3 * 8);
      local_108 = 0;
      FUN_00b64e00();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67310();
  }
  lVar3 = *(int64_t *)(*arg1 + 0x28);
  if (lVar3 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      local_100 = *(void*)(*(int64_t *)(lVar3 + 0x10) + 8 + lVar4 * 8);
      local_f8 = 0;
      FUN_00b64fc0();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b673b0();
  }
  lVar4 = *(int64_t *)(*arg1 + 0x30);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_40 = -1;
    while( true ) {
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar4 + 0xc) <= local_40) break;
      local_f0 = *(void*)(*(int64_t *)(lVar4 + 0x10) + 8 + lVar5 * 8);
      local_e8 = 0;
      FUN_00b65220();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      FUN_00b5da10();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    dVar7 = (double)FUN_00b67450();
  }
  lVar5 = *(int64_t *)(*arg1 + 0x38);
  if (lVar5 != 0) {
    dVar7 = (double)FUN_00d50b00();
  }
  local_d8 = 1;
  local_c8 = 0;
  local_e0 = lVar5;
  local_d0 = puVar1;
  FUN_00b65770(dVar7,&local_d0);
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

