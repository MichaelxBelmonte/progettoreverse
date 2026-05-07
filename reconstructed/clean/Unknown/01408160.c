// Function: FUN_01408160
// Address: 01408160
// Size: 1741 bytes
// Class: Unknown
// String references:
//   "%@is"
//   "%@%@%@"

int64_t * FUN_01408160(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*puVar5;
  int64_t *this_ptr;
  void*local_118;
  void*local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d8c7a0();
  FUN_00d99300();
  if ((local_80 == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d99300();
  puVar3 = local_c8;
  if (local_c8 != (void*)0x0) {
    FUN_00d50b00();
  }
  FUN_00d8cb40();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_108 = local_48;
  local_100 = '\0';
  cVar4 = FUN_00d90870();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_0140880f;
  }
  FUN_00d8c7a0();
  FUN_00d8c7a0();
  FUN_00d97ce0();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  local_f8 = g_027cd570;
  if (g_027cd570 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  FUN_00d8dbf0();
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7a0();
  FUN_00d8f140();
  lVar1 = g_027c09c0;
  while( true ) {
    g_027c09c0 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = lVar1;
    cVar4 = FUN_00d90870();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_027cd570;
    if (cVar4 == '\0') break;
    if (g_027cd570 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar1;
    local_d0 = '\x01';
    FUN_00d8dbf0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d8f140();
    FUN_00d50b20();
    lVar1 = g_027c09c0;
  }
  FUN_00d8c7a0();
  FUN_00e7b4e0();
  FUN_00d8e3d0();
  local_c8 = &g_024c5048;
  local_110 = &g_024c5048;
  local_118 = puVar5;
  FUN_002bd7b0(&local_110,&local_118,3);
  FUN_00d8cb40();
  lVar1 = *param_2;
  if (lVar1 == local_48) {
    if (((char)param_2[1] != '\0') || (local_48 == 0)) goto LAB_0140870d;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_01408704;
    }
LAB_014086c2:
    *(void*)(param_2 + 1) = 1;
  }
  else {
    lVar2 = param_2[1];
    if (local_40 != '\0') {
      *param_2 = local_48;
      if (((char)lVar2 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014086c2;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *param_2 = local_48;
    if (((char)lVar2 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
LAB_01408704:
    *(void*)(param_2 + 1) = 1;
LAB_0140870d:
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  lVar1 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    *(void*)(param_2 + 1) = 0;
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0140880f:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

