// Function: FUN_01f424c0
// Address: 01f424c0
// Size: 756 bytes
// Class: Unknown

void FUN_01f424c0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char *pcVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_110;
  void*local_108;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80 [8];
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  char local_28 [8];
  
  local_78 = *param_2;
  local_70 = '\0';
  (**(code **)(*arg1 + 0x610))();
  local_48 = local_68;
  local_40 = 0;
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  local_40 = '\x01';
  FUN_00d30620();
  FUN_00d305f0();
  FUN_00d30660();
  FUN_00d305f0();
  local_88 = local_c8;
  local_110 = local_a8;
  FUN_00083ea0(2,&local_110);
  FUN_000b6830();
  local_38 = local_58;
  local_30 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  (**(code **)(*arg1 + 0x6b0))(&local_48,&local_78,&local_38,1);
  FUN_00ca1380();
  lVar1 = local_88;
  pcVar2 = local_28;
  if (local_80[0] != '\0') {
    pcVar2 = local_80;
  }
  local_28[0] = local_80[0];
  *pcVar2 = '\0';
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (local_28[0] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    local_28[0] = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_108 = (void*)&g_0253d630;
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_108 = &g_024c5048;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}

