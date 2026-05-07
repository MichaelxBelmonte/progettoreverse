// Function: FUN_00c91010
// Address: 00c91010
// Size: 505 bytes
// Class: Unknown
// String references:
//   "%i:"
//   "%@"
//   ",..., %@"
//   "(%f,%f,%f,%f)"
//   ", %@"

void FUN_00c91010(uint64_t param_1,uint param_2)

{
  uint *puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  void*this_ptr;
  uint uVar5;
  uint32_t uVar6;
  void*local_a8;
  uint32_t local_a0;
  uint local_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint64_t local_88;
  void*local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  uVar5 = param_2 + 0xf;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  uVar5 = (int)uVar5 >> 4;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025795a8;
  uVar6 = (*g_025795c0)();
  local_88 = (uint64_t)param_2;
  local_38 = puVar3;
  if (0x20f < (int)param_2) {
    local_a0 = 1;
    local_a8 = &g_024cc6f0;
    local_9c = uVar5;
    FUN_00d94d80(uVar6,&local_a8);
    uVar5 = 0x20;
  }
  FUN_00d8db40();
  if (0 < (int)uVar5) {
    lVar4 = 0;
    do {
      puVar1 = (uint *)(arg1 + lVar4);
      local_9c = *puVar1;
      uStack_98 = puVar1[1];
      uStack_94 = puVar1[2];
      uStack_90 = puVar1[3];
      local_a0 = 4;
      local_a8 = (void*)&g_026b2400;
      uVar6 = FUN_00d8cb40(",..., %@",&local_a8);
      lVar2 = local_48;
      local_60 = 1;
      local_68 = &g_024c5048;
      local_50 = 0;
      if (local_48 != 0) {
        uVar6 = FUN_00d50b00();
      }
      puVar3 = local_38;
      local_58 = lVar2;
      local_50 = '\x01';
      FUN_00d94d80(uVar6,&local_68);
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 0x10;
    } while ((uint64_t)uVar5 << 4 != lVar4);
  }
  FUN_00d8db40();
  FUN_00d8c7d0();
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

