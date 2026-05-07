// Function: FUN_00d2a010
// Address: 00d2a010
// Size: 507 bytes
// Class: GNSerialNumber
// String references:
//   " %@"
//   "%@"
//   " version:%01X"
//   " flags:%06X"
//   " product:%03X"
//   " id:%09llX"

void FUN_00d2a010(void)

{
  void*puVar1;
  int64_t arg1;
  void*this_ptr;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint32_t local_48;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4ffd0();
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_48 = 1;
  local_50 = (void*)&g_025732e0;
  local_44 = CONCAT31(local_44._1_3_,*(void*)(arg1 + 0xc));
  FUN_00d94d80(&g_025732e0,&local_50);
  local_44 = *(void*)(arg1 + 0x10);
  local_48 = 1;
  local_50 = (void*)&g_02572a48;
  FUN_00d94d80(&g_02572a48,&local_50);
  local_44 = *(void*)(arg1 + 0x14);
  local_48 = 1;
  local_50 = (void*)&g_02572a80;
  FUN_00d94d80(&g_02572a80,&local_50);
  local_40 = *(void*)(arg1 + 0x18);
  local_48 = 1;
  local_50 = (void*)&g_02572ab8;
  FUN_00d94d80(&g_02572ab8,&local_50);
  FUN_00d25b40();
  local_48 = 1;
  local_50 = &g_024c5048;
  local_38 = 0;
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_40 = local_60;
  local_38 = '\x01';
  FUN_00d94d80();
  local_50 = &g_024c5048;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

